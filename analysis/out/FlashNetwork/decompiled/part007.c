// ===== FUN_1801cdde0 @ 1801cdde0 (size 149)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801cdde0(longlong param_1,undefined4 param_2)

{
  __time64_t local_res8;
  
  _time64(&local_res8);
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 0x40) == 0)) {
    if (*(int *)(param_1 + 4) == 0x17) {
      FUN_1801bf1a0(param_1,local_res8,0,param_2);
      return;
    }
    if (*(int *)(param_1 + 4) == 0x18) {
      FUN_1801bf260(param_1,local_res8,0,param_2);
      return;
    }
  }
  FUN_18019c140(param_1,local_res8,0,param_2);
  return;
}



// ===== FUN_1801cde80 @ 1801cde80 (size 804)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801cde80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1801cde90;
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_1801a70c0(0xb,0x7f,0x69,"crypto\\x509\\x509_vfy.c",0x104,0x1801cde90);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1801a70c0(0xb,0x7f,0x42,"crypto\\x509\\x509_vfy.c",0x10e,0x1801cde90);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  iVar2 = FUN_1801a2c20();
  if (iVar2 == 0) {
    FUN_1801a70c0(0xb,0x7f,0x44,"crypto\\x509\\x509_vfy.c",0x114,uVar7);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0xffffffff;
  }
  lVar4 = FUN_1801957e0();
  *(longlong *)(param_1 + 0x98) = lVar4;
  if ((lVar4 == 0) || (iVar2 = FUN_180195990(lVar4,*(undefined8 *)(param_1 + 8)), iVar2 == 0)) {
    FUN_1801a2830(*(undefined8 *)(param_1 + 8));
    FUN_1801a70c0(0xb,0x7f,0x41,"crypto\\x509\\x509_vfy.c",0x120,uVar7);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x94) = 1;
  iVar2 = FUN_1801cf8a0(param_1,*(undefined8 *)(param_1 + 8));
  uVar6 = 0;
  if (iVar2 == 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar4 == 0) {
      lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(longlong *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0x42;
    uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  if ((lVar1 == 0) || (iVar2 = FUN_1801958b0(*(undefined8 *)(lVar1 + 8)), iVar2 < 1)) {
LAB_1801ce124:
    uVar3 = FUN_1801d16a0(param_1);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xe8);
    lVar4 = *(longlong *)(param_1 + 8);
    FUN_1801a2830(*(undefined8 *)(lVar1 + 0x20));
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x2c) = 0xffffffffffffffff;
    iVar2 = FUN_1801d0a30(param_1,*(undefined8 *)(param_1 + 8),0);
    if ((iVar2 == 0) && (((*(byte *)(lVar1 + 0x28) & 5) != 0 || (-1 < *(int *)(lVar1 + 0x2c)))))
    goto LAB_1801ce124;
    FUN_1801cdcc0(0,*(undefined8 *)(param_1 + 0x98));
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0xac) = 0;
        uVar6 = 0xffffffff;
        *(longlong *)(param_1 + 0xb8) = lVar4;
        *(undefined4 *)(param_1 + 0xb0) = 0x11;
        goto LAB_1801ce132;
      }
      iVar2 = FUN_1801cf910(param_1,lVar4);
      if (iVar2 == 0) goto LAB_1801ce132;
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar4 == 0) {
        lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x41;
      uVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    }
    else {
      iVar2 = FUN_1801cf910(param_1,lVar4);
      if ((iVar2 == 0) ||
         (((*(byte *)(lVar1 + 0x34) & 1) == 0 && (iVar2 = FUN_1801cf6b0(param_1), iVar2 == 0))))
      goto LAB_1801ce132;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(longlong *)(param_1 + 0xb8) = lVar4;
      uVar3 = (**(code **)(param_1 + 0x38))(1,param_1);
    }
  }
  uVar6 = (ulonglong)uVar3;
  if (0 < (int)uVar3) {
    return uVar6;
  }
LAB_1801ce132:
  if (*(int *)(param_1 + 0xb0) == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  return uVar6;
}



// ===== FUN_1801ce1b0 @ 1801ce1b0 (size 182)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801ce1b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    lVar2 = *param_2;
    if (lVar2 == 0) {
      lVar2 = FUN_180195540();
      *param_2 = lVar2;
      return lVar2 != 0;
    }
    iVar4 = 0;
    iVar1 = FUN_1801958b0();
    if (0 < iVar1) {
      do {
        uVar3 = FUN_180195ae0(param_1,iVar4);
        iVar1 = FUN_180195990(lVar2,uVar3);
        if (iVar1 == 0) {
          FUN_180195650(lVar2);
          *param_2 = 0;
          return false;
        }
        iVar4 = iVar4 + 1;
        iVar1 = FUN_1801958b0(param_1);
      } while (iVar4 < iVar1);
    }
  }
  return true;
}



// ===== FUN_1801ce270 @ 1801ce270 (size 2393)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ce270(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  byte bVar13;
  ulonglong uVar14;
  int iVar15;
  byte bVar16;
  bool bVar17;
  bool bVar18;
  uint local_res8;
  int local_res10;
  undefined4 uVar19;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  
  lVar2 = *(longlong *)(param_1 + 0xe8);
  iVar3 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
  lVar9 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar3 + -1);
  iVar4 = FUN_1801a5650(lVar9);
  if (iVar4 == 1) {
    uVar7 = *(uint *)(lVar9 + 0xd0) >> 0xd & 1;
  }
  else {
    uVar7 = 0;
  }
  iVar6 = 3;
  local_60 = 0;
  iVar4 = 0;
  local_res10 = 0;
  if ((iVar3 != 1) || (*(int *)(param_1 + 0x94) != 1)) {
    FUN_1801a70c0(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",0xb9d);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  bVar16 = *(longlong *)(param_1 + 0x10) != 0;
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x28) & 3) == 0)) {
    local_58 = 0;
    local_50 = 0;
    if ((*(uint *)(lVar2 + 0x28) & 0xc) != 0) goto LAB_1801ce36f;
  }
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14), (uVar1 >> 0xf & 1) != 0)) {
    bVar16 = bVar16 | 2;
    local_58 = 0;
  }
  else {
    local_58 = 0;
    if ((uVar1 >> 0x14 & 1) == 0) {
      local_58 = 1;
    }
  }
  local_50 = 1;
LAB_1801ce36f:
  if (((lVar2 == 0) || (iVar3 = FUN_1801958b0(*(undefined8 *)(lVar2 + 8)), iVar3 < 1)) ||
     (iVar3 = FUN_1801ce1b0(*(undefined8 *)(lVar2 + 0x10),&local_60), iVar3 != 0)) {
    iVar3 = FUN_1801ce1b0(*(undefined8 *)(param_1 + 0x10),&local_60);
    if (iVar3 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x20);
      if (0x3fffffff < *(int *)(lVar9 + 0x20)) {
        *(undefined4 *)(lVar9 + 0x20) = 0x3fffffff;
        lVar9 = *(longlong *)(param_1 + 0x20);
      }
      iVar15 = *(int *)(lVar9 + 0x20) + 1;
      local_res8 = uVar7;
      iVar3 = 3;
      if (bVar16 != 0) {
        do {
          iVar6 = iVar3;
          local_68 = 0;
          if ((bVar16 & 2) == 0) {
LAB_1801ce6a0:
            uVar10 = local_60;
            if ((bVar16 & 1) != 0) {
              iVar3 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
              if (iVar3 != *(int *)(param_1 + 0x94)) {
                uVar19 = 0xc93;
LAB_1801ce837:
                FUN_1801a70c0(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",uVar19);
LAB_1801ce850:
                *(undefined4 *)(param_1 + 0xb0) = 1;
                goto LAB_1801ce85a;
              }
              uVar11 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar3 + -1);
              if ((uVar7 == 0) && (iVar3 <= iVar15)) {
                local_68 = FUN_1801d0d60(param_1,uVar10,uVar11);
              }
              else {
                local_68 = 0;
              }
              if (local_68 == 0) {
                bVar13 = bVar16 & 0xfe;
                bVar16 = bVar13 | 2;
                if (local_50 == 0) {
                  bVar16 = bVar13;
                }
              }
              else {
                FUN_1801954b0(uVar10,local_68);
                iVar3 = FUN_1801a2c20(local_68);
                if (iVar3 == 0) {
                  uVar19 = 0xcab;
                  goto LAB_1801ce837;
                }
                iVar3 = FUN_180195990(*(undefined8 *)(param_1 + 0x98),local_68);
                if (iVar3 == 0) {
                  FUN_1801a2830(local_68);
                  uVar19 = 0xcb4;
LAB_1801ce7dc:
                  FUN_1801a70c0(0xb,0x6a,0x41,"crypto\\x509\\x509_vfy.c",uVar19);
                  *(undefined4 *)(param_1 + 0xb0) = 0x11;
                  goto LAB_1801ce85a;
                }
                *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
                uVar7 = FUN_1801cec90();
                iVar6 = FUN_1801cf620(param_1,*(int *)(param_1 + 0x94) + -1);
                local_res8 = uVar7;
                if (iVar6 - 1U < 2) break;
              }
LAB_1801ce77a:
              iVar4 = local_res10;
            }
          }
          else {
            iVar5 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
            iVar3 = iVar5;
            if ((bVar16 & 4) != 0) {
              iVar3 = iVar4;
            }
            uVar10 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar3 + -1);
            if (iVar5 <= iVar15) {
              uVar11 = *(undefined8 *)(param_1 + 0x98);
              *(undefined8 *)(param_1 + 0x98) = 0;
              iVar4 = (**(code **)(param_1 + 0x40))(&local_68,param_1,uVar10);
              *(undefined8 *)(param_1 + 0x98) = uVar11;
              if (iVar4 < 0) {
                *(undefined4 *)(param_1 + 0xb0) = 0x46;
LAB_1801ce85a:
                iVar6 = 2;
              }
              else {
                if (iVar4 < 1) {
LAB_1801ce633:
                  iVar4 = local_res10;
                  goto LAB_1801ce63a;
                }
                if ((bVar16 & 4) != 0) {
                  if (((iVar3 < iVar5) && (0 < iVar3)) && (local_res8 == 0)) {
                    bVar16 = bVar16 & 0xfb;
                    uVar14 = (ulonglong)(uint)(iVar5 - iVar3);
                    iVar5 = iVar5 - (iVar5 - iVar3);
                    do {
                      uVar10 = FUN_1801958c0(*(undefined8 *)(param_1 + 0x98));
                      FUN_1801a2830(uVar10);
                      uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                    *(int *)(param_1 + 0x94) = iVar5;
                    if (lVar2 != 0) {
                      iVar3 = FUN_1801958b0(*(undefined8 *)(lVar2 + 8));
                      if ((0 < iVar3) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar2 + 0x2c))) {
                        *(undefined4 *)(lVar2 + 0x2c) = 0xffffffff;
                        FUN_1801a2830(*(undefined8 *)(lVar2 + 0x20));
                        *(undefined8 *)(lVar2 + 0x20) = 0;
                      }
                      iVar3 = FUN_1801958b0(*(undefined8 *)(lVar2 + 8));
                      if ((0 < iVar3) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar2 + 0x30))) {
                        *(undefined4 *)(lVar2 + 0x30) = 0xffffffff;
                      }
                    }
                    goto LAB_1801ce576;
                  }
                  FUN_1801a70c0(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",0xc20);
                  FUN_1801a2830(local_68);
                  goto LAB_1801ce850;
                }
                if (local_res8 == 0) {
LAB_1801ce576:
                  lVar9 = local_68;
                  iVar3 = FUN_180195990(*(undefined8 *)(param_1 + 0x98),local_68);
                  if (iVar3 != 0) {
                    local_res8 = FUN_1801cec90(lVar9);
LAB_1801ce5ee:
                    iVar3 = *(int *)(param_1 + 0x94);
                    bVar18 = SBORROW4(iVar3,iVar5);
                    iVar4 = iVar3 - iVar5;
                    bVar17 = iVar3 == iVar5;
                    goto LAB_1801ce5f4;
                  }
                  FUN_1801a2830(local_68);
                  uVar19 = 0xc3e;
                  goto LAB_1801ce7dc;
                }
                iVar3 = *(int *)(param_1 + 0x94);
                bVar18 = SBORROW4(iVar3,iVar5);
                iVar4 = iVar3 - iVar5;
                bVar17 = false;
                if (iVar3 == iVar5) {
                  iVar3 = FUN_1801a32c0(uVar10,local_68);
                  if (iVar3 != 0) {
                    FUN_1801a2830(local_68);
                    goto LAB_1801ce633;
                  }
                  FUN_1801a2830(uVar10);
                  iVar5 = iVar5 + -1;
                  *(int *)(param_1 + 0x94) = iVar5;
                  FUN_180195a00(*(undefined8 *)(param_1 + 0x98),iVar5,local_68);
                  goto LAB_1801ce5ee;
                }
LAB_1801ce5f4:
                if (!bVar17 && bVar18 == iVar4 < 0) {
                  uVar19 = 0xc66;
                  goto LAB_1801ce837;
                }
                bVar16 = bVar16 & 0xfe;
                iVar6 = FUN_1801d02c0(param_1,iVar5);
                if (1 < iVar6 - 1U) {
                  uVar7 = local_res8;
                  if (local_res8 != 0) goto LAB_1801ce633;
                  goto LAB_1801ce77a;
                }
              }
              break;
            }
LAB_1801ce63a:
            uVar7 = local_res8;
            if ((bVar16 & 1) != 0) goto LAB_1801ce6a0;
            if ((bVar16 & 4) == 0) {
LAB_1801ce658:
              if ((local_58 != 0) && ((bVar16 & 4) == 0)) {
                if (1 < *(int *)(param_1 + 0x94)) {
                  bVar16 = bVar16 | 4;
                  iVar4 = *(int *)(param_1 + 0x94) + -1;
                  local_res8 = 0;
                  uVar7 = local_res8;
                  local_res10 = iVar4;
                  goto LAB_1801ce6a0;
                }
              }
              break;
            }
            local_res10 = iVar4 + -1;
            iVar4 = local_res10;
            if (local_res10 < 1) goto LAB_1801ce658;
          }
          iVar3 = iVar6;
        } while (bVar16 != 0);
      }
      FUN_180195650(local_60);
      iVar3 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
      if ((iVar3 <= iVar15) && (iVar6 == 3)) {
        if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x28) & 4) != 0)) {
          iVar4 = *(int *)(param_1 + 0x94) + -1;
          lVar9 = *(longlong *)(param_1 + 0xe8);
          uVar10 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar4);
          iVar6 = FUN_1801958b0(*(undefined8 *)(lVar9 + 8));
          iVar5 = 0;
          if (0 < iVar6) {
            do {
              pcVar12 = (char *)FUN_180195ae0(*(undefined8 *)(lVar9 + 8),iVar5);
              if ((((*pcVar12 == '\x02') && (pcVar12[1] == '\x01')) && (pcVar12[2] == '\0')) &&
                 (iVar8 = FUN_1801a1c50(uVar10,*(undefined8 *)(pcVar12 + 0x18)), 0 < iVar8)) {
                FUN_1801a2830(*(undefined8 *)(lVar9 + 0x20));
                *(undefined8 *)(lVar9 + 0x20) = 0;
                *(undefined4 *)(param_1 + 0xf0) = 1;
                *(int *)(lVar9 + 0x2c) = iVar4;
                *(char **)(lVar9 + 0x18) = pcVar12;
                iVar3 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
                if (*(int *)(param_1 + 0x94) < iVar3) {
                  do {
                    uVar10 = FUN_1801958c0(*(undefined8 *)(param_1 + 0x98));
                    FUN_1801a2830(uVar10);
                    iVar3 = iVar3 + -1;
                  } while (*(int *)(param_1 + 0x94) < iVar3);
                }
                iVar6 = 1;
                goto LAB_1801ce937;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar6);
          }
          iVar6 = 3;
        }
        if (iVar3 == *(int *)(param_1 + 0x94)) {
          iVar6 = FUN_1801d02c0(param_1,iVar3);
        }
      }
LAB_1801ce937:
      if (iVar6 == 1) {
        return 1;
      }
      if (iVar6 == 2) {
        return 0;
      }
      iVar3 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
      if (iVar15 < iVar3) {
        *(int *)(param_1 + 0xac) = iVar3 + -1;
        uVar10 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar10;
        *(undefined4 *)(param_1 + 0xb0) = 0x16;
                    /* WARNING: Could not recover jumptable at 0x0001801ce9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar10;
      }
      if (((lVar2 != 0) && (iVar4 = FUN_1801958b0(*(undefined8 *)(lVar2 + 8)), 0 < iVar4)) &&
         (((*(byte *)(lVar2 + 0x28) & 3) == 0 || (-1 < *(int *)(lVar2 + 0x30))))) {
        *(int *)(param_1 + 0xac) = iVar3 + -1;
        uVar10 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar10;
        *(undefined4 *)(param_1 + 0xb0) = 0x41;
                    /* WARNING: Could not recover jumptable at 0x0001801cea75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar10;
      }
      if ((local_res8 != 0) && (iVar4 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98)), iVar4 == 1))
      {
        *(int *)(param_1 + 0xac) = iVar3 + -1;
        uVar10 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar10;
        *(undefined4 *)(param_1 + 0xb0) = 0x12;
                    /* WARNING: Could not recover jumptable at 0x0001801cead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar10;
      }
      *(int *)(param_1 + 0xac) = iVar3 + -1;
      if (local_res8 != 0) {
        uVar10 = FUN_180195ae0();
        *(undefined8 *)(param_1 + 0xb8) = uVar10;
        *(undefined4 *)(param_1 + 0xb0) = 0x13;
                    /* WARNING: Could not recover jumptable at 0x0001801ceb13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar10;
      }
      if (*(int *)(param_1 + 0x94) < iVar3) {
        uVar10 = FUN_180195ae0();
        *(undefined8 *)(param_1 + 0xb8) = uVar10;
        *(undefined4 *)(param_1 + 0xb0) = 2;
                    /* WARNING: Could not recover jumptable at 0x0001801ceb4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar10;
      }
      uVar10 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98));
      *(undefined8 *)(param_1 + 0xb8) = uVar10;
      *(undefined4 *)(param_1 + 0xb0) = 0x14;
                    /* WARNING: Could not recover jumptable at 0x0001801ceb79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar10;
    }
    uVar19 = 0xbcb;
  }
  else {
    uVar19 = 0xbc0;
  }
  FUN_1801a70c0(0xb,0x6a,0x41,"crypto\\x509\\x509_vfy.c",uVar19);
  *(undefined4 *)(param_1 + 0xb0) = 0x11;
  return 0;
}



// ===== FUN_1801cebd0 @ 1801cebd0 (size 187)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cebd0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong local_res8;
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x10) == 0) &&
     ((*(uint *)(param_2 + 0x7c) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x24;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_1801cd310(param_2,&local_res8,param_3);
  if (iVar1 != 0) {
    if (*(int *)(local_res8 + 0x30) == 8) {
      return 2;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x17;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// ===== FUN_1801cecd0 @ 1801cecd0 (size 410)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cecd0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int local_res8 [2];
  undefined8 uVar7;
  
  uVar7 = 0x1801cecf2;
  iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
  if ((0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x24)) && (iVar6 = 0, 0 < iVar1)) {
    do {
      lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar6);
      if (0 < iVar6) {
        lVar5 = FUN_1801a3460(lVar4);
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
        if (0 < iVar3) {
          if (lVar5 != 0) {
            if (5 < iVar3) {
              iVar3 = 5;
            }
            iVar2 = FUN_18019e520(lVar5);
            if (*(int *)(&DAT_18032d804 + (longlong)iVar3 * 4) <= iVar2) goto LAB_1801cedb5;
          }
          *(int *)(param_1 + 0xac) = iVar6;
          if (lVar4 == 0) {
            lVar5 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar6);
          }
          else {
            lVar5 = lVar4;
          }
          *(longlong *)(param_1 + 0xb8) = lVar5;
          *(undefined4 *)(param_1 + 0xb0) = 0x43;
          iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
LAB_1801cedb5:
      if (iVar6 < iVar1 + -1) {
        local_res8[0] = -1;
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
        if (0 < iVar3) {
          if (5 < iVar3) {
            iVar3 = 5;
          }
          iVar2 = FUN_1801a2b40(lVar4,0,0,local_res8,0,uVar7);
          if ((iVar2 == 0) || (local_res8[0] < *(int *)(&DAT_18032d804 + (longlong)iVar3 * 4))) {
            *(int *)(param_1 + 0xac) = iVar6;
            if (lVar4 == 0) {
              lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar6);
            }
            *(longlong *)(param_1 + 0xb8) = lVar4;
            *(undefined4 *)(param_1 + 0xb0) = 0x44;
            iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar3 == 0) {
              return 0;
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return 1;
}



// ===== FUN_1801cee70 @ 1801cee70 (size 968)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cee70(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_res8;
  
  local_res8 = 0;
  iVar5 = 0;
  iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
  iVar4 = -1;
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) >> 6 & 1;
  }
  else {
    uVar10 = 0;
    iVar11 = 6;
  }
  iVar9 = 0;
  if (0 < iVar1) {
    do {
      lVar6 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar9);
      if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x10) == 0) &&
         ((*(uint *)(lVar6 + 0xd0) & 0x200) != 0)) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x22;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((uVar10 == 0) && ((*(uint *)(lVar6 + 0xd0) & 0x400) != 0)) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x28;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_1801a5490(lVar6);
      if (iVar4 == -1) {
        if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) == 0) || (uVar3 < 2))
        goto LAB_1801cefa7;
LAB_1801cf041:
        *(undefined4 *)(param_1 + 0xb0) = 0x18;
LAB_1801cf08e:
        *(int *)(param_1 + 0xac) = iVar9;
        if (lVar6 == 0) {
          lVar7 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar9);
        }
        else {
          lVar7 = lVar6;
        }
        *(longlong *)(param_1 + 0xb8) = lVar7;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      else {
        if (iVar4 == 0) {
          if (uVar3 != 0) {
            *(undefined4 *)(param_1 + 0xb0) = 0x25;
            goto LAB_1801cf08e;
          }
        }
        else if ((uVar3 == 0) ||
                (((iVar9 + 1 < iVar1 ||
                  ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0)) && (uVar3 != 1)))
                ) goto LAB_1801cf041;
LAB_1801cefa7:
        uVar3 = 1;
        if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0) && (1 < iVar1)) {
          lVar7 = FUN_1801a3460(lVar6);
          if (lVar7 != 0) {
            iVar2 = FUN_18019a410(lVar7);
            if (iVar2 != 0x198) {
              uVar3 = 1;
              goto LAB_1801cf04f;
            }
            uVar8 = FUN_18019e010(lVar7);
            uVar3 = FUN_1801c51f0(uVar8);
            if (-1 < (int)uVar3) {
              uVar3 = (uint)(uVar3 == 0);
            }
            if ((int)uVar3 < 0) goto LAB_1801cf07e;
            if (uVar3 == 0) {
              *(undefined4 *)(param_1 + 0xb0) = 0x4f;
              goto LAB_1801cf08e;
            }
            if (0 < (int)uVar3) goto LAB_1801cf04f;
            goto LAB_1801cf08a;
          }
LAB_1801cf07e:
          *(undefined4 *)(param_1 + 0xb0) = 1;
          goto LAB_1801cf08e;
        }
LAB_1801cf04f:
        if ((((*(byte *)(lVar6 + 0xd0) & 0x10) == 0) && (*(int *)(lVar6 + 200) != -1)) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0)) {
          *(undefined4 *)(param_1 + 0xb0) = 0x29;
          goto LAB_1801cf08e;
        }
LAB_1801cf08a:
        if (uVar3 == 0) goto LAB_1801cf08e;
      }
      if (0 < iVar11) {
        iVar2 = 3;
        if ((*(int *)(param_1 + 0x94) <= iVar9) &&
           (iVar11 == *(int *)(*(longlong *)(param_1 + 0x20) + 0x18))) {
          iVar2 = FUN_1801e8bd0(lVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),4);
        }
        if ((iVar2 != 1) &&
           (((iVar2 == 2 || (iVar4 = FUN_1801a5650(lVar6,iVar11,0 < iVar4), iVar4 == 0)) ||
            ((iVar4 != 1 && ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0)))))) {
          *(int *)(param_1 + 0xac) = iVar9;
          if (lVar6 == 0) {
            lVar7 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar9);
          }
          else {
            lVar7 = lVar6;
          }
          *(longlong *)(param_1 + 0xb8) = lVar7;
          *(undefined4 *)(param_1 + 0xb0) = 0x1a;
          iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar4 == 0) {
            return 0;
          }
        }
      }
      if (((1 < iVar9) && (*(int *)(lVar6 + 200) != -1)) &&
         (*(int *)(lVar6 + 200) + iVar5 < local_res8)) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x19;
        iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar4 == 0) {
          return 0;
        }
      }
      if ((0 < iVar9) && ((*(byte *)(lVar6 + 0xd0) & 0x20) == 0)) {
        local_res8 = local_res8 + 1;
      }
      if ((*(uint *)(lVar6 + 0xd0) & 0x400) == 0) {
        iVar4 = 1;
      }
      else {
        if (*(int *)(lVar6 + 0xcc) != -1) {
          if (*(int *)(lVar6 + 0xcc) < iVar5) {
            *(int *)(param_1 + 0xac) = iVar9;
            *(longlong *)(param_1 + 0xb8) = lVar6;
            *(undefined4 *)(param_1 + 0xb0) = 0x26;
            iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar5 == 0) {
              return 0;
            }
          }
          iVar5 = *(int *)(lVar6 + 0xcc);
        }
        iVar5 = iVar5 + 1;
        iVar4 = 0;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  return 1;
}



// ===== FUN_1801cf240 @ 1801cf240 (size 705)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cf240(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = *(int *)(param_1 + 0xac);
  iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 == 0) {
    if (iVar3 < iVar2 + -1) {
      lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar3 + 1);
    }
    else {
      lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar2 + -1);
      iVar3 = (**(code **)(param_1 + 0x48))(param_1,lVar4,lVar4);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0x21;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
    if (lVar4 == 0) {
      return 1;
    }
  }
  if (*(longlong *)(param_2 + 0xa0) == 0) {
    if (((*(byte *)(lVar4 + 0xd0) & 2) != 0) && ((*(byte *)(lVar4 + 0xd4) & 2) == 0)) {
      *(undefined4 *)(param_1 + 0xb0) = 0x23;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if ((*(byte *)(param_1 + 0xd0) & 0x80) == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x2c;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (((*(byte *)(param_1 + 0xd0) & 8) == 0) &&
       (iVar3 = FUN_1801cf510(param_1,*(undefined8 *)(param_1 + 0xc0)), iVar3 < 1)) {
      *(undefined4 *)(param_1 + 0xb0) = 0x36;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if ((*(byte *)(param_2 + 0x90) & 2) != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  if ((*(byte *)(param_1 + 0xd0) & 0x40) == 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
    if ((uVar1 & 2) == 0) {
      if ((uVar1 >> 0x15 & 1) != 0) goto LAB_1801cf479;
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x20) + 8;
    }
    *(longlong *)(param_1 + 200) = param_2;
    uVar5 = FUN_1801afd00(param_2);
    iVar3 = FUN_1801cdbb0(uVar5,lVar7);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0xf;
      uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
    }
    else if (0 < iVar3) {
      *(undefined4 *)(param_1 + 0xb0) = 0xb;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    lVar6 = FUN_18019df70(param_2);
    if (lVar6 != 0) {
      uVar5 = FUN_18019df70(param_2);
      iVar3 = FUN_1801cdbb0(uVar5,lVar7);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0x10;
        uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
      else if ((iVar3 < 0) && ((*(byte *)(param_1 + 0xd0) & 2) == 0)) {
        *(undefined4 *)(param_1 + 0xb0) = 0xc;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
LAB_1801cf479:
  lVar4 = FUN_1801a3460(lVar4);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 6;
  }
  else {
    iVar3 = FUN_1801a2d40(param_2,lVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14));
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xb0) = iVar3;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar3 = FUN_1801cd3a0(param_2,lVar4);
    if (0 < iVar3) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0xb0) = 8;
  }
  iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
  if (iVar3 == 0) {
    return 0;
  }
  return 1;
}



// ===== FUN_1801cf510 @ 1801cf510 (size 265)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801cf510(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_108 [24];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_70;
  undefined8 *local_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801cf51c;
  if (param_1[0x1b] != 0) {
    return 0;
  }
  iVar1 = FUN_1801cd710(local_108,*param_1,param_2,param_1[2]);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  local_f0 = param_1[3];
  uVar3 = param_1[4];
  FUN_1801cc640(local_e8);
  local_d0 = param_1[7];
  local_e8 = uVar3;
  local_30 = param_1;
  uVar2 = FUN_1801cde80(local_108);
  if (0 < (int)uVar2) {
    uVar3 = param_1[0x13];
    iVar1 = FUN_1801958b0(uVar3);
    uVar3 = FUN_180195ae0(uVar3,iVar1 + -1);
    iVar1 = FUN_1801958b0(local_70);
    uVar4 = FUN_180195ae0(local_70,iVar1 + -1);
    iVar1 = FUN_1801a32c0(uVar3,uVar4);
    uVar2 = (uint)(iVar1 == 0);
  }
  FUN_1801cd5e0(local_108);
  return uVar2;
}



// ===== FUN_1801cf620 @ 1801cf620 (size 140)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cf620(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 0xe8) != 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 0x28) & 5) != 0)) && (param_2 != 0)) {
    lVar2 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98));
    if (lVar2 != 0) {
      iVar1 = FUN_1801d0a30(param_1,lVar2,param_2);
      if (iVar1 < 0) {
        return 2;
      }
      if (0 < iVar1) {
        *(int *)(param_1 + 0x94) = param_2 + -1;
        return 1;
      }
    }
  }
  return 3;
}



// ===== FUN_1801cf6b0 @ 1801cf6b0 (size 439)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cf6b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 8);
  if (*(longlong *)(lVar5 + 0x30) == 0) {
LAB_1801cf791:
    if ((*(longlong *)(lVar5 + 0x48) != 0) &&
       (iVar1 = FUN_1801e2710(uVar6,*(longlong *)(lVar5 + 0x48),*(undefined8 *)(lVar5 + 0x50),0),
       iVar1 < 1)) {
      lVar4 = *(longlong *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar4 == 0) {
        lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x3f;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) goto LAB_1801cf83f;
    }
    if ((*(longlong *)(lVar5 + 0x58) != 0) &&
       (iVar1 = FUN_1801e28b0(uVar6,*(longlong *)(lVar5 + 0x58),*(undefined8 *)(lVar5 + 0x60),0),
       iVar1 < 1)) {
      lVar5 = *(longlong *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar5 == 0) {
        lVar5 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(longlong *)(param_1 + 0xb8) = lVar5;
      *(undefined4 *)(param_1 + 0xb0) = 0x40;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) goto LAB_1801cf83f;
    }
    uVar6 = 1;
  }
  else {
    iVar1 = FUN_1801958b0();
    if (*(longlong *)(lVar5 + 0x40) != 0) {
      FUN_180195e10(*(longlong *)(lVar5 + 0x40),"crypto\\x509\\x509_vfy.c",0x2eb);
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    iVar7 = 0;
    if (0 < iVar1) {
      do {
        uVar3 = FUN_180195ae0(*(undefined8 *)(lVar5 + 0x30),iVar7);
        iVar2 = FUN_1801e27e0(uVar6,uVar3,0,*(undefined4 *)(lVar5 + 0x38),
                              (undefined8 *)(lVar5 + 0x40));
        if (0 < iVar2) goto LAB_1801cf791;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
    if (iVar1 == 0) goto LAB_1801cf791;
    lVar4 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar4 == 0) {
      lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(longlong *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0x3e;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 != 0) goto LAB_1801cf791;
LAB_1801cf83f:
    uVar6 = 0;
  }
  return uVar6;
}



// ===== FUN_1801cf8a0 @ 1801cf8a0 (size 105)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801cf8a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = FUN_1801a3460(param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
  if (iVar3 < 1) {
    return true;
  }
  if (lVar2 == 0) {
    return false;
  }
  if (5 < iVar3) {
    iVar3 = 5;
  }
  iVar1 = FUN_18019e520(lVar2);
  return *(int *)(&DAT_18032d804 + (longlong)iVar3 * 4) <= iVar1;
}



// ===== FUN_1801cf910 @ 1801cf910 (size 145)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cf910(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1801a2f10(0,param_2,0,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14));
  if (iVar1 == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (param_2 == 0) {
    param_2 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),0);
  }
  *(longlong *)(param_1 + 0xb8) = param_2;
  *(int *)(param_1 + 0xb0) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x0001801cf99e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  return uVar2;
}



// ===== FUN_1801cf9b0 @ 1801cf9b0 (size 753)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cf9b0(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  
  iVar3 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
  do {
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return 1;
      }
      lVar8 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar3);
    } while ((iVar3 != 0) && ((*(byte *)(lVar8 + 0xd0) & 0x20) != 0));
    if ((*(uint *)(lVar8 + 0xd0) & 0x400) != 0) {
      uVar9 = FUN_1801a34d0(lVar8);
      uVar10 = FUN_1801a3490(lVar8);
      iVar7 = 0;
      iVar4 = FUN_1801a3ac0(uVar9);
      iVar15 = iVar4 + -1;
      if (iVar15 < 1) {
        iVar7 = 0x48;
      }
      else {
        iVar5 = FUN_1801a3ac0(uVar10);
        iVar6 = FUN_1801a3ac0(uVar9);
        if (iVar6 == iVar5 + 1) {
          uVar11 = FUN_1801a3af0(uVar9,iVar4 + -2);
          iVar4 = FUN_1801a37a0(uVar11);
          uVar11 = FUN_1801a3af0(uVar9,iVar15);
          iVar5 = FUN_1801a37a0(uVar11);
          if (iVar5 == iVar4) {
            iVar7 = 0x48;
          }
          else {
            lVar12 = FUN_1801be670(uVar9);
            if (lVar12 == 0) {
              FUN_1801a70c0(0xb,0x95,0x41,"crypto\\x509\\x509_vfy.c",0x2a2);
              *(undefined4 *)(param_1 + 0xb0) = 0x11;
              return 0;
            }
            uVar9 = FUN_1801a39e0(lVar12,iVar15);
            uVar11 = FUN_1801a3790(uVar9);
            iVar4 = FUN_1801b96c0(uVar11);
            if ((iVar4 != 0xd) || (iVar4 = FUN_1801a2de0(lVar12,uVar10), iVar4 != 0)) {
              iVar7 = 0x48;
            }
            FUN_1801be630(uVar9);
            FUN_1801be690(lVar12);
            if (iVar7 == 0) goto LAB_1801cfb31;
          }
        }
        else {
          iVar7 = 0x48;
        }
      }
      *(int *)(param_1 + 0xac) = iVar3;
      *(longlong *)(param_1 + 0xb8) = lVar8;
      *(int *)(param_1 + 0xb0) = iVar7;
      iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar4 == 0) {
        return 0;
      }
    }
LAB_1801cfb31:
    iVar4 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
joined_r0x0001801cfb43:
    iVar4 = iVar4 + -1;
    if (iVar3 < iVar4) {
      lVar12 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar4);
      lVar12 = *(longlong *)(lVar12 + 0x108);
      if (lVar12 != 0) {
        iVar7 = FUN_1801d6ff0(lVar8,lVar12);
        if (iVar7 == 0) {
          if ((iVar3 != 0) ||
             (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x38), (uVar1 & 0x20) != 0))
          goto joined_r0x0001801cfb43;
          if ((uVar1 & 1) == 0) {
            bVar2 = false;
            lVar13 = FUN_1801a3d30(lVar8,0x55,0,0);
            if (lVar13 != 0) {
              iVar15 = 0;
              iVar7 = FUN_1801958b0(lVar13);
              if (0 < iVar7) {
                do {
                  piVar14 = (int *)FUN_180195ae0(lVar13,iVar15);
                  if (*piVar14 == 2) {
                    bVar2 = true;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                  iVar7 = FUN_1801958b0(lVar13);
                } while (iVar15 < iVar7);
              }
              FUN_1801a48f0(lVar13);
              if (bVar2) goto joined_r0x0001801cfb43;
            }
          }
          iVar7 = FUN_1801d71b0(lVar8,lVar12);
          if (iVar7 == 0) goto joined_r0x0001801cfb43;
        }
        if (iVar7 == 0x11) {
          return 0;
        }
        *(int *)(param_1 + 0xac) = iVar3;
        *(longlong *)(param_1 + 0xb8) = lVar8;
        *(int *)(param_1 + 0xb0) = iVar7;
        iVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar7 == 0) {
          return 0;
        }
      }
      goto joined_r0x0001801cfb43;
    }
  } while( true );
}



// ===== FUN_1801cfcb0 @ 1801cfcb0 (size 515)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cfcb0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801cfcc5;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xf0) == 0) ||
     (iVar2 = FUN_180195990(*(undefined8 *)(param_1 + 0x98),0), iVar2 != 0)) {
    iVar2 = FUN_180208630(param_1 + 0xa0,param_1 + 0xa8,*(undefined8 *)(param_1 + 0x98),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14),uVar6);
    if (*(int *)(param_1 + 0xf0) != 0) {
      FUN_1801958c0(*(undefined8 *)(param_1 + 0x98));
    }
    if (iVar2 != 0) {
      if (iVar2 == -1) {
        bVar1 = false;
        iVar4 = 0;
        iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
        if (0 < iVar2) {
          do {
            lVar3 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar4);
            if ((*(uint *)(lVar3 + 0xd0) & 0x800) != 0) {
              *(int *)(param_1 + 0xac) = iVar4;
              *(longlong *)(param_1 + 0xb8) = lVar3;
              bVar1 = true;
              *(undefined4 *)(param_1 + 0xb0) = 0x2a;
              iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar2 == 0) {
                return 0;
              }
            }
            iVar4 = iVar4 + 1;
            iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
          } while (iVar4 < iVar2);
          if (bVar1) {
            return 1;
          }
        }
        uVar5 = 0x683;
      }
      else {
        if (iVar2 == -2) {
          *(undefined4 *)(param_1 + 0xb0) = 0x2b;
          *(undefined8 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001801cfe65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
          return uVar6;
        }
        if (iVar2 == 1) {
          if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x800) == 0) {
            return 1;
          }
          *(undefined8 *)(param_1 + 0xb8) = 0;
          iVar2 = (**(code **)(param_1 + 0x38))(2,param_1);
          if (iVar2 == 0) {
            return 0;
          }
          return 1;
        }
        uVar5 = 0x68f;
      }
      FUN_1801a70c0(0xb,0x91,0x44,"crypto\\x509\\x509_vfy.c",uVar5);
      return 0;
    }
    uVar5 = 0x66e;
  }
  else {
    uVar5 = 0x664;
  }
  FUN_1801a70c0(0xb,0x91,0x41,"crypto\\x509\\x509_vfy.c",uVar5);
  *(undefined4 *)(param_1 + 0xb0) = 0x11;
  return 0;
}



// ===== FUN_1801cfec0 @ 1801cfec0 (size 1010)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cfec0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  ulonglong local_b8;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  int local_98;
  int local_94;
  ulonglong local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x1801cfedc;
  uVar10 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar10 & 4) != 0) {
    if ((uVar10 & 8) == 0) {
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        return 1;
      }
      local_a4 = 0;
    }
    else {
      local_a4 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
      local_a4 = local_a4 + -1;
    }
    local_a8 = 0;
    if (-1 < local_a4) {
      do {
        *(int *)(param_1 + 0xac) = local_a8;
        local_b8 = 0;
        lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),local_a8);
        *(longlong *)(param_1 + 0xb8) = lVar4;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        local_50 = lVar4;
        if ((*(uint *)(lVar4 + 0xd0) & 0x400) == 0) {
          local_ac = 0;
          while( true ) {
            iVar2 = local_ac;
            uVar11 = 0;
            if (*(code **)(param_1 + 0x58) != (code *)0x0) break;
            local_88 = 0;
            local_res8[0] = 0;
            local_60 = 0;
            local_90 = 0;
            local_80 = 0;
            local_58 = FUN_1801a3490(lVar4);
            uVar6 = *(undefined8 *)(param_1 + 0x18);
            uVar8 = *(undefined4 *)(param_1 + 0xd4);
            local_68 = *(undefined8 *)(param_1 + 0xb8);
            local_res20 = 0;
            local_78 = 0;
            local_70 = 0;
            local_res10[0] = uVar8;
            local_b0 = uVar8;
            local_a0 = uVar6;
            iVar2 = FUN_1801958b0(uVar6);
            if (iVar2 < 1) {
LAB_1801d0117:
              lVar4 = (**(code **)(param_1 + 0x80))(param_1,local_58);
              if ((lVar4 != 0) || (uVar11 == 0)) {
                FUN_1801d1030(param_1,&local_90,&local_80,&local_88,local_res8,local_res10,lVar4);
                FUN_1801958f0(lVar4,FUN_1801cd2f0);
                uVar11 = local_90;
                uVar8 = local_res10[0];
                goto LAB_1801d0172;
              }
            }
            else {
              iVar2 = 0;
              uVar9 = uVar11;
              do {
                uVar5 = FUN_180195ae0(uVar6,uVar11);
                local_res18[0] = uVar8;
                iVar1 = FUN_1801d0e90(param_1,&local_78,local_res18,uVar5,local_68);
                if ((iVar2 <= iVar1) && (iVar1 != 0)) {
                  if ((iVar1 == iVar2) && (uVar9 != 0)) {
                    uVar6 = FUN_1801afd00(uVar5);
                    uVar7 = FUN_1801afd00(uVar9);
                    iVar3 = FUN_18019c230(&local_98,&local_94,uVar7,uVar6);
                    uVar6 = local_a0;
                    if ((iVar3 == 0) || ((local_98 < 1 && (local_94 < 1)))) goto LAB_1801d00a0;
                  }
                  local_70 = local_78;
                  local_res20 = local_res18[0];
                  uVar9 = uVar5;
                  iVar2 = iVar1;
                }
LAB_1801d00a0:
                uVar10 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar10;
                iVar1 = FUN_1801958b0(uVar6);
                uVar8 = local_b0;
              } while ((int)uVar10 < iVar1);
              if (uVar9 == 0) {
                uVar11 = local_60;
              }
              else {
                FUN_1801cd2f0(0);
                uVar8 = local_res20;
                local_88 = local_70;
                local_res10[0] = local_res20;
                local_res8[0] = iVar2;
                local_90 = uVar9;
                FUN_1801cd5c0(uVar9);
                FUN_1801cd2f0(0);
                FUN_1801d1210(param_1,&local_80,local_res8,uVar9,uVar6);
                uVar11 = uVar9;
              }
              if (iVar2 < 0x1c0) goto LAB_1801d0117;
LAB_1801d0172:
              if (uVar11 == 0) goto LAB_1801d0251;
            }
            *(undefined8 *)(param_1 + 0xc0) = local_88;
            *(undefined4 *)(param_1 + 0xd4) = uVar8;
            *(int *)(param_1 + 0xd0) = local_res8[0];
            uVar9 = local_80;
            lVar4 = local_50;
            iVar2 = local_ac;
            local_b8 = uVar11;
LAB_1801d01a8:
            *(ulonglong *)(param_1 + 200) = local_b8;
            iVar3 = (**(code **)(param_1 + 0x60))(param_1,local_b8);
            iVar1 = 0;
            if (iVar3 == 0) goto LAB_1801d0268;
            if (uVar9 == 0) {
LAB_1801d01f1:
              iVar1 = (**(code **)(param_1 + 0x68))(param_1,local_b8,lVar4);
              if (iVar1 == 0) goto LAB_1801d0268;
            }
            else {
              iVar3 = (**(code **)(param_1 + 0x60))(param_1,uVar9);
              iVar1 = 0;
              if ((iVar3 == 0) ||
                 (iVar1 = (**(code **)(param_1 + 0x68))(param_1,uVar9,lVar4), iVar1 == 0))
              goto LAB_1801d0268;
              if (iVar1 != 2) goto LAB_1801d01f1;
            }
            FUN_1801cd2f0(local_b8);
            FUN_1801cd2f0(uVar9);
            iVar3 = *(int *)(param_1 + 0xd4);
            local_b8 = 0;
            if (iVar2 == iVar3) {
              *(undefined4 *)(param_1 + 0xb0) = 3;
              iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
              goto LAB_1801d0266;
            }
            uVar9 = 0;
            local_ac = iVar3;
            if (iVar3 == 0x807f) goto LAB_1801d0268;
          }
          iVar1 = (**(code **)(param_1 + 0x58))(param_1,&local_b8,lVar4);
          if (iVar1 != 0) {
            uVar9 = uVar11;
            goto LAB_1801d01a8;
          }
LAB_1801d0251:
          *(undefined4 *)(param_1 + 0xb0) = 3;
          iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
LAB_1801d0266:
          uVar9 = 0;
LAB_1801d0268:
          FUN_1801cd2f0(local_b8);
          FUN_1801cd2f0(uVar9);
          *(undefined8 *)(param_1 + 200) = 0;
          if (iVar1 == 0) {
            return 0;
          }
        }
        local_a8 = local_a8 + 1;
      } while (local_a8 <= local_a4);
    }
  }
  return 1;
}



// ===== FUN_1801d02c0 @ 1801d02c0 (size 582)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d02c0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
  if ((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x28) & 5) != 0)) && (0 < param_2)) &&
     ((param_2 < iVar2 && (uVar4 = FUN_1801cf620(param_1,param_2), (int)uVar4 - 1U < 2)))) {
    return uVar4;
  }
  iVar8 = param_2;
  if (param_2 < iVar2) {
    do {
      lVar5 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar8);
      iVar3 = FUN_1801e8bd0(lVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),0);
      if (iVar3 == 1) goto LAB_1801d04d4;
      if (iVar3 == 2) goto LAB_1801d046e;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) == 0) {
      return 3;
    }
  }
  else {
    if (param_2 != iVar2) {
      return 3;
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) == 0) {
      return 3;
    }
    iVar8 = 0;
    lVar5 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),0);
    lVar7 = 0;
    uVar4 = FUN_1801a34d0(lVar5);
    lVar6 = (**(code **)(param_1 + 0x78))(param_1,uVar4);
    if (lVar6 == 0) {
      return 3;
    }
    iVar3 = 0;
    iVar2 = FUN_1801958b0(lVar6);
    if (0 < iVar2) {
      do {
        lVar7 = FUN_180195ae0(lVar6,iVar3);
        iVar2 = FUN_1801a32c0(lVar7,lVar5);
        if (iVar2 == 0) {
          if ((lVar7 != 0) && (iVar2 = FUN_1801a2c20(lVar7), iVar2 == 0)) {
            lVar7 = 0;
          }
          break;
        }
        lVar7 = 0;
        iVar3 = iVar3 + 1;
        iVar2 = FUN_1801958b0(lVar6);
      } while (iVar3 < iVar2);
    }
    FUN_1801958f0(lVar6,FUN_1801a2830);
    if (lVar7 == 0) {
      return 3;
    }
    iVar2 = FUN_1801e8bd0(lVar7,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),0);
    if (iVar2 == 2) {
      FUN_1801a2830(lVar7);
LAB_1801d046e:
      *(int *)(param_1 + 0xac) = iVar8;
      if (lVar5 == 0) {
        lVar5 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar8);
      }
      *(longlong *)(param_1 + 0xb8) = lVar5;
      *(undefined4 *)(param_1 + 0xb0) = 0x1c;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 2;
      }
      return 3;
    }
    FUN_180195a00(*(undefined8 *)(param_1 + 0x98),0,lVar7);
    FUN_1801a2830(lVar5);
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
LAB_1801d04d4:
  if ((lVar1 != 0) && (iVar2 = FUN_1801958b0(*(undefined8 *)(lVar1 + 8)), 0 < iVar2)) {
    if (*(int *)(lVar1 + 0x30) < 0) {
      *(int *)(lVar1 + 0x30) = param_2;
    }
    if (*(int *)(lVar1 + 0x2c) < 0) {
      return 3;
    }
  }
  return 1;
}



// ===== FUN_1801d0510 @ 1801d0510 (size 410)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801d0510(longlong param_1,longlong param_2,undefined8 *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar3 = FUN_1800b7fa0(param_2);
  iVar2 = *(int *)(param_1 + 0xac);
  iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
  iVar6 = iVar2 + 1;
  if (iVar2 == iVar1 + -1) {
    iVar6 = iVar2;
  }
  uVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar6);
  iVar2 = FUN_1801a5390(uVar4,*(undefined8 *)(param_2 + 0x80));
  if ((iVar2 == 0) && ((*param_4 & 0x20) != 0)) {
    *param_4 = *param_4 | 0x1c;
    *param_3 = uVar4;
  }
  else {
    iVar6 = iVar6 + 1;
    iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
    if (iVar6 < iVar2) {
      do {
        uVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar6);
        uVar5 = FUN_1801a34d0(uVar4);
        iVar2 = FUN_1801a2de0(uVar5,uVar3);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_1801a5390(uVar4,*(undefined8 *)(param_2 + 0x80)), iVar2 == 0)) {
          *param_4 = *param_4 | 0xc;
          *param_3 = uVar4;
          return;
        }
        iVar6 = iVar6 + 1;
        iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
      } while (iVar6 < iVar2);
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) != 0) {
      iVar6 = 0;
      iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x10));
      if (0 < iVar2) {
        do {
          uVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x10),iVar6);
          uVar5 = FUN_1801a34d0(uVar4);
          iVar2 = FUN_1801a2de0(uVar5,uVar3);
          if ((iVar2 == 0) &&
             (iVar2 = FUN_1801a5390(uVar4,*(undefined8 *)(param_2 + 0x80)), iVar2 == 0)) {
            *param_3 = uVar4;
            *param_4 = *param_4 | 4;
            return;
          }
          iVar6 = iVar6 + 1;
          iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x10));
        } while (iVar6 < iVar2);
      }
    }
  }
  return;
}



// ===== FUN_1801d06b0 @ 1801d06b0 (size 640)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d06b0(longlong param_1,longlong param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  uVar1 = *(uint *)(param_2 + 0x90);
  if ((uVar1 & 0x10) == 0) {
    if ((*(byte *)(param_1 + 0xd0) & 0x10) == 0) {
      uVar1 = uVar1 & 8;
    }
    else {
      uVar1 = uVar1 & 4;
    }
    if (uVar1 == 0) {
      iVar11 = 0;
      *param_4 = *(uint *)(param_2 + 0x94);
      iVar3 = FUN_1801958b0(*(undefined8 *)(param_1 + 0xf8));
      if (0 < iVar3) {
        do {
          puVar4 = (undefined8 *)FUN_180195ae0(*(undefined8 *)(param_1 + 0xf8),iVar11);
          uVar5 = FUN_1800b7fa0(param_2);
          if (puVar4[2] == 0) {
            if ((param_3 & 0x20) != 0) {
LAB_1801d07ab:
              if (*(undefined8 **)(param_2 + 0x88) == (undefined8 *)0x0) {
LAB_1801d07fc:
                *param_4 = *param_4 & *(uint *)(puVar4 + 3);
                return 1;
              }
              piVar6 = (int *)*puVar4;
              piVar2 = (int *)**(undefined8 **)(param_2 + 0x88);
              if ((piVar6 == (int *)0x0) || (piVar2 == (int *)0x0)) goto LAB_1801d07fc;
              if (*piVar6 == 1) {
                lVar10 = *(longlong *)(piVar6 + 4);
                if (lVar10 != 0) {
                  if (*piVar2 == 1) {
                    if ((*(longlong *)(piVar2 + 4) != 0) &&
                       (iVar3 = FUN_1801a2de0(lVar10), iVar3 == 0)) goto LAB_1801d07fc;
                  }
                  else {
                    uVar5 = *(undefined8 *)(piVar2 + 2);
LAB_1801d082d:
                    if (lVar10 == 0) goto LAB_1801d0873;
                    iVar8 = 0;
                    iVar3 = FUN_1801958b0(uVar5);
                    if (0 < iVar3) {
                      do {
                        piVar6 = (int *)FUN_180195ae0(uVar5,iVar8);
                        if ((*piVar6 == 4) &&
                           (iVar3 = FUN_1801a2de0(lVar10,*(undefined8 *)(piVar6 + 2)), iVar3 == 0))
                        goto LAB_1801d07fc;
                        iVar8 = iVar8 + 1;
                        iVar3 = FUN_1801958b0(uVar5);
                      } while (iVar8 < iVar3);
                    }
                  }
                }
              }
              else if (*piVar2 == 1) {
                lVar10 = *(longlong *)(piVar2 + 4);
                if (lVar10 != 0) {
                  uVar5 = *(undefined8 *)(piVar6 + 2);
                  goto LAB_1801d082d;
                }
              }
              else {
LAB_1801d0873:
                iVar8 = 0;
                iVar3 = FUN_1801958b0(*(undefined8 *)(piVar6 + 2));
                if (0 < iVar3) {
                  do {
                    uVar5 = FUN_180195ae0(*(undefined8 *)(piVar6 + 2),iVar8);
                    iVar9 = 0;
                    iVar3 = FUN_1801958b0(*(undefined8 *)(piVar2 + 2));
                    if (0 < iVar3) {
                      do {
                        uVar7 = FUN_180195ae0(*(undefined8 *)(piVar2 + 2),iVar9);
                        iVar3 = FUN_1801a4940(uVar5,uVar7);
                        if (iVar3 == 0) goto LAB_1801d07fc;
                        iVar9 = iVar9 + 1;
                        iVar3 = FUN_1801958b0(*(undefined8 *)(piVar2 + 2));
                      } while (iVar9 < iVar3);
                    }
                    iVar8 = iVar8 + 1;
                    iVar3 = FUN_1801958b0(*(undefined8 *)(piVar6 + 2));
                  } while (iVar8 < iVar3);
                }
              }
            }
          }
          else {
            iVar8 = 0;
            iVar3 = FUN_1801958b0();
            if (0 < iVar3) {
              do {
                piVar6 = (int *)FUN_180195ae0(puVar4[2],iVar8);
                if ((*piVar6 == 4) &&
                   (iVar3 = FUN_1801a2de0(*(undefined8 *)(piVar6 + 2),uVar5), iVar3 == 0))
                goto LAB_1801d07ab;
                iVar8 = iVar8 + 1;
                iVar3 = FUN_1801958b0(puVar4[2]);
              } while (iVar8 < iVar3);
            }
          }
          iVar11 = iVar11 + 1;
          iVar3 = FUN_1801958b0(*(undefined8 *)(param_1 + 0xf8));
        } while (iVar11 < iVar3);
      }
      if (((*(longlong **)(param_2 + 0x88) == (longlong *)0x0) ||
          (**(longlong **)(param_2 + 0x88) == 0)) && ((param_3 & 0x20) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



// ===== FUN_1801d0930 @ 1801d0930 (size 243)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801d0930(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = FUN_1801a3c50(param_1,param_3,0xffffffff);
  lVar5 = 0;
  if (iVar1 < 0) {
    lVar4 = 0;
  }
  else {
    iVar2 = FUN_1801a3c50(param_1,param_3,iVar1);
    if (iVar2 != -1) {
      return 0;
    }
    uVar3 = FUN_1801a3c30(param_1,iVar1);
    lVar4 = FUN_1801a3d70(uVar3);
  }
  iVar1 = FUN_1801a3c50(param_2,param_3,0xffffffff);
  if (-1 < iVar1) {
    iVar2 = FUN_1801a3c50(param_2,param_3,iVar1);
    if (iVar2 != -1) {
      return 0;
    }
    uVar3 = FUN_1801a3c30(param_2,iVar1);
    lVar5 = FUN_1801a3d70(uVar3);
  }
  if (lVar4 == 0) {
    if (lVar5 == 0) {
      return 1;
    }
  }
  else if ((lVar5 != 0) && (iVar1 = FUN_1801df9f0(lVar4,lVar5), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// ===== FUN_1801d0a30 @ 1801d0a30 (size 801)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1801d0a30(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 *_Buf1;
  undefined1 *puVar11;
  undefined4 uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  uint local_b4;
  int local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  longlong local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801d0a46;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_f8;
  plVar2 = *(longlong **)(param_1 + 0xe8);
  uVar12 = 0;
  uVar10 = 0x100;
  local_c8 = 0x100;
  local_bc = 0x100;
  local_c4 = 0x100;
  uVar4 = 5;
  if (param_3 == 0) {
    uVar4 = 10;
  }
  local_a0 = (undefined1 *)0x0;
  uVar14 = 0x100;
  puVar11 = (undefined1 *)0x0;
  uVar5 = 0;
  local_c0 = 0;
  if (*(int *)(param_1 + 0x94) <= param_3) {
    uVar4 = 2 - (param_3 != 0);
  }
  local_b4 = uVar4 & 0xfffffffc;
  if (*(int *)((longlong)plVar2 + 0x2c) < 0) {
    local_b4 = uVar4;
  }
  local_b0 = param_3;
  local_98 = param_2;
  if ((*(uint *)(plVar2 + 5) & local_b4) == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = FUN_1801958b0(plVar2[1]);
  }
  iVar13 = 0;
  do {
    if (local_b8 <= iVar13) {
LAB_1801d0d0e:
      FUN_180195e10(puVar11,"crypto\\x509\\x509_vfy.c",0xad5);
      return uVar12;
    }
    pbVar7 = (byte *)FUN_180195ae0(plVar2[1],iVar13);
    bVar1 = *pbVar7;
    if ((local_b4 >> (bVar1 & 0x1f) & 1) != 0) {
      if (bVar1 != uVar10) {
        uVar14 = 0x100;
        local_c8 = (uint)bVar1;
        local_c4 = (uint)*(byte *)((ulonglong)pbVar7[2] + *(longlong *)(*plVar2 + 8));
      }
      bVar1 = pbVar7[1];
      if (bVar1 == local_bc) {
        bVar1 = pbVar7[2];
        uVar9 = (ulonglong)bVar1;
        if ((bVar1 == 0) || (local_c4 <= *(byte *)(*(longlong *)(*plVar2 + 8) + (ulonglong)bVar1)))
        goto LAB_1801d0bfa;
      }
      else {
        local_bc = (uint)bVar1;
        FUN_180195e10(puVar11,"crypto\\x509\\x509_vfy.c",0xa98);
        local_a8 = (undefined1 *)0x0;
        if (bVar1 == 0) {
          uVar5 = FUN_1801a29c0(local_98,&local_a8);
        }
        else {
          if (bVar1 != 1) {
            uVar12 = 0xa3b;
            uVar8 = 0x85;
            goto LAB_1801d0ca3;
          }
          uVar8 = FUN_1801a2b30(local_98);
          uVar5 = FUN_1801a2510(uVar8,&local_a8);
        }
        if (((int)uVar5 < 0) || (local_a8 == (undefined1 *)0x0)) {
          uVar12 = 0xa40;
          uVar8 = 0x41;
LAB_1801d0ca3:
          local_d8 = CONCAT44(local_d8._4_4_,uVar12);
          FUN_1801a70c0(0xb,0x6b,uVar8,"crypto\\x509\\x509_vfy.c");
          return 0xffffffff;
        }
        uVar14 = 0x100;
        uVar9 = (ulonglong)pbVar7[2];
        local_c4 = (uint)*(byte *)(*(longlong *)(*plVar2 + 8) + uVar9);
        puVar11 = local_a8;
LAB_1801d0bfa:
        if ((int)uVar9 == (int)uVar14) {
          _Buf1 = local_a0;
          uVar9 = uVar14;
        }
        else {
          lVar3 = *(longlong *)(*(longlong *)*plVar2 + uVar9 * 8);
          _Buf1 = puVar11;
          local_c0 = uVar5;
          local_a0 = puVar11;
          if (lVar3 != 0) {
            local_d0 = 0;
            local_d8 = lVar3;
            local_a0 = local_88;
            iVar6 = FUN_18019cda0(puVar11,uVar5,local_88,&local_c0);
            _Buf1 = local_88;
            if (iVar6 == 0) {
              uVar12 = 0xffffffff;
              goto LAB_1801d0d0e;
            }
          }
        }
        uVar14 = uVar9;
        if (((ulonglong)local_c0 == *(ulonglong *)(pbVar7 + 0x10)) &&
           (iVar6 = memcmp(_Buf1,*(void **)(pbVar7 + 8),(ulonglong)local_c0), iVar6 == 0)) {
          if (local_c8 - 2 < 2) {
            uVar12 = 1;
          }
          else if (-1 < *(int *)((longlong)plVar2 + 0x2c)) goto LAB_1801d0d0e;
          *(int *)((longlong)plVar2 + 0x2c) = local_b0;
          plVar2[3] = (longlong)pbVar7;
          FUN_180195e10(plVar2[4],"crypto\\x509\\x509_vfy.c",0xacc);
          plVar2[4] = local_98;
          FUN_1801a2c20(local_98);
          goto LAB_1801d0d0e;
        }
      }
      uVar10 = local_c8;
    }
    iVar13 = iVar13 + 1;
  } while( true );
}



// ===== FUN_1801d0d60 @ 1801d0d60 (size 290)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d0d60(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar7 = 0;
  iVar8 = 0;
  iVar2 = FUN_1801958b0(param_2);
  if (iVar2 < 1) {
    return 0;
  }
  do {
    uVar4 = FUN_180195ae0(param_2,iVar8);
    iVar2 = (**(code **)(param_1 + 0x48))(param_1,param_3,uVar4);
    if (iVar2 != 0) {
      if (((*(byte *)(param_3 + 0xd0) & 0x20) == 0) ||
         (iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98)), iVar2 != 1)) {
        uVar1 = *(undefined8 *)(param_1 + 0x98);
        iVar2 = FUN_1801958b0(uVar1);
        iVar6 = 0;
        if (0 < iVar2) {
          do {
            uVar5 = FUN_180195ae0(uVar1,iVar6);
            iVar3 = FUN_1801a32c0(uVar5,uVar4);
            if (iVar3 == 0) goto LAB_1801d0e37;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
        }
      }
      iVar2 = FUN_1801d17e0(param_1,uVar4,0xffffffff);
      uVar7 = uVar4;
      if (iVar2 != 0) {
        return uVar4;
      }
    }
LAB_1801d0e37:
    iVar8 = iVar8 + 1;
    iVar2 = FUN_1801958b0(param_2);
    if (iVar2 <= iVar8) {
      return uVar7;
    }
  } while( true );
}



// ===== FUN_1801d0e90 @ 1801d0e90 (size 405)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801d0e90(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint local_res18 [4];
  
  uVar8 = *param_3;
  lVar7 = 0;
  local_res18[0] = 0;
  uVar6 = *(uint *)(param_4 + 0x90);
  if ((uVar6 & 2) != 0) {
    return 0;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) == 0) {
    if ((uVar6 & 0x60) != 0) {
      return 0;
    }
  }
  else if ((uVar6 & 0x40) == 0) {
    if (*(longlong *)(param_4 + 0xa0) != 0) {
      return 0;
    }
  }
  else if ((*(uint *)(param_4 + 0x94) & ~uVar8) == 0) {
    return 0;
  }
  uVar3 = FUN_1800b7fa0(param_4);
  uVar4 = FUN_1801a3490(param_5);
  iVar1 = FUN_1801a2de0(uVar4,uVar3);
  if (iVar1 == 0) {
    uVar6 = 0x20;
    local_res18[0] = 0x20;
  }
  else {
    if ((*(byte *)(param_4 + 0x90) & 0x20) == 0) {
      return 0;
    }
    uVar6 = 0;
  }
  if ((*(uint *)(param_4 + 0x7c) & 0x200) == 0) {
    uVar6 = uVar6 | 0x100;
    local_res18[0] = uVar6;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar2 & 2) == 0) {
    if ((uVar2 >> 0x15 & 1) == 0) goto LAB_1801d0f7d;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x20) + 8;
LAB_1801d0f7d:
    uVar3 = FUN_1801afd00(param_4);
    uVar2 = FUN_1801cdbb0(uVar3,lVar7);
    if (uVar2 < 0x80000000) goto LAB_1801d0fcc;
    lVar5 = FUN_18019df70(param_4);
    if (lVar5 != 0) {
      uVar3 = FUN_18019df70(param_4);
      iVar1 = FUN_1801cdbb0(uVar3,lVar7);
      if ((iVar1 == 0) || ((iVar1 < 0 && ((*(byte *)(param_1 + 0xd0) & 2) == 0))))
      goto LAB_1801d0fcc;
    }
  }
  local_res18[0] = uVar6 | 0x40;
LAB_1801d0fcc:
  FUN_1801d0510(param_1,param_4,param_2,local_res18);
  uVar6 = local_res18[0];
  if ((local_res18[0] & 4) == 0) {
    return 0;
  }
  iVar1 = FUN_1801d06b0(param_5,param_4,local_res18[0],local_res18);
  if (iVar1 != 0) {
    if ((local_res18[0] & ~uVar8) == 0) {
      return 0;
    }
    uVar8 = uVar8 | local_res18[0];
    uVar6 = uVar6 | 0x80;
  }
  *param_3 = uVar8;
  return uVar6;
}



// ===== FUN_1801d1030 @ 1801d1030 (size 469)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801d1030(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  int *param_5,undefined4 *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = 0;
  lVar8 = 0;
  local_78 = 0;
  iVar7 = 0;
  iVar9 = *param_5;
  local_60 = 0;
  local_68 = 0;
  local_58 = uVar4;
  iVar1 = FUN_1801958b0(param_7);
  if (0 < iVar1) {
    do {
      lVar3 = FUN_180195ae0(param_7,iVar7);
      local_74 = *param_6;
      iVar1 = FUN_1801d0e90(param_1,&local_60,&local_74,lVar3,uVar4);
      if ((iVar9 <= iVar1) && (iVar1 != 0)) {
        if ((iVar1 == iVar9) && (lVar8 != 0)) {
          uVar4 = FUN_1801afd00(lVar3);
          uVar5 = FUN_1801afd00(lVar8);
          iVar2 = FUN_18019c230(&local_70,&local_6c,uVar5,uVar4);
          if ((iVar2 == 0) || ((local_70 < 1 && (local_6c < 1)))) {
            uVar6 = local_78;
            goto LAB_1801d1158;
          }
        }
        local_68 = local_60;
        local_78 = local_74;
        lVar8 = lVar3;
        uVar6 = local_74;
        iVar9 = iVar1;
      }
LAB_1801d1158:
      uVar5 = local_68;
      iVar7 = iVar7 + 1;
      iVar1 = FUN_1801958b0(param_7);
      uVar4 = local_58;
    } while (iVar7 < iVar1);
    if (lVar8 != 0) {
      FUN_1801cd2f0(*param_2);
      *param_2 = lVar8;
      *param_4 = uVar5;
      *param_5 = iVar9;
      *param_6 = uVar6;
      FUN_1801cd5c0(lVar8);
      FUN_1801cd2f0(*param_3);
      *param_3 = 0;
      FUN_1801d1210(param_1,param_3,param_5,lVar8,param_7);
    }
  }
  return 0x1bf < iVar9;
}



// ===== FUN_1801d1210 @ 1801d1210 (size 463)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801d1210(longlong param_1,longlong *param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x2000) != 0) &&
     (((*(uint *)(*(longlong *)(param_1 + 0xb8) + 0xd0) | *(uint *)(param_4 + 0x7c)) >> 0xc & 1) !=
      0)) {
    lVar8 = 0;
    iVar7 = 0;
    iVar1 = FUN_1801958b0(param_5);
    if (0 < iVar1) {
      do {
        lVar3 = FUN_180195ae0(param_5,iVar7);
        if ((*(longlong *)(lVar3 + 0xa0) != 0) && (*(longlong *)(param_4 + 0x98) != 0)) {
          uVar4 = FUN_1800b7fa0(lVar3);
          uVar5 = FUN_1800b7fa0(param_4);
          iVar1 = FUN_1801a2de0(uVar5,uVar4);
          if (((iVar1 == 0) &&
              (((iVar1 = FUN_1801d0930(lVar3,param_4,0x5a), iVar1 != 0 &&
                (iVar1 = FUN_1801d0930(lVar3,param_4,0x302), iVar1 != 0)) &&
               (iVar1 = FUN_1801dbf30(*(undefined8 *)(lVar3 + 0xa0),*(undefined8 *)(param_4 + 0x98))
               , iVar1 < 1)))) &&
             (iVar1 = FUN_1801dbf30(*(undefined8 *)(lVar3 + 0x98),*(undefined8 *)(param_4 + 0x98)),
             0 < iVar1)) {
            uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
            if ((uVar2 & 2) == 0) {
              if ((uVar2 >> 0x15 & 1) == 0) goto LAB_1801d137e;
            }
            else {
              lVar8 = *(longlong *)(param_1 + 0x20) + 8;
LAB_1801d137e:
              uVar4 = FUN_1801afd00(lVar3);
              uVar2 = FUN_1801cdbb0(uVar4,lVar8);
              if (uVar2 < 0x80000000) goto LAB_1801d13ce;
              lVar6 = FUN_18019df70(lVar3);
              if (lVar6 != 0) {
                uVar4 = FUN_18019df70(lVar3);
                iVar1 = FUN_1801cdbb0(uVar4,lVar8);
                if ((iVar1 == 0) || ((iVar1 < 0 && ((*(byte *)(param_1 + 0xd0) & 2) == 0))))
                goto LAB_1801d13ce;
              }
            }
            *param_3 = *param_3 | 2;
LAB_1801d13ce:
            FUN_1801cd5c0(lVar3);
            *param_2 = lVar3;
            return;
          }
        }
        iVar7 = iVar7 + 1;
        iVar1 = FUN_1801958b0(param_5);
      } while (iVar7 < iVar1);
    }
    *param_2 = 0;
  }
  return;
}



// ===== FUN_1801d13e0 @ 1801d13e0 (size 608)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d13e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x98));
  iVar6 = iVar1 + -1;
  lVar3 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar6);
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar2 = (**(code **)(param_1 + 0x48))(param_1,lVar3,lVar3);
    lVar5 = lVar3;
    if (iVar2 != 0) goto LAB_1801d14d2;
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) == 0) {
      if (0 < iVar6) {
        iVar6 = iVar1 + -2;
        *(int *)(param_1 + 0xac) = iVar6;
        goto LAB_1801d14c0;
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar3 == 0) {
        lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),0);
      }
      else {
        lVar4 = lVar3;
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x15;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  else {
    lVar5 = 0;
  }
LAB_1801d15d6:
  do {
    do {
      iVar1 = FUN_1801d17e0(param_1,lVar3,iVar6);
      if (iVar1 == 0) {
        return 0;
      }
      *(longlong *)(param_1 + 0xc0) = lVar5;
      *(longlong *)(param_1 + 0xb8) = lVar3;
      *(int *)(param_1 + 0xac) = iVar6;
      iVar1 = (**(code **)(param_1 + 0x38))(1,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar6 = iVar6 + -1;
      if (-1 < iVar6) {
        lVar5 = lVar3;
LAB_1801d14c0:
        lVar3 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar6);
      }
LAB_1801d14d2:
      if (iVar6 < 0) {
        return 1;
      }
    } while ((lVar3 == lVar5) &&
            (((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x4000) == 0 ||
             ((*(uint *)(lVar5 + 0xd0) & 0x2000) == 0))));
    iVar1 = (uint)(lVar3 != lVar5) + iVar6;
    if (((lVar3 != lVar5) || ((*(byte *)(lVar5 + 0xd0) & 0x10) != 0)) &&
       (iVar2 = FUN_1801a5bf0(lVar5,lVar3), iVar2 != 0)) {
      *(int *)(param_1 + 0xac) = iVar1;
      if (lVar5 == 0) {
        lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar1);
      }
      else {
        lVar4 = lVar5;
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(int *)(param_1 + 0xb0) = iVar2;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    lVar4 = FUN_1801a3460(lVar5);
    if (lVar4 == 0) {
      *(int *)(param_1 + 0xac) = iVar1;
      if (lVar5 == 0) {
        lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),iVar1);
      }
      else {
        lVar4 = lVar5;
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 6;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    }
    else {
      iVar1 = FUN_1801a1c50(lVar3,lVar4);
      if (0 < iVar1) goto LAB_1801d15d6;
      iVar1 = FUN_1801d1640(param_1,lVar3,iVar6,7);
    }
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}



// ===== FUN_1801d1640 @ 1801d1640 (size 94)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801d1640(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_1 + 0xac) = param_3;
  if (param_2 == 0) {
    param_2 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),param_3);
  }
  *(longlong *)(param_1 + 0xb8) = param_2;
  if (param_4 != 0) {
    *(int *)(param_1 + 0xb0) = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801d169b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(0,param_1);
  return;
}



// ===== FUN_1801d16a0 @ 1801d16a0 (size 316)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801d16a0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = FUN_1801ce270();
  uVar4 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar1 = FUN_1801cee70(param_1);
    uVar4 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      uVar1 = FUN_1801cecd0(param_1);
      uVar4 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        uVar1 = FUN_1801cf6b0(param_1);
        uVar4 = (ulonglong)uVar1;
      }
    }
  }
  FUN_1801cdcc0(0,*(undefined8 *)(param_1 + 0x98));
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  iVar2 = (**(code **)(param_1 + 0x50))(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_1801a2f10(param_1 + 0xac,0,*(undefined8 *)(param_1 + 0x98),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14));
  if (iVar2 != 0) {
    uVar3 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac));
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    *(int *)(param_1 + 0xb0) = iVar2;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (*(code **)(param_1 + 0x30) == (code *)0x0) {
    iVar2 = FUN_1801d13e0(param_1);
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x30))();
  }
  if ((((iVar2 == 0) || (iVar2 = FUN_1801cf9b0(param_1), iVar2 == 0)) ||
      (iVar2 = FUN_1801d89d0(param_1), iVar2 == 0)) ||
     (uVar4 = FUN_1801da7d0(param_1), (int)uVar4 == 0)) {
    return 0;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80) != 0) {
    uVar4 = (**(code **)(param_1 + 0x70))(param_1);
  }
  return uVar4;
}



// ===== FUN_1801d17e0 @ 1801d17e0 (size 394)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d17e0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 >> 0x15 & 1) == 0) {
      lVar5 = 0;
      goto LAB_1801d1824;
    }
LAB_1801d1950:
    uVar3 = 1;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x20) + 8;
LAB_1801d1824:
    uVar3 = FUN_18018d300(param_2);
    iVar2 = FUN_1801cdbb0(uVar3,lVar5);
    if ((iVar2 < 0) || (-1 < param_3)) {
      if (iVar2 == 0) {
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        else {
          lVar4 = param_2;
        }
        *(longlong *)(param_1 + 0xb8) = lVar4;
        *(undefined4 *)(param_1 + 0xb0) = 0xd;
        uVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
      }
      else if (0 < iVar2) {
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        else {
          lVar4 = param_2;
        }
        *(longlong *)(param_1 + 0xb8) = lVar4;
        *(undefined4 *)(param_1 + 0xb0) = 9;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) goto LAB_1801d194c;
      }
      uVar3 = FUN_18019f410(param_2);
      iVar2 = FUN_1801cdbb0(uVar3,lVar5);
      if (iVar2 < 1) {
        if (param_3 < 0) goto LAB_1801d194c;
        if (iVar2 != 0) goto LAB_1801d1911;
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          param_2 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(undefined4 *)(param_1 + 0xb0) = 0xe;
      }
      else {
LAB_1801d1911:
        if (-1 < iVar2) goto LAB_1801d1950;
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          param_2 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(undefined4 *)(param_1 + 0xb0) = 10;
      }
      *(longlong *)(param_1 + 0xb8) = param_2;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 != 0) goto LAB_1801d1950;
    }
LAB_1801d194c:
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_1801d1a40 @ 1801d1a40 (size 144)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801d1a40(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801d1a4c;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (param_2 != 2) {
    return 0;
  }
  if (param_4 != 3) {
    uVar5 = FUN_1801d2070(uVar1,param_3,param_4);
    return uVar5;
  }
  uVar3 = FUN_1801d19d0();
  lVar4 = FUN_1801d1970(uVar3);
  if (lVar4 == 0) {
    lVar4 = FUN_1801d19c0();
  }
  uVar2 = FUN_1801d2070(uVar1,lVar4,1);
  if (uVar2 == 0) {
    FUN_1801a70c0(0xb,0x66,0x67,"crypto\\x509\\by_dir.c",0x54,uVar6);
  }
  return (ulonglong)uVar2;
}



// ===== FUN_1801d1ad0 @ 1801d1ad0 (size 233)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d1ad0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801d1ae0;
  plVar2 = (longlong *)FUN_180195dc0(0x18,"crypto\\x509\\by_dir.c",0x5f);
  if (plVar2 == (longlong *)0x0) {
    FUN_1801a70c0(0xb,0x99,0x41,"crypto\\x509\\by_dir.c",0x62,uVar4);
    return 0;
  }
  lVar3 = FUN_1801aebd0();
  *plVar2 = lVar3;
  if (lVar3 == 0) {
    uVar1 = 0x67;
  }
  else {
    plVar2[1] = 0;
    lVar3 = FUN_1801add30();
    plVar2[2] = lVar3;
    if (lVar3 != 0) {
      *(longlong **)(param_1 + 0x10) = plVar2;
      return 1;
    }
    FUN_1801ae8b0(*plVar2);
    uVar1 = 0x6e;
  }
  FUN_1801a70c0(0xb,0x99,0x41,"crypto\\x509\\by_dir.c",uVar1,uVar4);
  FUN_180195e10(plVar2,"crypto\\x509\\by_dir.c",0x75);
  return 0;
}



// ===== FUN_1801d1bc0 @ 1801d1bc0 (size 78)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801d1bc0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  FUN_1801958f0(puVar1[1],FUN_1801d22c0);
  FUN_1801ae8b0(*puVar1);
  FUN_1801adcf0(puVar1[2]);
  FUN_180195e10(puVar1,"crypto\\x509\\by_dir.c",0x96);
  return;
}



// ===== FUN_1801d1c10 @ 1801d1c10 (size 1090)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801d1c10(longlong param_1,int param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  undefined **ppuVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_230;
  undefined **local_228;
  int local_220;
  undefined4 local_218;
  longlong local_210;
  int local_208;
  undefined4 local_200 [2];
  undefined **local_1f8;
  undefined4 *local_1f0;
  int local_1e8 [2];
  undefined1 *local_1e0;
  undefined1 local_1d8 [24];
  longlong local_1c0;
  longlong local_190;
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_258;
  uVar13 = 0;
  lVar6 = 0;
  if (param_3 == 0) {
    return 0;
  }
  local_1f0 = param_4;
  local_1e8[0] = param_2;
  if (param_2 == 1) {
    local_1f8 = &PTR_1802ead18;
    local_190 = param_3;
LAB_1801d1cc4:
    local_1e0 = local_1d8;
    lVar6 = FUN_1801aebd0();
    if (lVar6 != 0) {
      lVar14 = *(longlong *)(param_1 + 0x10);
      local_210 = lVar14;
      uVar12 = FUN_1801a2e70(param_3);
      iVar5 = 0;
      local_208 = 0;
      local_218 = uVar12;
      iVar3 = FUN_1801958b0(*(undefined8 *)(lVar14 + 8));
      if (0 < iVar3) {
        do {
          puVar7 = (undefined8 *)FUN_180195ae0(*(undefined8 *)(lVar14 + 8),iVar5);
          pcVar11 = (char *)*puVar7;
          cVar1 = *pcVar11;
          for (uVar4 = 0; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
            pcVar11 = pcVar11 + 1;
            cVar1 = *pcVar11;
          }
          lVar8 = FUN_1801ae920(lVar6,(longlong)(int)((uVar4 & 0x7fffffff) + 0x11));
          if (lVar8 == 0) {
            local_238 = 0x103;
            uVar12 = 0x41;
            goto LAB_1801d1ffc;
          }
          if ((param_2 == 2) && (puVar7[2] != 0)) {
            local_200[0] = uVar12;
            FUN_1801add90(*(undefined8 *)(lVar14 + 0x10));
            iVar3 = FUN_180195630(puVar7[2],local_200);
            if (iVar3 < 0) {
              lVar8 = 0;
              iVar3 = 0;
              FUN_1801ade50(*(undefined8 *)(local_210 + 0x10));
            }
            else {
              lVar8 = FUN_180195ae0(puVar7[2],iVar3);
              iVar3 = *(int *)(lVar8 + 4);
              FUN_1801ade50(*(undefined8 *)(local_210 + 0x10));
            }
          }
          else {
            iVar3 = 0;
            lVar8 = 0;
          }
          ppuVar2 = local_1f8;
          while( true ) {
            local_228 = ppuVar2;
            local_238 = 0x2f;
            local_230 = uVar12;
            local_220 = iVar3;
            FUN_180196a10(*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10),"%s%c%08lx.%s%d",
                          *puVar7);
            iVar5 = _stat64i32(*(undefined8 *)(lVar6 + 8),local_88);
            if (iVar5 < 0) break;
            if (param_2 == 1) {
              iVar5 = FUN_1801a11b0(param_1,*(undefined8 *)(lVar6 + 8),*(undefined4 *)(puVar7 + 1));
LAB_1801d1e3f:
              if (iVar5 == 0) break;
            }
            else if (param_2 == 2) {
              iVar5 = FUN_1801a1360(param_1,*(undefined8 *)(lVar6 + 8),*(undefined4 *)(puVar7 + 1));
              goto LAB_1801d1e3f;
            }
            iVar3 = iVar3 + 1;
          }
          FUN_1801a0a40(*(undefined8 *)(param_1 + 0x18));
          uVar12 = FUN_180195630(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_1e8);
          puVar9 = (undefined4 *)
                   FUN_180195ae0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar12);
          FUN_1801a0bc0(*(undefined8 *)(param_1 + 0x18));
          uVar13 = 0;
          if ((param_2 == 2) && (0 < iVar3)) {
            FUN_1801add90(*(undefined8 *)(local_210 + 0x10));
            if (lVar8 == 0) {
              local_200[0] = local_218;
              uVar12 = FUN_180195630(puVar7[2],local_200);
              lVar8 = FUN_180195ae0(puVar7[2],uVar12);
              if (lVar8 == 0) {
                puVar10 = (undefined4 *)FUN_180195dc0(8,"crypto\\x509\\by_dir.c",0x161);
                if (puVar10 == (undefined4 *)0x0) {
                  FUN_1801ade50(*(undefined8 *)(local_210 + 0x10));
                  uVar12 = 0x41;
                  local_238 = 0x164;
                }
                else {
                  *puVar10 = local_218;
                  puVar10[1] = iVar3;
                  iVar3 = FUN_180195990(puVar7[2],puVar10);
                  if (iVar3 != 0) {
                    FUN_180195a90(puVar7[2]);
                    lVar14 = local_210;
                    FUN_1801ade50(*(undefined8 *)(local_210 + 0x10));
                    goto LAB_1801d1f44;
                  }
                  FUN_1801ade50(*(undefined8 *)(local_210 + 0x10));
                  FUN_180195e10(puVar10,"crypto\\x509\\by_dir.c",0x16c);
                  uVar12 = 0x41;
                  local_238 = 0x16d;
                }
                goto LAB_1801d1ffc;
              }
            }
            lVar14 = local_210;
            if (*(int *)(lVar8 + 4) < iVar3) {
              *(int *)(lVar8 + 4) = iVar3;
            }
            FUN_1801ade50(*(undefined8 *)(local_210 + 0x10));
          }
          else {
            lVar14 = local_210;
          }
LAB_1801d1f44:
          if (puVar9 != (undefined4 *)0x0) {
            uVar13 = 1;
            *local_1f0 = *puVar9;
            *(undefined8 *)(local_1f0 + 2) = *(undefined8 *)(puVar9 + 2);
            FUN_1801a64b0();
            break;
          }
          iVar5 = local_208 + 1;
          local_208 = iVar5;
          iVar3 = FUN_1801958b0(*(undefined8 *)(lVar14 + 8));
          if (iVar3 <= iVar5) break;
          uVar12 = local_218;
        } while( true );
      }
      goto LAB_1801d2010;
    }
    local_238 = 0xf4;
    uVar12 = 7;
  }
  else {
    if (param_2 == 2) {
      local_1f8 = (undefined **)&DAT_18030be14;
      local_1c0 = param_3;
      goto LAB_1801d1cc4;
    }
    local_238 = 0xef;
    uVar12 = 0x70;
  }
LAB_1801d1ffc:
  uVar13 = 0;
  FUN_1801a70c0(0xb,0x67,uVar12,"crypto\\x509\\by_dir.c");
LAB_1801d2010:
  FUN_1801ae8b0(lVar6);
  return uVar13;
}



// ===== FUN_1801d2070 @ 1801d2070 (size 582)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d2070(longlong param_1,char *param_2,undefined4 param_3)

{
  char *_Str1;
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  int iVar8;
  size_t _MaxCount;
  char *_Str2;
  char *pcVar9;
  undefined4 uVar10;
  
  if ((param_2 == (char *)0x0) || (cVar1 = *param_2, cVar1 == '\0')) {
    FUN_1801a70c0(0xb,100,0x71,"crypto\\x509\\by_dir.c",0xa0,0x1801d2080);
    return 0;
  }
  _Str2 = param_2;
  do {
    if ((cVar1 == ';') || (pcVar9 = _Str2, cVar1 == '\0')) {
      pcVar9 = param_2 + 1;
      _MaxCount = (longlong)param_2 - (longlong)_Str2;
      if (_MaxCount != 0) {
        iVar8 = 0;
        iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 8));
        if (0 < iVar2) {
          do {
            puVar4 = (undefined8 *)FUN_180195ae0(*(undefined8 *)(param_1 + 8),iVar8);
            _Str1 = (char *)*puVar4;
            cVar1 = *_Str1;
            pcVar7 = _Str1;
            for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            if (((uVar3 & 0x7fffffff) == _MaxCount) &&
               (iVar2 = strncmp(_Str1,_Str2,_MaxCount), iVar2 == 0)) break;
            iVar8 = iVar8 + 1;
            iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 8));
          } while (iVar8 < iVar2);
        }
        iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 8));
        if (iVar2 <= iVar8) {
          if (*(longlong *)(param_1 + 8) == 0) {
            lVar5 = FUN_1801957e0();
            *(longlong *)(param_1 + 8) = lVar5;
            if (lVar5 == 0) {
              uVar10 = 0xb9;
              goto LAB_1801d2269;
            }
          }
          plVar6 = (longlong *)FUN_180195dc0(0x18,"crypto\\x509\\by_dir.c",0xbd);
          if (plVar6 == (longlong *)0x0) {
            uVar10 = 0xbf;
LAB_1801d2269:
            FUN_1801a70c0(0xb,100,0x41,"crypto\\x509\\by_dir.c",uVar10);
            return 0;
          }
          *(undefined4 *)(plVar6 + 1) = param_3;
          lVar5 = FUN_1801957a0(&LAB_1801d2310);
          plVar6[2] = lVar5;
          lVar5 = FUN_1801ba390(_Str2,_MaxCount,"crypto\\x509\\by_dir.c",0xc4);
          *plVar6 = lVar5;
          if ((lVar5 == 0) || (plVar6[2] == 0)) {
            FUN_180195e10(lVar5,"crypto\\x509\\by_dir.c",0x8a);
            FUN_1801958f0(plVar6[2],FUN_1801d2330);
            FUN_180195e10(plVar6,"crypto\\x509\\by_dir.c",0x8c);
            return 0;
          }
          iVar2 = FUN_180195990(*(undefined8 *)(param_1 + 8),plVar6);
          if (iVar2 == 0) {
            FUN_1801d22c0(plVar6);
            uVar10 = 0xcb;
            goto LAB_1801d2269;
          }
        }
      }
    }
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = *param_2;
    _Str2 = pcVar9;
  } while( true );
}



// ===== FUN_1801d22c0 @ 1801d22c0 (size 79)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801d22c0(undefined8 *param_1)

{
  FUN_180195e10(*param_1,"crypto\\x509\\by_dir.c",0x8a);
  FUN_1801958f0(param_1[2],FUN_1801d2330);
  FUN_180195e10(param_1,"crypto\\x509\\by_dir.c",0x8c);
  return;
}



// ===== FUN_1801d2360 @ 1801d2360 (size 121)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d2360(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0x1801d237a;
  uVar3 = 0;
  local_18 = 0;
  iVar2 = FUN_1801d2470(param_3,&local_18);
  lVar1 = local_18;
  if (-1 < iVar2) {
    local_10 = *(undefined8 *)(local_18 + 8);
    uVar3 = (*param_2)(param_4,&local_10,iVar2);
  }
  FUN_1801ae8b0(lVar1);
  return uVar3;
}



// ===== FUN_1801d23e0 @ 1801d23e0 (size 130)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d23e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801d23fa;
  uVar3 = 0;
  local_res20 = 0;
  iVar2 = FUN_1801d2470(param_2,&local_res20);
  lVar1 = local_res20;
  if (-1 < iVar2) {
    local_18 = *(undefined8 *)(local_res20 + 8);
    uVar3 = FUN_1801bfef0(param_3,&local_18,iVar2,param_1);
  }
  FUN_1801ae8b0(lVar1);
  return uVar3;
}



// ===== FUN_1801d2470 @ 1801d2470 (size 806)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801d2470(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  int local_res18 [2];
  int local_res20 [2];
  undefined4 uVar13;
  undefined1 local_48 [8];
  longlong local_40;
  
  iVar11 = 0;
  lVar5 = FUN_1801aebd0();
  if (lVar5 == 0) {
    FUN_1801a70c0(0xd,0x6b,0x41,"crypto\\asn1\\a_d2i_fp.c",0x6e);
    return 0xffffffff;
  }
  FUN_1801a64b0();
  uVar12 = 0;
  uVar7 = 0;
  do {
    while( true ) {
      uVar8 = uVar12;
      if (uVar12 - uVar7 < 9) {
        uVar9 = (uVar7 - uVar12) + 8;
        if ((uVar12 + uVar9 < uVar12) || (lVar6 = FUN_1801aea60(lVar5), lVar6 == 0)) {
          uVar13 = 0x78;
          uVar10 = 0x41;
          goto LAB_1801d2756;
        }
        iVar3 = FUN_18018dc10(param_1,*(longlong *)(lVar5 + 8) + uVar12,uVar9 & 0xffffffff);
        if ((iVar3 < 0) && (uVar12 == uVar7)) {
          uVar13 = 0x7d;
          uVar10 = 0x8e;
          goto LAB_1801d2756;
        }
        if ((0 < iVar3) && (uVar8 = (longlong)iVar3 + uVar12, uVar8 < uVar12)) {
          uVar13 = 0x82;
          goto LAB_1801d2750;
        }
      }
      lVar6 = *(longlong *)(lVar5 + 8) + uVar7;
      local_40 = lVar6;
      bVar2 = FUN_18019a660(&local_40,local_res18,local_res20,local_48,(int)uVar8 - (int)uVar7);
      if ((char)bVar2 < '\0') {
        uVar4 = FUN_1801a6f40();
        if ((uVar4 & 0xfff) != 0x9b) goto LAB_1801d276a;
        FUN_1801a64b0();
      }
      uVar12 = uVar7 + (longlong)((int)local_40 - (int)lVar6);
      uVar7 = uVar12;
      if ((bVar2 & 1) == 0) break;
      if (iVar11 == -1) {
        uVar13 = 0x9c;
        uVar10 = 0x7b;
        goto LAB_1801d2756;
      }
      iVar11 = iVar11 + 1;
      uVar12 = uVar8;
    }
    if (((iVar11 == 0) || (local_res18[0] != 0)) || (local_res20[0] != 0)) {
      if (uVar8 - uVar12 < (ulonglong)(longlong)local_res18[0]) {
        uVar7 = (longlong)local_res18[0] + (uVar12 - uVar8);
        if ((0x7fffffff < uVar7) || (uVar9 = 0x4000, uVar8 + uVar7 < uVar8)) {
          uVar13 = 0xb1;
          goto LAB_1801d2750;
        }
        while (uVar1 = uVar9, uVar7 != 0) {
          uVar9 = uVar7;
          if (uVar1 < uVar7) {
            uVar9 = uVar1;
          }
          lVar6 = FUN_1801aea60(lVar5,uVar9 + uVar8);
          if (lVar6 == 0) {
            uVar13 = 0xbe;
            uVar10 = 0x41;
            goto LAB_1801d2756;
          }
          uVar7 = uVar7 - uVar9;
          for (; uVar9 != 0; uVar9 = uVar9 - (longlong)iVar3) {
            iVar3 = FUN_18018dc10(param_1,*(longlong *)(lVar5 + 8) + uVar8,uVar9 & 0xffffffff);
            if (iVar3 < 1) {
              uVar13 = 0xc6;
              uVar10 = 0x8e;
              goto LAB_1801d2756;
            }
            uVar8 = uVar8 + (longlong)iVar3;
          }
          uVar9 = uVar1 * 2;
          if (0x3ffffffe < uVar1) {
            uVar9 = uVar1;
          }
        }
      }
      uVar7 = (longlong)local_res18[0] + uVar12;
      if (uVar7 < uVar12) {
        uVar13 = 0xd5;
        goto LAB_1801d2750;
      }
    }
    else {
      iVar11 = iVar11 + -1;
    }
    uVar12 = uVar8;
  } while (iVar11 != 0);
  if (uVar7 < 0x80000000) {
    *param_2 = lVar5;
    uVar7 = uVar7 & 0xffffffff;
  }
  else {
    uVar13 = 0xe1;
LAB_1801d2750:
    uVar10 = 0x9b;
LAB_1801d2756:
    FUN_1801a70c0(0xd,0x6b,uVar10,"crypto\\asn1\\a_d2i_fp.c",uVar13);
LAB_1801d276a:
    FUN_1801ae8b0(lVar5);
    uVar7 = 0xffffffff;
  }
  return uVar7;
}



// ===== FUN_1801d27a0 @ 1801d27a0 (size 640)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801d27a0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 local_res10;
  undefined8 local_res20;
  
  FUN_1801a7200();
  local_res10 = *param_2;
  lVar4 = FUN_1801d5690(0,&local_res10,param_3);
  if (lVar4 != 0) {
    lVar5 = FUN_1801d56b0(lVar4);
    FUN_1801d5550(lVar4);
    if (lVar5 == 0) {
      FUN_1801a6570();
      FUN_1801a70c0(0xd,0xcf,0xa7,"crypto\\asn1\\d2i_pr.c",0x7b);
      return 0;
    }
    *param_2 = local_res10;
    FUN_1801a6570();
    if (param_1 != (longlong *)0x0) {
      *param_1 = lVar5;
    }
    return lVar5;
  }
  local_res20 = *param_2;
  uVar6 = FUN_1801bc670(0,&local_res20,param_3);
  local_res20 = *param_2;
  iVar2 = FUN_1801958b0(uVar6);
  if (iVar2 == 6) {
    uVar8 = 0x74;
  }
  else {
    iVar2 = FUN_1801958b0(uVar6);
    uVar8 = 6;
    if (iVar2 == 4) {
      uVar8 = 0x198;
    }
  }
  FUN_1801958f0(uVar6,FUN_1801bc580);
  local_res10 = *param_2;
  if ((param_1 == (longlong *)0x0) || (lVar4 = *param_1, lVar4 == 0)) {
    lVar4 = FUN_18019e2c0();
    if (lVar4 == 0) {
      FUN_1801a70c0(0xd,0x9a,6,"crypto\\asn1\\d2i_pr.c",0x1d);
      goto LAB_1801d2a01;
    }
  }
  else {
    FUN_1801abfb0(*(undefined8 *)(lVar4 + 0x18));
    *(undefined8 *)(lVar4 + 0x18) = 0;
  }
  iVar2 = FUN_18019e6a0(lVar4,uVar8);
  if (iVar2 == 0) {
    uVar8 = 0x29;
    uVar6 = 0xa3;
LAB_1801d29de:
    FUN_1801a70c0(0xd,0x9a,uVar6,"crypto\\asn1\\d2i_pr.c",uVar8);
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0xb8);
    if ((pcVar1 != (code *)0x0) &&
       (iVar2 = (*pcVar1)(lVar4,&local_res10,param_3), lVar5 = lVar4, iVar2 != 0)) {
LAB_1801d29af:
      *param_2 = local_res10;
      if (param_1 != (longlong *)0x0) {
        *param_1 = lVar5;
      }
      if (lVar5 != 0) {
        FUN_1801a6fa0();
        return lVar5;
      }
      goto LAB_1801d2a01;
    }
    if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x40) == 0) {
      uVar8 = 0x3e;
      uVar6 = 0xd;
      goto LAB_1801d29de;
    }
    lVar7 = FUN_1801d5690(0,&local_res10,param_3);
    if (lVar7 != 0) {
      lVar5 = FUN_1801d56b0(lVar7);
      FUN_1801d5550(lVar7);
      if (lVar5 != 0) {
        FUN_18019deb0(lVar4);
        iVar2 = FUN_18019dc20(lVar5);
        iVar3 = FUN_18019e810(uVar8);
        lVar4 = lVar5;
        if (iVar3 == iVar2) goto LAB_1801d29af;
      }
    }
  }
  if ((param_1 == (longlong *)0x0) || (*param_1 != lVar4)) {
    FUN_18019deb0(lVar4);
  }
LAB_1801d2a01:
  FUN_1801a6570();
  return 0;
}



// ===== FUN_1801d2a20 @ 1801d2a20 (size 396)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801d2a20(undefined4 param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_res10;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1801d2a39;
  local_res10 = *param_3;
  if ((param_2 == (longlong *)0x0) || (lVar4 = *param_2, lVar4 == 0)) {
    lVar4 = FUN_18019e2c0();
    if (lVar4 == 0) {
      FUN_1801a70c0(0xd,0x9a,6,"crypto\\asn1\\d2i_pr.c",0x1d);
      return 0;
    }
  }
  else {
    FUN_1801abfb0(*(undefined8 *)(lVar4 + 0x18));
    *(undefined8 *)(lVar4 + 0x18) = 0;
  }
  iVar2 = FUN_18019e6a0(lVar4,param_1);
  if (iVar2 == 0) {
    uVar8 = 0x29;
    uVar7 = 0xa3;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0xb8);
    if ((pcVar1 != (code *)0x0) &&
       (iVar2 = (*pcVar1)(lVar4,&local_res10,param_4), lVar6 = lVar4, iVar2 != 0)) {
LAB_1801d2b49:
      *param_3 = local_res10;
      if (param_2 != (longlong *)0x0) {
        *param_2 = lVar6;
      }
      return lVar6;
    }
    if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x40) != 0) {
      lVar5 = FUN_1801d5690(0,&local_res10,param_4);
      if (lVar5 != 0) {
        lVar6 = FUN_1801d56b0(lVar5);
        FUN_1801d5550(lVar5);
        if (lVar6 != 0) {
          FUN_18019deb0(lVar4);
          iVar2 = FUN_18019dc20(lVar6);
          iVar3 = FUN_18019e810(param_1);
          lVar4 = lVar6;
          if (iVar3 == iVar2) goto LAB_1801d2b49;
        }
      }
      goto LAB_1801d2b7f;
    }
    uVar8 = 0x3e;
    uVar7 = 0xd;
  }
  FUN_1801a70c0(0xd,0x9a,uVar7,"crypto\\asn1\\d2i_pr.c",uVar8,uVar9);
LAB_1801d2b7f:
  if ((param_2 == (longlong *)0x0) || (*param_2 != lVar4)) {
    FUN_18019deb0(lVar4);
  }
  return 0;
}



// ===== FUN_1801d2c30 @ 1801d2c30 (size 66)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801d2c30(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1801984d0(*param_1);
    FUN_1801984d0(param_1[1]);
    FUN_180195e10(param_1,"crypto\\ec\\ec_asn1.c",0x4fe);
  }
  return;
}



// ===== FUN_1801d2ca0 @ 1801d2ca0 (size 85)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801d2ca0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801d2cac;
  lVar1 = FUN_180196100(0x10,"crypto\\ec\\ec_asn1.c",0x4f2);
  if (lVar1 == 0) {
    FUN_1801a70c0(0x10,0x109,0x41,"crypto\\ec\\ec_asn1.c",0x4f4,uVar2);
  }
  return lVar1;
}



// ===== FUN_1801d2d00 @ 1801d2d00 (size 106)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d2d00(longlong *param_1,longlong param_2,longlong param_3)

{
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  FUN_1801984d0(*param_1);
  FUN_1801984d0(param_1[1]);
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



// ===== FUN_1801d2d70 @ 1801d2d70 (size 119)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d2d70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  int local_28 [2];
  undefined1 *local_20;
  undefined8 uStack_8;
  
  uStack_8 = 0x1801d2d7a;
  if (((param_1 != 0) && (lVar2 = FUN_1800b7fa0(), lVar2 != 0)) &&
     (iVar1 = FUN_1801ddbf0(lVar2), iVar1 != 0)) {
    local_28[1] = 2;
    local_res8[0] = 0xff;
    local_28[0] = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
    local_20 = local_res8;
    iVar1 = FUN_1801bc6b0(local_28,0);
    uVar3 = FUN_18019a830(1,iVar1 * 2,0x10);
    if (-1 < (int)uVar3) {
      return uVar3;
    }
  }
  return 0;
}



// ===== FUN_1801d2df0 @ 1801d2df0 (size 111)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d2df0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  
  uVar2 = FUN_18008d530();
  iVar1 = FUN_18019a5f0(uVar2);
  if (iVar1 == 0x197) {
    iVar1 = 0;
    piVar3 = (int *)(param_1 + 0x48);
    lVar4 = 0;
    do {
      if (*piVar3 == 0) break;
      iVar1 = iVar1 + 1;
      lVar4 = lVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (lVar4 < 6);
    if (iVar1 == 4) {
      return 0x2ab;
    }
    if (iVar1 == 2) {
      return 0x2aa;
    }
  }
  return 0;
}



// ===== FUN_1801d2e60 @ 1801d2e60 (size 509)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_1801d2e60(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar9 = 0x1801d2e7a;
  local_res10 = 0;
  if (param_2 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_1801bf3f0(&DAT_18032ddf0);
    if (puVar4 == (undefined4 *)0x0) {
      uVar3 = 0x1cb;
      uVar7 = 0x41;
      goto LAB_1801d3013;
    }
  }
  else {
    puVar4 = param_2;
  }
  *puVar4 = 1;
  iVar2 = FUN_1801d4230(param_1,*(undefined8 *)(puVar4 + 2));
  if (iVar2 == 0) {
    uVar3 = 0x1d6;
    uVar7 = 0x10;
  }
  else {
    iVar2 = FUN_1801d3fb0(param_1,*(undefined8 *)(puVar4 + 4));
    if (iVar2 == 0) {
      uVar3 = 0x1dc;
      uVar7 = 0x10;
    }
    else {
      lVar5 = FUN_18013ff80(param_1);
      if (lVar5 == 0) {
        uVar3 = 0x1e2;
        uVar7 = 0x71;
      }
      else {
        uVar3 = FUN_18018d320(param_1);
        uVar8 = 0;
        uVar6 = FUN_180202310(param_1,lVar5,uVar3,&local_res10,0);
        if (uVar6 == 0) {
          uVar3 = 0x1ea;
          uVar7 = 0x10;
        }
        else {
          lVar5 = *(longlong *)(puVar4 + 6);
          if (lVar5 == 0) {
            lVar5 = FUN_1801bc530();
            *(longlong *)(puVar4 + 6) = lVar5;
            if (lVar5 == 0) {
              FUN_180195e10(local_res10,"crypto\\ec\\ec_asn1.c",0x1ee);
              uVar3 = 0x1ef;
              uVar7 = 0x41;
              goto LAB_1801d3013;
            }
          }
          FUN_18019a5a0(lVar5,local_res10,uVar6 & 0xffffffff);
          lVar5 = FUN_18007e060(param_1);
          if (lVar5 == 0) {
            uVar3 = 0x1f7;
            uVar7 = 0x10;
          }
          else {
            uVar1 = *(undefined8 *)(puVar4 + 8);
            lVar5 = FUN_1801dc120(lVar5,uVar1);
            *(longlong *)(puVar4 + 8) = lVar5;
            if (lVar5 == 0) {
              *(undefined8 *)(puVar4 + 8) = uVar1;
              uVar3 = 0x1fd;
            }
            else {
              lVar5 = FUN_1800b7fa0(param_1);
              if (lVar5 == 0) {
                return puVar4;
              }
              uVar1 = *(undefined8 *)(puVar4 + 10);
              lVar5 = FUN_1801dc120(lVar5,uVar1);
              *(longlong *)(puVar4 + 10) = lVar5;
              if (lVar5 != 0) {
                return puVar4;
              }
              *(undefined8 *)(puVar4 + 10) = uVar1;
              uVar3 = 0x207;
            }
            uVar7 = 0xd;
          }
        }
      }
    }
  }
LAB_1801d3013:
  FUN_1801a70c0(0x10,0x105,uVar7,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar8,uVar3),uVar9);
  if (param_2 == (undefined4 *)0x0) {
    FUN_1801bfa90(puVar4,&DAT_18032ddf0);
  }
  return (undefined4 *)0x0;
}



// ===== FUN_1801d3060 @ 1801d3060 (size 309)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_1801d3060(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801d3070;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)FUN_1801bf3f0(&DAT_18032de80);
    if (param_2 == (int *)0x0) {
      FUN_1801a70c0(0x10,0x106,0x41,"crypto\\ec\\ec_asn1.c",0x21c,uVar4);
      return (int *)0x0;
    }
  }
  else if (*param_2 == 0) {
    FUN_18019aa30(*(undefined8 *)(param_2 + 2));
  }
  else if ((*param_2 == 1) && (*(longlong *)(param_2 + 2) != 0)) {
    FUN_1801bfa90(*(longlong *)(param_2 + 2),&DAT_18032ddf0);
  }
  iVar1 = FUN_18018d330(param_1);
  if (iVar1 == 1) {
    iVar1 = FUN_18018d310();
    if (iVar1 != 0) {
      lVar2 = FUN_1801b9550(iVar1);
      if ((lVar2 != 0) && (lVar3 = FUN_1801b9350(lVar2), lVar3 != 0)) {
        *param_2 = 0;
        *(longlong *)(param_2 + 2) = lVar2;
        return param_2;
      }
      FUN_18019aa30(lVar2);
      FUN_1801a70c0(0x10,0x106,0xa7,"crypto\\ec\\ec_asn1.c",0x231);
    }
  }
  else {
    *param_2 = 1;
    lVar2 = FUN_1801d2e60(param_1,0);
    *(longlong *)(param_2 + 2) = lVar2;
    if (lVar2 != 0) {
      return param_2;
    }
  }
  FUN_1801bfa90(param_2,&DAT_18032de80);
  return (int *)0x0;
}



// ===== FUN_1801d31a0 @ 1801d31a0 (size 2268)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801d31a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  void *_Dst;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  bool bVar16;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar17;
  longlong local_58;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  plVar1 = *(longlong **)(param_1 + 8);
  local_res18 = 0;
  local_res20 = 0;
  lVar14 = 0;
  local_58 = 0;
  lVar11 = 0;
  lVar10 = 0;
  local_res10 = 0;
  lVar12 = lVar14;
  if (((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) || (plVar1[1] == 0)) {
    FUN_1801a70c0(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",0x255);
    bVar6 = false;
LAB_1801d3a15:
    bVar16 = !bVar6;
    lVar14 = lVar12;
    if (!bVar16) goto LAB_1801d3a28;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (((puVar2 == (undefined8 *)0x0) ||
        (puVar3 = (undefined4 *)*puVar2, puVar3 == (undefined4 *)0x0)) ||
       ((*(longlong *)(puVar3 + 2) == 0 || ((puVar2[1] == 0 || (*(longlong *)(puVar2[1] + 8) == 0)))
        ))) {
      uVar17 = 0x262;
      uVar15 = 0x73;
      goto LAB_1801d325b;
    }
    lVar10 = FUN_180198210(*(longlong *)(puVar3 + 2),*puVar3,0);
    if (lVar10 == 0) {
      uVar17 = 0x267;
LAB_1801d3255:
      uVar15 = 3;
    }
    else {
      puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 8);
      local_res10 = FUN_180198210(*(undefined8 *)(puVar3 + 2),*puVar3,0);
      if (local_res10 == 0) {
        uVar17 = 0x26c;
        goto LAB_1801d3255;
      }
      iVar7 = FUN_1801b96c0(**(undefined8 **)(param_1 + 8));
      if (iVar7 == 0x197) {
        piVar4 = *(int **)(*(longlong *)(param_1 + 8) + 8);
        iVar7 = *piVar4;
        if (iVar7 < 0x296) {
          lVar11 = FUN_180198b30();
          if (lVar11 != 0) {
            iVar8 = FUN_1801b96c0(*(undefined8 *)(piVar4 + 2));
            if (iVar8 != 0x2aa) {
              if (iVar8 == 0x2ab) {
                piVar5 = *(int **)(piVar4 + 4);
                if (piVar5 == (int *)0x0) {
                  FUN_1801a70c0(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar15,0x2a8));
                  lVar12 = 0;
                  bVar6 = false;
                }
                else {
                  if ((((piVar5[2] < *piVar4) && (piVar5[1] < piVar5[2])) && (*piVar5 < piVar5[1]))
                     && (0 < *piVar5)) {
                    iVar8 = FUN_180198e30(lVar11);
                    if (((iVar8 != 0) && (iVar8 = FUN_180198e30(lVar11,*piVar5), iVar8 != 0)) &&
                       ((iVar8 = FUN_180198e30(lVar11,piVar5[1]), iVar8 != 0 &&
                        (iVar8 = FUN_180198e30(lVar11,piVar5[2]), iVar8 != 0)))) goto LAB_1801d346a;
                    goto LAB_1801d3a0a;
                  }
                  FUN_1801a70c0(0x10,0x107,0x84,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar15,0x2b0));
                  lVar12 = 0;
                  bVar6 = false;
                }
              }
              else if (iVar8 == 0x2a9) {
                FUN_1801a70c0(0x10,0x107,0x7e,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar15,0x2c0));
                lVar12 = 0;
                bVar6 = false;
              }
              else {
                FUN_1801a70c0(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar15,0x2c4));
                lVar12 = 0;
                bVar6 = false;
              }
              goto LAB_1801d3a1d;
            }
            if (*(longlong *)(piVar4 + 4) == 0) {
              uVar17 = CONCAT44(uVar15,0x290);
              uVar15 = 0x73;
              goto LAB_1801d325b;
            }
            iVar8 = FUN_1801dbfa0();
            if ((*piVar4 <= iVar8) || (iVar8 < 1)) {
              FUN_1801a70c0(0x10,0x107,0x89,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar15,0x298));
              lVar12 = 0;
              bVar6 = false;
              goto LAB_1801d3a1d;
            }
            iVar9 = FUN_180198e30(lVar11);
            if (iVar9 != 0) {
              iVar8 = FUN_180198e30(lVar11,iVar8);
              if (iVar8 == 0) {
                bVar6 = false;
                goto LAB_1801d3a15;
              }
LAB_1801d346a:
              iVar8 = FUN_180198e30(lVar11,0);
              if (iVar8 != 0) {
                lVar12 = FUN_180209450(lVar11,lVar10,local_res10,0);
                goto LAB_1801d35c0;
              }
            }
LAB_1801d3a0a:
            bVar6 = false;
LAB_1801d3a0d:
            lVar12 = lVar14;
            goto LAB_1801d3a15;
          }
          uVar17 = 0x285;
          uVar15 = 0x41;
        }
        else {
          uVar17 = 0x280;
          uVar15 = 0x8f;
        }
      }
      else if (iVar7 == 0x196) {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        if (lVar12 == 0) {
          uVar17 = 0x2d0;
          uVar15 = 0x73;
        }
        else {
          lVar11 = FUN_1801dc100(lVar12,0);
          if (lVar11 == 0) {
            uVar17 = 0x2d5;
            uVar15 = 0xd;
          }
          else {
            iVar7 = FUN_180198a00(lVar11);
            if ((iVar7 == 0) && (iVar7 = FUN_180198a80(lVar11), iVar7 == 0)) {
              iVar7 = FUN_180198b90(lVar11);
              if (iVar7 < 0x296) {
                lVar12 = FUN_1802094e0(lVar11,lVar10,local_res10,0);
LAB_1801d35c0:
                lVar14 = lVar12;
                if (lVar12 == 0) {
                  FUN_1801a70c0(0x10,0x107,0x10,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar15,0x2ec));
                  bVar6 = false;
                  lVar12 = 0;
                  goto LAB_1801d3a1d;
                }
                piVar4 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x10);
                if (piVar4 == (int *)0x0) {
LAB_1801d36db:
                  if ((((*(longlong *)(param_1 + 0x20) != 0) &&
                       (piVar4 = *(int **)(param_1 + 0x18), piVar4 != (int *)0x0)) &&
                      (*(longlong *)(piVar4 + 2) != 0)) && (*piVar4 != 0)) {
                    local_res20 = FUN_1801de790(lVar12);
                    if (local_res20 == 0) goto LAB_1801d3a0a;
                    FUN_1801de000(lVar12,**(byte **)(*(longlong *)(param_1 + 0x18) + 8) & 0xfe);
                    uVar15 = 0;
                    iVar8 = FUN_180202250(lVar12,local_res20,
                                          *(undefined8 *)(*(int **)(param_1 + 0x18) + 2),
                                          (longlong)**(int **)(param_1 + 0x18),0);
                    if (iVar8 == 0) {
                      FUN_1801a70c0(0x10,0x107,0x10,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar15,0x318));
                      bVar6 = false;
                    }
                    else {
                      lVar13 = FUN_1801dc100(*(undefined8 *)(param_1 + 0x20),lVar10);
                      if (lVar13 == 0) {
                        uVar17 = CONCAT44(uVar15,0x31e);
LAB_1801d37a2:
                        uVar15 = 0xd;
                      }
                      else {
                        iVar8 = FUN_180198a00(lVar10);
                        if ((iVar8 == 0) && (iVar8 = FUN_180198a80(lVar10), iVar8 == 0)) {
                          iVar8 = FUN_180198b90(lVar10);
                          if (iVar7 + 1 < iVar8) {
                            FUN_1801a70c0(0x10,0x107,0x7a,"crypto\\ec\\ec_asn1.c",
                                          CONCAT44(uVar15,0x326));
                            bVar6 = false;
                            goto LAB_1801d3a1d;
                          }
                          if (*(longlong *)(param_1 + 0x28) == 0) {
                            FUN_180198910(local_res10);
                            local_res10 = 0;
                          }
                          else {
                            lVar13 = FUN_1801dc100(*(longlong *)(param_1 + 0x28),local_res10);
                            if (lVar13 == 0) {
                              uVar17 = CONCAT44(uVar15,0x32f);
                              goto LAB_1801d37a2;
                            }
                          }
                          iVar7 = FUN_1801ddc60(lVar12,local_res20,lVar10,local_res10);
                          if (iVar7 == 0) {
                            uVar17 = CONCAT44(uVar15,0x334);
                            uVar15 = 0x10;
                          }
                          else {
                            local_58 = FUN_1801c9050();
                            if (local_58 == 0) {
                              uVar17 = CONCAT44(uVar15,0x345);
                              uVar15 = 3;
                            }
                            else {
                              local_res18 = FUN_1801dd6b0(lVar12);
                              if (((local_res18 != 0) &&
                                  (lVar13 = FUN_1801de010(local_res18,0,0), lVar13 == 1)) &&
                                 (iVar7 = FUN_1801ddc60(local_res18,local_res20,lVar10,0),
                                 iVar7 != 0)) {
                                iVar7 = FUN_1802019a0(local_res18,local_58);
                                if (iVar7 != 0) {
                                  lVar14 = FUN_180201860(iVar7);
                                  if (lVar14 == 0) {
                                    uVar17 = CONCAT44(uVar15,0x364);
                                    uVar15 = 0x10;
                                    goto LAB_1801d37ad;
                                  }
                                  FUN_1801dd8b0(lVar12);
                                  FUN_18018dc80(lVar14,0);
                                  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) == 0) &&
                                     (lVar12 = FUN_1801de010(lVar14,0,0), lVar12 != 1))
                                  goto LAB_1801d3a0a;
                                }
                                bVar6 = true;
                                goto LAB_1801d3a0d;
                              }
                              uVar17 = CONCAT44(uVar15,0x34b);
                              uVar15 = 0x10;
                            }
                          }
                        }
                        else {
                          uVar17 = CONCAT44(uVar15,0x322);
                          uVar15 = 0x7a;
                        }
                      }
LAB_1801d37ad:
                      FUN_1801a70c0(0x10,0x107,uVar15,"crypto\\ec\\ec_asn1.c",uVar17);
                      bVar6 = false;
                      lVar14 = lVar12;
                    }
                    goto LAB_1801d3a1d;
                  }
                  uVar17 = 0x30a;
                }
                else {
                  if (*piVar4 != 0) {
                    FUN_180195e10(*(undefined8 *)(lVar12 + 0x30),"crypto\\ec\\ec_asn1.c",0x2fc);
                    _Dst = (void *)FUN_180195dc0((longlong)
                                                 **(int **)(*(longlong *)(param_1 + 0x10) + 0x10),
                                                 "crypto\\ec\\ec_asn1.c",0x2fd);
                    *(void **)(lVar12 + 0x30) = _Dst;
                    if (_Dst == (void *)0x0) {
                      FUN_1801a70c0(0x10,0x107,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar15,0x2fe));
                      bVar6 = false;
                      goto LAB_1801d3a1d;
                    }
                    piVar4 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x10);
                    memcpy(_Dst,*(void **)(piVar4 + 2),(longlong)*piVar4);
                    *(longlong *)(lVar12 + 0x38) =
                         (longlong)**(int **)(*(longlong *)(param_1 + 0x10) + 0x10);
                    goto LAB_1801d36db;
                  }
                  uVar17 = CONCAT44(uVar15,0x2f9);
                }
                FUN_1801a70c0(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",uVar17);
                bVar6 = false;
                goto LAB_1801d3a1d;
              }
              uVar17 = 0x2e0;
              uVar15 = 0x8f;
            }
            else {
              uVar17 = 0x2da;
              uVar15 = 0x67;
            }
          }
        }
      }
      else {
        uVar17 = 0x2e7;
        uVar15 = 0x67;
      }
    }
LAB_1801d325b:
    FUN_1801a70c0(0x10,0x107,uVar15,"crypto\\ec\\ec_asn1.c",uVar17);
    bVar6 = false;
    lVar12 = 0;
  }
LAB_1801d3a1d:
  FUN_1801dd8b0(lVar14);
  bVar16 = !bVar6;
LAB_1801d3a28:
  lVar14 = 0;
  if (!bVar16) {
    lVar14 = lVar12;
  }
  FUN_1801dd8b0(local_res18);
  FUN_180198910(lVar11);
  FUN_180198910(lVar10);
  FUN_180198910(local_res10);
  FUN_1801de3b0(local_res20);
  FUN_1801c8dd0(local_58);
  return lVar14;
}



// ===== FUN_1801d3a80 @ 1801d3a80 (size 248)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801d3a80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_1 == (int *)0x0) {
    FUN_1801a70c0(0x10,0x108,0x7c,"crypto\\ec\\ec_asn1.c",0x398);
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = FUN_1801b96c0(*(undefined8 *)(param_1 + 2));
    lVar3 = FUN_180201860(uVar2);
    if (lVar3 != 0) {
      FUN_18018dc80(lVar3,1);
      return lVar3;
    }
    uVar4 = 0x3a1;
    uVar2 = 0x77;
  }
  else if (iVar1 == 1) {
    lVar3 = FUN_1801d31a0(*(undefined8 *)(param_1 + 2));
    if (lVar3 != 0) {
      FUN_18018dc80(lVar3,0);
      return lVar3;
    }
    uVar4 = 0x3a9;
    uVar2 = 0x10;
  }
  else {
    if (iVar1 == 2) {
      return 0;
    }
    uVar4 = 0x3b1;
    uVar2 = 0x73;
  }
  FUN_1801a70c0(0x10,0x108,uVar2,"crypto\\ec\\ec_asn1.c",uVar4);
  return 0;
}



// ===== FUN_1801d3ba0 @ 1801d3ba0 (size 438)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801d3ba0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_res10;
  undefined8 uVar7;
  
  uVar7 = 0x1801d3baf;
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    FUN_1801a70c0(0x10,0x90,0x43,"crypto\\ec\\ec_asn1.c",0x494,0x1801d3baf);
    return 0;
  }
  if (((param_1 == (longlong *)0x0) || (lVar3 = *param_1, lVar3 == 0)) &&
     (lVar3 = FUN_1801c5420(), lVar3 == 0)) {
    FUN_1801a70c0(0x10,0x90,0x41,"crypto\\ec\\ec_asn1.c",0x49a,uVar7);
    return 0;
  }
  local_res10 = *param_2;
  plVar1 = (longlong *)(lVar3 + 0x18);
  piVar4 = (int *)FUN_1801bfef0(0,&local_res10,param_3,&DAT_18032de80);
  if (piVar4 == (int *)0x0) {
    uVar2 = 0x3c1;
    uVar6 = 0x75;
  }
  else {
    lVar5 = FUN_1801d3a80(piVar4);
    if (lVar5 != 0) {
      if (*piVar4 == 1) {
        *(undefined4 *)(lVar5 + 0x28) = 1;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_1801dd8b0(*plVar1);
        *plVar1 = lVar5;
      }
      FUN_1801bfa90(piVar4,&DAT_18032de80);
      *param_2 = local_res10;
      if (param_1 != (longlong *)0x0) {
        *param_1 = lVar3;
      }
      return lVar3;
    }
    uVar2 = 0x3c7;
    uVar6 = 0x7f;
  }
  FUN_1801a70c0(0x10,0x91,uVar6,"crypto\\ec\\ec_asn1.c",uVar2,uVar7);
  FUN_1801bfa90(piVar4,&DAT_18032de80);
  FUN_1801a70c0(0x10,0x90,0x10,"crypto\\ec\\ec_asn1.c",0x4a1);
  if ((param_1 == (longlong *)0x0) || (*param_1 != lVar3)) {
    FUN_1801c5270(lVar3);
  }
  return 0;
}



// ===== FUN_1801d3d60 @ 1801d3d60 (size 577)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801d3d60(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_res10;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1801d3d70;
  local_res10 = *param_2;
  puVar3 = (undefined4 *)FUN_1801bfef0(0,&local_res10,param_3,&DAT_18032df30);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_1801a70c0(0x10,0x92,0x10,"crypto\\ec\\ec_asn1.c",0x3f3,uVar9);
    return 0;
  }
  if (((param_1 == (longlong *)0x0) || (lVar4 = *param_1, lVar4 == 0)) &&
     (lVar4 = FUN_1801c5420(), lVar4 == 0)) {
    uVar8 = 0x3f9;
    uVar7 = 0x41;
  }
  else {
    if (*(longlong *)(puVar3 + 4) != 0) {
      FUN_1801dd8b0(*(undefined8 *)(lVar4 + 0x18));
      lVar5 = FUN_1801d3a80(*(undefined8 *)(puVar3 + 4));
      *(longlong *)(lVar4 + 0x18) = lVar5;
      if ((lVar5 != 0) && (**(int **)(puVar3 + 4) == 1)) {
        *(undefined4 *)(lVar5 + 0x28) = 1;
      }
    }
    if (*(longlong *)(lVar4 + 0x18) == 0) {
      uVar8 = 0x408;
      uVar7 = 0x10;
    }
    else {
      *(undefined4 *)(lVar4 + 0x10) = *puVar3;
      lVar5 = *(longlong *)(puVar3 + 2);
      if (lVar5 == 0) {
        uVar8 = 0x414;
        uVar7 = 0x7d;
      }
      else {
        iVar2 = FUN_18019a410(lVar5);
        uVar6 = FUN_18013ff80(lVar5);
        iVar2 = FUN_1801c5550(lVar4,uVar6,(longlong)iVar2);
        if (iVar2 == 0) goto LAB_1801d3f65;
        FUN_1801de1a0(*(undefined8 *)(lVar4 + 0x20));
        lVar5 = FUN_1801de790(*(undefined8 *)(lVar4 + 0x18));
        *(longlong *)(lVar4 + 0x20) = lVar5;
        if (lVar5 == 0) {
          uVar8 = 0x41b;
          uVar7 = 0x10;
        }
        else {
          if (*(longlong *)(puVar3 + 6) == 0) {
            pcVar1 = *(code **)(**(longlong **)(lVar4 + 0x18) + 0x168);
            if ((pcVar1 == (code *)0x0) || (iVar2 = (*pcVar1)(lVar4), iVar2 == 0))
            goto LAB_1801d3f65;
            *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 2;
LAB_1801d3f1d:
            if (param_1 != (longlong *)0x0) {
              *param_1 = lVar4;
            }
            FUN_1801bfa90(puVar3,&DAT_18032df30);
            *param_2 = local_res10;
            return lVar4;
          }
          uVar6 = FUN_18013ff80();
          iVar2 = FUN_18019a410(*(undefined8 *)(puVar3 + 6));
          iVar2 = FUN_1801c54b0(lVar4,uVar6,(longlong)iVar2,0);
          if (iVar2 != 0) goto LAB_1801d3f1d;
          uVar8 = 0x426;
          uVar7 = 0x10;
        }
      }
    }
  }
  FUN_1801a70c0(0x10,0x92,uVar7,"crypto\\ec\\ec_asn1.c",uVar8,uVar9);
LAB_1801d3f65:
  if ((param_1 == (longlong *)0x0) || (*param_1 != lVar4)) {
    FUN_1801c5270(lVar4);
  }
  FUN_1801bfa90(puVar3,&DAT_18032df30);
  return 0;
}



// ===== FUN_1801d3fb0 @ 1801d3fb0 (size 628)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d3fb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar10;
  undefined8 uVar11;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar11 = 0x1801d3fc7;
  uVar8 = 0;
  lVar3 = 0;
  lVar4 = 0;
  lVar5 = 0;
  if ((((param_1 == 0) || (param_2 == (longlong *)0x0)) || (*param_2 == 0)) || (param_2[1] == 0)) {
    return 0;
  }
  lVar2 = FUN_180198b30();
  if ((lVar2 == 0) || (lVar3 = FUN_180198b30(), lVar3 == 0)) {
    uVar11 = CONCAT44(uVar10,0x17f);
LAB_1801d419c:
    uVar9 = 0x41;
  }
  else {
    uVar10 = 0;
    iVar1 = FUN_1801dd9c0(param_1,0,lVar2,lVar3,0,uVar11);
    if (iVar1 == 0) {
      uVar11 = CONCAT44(uVar10,0x185);
      uVar9 = 0x10;
    }
    else {
      iVar1 = FUN_1801dda10(param_1);
      uVar7 = (longlong)iVar1 + 7U >> 3;
      lVar4 = FUN_180195dc0(uVar7,"crypto\\ec\\ec_asn1.c",399);
      if ((lVar4 == 0) || (lVar5 = FUN_180195dc0(uVar7,"crypto\\ec\\ec_asn1.c",400), lVar5 == 0)) {
        uVar11 = CONCAT44(uVar10,0x191);
        goto LAB_1801d419c;
      }
      iVar1 = FUN_180198430(lVar2,lVar4,uVar7 & 0xffffffff);
      if ((iVar1 < 0) || (iVar1 = FUN_180198430(lVar3,lVar5,uVar7 & 0xffffffff), iVar1 < 0)) {
        uVar11 = CONCAT44(uVar10,0x196);
        uVar9 = 3;
      }
      else {
        iVar1 = FUN_1801dfa10(*param_2,lVar4,uVar7 & 0xffffffff);
        if ((iVar1 != 0) && (iVar1 = FUN_1801dfa10(param_2[1],lVar5,uVar7 & 0xffffffff), iVar1 != 0)
           ) {
          if (*(longlong *)(param_1 + 0x30) == 0) {
            FUN_1801bc3c0(param_2[2]);
            param_2[2] = 0;
          }
          else {
            lVar6 = param_2[2];
            if (lVar6 == 0) {
              lVar6 = FUN_1801bc3f0();
              param_2[2] = lVar6;
              if (lVar6 == 0) {
                uVar11 = CONCAT44(uVar10,0x1a5);
                goto LAB_1801d419c;
              }
            }
            *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) & 0xfffffff0;
            *(uint *)(param_2[2] + 0x10) = *(uint *)(param_2[2] + 0x10) | 8;
            iVar1 = FUN_1801dfa10(param_2[2],*(undefined8 *)(param_1 + 0x30),
                                  *(undefined4 *)(param_1 + 0x38));
            if (iVar1 == 0) {
              uVar11 = CONCAT44(uVar10,0x1ac);
              uVar9 = 0xd;
              goto LAB_1801d41a7;
            }
          }
          uVar8 = 1;
          goto LAB_1801d41b8;
        }
        uVar11 = CONCAT44(uVar10,0x19d);
        uVar9 = 0xd;
      }
    }
  }
LAB_1801d41a7:
  FUN_1801a70c0(0x10,0x99,uVar9,"crypto\\ec\\ec_asn1.c",uVar11);
LAB_1801d41b8:
  FUN_180195e10(lVar4,"crypto\\ec\\ec_asn1.c",0x1b7);
  FUN_180195e10(lVar5,"crypto\\ec\\ec_asn1.c",0x1b8);
  FUN_180198910(lVar2);
  FUN_180198910(lVar3);
  return uVar8;
}



// ===== FUN_1801d4230 @ 1801d4230 (size 904)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d4230(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_ffffffffffffffd8;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar12 = 0;
  lVar7 = 0;
  if ((param_1 == 0) || (param_2 == (longlong *)0x0)) {
    return 0;
  }
  FUN_18019aa30(*param_2);
  FUN_1801bc580(param_2[1]);
  uVar5 = FUN_18008d530(param_1);
  iVar3 = FUN_18019a5f0(uVar5);
  lVar6 = FUN_1801b9550(iVar3);
  *param_2 = lVar6;
  if (lVar6 == 0) {
    FUN_1801a70c0(0x10,0x9a,8,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar11,0x109));
    goto LAB_1801d4583;
  }
  if (iVar3 == 0x196) {
    lVar7 = FUN_180198b30();
    if (lVar7 == 0) {
      uVar5 = CONCAT44(uVar11,0x10f);
      uVar11 = 0x41;
    }
    else {
      uVar11 = 0;
      iVar3 = FUN_1801dd9c0(param_1,lVar7,0,0,0);
      if (iVar3 == 0) {
        uVar5 = CONCAT44(uVar11,0x114);
        uVar11 = 0x10;
      }
      else {
        lVar6 = FUN_1801dc120(lVar7,0);
        param_2[1] = lVar6;
        if (lVar6 != 0) goto LAB_1801d450c;
        uVar5 = CONCAT44(uVar11,0x11a);
        uVar11 = 0xd;
      }
    }
LAB_1801d456d:
    uVar10 = 0x9a;
  }
  else {
    if (iVar3 != 0x197) {
      uVar5 = CONCAT44(uVar11,0x169);
      uVar11 = 0x83;
      goto LAB_1801d456d;
    }
    puVar8 = (undefined4 *)FUN_1801bf3f0(&DAT_18032db60);
    param_2[1] = (longlong)puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      uVar5 = CONCAT44(uVar11,300);
      uVar11 = 0x41;
      goto LAB_1801d456d;
    }
    uVar4 = FUN_1801dda10(param_1);
    *puVar8 = uVar4;
    uVar5 = FUN_18008d530(param_1);
    iVar3 = FUN_18019a5f0(uVar5);
    if (iVar3 != 0x197) {
LAB_1801d4548:
      uVar5 = CONCAT44(uVar11,0x135);
      uVar11 = 0x10;
      goto LAB_1801d456d;
    }
    iVar3 = 0;
    piVar9 = (int *)(param_1 + 0x48);
    lVar6 = 0;
    do {
      if (*piVar9 == 0) break;
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (lVar6 < 6);
    if (iVar3 == 4) {
      iVar3 = 0x2ab;
    }
    else {
      if (iVar3 != 2) goto LAB_1801d4548;
      iVar3 = 0x2aa;
    }
    lVar6 = FUN_1801b9550(iVar3);
    *(longlong *)(puVar8 + 2) = lVar6;
    if (lVar6 == 0) {
      uVar5 = CONCAT44(uVar11,0x13a);
      uVar11 = 8;
      goto LAB_1801d456d;
    }
    if (iVar3 != 0x2aa) {
      if (iVar3 == 0x2ab) {
        uVar5 = FUN_18008d530(param_1);
        iVar3 = FUN_18019a5f0(uVar5);
        if ((((iVar3 != 0x197) || (*(int *)(param_1 + 0x48) == 0)) ||
            ((iVar3 = *(int *)(param_1 + 0x4c), iVar3 == 0 ||
             ((iVar1 = *(int *)(param_1 + 0x50), iVar1 == 0 ||
              (iVar2 = *(int *)(param_1 + 0x54), iVar2 == 0)))))) || (*(int *)(param_1 + 0x58) != 0)
           ) {
          uVar10 = 0xc1;
          uVar5 = CONCAT44(uVar11,0x4a);
          uVar11 = 0x42;
          goto LAB_1801d4572;
        }
        piVar9 = (int *)FUN_1801bf3f0(&DAT_18032da00);
        *(int **)(puVar8 + 4) = piVar9;
        if (piVar9 != (int *)0x0) {
          *piVar9 = iVar2;
          *(int *)(*(longlong *)(puVar8 + 4) + 4) = iVar1;
          *(int *)(*(longlong *)(puVar8 + 4) + 8) = iVar3;
          goto LAB_1801d450c;
        }
        uVar5 = CONCAT44(uVar11,0x155);
        uVar11 = 0x41;
      }
      else {
        lVar6 = FUN_1801bc4e0();
        *(longlong *)(puVar8 + 4) = lVar6;
        if (lVar6 != 0) {
LAB_1801d450c:
          uVar12 = 1;
          goto LAB_1801d4583;
        }
        uVar5 = CONCAT44(uVar11,0x162);
        uVar11 = 0x41;
      }
      goto LAB_1801d456d;
    }
    uVar5 = FUN_18008d530(param_1);
    iVar3 = FUN_18019a5f0(uVar5);
    if ((((iVar3 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) &&
        (iVar3 = *(int *)(param_1 + 0x4c), iVar3 != 0)) && (*(int *)(param_1 + 0x50) == 0)) {
      lVar6 = FUN_1801bc4b0();
      *(longlong *)(puVar8 + 4) = lVar6;
      if (lVar6 == 0) {
        uVar5 = CONCAT44(uVar11,0x146);
        uVar11 = 0x41;
      }
      else {
        iVar3 = FUN_1801dc0e0(lVar6,iVar3);
        if (iVar3 != 0) goto LAB_1801d450c;
        uVar5 = CONCAT44(uVar11,0x14a);
        uVar11 = 0xd;
      }
      goto LAB_1801d456d;
    }
    uVar10 = 0xc2;
    uVar5 = CONCAT44(uVar11,0x34);
    uVar11 = 0x42;
  }
LAB_1801d4572:
  FUN_1801a70c0(0x10,uVar10,uVar11,"crypto\\ec\\ec_asn1.c",uVar5);
LAB_1801d4583:
  FUN_180198910(lVar7);
  return uVar12;
}



// ===== FUN_1801d45e0 @ 1801d45e0 (size 246)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801d45e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801d45ec;
  if (param_1 == 0) {
    FUN_1801a70c0(0x10,0xbe,0x43,"crypto\\ec\\ec_asn1.c",0x489,0x1801d45ec);
    return 0;
  }
  lVar2 = FUN_1801d3060(*(undefined8 *)(param_1 + 0x18),0);
  if (lVar2 == 0) {
    FUN_1801a70c0(0x10,0xbf,0x78,"crypto\\ec\\ec_asn1.c",0x3de,uVar3);
    return 0;
  }
  iVar1 = FUN_1801c2350(lVar2,param_2,&DAT_18032de80);
  if (iVar1 == 0) {
    FUN_1801a70c0(0x10,0xbf,0x79,"crypto\\ec\\ec_asn1.c",0x3e2,uVar3);
    FUN_1801bfa90(lVar2,&DAT_18032de80);
    return 0;
  }
  FUN_1801bfa90(lVar2,&DAT_18032de80);
  return iVar1;
}



// ===== FUN_1801d46e0 @ 1801d46e0 (size 552)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801d46e0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x1801d46fc;
  local_res8 = 0;
  local_res18 = 0;
  iVar2 = 0;
  bVar1 = false;
  uVar4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) ||
     (((*(byte *)(param_1 + 0x30) & 2) == 0 && (*(longlong *)(param_1 + 0x20) == 0)))) {
    uVar9 = 0x448;
    uVar8 = 0x43;
  }
  else {
    puVar3 = (undefined4 *)FUN_1801bf3f0(&DAT_18032df30);
    if (puVar3 == (undefined4 *)0x0) {
      uVar9 = 0x44d;
      uVar8 = 0x41;
    }
    else {
      *puVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = FUN_1801c55b0(param_1,&local_res8);
      if (uVar4 == 0) {
        uVar9 = 0x456;
        uVar8 = 0x10;
      }
      else {
        FUN_18019a5a0(*(undefined8 *)(puVar3 + 2),local_res8,uVar4 & 0xffffffff);
        local_res8 = 0;
        if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
          lVar5 = FUN_1801d3060(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(puVar3 + 4));
          *(longlong *)(puVar3 + 4) = lVar5;
          if (lVar5 == 0) {
            uVar9 = 0x461;
            uVar8 = 0x10;
            goto LAB_1801d4897;
          }
        }
        if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
          lVar5 = FUN_1801bc3f0();
          *(longlong *)(puVar3 + 6) = lVar5;
          if (lVar5 == 0) {
            uVar9 = 0x469;
            uVar8 = 0x41;
          }
          else {
            uVar6 = FUN_1801c53d0(param_1,*(undefined4 *)(param_1 + 0x34),&local_res18,0);
            if (uVar6 != 0) {
              *(uint *)(*(longlong *)(puVar3 + 6) + 0x10) =
                   *(uint *)(*(longlong *)(puVar3 + 6) + 0x10) & 0xfffffff0;
              *(uint *)(*(longlong *)(puVar3 + 6) + 0x10) =
                   *(uint *)(*(longlong *)(puVar3 + 6) + 0x10) | 8;
              FUN_18019a5a0(*(undefined8 *)(puVar3 + 6),local_res18,uVar6 & 0xffffffff);
              local_res18 = 0;
              goto LAB_1801d4851;
            }
            uVar9 = 0x470;
            uVar8 = 0x10;
          }
        }
        else {
LAB_1801d4851:
          iVar2 = FUN_1801c2350(puVar3,param_2,&DAT_18032df30);
          if (iVar2 != 0) {
            bVar1 = true;
            goto LAB_1801d48a8;
          }
          uVar9 = 0x47b;
          uVar8 = 0x10;
        }
      }
    }
  }
LAB_1801d4897:
  FUN_1801a70c0(0x10,0xc0,uVar8,"crypto\\ec\\ec_asn1.c",uVar9,uVar10);
LAB_1801d48a8:
  FUN_180195f20(local_res8,uVar4,"crypto\\ec\\ec_asn1.c",0x480);
  FUN_180195e10(local_res18,"crypto\\ec\\ec_asn1.c",0x481);
  FUN_1801bfa90(puVar3,&DAT_18032df30);
  iVar7 = 0;
  if (bVar1) {
    iVar7 = iVar2;
  }
  return iVar7;
}



// ===== FUN_1801d4910 @ 1801d4910 (size 354)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801d4910(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  bVar1 = false;
  if (param_1 == 0) {
    FUN_1801a70c0(0x10,0x97,0x43,"crypto\\ec\\ec_asn1.c",0x4c7,0x1801d492b);
    uVar2 = 0;
  }
  else {
    uVar4 = 0;
    uVar2 = FUN_180202400(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                          *(undefined4 *)(param_1 + 0x34),0,0,0);
    if ((param_2 != (longlong *)0x0) && (uVar2 != 0)) {
      lVar3 = *param_2;
      if (lVar3 == 0) {
        lVar3 = FUN_180195dc0(uVar2,"crypto\\ec\\ec_asn1.c",0x4d3);
        *param_2 = lVar3;
        if (lVar3 == 0) {
          FUN_1801a70c0(0x10,0x97,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar4,0x4d4));
          return 0;
        }
        bVar1 = true;
      }
      lVar3 = FUN_180202400(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                            *(undefined4 *)(param_1 + 0x34),lVar3,uVar2,0);
      if (lVar3 == 0) {
        FUN_1801a70c0(0x10,0x97,0x10,"crypto\\ec\\ec_asn1.c",0x4db);
        if (bVar1) {
          FUN_180195e10(*param_2,"crypto\\ec\\ec_asn1.c",0x4dd);
          *param_2 = 0;
        }
        return 0;
      }
      if (!bVar1) {
        *param_2 = *param_2 + uVar2;
      }
    }
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// ===== FUN_1801d4a80 @ 1801d4a80 (size 191)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801d4a80(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801d4a90;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x18) == 0)) {
    FUN_1801a70c0(0x10,0x98,0x43,"crypto\\ec\\ec_asn1.c",0x4b5,0x1801d4a90);
    return 0;
  }
  iVar2 = FUN_1801c54b0(lVar1,*param_2,(longlong)param_3,0);
  if (iVar2 == 0) {
    FUN_1801a70c0(0x10,0x98,0x10,"crypto\\ec\\ec_asn1.c",0x4ba,uVar3);
    return 0;
  }
  *param_2 = *param_2 + (longlong)param_3;
  return lVar1;
}



// ===== FUN_1801d4b40 @ 1801d4b40 (size 86)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_1801d4b40(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_18019fb00();
    *param_2 = lVar1;
    return -(lVar1 != 0) & 2;
  }
  if (param_1 == 2) {
    FUN_18019f9f0(*param_2);
    *param_2 = 0;
    return 2;
  }
  return 1;
}



// ===== FUN_1801d4ba0 @ 1801d4ba0 (size 66)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801d4ba0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1801984d0(*param_1);
    FUN_1801984d0(param_1[1]);
    FUN_180195e10(param_1,"crypto\\dsa\\dsa_asn1.c",0x26);
  }
  return;
}



// ===== FUN_1801d4bf0 @ 1801d4bf0 (size 81)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801d4bf0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801d4bfc;
  lVar1 = FUN_180196100(0x10,"crypto\\dsa\\dsa_asn1.c",0x1a);
  if (lVar1 == 0) {
    FUN_1801a70c0(10,0x66,0x41,"crypto\\dsa\\dsa_asn1.c",0x1c,uVar2);
  }
  return lVar1;
}



// ===== FUN_1801d4c50 @ 1801d4c50 (size 136)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801d4c50(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180209570(param_2,param_3,param_6);
  if (puVar2 == (undefined8 *)0x0) {
    *param_5 = 0;
    return 0;
  }
  uVar1 = FUN_1801c2350(puVar2,&local_res20,&DAT_18032e1e0);
  *param_5 = uVar1;
  FUN_1801984d0(*puVar2);
  FUN_1801984d0(puVar2[1]);
  FUN_180195e10(puVar2,"crypto\\dsa\\dsa_asn1.c",0x26);
  return 1;
}



// ===== FUN_1801d4ce0 @ 1801d4ce0 (size 350)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1801d4ce0(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,int param_5,
             undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *local_res20;
  void *local_28;
  void *local_20;
  
  local_28 = (void *)0x0;
  iVar2 = -1;
  uVar4 = 0xffffffff;
  local_20 = param_4;
  local_res20 = (undefined8 *)FUN_180196100(0x10,"crypto\\dsa\\dsa_asn1.c",0x1a);
  if (local_res20 == (undefined8 *)0x0) {
    FUN_1801a70c0(10,0x66,0x41,"crypto\\dsa\\dsa_asn1.c",0x1c);
    uVar4 = 0xffffffff;
  }
  else {
    lVar5 = FUN_1801bfef0(&local_res20,&local_20,param_5,&DAT_18032e1e0);
    if (lVar5 != 0) {
      iVar2 = FUN_1801c2350(local_res20,&local_28,&DAT_18032e1e0);
      if ((iVar2 == param_5) && (iVar3 = memcmp(param_4,local_28,(longlong)iVar2), iVar3 == 0)) {
        uVar4 = FUN_180209590(param_2,param_3,local_res20,param_6);
      }
    }
    FUN_180195f20(local_28,(longlong)iVar2,"crypto\\dsa\\dsa_asn1.c",0x98);
    puVar1 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      FUN_1801984d0(*local_res20);
      FUN_1801984d0(puVar1[1]);
      FUN_180195e10(puVar1,"crypto\\dsa\\dsa_asn1.c",0x26);
    }
  }
  return uVar4;
}



// ===== FUN_1801d4f90 @ 1801d4f90 (size 126)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d4f90(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 10) {
    iVar1 = FUN_18020a820(param_4 + 2,*param_2);
    if (iVar1 < 1) {
      return 0;
    }
LAB_1801d4fea:
    lVar2 = FUN_180209ea0(*param_2,*param_4);
    param_4[1] = lVar2;
    if (lVar2 != 0) {
      return 1;
    }
  }
  else {
    if (param_1 != 0xb) {
      if (param_1 == 0xc) goto LAB_1801d4fea;
      if (param_1 != 0xd) {
        return 1;
      }
    }
    iVar1 = FUN_1802098e0(*param_2,param_4[1]);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801d5170 @ 1801d5170 (size 158)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801d5170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong local_18 [2];
  
  local_18[1] = 0x1801d5180;
  local_18[0] = 0;
  iVar1 = FUN_1801c2350(param_3,local_18,param_1);
  if (local_18[0] != 0) {
    iVar1 = FUN_18019cda0(local_18[0],(longlong)iVar1,param_4,param_5,param_2,0);
    if (iVar1 != 0) {
      FUN_180195e10(local_18[0],"crypto\\asn1\\a_digest.c",0x41);
      return 1;
    }
    FUN_180195e10(local_18[0],"crypto\\asn1\\a_digest.c",0x3e);
  }
  return 0;
}



// ===== FUN_1801d5210 @ 1801d5210 (size 753)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801d5210(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                 longlong param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffb8;
  int *piVar10;
  longlong lVar11;
  undefined4 local_38 [2];
  longlong local_30;
  
  lVar11 = param_5;
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  iVar4 = -1;
  lVar9 = 0;
  local_30 = 0;
  if (param_5 == 0) {
    FUN_1801a70c0(0xd,0xc5,0x43,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x62));
    return -1;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    FUN_1801a70c0(0xd,0xc5,0xdc,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x67));
    return -1;
  }
  lVar5 = FUN_18019d560();
  if (lVar5 == 0) {
    FUN_1801a70c0(0xd,0xc5,0x41,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x6d));
    goto LAB_1801d54bd;
  }
  uVar2 = FUN_1801b96c0(*param_2);
  iVar3 = FUN_1801dcba0(uVar2,&param_5,local_38);
  if (iVar3 == 0) {
    uVar6 = 0x73;
LAB_1801d530d:
    uVar8 = 199;
  }
  else if ((int)param_5 == 0) {
    if ((*(longlong *)(lVar11 + 0x10) == 0) ||
       (pcVar1 = *(code **)(*(longlong *)(lVar11 + 0x10) + 200), pcVar1 == (code *)0x0)) {
      uVar6 = 0x79;
      goto LAB_1801d530d;
    }
    piVar10 = param_3;
    iVar4 = (*pcVar1)(lVar5,param_1,param_4,param_2,param_3,lVar11);
    uVar2 = (undefined4)((ulonglong)piVar10 >> 0x20);
    if (iVar4 != 2) goto LAB_1801d54bd;
LAB_1801d5376:
    iVar4 = FUN_1801c2350(param_4,&local_30,param_1);
    if (iVar4 < 1) {
      FUN_1801a70c0(0xd,0xc5,0x44,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x9e));
      iVar4 = -1;
      goto LAB_1801d54bd;
    }
    if (local_30 == 0) {
      FUN_1801a70c0(0xd,0xc5,0x41,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0xa2));
      iVar4 = -1;
      goto LAB_1801d54bd;
    }
    lVar9 = (longlong)iVar4;
    iVar4 = FUN_18020ab90(lVar5,*(undefined8 *)(param_3 + 2),(longlong)*param_3,local_30,lVar9);
    if (0 < iVar4) {
      iVar4 = 1;
      goto LAB_1801d54bd;
    }
    uVar6 = 0xaa;
    uVar8 = 6;
  }
  else {
    uVar6 = FUN_1801b9610();
    lVar7 = FUN_1801dcf20(uVar6);
    if (lVar7 == 0) {
      uVar6 = 0x8a;
      uVar8 = 0xa1;
    }
    else {
      iVar3 = FUN_18019e810(local_38[0]);
      if (iVar3 == **(int **)(lVar11 + 0x10)) {
        iVar4 = FUN_18020ae60(lVar5,0,lVar7,0,lVar11);
        uVar2 = (undefined4)((ulonglong)lVar11 >> 0x20);
        if (iVar4 == 0) {
          FUN_1801a70c0(0xd,0xc5,6,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x95));
          iVar4 = 0;
          goto LAB_1801d54bd;
        }
        goto LAB_1801d5376;
      }
      uVar6 = 0x90;
      uVar8 = 200;
    }
  }
  FUN_1801a70c0(0xd,0xc5,uVar8,"crypto\\asn1\\a_verify.c",uVar6);
LAB_1801d54bd:
  FUN_180195f20(local_30,lVar9,"crypto\\asn1\\a_verify.c",0xaf);
  FUN_18019d520(lVar5);
  return iVar4;
}



// ===== FUN_1801d5580 @ 1801d5580 (size 127)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801d5580(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             longlong param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = **(undefined8 **)(param_5 + 8);
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_18013ff80(*(undefined8 *)(param_5 + 0x10));
    *param_2 = uVar2;
    uVar1 = FUN_18019a410(*(undefined8 *)(param_5 + 0x10));
    *param_3 = uVar1;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_5 + 8);
  }
  return 1;
}



// ===== FUN_1801d5600 @ 1801d5600 (size 140)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801d5600(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4,
             undefined8 param_5,longlong param_6,undefined4 param_7)

{
  int iVar1;
  
  if ((-1 < param_3) && (iVar1 = FUN_1801dc0e0(*param_1,param_3), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_1801a1e70(param_1[1],param_2,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_6 != 0) {
    FUN_18019a5a0(param_1[2],param_6,param_7);
  }
  return 1;
}



// ===== FUN_1801d56b0 @ 1801d56b0 (size 348)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801d56b0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78 [2];
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801d56bc;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  iVar2 = FUN_1801d5580(local_78,0,0,0);
  if (iVar2 != 0) {
    lVar4 = FUN_18019e2c0();
    if (lVar4 == 0) {
      local_88 = CONCAT44(local_88._4_4_,0x1f);
      FUN_1801a70c0(6,0x6f,0x41,"crypto\\evp\\evp_pkey.c");
    }
    else {
      uVar3 = FUN_1801b96c0(local_78[0]);
      iVar2 = FUN_18019e6a0(lVar4,uVar3);
      if (iVar2 == 0) {
        local_88 = CONCAT44(local_88._4_4_,0x24);
        FUN_1801a70c0(6,0x6f,0x76,"crypto\\evp\\evp_pkey.c");
        FUN_18019b440(local_68,0x50,local_78[0]);
        FUN_1801a6360(2,"TYPE=",local_68);
      }
      else {
        pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0x40);
        if (pcVar1 == (code *)0x0) {
          local_88 = CONCAT44(local_88._4_4_,0x30);
          uVar5 = 0x90;
        }
        else {
          iVar2 = (*pcVar1)(lVar4,param_1);
          if (iVar2 != 0) {
            return lVar4;
          }
          local_88 = CONCAT44(local_88._4_4_,0x2c);
          uVar5 = 0x91;
        }
        FUN_1801a70c0(6,0x6f,uVar5,"crypto\\evp\\evp_pkey.c");
      }
      FUN_18019deb0(lVar4);
    }
  }
  return 0;
}



// ===== FUN_1801d5810 @ 1801d5810 (size 103)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801d5810(int *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (iVar1 = *param_1, iVar1 != *param_2))
  {
    return 0xffffffff;
  }
  if (iVar1 == 1) {
    return (ulonglong)(uint)(param_1[2] - param_2[2]);
  }
  if (iVar1 == 5) {
    return 0;
  }
  if (iVar1 == 6) {
    uVar2 = FUN_1801bc240(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    return uVar2;
  }
  uVar2 = FUN_18019a070();
  return uVar2;
}



// ===== FUN_1801d58a0 @ 1801d58a0 (size 203)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_1801d58a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int *local_res20;
  
  lVar1 = FUN_1801e6070(param_2,param_1,0);
  if (lVar1 == 0) {
    return (int *)0x0;
  }
  if ((param_3 == (undefined8 *)0x0) || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) {
    piVar2 = (int *)FUN_1801bc5a0();
    if (piVar2 == (int *)0x0) {
      FUN_1801bc3c0(lVar1);
      return (int *)0x0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = piVar2;
    }
  }
  local_res20 = piVar2;
  if (((*piVar2 - 1U & 0xfffffffb) != 0) && (*(longlong *)(piVar2 + 2) != 0)) {
    FUN_1801bfd20(&local_res20,0,0);
  }
  *local_res20 = 0x10;
  *(longlong *)(local_res20 + 2) = lVar1;
  return piVar2;
}



// ===== FUN_1801d5970 @ 1801d5970 (size 116)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801d5970(int *param_1,int param_2,longlong param_3)

{
  int *local_res8;
  
  local_res8 = param_1;
  if (((*param_1 - 1U & 0xfffffffb) != 0) && (*(longlong *)(param_1 + 2) != 0)) {
    FUN_1801bfd20(&local_res8,0,0);
  }
  *local_res8 = param_2;
  if (param_2 == 1) {
    local_res8[2] = -(uint)(param_3 != 0) & 0xff;
    return;
  }
  *(longlong *)(local_res8 + 2) = param_3;
  return;
}



// ===== FUN_1801d59f0 @ 1801d59f0 (size 107)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d59f0(undefined8 param_1,int param_2,longlong param_3)

{
  if ((param_3 != 0) && (param_2 != 1)) {
    if (param_2 == 6) {
      param_3 = FUN_1801bc270();
    }
    else {
      param_3 = FUN_18019a200(param_3);
    }
    if (param_3 == 0) {
      return 0;
    }
  }
  FUN_1801d5970(param_1,param_2,param_3);
  return 1;
}



// ===== FUN_1801d5aa0 @ 1801d5aa0 (size 161)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d5aa0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong local_res10;
  longlong local_res18 [2];
  undefined8 uVar2;
  
  uVar2 = 0x1801d5aac;
  local_res10 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_1801c2350(param_2,&local_res10,param_1);
    if (local_res10 != 0) {
      local_res18[0] = local_res10;
      uVar2 = FUN_1801bfef0(0,local_res18,uVar1,param_1);
      FUN_180195e10(local_res10,"crypto\\asn1\\a_dup.c",0x42);
      return uVar2;
    }
    FUN_1801a70c0(0xd,0xbf,0x41,"crypto\\asn1\\a_dup.c",0x3d,uVar2);
  }
  return 0;
}



// ===== FUN_1801d5c30 @ 1801d5c30 (size 212)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d5c30(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (((param_1 != 0) && (*(longlong *)(param_1 + 0x138) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x10) != 0)) {
      FUN_1801bc3c0();
      *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x10) = 0;
    }
    return 1;
  }
  if (param_1 == 0) {
LAB_1801d5ced:
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x138);
    if (lVar1 == 0) {
      lVar1 = FUN_1801bf3f0(&DAT_18032f840);
      *(longlong *)(param_1 + 0x138) = lVar1;
      if (lVar1 == 0) goto LAB_1801d5ced;
    }
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (lVar2 == 0) {
      lVar2 = FUN_1801bc5d0();
      *(longlong *)(lVar1 + 0x10) = lVar2;
      if (lVar2 == 0) goto LAB_1801d5ced;
    }
    uVar3 = FUN_18019a480(lVar2,param_2,param_3);
  }
  return uVar3;
}



// ===== FUN_1801d5d90 @ 1801d5d90 (size 212)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d5d90(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (((param_1 != 0) && (*(longlong *)(param_1 + 0x138) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x18) != 0)) {
      FUN_1801bc3c0();
      *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 0;
    }
    return 1;
  }
  if (param_1 == 0) {
LAB_1801d5e4d:
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x138);
    if (lVar1 == 0) {
      lVar1 = FUN_1801bf3f0(&DAT_18032f840);
      *(longlong *)(param_1 + 0x138) = lVar1;
      if (lVar1 == 0) goto LAB_1801d5e4d;
    }
    lVar2 = *(longlong *)(lVar1 + 0x18);
    if (lVar2 == 0) {
      lVar2 = FUN_1801bc530();
      *(longlong *)(lVar1 + 0x18) = lVar2;
      if (lVar2 == 0) goto LAB_1801d5e4d;
    }
    uVar3 = FUN_18019a480(lVar2,param_2,param_3);
  }
  return uVar3;
}



// ===== FUN_1801d5f30 @ 1801d5f30 (size 626)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801d5f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  
  uVar13 = 0x1801d5f54;
  lVar5 = 0;
  lVar4 = 0;
  iVar1 = FUN_1801958b0(param_3);
  lVar3 = FUN_180195820(0,iVar1);
  if (lVar3 == 0) {
LAB_1801d614c:
    FUN_1801a70c0(0x22,0x86,0x41,"crypto\\x509v3\\v3_crld.c",0x11d,uVar13);
LAB_1801d616c:
    FUN_1801a4ac0(lVar4);
    FUN_1801a48f0(lVar5);
    FUN_1801958f0(lVar3,FUN_1801d6640);
    lVar3 = 0;
  }
  else {
    iVar11 = 0;
    if (0 < iVar1) {
      do {
        lVar4 = FUN_180195ae0(param_3,iVar11);
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          lVar4 = FUN_18020b7d0(param_2,*(undefined8 *)(lVar4 + 8));
          if (lVar4 != 0) {
            lVar5 = FUN_1801bf3f0(&DAT_18032fc80);
            if (lVar5 == 0) {
LAB_1801d6081:
              FUN_1801bfa90(lVar5,&DAT_18032fc80);
              lVar5 = 0;
            }
            else {
              iVar10 = 0;
              iVar2 = FUN_1801958b0(lVar4);
              if (0 < iVar2) {
                do {
                  lVar6 = FUN_180195ae0(lVar4,iVar10);
                  iVar2 = FUN_1801d6a50(lVar5,param_2,lVar6);
                  if (iVar2 < 1) {
                    if (iVar2 < 0) goto LAB_1801d6081;
                    lVar7 = 0;
                    do {
                      lVar8 = lVar7 + 1;
                      if ((*(char **)(lVar6 + 8))[lVar7] != "reasons"[lVar7]) {
                        iVar2 = strcmp(*(char **)(lVar6 + 8),"CRLissuer");
                        if (iVar2 != 0) goto LAB_1801d606d;
                        lVar6 = FUN_1801d6750(param_2,*(undefined8 *)(lVar6 + 0x10));
                        *(longlong *)(lVar5 + 0x10) = lVar6;
                        bVar12 = lVar6 == 0;
                        goto LAB_1801d606b;
                      }
                      lVar7 = lVar8;
                    } while (lVar8 != 8);
                    iVar2 = FUN_1801d6c40(lVar5 + 8,*(undefined8 *)(lVar6 + 0x10));
                    bVar12 = iVar2 == 0;
LAB_1801d606b:
                    if (bVar12) goto LAB_1801d6081;
                  }
LAB_1801d606d:
                  iVar10 = iVar10 + 1;
                  iVar2 = FUN_1801958b0(lVar4);
                } while (iVar10 < iVar2);
              }
            }
            FUN_18020b830(param_2,lVar4);
            if (lVar5 != 0) {
              FUN_180195990(lVar3,lVar5);
              goto LAB_1801d6128;
            }
          }
          lVar5 = 0;
          lVar4 = 0;
          goto LAB_1801d616c;
        }
        lVar4 = FUN_1801e84c0(param_1,param_2,lVar4);
        if (lVar4 == 0) {
          lVar5 = 0;
          goto LAB_1801d616c;
        }
        lVar5 = FUN_1801a4920();
        if ((lVar5 == 0) || (iVar2 = FUN_180195990(lVar5,lVar4), iVar2 == 0)) goto LAB_1801d614c;
        lVar4 = 0;
        plVar9 = (longlong *)FUN_1801bf3f0(&DAT_18032fc80);
        if (plVar9 == (longlong *)0x0) goto LAB_1801d614c;
        FUN_180195990(lVar3,plVar9);
        lVar6 = FUN_1801bf3f0(&DAT_18032fbf0);
        *plVar9 = lVar6;
        if (lVar6 == 0) goto LAB_1801d614c;
        *(longlong *)(lVar6 + 8) = lVar5;
        *(undefined4 *)*plVar9 = 0;
LAB_1801d6128:
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar1);
    }
  }
  return lVar3;
}



// ===== FUN_1801d61b0 @ 1801d61b0 (size 235)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801d61b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_1801958b0(param_2);
  if (0 < iVar1) {
    do {
      FUN_18018da10(param_3,&DAT_1802fa360);
      plVar2 = (longlong *)FUN_180195ae0(param_2,iVar3);
      if (*plVar2 != 0) {
        FUN_1801d6810(param_3,*plVar2,param_4);
      }
      if (plVar2[1] != 0) {
        FUN_1801d6970(param_3,"Reasons",plVar2[1],param_4);
      }
      if (plVar2[2] != 0) {
        FUN_180196900(param_3,"%*sCRL Issuer:\n",param_4,&PTR_1802ead18);
        FUN_1801d68c0(param_3,plVar2[2],param_4);
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_1801958b0(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}



// ===== FUN_1801d62e0 @ 1801d62e0 (size 286)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d62e0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  if (*param_2 != 0) {
    FUN_1801d6810(param_3,*param_2,param_4);
  }
  if (0 < (int)param_2[1]) {
    FUN_180196900(param_3,"%*sOnly User Certificates\n",param_4,&PTR_1802ead18);
  }
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    FUN_180196900(param_3,"%*sOnly CA Certificates\n",param_4,&PTR_1802ead18);
  }
  if (0 < (int)param_2[3]) {
    FUN_180196900(param_3,"%*sIndirect CRL\n",param_4,&PTR_1802ead18);
  }
  if (param_2[2] != 0) {
    FUN_1801d6970(param_3,"Only Some Reasons",param_2[2],param_4);
  }
  if (0 < *(int *)((longlong)param_2 + 0x1c)) {
    FUN_180196900(param_3,"%*sOnly Attribute Certificates\n",param_4,&PTR_1802ead18);
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((longlong)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((longlong)param_2 + 0x1c) < 1)))) {
    FUN_180196900(param_3,"%*s<EMPTY>\n",param_4,&PTR_1802ead18);
  }
  return 1;
}



// ===== FUN_1801d6400 @ 1801d6400 (size 541)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801d6400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *_Str1;
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar3 = FUN_1801bf3f0(&DAT_18032fdc0);
  if (lVar3 == 0) {
    FUN_1801a70c0(0x22,0x9d,0x41,"crypto\\x509v3\\v3_crld.c",CONCAT44(uVar8,0x193));
LAB_1801d6607:
    FUN_1801bfa90(lVar3,&DAT_18032fdc0);
    lVar3 = 0;
  }
  else {
    iVar7 = 0;
    iVar2 = FUN_1801958b0(param_3);
    if (0 < iVar2) {
LAB_1801d6480:
      puVar4 = (undefined8 *)FUN_180195ae0(param_3,iVar7);
      _Str1 = (char *)puVar4[1];
      uVar1 = puVar4[2];
      iVar2 = FUN_1801d6a50(lVar3,param_2,puVar4);
      if (0 < iVar2) goto LAB_1801d6579;
      if (-1 < iVar2) {
        iVar2 = strcmp(_Str1,"onlyuser");
        if (iVar2 == 0) {
          iVar2 = FUN_1801e20b0(puVar4,lVar3 + 8);
        }
        else {
          lVar5 = 0;
          do {
            lVar6 = lVar5 + 1;
            if (_Str1[lVar5] != (&DAT_18032ff7c)[lVar5]) {
              lVar5 = 0;
              goto LAB_1801d6510;
            }
            lVar5 = lVar6;
          } while (lVar6 != 7);
          iVar2 = FUN_1801e20b0(puVar4,lVar3 + 0xc);
        }
        goto LAB_1801d6571;
      }
      goto LAB_1801d6607;
    }
  }
LAB_1801d658e:
  return lVar3;
  while (lVar5 = lVar6, lVar6 != 7) {
LAB_1801d6510:
    lVar6 = lVar5 + 1;
    if (_Str1[lVar5] != (&DAT_180330014)[lVar5]) {
      iVar2 = strcmp(_Str1,"indirectCRL");
      if (iVar2 == 0) {
        iVar2 = FUN_1801e20b0(puVar4,lVar3 + 0x18);
        goto LAB_1801d6571;
      }
      iVar2 = strcmp(_Str1,"onlysomereasons");
      if (iVar2 == 0) {
        iVar2 = FUN_1801d6c40(lVar3 + 0x10,uVar1);
        goto LAB_1801d6571;
      }
      FUN_1801a70c0(0x22,0x9d,0x6a,"crypto\\x509v3\\v3_crld.c",0x18b);
      FUN_1801a6360(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
      goto LAB_1801d6607;
    }
  }
  iVar2 = FUN_1801e20b0(puVar4,lVar3 + 0x1c);
LAB_1801d6571:
  if (iVar2 == 0) goto LAB_1801d6607;
LAB_1801d6579:
  iVar7 = iVar7 + 1;
  iVar2 = FUN_1801958b0(param_3);
  if (iVar2 <= iVar7) goto LAB_1801d658e;
  goto LAB_1801d6480;
}



// ===== FUN_1801d6660 @ 1801d6660 (size 206)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d6660(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    return 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 2);
  lVar3 = FUN_1801be670(param_2);
  *(longlong *)(param_1 + 4) = lVar3;
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar2 = FUN_1801958b0(uVar1);
    if (0 < iVar2) {
      do {
        uVar4 = FUN_180195ae0(uVar1,iVar5);
        iVar2 = FUN_1801a37b0(*(undefined8 *)(param_1 + 4),uVar4,0xffffffff,iVar5 == 0);
        if (iVar2 == 0) goto LAB_1801d670b;
        iVar5 = iVar5 + 1;
        iVar2 = FUN_1801958b0(uVar1);
      } while (iVar5 < iVar2);
    }
    iVar2 = FUN_1801be8e0(*(undefined8 *)(param_1 + 4),0);
    if (-1 < iVar2) {
      return 1;
    }
LAB_1801d670b:
    FUN_1801be690(*(undefined8 *)(param_1 + 4));
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return 0;
}



// ===== FUN_1801d6750 @ 1801d6750 (size 189)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d6750(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801d6765;
  if (*param_2 == '@') {
    lVar1 = FUN_18020b7d0(param_1,param_2 + 1);
  }
  else {
    lVar1 = FUN_1801e24c0(param_2);
  }
  if (lVar1 == 0) {
    FUN_1801a70c0(0x22,0x9c,0x96,"crypto\\x509v3\\v3_crld.c",0x37,uVar2);
    return 0;
  }
  uVar2 = FUN_1801e8630(0,param_1,lVar1);
  if (*param_2 == '@') {
    FUN_18020b830(param_1,lVar1);
  }
  else {
    FUN_1801958f0(lVar1,FUN_1801e2040);
  }
  return uVar2;
}



// ===== FUN_1801d6810 @ 1801d6810 (size 166)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d6810(undefined8 param_1,int *param_2,ulonglong param_3)

{
  undefined8 local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x1801d6825;
  if (*param_2 == 0) {
    FUN_180196900(param_1,"%*sFull Name:\n");
    FUN_1801d68c0(param_1,*(undefined8 *)(param_2 + 2),param_3 & 0xffffffff);
  }
  else {
    local_38[0] = *(undefined8 *)(param_2 + 2);
    FUN_180196900(param_1,"%*sRelative Name:\n%*s",param_3,&PTR_1802ead18,(int)param_3 + 2,
                  &PTR_1802ead18);
    FUN_18019b4f0(param_1,local_38,0,0x82031f);
    FUN_18018da10(param_1,&DAT_1802fa360);
  }
  return 1;
}



// ===== FUN_1801d68c0 @ 1801d68c0 (size 166)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d68c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_1801958b0(param_2);
  if (0 < iVar1) {
    do {
      FUN_180196900(param_1,&DAT_18030daf0,param_3 + 2,&PTR_1802ead18);
      uVar2 = FUN_180195ae0(param_2,iVar3);
      FUN_1801e7a90(param_1,uVar2);
      FUN_18018da10(param_1,&DAT_1802fa360);
      iVar3 = iVar3 + 1;
      iVar1 = FUN_1801958b0(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}



// ===== FUN_1801d6970 @ 1801d6970 (size 211)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d6970(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  FUN_180196900(param_1,"%*s%s:\n%*s",param_4,&PTR_1802ead18,param_2,param_4 + 2,&PTR_1802ead18,
                0x1801d6985);
  if (PTR_s_Unused_18032fac8 != (undefined *)0x0) {
    ppuVar4 = &PTR_s_Unused_18032fac8;
    do {
      iVar2 = FUN_1801f18a0(param_3,*(undefined4 *)(ppuVar4 + -1));
      if (iVar2 != 0) {
        if (bVar1) {
          bVar1 = false;
        }
        else {
          FUN_18018da10(param_1,&DAT_1802ffd08);
        }
        FUN_18018da10(param_1,*ppuVar4);
      }
      ppuVar4 = ppuVar4 + 3;
    } while (*ppuVar4 != (undefined *)0x0);
  }
  pcVar3 = "<EMPTY>\n";
  if (!bVar1) {
    pcVar3 = "\n";
  }
  FUN_18018da10(param_1,pcVar3);
  return 1;
}



// ===== FUN_1801d6a50 @ 1801d6a50 (size 496)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d6a50(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1801d6a6e;
  lVar2 = 0;
  uVar6 = 0;
  iVar1 = strncmp(*(char **)(param_3 + 8),"fullname",9);
  if (iVar1 == 0) {
    lVar2 = FUN_1801d6750(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar2 == 0) goto LAB_1801d6ad5;
LAB_1801d6aab:
    if (*param_1 == 0) {
      puVar5 = (undefined4 *)FUN_1801bf3f0(&DAT_18032fbf0);
      *param_1 = (longlong)puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        if (lVar2 == 0) {
          *puVar5 = 1;
          *(undefined8 *)(*param_1 + 8) = uVar6;
          return 1;
        }
        *puVar5 = 0;
        *(longlong *)(*param_1 + 8) = lVar2;
        return 1;
      }
      goto LAB_1801d6ad5;
    }
    uVar8 = 0x6e;
    uVar7 = 0xa0;
  }
  else {
    iVar1 = strcmp(*(char **)(param_3 + 8),"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    puVar3 = (undefined8 *)FUN_1801be6c0();
    if (puVar3 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    lVar4 = FUN_18020b7d0(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar4 == 0) {
      FUN_1801a70c0(0x22,0x9e,0x96,"crypto\\x509v3\\v3_crld.c",0x56,uVar9);
      return 0xffffffff;
    }
    iVar1 = FUN_1801e1d60(puVar3,lVar4,0x1001);
    FUN_18020b830(param_2,lVar4);
    uVar6 = *puVar3;
    *puVar3 = 0;
    FUN_1801be690(puVar3);
    if ((iVar1 == 0) || (iVar1 = FUN_1801958b0(uVar6), iVar1 < 1)) goto LAB_1801d6ad5;
    iVar1 = FUN_1801958b0(uVar6);
    lVar4 = FUN_180195ae0(uVar6,iVar1 + -1);
    if (*(int *)(lVar4 + 0x10) == 0) goto LAB_1801d6aab;
    uVar8 = 0x66;
    uVar7 = 0xa1;
  }
  FUN_1801a70c0(0x22,0x9e,uVar7,"crypto\\x509v3\\v3_crld.c",uVar8,uVar9);
LAB_1801d6ad5:
  FUN_1801958f0(lVar2,FUN_1801a4ac0);
  FUN_1801958f0(uVar6,FUN_1801be630);
  return 0xffffffff;
}



// ===== FUN_1801d6c40 @ 1801d6c40 (size 309)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d6c40(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = 0;
  lVar6 = FUN_1801e24c0(param_2);
  if (lVar6 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    iVar10 = 0;
    iVar5 = FUN_1801958b0(lVar6);
    if (0 < iVar5) {
      do {
        lVar7 = FUN_180195ae0(lVar6,iVar10);
        lVar7 = *(longlong *)(lVar7 + 8);
        if (*param_1 == 0) {
          lVar8 = FUN_1801bc3f0();
          *param_1 = lVar8;
          if (lVar8 == 0) goto LAB_1801d6d59;
        }
        puVar4 = &DAT_18032fac0;
        puVar3 = PTR_s_Unused_18032fac8;
        while (puVar3 != (undefined *)0x0) {
          pcVar9 = *(char **)(puVar4 + 4);
          lVar8 = lVar7 - (longlong)pcVar9;
          do {
            cVar1 = *pcVar9;
            cVar2 = pcVar9[lVar8];
            if (cVar1 != cVar2) break;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            iVar5 = FUN_1801f18f0(*param_1,*puVar4,1);
            if (iVar5 == 0) goto LAB_1801d6d59;
            break;
          }
          puVar3 = *(undefined **)(puVar4 + 8);
          puVar4 = puVar4 + 6;
        }
        if (*(longlong *)(puVar4 + 2) == 0) goto LAB_1801d6d59;
        iVar10 = iVar10 + 1;
        iVar5 = FUN_1801958b0(lVar6);
      } while (iVar10 < iVar5);
    }
    uVar11 = 1;
  }
LAB_1801d6d59:
  FUN_1801958f0(lVar6,FUN_1801e2040);
  return uVar11;
}



// ===== FUN_1801d6da0 @ 1801d6da0 (size 464)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801d6da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1801d6dc4;
  puVar4 = (undefined8 *)0x0;
  plVar2 = (longlong *)FUN_1801bf3f0(&DAT_180330260);
  if (plVar2 == (longlong *)0x0) {
LAB_1801d6f11:
    FUN_1801a70c0(0x22,0x93,0x41,"crypto\\x509v3\\v3_ncons.c",0xa1);
LAB_1801d6f31:
    FUN_1801bfa90(plVar2,&DAT_180330260);
    FUN_1801bfa90(puVar4,&DAT_1803301f0);
    plVar2 = (longlong *)0x0;
  }
  else {
    iVar5 = 0;
    iVar1 = FUN_1801958b0(param_3);
    if (0 < iVar1) {
      do {
        lVar3 = FUN_180195ae0(param_3,iVar5);
        iVar1 = strncmp(*(char **)(lVar3 + 8),"permitted",9);
        if ((iVar1 == 0) && (*(char *)(*(longlong *)(lVar3 + 8) + 9) != '\0')) {
          local_30 = *(longlong *)(lVar3 + 8) + 10;
          plVar6 = plVar2;
        }
        else {
          iVar1 = strncmp(*(char **)(lVar3 + 8),"excluded",8);
          if ((iVar1 != 0) || (*(char *)(*(longlong *)(lVar3 + 8) + 8) == '\0')) {
            FUN_1801a70c0(0x22,0x93,0x8f,"crypto\\x509v3\\v3_ncons.c",0x8e);
            puVar4 = (undefined8 *)0x0;
            goto LAB_1801d6f31;
          }
          plVar6 = plVar2 + 1;
          local_30 = *(longlong *)(lVar3 + 8) + 9;
        }
        local_28 = *(undefined8 *)(lVar3 + 0x10);
        puVar4 = (undefined8 *)FUN_1801bf3f0(&DAT_1803301f0);
        if (puVar4 == (undefined8 *)0x0) goto LAB_1801d6f11;
        lVar3 = FUN_1801e8850(*puVar4,param_1,param_2,local_38,1);
        if (lVar3 == 0) goto LAB_1801d6f31;
        lVar3 = *plVar6;
        if (lVar3 == 0) {
          lVar3 = FUN_1801957e0();
          *plVar6 = lVar3;
          if (lVar3 == 0) goto LAB_1801d6f11;
        }
        iVar1 = FUN_180195990(lVar3,puVar4);
        if (iVar1 == 0) goto LAB_1801d6f11;
        iVar5 = iVar5 + 1;
        iVar1 = FUN_1801958b0(param_3);
      } while (iVar5 < iVar1);
    }
  }
  return plVar2;
}



// ===== FUN_1801d6f70 @ 1801d6f70 (size 117)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801d6f70(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  FUN_1801d73e0(param_1,*param_2,param_3,param_4,"Permitted",0x1801d6f8a);
  FUN_1801d73e0(param_1,param_2[1],param_3,param_4 & 0xffffffff,"Excluded");
  return 1;
}



// ===== FUN_1801d6ff0 @ 1801d6ff0 (size 446)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d6ff0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 local_28 [2];
  longlong local_20;
  
  local_20 = 0x1801d7014;
  lVar5 = FUN_1801a34d0();
  iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x100));
  iVar2 = FUN_1801a3ac0(lVar5);
  iVar7 = 0;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (iVar2 <= 0x7fffffff - iVar1) {
    iVar3 = FUN_1801958b0(param_2[1]);
    iVar4 = FUN_1801958b0(*param_2);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    if ((iVar4 <= 0x7fffffff - iVar3) &&
       ((iVar1 + iVar2 < 1 || (iVar4 + iVar3 <= (int)(0x100000 / (longlong)(iVar1 + iVar2)))))) {
      iVar1 = FUN_1801a3ac0(lVar5);
      if (0 < iVar1) {
        local_28[0] = 4;
        local_20 = lVar5;
        uVar6 = FUN_1801d7780(local_28,param_2);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        local_28[0] = 1;
        for (iVar1 = FUN_1801a3b40(lVar5,0x30,0xffffffff); iVar1 != -1;
            iVar1 = FUN_1801a3b40(lVar5,0x30,iVar1)) {
          uVar6 = FUN_1801a3af0(lVar5,iVar1);
          local_20 = FUN_1801a3780(uVar6);
          if (*(int *)(local_20 + 4) != 0x16) {
            return 0x35;
          }
          uVar6 = FUN_1801d7780(local_28,param_2);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        }
      }
      iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x100));
      if (0 < iVar1) {
        do {
          uVar6 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x100),iVar7);
          uVar6 = FUN_1801d7780(uVar6,param_2);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          iVar7 = iVar7 + 1;
          iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x100));
        } while (iVar7 < iVar1);
      }
      return 0;
    }
  }
  return 1;
}



// ===== FUN_1801d71b0 @ 1801d71b0 (size 519)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801d71b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  void *local_res18;
  undefined4 local_58 [2];
  uint *local_50;
  uint local_48;
  undefined4 local_44;
  void *local_40;
  undefined4 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1801d71d2;
  uVar6 = FUN_1801a34d0();
  local_38 = 0;
  local_44 = 0x16;
  local_50 = &local_48;
  local_58[0] = 2;
  iVar4 = FUN_1801a3b40(uVar6,0xd,0xffffffff);
  do {
    if (iVar4 == -1) {
      return 0;
    }
    uVar7 = FUN_1801a3af0(uVar6,iVar4);
    FUN_1801a3780(uVar7);
    bVar2 = false;
    uVar5 = FUN_18019b460(&local_res18);
    pvVar3 = local_res18;
    uVar10 = (ulonglong)(int)uVar5;
    if ((int)uVar5 < 0) {
      return 0x11;
    }
    uVar11 = uVar10;
    if (0 < (int)uVar5) {
      do {
        uVar5 = (uint)uVar11;
        if (*(char *)((longlong)local_res18 + (uVar10 - 1)) != '\0') break;
        uVar5 = uVar5 - 1;
        uVar11 = (ulonglong)uVar5;
        uVar10 = uVar10 - 1;
      } while (0 < (longlong)uVar10);
    }
    pvVar8 = memchr(local_res18,0,(longlong)(int)uVar5);
    if (pvVar8 != (void *)0x0) {
      FUN_180195e10(pvVar3,"crypto\\x509v3\\v3_ncons.c",0x164);
      return 0x35;
    }
    iVar12 = 0;
    lVar9 = 0;
    if ((int)uVar5 < 1) {
LAB_1801d7343:
      FUN_180195e10(pvVar3,"crypto\\x509v3\\v3_ncons.c",0x194);
    }
    else {
      do {
        cVar1 = *(char *)(lVar9 + (longlong)pvVar3);
        if ((0x19 < (byte)(cVar1 + 0x9fU)) &&
           ((0x2f < (byte)(cVar1 - 0x30U) ||
            ((0x87fffffe03ffU >> ((ulonglong)(byte)(cVar1 - 0x30U) & 0x3f) & 1) == 0)))) {
          if ((lVar9 < 1) || ((int)(uVar5 - 1) <= iVar12)) goto LAB_1801d7343;
          if (cVar1 != '-') {
            if ((((cVar1 != '.') || (cVar1 = *(char *)(lVar9 + 1 + (longlong)pvVar3), cVar1 == '.'))
                || (*(char *)(lVar9 + -1 + (longlong)pvVar3) == '-')) || (cVar1 == '-'))
            goto LAB_1801d7343;
            bVar2 = true;
          }
        }
        iVar12 = iVar12 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uVar5);
      if (!bVar2) goto LAB_1801d7343;
      if (uVar5 != 0) {
        local_40 = pvVar3;
        local_48 = uVar5;
        iVar12 = FUN_1801d7780(local_58,param_2);
        FUN_180195e10(pvVar3,"crypto\\x509v3\\v3_ncons.c",0x1be);
        if (iVar12 != 0) {
          return iVar12;
        }
      }
    }
    iVar4 = FUN_1801a3b40(uVar6,0xd,iVar4);
  } while( true );
}



// ===== FUN_1801d73e0 @ 1801d73e0 (size 452)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801d73e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar2 = FUN_1801958b0(param_2);
  if (0 < iVar2) {
    FUN_180196900(param_3,"%*s%s:\n",param_4,&PTR_1802ead18,param_5);
  }
  iVar5 = 0;
  iVar2 = FUN_1801958b0(param_2);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined8 *)FUN_180195ae0(param_2,iVar5);
      FUN_180196900(param_3,&DAT_18030daf0,param_4 + 2,&PTR_1802ead18);
      if (*(int *)*puVar3 == 7) {
        piVar1 = *(int **)((int *)*puVar3 + 2);
        puVar6 = *(undefined1 **)(piVar1 + 2);
        iVar2 = *piVar1;
        FUN_18018da10(param_3,&DAT_180330354);
        if (iVar2 == 8) {
          FUN_180196900(param_3,"%d.%d.%d.%d/%d.%d.%d.%d",*puVar6,puVar6[1],puVar6[2],puVar6[3],
                        puVar6[4],puVar6[5],puVar6[6],puVar6[7]);
        }
        else if (iVar2 == 0x20) {
          iVar2 = 0;
          do {
            FUN_180196900(param_3,&DAT_180330370,CONCAT11(*puVar6,puVar6[1]));
            puVar6 = puVar6 + 2;
            if (iVar2 == 7) {
              puVar4 = &DAT_1802fc89c;
LAB_1801d753c:
              FUN_18018da10(param_3,puVar4);
            }
            else if (iVar2 != 0xf) {
              puVar4 = &DAT_1802ea954;
              goto LAB_1801d753c;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x10);
        }
        else {
          FUN_180196900(param_3,"IP Address:<invalid>");
        }
      }
      else {
        FUN_1801e7a90(param_3);
      }
      FUN_18018da10(param_3,&DAT_1802fa360);
      iVar5 = iVar5 + 1;
      iVar2 = FUN_1801958b0(param_2);
    } while (iVar5 < iVar2);
  }
  return 1;
}



// ===== FUN_1801d75b0 @ 1801d75b0 (size 83)

undefined8 FUN_1801d75b0(longlong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 - (longlong)param_2;
    do {
      bVar3 = param_2[param_1];
      bVar1 = *param_2;
      if (bVar3 != bVar1) {
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 + 0x20;
        }
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 + 0x20;
        }
        if (bVar3 != bVar1) {
          uVar2 = 1;
          if (bVar3 < bVar1) {
            uVar2 = 0xffffffff;
          }
          return uVar2;
        }
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}



// ===== FUN_1801d7610 @ 1801d7610 (size 363)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d7610(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  uint uVar6;
  ulonglong uVar7;
  char *pcVar8;
  char *_Str1;
  size_t _MaxCount;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar1 = *param_2;
  uVar11 = (ulonglong)(int)uVar1;
  _Str1 = *(char **)(param_2 + 2);
  pcVar8 = *(char **)(param_1 + 2);
  uVar10 = uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar11;
    uVar7 = uVar11;
    do {
      uVar10 = (uint)uVar7;
      if (_Str1[uVar3 - 1] == '@') break;
      uVar10 = uVar10 - 1;
      uVar7 = (ulonglong)uVar10;
      uVar3 = uVar3 - 1;
    } while (0 < (longlong)uVar3);
  }
  if (uVar10 == 0) {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar9 = _Str1 + (int)(uVar10 - 1);
  }
  uVar10 = *param_1;
  uVar3 = (ulonglong)(int)uVar10;
  uVar6 = uVar10;
  if (0 < (int)uVar10) {
    uVar7 = uVar3;
    do {
      uVar6 = (uint)uVar7;
      if (pcVar8[uVar3 - 1] == '@') break;
      uVar6 = uVar6 - 1;
      uVar7 = (ulonglong)uVar6;
      uVar3 = uVar3 - 1;
    } while (0 < (longlong)uVar3);
  }
  if (uVar6 == 0) {
    return 0x35;
  }
  _MaxCount = (size_t)(int)(uVar6 - 1);
  if (pcVar8 + _MaxCount == (char *)0x0) {
    return 0x35;
  }
  if (pcVar9 == (char *)0x0) {
    if ((0 < (int)uVar1) && (*_Str1 == '.')) {
      if ((int)uVar10 <= (int)uVar1) {
        return 0x2f;
      }
      pcVar8 = pcVar8 + (int)(uVar10 - uVar1);
      goto LAB_1801d76db;
    }
  }
  else {
    if (pcVar9 != _Str1) {
      if ((longlong)pcVar9 - (longlong)_Str1 != _MaxCount) {
        return 0x2f;
      }
      pvVar5 = memchr(_Str1,0,(longlong)pcVar9 - (longlong)_Str1);
      if (pvVar5 != (void *)0x0) {
        return 0x35;
      }
      pvVar5 = memchr(pcVar8,0,_MaxCount);
      if (pvVar5 != (void *)0x0) {
        return 0x35;
      }
      iVar2 = strncmp(_Str1,pcVar8,_MaxCount);
      if (iVar2 != 0) {
        return 0x2f;
      }
    }
    _Str1 = pcVar9 + 1;
  }
  pcVar8 = pcVar8 + _MaxCount + 1;
  uVar11 = ((longlong)(int)*param_1 - (longlong)pcVar8) + *(longlong *)(param_1 + 2);
  if (((longlong)(int)*param_2 - (longlong)_Str1) + *(longlong *)(param_2 + 2) != uVar11) {
    return 0x2f;
  }
LAB_1801d76db:
  uVar4 = FUN_1801d75b0(_Str1,pcVar8,uVar11);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  return 0x2f;
}



// ===== FUN_1801d7780 @ 1801d7780 (size 284)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d7780(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar4 = 0;
  iVar5 = 0;
  iVar1 = FUN_1801958b0(*param_2);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_180195ae0(*param_2,iVar5);
      if (*param_1 == *(int *)*puVar2) {
        if (puVar2[1] != 0) {
          return 0x31;
        }
        if (puVar2[2] != 0) {
          return 0x31;
        }
        if (iVar4 != 2) {
          if (iVar4 == 0) {
            iVar4 = 1;
          }
          uVar3 = FUN_1801d78a0(param_1);
          if ((int)uVar3 == 0) {
            iVar4 = 2;
          }
          else if ((int)uVar3 != 0x2f) {
            return uVar3;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_1801958b0(*param_2);
    } while (iVar5 < iVar1);
    if (iVar4 == 1) {
      return 0x2f;
    }
  }
  iVar1 = FUN_1801958b0(param_2[1]);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_180195ae0(param_2[1],iVar6);
      if (*param_1 == *(int *)*puVar2) {
        if ((puVar2[1] != 0) || (puVar2[2] != 0)) {
          return 0x31;
        }
        uVar3 = FUN_1801d78a0(param_1);
        if ((int)uVar3 == 0) {
          return 0x30;
        }
        if ((int)uVar3 != 0x2f) {
          return uVar3;
        }
      }
      iVar6 = iVar6 + 1;
      iVar1 = FUN_1801958b0(param_2[1]);
    } while (iVar6 < iVar1);
  }
  return 0;
}



// ===== FUN_1801d78a0 @ 1801d78a0 (size 814)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801d78a0(longlong param_1,int *param_2)

{
  byte *pbVar1;
  void *_Buf;
  int *piVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong uVar9;
  byte *pbVar10;
  longlong lVar11;
  size_t sVar12;
  
  iVar6 = *param_2;
  if (iVar6 == 1) {
    uVar9 = FUN_1801d7610(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
    return uVar9;
  }
  if (iVar6 == 2) {
    iVar6 = **(int **)(param_2 + 2);
    pcVar3 = *(char **)(*(int **)(param_2 + 2) + 2);
    lVar11 = *(longlong *)(*(int **)(param_1 + 8) + 2);
    if (iVar6 == 0) {
      return 0;
    }
    iVar5 = **(int **)(param_1 + 8);
    if ((iVar5 < iVar6) ||
       (((iVar6 < iVar5 && (lVar11 = lVar11 + (iVar5 - iVar6), *pcVar3 != '.')) &&
        (*(char *)(lVar11 + -1) != '.')))) {
      return 0x2f;
    }
    iVar6 = FUN_1801d75b0(pcVar3,lVar11,(longlong)iVar6);
    return (ulonglong)(-(uint)(iVar6 != 0) & 0x2f);
  }
  if (iVar6 == 4) {
    lVar11 = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(param_2 + 2);
    if ((*(int *)(lVar11 + 8) != 0) && (iVar6 = FUN_1801be8e0(lVar11,0), iVar6 < 0)) {
      return 0x11;
    }
    if ((*(int *)(lVar4 + 8) != 0) && (iVar6 = FUN_1801be8e0(lVar4,0), iVar6 < 0)) {
      return 0x11;
    }
    if (*(int *)(lVar4 + 0x20) <= *(int *)(lVar11 + 0x20)) {
      iVar6 = memcmp(*(void **)(lVar4 + 0x18),*(void **)(lVar11 + 0x18),
                     (longlong)*(int *)(lVar4 + 0x20));
      return (ulonglong)(-(uint)(iVar6 != 0) & 0x2f);
    }
  }
  else {
    if (iVar6 == 6) {
      iVar6 = **(int **)(param_1 + 8);
      sVar12 = (size_t)iVar6;
      _Buf = *(void **)(*(int **)(param_1 + 8) + 2);
      piVar2 = *(int **)(param_2 + 2);
      pcVar3 = *(char **)(piVar2 + 2);
      pvVar7 = memchr(_Buf,0x3a,sVar12);
      if ((((pvVar7 != (void *)0x0) &&
           (2 < (longlong)((sVar12 - (longlong)pvVar7) + (longlong)_Buf))) &&
          (*(char *)((longlong)pvVar7 + 1) == '/')) && (*(char *)((longlong)pvVar7 + 2) == '/')) {
        pvVar7 = (void *)((longlong)pvVar7 + 3);
        sVar12 = (sVar12 - (longlong)pvVar7) + (longlong)_Buf;
        pvVar8 = memchr(pvVar7,0x3a,sVar12);
        if (pvVar8 == (void *)0x0) {
          pvVar8 = memchr(pvVar7,0x2f,sVar12);
        }
        iVar5 = (int)pvVar8 - (int)pvVar7;
        if (pvVar8 == (void *)0x0) {
          iVar5 = (iVar6 - (int)pvVar7) + (int)_Buf;
        }
        if (iVar5 != 0) {
          iVar6 = *piVar2;
          if ((iVar6 < 1) || (*pcVar3 != '.')) {
            if (iVar6 != iVar5) {
              return 0x2f;
            }
            iVar6 = FUN_1801d75b0(pvVar7,pcVar3,(longlong)iVar5);
            if (iVar6 == 0) {
              return 0;
            }
            return 0x2f;
          }
          if (iVar5 <= iVar6) {
            return 0x2f;
          }
          iVar6 = FUN_1801d75b0(((longlong)iVar5 - (longlong)iVar6) + (longlong)pvVar7,pcVar3);
          if (iVar6 == 0) {
            return 0;
          }
          return 0x2f;
        }
      }
      return 0x35;
    }
    if (iVar6 != 7) {
      return 0x33;
    }
    iVar6 = **(int **)(param_1 + 8);
    pbVar1 = *(byte **)(*(int **)(param_2 + 2) + 2);
    iVar5 = **(int **)(param_2 + 2);
    if (((iVar6 != 4) && (iVar6 != 0x10)) || ((iVar5 != 8 && (iVar5 != 0x20)))) {
      return 0x35;
    }
    if (iVar6 * 2 == iVar5) {
      if (0 < iVar6) {
        pbVar10 = pbVar1;
        do {
          if ((pbVar10[*(longlong *)(*(int **)(param_1 + 8) + 2) - (longlong)pbVar1] &
              pbVar10[iVar6]) != (pbVar10[iVar6] & *pbVar10)) {
            return 0x2f;
          }
          pbVar10 = pbVar10 + 1;
        } while ((longlong)pbVar10 - (longlong)pbVar1 < (longlong)iVar6);
      }
      return 0;
    }
  }
  return 0x2f;
}



// ===== FUN_1801d7c10 @ 1801d7c10 (size 123)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801d7c10(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1801d8fa0(param_3,*param_2,param_4,"Autonomous System Numbers");
  if (iVar1 != 0) {
    iVar1 = FUN_1801d8fa0(param_3,param_2[1],param_4,"Routing Domain Identifiers");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801d7c90 @ 1801d7c90 (size 1441)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801d7c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int extraout_EAX;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  size_t sVar7;
  longlong lVar8;
  undefined4 *puVar9;
  char *_Str;
  longlong *plVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  longlong local_res20;
  undefined8 uVar14;
  
  local_res20 = 0;
  plVar2 = (longlong *)FUN_1801bf3f0(&DAT_180330590);
  if (plVar2 == (longlong *)0x0) {
    FUN_1801a70c0(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",0x20e);
    return (longlong *)0x0;
  }
  iVar13 = 0;
  iVar1 = FUN_1801958b0(param_3);
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)FUN_180195ae0(param_3,iVar13);
      iVar1 = FUN_1801e39b0(puVar3[1],&DAT_1803306b4);
      if (iVar1 != 0) {
        iVar1 = FUN_1801e39b0(puVar3[1],&DAT_1803306b8);
        if (iVar1 == 0) {
          lVar5 = 1;
          goto LAB_1801d7d6f;
        }
        uVar14 = 0x21f;
        uVar12 = 0x73;
LAB_1801d7df8:
        FUN_1801a70c0(0x22,0xa3,uVar12,"crypto\\x509v3\\v3_asid.c",uVar14);
        FUN_1801a6360(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        goto LAB_1801d7e47;
      }
      lVar5 = 0;
LAB_1801d7d6f:
      lVar8 = 0;
      do {
        lVar4 = lVar8 + 1;
        iVar1 = (int)lVar5;
        if (((char *)puVar3[2])[lVar8] != "inherit"[lVar8]) {
          sVar7 = strspn((char *)puVar3[2],"0123456789");
          extraout_EAX = (int)sVar7;
          _Str = (char *)(puVar3[2] + (longlong)extraout_EAX);
          if (*_Str != '\0') {
            sVar7 = strspn(_Str," \t");
            iVar11 = (int)sVar7 + extraout_EAX;
            if (*(char *)((longlong)iVar11 + puVar3[2]) == '-') {
              sVar7 = strspn((char *)(puVar3[2] + (longlong)iVar11 + 1)," \t");
              iVar11 = (int)sVar7 + iVar11;
              lVar5 = (longlong)iVar11 + 1;
              sVar7 = strspn((char *)(puVar3[2] + lVar5),"0123456789");
              if (*(char *)((longlong)((int)sVar7 + iVar11) + 1 + puVar3[2]) == '\0') {
                lVar8 = FUN_1801ba320(puVar3[2],"crypto\\x509v3\\v3_asid.c",0x253);
                if (lVar8 == 0) {
                  uVar12 = 0x255;
                  goto LAB_1801d81fd;
                }
                *(undefined1 *)(extraout_EAX + lVar8) = 0;
                local_res20 = FUN_1801e3a20(0,lVar8);
                lVar5 = FUN_1801e3a20(0,lVar5 + lVar8);
                FUN_180195e10(lVar8,"crypto\\x509v3\\v3_asid.c",0x25b);
                if ((local_res20 == 0) || (lVar5 == 0)) {
                  uVar12 = 0x25d;
                  goto LAB_1801d8139;
                }
                iVar11 = FUN_1801dbf30(local_res20,lVar5);
                if (iVar11 < 1) goto LAB_1801d7fd2;
                FUN_1801a70c0(0x22,0xa3,0x74,"crypto\\x509v3\\v3_asid.c",0x262);
                goto LAB_1801d7e4a;
              }
              uVar14 = 0x244;
              uVar12 = 0xa3;
            }
            else {
              uVar14 = 0x23b;
              uVar12 = 0xa2;
            }
            FUN_1801a70c0(0x22,0xa3,uVar12,"crypto\\x509v3\\v3_asid.c",uVar14);
            FUN_1801a6360(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
            lVar5 = 0;
            goto LAB_1801d7e4a;
          }
          iVar11 = FUN_1801e2320(puVar3,&local_res20);
          if (iVar11 == 0) {
            uVar12 = 0x24f;
LAB_1801d81fd:
            FUN_1801a70c0(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",uVar12);
            lVar5 = 0;
            goto LAB_1801d7e4a;
          }
          lVar5 = 0;
LAB_1801d7fd2:
          lVar8 = local_res20;
          if (iVar1 == 0) {
            plVar10 = plVar2;
LAB_1801d7ff1:
            if ((int *)*plVar10 == (int *)0x0) {
              lVar4 = FUN_1801bf3f0(&DAT_180330520);
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                uVar12 = FUN_1801957a0(FUN_1801d8240);
                *(undefined8 *)(*plVar10 + 8) = uVar12;
                if (*(longlong *)((undefined4 *)*plVar10 + 2) != 0) {
                  *(undefined4 *)*plVar10 = 1;
                  goto LAB_1801d8043;
                }
              }
            }
            else if (*(int *)*plVar10 != 0) {
LAB_1801d8043:
              puVar9 = (undefined4 *)FUN_1801bf3f0(&DAT_1803304b0);
              if (puVar9 != (undefined4 *)0x0) {
                if (lVar5 == 0) {
                  *puVar9 = 0;
                  *(longlong *)(puVar9 + 2) = lVar8;
LAB_1801d80ac:
                  iVar1 = FUN_180195990(*(undefined8 *)(*plVar10 + 8),puVar9);
                  if (iVar1 != 0) {
                    local_res20 = 0;
                    goto LAB_1801d80cb;
                  }
                }
                else {
                  *puVar9 = 1;
                  puVar3 = (undefined8 *)FUN_1801bf3f0(&DAT_180330440);
                  *(undefined8 **)(puVar9 + 2) = puVar3;
                  if (puVar3 != (undefined8 *)0x0) {
                    FUN_1801bc3c0(*puVar3);
                    **(longlong **)(puVar9 + 2) = lVar8;
                    FUN_1801bc3c0(*(undefined8 *)(*(longlong *)(puVar9 + 2) + 8));
                    *(longlong *)(*(longlong *)(puVar9 + 2) + 8) = lVar5;
                    goto LAB_1801d80ac;
                  }
                }
                FUN_1801bfa90(puVar9,&DAT_1803304b0);
              }
            }
          }
          else if (iVar1 == 1) {
            plVar10 = plVar2 + 1;
            goto LAB_1801d7ff1;
          }
          uVar12 = 0x267;
LAB_1801d8139:
          FUN_1801a70c0(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",uVar12);
          goto LAB_1801d7e4a;
        }
        lVar8 = lVar4;
      } while (lVar4 != 8);
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          plVar10 = plVar2 + 1;
          goto LAB_1801d7dab;
        }
LAB_1801d7dea:
        uVar14 = 0x22b;
        uVar12 = 0xa5;
        goto LAB_1801d7df8;
      }
      plVar10 = plVar2;
LAB_1801d7dab:
      piVar6 = (int *)*plVar10;
      if (piVar6 == (int *)0x0) {
        lVar5 = FUN_1801bf3f0(&DAT_180330520);
        *plVar10 = lVar5;
        if (lVar5 != 0) {
          lVar5 = FUN_1801bc4e0();
          *(longlong *)(*plVar10 + 8) = lVar5;
          if (lVar5 != 0) {
            *(undefined4 *)*plVar10 = 0;
            piVar6 = (int *)*plVar10;
            goto LAB_1801d7de1;
          }
        }
        goto LAB_1801d7dea;
      }
LAB_1801d7de1:
      if (*piVar6 != 0) goto LAB_1801d7dea;
LAB_1801d80cb:
      iVar13 = iVar13 + 1;
      iVar1 = FUN_1801958b0(param_3);
    } while (iVar13 < iVar1);
  }
  iVar1 = FUN_1801d82f0(*plVar2);
  if ((iVar1 == 0) || (iVar1 = FUN_1801d82f0(plVar2[1]), iVar1 == 0)) {
LAB_1801d7e47:
    lVar5 = 0;
LAB_1801d7e4a:
    FUN_1801bfa90(plVar2,&DAT_180330590);
    FUN_1801bc3c0(local_res20);
    FUN_1801bc3c0(lVar5);
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// ===== FUN_1801d8240 @ 1801d8240 (size 170)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801d8240(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*param_2;
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    if (*piVar2 == 0) {
      FUN_1801dbf30(*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar2 + 2));
      return;
    }
  }
  else if ((iVar3 == 1) && (*piVar2 == 1)) {
    iVar3 = FUN_1801dbf30(**(undefined8 **)(piVar1 + 2),**(undefined8 **)(piVar2 + 2));
    if (iVar3 == 0) {
      FUN_1801dbf30(*(undefined8 *)(*(longlong *)(piVar1 + 2) + 8),
                    *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8));
      return;
    }
    return;
  }
  if (iVar3 == 0) {
    FUN_1801dbf30(*(undefined8 **)(piVar1 + 2),**(undefined8 **)(piVar2 + 2));
    return;
  }
  FUN_1801dbf30(**(undefined8 **)(piVar1 + 2));
  return;
}



// ===== FUN_1801d82f0 @ 1801d82f0 (size 1011)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801d82f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined4 uVar12;
  
  bVar11 = false;
  lVar4 = 0;
  local_res10 = 0;
  local_res18 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return true;
  }
  if ((*param_1 != 1) || (iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 2)), iVar1 == 0)) {
    FUN_1801a70c0(0x22,0xa1,0x74,"crypto\\x509v3\\v3_asid.c",0x179);
    return false;
  }
  FUN_180195a90(*(undefined8 *)(param_1 + 2));
  iVar8 = 0;
  iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 2));
  if (0 < iVar1 + -1) {
    local_res8 = 1;
    do {
      piVar2 = (int *)FUN_180195ae0(*(undefined8 *)(param_1 + 2),iVar8);
      piVar3 = (int *)FUN_180195ae0(*(undefined8 *)(param_1 + 2),local_res8);
      if (piVar2 == (int *)0x0) goto LAB_1801d862a;
      if (*piVar2 == 0) {
        uVar7 = *(undefined8 *)(piVar2 + 2);
        uVar9 = uVar7;
      }
      else {
        if (*piVar2 != 1) goto LAB_1801d862a;
        uVar7 = (*(undefined8 **)(piVar2 + 2))[1];
        uVar9 = **(undefined8 **)(piVar2 + 2);
      }
      if (piVar3 == (int *)0x0) goto LAB_1801d862a;
      if (*piVar3 == 0) {
        uVar6 = *(undefined8 *)(piVar3 + 2);
        uVar10 = uVar6;
      }
      else {
        if (*piVar3 != 1) goto LAB_1801d862a;
        uVar6 = **(undefined8 **)(piVar3 + 2);
        uVar10 = (*(undefined8 **)(piVar3 + 2))[1];
      }
      iVar1 = FUN_1801dbf30(uVar9,uVar6);
      if (((0 < iVar1) || (iVar1 = FUN_1801dbf30(uVar9,uVar7), 0 < iVar1)) ||
         (iVar1 = FUN_1801dbf30(uVar6,uVar10), 0 < iVar1)) goto LAB_1801d862a;
      iVar1 = FUN_1801dbf30(uVar7,uVar6);
      if (-1 < iVar1) {
        uVar12 = 0x1a2;
        uVar7 = 0x74;
LAB_1801d860e:
        FUN_1801a70c0(0x22,0xa1,uVar7,"crypto\\x509v3\\v3_asid.c",uVar12);
        goto LAB_1801d862a;
      }
      if (((local_res18 == 0) && (local_res18 = FUN_180198b30(), local_res18 == 0)) ||
         ((lVar4 = FUN_1801dc100(uVar7,local_res18), lVar4 == 0 ||
          (iVar1 = FUN_1801bb790(local_res18,1), iVar1 == 0)))) {
        uVar12 = 0x1ad;
LAB_1801d8608:
        uVar7 = 0x41;
        goto LAB_1801d860e;
      }
      lVar4 = FUN_1801dc120(local_res18,local_res10);
      if (lVar4 == 0) {
        FUN_1801a70c0(0x22,0xa1,0x41,"crypto\\x509v3\\v3_asid.c",0x1b5);
        goto LAB_1801d862a;
      }
      iVar1 = FUN_1801dbf30(lVar4,uVar6);
      local_res10 = lVar4;
      if (iVar1 == 0) {
        if (*piVar2 == 0) {
          puVar5 = (undefined8 *)FUN_180195dc0(0x10,"crypto\\x509v3\\v3_asid.c",0x1c0);
          if (puVar5 == (undefined8 *)0x0) {
            uVar12 = 0x1c2;
            goto LAB_1801d8608;
          }
          *puVar5 = uVar9;
          puVar5[1] = uVar10;
          *piVar2 = 1;
          *(undefined8 **)(piVar2 + 2) = puVar5;
        }
        else if (*piVar2 == 1) {
          FUN_1801bc3c0(*(undefined8 *)(*(longlong *)(piVar2 + 2) + 8));
          *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8) = uVar10;
        }
        if (*piVar3 == 0) {
          piVar3[2] = 0;
          piVar3[3] = 0;
        }
        else if (*piVar3 == 1) {
          *(undefined8 *)(*(longlong *)(piVar3 + 2) + 8) = 0;
        }
        FUN_1801bfa90(piVar3,&DAT_1803304b0);
        FUN_180195480(*(undefined8 *)(param_1 + 2),local_res8);
        iVar8 = iVar8 + -1;
        local_res8 = local_res8 + -1;
      }
      local_res8 = local_res8 + 1;
      iVar8 = iVar8 + 1;
      iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 2));
    } while (iVar8 < iVar1 + -1);
  }
  iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 2));
  piVar2 = (int *)FUN_180195ae0(*(undefined8 *)(param_1 + 2),iVar1 + -1);
  local_res10 = lVar4;
  if (((piVar2 == (int *)0x0) || (*piVar2 != 1)) ||
     (iVar1 = FUN_1801dbf30(**(undefined8 **)(piVar2 + 2),(*(undefined8 **)(piVar2 + 2))[1]),
     iVar1 < 1)) {
    iVar1 = FUN_1801d86f0(param_1);
    bVar11 = iVar1 != 0;
  }
LAB_1801d862a:
  FUN_1801bc3c0(local_res10);
  FUN_180198910(local_res18);
  return bVar11;
}



// ===== FUN_1801d86f0 @ 1801d86f0 (size 617)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801d86f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_res8;
  undefined4 uVar12;
  
  lVar7 = 0;
  local_res8 = 0;
  lVar4 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 1;
  }
  if ((*param_1 != 1) || (iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 2)), iVar1 == 0)) {
    return 0;
  }
  iVar9 = 0;
  iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 2));
  if (0 < iVar1 + -1) {
    do {
      piVar2 = (int *)FUN_180195ae0(*(undefined8 *)(param_1 + 2),iVar9);
      iVar9 = iVar9 + 1;
      piVar3 = (int *)FUN_180195ae0(*(undefined8 *)(param_1 + 2),iVar9);
      if (piVar2 == (int *)0x0) goto LAB_1801d88db;
      if (*piVar2 == 0) {
        uVar8 = *(undefined8 *)(piVar2 + 2);
        uVar10 = uVar8;
      }
      else {
        if (*piVar2 != 1) goto LAB_1801d88db;
        uVar8 = **(undefined8 **)(piVar2 + 2);
        uVar10 = (*(undefined8 **)(piVar2 + 2))[1];
      }
      if (piVar3 == (int *)0x0) goto LAB_1801d88db;
      if (*piVar3 == 0) {
        uVar6 = *(undefined8 *)(piVar3 + 2);
        uVar11 = uVar6;
      }
      else {
        if (*piVar3 != 1) goto LAB_1801d88db;
        uVar6 = **(undefined8 **)(piVar3 + 2);
        uVar11 = (*(undefined8 **)(piVar3 + 2))[1];
      }
      iVar1 = FUN_1801dbf30(uVar8,uVar6);
      if (((-1 < iVar1) || (iVar1 = FUN_1801dbf30(uVar8,uVar10), 0 < iVar1)) ||
         (iVar1 = FUN_1801dbf30(uVar6,uVar11), 0 < iVar1)) goto LAB_1801d88db;
      if (((lVar4 == 0) && (lVar4 = FUN_180198b30(), lVar4 == 0)) ||
         ((lVar5 = FUN_1801dc100(uVar10,lVar4), lVar5 == 0 ||
          (iVar1 = FUN_1801bb790(lVar4,1), iVar1 == 0)))) {
        uVar12 = 0x130;
LAB_1801d8926:
        FUN_1801a70c0(0x22,0xa2,0x41,"crypto\\x509v3\\v3_asid.c",uVar12);
        goto LAB_1801d88db;
      }
      lVar5 = FUN_1801dc120(lVar4,lVar7);
      if (lVar5 == 0) {
        uVar12 = 0x138;
        goto LAB_1801d8926;
      }
      iVar1 = FUN_1801dbf30(lVar5,uVar6);
      lVar7 = lVar5;
      if (-1 < iVar1) goto LAB_1801d88db;
      iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 2));
    } while (iVar9 < iVar1 + -1);
  }
  iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 2));
  piVar2 = (int *)FUN_180195ae0(*(undefined8 *)(param_1 + 2),iVar1 + -1);
  if (((piVar2 == (int *)0x0) || (*piVar2 != 1)) ||
     (iVar1 = FUN_1801dbf30(**(undefined8 **)(piVar2 + 2),(*(undefined8 **)(piVar2 + 2))[1]),
     iVar1 < 1)) {
    local_res8 = 1;
  }
LAB_1801d88db:
  FUN_1801bc3c0(lVar7);
  FUN_180198910(lVar4);
  return local_res8;
}



// ===== FUN_1801d8980 @ 1801d8980 (size 67)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d8980(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  iVar1 = FUN_1801d86f0(*param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_1801d86f0(param_1[1]), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



// ===== FUN_1801d89d0 @ 1801d89d0 (size 87)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d89d0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    iVar1 = FUN_1801958b0();
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      uVar2 = FUN_1801d8b60(param_1,*(undefined8 *)(param_1 + 0x98),0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}



// ===== FUN_1801d8a30 @ 1801d8a30 (size 304)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d8a30(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  if ((param_2 != 0) && (param_1 != param_2)) {
    if (param_1 == 0) {
      return 0;
    }
    iVar4 = 0;
    iVar7 = 0;
    iVar1 = FUN_1801958b0(param_2);
    if (0 < iVar1) {
      do {
        piVar2 = (int *)FUN_180195ae0(param_2,iVar7);
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        if (*piVar2 == 0) {
          uVar5 = *(undefined8 *)(piVar2 + 2);
          uVar8 = uVar5;
        }
        else {
          if (*piVar2 != 1) {
            return 0;
          }
          uVar5 = (*(undefined8 **)(piVar2 + 2))[1];
          uVar8 = **(undefined8 **)(piVar2 + 2);
        }
        while( true ) {
          iVar1 = FUN_1801958b0(param_1);
          if (iVar1 <= iVar4) {
            return 0;
          }
          piVar2 = (int *)FUN_180195ae0(param_1,iVar4);
          if (piVar2 == (int *)0x0) {
            return 0;
          }
          if (*piVar2 == 0) {
            uVar3 = *(undefined8 *)(piVar2 + 2);
            uVar6 = uVar3;
          }
          else {
            if (*piVar2 != 1) {
              return 0;
            }
            uVar3 = (*(undefined8 **)(piVar2 + 2))[1];
            uVar6 = **(undefined8 **)(piVar2 + 2);
          }
          iVar1 = FUN_1801dbf30(uVar3,uVar5);
          if (-1 < iVar1) break;
          iVar4 = iVar4 + 1;
        }
        iVar1 = FUN_1801dbf30(uVar6,uVar8);
        if (0 < iVar1) {
          return 0;
        }
        iVar7 = iVar7 + 1;
        iVar1 = FUN_1801958b0(param_2);
      } while (iVar7 < iVar1);
    }
  }
  return 1;
}



// ===== FUN_1801d8b60 @ 1801d8b60 (size 1080)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801d8b60(longlong param_1,longlong param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar8 = 1;
  lVar10 = 0;
  lVar11 = 0;
  bVar1 = false;
  bVar2 = false;
  if ((param_2 == 0) || (iVar3 = FUN_1801958b0(param_2), iVar3 < 1)) {
LAB_1801d8f76:
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
LAB_1801d8f81:
    uVar8 = 0;
  }
  else {
    if (param_1 == 0) {
      if (param_3 == (undefined8 *)0x0) goto LAB_1801d8f81;
    }
    else if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_1801d8f76;
    if (param_3 == (undefined8 *)0x0) {
      iVar3 = 0;
      lVar6 = FUN_180195ae0(param_2,0);
      param_3 = *(undefined8 **)(lVar6 + 0x118);
      if (param_3 == (undefined8 *)0x0) goto LAB_1801d8f83;
    }
    else {
      iVar3 = -1;
      lVar6 = 0;
    }
    iVar4 = FUN_1801d8980(param_3);
    if (iVar4 == 0) {
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0x29;
        *(int *)(param_1 + 0xac) = iVar3;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        uVar8 = (ulonglong)uVar5;
        if (uVar5 == 0) goto LAB_1801d8f83;
        goto LAB_1801d8c3e;
      }
    }
    else {
LAB_1801d8c3e:
      piVar7 = (int *)*param_3;
      if (piVar7 != (int *)0x0) {
        if (*piVar7 == 0) {
          bVar2 = true;
        }
        else if (*piVar7 == 1) {
          lVar10 = *(longlong *)(piVar7 + 2);
        }
      }
      piVar7 = (int *)param_3[1];
      if (piVar7 != (int *)0x0) {
        if (*piVar7 == 0) {
          bVar1 = true;
        }
        else if (*piVar7 == 1) {
          lVar11 = *(longlong *)(piVar7 + 2);
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = FUN_1801958b0(param_2);
      if (iVar3 < iVar4) {
        do {
          lVar6 = FUN_180195ae0(param_2,iVar3);
          if (lVar6 == 0) goto LAB_1801d8ed8;
          if (*(longlong *)(lVar6 + 0x118) == 0) {
            if ((lVar10 != 0) || (lVar11 != 0)) {
              if (param_1 == 0) goto LAB_1801d8f70;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(int *)(param_1 + 0xac) = iVar3;
              *(longlong *)(param_1 + 0xb8) = lVar6;
              uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
joined_r0x0001801d8ea2:
              uVar8 = (ulonglong)uVar5;
              if (uVar5 == 0) goto LAB_1801d8f83;
            }
          }
          else {
            iVar4 = FUN_1801d8980();
            if (iVar4 == 0) {
              if (param_1 == 0) goto LAB_1801d8f70;
              *(undefined4 *)(param_1 + 0xb0) = 0x29;
              *(int *)(param_1 + 0xac) = iVar3;
              *(longlong *)(param_1 + 0xb8) = lVar6;
              uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              uVar8 = (ulonglong)uVar5;
              if (uVar5 == 0) goto LAB_1801d8f83;
            }
            plVar9 = *(longlong **)(lVar6 + 0x118);
            piVar7 = (int *)*plVar9;
            if ((piVar7 == (int *)0x0) && (lVar10 != 0)) {
              if (param_1 == 0) goto LAB_1801d8f70;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(int *)(param_1 + 0xac) = iVar3;
              *(longlong *)(param_1 + 0xb8) = lVar6;
              uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              uVar8 = (ulonglong)uVar5;
              if (uVar5 == 0) goto LAB_1801d8f83;
              plVar9 = *(longlong **)(lVar6 + 0x118);
              lVar10 = 0;
              bVar2 = false;
              piVar7 = (int *)*plVar9;
            }
            if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
              if ((bVar2) || (iVar4 = FUN_1801d8a30(*(undefined8 *)(piVar7 + 2),lVar10), iVar4 != 0)
                 ) {
                plVar9 = *(longlong **)(lVar6 + 0x118);
                lVar10 = *(longlong *)(*plVar9 + 8);
                bVar2 = false;
              }
              else {
                if (param_1 == 0) goto LAB_1801d8f70;
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(int *)(param_1 + 0xac) = iVar3;
                *(longlong *)(param_1 + 0xb8) = lVar6;
                uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                uVar8 = (ulonglong)uVar5;
                if (uVar5 == 0) goto LAB_1801d8f83;
                plVar9 = *(longlong **)(lVar6 + 0x118);
              }
            }
            if ((plVar9[1] == 0) && (lVar11 != 0)) {
              if (param_1 == 0) goto LAB_1801d8f70;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(int *)(param_1 + 0xac) = iVar3;
              *(longlong *)(param_1 + 0xb8) = lVar6;
              uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              uVar8 = (ulonglong)uVar5;
              if (uVar5 == 0) goto LAB_1801d8f83;
              plVar9 = *(longlong **)(lVar6 + 0x118);
              lVar11 = 0;
              bVar1 = false;
            }
            piVar7 = (int *)plVar9[1];
            if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
              if ((!bVar1) &&
                 (iVar4 = FUN_1801d8a30(*(undefined8 *)(piVar7 + 2),lVar11), iVar4 == 0)) {
                if (param_1 != 0) {
                  *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                  *(int *)(param_1 + 0xac) = iVar3;
                  *(longlong *)(param_1 + 0xb8) = lVar6;
                  uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                  goto joined_r0x0001801d8ea2;
                }
                goto LAB_1801d8f70;
              }
              bVar1 = false;
              lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x118) + 8) + 8);
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_1801958b0(param_2);
        } while (iVar3 < iVar4);
      }
      if (lVar6 == 0) {
LAB_1801d8ed8:
        if (param_1 != 0) {
          *(undefined4 *)(param_1 + 0xb0) = 1;
        }
        goto LAB_1801d8f81;
      }
      if (*(undefined8 **)(lVar6 + 0x118) == (undefined8 *)0x0) goto LAB_1801d8f83;
      piVar7 = (int *)**(undefined8 **)(lVar6 + 0x118);
      if ((piVar7 != (int *)0x0) && (*piVar7 == 0)) {
        if (param_1 == 0) goto LAB_1801d8f70;
        *(undefined4 *)(param_1 + 0xb0) = 0x2e;
        *(int *)(param_1 + 0xac) = iVar3;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        uVar8 = (ulonglong)uVar5;
        if (uVar5 == 0) goto LAB_1801d8f83;
      }
      piVar7 = *(int **)(*(longlong *)(lVar6 + 0x118) + 8);
      if ((piVar7 == (int *)0x0) || (*piVar7 != 0)) goto LAB_1801d8f83;
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0x2e;
        *(int *)(param_1 + 0xac) = iVar3;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar8;
      }
    }
LAB_1801d8f70:
    uVar8 = 0;
  }
LAB_1801d8f83:
  return uVar8;
}



// ===== FUN_1801d8fa0 @ 1801d8fa0 (size 441)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d8fa0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801d8fbe;
  if (param_2 != (int *)0x0) {
    FUN_180196900(param_1,"%*s%s:\n",param_3,&PTR_1802ead18,param_4,0x1801d8fbe);
    if (*param_2 == 0) {
      FUN_180196900(param_1,"%*sinherit\n",(int)param_3 + 2,&PTR_1802ead18,param_4,uVar6);
    }
    else {
      if (*param_2 != 1) {
        return 0;
      }
      iVar5 = 0;
      iVar1 = FUN_1801958b0(*(undefined8 *)(param_2 + 2));
      if (0 < iVar1) {
        iVar1 = (int)param_3 + 2;
        do {
          piVar3 = (int *)FUN_180195ae0(*(undefined8 *)(param_2 + 2),iVar5);
          if (*piVar3 == 0) {
            lVar4 = FUN_1801e3740(0,*(undefined8 *)(piVar3 + 2));
            if (lVar4 == 0) {
              return 0;
            }
            FUN_180196900(param_1,"%*s%s\n",iVar1,&PTR_1802ead18,lVar4);
            uVar6 = 0x53;
          }
          else {
            if (*piVar3 != 1) {
              return 0;
            }
            lVar4 = FUN_1801e3740(0,**(undefined8 **)(piVar3 + 2));
            if (lVar4 == 0) {
              return 0;
            }
            FUN_180196900(param_1,"%*s%s-",iVar1,&PTR_1802ead18,lVar4);
            FUN_180195e10(lVar4,"crypto\\x509v3\\v3_asid.c",0x59);
            lVar4 = FUN_1801e3740(0,*(undefined8 *)(*(longlong *)(piVar3 + 2) + 8));
            if (lVar4 == 0) {
              return 0;
            }
            FUN_180196900(param_1,&DAT_1802eccf8,lVar4);
            uVar6 = 0x5d;
          }
          FUN_180195e10(lVar4,"crypto\\x509v3\\v3_asid.c",uVar6);
          iVar5 = iVar5 + 1;
          iVar2 = FUN_1801958b0(*(undefined8 *)(param_2 + 2));
        } while (iVar5 < iVar2);
      }
    }
  }
  return 1;
}



// ===== FUN_1801d91b0 @ 1801d91b0 (size 788)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801d91b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  char *pcVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar10 = 0x1801d91d7;
  iVar9 = 0;
  iVar3 = FUN_1801958b0(param_2);
  if (0 < iVar3) {
    do {
      puVar4 = (undefined8 *)FUN_180195ae0(param_2,iVar9);
      if ((((puVar4 == (undefined8 *)0x0) || (piVar5 = (int *)*puVar4, piVar5 == (int *)0x0)) ||
          (puVar1 = *(undefined1 **)(piVar5 + 2), puVar1 == (undefined1 *)0x0)) || (*piVar5 < 2)) {
        sVar7 = 0;
      }
      else {
        sVar7 = CONCAT11(*puVar1,puVar1[1]);
      }
      if (sVar7 == 1) {
        pcVar6 = "%*sIPv4";
LAB_1801d9274:
        FUN_180196900(param_3,pcVar6,param_4,&PTR_1802ead18);
      }
      else {
        if (sVar7 == 2) {
          pcVar6 = "%*sIPv6";
          goto LAB_1801d9274;
        }
        FUN_180196900(param_3,"%*sUnknown AFI %u",param_4,&PTR_1802ead18,sVar7,uVar10);
      }
      if (2 < *(int *)*puVar4) {
        switch(*(undefined1 *)(*(longlong *)((int *)*puVar4 + 2) + 2)) {
        case 1:
          FUN_18018da10(param_3," (Unicast)");
          break;
        case 2:
          FUN_18018da10(param_3," (Multicast)");
          break;
        case 3:
          FUN_18018da10(param_3," (Unicast/Multicast)");
          break;
        case 4:
          FUN_18018da10(param_3," (MPLS)");
          break;
        default:
          FUN_180196900(param_3," (Unknown SAFI %u)");
          break;
        case 0x40:
          FUN_18018da10(param_3," (Tunnel)");
          break;
        case 0x41:
          FUN_18018da10(param_3," (VPLS)");
          break;
        case 0x42:
          FUN_18018da10(param_3," (BGP MDT)");
          break;
        case 0x80:
          FUN_18018da10(param_3," (MPLS-labeled VPN)");
        }
      }
      if (*(int *)puVar4[1] == 0) {
        FUN_18018da10(param_3,": inherit\n");
      }
      else if (*(int *)puVar4[1] == 1) {
        FUN_18018da10(param_3,&DAT_180330b2c);
        iVar8 = 0;
        uVar2 = *(undefined8 *)(puVar4[1] + 8);
        iVar3 = FUN_1801958b0(uVar2);
        if (0 < iVar3) {
          do {
            piVar5 = (int *)FUN_180195ae0(uVar2,iVar8);
            FUN_180196900(param_3,&DAT_18030daf0,param_4 + 2,&PTR_1802ead18);
            if (*piVar5 == 0) {
              iVar3 = FUN_1801daf60(param_3,sVar7,0,*(undefined8 *)(piVar5 + 2));
              if (iVar3 == 0) {
                return 0;
              }
              FUN_180196900(param_3,&DAT_180330a54,
                            **(int **)(piVar5 + 2) * 8 - ((*(int **)(piVar5 + 2))[4] & 7U));
            }
            else if (*piVar5 == 1) {
              iVar3 = FUN_1801daf60(param_3,sVar7,0,**(undefined8 **)(piVar5 + 2));
              if (iVar3 == 0) {
                return 0;
              }
              FUN_18018da10(param_3,&DAT_180306a88);
              iVar3 = FUN_1801daf60(param_3,sVar7,0xff,
                                    *(undefined8 *)(*(longlong *)(piVar5 + 2) + 8));
              if (iVar3 == 0) {
                return 0;
              }
              FUN_18018da10(param_3,&DAT_1802fa360);
            }
            iVar8 = iVar8 + 1;
            iVar3 = FUN_1801958b0(uVar2);
          } while (iVar8 < iVar3);
        }
      }
      iVar9 = iVar9 + 1;
      iVar3 = FUN_1801958b0(param_2);
    } while (iVar9 < iVar3);
  }
  return 1;
}



// ===== FUN_1801d9570 @ 1801d9570 (size 1925)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801d9570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  size_t sVar8;
  longlong lVar9;
  size_t sVar10;
  char *pcVar11;
  longlong lVar12;
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *_Control;
  undefined8 uVar17;
  ulong *puVar18;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  char *local_88;
  longlong local_80;
  int local_78;
  ulong local_74;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_c8;
  local_60 = param_3;
  lVar6 = FUN_1801957a0(FUN_1801d9d00);
  local_80 = lVar6;
  if (lVar6 == 0) {
    local_a8 = CONCAT44(local_a8._4_4_,0x390);
    FUN_1801a70c0(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
    lVar6 = 0;
  }
  else {
    iVar14 = 0;
    local_78 = 0;
    iVar4 = FUN_1801958b0(param_3);
    if (0 < iVar4) {
      do {
        puVar7 = (undefined8 *)FUN_180195ae0(param_3,iVar14);
        _Control = (char *)0x0;
        local_70 = (char *)0x0;
        puVar18 = (ulong *)0x0;
        iVar4 = FUN_1801e39b0(puVar7[1],&DAT_180330b48);
        if (iVar4 != 0) {
          iVar4 = FUN_1801e39b0(puVar7[1],&DAT_180330b50);
          if (iVar4 == 0) {
LAB_1801d96a3:
            iVar4 = 2;
            goto LAB_1801d96a8;
          }
          iVar4 = FUN_1801e39b0(puVar7[1],"IPv4-SAFI");
          if (iVar4 == 0) {
            iVar4 = 1;
            puVar18 = &local_74;
            goto LAB_1801d96a8;
          }
          iVar4 = FUN_1801e39b0(puVar7[1],"IPv6-SAFI");
          if (iVar4 == 0) {
            puVar18 = &local_74;
            goto LAB_1801d96a3;
          }
          local_a8 = CONCAT44(local_a8._4_4_,0x3a7);
          uVar17 = 0x73;
LAB_1801d9ad9:
          FUN_1801a70c0(0x22,0x9f,uVar17,"crypto\\x509v3\\v3_addr.c");
          local_98 = puVar7[2];
          local_a0 = ",value:";
          local_a8 = puVar7[1];
          FUN_1801a6360(6,"section:",*puVar7,",name:");
          goto LAB_1801d9c7a;
        }
        iVar4 = 1;
LAB_1801d96a8:
        if (iVar4 == 1) {
          _Control = "0123456789.";
LAB_1801d96c4:
          local_70 = _Control;
        }
        else if (iVar4 == 2) {
          _Control = "0123456789.:abcdefABCDEF";
          goto LAB_1801d96c4;
        }
        if (iVar4 == 1) {
          iVar14 = 4;
        }
        else if (iVar4 == 2) {
          iVar14 = 0x10;
        }
        else {
          iVar14 = 0;
        }
        pcVar11 = (char *)puVar7[2];
        if (puVar18 != (ulong *)0x0) {
          uVar5 = strtoul(pcVar11,&local_88,0);
          *puVar18 = uVar5;
          sVar8 = strspn(local_88," \t");
          local_88 = local_88 + sVar8;
          if ((0xff < uVar5) || (cVar1 = *local_88, local_88 = local_88 + 1, cVar1 != ':')) {
            local_a8 = CONCAT44(local_a8._4_4_,0x3bf);
            uVar17 = 0xa4;
            goto LAB_1801d9ad9;
          }
          sVar8 = strspn(local_88," \t");
          pcVar11 = local_88 + sVar8;
          local_88 = pcVar11;
        }
        pcVar11 = (char *)FUN_1801ba320(pcVar11,"crypto\\x509v3\\v3_addr.c");
        if (pcVar11 == (char *)0x0) {
          local_a8 = CONCAT44(local_a8._4_4_,0x3c9);
LAB_1801d9c09:
          FUN_1801a70c0(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
          goto LAB_1801d9c7d;
        }
        lVar9 = 0;
        do {
          lVar12 = lVar9 + 1;
          if (pcVar11[lVar9] != "inherit"[lVar9]) {
            sVar8 = strspn(pcVar11,_Control);
            sVar10 = strspn(pcVar11 + (int)sVar8," \t");
            iVar15 = (int)sVar8 + (int)sVar10;
            iVar16 = iVar15 + 1;
            cVar1 = pcVar11[iVar15];
            pcVar11[(int)sVar8] = '\0';
            iVar15 = FUN_1801e2b10(local_58,pcVar11);
            if (iVar15 != iVar14) {
              local_a8 = CONCAT44(local_a8._4_4_,0x3e3);
              uVar17 = 0xa6;
              goto LAB_1801d9b39;
            }
            if (cVar1 == '\0') {
              local_a8 = CONCAT44(local_a8._4_4_,iVar14 * 8);
              iVar4 = FUN_1801da2f0(local_80,iVar4,puVar18,local_58);
              if (iVar4 == 0) {
                local_a8 = CONCAT44(local_a8._4_4_,0x415);
                goto LAB_1801d9c09;
              }
            }
            else {
              if (cVar1 == '-') {
                sVar8 = strspn(pcVar11 + iVar16," \t");
                iVar16 = (int)sVar8 + iVar16;
                sVar8 = strspn(pcVar11 + iVar16,local_70);
                iVar15 = (int)sVar8 + iVar16;
                if ((iVar16 == iVar15) || (pcVar11[iVar15] != '\0')) {
                  local_a8 = CONCAT44(local_a8._4_4_,0x3fe);
                  uVar17 = 0x74;
                  goto LAB_1801d9b39;
                }
                iVar15 = FUN_1801e2b10(local_48,pcVar11 + iVar16);
                if (iVar15 != iVar14) {
                  local_a8 = CONCAT44(local_a8._4_4_,0x404);
                  uVar17 = 0xa6;
                  goto LAB_1801d9b39;
                }
                if (iVar4 == 1) {
                  sVar8 = 4;
                }
                else if (iVar4 == 2) {
                  sVar8 = 0x10;
                }
                else {
                  sVar8 = 0;
                }
                iVar14 = memcmp(local_58,local_48,sVar8);
                if (0 < iVar14) {
                  local_a8 = CONCAT44(local_a8._4_4_,0x40a);
                  uVar17 = 0x74;
                  goto LAB_1801d9b39;
                }
                lVar6 = FUN_1801db5d0(local_80,iVar4,puVar18);
                if (iVar4 == 1) {
                  uVar17 = 4;
                }
                else if (iVar4 == 2) {
                  uVar17 = 0x10;
                }
                else {
                  uVar17 = 0;
                }
                if (lVar6 != 0) {
                  iVar4 = FUN_1801db360(&local_68,local_58,local_48,uVar17);
                  uVar17 = local_68;
                  if (iVar4 != 0) {
                    iVar4 = FUN_180195990(lVar6,local_68);
                    if (iVar4 != 0) goto LAB_1801d9a2a;
                    FUN_1801bfa90(uVar17,&DAT_1803307f0);
                  }
                }
                local_a8 = CONCAT44(local_a8._4_4_,0x40f);
                goto LAB_1801d9c09;
              }
              if (cVar1 != '/') {
                local_a8 = CONCAT44(local_a8._4_4_,0x41b);
                uVar17 = 0x74;
                goto LAB_1801d9b39;
              }
              uVar5 = strtoul(pcVar11 + iVar16,&local_88,10);
              if ((((local_88 == pcVar11 + iVar16) || (*local_88 != '\0')) ||
                  (iVar14 * 8 < (int)uVar5)) || ((int)uVar5 < 0)) {
                local_a8 = CONCAT44(local_a8._4_4_,0x3f0);
                uVar17 = 0x74;
                goto LAB_1801d9b39;
              }
              local_a8 = CONCAT44(local_a8._4_4_,uVar5);
              iVar4 = FUN_1801da2f0(local_80,iVar4,puVar18);
              if (iVar4 == 0) {
                local_a8 = CONCAT44(local_a8._4_4_,0x3f5);
                goto LAB_1801d9c09;
              }
            }
LAB_1801d9a2a:
            lVar6 = local_80;
            goto LAB_1801d9a35;
          }
          lVar9 = lVar12;
        } while (lVar12 != 8);
        lVar9 = FUN_1801db120(lVar6,iVar4,puVar18);
        if (((lVar9 == 0) || (piVar2 = *(int **)(lVar9 + 8), piVar2 == (int *)0x0)) ||
           ((*piVar2 == 1 && (*(longlong *)(piVar2 + 2) != 0)))) {
LAB_1801d9b2b:
          local_a8 = CONCAT44(local_a8._4_4_,0x3d4);
          uVar17 = 0xa5;
LAB_1801d9b39:
          FUN_1801a70c0(0x22,0x9f,uVar17,"crypto\\x509v3\\v3_addr.c");
          local_98 = puVar7[2];
          local_a0 = ",value:";
          local_a8 = puVar7[1];
          FUN_1801a6360(6,"section:",*puVar7,",name:");
          goto LAB_1801d9c7d;
        }
        if ((*piVar2 != 0) || (*(longlong *)(piVar2 + 2) == 0)) {
          if (*(longlong *)(piVar2 + 2) == 0) {
            lVar12 = FUN_1801bc4e0();
            *(longlong *)(*(longlong *)(lVar9 + 8) + 8) = lVar12;
            if (lVar12 == 0) goto LAB_1801d9b2b;
          }
          **(undefined4 **)(lVar9 + 8) = 0;
        }
LAB_1801d9a35:
        FUN_180195e10(pcVar11,"crypto\\x509v3\\v3_addr.c");
        param_3 = local_60;
        iVar14 = local_78 + 1;
        local_78 = iVar14;
        iVar4 = FUN_1801958b0(local_60);
      } while (iVar14 < iVar4);
      lVar6 = local_80;
    }
    iVar14 = 0;
    iVar4 = FUN_1801958b0(lVar6);
    if (0 < iVar4) {
      do {
        puVar7 = (undefined8 *)FUN_180195ae0(lVar6,iVar14);
        if (*(int *)puVar7[1] == 1) {
          piVar2 = (int *)*puVar7;
          if (((piVar2 == (int *)0x0) ||
              (puVar3 = *(undefined1 **)(piVar2 + 2), puVar3 == (undefined1 *)0x0)) || (*piVar2 < 2)
             ) {
            uVar13 = 0;
          }
          else {
            uVar13 = CONCAT11(*puVar3,puVar3[1]);
          }
          iVar4 = FUN_1801d9fc0(*(undefined8 *)((int *)puVar7[1] + 2),uVar13);
          if (iVar4 == 0) goto LAB_1801d9c7a;
        }
        iVar14 = iVar14 + 1;
        iVar4 = FUN_1801958b0(lVar6);
      } while (iVar14 < iVar4);
    }
    FUN_180195a40(lVar6,FUN_1801d9d00);
    FUN_180195a90(lVar6);
    iVar4 = FUN_1801da3d0(lVar6);
    if (iVar4 == 0) {
LAB_1801d9c7a:
      pcVar11 = (char *)0x0;
LAB_1801d9c7d:
      FUN_180195e10(pcVar11,"crypto\\x509v3\\v3_addr.c",0x42c);
      FUN_1801958f0(local_80,FUN_1801d9d50);
      lVar6 = 0;
    }
  }
  return lVar6;
}



// ===== FUN_1801d9d00 @ 1801d9d00 (size 77)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801d9d00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = **(int **)*param_1;
  iVar2 = **(int **)*param_2;
  iVar3 = iVar1;
  if (iVar2 < iVar1) {
    iVar3 = iVar2;
  }
  iVar3 = memcmp(*(void **)(*(int **)*param_1 + 2),*(void **)(*(int **)*param_2 + 2),(longlong)iVar3
                );
  if (iVar3 == 0) {
    iVar3 = iVar1 - iVar2;
  }
  return iVar3;
}



// ===== FUN_1801d9d70 @ 1801d9d70 (size 587)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801d9d70(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  undefined1 auStack_88 [31];
  byte abStack_69 [16];
  byte abStack_59 [17];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801d9d8a;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  iVar3 = 0;
  iVar5 = 0;
  if (*param_1 == 0) {
    piVar1 = *(int **)(param_1 + 2);
    iVar3 = *piVar1;
    sVar4 = (size_t)iVar3;
    if ((-1 < iVar3) && (iVar3 <= param_3)) {
      if (0 < iVar3) {
        memcpy(abStack_59 + 1,*(void **)(piVar1 + 2),sVar4);
        if ((piVar1[4] & 7U) != 0) {
          abStack_59[sVar4] =
               abStack_59[sVar4] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      memset(abStack_59 + sVar4 + 1,0,(longlong)(param_3 - iVar3));
      iVar3 = iVar3 * 8 - (piVar1[4] & 7U);
      goto LAB_1801d9e95;
    }
LAB_1801d9f91:
    iVar2 = -1;
  }
  else {
    if (*param_1 == 1) {
      piVar1 = (int *)**(undefined8 **)(param_1 + 2);
      iVar3 = *piVar1;
      sVar4 = (size_t)iVar3;
      if ((iVar3 < 0) || (param_3 < iVar3)) goto LAB_1801d9f91;
      if (0 < iVar3) {
        memcpy(abStack_59 + 1,*(void **)(piVar1 + 2),sVar4);
        if ((piVar1[4] & 7U) != 0) {
          abStack_59[sVar4] =
               abStack_59[sVar4] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      memset(abStack_59 + sVar4 + 1,0,(longlong)(param_3 - iVar3));
      iVar3 = param_3 * 8;
    }
LAB_1801d9e95:
    if (*param_2 == 0) {
      piVar1 = *(int **)(param_2 + 2);
      iVar5 = *piVar1;
      sVar4 = (size_t)iVar5;
      if ((iVar5 < 0) || (param_3 < iVar5)) goto LAB_1801d9f91;
      if (0 < iVar5) {
        memcpy(abStack_69 + 1,*(void **)(piVar1 + 2),sVar4);
        if ((piVar1[4] & 7U) != 0) {
          abStack_69[sVar4] =
               abStack_69[sVar4] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      memset(abStack_69 + sVar4 + 1,0,(longlong)(param_3 - iVar5));
      iVar5 = iVar5 * 8 - (piVar1[4] & 7U);
    }
    else if (*param_2 == 1) {
      piVar1 = (int *)**(undefined8 **)(param_2 + 2);
      iVar5 = *piVar1;
      sVar4 = (size_t)iVar5;
      if ((iVar5 < 0) || (param_3 < iVar5)) goto LAB_1801d9f91;
      if (0 < iVar5) {
        memcpy(abStack_69 + 1,*(void **)(piVar1 + 2),sVar4);
        if ((piVar1[4] & 7U) != 0) {
          abStack_69[sVar4] =
               abStack_69[sVar4] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      memset(abStack_69 + sVar4 + 1,0,(longlong)(param_3 - iVar5));
      iVar5 = param_3 * 8;
    }
    iVar2 = memcmp(abStack_59 + 1,abStack_69 + 1,(longlong)param_3);
    if (iVar2 == 0) {
      iVar2 = iVar3 - iVar5;
    }
  }
  return iVar2;
}



// ===== FUN_1801d9fc0 @ 1801d9fc0 (size 803)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801d9fc0(undefined8 param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong _Size;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  char local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  iVar9 = 0;
  if (param_2 == 1) {
    uVar8 = 4;
  }
  else if (param_2 == 2) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = 0;
  }
  FUN_180195a90();
  iVar3 = FUN_1801958b0(param_1);
  if (0 < iVar3 + -1) {
    _Size = (ulonglong)uVar8;
    iVar3 = 1;
    do {
      piVar5 = (int *)FUN_180195ae0(param_1,iVar9);
      piVar6 = (int *)FUN_180195ae0(param_1,iVar3);
      if (piVar5 == (int *)0x0) {
        return 0;
      }
      if (*piVar5 == 0) {
        iVar4 = FUN_1801daa30(local_50,*(undefined8 *)(piVar5 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(piVar5 + 2);
      }
      else {
        if (*piVar5 != 1) {
          return 0;
        }
        iVar4 = FUN_1801daa30(local_50,**(undefined8 **)(piVar5 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(*(longlong *)(piVar5 + 2) + 8);
      }
      iVar4 = FUN_1801daa30(local_40,uVar7,uVar8,0xff);
      if (iVar4 == 0) {
        return 0;
      }
      if (piVar6 == (int *)0x0) {
        return 0;
      }
      if (*piVar6 == 0) {
        iVar4 = FUN_1801daa30(local_70,*(undefined8 *)(piVar6 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(piVar6 + 2);
      }
      else {
        if (*piVar6 != 1) {
          return 0;
        }
        iVar4 = FUN_1801daa30(local_70,**(undefined8 **)(piVar6 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(*(longlong *)(piVar6 + 2) + 8);
      }
      iVar4 = FUN_1801daa30(local_60,uVar7,uVar8,0xff);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = memcmp(local_50,local_40,_Size);
      if (0 < iVar4) {
        return 0;
      }
      iVar4 = memcmp(local_70,local_60,_Size);
      if (0 < iVar4) {
        return 0;
      }
      iVar4 = memcmp(local_40,local_70,_Size);
      uVar2 = _Size;
      if (-1 < iVar4) {
        return 0;
      }
      do {
        if ((longlong)(uVar2 - 1) < 0) break;
        cVar1 = local_70[uVar2 - 1];
        local_70[uVar2 - 1] = cVar1 + -1;
        uVar2 = uVar2 - 1;
      } while (cVar1 == '\0');
      iVar4 = memcmp(local_40,local_70,_Size);
      if (iVar4 == 0) {
        iVar4 = FUN_1801db360(&local_78,local_50,local_60);
        if (iVar4 == 0) {
          return 0;
        }
        FUN_180195a00(param_1,iVar9,local_78);
        FUN_180195480(param_1,iVar3);
        FUN_1801bfa90(piVar5,&DAT_1803307f0);
        FUN_1801bfa90(piVar6,&DAT_1803307f0);
        iVar9 = iVar9 + -1;
        iVar3 = iVar3 + -1;
      }
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + 1;
      iVar4 = FUN_1801958b0(param_1);
    } while (iVar9 < iVar4 + -1);
  }
  iVar9 = FUN_1801958b0(param_1);
  piVar5 = (int *)FUN_180195ae0(param_1,iVar9 + -1);
  if (((piVar5 == (int *)0x0) || (*piVar5 != 1)) ||
     ((iVar9 = FUN_1801daa30(local_60,**(undefined8 **)(piVar5 + 2),uVar8,0), iVar9 != 0 &&
      ((iVar9 = FUN_1801daa30(local_50,*(undefined8 *)(*(longlong *)(piVar5 + 2) + 8),uVar8,0xff),
       iVar9 != 0 && (iVar9 = memcmp(local_60,local_50,(ulonglong)uVar8), iVar9 < 1)))))) {
    return 1;
  }
  return 0;
}



// ===== FUN_1801da2f0 @ 1801da2f0 (size 167)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801da2f0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801da305;
  lVar2 = FUN_1801db5d0();
  if (lVar2 != 0) {
    if (param_2 == 1) {
      uVar3 = 4;
    }
    else if (param_2 == 2) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0;
    }
    iVar1 = FUN_1801db240(&local_18,param_4,param_5,uVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_180195990(lVar2,local_18);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_1801bfa90(local_18,&DAT_1803307f0);
    }
  }
  return 0;
}



// ===== FUN_1801da3d0 @ 1801da3d0 (size 1018)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801da3d0(longlong param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  short sVar11;
  undefined8 uVar12;
  int iVar13;
  size_t _Size;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  char local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    iVar13 = 0;
    iVar5 = FUN_1801958b0();
    if (0 < iVar5 + -1) {
      do {
        puVar7 = (undefined8 *)FUN_180195ae0(param_1,iVar13);
        iVar13 = iVar13 + 1;
        puVar8 = (undefined8 *)FUN_180195ae0(param_1,iVar13);
        iVar5 = *(int *)*puVar7;
        iVar15 = *(int *)*puVar8;
        iVar6 = iVar5;
        if (iVar15 < iVar5) {
          iVar6 = iVar15;
        }
        iVar6 = memcmp(*(void **)((int *)*puVar7 + 2),*(void **)((int *)*puVar8 + 2),(longlong)iVar6
                      );
        if (iVar6 == 0) {
          iVar6 = iVar5 - iVar15;
        }
        if (-1 < iVar6) {
          return 0;
        }
        iVar5 = FUN_1801958b0(param_1);
      } while (iVar13 < iVar5 + -1);
    }
    iVar5 = 0;
    local_78 = 0;
    iVar13 = FUN_1801958b0(param_1);
    if (0 < iVar13) {
      do {
        puVar7 = (undefined8 *)FUN_180195ae0(param_1,iVar5);
        if ((((puVar7 == (undefined8 *)0x0) || (piVar9 = (int *)*puVar7, piVar9 == (int *)0x0)) ||
            (puVar2 = *(undefined1 **)(piVar9 + 2), puVar2 == (undefined1 *)0x0)) || (*piVar9 < 2))
        {
          sVar11 = 0;
        }
        else {
          sVar11 = CONCAT11(*puVar2,puVar2[1]);
        }
        if (sVar11 == 1) {
          _Size = 4;
          lVar14 = 3;
        }
        else if (sVar11 == 2) {
          _Size = 0x10;
          lVar14 = 0xf;
        }
        else {
          _Size = 0;
          lVar14 = -1;
        }
        if (puVar7 == (undefined8 *)0x0) {
          return 0;
        }
        piVar9 = (int *)puVar7[1];
        if (piVar9 == (int *)0x0) {
          return 0;
        }
        if (*piVar9 != 0) {
          if (*piVar9 != 1) {
            return 0;
          }
          uVar3 = *(undefined8 *)(piVar9 + 2);
          iVar13 = FUN_1801958b0(uVar3);
          if (iVar13 == 0) {
            return 0;
          }
          iVar15 = 0;
          iVar13 = FUN_1801958b0(uVar3);
          if (0 < iVar13 + -1) {
            do {
              piVar9 = (int *)FUN_180195ae0(uVar3,iVar15);
              iVar15 = iVar15 + 1;
              piVar10 = (int *)FUN_180195ae0(uVar3,iVar15);
              if (piVar9 == (int *)0x0) {
                return 0;
              }
              if (*piVar9 == 0) {
                iVar5 = FUN_1801daa30(local_60,*(undefined8 *)(piVar9 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar12 = *(undefined8 *)(piVar9 + 2);
              }
              else {
                if (*piVar9 != 1) {
                  return 0;
                }
                iVar5 = FUN_1801daa30(local_60,**(undefined8 **)(piVar9 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar12 = *(undefined8 *)(*(longlong *)(piVar9 + 2) + 8);
              }
              iVar5 = FUN_1801daa30(local_70,uVar12,_Size,0xff);
              if (iVar5 == 0) {
                return 0;
              }
              if (piVar10 == (int *)0x0) {
                return 0;
              }
              if (*piVar10 == 0) {
                iVar5 = FUN_1801daa30(local_50,*(undefined8 *)(piVar10 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar12 = *(undefined8 *)(piVar10 + 2);
              }
              else {
                if (*piVar10 != 1) {
                  return 0;
                }
                iVar5 = FUN_1801daa30(local_50,**(undefined8 **)(piVar10 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar12 = *(undefined8 *)(*(longlong *)(piVar10 + 2) + 8);
              }
              iVar5 = FUN_1801daa30(local_40,uVar12,_Size,0xff);
              if (iVar5 == 0) {
                return 0;
              }
              iVar5 = memcmp(local_60,local_50,_Size);
              if (-1 < iVar5) {
                return 0;
              }
              iVar5 = memcmp(local_60,local_70,_Size);
              if (0 < iVar5) {
                return 0;
              }
              iVar5 = memcmp(local_50,local_40,_Size);
              lVar4 = lVar14;
              if (0 < iVar5) {
                return 0;
              }
              for (; (-1 < lVar4 &&
                     (cVar1 = local_50[lVar4], local_50[lVar4] = cVar1 + -1, cVar1 == '\0'));
                  lVar4 = lVar4 + -1) {
              }
              iVar5 = memcmp(local_70,local_50,_Size);
              if (-1 < iVar5) {
                return 0;
              }
              if ((*piVar9 == 1) && (iVar5 = FUN_1801db690(local_60,local_70,_Size), -1 < iVar5)) {
                return 0;
              }
              iVar5 = FUN_1801958b0(uVar3);
            } while (iVar15 < iVar5 + -1);
            iVar5 = local_78;
          }
          iVar13 = FUN_1801958b0(uVar3);
          piVar9 = (int *)FUN_180195ae0(uVar3,iVar13 + -1);
          if ((piVar9 != (int *)0x0) && (*piVar9 == 1)) {
            iVar13 = FUN_1801daa30(local_60,**(undefined8 **)(piVar9 + 2),_Size,0);
            if (iVar13 == 0) {
              return 0;
            }
            iVar13 = FUN_1801daa30(local_70,*(undefined8 *)(*(longlong *)(piVar9 + 2) + 8),_Size,
                                   0xff);
            if (iVar13 == 0) {
              return 0;
            }
            iVar13 = memcmp(local_60,local_70,_Size);
            if (0 < iVar13) {
              return 0;
            }
            iVar13 = FUN_1801db690(local_60,local_70,_Size);
            if (-1 < iVar13) {
              return 0;
            }
          }
        }
        iVar5 = iVar5 + 1;
        local_78 = iVar5;
        iVar13 = FUN_1801958b0(param_1);
      } while (iVar5 < iVar13);
    }
  }
  return 1;
}



// ===== FUN_1801da7d0 @ 1801da7d0 (size 87)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801da7d0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    iVar1 = FUN_1801958b0();
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      uVar2 = FUN_1801daaf0(param_1,*(undefined8 *)(param_1 + 0x98),0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}



// ===== FUN_1801da830 @ 1801da830 (size 498)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801da830(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1801da846;
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (param_1 != param_2)) {
    if (param_1 == 0) {
      return 0;
    }
    iVar4 = 0;
    iVar5 = 0;
    iVar1 = FUN_1801958b0(param_2);
    if (0 < iVar1) {
      do {
        piVar2 = (int *)FUN_180195ae0(param_2,iVar5);
        if (piVar2 == (int *)0x0) {
          return 0xffffffff;
        }
        if (*piVar2 == 0) {
          iVar1 = FUN_1801daa30(local_58,*(undefined8 *)(piVar2 + 2),param_3,0);
          if (iVar1 == 0) {
            return 0xffffffff;
          }
          uVar3 = *(undefined8 *)(piVar2 + 2);
        }
        else {
          if (*piVar2 != 1) {
            return 0xffffffff;
          }
          iVar1 = FUN_1801daa30(local_58,**(undefined8 **)(piVar2 + 2),param_3,0);
          if (iVar1 == 0) {
            return 0xffffffff;
          }
          uVar3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
        }
        iVar1 = FUN_1801daa30(local_78,uVar3,param_3,0xff);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        while( true ) {
          iVar1 = FUN_1801958b0(param_1);
          if (iVar1 <= iVar4) {
            return 0;
          }
          piVar2 = (int *)FUN_180195ae0(param_1,iVar4);
          if (piVar2 == (int *)0x0) {
            return 0;
          }
          if (*piVar2 == 0) {
            iVar1 = FUN_1801daa30(local_48,*(undefined8 *)(piVar2 + 2),param_3,0);
            if (iVar1 == 0) {
              return 0;
            }
            uVar3 = *(undefined8 *)(piVar2 + 2);
          }
          else {
            if (*piVar2 != 1) {
              return 0;
            }
            iVar1 = FUN_1801daa30(local_48,**(undefined8 **)(piVar2 + 2),param_3,0);
            if (iVar1 == 0) {
              return 0;
            }
            uVar3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
          }
          iVar1 = FUN_1801daa30(local_68,uVar3,param_3,0xff);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = memcmp(local_68,local_78,(longlong)param_3);
          if (-1 < iVar1) break;
          iVar4 = iVar4 + 1;
        }
        iVar1 = memcmp(local_48,local_58,(longlong)param_3);
        if (0 < iVar1) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar1 = FUN_1801958b0(param_2);
      } while (iVar5 < iVar1);
    }
  }
  return 1;
}



// ===== FUN_1801daa30 @ 1801daa30 (size 177)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801daa30(void *param_1,int *param_2,int param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  
  iVar2 = *param_2;
  if ((iVar2 < 0) || (param_3 < iVar2)) {
    uVar4 = 0;
  }
  else {
    if (0 < iVar2) {
      memcpy(param_1,*(void **)(param_2 + 2),(longlong)iVar2);
      if ((param_2[4] & 7U) != 0) {
        lVar3 = (longlong)*param_2;
        bVar1 = *(byte *)(lVar3 + -1 + (longlong)param_1);
        bVar5 = (byte)(0xff >> (8U - (char)(param_2[4] & 7U) & 0x1f));
        if (param_4 == 0) {
          *(byte *)((longlong)param_1 + lVar3 + -1) = ~bVar5 & bVar1;
        }
        else {
          *(byte *)((longlong)param_1 + lVar3 + -1) = bVar1 | bVar5;
        }
      }
    }
    memset((void *)((longlong)param_1 + (longlong)*param_2),(uint)param_4,
           (longlong)(param_3 - *param_2));
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FUN_1801daaf0 @ 1801daaf0 (size 1131)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801daaf0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  int local_res20;
  
  lVar6 = 0;
  iVar4 = 1;
  if ((param_2 == 0) || (iVar3 = FUN_1801958b0(param_2), iVar3 < 1)) {
LAB_1801daf43:
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
    return 0;
  }
  if (param_1 == 0) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_1801daf43;
  if (param_3 == 0) {
    local_res20 = 0;
    lVar7 = FUN_180195ae0(param_2,0);
    param_3 = *(longlong *)(lVar7 + 0x110);
    if (param_3 == 0) goto LAB_1801daf21;
  }
  else {
    local_res20 = -1;
    lVar7 = 0;
  }
  iVar3 = FUN_1801da3d0(param_3);
  if (iVar3 == 0) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      *(int *)(param_1 + 0xac) = local_res20;
      *(longlong *)(param_1 + 0xb8) = lVar7;
      iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar4 == 0) goto LAB_1801daf21;
      goto LAB_1801dabc4;
    }
  }
  else {
LAB_1801dabc4:
    FUN_180195a40(param_3,FUN_1801d9d00);
    lVar6 = FUN_180195540(param_3);
    if (lVar6 != 0) {
      local_res20 = local_res20 + 1;
      iVar3 = FUN_1801958b0(param_2);
      if (local_res20 < iVar3) {
        do {
          lVar7 = FUN_180195ae0(param_2,local_res20);
          iVar3 = FUN_1801da3d0(*(undefined8 *)(lVar7 + 0x110));
          if (iVar3 == 0) {
            if (param_1 == 0) goto LAB_1801daf1a;
            *(undefined4 *)(param_1 + 0xb0) = 0x29;
            *(int *)(param_1 + 0xac) = local_res20;
            *(longlong *)(param_1 + 0xb8) = lVar7;
            iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar4 == 0) goto LAB_1801daf21;
          }
          if (*(longlong *)(lVar7 + 0x110) == 0) {
            iVar10 = 0;
            iVar3 = FUN_1801958b0(lVar6);
            if (0 < iVar3) {
LAB_1801dacb0:
              lVar8 = FUN_180195ae0(lVar6,iVar10);
              if (**(int **)(lVar8 + 8) == 0) goto code_r0x0001801dacc3;
              if (param_1 != 0) {
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(int *)(param_1 + 0xac) = local_res20;
                *(longlong *)(param_1 + 0xb8) = lVar7;
                iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
joined_r0x0001801dada5:
                if (iVar4 == 0) goto LAB_1801daf21;
                goto LAB_1801dadb3;
              }
              goto LAB_1801daf1a;
            }
          }
          else {
            FUN_180195a40(*(longlong *)(lVar7 + 0x110),FUN_1801d9d00);
            iVar10 = 0;
            iVar3 = FUN_1801958b0(lVar6);
            if (0 < iVar3) {
              do {
                lVar8 = FUN_180195ae0(lVar6,iVar10);
                uVar5 = FUN_180195630(*(undefined8 *)(lVar7 + 0x110),lVar8);
                lVar9 = FUN_180195ae0(*(undefined8 *)(lVar7 + 0x110),uVar5);
                if (lVar9 == 0) {
                  if (**(int **)(lVar8 + 8) == 1) {
                    if (param_1 == 0) goto LAB_1801daf1a;
                    *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                    *(int *)(param_1 + 0xac) = local_res20;
                    *(longlong *)(param_1 + 0xb8) = lVar7;
                    iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
                    goto joined_r0x0001801dada5;
                  }
                }
                else {
                  piVar1 = *(int **)(lVar9 + 8);
                  if (*piVar1 == 1) {
                    piVar2 = *(int **)(lVar8 + 8);
                    if (*piVar2 != 0) {
                      iVar3 = FUN_1801da3a0(lVar8);
                      if (iVar3 == 1) {
                        uVar11 = 4;
                      }
                      else if (iVar3 == 2) {
                        uVar11 = 0x10;
                      }
                      else {
                        uVar11 = 0;
                      }
                      iVar3 = FUN_1801da830(*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar2 + 2),
                                            uVar11);
                      if (iVar3 == 0) {
                        if (param_1 != 0) {
                          *(int *)(param_1 + 0xac) = local_res20;
                          *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                          *(longlong *)(param_1 + 0xb8) = lVar7;
                          iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
                          if (iVar4 != 0) goto LAB_1801daf01;
                          goto LAB_1801daf21;
                        }
                        goto LAB_1801daf1a;
                      }
                    }
                    FUN_180195a00(lVar6,iVar10);
                  }
                }
LAB_1801daf01:
                iVar10 = iVar10 + 1;
                iVar3 = FUN_1801958b0(lVar6);
              } while (iVar10 < iVar3);
            }
          }
LAB_1801dadb3:
          local_res20 = local_res20 + 1;
          iVar3 = FUN_1801958b0(param_2);
        } while (local_res20 < iVar3);
      }
      if (*(longlong *)(lVar7 + 0x110) != 0) {
        iVar10 = 0;
        iVar3 = FUN_1801958b0();
        if (0 < iVar3) {
          do {
            lVar8 = FUN_180195ae0(*(undefined8 *)(lVar7 + 0x110),iVar10);
            if ((**(int **)(lVar8 + 8) == 0) && (iVar3 = FUN_180195630(lVar6,lVar8), -1 < iVar3)) {
              if (param_1 == 0) goto LAB_1801daf1a;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(int *)(param_1 + 0xac) = local_res20;
              *(longlong *)(param_1 + 0xb8) = lVar7;
              iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar4 == 0) break;
            }
            iVar10 = iVar10 + 1;
            iVar3 = FUN_1801958b0(*(undefined8 *)(lVar7 + 0x110));
          } while (iVar10 < iVar3);
        }
      }
      goto LAB_1801daf21;
    }
    FUN_1801a70c0(0x22,0xa6,0x41,"crypto\\x509v3\\v3_addr.c",0x4cd);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x11;
    }
  }
  iVar4 = 0;
LAB_1801daf21:
  FUN_180195650(lVar6);
  return iVar4;
code_r0x0001801dacc3:
  iVar10 = iVar10 + 1;
  iVar3 = FUN_1801958b0(lVar6);
  if (iVar3 <= iVar10) goto LAB_1801dadb3;
  goto LAB_1801dacb0;
LAB_1801daf1a:
  iVar4 = 0;
  goto LAB_1801daf21;
}



// ===== FUN_1801daf60 @ 1801daf60 (size 443)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1801daf60(undefined8 param_1,int param_2,undefined1 param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_50;
  char acStack_4a [18];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1801daf71;
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  if (*param_4 < 0) {
    return 0;
  }
  if (param_2 == 1) {
    iVar2 = FUN_1801daa30(acStack_4a + 2,param_4,4,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    local_50 = (uint)(byte)acStack_4a[5];
    local_58 = (uint)(byte)acStack_4a[4];
    FUN_180196900(param_1,"%d.%d.%d.%d",acStack_4a[2],acStack_4a[3]);
    return 1;
  }
  if (param_2 != 2) {
    iVar2 = 0;
    if (0 < *param_4) {
      lVar1 = 0;
      do {
        ppuVar4 = &PTR_1802ead18;
        if (0 < iVar2) {
          ppuVar4 = (undefined **)&DAT_1802ea954;
        }
        FUN_180196900(param_1,"%s%02x",ppuVar4,*(undefined1 *)(lVar1 + *(longlong *)(param_4 + 2)));
        iVar2 = iVar2 + 1;
        lVar1 = lVar1 + 1;
      } while (iVar2 < *param_4);
    }
    FUN_180196900(param_1,&DAT_180330a4c,param_4[4] & 7);
    return 1;
  }
  iVar3 = 0x10;
  iVar2 = FUN_1801daa30(acStack_4a + 2,param_4,0x10,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  lVar1 = 0x10;
  do {
    if ((acStack_4a[lVar1 + 1] != '\0') || (acStack_4a[lVar1] != '\0')) break;
    iVar3 = iVar3 + -2;
    lVar1 = lVar1 + -2;
  } while (1 < lVar1);
  iVar2 = 0;
  if (0 < (longlong)iVar3) {
    lVar1 = 0;
    do {
      ppuVar4 = &PTR_1802ead18;
      if (iVar2 < 0xe) {
        ppuVar4 = (undefined **)&DAT_1802ea954;
      }
      FUN_180196900(param_1,&DAT_180330a3c,CONCAT11(acStack_4a[lVar1 + 2],acStack_4a[lVar1 + 3]),
                    ppuVar4);
      iVar2 = iVar2 + 2;
      lVar1 = lVar1 + 2;
    } while (lVar1 < iVar3);
    if (0xf < iVar2) goto LAB_1801db09e;
  }
  FUN_18018da10(param_1,&DAT_1802ea954);
LAB_1801db09e:
  if (iVar2 == 0) {
    FUN_18018da10(param_1,&DAT_1802ea954);
    return 1;
  }
  return 1;
}



// ===== FUN_1801db120 @ 1801db120 (size 288)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801db120(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  
  local_res11 = (undefined1)param_2;
  local_res10 = (undefined1)((ulonglong)param_2 >> 8);
  if (param_3 != (undefined1 *)0x0) {
    local_res12 = *param_3;
  }
  iVar4 = 0;
  uVar5 = (param_3 != (undefined1 *)0x0) + 2;
  iVar1 = FUN_1801958b0();
  if (0 < iVar1) {
    do {
      plVar2 = (longlong *)FUN_180195ae0(param_1,iVar4);
      if ((*(uint *)*plVar2 == uVar5) &&
         (iVar1 = memcmp(*(void **)((uint *)*plVar2 + 2),&local_res10,(ulonglong)uVar5), iVar1 == 0)
         ) {
        return plVar2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_1801958b0(param_1);
    } while (iVar4 < iVar1);
  }
  plVar2 = (longlong *)FUN_1801bf3f0(&DAT_1803308d0);
  if (plVar2 != (longlong *)0x0) {
    if (plVar2[1] == 0) {
      lVar3 = FUN_1801bf3f0(&DAT_180330860);
      plVar2[1] = lVar3;
      if (lVar3 == 0) goto LAB_1801db21a;
    }
    lVar3 = *plVar2;
    if (lVar3 == 0) {
      lVar3 = FUN_1801bc530();
      *plVar2 = lVar3;
      if (lVar3 == 0) goto LAB_1801db21a;
    }
    iVar1 = FUN_1801dfa10(lVar3,&local_res10,uVar5);
    if ((iVar1 != 0) && (iVar1 = FUN_180195990(param_1,plVar2), iVar1 != 0)) {
      return plVar2;
    }
  }
LAB_1801db21a:
  FUN_1801bfa90(plVar2,&DAT_1803308d0);
  return (longlong *)0x0;
}



// ===== FUN_1801db240 @ 1801db240 (size 283)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801db240(undefined8 *param_1,undefined8 param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  
  iVar2 = (int)(param_3 + 7 + ((int)(param_3 + 7) >> 0x1f & 7U)) >> 3;
  uVar6 = param_3 & 0x80000007;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
  }
  puVar4 = (undefined4 *)FUN_1801bf3f0(&DAT_1803307f0);
  if ((int)param_3 < 0) {
    return 0;
  }
  if (param_4 * 8 < (int)param_3) {
    return 0;
  }
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar4 = 0;
  lVar5 = *(longlong *)(puVar4 + 2);
  if (lVar5 == 0) {
    lVar5 = FUN_1801bc3f0();
    *(longlong *)(puVar4 + 2) = lVar5;
    if (lVar5 == 0) goto LAB_1801db2e7;
  }
  iVar3 = FUN_1801dfa10(lVar5,param_2,iVar2);
  if (iVar3 != 0) {
    *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) =
         *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) & 0xfffffff8;
    *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) = *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) | 8;
    if (0 < (int)uVar6) {
      pbVar1 = (byte *)(*(longlong *)(*(longlong *)(puVar4 + 2) + 8) + -1 + (longlong)iVar2);
      *pbVar1 = *pbVar1 & ~(byte)(0xff >> ((byte)uVar6 & 0x1f));
      *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) =
           *(uint *)(*(longlong *)(puVar4 + 2) + 0x10) | 8 - uVar6;
    }
    *param_1 = puVar4;
    return 1;
  }
LAB_1801db2e7:
  FUN_1801bfa90(puVar4,&DAT_1803307f0);
  return 0;
}



// ===== FUN_1801db360 @ 1801db360 (size 609)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801db360(undefined8 *param_1,void *param_2,void *param_3,uint param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  size_t sVar8;
  uint uVar9;
  size_t _Size;
  
  _Size = (size_t)(int)param_4;
  iVar3 = memcmp(param_2,param_3,_Size);
  if (0 < iVar3) {
    return 0;
  }
  iVar3 = FUN_1801db690(param_2,param_3,param_4);
  if (-1 < iVar3) {
    uVar4 = FUN_1801db240(param_1,param_2,iVar3,param_4);
    return uVar4;
  }
  puVar5 = (undefined4 *)FUN_1801bf3f0(&DAT_1803307f0);
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar5 = 1;
  plVar6 = (longlong *)FUN_1801bf3f0(&DAT_180330780);
  *(longlong **)(puVar5 + 2) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    if (*plVar6 == 0) {
      lVar7 = FUN_1801bc3f0();
      **(longlong **)(puVar5 + 2) = lVar7;
      if (lVar7 == 0) goto LAB_1801db59a;
    }
    if (*(longlong *)(*(longlong *)(puVar5 + 2) + 8) == 0) {
      lVar7 = FUN_1801bc3f0();
      *(longlong *)(*(longlong *)(puVar5 + 2) + 8) = lVar7;
      if (lVar7 == 0) goto LAB_1801db59a;
    }
    sVar8 = _Size;
    uVar9 = param_4;
    if (0 < (int)param_4) {
      do {
        if (*(char *)((longlong)param_2 + (sVar8 - 1)) != '\0') break;
        uVar9 = uVar9 - 1;
        sVar8 = sVar8 - 1;
      } while (0 < (longlong)sVar8);
    }
    iVar3 = FUN_1801dfa10(**(undefined8 **)(puVar5 + 2),param_2,uVar9);
    if (iVar3 != 0) {
      *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) =
           *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) & 0xfffffff8;
      *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) =
           *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) | 8;
      if (0 < (int)uVar9) {
        iVar3 = 1;
        bVar2 = *(byte *)((longlong)(int)uVar9 + -1 + (longlong)param_2);
        if ((bVar2 & 0x7f) != 0) {
          do {
            iVar3 = iVar3 + 1;
          } while (((uint)bVar2 & 0xffU >> ((byte)iVar3 & 0x1f)) != 0);
        }
        *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) =
             *(uint *)(**(longlong **)(puVar5 + 2) + 0x10) | 8U - iVar3;
      }
      sVar8 = _Size;
      if (0 < (int)param_4) {
        do {
          param_4 = (uint)sVar8;
          if (*(char *)((longlong)param_3 + (_Size - 1)) != -1) break;
          param_4 = param_4 - 1;
          sVar8 = (size_t)param_4;
          _Size = _Size - 1;
        } while (0 < (longlong)_Size);
      }
      iVar3 = FUN_1801dfa10(*(undefined8 *)(*(longlong *)(puVar5 + 2) + 8),param_3,param_4);
      if (iVar3 != 0) {
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar5 + 2) + 8) + 0x10);
        *puVar1 = *puVar1 & 0xfffffff8;
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar5 + 2) + 8) + 0x10);
        *puVar1 = *puVar1 | 8;
        if (0 < (int)param_4) {
          iVar3 = 1;
          bVar2 = *(byte *)((longlong)(int)param_4 + -1 + (longlong)param_3);
          if ((bVar2 & 0x7f) != 0x7f) {
            do {
              iVar3 = iVar3 + 1;
              uVar9 = 0xff >> ((byte)iVar3 & 0x1f);
            } while ((bVar2 & uVar9) != uVar9);
          }
          puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar5 + 2) + 8) + 0x10);
          *puVar1 = *puVar1 | 8U - iVar3;
        }
        *param_1 = puVar5;
        return 1;
      }
    }
  }
LAB_1801db59a:
  FUN_1801bfa90(puVar5,&DAT_1803307f0);
  return 0;
}



// ===== FUN_1801db5d0 @ 1801db5d0 (size 177)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801db5d0(undefined8 param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  
  lVar2 = FUN_1801db120();
  if (((lVar2 == 0) || (piVar1 = *(int **)(lVar2 + 8), piVar1 == (int *)0x0)) ||
     ((*piVar1 == 0 && (*(longlong *)(piVar1 + 2) != 0)))) {
    return 0;
  }
  if ((*piVar1 == 1) && (*(longlong *)(piVar1 + 2) != 0)) {
    return *(longlong *)(piVar1 + 2);
  }
  lVar3 = FUN_1801957e0();
  if (lVar3 == 0) {
    return 0;
  }
  if (param_2 == 1) {
    pcVar4 = FUN_1801db850;
  }
  else {
    if (param_2 != 2) goto LAB_1801db64a;
    pcVar4 = FUN_1801db870;
  }
  FUN_180195a40(lVar3,pcVar4);
LAB_1801db64a:
  **(undefined4 **)(lVar2 + 8) = 1;
  *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = lVar3;
  return lVar3;
}



// ===== FUN_1801db690 @ 1801db690 (size 277)

int FUN_1801db690(longlong param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_3) {
    pcVar4 = param_2;
    do {
      if (pcVar4[param_1 - (longlong)param_2] != *pcVar4) break;
      pcVar4 = pcVar4 + 1;
      iVar5 = iVar5 + 1;
    } while ((longlong)pcVar4 - (longlong)param_2 < (longlong)param_3);
  }
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    pcVar4 = param_2 + param_3;
    do {
      if ((pcVar4[param_1 - (longlong)param_2] != '\0') || (*pcVar4 != -1)) break;
      param_3 = param_3 + -1;
      pcVar4 = pcVar4 + -1;
    } while (-1 < (longlong)pcVar4 - (longlong)param_2);
  }
  if (param_3 <= iVar5) {
    if (param_3 < iVar5) {
      return iVar5 * 8;
    }
    bVar1 = *(byte *)(iVar5 + param_1);
    bVar3 = param_2[iVar5] ^ bVar1;
    switch(bVar3) {
    case 1:
      iVar2 = 7;
      break;
    default:
      goto LAB_1801db79a;
    case 3:
      iVar2 = 6;
      break;
    case 7:
      iVar2 = 5;
      break;
    case 0xf:
      iVar2 = 4;
      break;
    case 0x1f:
      iVar2 = 3;
      break;
    case 0x3f:
      iVar2 = 2;
      break;
    case 0x7f:
      iVar2 = 1;
    }
    if (((bVar3 & bVar1) == 0) && ((param_2[iVar5] & bVar3) == bVar3)) {
      return iVar2 + iVar5 * 8;
    }
  }
LAB_1801db79a:
  return -1;
}



// ===== FUN_1801db8d0 @ 1801db8d0 (size 73)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801db8d0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_18020c890(*param_1);
    FUN_1801958f0(param_1[1],FUN_18020c890);
    FUN_180195e10(param_1,"crypto\\x509v3\\pcy_cache.c",0xb8);
  }
  return;
}



// ===== FUN_1801db920 @ 1801db920 (size 902)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801db920(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int local_res8 [2];
  int local_res10;
  undefined8 *local_res18;
  longlong *local_res20;
  undefined4 uVar12;
  
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    return 1;
  }
  puVar4 = (undefined8 *)FUN_180195dc0(0x20,"crypto\\x509v3\\pcy_cache.c",0x5c);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_1801a70c0(0x22,0xaa,0x41,"crypto\\x509v3\\pcy_cache.c",0x5e);
    return 0;
  }
  local_res18 = puVar4 + 2;
  *puVar4 = 0;
  *(undefined4 *)local_res18 = 0xffffffff;
  puVar4[1] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar4 + 3) = 0xffffffff;
  *(undefined8 **)(param_1 + 0xf0) = puVar4;
  plVar5 = (longlong *)FUN_1801a3d30(param_1,0x191,local_res8,0);
  local_res20 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    if (local_res8[0] == -1) {
LAB_1801dba36:
      lVar6 = FUN_1801a3d30(param_1,0x59,local_res8);
      if (lVar6 == 0) {
        if (local_res8[0] == -1) {
          return 1;
        }
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0xf0);
        iVar11 = 0;
        local_res10 = local_res8[0];
        lVar9 = 0;
        iVar1 = FUN_1801958b0(lVar6);
        iVar3 = 0;
        if (iVar1 < 1) {
LAB_1801dbb5a:
          iVar11 = iVar3;
          FUN_18020c890(lVar9);
        }
        else {
          lVar9 = FUN_1801957a0(FUN_1801dbd40);
          plVar5[1] = lVar9;
          if (lVar9 != 0) {
            iVar10 = 0;
            if (0 < iVar1) {
              do {
                uVar7 = FUN_180195ae0(lVar6,iVar10);
                lVar9 = FUN_18020c8f0(uVar7,0,local_res10);
                if (lVar9 == 0) {
                  uVar12 = 0x2d;
                  goto LAB_1801dbab8;
                }
                iVar2 = FUN_1801b96c0(*(undefined8 *)(lVar9 + 8));
                if (iVar2 == 0x2ea) {
                  if (*plVar5 != 0) {
LAB_1801dbbd2:
                    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
                    iVar3 = -1;
                    goto LAB_1801dbb5a;
                  }
                  *plVar5 = lVar9;
                }
                else {
                  iVar2 = FUN_180195630(plVar5[1],lVar9);
                  if (-1 < iVar2) goto LAB_1801dbbd2;
                  iVar2 = FUN_180195990(plVar5[1],lVar9);
                  if (iVar2 == 0) {
                    FUN_1801a70c0(0x22,0xa9,0x41,"crypto\\x509v3\\pcy_cache.c",0x3d);
                    goto LAB_1801dbb5a;
                  }
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar1);
            }
            lVar9 = 0;
            iVar3 = 1;
            goto LAB_1801dbb5a;
          }
          uVar12 = 0x26;
LAB_1801dbab8:
          FUN_1801a70c0(0x22,0xa9,0x41,"crypto\\x509v3\\pcy_cache.c",uVar12);
        }
        FUN_1801958f0(lVar6,FUN_18020be70);
        if (iVar11 < 1) {
          FUN_1801958f0(plVar5[1],FUN_18020c890);
          plVar5[1] = 0;
          return iVar11;
        }
        local_res8[0] = iVar11;
        lVar6 = FUN_1801a3d30(param_1,0x2eb,local_res8,0);
        if (lVar6 == 0) {
          if (local_res8[0] == -1) {
LAB_1801dbc33:
            lVar8 = FUN_1801a3d30(param_1,0x2ec,local_res8,0);
            if (lVar8 == 0) {
              if (local_res8[0] == -1) goto LAB_1801dbc7d;
            }
            else {
              iVar3 = FUN_1801dbd00(local_res18,lVar8);
              if (iVar3 != 0) goto LAB_1801dbc7d;
            }
          }
        }
        else {
          local_res8[0] = FUN_18020ca50(param_1,lVar6);
          if (0 < local_res8[0]) goto LAB_1801dbc33;
        }
      }
    }
  }
  else if ((((*plVar5 != 0) || (plVar5[1] != 0)) &&
           (iVar3 = FUN_1801dbd00((undefined4 *)((longlong)puVar4 + 0x14)), iVar3 != 0)) &&
          (iVar3 = FUN_1801dbd00(puVar4 + 3,plVar5[1]), iVar3 != 0)) goto LAB_1801dba36;
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
LAB_1801dbc7d:
  FUN_18020c870(local_res20);
  FUN_1801bc3c0(lVar8);
  return 1;
}



// ===== FUN_1801dbcb0 @ 1801dbcb0 (size 75)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801dbcb0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (lVar1 == 0) {
    FUN_1801add90(*(undefined8 *)(param_1 + 0x140));
    FUN_1801db920(param_1);
    FUN_1801ade50(*(undefined8 *)(param_1 + 0x140));
    lVar1 = *(longlong *)(param_1 + 0xf0);
  }
  return lVar1;
}



// ===== FUN_1801dbd70 @ 1801dbd70 (size 104)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801dbd70(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1801a1df0(*(undefined8 *)(param_1 + 8));
    FUN_1801bc3c0(*(undefined8 *)(param_1 + 0x10));
    FUN_18019deb0(*(undefined8 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_180195e10(*(undefined8 *)(param_1 + 0x28),"crypto\\asn1\\x_pkey.c",0x2d);
    }
    FUN_180195e10(param_1,"crypto\\asn1\\x_pkey.c",0x2e);
  }
  return;
}



// ===== FUN_1801dbde0 @ 1801dbde0 (size 197)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801dbde0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801dbdec;
  lVar1 = FUN_180196100(0x50,"crypto\\asn1\\x_pkey.c",0x14);
  if (lVar1 != 0) {
    uVar2 = FUN_1801a1e50();
    *(undefined8 *)(lVar1 + 8) = uVar2;
    lVar3 = FUN_1801bc530();
    *(longlong *)(lVar1 + 0x10) = lVar3;
    if ((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) {
      return lVar1;
    }
    FUN_1801a1df0();
    FUN_1801bc3c0(*(undefined8 *)(lVar1 + 0x10));
    FUN_18019deb0(*(undefined8 *)(lVar1 + 0x18));
    if (*(int *)(lVar1 + 0x30) != 0) {
      FUN_180195e10(*(undefined8 *)(lVar1 + 0x28),"crypto\\asn1\\x_pkey.c",0x2d);
    }
    FUN_180195e10(lVar1,"crypto\\asn1\\x_pkey.c",0x2e);
  }
  FUN_1801a70c0(0xd,0xad,0x41,"crypto\\asn1\\x_pkey.c",0x20,uVar4);
  return 0;
}



// ===== FUN_1801dbeb0 @ 1801dbeb0 (size 95)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801dbeb0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong local_res8 [4];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (((((param_1[1] & 0xfffffeffU) == 10) && (*param_1 < 5)) &&
      (iVar1 = FUN_1801dc1c0(local_res8,param_1,10,param_4,0x1801dbeba), iVar1 != 0)) &&
     (local_res8[0] + 0x80000000U < 0x100000000)) {
    return local_res8[0];
  }
  return 0xffffffff;
}



// ===== FUN_1801dbf30 @ 1801dbf30 (size 74)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801dbf30(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar2 == (*(uint *)(param_2 + 4) & 0x100)) {
    uVar1 = FUN_18019a070();
    if (uVar2 != 0) {
      uVar1 = (ulonglong)(uint)-(int)uVar1;
    }
    return uVar1;
  }
  uVar1 = 1;
  if (uVar2 != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_1801dbfa0 @ 1801dbfa0 (size 81)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801dbfa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong local_res8 [4];
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_1801dc1c0(local_res8,param_1,2,param_4,0x1801dbfaa);
  if ((iVar1 == 0) || (0xffffffff < local_res8[0] + 0x80000000U)) {
    local_res8[0] = 0xffffffff;
  }
  return local_res8[0];
}



// ===== FUN_1801dc020 @ 1801dc020 (size 181)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801dc020(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (int *)0x0) {
    FUN_1801a70c0(0xd,0xe6,0x43,"crypto\\asn1\\a_int.c",0x165);
    return 0;
  }
  if ((param_2[1] & 0xfffffeffU) != 2) {
    FUN_1801a70c0(0xd,0xe6,0xe1,"crypto\\asn1\\a_int.c",0x169);
    return 0;
  }
  if (((uint)param_2[1] >> 8 & 1) == 0) {
    uVar1 = FUN_1801dc140(param_1,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
    return uVar1;
  }
  FUN_1801a70c0(0xd,0xe6,0xe2,"crypto\\asn1\\a_int.c",0x16d);
  return 0;
}



// ===== FUN_1801dc140 @ 1801dc140 (size 113)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801dc140(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_3 < 9) {
    if (param_2 != 0) {
      uVar2 = 0;
      uVar3 = 0;
      if (param_3 != 0) {
        do {
          pbVar1 = (byte *)(uVar3 + param_2);
          uVar3 = uVar3 + 1;
          uVar2 = uVar2 << 8 | (ulonglong)*pbVar1;
        } while (uVar3 < param_3);
      }
      *param_1 = uVar2;
      return 1;
    }
  }
  else {
    FUN_1801a70c0(0xd,0xe1,0xdf,"crypto\\asn1\\a_int.c",0xd5);
  }
  return 0;
}



// ===== FUN_1801dc1c0 @ 1801dc1c0 (size 397)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801dc1c0(ulonglong *param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 == (int *)0x0) {
    FUN_1801a70c0(0xd,0xe3,0x43,"crypto\\asn1\\a_int.c",0x142);
    return 0;
  }
  if ((param_2[1] & 0xfffffeffU) != param_3) {
    FUN_1801a70c0(0xd,0xe3,0xe1,"crypto\\asn1\\a_int.c",0x146);
    return 0;
  }
  uVar4 = (ulonglong)*param_2;
  if (uVar4 < 9) {
    if (*(longlong *)(param_2 + 2) != 0) {
      uVar2 = 0;
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          pbVar1 = (byte *)(uVar3 + *(longlong *)(param_2 + 2));
          uVar3 = uVar3 + 1;
          uVar2 = uVar2 << 8 | (ulonglong)*pbVar1;
        } while (uVar3 < uVar4);
      }
      if ((param_2[1] & 0x100U) == 0) {
        if (uVar2 < 0x8000000000000000) {
          *param_1 = uVar2;
          return 1;
        }
        FUN_1801a70c0(0xd,0xe0,0xdf,"crypto\\asn1\\a_int.c",0x110);
        return 0;
      }
      if (uVar2 < 0x8000000000000001) {
        *param_1 = -uVar2;
        return 1;
      }
      FUN_1801a70c0(0xd,0xe0,0xe0,"crypto\\asn1\\a_int.c",0x109);
      return 0;
    }
  }
  else {
    FUN_1801a70c0(0xd,0xe1,0xdf,"crypto\\asn1\\a_int.c",0xd5);
  }
  return 0;
}



// ===== FUN_1801dc350 @ 1801dc350 (size 151)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801dc350(longlong param_1,ulonglong param_2,uint param_3)

{
  longlong lVar2;
  longlong lVar1;
  undefined1 auStack_38 [31];
  undefined1 auStack_19 [9];
  ulonglong local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x1801dc35a;
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStack_38;
  *(uint *)(param_1 + 4) = param_3;
  lVar2 = 8;
  if ((longlong)param_2 < 0) {
    param_2 = -param_2;
    do {
      lVar1 = lVar2 + -1;
      auStack_19[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar2 = lVar1;
    } while (param_2 != 0);
    param_3 = param_3 | 0x100;
  }
  else {
    do {
      lVar1 = lVar2 + -1;
      auStack_19[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar2 = lVar1;
    } while (param_2 != 0);
    param_3 = param_3 & 0xfffffeff;
  }
  *(uint *)(param_1 + 4) = param_3;
  FUN_18019a480(param_1,auStack_19 + lVar1 + 1,8 - (int)lVar1);
  return;
}



// ===== FUN_1801dc3f0 @ 1801dc3f0 (size 180)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801dc3f0(undefined4 *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801dc3fc;
  if ((param_1[1] & 0xfffffeff) != param_3) {
    FUN_1801a70c0(0xd,0xe4,0xe1,"crypto\\asn1\\a_int.c",499,0x1801dc3fc);
    return 0;
  }
  lVar1 = FUN_180198210(*(undefined8 *)(param_1 + 2),*param_1,param_2);
  if (lVar1 == 0) {
    FUN_1801a70c0(0xd,0xe4,0x69,"crypto\\asn1\\a_int.c",0x1f9,uVar2);
    return 0;
  }
  if ((param_1[1] & 0x100) != 0) {
    FUN_180198f00(lVar1,1);
  }
  return lVar1;
}



// ===== FUN_1801dc4b0 @ 1801dc4b0 (size 266)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_1801dc4b0(undefined8 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801dc4c5;
  if (param_2 == (int *)0x0) {
    piVar4 = (int *)FUN_18019a600(param_3);
  }
  else {
    param_2[1] = param_3;
    piVar4 = param_2;
  }
  if (piVar4 == (int *)0x0) {
    uVar1 = 0x1cf;
    uVar5 = 0x3a;
  }
  else {
    iVar2 = FUN_180198a00(param_1);
    if ((iVar2 != 0) && (iVar2 = FUN_180198a80(param_1), iVar2 == 0)) {
      piVar4[1] = piVar4[1] | 0x102;
    }
    iVar2 = FUN_180198b90(param_1);
    iVar2 = (int)((iVar2 + 7 >> 0x1f & 7U) + iVar2 + 7) >> 3;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    iVar3 = FUN_18019a480(piVar4,0,iVar2);
    if (iVar3 != 0) {
      iVar3 = FUN_180198a80(param_1);
      if (iVar3 == 0) {
        iVar2 = FUN_180198350(param_1);
      }
      else {
        **(undefined1 **)(piVar4 + 2) = 0;
      }
      *piVar4 = iVar2;
      return piVar4;
    }
    uVar1 = 0x1dc;
    uVar5 = 0x41;
  }
  FUN_1801a70c0(0xd,0xe5,uVar5,"crypto\\asn1\\a_int.c",uVar1,uVar6);
  if (piVar4 != param_2) {
    FUN_1801bc3c0(piVar4);
  }
  return (int *)0x0;
}



// ===== FUN_1801dc5c0 @ 1801dc5c0 (size 230)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801dc5c0(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res18 [4];
  undefined8 uVar5;
  
  uVar5 = 0x1801dc5d8;
  lVar4 = (longlong)param_3;
  uVar2 = FUN_1801dc6b0(0,0,*param_2,lVar4);
  if (uVar2 != 0) {
    if ((param_1 == (longlong *)0x0) || (lVar3 = *param_1, lVar3 == 0)) {
      lVar3 = FUN_1801bc4b0();
      if (lVar3 == 0) {
        return 0;
      }
      *(undefined4 *)(lVar3 + 4) = 2;
    }
    iVar1 = FUN_18019a480(lVar3,0,uVar2 & 0xffffffff);
    if (iVar1 != 0) {
      FUN_1801dc6b0(*(undefined8 *)(lVar3 + 8),local_res18,*param_2,lVar4);
      if (local_res18[0] != 0) {
        *(uint *)(lVar3 + 4) = *(uint *)(lVar3 + 4) | 0x100;
      }
      *param_2 = *param_2 + lVar4;
      if (param_1 != (longlong *)0x0) {
        *param_1 = lVar3;
      }
      return lVar3;
    }
    FUN_1801a70c0(0xd,0xc2,0x41,"crypto\\asn1\\a_int.c",0x139,uVar5);
    if ((param_1 == (longlong *)0x0) || (*param_1 != lVar3)) {
      FUN_1801bc3c0(lVar3);
    }
  }
  return 0;
}



// ===== FUN_1801dc6b0 @ 1801dc6b0 (size 494)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801dc6b0(byte *param_1,uint *param_2,byte *param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  unkuint10 Var4;
  undefined1 auVar5 [13];
  undefined1 auVar6 [11];
  undefined1 auVar7 [13];
  undefined1 auVar8 [11];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  uint uVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  longlong lVar18;
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  
  if (param_4 == 0) {
    FUN_1801a70c0(0xd,0xe2,0xde,"crypto\\asn1\\a_int.c",0x9a);
    return 0;
  }
  bVar2 = *param_3;
  if (param_2 != (uint *)0x0) {
    *param_2 = bVar2 & 0x80;
  }
  if (param_4 == 1) {
    if (param_1 != (byte *)0x0) {
      bVar12 = *param_3;
      if ((bVar2 & 0x80) != 0) {
        bVar12 = ~bVar12 + 1;
      }
      *param_1 = bVar12;
    }
    return 1;
  }
  uVar14 = 0;
  uVar13 = 0;
  if (*param_3 == 0) {
    uVar14 = 1;
    uVar11 = 1;
  }
  else {
    if (*param_3 != 0xff) goto LAB_1801dc83d;
    uVar14 = 1;
    uVar15 = 0;
    if (1 < param_4) {
      if (7 < param_4 - 1) {
        auVar24 = ZEXT816(0);
        auVar30 = ZEXT816(0);
        do {
          uVar3 = *(undefined4 *)(param_3 + uVar14);
          Var4 = CONCAT91((unkuint9)0,(char)((uint)uVar3 >> 0x18));
          auVar6[10] = 0;
          auVar6._0_10_ = Var4;
          auVar21[4] = (char)((uint)uVar3 >> 0x10);
          auVar21._0_4_ = uVar3;
          auVar21._5_11_ = auVar6 << 8;
          auVar5[0xc] = 0;
          auVar5._0_12_ = auVar21._4_12_;
          auVar20._0_2_ = (ushort)uVar3;
          auVar20[2] = (char)((uint)uVar3 >> 8);
          auVar20._3_13_ = auVar5 << 8;
          auVar19._2_14_ = auVar20._2_14_;
          auVar19._0_2_ = auVar20._0_2_ & 0xff;
          auVar9._10_2_ = 0;
          auVar9._0_10_ = auVar19._0_10_;
          auVar9._12_2_ = (short)Var4;
          auVar23._0_4_ = auVar19._0_4_;
          auVar23._4_2_ = auVar20._2_2_;
          auVar23._6_10_ = (unkuint10)CONCAT42(auVar9._10_4_,auVar21._4_2_) << 0x10;
          auVar22._4_12_ = auVar23._4_12_;
          auVar22._0_4_ = auVar23._0_4_ & 0xffff;
          auVar24 = auVar22 | auVar24;
          uVar3 = *(undefined4 *)(param_3 + uVar14 + 4);
          Var4 = CONCAT91((unkuint9)0,(char)((uint)uVar3 >> 0x18));
          auVar8[10] = 0;
          auVar8._0_10_ = Var4;
          auVar27[4] = (char)((uint)uVar3 >> 0x10);
          auVar27._0_4_ = uVar3;
          auVar27._5_11_ = auVar8 << 8;
          auVar7[0xc] = 0;
          auVar7._0_12_ = auVar27._4_12_;
          auVar26._0_2_ = (ushort)uVar3;
          auVar26[2] = (char)((uint)uVar3 >> 8);
          auVar26._3_13_ = auVar7 << 8;
          auVar25._2_14_ = auVar26._2_14_;
          auVar25._0_2_ = auVar26._0_2_ & 0xff;
          uVar14 = uVar14 + 8;
          auVar10._10_2_ = 0;
          auVar10._0_10_ = auVar25._0_10_;
          auVar10._12_2_ = (short)Var4;
          auVar29._0_4_ = auVar25._0_4_;
          auVar29._4_2_ = auVar26._2_2_;
          auVar29._6_10_ = (unkuint10)CONCAT42(auVar10._10_4_,auVar27._4_2_) << 0x10;
          auVar28._4_12_ = auVar29._4_12_;
          auVar28._0_4_ = auVar29._0_4_ & 0xffff;
          auVar30 = auVar28 | auVar30;
        } while (uVar14 < param_4 - ((uint)(param_4 - 1) & 7));
        auVar24 = auVar24 | auVar30 | (auVar24 | auVar30) >> 0x40;
        uVar15 = auVar24._0_4_ | auVar24._4_4_;
      }
      for (; uVar14 < param_4; uVar14 = uVar14 + 1) {
        uVar15 = uVar15 | param_3[uVar14];
      }
    }
    uVar13 = (uint)(uVar15 != 0);
    uVar14 = (ulonglong)(uVar15 != 0);
    uVar11 = (uint)(uVar15 != 0);
    if (uVar15 == 0) goto LAB_1801dc83d;
  }
  uVar13 = uVar11;
  if ((bVar2 & 0x80) == (param_3[1] & 0x80)) {
    FUN_1801a70c0(0xd,0xe2,0xdd,"crypto\\asn1\\a_int.c",0xbb);
    return 0;
  }
LAB_1801dc83d:
  lVar18 = param_4 - uVar13;
  if (param_1 != (byte *)0x0) {
    uVar13 = -(uint)((bVar2 & 0x80) != 0);
    pbVar17 = param_3 + lVar18 + uVar14;
    uVar15 = uVar13 & 1;
    if (lVar18 != 0) {
      pbVar16 = pbVar17 + (-(longlong)param_3 - uVar14);
      do {
        pbVar1 = pbVar17 + -1;
        pbVar17 = pbVar17 + -1;
        pbVar16 = pbVar16 + -1;
        uVar15 = uVar15 + ((uint)*pbVar1 ^ uVar13 & 0xff);
        param_1[(longlong)pbVar16] = (byte)uVar15;
        uVar15 = uVar15 >> 8;
      } while (pbVar16 != (byte *)0x0);
    }
  }
  return lVar18;
}



// ===== FUN_1801dc8a0 @ 1801dc8a0 (size 196)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801dc8a0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  byte local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_1803c3d80 ^ (ulonglong)auStack_68;
  uVar2 = FUN_1801dc6b0(0,0,*param_3,(longlong)param_4);
  if (uVar2 != 0) {
    if (uVar2 < 9) {
      FUN_1801dc6b0(local_38,param_2,*param_3,(longlong)param_4);
      uVar3 = 0;
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          pbVar1 = local_38 + uVar4;
          uVar4 = uVar4 + 1;
          uVar3 = uVar3 << 8 | (ulonglong)*pbVar1;
        } while (uVar4 < uVar2);
      }
      *param_1 = uVar3;
      return 1;
    }
    local_48 = 0x267;
    FUN_1801a70c0(0xd,0x65,0xdf,"crypto\\asn1\\a_int.c");
  }
  return 0;
}



// ===== FUN_1801dc9a0 @ 1801dc9a0 (size 390)

void FUN_1801dc9a0(byte *param_1,ulonglong param_2,int param_3,longlong *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  unkuint10 Var5;
  undefined1 auVar6 [13];
  undefined1 auVar7 [11];
  undefined1 auVar8 [13];
  undefined1 auVar9 [11];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  byte bVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  byte *pbVar19;
  bool bVar20;
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  
  uVar18 = 0;
  bVar15 = 0;
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    lVar13 = 1;
    param_2 = 0;
  }
  else {
    bVar2 = *param_1;
    if (param_3 == 0) {
      bVar12 = 0;
      if (0x7f < bVar2) {
        uVar18 = 1;
        lVar13 = param_2 + 1;
        goto LAB_1801dcabe;
      }
    }
    else {
      bVar15 = 0xff;
      if (0x80 < bVar2) {
        uVar18 = 1;
        lVar13 = param_2 + 1;
        goto LAB_1801dcabe;
      }
      bVar12 = 0xff;
      if (bVar2 == 0x80) {
        uVar14 = 1;
        if (1 < param_2) {
          if (7 < param_2 - 1) {
            auVar26 = ZEXT816(0);
            auVar32 = ZEXT816(0);
            do {
              uVar3 = *(undefined4 *)(param_1 + uVar14);
              Var5 = CONCAT91((unkuint9)0,(char)((uint)uVar3 >> 0x18));
              auVar7[10] = 0;
              auVar7._0_10_ = Var5;
              auVar23[4] = (char)((uint)uVar3 >> 0x10);
              auVar23._0_4_ = uVar3;
              auVar23._5_11_ = auVar7 << 8;
              auVar6[0xc] = 0;
              auVar6._0_12_ = auVar23._4_12_;
              auVar22._0_2_ = (ushort)uVar3;
              auVar22[2] = (char)((uint)uVar3 >> 8);
              auVar22._3_13_ = auVar6 << 8;
              auVar21._2_14_ = auVar22._2_14_;
              auVar21._0_2_ = auVar22._0_2_ & 0xff;
              auVar10._10_2_ = 0;
              auVar10._0_10_ = auVar21._0_10_;
              auVar10._12_2_ = (short)Var5;
              auVar25._0_4_ = auVar21._0_4_;
              auVar25._4_2_ = auVar22._2_2_;
              auVar25._6_10_ = (unkuint10)CONCAT42(auVar10._10_4_,auVar23._4_2_) << 0x10;
              auVar24._4_12_ = auVar25._4_12_;
              auVar24._0_4_ = auVar25._0_4_ & 0xffff;
              auVar26 = auVar24 | auVar26;
              uVar3 = *(undefined4 *)(param_1 + uVar14 + 4);
              Var5 = CONCAT91((unkuint9)0,(char)((uint)uVar3 >> 0x18));
              auVar9[10] = 0;
              auVar9._0_10_ = Var5;
              auVar29[4] = (char)((uint)uVar3 >> 0x10);
              auVar29._0_4_ = uVar3;
              auVar29._5_11_ = auVar9 << 8;
              auVar8[0xc] = 0;
              auVar8._0_12_ = auVar29._4_12_;
              auVar28._0_2_ = (ushort)uVar3;
              auVar28[2] = (char)((uint)uVar3 >> 8);
              auVar28._3_13_ = auVar8 << 8;
              auVar27._2_14_ = auVar28._2_14_;
              auVar27._0_2_ = auVar28._0_2_ & 0xff;
              uVar14 = uVar14 + 8;
              auVar11._10_2_ = 0;
              auVar11._0_10_ = auVar27._0_10_;
              auVar11._12_2_ = (short)Var5;
              auVar31._0_4_ = auVar27._0_4_;
              auVar31._4_2_ = auVar28._2_2_;
              auVar31._6_10_ = (unkuint10)CONCAT42(auVar11._10_4_,auVar29._4_2_) << 0x10;
              auVar30._4_12_ = auVar31._4_12_;
              auVar30._0_4_ = auVar31._0_4_ & 0xffff;
              auVar32 = auVar30 | auVar32;
            } while (uVar14 < param_2 - ((uint)(param_2 - 1) & 7));
            auVar26 = auVar32 | auVar26 | (auVar32 | auVar26) >> 0x40;
            uVar18 = auVar26._0_4_ | auVar26._4_4_;
          }
          for (; uVar14 < param_2; uVar14 = uVar14 + 1) {
            uVar18 = uVar18 | param_1[uVar14];
          }
        }
        bVar20 = uVar18 != 0;
        uVar18 = (byte)-bVar20 & 1;
        bVar12 = -bVar20;
      }
    }
    bVar15 = bVar12;
    lVar13 = uVar18 + param_2;
  }
LAB_1801dcabe:
  if ((param_4 != (longlong *)0x0) && (pbVar4 = (byte *)*param_4, pbVar4 != (byte *)0x0)) {
    pbVar19 = param_1 + param_2;
    uVar16 = bVar15 & 1;
    *pbVar4 = bVar15;
    if (param_2 != 0) {
      lVar17 = (longlong)pbVar19 - (longlong)param_1;
      do {
        pbVar1 = pbVar19 + -1;
        pbVar19 = pbVar19 + -1;
        lVar17 = lVar17 + -1;
        uVar16 = uVar16 + (*pbVar1 ^ bVar15);
        pbVar4[lVar17 + (ulonglong)uVar18] = (byte)uVar16;
        uVar16 = uVar16 >> 8;
      } while (lVar17 != 0);
    }
    *param_4 = *param_4 + lVar13;
  }
  return;
}



// ===== FUN_1801dcb30 @ 1801dcb30 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801dcb30(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18 [2];
  undefined8 uStack_8;
  
  uStack_8 = 0x1801dcb3a;
  local_18[0] = DAT_1803c3d80 ^ (ulonglong)auStack_48;
  lVar1 = 8;
  puVar2 = local_18;
  do {
    puVar2 = (ulonglong *)((longlong)puVar2 + -1);
    lVar1 = lVar1 + -1;
    *(char *)puVar2 = (char)param_2;
    param_2 = param_2 >> 8;
  } while (param_2 != 0);
  local_28 = param_1;
  FUN_1801dc9a0(puVar2,8 - lVar1,param_3,&local_28);
  return;
}



// ===== FUN_1801dcba0 @ 1801dcba0 (size 184)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801dcba0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_28 [4];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801dcbb0;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  local_28[0] = param_1;
  if (DAT_1803c9430 != 0) {
    uVar1 = FUN_180195630(DAT_1803c9430,local_28);
    lVar2 = FUN_180195ae0(DAT_1803c9430,uVar1);
    if (lVar2 != 0) goto LAB_1801dcc27;
  }
  local_38 = &LAB_1801a5940;
  lVar2 = FUN_1801b8ee0(local_28,&DAT_180330bd0,0x30);
  if (lVar2 == 0) {
    return 0;
  }
LAB_1801dcc27:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar2 + 4);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  return 1;
}



// ===== FUN_1801dcc60 @ 1801dcc60 (size 201)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801dcc60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 *local_28;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  local_28 = local_20;
  local_1c = param_2;
  local_18 = param_3;
  if (DAT_1803c9438 != 0) {
    iVar1 = FUN_180195630(DAT_1803c9438,local_20);
    if (-1 < iVar1) {
      local_28 = (undefined1 *)FUN_180195ae0(DAT_1803c9438,iVar1);
      ppuVar2 = &local_28;
      goto LAB_1801dccc6;
    }
  }
  local_38 = &LAB_1801dcdb0;
  ppuVar2 = (undefined1 **)FUN_1801b8ee0(&local_28,&PTR_DAT_180330e10,0x2b);
  if (ppuVar2 == (undefined1 **)0x0) {
    return 0;
  }
LAB_1801dccc6:
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*ppuVar2;
  }
  return 1;
}



// ===== FUN_1801dcd30 @ 1801dcd30 (size 71)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801dcd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1801958f0(DAT_1803c9430,FUN_1801dcd80,param_3,param_4,0x1801dcd3a);
  DAT_1803c9430 = 0;
  FUN_180195650(DAT_1803c9438);
  DAT_1803c9438 = 0;
  return;
}



// ===== FUN_1801dcdd0 @ 1801dcdd0 (size 86)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801dcdd0(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = FUN_1801b9610(*param_1);
    iVar1 = FUN_18020cbc0(uVar2,2,param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_1801b9490(*param_1);
      uVar2 = FUN_18020cbc0(uVar2,2,param_1);
      return uVar2;
    }
  }
  return 0;
}



// ===== FUN_1801dce30 @ 1801dce30 (size 162)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801dce30(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_1801b9610(*param_1);
  iVar1 = FUN_18020cbc0(uVar2,1,param_1);
  if (iVar1 != 0) {
    uVar3 = FUN_1801b9490(*param_1);
    uVar3 = FUN_18020cbc0(uVar3,1,param_1);
    if ((int)uVar3 != 0) {
      if (param_1[1] == 0) {
        return uVar3;
      }
      if (*param_1 == param_1[1]) {
        return uVar3;
      }
      uVar3 = FUN_1801b9610();
      iVar1 = FUN_18020cbc0(uVar3,0x8001,uVar2);
      if (iVar1 != 0) {
        uVar3 = FUN_1801b9490(param_1[1]);
        uVar2 = FUN_18020cbc0(uVar3,0x8001,uVar2);
        return uVar2;
      }
    }
  }
  return 0;
}



// ===== FUN_1801dd040 @ 1801dd040 (size 72)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801dd040(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x48) == (code *)0x0) {
    FUN_1801a70c0(0x10,0xab,0x42,"crypto\\ec\\ec_lib.c",0x239);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801dd085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}



// ===== FUN_1801dd090 @ 1801dd090 (size 215)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801dd090(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (param_1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*param_1 + 0x18);
    if ((pcVar2 != (code *)0x0) || (pcVar2 = *(code **)(*param_1 + 0x10), pcVar2 != (code *)0x0)) {
      (*pcVar2)();
    }
    FUN_1801dedb0(param_1);
    FUN_1801baba0(param_1[0x12]);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x60);
      if ((pcVar2 != (code *)0x0) || (pcVar2 = *(code **)(*plVar1 + 0x58), pcVar2 != (code *)0x0)) {
        (*pcVar2)(plVar1);
      }
      FUN_180195f20(plVar1,0x30,"crypto\\ec\\ec_lib.c",699);
    }
    FUN_1801984d0(param_1[2]);
    FUN_1801984d0(param_1[3]);
    FUN_180195f20(param_1[6],param_1[7],"crypto\\ec\\ec_lib.c",0x7e);
    FUN_180195f20(param_1,0xa8,"crypto\\ec\\ec_lib.c");
  }
  return;
}



// ===== FUN_1801dd170 @ 1801dd170 (size 651)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801dd170(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  
  uVar10 = 0;
  if ((*(int *)((byte *)*param_1 + 4) != *(int *)(*param_2 + 4)) ||
     ((((int)param_1[4] != 0 && ((int)param_2[4] != 0)) && ((int)param_1[4] != (int)param_2[4])))) {
    return 1;
  }
  if ((*(byte *)*param_1 & 2) != 0) {
    return 0;
  }
  lVar11 = 0;
  if ((param_3 == 0) && (param_3 = FUN_1801c9050(), lVar11 = param_3, param_3 == 0)) {
    return 0xffffffff;
  }
  FUN_1801c9140(param_3);
  uVar4 = FUN_1801c8e90(param_3);
  uVar5 = FUN_1801c8e90(param_3);
  uVar6 = FUN_1801c8e90(param_3);
  uVar7 = FUN_1801c8e90(param_3);
  uVar8 = FUN_1801c8e90(param_3);
  lVar9 = FUN_1801c8e90(param_3);
  if (lVar9 == 0) {
LAB_1801dd3d4:
    FUN_1801c8d50(param_3);
    FUN_1801c8dd0(lVar11);
    return 0xffffffff;
  }
  iVar3 = (**(code **)(*param_1 + 0x30))(param_1,uVar4,uVar5,uVar6,param_3);
  if (iVar3 != 0) {
    lVar12 = param_3;
    iVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar7,uVar8,lVar9,param_3);
    uVar13 = (undefined4)((ulonglong)lVar12 >> 0x20);
    if (((iVar3 != 0) && (iVar3 = FUN_180198550(uVar4,uVar7), iVar3 == 0)) &&
       ((iVar3 = FUN_180198550(uVar5,uVar8), iVar3 == 0 &&
        (iVar3 = FUN_180198550(uVar6,lVar9), iVar3 == 0)))) {
      lVar9 = *param_1;
      plVar1 = (longlong *)param_2[1];
      plVar2 = (longlong *)param_1[1];
      if (*(code **)(lVar9 + 0xd8) == (code *)0x0) {
        uVar5 = CONCAT44(uVar13,0x3bc);
        uVar4 = 0x42;
      }
      else {
        if (((lVar9 == *plVar2) &&
            ((((iVar3 = (int)param_1[4], iVar3 == 0 || ((int)plVar2[1] == 0)) ||
              (iVar3 == (int)plVar2[1])) && (lVar9 == *plVar1)))) &&
           (((iVar3 == 0 || ((int)plVar1[1] == 0)) || (iVar3 == (int)plVar1[1])))) {
          iVar3 = (**(code **)(lVar9 + 0xd8))(param_1,plVar2,plVar1,param_3);
          if (iVar3 == 0) {
            lVar9 = param_1[3];
            lVar12 = param_2[3];
            if ((param_1[2] == 0) || (param_2[2] == 0)) goto LAB_1801dd3d4;
            iVar3 = FUN_180198550();
            if ((iVar3 == 0) && (iVar3 = FUN_180198550(lVar9,lVar12), iVar3 == 0))
            goto LAB_1801dd3a5;
          }
          goto LAB_1801dd3a0;
        }
        uVar5 = CONCAT44(uVar13,0x3c0);
        uVar4 = 0x65;
      }
      FUN_1801a70c0(0x10,0x71,uVar4,"crypto\\ec\\ec_lib.c",uVar5);
    }
  }
LAB_1801dd3a0:
  uVar10 = 1;
LAB_1801dd3a5:
  FUN_1801c8d50(param_3);
  FUN_1801c8dd0(lVar11);
  return uVar10;
}



// ===== FUN_1801dd400 @ 1801dd400 (size 679)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801dd400(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *_Dst;
  longlong lVar5;
  
  if (*(longlong *)(*param_1 + 0x20) == 0) {
    FUN_1801a70c0(0x10,0x6a,0x42,"crypto\\ec\\ec_lib.c",0x85,0x1801dd410);
    return 0;
  }
  if (*param_1 != *param_2) {
    FUN_1801a70c0(0x10,0x6a,0x65,"crypto\\ec\\ec_lib.c",0x89,0x1801dd410);
    return 0;
  }
  if (param_1 == param_2) {
    return 1;
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  lVar5 = 0;
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  iVar1 = (int)param_2[0x13];
  if (iVar1 == 0) {
    param_1[0x14] = 0;
  }
  else if (iVar1 == 4) {
    lVar2 = FUN_18020e6a0(param_2[0x14]);
    param_1[0x14] = lVar2;
  }
  else if (iVar1 == 5) {
    lVar2 = FUN_18020f520(param_2[0x14]);
    param_1[0x14] = lVar2;
  }
  lVar2 = param_2[0x12];
  if (lVar2 == 0) {
    FUN_1801baba0(param_1[0x12]);
    param_1[0x12] = 0;
  }
  else {
    lVar3 = param_1[0x12];
    if (lVar3 == 0) {
      lVar3 = FUN_1801bac00();
      param_1[0x12] = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = param_2[0x12];
    }
    lVar2 = FUN_1801bab10(lVar3,lVar2);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    FUN_1801de1a0(param_1[1]);
    param_1[1] = 0;
  }
  else {
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      lVar3 = FUN_1801de790(param_1);
      param_1[1] = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = param_2[1];
    }
    uVar4 = FUN_1801de290(lVar3,lVar2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  if ((*(byte *)*param_2 & 2) == 0) {
    lVar2 = FUN_180198770(param_1[2],param_2[2]);
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = FUN_180198770(param_1[3],param_2[3]);
    if (lVar2 == 0) {
      return 0;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 5) = (int)param_2[5];
  if (param_2[6] == 0) {
    FUN_180195e10(param_1[6],"crypto\\ec\\ec_lib.c",0xe2);
    param_1[6] = 0;
LAB_1801dd687:
    param_1[7] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x0001801dd6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    return uVar4;
  }
  FUN_180195e10(param_1[6],"crypto\\ec\\ec_lib.c",0xd9);
  _Dst = (void *)FUN_180195dc0(param_2[7],"crypto\\ec\\ec_lib.c",0xda);
  param_1[6] = (longlong)_Dst;
  if (_Dst == (void *)0x0) {
    FUN_1801a70c0(0x10,0x6a,0x41,"crypto\\ec\\ec_lib.c",0xdb);
  }
  else {
    memcpy(_Dst,(void *)param_2[6],param_2[7]);
    if (_Dst != (void *)0x0) {
      lVar5 = param_2[7];
      goto LAB_1801dd687;
    }
  }
  return 0;
}



// ===== FUN_1801dd6b0 @ 1801dd6b0 (size 501)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801dd6b0(undefined8 *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1801dd6c5;
  if (param_1 != (undefined8 *)0x0) {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)0x0) {
      uVar7 = 0x19;
      uVar6 = 0x6c;
    }
    else if (*(longlong *)(pbVar1 + 8) == 0) {
      uVar7 = 0x1d;
      uVar6 = 0x42;
    }
    else {
      plVar4 = (longlong *)FUN_180196100(0xa8,"crypto\\ec\\ec_lib.c",0x21);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)pbVar1;
        if ((*pbVar1 & 2) == 0) {
          lVar5 = FUN_180198b30();
          plVar4[2] = lVar5;
          if (lVar5 == 0) goto LAB_1801dd7a3;
          lVar5 = FUN_180198b30();
          plVar4[3] = lVar5;
          if (lVar5 == 0) goto LAB_1801dd7a3;
        }
        *(undefined4 *)((longlong)plVar4 + 0x24) = 1;
        *(undefined4 *)((longlong)plVar4 + 0x2c) = 4;
        iVar3 = (**(code **)(pbVar1 + 8))(plVar4);
        if (iVar3 != 0) {
          iVar3 = FUN_1801dd400(plVar4,param_1);
          if (iVar3 != 0) {
            return plVar4;
          }
          if (*(code **)(*plVar4 + 0x10) != (code *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
          FUN_1801dedb0(plVar4);
          FUN_1801baba0(plVar4[0x12]);
          plVar2 = (longlong *)plVar4[1];
          if (plVar2 != (longlong *)0x0) {
            if (*(code **)(*plVar2 + 0x58) != (code *)0x0) {
              (**(code **)(*plVar2 + 0x58))(plVar2);
            }
            FUN_180195e10(plVar2,"crypto\\ec\\ec_lib.c",0x2af);
          }
          FUN_180198910(plVar4[2]);
          FUN_180198910(plVar4[3]);
          FUN_180195e10(plVar4[6],"crypto\\ec\\ec_lib.c",0x6b);
          FUN_180195e10(plVar4,"crypto\\ec\\ec_lib.c",0x6c);
          return (longlong *)0x0;
        }
LAB_1801dd7a3:
        FUN_180198910(plVar4[2]);
        FUN_180198910(plVar4[3]);
        FUN_180195e10(plVar4,"crypto\\ec\\ec_lib.c",0x39);
        return (longlong *)0x0;
      }
      uVar7 = 0x23;
      uVar6 = 0x41;
    }
    FUN_1801a70c0(0x10,0x6c,uVar6,"crypto\\ec\\ec_lib.c",uVar7,uVar8);
  }
  return (longlong *)0x0;
}



// ===== FUN_1801dd8b0 @ 1801dd8b0 (size 184)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801dd8b0(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
      (**(code **)(*param_1 + 0x10))();
    }
    FUN_1801dedb0(param_1);
    FUN_1801baba0(param_1[0x12]);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      if (*(code **)(*plVar1 + 0x58) != (code *)0x0) {
        (**(code **)(*plVar1 + 0x58))(plVar1);
      }
      FUN_180195e10(plVar1,"crypto\\ec\\ec_lib.c",0x2af);
    }
    FUN_180198910(param_1[2]);
    FUN_180198910(param_1[3]);
    FUN_180195e10(param_1[6],"crypto\\ec\\ec_lib.c",0x6b);
    FUN_180195e10(param_1,"crypto\\ec\\ec_lib.c",0x6c);
  }
  return;
}



// ===== FUN_1801dd970 @ 1801dd970 (size 75)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801dd970(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar2 = FUN_180198770(param_2);
    if (lVar2 != 0) {
      iVar1 = FUN_180198a80(*(undefined8 *)(param_1 + 0x18));
      return iVar1 == 0;
    }
  }
  return false;
}



// ===== FUN_1801dd9c0 @ 1801dd9c0 (size 72)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801dd9c0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) == (code *)0x0) {
    FUN_1801a70c0(0x10,0x123,0x42,"crypto\\ec\\ec_lib.c",0x20a);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801dda05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}



// ===== FUN_1801dda10 @ 1801dda10 (size 72)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801dda10(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x38) == (code *)0x0) {
    FUN_1801a70c0(0x10,0xad,0x42,"crypto\\ec\\ec_lib.c",0x22f);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801dda55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x38))();
  return uVar1;
}



// ===== FUN_1801dda60 @ 1801dda60 (size 71)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801dda60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = FUN_180198770(param_2);
    if (lVar2 != 0) {
      iVar1 = FUN_180198a80(param_2);
      return iVar1 == 0;
    }
  }
  return false;
}



// ===== FUN_1801ddab0 @ 1801ddab0 (size 314)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1801ddab0(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801ddabc;
  if (param_1 == (byte *)0x0) {
    FUN_1801a70c0(0x10,0x6c,0x6c,"crypto\\ec\\ec_lib.c",0x19,0x1801ddabc);
    return (undefined8 *)0x0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_1801a70c0(0x10,0x6c,0x42,"crypto\\ec\\ec_lib.c",0x1d,0x1801ddabc);
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_180196100(0xa8,"crypto\\ec\\ec_lib.c",0x21);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_1801a70c0(0x10,0x6c,0x41,"crypto\\ec\\ec_lib.c",0x23,uVar4);
    return (undefined8 *)0x0;
  }
  *puVar2 = param_1;
  if ((*param_1 & 2) == 0) {
    lVar3 = FUN_180198b30();
    puVar2[2] = lVar3;
    if (lVar3 == 0) goto LAB_1801ddba8;
    lVar3 = FUN_180198b30();
    puVar2[3] = lVar3;
    if (lVar3 == 0) goto LAB_1801ddba8;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 1;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 4;
  iVar1 = (**(code **)(param_1 + 8))(puVar2);
  if (iVar1 != 0) {
    return puVar2;
  }
LAB_1801ddba8:
  FUN_180198910(puVar2[2]);
  FUN_180198910(puVar2[3]);
  FUN_180195e10(puVar2,"crypto\\ec\\ec_lib.c",0x39);
  return (undefined8 *)0x0;
}



// ===== FUN_1801ddc10 @ 1801ddc10 (size 72)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ddc10(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    FUN_1801a70c0(0x10,0x124,0x42,"crypto\\ec\\ec_lib.c",0x200);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801ddc55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1;
}



// ===== FUN_1801ddc60 @ 1801ddc60 (size 917)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801ddc60(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar9;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar9 = 0x1801ddc73;
  if (param_2 == 0) {
    FUN_1801a70c0(0x10,0x6f,0x43,"crypto\\ec\\ec_lib.c",0x14e,0x1801ddc73);
    return 0;
  }
  if (((param_1[8] == 0) || (iVar2 = FUN_180198a80(), iVar2 != 0)) ||
     (iVar2 = FUN_180198a00(param_1[8]), iVar2 != 0)) {
    FUN_1801a70c0(0x10,0x6f,0x67,"crypto\\ec\\ec_lib.c",0x155,uVar9);
    return 0;
  }
  if (((param_3 != 0) && (iVar2 = FUN_180198a80(param_3), iVar2 == 0)) &&
     (iVar2 = FUN_180198a00(param_3), iVar2 == 0)) {
    iVar2 = FUN_180198b90(param_1[8]);
    iVar3 = FUN_180198b90(param_3);
    if (iVar3 <= iVar2 + 1) {
      if ((param_4 != 0) && (iVar2 = FUN_180198a00(param_4), iVar2 != 0)) {
        FUN_1801a70c0(0x10,0x6f,0xa4,"crypto\\ec\\ec_lib.c",CONCAT44(uVar7,0x16a));
        return 0;
      }
      lVar4 = param_1[1];
      if (lVar4 == 0) {
        lVar4 = FUN_1801de790(param_1);
        param_1[1] = lVar4;
        if (lVar4 == 0) {
          return 0;
        }
      }
      iVar2 = FUN_1801de290(lVar4,param_2);
      if ((iVar2 == 0) || (lVar4 = FUN_180198770(param_1[2],param_3), lVar4 == 0)) {
        return 0;
      }
      uVar7 = 0;
      if ((param_4 == 0) || (iVar2 = FUN_180198a80(param_4), iVar2 != 0)) {
        bVar1 = false;
        iVar2 = FUN_180198b90(param_1[8]);
        iVar3 = FUN_180198b90(param_1[2]);
        if ((iVar2 + 1) / 2 + 3 < iVar3) {
          lVar4 = FUN_1801c9050();
          if (lVar4 != 0) {
            FUN_1801c9140(lVar4);
            lVar6 = FUN_1801c8e90(lVar4);
            if (lVar6 != 0) {
              if (*(int *)(*param_1 + 4) == 0x197) {
                FUN_180198f20(lVar6,0);
                iVar2 = FUN_180198b90(param_1[8]);
                iVar2 = FUN_180198e30(lVar6,iVar2 + -1);
                bVar8 = iVar2 == 0;
              }
              else {
                lVar5 = FUN_180198770(lVar6,param_1[8]);
                bVar8 = lVar5 == 0;
              }
              if (((!bVar8) && (iVar2 = FUN_1801eec70(param_1[3],param_1[2]), iVar2 != 0)) &&
                 (iVar2 = FUN_1801c9260(param_1[3],param_1[3],lVar6), iVar2 != 0)) {
                lVar6 = param_1[3];
                uVar9 = FUN_180199010();
                iVar2 = FUN_1801c9260(lVar6,lVar6,uVar9);
                if (iVar2 != 0) {
                  iVar2 = FUN_1801eeff0(param_1[3],0,param_1[3],param_1[2],lVar4);
                  bVar1 = false;
                  if (iVar2 != 0) {
                    bVar1 = true;
                  }
                }
              }
            }
            FUN_1801c8d50(lVar4);
            FUN_1801c8dd0(lVar4);
            if (bVar1) goto LAB_1801ddeef;
          }
          FUN_180198f20(param_1[3],0);
          return 0;
        }
        FUN_180198f20(param_1[3],0);
      }
      else {
        lVar4 = FUN_180198770(param_1[3],param_4);
        if (lVar4 == 0) {
          return 0;
        }
      }
LAB_1801ddeef:
      iVar2 = FUN_180198a10(param_1[2]);
      if (iVar2 == 0) {
        FUN_1801baba0(param_1[0x12]);
        param_1[0x12] = 0;
        return 1;
      }
      lVar4 = FUN_1801c9050();
      FUN_1801baba0(param_1[0x12]);
      param_1[0x12] = 0;
      if (lVar4 != 0) {
        lVar6 = FUN_1801bac00();
        param_1[0x12] = lVar6;
        if (lVar6 != 0) {
          iVar2 = FUN_1801baca0(lVar6,param_1[2],lVar4);
          if (iVar2 == 0) {
            FUN_1801baba0(param_1[0x12]);
            param_1[0x12] = 0;
          }
          else {
            uVar7 = 1;
          }
        }
      }
      FUN_1801c8dd0(lVar4);
      return uVar7;
    }
  }
  FUN_1801a70c0(0x10,0x6f,0x7a,"crypto\\ec\\ec_lib.c",CONCAT44(uVar7,0x160),uVar9);
  return 0;
}



// ===== FUN_1801de010 @ 1801de010 (size 213)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

size_t FUN_1801de010(longlong param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x1801de025;
  FUN_180195e10(*(undefined8 *)(param_1 + 0x30),"crypto\\ec\\ec_lib.c",0x1e1);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((param_3 == 0) || (param_2 == (void *)0x0)) {
    return 1;
  }
  _Dst = (void *)FUN_180195dc0(param_3,"crypto\\ec\\ec_lib.c",0x1e8);
  *(void **)(param_1 + 0x30) = _Dst;
  if (_Dst == (void *)0x0) {
    FUN_1801a70c0(0x10,0x11e,0x41,"crypto\\ec\\ec_lib.c",0x1e9,uVar1);
    return 0;
  }
  memcpy(_Dst,param_2,param_3);
  *(size_t *)(param_1 + 0x38) = param_3;
  return param_3;
}



// ===== FUN_1801de0f0 @ 1801de0f0 (size 168)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801de0f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xb0) == (code *)0x0) {
    uVar4 = 0x36f;
    uVar3 = 0x42;
  }
  else {
    if ((((lVar2 == *param_2) &&
         ((((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
           (iVar1 == (int)param_2[1])) && (lVar2 == *param_3)))) &&
        ((((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])) &&
         (lVar2 == *param_4)))) &&
       (((iVar1 == 0 || ((int)param_4[1] == 0)) || (iVar1 == (int)param_4[1])))) {
                    /* WARNING: Could not recover jumptable at 0x0001801de16b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xb0))(param_1);
      return uVar3;
    }
    uVar4 = 0x374;
    uVar3 = 0x65;
  }
  FUN_1801a70c0(0x10,0x70,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x1801de0fc);
  return 0;
}



// ===== FUN_1801de1a0 @ 1801de1a0 (size 77)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801de1a0(longlong *param_1)

{
  code *pcVar1;
  
  if (param_1 != (longlong *)0x0) {
    pcVar1 = *(code **)(*param_1 + 0x60);
    if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*param_1 + 0x58), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    FUN_180195f20(param_1,0x30,"crypto\\ec\\ec_lib.c",699);
  }
  return;
}



// ===== FUN_1801de1f0 @ 1801de1f0 (size 150)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801de1f0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xd8) == (code *)0x0) {
    uVar4 = 0x3bc;
    uVar3 = 0x42;
  }
  else {
    if (((lVar2 == *param_2) &&
        (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
         (iVar1 == (int)param_2[1])))) &&
       ((lVar2 == *param_3 &&
        (((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])))))) {
                    /* WARNING: Could not recover jumptable at 0x0001801de256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xd8))(param_1);
      return uVar3;
    }
    uVar4 = 0x3c0;
    uVar3 = 0x65;
  }
  FUN_1801a70c0(0x10,0x71,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x1801de1fc);
  return 0xffffffff;
}



// ===== FUN_1801de290 @ 1801de290 (size 128)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801de290(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x68);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x2c1;
    uVar2 = 0x42;
  }
  else {
    if (*param_1 == *param_2) {
      if ((((int)param_1[1] == (int)param_2[1]) || ((int)param_1[1] == 0)) || ((int)param_2[1] == 0)
         ) {
        if (param_1 == param_2) {
          return 1;
        }
                    /* WARNING: Could not recover jumptable at 0x0001801de2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
    }
    uVar3 = 0x2c8;
    uVar2 = 0x65;
  }
  FUN_1801a70c0(0x10,0x72,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// ===== FUN_1801de310 @ 1801de310 (size 147)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801de310(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xb8) == (code *)0x0) {
    uVar4 = 0x37e;
    uVar3 = 0x42;
  }
  else {
    if (((lVar2 == *param_2) &&
        (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
         (iVar1 == (int)param_2[1])))) &&
       ((lVar2 == *param_3 &&
        (((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])))))) {
                    /* WARNING: Could not recover jumptable at 0x0001801de376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xb8))(param_1);
      return uVar3;
    }
    uVar4 = 0x382;
    uVar3 = 0x65;
  }
  FUN_1801a70c0(0x10,0x73,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x1801de31c);
  return 0;
}



// ===== FUN_1801de3f0 @ 1801de3f0 (size 311)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801de3f0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801de40a;
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x90) == 0) {
    uVar4 = 0x34b;
    uVar3 = 0x42;
LAB_1801de4fa:
    FUN_1801a70c0(0x10,0x125,uVar3,"crypto\\ec\\ec_lib.c",uVar4,uVar5);
    return 0;
  }
  if ((lVar1 != *param_2) ||
     (((iVar2 = (int)param_1[4], iVar2 != 0 && ((int)param_2[1] != 0)) && (iVar2 != (int)param_2[1])
      ))) {
    uVar4 = 0x34f;
    uVar3 = 0x65;
    goto LAB_1801de4fa;
  }
  if (*(code **)(lVar1 + 200) == (code *)0x0) {
    uVar3 = 0x399;
    uVar5 = 0x42;
  }
  else {
    if (((iVar2 == 0) || ((int)param_2[1] == 0)) || (iVar2 == (int)param_2[1])) {
      iVar2 = (**(code **)(lVar1 + 200))(param_1,param_2);
      if (iVar2 != 0) {
        uVar4 = 0x353;
        uVar3 = 0x6a;
        goto LAB_1801de4fa;
      }
      goto LAB_1801de481;
    }
    uVar3 = 0x39d;
    uVar5 = 0x65;
  }
  FUN_1801a70c0(0x10,0x76,uVar5,"crypto\\ec\\ec_lib.c",uVar3,0x1801de40a);
LAB_1801de481:
  uVar5 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_4,param_5);
  return uVar5;
}



// ===== FUN_1801de530 @ 1801de530 (size 121)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801de530(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xc0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x38b;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x0001801de57b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x38f;
    uVar2 = 0x65;
  }
  FUN_1801a70c0(0x10,0xd2,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// ===== FUN_1801de5b0 @ 1801de5b0 (size 116)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801de5b0(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 200);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x399;
    uVar2 = 0x42;
  }
  else {
    if (*param_1 == *param_2) {
      if ((int)param_1[4] == 0) {
LAB_1801de5f4:
                    /* WARNING: Could not recover jumptable at 0x0001801de5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
      if (((int)param_2[1] == 0) || ((int)param_1[4] == (int)param_2[1])) goto LAB_1801de5f4;
    }
    uVar3 = 0x39d;
    uVar2 = 0x65;
  }
  FUN_1801a70c0(0x10,0x76,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// ===== FUN_1801de630 @ 1801de630 (size 119)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801de630(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xd0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x3ae;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x0001801de67b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x3b2;
    uVar2 = 0x65;
  }
  FUN_1801a70c0(0x10,0x77,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// ===== FUN_1801de6b0 @ 1801de6b0 (size 119)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801de6b0(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x3c9;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x0001801de6fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x3cd;
    uVar2 = 0x65;
  }
  FUN_1801a70c0(0x10,0x78,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// ===== FUN_1801de730 @ 1801de730 (size 89)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801de730(void)

{
  FUN_1801debf0();
  return;
}



// ===== FUN_1801de790 @ 1801de790 (size 260)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801de790(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801de79c;
  if (param_1 == (longlong *)0x0) {
    FUN_1801a70c0(0x10,0x79,0x43,"crypto\\ec\\ec_lib.c",0x28f,0x1801de79c);
    return (longlong *)0x0;
  }
  if (*(longlong *)(*param_1 + 0x50) == 0) {
    FUN_1801a70c0(0x10,0x79,0x42,"crypto\\ec\\ec_lib.c",0x293,0x1801de79c);
    return (longlong *)0x0;
  }
  plVar3 = (longlong *)FUN_180196100(0x30,"crypto\\ec\\ec_lib.c",0x297);
  if (plVar3 == (longlong *)0x0) {
    FUN_1801a70c0(0x10,0x79,0x41,"crypto\\ec\\ec_lib.c",0x299,uVar4);
    return (longlong *)0x0;
  }
  lVar1 = *param_1;
  *plVar3 = lVar1;
  *(int *)(plVar3 + 1) = (int)param_1[4];
  iVar2 = (**(code **)(lVar1 + 0x50))(plVar3);
  if (iVar2 == 0) {
    FUN_180195e10(plVar3,"crypto\\ec\\ec_lib.c",0x2a1);
    return (longlong *)0x0;
  }
  return plVar3;
}



// ===== FUN_1801de8a0 @ 1801de8a0 (size 116)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801de8a0(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x2fd;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x0001801de8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x302;
    uVar2 = 0x65;
  }
  FUN_1801a70c0(0x10,0x7e,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// ===== FUN_1801de920 @ 1801de920 (size 368)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801de920(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801de930;
  pcVar1 = *(code **)(*param_1 + 0x88);
  if (pcVar1 == (code *)0x0) {
    FUN_1801a70c0(0x10,0x126,0x42,"crypto\\ec\\ec_lib.c",0x322,0x1801de930);
    return 0;
  }
  if ((*param_1 != *param_2) ||
     ((((int)param_1[4] != 0 && ((int)param_2[1] != 0)) && ((int)param_1[4] != (int)param_2[1])))) {
    FUN_1801a70c0(0x10,0x126,0x65,"crypto\\ec\\ec_lib.c",0x326,0x1801de930);
    return 0;
  }
  uVar4 = param_5;
  iVar2 = (*pcVar1)(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar1 = *(code **)(*param_1 + 0xd0);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (pcVar1 == (code *)0x0) {
    uVar4 = CONCAT44(uVar3,0x3ae);
    uVar3 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
      iVar2 = (*pcVar1)(param_1,param_2,param_5,pcVar1,uVar4);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (0 < iVar2) {
        return 1;
      }
      goto LAB_1801dea2d;
    }
    uVar4 = CONCAT44(uVar3,0x3b2);
    uVar3 = 0x65;
  }
  FUN_1801a70c0(0x10,0x77,uVar3,"crypto\\ec\\ec_lib.c",uVar4,uVar5);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
LAB_1801dea2d:
  FUN_1801a70c0(0x10,0x126,0x6b,"crypto\\ec\\ec_lib.c",CONCAT44(uVar3,0x32d),uVar5);
  return 0;
}



// ===== FUN_1801dea90 @ 1801dea90 (size 114)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801dea90(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_1801a70c0(0x10,0x7f,0x42,"crypto\\ec\\ec_lib.c",0x2ec);
    return 0;
  }
  if (*param_1 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x0001801deaff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_1801a70c0(0x10,0x7f,0x65,"crypto\\ec\\ec_lib.c",0x2f0);
  return 0;
}



// ===== FUN_1801deb10 @ 1801deb10 (size 222)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801deb10(longlong *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_1801a70c0(0x10,0x88,0x42,"crypto\\ec\\ec_lib.c",0x3d9,0x1801deb25);
    return 0;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      plVar2 = *(longlong **)(param_3 + uVar3 * 8);
      if ((*param_1 != *plVar2) ||
         ((((int)param_1[4] != 0 && (iVar1 = (int)plVar2[1], iVar1 != 0)) &&
          ((int)param_1[4] != iVar1)))) {
        FUN_1801a70c0(0x10,0x88,0x65,"crypto\\ec\\ec_lib.c",0x3de,0x1801deb25);
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001801debb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return uVar4;
}



// ===== FUN_1801debf0 @ 1801debf0 (size 445)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801debf0(longlong *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                       longlong param_5,undefined8 param_6,longlong param_7)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1801dec09;
  lVar6 = *param_1;
  if ((lVar6 == *param_2) &&
     (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) || (iVar1 == (int)param_2[1])
      ))) {
    if ((param_3 == 0) && (param_4 == 0)) {
      if (*(code **)(lVar6 + 0x70) == (code *)0x0) {
        FUN_1801a70c0(0x10,0x7f,0x42,"crypto\\ec\\ec_lib.c",0x2ec);
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(lVar6 + 0x70))();
      }
    }
    else {
      uVar5 = 0;
      if (param_4 != 0) {
        do {
          plVar3 = *(longlong **)(param_5 + uVar5 * 8);
          if ((lVar6 != *plVar3) ||
             (((iVar1 != 0 && (iVar2 = (int)plVar3[1], iVar2 != 0)) && (iVar1 != iVar2)))) {
            uVar8 = 0x3fd;
            uVar7 = 0x65;
            goto LAB_1801decec;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_4);
      }
      lVar6 = 0;
      if ((param_7 == 0) && (param_7 = FUN_1801c90c0(), lVar6 = param_7, param_7 == 0)) {
        uVar8 = 0x403;
        uVar7 = 0x44;
LAB_1801decec:
        FUN_1801a70c0(0x10,0x122,uVar7,"crypto\\ec\\ec_lib.c",uVar8);
        uVar5 = 0;
      }
      else if (*(code **)(*param_1 + 0xf0) == (code *)0x0) {
        uVar4 = FUN_18020fcc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar8);
        uVar5 = (ulonglong)uVar4;
        FUN_1801c8dd0(lVar6);
      }
      else {
        uVar4 = (**(code **)(*param_1 + 0xf0))();
        uVar5 = (ulonglong)uVar4;
        FUN_1801c8dd0(lVar6);
      }
    }
  }
  else {
    FUN_1801a70c0(0x10,0x122,0x65,"crypto\\ec\\ec_lib.c",0x3f4);
    uVar5 = 0;
  }
  return uVar5;
}



// ===== FUN_1801dedb0 @ 1801dedb0 (size 92)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801dedb0(longlong param_1)

{
  if (*(int *)(param_1 + 0x98) == 4) {
    FUN_18020e6c0(*(undefined8 *)(param_1 + 0xa0));
  }
  else if (*(int *)(param_1 + 0x98) == 5) {
    FUN_18020f540(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// ===== FUN_1801dee10 @ 1801dee10 (size 280)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801dee10(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(code **)(*param_1 + 0x188) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801dee52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x188))();
    return uVar2;
  }
  uVar5 = 0;
  lVar3 = 0;
  if (param_1[0x12] != 0) {
    if (param_4 == 0) {
      lVar3 = FUN_1801c90c0();
      param_4 = lVar3;
      if (lVar3 == 0) goto LAB_1801def0c;
    }
    FUN_1801c9140(param_4);
    lVar4 = FUN_1801c8e90(param_4);
    if (lVar4 != 0) {
      iVar1 = FUN_180198f20(lVar4,2);
      if (iVar1 != 0) {
        iVar1 = FUN_1801c9300(lVar4,param_1[2],lVar4);
        if (iVar1 != 0) {
          iVar1 = FUN_1802034a0(param_2,param_3,lVar4,param_1[2],param_4,param_1[0x12]);
          uVar5 = 0;
          if (iVar1 != 0) {
            uVar5 = 1;
          }
        }
      }
    }
    FUN_1801c8d50(param_4);
    FUN_1801c8dd0(lVar3);
  }
LAB_1801def0c:
  return (ulonglong)uVar5;
}



// ===== FUN_1801def90 @ 1801def90 (size 975)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1801def90(undefined8 *param_1,char *param_2,int param_3)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *_Src;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined8 uVar16;
  char *pcVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_c8;
  ulonglong local_c0;
  char *local_b8;
  undefined8 *local_b0;
  int local_a8 [4];
  undefined1 local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801defaa;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_f8;
  lVar5 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  if (param_2 == (char *)0x0) {
    lVar5 = FUN_1801aebd0();
    if (lVar5 != 0) {
      param_3 = 200;
      lVar6 = FUN_1801ae920(lVar5,200);
      if (lVar6 != 0) {
        **(undefined1 **)(lVar5 + 8) = 0;
        goto LAB_1801df014;
      }
    }
LAB_1801df31e:
    local_d8 = 0xb1;
    uVar16 = 0x41;
LAB_1801df33b:
    FUN_1801a70c0(0xb,0x74,uVar16,"crypto\\x509\\x509_obj.c");
    FUN_1801ae8b0(lVar5);
  }
  else if (param_3 != 0) {
LAB_1801df014:
    if (param_1 == (undefined8 *)0x0) {
      if (lVar5 != 0) {
        param_2 = *(char **)(lVar5 + 8);
        FUN_180195e10(lVar5,"crypto\\x509\\x509_obj.c",0x35);
      }
      strncpy(param_2,"NO X509_NAME",(longlong)param_3);
      param_2[(longlong)param_3 - 1] = '\0';
    }
    else {
      local_c0 = (ulonglong)(param_3 - 1);
      iVar19 = 0;
      iVar11 = 0;
      local_c8 = 0;
      iVar3 = FUN_1801958b0(*param_1);
      if (0 < iVar3) {
        do {
          puVar7 = (undefined8 *)FUN_180195ae0(*param_1,iVar11);
          iVar3 = FUN_1801b96c0(*puVar7);
          if ((iVar3 == 0) || (_Src = (undefined1 *)FUN_1801b9610(iVar3), _Src == (undefined1 *)0x0)
             ) {
            FUN_18019b440(local_98,0x50,*puVar7);
            _Src = local_98;
          }
          uVar13 = 0xffffffffffffffff;
          do {
            uVar13 = uVar13 + 1;
          } while (_Src[uVar13] != '\0');
          puVar2 = (uint *)puVar7[1];
          uVar10 = *puVar2;
          uVar18 = (ulonglong)uVar10;
          if (0x100000 < (int)uVar10) {
            local_d8 = 0x4a;
LAB_1801df335:
            uVar16 = 0x86;
            goto LAB_1801df33b;
          }
          pcVar17 = *(char **)(puVar2 + 2);
          if (puVar2[1] == 0x1b) {
            uVar4 = uVar10 & 0x80000003;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
            }
            if (uVar4 != 0) goto LAB_1801df165;
            uVar4 = 0;
            local_a8[1] = 0;
            local_a8[2] = 0;
            local_a8[0] = 0;
            iVar3 = 0;
            iVar11 = 0;
            if (0 < (int)uVar10) {
              pcVar9 = pcVar17;
              uVar14 = uVar18;
              do {
                if (*pcVar9 != '\0') {
                  local_a8[uVar4 & 3] = 1;
                }
                uVar4 = uVar4 + 1;
                pcVar9 = pcVar9 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
              iVar3 = local_a8[2];
              uVar4 = local_a8[1];
              iVar11 = local_a8[0];
            }
            local_a8[3] = 1;
            if ((iVar11 != 0 || uVar4 != 0) || iVar3 != 0) goto LAB_1801df170;
            local_a8[1] = 0;
            local_a8[2] = 0;
            local_a8[0] = 0;
          }
          else {
LAB_1801df165:
            local_a8[3] = 1;
LAB_1801df170:
            local_a8[0] = 1;
            local_a8[1] = 1;
            local_a8[2] = 1;
          }
          local_a8[3] = 1;
          iVar3 = 0;
          if (0 < (int)uVar10) {
            uVar4 = 0;
            uVar14 = uVar18;
            iVar3 = 0;
            do {
              iVar11 = iVar3;
              if ((local_a8[uVar4 & 3] != 0) &&
                 (iVar11 = iVar3 + 1, 0x5e < (byte)(*pcVar17 - 0x20U))) {
                iVar11 = iVar3 + 4;
              }
              iVar3 = iVar11;
              uVar4 = uVar4 + 1;
              pcVar17 = pcVar17 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar6 = (longlong)iVar19;
          iVar19 = iVar19 + 2 + iVar3 + (int)uVar13;
          if (0x100000 < iVar19) {
            local_d8 = 0x7b;
            goto LAB_1801df335;
          }
          if (lVar5 == 0) {
            pcVar17 = param_2;
            if ((int)local_c0 < iVar19) goto LAB_1801df2e4;
          }
          else {
            lVar8 = FUN_1801ae920(lVar5,(longlong)(iVar19 + 1));
            if (lVar8 == 0) goto LAB_1801df31e;
            pcVar17 = *(char **)(lVar5 + 8);
          }
          pcVar17 = pcVar17 + lVar6;
          *pcVar17 = '/';
          pcVar17 = pcVar17 + 1;
          memcpy(pcVar17,_Src,uVar13 & 0xffffffff);
          param_1 = local_b0;
          pcVar17[(int)uVar13] = '=';
          pbVar12 = (byte *)(pcVar17 + (int)uVar13 + 1);
          pbVar15 = *(byte **)(puVar7[1] + 8);
          if (0 < (int)uVar10) {
            uVar10 = 0;
            do {
              if (local_a8[uVar10 & 3] != 0) {
                bVar1 = *pbVar15;
                if (bVar1 - 0x20 < 0x5f) {
                  *pbVar12 = bVar1;
                  pbVar12 = pbVar12 + 1;
                }
                else {
                  pbVar12[0] = 0x5c;
                  pbVar12[1] = 0x78;
                  pbVar12[2] = "0123456789ABCDEF"[bVar1 >> 4];
                  pbVar12[3] = "0123456789ABCDEF"[bVar1 & 0xf];
                  pbVar12 = pbVar12 + 4;
                }
              }
              uVar10 = uVar10 + 1;
              pbVar15 = pbVar15 + 1;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
            param_2 = local_b8;
          }
          *pbVar12 = 0;
          iVar11 = local_c8 + 1;
          local_c8 = iVar11;
          iVar3 = FUN_1801958b0(*local_b0);
        } while (iVar11 < iVar3);
      }
      if (lVar5 != 0) {
        param_2 = *(char **)(lVar5 + 8);
        FUN_180195e10(lVar5,"crypto\\x509\\x509_obj.c",0xaa);
      }
LAB_1801df2e4:
      if (local_c8 == 0) {
        *param_2 = '\0';
      }
    }
    return param_2;
  }
  return (char *)0x0;
}



// ===== FUN_1801df360 @ 1801df360 (size 381)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801df360(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801df37e;
  if ((DAT_1803c9440 == 0) && (DAT_1803c9440 = FUN_1801957a0(&LAB_1801c3430), DAT_1803c9440 == 0))
  goto LAB_1801df476;
  puVar3 = (undefined4 *)FUN_1801df520(param_1);
  if ((puVar3 == (undefined4 *)0x0) || (puVar4 = puVar3, (*(byte *)(puVar3 + 4) & 1) == 0)) {
    puVar4 = (undefined4 *)FUN_180196100(0x14,"crypto\\asn1\\a_strnid.c",0x9f);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_1801a70c0(0xd,0x8a,0x41,"crypto\\asn1\\a_strnid.c",0xa0,uVar5);
      goto LAB_1801df476;
    }
    iVar1 = FUN_180195990(DAT_1803c9440,puVar4);
    if (iVar1 == 0) {
      FUN_180195e10(puVar4,"crypto\\asn1\\a_strnid.c",0xa4);
      goto LAB_1801df476;
    }
    if (puVar3 == (undefined4 *)0x0) {
      *puVar4 = param_1;
      uVar2 = 1;
      *(undefined8 *)(puVar4 + 1) = 0xffffffffffffffff;
    }
    else {
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      uVar2 = puVar3[4] | 1;
    }
    puVar4[4] = uVar2;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (-1 < param_2) {
      puVar4[1] = param_2;
    }
    if (-1 < param_3) {
      puVar4[2] = param_3;
    }
    if (param_4 != 0) {
      puVar4[3] = param_4;
    }
    if (param_5 != 0) {
      puVar4[4] = param_5 | 1;
    }
    return 1;
  }
LAB_1801df476:
  FUN_1801a70c0(0xd,0x81,0x41,"crypto\\asn1\\a_strnid.c",0xbe,uVar5);
  return 0;
}



// ===== FUN_1801df520 @ 1801df520 (size 147)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801df520(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_28 [6];
  ulonglong local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x1801df52a;
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  local_28[0] = param_1;
  if (DAT_1803c9440 != 0) {
    iVar1 = FUN_180195630(DAT_1803c9440,local_28);
    if (-1 < iVar1) {
      FUN_180195ae0(DAT_1803c9440,iVar1);
      return;
    }
  }
  local_38 = &LAB_1801a5940;
  FUN_1801b8ee0(local_28,&DAT_180331030,0x1b);
  return;
}



// ===== FUN_1801df5c0 @ 1801df5c0 (size 193)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801df5c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0x1801df5da;
  local_res8 = 0;
  puVar4 = &local_res8;
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = param_1;
  }
  lVar2 = FUN_1801df520(param_5);
  if (lVar2 == 0) {
    iVar1 = FUN_1801bd700(puVar4,param_2,param_3,param_4,DAT_1803be7f0 & 0x2806);
  }
  else {
    uVar3 = *(uint *)(lVar2 + 0xc);
    if ((*(byte *)(lVar2 + 0x10) & 2) == 0) {
      uVar3 = uVar3 & DAT_1803be7f0;
    }
    iVar1 = FUN_1801bd730(puVar4,param_2,param_3,param_4,uVar3,*(undefined4 *)(lVar2 + 4),
                          *(undefined4 *)(lVar2 + 8),uVar5);
  }
  if (iVar1 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// ===== FUN_1801df6c0 @ 1801df6c0 (size 165)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801df6c0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  uVar3 = FUN_1801a3790();
  iVar1 = FUN_1801b96c0(uVar3);
  if (iVar1 != 0) {
    lVar4 = FUN_1801df7a0(iVar1);
    if (lVar4 != 0) {
      uVar3 = FUN_1801a3d70(param_1);
      local_res10[0] = FUN_18013ff80(uVar3);
      uVar2 = FUN_18019a410(uVar3);
      if (*(code **)(lVar4 + 8) == (code *)0x0) {
        uVar3 = (**(code **)(lVar4 + 0x20))(0,local_res10,uVar2);
        return uVar3;
      }
      uVar3 = (**(code **)(lVar4 + 8))();
      uVar3 = FUN_1801bfef0(0,local_res10,uVar2,uVar3);
      return uVar3;
    }
  }
  return 0;
}



// ===== FUN_1801df7a0 @ 1801df7a0 (size 146)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801df7a0(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *local_res10 [3];
  int local_78 [28];
  undefined8 uStack_8;
  
  uStack_8 = 0x1801df7aa;
  local_res10[0] = local_78;
  if (-1 < param_1) {
    local_78[0] = param_1;
    puVar2 = (undefined8 *)FUN_1801b8ee0(local_res10,&PTR_DAT_1803be800,0x2f,8,&LAB_1801c3430);
    if (puVar2 != (undefined8 *)0x0) {
      return *puVar2;
    }
    if (DAT_1803c9448 != 0) {
      uVar1 = FUN_180195630(DAT_1803c9448,local_78);
      uVar3 = FUN_180195ae0(DAT_1803c9448,uVar1);
      return uVar3;
    }
  }
  return 0;
}



// ===== FUN_1801df840 @ 1801df840 (size 421)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801df840(longlong param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_res8;
  
  uVar5 = 0;
  lVar7 = 0;
  if (param_1 == 0) {
    if (param_4 != (int *)0x0) {
      *param_4 = -1;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffffff;
    }
  }
  else {
    if (param_4 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *param_4 + 1;
    }
    iVar6 = 0;
    if (-1 < iVar1) {
      iVar6 = iVar1;
    }
    iVar1 = FUN_1801958b0();
    if (iVar6 < iVar1) {
      do {
        lVar3 = FUN_180195ae0(param_1,iVar6);
        uVar4 = FUN_1801a3790(lVar3);
        iVar1 = FUN_1801b96c0(uVar4);
        if (iVar1 == param_2) {
          if (param_4 != (int *)0x0) {
            *param_4 = iVar6;
            lVar7 = lVar3;
            break;
          }
          if (lVar7 != 0) {
            if (param_3 == (undefined4 *)0x0) {
              return 0;
            }
            *param_3 = 0xfffffffe;
            return 0;
          }
          lVar7 = lVar3;
        }
        iVar6 = iVar6 + 1;
        iVar1 = FUN_1801958b0(param_1);
      } while (iVar6 < iVar1);
      if (lVar7 != 0) {
        if (param_3 != (undefined4 *)0x0) {
          uVar2 = FUN_1801a3d50(lVar7);
          *param_3 = uVar2;
        }
        uVar4 = FUN_1801a3790(lVar7);
        iVar1 = FUN_1801b96c0(uVar4);
        if ((iVar1 != 0) && (lVar3 = FUN_1801df7a0(iVar1), lVar3 != 0)) {
          uVar5 = FUN_1801a3d70(lVar7);
          local_res8 = FUN_18013ff80(uVar5);
          uVar2 = FUN_18019a410(uVar5);
          if (*(code **)(lVar3 + 8) != (code *)0x0) {
            uVar5 = (**(code **)(lVar3 + 8))();
            uVar5 = FUN_1801bfef0(0,&local_res8,uVar2,uVar5);
            return uVar5;
          }
          uVar5 = (**(code **)(lVar3 + 0x20))(0,&local_res8,uVar2);
        }
        return uVar5;
      }
    }
    if (param_4 != (int *)0x0) {
      *param_4 = -1;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffffff;
    }
  }
  return 0;
}



// ===== FUN_1801dfa30 @ 1801dfa30 (size 1329)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1801dfa30(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,char *param_6,int param_7,code *param_8,void *param_9)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  longlong lVar13;
  char *pcVar14;
  bool bVar15;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  undefined4 local_510;
  undefined1 *local_508;
  undefined8 local_500;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined1 local_4b0 [24];
  undefined1 local_498 [64];
  char local_458;
  undefined2 auStack_457 [511];
  ulonglong local_58 [2];
  undefined8 uStack_48;
  
  uStack_48 = 0x1801dfa4f;
  local_58[0] = DAT_1803c3d80 ^ (ulonglong)auStack_538;
  bVar15 = false;
  local_4e8 = param_5;
  local_4d0 = 0;
  local_4f0 = 0;
  local_4f8 = 0;
  local_4f4 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4c0 = param_2;
  local_4b8 = param_3;
  if (param_5 != 0) {
    uVar1 = FUN_18019a410(param_5);
    local_4d8 = FUN_1801b9610(uVar1);
    if (((local_4d8 != 0) && (iVar2 = FUN_18015e220(local_4e8), iVar2 != 0)) &&
       (iVar2 = FUN_18015e220(local_4e8), iVar2 < 0x11)) {
      iVar2 = FUN_18015e220(local_4e8);
      lVar5 = -1;
      do {
        lVar13 = lVar5;
        lVar5 = lVar13 + 1;
      } while (*(char *)(local_4d8 + lVar5) != '\0');
      if ((ulonglong)(lVar13 + 0x25 + (longlong)(iVar2 * 2)) < 0x401) goto LAB_1801dfb4d;
    }
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x14a);
    FUN_1801a70c0(9,0x69,0x71,"crypto\\pem\\pem_lib.c");
    goto LAB_1801dfeec;
  }
LAB_1801dfb4d:
  local_4f0 = (*param_1)(param_4,0);
  if (local_4f0 < 1) {
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x150);
    FUN_1801a70c0(9,0x69,0xd,"crypto\\pem\\pem_lib.c");
    local_4f0 = 0;
    goto LAB_1801dfeec;
  }
  local_4e0 = FUN_180195dc0(local_4f0 + 0x14,"crypto\\pem\\pem_lib.c",0x156);
  if (local_4e0 == 0) {
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x158);
    FUN_1801a70c0(9,0x69,0x41,"crypto\\pem\\pem_lib.c");
    goto LAB_1801dfeec;
  }
  local_4c8 = local_4e0;
  local_4f8 = (*param_1)(param_4,&local_4c8);
  lVar5 = local_4e8;
  if (local_4e8 == 0) {
    local_458 = '\0';
    lVar5 = local_4e0;
  }
  else {
    if (param_6 == (char *)0x0) {
      if (param_8 == (code *)0x0) {
        if (param_9 != (void *)0x0) {
          uVar9 = 0xffffffffffffffff;
          do {
            uVar9 = uVar9 + 1;
          } while (*(char *)((longlong)param_9 + uVar9) != '\0');
          uVar10 = uVar9 & 0xffffffff;
          if (0x400 < (int)uVar9) {
            uVar10 = 0x400;
          }
          memcpy(&local_458,param_9,(longlong)(int)uVar10);
          goto LAB_1801dfcc2;
        }
        pcVar6 = (char *)FUN_180213b30();
        local_518 = (undefined1 *)CONCAT44(local_518._4_4_,1);
        pcVar14 = "Enter PEM pass phrase:";
        if (pcVar6 != (char *)0x0) {
          pcVar14 = pcVar6;
        }
        iVar2 = FUN_180213b50(&local_458,4,0x400,pcVar14);
        if (iVar2 == 0) {
          uVar9 = 0xffffffffffffffff;
          do {
            uVar10 = uVar9 + 1;
            pcVar14 = (char *)((longlong)auStack_457 + uVar9);
            uVar9 = uVar10;
          } while (*pcVar14 != '\0');
          goto LAB_1801dfcc2;
        }
        local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x3b);
        FUN_1801a70c0(9,100,0x6d,"crypto\\pem\\pem_lib.c");
        memset(&local_458,0,0x400);
      }
      else {
        uVar3 = (*param_8)(&local_458,0x400,1,param_9);
        uVar10 = (ulonglong)uVar3;
LAB_1801dfcc2:
        param_7 = (int)uVar10;
        if (0 < param_7) {
          param_6 = &local_458;
          goto LAB_1801dfcf7;
        }
      }
      local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x165);
      FUN_1801a70c0(9,0x69,0x6f,"crypto\\pem\\pem_lib.c");
      goto LAB_1801dfeec;
    }
LAB_1801dfcf7:
    uVar1 = FUN_18015e220(lVar5);
    iVar2 = FUN_180193f70(local_4b0,uVar1);
    if (iVar2 < 1) goto LAB_1801dfeec;
    uVar7 = FUN_1801dd030();
    local_500 = 0;
    local_508 = local_498;
    local_510 = 1;
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,param_7);
    iVar2 = FUN_180213890(lVar5,uVar7,local_4b0,param_6);
    if (iVar2 == 0) goto LAB_1801dfeec;
    if (param_6 == &local_458) {
      FUN_180001240(&local_458,0x400);
    }
    local_458 = '\0';
    lVar13 = -1;
    do {
      lVar11 = lVar13;
      lVar13 = lVar11 + 1;
    } while (*(char *)((longlong)auStack_457 + lVar11) != '\0');
    FUN_180196a10((longlong)auStack_457 + lVar11,
                  (longlong)local_58 - ((longlong)auStack_457 + lVar11),"Proc-Type: 4,%s\n",
                  "ENCRYPTED");
    iVar2 = FUN_18015e220(lVar5);
    lVar13 = -1;
    do {
      lVar11 = lVar13;
      lVar13 = lVar11 + 1;
    } while (*(char *)((longlong)auStack_457 + lVar11) != '\0');
    lVar11 = (longlong)auStack_457 + lVar11;
    iVar8 = (int)local_58 - (int)lVar11;
    iVar4 = FUN_180196a10(lVar11,(longlong)iVar8,"DEK-Info: %s,",local_4d8);
    if (0 < iVar4) {
      iVar8 = iVar8 - iVar4;
      puVar12 = (undefined2 *)(lVar11 + iVar4);
      if (0 < (longlong)iVar2) {
        lVar13 = 0;
        do {
          iVar4 = FUN_180196a10(puVar12,(longlong)iVar8,&DAT_18032bc90,local_4b0[lVar13]);
          if (iVar4 < 1) goto LAB_1801dfe38;
          iVar8 = iVar8 - iVar4;
          lVar13 = lVar13 + 1;
          puVar12 = (undefined2 *)((longlong)puVar12 + (longlong)iVar4);
        } while (lVar13 < iVar2);
      }
      if (1 < iVar8) {
        *puVar12 = 10;
      }
    }
LAB_1801dfe38:
    lVar13 = FUN_18018ed50();
    local_4d0 = lVar13;
    if (lVar13 == 0) goto LAB_1801dfeec;
    local_518 = local_4b0;
    iVar2 = FUN_18018f9c0(lVar13,lVar5,0,local_498);
    lVar5 = local_4e0;
    if (iVar2 == 0) goto LAB_1801dfeec;
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,local_4f8);
    iVar2 = FUN_18018f9f0(lVar13,local_4e0,&local_4f4,local_4e0);
    if ((iVar2 == 0) || (iVar2 = FUN_18018f870(lVar13,local_4f4 + lVar5,&local_4f8), iVar2 == 0))
    goto LAB_1801dfeec;
    local_4f8 = local_4f8 + local_4f4;
  }
  local_518 = (undefined1 *)CONCAT44(local_518._4_4_,local_4f8);
  local_4f8 = FUN_1801e0a20(local_4b8,local_4c0,&local_458,lVar5);
  bVar15 = 0 < local_4f8;
LAB_1801dfeec:
  FUN_180001240(local_498,0x40);
  FUN_180001240(local_4b0,0x10);
  FUN_18018ed10(local_4d0);
  FUN_180001240(&local_458,0x400);
  FUN_180195f20(local_4e0,local_4f0,"crypto\\pem\\pem_lib.c",0x194);
  return bVar15;
}



// ===== FUN_1801dff70 @ 1801dff70 (size 64)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801dff70(void)

{
  FUN_1801e14e0();
  return;
}



// ===== FUN_1801dffb0 @ 1801dffb0 (size 64)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801dffb0(void)

{
  FUN_1801e14e0();
  return;
}



// ===== FUN_1801dfff0 @ 1801dfff0 (size 241)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801dfff0(void *param_1,uint param_2,int param_3,void *param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1801e0005;
  if (param_4 != (void *)0x0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)((longlong)param_4 + lVar4) != '\0');
    uVar3 = (uint)lVar4;
    if ((int)param_2 < (int)(uint)lVar4) {
      uVar3 = param_2;
    }
    memcpy(param_1,param_4,(longlong)(int)uVar3);
    return (ulonglong)uVar3;
  }
  pcVar2 = (char *)FUN_180213b30();
  pcVar6 = "Enter PEM pass phrase:";
  if (pcVar2 != (char *)0x0) {
    pcVar6 = pcVar2;
  }
  iVar1 = FUN_180213b50(param_1,-(param_3 != 0) & 4,(ulonglong)param_2,pcVar6,param_3,uVar7);
  if (iVar1 != 0) {
    FUN_1801a70c0(9,100,0x6d,"crypto\\pem\\pem_lib.c",0x3b);
    memset(param_1,0,(ulonglong)param_2);
    return 0xffffffffffffffff;
  }
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(char *)((longlong)param_1 + uVar5) != '\0');
  return uVar5 & 0xffffffff;
}



// ===== FUN_1801e00f0 @ 1801e00f0 (size 698)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801e00f0(longlong *param_1,longlong param_2,int *param_3,code *param_4,void *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_4d8 [32];
  longlong *local_4b8;
  undefined4 local_4b0;
  undefined1 *local_4a8;
  undefined8 local_4a0;
  int local_498 [4];
  undefined1 local_488 [64];
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_4d8;
  local_498[0] = *param_3;
  if (*param_1 == 0) {
    return 1;
  }
  if (param_4 == (code *)0x0) {
    if (param_5 == (void *)0x0) {
      pcVar4 = (char *)FUN_180213b30();
      local_4b8 = (longlong *)((ulonglong)local_4b8 & 0xffffffff00000000);
      pcVar9 = "Enter PEM pass phrase:";
      if (pcVar4 != (char *)0x0) {
        pcVar9 = pcVar4;
      }
      iVar2 = FUN_180213b50(local_448,0,0x400,pcVar9);
      if (iVar2 != 0) {
        local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,0x3b);
        FUN_1801a70c0(9,100,0x6d,"crypto\\pem\\pem_lib.c");
        memset(local_448,0,0x400);
        goto LAB_1801e0236;
      }
      uVar7 = 0xffffffffffffffff;
      do {
        uVar8 = uVar7 + 1;
        lVar6 = uVar7 + 1;
        uVar7 = uVar8;
      } while (local_448[lVar6] != '\0');
    }
    else {
      uVar7 = 0xffffffffffffffff;
      do {
        uVar7 = uVar7 + 1;
      } while (*(char *)((longlong)param_5 + uVar7) != '\0');
      uVar8 = uVar7 & 0xffffffff;
      if (0x400 < (int)uVar7) {
        uVar8 = 0x400;
      }
      memcpy(local_448,param_5,(longlong)(int)uVar8);
    }
  }
  else {
    uVar1 = (*param_4)(local_448,0x400,0);
    uVar8 = (ulonglong)uVar1;
  }
  if ((int)uVar8 < 0) {
LAB_1801e0236:
    local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,0x1b2);
    FUN_1801a70c0(9,0x6a,0x68,"crypto\\pem\\pem_lib.c");
    return 0;
  }
  uVar5 = FUN_1801dd030();
  local_4a0 = 0;
  local_4a8 = local_488;
  local_4b0 = 1;
  local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,(int)uVar8);
  iVar2 = FUN_180213890(*param_1,uVar5,param_1 + 1,local_448);
  if ((iVar2 == 0) || (lVar6 = FUN_18018ed50(), lVar6 == 0)) {
    return 0;
  }
  local_4b8 = param_1 + 1;
  iVar3 = FUN_18018f550(lVar6,*param_1,0,local_488);
  iVar2 = 0;
  if (iVar3 != 0) {
    local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,local_498[0]);
    iVar3 = FUN_18018f580(lVar6,param_2,local_498,param_2);
    iVar2 = 0;
    if (iVar3 != 0) {
      *param_3 = local_498[0];
      iVar2 = FUN_18018f370(lVar6,param_2 + local_498[0],local_498);
      if (iVar2 != 0) {
        *param_3 = *param_3 + local_498[0];
        goto LAB_1801e033f;
      }
    }
  }
  local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,0x1cd);
  FUN_1801a70c0(9,0x6a,0x65,"crypto\\pem\\pem_lib.c");
LAB_1801e033f:
  FUN_18018ed10(lVar6);
  FUN_180001240(local_448,0x400);
  FUN_180001240(local_488,0x40);
  return iVar2;
}



// ===== FUN_1801e03b0 @ 1801e03b0 (size 801)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e03b0(char *param_1,longlong *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  
  uVar16 = 0x1801e03ce;
  uVar10 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (*param_1 == '\n')) {
LAB_1801e0679:
    uVar16 = 1;
  }
  else {
    iVar3 = strncmp(param_1,"Proc-Type:",10);
    if (iVar3 == 0) {
      sVar5 = strspn(param_1 + 10," \t");
      pcVar11 = param_1 + 10 + sVar5;
      if ((*pcVar11 == '4') && (pcVar12 = pcVar11 + 2, pcVar11[1] == ',')) {
        sVar5 = strspn(pcVar12," \t");
        iVar3 = strncmp(pcVar12 + sVar5,"ENCRYPTED",9);
        if (iVar3 != 0) {
LAB_1801e06ad:
          FUN_1801a70c0(9,0x6b,0x6a,"crypto\\pem\\pem_lib.c",0x1fd);
          return 0;
        }
        pcVar11 = pcVar12 + sVar5 + 9;
        sVar5 = strspn(pcVar11," \t\r\n");
        if (sVar5 == 0) goto LAB_1801e06ad;
        sVar5 = strspn(pcVar11," \t\r");
        pcVar11 = pcVar11 + sVar5;
        if (*pcVar11 != '\n') {
          FUN_1801a70c0(9,0x6b,0x70,"crypto\\pem\\pem_lib.c",0x203);
          return 0;
        }
        iVar3 = strncmp(pcVar11 + 1,"DEK-Info:",9);
        if (iVar3 != 0) {
          FUN_1801a70c0(9,0x6b,0x69,"crypto\\pem\\pem_lib.c",0x20c);
          return 0;
        }
        sVar5 = strspn(pcVar11 + 10," \t");
        pcVar11 = pcVar11 + 10 + sVar5;
        sVar5 = strcspn(pcVar11," \t,");
        pcVar12 = pcVar11 + sVar5;
        cVar2 = *pcVar12;
        *pcVar12 = '\0';
        lVar6 = FUN_1801dcee0(pcVar11);
        *param_2 = lVar6;
        *pcVar12 = cVar2;
        sVar5 = strspn(pcVar12," \t");
        pcVar12 = pcVar12 + sVar5;
        if (lVar6 == 0) {
          FUN_1801a70c0(9,0x6b,0x72,"crypto\\pem\\pem_lib.c",0x21f);
          return 0;
        }
        iVar3 = FUN_18015e220(lVar6);
        if ((0 < iVar3) && (cVar2 = *pcVar12, pcVar12 = pcVar12 + 1, cVar2 != ',')) {
          FUN_1801a70c0(9,0x6b,0x81,"crypto\\pem\\pem_lib.c",0x224);
          return 0;
        }
        if ((iVar3 == 0) && (*pcVar12 == ',')) {
          FUN_1801a70c0(9,0x6b,0x82,"crypto\\pem\\pem_lib.c",0x227);
          return 0;
        }
        iVar3 = FUN_18015e220(lVar6);
        lVar6 = (longlong)iVar3;
        if (0 < iVar3) {
          plVar13 = param_2 + 1;
          for (; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined1 *)plVar13 = 0;
            plVar13 = (longlong *)((longlong)plVar13 + 1);
          }
        }
        if (0 < iVar3 * 2) {
          do {
            iVar4 = FUN_1801ba500(*pcVar12);
            if (iVar4 < 0) {
              uVar9 = 0x65;
              uVar15 = 0x23d;
              uVar14 = 0x67;
              goto LAB_1801e0427;
            }
            pcVar12 = pcVar12 + 1;
            uVar7 = uVar10;
            if ((int)uVar10 < 0) {
              uVar7 = uVar10 + 1;
            }
            uVar8 = ~uVar10;
            uVar10 = uVar10 + 1;
            pbVar1 = (byte *)((longlong)((int)uVar7 >> 1) + 8 + (longlong)param_2);
            *pbVar1 = *pbVar1 | (char)iVar4 << (sbyte)((uVar8 & 1) << 2);
          } while ((int)uVar10 < iVar3 * 2);
        }
        goto LAB_1801e0679;
      }
    }
    else {
      uVar9 = 0x6b;
      uVar15 = 0x1f0;
      uVar14 = 0x6b;
LAB_1801e0427:
      FUN_1801a70c0(9,uVar9,uVar14,"crypto\\pem\\pem_lib.c",uVar15,uVar16);
    }
    uVar16 = 0;
  }
  return uVar16;
}



// ===== FUN_1801e0710 @ 1801e0710 (size 777)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801e0710(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             uint *param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong local_res20;
  undefined4 uVar11;
  int local_68 [2];
  uint *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = param_6;
  uStack_48 = 0x1801e0738;
  uVar9 = 0;
  local_50 = 0;
  lVar6 = 0;
  *param_5 = 0;
  uVar4 = 0;
  *param_3 = 0;
  lVar5 = 0;
  *param_2 = 0;
  uVar10 = 0;
  *param_4 = 0;
  if (((byte)param_6 & 6) == 6) {
    uVar11 = 0x392;
    uVar3 = 7;
  }
  else {
    if ((param_6 & 1) == 0) {
      uVar3 = FUN_18018e930();
    }
    else {
      uVar3 = FUN_18018e940();
    }
    uVar4 = FUN_18018d7c0(uVar3);
    local_res20 = uVar4;
    lVar5 = FUN_18018d7c0(uVar3);
    local_58 = lVar5;
    if ((uVar4 != 0) && (lVar5 != 0)) {
      iVar2 = FUN_1801e1300(param_1,&local_50,uVar1);
      uVar10 = local_50;
      if (iVar2 != 0) {
        iVar2 = FUN_1801e1030(param_1,&local_res20,&local_58,local_50,uVar1);
        lVar5 = local_58;
        if (iVar2 != 0) {
          FUN_18018cf90(local_58,0x73,0,&local_60);
          param_6 = *local_60;
          if (param_6 != 0) {
            lVar6 = FUN_1801b02f0();
            if (lVar6 != 0) {
              FUN_1801b00b0(lVar6);
              iVar2 = FUN_1801b00c0(lVar6,*(longlong *)(local_60 + 2),&param_6,
                                    *(longlong *)(local_60 + 2),param_6);
              if (-1 < iVar2) {
                iVar2 = FUN_1801b0050(lVar6,(longlong)(int)param_6 + *(longlong *)(local_60 + 2),
                                      local_68);
                uVar4 = local_res20;
                if (-1 < iVar2) {
                  param_6 = param_6 + local_68[0];
                  *(longlong *)local_60 = (longlong)(int)param_6;
                  iVar2 = FUN_18018cf90(local_res20,3,0);
                  local_res20 = CONCAT44(local_res20._4_4_,iVar2);
                  lVar7 = FUN_1801e1890(iVar2 + 1,uVar1);
                  *param_3 = lVar7;
                  lVar8 = FUN_1801e1890(param_6,uVar1);
                  *param_4 = lVar8;
                  lVar7 = *param_3;
                  if ((lVar7 == 0) || (lVar8 == 0)) {
                    FUN_1801e1840(lVar7,uVar1,0);
                    *param_3 = 0;
                    FUN_1801e1840(*param_4,uVar1,0);
                    *param_4 = 0;
                  }
                  else {
                    FUN_18018dc10(uVar4,lVar7,local_res20 & 0xffffffff);
                    *(undefined1 *)((longlong)(int)local_res20 + *param_3) = 0;
                    FUN_18018dc10(lVar5,*param_4,param_6);
                    *param_5 = param_6;
                    *param_2 = uVar10;
                    uVar10 = 0;
                    uVar9 = 1;
                  }
                  goto LAB_1801e09bd;
                }
              }
              FUN_1801a70c0(9,0x91,100,"crypto\\pem\\pem_lib.c",0x3b5);
              uVar4 = local_res20;
              goto LAB_1801e09bd;
            }
            FUN_1801a70c0(9,0x91,0x41,"crypto\\pem\\pem_lib.c",0x3ac);
          }
        }
        uVar4 = local_res20;
      }
      goto LAB_1801e09bd;
    }
    uVar11 = 0x39a;
    uVar3 = 0x41;
  }
  FUN_1801a70c0(9,0x91,uVar3,"crypto\\pem\\pem_lib.c",uVar11);
LAB_1801e09bd:
  FUN_1801b02c0(lVar6);
  if ((uVar1 & 1) == 0) {
    FUN_180195e10(uVar10,"crypto\\pem\\pem_lib.c",0xdf);
  }
  else {
    FUN_1801b7560(uVar10,0,"crypto\\pem\\pem_lib.c",0xdd);
  }
  FUN_18018d110(uVar4);
  FUN_18018d110(lVar5);
  return uVar9;
}



// ===== FUN_1801e0a20 @ 1801e0a20 (size 671)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801e0a20(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int local_48 [2];
  longlong local_40;
  
  local_40 = 0x1801e0a44;
  iVar9 = 0;
  lVar3 = 0;
  local_40 = FUN_1801b02f0();
  uVar8 = 7;
  if (local_40 == 0) {
    uVar8 = 0x41;
    lVar5 = local_40;
  }
  else {
    FUN_1801b03d0(local_40);
    uVar4 = 0xffffffffffffffff;
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)(uVar6 + param_2) != '\0');
    iVar1 = FUN_18018dce0(param_1,"-----BEGIN ",0xb);
    if (iVar1 == 0xb) {
      iVar1 = FUN_18018dce0(param_1,param_2,uVar6 & 0xffffffff);
      if ((iVar1 == (int)uVar6) && (iVar1 = FUN_18018dce0(param_1,"-----\n",6), iVar1 == 6)) {
        if (param_3 != 0) {
          do {
            uVar4 = uVar4 + 1;
          } while (*(char *)(param_3 + uVar4) != '\0');
          if ((0 < (int)uVar4) &&
             ((iVar1 = FUN_18018dce0(param_1,param_3,uVar4 & 0xffffffff), iVar1 != (int)uVar4 ||
              (iVar1 = FUN_18018dce0(param_1,&DAT_1802fa360,1), iVar1 != 1)))) goto LAB_1801e0c5e;
        }
        lVar3 = FUN_180195dc0(0x2000,"crypto\\pem\\pem_lib.c",0x276);
        if (lVar3 != 0) {
          iVar1 = 0;
          lVar5 = local_40;
          for (; local_40 = lVar5, 0 < param_5; param_5 = param_5 - iVar7) {
            iVar7 = param_5;
            if (0x1400 < param_5) {
              iVar7 = 0x1400;
            }
            iVar2 = FUN_1801b03e0(lVar5,lVar3,local_48,iVar1 + param_4,iVar7);
            if ((iVar2 == 0) ||
               ((local_48[0] != 0 &&
                (iVar2 = FUN_18018dce0(param_1,lVar3,local_48[0]), iVar2 != local_48[0]))))
            goto LAB_1801e0c5e;
            iVar9 = iVar9 + local_48[0];
            iVar1 = iVar1 + iVar7;
            lVar5 = local_40;
          }
          FUN_1801b0350(lVar5,lVar3,local_48);
          if ((((local_48[0] < 1) || (iVar1 = FUN_18018dce0(param_1,lVar3), iVar1 == local_48[0]))
              && (iVar1 = FUN_18018dce0(param_1,"-----END ",9), iVar1 == 9)) &&
             ((iVar1 = FUN_18018dce0(param_1,param_2,uVar6 & 0xffffffff), iVar1 == (int)uVar6 &&
              (iVar1 = FUN_18018dce0(param_1,"-----\n",6), iVar1 == 6)))) {
            iVar9 = iVar9 + local_48[0];
            if (iVar9 != 0) goto LAB_1801e0c82;
          }
          else {
            iVar9 = 0;
          }
          goto LAB_1801e0c63;
        }
        uVar8 = 0x41;
      }
    }
LAB_1801e0c5e:
    iVar9 = 0;
    lVar5 = local_40;
  }
LAB_1801e0c63:
  FUN_1801a70c0(9,0x72,uVar8,"crypto\\pem\\pem_lib.c",0x292);
LAB_1801e0c82:
  FUN_1801b02c0(lVar5);
  FUN_180195f20(lVar3,0x2000,"crypto\\pem\\pem_lib.c",0x294);
  return iVar9;
}



// ===== FUN_1801e0cc0 @ 1801e0cc0 (size 866)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801e0cc0(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_res18;
  
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    cVar2 = pcVar5[(longlong)param_2 - (longlong)param_1];
    if (cVar1 != cVar2) break;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  if (cVar1 != cVar2) {
    iVar3 = strcmp(param_2,"ANY PRIVATE KEY");
    if (iVar3 == 0) {
      iVar3 = strcmp(param_1,"ENCRYPTED PRIVATE KEY");
      if ((iVar3 != 0) && (iVar3 = strcmp(param_1,"PRIVATE KEY"), iVar3 != 0)) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (param_1[lVar6] != '\0');
        iVar3 = (int)lVar6;
        if (iVar3 < 0xd) {
          return false;
        }
        iVar4 = strcmp(param_1 + (longlong)iVar3 + -0xb,"PRIVATE KEY");
        if (iVar4 != 0) {
          return false;
        }
        if (param_1[(longlong)iVar3 + -0xc] != ' ') {
          return false;
        }
        iVar3 = (int)(param_1 + (longlong)iVar3 + -0xc) - (int)param_1;
        if (iVar3 < 1) {
          return false;
        }
        lVar6 = FUN_1801c4c80(0,param_1,iVar3);
        if (lVar6 == 0) {
          return false;
        }
        if (*(longlong *)(lVar6 + 0xb8) == 0) {
          return false;
        }
      }
    }
    else {
      iVar3 = strcmp(param_2,"PARAMETERS");
      if (iVar3 == 0) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (param_1[lVar6] != '\0');
        iVar3 = (int)lVar6;
        if ((((iVar3 < 0xc) ||
             (iVar4 = strcmp(param_1 + (longlong)iVar3 + -10,"PARAMETERS"), iVar4 != 0)) ||
            (param_1[(longlong)iVar3 + -0xb] != ' ')) ||
           ((iVar3 = (int)(param_1 + (longlong)iVar3 + -0xb) - (int)param_1, iVar3 < 1 ||
            (lVar6 = FUN_1801c4c80(&local_res18,param_1,iVar3), lVar6 == 0)))) {
          return false;
        }
        lVar6 = *(longlong *)(lVar6 + 0x70);
        FUN_1801abfb0(local_res18);
        return lVar6 != 0;
      }
      iVar3 = strcmp(param_1,"X9.42 DH PARAMETERS");
      if ((((((iVar3 != 0) || (iVar3 = strcmp(param_2,"DH PARAMETERS"), iVar3 != 0)) &&
            ((iVar3 = strcmp(param_1,"X509 CERTIFICATE"), iVar3 != 0 ||
             (iVar3 = strcmp(param_2,"CERTIFICATE"), iVar3 != 0)))) &&
           ((iVar3 = strcmp(param_1,"NEW CERTIFICATE REQUEST"), iVar3 != 0 ||
            (iVar3 = strcmp(param_2,"CERTIFICATE REQUEST"), iVar3 != 0)))) &&
          ((iVar3 = strcmp(param_1,"CERTIFICATE"), iVar3 != 0 ||
           (iVar3 = strcmp(param_2,"TRUSTED CERTIFICATE"), iVar3 != 0)))) &&
         ((iVar3 = strcmp(param_1,"X509 CERTIFICATE"), iVar3 != 0 ||
          (iVar3 = strcmp(param_2,"TRUSTED CERTIFICATE"), iVar3 != 0)))) {
        iVar3 = strcmp(param_1,"CERTIFICATE");
        if (iVar3 == 0) {
          lVar6 = 0;
          do {
            lVar7 = lVar6 + 1;
            if (param_2[lVar6] != (&DAT_18032d908)[lVar6]) goto LAB_1801e0f78;
            lVar6 = lVar7;
          } while (lVar7 != 6);
        }
        else {
LAB_1801e0f78:
          iVar3 = strcmp(param_1,"PKCS #7 SIGNED DATA");
          if (iVar3 == 0) {
            lVar6 = 0;
            do {
              lVar7 = lVar6 + 1;
              if (param_2[lVar6] != (&DAT_18032d908)[lVar6]) goto LAB_1801e0fa8;
              lVar6 = lVar7;
            } while (lVar7 != 6);
          }
          else {
LAB_1801e0fa8:
            iVar3 = strcmp(param_1,"CERTIFICATE");
            if (iVar3 == 0) {
              lVar6 = 0;
              do {
                lVar7 = lVar6 + 1;
                if (param_2[lVar6] != (&DAT_18033133c)[lVar6]) goto LAB_1801e0fe8;
                lVar6 = lVar7;
              } while (lVar7 != 4);
            }
            else {
LAB_1801e0fe8:
              lVar6 = 0;
              do {
                lVar7 = lVar6 + 1;
                if (param_1[lVar6] != (&DAT_18032d908)[lVar6]) {
                  return false;
                }
                lVar6 = lVar7;
                lVar8 = 0;
              } while (lVar7 != 6);
              do {
                lVar6 = lVar8 + 1;
                if (param_2[lVar8] != (&DAT_18033133c)[lVar8]) {
                  return false;
                }
                lVar8 = lVar6;
              } while (lVar6 != 4);
            }
          }
        }
      }
    }
  }
  return true;
}



// ===== FUN_1801e1030 @ 1801e1030 (size 707)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801e1030(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *_Str1;
  void *pvVar6;
  size_t _MaxCount;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  uVar9 = 0;
  uVar10 = *param_2;
  bVar3 = false;
  iVar7 = 0;
  if ((param_5 & 1) == 0) {
    _Str1 = (char *)FUN_180195dc0(0x100,"crypto\\pem\\pem_lib.c",0xe5);
  }
  else {
    _Str1 = (char *)FUN_1801b75d0(0x100,"crypto\\pem\\pem_lib.c",0xe4);
  }
  if (_Str1 == (char *)0x0) {
    FUN_1801a70c0(9,0x8f,0x41,"crypto\\pem\\pem_lib.c",0x324);
    return 0;
  }
  bVar1 = false;
LAB_1801e10e2:
  do {
    iVar4 = FUN_18018d340(param_1,_Str1,0xff);
    if (iVar4 < 1) {
      uVar11 = 0x32c;
LAB_1801e128d:
      FUN_1801a70c0(9,0x8f,0x66,"crypto\\pem\\pem_lib.c",uVar11);
LAB_1801e12a7:
      if ((param_5 & 1) == 0) {
        FUN_180195e10(_Str1,"crypto\\pem\\pem_lib.c",0xdf);
      }
      else {
        FUN_1801b7560(_Str1,0x100,"crypto\\pem\\pem_lib.c");
      }
      return uVar9;
    }
    if ((iVar4 != 0xfe) || (bVar2 = true, _Str1[0xfd] == '\n')) {
      bVar2 = false;
    }
    if (iVar7 == 0) {
      pvVar6 = memchr(_Str1,0x3a,(longlong)iVar4);
      if (pvVar6 != (void *)0x0) {
        iVar7 = 1;
      }
    }
    iVar5 = strncmp(_Str1,"-----END ",9);
    if ((iVar5 == 0) || (uVar8 = 0xffffffff, iVar7 == 1)) {
      uVar8 = 0xfffffffb;
    }
    iVar4 = FUN_1801e18d0(_Str1,iVar4,uVar8 & param_5);
    if (*_Str1 == '\n') {
      if (bVar1) goto LAB_1801e11e7;
      if (iVar7 == 2) {
        uVar11 = 0x349;
        goto LAB_1801e128d;
      }
      iVar7 = 2;
      uVar10 = *param_3;
      bVar1 = bVar2;
      goto LAB_1801e10e2;
    }
    iVar5 = strncmp(_Str1,"-----END ",9);
    if (iVar5 == 0) {
      _MaxCount = 0xffffffffffffffff;
      do {
        _MaxCount = _MaxCount + 1;
      } while (param_4[_MaxCount] != '\0');
      iVar4 = strncmp(_Str1 + 9,param_4,_MaxCount);
      if (iVar4 == 0) {
        iVar4 = strncmp(_Str1 + 9 + _MaxCount,"-----\n",6);
        if (iVar4 == 0) {
          if (iVar7 == 0) {
            *param_2 = *param_3;
            *param_3 = uVar10;
          }
          uVar9 = 1;
          goto LAB_1801e12a7;
        }
      }
      uVar11 = 0x358;
      goto LAB_1801e128d;
    }
    if (bVar3) {
      uVar11 = 0x362;
      goto LAB_1801e128d;
    }
    iVar5 = FUN_18018da10(uVar10,_Str1);
    if (iVar5 < 0) goto LAB_1801e12a7;
    if (iVar7 == 2) {
      if (iVar4 < 0x42) {
        if (iVar4 < 0x41) {
          bVar3 = true;
        }
        goto LAB_1801e11e7;
      }
      goto LAB_1801e12a7;
    }
LAB_1801e11e7:
    bVar1 = bVar2;
  } while( true );
}



// ===== FUN_1801e1300 @ 1801e1300 (size 467)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e1300(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char *_Str1;
  void *_Dst;
  uint uVar3;
  size_t _Size;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1801e131f;
  uVar5 = 0;
  uVar3 = param_3 & 1;
  if (uVar3 == 0) {
    _Str1 = (char *)FUN_180195dc0(0x100,"crypto\\pem\\pem_lib.c",0xe5);
  }
  else {
    _Str1 = (char *)FUN_1801b75d0(0x100,"crypto\\pem\\pem_lib.c",0xe4);
  }
  if (_Str1 == (char *)0x0) {
    FUN_1801a70c0(9,0x90,0x41,"crypto\\pem\\pem_lib.c",0x2e1,uVar7);
    uVar5 = 0;
  }
  else {
    do {
      iVar1 = FUN_18018d340(param_1,_Str1,0xff);
      if (iVar1 < 1) {
        uVar6 = 0x2e9;
        uVar4 = 0x6c;
        goto LAB_1801e146a;
      }
      iVar1 = FUN_1801e18d0(_Str1,iVar1,param_3 & 0xfffffffb);
      iVar2 = strncmp(_Str1,"-----BEGIN ",0xb);
    } while (((iVar2 != 0) || (iVar1 < 6)) ||
            (iVar2 = strncmp(_Str1 + (longlong)iVar1 + -6,"-----\n",6), iVar2 != 0));
    _Size = (size_t)(iVar1 + -0x10);
    _Str1[iVar1 + -6] = '\0';
    if (uVar3 == 0) {
      _Dst = (void *)FUN_180195dc0(_Size,"crypto\\pem\\pem_lib.c",0xe5);
    }
    else {
      _Dst = (void *)FUN_1801b75d0(_Size,"crypto\\pem\\pem_lib.c",0xe4);
    }
    *param_2 = _Dst;
    if (_Dst == (void *)0x0) {
      uVar6 = 0x2f8;
      uVar4 = 0x41;
LAB_1801e146a:
      FUN_1801a70c0(9,0x90,uVar4,"crypto\\pem\\pem_lib.c",uVar6);
    }
    else {
      memcpy(_Dst,_Str1 + 0xb,_Size);
      uVar5 = 1;
    }
    if (uVar3 == 0) {
      FUN_180195e10(_Str1,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      FUN_1801b7560(_Str1,0x100,"crypto\\pem\\pem_lib.c");
    }
  }
  return uVar5;
}



// ===== FUN_1801e14e0 @ 1801e14e0 (size 710)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801e14e0(undefined8 *param_1,int *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,int *param_7,uint param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_e8 [32];
  int *local_c8;
  uint local_c0;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int *local_78;
  undefined1 local_70 [24];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1801e14f7;
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_e8;
  uVar4 = 0;
  local_98 = param_5;
  local_88 = param_6;
  local_90 = param_7;
  uVar5 = param_8 & 1;
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_80 = param_1;
  local_78 = param_2;
  do {
    uVar2 = local_a8;
    uVar1 = local_b0;
    iVar3 = local_b8;
    if (uVar5 == 0) {
      FUN_180195e10(uVar4,"crypto\\pem\\pem_lib.c",0xdf);
      FUN_180195e10(uVar1,"crypto\\pem\\pem_lib.c",0xdf);
      FUN_180195e10(uVar2,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      FUN_1801b7560(uVar4,0,"crypto\\pem\\pem_lib.c",0xdd);
      FUN_1801b7560(uVar1,0,"crypto\\pem\\pem_lib.c",0xdd);
      FUN_1801b7560(uVar2,(longlong)iVar3,"crypto\\pem\\pem_lib.c",0xdd);
    }
    local_c8 = &local_b8;
    local_c0 = param_8;
    iVar3 = FUN_1801e0710(local_98,&local_a0,&local_b0,&local_a8);
    uVar4 = local_a0;
    if (iVar3 == 0) {
      uVar5 = FUN_1801a6f40();
      if ((uVar5 & 0xfff) == 0x6c) {
        FUN_1801a6360(2,"Expecting: ",param_4);
      }
      return 0;
    }
    iVar3 = FUN_1801e0cc0(local_a0);
    uVar1 = local_b0;
  } while (iVar3 == 0);
  iVar3 = FUN_1801e03b0(local_b0,local_70);
  uVar2 = local_a8;
  if (iVar3 == 0) {
LAB_1801e16ba:
    iVar3 = local_b4;
LAB_1801e16c3:
    iVar6 = local_b8;
    if (uVar5 != 0) {
      FUN_1801b7560(uVar4,0,"crypto\\pem\\pem_lib.c",0xdd);
      goto LAB_1801e16de;
    }
    FUN_180195e10(uVar4,"crypto\\pem\\pem_lib.c",0xdf);
  }
  else {
    local_c8 = local_90;
    iVar3 = FUN_1801e00f0(local_70,local_a8,&local_b8,local_88);
    if (iVar3 == 0) goto LAB_1801e16ba;
    *local_80 = uVar2;
    *local_78 = local_b8;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = uVar4;
    }
    iVar3 = 1;
    iVar6 = local_b8;
    if (param_3 == (undefined8 *)0x0) goto LAB_1801e16c3;
LAB_1801e16de:
    if (uVar5 != 0) {
      FUN_1801b7560(uVar1,0,"crypto\\pem\\pem_lib.c",0xdd);
      goto LAB_1801e1722;
    }
  }
  FUN_180195e10(uVar1,"crypto\\pem\\pem_lib.c",0xdf);
LAB_1801e1722:
  if (iVar3 == 0) {
    if (uVar5 != 0) {
      FUN_1801b7560(uVar2,(longlong)iVar6,"crypto\\pem\\pem_lib.c",0xdd);
      return 0;
    }
    FUN_180195e10(uVar2,"crypto\\pem\\pem_lib.c",0xdf);
  }
  return iVar3;
}



// ===== FUN_1801e17b0 @ 1801e17b0 (size 135)

int FUN_1801e17b0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar5;
  longlong lVar4;
  longlong lVar6;
  char *pcVar7;
  
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
    lVar4 = -1;
  } while (*(char *)(param_1 + lVar6) != '\0');
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  if ((int)lVar5 + 2 < (int)lVar6) {
    pcVar7 = (char *)(((longlong)(int)lVar6 - (longlong)(int)lVar4) + param_1);
    pcVar3 = pcVar7;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[param_2 - (longlong)pcVar7];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if ((cVar1 == cVar2) && (pcVar7[-1] == ' ')) {
      return (int)(pcVar7 + -1) - (int)param_1;
    }
  }
  return 0;
}



// ===== FUN_1801e1840 @ 1801e1840 (size 68)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e1840(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  if ((param_2 & 1) == 0) {
    FUN_180195e10(param_1,"crypto\\pem\\pem_lib.c",0xdf);
    return;
  }
  FUN_1801b7560(param_1,param_3,"crypto\\pem\\pem_lib.c",0xdd);
  return;
}



// ===== FUN_1801e18d0 @ 1801e18d0 (size 231)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801e18d0(char *param_1,uint param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(int)param_2;
  if ((param_3 & 2) == 0) {
    iVar4 = 0;
    if ((param_3 & 4) == 0) {
      if (0 < (longlong)uVar5) {
        pcVar3 = param_1;
        do {
          cVar1 = *pcVar3;
          if ((cVar1 == '\n') || (cVar1 == '\r')) break;
          iVar2 = FUN_1801baab0((int)cVar1,0x40);
          if (iVar2 != 0) {
            *pcVar3 = ' ';
          }
          pcVar3 = pcVar3 + 1;
          iVar4 = iVar4 + 1;
        } while ((longlong)pcVar3 - (longlong)param_1 < (longlong)uVar5);
      }
    }
    else if (0 < (longlong)uVar5) {
      pcVar3 = param_1;
      do {
        iVar2 = FUN_1801baab0((int)*pcVar3,0x400);
        if (((iVar2 == 0) || (*pcVar3 == '\n')) || (*pcVar3 == '\r')) break;
        pcVar3 = pcVar3 + 1;
        iVar4 = iVar4 + 1;
      } while ((longlong)pcVar3 - (longlong)param_1 < (longlong)uVar5);
    }
  }
  else {
    if (-1 < (int)param_2) {
      pcVar3 = param_1 + uVar5;
      do {
        param_2 = (uint)uVar5;
        if (' ' < *pcVar3) break;
        pcVar3 = pcVar3 + -1;
        param_2 = param_2 - 1;
        uVar5 = (ulonglong)param_2;
      } while (-1 < (int)param_2);
    }
    iVar4 = param_2 + 1;
  }
  (param_1 + iVar4)[0] = '\n';
  (param_1 + iVar4)[1] = '\0';
  return iVar4 + 1;
}



// ===== FUN_1801e19c0 @ 1801e19c0 (size 203)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e19c0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801e19d0;
  local_20 = 0;
  iVar1 = FUN_1801dff70(&local_20,local_28,0,param_2,param_3,param_5,param_6);
  uVar3 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  local_18 = local_20;
  lVar2 = (*param_1)(param_4,&local_18,local_28[0]);
  if (lVar2 == 0) {
    FUN_1801a70c0(9,0x67,0xd,"crypto\\pem\\pem_oth.c",CONCAT44(uVar3,0x21));
  }
  FUN_180195e10(local_20,"crypto\\pem\\pem_oth.c",0x22);
  return lVar2;
}



// ===== FUN_1801e1a90 @ 1801e1a90 (size 86)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_1801e1a90(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_18019f420();
    *param_2 = lVar1;
    return -(lVar1 != 0) & 2;
  }
  if (param_1 == 2) {
    FUN_18019f2e0(*param_2);
    *param_2 = 0;
    return 2;
  }
  return 1;
}



// ===== FUN_1801e1b20 @ 1801e1b20 (size 279)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e1b20(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_18019f420();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_1801bfef0(0,param_2,param_3,&DAT_180331570);
    if (puVar2 != (undefined8 *)0x0) {
      if (param_1 != (longlong *)0x0) {
        FUN_18019f2e0(*param_1);
        *param_1 = lVar1;
      }
      *(undefined8 *)(lVar1 + 8) = *puVar2;
      *(undefined8 *)(lVar1 + 0x40) = puVar2[1];
      *(undefined8 *)(lVar1 + 0x10) = puVar2[2];
      *(undefined8 *)(lVar1 + 0x48) = puVar2[3];
      if ((longlong *)puVar2[4] != (longlong *)0x0) {
        *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(*(longlong *)puVar2[4] + 8);
        *(undefined4 *)(lVar1 + 0x58) = **(undefined4 **)puVar2[4];
        *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(puVar2[4] + 8);
        *(undefined8 *)(*(longlong *)puVar2[4] + 8) = 0;
        FUN_1801bc3c0(*(undefined8 *)puVar2[4]);
        FUN_180195e10(puVar2[4],"crypto\\dh\\dh_asn1.c",0x6e);
        puVar2[4] = 0;
      }
      FUN_180195e10(puVar2,"crypto\\dh\\dh_asn1.c",0x72);
      return lVar1;
    }
    FUN_18019f2e0(lVar1);
  }
  return 0;
}



// ===== FUN_1801e1c60 @ 1801e1c60 (size 155)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e1c60(longlong param_1,undefined8 param_2)

{
  int *local_58;
  longlong local_50;
  int local_48 [2];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int **local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x1801e1c6a;
  local_30 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_18 = *(undefined8 *)(param_1 + 0x48);
  if (((*(longlong *)(param_1 + 0x60) == 0) || (*(longlong *)(param_1 + 0x50) == 0)) ||
     (*(int *)(param_1 + 0x58) < 1)) {
    local_10 = (int **)0x0;
  }
  else {
    local_58 = local_48;
    local_10 = &local_58;
    local_38 = 8;
    local_50 = *(longlong *)(param_1 + 0x60);
    local_48[0] = *(int *)(param_1 + 0x58);
    local_40 = *(longlong *)(param_1 + 0x50);
  }
  FUN_1801c2350(&local_30,param_2,&DAT_180331570);
  return;
}



// ===== FUN_1801e1d00 @ 1801e1d00 (size 93)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e1d00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801e1d10;
  FUN_1801d2c80(param_1,&local_18,&local_res20);
  uVar1 = FUN_1801d5570();
  FUN_180213c50(local_18,uVar1,param_2,param_3,local_res20,1);
  return;
}



// ===== FUN_1801e1d60 @ 1801e1d60 (size 264)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e1d60(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1801e1d80;
  if (param_1 == 0) {
LAB_1801e1e4b:
    uVar8 = 0;
  }
  else {
    iVar5 = 0;
    iVar3 = FUN_1801958b0(param_2);
    if (0 < iVar3) {
      do {
        lVar4 = FUN_180195ae0(param_2,iVar5);
        pbVar7 = *(byte **)(lVar4 + 8);
        bVar2 = *pbVar7;
        pbVar6 = pbVar7;
        while (bVar2 != 0) {
          if ((bVar2 < 0x3b) && ((0x400500000000000U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) {
            if (pbVar6[1] != 0) {
              pbVar7 = pbVar6 + 1;
            }
            break;
          }
          pbVar1 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          bVar2 = *pbVar1;
        }
        pbVar6 = pbVar7 + 1;
        if (*pbVar7 != 0x2b) {
          pbVar6 = pbVar7;
        }
        iVar3 = FUN_1801a3900(param_1,pbVar6,param_3,*(undefined8 *)(lVar4 + 0x10),0xffffffff,
                              0xffffffff,(*pbVar7 != 0x2b) - 1,uVar8);
        if (iVar3 == 0) goto LAB_1801e1e4b;
        iVar5 = iVar5 + 1;
        iVar3 = FUN_1801958b0(param_2);
      } while (iVar5 < iVar3);
    }
    uVar8 = 1;
  }
  return uVar8;
}



// ===== FUN_1801e1e70 @ 1801e1e70 (size 69)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e1e70(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar3 = param_2;
    for (; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    uVar2 = uVar2 & 0x7fffffff;
  }
  FUN_1801e3c60(param_1,param_2,uVar2,param_3);
  return;
}



// ===== FUN_1801e1ec0 @ 1801e1ec0 (size 113)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e1ec0(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  if (param_2 == 0) {
    pcVar2 = "FALSE";
    do {
      if (0x7fffffff < uVar1) break;
      pcVar2 = pcVar2 + 1;
      uVar1 = uVar1 + 1;
    } while (*pcVar2 != '\0');
    pcVar2 = "FALSE";
  }
  else {
    pcVar2 = "TRUE";
    do {
      if (0x7fffffff < uVar1) break;
      pcVar2 = pcVar2 + 1;
      uVar1 = uVar1 + 1;
    } while (*pcVar2 != '\0');
    pcVar2 = "TRUE";
  }
  FUN_1801e3c60(param_1,pcVar2,uVar1 & 0x7fffffff,param_3);
  return;
}



// ===== FUN_1801e1f40 @ 1801e1f40 (size 250)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801e1f40(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1801e1f51;
  if (param_2 == 0) {
    return 1;
  }
  uVar6 = 0;
  pcVar4 = (char *)0x0;
  lVar3 = FUN_1801dc100(param_2,0);
  if ((lVar3 == 0) || (pcVar4 = (char *)FUN_1801e2ca0(lVar3), pcVar4 == (char *)0x0)) {
    FUN_1801a70c0(0x22,0x78,0x41,"crypto\\x509v3\\v3_utl.c",0xbe,uVar7);
  }
  FUN_180198910(lVar3);
  if (pcVar4 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = *pcVar4;
    pcVar5 = pcVar4;
    for (; (cVar1 != '\0' && (uVar6 < 0x80000000)); uVar6 = uVar6 + 1) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    uVar2 = FUN_1801e3c60(param_1,pcVar4,uVar6 & 0x7fffffff,param_3);
    FUN_180195e10(pcVar4,"crypto\\x509v3\\v3_utl.c",0x103);
  }
  return uVar2;
}



// ===== FUN_1801e2040 @ 1801e2040 (size 112)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e2040(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_180195e10(param_1[1],"crypto\\x509v3\\v3_utl.c",0x6c);
    FUN_180195e10(param_1[2],"crypto\\x509v3\\v3_utl.c",0x6d);
    FUN_180195e10(*param_1,"crypto\\x509v3\\v3_utl.c",0x6e);
    FUN_180195e10(param_1,"crypto\\x509v3\\v3_utl.c",0x6f);
  }
  return;
}



// ===== FUN_1801e20b0 @ 1801e20b0 (size 612)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801e20b0(undefined8 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801e20bc;
  pcVar1 = (char *)param_1[2];
  if (pcVar1 == (char *)0x0) {
LAB_1801e22b3:
    FUN_1801a70c0(0x22,0x6e,0x68,"crypto\\x509v3\\v3_utl.c",0x121);
    FUN_1801a6360(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2],uVar4);
    return 0;
  }
  lVar2 = 0;
  while (lVar3 = lVar2, pcVar1[lVar3] == (&DAT_1802ff188)[lVar3]) {
    lVar2 = lVar3 + 1;
    if (lVar3 + 1 == 5) {
      *param_2 = 0xff;
      return (int)lVar3 + -3;
    }
  }
  lVar2 = 0;
  while (lVar3 = lVar2, pcVar1[lVar3] == (&DAT_1802eceb8)[lVar3]) {
    lVar2 = lVar3 + 1;
    if (lVar3 + 1 == 5) {
      *param_2 = 0xff;
      return (int)lVar3 + -3;
    }
  }
  if (((*pcVar1 != DAT_180331624) || (pcVar1[1] != DAT_180331625)) &&
     ((*pcVar1 != DAT_180331628 || (pcVar1[1] != DAT_180331629)))) {
    lVar2 = 0;
    while (lVar3 = lVar2, pcVar1[lVar3] == (&DAT_18033162c)[lVar3]) {
      lVar2 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        *param_2 = 0xff;
        return (int)lVar3 + -2;
      }
    }
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      if (pcVar1[lVar2] != (&DAT_180331630)[lVar2]) {
        lVar2 = 0;
        while (lVar3 = lVar2, pcVar1[lVar3] == "FALSE"[lVar3]) {
          lVar2 = lVar3 + 1;
          if (lVar3 + 1 == 6) {
            *param_2 = 0;
            return (int)lVar3 + -4;
          }
        }
        lVar2 = 0;
        while (lVar3 = lVar2, pcVar1[lVar3] == "false"[lVar3]) {
          lVar2 = lVar3 + 1;
          if (lVar3 + 1 == 6) {
            *param_2 = 0;
            return (int)lVar3 + -4;
          }
        }
        if (((((*pcVar1 == DAT_180331634) && (pcVar1[1] == DAT_180331635)) ||
             ((*pcVar1 == DAT_180306b20 && (pcVar1[1] == DAT_180306b21)))) ||
            (((*pcVar1 == DAT_180331638 && (pcVar1[1] == DAT_180331639)) &&
             (pcVar1[2] == DAT_18033163a)))) ||
           (((*pcVar1 == DAT_18033163c && (pcVar1[1] == DAT_18033163d)) &&
            (pcVar1[2] == DAT_18033163e)))) {
          *param_2 = 0;
          return 1;
        }
        goto LAB_1801e22b3;
      }
      lVar2 = lVar3;
    } while (lVar3 != 4);
  }
  *param_2 = 0xff;
  return 1;
}



// ===== FUN_1801e2320 @ 1801e2320 (size 402)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e2320(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  char *pcVar8;
  undefined4 uVar9;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar10;
  undefined8 uVar11;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar11 = 0x1801e233e;
  pcVar2 = (char *)param_1[2];
  local_res8 = 0;
  if (pcVar2 == (char *)0x0) {
    uVar4 = 0xca;
    uVar9 = 0x6d;
  }
  else {
    local_res8 = FUN_180198b30();
    if (local_res8 == 0) {
      uVar4 = 0xcf;
      uVar9 = 0x41;
    }
    else {
      cVar1 = *pcVar2;
      if (cVar1 != '-') {
        cVar7 = cVar1;
      }
      else {
        cVar7 = pcVar2[1];
      }
      bVar3 = cVar1 == '-';
      pcVar8 = pcVar2 + 1;
      if (cVar1 != '-') {
        pcVar8 = pcVar2;
      }
      if ((cVar7 == '0') && ((pcVar8[1] + 0xa8U & 0xdf) == 0)) {
        pcVar8 = pcVar8 + 2;
        iVar5 = FUN_180199d10(&local_res8,pcVar8);
      }
      else {
        iVar5 = FUN_180199b40(&local_res8,pcVar8);
      }
      if ((iVar5 == 0) || (pcVar8[iVar5] != '\0')) {
        FUN_180198910(local_res8);
        uVar4 = 0xe5;
        uVar9 = 100;
      }
      else {
        if ((bVar3) && (iVar5 = FUN_180198a80(local_res8), iVar5 != 0)) {
          bVar3 = false;
        }
        lVar6 = FUN_1801dc120(local_res8,0);
        FUN_180198910(local_res8);
        if (lVar6 != 0) {
          if (bVar3) {
            *(uint *)(lVar6 + 4) = *(uint *)(lVar6 + 4) | 0x100;
          }
          *param_2 = lVar6;
          return 1;
        }
        uVar4 = 0xf0;
        uVar9 = 0x65;
      }
    }
  }
  FUN_1801a70c0(0x22,0x6c,uVar9,"crypto\\x509v3\\v3_utl.c",CONCAT44(uVar10,uVar4));
  FUN_1801a6360(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2],uVar11);
  return 0;
}



// ===== FUN_1801e24c0 @ 1801e24c0 (size 584)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e24c0(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  undefined8 local_res10;
  undefined8 uVar13;
  
  uVar13 = 0x1801e24de;
  uVar9 = 0;
  uVar8 = 0;
  local_res10 = 0;
  pcVar2 = (char *)FUN_1801ba320(param_1,"crypto\\x509v3\\v3_utl.c",0x141);
  if (pcVar2 == (char *)0x0) {
    uVar4 = 0x143;
    uVar10 = 0x41;
  }
  else {
    iVar12 = 1;
    pcVar7 = (char *)0x0;
    cVar1 = *pcVar2;
    pcVar6 = pcVar2;
    pcVar3 = pcVar2;
    while (((cVar1 != '\0' && (cVar1 != '\r')) && (cVar1 != '\n'))) {
      if (iVar12 == 1) {
        if (cVar1 == ':') {
          *pcVar6 = '\0';
          iVar12 = 2;
          pcVar7 = (char *)FUN_1801e3ba0(pcVar3);
          if (pcVar7 == (char *)0x0) {
            uVar4 = 0x154;
            goto LAB_1801e267a;
          }
          pcVar3 = pcVar6 + 1;
        }
        else if (cVar1 == ',') {
          *pcVar6 = '\0';
          pcVar7 = (char *)FUN_1801e3ba0(pcVar3);
          pcVar3 = pcVar6 + 1;
          if (pcVar7 == (char *)0x0) {
            uVar4 = 0x15e;
            goto LAB_1801e267a;
          }
          FUN_1801e3c60(pcVar7,0,0,&local_res10);
        }
      }
      else if ((iVar12 == 2) && (cVar1 == ',')) {
        *pcVar6 = '\0';
        pcVar3 = (char *)FUN_1801e3ba0(pcVar3);
        if (pcVar3 == (char *)0x0) {
          uVar4 = 0x16c;
          uVar10 = 0x6d;
          goto LAB_1801e2680;
        }
        cVar1 = *pcVar3;
        pcVar11 = pcVar3;
        for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
          pcVar11 = pcVar11 + 1;
          cVar1 = *pcVar11;
        }
        FUN_1801e3c60(pcVar7,pcVar3,uVar5 & 0x7fffffff,&local_res10);
        pcVar7 = (char *)0x0;
        pcVar3 = pcVar6 + 1;
        iVar12 = 1;
      }
      pcVar11 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar11;
    }
    pcVar3 = (char *)FUN_1801e3ba0(pcVar3);
    if (iVar12 == 2) {
      if (pcVar3 != (char *)0x0) {
        cVar1 = *pcVar3;
        pcVar6 = pcVar3;
        for (; (cVar1 != '\0' && (uVar8 < 0x80000000)); uVar8 = uVar8 + 1) {
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
        }
        uVar9 = uVar8 & 0x7fffffff;
        pcVar6 = pcVar3;
        pcVar3 = pcVar7;
LAB_1801e26c5:
        FUN_1801e3c60(pcVar3,pcVar6,uVar9,&local_res10);
        FUN_180195e10(pcVar2,"crypto\\x509v3\\v3_utl.c",0x187);
        return local_res10;
      }
      uVar4 = 0x17b;
      uVar10 = 0x6d;
    }
    else {
      if (pcVar3 != (char *)0x0) {
        pcVar6 = (char *)0x0;
        goto LAB_1801e26c5;
      }
      uVar4 = 0x182;
LAB_1801e267a:
      uVar10 = 0x6c;
    }
  }
LAB_1801e2680:
  FUN_1801a70c0(0x22,0x6d,uVar10,"crypto\\x509v3\\v3_utl.c",uVar4,uVar13);
  FUN_180195e10(pcVar2,"crypto\\x509v3\\v3_utl.c",0x18b);
  FUN_1801958f0(local_res10,FUN_1801e2040);
  return 0;
}



// ===== FUN_1801e2710 @ 1801e2710 (size 194)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e2710(undefined8 param_1,char *param_2,ulonglong param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t _MaxCount;
  
  if (param_2 == (char *)0x0) {
LAB_1801e27b8:
    uVar4 = 0xfffffffe;
  }
  else {
    if (param_3 == 0) {
      cVar1 = *param_2;
      pcVar5 = param_2;
      for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      param_3 = (ulonglong)(uVar2 & 0x7fffffff);
    }
    else {
      _MaxCount = param_3 - 1;
      if (param_3 < 2) {
        _MaxCount = param_3;
      }
      pvVar3 = memchr(param_2,0,_MaxCount);
      if (pvVar3 != (void *)0x0) goto LAB_1801e27b8;
    }
    if ((1 < param_3) && (param_2[param_3 - 1] == '\0')) {
      param_3 = param_3 - 1;
    }
    uVar4 = FUN_1801e2f70(param_1,param_2,param_3,param_4,1,0);
  }
  return uVar4;
}



// ===== FUN_1801e27e0 @ 1801e27e0 (size 195)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801e27e0(undefined8 param_1,char *param_2,ulonglong param_3,undefined4 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t _MaxCount;
  
  if (param_2 == (char *)0x0) {
LAB_1801e2889:
    uVar4 = 0xfffffffe;
  }
  else {
    if (param_3 == 0) {
      cVar1 = *param_2;
      pcVar5 = param_2;
      for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      param_3 = (ulonglong)(uVar2 & 0x7fffffff);
    }
    else {
      _MaxCount = param_3 - 1;
      if (param_3 < 2) {
        _MaxCount = param_3;
      }
      pvVar3 = memchr(param_2,0,_MaxCount);
      if (pvVar3 != (void *)0x0) goto LAB_1801e2889;
    }
    if ((1 < param_3) && (param_2[param_3 - 1] == '\0')) {
      param_3 = param_3 - 1;
    }
    uVar4 = FUN_1801e2f70(param_1,param_2,param_3,param_4,2,param_5);
  }
  return uVar4;
}



// ===== FUN_1801e28f0 @ 1801e28f0 (size 126)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801e28f0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801e2900;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar1 = FUN_1801e2b10(local_28);
    if (iVar1 != 0) {
      local_30 = 0;
      local_38 = 7;
      uVar2 = FUN_1801e2f70(param_1,local_28,(longlong)iVar1,param_3);
      return uVar2;
    }
  }
  return 0xfffffffe;
}



// ===== FUN_1801e2970 @ 1801e2970 (size 125)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801e2970(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801e2980;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1801e2b10(local_28,param_1);
  if ((iVar1 != 0) && (lVar2 = FUN_1801bc530(), lVar2 != 0)) {
    iVar1 = FUN_1801dfa10(lVar2,local_28,iVar1);
    if (iVar1 != 0) {
      return lVar2;
    }
    FUN_1801bc3c0(lVar2);
  }
  return 0;
}



// ===== FUN_1801e29f0 @ 1801e29f0 (size 284)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801e29f0(char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801e2a0a;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  lVar5 = 0;
  pcVar3 = strchr(param_1,0x2f);
  if ((pcVar3 != (char *)0x0) &&
     (lVar4 = FUN_1801ba320(param_1,"crypto\\x509v3\\v3_utl.c",0x410), lVar4 != 0)) {
    pcVar3[lVar4 - (longlong)param_1] = '\0';
    iVar1 = FUN_1801e2b10(local_38,lVar4);
    if (iVar1 != 0) {
      iVar2 = FUN_1801e2b10(local_38 + iVar1,pcVar3 + (lVar4 - (longlong)param_1) + 1);
      FUN_180195e10(lVar4,"crypto\\x509v3\\v3_utl.c",0x41d);
      lVar4 = 0;
      if ((((iVar2 != 0) && (iVar1 == iVar2)) && (lVar5 = FUN_1801bc530(), lVar5 != 0)) &&
         (iVar1 = FUN_1801dfa10(lVar5,local_38,iVar2 + iVar1), iVar1 != 0)) {
        return lVar5;
      }
    }
    FUN_180195e10(lVar4,"crypto\\x509v3\\v3_utl.c",0x42c);
    FUN_1801bc3c0(lVar5);
  }
  return 0;
}



// ===== FUN_1801e2b10 @ 1801e2b10 (size 390)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801e2b10(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t _Size;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  int local_24;
  int local_20;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x1801e2b25;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_68;
  pcVar3 = strchr(param_2,0x3a);
  if (pcVar3 == (char *)0x0) {
    iVar2 = FUN_1801e37c0(param_1,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    return 4;
  }
  local_24 = -1;
  local_28 = 0;
  local_20 = 0;
  local_48 = &local_38;
  iVar1 = FUN_1801e9610(param_2,0x3a,0,FUN_1801e38b0);
  iVar2 = local_28;
  if (iVar1 == 0) {
    return 0;
  }
  _Size = (size_t)local_24;
  if (local_24 == -1) {
    if (local_28 != 0x10) {
      return 0;
    }
  }
  else {
    if (local_28 == 0x10) {
      return 0;
    }
    if (3 < local_20) {
      return 0;
    }
    if (local_20 == 3) {
      if (0 < local_28) {
        return 0;
      }
    }
    else if (local_20 == 2) {
      if ((local_24 != 0) && (local_24 != local_28)) {
        return 0;
      }
    }
    else {
      if (local_24 == 0) {
        return 0;
      }
      if (local_24 == local_28) {
        return 0;
      }
    }
    if (-1 < local_24) {
      memcpy(param_1,&local_38,_Size);
      memset((void *)(_Size + (longlong)param_1),0,(longlong)(0x10 - iVar2));
      if (local_28 == local_24) {
        return 0x10;
      }
      memcpy((void *)(((longlong)local_24 - (longlong)local_28) + 0x10 + (longlong)param_1),
             (void *)((longlong)&local_38 + (longlong)local_24),(longlong)(local_28 - local_24));
      return 0x10;
    }
  }
  *param_1 = local_38;
  param_1[1] = uStack_30;
  return 0x10;
}



// ===== FUN_1801e2ca0 @ 1801e2ca0 (size 315)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e2ca0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1801e2cac;
  iVar2 = FUN_180198b90();
  if (iVar2 < 0x80) {
    lVar4 = FUN_180199640();
    return lVar4;
  }
  pcVar5 = (char *)FUN_1801998b0(param_1);
  if (pcVar5 == (char *)0x0) {
    return 0;
  }
  cVar1 = *pcVar5;
  pcVar6 = pcVar5;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  iVar2 = (uVar3 & 0x7fffffff) + 3;
  lVar4 = FUN_180195dc0(iVar2,"crypto\\x509v3\\v3_utl.c",0x94);
  if (lVar4 == 0) {
    FUN_1801a70c0(0x22,0xa7,0x41,"crypto\\x509v3\\v3_utl.c",0x96,uVar8);
    FUN_180195e10(pcVar5,"crypto\\x509v3\\v3_utl.c",0x97);
    return 0;
  }
  pcVar6 = pcVar5 + 1;
  if (*pcVar5 != '-') {
    pcVar6 = pcVar5;
  }
  puVar7 = &DAT_180331620;
  if (*pcVar5 != '-') {
    puVar7 = &DAT_18030be34;
  }
  FUN_1801ba810(lVar4,puVar7,iVar2);
  FUN_1801ba790(lVar4,pcVar6,iVar2);
  FUN_180195e10(pcVar5,"crypto\\x509v3\\v3_utl.c",0xa3);
  return lVar4;
}



// ===== FUN_1801e2de0 @ 1801e2de0 (size 392)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801e2de0(int *param_1,int param_2,code *param_3,undefined4 param_4,void *param_5,
                 size_t param_6,longlong *param_7)

{
  void *_Buf1;
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined8 uVar4;
  
  uVar4 = 0x1801e2df8;
  _Buf1 = *(void **)(param_1 + 2);
  if (_Buf1 != (void *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (param_2 < 1) {
        iVar1 = FUN_18019b460(&local_res8,param_1);
        if (iVar1 < 0) {
          return -1;
        }
        iVar2 = (*param_3)(local_res8,(longlong)iVar1,param_5,param_6,param_4,uVar4);
        if ((0 < iVar2) && (param_7 != (longlong *)0x0)) {
          lVar3 = FUN_1801ba390(local_res8,(longlong)iVar1,"crypto\\x509v3\\v3_utl.c",0x354);
          *param_7 = lVar3;
          if (lVar3 == 0) {
            FUN_180195e10(local_res8,"crypto\\x509v3\\v3_utl.c",0x356);
            return -1;
          }
        }
        FUN_180195e10(local_res8,"crypto\\x509v3\\v3_utl.c",0x35a);
        return iVar2;
      }
      if (param_2 == param_1[1]) {
        if (param_2 == 0x16) {
          iVar1 = (*param_3)(_Buf1,(longlong)iVar1,param_5,param_6,param_4,0x1801e2df8);
          if (iVar1 < 1) {
            return iVar1;
          }
        }
        else {
          if (iVar1 != (int)param_6) {
            return 0;
          }
          iVar1 = memcmp(_Buf1,param_5,param_6);
          if (iVar1 != 0) {
            return 0;
          }
          iVar1 = 1;
        }
        if (param_7 == (longlong *)0x0) {
          return iVar1;
        }
        lVar3 = FUN_1801ba390(*(undefined8 *)(param_1 + 2),(longlong)*param_1,
                              "crypto\\x509v3\\v3_utl.c",0x343);
        *param_7 = lVar3;
        if (lVar3 == 0) {
          return -1;
        }
        return iVar1;
      }
    }
  }
  return 0;
}



// ===== FUN_1801e2f70 @ 1801e2f70 (size 612)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801e2f70(undefined8 param_1,char *param_2,ulonglong param_3,uint param_4,int param_5,
                       undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  longlong lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  char *pcVar14;
  int iVar15;
  int local_res20;
  
  bVar2 = false;
  local_res20 = 0;
  param_4 = param_4 & 0xffff7fff;
  iVar7 = 0;
  uVar6 = 0;
  if (param_5 == 1) {
    iVar7 = 0x30;
    uVar11 = 0x16;
    local_res20 = 0x30;
    pcVar8 = FUN_1801e3260;
  }
  else if (param_5 == 2) {
    iVar7 = 0xd;
    local_res20 = 0xd;
    if ((1 < param_3) && (*param_2 == '.')) {
      param_4 = param_4 | 0x8000;
    }
    pcVar8 = FUN_1801e3330;
    uVar11 = 0x16;
    if ((param_4 & 2) == 0) {
      pcVar8 = FUN_1801e33f0;
    }
  }
  else {
    uVar11 = 4;
    pcVar8 = FUN_1801e31e0;
  }
  if (param_3 == 0) {
    cVar1 = *param_2;
    pcVar14 = param_2;
    for (uVar4 = 0; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
      pcVar14 = pcVar14 + 1;
      cVar1 = *pcVar14;
    }
    param_3 = (ulonglong)(uVar4 & 0x7fffffff);
  }
  lVar9 = FUN_1801a3d30(param_1,0x55,0);
  if (lVar9 != 0) {
    iVar15 = 0;
    iVar5 = FUN_1801958b0(lVar9);
    uVar4 = 0;
    bVar3 = false;
    if (0 < iVar5) {
      do {
        bVar2 = bVar3;
        uVar6 = uVar4;
        piVar10 = (int *)FUN_180195ae0(lVar9,iVar15);
        if (*piVar10 == param_5) {
          bVar2 = true;
          uVar6 = FUN_1801e2de0(*(undefined8 *)(piVar10 + 2),uVar11,pcVar8,param_4,param_2,param_3,
                                param_6);
          if (uVar6 != 0) break;
        }
        iVar15 = iVar15 + 1;
        iVar7 = FUN_1801958b0(lVar9);
        uVar4 = uVar6;
        bVar3 = bVar2;
      } while (iVar15 < iVar7);
      iVar7 = local_res20;
    }
    FUN_1801a48f0(lVar9);
    if (uVar6 != 0) {
      return (ulonglong)uVar6;
    }
    if ((bVar2) && ((param_4 & 1) == 0)) {
      return 0;
    }
  }
  if ((iVar7 != 0) && ((param_4 & 0x20) == 0)) {
    uVar11 = FUN_1801a34d0(param_1);
    for (iVar5 = FUN_1801a3b40(uVar11,iVar7,0xffffffff); -1 < iVar5;
        iVar5 = FUN_1801a3b40(uVar11,iVar7,iVar5)) {
      uVar12 = FUN_1801a3af0(uVar11,iVar5);
      uVar12 = FUN_1801a3780(uVar12);
      uVar13 = FUN_1801e2de0(uVar12,0xffffffff,pcVar8,param_4,param_2,param_3,param_6);
      if ((int)uVar13 != 0) {
        return uVar13;
      }
    }
  }
  return 0;
}



// ===== FUN_1801e31e0 @ 1801e31e0 (size 125)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801e31e0(char *param_1,ulonglong param_2,void *param_3,ulonglong param_4,uint param_5)

{
  ulonglong uVar1;
  char *pcVar2;
  int iVar3;
  
  uVar1 = param_2;
  pcVar2 = param_1;
  if ((param_5 >> 0xf & 1) != 0) {
    for (; ((param_4 < uVar1 && (*pcVar2 != '\0')) && (((param_5 & 0x10) == 0 || (*pcVar2 != '.'))))
        ; pcVar2 = pcVar2 + 1) {
      uVar1 = uVar1 - 1;
    }
    if (uVar1 == param_4) {
      param_1 = pcVar2;
      param_2 = uVar1;
    }
  }
  if (param_2 == param_4) {
    iVar3 = memcmp(param_1,param_3,param_2);
    return iVar3 == 0;
  }
  return false;
}



// ===== FUN_1801e3260 @ 1801e3260 (size 193)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801e3260(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  char *pcVar1;
  int iVar2;
  size_t _Size;
  char *pcVar3;
  bool bVar4;
  
  if (param_2 == param_4) {
    _Size = param_2;
    if (param_2 != 0) {
      pcVar3 = (char *)((longlong)param_3 + param_2);
      do {
        pcVar3 = pcVar3 + -1;
        _Size = _Size - 1;
        pcVar1 = pcVar3 + ((longlong)param_1 - (longlong)param_3);
        if (pcVar3[(longlong)param_1 - (longlong)param_3] == '@') {
          pcVar3 = (char *)(_Size + (longlong)param_3);
LAB_1801e32d2:
          iVar2 = FUN_1801e3330(pcVar1,param_2 - _Size,pcVar3,param_2 - _Size,0,0x1801e3280);
          if (iVar2 == 0) goto LAB_1801e3304;
          break;
        }
        if (*pcVar3 == '@') goto LAB_1801e32d2;
      } while (_Size != 0);
    }
    if (_Size == 0) {
      _Size = param_2;
    }
    iVar2 = memcmp(param_1,param_3,_Size);
    bVar4 = iVar2 == 0;
  }
  else {
LAB_1801e3304:
    bVar4 = false;
  }
  return bVar4;
}



// ===== FUN_1801e3330 @ 1801e3330 (size 189)

undefined8
FUN_1801e3330(char *param_1,ulonglong param_2,char *param_3,ulonglong param_4,uint param_5)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  char cVar4;
  longlong lVar5;
  char cVar6;
  
  uVar2 = param_2;
  pcVar3 = param_1;
  if ((param_5 >> 0xf & 1) != 0) {
    for (; ((param_4 < uVar2 && (*pcVar3 != '\0')) && (((param_5 & 0x10) == 0 || (*pcVar3 != '.'))))
        ; pcVar3 = pcVar3 + 1) {
      uVar2 = uVar2 - 1;
    }
    if (uVar2 == param_4) {
      param_1 = pcVar3;
      param_2 = uVar2;
    }
  }
  if (param_2 != param_4) {
    return 0;
  }
  if (param_2 != 0) {
    lVar5 = (longlong)param_1 - (longlong)param_3;
    do {
      cVar1 = param_3[lVar5];
      cVar4 = *param_3;
      if (cVar1 == '\0') {
        return 0;
      }
      if (cVar1 != cVar4) {
        cVar6 = cVar4 + ' ';
        if (0x19 < (byte)(cVar4 + 0xbfU)) {
          cVar6 = cVar4;
        }
        cVar4 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar4 = cVar1;
        }
        if (cVar4 != cVar6) {
          return 0;
        }
      }
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return 1;
}



// ===== FUN_1801e33f0 @ 1801e33f0 (size 717)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801e33f0(longlong param_1,ulonglong param_2,char *param_3,ulonglong param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  longlong lVar13;
  undefined8 uVar14;
  
  uVar14 = 0x1801e3414;
  if ((param_4 < 2) || (*param_3 != '.')) {
    uVar11 = 0;
    pcVar12 = (char *)0x0;
    iVar6 = 0;
    uVar9 = 0;
    bVar2 = false;
    bVar4 = true;
    if (param_2 != 0) {
      do {
        cVar1 = *(char *)(uVar9 + param_1);
        if (cVar1 == '*') {
          if ((uVar9 == param_2 - 1) || (bVar3 = false, *(char *)(uVar9 + 1 + param_1) == '.')) {
            bVar3 = true;
          }
          if (((((pcVar12 != (char *)0x0) || (bVar2)) || (iVar6 != 0)) ||
              (((param_5 & 4) != 0 && ((!bVar4 || (!bVar3)))))) || ((!bVar4 && (!bVar3))))
          goto LAB_1801e3695;
          bVar4 = false;
          pcVar12 = (char *)(uVar9 + param_1);
        }
        else if ((((byte)(cVar1 + 0x9fU) < 0x1a) || ((byte)(cVar1 + 0xbfU) < 0x1a)) ||
                ((byte)(cVar1 - 0x30U) < 10)) {
          if (((bVar4) && (3 < param_2 - uVar9)) &&
             (iVar5 = _strnicmp((char *)(uVar9 + param_1),"xn--",4), iVar5 == 0)) {
            bVar2 = true;
          }
          bVar4 = false;
        }
        else if (cVar1 == '.') {
          if (bVar4) goto LAB_1801e3695;
          bVar2 = false;
          bVar4 = true;
          iVar6 = iVar6 + 1;
        }
        else if ((cVar1 != '-') || (bVar4)) goto LAB_1801e3695;
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_2);
    }
    if (((!bVar4) && (1 < iVar6)) && (pcVar12 != (char *)0x0)) {
      lVar13 = (longlong)pcVar12 - param_1;
      lVar8 = (param_2 - 1) + (param_1 - (longlong)pcVar12);
      if (((ulonglong)(lVar13 + lVar8) <= param_4) &&
         (iVar6 = FUN_1801e3330(param_1,lVar13,param_3,lVar13,param_5,uVar14), iVar6 != 0)) {
        pcVar10 = param_3 + (param_4 - lVar8);
        pcVar7 = param_3 + lVar13;
        iVar6 = FUN_1801e3330(pcVar10,lVar8,pcVar12 + 1,lVar8,param_5,uVar14);
        if (iVar6 != 0) {
          if ((lVar13 == 0) && (pcVar12[1] == '.')) {
            if (pcVar7 == pcVar10) {
              return 0;
            }
            bVar2 = false;
            if ((param_5 & 8) != 0) {
              bVar2 = true;
            }
          }
          else {
            bVar2 = false;
            if ((3 < param_4) && (iVar6 = _strnicmp(param_3,"xn--",4), iVar6 == 0)) {
              return 0;
            }
          }
          if ((pcVar10 != pcVar7 + 1) || (*pcVar7 != '*')) {
            for (; pcVar7 != pcVar10; pcVar7 = pcVar7 + 1) {
              cVar1 = *pcVar7;
              if (((0x2d < (byte)(cVar1 - 0x2dU)) ||
                  ((0x3ffffff01ff9U >> ((ulonglong)(byte)(cVar1 - 0x2dU) & 0x3f) & 1) == 0)) &&
                 (0x19 < (byte)(cVar1 + 0x9fU))) {
                if (!bVar2) {
                  return 0;
                }
                if (cVar1 != '.') {
                  return 0;
                }
              }
            }
          }
          uVar11 = 1;
        }
      }
      return uVar11;
    }
  }
LAB_1801e3695:
  uVar14 = FUN_1801e3330(param_1,param_2,param_3,param_4,param_5,uVar14);
  return uVar14;
}



// ===== FUN_1801e36c0 @ 1801e36c0 (size 124)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e36c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801e36cc;
  lVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = FUN_1801dbf10(param_2,0);
  if (lVar1 != 0) {
    lVar2 = FUN_1801e2ca0(lVar1);
    if (lVar2 != 0) goto LAB_1801e3726;
  }
  FUN_1801a70c0(0x22,0x79,0x41,"crypto\\x509v3\\v3_utl.c",0xb0,uVar3);
LAB_1801e3726:
  FUN_180198910(lVar1);
  return lVar2;
}



// ===== FUN_1801e3740 @ 1801e3740 (size 124)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e3740(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801e374c;
  lVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = FUN_1801dc100(param_2,0);
  if (lVar1 != 0) {
    lVar2 = FUN_1801e2ca0(lVar1);
    if (lVar2 != 0) goto LAB_1801e37a6;
  }
  FUN_1801a70c0(0x22,0x78,0x41,"crypto\\x509v3\\v3_utl.c",0xbe,uVar3);
LAB_1801e37a6:
  FUN_180198910(lVar1);
  return lVar2;
}



// ===== FUN_1801e37c0 @ 1801e37c0 (size 234)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e37c0(undefined1 *param_1,char *param_2)

{
  int iVar1;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_18;
  uint local_14;
  int local_10 [2];
  
  local_10[0] = -0x7fe1c830;
  local_10[1] = 1;
  iVar1 = sscanf(param_2,"%d.%d.%d.%d%n",(int *)&local_14,(int *)&local_18,(int *)local_res20,
                 (int *)local_res18,local_10);
  if ((((iVar1 != 4) || (0xff < local_14)) || (0xff < local_18)) ||
     ((0xff < local_res20[0] || (0xff < local_res18[0])))) {
    return 0;
  }
  if ((param_2[local_10[0]] == '\0') ||
     (iVar1 = FUN_1801baab0((int)param_2[local_10[0]],8), iVar1 != 0)) {
    *param_1 = (char)local_14;
    param_1[1] = (char)local_18;
    param_1[2] = (char)local_res20[0];
    param_1[3] = (char)local_res18[0];
    return 1;
  }
  return 0;
}



// ===== FUN_1801e38b0 @ 1801e38b0 (size 243)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801e38b0(undefined1 *param_1,int param_2,longlong param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar3 = *(int *)(param_3 + 0x10);
  lVar4 = (longlong)iVar3;
  if (iVar3 != 0x10) {
    if (param_2 == 0) {
      if (*(int *)(param_3 + 0x14) == -1) {
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
        *(int *)(param_3 + 0x14) = iVar3;
        return 1;
      }
      if (*(int *)(param_3 + 0x14) == iVar3) {
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
        return 1;
      }
    }
    else if (param_2 < 5) {
      uVar5 = 0;
      uVar2 = (longlong)param_2;
      while( true ) {
        uVar7 = uVar2;
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar6 = (int)uVar7 - 1;
        iVar3 = FUN_1801ba500(uVar1);
        if (iVar3 < 0) break;
        uVar5 = uVar5 << 4 | (int)(char)iVar3;
        uVar2 = (ulonglong)uVar6;
        if (uVar6 == 0) {
          *(char *)(lVar4 + 1 + param_3) = (char)uVar5;
          *(char *)(lVar4 + param_3) = (char)(uVar5 >> 8);
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 2;
          return uVar7 & 0xffffffff;
        }
      }
    }
    else if (((iVar3 < 0xd) && (param_1[param_2] == '\0')) &&
            (iVar3 = FUN_1801e37c0(lVar4 + param_3,param_1), iVar3 != 0)) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 4;
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801e39b0 @ 1801e39b0 (size 110)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801e39b0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  cVar1 = *param_2;
  pcVar4 = param_2;
  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  iVar3 = strncmp(param_1,param_2,(ulonglong)(uVar2 & 0x7fffffff));
  if (iVar3 == 0) {
    if ((param_1[uVar2 & 0x7fffffff] != '\0') && (param_1[uVar2 & 0x7fffffff] != '.')) {
      return 1;
    }
    iVar3 = 0;
  }
  return iVar3;
}



// ===== FUN_1801e3a20 @ 1801e3a20 (size 383)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e3a20(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  char *pcVar6;
  undefined4 uVar7;
  longlong local_res10;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1801e3a30;
  local_res10 = 0;
  if (param_2 == (char *)0x0) {
    FUN_1801a70c0(0x22,0x6c,0x6d,"crypto\\x509v3\\v3_utl.c",0xca,0x1801e3a30);
    return 0;
  }
  local_res10 = FUN_180198b30();
  if (local_res10 == 0) {
    FUN_1801a70c0(0x22,0x6c,0x41,"crypto\\x509v3\\v3_utl.c",0xcf,uVar9);
    return 0;
  }
  cVar1 = *param_2;
  if (cVar1 != '-') {
    cVar5 = cVar1;
  }
  else {
    cVar5 = param_2[1];
  }
  bVar2 = cVar1 == '-';
  pcVar6 = param_2 + 1;
  if (cVar1 != '-') {
    pcVar6 = param_2;
  }
  if ((cVar5 == '0') && ((pcVar6[1] + 0xa8U & 0xdf) == 0)) {
    pcVar6 = pcVar6 + 2;
    iVar3 = FUN_180199d10(&local_res10,pcVar6);
  }
  else {
    iVar3 = FUN_180199b40(&local_res10,pcVar6);
  }
  if ((iVar3 == 0) || (pcVar6[iVar3] != '\0')) {
    FUN_180198910(local_res10);
    uVar7 = 100;
    uVar8 = 0xe5;
  }
  else {
    if ((bVar2) && (iVar3 = FUN_180198a80(local_res10), iVar3 != 0)) {
      bVar2 = false;
    }
    lVar4 = FUN_1801dc120(local_res10,0);
    FUN_180198910(local_res10);
    if (lVar4 != 0) {
      if (bVar2) {
        *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x100;
      }
      return lVar4;
    }
    uVar8 = 0xf0;
    uVar7 = 0x65;
  }
  FUN_1801a70c0(0x22,0x6c,uVar7,"crypto\\x509v3\\v3_utl.c",uVar8);
  return 0;
}



// ===== FUN_1801e3ba0 @ 1801e3ba0 (size 183)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_1801e3ba0(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
LAB_1801e3be4:
    if (*param_1 != '\0') {
      uVar3 = 0;
      pcVar4 = param_1;
      do {
        if (0x7fffffff < uVar3) break;
        pcVar4 = pcVar4 + 1;
        uVar3 = uVar3 + 1;
      } while (*pcVar4 != '\0');
      for (pcVar4 = param_1 + ((ulonglong)(uVar3 & 0x7fffffff) - 1); pcVar4 != param_1;
          pcVar4 = pcVar4 + -1) {
        iVar2 = FUN_1801baab0((int)*pcVar4,8);
        if (iVar2 == 0) {
          if (param_1 != pcVar4) {
            pcVar4[1] = '\0';
          }
          break;
        }
      }
      if (*param_1 != '\0') {
        return param_1;
      }
    }
  }
  else {
    do {
      iVar2 = FUN_1801baab0((int)cVar1,8);
      if (iVar2 == 0) goto LAB_1801e3be4;
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  return (char *)0x0;
}



// ===== FUN_1801e3c60 @ 1801e3c60 (size 382)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e3c60(longlong param_1,void *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1801e3c84;
  lVar1 = *param_4;
  puVar6 = (undefined8 *)0x0;
  lVar3 = 0;
  lVar5 = 0;
  if ((((param_1 == 0) ||
       (lVar3 = FUN_1801ba320(param_1,"crypto\\x509v3\\v3_utl.c",0x2d), lVar3 != 0)) &&
      (((param_2 == (void *)0x0 || (param_3 == 0)) ||
       ((pvVar4 = memchr(param_2,0,param_3 - 1), pvVar4 == (void *)0x0 &&
        (lVar5 = FUN_1801ba390(param_2,param_3,"crypto\\x509v3\\v3_utl.c",0x36), lVar5 != 0)))))) &&
     (puVar6 = (undefined8 *)FUN_180195dc0(0x18,"crypto\\x509v3\\v3_utl.c"),
     puVar6 != (undefined8 *)0x0)) {
    if (lVar1 == 0) {
      lVar7 = FUN_1801957e0();
      *param_4 = lVar7;
      if (lVar7 == 0) goto LAB_1801e3d4c;
    }
    *puVar6 = 0;
    puVar6[1] = lVar3;
    puVar6[2] = lVar5;
    iVar2 = FUN_180195990(*param_4,puVar6);
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_1801e3d4c:
  FUN_1801a70c0(0x22,0xae,0x41,"crypto\\x509v3\\v3_utl.c",0x45,uVar8);
  if (lVar1 == 0) {
    FUN_180195650(*param_4);
    *param_4 = 0;
  }
  FUN_180195e10(puVar6,"crypto\\x509v3\\v3_utl.c",0x4a);
  FUN_180195e10(lVar3,"crypto\\x509v3\\v3_utl.c",0x4b);
  FUN_180195e10(lVar5,"crypto\\x509v3\\v3_utl.c",0x4c);
  return 0;
}



// ===== FUN_1801e3e70 @ 1801e3e70 (size 73)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e3e70(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1801e1ec0(&DAT_1803318a4,*param_2,local_res18);
  FUN_1801e1f40("pathlen",*(undefined8 *)(param_2 + 2),local_res18);
  return local_res18[0];
}



// ===== FUN_1801e3ec0 @ 1801e3ec0 (size 406)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e3ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar3 = FUN_1801bf3f0(&DAT_180331850);
  if (lVar3 == 0) {
    FUN_1801a70c0(0x22,0x66,0x41,"crypto\\x509v3\\v3_bcons.c",0x3f);
    return 0;
  }
  iVar7 = 0;
  iVar2 = FUN_1801958b0(param_3);
  if (0 < iVar2) {
    do {
      puVar4 = (undefined8 *)FUN_180195ae0(param_3,iVar7);
      pcVar1 = (char *)puVar4[1];
      if (((*pcVar1 == DAT_1803318a4) && (pcVar1[1] == DAT_1803318a5)) &&
         (pcVar1[2] == DAT_1803318a6)) {
        iVar2 = FUN_1801e20b0(puVar4,lVar3);
      }
      else {
        lVar5 = 0;
        do {
          lVar6 = lVar5 + 1;
          if (pcVar1[lVar5] != "pathlen"[lVar5]) {
            FUN_1801a70c0(0x22,0x66,0x6a,"crypto\\x509v3\\v3_bcons.c",0x4b);
            FUN_1801a6360(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
            goto LAB_1801e4040;
          }
          lVar5 = lVar6;
        } while (lVar6 != 8);
        iVar2 = FUN_1801e2320(puVar4,lVar3 + 8);
      }
      if (iVar2 == 0) {
LAB_1801e4040:
        FUN_1801bfa90(lVar3,&DAT_180331850);
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar2 = FUN_1801958b0(param_3);
    } while (iVar7 < iVar2);
  }
  return lVar3;
}



// ===== FUN_1801e4080 @ 1801e4080 (size 149)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e4080(LPCWSTR param_1)

{
  BOOL BVar1;
  undefined8 *puVar2;
  HMODULE local_res8 [4];
  undefined8 uVar3;
  
  uVar3 = 0x1801e408c;
  local_res8[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(5,param_1,local_res8);
  if (BVar1 != 0) {
    puVar2 = (undefined8 *)FUN_180195dc0(0x10,"crypto\\init.c",0x327);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      puVar2[1] = DAT_1803c9458;
      DAT_1803c9458 = puVar2;
      return 1;
    }
    FUN_1801a70c0(0xf,0x72,0x41,"crypto\\init.c",0x328,uVar3);
  }
  return 0;
}



// ===== FUN_1801e4120 @ 1801e4120 (size 1026)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e4120(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_1803c9450 == 0) {
    iVar1 = FUN_1801addb0(&DAT_1803c9454,FUN_1801e4660);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = DAT_1803c946c;
    }
    if (iVar2 != 0) {
      if ((param_1 >> 0x12 & 1) == 0) {
        if ((param_1 >> 0x13 & 1) == 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c9470,FUN_1801e48e0);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c9474;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        else {
          iVar1 = FUN_1801addb0(&DAT_1803c9470,&LAB_1801e48d0);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c9474;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        iVar1 = FUN_1801addb0(&DAT_1803c9478,FUN_1801e4810);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = DAT_1803c947c;
        }
        if (iVar2 == 0) {
          return 0;
        }
        if ((param_1 & 1) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c9480,&LAB_1801e48c0);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c9484;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 2) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c9480,FUN_1801e4850);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c9484;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 0x10) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c9488,&LAB_1801e4870);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c948c;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 4) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c9488,FUN_1801e45c0);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c948c;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 0x20) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c9490,&LAB_1801e4880);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c9494;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 8) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c9490,FUN_1801e45f0);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c9494;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if (((param_1 >> 0x11 & 1) != 0) && (iVar2 = FUN_180077ce0(), iVar2 == 0)) {
          return 0;
        }
        if ((char)param_1 < '\0') {
          iVar1 = FUN_1801addb0(&DAT_1803c9498,FUN_1801e4890);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c94a8;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 0x40) != 0) {
          FUN_1801add90(DAT_1803c9460);
          DAT_1803c94a0 = param_2;
          iVar1 = FUN_1801addb0(&DAT_1803c9498,FUN_1801e46f0);
          DAT_1803c94a0 = 0;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c94a8;
          }
          FUN_1801ade50(DAT_1803c9460);
          if (iVar2 < 1) {
            return 0;
          }
        }
        if ((param_1 >> 8 & 1) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c94ac,FUN_1801e4620);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c94b4;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 >> 0xb & 1) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c94b8,FUN_1801e4780);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c94bc;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 >> 9 & 1) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c94c0,FUN_1801e47e0);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c94c4;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 >> 10 & 1) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c94c8,FUN_1801e4750);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c94cc;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 >> 0xe & 1) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c94d0,FUN_1801e47b0);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c94d4;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 >> 0xd & 1) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c94d8,FUN_1801e4720);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c94dc;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 0xfe00) != 0) {
          FUN_1801ac4d0();
        }
        if ((param_1 >> 0x10 & 1) != 0) {
          iVar1 = FUN_1801addb0(&DAT_1803c94e0,&LAB_1801e4ac0);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = DAT_1803c94e8;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  else if ((param_1 >> 0x12 & 1) == 0) {
    FUN_1801a70c0(0xf,0x74,0x46,"crypto\\init.c",0x267,0x1801e4135);
  }
  return 0;
}



// ===== FUN_1801e4530 @ 1801e4530 (size 133)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e4530(void)

{
  int *piVar1;
  
  if (DAT_1803be978 != -1) {
    piVar1 = (int *)FUN_1801adc80(&DAT_1803be978);
    FUN_1801ade20(&DAT_1803be978,0);
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_180215230();
      }
      if (piVar1[1] != 0) {
        FUN_1801a7410();
      }
      if (piVar1[2] != 0) {
        FUN_1801b85e0();
      }
      FUN_180195e10(piVar1,"crypto\\init.c",0x1c0);
      return;
    }
  }
  return;
}



// ===== FUN_1801e4660 @ 1801e4660 (size 134)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e4660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_res8 [8];
  
  iVar1 = FUN_1801adcc0(local_res8,FUN_1801e4910,param_3,param_4,0x1801e466a);
  if (iVar1 != 0) {
    DAT_1803c9460 = FUN_1801add30();
    if (DAT_1803c9460 != 0) {
      FUN_1801aed60();
      DAT_1803be978 = local_res8[0];
      DAT_1803c9468 = 1;
      DAT_1803c946c = 1;
      return;
    }
    FUN_1801adcf0(0);
    DAT_1803c9460 = 0;
    FUN_1801adc20(local_res8);
  }
  DAT_1803c946c = 0;
  return;
}



// ===== FUN_1801e4910 @ 1801e4910 (size 81)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e4910(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_180215230();
    }
    if (param_1[1] != 0) {
      FUN_1801a7410();
    }
    if (param_1[2] != 0) {
      FUN_1801b85e0();
    }
    FUN_180195e10(param_1,"crypto\\init.c",0x1c0);
  }
  return;
}



// ===== FUN_1801e4970 @ 1801e4970 (size 332)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e4970(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_1803c9450 == 0) {
    iVar1 = FUN_1801addb0(&DAT_1803c9454,FUN_1801e4660);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = DAT_1803c946c;
    }
    if (iVar2 != 0) {
      iVar1 = FUN_1801addb0(&DAT_1803c9470,FUN_1801e48e0);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = DAT_1803c9474;
      }
      if (iVar2 != 0) {
        iVar1 = FUN_1801addb0(&DAT_1803c9478,FUN_1801e4810);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = DAT_1803c947c;
        }
        if (iVar2 != 0) {
          puVar3 = (undefined4 *)FUN_1801adc80(&DAT_1803be978);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)FUN_180196100(0xc,"crypto\\init.c",0x42);
            if (puVar3 == (undefined4 *)0x0) {
              return 0;
            }
            iVar2 = FUN_1801ade20(&DAT_1803be978,puVar3);
            if (iVar2 == 0) {
              FUN_180195e10(puVar3,"crypto\\init.c",0x44);
              return 0;
            }
          }
          if ((param_1 & 1) != 0) {
            *puVar3 = 1;
          }
          if ((param_1 & 2) != 0) {
            puVar3[1] = 1;
          }
          if ((param_1 & 4) != 0) {
            puVar3[2] = 1;
          }
          return 1;
        }
      }
    }
  }
  else {
    FUN_1801a70c0(0xf,0x74,0x46,"crypto\\init.c",0x267,0x1801e4980);
  }
  return 0;
}



// ===== FUN_1801e4ae0 @ 1801e4ae0 (size 292)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e4ae0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [8];
  
  if ((DAT_1803c9468 != 0) && (DAT_1803c9450 == 0)) {
    DAT_1803c9450 = 1;
    uVar3 = FUN_1801adc80(&DAT_1803be978);
    FUN_1801ade20(&DAT_1803be978,0);
    FUN_1801e4910(uVar3);
    puVar2 = DAT_1803c9458;
    while (puVar2 != (undefined8 *)0x0) {
      (*(code *)*puVar2)();
      puVar1 = (undefined8 *)puVar2[1];
      FUN_180195e10(puVar2,"crypto\\init.c",0x209);
      puVar2 = puVar1;
    }
    DAT_1803c9458 = (undefined8 *)0x0;
    FUN_1801adcf0(DAT_1803c9460);
    DAT_1803c9460 = 0;
    if (DAT_1803c94e4 != 0) {
      _guard_check_icall();
    }
    if (DAT_1803c94b0 != 0) {
      FUN_180215200();
    }
    local_res8[0] = DAT_1803be978;
    DAT_1803be978 = 0xffffffff;
    FUN_1801adc20(local_res8);
    FUN_1801942e0();
    FUN_1801b8730();
    FUN_1801e9750();
    FUN_1801abdf0();
    FUN_18021a270();
    FUN_1801ae720();
    FUN_18018ddf0();
    FUN_1801dcf60();
    FUN_1801ba1f0();
    FUN_1801a7350();
    FUN_180077ce0();
    DAT_1803c9468 = 0;
  }
  return 0;
}



// ===== FUN_1801e4c10 @ 1801e4c10 (size 339)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e4c10(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 0xd) = 0;
  plVar6 = (longlong *)FUN_1801e5250(param_1,param_2,local_res8);
  puVar1 = (undefined8 *)*plVar6;
  if (puVar1 == (undefined8 *)0x0) {
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
    return 0;
  }
  *plVar6 = puVar1[1];
  uVar2 = *puVar1;
  FUN_180195e10(puVar1,"crypto\\lhash\\lhash.c",0x90);
  *(int *)((longlong)param_1 + 0x54) = *(int *)((longlong)param_1 + 0x54) + 1;
  iVar5 = (int)param_1[6] + -1;
  *(int *)(param_1 + 6) = iVar5;
  if ((0x10 < *(uint *)(param_1 + 3)) &&
     ((uint)(iVar5 * 0x100) / *(uint *)(param_1 + 3) <= *(uint *)((longlong)param_1 + 0x2c))) {
    uVar8 = (ulonglong)(uint)((int)param_1[4] + *(int *)((longlong)param_1 + 0x24) + -1);
    uVar3 = *(undefined8 *)(*param_1 + uVar8 * 8);
    *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
    iVar5 = (int)param_1[4];
    lVar7 = *param_1;
    if (iVar5 == 0) {
      lVar7 = FUN_180195e50(lVar7,*(int *)((longlong)param_1 + 0x24) << 3,"crypto\\lhash\\lhash.c",
                            0x10c);
      if (lVar7 == 0) {
        *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
        return uVar2;
      }
      *(int *)(param_1 + 8) = (int)param_1[8] + 1;
      *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) >> 1;
      *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) >> 1;
      iVar5 = *(int *)((longlong)param_1 + 0x24);
      *param_1 = lVar7;
    }
    iVar5 = iVar5 + -1;
    *(int *)(param_1 + 4) = iVar5;
    *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + 1;
    lVar4 = *(longlong *)(lVar7 + (longlong)iVar5 * 8);
    if (lVar4 == 0) {
      *(undefined8 *)(lVar7 + (longlong)iVar5 * 8) = uVar3;
      return uVar2;
    }
    for (lVar7 = *(longlong *)(lVar4 + 8); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 8)) {
      lVar4 = lVar7;
    }
    *(undefined8 *)(lVar4 + 8) = uVar3;
  }
  return uVar2;
}



// ===== FUN_1801e4d70 @ 1801e4d70 (size 109)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e4d70(longlong *param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_1 != (longlong *)0x0) &&
     (iVar3 = (int)param_1[3] + -1, lVar4 = (longlong)iVar3, -1 < iVar3)) {
    do {
      puVar2 = *(undefined8 **)(*param_1 + lVar4 * 8);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar2[1];
        (*param_2)(*puVar2);
        puVar2 = puVar1;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// ===== FUN_1801e4de0 @ 1801e4de0 (size 133)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e4de0(longlong *param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_1 != (longlong *)0x0) &&
     (iVar3 = (int)param_1[3] + -1, lVar4 = (longlong)iVar3, -1 < iVar3)) {
    do {
      puVar2 = *(undefined8 **)(*param_1 + lVar4 * 8);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar2[1];
        (*param_2)(*puVar2,param_3);
        puVar2 = puVar1;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// ===== FUN_1801e4e70 @ 1801e4e70 (size 159)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e4e70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar4 = 0;
    if ((int)param_1[3] != 0) {
      do {
        lVar2 = *(longlong *)(*param_1 + uVar4 * 8);
        while (lVar2 != 0) {
          lVar1 = *(longlong *)(lVar2 + 8);
          FUN_180195e10(lVar2,"crypto\\lhash\\lhash.c",0x58);
          lVar2 = lVar1;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 3));
    }
    FUN_180195e10(*param_1,"crypto\\lhash\\lhash.c",0x5c);
    FUN_180195e10(param_1,"crypto\\lhash\\lhash.c",0x5d);
  }
  return;
}



// ===== FUN_1801e4f10 @ 1801e4f10 (size 372)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e4f10(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 local_res8 [2];
  
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  uVar11 = *(uint *)(param_1 + 3);
  if ((uint)((int)param_1[6] << 8) / uVar11 < *(uint *)(param_1 + 5)) {
LAB_1801e500d:
    plVar9 = (longlong *)FUN_1801e5250(param_1,param_2,local_res8);
    puVar10 = (undefined8 *)*plVar9;
    if (puVar10 != (undefined8 *)0x0) {
      uVar7 = *puVar10;
      *puVar10 = param_2;
      *(int *)(param_1 + 10) = (int)param_1[10] + 1;
      goto LAB_1801e506d;
    }
    puVar10 = (undefined8 *)FUN_180195dc0(0x18,"crypto\\lhash\\lhash.c");
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = param_2;
      puVar10[1] = 0;
      *(undefined4 *)(puVar10 + 2) = local_res8[0];
      *plVar9 = (longlong)puVar10;
      *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + 1;
      *(int *)(param_1 + 6) = (int)param_1[6] + 1;
      goto LAB_1801e506d;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 4);
    uVar3 = *(uint *)((longlong)param_1 + 0x24);
    uVar4 = *(uint *)((longlong)param_1 + 0x1c);
    uVar5 = uVar2 + 1;
    if (uVar5 < uVar3) {
LAB_1801e4fb5:
      *(uint *)(param_1 + 4) = uVar5;
      lVar6 = *param_1;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar9 = (longlong *)(lVar6 + (ulonglong)uVar2 * 8);
      *(uint *)(param_1 + 3) = uVar11 + 1;
      uVar8 = (ulonglong)(uVar3 + uVar2);
      *(undefined8 *)(lVar6 + uVar8 * 8) = 0;
      lVar12 = *plVar9;
      plVar1 = (longlong *)(lVar6 + uVar8 * 8);
      if (lVar12 != 0) {
        do {
          if (*(uint *)(lVar12 + 0x10) % uVar4 == uVar2) {
            plVar9 = (longlong *)(lVar12 + 8);
          }
          else {
            *plVar9 = *(longlong *)(lVar12 + 8);
            *(longlong *)(lVar12 + 8) = *plVar1;
            *plVar1 = lVar12;
          }
          lVar12 = *plVar9;
        } while (lVar12 != 0);
      }
      goto LAB_1801e500d;
    }
    lVar6 = FUN_180195e50(*param_1,(ulonglong)(uVar4 * 2) << 3,"crypto\\lhash\\lhash.c",0xe1);
    if (lVar6 != 0) {
      *param_1 = lVar6;
      memset((void *)(lVar6 + (ulonglong)uVar4 * 8),0,(ulonglong)uVar4 << 3);
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      uVar5 = 0;
      uVar11 = *(uint *)(param_1 + 3);
      *(uint *)((longlong)param_1 + 0x24) = uVar4;
      *(uint *)((longlong)param_1 + 0x1c) = uVar4 * 2;
      goto LAB_1801e4fb5;
    }
  }
  *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
  uVar7 = 0;
LAB_1801e506d:
  return uVar7;
}



// ===== FUN_1801e5090 @ 1801e5090 (size 234)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801e5090(code *param_1,code *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_180196100(0x70,"crypto\\lhash\\lhash.c",0x33);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_180196100(0x80,"crypto\\lhash\\lhash.c");
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(plVar1 + 3) = 8;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = 0x10;
      if (param_2 == (code *)0x0) {
        param_2 = strcmp;
      }
      *(undefined4 *)((longlong)plVar1 + 0x24) = 8;
      plVar1[1] = (longlong)param_2;
      *(undefined4 *)(plVar1 + 5) = 0x200;
      if (param_1 == (code *)0x0) {
        param_1 = FUN_1801e51e0;
      }
      *(undefined4 *)((longlong)plVar1 + 0x2c) = 0x100;
      plVar1[2] = (longlong)param_1;
      return plVar1;
    }
    FUN_180195e10(0,"crypto\\lhash\\lhash.c",0x47);
    FUN_180195e10(plVar1,"crypto\\lhash\\lhash.c",0x48);
  }
  return (longlong *)0x0;
}



// ===== FUN_1801e5190 @ 1801e5190 (size 73)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e5190(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_res8 [32];
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  plVar2 = (longlong *)FUN_1801e5250(param_1,param_2,local_res8);
  if ((undefined8 *)*plVar2 == (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    return 0;
  }
  uVar1 = *(undefined8 *)*plVar2;
  LOCK();
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  UNLOCK();
  return uVar1;
}



// ===== FUN_1801e51e0 @ 1801e51e0 (size 109)

ulonglong FUN_1801e51e0(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = 0;
  if ((param_1 != (byte *)0x0) && (bVar3 = *param_1, bVar3 != 0)) {
    uVar5 = 0x100;
    do {
      param_1 = param_1 + 1;
      uVar4 = (int)(char)bVar3 | uVar5;
      uVar5 = uVar5 + 0x100;
      bVar1 = ((byte)(uVar4 >> 2) ^ bVar3) & 0xf;
      bVar3 = *param_1;
      uVar4 = ((uint)(uVar2 >> (0x20 - bVar1 & 0x3f)) | (int)uVar2 << bVar1) ^ uVar4 * uVar4;
      uVar2 = (ulonglong)uVar4;
    } while (bVar3 != 0);
    uVar2 = (ulonglong)(uVar4 ^ uVar4 >> 0x10);
  }
  return uVar2;
}



// ===== FUN_1801e5250 @ 1801e5250 (size 191)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1801e5250(longlong *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = (*(code *)param_1[2])(param_2);
  LOCK();
  *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + 1;
  UNLOCK();
  *param_3 = uVar4;
  uVar6 = uVar4 % *(uint *)((longlong)param_1 + 0x24);
  if (uVar6 < *(uint *)(param_1 + 4)) {
    uVar6 = uVar4 % *(uint *)((longlong)param_1 + 0x1c);
  }
  pcVar2 = (code *)param_1[1];
  puVar3 = *(undefined8 **)(*param_1 + (longlong)(int)uVar6 * 8);
  puVar1 = (undefined8 *)(*param_1 + (longlong)(int)uVar6 * 8);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return puVar1;
    }
    LOCK();
    *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + 1;
    UNLOCK();
    if (*(uint *)(puVar3 + 2) == uVar4) {
      LOCK();
      *(int *)(param_1 + 9) = (int)param_1[9] + 1;
      UNLOCK();
      iVar5 = (*pcVar2)(*puVar3,param_2);
      if (iVar5 == 0) {
        return puVar1;
      }
    }
    puVar1 = puVar3 + 1;
    puVar3 = (undefined8 *)puVar3[1];
  } while( true );
}



// ===== FUN_1801e5310 @ 1801e5310 (size 160)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801e5310(char *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  if ((param_1 == (char *)0x0) || (cVar1 = *param_1, cVar1 == '\0')) {
    return 0;
  }
  uVar5 = 0x100;
  do {
    uVar3 = FUN_1801baad0((int)cVar1);
    uVar6 = uVar3 | uVar5;
    param_1 = param_1 + 1;
    uVar5 = uVar5 + 0x100;
    bVar2 = ((byte)(uVar6 >> 2) ^ (byte)uVar3) & 0xf;
    cVar1 = *param_1;
    uVar3 = ((uint)(uVar4 >> (0x20 - bVar2 & 0x3f)) | (int)uVar4 << bVar2) ^ uVar6 * uVar6;
    uVar4 = (ulonglong)uVar3;
  } while (cVar1 != '\0');
  return uVar3 >> 0x10 ^ uVar3;
}



// ===== FUN_1801e53e0 @ 1801e53e0 (size 1100)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801e53e0(longlong param_1,int param_2,longlong param_3,int param_4,undefined1 param_5,
             int param_6,int param_7,void *param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  void *_Src;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  longlong local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_60 = 0;
  _Src = (void *)0x0;
  local_58 = (undefined1 *)0x0;
  local_50 = (undefined1 *)0x0;
  lVar4 = FUN_18019d560();
  if (lVar4 != 0) {
    iVar1 = FUN_1801afd40(param_9);
    lVar9 = (longlong)iVar1;
    iVar2 = FUN_1801afe40(param_9);
    if ((0 < iVar2) && (0 < iVar1)) {
      local_58 = (undefined1 *)FUN_180195dc0(lVar9,"crypto\\pkcs12\\p12_key.c",0x6a);
      _Src = (void *)FUN_180195dc0((longlong)iVar2,"crypto\\pkcs12\\p12_key.c",0x6b);
      local_60 = FUN_180195dc0((longlong)(iVar1 + 1),"crypto\\pkcs12\\p12_key.c",0x6c);
      iVar17 = param_4 + -1 + iVar1;
      iVar17 = iVar17 - iVar17 % iVar1;
      if (param_2 == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = param_2 + -1 + iVar1;
        iVar16 = iVar16 - iVar16 % iVar1;
      }
      lVar6 = (longlong)(iVar16 + iVar17);
      local_50 = (undefined1 *)FUN_180195dc0(lVar6,"crypto\\pkcs12\\p12_key.c");
      if ((((local_58 != (undefined1 *)0x0) && (_Src != (void *)0x0)) && (local_60 != 0)) &&
         (local_50 != (undefined1 *)0x0)) {
        if (0 < iVar1) {
          puVar10 = local_58;
          for (lVar7 = lVar9; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = param_5;
            puVar10 = puVar10 + 1;
          }
        }
        iVar1 = 0;
        puVar10 = local_50;
        if (0 < iVar17) {
          do {
            iVar11 = iVar1 + 1;
            *puVar10 = *(undefined1 *)(iVar1 % param_4 + param_3);
            puVar10 = puVar10 + 1;
            iVar1 = iVar11;
          } while (iVar11 < iVar17);
        }
        iVar1 = 0;
        if (0 < iVar16) {
          do {
            iVar17 = iVar1 + 1;
            *puVar10 = *(undefined1 *)(iVar1 % param_2 + param_1);
            puVar10 = puVar10 + 1;
            iVar1 = iVar17;
          } while (iVar17 < iVar16);
        }
        iVar1 = FUN_18019d050(lVar4,param_9,0);
        while (iVar1 != 0) {
          iVar17 = 1;
          iVar1 = FUN_18019d280(lVar4,local_58,lVar9);
          if (((iVar1 == 0) || (iVar1 = FUN_18019d280(lVar4,local_50,lVar6), iVar1 == 0)) ||
             (iVar1 = FUN_18019cf70(lVar4,_Src,0), iVar1 == 0)) break;
          if (1 < param_6) {
            do {
              iVar1 = FUN_18019d050(lVar4,param_9,0);
              if (((iVar1 == 0) || (iVar1 = FUN_18019d280(lVar4,_Src), iVar1 == 0)) ||
                 (iVar1 = FUN_18019cf70(lVar4,_Src), iVar1 == 0)) goto LAB_1801e578f;
              iVar17 = iVar17 + 1;
            } while (iVar17 < param_6);
          }
          iVar1 = iVar2;
          if (param_7 < iVar2) {
            iVar1 = param_7;
          }
          memcpy(param_8,_Src,(longlong)iVar1);
          if (param_7 <= iVar2) {
            uVar15 = 1;
            goto LAB_1801e57af;
          }
          param_8 = (void *)((longlong)param_8 + (longlong)iVar2);
          param_7 = param_7 - iVar2;
          lVar7 = 0;
          iVar1 = 0;
          if (0 < lVar9) {
            do {
              *(undefined1 *)(lVar7 + local_60) =
                   *(undefined1 *)((longlong)(iVar1 % iVar2) + (longlong)_Src);
              lVar7 = lVar7 + 1;
              iVar1 = iVar1 + 1;
            } while (lVar7 < lVar9);
          }
          lVar7 = 0;
          if (0 < lVar6) {
            lVar14 = local_60 - (longlong)local_50;
            uVar3 = 1;
            do {
              uVar8 = (ushort)uVar3;
              if (0 < lVar9) {
                pbVar5 = local_50 + lVar7 + lVar9 + -1;
                lVar13 = lVar9;
                do {
                  lVar12 = lVar13;
                  uVar8 = uVar8 + (ushort)pbVar5[lVar14] + (ushort)*pbVar5;
                  *pbVar5 = (byte)uVar8;
                  uVar8 = uVar8 >> 8;
                  lVar13 = lVar12 + -1;
                  pbVar5 = pbVar5 + -1;
                } while (lVar13 != 0);
                uVar3 = (undefined4)lVar12;
              }
              lVar7 = lVar7 + lVar9;
              lVar14 = lVar14 - lVar9;
            } while (lVar7 < lVar6);
          }
          iVar1 = FUN_18019d050(lVar4,param_9,0);
        }
      }
    }
  }
LAB_1801e578f:
  uVar15 = 0;
  FUN_1801a70c0(0x23,0x6f,0x41,"crypto\\pkcs12\\p12_key.c",0xa5);
LAB_1801e57af:
  FUN_180195e10(_Src,"crypto\\pkcs12\\p12_key.c",0xa8);
  FUN_180195e10(local_60,"crypto\\pkcs12\\p12_key.c",0xa9);
  FUN_180195e10(local_58,"crypto\\pkcs12\\p12_key.c",0xaa);
  FUN_180195e10(local_50,"crypto\\pkcs12\\p12_key.c",0xab);
  FUN_18019d520(lVar4);
  return uVar15;
}



// ===== FUN_1801e5830 @ 1801e5830 (size 232)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801e5830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801e5840;
  if (param_1 == 0) {
    local_res8[0] = 0;
    local_18 = 0;
  }
  else {
    lVar2 = FUN_1801a8160(param_1,param_2,&local_18,local_res8);
    if (lVar2 == 0) {
      FUN_1801a70c0(0x23,0x74,0x41,"crypto\\pkcs12\\p12_key.c",0x41);
      return 0;
    }
  }
  iVar1 = FUN_1801e53e0(local_18,local_res8[0],param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9);
  if (iVar1 < 1) {
    return 0;
  }
  FUN_180195f20(local_18,(longlong)local_res8[0],"crypto\\pkcs12\\p12_key.c",0x48);
  return iVar1;
}



// ===== FUN_1801e59c0 @ 1801e59c0 (size 86)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e59c0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1801b96c0(*param_1);
  if (iVar1 == 0x98) {
    iVar1 = FUN_1801b96c0(*(undefined8 *)param_1[1]);
    if (iVar1 == 0x9e) {
      uVar2 = FUN_1801a28b0();
      uVar2 = FUN_1801e6190(*(undefined8 *)(param_1[1] + 8),uVar2);
      return uVar2;
    }
  }
  return 0;
}



// ===== FUN_1801e5a20 @ 1801e5a20 (size 64)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e5a20(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1801b96c0(*param_1);
  if (iVar1 - 0x98U < 3) {
    uVar2 = FUN_1801b96c0(*(undefined8 *)param_1[1]);
    return uVar2;
  }
  return 0xffffffff;
}



// ===== FUN_1801e5aa0 @ 1801e5aa0 (size 102)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e5aa0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801e5aac;
  iVar1 = FUN_1801b96c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  if (iVar1 == 0x15) {
    uVar2 = FUN_1801a7960();
    uVar2 = FUN_1801e6190(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),uVar2);
    return uVar2;
  }
  FUN_1801a70c0(0x23,0x82,0x79,"crypto\\pkcs12\\p12_add.c",0x9f,uVar2);
  return 0;
}



// ===== FUN_1801e5b10 @ 1801e5b10 (size 94)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e5b10(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801e5b1c;
  iVar1 = FUN_1801b96c0(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x15) {
    uVar2 = FUN_1801a7970();
    uVar2 = FUN_1801e6190(*(undefined8 *)(param_1 + 0x20),uVar2);
    return uVar2;
  }
  FUN_1801a70c0(0x23,0x83,0x79,"crypto\\pkcs12\\p12_add.c",0x4c,uVar2);
  return 0;
}



// ===== FUN_1801e5b70 @ 1801e5b70 (size 147)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e5b70(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar2 = FUN_1801b96c0(*(undefined8 *)(param_1 + 0x18));
  if (iVar2 == 0x1a) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar3 = FUN_1801a7970();
    uVar3 = FUN_180213c50(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 8),
                          uVar3,param_2,param_3,*(undefined8 *)(lVar1 + 0x10),CONCAT44(uVar4,1));
    return uVar3;
  }
  return 0;
}



// ===== FUN_1801e5c10 @ 1801e5c10 (size 248)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801e5c10(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  int *local_78;
  code *local_70;
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801e5c1c;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_78 = (int *)CONCAT44(local_78._4_4_,0x9d);
    uVar2 = 0x6c;
  }
  else {
    local_70 = FUN_1801e5830;
    local_78 = local_68;
    iVar1 = FUN_1801e5d10();
    if (iVar1 != 0) {
      FUN_1801d2c80(**(undefined8 **)(param_1 + 8),0,&local_60);
      iVar1 = FUN_18019a410(local_60);
      if (local_68[0] != iVar1) {
        return 0;
      }
      uVar2 = FUN_18013ff80(local_60);
      iVar1 = FUN_1800012a0(local_58,uVar2,local_68[0]);
      if (iVar1 == 0) {
        return 1;
      }
      return 0;
    }
    local_78 = (int *)CONCAT44(local_78._4_4_,0xa2);
    uVar2 = 0x6d;
  }
  FUN_1801a70c0(0x23,0x7e,uVar2,"crypto\\pkcs12\\p12_mutl.c");
  return 0;
}



// ===== FUN_1801e5d10 @ 1801e5d10 (size 864)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1801e5d10(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  longlong local_160;
  int local_158;
  undefined4 *local_150;
  longlong local_148;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_b8 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_188;
  uVar13 = 0;
  local_110 = param_5;
  local_118 = FUN_1801e5830;
  if (param_6 != (code *)0x0) {
    local_118 = param_6;
  }
  lVar11 = 0;
  local_138 = param_3;
  local_130 = param_2;
  local_108 = param_4;
  iVar4 = FUN_1801b96c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  if (iVar4 != 0x15) {
    _local_168 = CONCAT44(uStack_164,0x5c);
    FUN_1801a70c0(0x23,0x6b,0x79,"crypto\\pkcs12\\p12_mutl.c");
    return 0;
  }
  puVar12 = *(undefined8 **)(param_1 + 8);
  uVar2 = *(undefined8 *)((undefined4 *)puVar12[1] + 2);
  uVar1 = *(undefined4 *)puVar12[1];
  if (puVar12[2] == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = FUN_1801dbfa0(puVar12[2]);
    puVar12 = *(undefined8 **)(param_1 + 8);
  }
  FUN_1801d2c80(*puVar12,&local_128,0);
  FUN_1801a1e10(&local_120,0,0,local_128);
  uVar6 = FUN_1801b96c0(local_120);
  uVar8 = FUN_1801b9610(uVar6);
  lVar9 = FUN_1801dcf20(uVar8);
  if (lVar9 == 0) {
    _local_168 = CONCAT44(uStack_164,0x69);
    FUN_1801a70c0(0x23,0x6b,0x76,"crypto\\pkcs12\\p12_mutl.c");
    return 0;
  }
  iVar4 = FUN_1801afe40(lVar9);
  iVar7 = FUN_18019a410(lVar9);
  if (iVar4 < 0) {
    return 0;
  }
  if (((iVar7 == 0x329) || (iVar7 - 0x3d6U < 2)) &&
     (lVar10 = FUN_1801d1970("LEGACY_GOST_PKCS12"), lVar10 == 0)) {
    iVar4 = 0x20;
    local_150 = local_b8;
    local_158 = 0x60;
    local_160 = lVar9;
    local_168 = uVar5;
    iVar7 = FUN_18021a330(local_130,local_138,uVar2,uVar1);
    if (iVar7 == 0) {
      local_168 = 0x77;
      FUN_1801a70c0(0x23,0x6b,0x6b,"crypto\\pkcs12\\p12_mutl.c");
      goto LAB_1801e5f8a;
    }
    local_f8 = local_78;
    uStack_f4 = uStack_74;
    uStack_f0 = uStack_70;
    uStack_ec = uStack_6c;
    local_e8 = local_68;
    uStack_e4 = uStack_64;
    uStack_e0 = uStack_60;
    uStack_dc = uStack_5c;
    FUN_180001240(local_b8,0x60);
  }
  else {
    local_150 = &local_f8;
    local_160 = CONCAT44(local_160._4_4_,uVar5);
    local_168 = 3;
    local_158 = iVar4;
    local_148 = lVar9;
    iVar7 = (*local_118)(local_130,local_138,uVar2,uVar1);
    if (iVar7 == 0) {
      local_168 = 0x7d;
      FUN_1801a70c0(0x23,0x6b,0x6b,"crypto\\pkcs12\\p12_mutl.c");
      goto LAB_1801e5f8a;
    }
  }
  lVar11 = FUN_18021ad70();
  if (lVar11 != 0) {
    local_168 = 0;
    uStack_164 = 0;
    iVar4 = FUN_18021af40(lVar11,&local_f8,iVar4,lVar9);
    if ((iVar4 != 0) &&
       (piVar3 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x20),
       iVar4 = FUN_18021b240(lVar11,*(undefined8 *)(piVar3 + 2),(longlong)*piVar3), iVar4 != 0)) {
      iVar4 = FUN_18021ae90(lVar11,local_108,local_110);
      uVar13 = 0;
      if (iVar4 != 0) {
        uVar13 = 1;
      }
    }
  }
LAB_1801e5f8a:
  FUN_180001240(&local_f8,0x40);
  FUN_18021ad00(lVar11);
  return uVar13;
}



// ===== FUN_1801e6070 @ 1801e6070 (size 280)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_1801e6070(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801e608b;
  if (((param_3 == (longlong *)0x0) || (piVar3 = (int *)*param_3, piVar3 == (int *)0x0)) &&
     (piVar3 = (int *)FUN_18019a420(), piVar3 == (int *)0x0)) {
    FUN_1801a70c0(0xd,0xc6,0x41,"crypto\\asn1\\asn_pack.c",0x16,uVar5);
  }
  else {
    FUN_180195e10(*(undefined8 *)(piVar3 + 2),"crypto\\asn1\\asn_pack.c",0x1d);
    piVar3[2] = 0;
    piVar3[3] = 0;
    iVar1 = FUN_1801c2350(param_1,piVar3 + 2,param_2);
    *piVar3 = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0x21;
      uVar4 = 0x70;
    }
    else {
      if (*(longlong *)(piVar3 + 2) != 0) {
        if ((param_3 != (longlong *)0x0) && (*param_3 == 0)) {
          *param_3 = (longlong)piVar3;
        }
        return piVar3;
      }
      uVar2 = 0x25;
      uVar4 = 0x41;
    }
    FUN_1801a70c0(0xd,0xc6,uVar4,"crypto\\asn1\\asn_pack.c",uVar2,uVar5);
    if ((param_3 == (longlong *)0x0) || (*param_3 == 0)) {
      FUN_18019a3a0(piVar3);
    }
  }
  return (int *)0x0;
}



// ===== FUN_1801e6190 @ 1801e6190 (size 91)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e6190(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  undefined8 uVar2;
  
  uVar2 = 0x1801e619c;
  local_res8[0] = *(undefined8 *)(param_1 + 2);
  lVar1 = FUN_1801bfef0(0,local_res8,*param_1,param_2);
  if (lVar1 == 0) {
    FUN_1801a70c0(0xd,199,0x6e,"crypto\\asn1\\asn_pack.c",0x3c,uVar2);
  }
  return lVar1;
}



// ===== FUN_1801e6210 @ 1801e6210 (size 429)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801e6210(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801e622a;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_c8;
  iVar8 = 0;
  iVar1 = FUN_1801958b0(param_2);
  lVar7 = param_3;
  lVar3 = param_3;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_180195ae0(param_2,iVar8);
      lVar3 = FUN_1801e8210(param_1,puVar2[1],lVar7);
      if (lVar3 == 0) {
LAB_1801e6352:
        local_a8 = CONCAT44(local_a8._4_4_,0x5e);
        FUN_1801a70c0(0x22,0x8a,0x41,"crypto\\x509v3\\v3_info.c");
        if ((param_3 == 0) && (lVar7 != 0)) {
          FUN_1801958f0(lVar7,FUN_1801e2040);
        }
        return 0;
      }
      lVar4 = FUN_180195ae0(lVar3,iVar8);
      FUN_18019b440(local_98,0x50,*puVar2);
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar7) != '\0');
      lVar6 = -1;
      do {
        lVar5 = lVar6 + 1;
        lVar9 = lVar6 + 1;
        lVar6 = lVar5;
      } while (local_98[lVar9] != '\0');
      lVar9 = (longlong)((int)lVar7 + (int)lVar5 + 4);
      lVar6 = FUN_180195dc0(lVar9,"crypto\\x509v3\\v3_info.c",0x52);
      lVar7 = lVar3;
      if (lVar6 == 0) goto LAB_1801e6352;
      local_a8 = *(undefined8 *)(lVar4 + 8);
      FUN_180196a10(lVar6,lVar9,"%s - %s",local_98);
      FUN_180195e10(*(undefined8 *)(lVar4 + 8),"crypto\\x509v3\\v3_info.c",0x56);
      *(longlong *)(lVar4 + 8) = lVar6;
      iVar8 = iVar8 + 1;
      iVar1 = FUN_1801958b0(param_2);
    } while (iVar8 < iVar1);
  }
  if ((param_3 == 0) && (lVar3 == 0)) {
    lVar3 = FUN_1801957e0();
  }
  return lVar3;
}



// ===== FUN_1801e63c0 @ 1801e63c0 (size 571)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e63c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 local_48 [8];
  char *local_40;
  undefined8 local_38;
  
  iVar2 = FUN_1801958b0(param_3);
  lVar3 = FUN_180195820(0,iVar2);
  if (lVar3 == 0) {
    FUN_1801a70c0(0x22,0x8b,0x41,"crypto\\x509v3\\v3_info.c",0x72);
    return 0;
  }
  iVar8 = 0;
  if (0 < iVar2) {
    do {
      lVar4 = FUN_180195ae0(param_3,iVar8);
      plVar5 = (longlong *)FUN_1801bf3f0(&DAT_180331b10);
      if (plVar5 == (longlong *)0x0) {
        uVar10 = 0x79;
LAB_1801e65cb:
        uVar9 = 0x41;
LAB_1801e65d1:
        FUN_1801a70c0(0x22,0x8b,uVar9,"crypto\\x509v3\\v3_info.c",uVar10);
LAB_1801e65e5:
        FUN_1801958f0(lVar3,FUN_1801e6600);
        return 0;
      }
      FUN_180195990(lVar3,plVar5);
      pcVar6 = strchr(*(char **)(lVar4 + 8),0x3b);
      if (pcVar6 == (char *)0x0) {
        uVar10 = 0x80;
        uVar9 = 0x8f;
        goto LAB_1801e65d1;
      }
      iVar1 = *(int *)(lVar4 + 8);
      local_40 = pcVar6 + 1;
      local_38 = *(undefined8 *)(lVar4 + 0x10);
      lVar7 = FUN_1801e8850(plVar5[1],param_1,param_2,local_48,0);
      if (lVar7 == 0) goto LAB_1801e65e5;
      lVar4 = FUN_1801ba390(*(undefined8 *)(lVar4 + 8),(longlong)((int)pcVar6 - iVar1),
                            "crypto\\x509v3\\v3_info.c",0x88);
      if (lVar4 == 0) {
        uVar10 = 0x8a;
        goto LAB_1801e65cb;
      }
      lVar7 = FUN_1801b9db0(lVar4,0);
      *plVar5 = lVar7;
      if (lVar7 == 0) {
        FUN_1801a70c0(0x22,0x8b,0x77,"crypto\\x509v3\\v3_info.c",0x90);
        FUN_1801a6360(2,"value=",lVar4);
        FUN_180195e10(lVar4,"crypto\\x509v3\\v3_info.c",0x92);
        goto LAB_1801e65e5;
      }
      FUN_180195e10(lVar4,"crypto\\x509v3\\v3_info.c",0x95);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  return lVar3;
}



// ===== FUN_1801e6620 @ 1801e6620 (size 315)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801e6620(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_res10;
  undefined1 local_res11;
  
  iVar2 = 0;
  iVar4 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if ((param_2[1] & 0x100U) == 0) {
LAB_1801e667f:
    if (*param_2 != 0) {
      if (0 < *param_2) {
        lVar3 = 0;
        do {
          if ((iVar2 != 0) && (iVar2 == (iVar2 / 0x23) * 0x23)) {
            iVar1 = FUN_18018dce0(param_1,&DAT_180331bf0,2);
            if (iVar1 != 2) goto LAB_1801e6751;
            iVar4 = iVar4 + 2;
          }
          local_res10 = PTR_s_0123456789ABCDEF_1803be980
                        [*(byte *)(*(longlong *)(param_2 + 2) + lVar3) >> 4];
          local_res11 = PTR_s_0123456789ABCDEF_1803be980
                        [*(byte *)(*(longlong *)(param_2 + 2) + lVar3) & 0xf];
          iVar1 = FUN_18018dce0(param_1,&local_res10,2);
          if (iVar1 != 2) goto LAB_1801e6751;
          iVar4 = iVar4 + 2;
          iVar2 = iVar2 + 1;
          lVar3 = lVar3 + 1;
        } while (iVar2 < *param_2);
      }
      goto LAB_1801e66a6;
    }
    iVar2 = FUN_18018dce0(param_1,&DAT_18032c7a4,2);
    if (iVar2 == 2) {
      iVar4 = iVar4 + 2;
      goto LAB_1801e66a6;
    }
  }
  else {
    iVar4 = 1;
    iVar1 = FUN_18018dce0(param_1,&DAT_180306a88,1);
    if (iVar1 == 1) goto LAB_1801e667f;
  }
LAB_1801e6751:
  iVar4 = -1;
LAB_1801e66a6:
  return iVar4;
}



// ===== FUN_1801e6760 @ 1801e6760 (size 270)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801e6760(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_res10;
  undefined1 local_res11;
  
  iVar1 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_2 == 0) {
    iVar1 = FUN_18018dce0(param_1,&DAT_180304efc,1);
    if (iVar1 == 1) {
      iVar1 = 1;
    }
    else {
LAB_1801e6864:
      iVar1 = -1;
    }
  }
  else {
    iVar3 = 0;
    if (0 < *param_2) {
      lVar4 = 0;
      do {
        if ((iVar3 != 0) && (iVar3 == (iVar3 / 0x23) * 0x23)) {
          iVar2 = FUN_18018dce0(param_1,&DAT_180331bf0,2);
          if (iVar2 != 2) goto LAB_1801e6864;
          iVar1 = iVar1 + 2;
        }
        local_res10 = PTR_s_0123456789ABCDEF_1803be988
                      [*(byte *)(*(longlong *)(param_2 + 2) + lVar4) >> 4];
        local_res11 = PTR_s_0123456789ABCDEF_1803be988
                      [*(byte *)(*(longlong *)(param_2 + 2) + lVar4) & 0xf];
        iVar2 = FUN_18018dce0(param_1,&local_res10,2);
        if (iVar2 != 2) goto LAB_1801e6864;
        iVar1 = iVar1 + 2;
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 1;
      } while (iVar3 < *param_2);
    }
  }
  return iVar1;
}



// ===== FUN_1801e6870 @ 1801e6870 (size 751)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801e6870(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined **local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_d8;
  local_a0 = param_2;
  iVar2 = FUN_1801d5e70(param_2);
  if (iVar2 != 0) {
    lVar3 = FUN_1801d5d30(param_2);
    lVar4 = FUN_1801d5d10(param_2);
    if (lVar3 == 0) {
      FUN_180196900(param_1,"%*sNo Trusted Uses.\n",param_3,&PTR_1802ead18);
    }
    else {
      local_b8 = param_3 + 2;
      local_b0 = &PTR_1802ead18;
      bVar1 = true;
      FUN_180196900(param_1,"%*sTrusted Uses:\n%*s",param_3,&PTR_1802ead18);
      local_a8 = 0;
      iVar2 = FUN_1801958b0(lVar3);
      if (local_a8 < iVar2) {
        do {
          if (bVar1) {
            bVar1 = false;
          }
          else {
            FUN_18018da10(param_1,&DAT_1802ffd08);
          }
          uVar5 = FUN_180195ae0(lVar3,local_a8);
          FUN_1801b97e0(local_98,0x50,uVar5);
          FUN_18018da10(param_1,local_98);
          local_a8 = local_a8 + 1;
          iVar2 = FUN_1801958b0(lVar3);
        } while (local_a8 < iVar2);
      }
      FUN_18018da10(param_1,&DAT_1802fa360);
    }
    if (lVar4 == 0) {
      FUN_180196900(param_1,"%*sNo Rejected Uses.\n",param_3,&PTR_1802ead18);
    }
    else {
      local_b8 = param_3 + 2;
      local_b0 = &PTR_1802ead18;
      bVar1 = true;
      FUN_180196900(param_1,"%*sRejected Uses:\n%*s",param_3,&PTR_1802ead18);
      local_a8 = 0;
      iVar2 = FUN_1801958b0(lVar4);
      if (local_a8 < iVar2) {
        do {
          if (bVar1) {
            bVar1 = false;
          }
          else {
            FUN_18018da10(param_1,&DAT_1802ffd08);
          }
          uVar5 = FUN_180195ae0(lVar4,local_a8);
          FUN_1801b97e0(local_98,0x50,uVar5);
          FUN_18018da10(param_1,local_98);
          local_a8 = local_a8 + 1;
          iVar2 = FUN_1801958b0(lVar4);
        } while (local_a8 < iVar2);
      }
      FUN_18018da10(param_1,&DAT_1802fa360);
    }
    uVar5 = local_a0;
    ppuVar6 = (undefined **)FUN_1801d5bf0(local_a0,&local_a8);
    if (ppuVar6 != (undefined **)0x0) {
      local_b8 = local_a8;
      local_b0 = ppuVar6;
      FUN_180196900(param_1,"%*sAlias: %.*s\n",param_3,&PTR_1802ead18);
    }
    lVar3 = FUN_1801d5d50(uVar5,&local_a4);
    if (lVar3 != 0) {
      FUN_180196900(param_1,"%*sKey Id: ",param_3,&PTR_1802ead18);
      local_a8 = 0;
      if (0 < local_a4) {
        do {
          ppuVar6 = &PTR_1802ead18;
          if (local_a8 != 0) {
            ppuVar6 = (undefined **)&DAT_1802ea954;
          }
          FUN_180196900(param_1,"%s%02X",ppuVar6,*(undefined1 *)(local_a8 + lVar3));
          local_a8 = local_a8 + 1;
        } while (local_a8 < local_a4);
      }
      FUN_18018dce0(param_1,&DAT_1802fa360,1);
    }
  }
  return 1;
}



// ===== FUN_1801e6b60 @ 1801e6b60 (size 1533)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e6b60(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar13;
  uint local_48;
  undefined4 uStack_44;
  longlong local_40;
  
  local_40 = 0x1801e6b7a;
  uVar10 = 0;
  uVar11 = param_3 & 0xf0000;
  uVar7 = 0xc;
  if (uVar11 != 0x40000) {
    uVar7 = 0;
  }
  if (param_3 == 0) {
    uVar7 = 0x10;
  }
  local_48 = uVar11;
  if (((param_4 & 1) == 0) &&
     ((iVar2 = FUN_18018dce0(param_1,"Certificate:\n",0xd), iVar2 < 1 ||
      (iVar2 = FUN_18018dce0(param_1,"    Data:\n",10), iVar2 < 1)))) goto LAB_1801e7136;
  if ((param_4 & 2) == 0) {
    uVar3 = FUN_1801a2bd0(param_2);
    if (uVar3 < 3) {
      in_stack_ffffffffffffffa8 =
           CONCAT44((int)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20),uVar3);
      iVar2 = FUN_180196900(param_1,"%8sVersion: %ld (0x%lx)\n",&PTR_1802ead18,uVar3 + 1,
                            in_stack_ffffffffffffffa8);
    }
    else {
      iVar2 = FUN_180196900(param_1,"%8sVersion: Unknown (%ld)\n",&PTR_1802ead18,uVar3);
    }
    if (iVar2 < 1) goto LAB_1801e7136;
  }
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((param_4 & 4) == 0) {
    iVar2 = FUN_18018dce0(param_1,"        Serial Number:",0x16);
    if (iVar2 < 1) goto LAB_1801e7136;
    piVar4 = (int *)FUN_1800d2280(param_2);
    if (*piVar4 < 5) {
      FUN_1801a7200();
      iVar2 = FUN_1801dbfa0(piVar4);
      FUN_1801a6fa0();
    }
    else {
      iVar2 = -1;
    }
    iVar12 = piVar4[1];
    if (iVar2 == -1) {
      ppuVar8 = &PTR_1802ead18;
      if (iVar12 == 0x102) {
        ppuVar8 = (undefined **)" (Negative)";
      }
      iVar2 = FUN_180196900(param_1,"\n%12s%s",&PTR_1802ead18,ppuVar8);
      uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
      if (iVar2 < 1) goto LAB_1801e7136;
      iVar2 = *piVar4;
      iVar12 = 0;
      if (0 < iVar2) {
        lVar6 = 0;
        do {
          iVar12 = iVar12 + 1;
          uVar5 = 0x3a;
          if (iVar12 == iVar2) {
            uVar5 = 10;
          }
          iVar2 = FUN_180196900(param_1,"%02x%c",*(undefined1 *)(*(longlong *)(piVar4 + 2) + lVar6),
                                uVar5);
          uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
          if (iVar2 < 1) goto LAB_1801e7136;
          iVar2 = *piVar4;
          lVar6 = lVar6 + 1;
        } while (iVar12 < iVar2);
      }
      uVar11 = local_48;
    }
    else {
      ppuVar8 = (undefined **)&DAT_180306a88;
      if (iVar12 != 0x102) {
        ppuVar8 = &PTR_1802ead18;
      }
      iVar1 = -iVar2;
      if (iVar12 != 0x102) {
        iVar1 = iVar2;
      }
      iVar2 = FUN_180196900(param_1," %s%lu (%s0x%lx)\n",ppuVar8,iVar1,ppuVar8,iVar1);
      uVar13 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
      if (iVar2 < 1) goto LAB_1801e7136;
    }
  }
  if ((param_4 & 8) == 0) {
    uVar5 = FUN_1801a2b00(param_2);
    iVar2 = FUN_18018da10(param_1,&DAT_180331cb8);
    if ((iVar2 < 1) || (iVar2 = FUN_1801e7270(param_1,uVar5,0), iVar2 < 1)) goto LAB_1801e7136;
  }
  if ((param_4 & 0x10) == 0) {
    uVar5 = 10;
    if (uVar11 != 0x40000) {
      uVar5 = 0x20;
    }
    iVar2 = FUN_180196900(param_1,"        Issuer:%c",uVar5);
    if (iVar2 < 1) goto LAB_1801e7136;
    uVar5 = FUN_1801a3490(param_2);
    iVar2 = FUN_18019b4f0(param_1,uVar5,uVar7,param_3);
    if ((iVar2 < 0) || (iVar2 = FUN_18018dce0(param_1,&DAT_1802fa360,1), iVar2 < 1))
    goto LAB_1801e7136;
  }
  if ((param_4 & 0x20) == 0) {
    iVar2 = FUN_18018dce0(param_1,"        Validity\n",0x11);
    if ((iVar2 < 1) || (iVar2 = FUN_18018dce0(param_1,"            Not Before: ",0x18), iVar2 < 1))
    goto LAB_1801e7136;
    uVar5 = FUN_18018d300(param_2);
    iVar2 = FUN_18019c360(param_1,uVar5);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_18018dce0(param_1,"\n            Not After : ",0x19), iVar2 < 1))
    goto LAB_1801e7136;
    uVar5 = FUN_18019f410(param_2);
    iVar2 = FUN_18019c360(param_1,uVar5);
    if ((iVar2 == 0) || (iVar2 = FUN_18018dce0(param_1,&DAT_1802fa360,1), iVar2 < 1))
    goto LAB_1801e7136;
  }
  if ((param_4 & 0x40) == 0) {
    uVar9 = 10;
    if (uVar11 != 0x40000) {
      uVar9 = 0x20;
    }
    iVar2 = FUN_180196900(param_1,"        Subject:%c",uVar9);
    if (iVar2 < 1) goto LAB_1801e7136;
    uVar5 = FUN_1801a34d0(param_2);
    iVar2 = FUN_18019b4f0(param_1,uVar5,uVar7,param_3);
    if ((iVar2 < 0) || (iVar2 = FUN_18018dce0(param_1,&DAT_1802fa360,1), iVar2 < 1))
    goto LAB_1801e7136;
  }
  if (-1 < (char)param_4) {
    uVar5 = FUN_1801a2b30(param_2);
    FUN_1801a2200(&local_40,0,0,0,uVar5);
    uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
    iVar2 = FUN_18018dce0(param_1,"        Subject Public Key Info:\n",0x21);
    if ((((iVar2 < 1) ||
         (iVar2 = FUN_180196900(param_1,"%12sPublic Key Algorithm: ",&PTR_1802ead18), iVar2 < 1)) ||
        (iVar2 = FUN_18019b2d0(param_1,local_40), iVar2 < 1)) ||
       (iVar2 = FUN_18018da10(param_1,&DAT_1802fa360), iVar2 < 1)) goto LAB_1801e7136;
    lVar6 = FUN_1801a3460(param_2);
    if (lVar6 == 0) {
      FUN_180196900(param_1,"%12sUnable to load Public Key\n",&PTR_1802ead18);
      FUN_1801e8cf0(param_1);
    }
    else {
      FUN_18019e4a0(param_1,lVar6,0x10);
    }
  }
  if (((param_4 >> 0xc & 1) != 0) ||
     (((FUN_1801a2b10(param_2,&local_48,&local_40), CONCAT44(uStack_44,local_48) == 0 ||
       ((iVar2 = FUN_180196900(param_1,"%8sIssuer Unique ID: ",&PTR_1802ead18), 0 < iVar2 &&
        (iVar2 = FUN_1801e7160(param_1,CONCAT44(uStack_44,local_48),0xc), iVar2 != 0)))) &&
      ((local_40 == 0 ||
       ((iVar2 = FUN_180196900(param_1,"%8sSubject Unique ID: ",&PTR_1802ead18), 0 < iVar2 &&
        (iVar2 = FUN_1801e7160(param_1,local_40,0xc), iVar2 != 0)))))))) {
    if ((param_4 >> 8 & 1) == 0) {
      uVar5 = FUN_1801a2af0(param_2);
      FUN_1801a4e70(param_1,"X509v3 extensions",uVar5,param_4,CONCAT44(uVar13,8));
    }
    if ((param_4 >> 9 & 1) == 0) {
      FUN_1801a2850(&local_40,&local_48,param_2);
      iVar2 = FUN_1801e7270(param_1,CONCAT44(uStack_44,local_48),local_40);
      if (iVar2 < 1) goto LAB_1801e7136;
    }
    if (((param_4 >> 10 & 1) != 0) || (iVar2 = FUN_1801e6870(param_1,param_2,0), iVar2 != 0)) {
      uVar10 = 1;
    }
  }
LAB_1801e7136:
  FUN_180195e10(0,"crypto\\x509\\t_x509.c",0xd9);
  return uVar10;
}



// ===== FUN_1801e7160 @ 1801e7160 (size 260)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e7160(undefined8 param_1,int *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined **ppuVar7;
  
  iVar3 = *param_2;
  iVar6 = 0;
  lVar1 = *(longlong *)(param_2 + 2);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      if (iVar6 == (iVar6 / 0x12) * 0x12) {
        iVar2 = FUN_18018dce0(param_1,&DAT_1802fa360,1);
        if (iVar2 < 1) goto LAB_1801e723e;
        iVar2 = FUN_18018d580(param_1,param_3,param_3);
        if (iVar2 < 1) goto LAB_1801e723e;
      }
      ppuVar7 = (undefined **)&DAT_1802ea954;
      iVar6 = iVar6 + 1;
      if (iVar6 == iVar3) {
        ppuVar7 = &PTR_1802ead18;
      }
      iVar2 = FUN_180196900(param_1,"%02x%s",*(undefined1 *)(lVar5 + lVar1),ppuVar7);
      if (iVar2 < 1) goto LAB_1801e723e;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  iVar3 = FUN_18018dce0(param_1,&DAT_1802fa360,1);
  if (iVar3 == 1) {
    uVar4 = 1;
  }
  else {
LAB_1801e723e:
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_1801e7270 @ 1801e7270 (size 268)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e7270(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res20 [2];
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10 = 0x1801e7285;
  iVar1 = FUN_18018da10(param_1,"    Signature Algorithm: ");
  if (0 < iVar1) {
    iVar1 = FUN_18019b2d0(param_1,*param_2);
    if (0 < iVar1) {
      iVar1 = FUN_1801b96c0(*param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_1801dcba0(iVar1,local_18,local_res20);
        if (iVar1 != 0) {
          lVar2 = FUN_1801c4b80(0,local_res20[0]);
          if ((lVar2 != 0) && (*(code **)(lVar2 + 0xa0) != (code *)0x0)) {
            uVar3 = (**(code **)(lVar2 + 0xa0))(param_1,param_2,param_3,9,0);
            return uVar3;
          }
        }
      }
      if (param_3 != 0) {
        uVar3 = FUN_1801e7160(param_1,param_3,9);
        return uVar3;
      }
      iVar1 = FUN_18018da10(param_1,&DAT_1802fa360);
      if (0 < iVar1) {
        return 1;
      }
    }
  }
  return 0;
}



// ===== FUN_1801e7380 @ 1801e7380 (size 740)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801e7380(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 auStack_198 [32];
  uint local_178;
  uint local_170;
  uint local_168;
  longlong local_158;
  char local_150 [7];
  undefined2 uStack_149;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801e739f;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_198;
  iVar10 = 0;
  iVar2 = FUN_1801958b0(param_2);
  lVar5 = param_3;
  lVar8 = param_3;
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)FUN_180195ae0(param_2,iVar10);
      local_158 = lVar8;
      switch(*puVar3) {
      case 0:
        pcVar7 = "<unsupported>";
        pcVar6 = "othername";
        break;
      case 1:
        iVar2 = FUN_1801e3de0("email",*(undefined8 *)(*(int **)(puVar3 + 2) + 2),
                              (longlong)**(int **)(puVar3 + 2),&local_158);
        goto LAB_1801e75f1;
      case 2:
        iVar2 = FUN_1801e3de0(&DAT_180332028,*(undefined8 *)(*(int **)(puVar3 + 2) + 2),
                              (longlong)**(int **)(puVar3 + 2),&local_158);
        goto LAB_1801e75f1;
      case 3:
        pcVar7 = "<unsupported>";
        pcVar6 = "X400Name";
        break;
      case 4:
        lVar5 = FUN_1801def90(*(undefined8 *)(puVar3 + 2),(longlong)&uStack_149 + 1,0x100);
        if (lVar5 == 0) goto LAB_1801e7622;
        pcVar6 = "DirName";
        goto LAB_1801e75e2;
      case 5:
        pcVar7 = "<unsupported>";
        pcVar6 = "EdiPartyName";
        break;
      case 6:
        iVar2 = FUN_1801e3de0(&DAT_18033202c,*(undefined8 *)(*(int **)(puVar3 + 2) + 2),
                              (longlong)**(int **)(puVar3 + 2),&local_158);
        goto LAB_1801e75f1;
      case 7:
        iVar2 = **(int **)(puVar3 + 2);
        puVar9 = *(undefined1 **)(*(int **)(puVar3 + 2) + 2);
        if (iVar2 == 4) {
          local_168 = (uint)(byte)puVar9[3];
          local_170 = (uint)(byte)puVar9[2];
          local_178 = (uint)(byte)puVar9[1];
          FUN_180196a10((longlong)&uStack_149 + 1,0x100,"%d.%d.%d.%d",*puVar9);
          pcVar6 = "IP Address";
        }
        else {
          if (iVar2 != 0x10) {
            pcVar7 = "<invalid>";
            pcVar6 = "IP Address";
            break;
          }
          uStack_149._1_1_ = 0;
          iVar2 = 0;
          do {
            FUN_180196a10(local_150,5,&DAT_180330370,CONCAT11(*puVar9,puVar9[1]));
            puVar4 = &uStack_149;
            puVar9 = puVar9 + 2;
            do {
              pcVar6 = (char *)((longlong)puVar4 + 1);
              puVar4 = (undefined2 *)((longlong)puVar4 + 1);
            } while (*pcVar6 != '\0');
            lVar5 = 0;
            do {
              cVar1 = local_150[lVar5];
              *(char *)((longlong)puVar4 + lVar5) = cVar1;
              lVar5 = lVar5 + 1;
            } while (cVar1 != '\0');
            if (iVar2 != 7) {
              puVar4 = &uStack_149;
              do {
                pcVar6 = (char *)((longlong)puVar4 + 1);
                puVar4 = (undefined2 *)((longlong)puVar4 + 1);
              } while (*pcVar6 != '\0');
              *puVar4 = DAT_1802ea954;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 8);
          pcVar6 = "IP Address";
        }
        goto LAB_1801e75e2;
      case 8:
        FUN_18019b440((longlong)&uStack_149 + 1,0x100,*(undefined8 *)(puVar3 + 2));
        pcVar6 = "Registered ID";
LAB_1801e75e2:
        pcVar7 = (char *)((longlong)&uStack_149 + 1);
        break;
      default:
        goto switchD_1801e73fa_default;
      }
      iVar2 = FUN_1801e1e70(pcVar6,pcVar7,&local_158);
LAB_1801e75f1:
      if (iVar2 == 0) {
LAB_1801e7622:
        if (param_3 == 0) {
          FUN_1801958f0(lVar8,FUN_1801e2040);
        }
        return 0;
      }
switchD_1801e73fa_default:
      lVar5 = local_158;
      if (local_158 == 0) goto LAB_1801e7622;
      iVar10 = iVar10 + 1;
      iVar2 = FUN_1801958b0(param_2);
      lVar8 = lVar5;
    } while (iVar10 < iVar2);
  }
  if (lVar5 == 0) {
    lVar5 = FUN_1801957e0();
  }
  return lVar5;
}



// ===== FUN_1801e7690 @ 1801e7690 (size 402)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e7690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1801e76a3;
  iVar1 = FUN_1801958b0(param_3);
  lVar3 = FUN_180195820(0,iVar1);
  if (lVar3 == 0) {
    FUN_1801a70c0(0x22,0x9a,0x41,"crypto\\x509v3\\v3_alt.c",0x136,uVar8);
    FUN_180195650(0);
    return 0;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      lVar4 = FUN_180195ae0(param_3,iVar7);
      iVar2 = FUN_1801e39b0(*(undefined8 *)(lVar4 + 8),"email");
      if ((iVar2 == 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
        lVar5 = 0;
        do {
          lVar6 = lVar5 + 1;
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + lVar5) != (&DAT_180332128)[lVar5])
          goto LAB_1801e7779;
          lVar5 = lVar6;
        } while (lVar6 != 5);
        iVar2 = 0;
LAB_1801e77b8:
        iVar2 = FUN_1801e80a0(param_2,lVar3,iVar2);
        if (iVar2 == 0) {
LAB_1801e77c7:
          FUN_1801958f0(lVar3,FUN_1801a4ac0);
          return 0;
        }
      }
      else {
LAB_1801e7779:
        iVar2 = FUN_1801e39b0(*(undefined8 *)(lVar4 + 8),"email");
        if ((iVar2 == 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
          lVar5 = 0;
          do {
            lVar6 = lVar5;
            if (*(char *)(*(longlong *)(lVar4 + 0x10) + lVar6) != (&DAT_180332130)[lVar6])
            goto LAB_1801e77da;
            lVar5 = lVar6 + 1;
          } while (lVar6 + 1 != 5);
          iVar2 = (int)lVar6 + -3;
          goto LAB_1801e77b8;
        }
LAB_1801e77da:
        lVar4 = FUN_1801e84c0(param_1,param_2,lVar4);
        if (lVar4 == 0) goto LAB_1801e77c7;
        FUN_180195990(lVar3,lVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return lVar3;
}



// ===== FUN_1801e7830 @ 1801e7830 (size 608)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e7830(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x1801e7847;
  iVar1 = FUN_1801958b0(param_3);
  lVar4 = FUN_180195820(0,iVar1);
  if (lVar4 == 0) {
    FUN_1801a70c0(0x22,0x99,0x41,"crypto\\x509v3\\v3_alt.c",0xe6,uVar10);
    FUN_180195650(0);
    return 0;
  }
  iVar8 = 0;
  if (0 < iVar1) {
    do {
      lVar5 = FUN_180195ae0(param_3,iVar8);
      iVar2 = FUN_1801e39b0(*(undefined8 *)(lVar5 + 8),"issuer");
      if ((iVar2 == 0) && (*(longlong *)(lVar5 + 0x10) != 0)) {
        lVar6 = 0;
        do {
          lVar7 = lVar6 + 1;
          if (*(char *)(*(longlong *)(lVar5 + 0x10) + lVar6) != (&DAT_180332128)[lVar6])
          goto LAB_1801e79d1;
          lVar6 = lVar7;
        } while (lVar7 != 5);
        if (param_2 == (int *)0x0) {
LAB_1801e7a58:
          uVar9 = 0x10b;
          uVar10 = 0x7f;
LAB_1801e7a66:
          FUN_1801a70c0(0x22,0x7b,uVar10,"crypto\\x509v3\\v3_alt.c",uVar9);
LAB_1801e7a7a:
          FUN_1801958f0(lVar4,FUN_1801a4ac0);
          return 0;
        }
        if (*param_2 != 1) {
          if (*(longlong *)(param_2 + 2) == 0) goto LAB_1801e7a58;
          iVar2 = FUN_1801a3cf0(*(longlong *)(param_2 + 2),0x55,0xffffffff);
          if (-1 < iVar2) {
            lVar5 = FUN_1801a3cd0(*(undefined8 *)(param_2 + 2),iVar2);
            if ((lVar5 == 0) || (lVar5 = FUN_1801df6c0(lVar5), lVar5 == 0)) {
              uVar9 = 0x113;
              uVar10 = 0x7e;
              goto LAB_1801e7a66;
            }
            iVar2 = FUN_1801958b0(lVar5);
            iVar3 = FUN_1801959c0(lVar4,iVar2);
            if (iVar3 == 0) {
              FUN_1801a70c0(0x22,0x7b,0x41,"crypto\\x509v3\\v3_alt.c",0x119);
              FUN_180195650(lVar5);
              goto LAB_1801e7a7a;
            }
            iVar3 = 0;
            if (0 < iVar2) {
              do {
                uVar10 = FUN_180195ae0(lVar5,iVar3);
                FUN_180195990(lVar4,uVar10);
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar2);
            }
            FUN_180195650(lVar5);
          }
        }
      }
      else {
LAB_1801e79d1:
        lVar5 = FUN_1801e84c0(param_1,param_2,lVar5);
        if (lVar5 == 0) goto LAB_1801e7a7a;
        FUN_180195990(lVar4,lVar5);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  return lVar4;
}



// ===== FUN_1801e7a90 @ 1801e7a90 (size 580)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e7a90(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  switch(*param_2) {
  case 0:
    FUN_180196900(param_1,"othername:<unsupported>");
    return 1;
  case 1:
    FUN_180196900(param_1,"email:");
    FUN_18019ccd0(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 2:
    FUN_180196900(param_1,&DAT_1803320bc);
    FUN_18019ccd0(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 3:
    FUN_180196900(param_1,"X400Name:<unsupported>");
    return 1;
  case 4:
    FUN_180196900(param_1,"DirName:");
    FUN_18019b4f0(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
    return 1;
  case 5:
    FUN_180196900(param_1,"EdiPartyName:<unsupported>");
    return 1;
  case 6:
    FUN_180196900(param_1,&DAT_1803320c4);
    FUN_18019ccd0(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 7:
    break;
  case 8:
    FUN_180196900(param_1,"Registered ID:");
    FUN_18019b2d0(param_1,*(undefined8 *)(param_2 + 2));
  default:
    return 1;
  }
  iVar1 = **(int **)(param_2 + 2);
  puVar3 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
  if (iVar1 == 4) {
    FUN_180196900(param_1,"IP Address:%d.%d.%d.%d",*puVar3,puVar3[1],puVar3[2],
                  CONCAT44(1,(uint)(byte)puVar3[3]));
    return 1;
  }
  if (iVar1 != 0x10) {
    FUN_180196900(param_1,"IP Address:<invalid>");
    return 1;
  }
  FUN_180196900(param_1,"IP Address");
  lVar2 = 8;
  do {
    FUN_180196900(param_1,&DAT_1803320f8,CONCAT11(*puVar3,puVar3[1]));
    puVar3 = puVar3 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_18018da10(param_1,&DAT_1802fa360);
  return 1;
}



// ===== FUN_1801e7d00 @ 1801e7d00 (size 880)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
FUN_1801e7d00(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char *param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if (param_5 == (char *)0x0) {
    FUN_1801a70c0(0x22,0xa4,0x7c,"crypto\\x509v3\\v3_alt.c",0x1b7);
    return (undefined4 *)0x0;
  }
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_1801a4ae0();
    if (puVar2 == (undefined4 *)0x0) {
      FUN_1801a70c0(0x22,0xa4,0x41,"crypto\\x509v3\\v3_alt.c",0x1c0);
      return (undefined4 *)0x0;
    }
  }
  else {
    puVar2 = param_1;
  }
  switch(param_4) {
  case 0:
    pcVar4 = strchr(param_5,0x3b);
    if (pcVar4 != (char *)0x0) {
      lVar3 = FUN_1801a4b00();
      *(longlong *)(puVar2 + 2) = lVar3;
      if (lVar3 != 0) {
        FUN_1801bc580(*(undefined8 *)(lVar3 + 8));
        lVar3 = FUN_18021b310(pcVar4 + 1,param_3);
        *(longlong *)(*(longlong *)(puVar2 + 2) + 8) = lVar3;
        if ((lVar3 != 0) &&
           (lVar3 = FUN_1801ba390(param_5,(longlong)((int)pcVar4 - (int)param_5),
                                  "crypto\\x509v3\\v3_alt.c",0x242), lVar3 != 0)) {
          uVar6 = FUN_1801b9db0(lVar3,0);
          **(undefined8 **)(puVar2 + 2) = uVar6;
          FUN_180195e10(lVar3,"crypto\\x509v3\\v3_alt.c",0x246);
          if (**(longlong **)(puVar2 + 2) != 0) goto LAB_1801e800f;
        }
      }
    }
    uVar7 = 0x1ed;
    uVar6 = 0x93;
    break;
  case 1:
  case 2:
  case 6:
    lVar3 = FUN_1801bc480();
    *(longlong *)(puVar2 + 2) = lVar3;
    if (lVar3 != 0) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_5[lVar5] != '\0');
      iVar1 = FUN_18019a480(lVar3,param_5);
      if (iVar1 != 0) goto LAB_1801e800f;
    }
    uVar7 = 0x1fa;
    uVar6 = 0x41;
    break;
  default:
    uVar7 = 0x1f2;
    uVar6 = 0xa7;
    break;
  case 4:
    iVar1 = 0;
    lVar5 = 0;
    lVar3 = FUN_1801be6c0();
    if (lVar3 == 0) {
LAB_1801e7edf:
      FUN_1801be690(lVar3);
    }
    else {
      lVar5 = FUN_18020b7d0(param_3,param_5);
      if (lVar5 == 0) {
        FUN_1801a70c0(0x22,0x90,0x96,"crypto\\x509v3\\v3_alt.c",0x256);
        FUN_1801a6360(2,"section=",param_5);
        goto LAB_1801e7edf;
      }
      iVar1 = FUN_1801e1d60(lVar3,lVar5,0x1001);
      if (iVar1 == 0) goto LAB_1801e7edf;
      *(longlong *)(puVar2 + 2) = lVar3;
    }
    FUN_18020b830(param_3,lVar5);
    if (iVar1 != 0) {
LAB_1801e800f:
      *puVar2 = param_4;
      return puVar2;
    }
    uVar7 = 0x1e6;
    uVar6 = 0x95;
    break;
  case 7:
    if (param_6 == 0) {
      lVar3 = FUN_1801e2970(param_5);
    }
    else {
      lVar3 = FUN_1801e29f0();
    }
    *(longlong *)(puVar2 + 2) = lVar3;
    if (lVar3 == 0) {
      FUN_1801a70c0(0x22,0xa4,0x76,"crypto\\x509v3\\v3_alt.c",0x1de);
      FUN_1801a6360(2,"value=",param_5);
      goto LAB_1801e804b;
    }
    goto LAB_1801e800f;
  case 8:
    lVar3 = FUN_1801b9db0(param_5,0);
    if (lVar3 != 0) {
      *(longlong *)(puVar2 + 2) = lVar3;
      *puVar2 = param_4;
      return puVar2;
    }
    FUN_1801a70c0(0x22,0xa4,0x77,"crypto\\x509v3\\v3_alt.c",0x1d0);
    FUN_1801a6360(2,"value=",param_5);
    goto LAB_1801e804b;
  }
  FUN_1801a70c0(0x22,0xa4,uVar6,"crypto\\x509v3\\v3_alt.c",uVar7);
LAB_1801e804b:
  if (param_1 == (undefined4 *)0x0) {
    FUN_1801a4ac0(puVar2);
  }
  return (undefined4 *)0x0;
}



// ===== FUN_1801e80a0 @ 1801e80a0 (size 363)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e80a0(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1801e80be;
  lVar7 = 0;
  puVar8 = (undefined4 *)0x0;
  if (param_1 == (int *)0x0) {
LAB_1801e81bd:
    uVar3 = 0x162;
    uVar4 = 0x7d;
LAB_1801e81c8:
    FUN_1801a70c0(0x22,0x7a,uVar4,"crypto\\x509v3\\v3_alt.c",uVar3,uVar9);
    FUN_1801a4ac0(puVar8);
    FUN_1801bc3c0(lVar7);
    uVar9 = 0;
  }
  else {
    if (*param_1 != 1) {
      if (*(longlong *)(param_1 + 4) == 0) {
        if (*(longlong *)(param_1 + 6) == 0) goto LAB_1801e81bd;
        uVar4 = FUN_1800b7fa0();
      }
      else {
        uVar4 = FUN_1801a34d0(*(longlong *)(param_1 + 4));
      }
      for (iVar1 = FUN_1801a3b40(uVar4,0x30,0xffffffff); -1 < iVar1;
          iVar1 = FUN_1801a3b40(uVar4,0x30,iVar1)) {
        uVar5 = FUN_1801a3af0(uVar4,iVar1);
        uVar6 = FUN_1801a3780(uVar5);
        lVar7 = FUN_18019a200(uVar6);
        if (param_3 != 0) {
          FUN_1801a39e0(uVar4,iVar1);
          FUN_1801be630(uVar5);
          iVar1 = iVar1 + -1;
        }
        puVar8 = (undefined4 *)0x0;
        if ((lVar7 == 0) || (puVar8 = (undefined4 *)FUN_1801a4ae0(), puVar8 == (undefined4 *)0x0)) {
          uVar3 = 0x176;
          uVar4 = 0x41;
          goto LAB_1801e81c8;
        }
        *(longlong *)(puVar8 + 2) = lVar7;
        *puVar8 = 1;
        lVar7 = 0;
        iVar2 = FUN_180195990(param_2,puVar8);
        if (iVar2 == 0) {
          uVar3 = 0x17d;
          uVar4 = 0x41;
          goto LAB_1801e81c8;
        }
      }
    }
    uVar9 = 1;
  }
  return uVar9;
}



// ===== FUN_1801e8210 @ 1801e8210 (size 642)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801e8210(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 auStack_168 [32];
  uint local_148;
  uint local_140;
  uint local_138;
  undefined8 local_128;
  char local_120 [7];
  undefined2 uStack_119;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801e821c;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_168;
  local_128 = param_3;
  switch(*param_2) {
  case 0:
    pcVar6 = "<unsupported>";
    pcVar5 = "othername";
    break;
  case 1:
    iVar2 = FUN_1801e3de0("email",*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                          (longlong)**(int **)(param_2 + 2),&local_128);
    goto LAB_1801e8469;
  case 2:
    iVar2 = FUN_1801e3de0(&DAT_180332028,*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                          (longlong)**(int **)(param_2 + 2),&local_128);
    goto LAB_1801e8469;
  case 3:
    pcVar6 = "<unsupported>";
    pcVar5 = "X400Name";
    break;
  case 4:
    lVar3 = FUN_1801def90(*(undefined8 *)(param_2 + 2),(longlong)&uStack_119 + 1,0x100);
    if (lVar3 != 0) {
      pcVar5 = "DirName";
      goto LAB_1801e845a;
    }
    goto LAB_1801e846d;
  case 5:
    pcVar6 = "<unsupported>";
    pcVar5 = "EdiPartyName";
    break;
  case 6:
    iVar2 = FUN_1801e3de0(&DAT_18033202c,*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                          (longlong)**(int **)(param_2 + 2),&local_128);
    goto LAB_1801e8469;
  case 7:
    iVar2 = **(int **)(param_2 + 2);
    puVar7 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
    if (iVar2 == 4) {
      local_138 = (uint)(byte)puVar7[3];
      local_140 = (uint)(byte)puVar7[2];
      local_148 = (uint)(byte)puVar7[1];
      FUN_180196a10((longlong)&uStack_119 + 1,0x100,"%d.%d.%d.%d",*puVar7);
      pcVar5 = "IP Address";
    }
    else {
      if (iVar2 != 0x10) {
        pcVar6 = "<invalid>";
        pcVar5 = "IP Address";
        break;
      }
      iVar2 = 0;
      uStack_119._1_1_ = 0;
      do {
        FUN_180196a10(local_120,5,&DAT_180330370,CONCAT11(*puVar7,puVar7[1]));
        puVar4 = &uStack_119;
        puVar7 = puVar7 + 2;
        do {
          pcVar5 = (char *)((longlong)puVar4 + 1);
          puVar4 = (undefined2 *)((longlong)puVar4 + 1);
        } while (*pcVar5 != '\0');
        lVar3 = 0;
        do {
          cVar1 = local_120[lVar3];
          *(char *)((longlong)puVar4 + lVar3) = cVar1;
          lVar3 = lVar3 + 1;
        } while (cVar1 != '\0');
        if (iVar2 != 7) {
          puVar4 = &uStack_119;
          do {
            pcVar5 = (char *)((longlong)puVar4 + 1);
            puVar4 = (undefined2 *)((longlong)puVar4 + 1);
          } while (*pcVar5 != '\0');
          *puVar4 = DAT_1802ea954;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
      pcVar5 = "IP Address";
    }
    goto LAB_1801e845a;
  case 8:
    FUN_18019b440((longlong)&uStack_119 + 1,0x100,*(undefined8 *)(param_2 + 2));
    pcVar5 = "Registered ID";
LAB_1801e845a:
    pcVar6 = (char *)((longlong)&uStack_119 + 1);
    break;
  default:
    goto LAB_1801e8476;
  }
  iVar2 = FUN_1801e1e70(pcVar5,pcVar6,&local_128);
LAB_1801e8469:
  if (iVar2 == 0) {
LAB_1801e846d:
    param_3 = 0;
  }
  else {
    param_3 = local_128;
LAB_1801e8476:
  }
  return param_3;
}



// ===== FUN_1801e84c0 @ 1801e84c0 (size 356)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e84c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffe8;
  ulonglong uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0x1801e84da;
  lVar1 = *(longlong *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 8);
  if (lVar1 == 0) {
    FUN_1801a70c0(0x22,0x75,0x7c,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x215),0x1801e84da);
LAB_1801e860d:
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_1801e39b0(uVar3,"email");
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    else {
      iVar2 = FUN_1801e39b0(uVar3,&DAT_18033202c);
      if (iVar2 == 0) {
        uVar4 = 6;
      }
      else {
        iVar2 = FUN_1801e39b0(uVar3,&DAT_180332028);
        if (iVar2 == 0) {
          uVar4 = 2;
        }
        else {
          iVar2 = FUN_1801e39b0(uVar3,&DAT_180332138);
          if (iVar2 == 0) {
            uVar4 = 8;
          }
          else {
            iVar2 = FUN_1801e39b0(uVar3,&DAT_1803049b8);
            if (iVar2 == 0) {
              uVar4 = 7;
            }
            else {
              iVar2 = FUN_1801e39b0(uVar3,"dirName");
              if (iVar2 == 0) {
                uVar4 = 4;
              }
              else {
                iVar2 = FUN_1801e39b0(uVar3,"otherName");
                if (iVar2 != 0) {
                  FUN_1801a70c0(0x22,0x75,0x75,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x228));
                  FUN_1801a6360(2,"name=",uVar3);
                  goto LAB_1801e860d;
                }
                uVar4 = 0;
              }
            }
          }
        }
      }
    }
    uVar3 = FUN_1801e7d00(0,param_1,param_2,uVar4,lVar1,uVar5 & 0xffffffff00000000);
  }
  return uVar3;
}



// ===== FUN_1801e8630 @ 1801e8630 (size 542)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801e8630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  ulonglong uVar8;
  
  uVar8 = 0x1801e8644;
  iVar1 = FUN_1801958b0(param_3);
  lVar3 = FUN_180195820(0,iVar1);
  if (lVar3 == 0) {
    FUN_1801a70c0(0x22,0x76,0x41,"crypto\\x509v3\\v3_alt.c",0x197,uVar8);
    FUN_180195650(0);
    return 0;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
      lVar4 = FUN_180195ae0(param_3,iVar5);
      in_stack_ffffffffffffffc8 = *(longlong *)(lVar4 + 0x10);
      uVar6 = *(undefined8 *)(lVar4 + 8);
      if (in_stack_ffffffffffffffc8 == 0) {
        FUN_1801a70c0(0x22,0x75,0x7c,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar7,0x215),uVar8);
LAB_1801e8838:
        FUN_1801958f0(lVar3,FUN_1801a4ac0);
        return 0;
      }
      iVar2 = FUN_1801e39b0(uVar6,"email");
      if (iVar2 == 0) {
        uVar6 = 1;
      }
      else {
        iVar2 = FUN_1801e39b0(uVar6,&DAT_18033202c);
        if (iVar2 == 0) {
          uVar6 = 6;
        }
        else {
          iVar2 = FUN_1801e39b0(uVar6,&DAT_180332028);
          if (iVar2 == 0) {
            uVar6 = 2;
          }
          else {
            iVar2 = FUN_1801e39b0(uVar6,&DAT_180332138);
            if (iVar2 == 0) {
              uVar6 = 8;
            }
            else {
              iVar2 = FUN_1801e39b0(uVar6,&DAT_1803049b8);
              if (iVar2 == 0) {
                uVar6 = 7;
              }
              else {
                iVar2 = FUN_1801e39b0(uVar6,"dirName");
                if (iVar2 == 0) {
                  uVar6 = 4;
                }
                else {
                  iVar2 = FUN_1801e39b0(uVar6,"otherName");
                  if (iVar2 != 0) {
                    FUN_1801a70c0(0x22,0x75,0x75,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar7,0x228));
                    FUN_1801a6360(2,"name=",uVar6);
                    goto LAB_1801e8838;
                  }
                  uVar6 = 0;
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 & 0xffffffff00000000;
      lVar4 = FUN_1801e7d00(0,param_1,param_2,uVar6,in_stack_ffffffffffffffc8);
      if (lVar4 == 0) goto LAB_1801e8838;
      FUN_180195990(lVar3,lVar4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return lVar3;
}



// ===== FUN_1801e8850 @ 1801e8850 (size 372)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801e8850(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 1;
  lVar1 = *(longlong *)(param_4 + 0x10);
  uVar3 = *(undefined8 *)(param_4 + 8);
  if (lVar1 == 0) {
    FUN_1801a70c0(0x22,0x75,0x7c,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x215),0x1801e8870);
LAB_1801e89a7:
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_1801e39b0(uVar3,"email");
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    else {
      iVar2 = FUN_1801e39b0(uVar3,&DAT_18033202c);
      if (iVar2 == 0) {
        uVar4 = 6;
      }
      else {
        iVar2 = FUN_1801e39b0(uVar3,&DAT_180332028);
        if (iVar2 == 0) {
          uVar4 = 2;
        }
        else {
          iVar2 = FUN_1801e39b0(uVar3,&DAT_180332138);
          if (iVar2 == 0) {
            uVar4 = 8;
          }
          else {
            iVar2 = FUN_1801e39b0(uVar3,&DAT_1803049b8);
            if (iVar2 == 0) {
              uVar4 = 7;
            }
            else {
              iVar2 = FUN_1801e39b0(uVar3,"dirName");
              if (iVar2 == 0) {
                uVar4 = 4;
              }
              else {
                iVar2 = FUN_1801e39b0(uVar3,"otherName");
                if (iVar2 != 0) {
                  FUN_1801a70c0(0x22,0x75,0x75,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x228));
                  FUN_1801a6360(2,"name=",uVar3);
                  goto LAB_1801e89a7;
                }
                uVar4 = 0;
              }
            }
          }
        }
      }
    }
    uVar3 = FUN_1801e7d00(param_1,param_2,param_3,uVar4,lVar1,CONCAT44(uVar5,param_5));
  }
  return uVar3;
}



// ===== caseD_1 @ 1801e89d0 (size 29)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void switchD_1801e8c9b::caseD_1(longlong param_1,undefined8 param_2,uint param_3)

{
  FUN_1801e8a60(*(undefined4 *)(param_1 + 0x18),param_2,param_3 | 0x18);
  return;
}



// ===== caseD_5 @ 1801e89f0 (size 29)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void switchD_1801e8c9b::caseD_5(longlong param_1,undefined8 param_2,uint param_3)

{
  FUN_1801e8a60(*(undefined4 *)(param_1 + 0x18),param_2,param_3 & 0xffffffe7);
  return;
}



// ===== caseD_0 @ 1801e8a10 (size 78)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 switchD_1801e8c9b::caseD_0(undefined8 param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1801a5650(param_2,0xffffffff,0);
  if ((((int)uVar1 != 1) || ((param_3 & 4) != 0)) || ((*(uint *)(param_2 + 0xd0) & 0x2000) == 0)) {
    uVar1 = 3;
  }
  return uVar1;
}



// ===== FUN_1801e8a60 @ 1801e8a60 (size 288)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e8a60(int param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x138);
  if (plVar1 != (longlong *)0x0) {
    iVar5 = 0;
    if (plVar1[1] != 0) {
      iVar4 = 0;
      iVar2 = FUN_1801958b0();
      if (0 < iVar2) {
        do {
          uVar3 = FUN_180195ae0(plVar1[1],iVar4);
          iVar2 = FUN_1801b96c0(uVar3);
          if (iVar2 == param_1) {
            return 2;
          }
          if ((iVar2 == 0x38e) && ((param_3 & 0x10) != 0)) {
            return 2;
          }
          iVar4 = iVar4 + 1;
          iVar2 = FUN_1801958b0(plVar1[1]);
        } while (iVar4 < iVar2);
      }
    }
    if (*plVar1 != 0) {
      iVar2 = FUN_1801958b0();
      if (0 < iVar2) {
        do {
          uVar3 = FUN_180195ae0(*plVar1,iVar5);
          iVar2 = FUN_1801b96c0(uVar3);
          if ((iVar2 == param_1) || ((iVar2 == 0x38e && ((param_3 & 0x10) != 0)))) {
            return 1;
          }
          iVar5 = iVar5 + 1;
          iVar2 = FUN_1801958b0(*plVar1);
        } while (iVar5 < iVar2);
      }
      return 2;
    }
  }
  if (((((param_3 & 8) == 0) || (uVar3 = FUN_1801a5650(param_2,0xffffffff), (int)uVar3 != 1)) ||
      ((param_3 & 4) != 0)) || ((*(uint *)(param_2 + 0xd0) & 0x2000) == 0)) {
    return 3;
  }
  return uVar3;
}



// ===== FUN_1801e8b80 @ 1801e8b80 (size 71)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801e8b80(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_38 [12];
  undefined8 uStack_8;
  
  uStack_8 = 0x1801e8b8a;
  uVar1 = param_1 - 1;
  if (7 < uVar1) {
    if (DAT_1803c94f0 != 0) {
      local_38[0] = param_1;
      iVar2 = FUN_180195630(DAT_1803c94f0,local_38);
      if (-1 < iVar2) {
        return iVar2 + 8;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_1801e8bd0 @ 1801e8bd0 (size 280)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e8bd0(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int local_38 [2];
  undefined8 uStack_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801e8be5;
  if (param_2 == 0) {
    uVar2 = FUN_1801e8a60(0x38e,param_1,param_3 | 8);
    return uVar2;
  }
  uVar4 = param_2 - 1;
  if (7 < uVar4) {
    if (DAT_1803c94f0 == 0) goto LAB_1801e8cca;
    local_38[0] = param_2;
    iVar1 = FUN_180195630(DAT_1803c94f0,local_38);
    if (iVar1 < 0) goto LAB_1801e8cca;
    uVar4 = iVar1 + 8;
  }
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001801e8c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000000000008)(0,param_1,param_3);
      return uVar2;
    }
    if (7 < (int)uVar4) {
      lVar3 = FUN_180195ae0(DAT_1803c94f0,uVar4 - 8);
                    /* WARNING: Could not recover jumptable at 0x0001801e8cc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar3 + 8))(lVar3,param_1,param_3);
      return uVar2;
    }
    switch(uVar4) {
    case 0:
      goto switchD_1801e8c9b_caseD_0;
    default:
      uVar2 = FUN_1801e8a60(*(undefined4 *)((longlong)(int)uVar4 * 0x28 + 0x1803be9b8),param_1,
                            param_3 | 0x18);
      return uVar2;
    case 5:
    case 6:
      uVar2 = FUN_1801e8a60(*(undefined4 *)((longlong)(int)uVar4 * 0x28 + 0x1803be9b8),param_1,
                            param_3 & 0xffffffe7);
      return uVar2;
    }
  }
LAB_1801e8cca:
  uVar2 = (*(code *)PTR_FUN_1803be990)(param_2,param_1,param_3);
  return uVar2;
switchD_1801e8c9b_caseD_0:
  uStack_10 = 0x1801e8a20;
  uStack_30 = 0x1801e8a37;
  uVar2 = FUN_1801a5650(param_1,0xffffffff,0);
  if ((((int)uVar2 != 1) || ((param_3 & 4) != 0)) || ((*(uint *)(param_1 + 0xd0) & 0x2000) == 0)) {
    uVar2 = 3;
  }
  return uVar2;
}



// ===== FUN_1801e8d10 @ 1801e8d10 (size 304)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e8d10(code *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar5;
  longlong lVar4;
  undefined1 auStack_1178 [32];
  undefined1 *local_1158;
  undefined8 local_1150;
  undefined4 local_1148;
  undefined **local_1140;
  byte local_1138 [4];
  undefined4 local_1134;
  undefined **local_1130;
  undefined8 local_1128 [2];
  undefined1 local_1118 [256];
  char local_1018 [4096];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x1801e8d25;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_1178;
  uVar2 = FUN_1801adc60();
  iVar3 = FUN_1801a69e0(local_1128,&local_1134,&local_1130,local_1138);
  while( true ) {
    if (iVar3 == 0) {
      return;
    }
    FUN_1801a65e0(iVar3,local_1118,0x100);
    local_1140 = &PTR_1802ead18;
    if ((local_1138[0] & 2) != 0) {
      local_1140 = local_1130;
    }
    local_1148 = local_1134;
    local_1150 = local_1128[0];
    local_1158 = local_1118;
    FUN_180196a10(local_1018,0x1000,"%lu:%s:%s:%d:%s\n",uVar2);
    lVar5 = -1;
    do {
      lVar4 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lVar4;
    } while (local_1018[lVar1] != '\0');
    iVar3 = (*param_1)(local_1018,lVar4,param_2);
    if (iVar3 < 1) break;
    iVar3 = FUN_1801a69e0(local_1128,&local_1134,&local_1130,local_1138);
  }
  return;
}



// ===== FUN_1801e8e50 @ 1801e8e50 (size 89)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e8e50(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  FUN_1801a70c0(0x26,0xc1,0x65,"crypto\\engine\\tb_asnmth.c",0x59);
  return 0;
}



// ===== FUN_1801e8ed0 @ 1801e8ed0 (size 205)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e8ed0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  _local_10 = CONCAT44(1,param_3);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = param_2;
  iVar1 = FUN_1801addb0(&DAT_1803c9028);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1803c902c;
  }
  if (iVar2 == 0) {
    FUN_1801a70c0(0x26,0xc5,0x41,"crypto\\engine\\tb_asnmth.c",0xc4);
    return 0;
  }
  FUN_1801add90(DAT_180447968);
  FUN_1801ed610(DAT_1803c94f8,FUN_1801e9120,&local_28);
  if (local_28 != 0) {
    *(int *)(local_28 + 0x9c) = *(int *)(local_28 + 0x9c) + 1;
  }
  *param_1 = local_28;
  FUN_1801ade50(DAT_180447968);
  return uStack_20;
}



// ===== FUN_1801e8fa0 @ 1801e8fa0 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e8fa0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x1801e8fac;
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_1801ed650(&DAT_1803c94f8,FUN_1801e9100,param_1,local_res8[0],iVar1,
                            uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// ===== FUN_1801e9010 @ 1801e9010 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e9010(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_1801ed650(&DAT_1803c94f8,FUN_1801e9100,param_1,local_res8[0],iVar1,
                            CONCAT44(uVar3,1));
      return uVar2;
    }
  }
  return 1;
}



// ===== FUN_1801e9080 @ 1801e9080 (size 125)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e9080(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,&local_res8,0);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        iVar2 = (**(code **)(param_1 + 0x50))
                          (param_1,&local_res10,0,*(undefined4 *)(local_res8 + lVar3 * 4));
        if (iVar2 != 0) {
          FUN_1801c4de0(local_res10);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
  }
  return;
}



// ===== FUN_1801e9120 @ 1801e9120 (size 214)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e9120(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  longlong local_res20;
  
  if (param_4[1] == 0) {
    iVar5 = 0;
    iVar2 = FUN_1801958b0(param_2);
    if (0 < iVar2) {
      do {
        lVar3 = FUN_180195ae0(param_2,iVar5);
        (**(code **)(lVar3 + 0x50))(lVar3,&local_res20,0,param_1);
        if (local_res20 != 0) {
          _Str1 = *(char **)(local_res20 + 0x10);
          cVar1 = *_Str1;
          pcVar6 = _Str1;
          for (uVar4 = 0; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar6;
          }
          if (((uVar4 & 0x7fffffff) == *(uint *)(param_4 + 3)) &&
             (iVar2 = _strnicmp(_Str1,(char *)param_4[2],(longlong)(int)*(uint *)(param_4 + 3)),
             iVar2 == 0)) {
            param_4[1] = local_res20;
            *param_4 = lVar3;
            return;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = FUN_1801958b0(param_2);
      } while (iVar5 < iVar2);
    }
  }
  return;
}



// ===== FUN_1801e9220 @ 1801e9220 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e9220(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 1;
  }
  uVar1 = FUN_1801ed650(&DAT_1803c9500,FUN_1801e92d0,param_1,&DAT_18033227c,1,0,0x1801e922a);
  return uVar1;
}



// ===== FUN_1801e9280 @ 1801e9280 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e9280(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 1;
  }
  uVar1 = FUN_1801ed650(&DAT_1803c9500,FUN_1801e92d0,param_1,&DAT_18033227c,1,1,0x1801e928a);
  return uVar1;
}



// ===== FUN_1801e9320 @ 1801e9320 (size 205)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e9320(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = FUN_1801958b0(DAT_1803c9510);
  while (0 < iVar1) {
    plVar2 = (longlong *)FUN_1801958c0(DAT_1803c9510);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
      if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(plVar2);
        lVar3 = *plVar2;
      }
      *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
      FUN_180195e10(plVar2[1],"crypto\\conf\\conf_mod.c",0x19a);
      FUN_180195e10(plVar2[2],"crypto\\conf\\conf_mod.c",0x19b);
      FUN_180195e10(plVar2,"crypto\\conf\\conf_mod.c",0x19c);
    }
    iVar1 = FUN_1801958b0(DAT_1803c9510);
  }
  FUN_180195650(DAT_1803c9510);
  DAT_1803c9510 = 0;
  return;
}



// ===== FUN_1801e93f0 @ 1801e93f0 (size 530)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801e93f0(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar4 = 0;
  lVar6 = 0;
  lVar5 = FUN_18021c850(0);
  if (lVar5 == 0) {
LAB_1801e951b:
    if (param_1 != 0) goto LAB_1801e9535;
  }
  else {
    if (param_1 != 0) {
      lVar6 = param_1;
LAB_1801e94ec:
      iVar1 = FUN_18021c800(lVar5,lVar6,0);
      if (iVar1 < 1) {
        if (((param_3 & 0x10) == 0) || (uVar2 = FUN_1801a6f70(), (uVar2 & 0xfff) != 0x72))
        goto LAB_1801e951b;
LAB_1801e9513:
        FUN_1801a64b0();
      }
      else {
        if (param_2 == 0) {
LAB_1801e9581:
          lVar8 = FUN_18021c750(lVar5,0,"openssl_conf");
          if (lVar8 == 0) goto LAB_1801e9513;
        }
        else {
          lVar8 = FUN_18021c750(lVar5,0,param_2);
          if (lVar8 == 0) {
            if ((param_3 & 0x20) == 0) goto LAB_1801e9513;
            goto LAB_1801e9581;
          }
        }
        lVar8 = FUN_18021c6e0(lVar5,lVar8);
        if (lVar8 == 0) goto LAB_1801e951b;
        iVar3 = FUN_1801958b0(lVar8);
        iVar1 = iVar4;
        if (0 < iVar3) {
          do {
            lVar9 = FUN_180195ae0(lVar8,iVar1);
            iVar4 = FUN_1801e9940(lVar5,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),
                                  param_3);
            if ((iVar4 < 1) && ((param_3 & 1) == 0)) goto LAB_1801e951b;
            iVar1 = iVar1 + 1;
            iVar4 = FUN_1801958b0(lVar8);
          } while (iVar1 < iVar4);
        }
      }
      iVar4 = 1;
      goto LAB_1801e951b;
    }
    lVar6 = FUN_1801d1970("OPENSSL_CONF");
    if (lVar6 == 0) {
      lVar6 = FUN_1801d19b0();
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(char *)(lVar6 + lVar8) != '\0');
      lVar8 = (longlong)((int)lVar8 + 0xd);
      lVar6 = FUN_180195dc0(lVar8,"crypto\\conf\\conf_mod.c",0x1f0);
      if (lVar6 != 0) {
        uVar7 = FUN_1801d19b0();
        FUN_180196a10(lVar6,lVar8,"%s%s%s",uVar7,&DAT_1802fc89c,"openssl.cnf");
        goto LAB_1801e94e2;
      }
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_1801ba320(lVar6,"crypto\\conf\\conf_mod.c",0x1e7);
LAB_1801e94e2:
      if (lVar6 != 0) goto LAB_1801e94ec;
    }
  }
  FUN_180195e10(lVar6,"crypto\\conf\\conf_mod.c",0x8e);
LAB_1801e9535:
  FUN_18021c590(lVar5);
  if ((param_3 & 2) != 0) {
    iVar4 = 1;
  }
  return iVar4;
}



// ===== FUN_1801e9610 @ 1801e9610 (size 317)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801e9610(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar6;
  longlong lVar5;
  undefined8 uVar7;
  byte *pbVar8;
  
  if (param_1 == (byte *)0x0) {
    FUN_1801a70c0(0xe,0x77,0x73,"crypto\\conf\\conf_mod.c",0x209,0x1801e9624);
    return 0;
  }
  while( true ) {
    if (param_3 != 0) {
      bVar2 = *param_1;
      while ((bVar2 != 0 && (iVar3 = isspace((uint)bVar2), iVar3 != 0))) {
        bVar2 = param_1[1];
        param_1 = param_1 + 1;
      }
    }
    pbVar4 = (byte *)strchr((char *)param_1,param_2);
    if ((pbVar4 == param_1) || (*param_1 == 0)) {
      iVar3 = 0;
      param_1 = (byte *)0x0;
    }
    else {
      if (pbVar4 == (byte *)0x0) {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (param_1[lVar5] != 0);
        pbVar8 = param_1 + lVar6;
      }
      else {
        pbVar8 = pbVar4 + -1;
      }
      if (param_3 != 0) {
        iVar3 = isspace((uint)*pbVar8);
        while (iVar3 != 0) {
          pbVar1 = pbVar8 + -1;
          pbVar8 = pbVar8 + -1;
          iVar3 = isspace((uint)*pbVar1);
        }
      }
      iVar3 = ((int)pbVar8 - (int)param_1) + 1;
    }
    uVar7 = (*param_4)(param_1,iVar3,param_5);
    if ((int)uVar7 < 1) break;
    if (pbVar4 == (byte *)0x0) {
      return 1;
    }
    param_1 = pbVar4 + 1;
  }
  return uVar7;
}



// ===== FUN_1801e9750 @ 1801e9750 (size 205)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e9750(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_1801e9320();
  FUN_1801e9320();
  iVar1 = FUN_1801958b0(DAT_1803c9508);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_180195ae0(DAT_1803c9508,iVar1);
      FUN_180195480(DAT_1803c9508,iVar1);
      FUN_18021cab0(*puVar2);
      FUN_180195e10(puVar2[1],"crypto\\conf\\conf_mod.c",0x180);
      FUN_180195e10(puVar2,"crypto\\conf\\conf_mod.c",0x181);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  iVar1 = FUN_1801958b0(DAT_1803c9508);
  if (iVar1 == 0) {
    FUN_180195650(DAT_1803c9508);
    DAT_1803c9508 = 0;
  }
  return;
}



// ===== FUN_1801e9820 @ 1801e9820 (size 288)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
FUN_1801e9820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801e983b;
  if ((DAT_1803c9508 == 0) && (DAT_1803c9508 = FUN_1801957e0(), DAT_1803c9508 == 0)) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_180196100(0x30,"crypto\\conf\\conf_mod.c",0xee);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_1801a70c0(0xe,0x7a,0x41,"crypto\\conf\\conf_mod.c",0xef,uVar4);
  }
  else {
    *puVar2 = param_1;
    lVar3 = FUN_1801ba320(param_2,"crypto\\conf\\conf_mod.c",0xf4);
    puVar2[1] = lVar3;
    puVar2[2] = param_3;
    puVar2[3] = param_4;
    if (lVar3 == 0) {
      uVar4 = 0xf8;
    }
    else {
      iVar1 = FUN_180195990(DAT_1803c9508,puVar2);
      if (iVar1 != 0) {
        return puVar2;
      }
      FUN_180195e10(puVar2[1],"crypto\\conf\\conf_mod.c",0xfd);
      uVar4 = 0xfe;
    }
    FUN_180195e10(puVar2,"crypto\\conf\\conf_mod.c",uVar4);
  }
  return (undefined8 *)0x0;
}



// ===== FUN_1801e9940 @ 1801e9940 (size 967)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801e9940(undefined8 param_1,char *param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  char *local_78;
  char *local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801e9956;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  pcVar2 = strrchr(param_2,0x2e);
  if (pcVar2 == (char *)0x0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != '\0');
    iVar8 = (int)lVar3;
  }
  else {
    iVar8 = (int)pcVar2 - (int)param_2;
  }
  iVar9 = 0;
  iVar7 = 0;
  iVar1 = FUN_1801958b0(DAT_1803c9508);
  if (0 < iVar1) {
    do {
      lVar3 = FUN_180195ae0(DAT_1803c9508,iVar7);
      iVar1 = strncmp(*(char **)(lVar3 + 8),param_2,(longlong)iVar8);
      if (iVar1 == 0) goto LAB_1801e9b39;
      iVar7 = iVar7 + 1;
      iVar1 = FUN_1801958b0(DAT_1803c9508);
    } while (iVar7 < iVar1);
  }
  if ((param_4 & 8) != 0) goto LAB_1801e9ad5;
  pcVar2 = (char *)FUN_18021c750(param_1,param_3,&DAT_1802ea938);
  if (pcVar2 == (char *)0x0) {
    FUN_1801a64b0();
    pcVar2 = param_2;
  }
  lVar4 = FUN_18021cbc0(0,pcVar2,0,0);
  if (lVar4 == 0) {
    iVar9 = 0x6e;
  }
  else {
    lVar3 = FUN_18021c8d0(lVar4,"OPENSSL_init");
    if (lVar3 == 0) {
      iVar9 = 0x70;
    }
    else {
      uVar5 = FUN_18021c8d0(lVar4,"OPENSSL_finish");
      lVar3 = FUN_1801e9820(lVar4,param_2,lVar3,uVar5);
      if (lVar3 != 0) {
LAB_1801e9b39:
        iVar8 = 1;
        plVar6 = (longlong *)FUN_180195dc0(0x28,"crypto\\conf\\conf_mod.c",0x12a);
        if (plVar6 == (longlong *)0x0) {
LAB_1801e9c05:
          if ((*(code **)(lVar3 + 0x18) != (code *)0x0) && (iVar9 != 0)) {
            (**(code **)(lVar3 + 0x18))(plVar6);
          }
        }
        else {
          *plVar6 = lVar3;
          lVar4 = FUN_1801ba320(param_2,"crypto\\conf\\conf_mod.c",0x12f);
          plVar6[1] = lVar4;
          lVar4 = FUN_1801ba320(param_3,"crypto\\conf\\conf_mod.c",0x130);
          plVar6[2] = lVar4;
          plVar6[4] = 0;
          if ((plVar6[1] != 0) && (lVar4 != 0)) {
            if (*(code **)(lVar3 + 0x10) != (code *)0x0) {
              iVar8 = (**(code **)(lVar3 + 0x10))(plVar6,param_1);
              iVar9 = 1;
              if (iVar8 < 1) goto LAB_1801e9c05;
            }
            if ((DAT_1803c9510 == 0) && (DAT_1803c9510 = FUN_1801957e0(), DAT_1803c9510 == 0)) {
              local_78 = (char *)CONCAT44(local_78._4_4_,0x142);
            }
            else {
              iVar1 = FUN_180195990(DAT_1803c9510,plVar6);
              if (iVar1 != 0) {
                *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
                if (0 < iVar8) {
                  return iVar8;
                }
                goto LAB_1801e9c63;
              }
              local_78 = (char *)CONCAT44(local_78._4_4_,0x148);
            }
            FUN_1801a70c0(0xe,0x73,0x41,"crypto\\conf\\conf_mod.c");
            goto LAB_1801e9c05;
          }
        }
        if (plVar6 != (longlong *)0x0) {
          FUN_180195e10(plVar6[1],"crypto\\conf\\conf_mod.c",0x158);
          FUN_180195e10(plVar6[2],"crypto\\conf\\conf_mod.c",0x159);
          FUN_180195e10(plVar6,"crypto\\conf\\conf_mod.c",0x15a);
        }
        iVar8 = -1;
LAB_1801e9c63:
        if ((param_4 & 4) == 0) {
          local_78 = (char *)CONCAT44(local_78._4_4_,0xb1);
          FUN_1801a70c0(0xe,0x76,0x6d,"crypto\\conf\\conf_mod.c");
          FUN_180196a10(local_58,0xd,&DAT_1803322b0,iVar8);
          local_68 = local_58;
          local_70 = ", retcode=";
          local_78 = (char *)param_3;
          FUN_1801a6360(6,"module=",param_2,", value=");
          return iVar8;
        }
        return iVar8;
      }
    }
  }
  FUN_18021cab0(lVar4);
  local_78 = (char *)CONCAT44(local_78._4_4_,0xe0);
  FUN_1801a70c0(0xe,0x75,iVar9,"crypto\\conf\\conf_mod.c");
  local_78 = pcVar2;
  FUN_1801a6360(4,"module=",param_2,", path=");
LAB_1801e9ad5:
  if ((param_4 & 4) == 0) {
    local_78 = (char *)CONCAT44(local_78._4_4_,0xa5);
    FUN_1801a70c0(0xe,0x76,0x71,"crypto\\conf\\conf_mod.c");
    FUN_1801a6360(2,"module=",param_2);
  }
  return -1;
}



// ===== FUN_1801e9d10 @ 1801e9d10 (size 344)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e9d10(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 * 2 ^ uVar3;
  FUN_1801eb6c0(param_1,param_4,0);
  FUN_1801eb6c0(param_1,param_3,1);
  FUN_1801eb6c0(param_1,param_2,0);
  uVar1 = (param_1[1] >> 1 ^ *param_1) & 0x55555555;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 * 2;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 4 ^ uVar2) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 << 4 ^ uVar3;
  return;
}



// ===== FUN_1801e9e70 @ 1801e9e70 (size 1260)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e9e70(uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7,int param_8)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint local_res8;
  uint local_resc;
  
  iVar8 = param_3 - 8;
  uVar4 = *param_7;
  uVar3 = param_7[1];
  if (param_8 == 0) {
    if (-1 < iVar8) {
      uVar7 = (ulonglong)(param_3 >> 3);
      iVar8 = iVar8 + (param_3 >> 3) * -8;
      uVar5 = uVar4;
      uVar9 = uVar3;
      do {
        uVar4 = *param_1;
        uVar3 = param_1[1];
        param_1 = param_1 + 2;
        local_res8 = uVar4;
        local_resc = uVar3;
        FUN_1801e9d10(&local_res8,param_4,param_5,param_6);
        local_resc = local_resc ^ uVar9;
        local_res8 = local_res8 ^ uVar5;
        *param_2 = (char)local_res8;
        param_2[1] = (char)(local_res8 >> 8);
        param_2[2] = (char)(local_res8 >> 0x10);
        param_2[3] = (char)(local_res8 >> 0x18);
        param_2[4] = (char)local_resc;
        param_2[5] = (char)(local_resc >> 8);
        param_2[6] = (char)(local_resc >> 0x10);
        param_2[7] = (char)(local_resc >> 0x18);
        param_2 = param_2 + 8;
        uVar7 = uVar7 - 1;
        uVar5 = uVar4;
        uVar9 = uVar3;
      } while (uVar7 != 0);
    }
    uVar5 = uVar4;
    uVar9 = uVar3;
    if (iVar8 != -8) {
      uVar5 = *param_1;
      uVar9 = param_1[1];
      local_res8 = uVar5;
      local_resc = uVar9;
      FUN_1801e9d10(&local_res8,param_4,param_5,param_6);
      local_res8 = local_res8 ^ uVar4;
      local_resc = local_resc ^ uVar3;
      param_2 = param_2 + (iVar8 + 8);
      switch(iVar8) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_resc >> 0x18);
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_resc >> 0x10);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_resc >> 8);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)local_resc;
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_res8 >> 0x18);
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_res8 >> 0x10);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_res8 >> 8);
      case -7:
        param_2[-1] = (char)local_res8;
      default:
      }
    }
  }
  else {
    local_res8 = uVar4;
    local_resc = uVar3;
    if (-1 < iVar8) {
      uVar7 = (ulonglong)(param_3 >> 3);
      iVar8 = iVar8 + (param_3 >> 3) * -8;
      do {
        puVar1 = param_1 + 1;
        local_res8 = *param_1 ^ local_res8;
        param_1 = param_1 + 2;
        local_resc = *puVar1 ^ local_resc;
        FUN_1801ec860(&local_res8,param_4,param_5,param_6);
        *param_2 = (char)local_res8;
        param_2[1] = (char)(local_res8 >> 8);
        param_2[2] = (char)(local_res8 >> 0x10);
        param_2[3] = (char)(local_res8 >> 0x18);
        param_2[4] = (char)local_resc;
        param_2[5] = (char)(local_resc >> 8);
        param_2[6] = (char)(local_resc >> 0x10);
        param_2[7] = (char)(local_resc >> 0x18);
        param_2 = param_2 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar5 = local_res8;
    uVar9 = local_resc;
    if (iVar8 != -8) {
      lVar6 = (longlong)param_1 + (longlong)(iVar8 + 8);
      uVar4 = 0;
      uVar3 = 0;
      uVar5 = 0;
      switch(iVar8) {
      case 0:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar3 = (uint)*pbVar2 << 0x18;
      case -1:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar3 = uVar3 | (uint)*pbVar2 << 0x10;
      case -2:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar3 = uVar3 | (uint)*pbVar2 << 8;
      case -3:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar4 = uVar3 | *pbVar2;
      case -4:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar5 = (uint)*pbVar2 << 0x18;
      case -5:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar5 = uVar5 | (uint)*pbVar2 << 0x10;
      case -6:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar5 = uVar5 | (uint)*pbVar2 << 8;
      case -7:
        uVar3 = uVar4;
        uVar5 = uVar5 | *(byte *)(lVar6 + -1);
      default:
        local_res8 = uVar5 ^ local_res8;
        local_resc = uVar3 ^ local_resc;
        FUN_1801ec860(&local_res8,param_4,param_5,param_6);
        *param_2 = (char)local_res8;
        param_2[1] = (char)(local_res8 >> 8);
        param_2[2] = (char)(local_res8 >> 0x10);
        param_2[3] = (char)(local_res8 >> 0x18);
        param_2[4] = (char)local_resc;
        param_2[5] = (char)(local_resc >> 8);
        param_2[6] = (char)(local_resc >> 0x10);
        param_2[7] = (char)(local_resc >> 0x18);
        uVar5 = local_res8;
        uVar9 = local_resc;
      }
    }
  }
  *(char *)param_7 = (char)uVar5;
  *(char *)((longlong)param_7 + 1) = (char)(uVar5 >> 8);
  *(char *)((longlong)param_7 + 2) = (char)(uVar5 >> 0x10);
  *(char *)((longlong)param_7 + 3) = (char)(uVar5 >> 0x18);
  *(char *)(param_7 + 1) = (char)uVar9;
  *(char *)((longlong)param_7 + 5) = (char)(uVar9 >> 8);
  *(char *)((longlong)param_7 + 6) = (char)(uVar9 >> 0x10);
  *(char *)((longlong)param_7 + 7) = (char)(uVar9 >> 0x18);
  return;
}



// ===== FUN_1801ea3a0 @ 1801ea3a0 (size 4891)

void FUN_1801ea3a0(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar4 = *param_1 ^ uVar1;
  uVar5 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar4 >> 0x10 ^ uVar5;
  uVar5 = uVar5 ^ uVar1 & 0xffff;
  uVar4 = uVar4 ^ uVar1 << 0x10;
  uVar1 = (uVar5 >> 2 ^ uVar4) & 0x33333333;
  uVar4 = uVar4 ^ uVar1;
  uVar5 = uVar5 ^ uVar1 * 4;
  uVar1 = (uVar4 >> 8 ^ uVar5) & 0xff00ff;
  uVar5 = uVar5 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 << 8;
  uVar1 = (uVar5 >> 1 ^ uVar4) & 0x55555555;
  uVar4 = uVar1 ^ uVar4;
  uVar4 = uVar4 >> 0x1d | uVar4 << 3;
  uVar5 = uVar1 * 2 ^ uVar5;
  uVar1 = uVar5 >> 0x1d | uVar5 << 3;
  if (param_3 == 0) {
    uVar5 = (param_2[0x1f] ^ uVar4) >> 4;
    uVar2 = param_2[0x1e] ^ uVar4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x1f] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar5 = (param_2[0x1d] ^ uVar1) >> 4;
    uVar2 = param_2[0x1c] ^ uVar1;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x1d] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x1a] ^ uVar4;
    uVar5 = (param_2[0x1b] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x1b] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x18] ^ uVar1;
    uVar5 = (param_2[0x19] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x19] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x16] ^ uVar4;
    uVar5 = (param_2[0x17] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x17] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x14] ^ uVar1;
    uVar5 = (param_2[0x15] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x15] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x12] ^ uVar4;
    uVar5 = (param_2[0x13] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x13] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x10] ^ uVar1;
    uVar5 = (param_2[0x11] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x11] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0xe] ^ uVar4;
    uVar5 = (param_2[0xf] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0xf] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0xc] ^ uVar1;
    uVar5 = (param_2[0xd] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0xd] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[10] ^ uVar4;
    uVar5 = (param_2[0xb] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0xb] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[8] ^ uVar1;
    uVar5 = (param_2[9] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[9] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[6] ^ uVar4;
    uVar5 = (param_2[7] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[7] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[4] ^ uVar1;
    uVar5 = (param_2[5] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[5] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[2] ^ uVar4;
    uVar2 = (param_2[3] ^ uVar4) >> 4;
    uVar5 = *param_2;
    uVar3 = *(uint *)(&DAT_180332720 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332520 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332320 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332820 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_180332620 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_180332420 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_180332920 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_180332a20 +
                     (ulonglong)((uVar2 | (param_2[3] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[1];
  }
  else {
    uVar5 = (param_2[1] ^ uVar4) >> 4;
    uVar2 = uVar4 ^ *param_2;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[1] ^ uVar4) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4);
    uVar5 = (param_2[3] ^ uVar1) >> 4;
    uVar2 = param_2[2] ^ uVar1;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[3] ^ uVar1) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4);
    uVar2 = param_2[4] ^ uVar4;
    uVar5 = (param_2[5] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[5] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[6] ^ uVar1;
    uVar5 = (param_2[7] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[7] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[8] ^ uVar4;
    uVar5 = (param_2[9] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[9] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[10] ^ uVar1;
    uVar5 = (param_2[0xb] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0xb] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0xc] ^ uVar4;
    uVar5 = (param_2[0xd] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0xd] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0xe] ^ uVar1;
    uVar5 = (param_2[0xf] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0xf] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x10] ^ uVar4;
    uVar5 = (param_2[0x11] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x11] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x12] ^ uVar1;
    uVar5 = (param_2[0x13] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x13] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x14] ^ uVar4;
    uVar5 = (param_2[0x15] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x15] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x16] ^ uVar1;
    uVar5 = (param_2[0x17] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x17] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x18] ^ uVar4;
    uVar5 = (param_2[0x19] ^ uVar4) >> 4;
    uVar1 = uVar1 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x19] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x1a] ^ uVar1;
    uVar5 = (param_2[0x1b] ^ uVar1) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar5 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar5 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar5 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar5 | (param_2[0x1b] ^ uVar1) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1c] ^ uVar4;
    uVar2 = (param_2[0x1d] ^ uVar4) >> 4;
    uVar5 = param_2[0x1e];
    uVar3 = *(uint *)(&DAT_180332720 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332520 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332320 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332820 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_180332620 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_180332420 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_180332920 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_180332a20 +
                     (ulonglong)((uVar2 | (param_2[0x1d] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x1f];
  }
  uVar1 = uVar1 ^ uVar3;
  uVar5 = uVar5 ^ uVar1;
  uVar3 = (uVar2 ^ uVar1) >> 4;
  uVar6 = uVar1 >> 3 | uVar1 << 0x1d;
  uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar5 >> 0x12 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180332520 + (ulonglong)(uVar5 >> 10 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180332320 + (ulonglong)(uVar5 >> 2 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                  *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                  *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                  *(uint *)(&DAT_180332920 + (ulonglong)(uVar5 >> 0x1a) * 4) ^
                  *(uint *)(&DAT_180332a20 +
                           (ulonglong)((uVar3 | (uVar2 ^ uVar1) << 0x1c) >> 0x1a) * 4);
  uVar4 = uVar4 >> 3 | uVar4 << 0x1d;
  uVar1 = (uVar4 >> 1 ^ uVar6) & 0x55555555;
  uVar6 = uVar6 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 * 2;
  uVar1 = (uVar6 >> 8 ^ uVar4) & 0xff00ff;
  uVar4 = uVar4 ^ uVar1;
  uVar6 = uVar6 ^ uVar1 << 8;
  uVar1 = (uVar4 >> 2 ^ uVar6) & 0x33333333;
  uVar6 = uVar6 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 * 4;
  uVar1 = uVar6 >> 0x10 ^ uVar4;
  uVar4 = uVar4 ^ uVar1 & 0xffff;
  uVar6 = uVar6 ^ uVar1 << 0x10;
  uVar1 = (uVar4 >> 4 ^ uVar6) & 0xf0f0f0f;
  param_1[1] = uVar1 << 4 ^ uVar4;
  *param_1 = uVar1 ^ uVar6;
  return;
}



// ===== FUN_1801eb6c0 @ 1801eb6c0 (size 4512)

void FUN_1801eb6c0(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1 >> 0x1d | *param_1 << 3;
  uVar5 = param_1[1] >> 0x1d | param_1[1] << 3;
  if (param_3 == 0) {
    uVar3 = (param_2[0x1f] ^ uVar4) >> 4;
    uVar1 = param_2[0x1e] ^ uVar4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x1f] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = (param_2[0x1d] ^ uVar5) >> 4;
    uVar1 = param_2[0x1c] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x1d] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x1a] ^ uVar4;
    uVar3 = (param_2[0x1b] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x1b] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x18] ^ uVar5;
    uVar3 = (param_2[0x19] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x19] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x16] ^ uVar4;
    uVar3 = (param_2[0x17] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x17] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x14] ^ uVar5;
    uVar3 = (param_2[0x15] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x15] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x12] ^ uVar4;
    uVar3 = (param_2[0x13] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x13] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x10] ^ uVar5;
    uVar3 = (param_2[0x11] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x11] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0xe] ^ uVar4;
    uVar3 = (param_2[0xf] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0xf] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0xc] ^ uVar5;
    uVar3 = (param_2[0xd] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0xd] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[10] ^ uVar4;
    uVar3 = (param_2[0xb] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0xb] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[8] ^ uVar5;
    uVar3 = (param_2[9] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[9] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[6] ^ uVar4;
    uVar3 = (param_2[7] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[7] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[4] ^ uVar5;
    uVar3 = (param_2[5] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[5] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[2] ^ uVar4;
    uVar1 = (param_2[3] ^ uVar4) >> 4;
    uVar3 = *param_2;
    uVar2 = *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332820 + (ulonglong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_180332620 + (ulonglong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_180332420 + (ulonglong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_180332a20 +
                     (ulonglong)((uVar1 | (param_2[3] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[1];
  }
  else {
    uVar3 = (param_2[1] ^ uVar4) >> 4;
    uVar1 = uVar4 ^ *param_2;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[1] ^ uVar4) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = (param_2[3] ^ uVar5) >> 4;
    uVar1 = param_2[2] ^ uVar5;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[3] ^ uVar5) << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar1 = param_2[4] ^ uVar4;
    uVar3 = (param_2[5] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[5] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[6] ^ uVar5;
    uVar3 = (param_2[7] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[7] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[8] ^ uVar4;
    uVar3 = (param_2[9] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[9] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[10] ^ uVar5;
    uVar3 = (param_2[0xb] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0xb] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0xc] ^ uVar4;
    uVar3 = (param_2[0xd] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0xd] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0xe] ^ uVar5;
    uVar3 = (param_2[0xf] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0xf] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x10] ^ uVar4;
    uVar3 = (param_2[0x11] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x11] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x12] ^ uVar5;
    uVar3 = (param_2[0x13] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x13] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x14] ^ uVar4;
    uVar3 = (param_2[0x15] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x15] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x16] ^ uVar5;
    uVar3 = (param_2[0x17] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x17] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x18] ^ uVar4;
    uVar3 = (param_2[0x19] ^ uVar4) >> 4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x19] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x1a] ^ uVar5;
    uVar3 = (param_2[0x1b] ^ uVar5) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332520 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332320 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180332820 + (ulonglong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
                    *(uint *)(&DAT_180332620 + (ulonglong)((uVar3 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_180332420 + (ulonglong)((uVar3 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_180332920 + (ulonglong)(uVar1 >> 0x1a) * 4) ^
                    *(uint *)(&DAT_180332a20 +
                             (ulonglong)((uVar3 | (param_2[0x1b] ^ uVar5) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x1c] ^ uVar4;
    uVar1 = (param_2[0x1d] ^ uVar4) >> 4;
    uVar3 = param_2[0x1e];
    uVar2 = *(uint *)(&DAT_180332720 + (ulonglong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332520 + (ulonglong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332320 + (ulonglong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_180332820 + (ulonglong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_180332620 + (ulonglong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_180332420 + (ulonglong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_180332920 + (ulonglong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_180332a20 +
                     (ulonglong)((uVar1 | (param_2[0x1d] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar1 = param_2[0x1f];
  }
  uVar5 = uVar5 ^ uVar2;
  uVar3 = uVar3 ^ uVar5;
  uVar2 = (uVar1 ^ uVar5) >> 4;
  uVar4 = uVar4 ^ *(uint *)(&DAT_180332720 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180332520 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180332320 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                  *(uint *)(&DAT_180332820 + (ulonglong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
                  *(uint *)(&DAT_180332620 + (ulonglong)((uVar2 & 0xfc00) >> 10) * 4) ^
                  *(uint *)(&DAT_180332420 + (ulonglong)((uVar2 & 0xfc) >> 2) * 4) ^
                  *(uint *)(&DAT_180332920 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                  *(uint *)(&DAT_180332a20 +
                           (ulonglong)((uVar2 | (uVar1 ^ uVar5) << 0x1c) >> 0x1a) * 4);
  param_1[1] = uVar4 >> 3 | uVar4 << 0x1d;
  *param_1 = uVar5 >> 3 | uVar5 << 0x1d;
  return;
}



// ===== FUN_1801ec860 @ 1801ec860 (size 344)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ec860(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 * 2 ^ uVar3;
  FUN_1801eb6c0(param_1,param_2,1);
  FUN_1801eb6c0(param_1,param_3,0);
  FUN_1801eb6c0(param_1,param_4,1);
  uVar1 = (param_1[1] >> 1 ^ *param_1) & 0x55555555;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 * 2;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 4;
  uVar1 = uVar2 >> 0x10 ^ uVar3;
  uVar3 = uVar3 ^ uVar1 & 0xffff;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 4 ^ uVar2) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar1 << 4 ^ uVar3;
  return;
}



// ===== FUN_1801ec9c0 @ 1801ec9c0 (size 1203)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ec9c0(uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,uint *param_5,
                  int param_6)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint local_38;
  uint local_34;
  undefined8 uStack_30;
  
  uStack_30 = 0x1801ec9e1;
  iVar8 = param_3 - 8;
  uVar4 = *param_5;
  uVar3 = param_5[1];
  if (param_6 == 0) {
    if (-1 < iVar8) {
      uVar7 = (ulonglong)(param_3 >> 3);
      iVar8 = iVar8 + (param_3 >> 3) * -8;
      uVar5 = uVar4;
      uVar9 = uVar3;
      do {
        uVar4 = *param_1;
        uVar3 = param_1[1];
        param_1 = param_1 + 2;
        local_38 = uVar4;
        local_34 = uVar3;
        FUN_1801ea3a0(&local_38,param_4,0);
        local_38 = local_38 ^ uVar5;
        *param_2 = (char)local_38;
        local_34 = local_34 ^ uVar9;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2 = param_2 + 8;
        uVar7 = uVar7 - 1;
        uVar5 = uVar4;
        uVar9 = uVar3;
      } while (uVar7 != 0);
    }
    uVar5 = uVar4;
    uVar9 = uVar3;
    if (iVar8 != -8) {
      uVar5 = *param_1;
      uVar9 = param_1[1];
      local_38 = uVar5;
      local_34 = uVar9;
      FUN_1801ea3a0(&local_38,param_4,0);
      local_38 = local_38 ^ uVar4;
      local_34 = local_34 ^ uVar3;
      param_2 = param_2 + (iVar8 + 8);
      switch(iVar8) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x18);
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x10);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 8);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)local_34;
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 0x18);
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 0x10);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 8);
      case -7:
        param_2[-1] = (char)local_38;
      default:
      }
    }
  }
  else {
    local_38 = uVar4;
    local_34 = uVar3;
    if (-1 < iVar8) {
      uVar7 = (ulonglong)(param_3 >> 3);
      iVar8 = iVar8 + (param_3 >> 3) * -8;
      do {
        puVar1 = param_1 + 1;
        local_38 = *param_1 ^ local_38;
        param_1 = param_1 + 2;
        local_34 = *puVar1 ^ local_34;
        FUN_1801ea3a0(&local_38,param_4,1);
        *param_2 = (char)local_38;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        param_2 = param_2 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar5 = local_38;
    uVar9 = local_34;
    if (iVar8 != -8) {
      lVar6 = (longlong)param_1 + (longlong)(iVar8 + 8);
      uVar4 = 0;
      uVar3 = 0;
      uVar5 = 0;
      switch(iVar8) {
      case 0:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar3 = (uint)*pbVar2 << 0x18;
      case -1:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar3 = uVar3 | (uint)*pbVar2 << 0x10;
      case -2:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar3 = uVar3 | (uint)*pbVar2 << 8;
      case -3:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar4 = uVar3 | *pbVar2;
      case -4:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar5 = (uint)*pbVar2 << 0x18;
      case -5:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar5 = uVar5 | (uint)*pbVar2 << 0x10;
      case -6:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar5 = uVar5 | (uint)*pbVar2 << 8;
      case -7:
        uVar3 = uVar4;
        uVar5 = uVar5 | *(byte *)(lVar6 + -1);
      default:
        local_38 = uVar5 ^ local_38;
        local_34 = uVar3 ^ local_34;
        FUN_1801ea3a0(&local_38,param_4,1);
        *param_2 = (char)local_38;
        param_2[1] = (char)(local_38 >> 8);
        param_2[2] = (char)(local_38 >> 0x10);
        param_2[3] = (char)(local_38 >> 0x18);
        param_2[4] = (char)local_34;
        param_2[5] = (char)(local_34 >> 8);
        param_2[6] = (char)(local_34 >> 0x10);
        param_2[7] = (char)(local_34 >> 0x18);
        uVar5 = local_38;
        uVar9 = local_34;
      }
    }
  }
  *(char *)param_5 = (char)uVar5;
  *(char *)((longlong)param_5 + 1) = (char)(uVar5 >> 8);
  *(char *)((longlong)param_5 + 2) = (char)(uVar5 >> 0x10);
  *(char *)((longlong)param_5 + 3) = (char)(uVar5 >> 0x18);
  *(char *)(param_5 + 1) = (char)uVar9;
  *(char *)((longlong)param_5 + 5) = (char)(uVar9 >> 8);
  *(char *)((longlong)param_5 + 6) = (char)(uVar9 >> 0x10);
  *(char *)((longlong)param_5 + 7) = (char)(uVar9 >> 0x18);
  return;
}



// ===== FUN_1801ecec0 @ 1801ecec0 (size 121)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801ecec0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  Ordinal_112(0);
  iVar1 = Ordinal_19((longlong)*(int *)(param_1 + 0x30),param_2,param_3,0);
  FUN_18018cf60(param_1,0xf);
  if (iVar1 < 1) {
    iVar2 = FUN_1801ed2a0(iVar1);
    if (iVar2 != 0) {
      FUN_18018dc60(param_1,10);
    }
  }
  return iVar1;
}



// ===== FUN_1801ecf40 @ 1801ecf40 (size 173)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801ecf40(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  Ordinal_112(0);
  iVar1 = Ordinal_16((longlong)*(int *)(param_1 + 0x30),param_2,param_3,0);
  FUN_18018cf60(param_1,0xf);
  if (iVar1 < 1) {
    iVar2 = FUN_1801ed2a0(iVar1);
    if (iVar2 == 0) {
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x800;
        return 0;
      }
      return iVar1;
    }
    FUN_18018dc60(param_1,9);
  }
  return iVar1;
}



// ===== FUN_1801ecff0 @ 1801ecff0 (size 149)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801ecff0(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  cVar1 = *param_2;
  pcVar4 = param_2;
  for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  Ordinal_112(0);
  iVar2 = Ordinal_19((longlong)*(int *)(param_1 + 0x30),param_2,uVar5 & 0x7fffffff,0);
  FUN_18018cf60(param_1,0xf);
  if ((iVar2 < 1) && (iVar3 = FUN_1801ed2a0(iVar2), iVar3 != 0)) {
    FUN_18018dc60(param_1,10);
  }
  return iVar2;
}



// ===== FUN_1801ed090 @ 1801ed090 (size 293)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801ed090(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  switch(param_2) {
  case 2:
    return *(uint *)(param_1 + 0x28) >> 0xb & 1;
  default:
    return 0;
  case 8:
    return *(uint *)(param_1 + 0x24);
  case 9:
    *(undefined4 *)(param_1 + 0x24) = param_3;
    return 1;
  case 0xb:
  case 0xc:
    return 1;
  case 0x68:
    if ((param_1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_1801ed310(*(undefined4 *)(param_1 + 0x30));
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x30) = *param_4;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    *(undefined4 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x69:
    break;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0xffffffff;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x30);
  }
  return *(uint *)(param_1 + 0x30);
}



// ===== FUN_1801ed240 @ 1801ed240 (size 70)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ed240(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_1801ed310(*(undefined4 *)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return 1;
}



// ===== FUN_1801ed2a0 @ 1801ed2a0 (size 100)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ed2a0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 + 1U < 2) {
    iVar1 = Ordinal_111();
    if (iVar1 < 0x7f) {
      if ((iVar1 - 0x67U < 0x18) && ((0x800201U >> (iVar1 - 0x67U & 0x1f) & 1) != 0)) {
        return 1;
      }
      if (iVar1 == 4) {
        return 1;
      }
      bVar2 = iVar1 == 0xb;
    }
    else {
      if (iVar1 == 0x86) {
        return 1;
      }
      if (iVar1 == 0x8c) {
        return 1;
      }
      bVar2 = iVar1 == 0x2733;
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801ed340 @ 1801ed340 (size 220)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801ed340(int *param_1,undefined4 *param_2,void *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined8 uVar3;
  
  uVar3 = 0x1801ed360;
  puVar2 = (undefined4 *)0x0;
  iVar1 = -1;
  if ((*param_1 == 0x10) && (*(longlong *)(param_1 + 2) != 0)) {
    puVar2 = (undefined4 *)FUN_1801d5a60(&DAT_180332bc0,param_1);
    if (puVar2 != (undefined4 *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *puVar2;
      }
      iVar1 = FUN_18019a410(*(undefined8 *)(puVar2 + 2));
      if (iVar1 < param_4) {
        param_4 = iVar1;
      }
      if (param_3 != (void *)0x0) {
        _Src = (void *)FUN_18013ff80(*(undefined8 *)(puVar2 + 2));
        memcpy(param_3,_Src,(longlong)param_4);
      }
      if (iVar1 != -1) goto LAB_1801ed3f0;
    }
  }
  FUN_1801a70c0(0xd,0x86,0x6d,"crypto\\asn1\\evp_asn1.c",0x6f,uVar3);
LAB_1801ed3f0:
  FUN_1801bfa90(puVar2,&DAT_180332bc0);
  return iVar1;
}



// ===== FUN_1801ed420 @ 1801ed420 (size 166)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801ed420(int *param_1,void *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  if ((*param_1 != 4) || (*(longlong *)(param_1 + 2) == 0)) {
    FUN_1801a70c0(0xd,0x87,0x6d,"crypto\\asn1\\evp_asn1.c",0x24,0x1801ed435);
    return -1;
  }
  _Src = (void *)FUN_18013ff80();
  iVar1 = FUN_18019a410(*(undefined8 *)(param_1 + 2));
  if (iVar1 < param_3) {
    param_3 = iVar1;
  }
  memcpy(param_2,_Src,(longlong)param_3);
  return iVar1;
}



// ===== FUN_1801ed4d0 @ 1801ed4d0 (size 93)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801ed4d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  undefined4 local_38 [2];
  undefined4 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801ed4e0;
  local_30 = &local_28;
  local_18 = 0;
  local_24 = 4;
  local_res8[0] = param_1;
  local_38[0] = param_2;
  local_28 = param_4;
  local_20 = param_3;
  lVar1 = FUN_1801d58a0(&DAT_180332bc0,local_38,local_res8);
  return lVar1 != 0;
}



// ===== FUN_1801ed530 @ 1801ed530 (size 123)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ed530(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1801bc530();
  if (lVar2 != 0) {
    iVar1 = FUN_1801dfa10(lVar2,param_2,param_3);
    if (iVar1 != 0) {
      FUN_1801d5970(param_1,4,lVar2);
      return 1;
    }
    FUN_1801bc3c0(lVar2);
  }
  return 0;
}



// ===== FUN_1801ed5b0 @ 1801ed5b0 (size 82)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ed5b0(longlong *param_1)

{
  FUN_1801add90(DAT_180447968);
  if (*param_1 != 0) {
    FUN_1801e4d70(*param_1,FUN_1801ed980);
    FUN_1801e4e70(*param_1);
    *param_1 = 0;
  }
  FUN_1801ade50(DAT_180447968);
  return;
}



// ===== FUN_1801ed650 @ 1801ed650 (size 508)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801ed650(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             int param_5,int param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_38 [6];
  undefined8 uStack_20;
  
  uStack_20 = 0x1801ed66e;
  uVar5 = 0;
  FUN_1801add90(DAT_180447968);
  if (*param_1 == 0) {
    lVar2 = FUN_1801e5090(FUN_18019a410,&LAB_1801a5940);
    if (lVar2 == 0) goto LAB_1801ed7c5;
    *param_1 = lVar2;
    FUN_1801abcf0(param_2);
  }
  while (param_5 != 0) {
    local_38[0] = *param_4;
    param_5 = param_5 + -1;
    puVar3 = (undefined4 *)FUN_1801e5190(*param_1,local_38);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_180195dc0(0x20,"crypto\\engine\\eng_table.c",100);
      if (puVar3 == (undefined4 *)0x0) goto LAB_1801ed7c5;
      puVar3[6] = 1;
      *puVar3 = *param_4;
      lVar2 = FUN_1801957e0();
      *(longlong *)(puVar3 + 2) = lVar2;
      if (lVar2 == 0) {
        FUN_180195e10(puVar3,"crypto\\engine\\eng_table.c",0x6b);
        goto LAB_1801ed7c5;
      }
      *(undefined8 *)(puVar3 + 4) = 0;
      FUN_1801e4f10(*param_1,puVar3);
      puVar4 = (undefined4 *)FUN_1801e5190(*param_1,local_38);
      if (puVar4 != puVar3) {
        FUN_180195650(*(undefined8 *)(puVar3 + 2));
        FUN_180195e10(puVar3,"crypto\\engine\\eng_table.c",0x72);
        goto LAB_1801ed7c5;
      }
    }
    FUN_1801954b0(*(undefined8 *)(puVar3 + 2),param_3);
    iVar1 = FUN_180195990(*(undefined8 *)(puVar3 + 2),param_3);
    if (iVar1 == 0) goto LAB_1801ed7c5;
    puVar3[6] = 0;
    if (param_6 != 0) {
      iVar1 = FUN_1801ac250(param_3);
      if (iVar1 == 0) {
        FUN_1801a70c0(0x26,0xb8,0x6d,"crypto\\engine\\eng_table.c",0x82);
        goto LAB_1801ed7c5;
      }
      if (*(longlong *)(puVar3 + 4) != 0) {
        FUN_1801ac190(*(longlong *)(puVar3 + 4),0);
      }
      *(undefined8 *)(puVar3 + 4) = param_3;
      puVar3[6] = 1;
    }
    param_4 = param_4 + 1;
  }
  uVar5 = 1;
LAB_1801ed7c5:
  FUN_1801ade50(DAT_180447968);
  return uVar5;
}



// ===== FUN_1801ed850 @ 1801ed850 (size 296)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801ed850(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_28 [6];
  undefined8 uStack_10;
  
  uStack_10 = 0x1801ed865;
  lVar3 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  FUN_1801a7200();
  FUN_1801add90(DAT_180447968);
  if ((*param_1 != 0) &&
     (local_28[0] = param_2, lVar2 = FUN_1801e5190(*param_1,local_28), lVar2 != 0)) {
    if (((*(longlong *)(lVar2 + 0x10) == 0) || (iVar1 = FUN_1801ac250(), iVar1 == 0)) &&
       (*(int *)(lVar2 + 0x18) == 0)) {
      lVar3 = FUN_180195ae0(*(undefined8 *)(lVar2 + 8),0);
      while (lVar3 != 0) {
        if (((0 < *(int *)(lVar3 + 0xa0)) || ((DAT_1803c9518 & 1) == 0)) &&
           (iVar1 = FUN_1801ac250(lVar3), iVar1 != 0)) {
          if ((*(longlong *)(lVar2 + 0x10) != lVar3) && (iVar1 = FUN_1801ac250(lVar3), iVar1 != 0))
          {
            if (*(longlong *)(lVar2 + 0x10) != 0) {
              FUN_1801ac190(*(longlong *)(lVar2 + 0x10),0);
            }
            *(longlong *)(lVar2 + 0x10) = lVar3;
          }
          break;
        }
        lVar3 = FUN_180195ae0(*(undefined8 *)(lVar2 + 8));
      }
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x10);
    }
    *(undefined4 *)(lVar2 + 0x18) = 1;
  }
  FUN_1801ade50(DAT_180447968);
  FUN_1801a6fa0();
  return lVar3;
}



// ===== FUN_1801ed980 @ 1801ed980 (size 74)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ed980(longlong param_1)

{
  if (param_1 != 0) {
    FUN_180195650(*(undefined8 *)(param_1 + 8));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1801ac190(*(longlong *)(param_1 + 0x10),0);
    }
    FUN_180195e10(param_1,"crypto\\engine\\eng_table.c",0xb1);
  }
  return;
}



// ===== FUN_1801eda00 @ 1801eda00 (size 227)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801eda00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801eda20;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    iVar1 = FUN_18018efd0(*(undefined8 *)(param_1 + 0xa8),0,0,(undefined8 *)(param_1 + 0xd8),0,
                          0xffffffff);
    if (iVar1 != 0) {
      FUN_1801ee810(param_1 + 0xa8);
      iVar1 = FUN_1801ee440(param_1,param_2,param_3,param_6,param_7,param_4,param_5,uVar2);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



// ===== FUN_1801edaf0 @ 1801edaf0 (size 90)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801edaf0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  
  if (param_2 != 0) {
    FUN_1801ee810();
    iVar1 = FUN_1801ee440(param_1,param_2,param_3,param_4,param_5,0,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801edb50 @ 1801edb50 (size 611)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801edb50(longlong param_1,void *param_2,ulonglong param_3,longlong param_4,longlong param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int local_res8;
  
  if ((param_4 != 0) && (param_5 != 0)) {
    FUN_1801ee810(param_1 + 0xa8);
    iVar2 = FUN_1801ee440(param_1,param_4,param_5,0,0,0,0);
    if (iVar2 == 0) {
      return 0;
    }
    lVar4 = 0;
    if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
      lVar4 = param_4;
    }
    param_4 = lVar4;
  }
  FUN_1801ee810(param_1 + 0xa8);
  if (param_3 == 0) {
    FUN_1801ee810();
  }
  else {
    memset(param_2,0,param_3);
    pcVar1 = (char *)(param_1 + 0xf8);
    do {
      iVar2 = FUN_18018efd0(*(undefined8 *)(param_1 + 0xb0),0,0,0,pcVar1,0xffffffff);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = (int)param_3;
      if (0x40000000 < param_3) {
        iVar2 = 0x40000000;
      }
      uVar6 = *(uint *)(param_1 + 0x104);
      uVar3 = (int)(iVar2 + 0xf + (iVar2 + 0xf >> 0x1f & 0xfU)) >> 4;
      uVar6 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) +
              uVar3;
      if (uVar6 < uVar3) {
        if (uVar6 != 0) {
          iVar2 = (uVar3 - uVar6) * 0x10;
        }
        uVar3 = *(byte *)(param_1 + 0x103) + 1;
        *(char *)(param_1 + 0x103) = (char)uVar3;
        uVar3 = (uVar3 >> 8) + (uint)*(byte *)(param_1 + 0x102);
        *(char *)(param_1 + 0x102) = (char)uVar3;
        uVar3 = (uVar3 >> 8) + (uint)*(byte *)(param_1 + 0x101);
        *(char *)(param_1 + 0x101) = (char)uVar3;
        uVar3 = (uVar3 >> 8) + (uint)*(byte *)(param_1 + 0x100);
        *(char *)(param_1 + 0x100) = (char)uVar3;
        uVar3 = (uVar3 >> 8) + (uint)*(byte *)(param_1 + 0xff);
        *(char *)(param_1 + 0xff) = (char)uVar3;
        uVar3 = (uVar3 >> 8) + (uint)*(byte *)(param_1 + 0xfe);
        *(char *)(param_1 + 0xfe) = (char)uVar3;
        uVar3 = (uVar3 >> 8) + (uint)*(byte *)(param_1 + 0xfd);
        *(char *)(param_1 + 0xfd) = (char)uVar3;
        uVar3 = (uVar3 >> 8) + (uint)*(byte *)(param_1 + 0xfc);
        *(char *)(param_1 + 0xfc) = (char)uVar3;
        uVar3 = (uVar3 >> 8) + (uint)*(byte *)(param_1 + 0xfb);
        *(char *)(param_1 + 0xfb) = (char)uVar3;
        uVar3 = (uVar3 >> 8) + (uint)*(byte *)(param_1 + 0xfa);
        *(char *)(param_1 + 0xfa) = (char)uVar3;
        iVar5 = (uVar3 >> 8) + (uint)*(byte *)(param_1 + 0xf9);
        *(char *)(param_1 + 0xf9) = (char)iVar5;
        *pcVar1 = *pcVar1 + (char)((uint)iVar5 >> 8);
        uVar3 = 0;
        if (uVar6 == 0) {
          uVar3 = uVar6;
        }
        uVar6 = uVar3;
      }
      *(uint *)(param_1 + 0x104) =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      iVar5 = FUN_18018f320(*(undefined8 *)(param_1 + 0xb0));
      if (iVar5 == 0) {
        return 0;
      }
      if (local_res8 != iVar2) {
        return 0;
      }
      param_3 = param_3 - (longlong)iVar2;
    } while (param_3 != 0);
  }
  iVar2 = FUN_1801ee440(param_1,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



// ===== FUN_1801eddc0 @ 1801eddc0 (size 91)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801eddc0(longlong param_1)

{
  FUN_18018ed10(*(undefined8 *)(param_1 + 0xa8));
  FUN_18018ed10(*(undefined8 *)(param_1 + 0xb0));
  FUN_18018ed10(*(undefined8 *)(param_1 + 0xb8));
  FUN_180001240(param_1 + 0xa8,0xa8);
  return 1;
}



// ===== FUN_1801ede20 @ 1801ede20 (size 336)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ede20(longlong param_1,ulonglong *param_2,ulonglong param_3,uint param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  int iVar7;
  uint local_res20 [2];
  
  iVar7 = 0;
  local_res20[0] = 0x10;
  if (((0 < (int)param_4) && (0x3f < param_4)) &&
     (((ulonglong *)((longlong)(int)(param_4 - 1) + param_3) < param_2 ||
      ((ulonglong)((longlong)(int)(param_4 - 1) + (longlong)param_2) < param_3)))) {
    uVar4 = param_4 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    lVar6 = param_3 - (longlong)param_2;
    puVar5 = param_2;
    do {
      iVar7 = iVar7 + 0x40;
      uVar2 = ((ulonglong *)(lVar6 + (longlong)puVar5))[1];
      *puVar5 = *(ulonglong *)(lVar6 + (longlong)puVar5) ^ *puVar5;
      puVar5[1] = uVar2 ^ puVar5[1];
      puVar1 = (ulonglong *)(lVar6 + 0x10 + (longlong)puVar5);
      uVar2 = puVar1[1];
      puVar5[2] = *puVar1 ^ puVar5[2];
      puVar5[3] = uVar2 ^ puVar5[3];
      puVar1 = (ulonglong *)(lVar6 + 0x20 + (longlong)puVar5);
      uVar2 = puVar1[1];
      puVar5[4] = *puVar1 ^ puVar5[4];
      puVar5[5] = uVar2 ^ puVar5[5];
      puVar1 = (ulonglong *)(lVar6 + 0x30 + (longlong)puVar5);
      uVar2 = puVar1[1];
      puVar5[6] = *puVar1 ^ puVar5[6];
      puVar5[7] = uVar2 ^ puVar5[7];
      puVar5 = puVar5 + 8;
    } while ((longlong)puVar5 - (longlong)param_2 < (longlong)(int)(param_4 - uVar4));
  }
  lVar6 = (longlong)iVar7;
  if (lVar6 < (int)param_4) {
    pbVar3 = (byte *)(lVar6 + (longlong)param_2);
    lVar6 = (int)param_4 - lVar6;
    do {
      *pbVar3 = *pbVar3 ^ pbVar3[param_3 - (longlong)param_2];
      pbVar3 = pbVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  iVar7 = FUN_18018f320(*(undefined8 *)(param_1 + 0x10),param_2,local_res20,param_2,param_4,
                        0x1801ede30);
  if ((iVar7 == 0) || (local_res20[0] != param_4)) {
    return 0;
  }
  return 1;
}



// ===== FUN_1801edf70 @ 1801edf70 (size 100)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801edf70(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x1801edf7a;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_68;
  bVar2 = *(longlong *)(param_1 + 0x28) != 0x10;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  if (bVar2) {
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
  }
  uVar1 = 0x30;
  if (!bVar2) {
    uVar1 = 0x20;
  }
  local_38 = local_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  FUN_1801ede20(local_48,param_1 + 0x78,&local_48,uVar1);
  return;
}



// ===== FUN_1801edfe0 @ 1801edfe0 (size 276)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801edfe0(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong _Size;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1801edff1;
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  if ((param_2 != (undefined4 *)0x0) && (param_3 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((lVar1 != 0) && (_Size = 0x10 - lVar1, _Size <= param_3)) {
      memcpy((void *)(param_1 + 0x60 + lVar1),param_2,_Size);
      iVar2 = FUN_1801edf70(param_1,param_1 + 0x60);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = param_3 - _Size;
      *(undefined8 *)(param_1 + 0x70) = 0;
      param_2 = (undefined4 *)((longlong)param_2 + _Size);
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      bVar4 = *(longlong *)(param_1 + 0x28) != 0x10;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      if (bVar4) {
        local_48 = local_68;
        uStack_44 = uStack_64;
        uStack_40 = uStack_60;
        uStack_3c = uStack_5c;
      }
      uVar3 = 0x30;
      if (!bVar4) {
        uVar3 = 0x20;
      }
      local_58 = local_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      iVar2 = FUN_1801ede20(param_1,param_1 + 0x78,&local_68,uVar3);
      if (iVar2 == 0) {
        return 0;
      }
      param_2 = param_2 + 4;
    }
    if (param_3 != 0) {
      memcpy((void *)(param_1 + 0x60 + *(longlong *)(param_1 + 0x70)),param_2,param_3);
      *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + param_3;
    }
  }
  return 1;
}



// ===== FUN_1801ee100 @ 1801ee100 (size 137)

void FUN_1801ee100(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = *(ulonglong *)(param_1 + 0x28);
    uVar3 = uVar2;
    if (param_3 < uVar2) {
      uVar3 = param_3;
    }
    if (uVar3 != 0) {
      pbVar1 = (byte *)(param_1 + 0x30);
      do {
        *pbVar1 = *pbVar1 ^ pbVar1[(param_2 - param_1) + -0x30];
        pbVar1 = pbVar1 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar2 = *(ulonglong *)(param_1 + 0x28);
    }
    if (uVar2 < param_3) {
      param_3 = param_3 - uVar2;
      if (0x10 < param_3) {
        param_3 = 0x10;
      }
      uVar2 = 0;
      if (param_3 != 0) {
        do {
          pbVar1 = (byte *)(param_1 + 0x50 + uVar2);
          *pbVar1 = *pbVar1 ^ *(byte *)(*(longlong *)(param_1 + 0x28) + uVar2 + param_2);
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_3);
      }
    }
  }
  return;
}



// ===== FUN_1801ee190 @ 1801ee190 (size 673)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1801ee190(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             longlong param_5,longlong param_6,longlong param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  int local_98 [2];
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1801ee1a7;
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_c8;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  uVar4 = 0x30;
  if (param_1[5] == 0x10) {
    uVar4 = 0x20;
  }
  local_98[0] = 0x10;
  local_78 = 0x1000000;
  local_68 = 0x2000000;
  local_90 = param_2;
  iVar1 = FUN_1801ede20(param_1,param_1 + 0xf,&local_88,uVar4);
  if (iVar1 != 0) {
    lVar2 = 0;
    if (param_2 != 0) {
      lVar2 = param_3;
    }
    lVar3 = 0;
    if (param_4 != 0) {
      lVar3 = param_5;
    }
    lVar5 = 0;
    if (param_6 != 0) {
      lVar5 = param_7;
    }
    lVar2 = lVar5 + lVar3 + lVar2;
    *(char *)(param_1 + 0xc) = (char)((ulonglong)lVar2 >> 0x18);
    *(char *)((longlong)param_1 + 0x61) = (char)((ulonglong)lVar2 >> 0x10);
    *(char *)((longlong)param_1 + 0x62) = (char)((ulonglong)lVar2 >> 8);
    *(char *)((longlong)param_1 + 99) = (char)lVar2;
    *(undefined2 *)((longlong)param_1 + 100) = 0;
    *(undefined1 *)((longlong)param_1 + 0x66) = 0;
    *(char *)((longlong)param_1 + 0x67) = *(char *)(param_1 + 5) + '\x10';
    param_1[0xe] = 8;
    iVar1 = FUN_1801edfe0(param_1,local_90);
    if ((((iVar1 != 0) && (iVar1 = FUN_1801edfe0(param_1,param_4,lVar3), iVar1 != 0)) &&
        (iVar1 = FUN_1801edfe0(param_1,param_6,lVar5), iVar1 != 0)) &&
       (iVar1 = FUN_1801edfe0(param_1,&DAT_1803beae0,1), iVar1 != 0)) {
      lVar2 = param_1[0xe];
      if (lVar2 != 0) {
        memset((void *)((longlong)param_1 + lVar2 + 0x60),0,0x10 - lVar2);
        iVar1 = FUN_1801edf70(param_1,param_1 + 0xc);
        if (iVar1 == 0) {
          return 0;
        }
      }
      local_a0 = 0xffffffff;
      local_a8 = 0;
      iVar1 = FUN_18018efd0(*param_1,0,0,param_1 + 0xf);
      if (iVar1 != 0) {
        local_a8._0_4_ = 0x10;
        iVar1 = FUN_18018f320(*param_1,param_1 + 0xf,local_98,(longlong)param_1 + param_1[5] + 0x78)
        ;
        if ((iVar1 != 0) && (local_98[0] == 0x10)) {
          local_a8._0_4_ = 0x10;
          iVar1 = FUN_18018f320(*param_1,param_1 + 0x11,local_98,param_1 + 0xf);
          if ((iVar1 != 0) && (local_98[0] == 0x10)) {
            if (param_1[5] != 0x10) {
              local_a8 = CONCAT44(local_a8._4_4_,0x10);
              iVar1 = FUN_18018f320(*param_1,param_1 + 0x13,local_98,param_1 + 0x11);
              if (iVar1 == 0) {
                return 0;
              }
              if (local_98[0] != 0x10) {
                return 0;
              }
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// ===== FUN_1801ee440 @ 1801ee440 (size 449)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1801ee440(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
             ,longlong param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  int local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70 [12];
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_e8;
  puVar1 = (undefined8 *)(param_1 + 0xa8);
  local_a0 = *(undefined4 *)(param_1 + 0xf8);
  uStack_9c = *(undefined4 *)(param_1 + 0xfc);
  uStack_98 = *(undefined4 *)(param_1 + 0x100);
  uStack_94 = *(undefined4 *)(param_1 + 0x104);
  local_a8[0] = 0x10;
  FUN_1801ee810(puVar1);
  local_90 = *(undefined4 *)(param_1 + 0xf8);
  uStack_8c = *(undefined4 *)(param_1 + 0xfc);
  uStack_88 = *(undefined4 *)(param_1 + 0x100);
  uStack_84 = *(undefined4 *)(param_1 + 0x104);
  if (*(longlong *)(param_1 + 0xd0) == 0x10) {
    iVar7 = 0x20;
  }
  else {
    FUN_1801ee810();
    local_80 = *(undefined4 *)(param_1 + 0xf8);
    uStack_7c = *(undefined4 *)(param_1 + 0xfc);
    uStack_78 = *(undefined4 *)(param_1 + 0x100);
    uStack_74 = *(undefined4 *)(param_1 + 0x104);
    iVar7 = 0x30;
  }
  local_c8 = CONCAT44(local_c8._4_4_,iVar7);
  iVar6 = FUN_18018f320(*puVar1,local_70,local_a8,&local_a0);
  if (iVar6 == 0) {
    return 0;
  }
  if (local_a8[0] != iVar7) {
    return 0;
  }
  memcpy((void *)(param_1 + 0xd8),local_70,*(size_t *)(param_1 + 0xd0));
  lVar2 = *(longlong *)(param_1 + 0xd0);
  uVar3 = *(undefined4 *)((longlong)local_70 + lVar2 + 4);
  uVar4 = *(undefined4 *)((longlong)local_70 + lVar2 + 8);
  uVar5 = *(undefined4 *)((longlong)local_70 + lVar2 + 0xc);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)((longlong)local_70 + lVar2);
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  *(undefined4 *)(param_1 + 0x100) = uVar4;
  *(undefined4 *)(param_1 + 0x104) = uVar5;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    if (((param_2 != 0) || (param_6 != 0)) || (param_4 != 0)) {
      local_b8 = param_5;
      local_c8 = param_7;
      local_c0 = param_4;
      iVar7 = FUN_1801ee190(puVar1,param_2,param_3,param_6);
      if (iVar7 == 0) {
        return 0;
      }
    }
    if (param_3 == 0) goto LAB_1801ee591;
    param_5 = *(undefined8 *)(param_1 + 0x90);
    param_4 = param_1 + 0x120;
  }
  else {
    FUN_1801ee100(puVar1,param_2,param_3);
  }
  FUN_1801ee100(puVar1,param_4,param_5);
LAB_1801ee591:
  local_c0._0_4_ = 0xffffffff;
  local_c8 = 0;
  iVar7 = FUN_18018efd0(*puVar1,0,0,param_1 + 0xd8);
  if (iVar7 != 0) {
    local_c0 = CONCAT44(local_c0._4_4_,0xffffffff);
    local_c8 = 0;
    iVar7 = FUN_18018efd0(*(undefined8 *)(param_1 + 0xb0),0,0,param_1 + 0xd8);
    if (iVar7 != 0) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801ee610 @ 1801ee610 (size 509)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ee610(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  
  uVar8 = 1;
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0x388) {
    lVar3 = 0x10;
    uVar2 = FUN_180193750();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    uVar2 = FUN_180193730();
  }
  else if (iVar1 == 0x389) {
    lVar3 = 0x18;
    uVar2 = FUN_1801938d0();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    uVar2 = FUN_1801938b0();
  }
  else {
    if (iVar1 != 0x38a) {
      return 0;
    }
    lVar3 = 0x20;
    uVar2 = FUN_180193a30();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    uVar2 = FUN_180193a10();
  }
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined ***)(param_1 + 0x150) = &PTR_FUN_1803beae8;
  *(longlong *)(param_1 + 0xd0) = lVar3;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar2 = FUN_18018ed50();
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    uVar2 = FUN_18018ed50();
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    uVar2 = 0;
    uVar7 = CONCAT44(uVar8,1);
    iVar1 = FUN_18018efd0(*(longlong *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xc0),0,0,0,uVar7)
    ;
    if (iVar1 != 0) {
      uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),1);
      iVar1 = FUN_18018efd0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 200),0,0,0,
                            uVar7);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x30) = (int)lVar3 * 8;
        uVar4 = lVar3 + 0x10;
        *(ulonglong *)(param_1 + 0x90) = uVar4;
        *(undefined ***)(param_1 + 0x150) = &PTR_FUN_1803beae8;
        if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
          lVar3 = *(longlong *)(param_1 + 0xb8);
          if (lVar3 == 0) {
            lVar3 = FUN_18018ed50();
            *(longlong *)(param_1 + 0xb8) = lVar3;
            if (lVar3 == 0) {
              return 0;
            }
          }
          iVar1 = FUN_18018efd0(lVar3,*(undefined8 *)(param_1 + 0xc0),0,&DAT_180332c40,0,
                                CONCAT44(uVar8,1));
          if (iVar1 == 0) {
            return 0;
          }
          uVar4 = 0x7fffffff;
          uVar2 = 0x7fffffff;
          uVar5 = *(ulonglong *)(param_1 + 0xd0) >> 1;
          uVar6 = *(ulonglong *)(param_1 + 0xd0);
        }
        else {
          uVar5 = 0;
          uVar6 = uVar4;
        }
        *(ulonglong *)(param_1 + 0x40) = uVar6;
        *(ulonglong *)(param_1 + 0x48) = uVar4;
        *(ulonglong *)(param_1 + 0x50) = uVar5;
        *(undefined8 *)(param_1 + 0x58) = uVar2;
        *(ulonglong *)(param_1 + 0x60) = uVar4;
        *(ulonglong *)(param_1 + 0x68) = uVar4;
        *(undefined8 *)(param_1 + 0x38) = 0x10000;
        return 1;
      }
    }
  }
  return 0;
}



// ===== FUN_1801ee810 @ 1801ee810 (size 184)

void FUN_1801ee810(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(byte *)(param_1 + 0x5f) + 1;
  *(char *)(param_1 + 0x5f) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x5e);
  *(char *)(param_1 + 0x5e) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x5d);
  *(char *)(param_1 + 0x5d) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x5c);
  *(char *)(param_1 + 0x5c) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x5b);
  *(char *)(param_1 + 0x5b) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x5a);
  *(char *)(param_1 + 0x5a) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x59);
  *(char *)(param_1 + 0x59) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x58);
  *(char *)(param_1 + 0x58) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x57);
  *(char *)(param_1 + 0x57) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x56);
  *(char *)(param_1 + 0x56) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x55);
  *(char *)(param_1 + 0x55) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x54);
  *(char *)(param_1 + 0x54) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x53);
  *(char *)(param_1 + 0x53) = (char)uVar1;
  uVar1 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x52);
  *(char *)(param_1 + 0x52) = (char)uVar1;
  iVar2 = (uVar1 >> 8) + (uint)*(byte *)(param_1 + 0x51);
  *(char *)(param_1 + 0x51) = (char)iVar2;
  *(char *)(param_1 + 0x50) = *(char *)(param_1 + 0x50) + (char)((uint)iVar2 >> 8);
  return;
}



// ===== FUN_1801ee8d0 @ 1801ee8d0 (size 384)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ee8d0(longlong *param_1,longlong *param_2,uint param_3)

{
  size_t _Size;
  int iVar1;
  int iVar2;
  longlong lVar3;
  sbyte sVar4;
  sbyte sVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  
  if ((int)param_3 < 0) {
    FUN_1801a70c0(3,0x91,0x77,"crypto\\bn\\bn_shift.c",0x56);
    return 0;
  }
  iVar1 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x3fU)) >> 6;
  lVar3 = FUN_180199580();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    iVar2 = (int)param_2[1];
    _Size = (longlong)iVar1 * 8;
    if (iVar2 == 0) {
      *(undefined8 *)(_Size + *param_1) = 0;
    }
    else {
      plVar12 = (longlong *)(*param_1 + _Size);
      lVar3 = *param_2;
      uVar11 = -(param_3 & 0x3f) & 0x3f;
      uVar8 = *(ulonglong *)(lVar3 + -8 + (longlong)iVar2 * 8);
      uVar13 = -(ulonglong)uVar11;
      uVar13 = uVar13 | uVar13 >> 8;
      sVar4 = (sbyte)uVar11;
      plVar12[iVar2] = uVar8 >> sVar4 & uVar13;
      iVar2 = (int)param_2[1] + -1;
      lVar10 = (longlong)iVar2;
      sVar5 = (sbyte)(param_3 & 0x3f);
      if (0 < iVar2) {
        puVar9 = (ulonglong *)(plVar12 + lVar10);
        do {
          uVar7 = uVar8 << sVar5;
          lVar10 = lVar10 + -1;
          uVar8 = *(ulonglong *)((longlong)(puVar9 + -1) + (lVar3 - (longlong)plVar12));
          *puVar9 = uVar8 >> sVar4 & uVar13 | uVar7;
          puVar9 = puVar9 + -1;
        } while (0 < lVar10);
      }
      *plVar12 = uVar8 << sVar5;
    }
    if (iVar1 != 0) {
      memset((void *)*param_1,0,_Size);
    }
    uVar6 = 1;
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(int *)(param_1 + 1) = (int)param_2[1] + 1 + iVar1;
  }
  FUN_180199370(param_1);
  return uVar6;
}



// ===== FUN_1801eea50 @ 1801eea50 (size 167)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801eea50(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  int iVar6;
  
  if (param_1 == param_2) {
    lVar2 = FUN_180199580();
    if (lVar2 == 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    lVar2 = FUN_180199580();
    if (lVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  puVar5 = (ulonglong *)*param_2;
  uVar3 = 0;
  iVar6 = 0;
  puVar4 = (ulonglong *)*param_1;
  if (0 < *(int *)(param_2 + 1)) {
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      iVar6 = iVar6 + 1;
      *puVar4 = uVar1 * 2 | uVar3;
      puVar4 = puVar4 + 1;
      uVar3 = uVar1 >> 0x3f;
    } while (iVar6 < *(int *)(param_2 + 1));
  }
  *puVar4 = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + (int)uVar3;
  return 1;
}



// ===== FUN_1801eeb00 @ 1801eeb00 (size 354)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801eeb00(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  sbyte sVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  
  if ((int)param_3 < 0) {
    FUN_1801a70c0(3,0x92,0x77,"crypto\\bn\\bn_shift.c",0x9b);
    return 0;
  }
  iVar3 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x3fU)) >> 6;
  if (iVar3 < (int)param_2[1]) {
    iVar8 = (int)param_2[1] - iVar3;
    uVar13 = -(param_3 & 0x3f) & 0x3f;
    uVar14 = -(ulonglong)uVar13;
    if ((param_1 == param_2) || (lVar4 = FUN_180199580(param_1,iVar8), lVar4 != 0)) {
      lVar4 = *param_2;
      uVar10 = *(ulonglong *)(lVar4 + (longlong)iVar3 * 8);
      iVar1 = iVar8 + -1;
      puVar2 = (ulonglong *)*param_1;
      lVar12 = (longlong)iVar1;
      sVar5 = (sbyte)(param_3 & 0x3f);
      iVar6 = 0;
      if (0 < iVar1) {
        uVar9 = uVar10;
        puVar11 = puVar2;
        do {
          uVar10 = *(ulonglong *)
                    (((lVar4 + (longlong)iVar3 * 8) - (longlong)puVar2) + 8 + (longlong)puVar11);
          *puVar11 = uVar10 << (sbyte)uVar13 & (uVar14 | uVar14 >> 8) | uVar9 >> sVar5;
          lVar12 = lVar12 + -1;
          uVar9 = uVar10;
          puVar11 = puVar11 + 1;
          iVar6 = iVar1;
        } while (lVar12 != 0);
      }
      uVar7 = 1;
      puVar2[iVar6] = uVar10 >> sVar5;
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(int *)(param_1 + 1) = iVar8;
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    FUN_180198f20(param_1,0);
    uVar7 = 1;
  }
  FUN_180199370(param_1);
  return uVar7;
}



// ===== FUN_1801eec70 @ 1801eec70 (size 248)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801eec70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  iVar4 = FUN_180198a80(param_2);
  if (iVar4 != 0) {
    FUN_180198f20(param_1,0);
    return 1;
  }
  iVar4 = (int)param_2[1];
  lVar1 = *param_2;
  if (param_2 != param_1) {
    lVar5 = FUN_180199580(param_1,iVar4);
    if (lVar5 == 0) {
      return 0;
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
  }
  lVar2 = *param_1;
  lVar5 = (longlong)iVar4 + -1;
  *(int *)(param_1 + 1) = iVar4;
  uVar3 = *(ulonglong *)(lVar1 + lVar5 * 8);
  puVar6 = (ulonglong *)(lVar2 + lVar5 * 8);
  *puVar6 = uVar3 >> 1;
  *(uint *)(param_1 + 1) = (int)param_1[1] - (uint)(uVar3 == 1);
  iVar4 = (int)param_1[1];
  if (0 < lVar5) {
    do {
      uVar7 = uVar3 << 0x3f;
      uVar3 = *(ulonglong *)((lVar1 - lVar2) + -8 + (longlong)puVar6);
      puVar6 = puVar6 + -1;
      lVar5 = lVar5 + -1;
      *puVar6 = uVar3 >> 1 | uVar7;
    } while (0 < lVar5);
    iVar4 = (int)param_1[1];
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return 1;
}



// ===== FUN_1801eed70 @ 1801eed70 (size 324)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801eed70(longlong *param_1,longlong *param_2,uint param_3)

{
  size_t _Size;
  int iVar1;
  int iVar2;
  longlong lVar3;
  sbyte sVar4;
  sbyte sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  iVar1 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x3fU)) >> 6;
  lVar3 = FUN_180199580();
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = (int)param_2[1];
  _Size = (longlong)iVar1 * 8;
  if (iVar2 == 0) {
    *(undefined8 *)(_Size + *param_1) = 0;
  }
  else {
    plVar11 = (longlong *)(*param_1 + _Size);
    lVar3 = *param_2;
    uVar10 = -(param_3 & 0x3f) & 0x3f;
    uVar7 = *(ulonglong *)(lVar3 + -8 + (longlong)iVar2 * 8);
    uVar12 = -(ulonglong)uVar10;
    uVar12 = uVar12 | uVar12 >> 8;
    sVar4 = (sbyte)uVar10;
    plVar11[iVar2] = uVar7 >> sVar4 & uVar12;
    iVar2 = (int)param_2[1] + -1;
    lVar9 = (longlong)iVar2;
    sVar5 = (sbyte)(param_3 & 0x3f);
    if (0 < iVar2) {
      puVar8 = (ulonglong *)(plVar11 + lVar9);
      do {
        uVar6 = uVar7 << sVar5;
        lVar9 = lVar9 + -1;
        uVar7 = *(ulonglong *)((longlong)(puVar8 + -1) + (lVar3 - (longlong)plVar11));
        *puVar8 = uVar7 >> sVar4 & uVar12 | uVar6;
        puVar8 = puVar8 + -1;
      } while (0 < lVar9);
    }
    *plVar11 = uVar7 << sVar5;
  }
  if (iVar1 != 0) {
    memset((void *)*param_1,0,_Size);
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(int *)(param_1 + 1) = (int)param_2[1] + 1 + iVar1;
  return 1;
}



// ===== FUN_1801eeec0 @ 1801eeec0 (size 289)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801eeec0(longlong *param_1,longlong *param_2,uint param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  sbyte sVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  
  iVar3 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x3fU)) >> 6;
  if ((int)param_2[1] <= iVar3) {
    FUN_180198f20(param_1,0);
    return 1;
  }
  iVar12 = (int)param_2[1] - iVar3;
  uVar7 = -(param_3 & 0x3f) & 0x3f;
  uVar6 = -(ulonglong)uVar7;
  if ((param_1 != param_2) && (lVar4 = FUN_180199580(param_1,iVar12), lVar4 == 0)) {
    return 0;
  }
  puVar2 = (ulonglong *)*param_1;
  puVar1 = (ulonglong *)(*param_2 + (longlong)iVar3 * 8);
  uVar9 = *puVar1;
  iVar3 = iVar12 + -1;
  lVar4 = (longlong)iVar3;
  sVar5 = (sbyte)(param_3 & 0x3f);
  iVar11 = 0;
  if (0 < iVar3) {
    uVar8 = uVar9;
    puVar10 = puVar2;
    do {
      uVar9 = *(ulonglong *)((longlong)puVar1 + (8 - (longlong)puVar2) + (longlong)puVar10);
      *puVar10 = uVar9 << (sbyte)uVar7 & (uVar6 | uVar6 >> 8) | uVar8 >> sVar5;
      lVar4 = lVar4 + -1;
      uVar8 = uVar9;
      puVar10 = puVar10 + 1;
      iVar11 = iVar3;
    } while (lVar4 != 0);
  }
  puVar2[iVar11] = uVar9 >> sVar5;
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(int *)(param_1 + 1) = iVar12;
  return 1;
}



// ===== FUN_1801eeff0 @ 1801eeff0 (size 221)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801eeff0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = 0x1801ef00a;
  iVar1 = FUN_180198a80(param_4);
  if (iVar1 == 0) {
    if (*(longlong *)(*param_4 + -8 + (longlong)(int)param_4[1] * 8) == 0) {
      FUN_1801a70c0(3,0x6b,0x6b,"crypto\\bn\\bn_div.c",CONCAT44(uVar2,0xe1));
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_1801ef0d0(param_1,param_2,param_3,param_4,param_5,uVar3);
      if (iVar1 != 0) {
        if (param_1 != 0) {
          FUN_180199370(param_1);
        }
        if (param_2 != 0) {
          FUN_180199370(param_2);
        }
      }
    }
  }
  else {
    FUN_1801a70c0(3,0x6b,0x67,"crypto\\bn\\bn_div.c",CONCAT44(uVar2,0xd7));
    iVar1 = 0;
  }
  return iVar1;
}



// ===== FUN_1801ef0d0 @ 1801ef0d0 (size 1168)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801ef0d0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  int iVar30;
  bool bVar31;
  ulonglong *local_80;
  ulonglong *local_78;
  longlong *local_70;
  ulonglong local_68;
  
  FUN_1801c9140(param_5);
  if (param_1 == (longlong *)0x0) {
    param_1 = (longlong *)FUN_1801c8e90(param_5);
  }
  plVar14 = (longlong *)FUN_1801c8e90(param_5);
  plVar15 = (longlong *)FUN_1801c8e90(param_5);
  plVar16 = (longlong *)FUN_1801c8e90(param_5);
  if ((plVar16 != (longlong *)0x0) && (lVar17 = FUN_180198770(plVar16,param_4), lVar17 != 0)) {
    lVar17 = *plVar16;
    lVar22 = (longlong)(int)plVar16[1];
    uVar12 = FUN_180198c80(*(undefined8 *)(lVar17 + -8 + lVar22 * 8));
    iVar30 = 0x40 - uVar12;
    uVar12 = uVar12 & 0x8000003f;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
    }
    uVar26 = 0;
    if (0 < lVar22) {
      lVar28 = 0;
      do {
        uVar29 = *(ulonglong *)(lVar17 + lVar28 * 8);
        *(ulonglong *)(lVar17 + lVar28 * 8) = uVar29 << ((byte)iVar30 & 0x3f) | uVar26;
        uVar26 = uVar29 >> ((byte)uVar12 & 0x3f) &
                 (-(longlong)(int)uVar12 | (ulonglong)-(longlong)(int)uVar12 >> 8);
        lVar28 = lVar28 + 1;
      } while (lVar28 < lVar22);
    }
    *(undefined4 *)(plVar16 + 2) = 0;
    iVar13 = FUN_1801eed70(plVar15,param_3,iVar30);
    if (iVar13 != 0) {
      uVar12 = *(uint *)(plVar16 + 1);
      lVar17 = (longlong)(int)uVar12;
      iVar13 = (int)plVar15[1];
      if (iVar13 <= (int)uVar12) {
        lVar22 = FUN_180199580(plVar15);
        if (lVar22 == 0) goto LAB_1801ef539;
        memset((void *)(*plVar15 + (longlong)iVar13 * 8),0,
               (longlong)(int)((uVar12 - iVar13) + 1) << 3);
        iVar13 = uVar12 + 1;
        *(int *)(plVar15 + 1) = iVar13;
      }
      uVar24 = iVar13 - uVar12;
      uVar26 = *(ulonglong *)(*plVar16 + -8 + lVar17 * 8);
      local_78 = (ulonglong *)((longlong)(int)uVar24 * 8 + *plVar15);
      local_80 = (ulonglong *)(*plVar15 + ((longlong)iVar13 + -1) * 8);
      if (uVar12 == 1) {
        uVar29 = 0;
      }
      else {
        uVar29 = *(ulonglong *)(*plVar16 + -0x10 + lVar17 * 8);
      }
      lVar22 = FUN_180199580(param_1,uVar24);
      if (lVar22 != 0) {
        local_70 = (longlong *)((longlong)(int)uVar24 * 8 + *param_1);
        uVar4 = *(uint *)(param_3 + 0x10);
        uVar5 = *(uint *)(param_4 + 0x10);
        *(uint *)(param_1 + 1) = uVar24;
        *(uint *)(param_1 + 2) = uVar5 ^ uVar4;
        lVar22 = FUN_180199580(plVar14,uVar12 + 1);
        if (lVar22 != 0) {
          if (0 < (int)uVar24) {
            local_68 = (ulonglong)uVar24;
            do {
              uVar27 = local_80[-1];
              if (*local_80 == uVar26) {
                uVar25 = 0xffffffffffffffff;
              }
              else {
                if (local_80 == local_78) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = local_80[-2];
                }
                uVar25 = FUN_1801efcc0(*local_80,uVar27,uVar26);
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar25;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar29;
                auVar10 = auVar8 * auVar9;
                uVar27 = uVar27 - uVar25 * uVar26;
                bVar31 = auVar10._8_8_ == uVar27;
                if (uVar27 <= auVar10._8_8_) {
                  do {
                    uVar21 = auVar10._8_8_;
                    uVar18 = auVar10._0_8_;
                    if ((bVar31) && (uVar18 <= uVar23)) break;
                    uVar25 = uVar25 - 1;
                    uVar27 = uVar27 + uVar26;
                    if (uVar27 < uVar26) break;
                    if (uVar18 < uVar29) {
                      uVar21 = uVar21 - 1;
                    }
                    auVar10._8_8_ = uVar21;
                    auVar10._0_8_ = uVar18 - uVar29;
                    bVar31 = uVar21 == uVar27;
                  } while (uVar27 <= uVar21);
                }
              }
              uVar19 = FUN_1801f08e0(*plVar14,*plVar16,uVar12,uVar25);
              local_78 = local_78 + -1;
              *(undefined8 *)(lVar17 * 8 + *plVar14) = uVar19;
              lVar28 = FUN_1801f12c0(local_78,local_78,*plVar14,uVar12 + 1);
              uVar27 = -lVar28;
              lVar22 = 0;
              if ((0 < (int)uVar12) && (7 < uVar12)) {
                plVar6 = (longlong *)*plVar14;
                plVar7 = (longlong *)*plVar16;
                plVar1 = plVar6 + (int)(uVar12 - 1);
                if ((((plVar7 + (int)(uVar12 - 1) < plVar6) || (plVar1 < plVar7)) &&
                    ((plVar14 < plVar6 || (plVar1 < plVar14)))) &&
                   ((plVar16 < plVar6 || (plVar1 < plVar16)))) {
                  uVar24 = uVar12 & 0x80000007;
                  if ((int)uVar24 < 0) {
                    uVar24 = (uVar24 - 1 | 0xfffffff8) + 1;
                  }
                  lVar20 = 0x20;
                  do {
                    puVar2 = (ulonglong *)((longlong)plVar7 + lVar20 + -0x20);
                    uVar23 = puVar2[1];
                    lVar22 = lVar22 + 8;
                    uVar18 = *(ulonglong *)((longlong)plVar7 + lVar20);
                    uVar21 = ((ulonglong *)((longlong)plVar7 + lVar20))[1];
                    puVar3 = (ulonglong *)((longlong)plVar6 + lVar20 + -0x20);
                    *puVar3 = *puVar2 & uVar27;
                    puVar3[1] = uVar23 & uVar27;
                    puVar2 = (ulonglong *)((longlong)plVar7 + lVar20 + -0x10);
                    uVar23 = puVar2[1];
                    puVar3 = (ulonglong *)((longlong)plVar6 + lVar20 + -0x10);
                    *puVar3 = *puVar2 & uVar27;
                    puVar3[1] = uVar23 & uVar27;
                    puVar2 = (ulonglong *)((longlong)plVar7 + lVar20 + 0x10);
                    uVar23 = *puVar2;
                    uVar11 = puVar2[1];
                    *(ulonglong *)((longlong)plVar6 + lVar20) = uVar18 & uVar27;
                    ((ulonglong *)((longlong)plVar6 + lVar20))[1] = uVar21 & uVar27;
                    puVar2 = (ulonglong *)((longlong)plVar6 + lVar20 + 0x10);
                    *puVar2 = uVar23 & uVar27;
                    puVar2[1] = uVar11 & uVar27;
                    lVar20 = lVar20 + 0x40;
                  } while (lVar22 < (int)(uVar12 - uVar24));
                }
              }
              for (; lVar22 < lVar17; lVar22 = lVar22 + 1) {
                *(ulonglong *)(*plVar14 + lVar22 * 8) =
                     *(ulonglong *)(*plVar16 + lVar22 * 8) & uVar27;
              }
              lVar22 = FUN_1801efb80(local_78,local_78,*plVar14,uVar12);
              *local_80 = *local_80 + lVar22;
              local_80 = local_80 + -1;
              local_70 = local_70 + -1;
              local_68 = local_68 - 1;
              *local_70 = uVar25 - lVar28;
            } while (local_68 != 0);
          }
          *(uint *)(plVar15 + 2) = uVar4;
          *(uint *)(plVar15 + 1) = uVar12;
          if ((param_2 == 0) || (iVar30 = FUN_1801eeec0(param_2,plVar15,iVar30), iVar30 != 0)) {
            FUN_1801c8d50(param_5);
            return 1;
          }
        }
      }
    }
  }
LAB_1801ef539:
  FUN_1801c8d50(param_5);
  return 0;
}



// ===== FUN_1801ef560 @ 1801ef560 (size 426)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1801ef560(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_178 [32];
  int local_158;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_178;
  iVar1 = *(int *)(param_2 + 1);
  uVar8 = 0;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    uVar8 = 1;
    *(undefined4 *)(param_1 + 2) = 0;
    goto LAB_1801ef6df;
  }
  FUN_1801c9140(param_3);
  if (param_2 == param_1) {
    puVar3 = (undefined8 *)FUN_1801c8e90(param_3);
  }
  else {
    puVar3 = param_1;
  }
  plVar4 = (longlong *)FUN_1801c8e90(param_3);
  if ((puVar3 != (undefined8 *)0x0) && (plVar4 != (longlong *)0x0)) {
    local_158 = iVar1 * 2;
    lVar5 = FUN_180199580(puVar3,local_158);
    if (lVar5 != 0) {
      if (iVar1 == 4) {
        FUN_1801f09f0(*puVar3,*param_2);
      }
      else if (iVar1 == 8) {
        FUN_1801f0bb0(*puVar3,*param_2);
      }
      else {
        if (0xf < iVar1) {
          cVar2 = FUN_180198c80((longlong)iVar1);
          iVar6 = 1 << (cVar2 - 1U & 0x1f);
          if (iVar1 == iVar6) {
            lVar5 = FUN_180199580(plVar4,iVar6 * 4);
            if (lVar5 != 0) {
              FUN_1801ef9c0(*puVar3,*param_2,iVar1,*plVar4);
              goto LAB_1801ef6a1;
            }
          }
          else {
            lVar5 = FUN_180199580(plVar4,iVar1 * 2);
            if (lVar5 != 0) {
              puVar7 = (undefined1 *)*plVar4;
              goto LAB_1801ef693;
            }
          }
          goto LAB_1801ef6c4;
        }
        puVar7 = local_148;
LAB_1801ef693:
        FUN_1801ef8b0(*puVar3,*param_2,iVar1,puVar7);
      }
LAB_1801ef6a1:
      *(int *)(puVar3 + 1) = local_158;
      *(undefined4 *)(puVar3 + 2) = 0;
      if (param_1 != puVar3) {
        lVar5 = FUN_180198770(param_1,puVar3);
        if (lVar5 == 0) goto LAB_1801ef6c4;
      }
      uVar8 = 1;
    }
  }
LAB_1801ef6c4:
  FUN_1801c8d50(param_3);
LAB_1801ef6df:
  FUN_180199370(param_1);
  return uVar8;
}



// ===== FUN_1801ef710 @ 1801ef710 (size 415)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801ef710(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_168;
  iVar1 = *(int *)(param_2 + 1);
  uVar8 = 0;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  FUN_1801c9140(param_3);
  if (param_2 == param_1) {
    puVar4 = (undefined8 *)FUN_1801c8e90(param_3);
  }
  else {
    puVar4 = param_1;
  }
  plVar5 = (longlong *)FUN_1801c8e90(param_3);
  if ((puVar4 == (undefined8 *)0x0) || (plVar5 == (longlong *)0x0)) goto LAB_1801ef876;
  iVar2 = iVar1 * 2;
  lVar6 = FUN_180199580(puVar4,iVar2);
  if (lVar6 == 0) goto LAB_1801ef876;
  if (iVar1 == 4) {
    FUN_1801f09f0(*puVar4,*param_2);
  }
  else if (iVar1 == 8) {
    FUN_1801f0bb0(*puVar4,*param_2);
  }
  else {
    if (iVar1 < 0x10) {
      puVar9 = local_148;
    }
    else {
      cVar3 = FUN_180198c80((longlong)iVar1);
      iVar7 = 1 << (cVar3 - 1U & 0x1f);
      if (iVar1 == iVar7) {
        lVar6 = FUN_180199580(plVar5,iVar7 * 4);
        if (lVar6 == 0) goto LAB_1801ef876;
        FUN_1801ef9c0(*puVar4,*param_2,iVar1,*plVar5);
        goto LAB_1801ef84d;
      }
      lVar6 = FUN_180199580(plVar5,iVar2);
      if (lVar6 == 0) goto LAB_1801ef876;
      puVar9 = (undefined1 *)*plVar5;
    }
    FUN_1801ef8b0(*puVar4,*param_2,iVar1,puVar9);
  }
LAB_1801ef84d:
  *(undefined4 *)(puVar4 + 2) = 0;
  *(int *)(puVar4 + 1) = iVar2;
  if ((param_1 == puVar4) || (lVar6 = FUN_180198770(param_1,puVar4), lVar6 != 0)) {
    uVar8 = 1;
  }
LAB_1801ef876:
  FUN_1801c8d50(param_3);
  return uVar8;
}



// ===== FUN_1801ef8b0 @ 1801ef8b0 (size 271)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ef8b0(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = param_3 + -1;
  lVar5 = (longlong)iVar3 * 8;
  puVar2 = param_1 + 1;
  param_1[(longlong)(param_3 * 2) + -1] = 0;
  *param_1 = 0;
  puVar4 = param_2;
  if (0 < iVar3) {
    puVar4 = param_2 + 1;
    uVar1 = FUN_1801f08e0(puVar2,puVar4,iVar3,*param_2);
    puVar2[iVar3] = uVar1;
    puVar2 = param_1 + 3;
  }
  if (0 < param_3 + -2) {
    iVar6 = param_3 + -2;
    do {
      uVar1 = *puVar4;
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
      iVar6 = iVar6 + -1;
      uVar1 = FUN_1801efe50(puVar2,puVar4,iVar3,uVar1);
      *(undefined8 *)(lVar5 + (longlong)puVar2) = uVar1;
      puVar2 = puVar2 + 2;
    } while (0 < iVar6);
  }
  FUN_1801efb80(param_1,param_1,param_1,param_3 * 2);
  FUN_1801f1220(param_4,param_2,param_3);
  FUN_1801efb80(param_1,param_1,param_4,param_3 * 2);
  return;
}



// ===== FUN_1801ef9c0 @ 1801ef9c0 (size 444)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ef9c0(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar12 = (longlong)param_3;
  iVar6 = param_3 / 2;
  if (param_3 == 4) {
    FUN_1801f09f0(param_1,param_2);
    return;
  }
  if (param_3 == 8) {
    FUN_1801f0bb0(param_1,param_2);
    return;
  }
  if (param_3 < 0x10) {
    FUN_1801ef8b0(param_1,param_2,param_3);
    return;
  }
  lVar13 = (longlong)iVar6 * 8;
  lVar2 = lVar13 + param_2;
  iVar7 = FUN_180199320(param_2,lVar2,iVar6,param_4,lVar13,0x1801ef9d2);
  bVar5 = false;
  if (iVar7 < 1) {
    if (iVar7 < 0) {
      FUN_1801f12c0(param_4,lVar2,param_2,iVar6);
    }
    else {
      bVar5 = true;
    }
  }
  else {
    FUN_1801f12c0(param_4,param_2,lVar2,iVar6);
  }
  lVar3 = param_4 + (longlong)(param_3 * 2) * 8;
  _Dst = (void *)(lVar12 * 8 + param_4);
  if (bVar5) {
    memset(_Dst,0,lVar12 * 8);
  }
  else {
    FUN_1801ef9c0(_Dst,param_4,iVar6,lVar3);
  }
  FUN_1801ef9c0(param_1,param_2,iVar6,lVar3);
  lVar4 = param_1 + lVar12 * 8;
  FUN_1801ef9c0(lVar4,lVar2,iVar6,lVar3);
  iVar7 = FUN_1801efb80(param_4,param_1,lVar4,param_3);
  lVar12 = param_4 + lVar12 * 8;
  iVar8 = FUN_1801f12c0(lVar12,param_4,lVar12,param_3);
  iVar9 = FUN_1801efb80(lVar13 + param_1,lVar13 + param_1,lVar12,param_3);
  iVar9 = (iVar7 - iVar8) + iVar9;
  if (iVar9 != 0) {
    puVar10 = (ulonglong *)(param_1 + (longlong)(iVar6 + param_3) * 8);
    uVar11 = *(longlong *)(param_1 + (longlong)(iVar6 + param_3) * 8) + (longlong)iVar9;
    *puVar10 = uVar11;
    if (uVar11 < (ulonglong)(longlong)iVar9) {
      do {
        puVar1 = puVar10 + 1;
        *puVar1 = *puVar1 + 1;
        puVar10 = puVar10 + 1;
      } while (*puVar1 == 0);
    }
  }
  return;
}



// ===== FUN_1801efb80 @ 1801efb80 (size 316)

ulonglong FUN_1801efb80(ulonglong *param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_4 < 1) {
    return 0;
  }
  uVar5 = 0;
  for (; (param_4 & 0xfffffffc) != 0; param_4 = param_4 - 4) {
    lVar2 = *param_3;
    uVar4 = *param_2 + uVar5;
    *param_1 = lVar2 + uVar4;
    lVar3 = param_3[1];
    uVar4 = (ulonglong)(uVar4 < uVar5) + (ulonglong)(lVar2 + uVar4 < uVar4);
    uVar5 = param_2[1] + uVar4;
    param_1[1] = lVar3 + uVar5;
    lVar2 = param_3[2];
    uVar4 = (ulonglong)(uVar5 < uVar4) + (ulonglong)(lVar3 + uVar5 < uVar5);
    uVar5 = param_2[2] + uVar4;
    param_1[2] = lVar2 + uVar5;
    lVar3 = param_3[3];
    uVar4 = (ulonglong)(uVar5 < uVar4) + (ulonglong)(lVar2 + uVar5 < uVar5);
    uVar5 = param_2[3] + uVar4;
    param_1[3] = lVar3 + uVar5;
    uVar5 = (ulonglong)(uVar5 < uVar4) + (ulonglong)(lVar3 + uVar5 < uVar5);
    param_2 = param_2 + 4;
    param_3 = param_3 + 4;
    param_1 = param_1 + 4;
  }
  if (param_4 != 0) {
    plVar6 = param_2;
    do {
      lVar2 = *plVar6;
      plVar1 = (longlong *)(((longlong)param_3 - (longlong)param_2) + (longlong)plVar6);
      plVar6 = plVar6 + 1;
      uVar4 = lVar2 + uVar5;
      uVar7 = *plVar1 + uVar4;
      *(ulonglong *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)plVar6) = uVar7;
      uVar5 = (ulonglong)(uVar4 < uVar5) + (ulonglong)(uVar7 < uVar4);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return uVar5;
}



// ===== FUN_1801efcc0 @ 1801efcc0 (size 396)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801efcc0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar6 = 0;
  iVar11 = 2;
  if (param_3 == 0) {
    return 0xffffffffffffffff;
  }
  iVar2 = FUN_180198c80(param_3);
  uVar8 = param_1 - param_3;
  if (param_1 < param_3) {
    uVar8 = param_1;
  }
  if (0x40 - iVar2 != 0) {
    bVar1 = (byte)(0x40 - iVar2);
    param_3 = param_3 << (bVar1 & 0x3f);
    uVar8 = param_2 >> (0x40 - bVar1 & 0x3f) | uVar8 << (bVar1 & 0x3f);
    param_2 = param_2 << (bVar1 & 0x3f);
  }
  uVar10 = param_3 >> 0x20;
  do {
    if (uVar8 >> 0x20 == uVar10) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = uVar8 / uVar10;
    }
    lVar7 = uVar9 * uVar10;
    uVar5 = uVar9 * (param_3 & 0xffffffff);
    uVar3 = uVar8 - lVar7;
    if ((uVar3 & 0xffffffff00000000) == 0) {
      do {
        if (uVar5 <= (uVar3 << 0x20 | param_2 >> 0x20)) break;
        lVar7 = lVar7 - uVar10;
        uVar3 = uVar8 - lVar7;
        uVar9 = uVar9 - 1;
        uVar5 = uVar5 - (param_3 & 0xffffffff);
      } while ((uVar3 & 0xffffffff00000000) == 0);
    }
    uVar4 = (uVar5 >> 0x20) + lVar7;
    uVar3 = uVar4 + 1;
    if (uVar5 << 0x20 <= param_2) {
      uVar3 = uVar4;
    }
    uVar4 = uVar9 - 1;
    if (uVar3 <= uVar8) {
      uVar4 = uVar9;
    }
    iVar11 = iVar11 + -1;
    if (iVar11 == 0) {
      return uVar4 | uVar6;
    }
    uVar6 = uVar4 << 0x20;
    uVar9 = uVar8 + param_3;
    if (uVar3 <= uVar8) {
      uVar9 = uVar8;
    }
    uVar8 = uVar9 - uVar3 << 0x20 | param_2 - (uVar5 << 0x20) >> 0x20;
    param_2 = param_2 << 0x20;
  } while( true );
}



// ===== FUN_1801efe50 @ 1801efe50 (size 337)

ulonglong FUN_1801efe50(longlong *param_1,ulonglong *param_2,uint param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  
  uVar16 = 0;
  if ((int)param_3 < 1) {
    return 0;
  }
  for (; (param_3 & 0xfffffffc) != 0; param_3 = param_3 - 4) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *param_2;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_4;
    auVar11[8] = *param_1 + uVar16 < uVar16;
    auVar11._0_8_ = *param_1 + uVar16;
    auVar11._9_7_ = 0;
    auVar11 = auVar1 * auVar6 + auVar11;
    *param_1 = auVar11._0_8_;
    uVar17 = auVar11._8_8_;
    uVar16 = param_1[1] + uVar17;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2[1];
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_4;
    auVar12[8] = uVar16 < uVar17;
    auVar12._0_8_ = uVar16;
    auVar12._9_7_ = 0;
    auVar12 = auVar2 * auVar7 + auVar12;
    param_1[1] = auVar12._0_8_;
    uVar17 = auVar12._8_8_;
    uVar16 = param_1[2] + uVar17;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2[2];
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_4;
    auVar13[8] = uVar16 < uVar17;
    auVar13._0_8_ = uVar16;
    auVar13._9_7_ = 0;
    auVar13 = auVar3 * auVar8 + auVar13;
    param_1[2] = auVar13._0_8_;
    uVar17 = auVar13._8_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_2[3];
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_4;
    uVar16 = param_1[3] + uVar17;
    auVar14[8] = uVar16 < uVar17;
    auVar14._0_8_ = uVar16;
    auVar14._9_7_ = 0;
    auVar14 = auVar4 * auVar9 + auVar14;
    param_1[3] = auVar14._0_8_;
    uVar16 = auVar14._8_8_;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  }
  if (param_3 != 0) {
    plVar18 = param_1;
    do {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)plVar18);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4;
      auVar15[8] = *plVar18 + uVar16 < uVar16;
      auVar15._0_8_ = *plVar18 + uVar16;
      auVar15._9_7_ = 0;
      auVar15 = auVar5 * auVar10 + auVar15;
      *plVar18 = auVar15._0_8_;
      uVar16 = auVar15._8_8_;
      param_3 = param_3 - 1;
      plVar18 = plVar18 + 1;
    } while (param_3 != 0);
  }
  return uVar16;
}



// ===== FUN_1801effb0 @ 1801effb0 (size 521)

void FUN_1801effb0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar17,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3[1];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = *param_2;
  uVar47 = SUB168(auVar2 * auVar18,0);
  uVar50 = SUB168(auVar1 * auVar17,8) + uVar47;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar50;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[1];
  auVar33 = auVar3 * auVar19 + auVar33;
  param_1[1] = auVar33._0_8_;
  uVar48 = auVar33._8_8_;
  uVar47 = SUB168(auVar2 * auVar18,8) + (ulonglong)(uVar50 < uVar47) + uVar48;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar47;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_3;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[2];
  auVar34 = auVar4 * auVar20 + auVar34;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = auVar34._0_8_;
  uVar55 = auVar34._8_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3[1];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[1];
  uVar47 = uVar55 + (uVar47 < uVar48);
  auVar35 = auVar5 * auVar21 + auVar35;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = auVar35._0_8_;
  uVar53 = auVar35._8_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3[2];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_2;
  uVar48 = uVar53 + uVar47;
  auVar36 = auVar6 * auVar22 + auVar36;
  param_1[2] = auVar36._0_8_;
  uVar49 = auVar36._8_8_;
  uVar50 = uVar49 + uVar48;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar50;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3[3];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *param_2;
  auVar37 = auVar7 * auVar23 + auVar37;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = auVar37._0_8_;
  uVar54 = auVar37._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3[2];
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[1];
  uVar47 = uVar54 + (ulonglong)(uVar47 < uVar55) + (ulonglong)(uVar48 < uVar53) +
                    (ulonglong)(uVar50 < uVar49);
  auVar38 = auVar8 * auVar24 + auVar38;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = auVar38._0_8_;
  uVar51 = auVar38._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3[1];
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[2];
  uVar48 = uVar51 + uVar47;
  auVar39 = auVar9 * auVar25 + auVar39;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = auVar39._0_8_;
  uVar49 = auVar39._8_8_;
  uVar50 = uVar49 + uVar48;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_3;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[3];
  auVar40 = auVar10 * auVar26 + auVar40;
  param_1[3] = auVar40._0_8_;
  uVar52 = auVar40._8_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_3[1];
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[3];
  uVar55 = uVar50 + uVar52;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar55;
  auVar41 = auVar11 * auVar27 + auVar41;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = auVar41._0_8_;
  uVar53 = auVar41._8_8_;
  uVar48 = uVar53 + (ulonglong)(uVar48 < uVar51) + (ulonglong)(uVar47 < uVar54) +
                    (ulonglong)(uVar50 < uVar49) + (ulonglong)(uVar55 < uVar52);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_3[2];
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[2];
  auVar42 = auVar12 * auVar28 + auVar42;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = auVar42._0_8_;
  uVar50 = auVar42._8_8_;
  uVar47 = uVar48 + uVar50;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_3[3];
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[1];
  auVar43 = auVar13 * auVar29 + auVar43;
  param_1[4] = auVar43._0_8_;
  uVar49 = auVar43._8_8_;
  uVar51 = uVar47 + uVar49;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar51;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[3];
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[2];
  auVar44 = auVar14 * auVar30 + auVar44;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = auVar44._0_8_;
  uVar55 = auVar44._8_8_;
  uVar48 = (ulonglong)(uVar48 < uVar53) + (ulonglong)(uVar47 < uVar50) +
           (ulonglong)(uVar51 < uVar49) + uVar55;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[2];
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[3];
  auVar45 = auVar15 * auVar31 + auVar45;
  param_1[5] = auVar45._0_8_;
  uVar47 = auVar45._8_8_;
  uVar50 = uVar48 + uVar47;
  auVar46._8_8_ = (ulonglong)(uVar48 < uVar55) + (ulonglong)(uVar50 < uVar47);
  auVar46._0_8_ = uVar50;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[3];
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[3];
  *(undefined1 (*) [16])(param_1 + 6) = auVar16 * auVar32 + auVar46;
  return;
}



// ===== FUN_1801f01c0 @ 1801f01c0 (size 1823)

void FUN_1801f01c0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  ulonglong uVar191;
  ulonglong uVar192;
  ulonglong uVar193;
  ulonglong uVar194;
  ulonglong uVar195;
  ulonglong uVar196;
  ulonglong uVar197;
  ulonglong uVar198;
  ulonglong uVar199;
  ulonglong uVar200;
  ulonglong uVar201;
  ulonglong uVar202;
  ulonglong uVar203;
  ulonglong uVar204;
  ulonglong uVar205;
  ulonglong uVar206;
  ulonglong uVar207;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_3;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar65,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3[1];
  auVar66._8_8_ = 0;
  auVar66._0_8_ = *param_2;
  uVar191 = SUB168(auVar2 * auVar66,0);
  uVar196 = SUB168(auVar1 * auVar65,8) + uVar191;
  auVar129._8_8_ = 0;
  auVar129._0_8_ = uVar196;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[1];
  auVar129 = auVar3 * auVar67 + auVar129;
  param_1[1] = auVar129._0_8_;
  uVar192 = auVar129._8_8_;
  uVar191 = SUB168(auVar2 * auVar66,8) + (ulonglong)(uVar196 < uVar191) + uVar192;
  auVar130._8_8_ = 0;
  auVar130._0_8_ = uVar191;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_3;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[2];
  auVar130 = auVar4 * auVar68 + auVar130;
  auVar131._8_8_ = 0;
  auVar131._0_8_ = auVar130._0_8_;
  uVar207 = auVar130._8_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3[1];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[1];
  uVar191 = uVar207 + (uVar191 < uVar192);
  auVar131 = auVar5 * auVar69 + auVar131;
  auVar132._8_8_ = 0;
  auVar132._0_8_ = auVar131._0_8_;
  uVar201 = auVar131._8_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3[2];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = *param_2;
  uVar192 = uVar201 + uVar191;
  auVar132 = auVar6 * auVar70 + auVar132;
  param_1[2] = auVar132._0_8_;
  uVar193 = auVar132._8_8_;
  uVar196 = uVar193 + uVar192;
  auVar133._8_8_ = 0;
  auVar133._0_8_ = uVar196;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3[3];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = *param_2;
  auVar133 = auVar7 * auVar71 + auVar133;
  auVar134._8_8_ = 0;
  auVar134._0_8_ = auVar133._0_8_;
  uVar204 = auVar133._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3[2];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[1];
  uVar191 = uVar204 + (ulonglong)(uVar192 < uVar201) + (ulonglong)(uVar191 < uVar207) +
                      (ulonglong)(uVar196 < uVar193);
  auVar134 = auVar8 * auVar72 + auVar134;
  auVar135._8_8_ = 0;
  auVar135._0_8_ = auVar134._0_8_;
  uVar197 = auVar134._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3[1];
  auVar73._8_8_ = 0;
  auVar73._0_8_ = param_2[2];
  uVar192 = uVar197 + uVar191;
  auVar135 = auVar9 * auVar73 + auVar135;
  auVar136._8_8_ = 0;
  auVar136._0_8_ = auVar135._0_8_;
  uVar193 = auVar135._8_8_;
  uVar196 = uVar193 + uVar192;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_3;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = param_2[3];
  auVar136 = auVar10 * auVar74 + auVar136;
  param_1[3] = auVar136._0_8_;
  uVar198 = auVar136._8_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_3;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = param_2[4];
  uVar207 = uVar196 + uVar198;
  auVar137._8_8_ = 0;
  auVar137._0_8_ = uVar207;
  auVar137 = auVar11 * auVar75 + auVar137;
  auVar138._8_8_ = 0;
  auVar138._0_8_ = auVar137._0_8_;
  uVar201 = auVar137._8_8_;
  uVar192 = uVar201 + (ulonglong)(uVar191 < uVar204) + (ulonglong)(uVar192 < uVar197) +
                      (ulonglong)(uVar196 < uVar193) + (ulonglong)(uVar207 < uVar198);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_3[1];
  auVar76._8_8_ = 0;
  auVar76._0_8_ = param_2[3];
  auVar138 = auVar12 * auVar76 + auVar138;
  auVar139._8_8_ = 0;
  auVar139._0_8_ = auVar138._0_8_;
  uVar196 = auVar138._8_8_;
  uVar191 = uVar192 + uVar196;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_3[2];
  auVar77._8_8_ = 0;
  auVar77._0_8_ = param_2[2];
  auVar139 = auVar13 * auVar77 + auVar139;
  auVar140._8_8_ = 0;
  auVar140._0_8_ = auVar139._0_8_;
  uVar193 = auVar139._8_8_;
  uVar204 = uVar191 + uVar193;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[3];
  auVar78._8_8_ = 0;
  auVar78._0_8_ = param_2[1];
  auVar140 = auVar14 * auVar78 + auVar140;
  auVar141._8_8_ = 0;
  auVar141._0_8_ = auVar140._0_8_;
  uVar207 = auVar140._8_8_;
  uVar199 = uVar204 + uVar207;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[4];
  auVar79._8_8_ = 0;
  auVar79._0_8_ = *param_2;
  auVar141 = auVar15 * auVar79 + auVar141;
  param_1[4] = auVar141._0_8_;
  uVar197 = auVar141._8_8_;
  uVar200 = uVar199 + uVar197;
  auVar142._8_8_ = 0;
  auVar142._0_8_ = uVar200;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[5];
  auVar80._8_8_ = 0;
  auVar80._0_8_ = *param_2;
  auVar142 = auVar16 * auVar80 + auVar142;
  auVar143._8_8_ = 0;
  auVar143._0_8_ = auVar142._0_8_;
  uVar198 = auVar142._8_8_;
  uVar207 = (ulonglong)(uVar192 < uVar201) + (ulonglong)(uVar191 < uVar196) +
            (ulonglong)(uVar204 < uVar193) + (ulonglong)(uVar199 < uVar207) +
            (ulonglong)(uVar200 < uVar197) + uVar198;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_3[4];
  auVar81._8_8_ = 0;
  auVar81._0_8_ = param_2[1];
  auVar143 = auVar17 * auVar81 + auVar143;
  auVar144._8_8_ = 0;
  auVar144._0_8_ = auVar143._0_8_;
  uVar191 = auVar143._8_8_;
  uVar197 = uVar207 + uVar191;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_3[3];
  auVar82._8_8_ = 0;
  auVar82._0_8_ = param_2[2];
  auVar144 = auVar18 * auVar82 + auVar144;
  auVar145._8_8_ = 0;
  auVar145._0_8_ = auVar144._0_8_;
  uVar192 = auVar144._8_8_;
  uVar199 = uVar197 + uVar192;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[2];
  auVar83._8_8_ = 0;
  auVar83._0_8_ = param_2[3];
  auVar145 = auVar19 * auVar83 + auVar145;
  auVar146._8_8_ = 0;
  auVar146._0_8_ = auVar145._0_8_;
  uVar196 = auVar145._8_8_;
  uVar200 = uVar199 + uVar196;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_3[1];
  auVar84._8_8_ = 0;
  auVar84._0_8_ = param_2[4];
  auVar146 = auVar20 * auVar84 + auVar146;
  auVar147._8_8_ = 0;
  auVar147._0_8_ = auVar146._0_8_;
  uVar193 = auVar146._8_8_;
  uVar202 = uVar200 + uVar193;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = *param_3;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = param_2[5];
  auVar147 = auVar21 * auVar85 + auVar147;
  param_1[5] = auVar147._0_8_;
  uVar201 = auVar147._8_8_;
  uVar203 = uVar202 + uVar201;
  auVar148._8_8_ = 0;
  auVar148._0_8_ = uVar203;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_3;
  auVar86._8_8_ = 0;
  auVar86._0_8_ = param_2[6];
  auVar148 = auVar22 * auVar86 + auVar148;
  auVar149._8_8_ = 0;
  auVar149._0_8_ = auVar148._0_8_;
  uVar204 = auVar148._8_8_;
  uVar191 = (ulonglong)(uVar207 < uVar198) + (ulonglong)(uVar197 < uVar191) +
            (ulonglong)(uVar199 < uVar192) + (ulonglong)(uVar200 < uVar196) +
            (ulonglong)(uVar202 < uVar193) + (ulonglong)(uVar203 < uVar201) + uVar204;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_3[1];
  auVar87._8_8_ = 0;
  auVar87._0_8_ = param_2[5];
  auVar149 = auVar23 * auVar87 + auVar149;
  auVar150._8_8_ = 0;
  auVar150._0_8_ = auVar149._0_8_;
  uVar198 = auVar149._8_8_;
  uVar192 = uVar191 + uVar198;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_3[2];
  auVar88._8_8_ = 0;
  auVar88._0_8_ = param_2[4];
  auVar150 = auVar24 * auVar88 + auVar150;
  auVar151._8_8_ = 0;
  auVar151._0_8_ = auVar150._0_8_;
  uVar199 = auVar150._8_8_;
  uVar196 = uVar192 + uVar199;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_3[3];
  auVar89._8_8_ = 0;
  auVar89._0_8_ = param_2[3];
  auVar151 = auVar25 * auVar89 + auVar151;
  auVar152._8_8_ = 0;
  auVar152._0_8_ = auVar151._0_8_;
  uVar200 = auVar151._8_8_;
  uVar193 = uVar196 + uVar200;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_3[4];
  auVar90._8_8_ = 0;
  auVar90._0_8_ = param_2[2];
  auVar152 = auVar26 * auVar90 + auVar152;
  auVar153._8_8_ = 0;
  auVar153._0_8_ = auVar152._0_8_;
  uVar202 = auVar152._8_8_;
  uVar201 = uVar193 + uVar202;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_3[5];
  auVar91._8_8_ = 0;
  auVar91._0_8_ = param_2[1];
  auVar153 = auVar27 * auVar91 + auVar153;
  auVar154._8_8_ = 0;
  auVar154._0_8_ = auVar153._0_8_;
  uVar203 = auVar153._8_8_;
  uVar207 = uVar201 + uVar203;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_3[6];
  auVar92._8_8_ = 0;
  auVar92._0_8_ = *param_2;
  auVar154 = auVar28 * auVar92 + auVar154;
  param_1[6] = auVar154._0_8_;
  uVar194 = auVar154._8_8_;
  uVar197 = uVar207 + uVar194;
  auVar155._8_8_ = 0;
  auVar155._0_8_ = uVar197;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_3[7];
  auVar93._8_8_ = 0;
  auVar93._0_8_ = *param_2;
  auVar155 = auVar29 * auVar93 + auVar155;
  auVar156._8_8_ = 0;
  auVar156._0_8_ = auVar155._0_8_;
  uVar195 = auVar155._8_8_;
  uVar204 = (ulonglong)(uVar191 < uVar204) + (ulonglong)(uVar192 < uVar198) +
            (ulonglong)(uVar196 < uVar199) + (ulonglong)(uVar193 < uVar200) +
            (ulonglong)(uVar201 < uVar202) + (ulonglong)(uVar207 < uVar203) +
            (ulonglong)(uVar197 < uVar194) + uVar195;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_3[6];
  auVar94._8_8_ = 0;
  auVar94._0_8_ = param_2[1];
  auVar156 = auVar30 * auVar94 + auVar156;
  auVar157._8_8_ = 0;
  auVar157._0_8_ = auVar156._0_8_;
  uVar191 = auVar156._8_8_;
  uVar199 = uVar204 + uVar191;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_3[5];
  auVar95._8_8_ = 0;
  auVar95._0_8_ = param_2[2];
  auVar157 = auVar31 * auVar95 + auVar157;
  auVar158._8_8_ = 0;
  auVar158._0_8_ = auVar157._0_8_;
  uVar192 = auVar157._8_8_;
  uVar200 = uVar199 + uVar192;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_3[4];
  auVar96._8_8_ = 0;
  auVar96._0_8_ = param_2[3];
  auVar158 = auVar32 * auVar96 + auVar158;
  auVar159._8_8_ = 0;
  auVar159._0_8_ = auVar158._0_8_;
  uVar196 = auVar158._8_8_;
  uVar202 = uVar200 + uVar196;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_3[3];
  auVar97._8_8_ = 0;
  auVar97._0_8_ = param_2[4];
  auVar159 = auVar33 * auVar97 + auVar159;
  auVar160._8_8_ = 0;
  auVar160._0_8_ = auVar159._0_8_;
  uVar193 = auVar159._8_8_;
  uVar203 = uVar202 + uVar193;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_3[2];
  auVar98._8_8_ = 0;
  auVar98._0_8_ = param_2[5];
  auVar160 = auVar34 * auVar98 + auVar160;
  auVar161._8_8_ = 0;
  auVar161._0_8_ = auVar160._0_8_;
  uVar201 = auVar160._8_8_;
  uVar194 = uVar203 + uVar201;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_3[1];
  auVar99._8_8_ = 0;
  auVar99._0_8_ = param_2[6];
  auVar161 = auVar35 * auVar99 + auVar161;
  auVar162._8_8_ = 0;
  auVar162._0_8_ = auVar161._0_8_;
  uVar207 = auVar161._8_8_;
  uVar205 = uVar194 + uVar207;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *param_3;
  auVar100._8_8_ = 0;
  auVar100._0_8_ = param_2[7];
  auVar162 = auVar36 * auVar100 + auVar162;
  param_1[7] = auVar162._0_8_;
  uVar197 = auVar162._8_8_;
  uVar206 = uVar205 + uVar197;
  auVar163._8_8_ = 0;
  auVar163._0_8_ = uVar206;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_3[1];
  auVar101._8_8_ = 0;
  auVar101._0_8_ = param_2[7];
  auVar163 = auVar37 * auVar101 + auVar163;
  auVar164._8_8_ = 0;
  auVar164._0_8_ = auVar163._0_8_;
  uVar198 = auVar163._8_8_;
  uVar204 = (ulonglong)(uVar204 < uVar195) + (ulonglong)(uVar199 < uVar191) +
            (ulonglong)(uVar200 < uVar192) + (ulonglong)(uVar202 < uVar196) +
            (ulonglong)(uVar203 < uVar193) + (ulonglong)(uVar194 < uVar201) +
            (ulonglong)(uVar205 < uVar207) + (ulonglong)(uVar206 < uVar197) + uVar198;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_3[2];
  auVar102._8_8_ = 0;
  auVar102._0_8_ = param_2[6];
  auVar164 = auVar38 * auVar102 + auVar164;
  auVar165._8_8_ = 0;
  auVar165._0_8_ = auVar164._0_8_;
  uVar191 = auVar164._8_8_;
  uVar199 = uVar204 + uVar191;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_3[3];
  auVar103._8_8_ = 0;
  auVar103._0_8_ = param_2[5];
  auVar165 = auVar39 * auVar103 + auVar165;
  auVar166._8_8_ = 0;
  auVar166._0_8_ = auVar165._0_8_;
  uVar192 = auVar165._8_8_;
  uVar200 = uVar199 + uVar192;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_3[4];
  auVar104._8_8_ = 0;
  auVar104._0_8_ = param_2[4];
  auVar166 = auVar40 * auVar104 + auVar166;
  auVar167._8_8_ = 0;
  auVar167._0_8_ = auVar166._0_8_;
  uVar196 = auVar166._8_8_;
  uVar202 = uVar200 + uVar196;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_3[5];
  auVar105._8_8_ = 0;
  auVar105._0_8_ = param_2[3];
  auVar167 = auVar41 * auVar105 + auVar167;
  auVar168._8_8_ = 0;
  auVar168._0_8_ = auVar167._0_8_;
  uVar193 = auVar167._8_8_;
  uVar203 = uVar202 + uVar193;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_3[6];
  auVar106._8_8_ = 0;
  auVar106._0_8_ = param_2[2];
  auVar168 = auVar42 * auVar106 + auVar168;
  auVar169._8_8_ = 0;
  auVar169._0_8_ = auVar168._0_8_;
  uVar201 = auVar168._8_8_;
  uVar194 = uVar203 + uVar201;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_3[7];
  auVar107._8_8_ = 0;
  auVar107._0_8_ = param_2[1];
  auVar169 = auVar43 * auVar107 + auVar169;
  param_1[8] = auVar169._0_8_;
  uVar207 = auVar169._8_8_;
  uVar195 = uVar194 + uVar207;
  auVar170._8_8_ = 0;
  auVar170._0_8_ = uVar195;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_3[7];
  auVar108._8_8_ = 0;
  auVar108._0_8_ = param_2[2];
  auVar170 = auVar44 * auVar108 + auVar170;
  auVar171._8_8_ = 0;
  auVar171._0_8_ = auVar170._0_8_;
  uVar197 = auVar170._8_8_;
  uVar198 = (ulonglong)(uVar204 < uVar198) + (ulonglong)(uVar199 < uVar191) +
            (ulonglong)(uVar200 < uVar192) + (ulonglong)(uVar202 < uVar196) +
            (ulonglong)(uVar203 < uVar193) + (ulonglong)(uVar194 < uVar201) +
            (ulonglong)(uVar195 < uVar207) + uVar197;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_3[6];
  auVar109._8_8_ = 0;
  auVar109._0_8_ = param_2[3];
  auVar171 = auVar45 * auVar109 + auVar171;
  auVar172._8_8_ = 0;
  auVar172._0_8_ = auVar171._0_8_;
  uVar191 = auVar171._8_8_;
  uVar204 = uVar198 + uVar191;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_3[5];
  auVar110._8_8_ = 0;
  auVar110._0_8_ = param_2[4];
  auVar172 = auVar46 * auVar110 + auVar172;
  auVar173._8_8_ = 0;
  auVar173._0_8_ = auVar172._0_8_;
  uVar192 = auVar172._8_8_;
  uVar199 = uVar204 + uVar192;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_3[4];
  auVar111._8_8_ = 0;
  auVar111._0_8_ = param_2[5];
  auVar173 = auVar47 * auVar111 + auVar173;
  auVar174._8_8_ = 0;
  auVar174._0_8_ = auVar173._0_8_;
  uVar196 = auVar173._8_8_;
  uVar200 = uVar199 + uVar196;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_3[3];
  auVar112._8_8_ = 0;
  auVar112._0_8_ = param_2[6];
  auVar174 = auVar48 * auVar112 + auVar174;
  auVar175._8_8_ = 0;
  auVar175._0_8_ = auVar174._0_8_;
  uVar193 = auVar174._8_8_;
  uVar202 = uVar200 + uVar193;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_3[2];
  auVar113._8_8_ = 0;
  auVar113._0_8_ = param_2[7];
  auVar175 = auVar49 * auVar113 + auVar175;
  param_1[9] = auVar175._0_8_;
  uVar201 = auVar175._8_8_;
  uVar203 = uVar202 + uVar201;
  auVar176._8_8_ = 0;
  auVar176._0_8_ = uVar203;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_3[3];
  auVar114._8_8_ = 0;
  auVar114._0_8_ = param_2[7];
  auVar176 = auVar50 * auVar114 + auVar176;
  auVar177._8_8_ = 0;
  auVar177._0_8_ = auVar176._0_8_;
  uVar207 = auVar176._8_8_;
  uVar191 = (ulonglong)(uVar198 < uVar197) + (ulonglong)(uVar204 < uVar191) +
            (ulonglong)(uVar199 < uVar192) + (ulonglong)(uVar200 < uVar196) +
            (ulonglong)(uVar202 < uVar193) + (ulonglong)(uVar203 < uVar201) + uVar207;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_3[4];
  auVar115._8_8_ = 0;
  auVar115._0_8_ = param_2[6];
  auVar177 = auVar51 * auVar115 + auVar177;
  auVar178._8_8_ = 0;
  auVar178._0_8_ = auVar177._0_8_;
  uVar197 = auVar177._8_8_;
  uVar192 = uVar191 + uVar197;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_3[5];
  auVar116._8_8_ = 0;
  auVar116._0_8_ = param_2[5];
  auVar178 = auVar52 * auVar116 + auVar178;
  auVar179._8_8_ = 0;
  auVar179._0_8_ = auVar178._0_8_;
  uVar198 = auVar178._8_8_;
  uVar196 = uVar192 + uVar198;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_3[6];
  auVar117._8_8_ = 0;
  auVar117._0_8_ = param_2[4];
  auVar179 = auVar53 * auVar117 + auVar179;
  auVar180._8_8_ = 0;
  auVar180._0_8_ = auVar179._0_8_;
  uVar204 = auVar179._8_8_;
  uVar193 = uVar196 + uVar204;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_3[7];
  auVar118._8_8_ = 0;
  auVar118._0_8_ = param_2[3];
  auVar180 = auVar54 * auVar118 + auVar180;
  param_1[10] = auVar180._0_8_;
  uVar199 = auVar180._8_8_;
  uVar201 = uVar193 + uVar199;
  auVar181._8_8_ = 0;
  auVar181._0_8_ = uVar201;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_3[7];
  auVar119._8_8_ = 0;
  auVar119._0_8_ = param_2[4];
  auVar181 = auVar55 * auVar119 + auVar181;
  auVar182._8_8_ = 0;
  auVar182._0_8_ = auVar181._0_8_;
  uVar200 = auVar181._8_8_;
  uVar201 = (ulonglong)(uVar191 < uVar207) + (ulonglong)(uVar192 < uVar197) +
            (ulonglong)(uVar196 < uVar198) + (ulonglong)(uVar193 < uVar204) +
            (ulonglong)(uVar201 < uVar199) + uVar200;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_3[6];
  auVar120._8_8_ = 0;
  auVar120._0_8_ = param_2[5];
  auVar182 = auVar56 * auVar120 + auVar182;
  auVar183._8_8_ = 0;
  auVar183._0_8_ = auVar182._0_8_;
  uVar191 = auVar182._8_8_;
  uVar207 = uVar201 + uVar191;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_3[5];
  auVar121._8_8_ = 0;
  auVar121._0_8_ = param_2[6];
  auVar183 = auVar57 * auVar121 + auVar183;
  auVar184._8_8_ = 0;
  auVar184._0_8_ = auVar183._0_8_;
  uVar192 = auVar183._8_8_;
  uVar197 = uVar207 + uVar192;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_3[4];
  auVar122._8_8_ = 0;
  auVar122._0_8_ = param_2[7];
  auVar184 = auVar58 * auVar122 + auVar184;
  uVar196 = auVar184._8_8_;
  uVar198 = uVar197 + uVar196;
  auVar185._8_8_ = 0;
  auVar185._0_8_ = uVar198;
  param_1[0xb] = auVar184._0_8_;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_3[5];
  auVar123._8_8_ = 0;
  auVar123._0_8_ = param_2[7];
  auVar185 = auVar59 * auVar123 + auVar185;
  auVar186._8_8_ = 0;
  auVar186._0_8_ = auVar185._0_8_;
  uVar193 = auVar185._8_8_;
  uVar201 = (ulonglong)(uVar201 < uVar200) + (ulonglong)(uVar207 < uVar191) +
            (ulonglong)(uVar197 < uVar192) + (ulonglong)(uVar198 < uVar196) + uVar193;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_3[6];
  auVar124._8_8_ = 0;
  auVar124._0_8_ = param_2[6];
  auVar186 = auVar60 * auVar124 + auVar186;
  auVar187._8_8_ = 0;
  auVar187._0_8_ = auVar186._0_8_;
  uVar191 = auVar186._8_8_;
  uVar207 = uVar201 + uVar191;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_3[7];
  auVar125._8_8_ = 0;
  auVar125._0_8_ = param_2[5];
  auVar187 = auVar61 * auVar125 + auVar187;
  param_1[0xc] = auVar187._0_8_;
  uVar192 = auVar187._8_8_;
  uVar197 = uVar207 + uVar192;
  auVar188._8_8_ = 0;
  auVar188._0_8_ = uVar197;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_3[7];
  auVar126._8_8_ = 0;
  auVar126._0_8_ = param_2[6];
  auVar188 = auVar62 * auVar126 + auVar188;
  auVar189._8_8_ = 0;
  auVar189._0_8_ = auVar188._0_8_;
  uVar196 = auVar188._8_8_;
  uVar191 = (ulonglong)(uVar201 < uVar193) + (ulonglong)(uVar207 < uVar191) +
            (ulonglong)(uVar197 < uVar192) + uVar196;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_3[6];
  auVar127._8_8_ = 0;
  auVar127._0_8_ = param_2[7];
  auVar189 = auVar63 * auVar127 + auVar189;
  param_1[0xd] = auVar189._0_8_;
  uVar193 = auVar189._8_8_;
  uVar192 = uVar191 + uVar193;
  auVar190._8_8_ = (ulonglong)(uVar191 < uVar196) + (ulonglong)(uVar192 < uVar193);
  auVar190._0_8_ = uVar192;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_3[7];
  auVar128._8_8_ = 0;
  auVar128._0_8_ = param_2[7];
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar64 * auVar128 + auVar190;
  return;
}



// ===== FUN_1801f08e0 @ 1801f08e0 (size 257)

ulonglong FUN_1801f08e0(ulonglong *param_1,ulonglong *param_2,uint param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  
  uVar14 = 0;
  if ((int)param_3 < 1) {
    return 0;
  }
  for (; (param_3 & 0xfffffffc) != 0; param_3 = param_3 - 4) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *param_2;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_4;
    uVar12 = SUB168(auVar1 * auVar6,0);
    uVar14 = uVar12 + uVar14;
    *param_1 = uVar14;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2[1];
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_4;
    uVar13 = SUB168(auVar2 * auVar7,0);
    uVar12 = uVar13 + SUB168(auVar1 * auVar6,8) + (ulonglong)(uVar14 < uVar12);
    param_1[1] = uVar12;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2[2];
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_4;
    uVar14 = SUB168(auVar3 * auVar8,0);
    uVar13 = uVar14 + SUB168(auVar2 * auVar7,8) + (ulonglong)(uVar12 < uVar13);
    param_1[2] = uVar13;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_2[3];
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_4;
    uVar12 = SUB168(auVar4 * auVar9,0);
    uVar14 = uVar12 + SUB168(auVar3 * auVar8,8) + (ulonglong)(uVar13 < uVar14);
    param_1[3] = uVar14;
    uVar14 = SUB168(auVar4 * auVar9,8) + (ulonglong)(uVar14 < uVar12);
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  }
  if (param_3 != 0) {
    puVar15 = param_2;
    do {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar14;
      uVar14 = *puVar15;
      puVar15 = puVar15 + 1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar14;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4;
      auVar11 = auVar5 * auVar10 + auVar11;
      *(longlong *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)puVar15) =
           auVar11._0_8_;
      uVar14 = auVar11._8_8_;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return uVar14;
}



// ===== FUN_1801f09f0 @ 1801f09f0 (size 442)

void FUN_1801f09f0(undefined8 *param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar11,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[1];
  auVar2 = auVar2 * auVar12;
  uVar39 = SUB168(auVar1 * auVar11,8) + auVar2._0_8_;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar39;
  param_1[1] = SUB168(auVar2 + auVar21,0);
  uVar36 = SUB168(auVar2 + auVar21,8);
  uVar39 = auVar2._8_8_ + (ulonglong)(uVar39 < auVar2._0_8_) + uVar36;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar39;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[1];
  auVar22 = auVar3 * auVar13 + auVar22;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = auVar22._0_8_;
  uVar37 = auVar22._8_8_;
  uVar36 = uVar37 + (uVar39 < uVar36);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[2];
  auVar23 = auVar4 * auVar14 + auVar23;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = auVar23._0_8_;
  uVar39 = auVar23._8_8_;
  uVar40 = uVar36 + uVar39;
  auVar30 = auVar4 * auVar14 + auVar30;
  param_1[2] = auVar30._0_8_;
  uVar38 = auVar30._8_8_;
  uVar41 = uVar40 + uVar38;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar41;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[3];
  auVar24 = auVar5 * auVar15 + auVar24;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = auVar24._0_8_;
  uVar35 = auVar24._8_8_;
  uVar40 = (ulonglong)(uVar36 < uVar37) + (ulonglong)(uVar40 < uVar39) +
           (ulonglong)(uVar41 < uVar38) + uVar35;
  auVar31 = auVar5 * auVar15 + auVar31;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = auVar31._0_8_;
  uVar39 = auVar31._8_8_;
  uVar41 = uVar40 + uVar39;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2[2];
  auVar25 = auVar6 * auVar16 + auVar25;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = auVar25._0_8_;
  uVar36 = auVar25._8_8_;
  uVar42 = uVar41 + uVar36;
  auVar32 = auVar6 * auVar16 + auVar32;
  param_1[3] = auVar32._0_8_;
  uVar37 = auVar32._8_8_;
  uVar43 = uVar42 + uVar37;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar43;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[2];
  auVar26 = auVar7 * auVar17 + auVar26;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = auVar26._0_8_;
  uVar38 = auVar26._8_8_;
  uVar36 = uVar38 + (ulonglong)(uVar40 < uVar35) + (ulonglong)(uVar41 < uVar39) +
                    (ulonglong)(uVar42 < uVar36) + (ulonglong)(uVar43 < uVar37);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[3];
  auVar27 = auVar8 * auVar18 + auVar27;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = auVar27._0_8_;
  uVar39 = auVar27._8_8_;
  uVar40 = uVar36 + uVar39;
  auVar33 = auVar8 * auVar18 + auVar33;
  param_1[4] = auVar33._0_8_;
  uVar37 = auVar33._8_8_;
  uVar41 = uVar40 + uVar37;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar41;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[2];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[3];
  auVar28 = auVar9 * auVar19 + auVar28;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = auVar28._0_8_;
  uVar35 = auVar28._8_8_;
  uVar39 = (ulonglong)(uVar36 < uVar38) + (ulonglong)(uVar40 < uVar39) +
           (ulonglong)(uVar41 < uVar37) + uVar35;
  auVar34 = auVar9 * auVar19 + auVar34;
  param_1[5] = auVar34._0_8_;
  uVar36 = auVar34._8_8_;
  uVar37 = uVar39 + uVar36;
  auVar29._8_8_ = (ulonglong)(uVar39 < uVar35) + (ulonglong)(uVar37 < uVar36);
  auVar29._0_8_ = uVar37;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[3];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  *(undefined1 (*) [16])(param_1 + 6) = auVar10 * auVar20 + auVar29;
  return;
}



// ===== FUN_1801f0bb0 @ 1801f0bb0 (size 1645)

void FUN_1801f0bb0(undefined8 *param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  ulonglong uVar135;
  ulonglong uVar136;
  ulonglong uVar137;
  ulonglong uVar138;
  ulonglong uVar139;
  ulonglong uVar140;
  ulonglong uVar141;
  ulonglong uVar142;
  ulonglong uVar143;
  ulonglong uVar144;
  ulonglong uVar145;
  ulonglong uVar146;
  ulonglong uVar147;
  ulonglong uVar148;
  ulonglong uVar149;
  ulonglong uVar150;
  ulonglong uVar151;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar37,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_2[1];
  auVar2 = auVar2 * auVar38;
  uVar143 = SUB168(auVar1 * auVar37,8) + auVar2._0_8_;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = uVar143;
  param_1[1] = SUB168(auVar2 + auVar73,0);
  uVar136 = SUB168(auVar2 + auVar73,8);
  uVar143 = auVar2._8_8_ + (ulonglong)(uVar143 < auVar2._0_8_) + uVar136;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = uVar143;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[1];
  auVar74 = auVar3 * auVar39 + auVar74;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = auVar74._0_8_;
  uVar137 = auVar74._8_8_;
  uVar136 = (uVar143 < uVar136) + uVar137;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_2;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_2[2];
  auVar75 = auVar4 * auVar40 + auVar75;
  auVar108._8_8_ = 0;
  auVar108._0_8_ = auVar75._0_8_;
  uVar143 = auVar75._8_8_;
  uVar144 = uVar136 + uVar143;
  auVar108 = auVar4 * auVar40 + auVar108;
  param_1[2] = auVar108._0_8_;
  uVar138 = auVar108._8_8_;
  uVar145 = uVar144 + uVar138;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = uVar145;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_2[3];
  auVar76 = auVar5 * auVar41 + auVar76;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = auVar76._0_8_;
  uVar135 = auVar76._8_8_;
  uVar144 = (ulonglong)(uVar136 < uVar137) + (ulonglong)(uVar144 < uVar143) +
            (ulonglong)(uVar145 < uVar138) + uVar135;
  auVar109 = auVar5 * auVar41 + auVar109;
  auVar77._8_8_ = 0;
  auVar77._0_8_ = auVar109._0_8_;
  uVar143 = auVar109._8_8_;
  uVar145 = uVar144 + uVar143;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_2[2];
  auVar77 = auVar6 * auVar42 + auVar77;
  auVar110._8_8_ = 0;
  auVar110._0_8_ = auVar77._0_8_;
  uVar136 = auVar77._8_8_;
  uVar148 = uVar145 + uVar136;
  auVar110 = auVar6 * auVar42 + auVar110;
  param_1[3] = auVar110._0_8_;
  uVar137 = auVar110._8_8_;
  uVar149 = uVar148 + uVar137;
  auVar78._8_8_ = 0;
  auVar78._0_8_ = uVar149;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[2];
  auVar78 = auVar7 * auVar43 + auVar78;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = auVar78._0_8_;
  uVar138 = auVar78._8_8_;
  uVar136 = (ulonglong)(uVar144 < uVar135) + (ulonglong)(uVar145 < uVar143) +
            (ulonglong)(uVar148 < uVar136) + (ulonglong)(uVar149 < uVar137) + uVar138;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[3];
  auVar79 = auVar8 * auVar44 + auVar79;
  auVar111._8_8_ = 0;
  auVar111._0_8_ = auVar79._0_8_;
  uVar143 = auVar79._8_8_;
  uVar148 = uVar136 + uVar143;
  auVar111 = auVar8 * auVar44 + auVar111;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = auVar111._0_8_;
  uVar144 = auVar111._8_8_;
  uVar149 = uVar148 + uVar144;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *param_2;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[4];
  auVar80 = auVar9 * auVar45 + auVar80;
  auVar112._8_8_ = 0;
  auVar112._0_8_ = auVar80._0_8_;
  uVar135 = auVar80._8_8_;
  uVar146 = uVar149 + uVar135;
  auVar112 = auVar9 * auVar45 + auVar112;
  param_1[4] = auVar112._0_8_;
  uVar145 = auVar112._8_8_;
  uVar147 = uVar146 + uVar145;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = uVar147;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_2;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[5];
  auVar81 = auVar10 * auVar46 + auVar81;
  auVar113._8_8_ = 0;
  auVar113._0_8_ = auVar81._0_8_;
  uVar137 = auVar81._8_8_;
  uVar148 = (ulonglong)(uVar136 < uVar138) + (ulonglong)(uVar148 < uVar143) +
            (ulonglong)(uVar149 < uVar144) + (ulonglong)(uVar146 < uVar135) +
            (ulonglong)(uVar147 < uVar145) + uVar137;
  auVar113 = auVar10 * auVar46 + auVar113;
  auVar82._8_8_ = 0;
  auVar82._0_8_ = auVar113._0_8_;
  uVar135 = auVar113._8_8_;
  uVar149 = uVar148 + uVar135;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[1];
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[4];
  auVar82 = auVar11 * auVar47 + auVar82;
  auVar114._8_8_ = 0;
  auVar114._0_8_ = auVar82._0_8_;
  uVar136 = auVar82._8_8_;
  uVar146 = uVar149 + uVar136;
  auVar114 = auVar11 * auVar47 + auVar114;
  auVar83._8_8_ = 0;
  auVar83._0_8_ = auVar114._0_8_;
  uVar138 = auVar114._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[2];
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[3];
  auVar83 = auVar12 * auVar48 + auVar83;
  auVar115._8_8_ = 0;
  auVar115._0_8_ = auVar83._0_8_;
  uVar143 = auVar83._8_8_;
  uVar141 = uVar147 + uVar143;
  auVar115 = auVar12 * auVar48 + auVar115;
  uVar144 = auVar115._8_8_;
  uVar142 = uVar141 + uVar144;
  auVar84._8_8_ = 0;
  auVar84._0_8_ = uVar142;
  param_1[5] = auVar115._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[3];
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[3];
  auVar84 = auVar13 * auVar49 + auVar84;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = auVar84._0_8_;
  uVar145 = auVar84._8_8_;
  uVar149 = (ulonglong)(uVar148 < uVar137) + (ulonglong)(uVar149 < uVar135) +
            (ulonglong)(uVar146 < uVar136) + (ulonglong)(uVar147 < uVar138) +
            (ulonglong)(uVar141 < uVar143) + (ulonglong)(uVar142 < uVar144) + uVar145;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[2];
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_2[4];
  auVar85 = auVar14 * auVar50 + auVar85;
  auVar116._8_8_ = 0;
  auVar116._0_8_ = auVar85._0_8_;
  uVar136 = auVar85._8_8_;
  uVar146 = uVar149 + uVar136;
  auVar116 = auVar14 * auVar50 + auVar116;
  auVar86._8_8_ = 0;
  auVar86._0_8_ = auVar116._0_8_;
  uVar138 = auVar116._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[1];
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_2[5];
  auVar86 = auVar15 * auVar51 + auVar86;
  auVar117._8_8_ = 0;
  auVar117._0_8_ = auVar86._0_8_;
  uVar143 = auVar86._8_8_;
  uVar141 = uVar147 + uVar143;
  auVar117 = auVar15 * auVar51 + auVar117;
  auVar87._8_8_ = 0;
  auVar87._0_8_ = auVar117._0_8_;
  uVar144 = auVar117._8_8_;
  uVar142 = uVar141 + uVar144;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_2;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_2[6];
  auVar87 = auVar16 * auVar52 + auVar87;
  auVar118._8_8_ = 0;
  auVar118._0_8_ = auVar87._0_8_;
  uVar135 = auVar87._8_8_;
  uVar150 = uVar142 + uVar135;
  auVar118 = auVar16 * auVar52 + auVar118;
  param_1[6] = auVar118._0_8_;
  uVar148 = auVar118._8_8_;
  uVar151 = uVar150 + uVar148;
  auVar88._8_8_ = 0;
  auVar88._0_8_ = uVar151;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_2;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_2[7];
  auVar88 = auVar17 * auVar53 + auVar88;
  auVar119._8_8_ = 0;
  auVar119._0_8_ = auVar88._0_8_;
  uVar137 = auVar88._8_8_;
  uVar146 = (ulonglong)(uVar149 < uVar145) + (ulonglong)(uVar146 < uVar136) +
            (ulonglong)(uVar147 < uVar138) + (ulonglong)(uVar141 < uVar143) +
            (ulonglong)(uVar142 < uVar144) + (ulonglong)(uVar150 < uVar135) +
            (ulonglong)(uVar151 < uVar148) + uVar137;
  auVar119 = auVar17 * auVar53 + auVar119;
  auVar89._8_8_ = 0;
  auVar89._0_8_ = auVar119._0_8_;
  uVar138 = auVar119._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[1];
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_2[6];
  auVar89 = auVar18 * auVar54 + auVar89;
  auVar120._8_8_ = 0;
  auVar120._0_8_ = auVar89._0_8_;
  uVar136 = auVar89._8_8_;
  uVar141 = uVar147 + uVar136;
  auVar120 = auVar18 * auVar54 + auVar120;
  auVar90._8_8_ = 0;
  auVar90._0_8_ = auVar120._0_8_;
  uVar144 = auVar120._8_8_;
  uVar142 = uVar141 + uVar144;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[2];
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_2[5];
  auVar90 = auVar19 * auVar55 + auVar90;
  auVar121._8_8_ = 0;
  auVar121._0_8_ = auVar90._0_8_;
  uVar143 = auVar90._8_8_;
  uVar150 = uVar142 + uVar143;
  auVar121 = auVar19 * auVar55 + auVar121;
  auVar91._8_8_ = 0;
  auVar91._0_8_ = auVar121._0_8_;
  uVar145 = auVar121._8_8_;
  uVar151 = uVar150 + uVar145;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_2[4];
  auVar91 = auVar20 * auVar56 + auVar91;
  auVar122._8_8_ = 0;
  auVar122._0_8_ = auVar91._0_8_;
  uVar135 = auVar91._8_8_;
  uVar139 = uVar151 + uVar135;
  auVar122 = auVar20 * auVar56 + auVar122;
  param_1[7] = auVar122._0_8_;
  uVar148 = auVar122._8_8_;
  uVar140 = uVar139 + uVar148;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = uVar140;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[4];
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[4];
  auVar92 = auVar21 * auVar57 + auVar92;
  auVar93._8_8_ = 0;
  auVar93._0_8_ = auVar92._0_8_;
  uVar149 = auVar92._8_8_;
  uVar148 = (ulonglong)(uVar146 < uVar137) + (ulonglong)(uVar147 < uVar138) +
            (ulonglong)(uVar141 < uVar136) + (ulonglong)(uVar142 < uVar144) +
            (ulonglong)(uVar150 < uVar143) + (ulonglong)(uVar151 < uVar145) +
            (ulonglong)(uVar139 < uVar135) + (ulonglong)(uVar140 < uVar148) + uVar149;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_2[3];
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_2[5];
  auVar93 = auVar22 * auVar58 + auVar93;
  auVar123._8_8_ = 0;
  auVar123._0_8_ = auVar93._0_8_;
  uVar136 = auVar93._8_8_;
  uVar146 = uVar148 + uVar136;
  auVar123 = auVar22 * auVar58 + auVar123;
  auVar94._8_8_ = 0;
  auVar94._0_8_ = auVar123._0_8_;
  uVar138 = auVar123._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_2[2];
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_2[6];
  auVar94 = auVar23 * auVar59 + auVar94;
  auVar124._8_8_ = 0;
  auVar124._0_8_ = auVar94._0_8_;
  uVar143 = auVar94._8_8_;
  uVar141 = uVar147 + uVar143;
  auVar124 = auVar23 * auVar59 + auVar124;
  auVar95._8_8_ = 0;
  auVar95._0_8_ = auVar124._0_8_;
  uVar144 = auVar124._8_8_;
  uVar142 = uVar141 + uVar144;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[1];
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_2[7];
  auVar95 = auVar24 * auVar60 + auVar95;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = auVar95._0_8_;
  uVar135 = auVar95._8_8_;
  uVar150 = uVar142 + uVar135;
  auVar125 = auVar24 * auVar60 + auVar125;
  param_1[8] = auVar125._0_8_;
  uVar145 = auVar125._8_8_;
  uVar151 = uVar150 + uVar145;
  auVar96._8_8_ = 0;
  auVar96._0_8_ = uVar151;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[2];
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_2[7];
  auVar96 = auVar25 * auVar61 + auVar96;
  auVar126._8_8_ = 0;
  auVar126._0_8_ = auVar96._0_8_;
  uVar137 = auVar96._8_8_;
  uVar148 = (ulonglong)(uVar148 < uVar149) + (ulonglong)(uVar146 < uVar136) +
            (ulonglong)(uVar147 < uVar138) + (ulonglong)(uVar141 < uVar143) +
            (ulonglong)(uVar142 < uVar144) + (ulonglong)(uVar150 < uVar135) +
            (ulonglong)(uVar151 < uVar145) + uVar137;
  auVar126 = auVar25 * auVar61 + auVar126;
  auVar97._8_8_ = 0;
  auVar97._0_8_ = auVar126._0_8_;
  uVar135 = auVar126._8_8_;
  uVar149 = uVar148 + uVar135;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[3];
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_2[6];
  auVar97 = auVar26 * auVar62 + auVar97;
  auVar127._8_8_ = 0;
  auVar127._0_8_ = auVar97._0_8_;
  uVar136 = auVar97._8_8_;
  uVar146 = uVar149 + uVar136;
  auVar127 = auVar26 * auVar62 + auVar127;
  auVar98._8_8_ = 0;
  auVar98._0_8_ = auVar127._0_8_;
  uVar138 = auVar127._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[4];
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_2[5];
  auVar98 = auVar27 * auVar63 + auVar98;
  auVar128._8_8_ = 0;
  auVar128._0_8_ = auVar98._0_8_;
  uVar143 = auVar98._8_8_;
  uVar141 = uVar147 + uVar143;
  auVar128 = auVar27 * auVar63 + auVar128;
  param_1[9] = auVar128._0_8_;
  uVar144 = auVar128._8_8_;
  uVar142 = uVar141 + uVar144;
  auVar99._8_8_ = 0;
  auVar99._0_8_ = uVar142;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[5];
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_2[5];
  auVar99 = auVar28 * auVar64 + auVar99;
  auVar100._8_8_ = 0;
  auVar100._0_8_ = auVar99._0_8_;
  uVar145 = auVar99._8_8_;
  uVar144 = (ulonglong)(uVar148 < uVar137) + (ulonglong)(uVar149 < uVar135) +
            (ulonglong)(uVar146 < uVar136) + (ulonglong)(uVar147 < uVar138) +
            (ulonglong)(uVar141 < uVar143) + (ulonglong)(uVar142 < uVar144) + uVar145;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[4];
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_2[6];
  auVar100 = auVar29 * auVar65 + auVar100;
  auVar129._8_8_ = 0;
  auVar129._0_8_ = auVar100._0_8_;
  uVar136 = auVar100._8_8_;
  uVar148 = uVar144 + uVar136;
  auVar129 = auVar29 * auVar65 + auVar129;
  auVar101._8_8_ = 0;
  auVar101._0_8_ = auVar129._0_8_;
  uVar137 = auVar129._8_8_;
  uVar149 = uVar148 + uVar137;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[3];
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_2[7];
  auVar101 = auVar30 * auVar66 + auVar101;
  auVar130._8_8_ = 0;
  auVar130._0_8_ = auVar101._0_8_;
  uVar143 = auVar101._8_8_;
  uVar146 = uVar149 + uVar143;
  auVar130 = auVar30 * auVar66 + auVar130;
  param_1[10] = auVar130._0_8_;
  uVar138 = auVar130._8_8_;
  uVar147 = uVar146 + uVar138;
  auVar102._8_8_ = 0;
  auVar102._0_8_ = uVar147;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[4];
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[7];
  auVar102 = auVar31 * auVar67 + auVar102;
  auVar131._8_8_ = 0;
  auVar131._0_8_ = auVar102._0_8_;
  uVar135 = auVar102._8_8_;
  uVar144 = (ulonglong)(uVar144 < uVar145) + (ulonglong)(uVar148 < uVar136) +
            (ulonglong)(uVar149 < uVar137) + (ulonglong)(uVar146 < uVar143) +
            (ulonglong)(uVar147 < uVar138) + uVar135;
  auVar131 = auVar31 * auVar67 + auVar131;
  auVar103._8_8_ = 0;
  auVar103._0_8_ = auVar131._0_8_;
  uVar143 = auVar131._8_8_;
  uVar145 = uVar144 + uVar143;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[5];
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[6];
  auVar103 = auVar32 * auVar68 + auVar103;
  auVar132._8_8_ = 0;
  auVar132._0_8_ = auVar103._0_8_;
  uVar136 = auVar103._8_8_;
  uVar148 = uVar145 + uVar136;
  auVar132 = auVar32 * auVar68 + auVar132;
  param_1[0xb] = auVar132._0_8_;
  uVar137 = auVar132._8_8_;
  uVar149 = uVar148 + uVar137;
  auVar104._8_8_ = 0;
  auVar104._0_8_ = uVar149;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[6];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[6];
  auVar104 = auVar33 * auVar69 + auVar104;
  auVar105._8_8_ = 0;
  auVar105._0_8_ = auVar104._0_8_;
  uVar138 = auVar104._8_8_;
  uVar137 = (ulonglong)(uVar144 < uVar135) + (ulonglong)(uVar145 < uVar143) +
            (ulonglong)(uVar148 < uVar136) + (ulonglong)(uVar149 < uVar137) + uVar138;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[5];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = param_2[7];
  auVar105 = auVar34 * auVar70 + auVar105;
  auVar133._8_8_ = 0;
  auVar133._0_8_ = auVar105._0_8_;
  uVar136 = auVar105._8_8_;
  uVar144 = uVar137 + uVar136;
  auVar133 = auVar34 * auVar70 + auVar133;
  param_1[0xc] = auVar133._0_8_;
  uVar135 = auVar133._8_8_;
  uVar145 = uVar144 + uVar135;
  auVar106._8_8_ = 0;
  auVar106._0_8_ = uVar145;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_2[6];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_2[7];
  auVar106 = auVar35 * auVar71 + auVar106;
  auVar134._8_8_ = 0;
  auVar134._0_8_ = auVar106._0_8_;
  uVar143 = auVar106._8_8_;
  uVar135 = (ulonglong)(uVar137 < uVar138) + (ulonglong)(uVar144 < uVar136) +
            (ulonglong)(uVar145 < uVar135) + uVar143;
  auVar134 = auVar35 * auVar71 + auVar134;
  param_1[0xd] = auVar134._0_8_;
  uVar136 = auVar134._8_8_;
  uVar137 = uVar135 + uVar136;
  auVar107._8_8_ = (ulonglong)(uVar135 < uVar143) + (ulonglong)(uVar137 < uVar136);
  auVar107._0_8_ = uVar137;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = param_2[7];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[7];
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar36 * auVar72 + auVar107;
  return;
}



// ===== FUN_1801f1220 @ 1801f1220 (size 157)

void FUN_1801f1220(undefined1 (*param_1) [16],ulonglong *param_2,uint param_3)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (0 < (int)param_3) {
    for (; (param_3 & 0xfffffffc) != 0; param_3 = param_3 - 4) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *param_2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *param_2;
      *param_1 = auVar2 * auVar7;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2[1];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_2[1];
      param_1[1] = auVar3 * auVar8;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2[2];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_2[2];
      param_1[2] = auVar4 * auVar9;
      puVar1 = param_2 + 3;
      param_2 = param_2 + 4;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *puVar1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *puVar1;
      param_1[3] = auVar5 * auVar10;
      param_1 = param_1 + 4;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *param_2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *param_2;
      param_2 = param_2 + 1;
      *param_1 = auVar6 * auVar11;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// ===== FUN_1801f12c0 @ 1801f12c0 (size 340)

ulonglong FUN_1801f12c0(ulonglong *param_1,ulonglong *param_2,longlong *param_3,uint param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  if ((int)param_4 < 1) {
    return 0;
  }
  for (; (param_4 & 0xfffffffc) != 0; param_4 = param_4 - 4) {
    uVar5 = *param_2;
    uVar6 = uVar5 - uVar6;
    lVar2 = *param_3;
    *param_1 = uVar6 - lVar2;
    uVar3 = param_2[1];
    uVar5 = (uVar3 - (uVar5 < uVar6)) - (ulonglong)(uVar6 < uVar6 - lVar2);
    lVar2 = param_3[1];
    param_1[1] = uVar5 - lVar2;
    uVar6 = param_2[2];
    uVar5 = (uVar6 - (uVar3 < uVar5)) - (ulonglong)(uVar5 < uVar5 - lVar2);
    lVar2 = param_3[2];
    param_1[2] = uVar5 - lVar2;
    uVar5 = (param_2[3] - (ulonglong)(uVar6 < uVar5)) - (ulonglong)(uVar5 < uVar5 - lVar2);
    uVar6 = param_2[3];
    lVar2 = param_3[3];
    param_1[3] = uVar5 - lVar2;
    param_2 = param_2 + 4;
    uVar6 = (ulonglong)((uint)(uVar6 < uVar5) + (uint)(uVar5 < uVar5 - lVar2));
    param_3 = param_3 + 4;
    param_1 = param_1 + 4;
  }
  if (param_4 != 0) {
    puVar4 = param_2;
    do {
      puVar1 = puVar4 + 1;
      uVar6 = *puVar4 - uVar6;
      uVar5 = *puVar4;
      uVar3 = uVar6 - *(longlong *)((longlong)param_3 + (-8 - (longlong)param_2) + (longlong)puVar1)
      ;
      *(ulonglong *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)puVar1) = uVar3;
      uVar6 = (ulonglong)((uint)(uVar5 < uVar6) + (uint)(uVar6 < uVar3));
      param_4 = param_4 - 1;
      puVar4 = puVar1;
    } while (param_4 != 0);
  }
  return uVar6;
}



// ===== FUN_1801f1420 @ 1801f1420 (size 266)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * FUN_1801f1420(longlong *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1801f1435;
  if ((*param_2 & 0x300) == 0) {
    return param_2;
  }
  lVar4 = (**(code **)(param_2 + 6))();
  if (*(longlong *)((ulonglong)*(uint *)(lVar4 + 4) + *param_1) == 0) {
    puVar1 = *(uint **)(lVar4 + 0x28);
  }
  else {
    if ((*param_2 & 0x100) == 0) {
      iVar2 = FUN_1801dbfa0();
    }
    else {
      iVar2 = FUN_1801b96c0();
    }
    if ((*(code **)(lVar4 + 8) != (code *)0x0) && (iVar3 = (**(code **)(lVar4 + 8))(), iVar3 == 0))
    {
      uVar6 = 0xe2;
      goto LAB_1801f14f4;
    }
    iVar3 = 0;
    piVar5 = *(int **)(lVar4 + 0x10);
    if (0 < *(int *)(lVar4 + 0x18)) {
      do {
        if (*piVar5 == iVar2) {
          return (uint *)(piVar5 + 2);
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 10;
      } while (iVar3 < *(int *)(lVar4 + 0x18));
    }
    puVar1 = *(uint **)(lVar4 + 0x20);
  }
  if (puVar1 != (uint *)0x0) {
    return puVar1;
  }
  if (param_3 == 0) {
    return (uint *)0x0;
  }
  uVar6 = 0xfb;
LAB_1801f14f4:
  FUN_1801a70c0(0xd,0x6e,0xa4,"crypto\\asn1\\tasn_utl.c",uVar6,uVar7);
  return (uint *)0x0;
}



// ===== FUN_1801f1530 @ 1801f1530 (size 225)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801f1530(longlong *param_1,int param_2,char *param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801f153c;
  iVar3 = -1;
  if ((((*param_3 != '\x01') && (*param_3 != '\x06')) ||
      (lVar1 = *(longlong *)(param_3 + 0x18), lVar1 == 0)) || ((*(byte *)(lVar1 + 8) & 1) == 0)) {
    return 0;
  }
  piVar2 = (int *)((longlong)*(int *)(lVar1 + 0xc) + *param_1);
  plVar4 = (longlong *)((longlong)*(int *)(lVar1 + 0x10) + *param_1);
  if (param_2 == -1) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      FUN_1801adcf0(*plVar4);
      *plVar4 = 0;
    }
  }
  else if (param_2 == 0) {
    iVar3 = 1;
    *piVar2 = 1;
    lVar1 = FUN_1801add30();
    *plVar4 = lVar1;
    if (lVar1 == 0) {
      FUN_1801a70c0(0xd,0xe9,0x41,"crypto\\asn1\\tasn_utl.c",0x4f,uVar5);
      return -1;
    }
  }
  else if (param_2 == 1) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    return iVar3 + 1;
  }
  return iVar3;
}



// ===== FUN_1801f1620 @ 1801f1620 (size 101)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f1620(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 != 0)) &&
     (((*(byte *)(lVar1 + 8) & 2) != 0 &&
      (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_1),
      puVar2 != (undefined8 *)0x0)))) {
    FUN_180195e10(*puVar2,"crypto\\asn1\\tasn_utl.c",0x83);
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  return;
}



// ===== FUN_1801f16d0 @ 1801f16d0 (size 149)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f16d0(undefined4 *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((param_3 == (longlong *)0x0) || (*param_3 == 0)) ||
      (lVar1 = *(longlong *)(param_4 + 0x18), lVar1 == 0)) ||
     ((((*(byte *)(lVar1 + 8) & 2) == 0 ||
       (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_3),
       puVar2 == (undefined8 *)0x0)) || (*(int *)((longlong)puVar2 + 0xc) != 0)))) {
    return 0;
  }
  if (param_2 != (longlong *)0x0) {
    memcpy((void *)*param_2,(void *)*puVar2,(longlong)*(int *)(puVar2 + 1));
    *param_2 = *param_2 + (longlong)*(int *)(puVar2 + 1);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(puVar2 + 1);
  }
  return 1;
}



// ===== FUN_1801f1770 @ 1801f1770 (size 247)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801f1770(longlong *param_1,void *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  void *_Dst;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801f1785;
  if ((((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
      (lVar1 = *(longlong *)(param_4 + 0x18), lVar1 == 0)) ||
     (((*(byte *)(lVar1 + 8) & 2) == 0 ||
      (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_1),
      puVar2 == (undefined8 *)0x0)))) {
    return true;
  }
  FUN_180195e10(*puVar2,"crypto\\asn1\\tasn_utl.c",0x92);
  _Dst = (void *)FUN_180195dc0((longlong)param_3,"crypto\\asn1\\tasn_utl.c",0x93);
  *puVar2 = _Dst;
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,param_2,(longlong)param_3);
    *(int *)(puVar2 + 1) = param_3;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1801a70c0(0xd,0x73,0x41,"crypto\\asn1\\tasn_utl.c",0x94,uVar3);
  }
  return _Dst != (void *)0x0;
}



// ===== FUN_1801f18a0 @ 1801f18a0 (size 76)

bool FUN_1801f18a0(int *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_2 < 0) || (param_1 == (int *)0x0)) ||
      (iVar1 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3, *param_1 < iVar1 + 1)) ||
     (*(longlong *)(param_1 + 2) == 0)) {
    return false;
  }
  return (*(byte *)((longlong)iVar1 + *(longlong *)(param_1 + 2)) &
         (byte)(1 << (7 - ((byte)param_2 & 7) & 0x1f))) != 0;
}



// ===== FUN_1801f18f0 @ 1801f18f0 (size 353)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f18f0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  
  if (param_2 < 0) {
    return 0;
  }
  iVar1 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  bVar4 = (byte)(1 << (7 - ((byte)param_2 & 7) & 0x1f));
  bVar6 = 0;
  if (param_3 != 0) {
    bVar6 = bVar4;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  param_1[4] = param_1[4] & 0xfffffff0;
  iVar5 = iVar1 + 1;
  if ((*param_1 < iVar5) || (lVar3 = *(longlong *)(param_1 + 2), lVar3 == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    lVar3 = FUN_180195fa0(*(undefined8 *)(param_1 + 2),(longlong)*param_1,(longlong)iVar5,
                          "crypto\\asn1\\a_bitstr.c",0xa8,0x1801f1905);
    if (lVar3 == 0) {
      FUN_1801a70c0(0xd,0xb7,0x41,"crypto\\asn1\\a_bitstr.c",0xaa);
      return 0;
    }
    iVar2 = (iVar1 - *param_1) + 1;
    if (0 < iVar2) {
      memset((void *)(*param_1 + lVar3),0,(longlong)iVar2);
    }
    *(longlong *)(param_1 + 2) = lVar3;
    *param_1 = iVar5;
  }
  *(byte *)(iVar1 + lVar3) = *(byte *)(iVar1 + lVar3) & ~bVar4 | bVar6;
  iVar1 = *param_1;
  if (0 < iVar1) {
    do {
      if (*(char *)((longlong)iVar1 + -1 + *(longlong *)(param_1 + 2)) != '\0') {
        return 1;
      }
      iVar1 = iVar1 + -1;
      *param_1 = iVar1;
    } while (0 < iVar1);
  }
  return 1;
}



// ===== FUN_1801f1a60 @ 1801f1a60 (size 351)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_1801f1a60(longlong *param_1,undefined8 *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  void *_Dst;
  byte *_Src;
  undefined4 uVar4;
  size_t _Size;
  undefined8 uVar5;
  
  uVar5 = 0x1801f1a82;
  _Dst = (void *)0x0;
  piVar3 = (int *)0x0;
  if (param_3 < 1) {
    uVar4 = 0x98;
  }
  else {
    if (((param_1 == (longlong *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) &&
       (piVar3 = (int *)FUN_1801bc3f0(), piVar3 == (int *)0x0)) {
      return (int *)0x0;
    }
    bVar2 = *(byte *)*param_2;
    _Src = (byte *)*param_2 + 1;
    if (bVar2 < 8) {
      piVar3[4] = piVar3[4] & 0xfffffff8;
      piVar3[4] = piVar3[4] | bVar2 | 8;
      if (1 < param_3) {
        _Size = (size_t)(param_3 + -1);
        _Dst = (void *)FUN_180195dc0(_Size,"crypto\\asn1\\a_bitstr.c",0x75);
        if (_Dst == (void *)0x0) {
          uVar4 = 0x41;
          goto LAB_1801f1b17;
        }
        memcpy(_Dst,_Src,_Size);
        pbVar1 = (byte *)((longlong)param_3 + -2 + (longlong)_Dst);
        *pbVar1 = *pbVar1 & -1 << (bVar2 & 0x1f);
        _Src = _Src + _Size;
      }
      *piVar3 = param_3 + -1;
      FUN_180195e10(*(undefined8 *)(piVar3 + 2),"crypto\\asn1\\a_bitstr.c",0x81);
      *(void **)(piVar3 + 2) = _Dst;
      piVar3[1] = 3;
      if (param_1 != (longlong *)0x0) {
        *param_1 = (longlong)piVar3;
      }
      *param_2 = _Src;
      return piVar3;
    }
    uVar4 = 0xdc;
  }
LAB_1801f1b17:
  FUN_1801a70c0(0xd,0xbd,uVar4,"crypto\\asn1\\a_bitstr.c",0x89,uVar5);
  if ((param_1 == (longlong *)0x0) || ((int *)*param_1 != piVar3)) {
    FUN_1801bc3c0(piVar3);
  }
  return (int *)0x0;
}



// ===== FUN_1801f1bc0 @ 1801f1bc0 (size 293)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801f1bc0(uint *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte bVar5;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = (ulonglong)(int)uVar1;
  if (0 < (int)uVar1) {
    if ((param_1[4] & 8) != 0) {
      bVar5 = (byte)param_1[4] & 7;
      goto LAB_1801f1c85;
    }
    uVar3 = uVar2;
    do {
      uVar1 = (uint)uVar3;
      if (*(char *)(*(longlong *)(param_1 + 2) + -1 + uVar2) != '\0') break;
      uVar1 = uVar1 - 1;
      uVar3 = (ulonglong)uVar1;
      uVar2 = uVar2 - 1;
    } while (0 < (longlong)uVar2);
    bVar5 = *(byte *)((longlong)(int)uVar1 + -1 + *(longlong *)(param_1 + 2));
    if ((bVar5 & 1) == 0) {
      if ((bVar5 & 2) == 0) {
        if ((bVar5 & 4) == 0) {
          if ((bVar5 & 8) == 0) {
            if ((bVar5 & 0x10) == 0) {
              if ((bVar5 & 0x20) == 0) {
                if ((bVar5 & 0x40) == 0) {
                  bVar5 = -((bVar5 & 0x80) != 0) & 7;
                }
                else {
                  bVar5 = 6;
                }
              }
              else {
                bVar5 = 5;
              }
            }
            else {
              bVar5 = 4;
            }
          }
          else {
            bVar5 = 3;
          }
        }
        else {
          bVar5 = 2;
        }
      }
      else {
        bVar5 = 1;
      }
      goto LAB_1801f1c85;
    }
  }
  bVar5 = 0;
LAB_1801f1c85:
  if (param_2 != (longlong *)0x0) {
    pbVar4 = (byte *)*param_2;
    *pbVar4 = bVar5;
    pbVar4 = pbVar4 + 1;
    if (0 < (int)uVar1) {
      memcpy(pbVar4,*(void **)(param_1 + 2),(longlong)(int)uVar1);
      pbVar4 = pbVar4 + (int)uVar1;
      pbVar4[-1] = pbVar4[-1] & -1 << bVar5;
    }
    *param_2 = (longlong)pbVar4;
  }
  return uVar1 + 1;
}



// ===== FUN_1801f1d30 @ 1801f1d30 (size 91)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f1d30(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1801c5f90();
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar1 = FUN_1801c5e40(lVar2,*(undefined8 *)(param_2 + 0x28));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801f1db0 @ 1801f1db0 (size 122)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f1db0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1801c5f90();
  if (lVar2 != 0) {
    iVar1 = FUN_1801c5e40(lVar2,*(undefined8 *)(param_1 + 0x28));
    if (iVar1 != 0) {
      FUN_18019dbd0(param_2,0x37e,lVar2);
      return 1;
    }
    FUN_1801c5f00(lVar2);
  }
  return 0;
}



// ===== FUN_1801f1e90 @ 1801f1e90 (size 162)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f1e90(longlong param_1,int param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801f1e9c;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 1) {
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (iVar2 = FUN_1801c5e40(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28)),
       iVar2 == 0)) {
      return 0;
    }
    uVar5 = 0;
    lVar4 = 0;
  }
  else {
    if (param_2 == 6) {
      if (param_4 == 0) {
        return 0;
      }
      if (param_3 < 0) {
        return 0;
      }
      lVar3 = (longlong)param_3;
      lVar4 = 0;
      uVar5 = 0;
      goto LAB_1801f1f13;
    }
    if (param_2 != 0xc) {
      return 0xfffffffe;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    lVar4 = param_4;
  }
  lVar3 = 0;
  param_4 = 0;
LAB_1801f1f13:
  iVar2 = FUN_1801c6150(uVar1,param_4,lVar3,lVar4,uVar5,uVar6);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



// ===== FUN_1801f1f40 @ 1801f1f40 (size 261)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801f1f40(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801f1f50;
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      lVar5 = lVar2 + 1;
      if (*(char *)(param_2 + lVar2) != "cipher"[lVar2]) {
        lVar2 = 0;
        do {
          lVar5 = lVar2;
          uVar3 = 0;
          if (*(char *)(param_2 + lVar5) != (&DAT_1802edbd0)[lVar5]) {
            do {
              uVar4 = uVar3;
              if (*(char *)(param_2 + uVar4) != (&DAT_180332dc8)[uVar4]) {
                return 0xfffffffe;
              }
              uVar3 = uVar4 + 1;
            } while (uVar4 + 1 != 7);
            uVar3 = FUN_1801c3010(param_1,uVar4 & 0xffffffff);
            return uVar3;
          }
          lVar2 = lVar5 + 1;
        } while (lVar5 + 1 != 4);
        uVar3 = FUN_1801c3190(param_1,(int)lVar5 + 3);
        return uVar3;
      }
      lVar2 = lVar5;
    } while (lVar5 != 7);
    lVar2 = FUN_1801dcee0(param_3);
    if (lVar2 != 0) {
      iVar1 = FUN_1801c6150(*(undefined8 *)(param_1 + 0x28),0,0,lVar2,*(undefined8 *)(param_1 + 8),
                            uVar6);
      return (ulonglong)(iVar1 != 0);
    }
  }
  return 0;
}



// ===== FUN_1801f2050 @ 1801f2050 (size 65)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801f2050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1801afd00();
  iVar1 = FUN_1801c6300(*(undefined8 *)(lVar2 + 0x28),param_2,param_3);
  return iVar1 != 0;
}



// ===== FUN_1801f20a0 @ 1801f20a0 (size 134)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f20a0(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801f20ac;
  puVar1 = (undefined4 *)FUN_180196100(0x60,"crypto\\dh\\dh_pmeth.c",0x35);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_1801a70c0(5,0x7d,0x41,"crypto\\dh\\dh_pmeth.c",0x36,uVar2);
    return 0;
  }
  *puVar1 = 0x800;
  puVar1[3] = 0xffffffff;
  puVar1[1] = 2;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  *(undefined4 **)(param_1 + 0x40) = puVar1 + 10;
  *(undefined4 *)(param_1 + 0x48) = 2;
  return 1;
}



// ===== FUN_1801f2130 @ 1801f2130 (size 85)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f2130(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  FUN_180195e10(*(undefined8 *)(lVar1 + 0x48),"crypto\\dh\\dh_pmeth.c",0x49);
  FUN_18019aa30(*(undefined8 *)(lVar1 + 0x38));
  FUN_180195e10(lVar1,"crypto\\dh\\dh_pmeth.c",0x4b);
  return;
}



// ===== FUN_1801f2190 @ 1801f2190 (size 318)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f2190(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801f21a5;
  puVar2 = (undefined4 *)FUN_180196100(0x60,"crypto\\dh\\dh_pmeth.c",0x35);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_1801a70c0(5,0x7d,0x41,"crypto\\dh\\dh_pmeth.c",0x36,uVar4);
  }
  else {
    *puVar2 = 0x800;
    puVar2[3] = 0xffffffff;
    puVar2[1] = 2;
    *(undefined1 *)(puVar2 + 0xc) = 1;
    *(undefined4 **)(param_1 + 0x40) = puVar2 + 10;
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    *(undefined4 *)(param_1 + 0x48) = 2;
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    *puVar2 = *puVar1;
    puVar2[3] = puVar1[3];
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[4] = puVar1[4];
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
    puVar2[8] = puVar1[8];
    puVar2[9] = puVar1[9];
    *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(puVar1 + 0xc);
    lVar3 = FUN_1801bc270(*(undefined8 *)(puVar1 + 0xe));
    *(longlong *)(puVar2 + 0xe) = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
      if (*(longlong *)(puVar1 + 0x12) != 0) {
        lVar3 = FUN_1801ba270(*(longlong *)(puVar1 + 0x12),*(undefined8 *)(puVar1 + 0x14),
                              "crypto\\dh\\dh_pmeth.c",0x66);
        *(longlong *)(puVar2 + 0x12) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(puVar1 + 0x14);
      }
      *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(puVar1 + 0x16);
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801f22d0 @ 1801f22d0 (size 704)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801f22d0(longlong param_1,int param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  longlong lVar2;
  
  puVar1 = *(uint **)(param_1 + 0x28);
  lVar2 = (longlong)(int)param_3;
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (0xff < (int)param_3) {
        *puVar1 = param_3;
        return 1;
      }
    }
    else if (param_2 == 2) {
      return 1;
    }
  }
  else {
    switch(param_2) {
    case 0x1002:
      if (puVar1[2] == 0) {
        puVar1[1] = param_3;
        return 1;
      }
      break;
    case 0x1003:
      if ((param_3 - 1 < 3) && (puVar1[9] == 0)) {
        puVar1[8] = param_3;
        return 1;
      }
      break;
    case 0x1004:
      if (puVar1[2] != 0) {
        puVar1[3] = param_3;
        return 1;
      }
      break;
    case 0x1005:
      if (param_3 < 3) {
        puVar1[2] = param_3;
        return 1;
      }
      break;
    case 0x1006:
      if (param_3 == 0xfffffffe) {
        return (int)(char)puVar1[0xc];
      }
      if (param_3 - 1 < 2) {
        *(char *)(puVar1 + 0xc) = (char)param_3;
        return 1;
      }
      break;
    case 0x1007:
      *(uint **)(puVar1 + 0x10) = param_4;
      return 1;
    case 0x1008:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0x10);
      return 1;
    case 0x1009:
      if (0 < (int)param_3) {
        *(longlong *)(puVar1 + 0x16) = lVar2;
        return 1;
      }
      break;
    case 0x100a:
      *param_4 = puVar1[0x16];
      return 1;
    case 0x100b:
      FUN_180195e10(*(undefined8 *)(puVar1 + 0x12),"crypto\\dh\\dh_pmeth.c",0xc3);
      *(uint **)(puVar1 + 0x12) = param_4;
      if (param_4 == (uint *)0x0) {
        lVar2 = 0;
      }
      *(longlong *)(puVar1 + 0x14) = lVar2;
      return 1;
    case 0x100c:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0x12);
      return puVar1[0x14];
    case 0x100d:
      FUN_18019aa30(*(undefined8 *)(puVar1 + 0xe));
      *(uint **)(puVar1 + 0xe) = param_4;
      return 1;
    case 0x100e:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0xe);
      return 1;
    case 0x100f:
      if ((0 < (int)param_3) && (puVar1[8] == 0)) {
        puVar1[9] = param_3;
        return 1;
      }
      break;
    case 0x1010:
      puVar1[4] = param_3;
      return 1;
    }
  }
  return 0xfffffffe;
}



// ===== FUN_1801f25d0 @ 1801f25d0 (size 619)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f25d0(longlong param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801f25e5;
  iVar1 = strcmp(param_2,"dh_paramgen_prime_len");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar5 = FUN_1801c2d40(param_1,0x1c,2,0x1001,iVar1,0);
    return uVar5;
  }
  iVar1 = strcmp(param_2,"dh_rfc5114");
  if (iVar1 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar2 = atoi(param_3);
    if (uVar2 < 4) {
      *(uint *)(lVar3 + 0x20) = uVar2;
      return 1;
    }
  }
  else {
    iVar1 = strcmp(param_2,"dh_param");
    if (iVar1 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      iVar1 = FUN_1801b9c80(param_3);
      if (iVar1 != 0) {
        *(int *)(lVar3 + 0x24) = iVar1;
        return 1;
      }
      FUN_1801a70c0(5,0x78,0x6e,"crypto\\dh\\dh_pmeth.c",0xf4,uVar5);
    }
    else {
      iVar1 = strcmp(param_2,"dh_paramgen_generator");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = FUN_1801c2d40(param_1,0x1c,2,0x1002,iVar1,0);
        return uVar5;
      }
      iVar1 = strcmp(param_2,"dh_paramgen_subprime_len");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = FUN_1801c2d40(param_1,0x1c,2,0x1004,iVar1,0);
        return uVar5;
      }
      iVar1 = strcmp(param_2,"dh_paramgen_type");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = FUN_1801c2d40(param_1,0x1c,2,0x1005,iVar1,0);
        return uVar5;
      }
      lVar3 = 0;
      while (lVar4 = lVar3 + 1, param_2[lVar3] == (&DAT_18033306c)[lVar3]) {
        lVar3 = lVar4;
        if (lVar4 == 7) {
          iVar1 = atoi(param_3);
          uVar5 = FUN_1801c2d40(param_1,0x1c,0x400,0x1010,iVar1,0);
          return uVar5;
        }
      }
    }
  }
  return 0xfffffffe;
}



// ===== FUN_1801f2840 @ 1801f2840 (size 666)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801f2840(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  piVar1 = *(int **)(param_1 + 0x28);
  iVar2 = piVar1[8];
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar3 = FUN_18021d0f0();
    }
    else if (iVar2 == 2) {
      uVar3 = FUN_18021d170();
    }
    else {
      if (iVar2 != 3) {
        return -2;
      }
      uVar3 = FUN_18021d1f0();
    }
    FUN_18019dbd0(param_2,0x398,uVar3);
    return 1;
  }
  if (piVar1[9] != 0) {
    lVar4 = FUN_18021d270();
    if (lVar4 == 0) {
      return 0;
    }
    FUN_18019dbd0(param_2,0x1c,lVar4);
    return 1;
  }
  lVar4 = 0;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_180198180();
    if (lVar5 == 0) {
      return 0;
    }
    FUN_18021dbf0(lVar5,param_1);
  }
  if (piVar1[2] == 0) {
    lVar4 = FUN_18019f420();
    if (lVar4 == 0) {
      FUN_180198150(lVar5);
      return 0;
    }
    iVar2 = FUN_18021cef0(lVar4,*piVar1,piVar1[1],lVar5);
    FUN_180198150(lVar5);
    if (iVar2 == 0) {
      FUN_18019f2e0(lVar4);
      return 0;
    }
    FUN_18019dbd0(param_2,0x1c,lVar4);
    return iVar2;
  }
  iVar2 = *piVar1;
  iVar8 = piVar1[3];
  lVar7 = *(longlong *)(piVar1 + 6);
  if (2 < piVar1[2]) goto LAB_1801f2a1f;
  lVar6 = FUN_18019fb00();
  if (lVar6 == 0) goto LAB_1801f2a1f;
  if ((iVar8 == -1) && (iVar8 = 0xa0, 0x7ff < iVar2)) {
    iVar8 = 0x100;
  }
  if (lVar7 == 0) {
    if (iVar2 < 0x800) {
      lVar7 = FUN_18019db60();
    }
    else {
      lVar7 = FUN_18019db80();
    }
  }
  if (piVar1[2] == 1) {
    iVar2 = FUN_18021dc50(lVar6,(longlong)iVar2,(longlong)iVar8,lVar7,0,0,0,0,0,lVar5);
LAB_1801f2a0e:
    if (0 < iVar2) {
      lVar4 = lVar6;
      goto LAB_1801f2a1f;
    }
  }
  else if (piVar1[2] == 2) {
    iVar2 = FUN_18021e4c0(lVar6,(longlong)iVar2,(longlong)iVar8,lVar7,0,0,CONCAT44(uVar9,0xffffffff)
                          ,0,0,0,lVar5);
    goto LAB_1801f2a0e;
  }
  FUN_18019f9f0(lVar6);
LAB_1801f2a1f:
  FUN_180198150(lVar5);
  if (lVar4 != 0) {
    lVar5 = FUN_18019f860(lVar4);
    FUN_18019f9f0(lVar4);
    if (lVar5 != 0) {
      FUN_18019dbd0(param_2,0x398,lVar5);
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801f2ae0 @ 1801f2ae0 (size 167)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f2ae0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_1[2] == 0) && (*(int *)(param_1[5] + 0x24) == 0)) {
    FUN_1801a70c0(5,0x71,0x6b,"crypto\\dh\\dh_pmeth.c",0x194,0x1801f2af0);
  }
  else {
    if (*(int *)(param_1[5] + 0x24) == 0) {
      lVar2 = FUN_18019f420();
    }
    else {
      lVar2 = FUN_18021d270();
    }
    if (lVar2 != 0) {
      FUN_18019dbd0(param_2,*(undefined4 *)*param_1,lVar2);
      if ((param_1[2] == 0) || (iVar1 = FUN_18019dd80(param_2), iVar1 != 0)) {
        uVar3 = FUN_1801cb950(*(undefined8 *)(param_2 + 0x28));
        return uVar3;
      }
      return 0;
    }
  }
  return 0;
}



// ===== FUN_1801f2b90 @ 1801f2b90 (size 455)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f2b90(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    FUN_1801a70c0(5,0x70,0x6c,"crypto\\dh\\dh_pmeth.c",0x1ac);
    return 0;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) + 0x20);
  if (*(char *)(lVar1 + 0x30) == '\x01') {
    if (param_2 == 0) {
      iVar3 = FUN_18019f7f0(uVar4);
      *param_3 = (longlong)iVar3;
    }
    else {
      if (*(int *)(lVar1 + 0x10) == 0) {
        uVar4 = FUN_1801cb800(param_2,uVar2,uVar4);
      }
      else {
        uVar4 = FUN_1801cb8b0();
      }
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      *param_3 = (longlong)(int)uVar4;
    }
LAB_1801f2bf8:
    uVar4 = 1;
  }
  else {
    if (((*(char *)(lVar1 + 0x30) == '\x02') && (lVar5 = *(longlong *)(lVar1 + 0x58), lVar5 != 0))
       && (*(longlong *)(lVar1 + 0x38) != 0)) {
      if (param_2 == 0) {
        *param_3 = lVar5;
        goto LAB_1801f2bf8;
      }
      if (*param_3 == lVar5) {
        uVar6 = 0;
        iVar3 = FUN_18019f7f0(uVar4);
        lVar7 = (longlong)iVar3;
        lVar5 = FUN_180195dc0(lVar7,"crypto\\dh\\dh_pmeth.c",0x1ce);
        if (((lVar5 != 0) && (iVar3 = FUN_1801cb8b0(lVar5,uVar2,uVar4), 0 < iVar3)) &&
           (iVar3 = FUN_18021d3b0(param_2,*param_3,lVar5,lVar7,*(undefined8 *)(lVar1 + 0x38),
                                  *(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50),
                                  *(undefined8 *)(lVar1 + 0x40)), iVar3 != 0)) {
          uVar6 = 1;
          *param_3 = *(longlong *)(lVar1 + 0x58);
        }
        FUN_180195f20(lVar5,lVar7,"crypto\\dh\\dh_pmeth.c",0x1da);
        return uVar6;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_1801f2d60 @ 1801f2d60 (size 98)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f2d60(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_180195dc0(0x20,"crypto\\dsa\\dsa_pmeth.c",0x22);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0x800;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  puVar1[1] = 0xe0;
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  *(undefined4 **)(param_1 + 0x40) = puVar1 + 4;
  *(undefined4 *)(param_1 + 0x48) = 2;
  return 1;
}



// ===== FUN_1801f2dd0 @ 1801f2dd0 (size 152)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f2dd0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_180195dc0(0x20,"crypto\\dsa\\dsa_pmeth.c",0x22);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar2 = 0x800;
  puVar2[1] = 0xe0;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined4 **)(param_1 + 0x28) = puVar2;
  *(undefined4 **)(param_1 + 0x40) = puVar2 + 4;
  *(undefined4 *)(param_1 + 0x48) = 2;
  puVar1 = *(undefined4 **)(param_2 + 0x28);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
  *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
  return 1;
}



// ===== FUN_1801f2ea0 @ 1801f2ea0 (size 150)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f2ea0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint local_res8 [2];
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) != 0) &&
     (iVar1 = FUN_1801afe40(), param_5 != iVar1)) {
    return 0;
  }
  uVar2 = FUN_1801d4c50(0,param_4,(undefined4)param_5,param_2,local_res8,uVar2);
  if (0 < (int)uVar2) {
    *param_3 = (ulonglong)local_res8[0];
    uVar2 = 1;
  }
  return uVar2;
}



// ===== FUN_1801f2f40 @ 1801f2f40 (size 128)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f2f40(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) == 0) ||
     (iVar1 = FUN_1801afe40(), param_5 == iVar1)) {
    uVar2 = FUN_1801d4ce0(0,param_4,(undefined4)param_5,param_2,param_3,uVar2);
    return uVar2;
  }
  return 0;
}



// ===== FUN_1801f2fc0 @ 1801f2fc0 (size 557)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f2fc0(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801f2fd0;
  piVar1 = *(int **)(param_1 + 0x28);
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (0xff < param_3) {
        *piVar1 = param_3;
        return 1;
      }
    }
    else {
      switch(param_2) {
      case 1:
        iVar2 = FUN_18019a410(param_4);
        if ((((iVar2 == 0x40) || (iVar2 = FUN_18019a410(param_4), iVar2 == 0x74)) ||
            (((iVar2 = FUN_18019a410(param_4), iVar2 == 0x42 ||
              (((iVar2 = FUN_18019a410(param_4), iVar2 == 0x2a3 ||
                (iVar2 = FUN_18019a410(param_4), iVar2 == 0x2a0)) ||
               (iVar2 = FUN_18019a410(param_4), iVar2 == 0x2a1)))) ||
             ((iVar2 = FUN_18019a410(param_4), iVar2 == 0x2a2 ||
              (iVar2 = FUN_18019a410(param_4), iVar2 == 0x448)))))) ||
           ((iVar2 = FUN_18019a410(param_4), iVar2 == 0x449 ||
            ((iVar2 = FUN_18019a410(param_4), iVar2 == 0x44a ||
             (iVar2 = FUN_18019a410(param_4), iVar2 == 1099)))))) {
          *(undefined8 **)(piVar1 + 6) = param_4;
          return 1;
        }
        uVar3 = 0x92;
LAB_1801f317c:
        FUN_1801a70c0(10,0x78,0x6a,"crypto\\dsa\\dsa_pmeth.c",uVar3,uVar4);
        return 0;
      case 2:
        FUN_1801a70c0(10,0x78,0x96,"crypto\\dsa\\dsa_pmeth.c",0xa3,0x1801f2fd0);
        break;
      case 5:
      case 7:
      case 0xb:
        return 1;
      case 0xd:
        *param_4 = *(undefined8 *)(piVar1 + 6);
        return 1;
      }
    }
  }
  else if (param_2 == 0x1002) {
    if ((((param_3 == 0xa0) || (param_3 == 0xe0)) || (param_3 == 0)) || (param_3 == 0x100)) {
      piVar1[1] = param_3;
      return 1;
    }
  }
  else if (param_2 == 0x1003) {
    iVar2 = FUN_18019a410(param_4);
    if (((iVar2 == 0x40) || (iVar2 = FUN_18019a410(param_4), iVar2 == 0x2a3)) ||
       (iVar2 = FUN_18019a410(param_4), iVar2 == 0x2a0)) {
      *(undefined8 **)(piVar1 + 2) = param_4;
      return 1;
    }
    uVar3 = 0x80;
    goto LAB_1801f317c;
  }
  return 0xfffffffe;
}



// ===== FUN_1801f3230 @ 1801f3230 (size 346)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f3230(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801f3245;
  iVar1 = strcmp(param_2,"dsa_paramgen_bits");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar3 = FUN_1801c2d40(param_1,0x74,2,0x1001,iVar1,0);
    return uVar3;
  }
  iVar1 = strcmp(param_2,"dsa_paramgen_q_bits");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar3 = FUN_1801c2d40(param_1,0x74,2,0x1002,iVar1,0);
    return uVar3;
  }
  iVar1 = strcmp(param_2,"dsa_paramgen_md");
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  lVar2 = FUN_1801dcf20(param_3);
  if (lVar2 == 0) {
    FUN_1801a70c0(10,0x68,0x6a,"crypto\\dsa\\dsa_pmeth.c",0xbb,uVar3);
    return 0;
  }
  uVar3 = FUN_1801c2d40(param_1,0x74,2,0x1003,0,lVar2);
  return uVar3;
}



// ===== FUN_1801f3390 @ 1801f3390 (size 226)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801f3390(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_180198180();
    if (lVar3 == 0) {
      return 0;
    }
    FUN_18021dbf0(lVar3,param_1);
  }
  lVar4 = FUN_18019fb00();
  if (lVar4 == 0) {
    FUN_180198150(lVar3);
    return 0;
  }
  iVar2 = FUN_18021dc50(lVar4,(longlong)*piVar1,(longlong)piVar1[1],*(undefined8 *)(piVar1 + 2),0,0,
                        0,0,0,lVar3);
  FUN_180198150(lVar3);
  if (iVar2 == 0) {
    FUN_18019f9f0(lVar4);
    return 0;
  }
  FUN_18019dbd0(param_2,0x74,lVar4);
  return iVar2;
}



// ===== FUN_1801f3480 @ 1801f3480 (size 136)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f3480(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_1801a70c0(10,0x79,0x6b,"crypto\\dsa\\dsa_pmeth.c",0xe5,0x1801f3490);
  }
  else {
    lVar2 = FUN_18019fb00();
    if (lVar2 != 0) {
      FUN_18019dbd0(param_2,0x74,lVar2);
      iVar1 = FUN_18019dd80(param_2,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        uVar3 = FUN_18021f000(*(undefined8 *)(param_2 + 0x28));
        return uVar3;
      }
    }
  }
  return 0;
}



// ===== FUN_1801f3510 @ 1801f3510 (size 103)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f3510(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801f351c;
  lVar1 = FUN_180196100(0x40,"crypto\\ec\\ec_pmeth.c",0x2d);
  if (lVar1 == 0) {
    FUN_1801a70c0(0x10,0x11a,0x41,"crypto\\ec\\ec_pmeth.c",0x2e,uVar2);
    return 0;
  }
  *(undefined2 *)(lVar1 + 0x18) = 0x1ff;
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// ===== FUN_1801f3580 @ 1801f3580 (size 291)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f3580(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801f3595;
  plVar2 = (longlong *)FUN_180196100(0x40,"crypto\\ec\\ec_pmeth.c",0x2d);
  if (plVar2 == (longlong *)0x0) {
    FUN_1801a70c0(0x10,0x11a,0x41,"crypto\\ec\\ec_pmeth.c",0x2e,uVar4);
    return 0;
  }
  *(undefined2 *)(plVar2 + 3) = 0x1ff;
  *(longlong **)(param_1 + 0x28) = plVar2;
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (*plVar1 != 0) {
    lVar3 = FUN_1801dd6b0();
    *plVar2 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  plVar2[1] = plVar1[1];
  if (plVar1[2] != 0) {
    lVar3 = FUN_1801c5210();
    plVar2[2] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  *(undefined1 *)((longlong)plVar2 + 0x19) = *(undefined1 *)((longlong)plVar1 + 0x19);
  plVar2[4] = plVar1[4];
  plVar2[7] = plVar1[7];
  if (plVar1[5] == 0) {
    plVar2[5] = 0;
  }
  else {
    lVar3 = FUN_1801ba270(plVar1[5],plVar1[6],"crypto\\ec\\ec_pmeth.c",0x4f);
    plVar2[5] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  plVar2[6] = plVar1[6];
  return 1;
}



// ===== FUN_1801f36b0 @ 1801f36b0 (size 110)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f36b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1801dd8b0(*puVar1);
    FUN_1801c5270(puVar1[2]);
    FUN_180195e10(puVar1[5],"crypto\\ec\\ec_pmeth.c",0x5e);
    FUN_180195e10(puVar1,"crypto\\ec\\ec_pmeth.c",0x5f);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// ===== FUN_1801f3720 @ 1801f3720 (size 198)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f3720(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar6;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x1801f3738;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  iVar2 = FUN_1801d2d70(uVar5);
  if (iVar2 < 1) {
LAB_1801f3789:
    uVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)iVar2;
    if (param_2 != 0) {
      if (*param_3 < uVar4) {
        FUN_1801a70c0(0x10,0xda,100,"crypto\\ec\\ec_pmeth.c",CONCAT44(uVar3,0x77),uVar6);
        goto LAB_1801f3789;
      }
      if (*(longlong *)(lVar1 + 8) == 0) {
        uVar3 = 0x40;
      }
      else {
        uVar3 = FUN_18019a410();
      }
      uVar5 = FUN_18021f1a0(uVar3,param_4,param_5,param_2,local_res8,uVar5);
      if ((int)uVar5 < 1) {
        return uVar5;
      }
      uVar4 = (ulonglong)local_res8[0];
    }
    *param_3 = uVar4;
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FUN_1801f37f0 @ 1801f37f0 (size 119)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f37f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) == 0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = FUN_18019a410();
  }
  FUN_18021f260(uVar2,param_4,param_5,param_2,param_3,uVar1);
  return;
}



// ===== FUN_1801f3870 @ 1801f3870 (size 397)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801f3870(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar7 = 0;
  if (*(char *)(lVar1 + 0x19) == '\x01') {
    uVar4 = FUN_1801f4280();
  }
  else if (param_2 == 0) {
    *param_3 = *(longlong *)(lVar1 + 0x38);
    uVar4 = 1;
  }
  else {
    if (*param_3 == *(longlong *)(lVar1 + 0x38)) {
      if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
        lVar6 = *(longlong *)(lVar1 + 0x10);
        if (lVar6 == 0) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
        }
        uVar5 = FUN_1800b7fa0(lVar6);
        iVar3 = FUN_1801dda10(uVar5);
        local_res8 = (longlong)((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3);
        lVar6 = FUN_180195dc0(local_res8,"crypto\\ec\\ec_pmeth.c",0xcd);
        if (lVar6 == 0) {
          FUN_1801a70c0(0x10,0x11b,0x41,"crypto\\ec\\ec_pmeth.c",CONCAT44(uVar8,0xce));
          return 0;
        }
        iVar3 = FUN_1801f4280(param_1,lVar6,&local_res8);
        lVar2 = local_res8;
        if (iVar3 != 0) {
          iVar3 = FUN_18021f2c0(param_2,*param_3,lVar6,local_res8,*(undefined8 *)(lVar1 + 0x28),
                                *(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x20));
          uVar7 = 0;
          if (iVar3 != 0) {
            uVar7 = 1;
          }
        }
        FUN_180195f20(lVar6,lVar2,"crypto\\ec\\ec_pmeth.c",0xda);
        return (ulonglong)uVar7;
      }
      FUN_1801a70c0(0x10,0xd9,0x8c,"crypto\\ec\\ec_pmeth.c",0xa0);
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_1801f3a00 @ 1801f3a00 (size 1118)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801f3a00(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  lVar5 = (longlong)param_3;
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      lVar5 = FUN_180201860(param_3);
      if (lVar5 == 0) {
        FUN_1801a70c0(0x10,0xc5,0x8d,"crypto\\ec\\ec_pmeth.c",0xe7);
        return 0;
      }
      FUN_1801dd8b0(*plVar1);
      *plVar1 = lVar5;
      return 1;
    }
    switch(param_2) {
    case 1:
      iVar2 = FUN_18019a410(param_4);
      if ((((((iVar2 == 0x40) || (iVar2 = FUN_18019a410(param_4), iVar2 == 0x1a0)) ||
            (iVar2 = FUN_18019a410(param_4), iVar2 == 0x2a3)) ||
           ((iVar2 = FUN_18019a410(param_4), iVar2 == 0x2a0 ||
            (iVar2 = FUN_18019a410(param_4), iVar2 == 0x2a1)))) ||
          ((iVar2 = FUN_18019a410(param_4), iVar2 == 0x2a2 ||
           ((iVar2 = FUN_18019a410(param_4), iVar2 == 0x448 ||
            (iVar2 = FUN_18019a410(param_4), iVar2 == 0x449)))))) ||
         ((iVar2 = FUN_18019a410(param_4), iVar2 == 0x44a ||
          (iVar2 = FUN_18019a410(param_4), iVar2 == 1099)))) {
        plVar1[1] = (longlong)param_4;
        return 1;
      }
      FUN_1801a70c0(0x10,0xc5,0x8a,"crypto\\ec\\ec_pmeth.c",0x14b);
      return 0;
    case 2:
    case 5:
    case 7:
    case 0xb:
      return 1;
    case 0xd:
      *param_4 = plVar1[1];
      return 1;
    }
  }
  else {
    switch(param_2) {
    case 0x1002:
      if (*plVar1 == 0) {
        FUN_1801a70c0(0x10,0xc5,0x8b,"crypto\\ec\\ec_pmeth.c",0xf0,0x1801f3a15);
        return 0;
      }
      FUN_18018dc80(*plVar1,param_3);
      return 1;
    case 0x1003:
      if (param_3 == -2) {
        if ((char)plVar1[3] == -1) {
          uVar3 = FUN_1801c53c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28));
          return uVar3 >> 0xc & 1;
        }
        return (int)(char)plVar1[3];
      }
      if (param_3 + 1U < 3) {
        *(char *)(plVar1 + 3) = (char)param_3;
        if (param_3 == -1) {
          FUN_1801c5270();
          plVar1[2] = 0;
          return 1;
        }
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
        lVar4 = *(longlong *)(lVar5 + 0x18);
        if (lVar4 == 0) {
          return 0xfffffffe;
        }
        iVar2 = FUN_180198a30(*(undefined8 *)(lVar4 + 0x18));
        if (iVar2 != 0) {
          return 1;
        }
        lVar4 = plVar1[2];
        if (lVar4 == 0) {
          lVar4 = FUN_1801c5210(lVar5);
          plVar1[2] = lVar4;
          if (lVar4 == 0) {
            return 0;
          }
        }
        if (param_3 == 0) {
          FUN_1801c4fd0(lVar4,0x1000);
          return 1;
        }
        FUN_1801c5730();
        return 1;
      }
      break;
    case 0x1004:
      if (param_3 == -2) {
        return (int)*(char *)((longlong)plVar1 + 0x19);
      }
      if (param_3 - 1U < 2) {
        *(char *)((longlong)plVar1 + 0x19) = (char)param_3;
        return 1;
      }
      break;
    case 0x1005:
      plVar1[4] = (longlong)param_4;
      return 1;
    case 0x1006:
      *param_4 = plVar1[4];
      return 1;
    case 0x1007:
      if (0 < param_3) {
        plVar1[7] = lVar5;
        return 1;
      }
      break;
    case 0x1008:
      *(int *)param_4 = (int)plVar1[7];
      return 1;
    case 0x1009:
      FUN_180195e10(plVar1[5],"crypto\\ec\\ec_pmeth.c",0x134);
      plVar1[5] = (longlong)param_4;
      if (param_4 == (longlong *)0x0) {
        lVar5 = 0;
      }
      plVar1[6] = lVar5;
      return 1;
    case 0x100a:
      *param_4 = plVar1[5];
      return *(uint *)(plVar1 + 6);
    }
  }
  return 0xfffffffe;
}



// ===== FUN_1801f3ec0 @ 1801f3ec0 (size 555)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f3ec0(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801f3ed5;
  iVar1 = strcmp(param_2,"ec_paramgen_curve");
  if (iVar1 == 0) {
    iVar1 = FUN_180201930(param_3);
    if (((iVar1 == 0) && (iVar1 = FUN_1801b9c80(param_3), iVar1 == 0)) &&
       (iVar1 = FUN_1801b9360(param_3), iVar1 == 0)) {
      FUN_1801a70c0(0x10,0xc6,0x8d,"crypto\\ec\\ec_pmeth.c",0x16d,uVar4);
      return 0;
    }
    uVar4 = FUN_1801c2d40(param_1,0x198,6,0x1001,iVar1,0);
    return uVar4;
  }
  iVar1 = strcmp(param_2,"ec_param_enc");
  if (iVar1 == 0) {
    iVar1 = strcmp(param_3,"explicit");
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = strcmp(param_3,"named_curve");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      uVar2 = 1;
    }
    uVar4 = FUN_1801c2d40(param_1,0x198,6,0x1002,uVar2,0);
    return uVar4;
  }
  iVar1 = strcmp(param_2,"ecdh_kdf_md");
  if (iVar1 == 0) {
    lVar3 = FUN_1801dcf20(param_3);
    if (lVar3 == 0) {
      FUN_1801a70c0(0x10,0xc6,0x97,"crypto\\ec\\ec_pmeth.c",0x17d,uVar4);
      return 0;
    }
    uVar4 = FUN_1801c2d40(param_1,0x198,0x400,0x1005,0,lVar3);
    return uVar4;
  }
  iVar1 = strcmp(param_2,"ecdh_cofactor_mode");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar4 = FUN_1801c2d40(param_1,0x198,0x400,0x1003,iVar1,0);
    return uVar4;
  }
  return 0xfffffffe;
}



// ===== FUN_1801f40f0 @ 1801f40f0 (size 176)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801f40f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    FUN_1801a70c0(0x10,0xdb,0x8b,"crypto\\ec\\ec_pmeth.c",0x191,0x1801f4100);
    return 0;
  }
  lVar3 = FUN_1801c5420();
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = FUN_1801c5740(lVar3,*plVar1);
  if ((iVar2 == 0) || (iVar2 = FUN_18019dbd0(param_2,0x198,lVar3), iVar2 == 0)) {
    FUN_1801c5270(lVar3);
    return 0;
  }
  return iVar2;
}



// ===== FUN_1801f41a0 @ 1801f41a0 (size 210)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f41a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*plVar1 == 0)) {
    FUN_1801a70c0(0x10,199,0x8b,"crypto\\ec\\ec_pmeth.c",0x1a4,0x1801f41b5);
    return 0;
  }
  lVar3 = FUN_1801c5420();
  if (lVar3 != 0) {
    iVar2 = FUN_18019dbd0(param_2,0x198,lVar3);
    if (iVar2 == 0) {
      FUN_1801c5270(lVar3);
    }
    else {
      if (*(longlong *)(param_1 + 0x10) == 0) {
        iVar2 = FUN_1801c5740(lVar3,*plVar1);
      }
      else {
        iVar2 = FUN_18019dd80(param_2);
      }
      if (iVar2 != 0) {
        uVar4 = FUN_1801c5330(lVar3);
        return uVar4;
      }
    }
  }
  return 0;
}



// ===== FUN_1801f4280 @ 1801f4280 (size 243)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f4280(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    FUN_1801a70c0(0x10,0xd9,0x8c,"crypto\\ec\\ec_pmeth.c",0xa0,0x1801f4290);
    return 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
  }
  if (param_2 == 0) {
    uVar2 = FUN_1800b7fa0(lVar3);
    iVar1 = FUN_1801dda10(uVar2);
    *param_3 = (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
  }
  else {
    uVar2 = FUN_1801afd00(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28));
    iVar1 = FUN_180202590(param_2,*param_3,uVar2,lVar3,0);
    if (iVar1 < 1) {
      return 0;
    }
    *param_3 = (longlong)iVar1;
  }
  return 1;
}



// ===== FUN_1801f4380 @ 1801f4380 (size 95)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f4380(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801f438c;
  lVar1 = FUN_180196100(0x28,"crypto\\sm2\\sm2_pmeth.c",0x24);
  if (lVar1 == 0) {
    FUN_1801a70c0(0x35,0x6f,0x41,"crypto\\sm2\\sm2_pmeth.c",0x25,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// ===== FUN_1801f43e0 @ 1801f43e0 (size 101)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f43e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1801dd8b0(*puVar1);
    FUN_180195e10(puVar1[2],"crypto\\sm2\\sm2_pmeth.c",0x33);
    FUN_180195e10(puVar1,"crypto\\sm2\\sm2_pmeth.c",0x34);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// ===== FUN_1801f4450 @ 1801f4450 (size 287)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f4450(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar4 = 0x1801f4465;
  plVar2 = (longlong *)FUN_180196100(0x28,"crypto\\sm2\\sm2_pmeth.c",0x24);
  if (plVar2 == (longlong *)0x0) {
    FUN_1801a70c0(0x35,0x6f,0x41,"crypto\\sm2\\sm2_pmeth.c",0x25,uVar4);
    return 0;
  }
  *(longlong **)(param_1 + 0x28) = plVar2;
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (*plVar1 != 0) {
    lVar3 = FUN_1801dd6b0();
    *plVar2 = lVar3;
    if (lVar3 == 0) goto LAB_1801f451a;
  }
  if (plVar1[2] != 0) {
    _Dst = (void *)FUN_180195dc0(plVar1[3],"crypto\\sm2\\sm2_pmeth.c",0x49);
    plVar2[2] = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
      FUN_1801a70c0(0x35,0x73,0x41,"crypto\\sm2\\sm2_pmeth.c",0x4b,uVar4);
LAB_1801f451a:
      FUN_1801f43e0(param_1);
      return 0;
    }
    memcpy(_Dst,(void *)plVar1[2],plVar1[3]);
  }
  plVar2[3] = plVar1[3];
  *(int *)(plVar2 + 4) = (int)plVar1[4];
  plVar2[1] = plVar1[1];
  return 1;
}



// ===== FUN_1801f4570 @ 1801f4570 (size 168)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f4570(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0x1801f458a;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  iVar1 = FUN_1801d2d70(uVar3);
  if (iVar1 < 1) {
LAB_1801f45d6:
    uVar3 = 0;
  }
  else {
    uVar2 = (ulonglong)iVar1;
    if (param_2 != 0) {
      if (*param_3 < uVar2) {
        FUN_1801a70c0(0x35,0x70,0x6b,"crypto\\sm2\\sm2_pmeth.c",CONCAT44(uVar4,0x6a));
        goto LAB_1801f45d6;
      }
      uVar3 = FUN_18021fed0(param_4,param_5,param_2,local_res8,uVar3,uVar5);
      if ((int)uVar3 < 1) {
        return uVar3;
      }
      uVar2 = (ulonglong)local_res8[0];
    }
    *param_3 = uVar2;
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FUN_1801f4660 @ 1801f4660 (size 151)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801f4660(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
  if (lVar3 == 0) {
    lVar3 = FUN_18021f540();
  }
  if (param_2 == 0) {
    iVar2 = FUN_1802201b0(uVar1,lVar3,param_5,param_3);
    uVar5 = 1;
    if (iVar2 == 0) {
      uVar5 = 0xffffffff;
    }
    uVar4 = (ulonglong)uVar5;
  }
  else {
    uVar4 = FUN_1802208f0(uVar1,lVar3,param_4,param_5,param_2,param_3);
  }
  return uVar4;
}



// ===== FUN_1801f4700 @ 1801f4700 (size 154)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801f4700(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
  if (lVar3 == 0) {
    lVar3 = FUN_18021f540();
  }
  if (param_2 == 0) {
    iVar2 = FUN_180220fd0(param_4,param_5,param_3);
    uVar5 = 1;
    if (iVar2 == 0) {
      uVar5 = 0xffffffff;
    }
    uVar4 = (ulonglong)uVar5;
  }
  else {
    uVar4 = FUN_180220270(uVar1,lVar3,param_4,param_5,param_2,param_3);
  }
  return uVar4;
}



// ===== FUN_1801f47a0 @ 1801f47a0 (size 537)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f47a0(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Dst;
  size_t _Size;
  undefined8 uVar3;
  
  uVar3 = 0x1801f47b0;
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (param_2 < 0x1003) {
    if (param_2 == 0x1002) {
      if (*plVar1 == 0) {
        FUN_1801a70c0(0x35,0x6d,0x6d,"crypto\\sm2\\sm2_pmeth.c",0xb6,0x1801f47b0);
        return 0;
      }
      FUN_18018dc80(*plVar1,param_3);
      return 1;
    }
    if (param_2 == 1) {
      plVar1[1] = (longlong)param_4;
      return 1;
    }
    if (param_2 != 7) {
      if (param_2 == 0xd) {
        *param_4 = plVar1[1];
        return 1;
      }
      if (param_2 != 0x1001) {
        return 0xfffffffe;
      }
      lVar2 = FUN_180201860(param_3);
      if (lVar2 == 0) {
        FUN_1801a70c0(0x35,0x6d,0x6c,"crypto\\sm2\\sm2_pmeth.c",0xad,uVar3);
        return 0;
      }
      FUN_1801dd8b0(*plVar1);
      *plVar1 = lVar2;
    }
    return 1;
  }
  if (param_2 == 0x100b) {
    _Size = (size_t)param_3;
    if (param_3 < 1) {
      _Dst = (void *)0x0;
      uVar3 = 0xd0;
    }
    else {
      _Dst = (void *)FUN_180195dc0(_Size,"crypto\\sm2\\sm2_pmeth.c",0xc6);
      if (_Dst == (void *)0x0) {
        FUN_1801a70c0(0x35,0x6d,0x41,"crypto\\sm2\\sm2_pmeth.c",200);
        return 0;
      }
      memcpy(_Dst,param_4,_Size);
      uVar3 = 0xcc;
    }
    FUN_180195e10(plVar1[2],"crypto\\sm2\\sm2_pmeth.c",uVar3);
    plVar1[2] = (longlong)_Dst;
    plVar1[3] = _Size;
    *(undefined4 *)(plVar1 + 4) = 1;
    return 1;
  }
  if (param_2 == 0x100c) {
    memcpy(param_4,(void *)plVar1[2],plVar1[3]);
    return 1;
  }
  if (param_2 == 0x100d) {
    *param_4 = plVar1[3];
    return 1;
  }
  return 0xfffffffe;
}



// ===== FUN_1801f49c0 @ 1801f49c0 (size 331)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f49c0(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801f49d5;
  iVar1 = strcmp(param_2,"ec_paramgen_curve");
  if (iVar1 != 0) {
    iVar1 = strcmp(param_2,"ec_param_enc");
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    iVar1 = strcmp(param_3,"explicit");
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = strcmp(param_3,"named_curve");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      uVar2 = 1;
    }
    uVar3 = FUN_1801c2d40(param_1,0x198,6,0x1002,uVar2,0);
    return uVar3;
  }
  iVar1 = FUN_180201930(param_3);
  if (((iVar1 == 0) && (iVar1 = FUN_1801b9c80(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1801b9360(param_3), iVar1 == 0)) {
    FUN_1801a70c0(0x35,0x6e,0x6c,"crypto\\sm2\\sm2_pmeth.c",0xf1,uVar3);
    return 0;
  }
  uVar3 = FUN_1801c2d40(param_1,0x198,6,0x1001,iVar1,0);
  return uVar3;
}



// ===== FUN_1801f4b10 @ 1801f4b10 (size 244)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801f4b10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x1801f4b28;
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar4 = FUN_1801a3790(param_2);
  iVar2 = FUN_1801afe40(uVar4);
  if (*(int *)(lVar1 + 0x20) == 0) {
    local_78 = CONCAT44(local_78._4_4_,0x112);
    FUN_1801a70c0(0x35,0x72,0x70,"crypto\\sm2\\sm2_pmeth.c");
  }
  else {
    if (iVar2 < 0) {
      local_78 = CONCAT44(local_78._4_4_,0x117);
      FUN_1801a70c0(0x35,0x72,0x66,"crypto\\sm2\\sm2_pmeth.c");
      return 0;
    }
    local_78 = uVar5;
    iVar3 = FUN_18021f550(local_68,uVar4,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18)
                         );
    if (iVar3 != 0) {
      uVar5 = FUN_18019d280(param_2,local_68,(longlong)iVar2);
      return uVar5;
    }
  }
  return 0;
}



// ===== FUN_1801f4c10 @ 1801f4c10 (size 336)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f4c10(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar7;
  longlong lVar6;
  ulonglong uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 0x1801f4c20;
  if (*(longlong *)(param_2 + 0x28) == 0) {
    FUN_1801a70c0(0x10,0x10c,0x74,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar7,0x83),0x1801f4c20);
    return 0;
  }
  iVar1 = **(int **)(param_2 + 0x10);
  if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
    cVar4 = ' ';
  }
  else {
    cVar4 = (iVar1 != 0x40b) + '8';
  }
  lVar2 = FUN_1801ba270(*(longlong *)(param_2 + 0x28),cVar4,"crypto\\ec\\ecx_meth.c",0x87);
  if (lVar2 == 0) {
    uVar3 = CONCAT44(uVar7,0x89);
  }
  else {
    iVar1 = **(int **)(param_2 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = (iVar1 != 0x40b) + 0x38;
    }
    uVar3 = FUN_1801b9550();
    uVar8 = (ulonglong)uVar5;
    lVar6 = lVar2;
    iVar1 = FUN_1801a2350(param_1,uVar3,0xffffffff,0,lVar2,uVar8);
    uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_180195e10(lVar2,"crypto\\ec\\ecx_meth.c",0x8f);
    uVar3 = CONCAT44(uVar7,0x90);
  }
  FUN_1801a70c0(0x10,0x10c,0x41,"crypto\\ec\\ecx_meth.c",uVar3,uVar8);
  return 0;
}



// ===== FUN_1801f4d60 @ 1801f4d60 (size 101)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f4d60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801f4d6c;
  iVar1 = FUN_1801a2200(0,&local_res20,local_res18,&local_18,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_1801f5d50(param_1,**(undefined4 **)(param_1 + 0x10),local_18,local_res20,local_res18[0],0);
  return;
}



// ===== FUN_1801f4dd0 @ 1801f4dd0 (size 120)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801f4dd0(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_2 + 0x28) == 0)) {
    return 0xfffffffe;
  }
  iVar1 = **(int **)(param_1 + 0x10);
  if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
    cVar2 = ' ';
  }
  else {
    cVar2 = (iVar1 != 0x40b) + '8';
  }
  iVar1 = FUN_1800012a0(*(longlong *)(param_1 + 0x28),*(longlong *)(param_2 + 0x28),cVar2);
  return (ulonglong)(iVar1 == 0);
}



// ===== FUN_1801f4e50 @ 1801f4e50 (size 182)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801f4e50(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801f4e5c;
  uVar2 = FUN_1801d5580(0,&local_res20,local_res18,&local_18,param_2);
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_1801bc650(0,&local_res20,local_res18[0]);
  if (lVar3 == 0) {
    local_res20 = 0;
    local_res18[0] = 0;
  }
  else {
    local_res20 = FUN_18013ff80(lVar3);
    local_res18[0] = FUN_18019a410(lVar3);
  }
  uVar1 = FUN_1801f5d50(param_1,**(undefined4 **)(param_1 + 0x10),local_18,local_res20,
                        CONCAT44(uVar4,local_res18[0]),1);
  FUN_18019a030(lVar3);
  return (ulonglong)uVar1;
}



// ===== FUN_1801f4f10 @ 1801f4f10 (size 373)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f4f10(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar4;
  int local_28 [2];
  longlong local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_10 = 0x1801f4f20;
  local_res10 = 0;
  if ((*(longlong *)(param_2 + 0x28) == 0) ||
     (local_20 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x40), local_20 == 0)) {
    FUN_1801a70c0(0x10,0x10b,0x7b,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar4,0xce));
    return 0;
  }
  iVar1 = **(int **)(param_2 + 0x10);
  if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
    local_28[0] = 0x20;
  }
  else {
    local_28[0] = (iVar1 != 0x40b) + 0x38;
  }
  local_18 = 0;
  iVar1 = FUN_1801bc6d0(local_28,&local_res10);
  if (iVar1 < 0) {
    uVar3 = CONCAT44(uVar4,0xd8);
  }
  else {
    uVar3 = FUN_1801b9550(**(undefined4 **)(param_2 + 0x10));
    uVar4 = 0;
    iVar2 = FUN_1801d5600(param_1,uVar3,0,0xffffffff,0,local_res10,iVar1);
    if (iVar2 != 0) {
      return 1;
    }
    FUN_180195f20(local_res10,(longlong)iVar1,"crypto\\ec\\ecx_meth.c",0xde);
    uVar3 = CONCAT44(uVar4,0xdf);
  }
  FUN_1801a70c0(0x10,0x10b,0x41,"crypto\\ec\\ecx_meth.c",uVar3);
  return 0;
}



// ===== FUN_1801f5120 @ 1801f5120 (size 124)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f5120(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      cVar3 = ' ';
    }
    else {
      cVar3 = (iVar1 != 0x40b) + '8';
    }
    FUN_1801b7560(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40),cVar3,
                  "crypto\\ec\\ecx_meth.c",0x102);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_180195e10(uVar2,"crypto\\ec\\ecx_meth.c",0x103);
  return;
}



// ===== FUN_1801f51e0 @ 1801f51e0 (size 403)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801f51e0(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1801f51f9;
  if (param_2 != 9) {
    if (param_2 != 10) {
      return -2;
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return 0;
    }
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      cVar3 = ' ';
    }
    else {
      cVar3 = (iVar1 != 0x40b) + '8';
    }
    lVar2 = FUN_1801ba270(*(longlong *)(param_1 + 0x28),cVar3,"crypto\\ec\\ecx_meth.c",0x149);
    *param_4 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      return 0x20;
    }
    return (iVar1 != 0x40b) + 0x38;
  }
  iVar1 = **(int **)(param_1 + 0x10);
  if (param_4 != (longlong *)0x0) {
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = (iVar1 != 0x40b) + 0x38;
    }
    if (param_3 == iVar4) {
      _Dst = (void *)FUN_180196100(0x48,"crypto\\ec\\ecx_meth.c");
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_4,(longlong)param_3);
        FUN_18019dbd0(param_1,iVar1,_Dst);
        return 1;
      }
      uVar6 = 0x48;
      uVar5 = 0x41;
      goto LAB_1801f5342;
    }
  }
  uVar6 = 0x41;
  uVar5 = 0x66;
LAB_1801f5342:
  FUN_1801a70c0(0x10,0x10a,uVar5,"crypto\\ec\\ecx_meth.c",uVar6,uVar7);
  return 0;
}



// ===== FUN_1801f53d0 @ 1801f53d0 (size 267)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801f53d0(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  undefined8 uVar3;
  
  uVar3 = 0x1801f53eb;
  iVar1 = **(int **)(param_1 + 0x10);
  if (param_2 != (void *)0x0) {
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = (iVar1 != 0x40b) + 0x38;
    }
    if (param_3 == iVar2) {
      _Dst = (void *)FUN_180196100(0x48,"crypto\\ec\\ecx_meth.c");
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_2,(longlong)param_3);
        FUN_18019dbd0(param_1,iVar1,_Dst);
      }
      else {
        FUN_1801a70c0(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x48,uVar3);
      }
      return _Dst != (void *)0x0;
    }
  }
  FUN_1801a70c0(0x10,0x10a,0x66,"crypto\\ec\\ecx_meth.c",0x41,0x1801f53eb);
  return false;
}



// ===== FUN_1801f54e0 @ 1801f54e0 (size 232)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801f54e0(longlong param_1,void *param_2,ulonglong *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  size_t _Size;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      *param_3 = 0x20;
      return 1;
    }
    *param_3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
    return 1;
  }
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x40) != 0)) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
    }
    if (uVar3 <= *param_3) {
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        _Size = 0x20;
      }
      else {
        _Size = (ulonglong)(iVar1 != 0x40b) + 0x38;
      }
      *param_3 = _Size;
      memcpy(param_2,*(void **)(lVar2 + 0x40),_Size);
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801f55d0 @ 1801f55d0 (size 221)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801f55d0(longlong param_1,void *param_2,ulonglong *param_3)

{
  int iVar1;
  void *_Src;
  ulonglong uVar2;
  size_t _Size;
  
  _Src = *(void **)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      *param_3 = 0x20;
      return 1;
    }
    *param_3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
    return 1;
  }
  if (_Src != (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar2 = 0x20;
    }
    else {
      uVar2 = (ulonglong)(iVar1 != 0x40b) + 0x38;
    }
    if (uVar2 <= *param_3) {
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        _Size = 0x20;
      }
      else {
        _Size = (ulonglong)(iVar1 != 0x40b) + 0x38;
      }
      *param_3 = _Size;
      memcpy(param_2,_Src,_Size);
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801f56d0 @ 1801f56d0 (size 145)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_1801f56d0(undefined8 param_1)

{
  int iVar1;
  undefined8 in_stack_00000030;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  int local_18 [2];
  undefined8 local_10;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  local_10 = 0x1801f56dc;
  FUN_1801a1e10(&local_10,local_18,0);
  iVar1 = FUN_1801b96c0(local_10);
  if ((iVar1 - 0x43fU < 2) && (local_18[0] == -1)) {
    iVar1 = FUN_18020ae60(param_1,0,0,0,in_stack_00000030);
    return -(iVar1 != 0) & 2;
  }
  FUN_1801a70c0(0x10,0x10e,0x66,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar2,0x205));
  return 0;
}



// ===== FUN_1801f5770 @ 1801f5770 (size 95)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f5770(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  longlong in_stack_00000028;
  
  uVar1 = FUN_1801b9550(0x43f);
  FUN_1801a1e70(in_R9,uVar1,0xffffffff);
  if (in_stack_00000028 != 0) {
    uVar1 = FUN_1801b9550(0x43f);
    FUN_1801a1e70(in_stack_00000028,uVar1,0xffffffff);
  }
  return 3;
}



// ===== FUN_1801f5800 @ 1801f5800 (size 95)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f5800(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  longlong in_stack_00000028;
  
  uVar1 = FUN_1801b9550(0x440);
  FUN_1801a1e70(in_R9,uVar1,0xffffffff);
  if (in_stack_00000028 != 0) {
    uVar1 = FUN_1801b9550(0x440);
    FUN_1801a1e70(in_stack_00000028,uVar1,0xffffffff);
  }
  return 3;
}



// ===== FUN_1801f58e0 @ 1801f58e0 (size 177)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f58e0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar4 = 0x299;
    uVar3 = 0x8c;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) == 0)) {
      uVar4 = 0x29f;
      uVar3 = 0x7b;
    }
    else {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) != 0) {
        if ((param_2 == 0) || (iVar2 = FUN_180221970(param_2), iVar2 != 0)) {
          *param_3 = 0x20;
          return 1;
        }
        return 0;
      }
      uVar4 = 0x2a3;
      uVar3 = 0x85;
    }
  }
  FUN_1801a70c0(0x10,0x116,uVar3,"crypto\\ec\\ecx_meth.c",uVar4,0x1801f58ec);
  return 0;
}



// ===== FUN_1801f59a0 @ 1801f59a0 (size 177)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f59a0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar4 = 0x299;
    uVar3 = 0x8c;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) == 0)) {
      uVar4 = 0x29f;
      uVar3 = 0x7b;
    }
    else {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) != 0) {
        if ((param_2 == 0) || (iVar2 = FUN_18022a1e0(param_2), iVar2 != 0)) {
          *param_3 = 0x38;
          return 1;
        }
        return 0;
      }
      uVar4 = 0x2a3;
      uVar3 = 0x85;
    }
  }
  FUN_1801a70c0(0x10,0x116,uVar3,"crypto\\ec\\ecx_meth.c",uVar4,0x1801f59ac);
  return 0;
}



// ===== FUN_1801f5a80 @ 1801f5a80 (size 167)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f5a80(undefined8 param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x1801f5a95;
  lVar2 = FUN_1801afd00();
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x28);
  if (param_2 == 0) {
LAB_1801f5b0b:
    *param_3 = 0x40;
    return 1;
  }
  if (*param_3 < 0x40) {
    FUN_1801a70c0(0x10,0x114,100,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar3,0x2ed));
  }
  else {
    iVar1 = FUN_1802214f0(param_2,param_4,param_5,lVar2,*(undefined8 *)(lVar2 + 0x40),uVar4);
    if (iVar1 != 0) goto LAB_1801f5b0b;
  }
  return 0;
}



// ===== FUN_1801f5b30 @ 1801f5b30 (size 179)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f5b30(undefined8 param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar4 = 0x1801f5b45;
  lVar2 = FUN_1801afd00();
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x28);
  if (param_2 == 0) {
LAB_1801f5bc7:
    *param_3 = 0x72;
    return 1;
  }
  if (*param_3 < 0x72) {
    FUN_1801a70c0(0x10,0x115,100,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar3,0x302));
  }
  else {
    iVar1 = FUN_18022d7a0(param_2,param_4,param_5,lVar2,*(undefined8 *)(lVar2 + 0x40),0,0,uVar4);
    if (iVar1 != 0) goto LAB_1801f5bc7;
  }
  return 0;
}



// ===== FUN_1801f5bf0 @ 1801f5bf0 (size 101)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f5bf0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1801afd00();
  if (param_3 == 0x40) {
    uVar2 = FUN_180221710(param_4,param_5,param_2,
                          *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28));
    return uVar2;
  }
  return 0;
}



// ===== FUN_1801f5c60 @ 1801f5c60 (size 114)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f5c60(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1801afd00();
  if (param_3 == 0x72) {
    uVar2 = FUN_18022d7f0(param_4,param_5,param_2,
                          *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28),0,0);
    return uVar2;
  }
  return 0;
}



// ===== FUN_1801f5ce0 @ 1801f5ce0 (size 107)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f5ce0(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801f5cec;
  if (param_2 == 1) {
    if (param_4 != 0) {
      lVar1 = FUN_1802213e0();
      if (param_4 != lVar1) {
        FUN_1801a70c0(0x10,0x10f,0x8a,"crypto\\ec\\ecx_meth.c",0x32c,uVar2);
        return 0;
      }
    }
  }
  else if (param_2 != 7) {
    return 0xfffffffe;
  }
  return 1;
}



// ===== FUN_1801f5d50 @ 1801f5d50 (size 720)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f5d50(undefined8 param_1,int param_2,longlong param_3,void *param_4,int param_5,int param_6)

{
  int iVar1;
  void *_Dst;
  byte *_Dst_00;
  char cVar2;
  size_t _Size;
  char cVar3;
  undefined4 uVar4;
  int local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x1801f5d6f;
  cVar3 = ' ';
  if (param_6 != 2) {
    if ((param_3 != 0) && (FUN_1801a1e10(0,local_28,0,param_3), local_28[0] != -1)) {
      uVar4 = 0x3b;
      goto LAB_1801f5db8;
    }
    if (param_4 != (void *)0x0) {
      if ((param_2 == 0x40a) || (param_2 == 0x43f)) {
        iVar1 = 0x20;
      }
      else {
        iVar1 = (param_2 != 0x40b) + 0x38;
      }
      if (param_5 == iVar1) goto LAB_1801f5e0f;
    }
    uVar4 = 0x41;
LAB_1801f5db8:
    FUN_1801a70c0(0x10,0x10a,0x66,"crypto\\ec\\ecx_meth.c",uVar4);
    return 0;
  }
LAB_1801f5e0f:
  _Dst = (void *)FUN_180196100(0x48,"crypto\\ec\\ecx_meth.c");
  if (_Dst == (void *)0x0) {
    FUN_1801a70c0(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x48);
    return 0;
  }
  if (param_6 == 0) {
    memcpy(_Dst,param_4,(longlong)param_5);
  }
  else {
    if ((param_2 == 0x40a) || (param_2 == 0x43f)) {
      cVar2 = ' ';
    }
    else {
      cVar2 = (param_2 != 0x40b) + '8';
    }
    _Dst_00 = (byte *)FUN_1801b75d0(cVar2,"crypto\\ec\\ecx_meth.c",0x50);
    *(byte **)((longlong)_Dst + 0x40) = _Dst_00;
    if (_Dst_00 == (byte *)0x0) {
      FUN_1801a70c0(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x52);
LAB_1801f5f31:
      FUN_180195e10(_Dst,"crypto\\ec\\ecx_meth.c",0x79);
      return 0;
    }
    if (param_6 == 2) {
      if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
        cVar3 = (param_2 != 0x40b) + '8';
      }
      iVar1 = FUN_1801940a0(_Dst_00,cVar3);
      if (iVar1 < 1) {
        FUN_1801b75b0(_Dst_00,"crypto\\ec\\ecx_meth.c",0x57);
        *(undefined8 *)((longlong)_Dst + 0x40) = 0;
        goto LAB_1801f5f31;
      }
      if (param_2 == 0x40a) {
        *_Dst_00 = *_Dst_00 & 0xf8;
        _Dst_00[0x1f] = _Dst_00[0x1f] & 0x3f;
        _Dst_00[0x1f] = _Dst_00[0x1f] | 0x40;
      }
      else if (param_2 == 0x40b) {
        *_Dst_00 = *_Dst_00 & 0xfc;
        _Dst_00[0x37] = _Dst_00[0x37] | 0x80;
      }
    }
    else {
      if ((param_2 == 0x40a) || (param_2 == 0x43f)) {
        _Size = 0x20;
      }
      else {
        _Size = (ulonglong)(param_2 != 0x40b) + 0x38;
      }
      memcpy(_Dst_00,param_4,_Size);
    }
    if (param_2 == 0x40a) {
      FUN_1802219b0(_Dst,_Dst_00);
    }
    else if (param_2 == 0x40b) {
      FUN_18022a210(_Dst,_Dst_00);
    }
    else if (param_2 == 0x43f) {
      FUN_1802213f0(_Dst,_Dst_00);
    }
    else if (param_2 == 0x440) {
      FUN_18022d630(_Dst,_Dst_00);
    }
  }
  FUN_18019dbd0(param_1,param_2,_Dst);
  return 1;
}



// ===== FUN_1801f6020 @ 1801f6020 (size 444)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f6020(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801f6040;
  lVar1 = *(longlong *)(param_2 + 0x28);
  uVar3 = FUN_1801b9490(**(undefined4 **)(param_2 + 0x10));
  if (param_5 == 1) {
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x40) != 0)) {
      iVar2 = FUN_180196900(param_1,"%*s%s Private-Key:\n",param_3,&PTR_1802ead18,uVar3,uVar6);
      if (iVar2 < 1) {
        return 0;
      }
      iVar2 = FUN_180196900(param_1,"%*spriv:\n",param_3,&PTR_1802ead18,uVar3,uVar6);
      if (iVar2 < 1) {
        return 0;
      }
      iVar2 = **(int **)(param_2 + 0x10);
      if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
        cVar5 = ' ';
      }
      else {
        cVar5 = (iVar2 != 0x40b) + '8';
      }
      iVar2 = FUN_1802212d0(param_1,*(undefined8 *)(lVar1 + 0x40),cVar5,param_3 + 4);
      if (iVar2 == 0) {
        return 0;
      }
LAB_1801f6171:
      iVar2 = FUN_180196900(param_1,"%*spub:\n",param_3,&PTR_1802ead18,uVar3,uVar6);
      if (iVar2 < 1) {
        return 0;
      }
      iVar2 = **(int **)(param_2 + 0x10);
      if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
        cVar5 = ' ';
      }
      else {
        cVar5 = (iVar2 != 0x40b) + '8';
      }
      iVar2 = FUN_1802212d0(param_1,lVar1,cVar5,param_3 + 4);
      if (iVar2 == 0) {
        return 0;
      }
      return 1;
    }
    pcVar4 = "%*s<INVALID PRIVATE KEY>\n";
  }
  else {
    if (lVar1 != 0) {
      iVar2 = FUN_180196900(param_1,"%*s%s Public-Key:\n",param_3,&PTR_1802ead18,uVar3,uVar6);
      if (iVar2 < 1) {
        return 0;
      }
      goto LAB_1801f6171;
    }
    pcVar4 = "%*s<INVALID PUBLIC KEY>\n";
  }
  iVar2 = FUN_180196900(param_1,pcVar4,param_3,&PTR_1802ead18);
  if (iVar2 < 1) {
    return 0;
  }
  return 1;
}



// ===== FUN_1801f61e0 @ 1801f61e0 (size 172)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f61e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801f61f0;
  lVar1 = FUN_180196100(0x28,"crypto\\hmac\\hm_pmeth.c",0x1f);
  if (lVar1 == 0) {
    FUN_1801a70c0(0xf,0x7b,0x41,"crypto\\hmac\\hm_pmeth.c",0x20,uVar3);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0xc) = 4;
  lVar2 = FUN_18021ad70();
  *(longlong *)(lVar1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    FUN_180195e10(lVar1,"crypto\\hmac\\hm_pmeth.c",0x26);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 1;
}



// ===== FUN_1801f6290 @ 1801f6290 (size 112)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f6290(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18019df70();
  if (lVar1 != 0) {
    FUN_18021ad00(*(undefined8 *)(lVar1 + 0x20));
    FUN_180195f20(*(undefined8 *)(lVar1 + 0x10),(longlong)*(int *)(lVar1 + 8),
                  "crypto\\hmac\\hm_pmeth.c",0x50);
    FUN_180195e10(lVar1,"crypto\\hmac\\hm_pmeth.c",0x51);
    FUN_1801afd20(param_1,0);
  }
  return;
}



// ===== FUN_1801f6300 @ 1801f6300 (size 366)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f6300(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801f6315;
  lVar2 = FUN_180196100(0x28,"crypto\\hmac\\hm_pmeth.c",0x1f);
  if (lVar2 == 0) {
    FUN_1801a70c0(0xf,0x7b,0x41,"crypto\\hmac\\hm_pmeth.c",0x20,uVar6);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0xc) = 4;
  lVar3 = FUN_18021ad70();
  *(longlong *)(lVar2 + 0x20) = lVar3;
  if (lVar3 == 0) {
    FUN_180195e10(lVar2,"crypto\\hmac\\hm_pmeth.c",0x26);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar2;
  *(undefined4 *)(param_1 + 0x48) = 0;
  puVar4 = (undefined8 *)FUN_18019df70(param_2);
  puVar5 = (undefined8 *)FUN_18019df70(param_1);
  *puVar5 = *puVar4;
  iVar1 = FUN_18021ac60(puVar5[4],puVar4[4]);
  if (iVar1 == 0) {
LAB_1801f640a:
    lVar2 = FUN_18019df70(param_1);
    if (lVar2 != 0) {
      FUN_18021ad00(*(undefined8 *)(lVar2 + 0x20));
      FUN_180195f20(*(undefined8 *)(lVar2 + 0x10),(longlong)*(int *)(lVar2 + 8),
                    "crypto\\hmac\\hm_pmeth.c",0x50);
      FUN_180195e10(lVar2,"crypto\\hmac\\hm_pmeth.c",0x51);
      FUN_1801afd20(param_1,0);
    }
    return 0;
  }
  if (puVar4[2] != 0) {
    iVar1 = FUN_1801dfa10(puVar5 + 1,puVar4[2],*(undefined4 *)(puVar4 + 1));
    if (iVar1 == 0) goto LAB_1801f640a;
  }
  return 1;
}



// ===== FUN_1801f6470 @ 1801f6470 (size 78)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f6470(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) != 0) {
    lVar1 = FUN_1801dbf80(*(longlong *)(param_1 + 0x28) + 8);
    if (lVar1 != 0) {
      FUN_18019dbd0(param_2,0x357,lVar1);
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801f64c0 @ 1801f64c0 (size 94)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f64c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = FUN_1801afd30(param_2,0xfffffeff);
  FUN_18021ae40(*(undefined8 *)(lVar1 + 0x20),uVar2);
  FUN_1801afd10(param_2,0x100);
  FUN_1801afd20(param_2,FUN_1801f66d0);
  return 1;
}



// ===== FUN_1801f6520 @ 1801f6520 (size 131)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f6520(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar3 = FUN_1801a3790(param_4);
  iVar2 = FUN_1801afe40(uVar3);
  if (iVar2 < 0) {
    return 0;
  }
  *param_3 = (longlong)iVar2;
  if (param_2 != 0) {
    iVar2 = FUN_18021ae90(*(undefined8 *)(lVar1 + 0x20),param_2,local_res8);
    if (iVar2 == 0) {
      return 0;
    }
    *param_3 = (ulonglong)local_res8[0];
  }
  return 1;
}



// ===== FUN_1801f65b0 @ 1801f65b0 (size 135)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f65b0(longlong param_1,int param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (param_2 == 1) {
    *plVar1 = param_4;
  }
  else {
    if (param_2 == 6) {
      if ((param_4 == 0) && (0 < param_3)) {
        return 0;
      }
      if (param_3 < -1) {
        return 0;
      }
      iVar3 = FUN_1801dfa10(plVar1 + 1,param_4);
    }
    else {
      if (param_2 != 7) {
        return 0xfffffffe;
      }
      puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 0x28);
      iVar3 = FUN_18021af40(plVar1[4],*(undefined8 *)(puVar2 + 2),*puVar2,*plVar1,
                            *(undefined8 *)(param_1 + 8));
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}



// ===== FUN_1801f6640 @ 1801f6640 (size 141)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f6640(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar4 = 0;
  do {
    lVar5 = lVar4 + 1;
    uVar1 = 0;
    if (*(char *)(param_2 + lVar4) != (&DAT_1802edbd0)[lVar4]) {
      do {
        uVar3 = uVar1;
        if (*(char *)(param_2 + uVar3) != (&DAT_180332dc8)[uVar3]) {
          return 0xfffffffe;
        }
        uVar1 = uVar3 + 1;
      } while (uVar3 + 1 != 7);
      uVar2 = FUN_1801c3010(param_1,uVar3 & 0xffffffff);
      return uVar2;
    }
    lVar4 = lVar5;
  } while (lVar5 != 4);
  uVar2 = FUN_1801c3190(param_1,6);
  return uVar2;
}



// ===== FUN_1801f66d0 @ 1801f66d0 (size 69)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801f66d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1801afd00();
  iVar1 = FUN_18021b240(*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20),param_2,param_3);
  return iVar1 != 0;
}



// ===== FUN_1801f6720 @ 1801f6720 (size 1417)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801f6720(undefined8 *param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x1801f6735;
  if (param_3 == (char *)0x0) {
    FUN_1801a70c0(4,0x90,0x93,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x251),0x1801f6735);
  }
  else {
    iVar1 = strcmp(param_2,"rsa_padding_mode");
    if (iVar1 == 0) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        if (param_3[lVar4] != (&DAT_180324cac)[lVar4]) {
          lVar4 = 0;
          goto LAB_1801f67d0;
        }
        lVar4 = lVar5;
      } while (lVar5 != 6);
      uVar7 = 1;
      goto LAB_1801f68b9;
    }
    iVar1 = strcmp(param_2,"rsa_pss_saltlen");
    if (iVar1 == 0) {
      lVar4 = 0;
      do {
        lVar5 = lVar4;
        if (param_3[lVar5] != "digest"[lVar5]) {
          lVar4 = 0;
          goto LAB_1801f6970;
        }
        lVar4 = lVar5 + 1;
      } while (lVar5 + 1 != 7);
      iVar1 = (int)lVar5 + -7;
      goto LAB_1801f69b4;
    }
    iVar1 = strcmp(param_2,"rsa_keygen_bits");
    if (iVar1 == 0) {
      iVar1 = atoi(param_3);
      uVar3 = FUN_18019edd0(param_1,4,0x1003,iVar1,0);
      return uVar3;
    }
    iVar1 = strcmp(param_2,"rsa_keygen_pubexp");
    if (iVar1 == 0) {
      local_res18[0] = 0;
      iVar1 = FUN_1801995b0(local_res18,param_3);
      if (iVar1 != 0) {
        uVar2 = FUN_18019edd0(param_1,4,0x1004,0,local_res18[0]);
        if ((int)uVar2 < 1) {
          FUN_180198910(local_res18[0]);
        }
        return (ulonglong)uVar2;
      }
    }
    else {
      iVar1 = strcmp(param_2,"rsa_keygen_primes");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar3 = FUN_18019edd0(param_1,4,0x100d,iVar1,0);
        return uVar3;
      }
      iVar1 = strcmp(param_2,"rsa_mgf1_md");
      if (iVar1 == 0) {
        uVar3 = FUN_1801c30a0(param_1,0x3f8,0x1005,param_3);
        return uVar3;
      }
      if (*(int *)*param_1 == 0x390) {
        iVar1 = strcmp(param_2,"rsa_pss_keygen_mgf1_md");
        if (iVar1 == 0) {
          uVar3 = FUN_1801c30a0(param_1,4,0x1005,param_3);
          return uVar3;
        }
        iVar1 = strcmp(param_2,"rsa_pss_keygen_md");
        if (iVar1 == 0) {
          uVar3 = FUN_1801c30a0(param_1,4,1,param_3);
          return uVar3;
        }
        iVar1 = strcmp(param_2,"rsa_pss_keygen_saltlen");
        if (iVar1 == 0) {
          iVar1 = atoi(param_3);
          uVar3 = FUN_1801c2d40(param_1,0x390,4,0x1002,CONCAT44(uVar6,iVar1),0);
          return uVar3;
        }
      }
      iVar1 = strcmp(param_2,"rsa_oaep_md");
      if (iVar1 == 0) {
        uVar3 = FUN_1801c30a0(param_1,0x300,0x1009,param_3);
        return uVar3;
      }
      iVar1 = strcmp(param_2,"rsa_oaep_label");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      lVar4 = FUN_1801ba610(param_3,local_res18);
      if (lVar4 != 0) {
        uVar2 = FUN_1801c2d40(param_1,6,0x300,0x100a,CONCAT44(uVar6,(undefined4)local_res18[0]),
                              lVar4);
        if ((int)uVar2 < 1) {
          FUN_180195e10(lVar4,"crypto\\rsa\\rsa_pmeth.c",0x2b6);
        }
        return (ulonglong)uVar2;
      }
    }
  }
  return 0;
  while (lVar4 = lVar5, lVar5 != 7) {
LAB_1801f67d0:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_18033417c)[lVar4]) {
      lVar4 = 0;
      goto LAB_1801f6800;
    }
  }
  uVar7 = 2;
  goto LAB_1801f68b9;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_1801f6800:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_18030041c)[lVar4]) {
      lVar4 = 0;
      goto LAB_1801f6830;
    }
  }
  uVar7 = 3;
  goto LAB_1801f68b9;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_1801f6830:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_180334184)[lVar4]) {
      lVar4 = 0;
      goto LAB_1801f6853;
    }
  }
  uVar7 = 4;
  goto LAB_1801f68b9;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_1801f6853:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_18033418c)[lVar4]) {
      lVar4 = 0;
      goto LAB_1801f6880;
    }
  }
  uVar7 = 4;
  goto LAB_1801f68b9;
  while (lVar4 = lVar5, lVar5 != 4) {
LAB_1801f6970:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_1803305c4)[lVar4]) {
      lVar4 = 0;
      goto LAB_1801f6993;
    }
  }
  iVar1 = -3;
  goto LAB_1801f69b4;
  while (lVar4 = lVar5 + 1, lVar5 + 1 != 5) {
LAB_1801f6993:
    lVar5 = lVar4;
    if (param_3[lVar5] != (&DAT_1803341b0)[lVar5]) {
      iVar1 = atoi(param_3);
      goto LAB_1801f69b4;
    }
  }
  iVar1 = (int)lVar5 + -6;
LAB_1801f69b4:
  uVar3 = FUN_18019edd0(param_1,0x18,0x1002,iVar1,0);
  return uVar3;
  while (lVar4 = lVar5, lVar5 != 5) {
LAB_1801f6880:
    lVar5 = lVar4 + 1;
    if (param_3[lVar4] != (&DAT_180334194)[lVar4]) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        if (param_3[lVar4] != (&DAT_180326508)[lVar4]) {
          FUN_1801a70c0(4,0x90,0x76,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x266),uVar7);
          return 0xfffffffe;
        }
        lVar4 = lVar5;
      } while (lVar5 != 4);
      uVar7 = 6;
      goto LAB_1801f68b9;
    }
  }
  uVar7 = 5;
LAB_1801f68b9:
  uVar3 = FUN_18019edd0(param_1,0xffffffff,0x1001,uVar7,0);
  return uVar3;
}



// ===== FUN_1801f6cb0 @ 1801f6cb0 (size 319)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801f6cb0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801f6cc4;
  puVar1 = (undefined4 *)param_1[5];
  if (*(longlong *)(puVar1 + 2) == 0) {
    lVar3 = FUN_180198b30();
    *(longlong *)(puVar1 + 2) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    iVar2 = FUN_180198f20(lVar3,0x10001);
    if (iVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_18019eb30();
  if (lVar3 == 0) {
    return 0;
  }
  if (param_1[7] == 0) {
    lVar4 = 0;
LAB_1801f6d44:
    iVar2 = FUN_18022df70(lVar3,*puVar1,puVar1[4],*(undefined8 *)(puVar1 + 2),lVar4,uVar6);
    FUN_180198150(lVar4);
    if (iVar2 < 1) {
      FUN_18019e9c0(lVar3);
      return iVar2;
    }
    lVar4 = param_1[5];
    if ((*(int *)*param_1 == 0x390) &&
       (((*(longlong *)(lVar4 + 0x20) != 0 || (*(longlong *)(lVar4 + 0x28) != 0)) ||
        (*(int *)(lVar4 + 0x30) != -2)))) {
      uVar5 = 0;
      if (*(int *)(lVar4 + 0x30) != -2) {
        uVar5 = *(undefined4 *)(lVar4 + 0x30);
      }
      lVar4 = FUN_180200d40(*(longlong *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28),uVar5);
      *(longlong *)(lVar3 + 0x60) = lVar4;
      if (lVar4 == 0) goto LAB_1801f6dad;
    }
    FUN_18019dbd0(param_2,*(undefined4 *)*param_1,lVar3);
  }
  else {
    lVar4 = FUN_180198180();
    if (lVar4 != 0) {
      FUN_18021dbf0(lVar4,param_1);
      goto LAB_1801f6d44;
    }
LAB_1801f6dad:
    FUN_18019e9c0(lVar3);
    iVar2 = 0;
  }
  return iVar2;
}



// ===== FUN_1801f6df0 @ 1801f6df0 (size 233)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f6df0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  
  lVar1 = param_1[5];
  if (*(int *)*param_1 == 0x390) {
    lVar2 = *(longlong *)(param_1[2] + 0x28);
    if (*(longlong *)(lVar2 + 0x60) == 0) {
      return 1;
    }
    iVar4 = FUN_180200970(*(longlong *)(lVar2 + 0x60),&local_res10,&local_res18,local_res8);
    if (iVar4 != 0) {
      iVar5 = FUN_1801afe40(local_res10);
      iVar6 = FUN_18019f2b0(lVar2);
      bVar3 = FUN_18019ef80(lVar2);
      iVar4 = (iVar6 - iVar5) + -1;
      if ((bVar3 & 7) != 1) {
        iVar4 = iVar6 - iVar5;
      }
      if (local_res8[0] <= iVar4) {
        *(int *)(lVar1 + 0x34) = local_res8[0];
        *(undefined8 *)(lVar1 + 0x20) = local_res10;
        *(undefined8 *)(lVar1 + 0x28) = local_res18;
        *(int *)(lVar1 + 0x30) = local_res8[0];
        return 1;
      }
      FUN_1801a70c0(4,0xa5,0x96,"crypto\\rsa\\rsa_pmeth.c",0x335);
    }
  }
  return 0;
}



// ===== FUN_1801f6ee0 @ 1801f6ee0 (size 124)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f6ee0(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_180196100(0x50,"crypto\\rsa\\rsa_pmeth.c",0x37);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0x800;
  puVar1[4] = 2;
  uVar2 = 6;
  if (*(int *)*param_1 != 0x390) {
    uVar2 = 1;
  }
  puVar1[7] = uVar2;
  *(undefined8 *)(puVar1 + 0xc) = 0xfffffffffffffffe;
  param_1[5] = puVar1;
  param_1[8] = puVar1 + 5;
  *(undefined4 *)(param_1 + 9) = 2;
  return 1;
}



// ===== FUN_1801f6f60 @ 1801f6f60 (size 283)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f6f60(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)FUN_180196100(0x50,"crypto\\rsa\\rsa_pmeth.c",0x37);
  if (puVar2 == (undefined4 *)0x0) {
LAB_1801f7064:
    uVar4 = 0;
  }
  else {
    *puVar2 = 0x800;
    puVar2[4] = 2;
    uVar5 = 6;
    if (*(int *)*param_1 != 0x390) {
      uVar5 = 1;
    }
    puVar2[7] = uVar5;
    *(undefined8 *)(puVar2 + 0xc) = 0xfffffffffffffffe;
    param_1[5] = puVar2;
    param_1[8] = puVar2 + 5;
    *(undefined4 *)(param_1 + 9) = 2;
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    *puVar2 = *puVar1;
    if (*(longlong *)(puVar1 + 2) != 0) {
      lVar3 = FUN_180198800();
      *(longlong *)(puVar2 + 2) = lVar3;
      if (lVar3 == 0) goto LAB_1801f7064;
    }
    puVar2[7] = puVar1[7];
    *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar1 + 10);
    if (*(longlong *)(puVar1 + 0x10) != 0) {
      FUN_180195e10(*(undefined8 *)(puVar2 + 0x10),"crypto\\rsa\\rsa_pmeth.c",0x5d);
      lVar3 = FUN_1801ba270(*(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x12),
                            "crypto\\rsa\\rsa_pmeth.c",0x5e);
      *(longlong *)(puVar2 + 0x10) = lVar3;
      if (lVar3 == 0) goto LAB_1801f7064;
      *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(puVar1 + 0x12);
    }
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FUN_1801f7080 @ 1801f7080 (size 109)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f7080(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  FUN_180198910(*(undefined8 *)(lVar1 + 8));
  FUN_180195e10(*(undefined8 *)(lVar1 + 0x38),"crypto\\rsa\\rsa_pmeth.c",0x76);
  FUN_180195e10(*(undefined8 *)(lVar1 + 0x40),"crypto\\rsa\\rsa_pmeth.c",0x77);
  FUN_180195e10(lVar1,"crypto\\rsa\\rsa_pmeth.c",0x78);
  return;
}



// ===== FUN_1801f70f0 @ 1801f70f0 (size 614)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801f70f0(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4,
                       size_t param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar8 = 0x1801f710c;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    uVar7 = CONCAT44(uVar6,*(undefined4 *)(lVar1 + 0x1c));
LAB_1801f7325:
    uVar8 = FUN_18019efd0((int)param_5,param_4,param_2,uVar2,uVar7,uVar8);
LAB_1801f7330:
    if (-1 < (int)uVar8) {
      *param_3 = (longlong)(int)uVar8;
      uVar8 = 1;
    }
  }
  else {
    iVar4 = FUN_1801afe40();
    if (param_5 == (longlong)iVar4) {
      iVar5 = FUN_18019a410(*(undefined8 *)(lVar1 + 0x20));
      iVar4 = *(int *)(lVar1 + 0x1c);
      if (iVar5 == 0x5f) {
        if (iVar4 == 1) {
          uVar8 = FUN_18022ef40(0,param_4,(int)param_5,param_2,local_res8,uVar2);
          if ((int)uVar8 < 1) {
            return uVar8;
          }
          uVar8 = (ulonglong)local_res8[0];
          goto LAB_1801f7330;
        }
      }
      else {
        if (iVar4 == 5) {
          iVar4 = FUN_18019e7d0(*(undefined8 *)(param_1 + 0x10));
          if ((ulonglong)(longlong)iVar4 < param_5 + 1) {
            FUN_1801a70c0(4,0x8e,0x78,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x96));
            return 0xffffffff;
          }
          iVar4 = FUN_1801f8060(lVar1,param_1);
          if (iVar4 == 0) {
            FUN_1801a70c0(4,0x8e,0x41,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x9a));
            return 0xffffffff;
          }
          memcpy(*(void **)(lVar1 + 0x38),param_4,param_5);
          uVar6 = FUN_18019a410(*(undefined8 *)(lVar1 + 0x20));
          uVar3 = FUN_180206db0(uVar6);
          uVar7 = 5;
          *(undefined1 *)(param_5 + *(longlong *)(lVar1 + 0x38)) = uVar3;
          param_5._0_4_ = (int)param_5 + 1;
          param_4 = *(void **)(lVar1 + 0x38);
          goto LAB_1801f7325;
        }
        if (iVar4 == 1) {
          uVar6 = FUN_18019a410(*(undefined8 *)(lVar1 + 0x20));
          uVar8 = FUN_18022e920(uVar6,param_4,(int)param_5,param_2,local_res8,uVar2);
          if ((int)uVar8 < 1) {
            return uVar8;
          }
          uVar8 = (ulonglong)local_res8[0];
          goto LAB_1801f7330;
        }
        if ((iVar4 == 6) && (iVar4 = FUN_1801f8060(lVar1,param_1), iVar4 != 0)) {
          uVar8 = (ulonglong)*(uint *)(lVar1 + 0x30);
          iVar4 = FUN_18022f080(uVar2,*(undefined8 *)(lVar1 + 0x38),param_4,
                                *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),uVar8);
          if (iVar4 != 0) {
            param_5._0_4_ = FUN_18019f2b0(uVar2);
            param_4 = *(void **)(lVar1 + 0x38);
            uVar7 = 3;
            goto LAB_1801f7325;
          }
        }
      }
    }
    else {
      FUN_1801a70c0(4,0x8e,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0x86));
    }
    uVar8 = 0xffffffff;
  }
  return uVar8;
}



// ===== FUN_1801f7360 @ 1801f7360 (size 440)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801f7360(longlong param_1,void *param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar2 = *(int *)(lVar1 + 0x1c);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    local_res8[0] =
         FUN_18019eff0((undefined4)param_5,param_4,param_2,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),CONCAT44(uVar6,iVar2));
LAB_1801f74f2:
    if (local_res8[0] < 0) {
      return local_res8[0];
    }
    *param_3 = (longlong)local_res8[0];
    return 1;
  }
  if (iVar2 == 5) {
    iVar2 = FUN_1801f8060(lVar1,param_1);
    if (iVar2 == 0) {
      return -1;
    }
    uVar7 = CONCAT44(uVar6,5);
    iVar2 = FUN_18019eff0((undefined4)param_5,param_4,*(undefined8 *)(lVar1 + 0x38),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),uVar7);
    uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (0 < iVar2) {
      iVar2 = iVar2 + -1;
      uVar3 = FUN_18019a410(*(undefined8 *)(lVar1 + 0x20));
      uVar4 = FUN_180206db0(uVar3);
      if (*(byte *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar2) == uVar4) {
        iVar5 = FUN_1801afe40(*(undefined8 *)(lVar1 + 0x20));
        if (iVar2 != iVar5) {
          FUN_1801a70c0(4,0x8d,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0xd7));
          return 0;
        }
        local_res8[0] = iVar2;
        if (param_2 != (void *)0x0) {
          memcpy(param_2,*(void **)(lVar1 + 0x38),(longlong)iVar2);
        }
        goto LAB_1801f74f2;
      }
      FUN_1801a70c0(4,0x8d,100,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar6,0xd2));
    }
  }
  else {
    if (iVar2 != 1) {
      return -1;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar6 = FUN_18019a410();
    iVar2 = FUN_18022ebf0(uVar6,0,0,param_2,local_res8,param_4,param_5,*(undefined8 *)(lVar1 + 0x28)
                         );
    if (0 < iVar2) goto LAB_1801f74f2;
  }
  return 0;
}



// ===== FUN_1801f7520 @ 1801f7520 (size 740)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f7520(longlong param_1,undefined8 param_2,ulonglong param_3,void *param_4,size_t param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar9;
  undefined8 in_stack_ffffffffffffffd0;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    iVar4 = FUN_1801f8060(lVar1,param_1);
    if (iVar4 == 0) {
      return 0xffffffff;
    }
    local_res8[0] =
         FUN_18019eff0(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar1 + 0x38),uVar8,
                       CONCAT44(uVar7,*(undefined4 *)(lVar1 + 0x1c)));
    if (local_res8[0] == 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(lVar1 + 0x1c) == 1) {
      uVar3 = FUN_18019a410();
      uVar8 = FUN_18022ea80(uVar3,param_4,(undefined4)param_5,param_2,CONCAT44(uVar7,(int)param_3),
                            uVar8);
      return uVar8;
    }
    iVar4 = FUN_1801afe40();
    if (param_5 != (longlong)iVar4) {
      FUN_1801a70c0(4,0x95,0x8f,"crypto\\rsa\\rsa_pmeth.c",CONCAT44(uVar7,0xfe));
      return 0xffffffff;
    }
    if (*(int *)(lVar1 + 0x1c) != 5) {
      if (*(int *)(lVar1 + 0x1c) != 6) {
        return 0xffffffff;
      }
      iVar4 = FUN_1801f8060(lVar1,param_1);
      if (iVar4 == 0) {
        return 0xffffffff;
      }
      iVar4 = FUN_18019eff0(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar1 + 0x38),uVar8,
                            CONCAT44(uVar7,3));
      if (iVar4 < 1) {
        return 0;
      }
      iVar4 = FUN_18022f410(uVar8,param_4,*(undefined8 *)(lVar1 + 0x20),
                            *(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x38),
                            CONCAT44(uVar3,*(undefined4 *)(lVar1 + 0x30)));
      if (iVar4 < 1) {
        return 0;
      }
      return 1;
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    iVar4 = *(int *)(lVar2 + 0x1c);
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      local_res8[0] =
           FUN_18019eff0(param_3 & 0xffffffff,param_2,0,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),CONCAT44(uVar7,iVar4)
                        );
    }
    else if (iVar4 == 5) {
      iVar4 = FUN_1801f8060(lVar2,param_1);
      if (iVar4 == 0) {
        return 0;
      }
      uVar8 = CONCAT44(uVar7,5);
      iVar4 = FUN_18019eff0(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar2 + 0x38),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),uVar8);
      uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (iVar4 < 1) {
        return 0;
      }
      iVar4 = iVar4 + -1;
      uVar3 = FUN_18019a410(*(undefined8 *)(lVar2 + 0x20));
      uVar5 = FUN_180206db0(uVar3);
      if (*(byte *)((longlong)iVar4 + *(longlong *)(lVar2 + 0x38)) != uVar5) {
        uVar9 = CONCAT44(uVar7,0xd2);
        uVar8 = 100;
LAB_1801f766d:
        FUN_1801a70c0(4,0x8d,uVar8,"crypto\\rsa\\rsa_pmeth.c",uVar9);
        return 0;
      }
      iVar6 = FUN_1801afe40(*(undefined8 *)(lVar2 + 0x20));
      local_res8[0] = iVar4;
      if (iVar4 != iVar6) {
        uVar9 = CONCAT44(uVar7,0xd7);
        uVar8 = 0x8f;
        goto LAB_1801f766d;
      }
    }
    else {
      if (iVar4 != 1) {
        return 0;
      }
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar7 = FUN_18019a410();
      iVar4 = FUN_18022ebf0(uVar7,0,0,0,local_res8,param_2,param_3,*(undefined8 *)(lVar2 + 0x28));
      if (iVar4 < 1) {
        return 0;
      }
    }
    if (local_res8[0] < 0) {
      return 0;
    }
  }
  if (((longlong)local_res8[0] == param_5) &&
     (iVar4 = memcmp(param_4,*(void **)(lVar1 + 0x38),(longlong)local_res8[0]), iVar4 == 0)) {
    return 1;
  }
  return 0;
}



// ===== FUN_1801f7810 @ 1801f7810 (size 239)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f7810(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar3 = *(int *)(lVar1 + 0x1c);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (iVar3 == 4) {
    uVar2 = FUN_18019f2b0(uVar4);
    iVar3 = FUN_1801f8060(lVar1,param_1);
    if ((iVar3 == 0) ||
       (iVar3 = FUN_180205b40(*(undefined8 *)(lVar1 + 0x38),uVar2,param_4,param_5,
                              *(undefined8 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x48),
                              *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28)),
       iVar3 == 0)) {
      uVar4 = 0xffffffff;
      goto LAB_1801f78e6;
    }
    iVar3 = 3;
    param_4 = *(undefined8 *)(lVar1 + 0x38);
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
    param_5 = uVar2;
  }
  uVar4 = FUN_18019f010(param_5,param_4,param_2,uVar4,iVar3);
  if (-1 < (int)uVar4) {
    *param_3 = (longlong)(int)uVar4;
    uVar4 = 1;
  }
LAB_1801f78e6:
  return uVar4;
}



// ===== FUN_1801f7900 @ 1801f7900 (size 324)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801f7900(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
                       undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar1 + 0x1c) == 4) {
    iVar2 = FUN_1801f8060(lVar1,param_1);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    uVar4 = FUN_18019efb0(param_5,param_4,*(undefined8 *)(lVar1 + 0x38),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),3);
    if ((int)uVar4 < 1) {
      return uVar4;
    }
    uVar3 = FUN_180206040(param_2,uVar4 & 0xffffffff,*(undefined8 *)(lVar1 + 0x38),
                          uVar4 & 0xffffffff,(int)uVar4,*(undefined8 *)(lVar1 + 0x40),
                          *(undefined4 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x20),
                          *(undefined8 *)(lVar1 + 0x28));
  }
  else {
    uVar3 = FUN_18019efb0(param_5,param_4,param_2,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28),
                          *(int *)(lVar1 + 0x1c));
  }
  uVar4 = (longlong)(int)uVar3 >> 0x3f;
  *param_3 = uVar4 & *param_3 | ~uVar4 & (longlong)(int)uVar3;
  return (ulonglong)(~((int)uVar3 >> 0x1f) & 1U | (int)uVar3 >> 0x1f & uVar3);
}



// ===== FUN_1801f7a50 @ 1801f7a50 (size 1194)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801f7a50(undefined8 *param_1,int param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1801f7a6b;
  piVar1 = (int *)param_1[5];
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (param_3 - 1U < 6) {
        iVar3 = FUN_1801f7f60(*(undefined8 *)(piVar1 + 8),param_3);
        if (iVar3 == 0) {
          return 0;
        }
        if (param_3 == 6) {
          bVar6 = (*(byte *)(param_1 + 4) & 0x18) == 0;
        }
        else {
          if (*(int *)*param_1 == 0x390) goto LAB_1801f7bc8;
          if (param_3 != 4) goto LAB_1801f7bbe;
          bVar6 = (*(uint *)(param_1 + 4) & 0x300) == 0;
        }
        if (!bVar6) {
          if (*(longlong *)(piVar1 + 8) == 0) {
            uVar8 = FUN_18019db60();
            *(undefined8 *)(piVar1 + 8) = uVar8;
          }
LAB_1801f7bbe:
          piVar1[7] = param_3;
          return 1;
        }
      }
LAB_1801f7bc8:
      uVar7 = 0x1ac;
      uVar5 = 0x90;
    }
    else {
      switch(param_2) {
      case 1:
        iVar3 = FUN_1801f7f60(param_4,piVar1[7]);
        if (iVar3 == 0) {
          return 0;
        }
        if (piVar1[0xd] == -1) {
          *(longlong **)(piVar1 + 8) = param_4;
          return 1;
        }
        iVar3 = FUN_18019a410(*(undefined8 *)(piVar1 + 8));
        iVar2 = FUN_18019a410(param_4);
        if (iVar3 == iVar2) {
          return 1;
        }
        FUN_1801a70c0(4,0x8f,0x91,"crypto\\rsa\\rsa_pmeth.c",0x1fa,uVar8);
        return 0;
      case 3:
      case 4:
      case 9:
      case 10:
        if (*(int *)*param_1 != 0x390) {
          return 1;
        }
      case 2:
        uVar7 = 0x244;
        uVar5 = 0x94;
        break;
      case 5:
      case 7:
      case 0xb:
        return 1;
      default:
        goto LAB_1801f7b57;
      case 0xd:
        *param_4 = *(longlong *)(piVar1 + 8);
        return 1;
      }
    }
    goto LAB_1801f7b4d;
  }
  switch(param_2) {
  case 0x1002:
  case 0x1007:
    if (piVar1[7] == 6) {
      if (param_2 == 0x1007) {
        *(int *)param_4 = piVar1[0xc];
        return 1;
      }
      if (param_3 < -3) {
        return -2;
      }
      if (piVar1[0xd] == -1) goto LAB_1801f7c98;
      if ((param_3 != -2) || (*(int *)(param_1 + 4) != 0x10)) {
        if (param_3 == -1) {
          iVar3 = FUN_1801afe40(*(undefined8 *)(piVar1 + 8));
          if (piVar1[0xd] <= iVar3) {
LAB_1801f7c98:
            piVar1[0xc] = param_3;
            return 1;
          }
        }
        else if ((param_3 < 0) || (piVar1[0xd] <= param_3)) goto LAB_1801f7c98;
        FUN_1801a70c0(4,0x8f,0xa4,"crypto\\rsa\\rsa_pmeth.c",0x1c7,uVar8);
        return 0;
      }
      uVar7 = 0x1c1;
    }
    else {
      uVar7 = 0x1b6;
    }
    uVar5 = 0x92;
    break;
  case 0x1003:
    if (0x1ff < param_3) {
      *piVar1 = param_3;
      return 1;
    }
    uVar7 = 0x1d1;
    uVar5 = 0x78;
    break;
  case 0x1004:
    if (((param_4 != (longlong *)0x0) && (iVar3 = FUN_180198a10(param_4), iVar3 != 0)) &&
       (iVar3 = FUN_180198a30(param_4), iVar3 == 0)) {
      FUN_180198910(*(undefined8 *)(piVar1 + 2));
      *(longlong **)(piVar1 + 2) = param_4;
      return 1;
    }
    uVar7 = 0x1d9;
    uVar5 = 0x65;
    break;
  case 0x1005:
  case 0x1008:
    if ((piVar1[7] - 4U & 0xfffffffd) == 0) {
      if (param_2 != 0x1008) {
        if (piVar1[0xd] == -1) {
          *(longlong **)(piVar1 + 10) = param_4;
          return 1;
        }
        iVar3 = FUN_18019a410(param_4);
        iVar2 = FUN_18019a410(*(undefined8 *)(piVar1 + 10));
        if (iVar2 == iVar3) {
          return 1;
        }
        FUN_1801a70c0(4,0x8f,0x98,"crypto\\rsa\\rsa_pmeth.c",0x214);
        return 0;
      }
      lVar4 = *(longlong *)(piVar1 + 10);
      if (lVar4 != 0) goto LAB_1801f7e1c;
LAB_1801f7e18:
      lVar4 = *(longlong *)(piVar1 + 8);
LAB_1801f7e1c:
      *param_4 = lVar4;
      return 1;
    }
    uVar7 = 0x208;
    uVar5 = 0x9c;
    break;
  case 0x1006:
    *(int *)param_4 = piVar1[7];
    return 1;
  case 0x1009:
  case 0x100b:
    if (piVar1[7] == 4) {
      if (param_2 != 0x100b) {
        *(longlong **)(piVar1 + 8) = param_4;
        return 1;
      }
      goto LAB_1801f7e18;
    }
    uVar7 = 0x1eb;
    goto LAB_1801f7da8;
  case 0x100a:
    if (piVar1[7] == 4) {
      FUN_180195e10(*(undefined8 *)(piVar1 + 0x10),"crypto\\rsa\\rsa_pmeth.c",0x220);
      if ((param_4 == (longlong *)0x0) || (param_3 < 1)) {
        piVar1[0x10] = 0;
        piVar1[0x11] = 0;
        piVar1[0x12] = 0;
        piVar1[0x13] = 0;
        return 1;
      }
      *(longlong **)(piVar1 + 0x10) = param_4;
      *(longlong *)(piVar1 + 0x12) = (longlong)param_3;
      return 1;
    }
    uVar7 = 0x21d;
    goto LAB_1801f7da8;
  case 0x100c:
    if (piVar1[7] == 4) {
      *param_4 = *(longlong *)(piVar1 + 0x10);
      return piVar1[0x12];
    }
    uVar7 = 0x22c;
LAB_1801f7da8:
    uVar5 = 0x8d;
    break;
  case 0x100d:
    if (param_3 - 2U < 4) {
      piVar1[4] = param_3;
      return 1;
    }
    uVar7 = 0x1e2;
    uVar5 = 0xa5;
    break;
  default:
    goto LAB_1801f7b57;
  }
LAB_1801f7b4d:
  FUN_1801a70c0(4,0x8f,uVar5,"crypto\\rsa\\rsa_pmeth.c",uVar7,uVar8);
LAB_1801f7b57:
  return -2;
}



// ===== FUN_1801f7f60 @ 1801f7f60 (size 252)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f7f60(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801f7f6c;
  if (param_1 != 0) {
    iVar1 = FUN_18019a410();
    if (param_2 == 3) {
      FUN_1801a70c0(4,0x8c,0x8d,"crypto\\rsa\\rsa_pmeth.c",0x168,uVar2);
      return 0;
    }
    if (param_2 == 5) {
      iVar1 = FUN_180206db0();
      if (iVar1 == -1) {
        FUN_1801a70c0(4,0x8c,0x8e,"crypto\\rsa\\rsa_pmeth.c",0x16e,uVar2);
        return 0;
      }
    }
    else if ((((0x35 < iVar1 - 0x40U) ||
              ((0x24000080000001U >> ((ulonglong)(iVar1 - 0x40U) & 0x3f) & 1) == 0)) &&
             (1 < iVar1 - 3U)) &&
            (((iVar1 != 0x101 && (3 < iVar1 - 0x2a0U)) && (3 < iVar1 - 0x448U)))) {
      FUN_1801a70c0(4,0x8c,0x9d,"crypto\\rsa\\rsa_pmeth.c",0x186,uVar2);
      return 0;
    }
  }
  return 1;
}



// ===== FUN_1801f8060 @ 1801f8060 (size 115)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f8060(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801f806c;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    iVar1 = FUN_18019e7d0(*(undefined8 *)(param_2 + 0x10));
    lVar2 = FUN_180195dc0((longlong)iVar1,"crypto\\rsa\\rsa_pmeth.c",0x6a);
    *(longlong *)(param_1 + 0x38) = lVar2;
    if (lVar2 == 0) {
      FUN_1801a70c0(4,0xa7,0x41,"crypto\\rsa\\rsa_pmeth.c",0x6b,uVar3);
      return 0;
    }
  }
  return 1;
}



// ===== FUN_1801f80e0 @ 1801f80e0 (size 127)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f80e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801f80ec;
  lVar1 = FUN_180196100(0x40,"crypto\\kdf\\scrypt.c",0x3c);
  if (lVar1 == 0) {
    FUN_1801a70c0(0x34,0x6a,0x41,"crypto\\kdf\\scrypt.c",0x3e,uVar2);
    return 0;
  }
  *(undefined8 *)(lVar1 + 0x20) = 0x100000;
  *(undefined8 *)(lVar1 + 0x28) = 8;
  *(undefined8 *)(lVar1 + 0x30) = 1;
  *(undefined8 *)(lVar1 + 0x38) = 0x40100000;
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// ===== FUN_1801f8160 @ 1801f8160 (size 94)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f8160(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  FUN_180195f20(puVar1[2],puVar1[3],"crypto\\kdf\\scrypt.c",0x54);
  FUN_180195f20(*puVar1,puVar1[1],"crypto\\kdf\\scrypt.c",0x55);
  FUN_180195e10(puVar1,"crypto\\kdf\\scrypt.c",0x56);
  return;
}



// ===== FUN_1801f81c0 @ 1801f81c0 (size 220)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f81c0(longlong param_1,undefined4 param_2,undefined4 param_3,ulonglong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  switch(param_2) {
  case 0x1008:
    uVar3 = FUN_1801f8980(lVar1,lVar1 + 8,param_4,param_3);
    return uVar3;
  case 0x1009:
    uVar3 = FUN_1801f8980(lVar1 + 0x10,lVar1 + 0x18,param_4,param_3);
    return uVar3;
  case 0x100a:
    uVar2 = *param_4;
    if ((1 < uVar2) && ((uVar2 & uVar2 - 1) == 0)) {
      *(ulonglong *)(lVar1 + 0x20) = uVar2;
      return 1;
    }
    break;
  case 0x100b:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x28) = *param_4;
      return 1;
    }
    break;
  case 0x100c:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x30) = *param_4;
      return 1;
    }
    break;
  case 0x100d:
    if (*param_4 != 0) {
      *(ulonglong *)(lVar1 + 0x38) = *param_4;
      return 1;
    }
    break;
  default:
    return 0xfffffffe;
  }
  return 0;
}



// ===== FUN_1801f82c0 @ 1801f82c0 (size 896)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801f82c0(longlong param_1,char *param_2,char *param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1801f82d0;
  if (param_3 == (char *)0x0) {
    FUN_1801a70c0(0x34,0x68,0x66,"crypto\\kdf\\scrypt.c",0xb7,0x1801f82d0);
    return 0;
  }
  lVar6 = 0;
  while (lVar5 = lVar6 + 1, param_2[lVar6] == (&DAT_180334384)[lVar6]) {
    lVar6 = lVar5;
    if (lVar5 == 5) {
      uVar4 = FUN_1801c3190(param_1,0x1008,param_3);
      return uVar4;
    }
  }
  lVar6 = 0;
  while (lVar5 = lVar6 + 1, param_2[lVar6] == "hexpass"[lVar6]) {
    lVar6 = lVar5;
    if (lVar5 == 8) {
      uVar4 = FUN_1801c3010(param_1,0x1008,param_3);
      return uVar4;
    }
  }
  lVar6 = 0;
  while (lVar5 = lVar6 + 1, param_2[lVar6] == (&DAT_18030e7dc)[lVar6]) {
    lVar6 = lVar5;
    if (lVar5 == 5) {
      uVar4 = FUN_1801c3190(param_1,0x1009,param_3);
      return uVar4;
    }
  }
  lVar6 = 0;
  while (lVar5 = lVar6 + 1, param_2[lVar6] == "hexsalt"[lVar6]) {
    lVar6 = lVar5;
    if (lVar5 == 8) {
      uVar4 = FUN_1801c3010(param_1,0x1009,param_3);
      return uVar4;
    }
  }
  if ((*param_2 == DAT_180331634) && (param_2[1] == DAT_180331635)) {
    uVar4 = FUN_1801f8700(param_1,0x100a,param_3);
    return uVar4;
  }
  if ((*param_2 == DAT_18030be14) && (param_2[1] == DAT_18030be15)) {
    uVar4 = FUN_1801f8700(param_1,0x100b,param_3);
    return uVar4;
  }
  if ((*param_2 != DAT_180306b2c) || (param_2[1] != DAT_180306b2d)) {
    iVar3 = strcmp(param_2,"maxmem_bytes");
    if (iVar3 != 0) {
      FUN_1801a70c0(0x34,0x68,0x67,"crypto\\kdf\\scrypt.c",0xd4,uVar7);
      return 0xfffffffe;
    }
    cVar2 = *param_3;
    uVar4 = 0;
    while( true ) {
      if (cVar2 == '\0') {
        if (uVar4 != 0) {
          *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x38) = uVar4;
        }
        return (ulonglong)(uVar4 != 0);
      }
      if (9 < (byte)(cVar2 - 0x30U)) break;
      uVar1 = (ulonglong)((int)cVar2 - 0x30U) + uVar4 * 10;
      if ((uVar1 < (int)cVar2 - 0x30U) || ((uVar4 * 10) / 10 != uVar4)) break;
      cVar2 = param_3[1];
      param_3 = param_3 + 1;
      uVar4 = uVar1;
    }
    FUN_1801a70c0(0x34,0x69,0x6c,"crypto\\kdf\\scrypt.c",0xad,uVar7);
    return 0;
  }
  cVar2 = *param_3;
  uVar4 = 0;
  while( true ) {
    if (cVar2 == '\0') {
      if (uVar4 != 0) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x30) = uVar4;
      }
      return (ulonglong)(uVar4 != 0);
    }
    if (9 < (byte)(cVar2 - 0x30U)) break;
    uVar1 = (ulonglong)((int)cVar2 - 0x30U) + uVar4 * 10;
    if ((uVar1 < (int)cVar2 - 0x30U) || ((uVar4 * 10) / 10 != uVar4)) break;
    cVar2 = param_3[1];
    param_3 = param_3 + 1;
    uVar4 = uVar1;
  }
  FUN_1801a70c0(0x34,0x69,0x6c,"crypto\\kdf\\scrypt.c",0xad,0x1801f82d0);
  return 0;
}



// ===== FUN_1801f8640 @ 1801f8640 (size 182)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f8640(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    FUN_1801a70c0(0x34,0x6d,0x6e,"crypto\\kdf\\scrypt.c",0xde);
    return 0;
  }
  if (plVar1[2] == 0) {
    FUN_1801a70c0(0x34,0x6d,0x6f,"crypto\\kdf\\scrypt.c",0xe3);
    return 0;
  }
  uVar2 = FUN_18022f860(*plVar1,plVar1[1],plVar1[2],plVar1[3],plVar1[4],plVar1[5],plVar1[6],
                        plVar1[7],param_2,*param_3,0x1801f864a);
  return uVar2;
}



// ===== FUN_1801f8700 @ 1801f8700 (size 611)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f8700(longlong param_1,undefined4 param_2,char *param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1801f8715;
  uVar6 = 0;
  cVar2 = *param_3;
  uVar4 = 0;
  while (cVar2 != '\0') {
    if (9 < (byte)(cVar2 - 0x30U)) {
LAB_1801f879f:
      FUN_1801a70c0(0x34,0x69,0x6c,"crypto\\kdf\\scrypt.c",0xad,0x1801f8715);
      return 0;
    }
    uVar1 = (ulonglong)((int)cVar2 - 0x30U) + uVar4 * 10;
    if ((uVar1 < (int)cVar2 - 0x30U) || ((uVar4 * 10) / 10 != uVar4)) goto LAB_1801f879f;
    param_3 = param_3 + 1;
    uVar4 = uVar1;
    cVar2 = *param_3;
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  switch(param_2) {
  case 0x1008:
    if (*plVar3 != 0) {
      FUN_180195f20(*plVar3,plVar3[1],"crypto\\kdf\\scrypt.c",100);
    }
    lVar5 = FUN_180195dc0(1,"crypto\\kdf\\scrypt.c");
    *plVar3 = lVar5;
    if (lVar5 != 0) {
      plVar3[1] = 0;
      return 1;
    }
    goto LAB_1801f880d;
  case 0x1009:
    if (plVar3[2] != 0) {
      FUN_180195f20(plVar3[2],plVar3[3],"crypto\\kdf\\scrypt.c",100);
    }
    lVar5 = FUN_180195dc0(1,"crypto\\kdf\\scrypt.c");
    plVar3[2] = lVar5;
    if (lVar5 != 0) {
      plVar3[3] = 0;
      return 1;
    }
LAB_1801f880d:
    FUN_1801a70c0(0x34,0x6b,0x41,"crypto\\kdf\\scrypt.c",0x6c,uVar7);
    return 0;
  case 0x100a:
    if ((1 < uVar4) && ((uVar4 & uVar4 - 1) == 0)) {
      plVar3[4] = uVar4;
      return 1;
    }
    break;
  case 0x100b:
    if (uVar4 != 0) {
      plVar3[5] = uVar4;
      return 1;
    }
    break;
  case 0x100c:
    if (uVar4 != 0) {
      plVar3[6] = uVar4;
      return 1;
    }
    break;
  case 0x100d:
    if (uVar4 != 0) {
      plVar3[7] = uVar4;
      return 1;
    }
    break;
  default:
    uVar6 = 0xfffffffe;
  }
  return uVar6;
}



// ===== FUN_1801f8980 @ 1801f8980 (size 231)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801f8980(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801f899b;
  if (param_3 == 0) {
    bVar2 = true;
  }
  else if (param_4 < 0) {
    bVar2 = false;
  }
  else {
    if (*param_1 != 0) {
      FUN_180195f20(*param_1,*param_2,"crypto\\kdf\\scrypt.c",100);
    }
    if (param_4 < 1) {
      lVar1 = FUN_180195dc0(1,"crypto\\kdf\\scrypt.c");
    }
    else {
      lVar1 = FUN_1801ba270(param_3,(longlong)param_4,"crypto\\kdf\\scrypt.c",0x67);
    }
    *param_1 = lVar1;
    bVar2 = lVar1 != 0;
    if (bVar2) {
      *param_2 = (longlong)param_4;
    }
    else {
      FUN_1801a70c0(0x34,0x6b,0x41,"crypto\\kdf\\scrypt.c",0x6c,uVar3);
    }
  }
  return bVar2;
}



// ===== FUN_1801f8a70 @ 1801f8a70 (size 97)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f8a70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801f8a7c;
  lVar1 = FUN_180196100(0x420,"crypto\\kdf\\tls1_prf.c",0x28);
  if (lVar1 == 0) {
    FUN_1801a70c0(0x34,0x6e,0x41,"crypto\\kdf\\tls1_prf.c",0x29,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// ===== FUN_1801f8ae0 @ 1801f8ae0 (size 85)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f8ae0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_180195f20(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),"crypto\\kdf\\tls1_prf.c",
                0x34);
  FUN_180001240(lVar1 + 0x18,*(undefined8 *)(lVar1 + 0x418));
  FUN_180195e10(lVar1,"crypto\\kdf\\tls1_prf.c",0x36);
  return;
}



// ===== FUN_1801f8b40 @ 1801f8b40 (size 298)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f8b40(longlong param_1,int param_2,int param_3,void *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t _Size;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  _Size = (size_t)param_3;
  if (param_2 == 0x1000) {
    *puVar1 = param_4;
  }
  else {
    if (param_2 == 0x1001) {
      if (-1 < param_3) {
        if (puVar1[1] != 0) {
          FUN_180195f20(puVar1[1],puVar1[2],"crypto\\kdf\\tls1_prf.c",0x45);
        }
        FUN_180001240(puVar1 + 3,puVar1[0x83]);
        puVar1[0x83] = 0;
        lVar2 = FUN_1801ba270(param_4,_Size,"crypto\\kdf\\tls1_prf.c",0x48);
        puVar1[1] = lVar2;
        if (lVar2 != 0) {
          puVar1[2] = _Size;
          return 1;
        }
      }
      return 0;
    }
    if (param_2 != 0x1002) {
      return 0xfffffffe;
    }
    if ((param_3 != 0) && (param_4 != (void *)0x0)) {
      if (param_3 < 0) {
        return 0;
      }
      if (0x400 - *(int *)(puVar1 + 0x83) < param_3) {
        return 0;
      }
      memcpy((void *)((longlong)puVar1 + puVar1[0x83] + 0x18),param_4,_Size);
      puVar1[0x83] = puVar1[0x83] + _Size;
    }
  }
  return 1;
}



// ===== FUN_1801f8c70 @ 1801f8c70 (size 447)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f8c70(longlong param_1,char *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801f8c85;
  if (param_3 == 0) {
    FUN_1801a70c0(0x34,100,0x66,"crypto\\kdf\\tls1_prf.c",0x61,0x1801f8c85);
    return 0;
  }
  if (((*param_2 == DAT_18032f018) && (param_2[1] == DAT_18032f019)) &&
     (param_2[2] == DAT_18032f01a)) {
    plVar1 = *(longlong **)(param_1 + 0x28);
    lVar3 = FUN_1801dcf20(param_3);
    if (lVar3 == 0) {
      FUN_1801a70c0(0x34,100,100,"crypto\\kdf\\tls1_prf.c",0x69,uVar6);
      return 0;
    }
    *plVar1 = lVar3;
    return 1;
  }
  lVar5 = 0;
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 1;
    if (param_2[lVar3] != "secret"[lVar3]) {
      iVar2 = strcmp(param_2,"hexsecret");
      if (iVar2 == 0) {
        uVar6 = FUN_1801c3010(param_1,0x1001,param_3);
        return uVar6;
      }
      lVar3 = 0;
      do {
        lVar4 = lVar3 + 1;
        if (param_2[lVar3] != (&DAT_18032e088)[lVar3]) {
          do {
            lVar3 = lVar5 + 1;
            if (param_2[lVar5] != "hexseed"[lVar5]) {
              FUN_1801a70c0(0x34,100,0x67,"crypto\\kdf\\tls1_prf.c",0x78);
              return 0xfffffffe;
            }
            lVar5 = lVar3;
          } while (lVar3 != 8);
          uVar6 = FUN_1801c3010(param_1,0x1002,param_3);
          return uVar6;
        }
        lVar3 = lVar4;
      } while (lVar4 != 5);
      uVar6 = FUN_1801c3190(param_1,0x1002,param_3);
      return uVar6;
    }
    lVar3 = lVar4;
  } while (lVar4 != 7);
  uVar6 = FUN_1801c3190(param_1,0x1001);
  return uVar6;
}



// ===== FUN_1801f8e30 @ 1801f8e30 (size 205)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f8e30(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    FUN_1801a70c0(0x34,0x65,0x69,"crypto\\kdf\\tls1_prf.c",0x81);
    return 0;
  }
  if (plVar1[1] == 0) {
    FUN_1801a70c0(0x34,0x65,0x6b,"crypto\\kdf\\tls1_prf.c",0x85);
    return 0;
  }
  if (plVar1[0x83] == 0) {
    FUN_1801a70c0(0x34,0x65,0x6a,"crypto\\kdf\\tls1_prf.c",0x89);
    return 0;
  }
  uVar2 = FUN_1801f9170(*plVar1,plVar1[1],plVar1[2],plVar1 + 3,plVar1[0x83],param_2,*param_3);
  return uVar2;
}



// ===== FUN_1801f8f00 @ 1801f8f00 (size 619)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1801f8f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,void *param_6,ulonglong param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 local_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1801f8f17;
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_e8;
  lVar2 = 0;
  lVar3 = 0;
  local_a0 = 0;
  lVar4 = 0;
  local_b8 = 0;
  local_b0 = FUN_1801afe40();
  if (0 < local_b0) {
    lVar2 = FUN_18019d560();
    lVar3 = FUN_18019d560();
    lVar4 = FUN_18019d560();
    if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
      FUN_1801afd10(lVar4,8);
      local_a0 = FUN_18019e380(0x357,0,param_2,param_3);
      if (((((local_a0 != 0) &&
            (local_c8 = local_a0, iVar1 = FUN_18020ab60(lVar4,0,param_1,0), iVar1 != 0)) &&
           ((iVar1 = FUN_18019d2f0(lVar2,lVar4), iVar1 != 0 &&
            ((param_4 == 0 || (iVar1 = FUN_18019d280(lVar2,param_4,param_5), iVar1 != 0)))))) &&
          (iVar1 = FUN_18020a980(lVar2,local_98,&local_a8), iVar1 != 0)) &&
         (iVar1 = FUN_18019d2f0(lVar2,lVar4), iVar1 != 0)) {
        uVar5 = (ulonglong)local_b0;
        while( true ) {
          iVar1 = FUN_18019d280(lVar2,local_98,local_a8);
          if (((iVar1 == 0) ||
              ((uVar5 < param_7 && (iVar1 = FUN_18019d2f0(lVar3,lVar2), iVar1 == 0)))) ||
             ((param_4 != 0 && (iVar1 = FUN_18019d280(lVar2,param_4,param_5), iVar1 == 0))))
          goto LAB_1801f9112;
          if (param_7 <= uVar5) break;
          iVar1 = FUN_18020a980(lVar2,param_6,&local_b0);
          if (iVar1 == 0) goto LAB_1801f9112;
          param_6 = (void *)((longlong)param_6 + CONCAT44(uStack_ac,local_b0));
          param_7 = param_7 - CONCAT44(uStack_ac,local_b0);
          iVar1 = FUN_18020a980(lVar3,local_98,&local_a8);
          if ((iVar1 == 0) || (iVar1 = FUN_18019d2f0(lVar2,lVar4), iVar1 == 0)) goto LAB_1801f9112;
        }
        iVar1 = FUN_18020a980(lVar2,local_98,&local_a8);
        if (iVar1 != 0) {
          memcpy(param_6,local_98,param_7);
          local_b8 = 1;
        }
      }
    }
  }
LAB_1801f9112:
  FUN_18019deb0(local_a0);
  FUN_18019d520(lVar2);
  FUN_18019d520(lVar3);
  FUN_18019d520(lVar4);
  FUN_180001240(local_98,0x40);
  return local_b8;
}



// ===== FUN_1801f9170 @ 1801f9170 (size 624)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801f9170(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5,ulonglong *param_6,ulonglong param_7)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  undefined8 uVar13;
  
  uVar13 = 0x1801f918d;
  iVar4 = FUN_18019a410();
  if (iVar4 == 0x72) {
    lVar10 = (ulonglong)((uint)param_3 & 1) + (param_3 >> 1);
    uVar5 = FUN_1801dd030();
    uVar11 = param_5;
    iVar4 = FUN_1801f8f00(uVar5,param_2,lVar10,param_4,param_5,param_6,param_7,uVar13);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (iVar4 != 0) {
      uVar6 = FUN_180195dc0(param_7,"crypto\\kdf\\tls1_prf.c",0x104);
      if (uVar6 == 0) {
        FUN_1801a70c0(0x34,0x6f,0x41,"crypto\\kdf\\tls1_prf.c",CONCAT44(uVar12,0x105));
      }
      else {
        uVar13 = FUN_18019db60();
        iVar4 = FUN_1801f8f00(uVar13,(param_3 >> 1) + param_2,lVar10,param_4,param_5,uVar6,param_7);
        if (iVar4 != 0) {
          uVar9 = 0;
          if (param_7 != 0) {
            if ((0x3f < param_7) &&
               (((ulonglong *)((param_7 - 1) + uVar6) < param_6 ||
                ((longlong)param_6 + (param_7 - 1) < uVar6)))) {
              lVar10 = uVar6 - (longlong)param_6;
              puVar7 = param_6;
              do {
                uVar9 = uVar9 + 0x40;
                uVar3 = ((ulonglong *)(lVar10 + (longlong)puVar7))[1];
                puVar1 = puVar7 + 8;
                *puVar7 = *(ulonglong *)(lVar10 + (longlong)puVar7) ^ *puVar7;
                puVar7[1] = uVar3 ^ puVar7[1];
                puVar2 = (ulonglong *)(lVar10 + -0x30 + (longlong)puVar1);
                uVar3 = puVar2[1];
                puVar7[2] = *puVar2 ^ puVar7[2];
                puVar7[3] = uVar3 ^ puVar7[3];
                puVar2 = (ulonglong *)(lVar10 + -0x20 + (longlong)puVar1);
                uVar3 = puVar2[1];
                puVar7[4] = *puVar2 ^ puVar7[4];
                puVar7[5] = uVar3 ^ puVar7[5];
                puVar2 = (ulonglong *)(lVar10 + -0x10 + (longlong)puVar1);
                uVar3 = puVar2[1];
                puVar7[6] = *puVar2 ^ puVar7[6];
                puVar7[7] = uVar3 ^ puVar7[7];
                puVar7 = puVar1;
              } while (uVar9 < (param_7 & 0xffffffffffffffc0));
            }
            if (uVar9 < param_7) {
              pbVar8 = (byte *)(uVar9 + (longlong)param_6);
              lVar10 = param_7 - uVar9;
              do {
                *pbVar8 = *pbVar8 ^ pbVar8[uVar6 - (longlong)param_6];
                pbVar8 = pbVar8 + 1;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
          }
          FUN_180195f20(uVar6,param_7,"crypto\\kdf\\tls1_prf.c",0x10f);
          return 1;
        }
        FUN_180195f20(uVar6,param_7,"crypto\\kdf\\tls1_prf.c",0x10a);
      }
      return 0;
    }
  }
  else {
    iVar4 = FUN_1801f8f00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar13);
    if (iVar4 != 0) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801f93e0 @ 1801f93e0 (size 97)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f93e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801f93ec;
  lVar1 = FUN_180196100(0x438,"crypto\\kdf\\hkdf.c",0x33);
  if (lVar1 == 0) {
    FUN_1801a70c0(0x34,0x6c,0x41,"crypto\\kdf\\hkdf.c",0x34,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// ===== FUN_1801f9450 @ 1801f9450 (size 111)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f9450(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_180195f20(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),"crypto\\kdf\\hkdf.c",
                0x40);
  FUN_180195f20(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),"crypto\\kdf\\hkdf.c",
                0x41);
  FUN_180001240(lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x430));
  FUN_180195e10(lVar1,"crypto\\kdf\\hkdf.c",0x43);
  return;
}



// ===== FUN_1801f94c0 @ 1801f94c0 (size 390)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f94c0(longlong param_1,int param_2,int param_3,void *param_4)

{
  int *piVar1;
  longlong lVar2;
  size_t _Size;
  
  piVar1 = *(int **)(param_1 + 0x28);
  _Size = (size_t)param_3;
  if (param_2 == 0x1003) {
    if (param_4 == (void *)0x0) {
      return 0;
    }
    *(void **)(piVar1 + 2) = param_4;
  }
  else if (param_2 == 0x1004) {
    if ((param_3 != 0) && (param_4 != (void *)0x0)) {
      if (param_3 < 0) {
        return 0;
      }
      if (*(longlong *)(piVar1 + 4) != 0) {
        FUN_180195f20(*(longlong *)(piVar1 + 4),*(undefined8 *)(piVar1 + 6),"crypto\\kdf\\hkdf.c",
                      0x5e);
      }
      lVar2 = FUN_1801ba270(param_4,_Size,"crypto\\kdf\\hkdf.c",0x60);
      *(longlong *)(piVar1 + 4) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      *(size_t *)(piVar1 + 6) = _Size;
      return 1;
    }
  }
  else {
    if (param_2 == 0x1005) {
      if (-1 < param_3) {
        if (*(longlong *)(piVar1 + 8) != 0) {
          FUN_180195f20(*(longlong *)(piVar1 + 8),*(undefined8 *)(piVar1 + 10),"crypto\\kdf\\hkdf.c"
                        ,0x6c);
        }
        lVar2 = FUN_1801ba270(param_4,_Size,"crypto\\kdf\\hkdf.c",0x6e);
        *(longlong *)(piVar1 + 8) = lVar2;
        if (lVar2 != 0) {
          *(size_t *)(piVar1 + 10) = _Size;
          return 1;
        }
      }
      return 0;
    }
    if (param_2 == 0x1006) {
      if ((param_3 != 0) && (param_4 != (void *)0x0)) {
        if (param_3 < 0) {
          return 0;
        }
        if (0x400 - piVar1[0x10c] < param_3) {
          return 0;
        }
        memcpy((void *)((longlong)piVar1 + *(longlong *)(piVar1 + 0x10c) + 0x30),param_4,_Size);
        *(size_t *)(piVar1 + 0x10c) = *(longlong *)(piVar1 + 0x10c) + _Size;
      }
    }
    else {
      if (param_2 != 0x1007) {
        return 0xfffffffe;
      }
      *piVar1 = param_3;
    }
  }
  return 1;
}



// ===== FUN_1801f9650 @ 1801f9650 (size 726)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f9650(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = 0;
  lVar5 = 0;
  while (lVar6 = lVar5 + 1, param_2[lVar5] == (&DAT_180334604)[lVar5]) {
    lVar5 = lVar6;
    if (lVar6 == 5) {
      iVar1 = strcmp(param_3,"EXTRACT_AND_EXPAND");
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = strcmp(param_3,"EXTRACT_ONLY");
        if (iVar1 == 0) {
          uVar2 = 1;
        }
        else {
          iVar1 = strcmp(param_3,"EXPAND_ONLY");
          if (iVar1 != 0) {
            return 0;
          }
          uVar2 = 2;
        }
      }
      uVar3 = FUN_1801c2d40(param_1,0xffffffff,0x400,0x1007,uVar2,0);
      return uVar3;
    }
  }
  if (((*param_2 == DAT_18032f018) && (param_2[1] == DAT_18032f019)) &&
     (param_2[2] == DAT_18032f01a)) {
    uVar3 = FUN_1801c30a0(param_1,0x400,0x1003,param_3);
    return uVar3;
  }
  lVar5 = 0;
  do {
    lVar6 = lVar5 + 1;
    if (param_2[lVar5] != (&DAT_18030e7dc)[lVar5]) {
      lVar5 = 0;
      do {
        lVar6 = lVar5 + 1;
        if (param_2[lVar5] != "hexsalt"[lVar5]) {
          lVar5 = 0;
          do {
            lVar6 = lVar5 + 1;
            if (param_2[lVar5] != (&DAT_1802edbd0)[lVar5]) {
              lVar5 = 0;
              do {
                lVar6 = lVar5 + 1;
                if (param_2[lVar5] != (&DAT_180332dc8)[lVar5]) {
                  lVar5 = 0;
                  do {
                    lVar6 = lVar5 + 1;
                    if (param_2[lVar5] != (&DAT_1803266b8)[lVar5]) {
                      do {
                        lVar5 = lVar4 + 1;
                        if (param_2[lVar4] != "hexinfo"[lVar4]) {
                          FUN_1801a70c0(0x34,0x67,0x67,"crypto\\kdf\\hkdf.c",0xae,0x1801f9665);
                          return 0xfffffffe;
                        }
                        lVar4 = lVar5;
                      } while (lVar5 != 8);
                      uVar3 = FUN_1801c3010(param_1,0x1006,param_3);
                      return uVar3;
                    }
                    lVar5 = lVar6;
                  } while (lVar6 != 5);
                  uVar3 = FUN_1801c3190(param_1,0x1006,param_3);
                  return uVar3;
                }
                lVar5 = lVar6;
              } while (lVar6 != 7);
              uVar3 = FUN_1801c3010(param_1,0x1005,param_3);
              return uVar3;
            }
            lVar5 = lVar6;
          } while (lVar6 != 4);
          uVar3 = FUN_1801c3190(param_1,0x1005,param_3);
          return uVar3;
        }
        lVar5 = lVar6;
      } while (lVar6 != 8);
      uVar3 = FUN_1801c3010(param_1,0x1004,param_3);
      return uVar3;
    }
    lVar5 = lVar6;
  } while (lVar6 != 5);
  uVar3 = FUN_1801c3190(param_1,0x1004,param_3);
  return uVar3;
}



// ===== FUN_1801f9930 @ 1801f9930 (size 114)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f9930(longlong param_1)

{
  void *_Dst;
  
  _Dst = *(void **)(param_1 + 0x28);
  FUN_180195f20(*(undefined8 *)((longlong)_Dst + 0x20),*(undefined8 *)((longlong)_Dst + 0x28),
                "crypto\\kdf\\hkdf.c",0xb6);
  FUN_180195f20(*(undefined8 *)((longlong)_Dst + 0x10),*(undefined8 *)((longlong)_Dst + 0x18),
                "crypto\\kdf\\hkdf.c",0xb7);
  FUN_180001240((longlong)_Dst + 0x30);
  memset(_Dst,0,0x438);
  return 1;
}



// ===== FUN_1801f99b0 @ 1801f99b0 (size 475)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1801f99b0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined4 local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_c8;
  piVar1 = *(int **)(param_1 + 0x28);
  lVar5 = *(longlong *)(piVar1 + 2);
  if (lVar5 == 0) {
    local_a8 = CONCAT44(local_a8._4_4_,0xc4);
    FUN_1801a70c0(0x34,0x66,0x69,"crypto\\kdf\\hkdf.c");
LAB_1801f9a05:
    bVar7 = false;
  }
  else {
    lVar6 = *(longlong *)(piVar1 + 8);
    if (lVar6 == 0) {
      local_a8 = CONCAT44(local_a8._4_4_,200);
      FUN_1801a70c0(0x34,0x66,0x68,"crypto\\kdf\\hkdf.c");
      return false;
    }
    iVar4 = *piVar1;
    local_a0 = (undefined1 *)param_2;
    if (iVar4 == 0) {
      local_a8 = *(undefined8 *)(piVar1 + 10);
      local_98 = (longlong *)local_88;
      local_a0 = local_78;
      lVar2 = *param_3;
      uVar3 = *(undefined8 *)(piVar1 + 0x10c);
      lVar6 = FUN_18021aad0(lVar5,*(undefined8 *)(piVar1 + 4),piVar1[6],lVar6);
      if (lVar6 == 0) {
        lVar5 = 0;
      }
      else {
        local_a8 = uVar3;
        local_a0 = (undefined1 *)param_2;
        local_98 = (longlong *)lVar2;
        lVar5 = FUN_1801f9b90(lVar5,local_78,local_88[0],piVar1 + 0xc);
        FUN_180001240(local_78,0x40);
      }
      bVar7 = lVar5 == 0;
    }
    else if (iVar4 == 1) {
      if (param_2 == 0) {
        iVar4 = FUN_1801afe40();
        *param_3 = (longlong)iVar4;
        return true;
      }
      local_a8 = *(undefined8 *)(piVar1 + 10);
      local_98 = param_3;
      lVar5 = FUN_1801f9d60(lVar5,*(undefined8 *)(piVar1 + 4),*(undefined8 *)(piVar1 + 6),lVar6);
      bVar7 = lVar5 == 0;
    }
    else {
      if (iVar4 != 2) goto LAB_1801f9a05;
      local_98 = (longlong *)*param_3;
      local_a8 = *(undefined8 *)(piVar1 + 0x10c);
      lVar5 = FUN_1801f9b90(lVar5,lVar6,*(undefined8 *)(piVar1 + 10),piVar1 + 0xc);
      bVar7 = lVar5 == 0;
    }
    bVar7 = !bVar7;
  }
  return bVar7;
}



// ===== FUN_1801f9b90 @ 1801f9b90 (size 456)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801f9b90(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                      undefined8 param_5,longlong param_6,ulonglong param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  size_t _Size;
  ulonglong uVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_c8 [8];
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1801f9ba7;
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_f8;
  lVar3 = 0;
  lVar4 = 0;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_4;
  iVar1 = FUN_1801afe40();
  uVar7 = (ulonglong)iVar1;
  uVar6 = param_7 / uVar7 + 1;
  if (param_7 % uVar7 == 0) {
    uVar6 = param_7 / uVar7;
  }
  if (((uVar6 < 0x100) && (param_6 != 0)) && (local_a8 = uVar6, lVar2 = FUN_18021ad70(), lVar2 != 0)
     ) {
    local_d8 = 0;
    iVar1 = FUN_18021af40(lVar2,local_b8,local_c0 & 0xffffffff,param_1);
    if (iVar1 != 0) {
      uVar5 = 1;
      if (uVar6 != 0) {
        do {
          local_c8[0] = (undefined1)uVar5;
          if (1 < (uint)uVar5) {
            local_d8 = 0;
            iVar1 = FUN_18021af40(lVar2,0,0,0);
            if ((iVar1 == 0) || (iVar1 = FUN_18021b240(lVar2,local_98,uVar7), iVar1 == 0))
            goto LAB_1801f9d16;
          }
          iVar1 = FUN_18021b240(lVar2,local_b0,param_5);
          if ((iVar1 == 0) ||
             ((iVar1 = FUN_18021b240(lVar2,local_c8,1), iVar1 == 0 ||
              (iVar1 = FUN_18021ae90(lVar2,local_98,0), iVar1 == 0)))) goto LAB_1801f9d16;
          _Size = param_7 - lVar4;
          if (uVar7 + lVar4 <= param_7) {
            _Size = uVar7;
          }
          memcpy((void *)(param_6 + lVar4),local_98,_Size);
          uVar5 = (ulonglong)((uint)uVar5 + 1);
          lVar4 = lVar4 + _Size;
        } while (uVar5 <= local_a8);
      }
      lVar3 = param_6;
    }
LAB_1801f9d16:
    FUN_180001240(local_98,0x40);
    FUN_18021ad00(lVar2);
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// ===== FUN_1801f9d60 @ 1801f9d60 (size 91)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f9d60(void)

{
  longlong lVar1;
  undefined8 in_stack_00000030;
  ulonglong *in_stack_00000038;
  uint local_18;
  
  lVar1 = FUN_18021aad0();
  if (lVar1 == 0) {
    return 0;
  }
  *in_stack_00000038 = (ulonglong)local_18;
  return in_stack_00000030;
}



// ===== FUN_1801f9dc0 @ 1801f9dc0 (size 124)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f9dc0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801f9dcc;
  lVar1 = FUN_180196100(0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x1f);
  if (lVar1 == 0) {
    FUN_1801a70c0(0xf,0x7c,0x41,"crypto\\poly1305\\poly1305_pmeth.c",0x20,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  FUN_1801afd20(param_1,lVar1);
  FUN_1801c3180(param_1,0,0);
  return 1;
}



// ===== FUN_1801f9e40 @ 1801f9e40 (size 107)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801f9e40(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_18019df70();
  if (piVar1 != (int *)0x0) {
    FUN_180195f20(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,"crypto\\poly1305\\poly1305_pmeth.c"
                  ,0x2f);
    FUN_180195f20(piVar1,0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x30);
    FUN_1801afd20(param_1,0);
  }
  return;
}



// ===== FUN_1801f9eb0 @ 1801f9eb0 (size 444)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801f9eb0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801f9ec5;
  lVar2 = FUN_180196100(0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x1f);
  if (lVar2 == 0) {
    FUN_1801a70c0(0xf,0x7c,0x41,"crypto\\poly1305\\poly1305_pmeth.c",0x20,uVar6);
    return 0;
  }
  *(undefined4 *)(lVar2 + 4) = 4;
  FUN_1801afd20(param_1,lVar2);
  FUN_1801c3180(param_1,0,0);
  lVar2 = FUN_18019df70(param_2);
  lVar3 = FUN_18019df70(param_1);
  lVar4 = FUN_18013ff80(lVar2);
  if (lVar4 != 0) {
    iVar1 = FUN_18019a0c0(lVar3,lVar2);
    if (iVar1 == 0) {
      piVar5 = (int *)FUN_18019df70(param_1);
      if (piVar5 != (int *)0x0) {
        FUN_180195f20(*(undefined8 *)(piVar5 + 2),(longlong)*piVar5,
                      "crypto\\poly1305\\poly1305_pmeth.c",0x2f);
        FUN_180195f20(piVar5,0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x30);
        FUN_1801afd20(param_1,0);
      }
      return 0;
    }
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar3 + 0x30) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar3 + 0x40) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar3 + 0x50) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)(lVar2 + 0x58);
  *(undefined8 *)(lVar3 + 0x60) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(lVar2 + 0x68);
  *(undefined8 *)(lVar3 + 0x70) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x80);
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(lVar3 + 0x80) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x90);
  *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(lVar2 + 0x88);
  *(undefined8 *)(lVar3 + 0x90) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xa0);
  *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(lVar2 + 0x98);
  *(undefined8 *)(lVar3 + 0xa0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xb0);
  *(undefined8 *)(lVar3 + 0xa8) = *(undefined8 *)(lVar2 + 0xa8);
  *(undefined8 *)(lVar3 + 0xb0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xc0);
  *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar3 + 0xc0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xd0);
  *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar2 + 200);
  *(undefined8 *)(lVar3 + 0xd0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xe0);
  *(undefined8 *)(lVar3 + 0xd8) = *(undefined8 *)(lVar2 + 0xd8);
  *(undefined8 *)(lVar3 + 0xe0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0xf0);
  *(undefined8 *)(lVar3 + 0xe8) = *(undefined8 *)(lVar2 + 0xe8);
  *(undefined8 *)(lVar3 + 0xf0) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x100);
  *(undefined8 *)(lVar3 + 0xf8) = *(undefined8 *)(lVar2 + 0xf8);
  *(undefined8 *)(lVar3 + 0x100) = uVar6;
  *(undefined8 *)(lVar3 + 0x108) = *(undefined8 *)(lVar2 + 0x108);
  return 1;
}



// ===== FUN_1801fa070 @ 1801fa070 (size 95)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa070(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_18019df70();
  lVar2 = FUN_18013ff80(uVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_1801dbf80(uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_18019dbd0(param_2,0x425,lVar2);
      return uVar1;
    }
  }
  return 0;
}



// ===== FUN_1801fa0d0 @ 1801fa0d0 (size 124)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa0d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  piVar2 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*piVar2 == 0x20) {
    FUN_1801afd10(param_2,0x100);
    FUN_1801afd20(param_2,FUN_1801fa260);
    FUN_180230390(lVar1 + 0x18,*(undefined8 *)(piVar2 + 2));
    return 1;
  }
  return 0;
}



// ===== FUN_1801fa180 @ 1801fa180 (size 209)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa180(undefined8 param_1,int param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18 [2];
  
  local_18[1] = 0x1801fa1a0;
  lVar2 = FUN_18019df70();
  if (param_2 != 1) {
    if (1 < param_2 - 6U) {
      return 0xfffffffe;
    }
    if (param_2 == 6) {
      local_18[0] = (longlong)param_3;
    }
    else {
      uVar3 = FUN_18007e060(param_1);
      param_4 = FUN_18019e0e0(uVar3,local_18);
    }
    if (((param_4 == 0) || (local_18[0] != 0x20)) ||
       (iVar1 = FUN_1801dfa10(lVar2,param_4,0x20), iVar1 == 0)) {
      return 0;
    }
    uVar3 = FUN_18013ff80(lVar2);
    FUN_180230390(lVar2 + 0x18,uVar3);
  }
  return 1;
}



// ===== FUN_1801fa260 @ 1801fa260 (size 69)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1801afd00();
  lVar2 = FUN_18019df70(uVar1);
  FUN_180230490(lVar2 + 0x18,param_2,param_3);
  return 1;
}



// ===== FUN_1801fa2b0 @ 1801fa2b0 (size 122)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa2b0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801fa2bc;
  lVar1 = FUN_180196100(0x58,"crypto\\siphash\\siphash_pmeth.c",0x1f);
  if (lVar1 == 0) {
    FUN_1801a70c0(0xf,0x7d,0x41,"crypto\\siphash\\siphash_pmeth.c",0x20,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  FUN_1801afd20(param_1,lVar1);
  FUN_1801c3180(param_1,0,0);
  return 1;
}



// ===== FUN_1801fa330 @ 1801fa330 (size 106)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801fa330(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_18019df70();
  if (piVar1 != (int *)0x0) {
    FUN_180195f20(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,"crypto\\siphash\\siphash_pmeth.c",
                  0x2f);
    FUN_180195f20(piVar1,0x58,"crypto\\siphash\\siphash_pmeth.c");
    FUN_1801afd20(param_1,0);
  }
  return;
}



// ===== FUN_1801fa3a0 @ 1801fa3a0 (size 330)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa3a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801fa3b5;
  lVar2 = FUN_180196100(0x58,"crypto\\siphash\\siphash_pmeth.c",0x1f);
  if (lVar2 == 0) {
    FUN_1801a70c0(0xf,0x7d,0x41,"crypto\\siphash\\siphash_pmeth.c",0x20,uVar6);
    return 0;
  }
  *(undefined4 *)(lVar2 + 4) = 4;
  FUN_1801afd20(param_1,lVar2);
  FUN_1801c3180(param_1,0,0);
  lVar2 = FUN_18019df70(param_2);
  lVar3 = FUN_18019df70(param_1);
  lVar4 = FUN_18013ff80(lVar2);
  if (lVar4 != 0) {
    iVar1 = FUN_18019a0c0(lVar3,lVar2);
    if (iVar1 == 0) {
      piVar5 = (int *)FUN_18019df70(param_1);
      if (piVar5 != (int *)0x0) {
        FUN_180195f20(*(undefined8 *)(piVar5 + 2),(longlong)*piVar5,
                      "crypto\\siphash\\siphash_pmeth.c",0x2f);
        FUN_180195f20(piVar5,0x58,"crypto\\siphash\\siphash_pmeth.c");
        FUN_1801afd20(param_1,0);
      }
      return 0;
    }
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar3 + 0x30) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar3 + 0x40) = uVar6;
  uVar6 = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar3 + 0x50) = uVar6;
  return 1;
}



// ===== FUN_1801fa4f0 @ 1801fa4f0 (size 95)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa4f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_18019df70();
  lVar2 = FUN_18013ff80(uVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_1801dbf80(uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_18019dbd0(param_2,0x426,lVar2);
      return uVar1;
    }
  }
  return 0;
}



// ===== FUN_1801fa550 @ 1801fa550 (size 155)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa550(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res18 [2];
  
  lVar1 = FUN_18019df70();
  uVar2 = FUN_18007e060(param_1);
  lVar3 = FUN_18019e130(uVar2,local_res18);
  if ((lVar3 == 0) || (local_res18[0] != 0x10)) {
    return 0;
  }
  FUN_1801afd10(param_2,0x100);
  FUN_1801afd20(param_2,FUN_1801fa870);
  uVar2 = FUN_180230820(lVar1 + 0x18,lVar3,0,0);
  return uVar2;
}



// ===== FUN_1801fa5f0 @ 1801fa5f0 (size 102)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa5f0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = FUN_180230ba0(lVar1 + 0x18);
  *param_3 = uVar2;
  if (param_2 == 0) {
    return 1;
  }
  uVar2 = FUN_1802305a0(lVar1 + 0x18,param_2,uVar2);
  return uVar2;
}



// ===== FUN_1801fa660 @ 1801fa660 (size 240)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa660(undefined8 param_1,int param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18 [2];
  
  local_18[1] = 0x1801fa680;
  lVar2 = FUN_18019df70();
  if (param_2 == 1) {
    return 1;
  }
  if (5 < param_2) {
    if (param_2 < 8) {
      if (param_2 == 6) {
        local_18[0] = (longlong)param_3;
      }
      else {
        uVar3 = FUN_18007e060(param_1);
        param_4 = FUN_18019e130(uVar3,local_18);
      }
      if (((param_4 == 0) || (local_18[0] != 0x10)) ||
         (iVar1 = FUN_1801dfa10(lVar2,param_4,0x10), iVar1 == 0)) {
        return 0;
      }
      uVar3 = FUN_18013ff80(lVar2);
      uVar3 = FUN_180230820(lVar2 + 0x18,uVar3,0,0);
      return uVar3;
    }
    if (param_2 == 0xe) {
      uVar3 = FUN_180230bb0(lVar2 + 0x18,(longlong)param_3);
      return uVar3;
    }
  }
  return 0xfffffffe;
}



// ===== FUN_1801fa750 @ 1801fa750 (size 277)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa750(undefined8 param_1,char *param_2,char *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_3 == (char *)0x0) {
    return 0;
  }
  iVar2 = strcmp(param_2,"digestsize");
  if (iVar2 == 0) {
    iVar2 = atoi(param_3);
    lVar3 = FUN_18019df70(param_1);
    uVar4 = FUN_180230bb0(lVar3 + 0x18,(longlong)iVar2);
    return uVar4;
  }
  lVar3 = 0;
  do {
    lVar6 = lVar3 + 1;
    uVar1 = 0;
    if (param_2[lVar3] != (&DAT_1802edbd0)[lVar3]) {
      do {
        uVar5 = uVar1;
        if (param_2[uVar5] != (&DAT_180332dc8)[uVar5]) {
          return 0xfffffffe;
        }
        uVar1 = uVar5 + 1;
      } while (uVar5 + 1 != 7);
      uVar4 = FUN_1801c3010(param_1,uVar5 & 0xffffffff,param_3);
      return uVar4;
    }
    lVar3 = lVar6;
  } while (lVar6 != 4);
  uVar4 = FUN_1801c3190(param_1,6,param_3);
  return uVar4;
}



// ===== FUN_1801fa870 @ 1801fa870 (size 69)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1801afd00();
  lVar2 = FUN_18019df70(uVar1);
  FUN_180230970(lVar2 + 0x18,param_2,param_3);
  return 1;
}



// ===== FUN_1801fa910 @ 1801fa910 (size 339)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fa910(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 uVar7;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 *local_18;
  undefined8 local_10;
  
  local_10 = 0x1801fa925;
  lVar4 = 0;
  lVar3 = 0;
  iVar1 = FUN_1801a2200(0,&local_10,local_res20,&local_20,param_2);
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 != 0) {
    FUN_1801a1e10(0,local_res18,&local_18,local_20);
    if (local_res18[0] == 0x10) {
      local_28 = *(undefined8 *)(local_18 + 2);
      if (*(undefined **)(param_1 + 0x10) == &DAT_180334b00) {
        lVar3 = FUN_1801e1b20();
      }
      else {
        lVar3 = FUN_1801e1b00(0,&local_28,*local_18);
      }
      if (lVar3 == 0) {
        uVar2 = 0x47;
        uVar6 = 0x68;
      }
      else {
        lVar4 = FUN_1801bc630(0,&local_10,local_res20[0]);
        if (lVar4 == 0) {
          uVar2 = 0x4c;
          uVar6 = 0x68;
        }
        else {
          lVar5 = FUN_1801dc100(lVar4,0);
          *(longlong *)(lVar3 + 0x20) = lVar5;
          if (lVar5 != 0) {
            FUN_1801bc3c0(lVar4);
            FUN_18019dbd0(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
            return 1;
          }
          uVar2 = 0x52;
          uVar6 = 0x6d;
        }
      }
    }
    else {
      uVar2 = 0x3e;
      uVar6 = 0x69;
    }
    FUN_1801a70c0(5,0x6c,uVar6,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar7,uVar2));
    FUN_1801bc3c0(lVar4);
    FUN_18019f2e0(lVar3);
  }
  return 0;
}



// ===== FUN_1801faa70 @ 1801faa70 (size 313)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801faa70(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x1801faa88;
  lVar3 = *(longlong *)(param_2 + 0x28);
  local_res10 = 0;
  piVar2 = (int *)FUN_18019a420();
  if (piVar2 == (int *)0x0) {
    uVar4 = CONCAT44(uVar5,0x6e);
  }
  else {
    if (*(undefined **)(param_2 + 0x10) == &DAT_180334b00) {
      iVar1 = FUN_1801e1c60();
    }
    else {
      iVar1 = FUN_1801e1c40(lVar3,piVar2 + 2);
    }
    *piVar2 = iVar1;
    if (iVar1 < 1) {
      uVar4 = CONCAT44(uVar5,0x73);
    }
    else {
      lVar3 = FUN_1801dc120(*(undefined8 *)(lVar3 + 0x20),0);
      if (lVar3 == 0) goto LAB_1801faacb;
      iVar1 = FUN_1801bc6b0(lVar3,&local_res10);
      FUN_1801bc3c0(lVar3);
      if (0 < iVar1) {
        uVar6 = FUN_1801b9550(**(undefined4 **)(param_2 + 0x10));
        iVar1 = FUN_1801a2350(param_1,uVar6,0x10,piVar2,local_res10,iVar1);
        if (iVar1 != 0) {
          return 1;
        }
        goto LAB_1801faacb;
      }
      uVar4 = CONCAT44(uVar5,0x81);
    }
  }
  FUN_1801a70c0(5,0x6d,0x41,"crypto\\dh\\dh_ameth.c",uVar4,uVar6);
LAB_1801faacb:
  FUN_180195e10(local_res10,"crypto\\dh\\dh_ameth.c",0x8a);
  FUN_18019a3a0(piVar2);
  return 0;
}



// ===== FUN_1801fabb0 @ 1801fabb0 (size 357)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fabb0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x1801fabc5;
  lVar2 = 0;
  lVar3 = 0;
  iVar1 = FUN_1801d5580(0,local_18,local_res20,&local_20,param_2);
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_1801a1e10(0,local_res18,&local_10,local_20);
  if ((local_res18[0] == 0x10) && (lVar2 = FUN_1801bc630(0,local_18,local_res20[0]), lVar2 != 0)) {
    local_28 = *(undefined8 *)(local_10 + 2);
    if (*(undefined **)(param_1 + 0x10) == &DAT_180334b00) {
      lVar3 = FUN_1801e1b20();
    }
    else {
      lVar3 = FUN_1801e1b00(0,&local_28,*local_10);
    }
    if (lVar3 == 0) goto LAB_1801facd1;
    lVar4 = FUN_180198d60();
    *(longlong *)(lVar3 + 0x28) = lVar4;
    if ((lVar4 != 0) && (lVar4 = FUN_1801dc100(lVar2,lVar4), lVar4 != 0)) {
      iVar1 = FUN_1801cb950(lVar3);
      if (iVar1 != 0) {
        FUN_18019dbd0(param_1,**(undefined4 **)(param_1 + 0x10),lVar3);
        FUN_18019a030(lVar2);
        return 1;
      }
      goto LAB_1801facf3;
    }
    uVar6 = CONCAT44(uVar7,0xb5);
    uVar5 = 0x6a;
  }
  else {
LAB_1801facd1:
    uVar6 = CONCAT44(uVar7,0xc3);
    uVar5 = 0x72;
  }
  FUN_1801a70c0(5,0x6e,uVar5,"crypto\\dh\\dh_ameth.c",uVar6);
LAB_1801facf3:
  FUN_18019f2e0(lVar3);
  FUN_18019a030(lVar2);
  return 0;
}



// ===== FUN_1801fad20 @ 1801fad20 (size 342)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fad20(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_res18[0] = 0;
  piVar2 = (int *)FUN_18019a420();
  if (piVar2 == (int *)0x0) {
    uVar4 = CONCAT44(uVar5,0xd4);
LAB_1801fad5a:
    uVar5 = 0x41;
  }
  else {
    if (*(undefined **)(param_2 + 0x10) == &DAT_180334b00) {
      iVar1 = FUN_1801e1c60();
    }
    else {
      iVar1 = FUN_1801e1c40(*(undefined8 *)(param_2 + 0x28),piVar2 + 2);
    }
    *piVar2 = iVar1;
    if (iVar1 < 1) {
      uVar4 = CONCAT44(uVar5,0xda);
      goto LAB_1801fad5a;
    }
    piVar2[1] = 0x10;
    lVar3 = FUN_1801dc120(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28),0);
    if (lVar3 != 0) {
      uVar5 = FUN_1801bc6b0(lVar3,local_res18);
      FUN_18019a030(lVar3);
      uVar4 = FUN_1801b9550(**(undefined4 **)(param_2 + 0x10));
      iVar1 = FUN_1801d5600(param_1,uVar4,0,0x10,piVar2,local_res18[0],uVar5);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_1801fae2d;
    }
    uVar4 = CONCAT44(uVar5,0xe3);
    uVar5 = 0x6a;
  }
  FUN_1801a70c0(5,0x6f,uVar5,"crypto\\dh\\dh_ameth.c",uVar4);
LAB_1801fae2d:
  FUN_180195e10(local_res18[0],"crypto\\dh\\dh_ameth.c",0xf3);
  FUN_18019a3a0(piVar2);
  FUN_18019a030(0);
  return 0;
}



// ===== FUN_1801fae80 @ 1801fae80 (size 119)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fae80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801fae8c;
  if (*(undefined **)(param_1 + 0x10) == &DAT_180334b00) {
    lVar1 = FUN_1801e1b20(0);
  }
  else {
    lVar1 = FUN_1801e1b00(0);
  }
  if (lVar1 == 0) {
    FUN_1801a70c0(5,0x6b,5,"crypto\\dh\\dh_ameth.c",0xff,uVar2);
    return 0;
  }
  FUN_18019dbd0(param_1,**(undefined4 **)(param_1 + 0x10),lVar1);
  return 1;
}



// ===== FUN_1801fafa0 @ 1801fafa0 (size 142)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fafa0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_180198550(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8),
                        *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if ((iVar1 != 0) ||
     (iVar1 = FUN_180198550(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),
                            *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10)), iVar1 != 0)) {
    return 0;
  }
  if ((*(undefined **)(param_1 + 0x10) == &DAT_180334b00) &&
     (iVar1 = FUN_180198550(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40),
                            *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x40)), iVar1 != 0)) {
    return 0;
  }
  return 1;
}



// ===== FUN_1801fb030 @ 1801fb030 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801fb030(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = FUN_18019f420();
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_1801fc000(lVar1,*(undefined8 *)(param_2 + 0x28),
                *(undefined **)(param_2 + 0x10) == &DAT_180334b00);
  return;
}



// ===== FUN_1801fb0c0 @ 1801fb0c0 (size 167)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fb0c0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_180198550(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8),
                        *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8));
  if ((iVar1 == 0) &&
     (iVar1 = FUN_180198550(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),
                            *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10)), iVar1 == 0)) {
    if ((*(undefined **)(param_1 + 0x10) == &DAT_180334b00) &&
       (iVar1 = FUN_180198550(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40),
                              *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x40)), iVar1 != 0)) {
      return 0;
    }
    iVar1 = FUN_180198550(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x20),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20));
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801fb1d0 @ 1801fb1d0 (size 356)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801fb1d0(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  longlong local_18;
  longlong local_10;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  local_10 = 0x1801fb1dc;
  if (param_2 != 7) {
    if (param_2 == 8) {
      *param_4 = 1;
      return 1;
    }
    return 0xfffffffe;
  }
  if (param_3 != 1) {
    if (param_3 == 0) {
      uVar4 = FUN_1801fb3b0(param_4);
      return uVar4;
    }
    return 0xfffffffe;
  }
  lVar2 = FUN_180231a20(param_4);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_1800b7fa0(lVar2);
  if (lVar3 == 0) {
    uVar5 = 0;
    iVar1 = FUN_180231ed0(param_4,&local_18,&local_10,0,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (local_18 == 0) {
      return 0;
    }
    if (local_10 == 0) {
      return 0;
    }
    iVar1 = FUN_1801fb7c0(lVar2);
    if (iVar1 == 0) {
      FUN_1801a70c0(5,0x72,0x6f,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar5,0x2fd));
      return 0;
    }
  }
  iVar1 = FUN_1801fb9a0(lVar2,param_4);
  if (iVar1 == 0) {
    FUN_1801a70c0(5,0x72,0x71,"crypto\\dh\\dh_ameth.c",CONCAT44(uVar5,0x303));
    return 0;
  }
  return 1;
}



