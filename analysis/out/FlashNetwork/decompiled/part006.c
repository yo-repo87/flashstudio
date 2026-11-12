// ===== FUN_18019fed0 @ 18019fed0 (size 95)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019fed0(longlong param_1)

{
  int iVar1;
  undefined1 local_res8 [32];
  int local_28 [2];
  undefined1 *local_20;
  undefined8 uStack_8;
  
  uStack_8 = 0x18019feda;
  iVar1 = FUN_180198b90(*(undefined8 *)(param_1 + 0x10));
  local_28[1] = 2;
  local_res8[0] = 0xff;
  local_28[0] = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  local_20 = local_res8;
  iVar1 = FUN_1801bc6b0(local_28,0);
  FUN_18019a830(1,iVar1 * 2,0x10);
  return;
}



// ===== FUN_18019ff70 @ 18019ff70 (size 81)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019ff70(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      FUN_1801a2830(*(undefined8 *)(param_1 + 2));
    }
    else if (*param_1 == 2) {
      FUN_1801cd2f0(*(undefined8 *)(param_1 + 2));
    }
  }
  FUN_180195e10(param_1,"crypto\\x509\\x509_lu.c",0x1d7);
  return;
}



// ===== FUN_18019ffd0 @ 18019ffd0 (size 89)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_18019ffd0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_180196100(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_1801a70c0(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  return puVar1;
}



// ===== FUN_1801a0030 @ 1801a0030 (size 382)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a0030(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int local_res8 [2];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1801add90(*(undefined8 *)(lVar1 + 0x90));
    iVar3 = FUN_1801a0c60(*(undefined8 *)(lVar1 + 8),1,param_2,local_res8);
    if (-1 < iVar3) {
LAB_1801a00fc:
      uVar6 = FUN_1801957e0();
      iVar7 = 0;
      if (0 < local_res8[0]) {
        do {
          lVar5 = FUN_180195ae0(*(undefined8 *)(lVar1 + 8),iVar3);
          uVar2 = *(undefined8 *)(lVar5 + 8);
          iVar4 = FUN_1801a2c20(uVar2);
          if (iVar4 == 0) {
            FUN_1801ade50(*(undefined8 *)(lVar1 + 0x90));
LAB_1801a019b:
            FUN_1801958f0(uVar6,FUN_1801a2830);
            return 0;
          }
          iVar4 = FUN_180195990(uVar6,uVar2);
          if (iVar4 == 0) {
            FUN_1801ade50(*(undefined8 *)(lVar1 + 0x90));
            FUN_1801a2830(uVar2);
            goto LAB_1801a019b;
          }
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar7 < local_res8[0]);
      }
      FUN_1801ade50(*(undefined8 *)(lVar1 + 0x90));
      return uVar6;
    }
    lVar5 = FUN_18019ffd0();
    FUN_1801ade50(*(undefined8 *)(lVar1 + 0x90));
    if (lVar5 != 0) {
      iVar3 = FUN_1801a05c0(param_1,1,param_2,lVar5);
      FUN_18019ff70(lVar5);
      if (iVar3 != 0) {
        FUN_1801add90(*(undefined8 *)(lVar1 + 0x90));
        iVar3 = FUN_1801a0c60(*(undefined8 *)(lVar1 + 8),1,param_2,local_res8);
        if (-1 < iVar3) goto LAB_1801a00fc;
        FUN_1801ade50(*(undefined8 *)(lVar1 + 0x90));
      }
    }
  }
  return 0;
}



// ===== FUN_1801a01b0 @ 1801a01b0 (size 486)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a01b0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  undefined8 uVar8;
  
  uVar8 = 0x1801a01ce;
  lVar4 = FUN_1801957e0();
  piVar5 = (int *)FUN_180196100(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (piVar5 == (int *)0x0) {
    FUN_1801a70c0(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7,uVar8);
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = 0;
  }
  iVar7 = 0;
  lVar1 = *param_1;
  if (lVar4 == 0) {
LAB_1801a0339:
    if (piVar5 != (int *)0x0) {
      if (*piVar5 == 1) {
        FUN_1801a2830(*(undefined8 *)(piVar5 + 2));
      }
      else if (*piVar5 == 2) {
        FUN_1801cd2f0(*(undefined8 *)(piVar5 + 2));
      }
    }
  }
  else if (piVar5 != (int *)0x0) {
    if ((lVar1 != 0) && (iVar2 = FUN_1801a05c0(param_1,2,param_2,piVar5), iVar2 != 0)) {
      FUN_18019ff70(piVar5);
      FUN_1801add90(*(undefined8 *)(lVar1 + 0x90));
      iVar2 = FUN_1801a0c60(*(undefined8 *)(lVar1 + 8),2,param_2,local_res8);
      if (-1 < iVar2) {
        if (0 < local_res8[0]) {
          do {
            lVar6 = FUN_180195ae0(*(undefined8 *)(lVar1 + 8),iVar2);
            uVar8 = *(undefined8 *)(lVar6 + 8);
            iVar3 = FUN_1801cd5c0(uVar8);
            if (iVar3 == 0) {
              FUN_1801ade50(*(undefined8 *)(lVar1 + 0x90));
              FUN_1801958f0(lVar4,FUN_1801cd2f0);
              return 0;
            }
            iVar3 = FUN_180195990(lVar4,uVar8);
            if (iVar3 == 0) {
              FUN_1801ade50(*(undefined8 *)(lVar1 + 0x90));
              FUN_1801cd2f0(uVar8);
              FUN_1801958f0(lVar4,FUN_1801cd2f0);
              return 0;
            }
            iVar7 = iVar7 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar7 < local_res8[0]);
        }
        FUN_1801ade50(*(undefined8 *)(lVar1 + 0x90));
        return lVar4;
      }
      FUN_1801ade50(*(undefined8 *)(lVar1 + 0x90));
      goto LAB_1801a0373;
    }
    goto LAB_1801a0339;
  }
  FUN_180195e10(piVar5,"crypto\\x509\\x509_lu.c",0x1d7);
LAB_1801a0373:
  FUN_180195650(lVar4);
  return 0;
}



// ===== FUN_1801a03a0 @ 1801a03a0 (size 543)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801a03a0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1801a03b7;
  puVar5 = (undefined4 *)FUN_180196100(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (puVar5 == (undefined4 *)0x0) {
    FUN_1801a70c0(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7,uVar9);
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
  }
  lVar1 = *param_2;
  if (puVar5 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  *param_1 = 0;
  uVar9 = FUN_1801a3490(param_3);
  iVar3 = FUN_1801a05c0(param_2,1,uVar9,puVar5);
  if (iVar3 == 1) {
    iVar3 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(puVar5 + 2));
    if ((iVar3 != 0) &&
       (iVar3 = FUN_1801d17e0(param_2,*(undefined8 *)(puVar5 + 2),0xffffffff), iVar3 != 0)) {
      *param_1 = *(longlong *)(puVar5 + 2);
      iVar3 = FUN_1801a2c20();
      uVar8 = 1;
      if (iVar3 == 0) {
        *param_1 = 0;
        uVar8 = 0xffffffff;
      }
      FUN_18019ff70(puVar5);
      return uVar8;
    }
    FUN_18019ff70(puVar5);
    if (lVar1 != 0) {
      uVar8 = 0;
      FUN_1801add90(*(undefined8 *)(lVar1 + 0x90));
      iVar3 = FUN_1801a0c60(*(undefined8 *)(lVar1 + 8),1,uVar9);
      if ((iVar3 != -1) && (iVar4 = FUN_1801958b0(*(undefined8 *)(lVar1 + 8)), iVar3 < iVar4)) {
        do {
          piVar6 = (int *)FUN_180195ae0(*(undefined8 *)(lVar1 + 8),iVar3);
          if (*piVar6 != 1) break;
          uVar7 = FUN_1801a34d0(*(undefined8 *)(piVar6 + 2));
          iVar4 = FUN_1801a2de0(uVar9,uVar7);
          if (iVar4 != 0) break;
          iVar4 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(piVar6 + 2));
          if (iVar4 != 0) {
            lVar2 = *(longlong *)(piVar6 + 2);
            uVar8 = 1;
            *param_1 = lVar2;
            iVar4 = FUN_1801d17e0(param_2,lVar2,0xffffffff);
            if (iVar4 != 0) break;
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_1801958b0(*(undefined8 *)(lVar1 + 8));
        } while (iVar3 < iVar4);
      }
      if ((*param_1 != 0) && (iVar3 = FUN_1801a2c20(), iVar3 == 0)) {
        *param_1 = 0;
        uVar8 = 0xffffffff;
      }
      FUN_1801ade50(*(undefined8 *)(lVar1 + 0x90));
      return uVar8;
    }
  }
  else {
    FUN_18019ff70(puVar5);
  }
  return 0;
}



// ===== FUN_1801a05c0 @ 1801a05c0 (size 325)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a05c0(longlong *param_1,int param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int local_28 [2];
  undefined8 local_20;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
LAB_1801a06ea:
    uVar6 = 0;
  }
  else {
    iVar7 = 0;
    local_28[0] = 0;
    local_20 = 0;
    FUN_1801add90(*(undefined8 *)(lVar1 + 0x90));
    uVar6 = *(undefined8 *)(lVar1 + 8);
    iVar3 = FUN_1801a0c60(uVar6,param_2,param_3,0);
    if (iVar3 == -1) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_180195ae0(uVar6,iVar3);
    }
    FUN_1801ade50(*(undefined8 *)(lVar1 + 0x90));
    if ((piVar4 == (int *)0x0) || (param_2 == 2)) {
      iVar3 = FUN_1801958b0(*(undefined8 *)(lVar1 + 0x10));
      if (0 < iVar3) {
        do {
          lVar5 = FUN_180195ae0(*(undefined8 *)(lVar1 + 0x10),iVar7);
          if (((*(longlong *)(lVar5 + 8) != 0) &&
              (pcVar2 = *(code **)(*(longlong *)(lVar5 + 8) + 0x30), pcVar2 != (code *)0x0)) &&
             (*(int *)(lVar5 + 4) == 0)) {
            iVar3 = (*pcVar2)(lVar5,param_2,param_3,local_28);
            if (iVar3 != 0) {
              piVar4 = local_28;
              goto LAB_1801a06ab;
            }
          }
          iVar7 = iVar7 + 1;
          iVar3 = FUN_1801958b0(*(undefined8 *)(lVar1 + 0x10));
        } while (iVar7 < iVar3);
      }
      if (piVar4 == (int *)0x0) goto LAB_1801a06ea;
    }
LAB_1801a06ab:
    if (*piVar4 == 1) {
      iVar3 = FUN_1801a2c20(*(undefined8 *)(piVar4 + 2));
LAB_1801a06d2:
      if (iVar3 == 0) goto LAB_1801a06ea;
    }
    else if (*piVar4 == 2) {
      iVar3 = FUN_1801cd5c0(*(undefined8 *)(piVar4 + 2));
      goto LAB_1801a06d2;
    }
    *param_4 = *piVar4;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(piVar4 + 2);
    uVar6 = 1;
  }
  return uVar6;
}



// ===== FUN_1801a0710 @ 1801a0710 (size 72)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a0710(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1801a0d90(param_1,param_2,0);
  if (iVar1 == 0) {
    FUN_1801a70c0(0xb,0x7c,0x41,"crypto\\x509\\x509_lu.c",0x173);
    return 0;
  }
  return 1;
}



// ===== FUN_1801a0760 @ 1801a0760 (size 73)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a0760(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1801a0d90(param_1,param_2,1);
  if (iVar1 == 0) {
    FUN_1801a70c0(0xb,0x7d,0x41,"crypto\\x509\\x509_lu.c",0x17c);
    return 0;
  }
  return 1;
}



// ===== FUN_1801a07b0 @ 1801a07b0 (size 354)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a07b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801a07ca;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  iVar5 = 0;
  iVar3 = FUN_1801958b0(uVar1);
  if (0 < iVar3) {
    do {
      lVar4 = FUN_180195ae0(uVar1,iVar5);
      if (param_2 == *(longlong *)(lVar4 + 8)) {
        return lVar4;
      }
      iVar5 = iVar5 + 1;
      iVar3 = FUN_1801958b0(uVar1);
    } while (iVar5 < iVar3);
  }
  lVar4 = FUN_180196100(0x20,"crypto\\x509\\x509_lu.c");
  if (lVar4 == 0) {
    FUN_1801a70c0(0xb,0x9b,0x41,"crypto\\x509\\x509_lu.c",0x17,uVar6);
  }
  else {
    *(longlong *)(lVar4 + 8) = param_2;
    if ((*(code **)(param_2 + 8) == (code *)0x0) ||
       (iVar3 = (**(code **)(param_2 + 8))(lVar4), iVar3 != 0)) {
      *(longlong *)(lVar4 + 0x18) = param_1;
      iVar3 = FUN_180195990(*(undefined8 *)(param_1 + 0x10),lVar4);
      if (iVar3 != 0) {
        return lVar4;
      }
      FUN_1801a70c0(0xb,0x9d,0x41,"crypto\\x509\\x509_lu.c",0x10d);
      if ((*(longlong *)(lVar4 + 8) != 0) &&
         (pcVar2 = *(code **)(*(longlong *)(lVar4 + 8) + 0x10), pcVar2 != (code *)0x0)) {
        (*pcVar2)(lVar4);
      }
      FUN_180195e10(lVar4,"crypto\\x509\\x509_lu.c",0x29);
      return 0;
    }
    FUN_180195e10(lVar4,"crypto\\x509\\x509_lu.c",0x1d);
  }
  FUN_1801a70c0(0xb,0x9d,0x41,"crypto\\x509\\x509_lu.c",0x105);
  return 0;
}



// ===== FUN_1801a0920 @ 1801a0920 (size 282)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a0920(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x88);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 2) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      iVar6 = 0;
      iVar3 = FUN_1801958b0(uVar2);
      if (0 < iVar3) {
        do {
          lVar4 = FUN_180195ae0(uVar2,iVar6);
          lVar5 = *(longlong *)(lVar4 + 8);
          if (lVar5 != 0) {
            if (*(code **)(lVar5 + 0x20) != (code *)0x0) {
              (**(code **)(lVar5 + 0x20))(lVar4);
              lVar5 = *(longlong *)(lVar4 + 8);
            }
            if ((lVar5 != 0) && (*(code **)(lVar5 + 0x10) != (code *)0x0)) {
              (**(code **)(lVar5 + 0x10))(lVar4);
            }
          }
          FUN_180195e10(lVar4,"crypto\\x509\\x509_lu.c",0x29);
          iVar6 = iVar6 + 1;
          iVar3 = FUN_1801958b0(uVar2);
        } while (iVar6 < iVar3);
      }
      FUN_180195650(uVar2);
      FUN_1801958f0(*(undefined8 *)(param_1 + 8),FUN_18019ff70);
      FUN_1801ae0a0(4,param_1,param_1 + 0x80);
      FUN_1801cc640(*(undefined8 *)(param_1 + 0x18));
      FUN_1801adcf0(*(undefined8 *)(param_1 + 0x90));
      FUN_180195e10(param_1,"crypto\\x509\\x509_lu.c",0xe6);
    }
  }
  return;
}



// ===== FUN_1801a0a60 @ 1801a0a60 (size 316)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_1801a0a60(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801a0a6c;
  puVar3 = (undefined4 *)FUN_180196100(0x98,"crypto\\x509\\x509_lu.c",0xa2);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_1801a70c0(0xb,0x9e,0x41,"crypto\\x509\\x509_lu.c",0xa5,uVar5);
    return (undefined4 *)0x0;
  }
  lVar4 = FUN_1801957a0(FUN_1801a0c00);
  *(longlong *)(puVar3 + 2) = lVar4;
  if (lVar4 == 0) {
    uVar1 = 0xa9;
  }
  else {
    *puVar3 = 1;
    lVar4 = FUN_1801957e0();
    *(longlong *)(puVar3 + 4) = lVar4;
    if (lVar4 == 0) {
      uVar1 = 0xae;
    }
    else {
      lVar4 = FUN_1801cca70();
      *(longlong *)(puVar3 + 6) = lVar4;
      if (lVar4 == 0) {
        uVar1 = 0xb3;
      }
      else {
        iVar2 = FUN_1801ae440(4,puVar3,puVar3 + 0x20);
        if (iVar2 == 0) {
          uVar1 = 0xb7;
        }
        else {
          lVar4 = FUN_1801add30();
          *(longlong *)(puVar3 + 0x24) = lVar4;
          if (lVar4 != 0) {
            puVar3[0x22] = 1;
            return puVar3;
          }
          uVar1 = 0xbd;
        }
      }
    }
  }
  FUN_1801a70c0(0xb,0x9e,0x41,"crypto\\x509\\x509_lu.c",uVar1,uVar5);
  FUN_1801cc640(*(undefined8 *)(puVar3 + 6));
  FUN_180195650(*(undefined8 *)(puVar3 + 2));
  FUN_180195650(*(undefined8 *)(puVar3 + 4));
  FUN_180195e10(puVar3,"crypto\\x509\\x509_lu.c",200);
  return (undefined4 *)0x0;
}



// ===== FUN_1801a0c00 @ 1801a0c00 (size 92)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801a0c00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  
  piVar2 = (int *)*param_2;
  piVar3 = (int *)*param_1;
  iVar1 = *piVar3;
  uVar5 = iVar1 - *piVar2;
  if (uVar5 == 0) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 1) {
      uVar5 = FUN_1801a34e0(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar2 + 2),piVar3,piVar2,
                            0x1801a0c0a);
    }
    else if (iVar1 == 2) {
      uVar4 = FUN_1801a2d90(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar2 + 2));
      return uVar4;
    }
  }
  return (ulonglong)uVar5;
}



// ===== FUN_1801a0c60 @ 1801a0c60 (size 293)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801a0c60(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_298 [32];
  int local_278 [2];
  undefined1 *local_270;
  undefined1 local_258 [24];
  undefined8 local_240;
  undefined1 local_178 [72];
  undefined8 local_130;
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_298;
  if (param_2 == 0) {
    return -1;
  }
  if (param_2 == 1) {
    local_270 = local_178;
    local_130 = param_3;
  }
  else if (param_2 == 2) {
    local_270 = local_258;
    local_240 = param_3;
  }
  local_278[0] = param_2;
  iVar1 = FUN_180195630(param_1,local_278);
  if ((-1 < iVar1) && (param_4 != (int *)0x0)) {
    iVar4 = iVar1 + 1;
    *param_4 = 1;
    iVar2 = FUN_1801958b0(param_1);
    if (iVar4 < iVar2) {
      do {
        piVar3 = (int *)FUN_180195ae0(param_1,iVar4);
        iVar2 = *piVar3;
        if (iVar2 != local_278[0]) {
          return iVar1;
        }
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            iVar2 = FUN_1801a34e0(*(undefined8 *)(piVar3 + 2),local_270);
          }
          else {
            if (iVar2 != 2) goto LAB_1801a0d42;
            iVar2 = FUN_1801a2d90(*(undefined8 *)(piVar3 + 2),local_270);
          }
          if (iVar2 != 0) {
            return iVar1;
          }
        }
LAB_1801a0d42:
        *param_4 = *param_4 + 1;
        iVar4 = iVar4 + 1;
        iVar2 = FUN_1801958b0(param_1);
      } while (iVar4 < iVar2);
    }
  }
  return iVar1;
}



// ===== FUN_1801a0d90 @ 1801a0d90 (size 435)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801a0d90(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
  iVar5 = 0;
  if (param_2 == 0) {
    return false;
  }
  piVar6 = (int *)FUN_18019ffd0();
  if (piVar6 == (int *)0x0) {
    return false;
  }
  *piVar6 = (param_3 != 0) + 1;
  *(longlong *)(piVar6 + 2) = param_2;
  if (*piVar6 == 1) {
    iVar2 = FUN_1801a2c20(param_2);
LAB_1801a0df6:
    if (iVar2 == 0) {
      *piVar6 = 0;
      FUN_18019ff70(piVar6);
      return false;
    }
  }
  else if (*piVar6 == 2) {
    iVar2 = FUN_1801cd5c0(param_2);
    goto LAB_1801a0df6;
  }
  FUN_1801add90(*(undefined8 *)(param_1 + 0x90));
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar2 = FUN_180195630(uVar1,piVar6);
  if (-1 < iVar2) {
    if (*piVar6 - 1U < 2) {
      iVar3 = FUN_1801958b0(uVar1);
      for (; iVar2 < iVar3; iVar2 = iVar2 + 1) {
        piVar7 = (int *)FUN_180195ae0(uVar1,iVar2);
        iVar4 = *piVar7;
        if (iVar4 != *piVar6) break;
        if (iVar4 != 0) {
          if (iVar4 == 1) {
            iVar4 = FUN_1801a34e0(*(undefined8 *)(piVar7 + 2),*(undefined8 *)(piVar6 + 2));
          }
          else {
            if (iVar4 != 2) goto LAB_1801a0ec1;
            iVar4 = FUN_1801a2d90(*(undefined8 *)(piVar7 + 2),*(undefined8 *)(piVar6 + 2));
          }
          if (iVar4 != 0) break;
        }
LAB_1801a0ec1:
        if (*piVar6 == 1) {
          iVar4 = FUN_1801a32c0(*(undefined8 *)(piVar7 + 2),*(undefined8 *)(piVar6 + 2));
        }
        else {
          if (*piVar6 != 2) goto LAB_1801a0e5c;
          iVar4 = FUN_1801a2db0(*(undefined8 *)(piVar7 + 2),*(undefined8 *)(piVar6 + 2));
        }
        if (iVar4 == 0) goto LAB_1801a0e5c;
      }
    }
    else {
      piVar7 = (int *)FUN_180195ae0(uVar1,iVar2);
LAB_1801a0e5c:
      if (piVar7 != (int *)0x0) {
        bVar8 = true;
        goto LAB_1801a0f0d;
      }
    }
  }
  iVar5 = FUN_180195990(*(undefined8 *)(param_1 + 8),piVar6);
  bVar8 = iVar5 != 0;
LAB_1801a0f0d:
  FUN_1801ade50(*(undefined8 *)(param_1 + 0x90));
  if (iVar5 == 0) {
    FUN_18019ff70(piVar6);
  }
  return bVar8;
}



// ===== FUN_1801a0f50 @ 1801a0f50 (size 195)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801a0f50(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801a0f60;
  bVar4 = false;
  if (param_2 == 1) {
    if (param_4 == 3) {
      uVar2 = FUN_1801d19f0();
      lVar3 = FUN_1801d1970(uVar2);
      if (lVar3 == 0) {
        lVar3 = FUN_1801d19e0();
      }
      iVar1 = FUN_1801a1030(param_1,lVar3,1);
      bVar4 = iVar1 != 0;
      if (!bVar4) {
        FUN_1801a70c0(0xb,0x65,0x68,"crypto\\x509\\by_file.c",0x3c,uVar5);
        return false;
      }
    }
    else {
      if (param_4 == 1) {
        iVar1 = FUN_1801a1030(param_1,param_3,1);
        return iVar1 != 0;
      }
      iVar1 = FUN_1801a11b0(param_1,param_3,param_4);
      bVar4 = iVar1 != 0;
    }
  }
  return bVar4;
}



// ===== FUN_1801a1030 @ 1801a1030 (size 382)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801a1030(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1801a1041;
  uVar6 = 0;
  if (param_3 != 1) {
    uVar2 = FUN_1801a11b0();
    return uVar2;
  }
  lVar3 = FUN_180196720(param_2,&DAT_18030be14);
  if (lVar3 == 0) {
    FUN_1801a70c0(0xb,0x84,2,"crypto\\x509\\by_file.c",199,uVar8);
    return 0;
  }
  lVar4 = FUN_1801a3f50(lVar3,0,0,&PTR_1802ead18);
  FUN_18018d110(lVar3);
  if (lVar4 == 0) {
    FUN_1801a70c0(0xb,0x84,9,"crypto\\x509\\by_file.c",0xcd,uVar8);
    return 0;
  }
  iVar7 = 0;
  iVar1 = FUN_1801958b0(lVar4);
  if (0 < iVar1) {
    do {
      plVar5 = (longlong *)FUN_180195ae0(lVar4,iVar7);
      if (*plVar5 != 0) {
        iVar1 = FUN_1801a0710(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 == 0) goto LAB_1801a1182;
        uVar6 = uVar6 + 1;
      }
      if (plVar5[1] != 0) {
        iVar1 = FUN_1801a0760(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 == 0) goto LAB_1801a1182;
        uVar6 = uVar6 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar1 = FUN_1801958b0(lVar4);
    } while (iVar7 < iVar1);
    if (uVar6 != 0) goto LAB_1801a1182;
  }
  FUN_1801a70c0(0xb,0x84,0x88,"crypto\\x509\\by_file.c",0xdf);
LAB_1801a1182:
  FUN_1801958f0(lVar4,FUN_1801a2a10);
  return (ulonglong)uVar6;
}



// ===== FUN_1801a11b0 @ 1801a11b0 (size 421)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801a11b0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x1801a11d4;
  iVar6 = 0;
  iVar7 = 0;
  lVar5 = 0;
  uVar3 = FUN_1801968f0();
  lVar4 = FUN_18018d7c0(uVar3);
  if ((lVar4 == 0) || (iVar1 = FUN_18018cf90(lVar4,0x6c,3,param_2), iVar1 < 1)) {
    uVar9 = 0x54;
    uVar8 = 2;
  }
  else if (param_3 == 1) {
    lVar5 = FUN_1801a4500(lVar4,0,0,&PTR_1802ead18);
    while (lVar5 != 0) {
      iVar1 = FUN_1801a0710(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar1 == 0) goto LAB_1801a1324;
      iVar7 = iVar7 + 1;
      FUN_1801a2830(lVar5);
      lVar5 = FUN_1801a4500(lVar4,0,0,&PTR_1802ead18);
    }
    uVar2 = FUN_1801a6f70();
    if (((uVar2 & 0xfff) == 0x6c) && (0 < iVar7)) {
      FUN_1801a64b0();
LAB_1801a12de:
      iVar6 = iVar7;
      if (iVar7 != 0) goto LAB_1801a1324;
      uVar9 = 0x7c;
      uVar8 = 0x87;
    }
    else {
      uVar9 = 0x61;
      uVar8 = 9;
    }
  }
  else if (param_3 == 2) {
    lVar5 = FUN_1801a1d40(lVar4,0);
    if (lVar5 != 0) {
      iVar7 = FUN_1801a0710(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar7 == 0) goto LAB_1801a1324;
      goto LAB_1801a12de;
    }
    uVar9 = 0x70;
    uVar8 = 0xd;
  }
  else {
    uVar9 = 0x78;
    uVar8 = 100;
  }
  FUN_1801a70c0(0xb,0x6f,uVar8,"crypto\\x509\\by_file.c",uVar9,uVar10);
LAB_1801a1324:
  FUN_1801a2830(lVar5);
  FUN_18018d110(lVar4);
  return iVar6;
}



// ===== FUN_1801a1360 @ 1801a1360 (size 421)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801a1360(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x1801a1384;
  iVar6 = 0;
  iVar7 = 0;
  lVar5 = 0;
  uVar3 = FUN_1801968f0();
  lVar4 = FUN_18018d7c0(uVar3);
  if ((lVar4 == 0) || (iVar1 = FUN_18018cf90(lVar4,0x6c,3,param_2), iVar1 < 1)) {
    uVar9 = 0x8d;
    uVar8 = 2;
  }
  else if (param_3 == 1) {
    lVar5 = FUN_1801d1a00(lVar4,0,0,&PTR_1802ead18);
    while (lVar5 != 0) {
      iVar1 = FUN_1801a0760(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar1 == 0) goto LAB_1801a14d4;
      iVar7 = iVar7 + 1;
      FUN_1801cd2f0(lVar5);
      lVar5 = FUN_1801d1a00(lVar4,0,0,&PTR_1802ead18);
    }
    uVar2 = FUN_1801a6f70();
    if (((uVar2 & 0xfff) == 0x6c) && (0 < iVar7)) {
      FUN_1801a64b0();
LAB_1801a148e:
      iVar6 = iVar7;
      if (iVar7 != 0) goto LAB_1801a14d4;
      uVar9 = 0xb5;
      uVar8 = 0x89;
    }
    else {
      uVar9 = 0x9a;
      uVar8 = 9;
    }
  }
  else if (param_3 == 2) {
    lVar5 = FUN_1801a1d00(lVar4,0);
    if (lVar5 != 0) {
      iVar7 = FUN_1801a0760(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar7 == 0) goto LAB_1801a14d4;
      goto LAB_1801a148e;
    }
    uVar9 = 0xa9;
    uVar8 = 0xd;
  }
  else {
    uVar9 = 0xb1;
    uVar8 = 100;
  }
  FUN_1801a70c0(0xb,0x70,uVar8,"crypto\\x509\\by_file.c",uVar9,uVar10);
LAB_1801a14d4:
  FUN_1801cd2f0(lVar5);
  FUN_18018d110(lVar4);
  return iVar6;
}



// ===== FUN_1801a1510 @ 1801a1510 (size 198)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a1510(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801a1525;
  if (param_2 != 0) {
    uVar2 = FUN_1801a1020();
    lVar3 = FUN_1801a07b0(param_1,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_18019ff30(lVar3,1,param_2,1,0);
    if (iVar1 != 1) {
      return 0;
    }
  }
  if (param_3 == 0) {
    if (param_2 != 0) {
      return 1;
    }
  }
  else {
    uVar2 = FUN_1801d2060();
    lVar3 = FUN_1801a07b0(param_1,uVar2);
    if ((lVar3 != 0) && (iVar1 = FUN_18019ff30(lVar3,2,param_3,1,0,uVar4), iVar1 == 1)) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801a15e0 @ 1801a15e0 (size 144)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a15e0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801a15ec;
  uVar1 = FUN_1801a1020();
  lVar2 = FUN_1801a07b0(param_1,uVar1);
  if (lVar2 != 0) {
    FUN_18019ff30(lVar2,1,0,3,0,uVar3);
    uVar1 = FUN_1801d2060();
    lVar2 = FUN_1801a07b0(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_18019ff30(lVar2,2,0,3,0);
      FUN_1801a64b0();
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801a1670 @ 1801a1670 (size 655)

char * FUN_1801a1670(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "ok";
  case 1:
    return "unspecified certificate verification error";
  case 2:
    return "unable to get issuer certificate";
  case 3:
    return "unable to get certificate CRL";
  case 4:
    return "unable to decrypt certificate\'s signature";
  case 5:
    return "unable to decrypt CRL\'s signature";
  case 6:
    return "unable to decode issuer public key";
  case 7:
    return "certificate signature failure";
  case 8:
    return "CRL signature failure";
  case 9:
    return "certificate is not yet valid";
  case 10:
    return "certificate has expired";
  case 0xb:
    return "CRL is not yet valid";
  case 0xc:
    return "CRL has expired";
  case 0xd:
    return "format error in certificate\'s notBefore field";
  case 0xe:
    return "format error in certificate\'s notAfter field";
  case 0xf:
    return "format error in CRL\'s lastUpdate field";
  case 0x10:
    return "format error in CRL\'s nextUpdate field";
  case 0x11:
    return "out of memory";
  case 0x12:
    return "self signed certificate";
  case 0x13:
    return "self signed certificate in certificate chain";
  case 0x14:
    return "unable to get local issuer certificate";
  case 0x15:
    return "unable to verify the first certificate";
  case 0x16:
    return "certificate chain too long";
  case 0x17:
    return "certificate revoked";
  case 0x18:
    return "invalid CA certificate";
  case 0x19:
    return "path length constraint exceeded";
  case 0x1a:
    return "unsupported certificate purpose";
  case 0x1b:
    return "certificate not trusted";
  case 0x1c:
    return "certificate rejected";
  case 0x1d:
    return "subject issuer mismatch";
  case 0x1e:
    return "authority and subject key identifier mismatch";
  case 0x1f:
    return "authority and issuer serial number mismatch";
  case 0x20:
    return "key usage does not include certificate signing";
  case 0x21:
    return "unable to get CRL issuer certificate";
  case 0x22:
    return "unhandled critical extension";
  case 0x23:
    return "key usage does not include CRL signing";
  case 0x24:
    return "unhandled critical CRL extension";
  case 0x25:
    return "invalid non-CA certificate (has CA markings)";
  case 0x26:
    return "proxy path length constraint exceeded";
  case 0x27:
    return "key usage does not include digital signature";
  case 0x28:
    return "proxy certificates not allowed, please set the appropriate flag";
  case 0x29:
    return "invalid or inconsistent certificate extension";
  case 0x2a:
    return "invalid or inconsistent certificate policy extension";
  case 0x2b:
    return "no explicit policy";
  case 0x2c:
    return "Different CRL scope";
  case 0x2d:
    return "Unsupported extension feature";
  case 0x2e:
    return "RFC 3779 resource not subset of parent\'s resources";
  case 0x2f:
    return "permitted subtree violation";
  case 0x30:
    return "excluded subtree violation";
  case 0x31:
    return "name constraints minimum and maximum not supported";
  case 0x32:
    return "application verification failure";
  case 0x33:
    return "unsupported name constraint type";
  case 0x34:
    return "unsupported or invalid name constraint syntax";
  case 0x35:
    return "unsupported or invalid name syntax";
  case 0x36:
    return "CRL path validation error";
  case 0x37:
    return "Path Loop";
  case 0x38:
    return "Suite B: certificate version invalid";
  case 0x39:
    return "Suite B: invalid public key algorithm";
  case 0x3a:
    return "Suite B: invalid ECC curve";
  case 0x3b:
    return "Suite B: invalid signature algorithm";
  case 0x3c:
    return "Suite B: curve not allowed for this LOS";
  case 0x3d:
    return "Suite B: cannot sign P-384 with P-256";
  case 0x3e:
    return "Hostname mismatch";
  case 0x3f:
    return "Email address mismatch";
  case 0x40:
    return "IP address mismatch";
  case 0x41:
    return "No matching DANE TLSA records";
  case 0x42:
    return "EE certificate key too weak";
  case 0x43:
    return "CA certificate key too weak";
  case 0x44:
    return "CA signature digest algorithm too weak";
  case 0x45:
    return "Invalid certificate verification context";
  case 0x46:
    return "Issuer certificate lookup error";
  case 0x47:
    return "Certificate Transparency required, but no valid SCTs found";
  case 0x48:
    return "proxy subject name violation";
  case 0x49:
    return "OCSP verification needed";
  case 0x4a:
    return "OCSP verification failed";
  case 0x4b:
    return "OCSP unknown cert";
  default:
    return "unknown certificate verification error";
  case 0x4f:
    return "Certificate public key has explicit ECC parameters";
  }
}



// ===== FUN_1801a1a40 @ 1801a1a40 (size 151)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a1a40(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801a1a5a;
  lVar1 = FUN_18019db60();
  if ((param_2 == lVar1) && ((*(uint *)(param_1 + 0x7c) & 0x180) == 0x100)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    *param_3 = *(undefined8 *)(param_1 + 0xb0);
    param_3[1] = uVar3;
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0xc0);
    uVar3 = 1;
  }
  else {
    uVar2 = FUN_1801cd390();
    uVar3 = FUN_1801d5170(uVar2,param_2,param_1,param_3,param_4,uVar3);
  }
  return uVar3;
}



// ===== FUN_1801a1ae0 @ 1801a1ae0 (size 89)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a1ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801a1afa;
  uVar1 = FUN_1801be6b0();
  FUN_1801d5170(uVar1,param_2,param_1,param_3,param_4,uVar2);
  return;
}



// ===== FUN_1801a1b40 @ 1801a1b40 (size 154)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a1b40(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801a1b5a;
  lVar1 = FUN_18019db60();
  if ((param_2 == lVar1) && ((*(uint *)(param_1 + 0xd0) & 0x100100) == 0x100)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x128);
    *param_3 = *(undefined8 *)(param_1 + 0x120);
    param_3[1] = uVar3;
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x130);
    uVar3 = 1;
  }
  else {
    uVar2 = FUN_1801a28b0();
    uVar3 = FUN_1801d5170(uVar2,param_2,param_1,param_3,param_4,uVar3);
  }
  return uVar3;
}



// ===== FUN_1801a1be0 @ 1801a1be0 (size 107)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a1be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1801a23d0();
  if (piVar1 == (int *)0x0) {
    return;
  }
  FUN_18019cda0(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,param_3,param_4,param_2,0);
  return;
}



// ===== FUN_1801a1c50 @ 1801a1c50 (size 126)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a1c50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801a1c65;
  iVar1 = FUN_1801a1d90(param_1 + 0x80,param_1 + 0x20);
  if (iVar1 == 0) {
    uVar2 = FUN_1801a2630();
    uVar3 = FUN_1801d5210(uVar2,param_1 + 0x80,param_1 + 0x90,param_1,param_2,uVar3);
    return uVar3;
  }
  return 0;
}



// ===== FUN_1801a1d90 @ 1801a1d90 (size 86)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a1d90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1801bc240(*param_1,*param_2);
  if (iVar1 == 0) {
    if ((param_1[1] == 0) && (param_2[1] == 0)) {
      return;
    }
    FUN_1801d5810(param_1[1],param_2[1]);
  }
  return;
}



// ===== FUN_1801a1e70 @ 1801a1e70 (size 157)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801a1e70(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
LAB_1801a1ef6:
    uVar1 = 0;
  }
  else {
    if ((param_3 != -1) && (param_1[1] == 0)) {
      lVar2 = FUN_1801bc5a0();
      param_1[1] = lVar2;
      if (lVar2 == 0) goto LAB_1801a1ef6;
    }
    FUN_18019aa30(*param_1);
    *param_1 = param_2;
    if (param_3 != 0) {
      if (param_3 == -1) {
        FUN_1801bc580();
        param_1[1] = 0;
        return 1;
      }
      FUN_1801d5970(param_1[1],param_3,param_4);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// ===== FUN_1801a1f10 @ 1801a1f10 (size 166)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a1f10(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_2 + 0xc) & 8;
  uVar4 = 0xffffffff;
  if (uVar5 == 0) {
    uVar4 = 5;
  }
  uVar1 = FUN_18019a410(param_2);
  uVar2 = FUN_1801b9550(uVar1);
  if (param_1 != (undefined8 *)0x0) {
    if ((uVar5 == 0) && (param_1[1] == 0)) {
      lVar3 = FUN_1801bc5a0();
      param_1[1] = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
    FUN_18019aa30(*param_1);
    *param_1 = uVar2;
    if (uVar5 == 0) {
      FUN_1801d5970(param_1[1],uVar4,0);
    }
    else {
      FUN_1801bc580();
      param_1[1] = 0;
    }
  }
  return;
}



// ===== FUN_1801a2000 @ 1801a2000 (size 129)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a2000(int param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 == 3) {
    FUN_18019deb0(*(undefined8 *)(*param_2 + 0x10));
    return 1;
  }
  if (param_1 == 5) {
    lVar1 = *param_2;
    FUN_18019deb0(*(undefined8 *)(lVar1 + 0x10));
    *(undefined8 *)(lVar1 + 0x10) = 0;
    FUN_1801a7200();
    iVar2 = FUN_1801a2530(lVar1 + 0x10,lVar1);
    if (iVar2 == -1) {
      return 0;
    }
    FUN_1801a6fa0();
  }
  return 1;
}



// ===== FUN_1801a20b0 @ 1801a20b0 (size 207)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a20b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 8) == 0)) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    FUN_1801a2530(local_res8,param_1);
    lVar1 = local_res8[0];
    if (local_res8[0] != 0) {
      FUN_1801a70c0(0xb,0x77,0x44,"crypto\\x509\\x_pubkey.c",0xa2);
      FUN_18019deb0(lVar1);
      return 0;
    }
  }
  else {
    iVar2 = FUN_18019e860(lVar1);
    if (iVar2 != 0) {
      return lVar1;
    }
    FUN_1801a70c0(0xb,0xa1,0x44,"crypto\\x509\\x_pubkey.c",0xae);
  }
  return 0;
}



// ===== FUN_1801a2180 @ 1801a2180 (size 113)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a2180(longlong param_1)

{
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      return *(longlong *)(param_1 + 0x10);
    }
    FUN_1801a2530(local_res8,param_1);
    if (local_res8[0] != 0) {
      FUN_1801a70c0(0xb,0x77,0x44,"crypto\\x509\\x_pubkey.c",0xa2);
      FUN_18019deb0(local_res8[0]);
    }
  }
  return 0;
}



// ===== FUN_1801a2250 @ 1801a2250 (size 251)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a2250(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801a2260;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = FUN_1801bf3f0(&DAT_18030d290);
  if (lVar3 != 0) {
    if (*(longlong *)(param_2 + 0x10) == 0) {
      uVar5 = 0x52;
      uVar4 = 0x6f;
    }
    else {
      pcVar1 = *(code **)(*(longlong *)(param_2 + 0x10) + 0x28);
      if (pcVar1 == (code *)0x0) {
        uVar5 = 0x4e;
        uVar4 = 0x7c;
      }
      else {
        iVar2 = (*pcVar1)(lVar3,param_2);
        if (iVar2 != 0) {
          FUN_1801bfa90(*param_1,&DAT_18030d290);
          *param_1 = lVar3;
          *(longlong *)(lVar3 + 0x10) = param_2;
          FUN_18019e860(param_2);
          return 1;
        }
        uVar5 = 0x4a;
        uVar4 = 0x7e;
      }
    }
    FUN_1801a70c0(0xb,0x78,uVar4,"crypto\\x509\\x_pubkey.c",uVar5,uVar6);
  }
  FUN_1801bfa90(lVar3,&DAT_18030d290);
  return 0;
}



// ===== FUN_1801a2350 @ 1801a2350 (size 127)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a2350(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong in_stack_00000028;
  undefined4 in_stack_00000030;
  
  uVar1 = FUN_1801a1e70(*param_1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (in_stack_00000028 != 0) {
    FUN_180195e10(*(undefined8 *)(param_1[1] + 8),"crypto\\x509\\x_pubkey.c",0x15c);
    *(longlong *)(param_1[1] + 8) = in_stack_00000028;
    *(undefined4 *)param_1[1] = in_stack_00000030;
    *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) & 0xfffffff0;
    *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) | 8;
  }
  return 1;
}



// ===== FUN_1801a23f0 @ 1801a23f0 (size 280)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a23f0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res10 [2];
  undefined8 local_res20;
  undefined8 uVar4;
  
  uVar4 = 0x1801a2403;
  local_res20 = *param_2;
  lVar2 = FUN_1801bfef0(0,&local_res20,param_3,&DAT_18030d290);
  if (lVar2 == 0) {
    return 0;
  }
  local_res10[0] = 0;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (lVar3 == 0) {
      FUN_1801a2530(local_res10,lVar2);
      lVar3 = local_res10[0];
      if (local_res10[0] != 0) {
        FUN_1801a70c0(0xb,0x77,0x44,"crypto\\x509\\x_pubkey.c",0xa2,uVar4);
        FUN_18019deb0(lVar3);
      }
    }
    else {
      iVar1 = FUN_18019e860(lVar3);
      if (iVar1 != 0) goto LAB_1801a24bb;
      FUN_1801a70c0(0xb,0xa1,0x44,"crypto\\x509\\x_pubkey.c",0xae,uVar4);
    }
  }
  lVar3 = 0;
LAB_1801a24bb:
  FUN_1801bfa90(lVar2,&DAT_18030d290);
  if (lVar3 == 0) {
    return 0;
  }
  *param_2 = local_res20;
  if (param_1 != (longlong *)0x0) {
    FUN_18019deb0(*param_1);
    *param_1 = lVar3;
  }
  return lVar3;
}



// ===== FUN_1801a2530 @ 1801a2530 (size 252)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801a2530(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801a2545;
  lVar4 = FUN_18019e2c0();
  if (lVar4 == 0) {
    FUN_1801a70c0(0xb,0x94,0x41,"crypto\\x509\\x_pubkey.c",0x6d,uVar6);
    return 0xffffffff;
  }
  uVar2 = FUN_1801b96c0(*(undefined8 *)*param_2);
  iVar3 = FUN_18019e6a0(lVar4,uVar2);
  if (iVar3 == 0) {
    uVar2 = 0x72;
    uVar5 = 0x6f;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0x20);
    if (pcVar1 == (code *)0x0) {
      uVar2 = 0x81;
      uVar5 = 0x7c;
    }
    else {
      iVar3 = (*pcVar1)(lVar4,param_2);
      if (iVar3 != 0) {
        *param_1 = lVar4;
        return 1;
      }
      uVar5 = 0x7d;
      uVar2 = 0x7d;
    }
  }
  FUN_1801a70c0(0xb,0x94,uVar5,"crypto\\x509\\x_pubkey.c",uVar2,uVar6);
  FUN_18019deb0(lVar4);
  return 0;
}



// ===== FUN_1801a2640 @ 1801a2640 (size 457)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a2640(int param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (param_1 != 1) {
    if (param_1 == 3) {
      FUN_1801ae0a0(3,lVar1,lVar1 + 0xc0);
      FUN_1801d5bd0(*(undefined8 *)(lVar1 + 0x138));
      FUN_1801bc3c0(*(undefined8 *)(lVar1 + 0xe0));
      FUN_1801d5ea0(*(undefined8 *)(lVar1 + 0xe8));
      FUN_1801d6620(*(undefined8 *)(lVar1 + 0xf8));
      FUN_1801db8d0(*(undefined8 *)(lVar1 + 0xf0));
      FUN_1801a48f0(*(undefined8 *)(lVar1 + 0x100));
      FUN_1801d73c0(*(undefined8 *)(lVar1 + 0x108));
      FUN_1801958f0(*(undefined8 *)(lVar1 + 0x110),FUN_1801d9d50);
      FUN_1801d8960(*(undefined8 *)(lVar1 + 0x118));
      return 1;
    }
    if (param_1 != 4) {
      return 1;
    }
    FUN_1801ae0a0(3,lVar1,lVar1 + 0xc0);
    FUN_1801d5bd0(*(undefined8 *)(lVar1 + 0x138));
    FUN_1801bc3c0(*(undefined8 *)(lVar1 + 0xe0));
    FUN_1801d5ea0(*(undefined8 *)(lVar1 + 0xe8));
    FUN_1801d6620(*(undefined8 *)(lVar1 + 0xf8));
    FUN_1801db8d0(*(undefined8 *)(lVar1 + 0xf0));
    FUN_1801a48f0(*(undefined8 *)(lVar1 + 0x100));
    FUN_1801d73c0(*(undefined8 *)(lVar1 + 0x108));
    FUN_1801958f0(*(undefined8 *)(lVar1 + 0x110),FUN_1801d9d50);
    FUN_1801d8960(*(undefined8 *)(lVar1 + 0x118));
  }
  *(undefined8 *)(lVar1 + 200) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x148) = 0;
  *(undefined8 *)(lVar1 + 0xd4) = 0;
  *(undefined4 *)(lVar1 + 0xdc) = 0;
  *(undefined4 *)(lVar1 + 0xd0) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x138) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  uVar2 = FUN_1801ae440(3,lVar1,lVar1 + 0xc0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  return 1;
}



// ===== FUN_1801a2900 @ 1801a2900 (size 192)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a2900(longlong *param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)param_2;
  bVar1 = false;
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    bVar1 = true;
  }
  lVar2 = FUN_1801bfef0(param_1,&local_res8,param_3,&DAT_18030d520);
  if (lVar2 != 0) {
    iVar4 = (int)param_3 + (*param_2 - (int)local_res8);
    if ((iVar4 < 1) || (lVar3 = FUN_1801d5e80(lVar2 + 0x138,&local_res8,iVar4), lVar3 != 0)) {
      *(undefined8 *)param_2 = local_res8;
      goto LAB_1801a29ad;
    }
    if ((bVar1) && (FUN_1801bfa90(lVar2,&DAT_18030d520), param_1 != (longlong *)0x0)) {
      *param_1 = 0;
    }
  }
  lVar2 = 0;
LAB_1801a29ad:
  return lVar2;
}



// ===== FUN_1801a2a10 @ 1801a2a10 (size 97)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a2a10(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1801a2830(*param_1);
    FUN_1801cd2f0(param_1[1]);
    FUN_1801dbd70(param_1[2]);
    FUN_180195e10(param_1[7],"crypto\\asn1\\x_info.c",0x25);
    FUN_180195e10(param_1,"crypto\\asn1\\x_info.c",0x26);
  }
  return;
}



// ===== FUN_1801a2a80 @ 1801a2a80 (size 76)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a2a80(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180196100(0x40,"crypto\\asn1\\x_info.c",0x14);
  if (lVar1 == 0) {
    FUN_1801a70c0(0xd,0xaa,0x41,"crypto\\asn1\\x_info.c",0x16);
    lVar1 = 0;
  }
  return lVar1;
}



// ===== FUN_1801a2b40 @ 1801a2b40 (size 144)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801a2b40(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  FUN_1801a5650(param_1,0xffffffff,0xffffffff);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xa8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xac);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xb0);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0xb4);
  }
  return *(uint *)(param_1 + 0xb4) & 1;
}



// ===== FUN_1801a2c40 @ 1801a2c40 (size 253)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a2c40(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res8 [2];
  int local_res10 [2];
  
  piVar1 = (int *)(param_1 + 0xa8);
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  uVar2 = FUN_1801b96c0(*(undefined8 *)(param_1 + 0x80));
  iVar3 = FUN_1801dcba0(uVar2,local_res8,local_res10);
  if (iVar3 != 0) {
    if (local_res10[0] != 0) {
      *(int *)(param_1 + 0xac) = local_res10[0];
      if (local_res8[0] == 0) {
        lVar4 = FUN_1801c4b80(0);
        if ((lVar4 != 0) && (*(code **)(lVar4 + 0xd8) != (code *)0x0)) {
          iVar3 = (**(code **)(lVar4 + 0xd8))(piVar1,param_1 + 0x80,param_1 + 0x90);
          if (iVar3 != 0) {
            *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 1;
            return;
          }
        }
      }
      else {
        *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 1;
        *piVar1 = local_res8[0];
        uVar5 = FUN_1801b9610();
        lVar4 = FUN_1801dcf20(uVar5);
        if (lVar4 != 0) {
          iVar3 = FUN_1801afe40(lVar4);
          *(int *)(param_1 + 0xb0) = iVar3 << 2;
          if ((local_res8[0] == 0x40) || (local_res8[0] - 0x2a0U < 3)) {
            *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 2;
          }
        }
      }
    }
  }
  return;
}



// ===== FUN_1801a2d40 @ 1801a2d40 (size 69)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a2d40(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint local_res18 [4];
  
  if ((param_3 & 0x30000) == 0) {
    return 0;
  }
  local_res18[0] = param_3;
  uVar1 = FUN_1801b96c0(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_1801a3500(param_2,uVar1,local_res18);
  return uVar2;
}



// ===== FUN_1801a2de0 @ 1801a2de0 (size 133)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801a2de0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) {
    iVar2 = FUN_1801be8e0(param_1,0);
    if (-1 < iVar2) goto LAB_1801a2e11;
LAB_1801a2e55:
    iVar2 = -2;
  }
  else {
LAB_1801a2e11:
    if ((*(longlong *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) != 0)) {
      iVar2 = FUN_1801be8e0(param_2,0);
      if (iVar2 < 0) goto LAB_1801a2e55;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = iVar1 - *(int *)(param_2 + 0x20);
    if ((iVar2 == 0) && (iVar1 != 0)) {
      iVar2 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(longlong)iVar1);
      return iVar2;
    }
  }
  return iVar2;
}



// ===== FUN_1801a2e70 @ 1801a2e70 (size 157)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801a2e70(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  uint local_28 [6];
  ulonglong local_10;
  
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  FUN_1801be8e0(param_1,0);
  local_38 = FUN_18019db60();
  local_30 = 0;
  uVar1 = FUN_18019cda0(*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20),local_28,
                        0);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  return (ulonglong)local_28[0];
}



// ===== FUN_1801a2f10 @ 1801a2f10 (size 623)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801a2f10(uint *param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  uint local_res20 [2];
  
  if ((param_4 & 0x30000) == 0) {
    return 0;
  }
  bVar8 = param_2 != 0;
  local_res20[0] = param_4;
  if (!bVar8) {
    param_2 = FUN_180195ae0(param_3);
  }
  bVar8 = !bVar8;
  uVar7 = (uint)bVar8;
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1801a2180(*(undefined8 *)(param_2 + 0x50));
  }
  if (param_3 == 0) {
    if ((lVar5 != 0) && (iVar1 = FUN_18019a410(lVar5), iVar1 == 0x198)) {
      uVar4 = FUN_18019e010(lVar5);
      lVar5 = FUN_1800b7fa0(uVar4);
      if (lVar5 != 0) {
        iVar1 = FUN_18018d310(lVar5);
        if (iVar1 == 0x2cb) {
          if ((param_4 >> 0x11 & 1) == 0) {
            return 0x3c;
          }
        }
        else {
          if (iVar1 != 0x19f) {
            return 0x3a;
          }
          if ((param_4 >> 0x10 & 1) == 0) {
            return 0x3c;
          }
        }
        return 0;
      }
    }
    return 0x39;
  }
  iVar1 = FUN_1801a2bd0(param_2);
  if (iVar1 != 2) {
    iVar1 = 0x38;
    uVar3 = 0;
    goto LAB_1801a315a;
  }
  if ((lVar5 == 0) || (iVar1 = FUN_18019a410(lVar5), iVar1 != 0x198)) {
LAB_1801a312c:
    iVar1 = 0x39;
LAB_1801a3131:
    uVar7 = 0;
  }
  else {
    uVar4 = FUN_18019e010(lVar5);
    lVar6 = FUN_1800b7fa0(uVar4);
    if (lVar6 == 0) goto LAB_1801a312c;
    iVar1 = FUN_18018d310(lVar6);
    if (iVar1 != 0x2cb) {
      if (iVar1 == 0x19f) {
        if ((param_4 >> 0x10 & 1) != 0) goto LAB_1801a3080;
        iVar1 = 0x3c;
      }
      else {
        iVar1 = 0x3a;
      }
      goto LAB_1801a3131;
    }
    if ((param_4 >> 0x11 & 1) == 0) {
      iVar1 = 0x3c;
      goto LAB_1801a3131;
    }
    local_res20[0] = param_4 & 0xfffeffff;
LAB_1801a3080:
    iVar1 = FUN_1801958b0(param_3);
    uVar3 = (uint)bVar8;
    if ((int)(uint)bVar8 < iVar1) {
      do {
        uVar2 = FUN_1801a2890(param_2);
        param_2 = FUN_180195ae0(param_3,uVar3);
        iVar1 = FUN_1801a2bd0(param_2);
        if (iVar1 != 2) {
          iVar1 = 0x38;
          goto LAB_1801a315a;
        }
        if (param_2 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_1801a2180(*(undefined8 *)(param_2 + 0x50));
        }
        iVar1 = FUN_1801a3500(lVar5,uVar2,local_res20);
        uVar7 = uVar3;
        if (iVar1 != 0) goto LAB_1801a3137;
        uVar7 = uVar3 + 1;
        iVar1 = FUN_1801958b0(param_3);
        uVar3 = uVar7;
      } while ((int)uVar7 < iVar1);
    }
    uVar2 = FUN_1801a2890(param_2);
    iVar1 = FUN_1801a3500(lVar5,uVar2,local_res20);
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_1801a3137:
  uVar3 = uVar7;
  if (iVar1 - 0x3bU < 2) {
    uVar3 = uVar7 - 1;
    if (uVar7 == 0) {
      uVar3 = uVar7;
    }
    if ((iVar1 == 0x3c) && (param_4 != local_res20[0])) {
      iVar1 = 0x3d;
    }
  }
LAB_1801a315a:
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar3;
  }
  return iVar1;
}



// ===== FUN_1801a3180 @ 1801a3180 (size 157)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a3180(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = FUN_180195540();
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = FUN_1801958b0(lVar2);
  if (0 < iVar1) {
    do {
      uVar3 = FUN_180195ae0(lVar2,iVar4);
      iVar1 = FUN_1801a2c20(uVar3);
      if (iVar1 == 0) {
        while (0 < iVar4) {
          iVar4 = iVar4 + -1;
          uVar3 = FUN_180195ae0(lVar2,iVar4);
          FUN_1801a2830(uVar3);
        }
        FUN_180195650(lVar2);
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_1801958b0(lVar2);
    } while (iVar4 < iVar1);
  }
  return lVar2;
}



// ===== FUN_1801a3220 @ 1801a3220 (size 147)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a3220(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801a322c;
  if (((param_1 == 0) || (lVar2 = FUN_1801a2180(*(undefined8 *)(param_1 + 0x50)), lVar2 == 0)) ||
     (iVar1 = FUN_18019dcb0(lVar2,param_2), iVar1 == -2)) {
    uVar4 = 0x135;
    uVar3 = 0x75;
  }
  else if (iVar1 == -1) {
    uVar4 = 0x132;
    uVar3 = 0x73;
  }
  else {
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        return 0;
      }
      return 1;
    }
    uVar4 = 0x12f;
    uVar3 = 0x74;
  }
  FUN_1801a70c0(0xb,0x80,uVar3,"crypto\\x509\\x509_cmp.c",uVar4,uVar5);
  return 0;
}



// ===== FUN_1801a32c0 @ 1801a32c0 (size 207)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801a32c0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    FUN_1801a5650(param_1,0xffffffff,0);
    FUN_1801a5650(param_2,0xffffffff);
    if ((((*(uint *)(param_1 + 0xd0) & 0x100000) == 0) &&
        ((*(uint *)(param_2 + 0xd0) & 0x100000) == 0)) &&
       (iVar1 = memcmp((void *)(param_1 + 0x120),(void *)(param_2 + 0x120),0x14), iVar1 != 0)) {
      return iVar1;
    }
    if ((*(int *)(param_1 + 0x7c) == 0) && (*(int *)(param_2 + 0x7c) == 0)) {
      iVar1 = *(int *)(param_1 + 0x78);
      if (iVar1 < *(int *)(param_2 + 0x78)) {
        return -1;
      }
      if (*(int *)(param_2 + 0x78) < iVar1) {
        return 1;
      }
      iVar1 = memcmp(*(void **)(param_1 + 0x70),*(void **)(param_2 + 0x70),(longlong)iVar1);
      return iVar1;
    }
  }
  return 0;
}



// ===== FUN_1801a3390 @ 1801a3390 (size 206)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a3390(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = FUN_1801958b0();
  if (0 < iVar2) {
    do {
      lVar4 = FUN_180195ae0(param_1,iVar5);
      lVar1 = *(longlong *)(lVar4 + 0x48);
      if ((((*(longlong *)(lVar1 + 0x18) != 0) && (*(int *)(lVar1 + 8) == 0)) ||
          (iVar2 = FUN_1801be8e0(lVar1,0), -1 < iVar2)) &&
         (((*(longlong *)(param_2 + 0x18) != 0 && (*(int *)(param_2 + 8) == 0)) ||
          (iVar2 = FUN_1801be8e0(param_2,0), -1 < iVar2)))) {
        iVar2 = *(int *)(lVar1 + 0x20);
        iVar3 = iVar2 - *(int *)(param_2 + 0x20);
        if ((iVar3 == 0) && (iVar2 != 0)) {
          iVar3 = memcmp(*(void **)(lVar1 + 0x18),*(void **)(param_2 + 0x18),(longlong)iVar2);
        }
        if (iVar3 == 0) {
          return lVar4;
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = FUN_1801958b0(param_1);
    } while (iVar5 < iVar2);
  }
  return 0;
}



// ===== FUN_1801a3500 @ 1801a3500 (size 254)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a3500(longlong param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (iVar1 = FUN_18019a410(), iVar1 == 0x198)) {
    uVar2 = FUN_18019e010(param_1);
    lVar3 = FUN_1800b7fa0(uVar2);
    if (lVar3 != 0) {
      iVar1 = FUN_18018d310(lVar3);
      if (iVar1 == 0x2cb) {
        if ((param_2 != -1) && (param_2 != 0x31b)) {
          return 0x3b;
        }
        if ((*param_3 >> 0x11 & 1) == 0) {
          return 0x3c;
        }
        *param_3 = *param_3 & 0xfffeffff;
      }
      else {
        if (iVar1 != 0x19f) {
          return 0x3a;
        }
        if ((param_2 != -1) && (param_2 != 0x31a)) {
          return 0x3b;
        }
        if ((*param_3 & 0x10000) == 0) {
          return 0x3c;
        }
      }
      return 0;
    }
  }
  return 0x39;
}



// ===== FUN_1801a3600 @ 1801a3600 (size 371)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
FUN_1801a3600(longlong *param_1,longlong param_2,uint param_3,longlong param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801a3618;
  if (((param_1 == (longlong *)0x0) || (plVar3 = (longlong *)*param_1, plVar3 == (longlong *)0x0))
     && (plVar3 = (longlong *)FUN_1801be650(), plVar3 == (longlong *)0x0)) {
    return (longlong *)0x0;
  }
  if (param_2 == 0) {
    FUN_1801a70c0(0xb,0x73,0x43,"crypto\\x509\\x509name.c",0x136,uVar6);
  }
  else {
    FUN_18019aa30(*plVar3);
    lVar4 = FUN_1801bc270(param_2);
    *plVar3 = lVar4;
    if ((lVar4 != 0) && ((uVar5 = (ulonglong)param_5, param_4 != 0 || (param_5 == 0)))) {
      if (((int)param_3 < 1) || ((param_3 >> 0xc & 1) == 0)) {
        if ((int)param_5 < 0) {
          uVar5 = 0xffffffffffffffff;
          do {
            uVar5 = uVar5 + 1;
          } while (*(char *)(uVar5 + param_4) != '\0');
        }
        iVar2 = FUN_18019a480(plVar3[1],param_4,uVar5 & 0xffffffff);
        if (iVar2 != 0) {
          if (param_3 != 0xffffffff) {
            if (param_3 == 0xfffffffe) {
              uVar1 = FUN_18019cc10(param_4,uVar5 & 0xffffffff);
              *(undefined4 *)(plVar3[1] + 4) = uVar1;
            }
            else {
              *(uint *)(plVar3[1] + 4) = param_3;
            }
          }
          goto LAB_1801a3714;
        }
      }
      else {
        uVar1 = FUN_1801b96c0(lVar4);
        lVar4 = FUN_1801df5c0(plVar3 + 1,param_4,param_5,param_3,uVar1);
        if (lVar4 != 0) {
LAB_1801a3714:
          if (param_1 == (longlong *)0x0) {
            return plVar3;
          }
          if (*param_1 == 0) {
            *param_1 = (longlong)plVar3;
            return plVar3;
          }
          return plVar3;
        }
      }
    }
  }
  if ((param_1 == (longlong *)0x0) || (plVar3 != (longlong *)*param_1)) {
    FUN_1801be630(plVar3);
  }
  return (longlong *)0x0;
}



// ===== FUN_1801a37b0 @ 1801a37b0 (size 330)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a37b0(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1801a37c4;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  iVar3 = FUN_1801958b0(uVar1);
  if (iVar3 < param_3) {
    param_3 = iVar3;
  }
  else if (param_3 < 0) {
    param_3 = iVar3;
  }
  iVar5 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  bVar6 = param_4 == 0;
  if (param_4 == -1) {
    if (param_3 == 0) {
      bVar6 = true;
      goto LAB_1801a385e;
    }
    iVar2 = param_3 + -1;
  }
  else {
    iVar2 = param_3;
    if (iVar3 <= param_3) {
      if (param_3 != 0) {
        lVar4 = FUN_180195ae0(uVar1,param_3 + -1);
        iVar5 = *(int *)(lVar4 + 0x10) + 1;
      }
      goto LAB_1801a385e;
    }
  }
  lVar4 = FUN_180195ae0(uVar1,iVar2);
  iVar5 = *(int *)(lVar4 + 0x10);
LAB_1801a385e:
  lVar4 = FUN_1801be610(param_2);
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x10) = iVar5;
    iVar3 = FUN_1801956a0(uVar1,lVar4,param_3);
    if (iVar3 != 0) {
      if (bVar6) {
        iVar3 = FUN_1801958b0(uVar1);
        while (param_3 = param_3 + 1, param_3 < iVar3) {
          lVar4 = FUN_180195ae0(uVar1,param_3);
          *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
        }
      }
      return 1;
    }
    FUN_1801a70c0(0xb,0x71,0x41,"crypto\\x509\\x509name.c",0xe3,uVar7);
  }
  FUN_1801be630(lVar4);
  return 0;
}



// ===== FUN_1801a3900 @ 1801a3900 (size 223)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1801a3900(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801a3920;
  lVar2 = FUN_1801b9db0(param_2,0);
  if (lVar2 == 0) {
    FUN_1801a70c0(0xb,0x83,0x77,"crypto\\x509\\x509name.c",0xfc);
    FUN_1801a6360(2,"name=",param_2);
    uVar1 = 0;
  }
  else {
    lVar3 = FUN_1801a3600(0,lVar2,param_3,param_4,param_5,uVar4);
    FUN_18019aa30(lVar2);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_1801a37b0(param_1,lVar3,param_6,param_7);
      FUN_1801be630(lVar3);
    }
  }
  return uVar1;
}



// ===== FUN_1801a39e0 @ 1801a39e0 (size 221)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a39e0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (((param_1 == (undefined8 *)0x0) || (iVar2 = FUN_1801958b0(*param_1), iVar2 <= param_2)) ||
     (param_2 < 0)) {
    return 0;
  }
  uVar1 = *param_1;
  lVar3 = FUN_180195480(uVar1,param_2);
  iVar2 = FUN_1801958b0(uVar1);
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != iVar2) {
    if (param_2 == 0) {
      iVar5 = *(int *)(lVar3 + 0x10) + -1;
    }
    else {
      lVar4 = FUN_180195ae0(uVar1,param_2 + -1);
      iVar5 = *(int *)(lVar4 + 0x10);
    }
    lVar4 = FUN_180195ae0(uVar1,param_2);
    if (iVar5 + 1 < *(int *)(lVar4 + 0x10)) {
      for (; param_2 < iVar2; param_2 = param_2 + 1) {
        lVar4 = FUN_180195ae0(uVar1,param_2);
        *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
      }
    }
  }
  return lVar3;
}



// ===== FUN_1801a3af0 @ 1801a3af0 (size 78)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a3af0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = FUN_1801958b0(*param_1);
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = FUN_180195ae0(*param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// ===== FUN_1801a3b40 @ 1801a3b40 (size 77)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a3b40(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1801b9550(param_2);
  if (lVar1 == 0) {
    return 0xfffffffe;
  }
  uVar2 = FUN_1801a3b90(param_1,lVar1,param_3);
  return uVar2;
}



// ===== FUN_1801a3b90 @ 1801a3b90 (size 147)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801a3b90(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (param_1 == (undefined8 *)0x0) {
LAB_1801a3bff:
    iVar4 = -1;
  }
  else {
    uVar1 = *param_1;
    iVar2 = FUN_1801958b0(uVar1);
    iVar4 = -1;
    if (-1 < param_3) {
      iVar4 = param_3;
    }
    do {
      iVar4 = iVar4 + 1;
      if (iVar2 <= iVar4) goto LAB_1801a3bff;
      puVar5 = (undefined8 *)FUN_180195ae0(uVar1,iVar4);
      iVar3 = FUN_1801bc240(*puVar5,param_2);
    } while (iVar3 != 0);
  }
  return iVar4;
}



// ===== FUN_1801a3dc0 @ 1801a3dc0 (size 75)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a3dc0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_1801958b0();
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = FUN_180195480(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// ===== FUN_1801a3e10 @ 1801a3e10 (size 75)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a3e10(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_1801958b0();
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = FUN_180195ae0(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// ===== FUN_1801a3e60 @ 1801a3e60 (size 187)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801a3e60(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar3 = FUN_1801b9550(param_2);
  if (lVar3 == 0) {
    return -2;
  }
  if (param_1 == 0) {
    return -1;
  }
  iVar5 = 0;
  if (-1 < param_3 + 1) {
    iVar5 = param_3 + 1;
  }
  iVar1 = FUN_1801958b0(param_1);
  while( true ) {
    if (iVar1 <= iVar5) {
      return -1;
    }
    puVar4 = (undefined8 *)FUN_180195ae0(param_1,iVar5);
    iVar2 = FUN_1801bc240(*puVar4,lVar3);
    if (iVar2 == 0) break;
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}



// ===== FUN_1801a3f50 @ 1801a3f50 (size 1312)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801a3f50(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  char *_Str1;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_a8 [2];
  longlong local_a0;
  longlong local_98;
  char *local_90;
  longlong local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_1803c3d80 ^ (ulonglong)auStack_d8;
  plVar6 = (longlong *)0x0;
  bVar2 = false;
  bVar1 = false;
  local_90 = (char *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_80 = param_4;
  local_78 = param_3;
  local_70 = param_1;
  if (param_2 == 0) {
    lVar5 = FUN_1801957e0();
    if (lVar5 == 0) {
      local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,0x36);
      FUN_1801a70c0(9,0x74,0x41,"crypto\\pem\\pem_info.c");
      goto LAB_1801a43ad;
    }
  }
  else {
    lVar5 = param_2;
  }
  plVar6 = (longlong *)FUN_1801a2a80();
  if (plVar6 != (longlong *)0x0) {
    local_b8 = local_a8;
    iVar4 = FUN_1801e06e0(param_1,&local_90,&local_a0,&local_98);
    while (bVar1 = bVar2, iVar4 != 0) {
LAB_1801a4030:
      _Str1 = local_90;
      uVar10 = 0;
      iVar4 = strcmp(local_90,"CERTIFICATE");
      uVar3 = uVar10;
      if ((iVar4 == 0) || (iVar4 = strcmp(_Str1,"X509 CERTIFICATE"), iVar4 == 0)) {
        pcVar12 = FUN_1801a28e0;
LAB_1801a407c:
        plVar13 = plVar6;
        if (*plVar6 == 0) goto LAB_1801a4214;
LAB_1801a4085:
        iVar4 = FUN_180195990(lVar5,plVar6);
        if ((iVar4 == 0) || (plVar6 = (longlong *)FUN_1801a2a80(), plVar6 == (longlong *)0x0))
        goto LAB_1801a43ad;
        goto LAB_1801a4030;
      }
      iVar4 = strcmp(_Str1,"TRUSTED CERTIFICATE");
      if (iVar4 == 0) {
        pcVar12 = FUN_1801a2900;
        goto LAB_1801a407c;
      }
      iVar4 = strcmp(_Str1,"X509 CRL");
      if (iVar4 == 0) {
        pcVar12 = FUN_1801cd5a0;
        if (plVar6[1] == 0) {
          plVar13 = plVar6 + 1;
          goto LAB_1801a4214;
        }
        goto LAB_1801a4085;
      }
      iVar4 = strcmp(_Str1,"RSA PRIVATE KEY");
      if (iVar4 == 0) {
        pcVar12 = FUN_1801c89a0;
        if (plVar6[2] == 0) {
          plVar6[7] = 0;
          *(undefined4 *)(plVar6 + 6) = 0;
          lVar8 = FUN_1801dbde0();
          plVar6[2] = lVar8;
          if (lVar8 != 0) {
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (*(char *)(local_a0 + lVar7) != '\0');
            uVar10 = (uint)(10 < (int)lVar7);
            plVar13 = (longlong *)(lVar8 + 0x18);
            uVar3 = 6;
            goto LAB_1801a4214;
          }
          goto LAB_1801a43ad;
        }
        goto LAB_1801a4085;
      }
      iVar4 = strcmp(_Str1,"DSA PRIVATE KEY");
      if (iVar4 == 0) {
        pcVar12 = FUN_1801d4e40;
        if (plVar6[2] != 0) goto LAB_1801a4085;
        plVar6[7] = 0;
        *(undefined4 *)(plVar6 + 6) = 0;
        lVar8 = FUN_1801dbde0();
        plVar6[2] = lVar8;
        if (lVar8 == 0) goto LAB_1801a43ad;
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(local_a0 + lVar7) != '\0');
        uVar10 = (uint)(10 < (int)lVar7);
        plVar13 = (longlong *)(lVar8 + 0x18);
        uVar3 = 0x74;
      }
      else {
        iVar4 = strcmp(_Str1,"EC PRIVATE KEY");
        if (iVar4 != 0) goto LAB_1801a42c1;
        pcVar12 = FUN_1801d3d60;
        if (plVar6[2] != 0) goto LAB_1801a4085;
        plVar6[7] = 0;
        *(undefined4 *)(plVar6 + 6) = 0;
        lVar8 = FUN_1801dbde0();
        plVar6[2] = lVar8;
        if (lVar8 == 0) goto LAB_1801a43ad;
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(local_a0 + lVar7) != '\0');
        uVar10 = (uint)(10 < (int)lVar7);
        plVar13 = (longlong *)(lVar8 + 0x18);
        uVar3 = 0x198;
      }
LAB_1801a4214:
      if (uVar10 != 0) {
        iVar4 = FUN_1801e03b0(local_a0,plVar6 + 3);
        if (iVar4 == 0) goto LAB_1801a43ad;
        plVar6[7] = local_98;
        *(undefined4 *)(plVar6 + 6) = local_a8[0];
        local_98 = 0;
        goto LAB_1801a42bd;
      }
      iVar4 = FUN_1801e03b0(local_a0,local_68);
      if (iVar4 == 0) goto LAB_1801a43ad;
      local_b8 = local_80;
      iVar4 = FUN_1801e00f0(local_68,local_98,local_a8,local_78);
      if (iVar4 == 0) goto LAB_1801a43ad;
      local_88 = local_98;
      if (uVar3 == 0) {
        lVar8 = (*pcVar12)(plVar13,&local_88,local_a8[0]);
        if (lVar8 == 0) {
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,0xc4);
          goto LAB_1801a438b;
        }
      }
      else {
        lVar8 = FUN_1801d2a20(uVar3,plVar13,&local_88,local_a8[0]);
        if (lVar8 == 0) {
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,0xc0);
LAB_1801a438b:
          FUN_1801a70c0(9,0x74,0xd,"crypto\\pem\\pem_info.c");
          goto LAB_1801a43ad;
        }
      }
LAB_1801a42bd:
      _Str1 = local_90;
LAB_1801a42c1:
      FUN_180195e10(_Str1,"crypto\\pem\\pem_info.c",0xd1);
      local_90 = (char *)0x0;
      FUN_180195e10(local_a0,"crypto\\pem\\pem_info.c",0xd3);
      local_a0 = 0;
      FUN_180195e10(local_98,"crypto\\pem\\pem_info.c",0xd5);
      local_b8 = local_a8;
      local_98 = 0;
      iVar4 = FUN_1801e06e0(local_70,&local_90,&local_a0,&local_98);
    }
    uVar3 = FUN_1801a6f70();
    if ((uVar3 & 0xfff) == 0x6c) {
      FUN_1801a64b0();
      if ((((*plVar6 != 0) || (plVar6[1] != 0)) || (plVar6[2] != 0)) || (plVar6[7] != 0)) {
        iVar4 = FUN_180195990(lVar5,plVar6);
        if (iVar4 == 0) goto LAB_1801a43ad;
        plVar6 = (longlong *)0x0;
      }
      bVar1 = true;
    }
  }
LAB_1801a43ad:
  FUN_1801a2a10(plVar6);
  if (!bVar1) {
    iVar11 = 0;
    iVar4 = FUN_1801958b0(lVar5);
    if (0 < iVar4) {
      do {
        uVar9 = FUN_180195ae0(lVar5,iVar11);
        FUN_1801a2a10(uVar9);
        iVar11 = iVar11 + 1;
        iVar4 = FUN_1801958b0(lVar5);
      } while (iVar11 < iVar4);
    }
    if (lVar5 != param_2) {
      FUN_180195650(lVar5);
    }
    lVar5 = 0;
  }
  FUN_180195e10(local_90,"crypto\\pem\\pem_info.c",0xf0);
  FUN_180195e10(local_a0,"crypto\\pem\\pem_info.c",0xf1);
  FUN_180195e10(local_98,"crypto\\pem\\pem_info.c",0xf2);
  return lVar5;
}



// ===== FUN_1801a44b0 @ 1801a44b0 (size 69)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a44b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1801dfa30(FUN_1801a29c0,"CERTIFICATE",param_1,param_2,0,0,0,0,0);
  return;
}



// ===== FUN_1801a4540 @ 1801a4540 (size 235)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a4540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_28 [2];
  char *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x1801a454c;
  local_20 = (char *)0x0;
  local_18 = 0;
  iVar1 = FUN_1801dff70(&local_18,local_28,&local_20,"DH PARAMETERS",param_1,param_3,param_4);
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  local_10 = local_18;
  iVar1 = strcmp(local_20,"X9.42 DH PARAMETERS");
  if (iVar1 == 0) {
    lVar2 = FUN_1801e1b20();
  }
  else {
    lVar2 = FUN_1801e1b00(param_2,&local_10,local_28[0]);
  }
  if (lVar2 == 0) {
    FUN_1801a70c0(9,0x8d,0xd,"crypto\\pem\\pem_pkey.c",CONCAT44(uVar3,0xe4));
  }
  FUN_180195e10(local_20,"crypto\\pem\\pem_pkey.c",0xe5);
  FUN_180195e10(local_18,"crypto\\pem\\pem_pkey.c",0xe6);
  return lVar2;
}



// ===== FUN_1801a4630 @ 1801a4630 (size 655)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801a4630(undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4)

{
  char *_Str1;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  code *local_480;
  undefined8 local_478;
  int local_468 [2];
  char *local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_4a8;
  lVar3 = 0;
  local_460 = (char *)0x0;
  local_450 = 0;
  local_488 = param_1;
  local_480 = param_3;
  local_478 = param_4;
  iVar1 = FUN_1801dffb0(&local_450,local_468,&local_460,"ANY PRIVATE KEY");
  _Str1 = local_460;
  if (iVar1 == 0) {
    return 0;
  }
  local_458 = local_450;
  iVar1 = strcmp(local_460,"PRIVATE KEY");
  if (iVar1 == 0) {
    lVar2 = FUN_1801d5690(0,&local_458,local_468[0]);
    if (lVar2 != 0) {
      lVar3 = FUN_1801d56b0(lVar2);
      if (param_2 != (longlong *)0x0) {
        FUN_18019deb0(*param_2);
        *param_2 = lVar3;
      }
      FUN_1801d5550(lVar2);
LAB_1801a4836:
      if (lVar3 != 0) goto LAB_1801a485b;
    }
  }
  else {
    iVar1 = strcmp(_Str1,"ENCRYPTED PRIVATE KEY");
    if (iVar1 == 0) {
      lVar2 = FUN_1801d50d0(0,&local_458,local_468[0]);
      if (lVar2 != 0) {
        if (param_3 == (code *)0x0) {
          iVar1 = FUN_1801dfff0(local_448,0x400,0,param_4);
        }
        else {
          iVar1 = (*param_3)();
        }
        if (iVar1 < 0) {
          local_488 = CONCAT44(local_488._4_4_,0x40);
          FUN_1801a70c0(9,0x7b,0x68,"crypto\\pem\\pem_pkey.c");
          FUN_1801d50a0(lVar2);
          goto LAB_1801a485b;
        }
        lVar4 = FUN_1801e1d00(lVar2,local_448,iVar1);
        FUN_1801d50a0(lVar2);
        FUN_180001240(local_448,(longlong)iVar1);
        if (lVar4 != 0) {
          lVar3 = FUN_1801d56b0(lVar4);
          if (param_2 != (longlong *)0x0) {
            FUN_18019deb0(*param_2);
            *param_2 = lVar3;
          }
          FUN_1801d5550(lVar4);
          goto LAB_1801a4836;
        }
      }
    }
    else {
      iVar1 = FUN_1801e17b0(_Str1,"PRIVATE KEY");
      if (((0 < iVar1) &&
          (puVar5 = (undefined4 *)FUN_1801c4c80(0,local_460,iVar1), puVar5 != (undefined4 *)0x0)) &&
         (*(longlong *)(puVar5 + 0x2e) != 0)) {
        lVar3 = FUN_1801d2a20(*puVar5,param_2,&local_458,local_468[0]);
        goto LAB_1801a4836;
      }
    }
  }
  local_488 = CONCAT44(local_488._4_4_,0x58);
  FUN_1801a70c0(9,0x7b,0xd,"crypto\\pem\\pem_pkey.c");
LAB_1801a485b:
  FUN_1801b75b0(local_460,"crypto\\pem\\pem_pkey.c",0x5a);
  FUN_1801b7560(local_450,(longlong)local_468[0],"crypto\\pem\\pem_pkey.c",0x5b);
  return lVar3;
}



// ===== FUN_1801a4940 @ 1801a4940 (size 342)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801a4940(int *param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = -1;
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (*param_1 == *param_2)) {
    switch(*param_1) {
    case 0:
      puVar3 = *(undefined8 **)(param_1 + 2);
      if (((puVar3 != (undefined8 *)0x0) &&
          (puVar4 = *(undefined8 **)(param_2 + 2), puVar4 != (undefined8 *)0x0)) &&
         (iVar6 = FUN_1801bc240(*puVar3,*puVar4), iVar6 == 0)) {
        iVar6 = FUN_1801d5810(puVar3[1],puVar4[1]);
      }
      break;
    case 1:
    case 2:
    case 3:
    case 6:
      iVar6 = FUN_18019a070(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 4:
      iVar6 = FUN_1801a2de0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 5:
      plVar1 = *(longlong **)(param_1 + 2);
      plVar2 = *(longlong **)(param_2 + 2);
      if ((plVar1 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
        if (*plVar1 == 0) {
          if (*plVar2 != 0) {
            return -1;
          }
        }
        else {
          if (*plVar2 == 0) {
            return 1;
          }
          iVar5 = FUN_18019a070();
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        if ((plVar1[1] != 0) && (plVar2[1] != 0)) {
          iVar6 = FUN_18019a070();
        }
      }
      break;
    case 7:
      iVar6 = FUN_1801df9f0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 8:
      iVar6 = FUN_1801bc240(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    }
  }
  return iVar6;
}



// ===== FUN_1801a4b20 @ 1801a4b20 (size 848)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801a4b20(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar10;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 uStack_30;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uStack_30 = 0x1801a4b42;
  uVar2 = 1;
  iVar9 = 0;
  local_38 = 0;
  lVar6 = 0;
  uVar4 = FUN_1801a3d70(param_2);
  local_48 = FUN_18013ff80(uVar4);
  uVar1 = FUN_18019a410(uVar4);
  lVar5 = FUN_1801df770(param_2);
  if (lVar5 == 0) {
    if ((param_3 & 0xf0000) == 0) {
      return 0;
    }
    lVar5 = local_40;
    if ((param_3 & 0xf0000) == 0x10000) {
      FUN_180196900(param_1,"%*s<Not Supported>",param_4,&PTR_1802ead18);
      return 1;
    }
LAB_1801a4ba7:
    local_40 = lVar5;
    if ((param_3 & 0xf0000) == 0x20000) {
      uVar2 = FUN_1801bcc40(param_1,local_48,uVar1,param_4,CONCAT44(uVar10,0xffffffff));
    }
    else if ((param_3 & 0xf0000) == 0x30000) {
      uVar2 = FUN_1801bbdf0(param_1,local_48,uVar1,param_4);
    }
    return uVar2;
  }
  if (*(code **)(lVar5 + 8) == (code *)0x0) {
    local_40 = (**(code **)(lVar5 + 0x20))(0,&local_48,uVar1);
  }
  else {
    uVar4 = (**(code **)(lVar5 + 8))();
    local_40 = FUN_1801bfef0(0,&local_48,uVar1,uVar4);
  }
  if (local_40 == 0) {
    if ((param_3 & 0xf0000) == 0) {
      return 0;
    }
    lVar5 = 0;
    if ((param_3 & 0xf0000) == 0x10000) {
      FUN_180196900(param_1,"%*s<Parse Error>",param_4,&PTR_1802ead18);
      return 1;
    }
    goto LAB_1801a4ba7;
  }
  if (*(code **)(lVar5 + 0x30) == (code *)0x0) {
    if (*(code **)(lVar5 + 0x40) == (code *)0x0) {
      if ((*(code **)(lVar5 + 0x50) != (code *)0x0) &&
         (iVar9 = (**(code **)(lVar5 + 0x50))(lVar5,local_40,param_1,param_4), iVar9 != 0))
      goto LAB_1801a4e07;
    }
    else {
      lVar6 = (**(code **)(lVar5 + 0x40))(lVar5,local_40,0);
      if (lVar6 != 0) {
        uVar8 = *(uint *)(lVar5 + 4) & 4;
        if ((uVar8 == 0) || (iVar3 = FUN_1801958b0(lVar6), iVar3 == 0)) {
          FUN_180196900(param_1,&DAT_18030daf0,param_4,&PTR_1802ead18);
          iVar3 = FUN_1801958b0(lVar6);
          if (iVar3 == 0) {
            FUN_18018da10(param_1,"<EMPTY>\n");
          }
        }
        iVar3 = FUN_1801958b0(lVar6);
        if (0 < iVar3) {
          do {
            if (uVar8 == 0) {
              if (0 < iVar9) {
                FUN_180196900(param_1,&DAT_1802ffd08);
              }
            }
            else {
              FUN_180196900(param_1,&DAT_18030daf0,param_4,&PTR_1802ead18);
            }
            lVar7 = FUN_180195ae0(lVar6,iVar9);
            if (*(longlong *)(lVar7 + 8) == 0) {
              FUN_18018da10(param_1,*(undefined8 *)(lVar7 + 0x10));
            }
            else if (*(longlong *)(lVar7 + 0x10) == 0) {
              FUN_18018da10(param_1,*(longlong *)(lVar7 + 8));
            }
            else {
              FUN_180196900(param_1,"%s:%s");
            }
            if (uVar8 != 0) {
              FUN_18018da10(param_1,&DAT_1802fa360);
            }
            iVar9 = iVar9 + 1;
            iVar3 = FUN_1801958b0(lVar6);
          } while (iVar9 < iVar3);
        }
        goto LAB_1801a4e07;
      }
    }
  }
  else {
    local_38 = (**(code **)(lVar5 + 0x30))(lVar5,local_40);
    if (local_38 != 0) {
      FUN_180196900(param_1,"%*s%s",param_4,&PTR_1802ead18,local_38);
      goto LAB_1801a4e07;
    }
  }
  uVar2 = 0;
LAB_1801a4e07:
  FUN_1801958f0(lVar6,FUN_1801e2040);
  FUN_180195e10(local_38,"crypto\\x509v3\\v3_prn.c",0x82);
  if (*(code **)(lVar5 + 8) == (code *)0x0) {
    (**(code **)(lVar5 + 0x18))(local_40);
    return uVar2;
  }
  uVar4 = (**(code **)(lVar5 + 8))();
  FUN_1801bfa90(local_40,uVar4);
  return uVar2;
}



// ===== FUN_1801a4e70 @ 1801a4e70 (size 405)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801a4e70(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801a4e92;
  iVar1 = FUN_1801958b0(param_3);
  if (0 < iVar1) {
    if (param_2 != 0) {
      FUN_180196900(param_1,"%*s%s:\n",param_5,&PTR_1802ead18,param_2,uVar5);
      param_5 = param_5 + 4;
    }
    iVar3 = 0;
    iVar1 = FUN_1801958b0(param_3);
    if (0 < iVar1) {
      do {
        uVar5 = FUN_180195ae0(param_3,iVar3);
        if ((param_5 != 0) &&
           (iVar1 = FUN_180196900(param_1,&DAT_18030daf0,param_5,&PTR_1802ead18), iVar1 < 1)) {
          return 0;
        }
        uVar2 = FUN_1801a3790(uVar5);
        FUN_18019b2d0(param_1,uVar2);
        iVar1 = FUN_1801a3d50(uVar5);
        ppuVar4 = &PTR_1802ead18;
        if (iVar1 != 0) {
          ppuVar4 = (undefined **)"critical";
        }
        iVar1 = FUN_180196900(param_1,": %s\n",ppuVar4);
        if (iVar1 < 1) {
          return 0;
        }
        iVar1 = FUN_1801a4b20(param_1,uVar5,param_4,param_5 + 4);
        if (iVar1 == 0) {
          FUN_180196900(param_1,&DAT_18030daf0,param_5 + 4,&PTR_1802ead18);
          uVar5 = FUN_1801a3d70(uVar5);
          FUN_18019ccd0(param_1,uVar5);
        }
        iVar1 = FUN_18018dce0(param_1,&DAT_1802fa360,1);
        if (iVar1 < 1) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        iVar1 = FUN_1801958b0(param_3);
      } while (iVar3 < iVar1);
    }
  }
  return 1;
}



// ===== FUN_1801a5010 @ 1801a5010 (size 92)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a5010(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 2) != 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_1801a58d0(param_2);
      return uVar2;
    }
    if ((((uVar1 & 2) == 0) || ((*(byte *)(param_2 + 0xd4) & 0x88) != 0)) &&
       (((uVar1 & 8) == 0 || ((*(byte *)(param_2 + 0xdc) & 0x80) != 0)))) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801a5070 @ 1801a5070 (size 92)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a5070(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 0x11) != 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_1801a58d0(param_2);
      return uVar2;
    }
    if ((((uVar1 & 8) == 0) || ((*(byte *)(param_2 + 0xdc) & 0x40) != 0)) &&
       (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0xa8) != 0)))) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801a50d0 @ 1801a50d0 (size 106)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a50d0(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 0x11) != 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_1801a58d0(param_2);
      return uVar2;
    }
    if (((((uVar1 & 8) == 0) || ((*(byte *)(param_2 + 0xdc) & 0x40) != 0)) &&
        (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0xa8) != 0)))) &&
       (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0x20) != 0)))) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801a5140 @ 1801a5140 (size 68)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a5140(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1801a5950(param_2,param_3);
  if (((((int)uVar1 != 0) && (param_3 == 0)) && ((*(byte *)(param_2 + 0xd0) & 2) != 0)) &&
     ((*(byte *)(param_2 + 0xd4) & 0xc0) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_1801a5190 @ 1801a5190 (size 68)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a5190(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1801a5950(param_2,param_3);
  if (((((int)uVar1 != 0) && (param_3 == 0)) && ((*(byte *)(param_2 + 0xd0) & 2) != 0)) &&
     ((*(byte *)(param_2 + 0xd4) & 0x20) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_1801a51e0 @ 1801a51e0 (size 71)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a51e0(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    if (((*(byte *)(param_2 + 0xd0) & 2) == 0) || ((*(byte *)(param_2 + 0xd4) & 2) != 0)) {
      return 1;
    }
  }
  else {
    uVar1 = FUN_1801a57d0(param_2);
    if ((int)uVar1 != 2) {
      return uVar1;
    }
  }
  return 0;
}



// ===== FUN_1801a5230 @ 1801a5230 (size 140)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a5230(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = FUN_1801a57d0(param_2);
    return uVar2;
  }
  if (((((*(uint *)(param_2 + 0xd0) & 2) != 0) &&
       (((*(uint *)(param_2 + 0xd4) & 0xffffff3f) != 0 || ((*(uint *)(param_2 + 0xd4) & 0xc0) == 0))
       )) || ((*(uint *)(param_2 + 0xd0) & 4) == 0)) || (*(int *)(param_2 + 0xd8) != 0x40)) {
    return 0;
  }
  iVar1 = FUN_1801a3cf0(param_2,0x7e,0xffffffff);
  if (-1 < iVar1) {
    uVar2 = FUN_1801a3cd0(param_2,iVar1);
    iVar1 = FUN_1801a3d50(uVar2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// ===== FUN_1801a52f0 @ 1801a52f0 (size 74)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_1801a52f0(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 9) {
    return &DAT_1803bdca0 + (longlong)param_1 * 0x30;
  }
  puVar1 = (undefined *)FUN_180195ae0(DAT_1803c65a0,param_1 + -9);
  return puVar1;
}



// ===== FUN_1801a5340 @ 1801a5340 (size 71)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801a5340(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_38 [12];
  undefined8 uStack_8;
  
  uStack_8 = 0x1801a534a;
  uVar1 = param_1 - 1;
  if (8 < uVar1) {
    if (DAT_1803c65a0 != 0) {
      local_38[0] = param_1;
      iVar2 = FUN_180195630(DAT_1803c65a0,local_38);
      if (-1 < iVar2) {
        return iVar2 + 9;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_1801a5390 @ 1801a5390 (size 244)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a5390(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 != (longlong *)0x0) {
    if (((*param_2 != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) &&
       (iVar2 = FUN_1801df9f0(), iVar2 != 0)) {
      return 0x1e;
    }
    lVar1 = param_2[2];
    if (lVar1 != 0) {
      uVar3 = FUN_1800d2280(param_1);
      iVar2 = FUN_1801dbf30(uVar3,lVar1);
      if (iVar2 != 0) {
        return 0x1f;
      }
    }
    lVar1 = param_2[1];
    if (lVar1 != 0) {
      iVar5 = 0;
      iVar2 = FUN_1801958b0(lVar1);
      if (0 < iVar2) {
        do {
          piVar4 = (int *)FUN_180195ae0(lVar1,iVar5);
          if (*piVar4 == 4) {
            lVar1 = *(longlong *)(piVar4 + 2);
            if (lVar1 == 0) {
              return 0;
            }
            uVar3 = FUN_1801a3490(param_1);
            iVar2 = FUN_1801a2de0(lVar1,uVar3);
            if (iVar2 == 0) {
              return 0;
            }
            return 0x1f;
          }
          iVar5 = iVar5 + 1;
          iVar2 = FUN_1801958b0(lVar1);
        } while (iVar5 < iVar2);
      }
    }
  }
  return 0;
}



// ===== FUN_1801a5490 @ 1801a5490 (size 138)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801a5490(longlong param_1)

{
  uint uVar1;
  
  FUN_1801a5c30();
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) != 0) {
      return (uVar1 & 0xff) >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    if ((uVar1 & 2) != 0) {
      return 4;
    }
    if (((uVar1 & 8) != 0) && ((*(byte *)(param_1 + 0xdc) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}



// ===== FUN_1801a5520 @ 1801a5520 (size 289)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a5520(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_1801a3490(param_2);
  uVar3 = FUN_1801a34d0(param_1);
  iVar1 = FUN_1801a2de0(uVar3,uVar2);
  if (iVar1 != 0) {
    return 0x1d;
  }
  FUN_1801a5c30(param_1);
  if ((*(byte *)(param_1 + 0xd0) & 0x80) != 0) {
    return 1;
  }
  FUN_1801a5c30(param_2);
  if ((*(byte *)(param_2 + 0xd0) & 0x80) != 0) {
    return 1;
  }
  if ((*(longlong *)(param_2 + 0xe8) != 0) && (uVar2 = FUN_1801a5390(param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  uVar2 = FUN_1801a3460(param_1);
  uVar2 = FUN_1801a5830(uVar2,param_2);
  if ((int)uVar2 == 0) {
    if ((*(byte *)(param_1 + 0xd0) & 2) != 0) {
      if ((*(uint *)(param_2 + 0xd0) & 0x400) == 0) {
        if ((*(byte *)(param_1 + 0xd4) & 4) == 0) {
          return 0x20;
        }
      }
      else if ((*(byte *)(param_1 + 0xd4) & 0x80) == 0) {
        return 0x27;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_1801a5650 @ 1801a5650 (size 170)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a5650(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int local_38 [10];
  undefined8 uStack_10;
  
  uStack_10 = 0x1801a5665;
  FUN_1801a5c30();
  if ((*(byte *)(param_1 + 0xd0) & 0x80) != 0) {
    return 0xffffffff;
  }
  if (param_2 == -1) {
    return 1;
  }
  uVar4 = param_2 - 1;
  if (8 < uVar4) {
    if (DAT_1803c65a0 == 0) {
      return 0xffffffff;
    }
    local_38[0] = param_2;
    iVar1 = FUN_180195630(DAT_1803c65a0,local_38);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    uVar4 = iVar1 + 9;
  }
  if (uVar4 == 0xffffffff) {
    return 0xffffffff;
  }
  lVar2 = FUN_1801a52f0();
                    /* WARNING: Could not recover jumptable at 0x0001801a56e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_3);
  return uVar3;
}



// ===== FUN_1801a5700 @ 1801a5700 (size 68)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801a5700(longlong param_1)

{
  FUN_1801a5c30();
  if ((char)*(uint *)(param_1 + 0xd0) < '\0') {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xd0) & 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0xd8);
}



// ===== FUN_1801a5780 @ 1801a5780 (size 68)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801a5780(longlong param_1)

{
  FUN_1801a5c30();
  if ((char)*(uint *)(param_1 + 0xd0) < '\0') {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xd0) & 2) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0xd4);
}



// ===== FUN_1801a57d0 @ 1801a57d0 (size 94)

undefined8 FUN_1801a57d0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 0x2040) == 0x2040) {
        return 3;
      }
      if ((uVar1 & 2) != 0) {
        return 4;
      }
      if (((uVar1 & 8) != 0) && ((*(byte *)(param_1 + 0xdc) & 7) != 0)) {
        return 5;
      }
    }
    else if ((uVar1 & 0x10) != 0) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801a5830 @ 1801a5830 (size 158)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801a5830(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_res8 [2];
  undefined4 local_res18 [4];
  
  if (param_1 == 0) {
    return 0x4d;
  }
  uVar1 = FUN_18019dc20();
  iVar2 = FUN_1801dcba0(uVar1,0,local_res8);
  if (iVar2 == 0) {
    local_res8[0] = FUN_18019dc20(param_1);
  }
  uVar1 = FUN_1801b96c0(*(undefined8 *)(param_2 + 0x20));
  iVar2 = FUN_1801dcba0(uVar1,0,local_res18);
  if (iVar2 == 0) {
    return 0x4e;
  }
  iVar2 = FUN_18019e810(local_res18[0]);
  uVar1 = 0;
  if (local_res8[0] != iVar2) {
    uVar1 = 0x4c;
  }
  return uVar1;
}



// ===== FUN_1801a58d0 @ 1801a58d0 (size 100)

undefined8 FUN_1801a58d0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 0x2040) == 0x2040) {
        return 3;
      }
      if ((uVar1 & 2) != 0) {
        return 4;
      }
      if ((((uVar1 & 8) != 0) && ((*(uint *)(param_1 + 0xdc) & 7) != 0)) &&
         ((*(uint *)(param_1 + 0xdc) & 4) != 0)) {
        return 5;
      }
    }
    else if ((uVar1 & 0x10) != 0) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801a5950 @ 1801a5950 (size 104)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a5950(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((*(uint *)(param_1 + 0xd0) & 4) == 0) || ((*(byte *)(param_1 + 0xd8) & 4) != 0)) {
    if (param_2 == 0) {
      if (((*(uint *)(param_1 + 0xd0) & 8) == 0) || ((*(uint *)(param_1 + 0xdc) & 0x20) != 0)) {
        return 1;
      }
      if ((char)*(uint *)(param_1 + 0xdc) < '\0') {
        return 2;
      }
    }
    else {
      uVar1 = FUN_1801a57d0();
      if (((int)uVar1 != 0) && (((int)uVar1 != 5 || ((*(byte *)(param_1 + 0xdc) & 2) != 0)))) {
        return uVar1;
      }
    }
  }
  return 0;
}



// ===== FUN_1801a59c0 @ 1801a59c0 (size 340)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a59c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int local_res8 [2];
  
  lVar2 = FUN_1801a3d30(param_1,0x67,local_res8,0);
  *(longlong *)(param_1 + 0xf8) = lVar2;
  if ((lVar2 == 0) && (local_res8[0] != -1)) {
    return 0;
  }
  local_res8[0] = 0;
  iVar1 = FUN_1801958b0(lVar2);
  if (local_res8[0] < iVar1) {
    do {
      puVar3 = (undefined8 *)FUN_180195ae0(*(undefined8 *)(param_1 + 0xf8),local_res8[0]);
      piVar4 = (int *)puVar3[1];
      if (piVar4 == (int *)0x0) {
        uVar5 = 0x807f;
      }
      else {
        iVar1 = *piVar4;
        if (iVar1 < 1) {
          uVar5 = *(uint *)(puVar3 + 3);
        }
        else {
          uVar5 = (uint)**(byte **)(piVar4 + 2);
          *(uint *)(puVar3 + 3) = (uint)**(byte **)(piVar4 + 2);
          iVar1 = *piVar4;
        }
        if (1 < iVar1) {
          uVar5 = uVar5 | (uint)*(byte *)(*(longlong *)(piVar4 + 2) + 1) << 8;
        }
        uVar5 = uVar5 & 0x807f;
      }
      *(uint *)(puVar3 + 3) = uVar5;
      if (((int *)*puVar3 != (int *)0x0) && (*(int *)*puVar3 == 1)) {
        iVar6 = 0;
        iVar1 = FUN_1801958b0(puVar3[2]);
        if (0 < iVar1) {
          do {
            piVar4 = (int *)FUN_180195ae0(puVar3[2],iVar6);
            if (*piVar4 == 4) {
              lVar2 = *(longlong *)(piVar4 + 2);
              if (lVar2 != 0) goto LAB_1801a5ac2;
              break;
            }
            iVar6 = iVar6 + 1;
            iVar1 = FUN_1801958b0(puVar3[2]);
          } while (iVar6 < iVar1);
        }
        lVar2 = FUN_1801a3490(param_1);
LAB_1801a5ac2:
        iVar1 = FUN_1801d6660(*puVar3,lVar2);
        if (iVar1 == 0) {
          return 0;
        }
      }
      local_res8[0] = local_res8[0] + 1;
      iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 0xf8));
    } while (local_res8[0] < iVar1);
  }
  return 1;
}



// ===== FUN_1801a5b20 @ 1801a5b20 (size 198)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a5b20(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_1801a3490(param_2);
  uVar3 = FUN_1801a34d0(param_1);
  iVar1 = FUN_1801a2de0(uVar3,uVar2);
  if (iVar1 != 0) {
    return 0x1d;
  }
  FUN_1801a5c30(param_1);
  if (((*(byte *)(param_1 + 0xd0) & 0x80) != 0) ||
     (FUN_1801a5c30(param_2), (*(byte *)(param_2 + 0xd0) & 0x80) != 0)) {
    return 1;
  }
  if ((*(longlong *)(param_2 + 0xe8) == 0) || (uVar2 = FUN_1801a5390(param_1), (int)uVar2 == 0)) {
    uVar2 = FUN_1801a3460(param_1);
    uVar2 = FUN_1801a5830(uVar2,param_2);
    return uVar2;
  }
  return uVar2;
}



// ===== FUN_1801a5c30 @ 1801a5c30 (size 1633)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a5c30(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  int local_res8 [2];
  int local_res10 [2];
  
  if (*(int *)(param_1 + 0x148) != 0) {
    return;
  }
  FUN_1801add90(*(undefined8 *)(param_1 + 0x140));
  if ((*(uint *)(param_1 + 0xd0) & 0x100) != 0) {
    FUN_1801ade50(*(undefined8 *)(param_1 + 0x140));
    return;
  }
  uVar5 = FUN_18019db60();
  iVar3 = FUN_1801a1b40(param_1,uVar5,param_1 + 0x120,0);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x100080;
  }
  iVar3 = FUN_1801a2bd0(param_1);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x40;
  }
  piVar6 = (int *)FUN_1801a3d30(param_1,0x57,local_res8);
  uVar4 = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    uVar10 = *(uint *)(param_1 + 0xd0);
    if (*piVar6 != 0) {
      uVar10 = uVar10 | 0x10;
      *(uint *)(param_1 + 0xd0) = uVar10;
    }
    lVar8 = *(longlong *)(piVar6 + 2);
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 200) = 0xffffffff;
LAB_1801a5d76:
      FUN_1801e4060(piVar6);
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 1;
    }
    else if (*(int *)(lVar8 + 4) == 0x102) {
      *(undefined4 *)(param_1 + 200) = 0;
      *(uint *)(param_1 + 0xd0) = uVar10 | 0x80;
      FUN_1801e4060(piVar6);
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 1;
    }
    else {
      iVar3 = FUN_1801dbfa0(lVar8);
      *(int *)(param_1 + 200) = iVar3;
      if ((*piVar6 != 0) || (iVar3 == 0)) goto LAB_1801a5d76;
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
      *(undefined4 *)(param_1 + 200) = 0;
      FUN_1801e4060(piVar6);
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 1;
    }
  }
  plVar7 = (longlong *)FUN_1801a3d30(param_1,0x297,local_res8,0);
  if (plVar7 == (longlong *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    if ((((*(byte *)(param_1 + 0xd0) & 0x10) != 0) ||
        (iVar3 = FUN_1801a3cf0(param_1,0x55,0xffffffff), -1 < iVar3)) ||
       (iVar3 = FUN_1801a3cf0(param_1,0x56,0xffffffff), -1 < iVar3)) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
    if (*plVar7 != 0) {
      uVar4 = FUN_1801dbfa0();
    }
    *(undefined4 *)(param_1 + 0xcc) = uVar4;
    FUN_1801e3e10(plVar7);
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x400;
  }
  piVar6 = (int *)FUN_1801a3d30(param_1,0x53,local_res8);
  if (piVar6 == (int *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    if (*piVar6 < 1) {
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    else {
      bVar1 = **(byte **)(piVar6 + 2);
      *(uint *)(param_1 + 0xd4) = (uint)bVar1;
      if (1 < *piVar6) {
        uVar2 = *(undefined1 *)(*(longlong *)(piVar6 + 2) + 1);
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 2;
        *(uint *)(param_1 + 0xd4) = (uint)CONCAT11(uVar2,bVar1);
        FUN_1801bc3c0(piVar6);
        goto LAB_1801a5ea6;
      }
    }
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 2;
    FUN_1801bc3c0(piVar6);
  }
LAB_1801a5ea6:
  *(undefined4 *)(param_1 + 0xd8) = 0;
  lVar8 = FUN_1801a3d30(param_1,0x7e,local_res8);
  if (lVar8 == 0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 4;
    local_res8[0] = 0;
    iVar3 = FUN_1801958b0(lVar8);
    if (local_res8[0] < iVar3) {
      do {
        uVar5 = FUN_180195ae0(lVar8,local_res8[0]);
        iVar3 = FUN_1801b96c0(uVar5);
        if (iVar3 < 0xb5) {
          if (iVar3 == 0xb4) {
            *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
          }
          else {
            switch(iVar3) {
            case 0x81:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
              break;
            case 0x82:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
              break;
            case 0x83:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
              break;
            case 0x84:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
              break;
            case 0x85:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x40;
              break;
            case 0x89:
            case 0x8b:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x10;
            }
          }
        }
        else if (iVar3 == 0x129) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
        }
        else if (iVar3 == 0x38e) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x100;
        }
        local_res8[0] = local_res8[0] + 1;
        iVar3 = FUN_1801958b0(lVar8);
      } while (local_res8[0] < iVar3);
    }
    FUN_1801958f0(lVar8,FUN_18019aa30);
  }
  piVar6 = (int *)FUN_1801a3d30(param_1,0x47,local_res8);
  if (piVar6 == (int *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    if (*piVar6 < 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uint)**(byte **)(piVar6 + 2);
    }
    *(uint *)(param_1 + 0xdc) = uVar10;
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 8;
    FUN_1801bc3c0(piVar6);
  }
  lVar8 = FUN_1801a3d30(param_1,0x52,local_res8);
  *(longlong *)(param_1 + 0xe0) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = FUN_1801a3d30(param_1,0x5a,local_res8);
  *(longlong *)(param_1 + 0xe8) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  uVar5 = FUN_1801a3490(param_1);
  uVar9 = FUN_1801a34d0(param_1);
  iVar3 = FUN_1801a2de0(uVar9,uVar5);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x20;
    iVar3 = FUN_1801a5390(param_1,*(undefined8 *)(param_1 + 0xe8));
    if (iVar3 == 0) {
      uVar5 = FUN_1801a3460(param_1);
      iVar3 = FUN_1801a5830(uVar5,param_1);
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x2000;
      }
    }
  }
  lVar8 = FUN_1801a3d30(param_1,0x55,local_res8);
  *(longlong *)(param_1 + 0x100) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = FUN_1801a3d30(param_1,0x29a,local_res8,0);
  *(longlong *)(param_1 + 0x108) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  iVar3 = FUN_1801a59c0(param_1);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = FUN_1801a3d30(param_1,0x122,local_res8,0);
  *(longlong *)(param_1 + 0x110) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = FUN_1801a3d30(param_1,0x123,local_res8,0);
  *(longlong *)(param_1 + 0x118) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  local_res8[0] = 0;
  iVar3 = FUN_1801a3d10(param_1);
  if (local_res8[0] < iVar3) {
    do {
      uVar5 = FUN_1801a3cd0(param_1,local_res8[0]);
      uVar9 = FUN_1801a3790(uVar5);
      iVar3 = FUN_1801b96c0(uVar9);
      if (iVar3 == 0x359) {
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x1000;
      }
      iVar3 = FUN_1801a3d50(uVar5);
      if (iVar3 != 0) {
        uVar5 = FUN_1801a3790(uVar5);
        local_res10[0] = FUN_1801b96c0(uVar5);
        if ((local_res10[0] == 0) ||
           (lVar8 = FUN_1801b8ee0(local_res10,&DAT_18030dc98,0xe,4,&LAB_1801a5940), lVar8 == 0)) {
          *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x200;
          break;
        }
      }
      local_res8[0] = local_res8[0] + 1;
      iVar3 = FUN_1801a3d10(param_1);
    } while (local_res8[0] < iVar3);
  }
  FUN_1801a2c40(param_1);
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x100;
  *(undefined4 *)(param_1 + 0x148) = 1;
  FUN_1801ade50(*(undefined8 *)(param_1 + 0x140));
  return;
}



// ===== FUN_1801a62c0 @ 1801a62c0 (size 159)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a62c0(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + 0x100);
    lVar2 = 0x10;
    puVar3 = (undefined8 *)(param_1 + 0x80);
    do {
      if ((*pbVar1 & 1) != 0) {
        FUN_180195e10(*puVar3,"crypto\\err\\err.c",0x128);
        *puVar3 = 0;
      }
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      puVar3 = puVar3 + 1;
      pbVar1 = pbVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    FUN_180195e10(param_1,"crypto\\err\\err.c",0x12a);
  }
  return;
}



// ===== FUN_1801a6360 @ 1801a6360 (size 322)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a6360(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 local_res10 [3];
  
  iVar3 = 0x50;
  puVar4 = (undefined1 *)FUN_180195dc0(0x51,"crypto\\err\\err.c",0x374);
  if (puVar4 != (undefined1 *)0x0) {
    iVar7 = 0;
    iVar10 = 0;
    *puVar4 = 0;
    puVar6 = puVar4;
    if (0 < param_1) {
      do {
        pcVar8 = "<NULL>";
        if (*(char **)((longlong)register0x00000020 + 0x10) != (char *)0x0) {
          pcVar8 = *(char **)((longlong)register0x00000020 + 0x10);
        }
        cVar1 = *pcVar8;
        pcVar5 = pcVar8;
        for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
          pcVar5 = pcVar5 + 1;
          cVar1 = *pcVar5;
        }
        iVar7 = iVar7 + (uVar2 & 0x7fffffff);
        puVar4 = puVar6;
        if (iVar3 < iVar7) {
          iVar3 = iVar7 + 0x14;
          puVar4 = (undefined1 *)
                   FUN_180195e50(puVar6,(longlong)(iVar7 + 0x15),"crypto\\err\\err.c",0x382);
          if (puVar4 == (undefined1 *)0x0) {
            uVar9 = 900;
            goto LAB_1801a6471;
          }
        }
        FUN_1801ba790(puVar4,pcVar8,(longlong)iVar3 + 1);
        iVar10 = iVar10 + 1;
        puVar6 = puVar4;
        register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
      } while (iVar10 < param_1);
    }
    iVar3 = FUN_1801a74f0(puVar4,3);
    if (iVar3 == 0) {
      uVar9 = 0x38c;
      puVar6 = puVar4;
LAB_1801a6471:
      FUN_180195e10(puVar6,"crypto\\err\\err.c",uVar9);
    }
  }
  return;
}



// ===== FUN_1801a64b0 @ 1801a64b0 (size 190)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a64b0(void)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = FUN_1801a6a80();
  if (lVar1 != 0) {
    pbVar2 = (byte *)(lVar1 + 0x100);
    lVar3 = 0x10;
    puVar4 = (undefined8 *)(lVar1 + 0x80);
    do {
      if ((*pbVar2 & 1) != 0) {
        FUN_180195e10(*puVar4,"crypto\\err\\err.c",0x1d6);
        *puVar4 = 0;
      }
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[-0x100] = 0;
      pbVar2[-0xff] = 0;
      pbVar2[-0xfe] = 0;
      pbVar2[-0xfd] = 0;
      pbVar2[-0xc0] = 0;
      pbVar2[-0xbf] = 0;
      pbVar2[-0xbe] = 0;
      pbVar2[-0xbd] = 0;
      puVar4[0x18] = 0;
      puVar4 = puVar4 + 1;
      pbVar2[0xc0] = 0xff;
      pbVar2[0xc1] = 0xff;
      pbVar2[0xc2] = 0xff;
      pbVar2[0xc3] = 0xff;
      pbVar2 = pbVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined8 *)(lVar1 + 0x200) = 0;
  }
  return;
}



// ===== FUN_1801a6570 @ 1801a6570 (size 108)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a6570(void)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = FUN_1801a6a80();
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 0x200);
    uVar4 = (ulonglong)iVar3;
    uVar5 = uVar4;
    while (((longlong)*(int *)(lVar2 + 0x204) != uVar4 &&
           (iVar3 = (int)uVar5, (*(byte *)(lVar2 + uVar4 * 4) & 1) == 0))) {
      if ((longlong)uVar4 < 1) {
        uVar5 = 0xf;
        uVar4 = 0xf;
      }
      else {
        uVar5 = (ulonglong)(iVar3 - 1);
        uVar4 = uVar4 - 1;
      }
      iVar3 = (int)uVar5;
    }
    if (*(int *)(lVar2 + 0x204) != iVar3) {
      puVar1 = (uint *)(lVar2 + (longlong)iVar3 * 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801a65e0 @ 1801a65e0 (size 811)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a65e0(uint param_1,char *param_2,longlong param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  uint local_148;
  char *local_140;
  uint local_138 [4];
  uint local_128 [4];
  uint local_118 [4];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  if (param_3 == 0) {
    return;
  }
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_188;
  local_148 = param_1 >> 0x18;
  local_140 = param_2;
  iVar3 = FUN_1801addb0(&DAT_1803c65bc,FUN_1801a72c0);
  uVar7 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar6 = DAT_1803c8dd0;
  }
  if (iVar6 == 0) {
LAB_1801a66af:
    FUN_180196a10(local_108,0x40,"lib(%lu)",param_1 >> 0x18);
    puVar9 = local_108;
  }
  else {
    local_128[0] = param_1 & 0xff000000;
    FUN_1801add90(DAT_1803c65c0);
    lVar4 = FUN_1801e5190(DAT_1803c65c8,local_128);
    FUN_1801ade50(DAT_1803c65c0);
    if ((lVar4 == 0) || (puVar9 = *(undefined1 **)(lVar4 + 8), puVar9 == (undefined1 *)0x0))
    goto LAB_1801a66af;
  }
  iVar3 = FUN_1801addb0(&DAT_1803c65bc,FUN_1801a72c0);
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar6 = DAT_1803c8dd0;
  }
  if (iVar6 == 0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    local_118[0] = param_1 & 0xfffff000;
    FUN_1801add90(DAT_1803c65c0);
    lVar4 = FUN_1801e5190(DAT_1803c65c8,local_118);
    FUN_1801ade50(DAT_1803c65c0);
    if (lVar4 == 0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      puVar8 = *(undefined1 **)(lVar4 + 8);
    }
  }
  if (puVar8 == (undefined1 *)0x0) {
    FUN_180196a10(local_c8,0x40,"func(%lu)",param_1 >> 0xc & 0xfff);
    puVar8 = local_c8;
  }
  iVar3 = FUN_1801addb0(&DAT_1803c65bc,FUN_1801a72c0);
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar6 = DAT_1803c8dd0;
  }
  if (iVar6 != 0) {
    local_138[0] = param_1 & 0xff000fff;
    FUN_1801add90(DAT_1803c65c0);
    lVar4 = FUN_1801e5190(DAT_1803c65c8,local_138);
    FUN_1801ade50(DAT_1803c65c0);
    if (lVar4 == 0) {
      local_138[0] = param_1 & 0xfff;
      FUN_1801add90(DAT_1803c65c0);
      lVar4 = FUN_1801e5190(DAT_1803c65c8,local_138);
      FUN_1801ade50(DAT_1803c65c0);
      if (lVar4 == 0) goto LAB_1801a6823;
    }
    local_158 = *(undefined1 **)(lVar4 + 8);
    if (local_158 != (undefined1 *)0x0) goto LAB_1801a6847;
  }
LAB_1801a6823:
  FUN_180196a10(local_88,0x40,"reason(%lu)",param_1 & 0xfff);
  local_158 = local_88;
LAB_1801a6847:
  pcVar2 = local_140;
  local_168 = puVar9;
  local_160 = puVar8;
  FUN_180196a10(local_140,param_3,"error:%08lX:%s:%s:%s",param_1);
  cVar1 = *pcVar2;
  pcVar5 = pcVar2;
  for (; (cVar1 != '\0' && (uVar7 < 0x80000000)); uVar7 = uVar7 + 1) {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  if ((ulonglong)(uVar7 & 0x7fffffff) == param_3 - 1U) {
    local_158 = (undefined1 *)(CONCAT44(local_158._4_4_,param_1) & 0xffffffff00000fff);
    local_160 = (undefined1 *)(CONCAT44(local_160._4_4_,param_1 >> 0xc) & 0xffffffff00000fff);
    local_168 = (undefined1 *)CONCAT44(local_168._4_4_,local_148);
    FUN_180196a10(pcVar2,param_3,"err:%lx:%lx:%lx:%lx",param_1);
  }
  return;
}



// ===== FUN_1801a6910 @ 1801a6910 (size 147)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a6910(uint param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x1801a6920;
  iVar1 = FUN_1801addb0(&DAT_1803c65bc,FUN_1801a72c0);
  uVar4 = 0;
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = DAT_1803c8dd0;
  }
  if (iVar3 == 0) {
    return 0;
  }
  local_18[0] = param_1 & 0xfffff000;
  FUN_1801add90(DAT_1803c65c0);
  lVar2 = FUN_1801e5190(DAT_1803c65c8,local_18);
  FUN_1801ade50(DAT_1803c65c0);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 8);
  }
  return uVar4;
}



// ===== FUN_1801a6a10 @ 1801a6a10 (size 110)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801a6a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1801addb0(&DAT_1803c65bc,FUN_1801a72c0,param_3,param_4,0x1801a6a1a);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1803c8dd0;
  }
  if (iVar2 == 0) {
    return 0;
  }
  FUN_1801add90(DAT_1803c65c0);
  iVar2 = DAT_1803be420;
  DAT_1803be420 = DAT_1803be420 + 1;
  FUN_1801ade50(DAT_1803c65c0);
  return iVar2;
}



// ===== FUN_1801a6a80 @ 1801a6a80 (size 266)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a6a80(void)

{
  DWORD dwErrCode;
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  dwErrCode = GetLastError();
  iVar1 = FUN_1801e4120(0x40000,0);
  if (iVar1 != 0) {
    iVar2 = FUN_1801addb0(&DAT_1803c65b0,FUN_1801a7460);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = DAT_1803c8dd4;
    }
    if (iVar1 != 0) {
      lVar3 = FUN_1801adc80(&DAT_1803c65b8);
      if (lVar3 != -1) {
        if (lVar3 != 0) {
LAB_1801a6b51:
          SetLastError(dwErrCode);
          return lVar3;
        }
        iVar1 = FUN_1801ade20(&DAT_1803c65b8,0xffffffffffffffff);
        if (iVar1 != 0) {
          lVar3 = FUN_180196100(0x208,"crypto\\err\\err.c",0x2fe);
          if (lVar3 != 0) {
            iVar1 = FUN_1801e4970(2);
            if (iVar1 != 0) {
              iVar1 = FUN_1801ade20(&DAT_1803c65b8,lVar3);
              if (iVar1 != 0) {
                FUN_1801e4120(2);
                goto LAB_1801a6b51;
              }
            }
            FUN_1801a62c0(lVar3);
          }
          FUN_1801ade20(&DAT_1803c65b8,0);
        }
      }
    }
  }
  return 0;
}



// ===== FUN_1801a6b90 @ 1801a6b90 (size 760)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a6b90(void)

{
  char cVar1;
  int iVar2;
  DWORD dwErrCode;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  int *piVar7;
  uint *puVar8;
  char *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar2 = FUN_1801addb0(&DAT_1803c65bc,FUN_1801a72c0);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = DAT_1803c8dd0;
  }
  if (iVar3 == 0) {
    return 0;
  }
  piVar7 = &DAT_1803bde50;
  FUN_1801add90(DAT_1803c65c0);
  iVar3 = DAT_1803bde50;
  while (iVar3 != 0) {
    FUN_1801e4f10(DAT_1803c65c8,piVar7);
    piVar7 = piVar7 + 4;
    iVar3 = *piVar7;
  }
  FUN_1801ade50(DAT_1803c65c0);
  piVar7 = &DAT_1803be230;
  FUN_1801add90(DAT_1803c65c0);
  iVar3 = DAT_1803be230;
  while (iVar3 != 0) {
    FUN_1801e4f10(DAT_1803c65c8,piVar7);
    piVar7 = piVar7 + 4;
    iVar3 = *piVar7;
  }
  FUN_1801ade50(DAT_1803c65c0);
  puVar8 = &DAT_1803be0a0;
  puVar5 = &DAT_1803be0a0;
  uVar12 = DAT_1803be0a0;
  while (uVar12 != 0) {
    *puVar5 = uVar12 | 0x2000000;
    puVar5 = puVar5 + 4;
    uVar12 = *puVar5;
  }
  FUN_1801add90(DAT_1803c65c0);
  uVar12 = DAT_1803be0a0;
  while (uVar12 != 0) {
    FUN_1801e4f10(DAT_1803c65c8,puVar8);
    puVar8 = puVar8 + 4;
    uVar12 = *puVar8;
  }
  FUN_1801ade50(DAT_1803c65c0);
  uVar11 = 0;
  pcVar9 = &DAT_1803c6dd0;
  dwErrCode = GetLastError();
  FUN_1801add90(DAT_1803c65c0);
  if (DAT_1803be424 == 0) {
    FUN_1801ade50(DAT_1803c65c0);
  }
  else {
    piVar7 = &DAT_1803c65d0;
    puVar5 = (uint *)&DAT_1803c65d0;
    uVar12 = 1;
    do {
      *puVar5 = uVar12 & 0xfff | 0x2000000;
      if (*(longlong *)(puVar5 + 2) == 0) {
        if ((uVar11 < 0x2000) && (iVar3 = FUN_1801ba890(uVar12,pcVar9,0x2000 - uVar11), iVar3 != 0))
        {
          cVar1 = *pcVar9;
          pcVar6 = pcVar9;
          for (uVar4 = 0; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar6;
          }
          *(char **)(puVar5 + 2) = pcVar9;
          lVar10 = uVar11 + (uVar4 & 0x7fffffff);
          pcVar9 = pcVar9 + (uVar4 & 0x7fffffff);
          while (&DAT_1803c6dd0 < pcVar9) {
            iVar3 = FUN_1801baab0((int)pcVar9[-1],8);
            if (iVar3 == 0) break;
            lVar10 = lVar10 + -1;
            pcVar9 = pcVar9 + -1;
          }
          *pcVar9 = '\0';
          pcVar9 = pcVar9 + 1;
          uVar11 = lVar10 + 1;
        }
        if (*(longlong *)(puVar5 + 2) == 0) {
          *(char **)(puVar5 + 2) = "unknown";
        }
      }
      uVar12 = uVar12 + 1;
      puVar5 = puVar5 + 4;
    } while ((int)uVar12 < 0x80);
    DAT_1803be424 = 0;
    FUN_1801ade50(DAT_1803c65c0);
    SetLastError(dwErrCode);
    FUN_1801add90(DAT_1803c65c0);
    iVar3 = DAT_1803c65d0;
    while (iVar3 != 0) {
      FUN_1801e4f10(DAT_1803c65c8,piVar7);
      piVar7 = piVar7 + 4;
      iVar3 = *piVar7;
    }
    FUN_1801ade50(DAT_1803c65c0);
  }
  return 1;
}



// ===== FUN_1801a6e90 @ 1801a6e90 (size 102)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a6e90(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1801a6b90();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar2 = *param_2;
  puVar1 = param_2;
  while (uVar2 != 0) {
    *puVar1 = uVar2 | param_1 << 0x18;
    puVar1 = puVar1 + 4;
    uVar2 = *puVar1;
  }
  FUN_1801a7490(param_2);
  return 1;
}



// ===== FUN_1801a6fa0 @ 1801a6fa0 (size 275)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a6fa0(void)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = FUN_1801a6a80();
  if (lVar3 != 0) {
    iVar5 = *(int *)(lVar3 + 0x204);
    iVar2 = *(int *)(lVar3 + 0x200);
    if (iVar5 != iVar2) {
      do {
        lVar4 = (longlong)iVar2;
        if ((*(byte *)(lVar3 + lVar4 * 4) & 1) != 0) break;
        if ((*(byte *)(lVar3 + 0x100 + lVar4 * 4) & 1) != 0) {
          FUN_180195e10(*(undefined8 *)(lVar3 + 0x80 + lVar4 * 8),"crypto\\err\\err.c",0x3a7);
          *(undefined8 *)(lVar3 + 0x80 + (longlong)*(int *)(lVar3 + 0x200) * 8) = 0;
          iVar2 = *(int *)(lVar3 + 0x200);
        }
        *(undefined4 *)(lVar3 + 0x100 + (longlong)iVar2 * 4) = 0;
        *(undefined4 *)(lVar3 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0;
        *(undefined4 *)(lVar3 + 0x40 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0;
        *(undefined8 *)(lVar3 + 0x140 + (longlong)*(int *)(lVar3 + 0x200) * 8) = 0;
        *(undefined4 *)(lVar3 + 0x1c0 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0xffffffff;
        if (*(int *)(lVar3 + 0x200) < 1) {
          iVar2 = 0xf;
        }
        else {
          iVar2 = *(int *)(lVar3 + 0x200) + -1;
        }
        *(int *)(lVar3 + 0x200) = iVar2;
        iVar5 = *(int *)(lVar3 + 0x204);
      } while (iVar5 != iVar2);
      if (iVar5 != iVar2) {
        puVar1 = (uint *)(lVar3 + (longlong)iVar2 * 4);
        *puVar1 = *puVar1 & 0xfffffffe;
        return 1;
      }
    }
  }
  return 0;
}



// ===== FUN_1801a70c0 @ 1801a70c0 (size 315)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a70c0(int param_1,uint param_2,uint param_3,undefined8 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = FUN_1801a6a80();
  if (lVar3 != 0) {
    uVar4 = *(int *)(lVar3 + 0x200) + 1U & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(lVar3 + 0x200) = uVar4;
    if (uVar4 == *(uint *)(lVar3 + 0x204)) {
      uVar1 = *(uint *)(lVar3 + 0x204) + 1 & 0x8000000f;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
      }
      *(uint *)(lVar3 + 0x204) = uVar1;
    }
    *(undefined4 *)(lVar3 + (longlong)(int)uVar4 * 4) = 0;
    *(uint *)(lVar3 + 0x40 + (longlong)*(int *)(lVar3 + 0x200) * 4) =
         (param_2 & 0xfff | param_1 << 0xc) << 0xc | param_3 & 0xfff;
    *(undefined8 *)(lVar3 + 0x140 + (longlong)*(int *)(lVar3 + 0x200) * 8) = param_4;
    *(undefined4 *)(lVar3 + 0x1c0 + (longlong)*(int *)(lVar3 + 0x200) * 4) = param_5;
    iVar2 = *(int *)(lVar3 + 0x200);
    if ((*(byte *)(lVar3 + 0x100 + (longlong)iVar2 * 4) & 1) != 0) {
      FUN_180195e10(*(undefined8 *)(lVar3 + 0x80 + (longlong)iVar2 * 8),"crypto\\err\\err.c",0x1c9);
      *(undefined8 *)(lVar3 + 0x80 + (longlong)*(int *)(lVar3 + 0x200) * 8) = 0;
      iVar2 = *(int *)(lVar3 + 0x200);
    }
    *(undefined4 *)(lVar3 + 0x100 + (longlong)iVar2 * 4) = 0;
  }
  return;
}



// ===== FUN_1801a7240 @ 1801a7240 (size 127)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a7240(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1801addb0(&DAT_1803c65bc,FUN_1801a72c0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1803c8dd0;
  }
  if (iVar2 == 0) {
    return 0;
  }
  FUN_1801add90(DAT_1803c65c0);
  iVar2 = *param_2;
  while (iVar2 != 0) {
    FUN_1801e4c10(DAT_1803c65c8,param_2);
    param_2 = param_2 + 4;
    iVar2 = *param_2;
  }
  FUN_1801ade50(DAT_1803c65c0);
  return 1;
}



// ===== FUN_1801a72c0 @ 1801a72c0 (size 134)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a72c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1801e4120(0,0,param_3,param_4,0x1801a72ca);
  if (iVar1 != 0) {
    DAT_1803c65c0 = FUN_1801add30();
    if (DAT_1803c65c0 != 0) {
      DAT_1803c65c8 = FUN_1801e5090(&LAB_1801a75b0,&LAB_1801a7590);
      if (DAT_1803c65c8 == 0) {
        FUN_1801adcf0(DAT_1803c65c0);
        DAT_1803c65c0 = 0;
        DAT_1803c8dd0 = 0;
        return;
      }
      DAT_1803c8dd0 = 1;
      return;
    }
  }
  DAT_1803c8dd0 = 0;
  return;
}



// ===== FUN_1801a7350 @ 1801a7350 (size 85)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a7350(void)

{
  if (DAT_1803c65b4 != 0) {
    FUN_1801adc20(&DAT_1803c65b8);
  }
  FUN_1801adcf0(DAT_1803c65c0);
  DAT_1803c65c0 = 0;
  FUN_1801e4e70(DAT_1803c65c8);
  DAT_1803c65c8 = 0;
  return;
}



// ===== FUN_1801a73b0 @ 1801a73b0 (size 83)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801a73b0(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_1801a6a80();
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = (int)(param_1 - 1 & ~param_1) >> 0x1f;
    puVar1 = (uint *)(lVar3 + (longlong)*(int *)(lVar3 + 0x200) * 4);
    *puVar1 = *puVar1 | ~uVar2 & 2;
  }
  return uVar2;
}



// ===== FUN_1801a7410 @ 1801a7410 (size 68)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a7410(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1801adc80(&DAT_1803c65b8);
  if (lVar1 == 0) {
    return;
  }
  FUN_1801ade20(&DAT_1803c65b8,0);
  FUN_1801a62c0(lVar1);
  return;
}



// ===== FUN_1801a7490 @ 1801a7490 (size 95)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a7490(int *param_1)

{
  int iVar1;
  
  FUN_1801add90(DAT_1803c65c0);
  iVar1 = *param_1;
  while (iVar1 != 0) {
    FUN_1801e4f10(DAT_1803c65c8,param_1);
    param_1 = param_1 + 4;
    iVar1 = *param_1;
  }
  FUN_1801ade50(DAT_1803c65c0);
  return 1;
}



// ===== FUN_1801a74f0 @ 1801a74f0 (size 147)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a74f0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1801a6a80();
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = (longlong)*(int *)(lVar1 + 0x200);
  if ((*(byte *)(lVar1 + 0x100 + lVar2 * 4) & 1) != 0) {
    FUN_180195e10(*(undefined8 *)(lVar1 + 0x80 + lVar2 * 8),"crypto\\err\\err.c",0x356);
  }
  *(undefined8 *)(lVar1 + 0x80 + lVar2 * 8) = param_1;
  *(undefined4 *)(lVar1 + 0x100 + lVar2 * 4) = param_2;
  return 1;
}



// ===== FUN_1801a75f0 @ 1801a75f0 (size 794)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1801a75f0(int param_1,int param_2,longlong *param_3,undefined4 *param_4,longlong *param_5,
             undefined4 *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar4 = FUN_1801a6a80();
  if (lVar4 != 0) {
    if ((param_1 != 0) && (param_2 != 0)) {
      if (param_3 != (longlong *)0x0) {
        *param_3 = (longlong)&PTR_1802ead18;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      if (param_5 != (longlong *)0x0) {
        *param_5 = (longlong)&PTR_1802ead18;
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 0;
      }
      return 0x44;
    }
    uVar8 = *(uint *)(lVar4 + 0x204);
    uVar3 = *(uint *)(lVar4 + 0x200);
    if (uVar8 != uVar3) {
      do {
        lVar5 = (longlong)(int)uVar3;
        if ((*(byte *)(lVar4 + lVar5 * 4) & 2) == 0) {
          uVar7 = uVar8 + 1 & 0x8000000f;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
          }
          lVar5 = (longlong)(int)uVar7;
          if ((*(byte *)(lVar4 + lVar5 * 4) & 2) == 0) break;
          *(uint *)(lVar4 + 0x204) = uVar7;
          if ((*(byte *)(lVar4 + 0x100 + lVar5 * 4) & 1) != 0) {
            FUN_180195e10(*(undefined8 *)(lVar4 + 0x80 + lVar5 * 8),"crypto\\err\\err.c",0x22d);
            *(undefined8 *)(lVar4 + 0x80 + (longlong)*(int *)(lVar4 + 0x204) * 8) = 0;
            uVar7 = *(uint *)(lVar4 + 0x204);
          }
          *(undefined4 *)(lVar4 + 0x100 + (longlong)(int)uVar7 * 4) = 0;
          *(undefined4 *)(lVar4 + (longlong)*(int *)(lVar4 + 0x204) * 4) = 0;
          *(undefined4 *)(lVar4 + 0x40 + (longlong)*(int *)(lVar4 + 0x204) * 4) = 0;
          *(undefined8 *)(lVar4 + 0x140 + (longlong)*(int *)(lVar4 + 0x204) * 8) = 0;
          *(undefined4 *)(lVar4 + 0x1c0 + (longlong)*(int *)(lVar4 + 0x204) * 4) = 0xffffffff;
          uVar3 = *(uint *)(lVar4 + 0x200);
        }
        else {
          if ((*(byte *)(lVar4 + 0x100 + lVar5 * 4) & 1) != 0) {
            FUN_180195e10(*(undefined8 *)(lVar4 + 0x80 + lVar5 * 8),"crypto\\err\\err.c",0x226);
            *(undefined8 *)(lVar4 + 0x80 + (longlong)*(int *)(lVar4 + 0x200) * 8) = 0;
            uVar3 = *(uint *)(lVar4 + 0x200);
          }
          *(undefined4 *)(lVar4 + 0x100 + (longlong)(int)uVar3 * 4) = 0;
          *(undefined4 *)(lVar4 + (longlong)*(int *)(lVar4 + 0x200) * 4) = 0;
          *(undefined4 *)(lVar4 + 0x40 + (longlong)*(int *)(lVar4 + 0x200) * 4) = 0;
          *(undefined8 *)(lVar4 + 0x140 + (longlong)*(int *)(lVar4 + 0x200) * 8) = 0;
          *(undefined4 *)(lVar4 + 0x1c0 + (longlong)*(int *)(lVar4 + 0x200) * 4) = 0xffffffff;
          if (*(int *)(lVar4 + 0x200) < 1) {
            uVar3 = 0xf;
            *(undefined4 *)(lVar4 + 0x200) = 0xf;
          }
          else {
            uVar3 = *(int *)(lVar4 + 0x200) - 1;
            *(uint *)(lVar4 + 0x200) = uVar3;
          }
        }
        uVar8 = *(uint *)(lVar4 + 0x204);
      } while (uVar8 != uVar3);
      if (uVar8 != uVar3) {
        if ((param_2 == 0) && (uVar3 = uVar8 + 1 & 0x8000000f, (int)uVar3 < 0)) {
          uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
        }
        lVar6 = (longlong)(int)uVar3;
        uVar1 = *(undefined4 *)(lVar4 + 0x40 + lVar6 * 4);
        lVar5 = lVar6 + 0x10;
        if (param_1 != 0) {
          *(uint *)(lVar4 + 0x204) = uVar3;
          *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
        }
        if ((param_3 != (longlong *)0x0) && (param_4 != (undefined4 *)0x0)) {
          lVar2 = *(longlong *)(lVar4 + 0x140 + lVar6 * 8);
          if (lVar2 == 0) {
            *param_3 = (longlong)&DAT_18030e28c;
            *param_4 = 0;
          }
          else {
            *param_3 = lVar2;
            *param_4 = *(undefined4 *)(lVar4 + 0x1c0 + lVar6 * 4);
          }
        }
        if (param_5 == (longlong *)0x0) {
          if (param_1 != 0) {
            lVar6 = lVar4 + lVar6 * 4;
            if ((*(byte *)(lVar6 + 0x100) & 1) != 0) {
              FUN_180195e10(*(undefined8 *)(lVar4 + lVar5 * 8),"crypto\\err\\err.c",0x24d);
              *(undefined8 *)(lVar4 + lVar5 * 8) = 0;
            }
            *(undefined4 *)(lVar6 + 0x100) = 0;
            return uVar1;
          }
        }
        else {
          lVar5 = *(longlong *)(lVar4 + lVar5 * 8);
          if (lVar5 == 0) {
            *param_5 = (longlong)&PTR_1802ead18;
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = 0;
              return uVar1;
            }
          }
          else {
            *param_5 = lVar5;
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = *(undefined4 *)(lVar4 + 0x100 + lVar6 * 4);
            }
          }
        }
        return uVar1;
      }
    }
  }
  return 0;
}



// ===== FUN_1801a79f0 @ 1801a79f0 (size 536)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1801a79f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_108;
  if (param_5 != 0) {
    local_b8 = param_1;
    uVar3 = FUN_1801e53d0();
    puVar4 = (undefined8 *)FUN_1801d5a60(uVar3,param_4);
    if (puVar4 != (undefined8 *)0x0) {
      if (puVar4[1] == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = FUN_1801dbfa0();
      }
      uVar3 = *(undefined8 *)((undefined4 *)*puVar4 + 2);
      uVar1 = *(undefined4 *)*puVar4;
      local_d8 = FUN_1801af830(param_5);
      local_c8 = param_6;
      local_d0 = local_98;
      local_e8._0_4_ = 1;
      local_e0 = uVar5;
      iVar2 = FUN_1801e5830(param_2,param_3,uVar3,uVar1);
      if (iVar2 == 0) {
        local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x37);
        FUN_1801a70c0(0x23,0x78,0x6b,"crypto\\pkcs12\\p12_crpt.c");
        FUN_1801e53b0(puVar4);
        return 0;
      }
      local_d8 = FUN_18015e220(param_5);
      local_c8 = param_6;
      local_d0 = local_b0;
      local_e8._0_4_ = 2;
      local_e0 = uVar5;
      iVar2 = FUN_1801e5830(param_2,param_3,uVar3,uVar1);
      if (iVar2 == 0) {
        local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x3d);
        FUN_1801a70c0(0x23,0x78,0x6a,"crypto\\pkcs12\\p12_crpt.c");
        FUN_1801e53b0(puVar4);
        return 0;
      }
      FUN_1801e53b0(puVar4);
      local_e0 = param_7;
      local_e8 = local_b0;
      uVar5 = FUN_18018efd0(local_b8,param_5,0,local_98);
      FUN_180001240(local_98,0x40);
      FUN_180001240(local_b0,0x10);
      return uVar5;
    }
    local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x2b);
    FUN_1801a70c0(0x23,0x78,0x65,"crypto\\pkcs12\\p12_crpt.c");
  }
  return 0;
}



// ===== FUN_1801a7c10 @ 1801a7c10 (size 796)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801a7c10(longlong param_1,undefined **param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1801a7c26;
  lVar2 = 0;
  lVar5 = 0;
  if (param_3 != (longlong *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    FUN_1801a70c0(0x23,0x76,0x69,"crypto\\pkcs12\\p12_kiss.c",0x2f,0x1801a7c26);
    return 0;
  }
  if ((param_2 == (undefined **)0x0) || (*(char *)param_2 == '\0')) {
    iVar1 = FUN_1801e5c10(param_1,0,0);
    if (iVar1 == 0) {
      param_2 = &PTR_1802ead18;
      iVar1 = FUN_1801e5c10(param_1,&PTR_1802ead18,0);
      if (iVar1 == 0) {
        uVar8 = 0x42;
        goto LAB_1801a7eb6;
      }
    }
    else {
      param_2 = (undefined **)0x0;
    }
  }
  else {
    iVar1 = FUN_1801e5c10(param_1,param_2,0xffffffff);
    if (iVar1 == 0) {
      uVar8 = 0x46;
LAB_1801a7eb6:
      uVar6 = 0x71;
      goto LAB_1801a7ebc;
    }
  }
  lVar2 = FUN_1801957e0();
  if (lVar2 == 0) {
    uVar8 = 0x4e;
    uVar6 = 0x41;
  }
  else {
    lVar3 = FUN_1801e5aa0(param_1);
    if (lVar3 != 0) {
      iVar7 = 0;
      iVar1 = FUN_1801958b0(lVar3);
      if (0 < iVar1) {
        do {
          lVar4 = FUN_180195ae0(lVar3,iVar7);
          iVar1 = FUN_1801b96c0(*(undefined8 *)(lVar4 + 0x18));
          if (iVar1 == 0x15) {
            lVar4 = FUN_1801e5b10(lVar4);
LAB_1801a7d6a:
            if (lVar4 != 0) {
              iVar1 = FUN_1801a7f30(lVar4,param_2,0xffffffff,param_3,lVar2);
              FUN_1801958f0(lVar4,FUN_1801a7980);
              if (iVar1 != 0) goto LAB_1801a7dad;
            }
            FUN_1801958f0(lVar3,FUN_1801d5080);
            goto LAB_1801a7e9e;
          }
          if (iVar1 == 0x1a) {
            lVar4 = FUN_1801e5b70(lVar4,param_2,0xffffffff);
            goto LAB_1801a7d6a;
          }
LAB_1801a7dad:
          iVar7 = iVar7 + 1;
          iVar1 = FUN_1801958b0(lVar3);
        } while (iVar7 < iVar1);
      }
      FUN_1801958f0(lVar3,FUN_1801d5080);
      lVar5 = FUN_1801958c0(lVar2);
      do {
        if (lVar5 == 0) {
          FUN_1801958f0(lVar2,FUN_1801a2830);
          return 1;
        }
        if ((((param_3 != (longlong *)0x0) && (*param_3 != 0)) && (param_4 != (longlong *)0x0)) &&
           (*param_4 == 0)) {
          FUN_1801a7200();
          iVar1 = FUN_1801a3220(lVar5,*param_3);
          if (iVar1 != 0) {
            *param_4 = lVar5;
            lVar5 = 0;
          }
          FUN_1801a6fa0();
        }
        if ((param_5 != (longlong *)0x0) && (lVar5 != 0)) {
          lVar3 = *param_5;
          if (lVar3 == 0) {
            lVar3 = FUN_1801957e0();
            *param_5 = lVar3;
            if (lVar3 == 0) goto LAB_1801a7ed0;
          }
          iVar1 = FUN_180195990(lVar3,lVar5);
          if (iVar1 == 0) goto LAB_1801a7ed0;
          lVar5 = 0;
        }
        FUN_1801a2830(lVar5);
        lVar5 = FUN_1801958c0(lVar2);
      } while( true );
    }
LAB_1801a7e9e:
    uVar8 = 0x53;
    uVar6 = 0x72;
  }
LAB_1801a7ebc:
  FUN_1801a70c0(0x23,0x76,uVar6,"crypto\\pkcs12\\p12_kiss.c",uVar8,uVar9);
LAB_1801a7ed0:
  if (param_3 != (longlong *)0x0) {
    FUN_18019deb0(*param_3);
    *param_3 = 0;
  }
  if (param_4 != (longlong *)0x0) {
    FUN_1801a2830(*param_4);
    *param_4 = 0;
  }
  FUN_1801a2830(lVar5);
  FUN_1801958f0(lVar2,FUN_1801a2830);
  return 0;
}



// ===== FUN_1801a7f30 @ 1801a7f30 (size 552)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801a7f30(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801a7f54;
  iVar6 = 0;
  iVar1 = FUN_1801958b0();
  if (0 < iVar1) {
    do {
      uVar2 = FUN_180195ae0(param_1,iVar6);
      lVar4 = 0;
      puVar5 = (undefined4 *)0x0;
      lVar3 = FUN_1801e5920(uVar2,0x9c);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
      }
      lVar3 = FUN_1801e5920(uVar2,0x9d);
      if (lVar3 != 0) {
        puVar5 = *(undefined4 **)(lVar3 + 8);
      }
      iVar1 = FUN_1801e5a60(uVar2);
      if (iVar1 == 0x96) {
        if ((param_4 != (longlong *)0x0) && (*param_4 == 0)) {
          uVar2 = FUN_1801e5940(uVar2);
          lVar4 = FUN_1801d56b0(uVar2);
          *param_4 = lVar4;
          bVar7 = lVar4 == 0;
LAB_1801a8119:
          if (bVar7) {
            return 0;
          }
        }
      }
      else if (iVar1 == 0x97) {
        if ((param_4 != (longlong *)0x0) && (*param_4 == 0)) {
          lVar4 = FUN_1801e5a80(uVar2,param_2,param_3);
          if (lVar4 == 0) {
            return 0;
          }
          lVar3 = FUN_1801d56b0(lVar4);
          *param_4 = lVar3;
          FUN_1801d5550(lVar4);
          bVar7 = *param_4 == 0;
          goto LAB_1801a8119;
        }
      }
      else if (iVar1 == 0x98) {
        iVar1 = FUN_1801e5a20(uVar2);
        if (iVar1 == 0x9e) {
          lVar3 = FUN_1801e59c0(uVar2);
          if (lVar3 == 0) {
            return 0;
          }
          if ((puVar5 != (undefined4 *)0x0) &&
             (iVar1 = FUN_1801d5d90(lVar3,*(undefined8 *)(puVar5 + 2),*puVar5), iVar1 == 0)) {
LAB_1801a814c:
            FUN_1801a2830(lVar3);
            return 0;
          }
          if ((lVar4 != 0) && (iVar1 = FUN_18019b460(&local_48,lVar4), -1 < iVar1)) {
            iVar1 = FUN_1801d5c30(lVar3,local_48,iVar1);
            FUN_180195e10(local_48,"crypto\\pkcs12\\p12_kiss.c",0xe3);
            if (iVar1 == 0) goto LAB_1801a814c;
          }
          iVar1 = FUN_180195990(param_5,lVar3);
          if (iVar1 == 0) goto LAB_1801a814c;
        }
      }
      else if (iVar1 == 0x9b) {
        uVar2 = FUN_1801e5980(uVar2);
        iVar1 = FUN_1801a7f30(uVar2,param_2,param_3,param_4,param_5);
        bVar7 = iVar1 == 0;
        goto LAB_1801a8119;
      }
      iVar6 = iVar6 + 1;
      iVar1 = FUN_1801958b0(param_1);
    } while (iVar6 < iVar1);
  }
  return 1;
}



// ===== FUN_1801a8160 @ 1801a8160 (size 611)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined2 * FUN_1801a8160(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint local_res10 [2];
  undefined8 uVar13;
  
  uVar13 = 0x1801a8182;
  uVar9 = 0;
  lVar7 = -1;
  local_res10[0] = 0;
  uVar6 = (ulonglong)param_2;
  if (param_2 == 0xffffffff) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)(uVar6 + param_1) != '\0');
  }
  iVar12 = 0;
  iVar11 = 0;
  iVar5 = (int)uVar6;
  if (0 < iVar5) {
    do {
      iVar1 = FUN_1801bc750(iVar11 + param_1,iVar5 - iVar11,local_res10);
      if (iVar1 < 0) {
        if (iVar5 == -1) {
          do {
            lVar7 = lVar7 + 1;
          } while (*(char *)(lVar7 + param_1) != '\0');
          iVar5 = (int)lVar7;
        }
        iVar5 = iVar5 * 2;
        puVar2 = (undefined2 *)FUN_180195dc0((longlong)iVar5 + 2,"crypto\\pkcs12\\p12_utl.c",0x19);
        if (puVar2 == (undefined2 *)0x0) {
          FUN_1801a70c0(0x23,0x79,0x41,"crypto\\pkcs12\\p12_utl.c",0x1a);
          return (undefined2 *)0x0;
        }
        if (0 < iVar5) {
          uVar6 = (ulonglong)((iVar5 - 1U >> 1) + 1);
          puVar10 = (undefined1 *)((longlong)puVar2 + 1);
          do {
            puVar10[-1] = 0;
            lVar7 = (longlong)uVar9 >> 1;
            uVar9 = uVar9 + 2;
            *puVar10 = *(undefined1 *)(lVar7 + param_1);
            uVar6 = uVar6 - 1;
            puVar10 = puVar10 + 2;
          } while (uVar6 != 0);
        }
        *(undefined2 *)((longlong)iVar5 + (longlong)puVar2) = 0;
        if (param_4 != (int *)0x0) {
          *param_4 = iVar5 + 2;
        }
        if (param_3 != (longlong *)0x0) {
          *param_3 = (longlong)puVar2;
        }
        return puVar2;
      }
      if (0x10ffff < local_res10[0]) goto LAB_1801a8248;
      iVar3 = 2;
      if (0xffff < local_res10[0]) {
        iVar3 = 4;
      }
      iVar11 = iVar11 + iVar1;
      iVar12 = iVar12 + iVar3;
    } while (iVar11 < iVar5);
  }
  puVar2 = (undefined2 *)FUN_180195dc0((longlong)(iVar12 + 2),"crypto\\pkcs12\\p12_utl.c",0x75);
  if (puVar2 == (undefined2 *)0x0) {
    FUN_1801a70c0(0x23,0x81,0x41,"crypto\\pkcs12\\p12_utl.c",0x76,uVar13);
LAB_1801a8248:
    puVar2 = (undefined2 *)0x0;
  }
  else {
    puVar8 = puVar2;
    if (0 < iVar5) {
      do {
        iVar1 = (int)uVar9;
        iVar11 = FUN_1801bc750(iVar1 + param_1,iVar5 - iVar1,local_res10);
        puVar10 = (undefined1 *)((longlong)puVar8 + 1);
        if (local_res10[0] < 0x10000) {
          *(char *)puVar8 = (char)(local_res10[0] >> 8);
          *puVar10 = (undefined1)local_res10[0];
        }
        else {
          local_res10[0] = local_res10[0] - 0x10000;
          iVar3 = (local_res10[0] >> 10) + 0xd800;
          iVar4 = (local_res10[0] & 0x3ff) + 0xdc00;
          *(char *)puVar8 = (char)((uint)iVar3 >> 8);
          *puVar10 = (char)iVar3;
          *(char *)(puVar8 + 1) = (char)((uint)iVar4 >> 8);
          puVar10 = (undefined1 *)((longlong)puVar8 + 3);
          *puVar10 = (char)iVar4;
        }
        uVar9 = (ulonglong)(uint)(iVar1 + iVar11);
        puVar8 = (undefined2 *)(puVar10 + 1);
      } while (iVar1 + iVar11 < iVar5);
    }
    *puVar8 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar12 + 2;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = (longlong)puVar2;
    }
  }
  return puVar2;
}



// ===== FUN_1801a8410 @ 1801a8410 (size 464)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1801a8410(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  if (param_1 == 0) {
    param_1 = FUN_18019db60();
  }
  if (param_2 == 0) {
    uVar2 = FUN_1801a34d0(param_3);
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_1801a3490(param_2);
    lVar3 = FUN_1800d2280(param_2);
  }
  piVar4 = (int *)FUN_1801a23d0(param_3);
  plVar5 = (longlong *)FUN_1801a8b50();
  if (plVar5 == (longlong *)0x0) goto LAB_1801a84cd;
  FUN_18019aa30(*plVar5);
  iVar1 = FUN_18019a410(param_1);
  if (iVar1 == 0) {
    local_98 = CONCAT44(local_98._4_4_,0x3a);
    uVar8 = 0x78;
  }
  else {
    lVar6 = FUN_1801b9550(iVar1);
    *plVar5 = lVar6;
    if (lVar6 == 0) goto LAB_1801a84cd;
    puVar7 = (undefined4 *)FUN_1801bc5a0();
    plVar5[1] = (longlong)puVar7;
    if (puVar7 == (undefined4 *)0x0) goto LAB_1801a84cd;
    *puVar7 = 5;
    iVar1 = FUN_1801a1ae0(uVar2,param_1,local_78,local_88);
    if (iVar1 != 0) {
      iVar1 = FUN_1801dfa10(plVar5 + 2,local_78,local_88[0]);
      if (iVar1 != 0) {
        local_90 = 0;
        local_98 = param_1;
        iVar1 = FUN_18019cda0(*(undefined8 *)(piVar4 + 2),(longlong)*piVar4,local_78,local_88);
        if (((iVar1 != 0) && (iVar1 = FUN_1801dfa10(plVar5 + 5,local_78,local_88[0]), iVar1 != 0))
           && ((lVar3 == 0 || (iVar1 = FUN_18019a0c0(plVar5 + 8,lVar3), iVar1 != 0)))) {
          return plVar5;
        }
      }
      goto LAB_1801a84cd;
    }
    local_98 = CONCAT44(local_98._4_4_,0x55);
    uVar8 = 0x66;
  }
  FUN_1801a70c0(0x27,0x65,uVar8,"crypto\\ocsp\\ocsp_lib.c");
LAB_1801a84cd:
  FUN_1801a8b30(plVar5);
  return (longlong *)0x0;
}



// ===== FUN_1801a85e0 @ 1801a85e0 (size 98)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a85e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1801bc240(*param_1,*param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1801df9f0(param_1 + 2,param_2 + 2);
    if (iVar1 == 0) {
      iVar1 = FUN_1801df9f0(param_1 + 5,param_2 + 5);
      if (iVar1 == 0) {
        FUN_1801dbf30(param_1 + 8,param_2 + 8);
      }
    }
  }
  return;
}



// ===== FUN_1801a8650 @ 1801a8650 (size 81)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a8650(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1801bc240(*param_1,*param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1801df9f0(param_1 + 2,param_2 + 2);
    if (iVar1 == 0) {
      FUN_1801df9f0(param_1 + 5,param_2 + 5);
    }
  }
  return;
}



// ===== FUN_1801a86b0 @ 1801a86b0 (size 384)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801a86b0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong local_res10;
  undefined4 uVar4;
  longlong local_28 [2];
  
  local_28[1] = 0x1801a86c8;
  _time64(local_28);
  iVar1 = FUN_1801bf2f0(param_1);
  if (iVar1 == 0) {
    uVar4 = 0x15a;
    uVar3 = 0x7b;
LAB_1801a876f:
    FUN_1801a70c0(0x27,0x73,uVar3,"crypto\\ocsp\\ocsp_cl.c",uVar4);
    bVar2 = false;
  }
  else {
    local_res10 = param_3 + local_28[0];
    iVar1 = FUN_1801cdbb0(param_1,&local_res10);
    bVar2 = iVar1 < 1;
    if (!bVar2) {
      FUN_1801a70c0(0x27,0x73,0x7e,"crypto\\ocsp\\ocsp_cl.c",0x15f);
    }
    if (-1 < param_4) {
      local_res10 = local_28[0] - param_4;
      iVar1 = FUN_1801cdbb0(param_1,&local_res10);
      if (iVar1 < 0) {
        uVar4 = 0x16a;
        uVar3 = 0x7f;
        goto LAB_1801a876f;
      }
    }
  }
  if (param_2 == 0) {
    return bVar2;
  }
  iVar1 = FUN_1801bf2f0(param_2);
  if (iVar1 == 0) {
    uVar4 = 0x175;
    uVar3 = 0x7a;
  }
  else {
    local_res10 = local_28[0] - param_3;
    iVar1 = FUN_1801cdbb0(param_2,&local_res10);
    if (-1 < iVar1) goto LAB_1801a87ea;
    uVar4 = 0x17a;
    uVar3 = 0x7d;
  }
  FUN_1801a70c0(0x27,0x73,uVar3,"crypto\\ocsp\\ocsp_cl.c",uVar4);
  bVar2 = false;
LAB_1801a87ea:
  iVar1 = FUN_18019a070(param_2,param_1);
  if (iVar1 < 0) {
    FUN_1801a70c0(0x27,0x73,0x7c,"crypto\\ocsp\\ocsp_cl.c",0x182);
    bVar2 = false;
  }
  return bVar2;
}



// ===== FUN_1801a8860 @ 1801a8860 (size 275)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801a8860(longlong param_1,undefined8 param_2,int *param_3,undefined4 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    iVar6 = 0;
    iVar2 = FUN_1801958b0(uVar1);
    if (0 < iVar2) {
      do {
        puVar4 = (undefined8 *)FUN_180195ae0(uVar1,iVar6);
        iVar2 = FUN_1801a85e0(param_2,*puVar4);
        if (iVar2 == 0) {
          if (iVar6 < 0) {
            return 0;
          }
          lVar5 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x20),iVar6);
          if (lVar5 == 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = **(int **)(lVar5 + 8);
            if (iVar2 == 1) {
              puVar4 = *(undefined8 **)(*(int **)(lVar5 + 8) + 2);
              if (param_5 != (undefined8 *)0x0) {
                *param_5 = *puVar4;
              }
              if (param_4 != (undefined4 *)0x0) {
                if (puVar4[1] == 0) {
                  uVar3 = 0xffffffff;
                }
                else {
                  uVar3 = FUN_1801dbeb0();
                }
                *param_4 = uVar3;
              }
            }
            if (param_6 != (undefined8 *)0x0) {
              *param_6 = *(undefined8 *)(lVar5 + 0x10);
            }
            if (param_7 != (undefined8 *)0x0) {
              *param_7 = *(undefined8 *)(lVar5 + 0x18);
            }
          }
          if (param_3 != (int *)0x0) {
            *param_3 = iVar2;
          }
          return 1;
        }
        iVar6 = iVar6 + 1;
        iVar2 = FUN_1801958b0(uVar1);
      } while (iVar6 < iVar2);
    }
  }
  return 0;
}



// ===== FUN_1801a89b0 @ 1801a89b0 (size 139)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a89b0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801a89bc;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1801a70c0(0x27,0x6f,0x6c,"crypto\\ocsp\\ocsp_cl.c",0x9a,0x1801a89bc);
    return 0;
  }
  iVar2 = FUN_1801b96c0(*puVar1);
  if (iVar2 == 0x16d) {
    uVar3 = FUN_1801a8b20();
    uVar3 = FUN_1801e6190(puVar1[1],uVar3);
    return uVar3;
  }
  FUN_1801a70c0(0x27,0x6f,0x68,"crypto\\ocsp\\ocsp_cl.c",0x9e,uVar3);
  return 0;
}



// ===== FUN_1801a8cc0 @ 1801a8cc0 (size 792)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801a8cc0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 local_res8;
  longlong in_stack_ffffffffffffffb8;
  undefined4 uVar10;
  undefined8 uVar9;
  
  lVar5 = 0;
  local_res8 = 0;
  lVar3 = 0;
  lVar2 = FUN_1801a9190(param_2,param_1 + 8);
  if (lVar2 == 0) {
    if ((param_4 & 2) == 0) {
      lVar2 = FUN_1801a9190(*(undefined8 *)(param_1 + 0x48),param_1 + 8);
      if (lVar2 != 0) {
        iVar1 = 1;
        goto LAB_1801a8d49;
      }
    }
    iVar1 = 0;
    uVar9 = 0x29;
    uVar4 = 0x76;
LAB_1801a8f73:
    FUN_1801a70c0(0x27,0x69,uVar4,"crypto\\ocsp\\ocsp_vfy.c",uVar9);
    goto LAB_1801a8f87;
  }
  iVar1 = 2;
LAB_1801a8d49:
  lVar3 = FUN_1801cd9b0();
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (lVar3 == 0) {
    uVar6 = 0x2e;
    uVar8 = 0x41;
  }
  else {
    if ((iVar1 == 2) && ((param_4 >> 9 & 1) != 0)) {
      param_4 = param_4 | 0x10;
    }
    if ((param_4 & 4) == 0) {
      in_stack_ffffffffffffffb8 = FUN_1801a3460(lVar2);
      if (in_stack_ffffffffffffffb8 != 0) {
        uVar4 = FUN_1801a8a90();
        iVar1 = FUN_1801d5210(uVar4,param_1 + 0x30,*(undefined8 *)(param_1 + 0x40),param_1,
                              in_stack_ffffffffffffffb8);
        if (iVar1 < 1) {
          uVar9 = 0x3c;
          uVar4 = 0x75;
          goto LAB_1801a8f73;
        }
        goto LAB_1801a8dc8;
      }
      uVar8 = 0x37;
      uVar6 = 0x82;
LAB_1801a8f49:
      FUN_1801a70c0(0x27,0x69,uVar6,"crypto\\ocsp\\ocsp_vfy.c",CONCAT44(uVar10,uVar8));
      iVar1 = 0;
      goto LAB_1801a8f87;
    }
LAB_1801a8dc8:
    uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    if ((param_4 & 0x10) != 0) goto LAB_1801a8f87;
    if (((param_4 & 8) == 0) && (lVar5 = *(longlong *)(param_1 + 0x48), param_2 != 0)) {
      if (lVar5 == 0) {
        lVar5 = param_2;
      }
      else {
        lVar5 = FUN_180195540(lVar5);
        iVar7 = 0;
        iVar1 = FUN_1801958b0(param_2);
        uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
        if (0 < iVar1) {
          do {
            uVar4 = FUN_180195ae0(param_2,iVar7);
            iVar1 = FUN_180195990(lVar5,uVar4);
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
            if (iVar1 == 0) {
              uVar6 = 0x48;
              uVar8 = 0x41;
              goto LAB_1801a8e5a;
            }
            iVar7 = iVar7 + 1;
            iVar1 = FUN_1801958b0(param_2);
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
          } while (iVar7 < iVar1);
        }
      }
    }
    iVar1 = FUN_1801cd710(lVar3,param_3,lVar2,lVar5);
    if (iVar1 != 0) {
      FUN_1801cdb90(lVar3,8);
      iVar1 = FUN_1801cde80(lVar3);
      local_res8 = FUN_1801cd6d0(lVar3);
      if (iVar1 < 1) {
        uVar6 = FUN_1801cd700(lVar3);
        FUN_1801a70c0(0x27,0x69,0x65,"crypto\\ocsp\\ocsp_vfy.c",CONCAT44(uVar10,0x5d));
        uVar4 = FUN_1801a1670(uVar6);
        FUN_1801a6360(2,"Verify error:",uVar4);
        goto LAB_1801a8f87;
      }
      if ((param_4 >> 8 & 1) == 0) {
        iVar1 = FUN_1801a8fe0(param_1,local_res8);
        if ((iVar1 != 0) || ((param_4 & 0x20) != 0)) goto LAB_1801a8f87;
        iVar1 = FUN_1801958b0(local_res8);
        uVar4 = FUN_180195ae0(local_res8,iVar1 + -1);
        iVar1 = FUN_1801e8bd0(uVar4,0xb4,0);
        if (iVar1 != 1) {
          uVar8 = 0x79;
          uVar6 = 0x70;
          goto LAB_1801a8f49;
        }
      }
      iVar1 = 1;
      goto LAB_1801a8f87;
    }
    uVar6 = 0x53;
    uVar8 = 0xb;
  }
LAB_1801a8e5a:
  FUN_1801a70c0(0x27,0x69,uVar8,"crypto\\ocsp\\ocsp_vfy.c",CONCAT44(uVar10,uVar6));
  iVar1 = -1;
LAB_1801a8f87:
  FUN_1801cd680(lVar3);
  FUN_1801958f0(local_res8,FUN_1801a2830);
  if ((*(longlong *)(param_1 + 0x48) != 0) && (param_2 != 0)) {
    FUN_180195650(lVar5);
  }
  return iVar1;
}



// ===== FUN_1801a8fe0 @ 1801a8fe0 (size 417)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a8fe0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  uVar10 = 0x1801a8fef;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = FUN_1801958b0(param_2);
  if (iVar1 < 1) {
    FUN_1801a70c0(0x27,0x6c,0x69,"crypto\\ocsp\\ocsp_vfy.c",0xcd,uVar10);
    return 0xffffffff;
  }
  iVar1 = FUN_1801958b0(uVar7);
  if (iVar1 < 1) {
    FUN_1801a70c0(0x27,0x6b,0x6f,"crypto\\ocsp\\ocsp_vfy.c",0xfa,uVar10);
    return 0xffffffff;
  }
  puVar3 = (undefined8 *)FUN_180195ae0(uVar7,0);
  puVar9 = (undefined8 *)0x0;
  iVar8 = 1;
  puVar3 = (undefined8 *)*puVar3;
  if (1 < iVar1) {
    do {
      puVar4 = (undefined8 *)FUN_180195ae0(uVar7,iVar8);
      puVar4 = (undefined8 *)*puVar4;
      iVar2 = FUN_1801a8650(puVar3,puVar4);
      if (iVar2 != 0) {
        iVar1 = FUN_1801bc240(*puVar4,*puVar3);
        if (iVar1 == 0) {
          return 0;
        }
        goto LAB_1801a90c5;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  puVar9 = puVar3;
LAB_1801a90c5:
  uVar10 = FUN_180195ae0(param_2,0);
  iVar1 = FUN_1801958b0(param_2);
  if (1 < iVar1) {
    uVar5 = FUN_180195ae0(param_2,1);
    uVar5 = FUN_1801a9260(uVar5,puVar9,uVar7);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    if ((int)uVar5 != 0) {
      uVar6 = FUN_1801a5750(uVar10);
      if (((uVar6 & 4) == 0) || (uVar6 = FUN_1801a5700(uVar10), (uVar6 & 0x20) == 0)) {
        FUN_1801a70c0(0x27,0x6a,0x67,"crypto\\ocsp\\ocsp_vfy.c",0x149);
        return 0;
      }
      return 1;
    }
  }
  uVar7 = FUN_1801a9260(uVar10,puVar9,uVar7);
  return uVar7;
}



// ===== FUN_1801a9190 @ 1801a9190 (size 201)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801a9190(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  piVar1 = *(int **)(param_2 + 2);
  if (*param_2 == 0) {
    uVar4 = FUN_1801a3390(param_1,piVar1);
  }
  else {
    if (*piVar1 == 0x14) {
      plVar2 = *(longlong **)(piVar1 + 2);
      iVar6 = 0;
      iVar3 = FUN_1801958b0();
      if (0 < iVar3) {
        do {
          uVar4 = FUN_180195ae0(param_1,iVar6);
          uVar5 = FUN_18019db60();
          FUN_1801a1be0(uVar4,uVar5,&local_38,0);
          if (((*plVar2 == local_38) && (plVar2[1] == local_30)) && ((int)plVar2[2] == local_28)) {
            return uVar4;
          }
          iVar6 = iVar6 + 1;
          iVar3 = FUN_1801958b0(param_1);
        } while (iVar6 < iVar3);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_1801a9260 @ 1801a9260 (size 339)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801a9260(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1801a9272;
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  if (param_2 == (undefined8 *)0x0) {
    iVar3 = 0;
    iVar2 = FUN_1801958b0(param_3);
    if (0 < iVar2) {
      do {
        puVar6 = (undefined8 *)FUN_180195ae0(param_3,iVar3);
        uVar4 = FUN_1801a9260(param_1,*puVar6,0);
        if ((int)uVar4 < 1) {
          return uVar4;
        }
        iVar3 = iVar3 + 1;
        iVar2 = FUN_1801958b0(param_3);
      } while (iVar3 < iVar2);
    }
    return 1;
  }
  uVar1 = FUN_1801b96c0(*param_2);
  uVar4 = FUN_1801b9610(uVar1);
  lVar5 = FUN_1801dcf20(uVar4);
  if (lVar5 == 0) {
    local_78 = 0x120;
    FUN_1801a70c0(0x27,0x6d,0x77,"crypto\\ocsp\\ocsp_vfy.c");
  }
  else {
    iVar2 = FUN_1801afe40(lVar5);
    if (-1 < iVar2) {
      if ((*(int *)(param_2 + 2) == iVar2) && (*(int *)(param_2 + 5) == iVar2)) {
        uVar4 = FUN_1801a34d0(param_1);
        iVar3 = FUN_1801a1ae0(uVar4,lVar5,local_68,0);
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        iVar3 = memcmp(local_68,(void *)param_2[3],(longlong)iVar2);
        if (iVar3 == 0) {
          FUN_1801a1be0(param_1,lVar5,local_68,0);
          iVar2 = memcmp(local_68,(void *)param_2[6],(longlong)iVar2);
          if (iVar2 == 0) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}



// ===== FUN_1801a93c0 @ 1801a93c0 (size 159)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801a93c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_1801a9e60(param_1,param_2,0,1,param_3,param_4);
  if (lVar1 == 0) {
LAB_1801a9411:
    uVar3 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = FUN_1801957e0();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        FUN_1801a9dd0(lVar1);
        goto LAB_1801a9411;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_5;
    *(undefined4 *)(lVar1 + 0x2c) = param_6;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    uVar3 = FUN_180195990(*(undefined8 *)(param_1 + 8),lVar1);
    if ((int)uVar3 < 1) {
      FUN_1801a9dd0(lVar1);
      return (ulonglong)((int)uVar3 - 1);
    }
  }
  return uVar3;
}



// ===== FUN_1801a9460 @ 1801a9460 (size 77)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801a9460(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = param_1[2];
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 2) != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,lVar2);
    uVar1 = *(uint *)(param_1 + 4);
    lVar2 = 0;
  }
  param_1[2] = param_2;
  *(uint *)(param_1 + 4) = uVar1 & 0xfffffffd;
  return lVar2;
}



// ===== FUN_1801a94b0 @ 1801a94b0 (size 77)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a94b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_1801a9f40(param_1,param_2,0,2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// ===== FUN_1801a9500 @ 1801a9500 (size 359)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801a9500(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 local_38 [2];
  char local_34 [4];
  char local_30 [2];
  char local_2e;
  undefined4 local_2c;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803c3d80 ^ (ulonglong)auStack_68;
  if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
    local_34 = (char  [4])s_Enter_18030f784._0_4_;
    local_30 = (char  [2])s_Enter_18030f784._4_2_;
    local_2e = s_Enter_18030f784[6];
    local_2c = DAT_18030f78c;
    local_28 = DAT_18030f790;
    local_38[0] = 0x3a;
    if (param_2 != 0) {
      lVar3 = -1;
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(param_2 + lVar2) != '\0');
      iVar1 = (int)lVar2 + 6;
      if (param_3 != 0) {
        do {
          lVar3 = lVar3 + 1;
        } while (*(char *)(param_3 + lVar3) != '\0');
        iVar1 = (int)lVar2 + 0xb + (int)lVar3;
      }
      lVar3 = (longlong)(iVar1 + 2);
      lVar2 = FUN_180195dc0(lVar3,"crypto\\ui\\ui_lib.c",0x179);
      if (lVar2 != 0) {
        FUN_1801ba810(lVar2,local_34,lVar3);
        FUN_1801ba790(lVar2,param_2,lVar3);
        if (param_3 != 0) {
          FUN_1801ba790(lVar2,&local_2c,lVar3);
          FUN_1801ba790(lVar2,param_3,lVar3);
        }
        FUN_1801ba790(lVar2,local_38,lVar3);
        goto LAB_1801a964a;
      }
      local_48 = 0x17a;
      FUN_1801a70c0(0x28,0x79,0x41,"crypto\\ui\\ui_lib.c");
    }
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x40))();
  }
LAB_1801a964a:
  return lVar2;
}



// ===== FUN_1801a9670 @ 1801a9670 (size 202)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801a9670(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801a9680;
  plVar2 = (longlong *)FUN_180196100(0x50,"crypto\\ui\\ui_lib.c",0x25d);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1801ba320(param_1,"crypto\\ui\\ui_lib.c",0x25e);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      iVar1 = FUN_1801ae440(0xe,plVar2,plVar2 + 9);
      if (iVar1 != 0) {
        return plVar2;
      }
    }
    FUN_180195e10(*plVar2,"crypto\\ui\\ui_lib.c",0x262);
  }
  FUN_180195e10(plVar2,"crypto\\ui\\ui_lib.c",0x263);
  FUN_1801a70c0(0x28,0x70,0x41,"crypto\\ui\\ui_lib.c",0x264,uVar4);
  return (longlong *)0x0;
}



// ===== FUN_1801a9740 @ 1801a9740 (size 92)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a9740(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1801ae0a0(0xe,param_1,param_1 + 9);
    FUN_180195e10(*param_1,"crypto\\ui\\ui_lib.c",0x275);
    *param_1 = 0;
    FUN_180195e10(param_1,"crypto\\ui\\ui_lib.c",0x277);
  }
  return;
}



// ===== FUN_1801a97a0 @ 1801a97a0 (size 107)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a97a0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 4) & 2) != 0) {
      (**(code **)(*param_1 + 0x38))(param_1,param_1[2]);
    }
    FUN_1801958f0(param_1[1],FUN_1801a9dd0);
    FUN_1801ae0a0(0xb,param_1,param_1 + 3);
    FUN_1801adcf0(param_1[5]);
    FUN_180195e10(param_1,"crypto\\ui\\ui_lib.c",0x53);
  }
  return;
}



// ===== FUN_1801a9910 @ 1801a9910 (size 206)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801a9910(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801a991c;
  plVar2 = (longlong *)FUN_180196100(0x30,"crypto\\ui\\ui_lib.c",0x19);
  if (plVar2 == (longlong *)0x0) {
    FUN_1801a70c0(0x28,0x68,0x41,"crypto\\ui\\ui_lib.c",0x1c,uVar4);
    return (longlong *)0x0;
  }
  lVar3 = FUN_1801add30();
  plVar2[5] = lVar3;
  if (lVar3 == 0) {
    FUN_1801a70c0(0x28,0x68,0x41,"crypto\\ui\\ui_lib.c",0x22,uVar4);
    uVar4 = 0x23;
  }
  else {
    lVar3 = FUN_1801aa380();
    if (lVar3 == 0) {
      lVar3 = FUN_1801e8e40();
    }
    *plVar2 = lVar3;
    iVar1 = FUN_1801ae440(0xb,plVar2,plVar2 + 3);
    if (iVar1 != 0) {
      return plVar2;
    }
    uVar4 = 0x2e;
  }
  FUN_180195e10(plVar2,"crypto\\ui\\ui_lib.c",uVar4);
  return (longlong *)0x0;
}



// ===== FUN_1801a99e0 @ 1801a99e0 (size 450)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801a99e0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1801a99f5;
  pcVar4 = "processing";
  if ((*(code **)(*param_1 + 8) != (code *)0x0) &&
     (iVar1 = (**(code **)(*param_1 + 8))(), iVar1 < 1)) {
    pcVar4 = "opening session";
    iVar6 = -1;
    goto LAB_1801a9b11;
  }
  if ((*(uint *)(param_1 + 4) & 0x100) != 0) {
    FUN_1801e8d10(FUN_1801a9ff0,param_1);
  }
  iVar6 = 0;
  iVar5 = 0;
  iVar1 = FUN_1801958b0(param_1[1]);
  if (0 < iVar1) {
    do {
      if (*(longlong *)(*param_1 + 0x10) != 0) {
        uVar2 = FUN_180195ae0(param_1[1],iVar5);
        iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar2);
        if (iVar1 < 1) {
          pcVar4 = "writing strings";
          iVar6 = -1;
          goto LAB_1801a9b11;
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_1801958b0(param_1[1]);
    } while (iVar5 < iVar1);
  }
  if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar1 == -1) {
LAB_1801a9b4c:
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      iVar6 = -2;
      goto LAB_1801a9b11;
    }
    if (iVar1 == 0) {
      pcVar4 = "flushing";
      iVar6 = -1;
      goto LAB_1801a9b11;
    }
  }
  iVar5 = 0;
  iVar1 = FUN_1801958b0(param_1[1]);
  if (0 < iVar1) {
    do {
      if (*(longlong *)(*param_1 + 0x20) == 0) goto LAB_1801a9b4c;
      uVar2 = FUN_180195ae0(param_1[1],iVar5);
      iVar1 = (**(code **)(*param_1 + 0x20))(param_1,uVar2);
      if (iVar1 == -1) goto LAB_1801a9b4c;
      if (iVar1 == 0) {
        pcVar4 = "reading strings";
        iVar6 = -1;
        goto LAB_1801a9b11;
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_1801958b0(param_1[1]);
    } while (iVar5 < iVar1);
  }
  pcVar4 = (char *)0x0;
LAB_1801a9b11:
  if ((*(code **)(*param_1 + 0x28) == (code *)0x0) ||
     (iVar1 = (**(code **)(*param_1 + 0x28))(param_1), 0 < iVar1)) {
    if (iVar6 != -1) {
      return iVar6;
    }
  }
  else {
    iVar6 = -1;
    pcVar3 = "closing session";
    if (pcVar4 != (char *)0x0) {
      pcVar3 = pcVar4;
    }
    pcVar4 = pcVar3;
  }
  FUN_1801a70c0(0x28,0x71,0x6b,"crypto\\ui\\ui_lib.c",0x225,uVar7);
  FUN_1801a6360(2,"while ",pcVar4);
  return iVar6;
}



// ===== FUN_1801a9bf0 @ 1801a9bf0 (size 475)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801a9bf0(longlong param_1,int *param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t _Size;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  char *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x1801a9bff;
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  iVar2 = *param_2;
  _Size = (size_t)param_4;
  if (0 < iVar2) {
    if (iVar2 < 3) {
      FUN_180196a10(local_48,0xd,&DAT_1802fec90,param_2[10]);
      FUN_180196a10(local_58,0xd,&DAT_1802fec90,param_2[0xb]);
      if (param_4 < param_2[10]) {
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x38d);
        uVar4 = 0x65;
      }
      else {
        if (param_4 <= param_2[0xb]) {
          if (*(void **)(param_2 + 6) != (void *)0x0) {
            memcpy(*(void **)(param_2 + 6),param_3,_Size);
            if (param_4 <= param_2[0xb]) {
              *(undefined1 *)(_Size + *(longlong *)(param_2 + 6)) = 0;
            }
            *(size_t *)(param_2 + 8) = _Size;
            return 0;
          }
          local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x39c);
          goto LAB_1801a9d77;
        }
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x394);
        uVar4 = 100;
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
      FUN_1801a70c0(0x28,0x78,uVar4,"crypto\\ui\\ui_lib.c");
      local_60 = " characters";
      local_68 = local_58;
      FUN_1801a6360(5,"You must type in ",local_48,&DAT_18030f80c);
      return 0xffffffff;
    }
    if (iVar2 == 3) {
      if (*(undefined1 **)(param_2 + 6) == (undefined1 *)0x0) {
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x3aa);
LAB_1801a9d77:
        FUN_1801a70c0(0x28,0x78,0x69,"crypto\\ui\\ui_lib.c");
        return 0xffffffff;
      }
      **(undefined1 **)(param_2 + 6) = 0;
      cVar1 = *param_3;
      while (cVar1 != '\0') {
        pcVar3 = strchr(*(char **)(param_2 + 0xc),(int)cVar1);
        if (pcVar3 != (char *)0x0) {
          **(undefined1 **)(param_2 + 6) = **(undefined1 **)(param_2 + 0xc);
          return 0;
        }
        pcVar3 = strchr(*(char **)(param_2 + 0xe),(int)*param_3);
        if (pcVar3 != (char *)0x0) {
          **(undefined1 **)(param_2 + 6) = **(undefined1 **)(param_2 + 0xe);
          return 0;
        }
        pcVar3 = param_3 + 1;
        param_3 = param_3 + 1;
        cVar1 = *pcVar3;
      }
    }
  }
  return 0;
}



// ===== FUN_1801a9dd0 @ 1801a9dd0 (size 141)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801a9dd0(int *param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_180195e10(*(undefined8 *)(param_1 + 2),"crypto\\ui\\ui_lib.c",0x37);
    if (*param_1 == 3) {
      FUN_180195e10(*(undefined8 *)(param_1 + 10),"crypto\\ui\\ui_lib.c",0x3a);
      FUN_180195e10(*(undefined8 *)(param_1 + 0xc),"crypto\\ui\\ui_lib.c",0x3b);
      FUN_180195e10(*(undefined8 *)(param_1 + 0xe),"crypto\\ui\\ui_lib.c",0x3c);
    }
  }
  FUN_180195e10(param_1,"crypto\\ui\\ui_lib.c",0x46);
  return;
}



// ===== FUN_1801a9e60 @ 1801a9e60 (size 219)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_1801a9e60(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5,
                   longlong param_6)

{
  int *piVar1;
  
  if (param_2 == 0) {
    FUN_1801a70c0(0x28,0x6d,0x43,"crypto\\ui\\ui_lib.c",0x69,0x1801a9e7b);
    piVar1 = (int *)0x0;
  }
  else if ((param_4 - 1U < 3) && (param_6 == 0)) {
    FUN_1801a70c0(0x28,0x6d,0x69,"crypto\\ui\\ui_lib.c",0x6c,0x1801a9e7b);
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_180195dc0(0x48,"crypto\\ui\\ui_lib.c");
    if (piVar1 != (int *)0x0) {
      *(longlong *)(piVar1 + 2) = param_2;
      piVar1[4] = param_5;
      piVar1[0x10] = (uint)(param_3 != 0);
      *piVar1 = param_4;
      *(longlong *)(piVar1 + 6) = param_6;
    }
  }
  return piVar1;
}



// ===== FUN_1801a9f40 @ 1801a9f40 (size 164)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801a9f40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                       undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_1801a9e60();
  if (lVar1 == 0) {
LAB_1801a9f92:
    uVar3 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = FUN_1801957e0();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        FUN_1801a9dd0(lVar1);
        goto LAB_1801a9f92;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_7;
    *(undefined4 *)(lVar1 + 0x2c) = param_8;
    *(undefined8 *)(lVar1 + 0x30) = param_9;
    uVar3 = FUN_180195990(*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5,param_6);
    if ((int)uVar3 < 1) {
      FUN_1801a9dd0(lVar1);
      return (ulonglong)((int)uVar3 - 1);
    }
  }
  return uVar3;
}



// ===== FUN_1801a9ff0 @ 1801a9ff0 (size 102)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801a9ff0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x1801a9ffa;
  local_58 = 5;
  local_18 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (*(code **)(*param_3 + 0x10) != (code *)0x0) {
    local_50 = param_1;
    iVar1 = (**(code **)(*param_3 + 0x10))(param_3,&local_58);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
  }
  return 0;
}



// ===== FUN_1801aa060 @ 1801aa060 (size 402)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801aa060(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  iVar3 = FUN_18019a410(param_2);
  if (iVar3 == 1) {
    pcVar5 = (char *)FUN_18013ff80(param_2);
    fputs(pcVar5,DAT_1803c8ff0);
    fflush(DAT_1803c8ff0);
    uVar4 = FUN_1801a37a0(param_2);
    uVar7 = 1;
  }
  else {
    if (iVar3 == 2) {
      uVar7 = FUN_18013ff80(param_2);
      FUN_1801aa390(DAT_1803c8ff0,"Verifying - %s",uVar7);
      fflush(DAT_1803c8ff0);
      uVar4 = FUN_1801a37a0(param_2);
      uVar7 = FUN_1801aa3e0(param_1,param_2,uVar4 & 1,1);
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      lVar6 = FUN_1801a9840(param_2);
      pcVar5 = (char *)FUN_1801a9820(param_2);
      lVar6 = lVar6 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar6];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return 1;
      }
      FUN_1801aa390(DAT_1803c8ff0,"Verify failure\n");
      fflush(DAT_1803c8ff0);
      return 0;
    }
    if (iVar3 != 3) {
      return 1;
    }
    pcVar5 = (char *)FUN_18013ff80(param_2);
    fputs(pcVar5,DAT_1803c8ff0);
    pcVar5 = (char *)FUN_1801a9810(param_2);
    fputs(pcVar5,DAT_1803c8ff0);
    fflush(DAT_1803c8ff0);
    uVar4 = FUN_1801a37a0(param_2);
    uVar7 = 0;
  }
  uVar7 = FUN_1801aa3e0(param_1,param_2,uVar4 & 1,uVar7);
  return uVar7;
}



// ===== FUN_1801aa200 @ 1801aa200 (size 82)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801aa200(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *_Str;
  
  iVar1 = FUN_18019a410(param_2);
  if (iVar1 - 4U < 2) {
    _Str = (char *)FUN_18013ff80(param_2);
    fputs(_Str,DAT_1803c8ff0);
    fflush(DAT_1803c8ff0);
  }
  return 1;
}



// ===== FUN_1801aa260 @ 1801aa260 (size 174)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801aa260(longlong param_1)

{
  BOOL BVar1;
  HANDLE hConsoleHandle;
  
  FUN_1801add90(*(undefined8 *)(param_1 + 0x28));
  DAT_1803c8ff8 = 1;
  DAT_1803c8ff0 = fopen("conout$","w");
  if (DAT_1803c8ff0 == (FILE *)0x0) {
    DAT_1803c8ff0 = (FILE *)__acrt_iob_func(2);
  }
  hConsoleHandle = GetStdHandle(0xfffffff6);
  BVar1 = GetConsoleMode(hConsoleHandle,&DAT_1803c8fe0);
  if ((BVar1 == 0) &&
     (DAT_1803c8ff8 = BVar1, DAT_1803c8fe8 = fopen("conin$","r"), DAT_1803c8fe8 != (FILE *)0x0)) {
    return 1;
  }
  DAT_1803c8fe8 = (FILE *)__acrt_iob_func(0);
  return 1;
}



// ===== FUN_1801aa310 @ 1801aa310 (size 93)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801aa310(longlong param_1)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)__acrt_iob_func(0);
  if (DAT_1803c8fe8 != pFVar1) {
    fclose(DAT_1803c8fe8);
  }
  pFVar1 = (FILE *)__acrt_iob_func(2);
  if (DAT_1803c8ff0 != pFVar1) {
    fclose(DAT_1803c8ff0);
  }
  FUN_1801ade50(*(undefined8 *)(param_1 + 0x28));
  return 1;
}



// ===== FUN_1801aa390 @ 1801aa390 (size 78)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801aa390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 uVar2;
  
  uVar2 = 0x1801aa3ac;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_1800e0ca0();
  __stdio_common_vfprintf(*puVar1,param_1,param_2,0,&local_res18,uVar2);
  return;
}



// ===== FUN_1801aa3e0 @ 1801aa3e0 (size 1127)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1801aa3e0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  FILE *_File;
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 extraout_RAX_02;
  undefined8 extraout_RAX_03;
  undefined8 extraout_RAX_04;
  HANDLE pvVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 auStackY_698 [32];
  uint local_658;
  char local_654 [12];
  CHAR local_648 [512];
  WCHAR local_448 [512];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801aa402;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStackY_698;
  uVar7 = 0;
  DAT_1803c8ffc = 0;
  DAT_1803c9000 = 0;
  signal(0x16);
  DAT_1803c8f90 = extraout_RAX;
  signal(8);
  DAT_1803c8f20 = extraout_RAX_00;
  signal(4);
  DAT_1803c8f00 = extraout_RAX_01;
  signal(2);
  DAT_1803c8ef0 = extraout_RAX_02;
  signal(0xb);
  DAT_1803c8f38 = extraout_RAX_03;
  signal(0xf);
  DAT_1803c9000 = 1;
  DAT_1803c8f58 = extraout_RAX_04;
  if ((param_3 == 0) && (DAT_1803c8ff8 != 0)) {
    DAT_1803c8fe4 = DAT_1803c8fe0 & 0xfffffffb;
    pvVar4 = GetStdHandle(0xfffffff6);
    SetConsoleMode(pvVar4,DAT_1803c8fe4);
  }
  DAT_1803c9000 = 2;
  local_648[0] = '\0';
  if (DAT_1803c8ff8 == 0) {
    pcVar8 = fgets(local_648,0x1ff,DAT_1803c8fe8);
LAB_1801aa695:
    if (pcVar8 == (char *)0x0) goto LAB_1801aa726;
  }
  else {
    DVar1 = GetEnvironmentVariableW(L"OPENSSL_WIN32_UTF8",(LPWSTR)0x0,0);
    if (DVar1 != 0) {
      pvVar4 = GetStdHandle(0xfffffff6);
      BVar2 = ReadConsoleW(pvVar4,local_448,0x1ff,&local_658,(PCONSOLE_READCONSOLE_CONTROL)0x0);
      if (BVar2 == 0) goto LAB_1801aa726;
      uVar6 = (ulonglong)local_658;
      if (((1 < local_658) && (local_448[local_658 - 2] == L'\r')) &&
         (uVar5 = local_658 - 1, local_448[uVar5] == L'\n')) {
        local_448[local_658 - 2] = L'\n';
        uVar6 = (ulonglong)uVar5;
        local_658 = uVar5;
      }
      if (0x3ff < uVar6 * 2) {
                    /* WARNING: Subroutine does not return */
        FUN_1802e048c();
      }
      local_448[uVar6] = L'\0';
      iVar3 = WideCharToMultiByte(0xfde9,0,local_448,-1,local_648,0x200,(LPCSTR)0x0,(LPBOOL)0x0);
      pcVar8 = local_648;
      if (iVar3 < 1) {
        pcVar8 = (char *)0x0;
      }
      FUN_180001240(local_448,0x400);
      goto LAB_1801aa695;
    }
    pvVar4 = GetStdHandle(0xfffffff6);
    BVar2 = ReadConsoleA(pvVar4,local_648,0x1ff,&local_658,(PCONSOLE_READCONSOLE_CONTROL)0x0);
    if (BVar2 == 0) goto LAB_1801aa726;
    uVar6 = (ulonglong)local_658;
    if (((1 < local_658) && (local_648[local_658 - 2] == '\r')) &&
       (uVar5 = local_658 - 1, local_648[uVar5] == '\n')) {
      local_648[local_658 - 2] = '\n';
      uVar6 = (ulonglong)uVar5;
      local_658 = uVar5;
    }
    if (0x1ff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1802e048c();
    }
    local_648[uVar6] = '\0';
  }
  iVar3 = feof(DAT_1803c8fe8);
  if ((iVar3 == 0) && (iVar3 = ferror(DAT_1803c8fe8), iVar3 == 0)) {
    pcVar8 = strchr(local_648,10);
    _File = DAT_1803c8fe8;
    if (pcVar8 == (char *)0x0) {
      do {
        pcVar8 = fgets(local_654,4,_File);
        if (pcVar8 == (char *)0x0) goto LAB_1801aa726;
        pcVar8 = strchr(local_654,10);
      } while (pcVar8 == (char *)0x0);
    }
    else if (param_4 != 0) {
      *pcVar8 = '\0';
    }
    iVar3 = FUN_1801a9bc0(param_1,param_2,local_648);
    uVar7 = 0;
    if (-1 < iVar3) {
      uVar7 = 1;
    }
  }
LAB_1801aa726:
  if (DAT_1803c8ffc == 2) {
    uVar7 = 0xffffffff;
  }
  if (param_3 == 0) {
    FUN_1801aa390(DAT_1803c8ff0,&DAT_1802fa360);
  }
  if (((1 < DAT_1803c9000) && (param_3 == 0)) && (DAT_1803c8ff8 != 0)) {
    DAT_1803c8fe4 = DAT_1803c8fe0;
    pvVar4 = GetStdHandle(0xfffffff6);
    SetConsoleMode(pvVar4,DAT_1803c8fe4);
  }
  if (0 < DAT_1803c9000) {
    signal(0x16);
    signal(8);
    signal(4);
    signal(2);
    signal(0xb);
    signal(0xf);
  }
  FUN_180001240(local_648,0x200);
  return uVar7;
}



// ===== FUN_1801aa860 @ 1801aa860 (size 445)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801aa860(longlong *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1801aa870;
  if (param_1 == (longlong *)0x0) {
    uVar8 = 299;
    uVar9 = 0x43;
LAB_1801aa9fc:
    FUN_1801a70c0(0x26,0x69,uVar9,"crypto\\engine\\eng_list.c",uVar8,0x1801aa870);
    return 0;
  }
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    uVar8 = 0x12f;
    uVar9 = 0x6c;
    goto LAB_1801aa9fc;
  }
  FUN_1801add90(DAT_180447968);
  bVar7 = false;
  plVar6 = DAT_1803c9008;
  if (DAT_1803c9008 == (longlong *)0x0) {
    if (DAT_1803c9010 == (longlong *)0x0) {
      DAT_1803c9008 = param_1;
      param_1[0x16] = 0;
      FUN_1801abd50(FUN_1801ab000);
LAB_1801aa9b5:
      param_1[0x17] = 0;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + 1;
      DAT_1803c9010 = param_1;
      FUN_1801ade50(DAT_180447968);
      return 1;
    }
    uVar8 = 0x4b;
  }
  else {
    do {
      if (bVar7) goto LAB_1801aa929;
      pcVar3 = (char *)*plVar6;
      lVar4 = *param_1 - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar4];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      plVar6 = (longlong *)plVar6[0x17];
      bVar7 = cVar1 == cVar2;
    } while (plVar6 != (longlong *)0x0);
    if (cVar1 == cVar2) {
LAB_1801aa929:
      uVar8 = 0x45;
      uVar5 = 0x67;
      goto LAB_1801aa948;
    }
    if ((DAT_1803c9010 != (longlong *)0x0) && (*(longlong *)((longlong)DAT_1803c9010 + 0xb8) == 0))
    {
      *(longlong **)((longlong)DAT_1803c9010 + 0xb8) = param_1;
      param_1[0x16] = (longlong)DAT_1803c9010;
      goto LAB_1801aa9b5;
    }
    uVar8 = 0x57;
  }
  uVar5 = 0x6e;
LAB_1801aa948:
  FUN_1801a70c0(0x26,0x78,uVar5,"crypto\\engine\\eng_list.c",uVar8,uVar9);
  FUN_1801a70c0(0x26,0x69,0x6e,"crypto\\engine\\eng_list.c",0x134);
  FUN_1801ade50(DAT_180447968);
  return 0;
}



// ===== FUN_1801aaa20 @ 1801aaa20 (size 898)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801aaa20(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  uVar11 = 0x1801aaa2c;
  if (param_1 == (char *)0x0) {
    FUN_1801a70c0(0x26,0x6a,0x43,"crypto\\engine\\eng_list.c",0x171,0x1801aaa2c);
    return (longlong *)0x0;
  }
  iVar3 = FUN_1801addb0(&DAT_1803c9028,FUN_1801abca0);
  lVar9 = 0;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = DAT_1803c902c;
  }
  if (iVar4 == 0) {
    FUN_1801a70c0(0x26,0x6a,0x41,"crypto\\engine\\eng_list.c",0x175,uVar11);
    return (longlong *)0x0;
  }
  FUN_1801add90(DAT_180447968);
  for (plVar8 = DAT_1803c9008; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[0x17]) {
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[*plVar8 - (longlong)param_1];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      if ((*(byte *)(plVar8 + 0x13) & 4) == 0) {
        *(int *)((longlong)plVar8 + 0x9c) = *(int *)((longlong)plVar8 + 0x9c) + 1;
      }
      else {
        plVar6 = (longlong *)FUN_1801abac0();
        if (plVar6 == (longlong *)0x0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          *plVar6 = *plVar8;
          plVar6[1] = plVar8[1];
          plVar6[2] = plVar8[2];
          plVar6[3] = plVar8[3];
          plVar6[4] = plVar8[4];
          plVar6[5] = plVar8[5];
          plVar6[6] = plVar8[6];
          plVar6[7] = plVar8[7];
          plVar6[8] = plVar8[8];
          plVar6[9] = plVar8[9];
          plVar6[0xb] = plVar8[0xb];
          plVar6[0xc] = plVar8[0xc];
          plVar6[0xd] = plVar8[0xd];
          plVar6[0xe] = plVar8[0xe];
          plVar6[0xf] = plVar8[0xf];
          plVar6[0x10] = plVar8[0x10];
          plVar6[0x12] = plVar8[0x12];
          *(int *)(plVar6 + 0x13) = (int)plVar8[0x13];
          lVar10 = plVar8[0x1a];
          plVar6[0x1a] = lVar10;
          if (lVar10 != 0) {
            if (DAT_1803c9018 == (longlong *)0x0) {
              if (DAT_1803c9020 == (longlong *)0x0) {
                DAT_1803c9018 = plVar6;
                plVar6[0x18] = 0;
LAB_1801aac20:
                DAT_1803c9020 = plVar6;
                plVar6[0x19] = 0;
              }
            }
            else if ((DAT_1803c9020 != (longlong *)0x0) && (DAT_1803c9020[0x19] == 0)) {
              DAT_1803c9020[0x19] = (longlong)plVar6;
              plVar6[0x18] = (longlong)DAT_1803c9020;
              goto LAB_1801aac20;
            }
          }
          plVar8 = plVar6;
        }
      }
      break;
    }
  }
  FUN_1801ade50(DAT_180447968);
  if (plVar8 != (longlong *)0x0) {
    return plVar8;
  }
  do {
    lVar10 = lVar9 + 1;
    if (param_1[lVar9] != "dynamic"[lVar9]) {
      pcVar7 = (char *)FUN_1801d1970("OPENSSL_ENGINES");
      pcVar5 = "C:\\Program Files\\OpenSSL\\lib\\engines-1_1";
      if (pcVar7 != (char *)0x0) {
        pcVar5 = pcVar7;
      }
      plVar8 = (longlong *)FUN_1801aaa20("dynamic");
      if ((((plVar8 != (longlong *)0x0) &&
           (iVar4 = FUN_1801ab490(plVar8,&DAT_18030f90c,param_1,0), iVar4 != 0)) &&
          (iVar4 = FUN_1801ab490(plVar8,"DIR_LOAD",&DAT_18030f910,0), iVar4 != 0)) &&
         (((iVar4 = FUN_1801ab490(plVar8,"DIR_ADD",pcVar5,0), iVar4 != 0 &&
           (iVar4 = FUN_1801ab490(plVar8,"LIST_ADD",&DAT_1802ed98c,0), iVar4 != 0)) &&
          (iVar4 = FUN_1801ab490(plVar8,&DAT_18030f93c,0,0), iVar4 != 0)))) {
        return plVar8;
      }
      break;
    }
    plVar8 = (longlong *)0x0;
    lVar9 = lVar10;
  } while (lVar10 != 8);
  FUN_1801aba00(plVar8);
  FUN_1801a70c0(0x26,0x6a,0x74,"crypto\\engine\\eng_list.c",0x1a5);
  FUN_1801a6360(2,&DAT_18030f944,param_1);
  return (longlong *)0x0;
}



// ===== FUN_1801aadb0 @ 1801aadb0 (size 155)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801aadb0(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_1801addb0(&DAT_1803c9028,FUN_1801abca0);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = DAT_1803c902c;
  }
  if (iVar3 == 0) {
    FUN_1801a70c0(0x26,0xc3,0x41,"crypto\\engine\\eng_list.c",0xdc);
    return 0;
  }
  FUN_1801add90(DAT_180447968);
  lVar1 = DAT_1803c9008;
  if (DAT_1803c9008 != 0) {
    *(int *)(DAT_1803c9008 + 0x9c) = *(int *)(DAT_1803c9008 + 0x9c) + 1;
  }
  FUN_1801ade50(DAT_180447968);
  return lVar1;
}



// ===== FUN_1801aae50 @ 1801aae50 (size 138)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801aae50(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    FUN_1801a70c0(0x26,0x73,0x43,"crypto\\engine\\eng_list.c",0x102,0x1801aae5c);
    return 0;
  }
  FUN_1801add90(DAT_180447968);
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x9c) = *(int *)(lVar1 + 0x9c) + 1;
  }
  FUN_1801ade50(DAT_180447968);
  FUN_1801aba00(param_1);
  return lVar1;
}



// ===== FUN_1801aaee0 @ 1801aaee0 (size 276)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801aaee0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (((param_1 == 0) || ((*(longlong *)(param_1 + 0xd0) == 0 && (param_2 == 0)))) ||
     ((param_3 != 0 && (iVar3 = FUN_1801add90(DAT_180447968), iVar3 == 0)))) {
    return 0;
  }
  lVar2 = DAT_1803c9018;
  lVar1 = DAT_1803c9018;
  if (param_2 != 0) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xb8)) {
      if (*(longlong *)(lVar1 + 0xd0) == param_2) goto LAB_1801aafc9;
    }
    if (*(longlong *)(param_1 + 0xd0) != 0) goto LAB_1801aafc9;
    *(longlong *)(param_1 + 0xd0) = param_2;
  }
  if (lVar2 == 0) {
    if (DAT_1803c9020 != 0) goto LAB_1801aafc9;
    DAT_1803c9018 = param_1;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  else {
    if ((DAT_1803c9020 == 0) || (*(longlong *)(DAT_1803c9020 + 200) != 0)) goto LAB_1801aafc9;
    *(longlong *)(DAT_1803c9020 + 200) = param_1;
    *(longlong *)(param_1 + 0xc0) = DAT_1803c9020;
  }
  *(undefined8 *)(param_1 + 200) = 0;
  uVar4 = 1;
  DAT_1803c9020 = param_1;
LAB_1801aafc9:
  if (param_3 != 0) {
    FUN_1801ade50(DAT_180447968);
  }
  return uVar4;
}



// ===== FUN_1801ab000 @ 1801ab000 (size 330)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ab000(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801ab00c;
  lVar2 = DAT_1803c9008;
  do {
    while( true ) {
      if (lVar2 == 0) {
        DAT_1803c9008 = lVar2;
        return;
      }
      DAT_1803c9008 = lVar2;
      if (lVar2 != 0) break;
      FUN_1801a70c0(0x26,0x7b,0x43,"crypto\\engine\\eng_list.c",0x140,uVar4);
      lVar2 = DAT_1803c9008;
    }
    FUN_1801add90(DAT_180447968);
    lVar3 = DAT_1803c9008;
    for (lVar1 = DAT_1803c9008; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xb8)) {
      if (lVar1 == lVar2) {
        if (lVar1 != 0) {
          if (*(longlong *)(lVar2 + 0xb8) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0xb8) + 0xb0) = *(undefined8 *)(lVar2 + 0xb0);
          }
          if (*(longlong *)(lVar2 + 0xb0) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0xb0) + 0xb8) = *(undefined8 *)(lVar2 + 0xb8);
          }
          if (lVar3 == lVar2) {
            DAT_1803c9008 = *(longlong *)(lVar2 + 0xb8);
          }
          if (DAT_1803c9010 == lVar2) {
            DAT_1803c9010 = *(longlong *)(lVar2 + 0xb0);
          }
          FUN_1801abe40(lVar2,0);
          goto LAB_1801ab0b3;
        }
        break;
      }
    }
    FUN_1801a70c0(0x26,0x79,0x69,"crypto\\engine\\eng_list.c",0x76,uVar4);
    FUN_1801a70c0(0x26,0x7b,0x6e,"crypto\\engine\\eng_list.c",0x145);
LAB_1801ab0b3:
    FUN_1801ade50(DAT_180447968);
    lVar2 = DAT_1803c9008;
  } while( true );
}



// ===== FUN_1801ab150 @ 1801ab150 (size 203)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ab150(longlong param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0xd0) != 0)) &&
     ((param_2 == 0 || (iVar1 = FUN_1801add90(DAT_180447968), iVar1 != 0)))) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (*(longlong *)(param_1 + 200) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 200) + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
    }
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 200) = *(undefined8 *)(param_1 + 200);
    }
    if (DAT_1803c9018 == param_1) {
      DAT_1803c9018 = *(longlong *)(param_1 + 200);
    }
    if (DAT_1803c9020 == param_1) {
      DAT_1803c9020 = *(longlong *)(param_1 + 0xc0);
    }
    if (param_2 != 0) {
      FUN_1801ade50(DAT_180447968);
    }
  }
  return;
}



// ===== FUN_1801ab220 @ 1801ab220 (size 363)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801ab220(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0x1801ab23b;
  if (param_1 == 0) {
    FUN_1801a70c0(0x26,0x8e,0x43,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x81),0x1801ab23b);
    uVar3 = 0;
  }
  else {
    FUN_1801add90(DAT_180447968);
    iVar1 = *(int *)(param_1 + 0x9c);
    FUN_1801ade50(DAT_180447968);
    pcVar2 = *(code **)(param_1 + 0x70);
    uVar3 = (ulonglong)(pcVar2 != (code *)0x0);
    if (iVar1 < 1) {
      FUN_1801a70c0(0x26,0x8e,0x82,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x89),uVar5);
      uVar3 = 0;
    }
    else if (param_2 != 10) {
      if (param_2 - 0xbU < 8) {
        if (pcVar2 == (code *)0x0) {
          FUN_1801a70c0(0x26,0x8e,0x78,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x9e),uVar5);
          return 0xffffffff;
        }
        if ((*(byte *)(param_1 + 0x98) & 2) == 0) {
          uVar3 = FUN_1801ab700(param_1,param_2,param_3,param_4,param_5);
          return uVar3;
        }
      }
      else if (pcVar2 == (code *)0x0) {
        FUN_1801a70c0(0x26,0x8e,0x78,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0xab),uVar5);
        return 0;
      }
      uVar3 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return uVar3;
}



// ===== FUN_1801ab390 @ 1801ab390 (size 252)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801ab390(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801ab3a5;
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_1801a70c0(0x26,0xb2,0x43,"crypto\\engine\\eng_ctrl.c",199,0x1801ab3a5);
    return false;
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (iVar1 = FUN_1801ab220(param_1,0xd,0,param_2,0), 0 < iVar1)) {
    iVar1 = FUN_1801ab220(param_1,iVar1,param_3,param_4,param_5);
    return 0 < iVar1;
  }
  if (param_6 == 0) {
    FUN_1801a70c0(0x26,0xb2,0x89,"crypto\\engine\\eng_ctrl.c",0xd9,uVar2);
  }
  else {
    FUN_1801a64b0();
  }
  return param_6 != 0;
}



// ===== FUN_1801ab490 @ 1801ab490 (size 620)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ab490(longlong param_1,longlong param_2,char *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  char *local_res8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 uVar7;
  
  uVar7 = 0x1801ab49e;
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_1801a70c0(0x26,0xab,0x43,"crypto\\engine\\eng_ctrl.c",0xed,0x1801ab49e);
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x70) == 0) ||
     (iVar1 = FUN_1801ab220(param_1,0xd,0,param_2,0), iVar1 < 1)) {
    if (param_4 != 0) {
      FUN_1801a64b0();
      return 1;
    }
    uVar5 = 0xff;
    uVar4 = 0x89;
    goto LAB_1801ab5a5;
  }
  uVar6 = 0;
  uVar2 = FUN_1801ab220(param_1,0x12,iVar1,0,0);
  if ((int)uVar2 < 0) {
    FUN_1801a70c0(0x26,0xaa,0x8a,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar6,0xb7),uVar7);
    uVar4 = 0x86;
    uVar5 = 0x104;
    goto LAB_1801ab5a5;
  }
  if ((uVar2 & 7) == 0) {
    uVar5 = CONCAT44(uVar6,0x104);
    uVar4 = 0x86;
    goto LAB_1801ab5a5;
  }
  uVar2 = FUN_1801ab220(param_1,0x12,iVar1,0,0);
  if ((int)uVar2 < 0) {
    uVar5 = 0x10f;
LAB_1801ab613:
    uVar4 = 0x6e;
LAB_1801ab5a5:
    FUN_1801a70c0(0x26,0xab,uVar4,"crypto\\engine\\eng_ctrl.c",uVar5,uVar7);
    return 0;
  }
  if ((uVar2 & 4) == 0) {
    if (param_3 == (char *)0x0) {
      uVar5 = 0x128;
      uVar4 = 0x87;
      goto LAB_1801ab5a5;
    }
    if ((uVar2 & 2) != 0) {
      iVar1 = FUN_1801ab220(param_1,iVar1,0,param_3,0);
      goto joined_r0x0001801ab603;
    }
    if ((uVar2 & 1) == 0) {
      uVar5 = 0x13a;
      goto LAB_1801ab613;
    }
    lVar3 = strtol(param_3,&local_res8,10);
    if ((param_3 == local_res8) || (*local_res8 != '\0')) {
      uVar5 = 0x140;
      uVar4 = 0x85;
      goto LAB_1801ab5a5;
    }
  }
  else {
    if (param_3 != (char *)0x0) {
      uVar5 = 0x118;
      uVar4 = 0x88;
      goto LAB_1801ab5a5;
    }
    lVar3 = 0;
  }
  iVar1 = FUN_1801ab220(param_1,iVar1,lVar3,0,0);
joined_r0x0001801ab603:
  if (iVar1 < 1) {
    return 0;
  }
  return 1;
}



// ===== FUN_1801ab700 @ 1801ab700 (size 730)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801ab700(longlong param_1,int param_2,uint param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  uint *puVar3;
  bool bVar4;
  char *pcVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  
  if (param_2 == 0xb) {
    puVar3 = *(uint **)(param_1 + 0x90);
    if (((puVar3 == (uint *)0x0) || (*puVar3 == 0)) || (*(longlong *)(puVar3 + 2) == 0)) {
      return 0;
    }
    return (ulonglong)*puVar3;
  }
  if ((((param_2 - 0xdU & 0xfffffff9) == 0) && (param_2 != 0x13)) && (param_4 == (char *)0x0)) {
    FUN_1801a70c0(0x26,0xac,0x43,"crypto\\engine\\eng_ctrl.c",0x4f);
    return 0xffffffffffffffff;
  }
  puVar3 = *(uint **)(param_1 + 0x90);
  if (param_2 == 0xd) {
    if (puVar3 != (uint *)0x0) {
      iVar12 = 0;
      for (puVar6 = puVar3; *puVar6 != 0; puVar6 = puVar6 + 8) {
        pcVar5 = *(char **)(puVar6 + 2);
        if (pcVar5 == (char *)0x0) {
LAB_1801ab7e0:
          if (((*puVar6 != 0) && (*(longlong *)(puVar6 + 2) != 0)) && (-1 < iVar12)) {
            return (ulonglong)puVar3[(longlong)iVar12 * 8];
          }
          break;
        }
        lVar11 = (longlong)param_4 - (longlong)pcVar5;
        do {
          cVar1 = *pcVar5;
          cVar2 = pcVar5[lVar11];
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) goto LAB_1801ab7e0;
        iVar12 = iVar12 + 1;
      }
    }
    uVar14 = 0x57;
    uVar10 = 0x89;
  }
  else {
    if (puVar3 != (uint *)0x0) {
      iVar12 = 0;
      for (puVar6 = puVar3;
          ((uVar13 = *puVar6, uVar13 != 0 && (*(longlong *)(puVar6 + 2) != 0)) && (uVar13 < param_3)
          ); puVar6 = puVar6 + 8) {
        iVar12 = iVar12 + 1;
      }
      if ((uVar13 == param_3) && (-1 < iVar12)) {
        switch(param_2) {
        case 0xc:
          if ((puVar3[(longlong)iVar12 * 8 + 8] == 0) ||
             (bVar4 = false, *(longlong *)(puVar3 + (longlong)iVar12 * 8 + 10) == 0)) {
            bVar4 = true;
          }
          uVar13 = 0;
          if (!bVar4) {
            uVar13 = puVar3[(longlong)iVar12 * 8 + 8];
          }
          return (ulonglong)uVar13;
        default:
          uVar14 = 0x79;
          uVar10 = 0x6e;
          break;
        case 0xe:
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (*(char *)(*(longlong *)(puVar3 + (longlong)iVar12 * 8 + 2) + uVar7) != '\0');
          return uVar7;
        case 0xf:
          pcVar5 = *(char **)(puVar3 + (longlong)iVar12 * 8 + 2);
          pcVar9 = param_4;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            *pcVar9 = cVar1;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (param_4[uVar7] != '\0');
          return uVar7;
        case 0x10:
          uVar7 = 0xffffffffffffffff;
          puVar8 = *(undefined **)(puVar3 + (longlong)iVar12 * 8 + 4);
          if (*(undefined **)(puVar3 + (longlong)iVar12 * 8 + 4) == (undefined *)0x0) {
            puVar8 = PTR_PTR_1803be488;
          }
          do {
            uVar7 = uVar7 + 1;
          } while (puVar8[uVar7] != '\0');
          return uVar7;
        case 0x11:
          pcVar5 = *(char **)(puVar3 + (longlong)iVar12 * 8 + 4);
          if (*(char **)(puVar3 + (longlong)iVar12 * 8 + 4) == (char *)0x0) {
            pcVar5 = PTR_PTR_1803be488;
          }
          lVar11 = (longlong)param_4 - (longlong)pcVar5;
          do {
            cVar1 = *pcVar5;
            pcVar5[lVar11] = cVar1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (param_4[uVar7] != '\0');
          return uVar7;
        case 0x12:
          return (ulonglong)puVar3[(longlong)iVar12 * 8 + 6];
        }
        goto LAB_1801ab9b3;
      }
    }
    uVar14 = 0x62;
    uVar10 = 0x8a;
  }
LAB_1801ab9b3:
  FUN_1801a70c0(0x26,0xac,uVar10,"crypto\\engine\\eng_ctrl.c",uVar14);
  return 0xffffffffffffffff;
}



// ===== FUN_1801aba00 @ 1801aba00 (size 133)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801aba00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x9c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_1801c6610();
      FUN_1801e9080(param_1);
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        (**(code **)(param_1 + 0x58))(param_1);
      }
      FUN_1801ab150(param_1,1);
      FUN_1801ae0a0(10,param_1,param_1 + 0xa8);
      FUN_180195e10(param_1,"crypto\\engine\\eng_lib.c",0x62);
    }
  }
  return 1;
}



// ===== FUN_1801abac0 @ 1801abac0 (size 190)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801abac0(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801abacc;
  iVar1 = FUN_1801addb0(&DAT_1803c9028,FUN_1801abca0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1803c902c;
  }
  if (iVar2 != 0) {
    lVar3 = FUN_180196100(0xd8,"crypto\\engine\\eng_lib.c",0x22);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x9c) = 1;
      iVar2 = FUN_1801ae440(10,lVar3,lVar3 + 0xa8);
      if (iVar2 == 0) {
        FUN_180195e10(lVar3,"crypto\\engine\\eng_lib.c",0x29);
        return 0;
      }
      return lVar3;
    }
  }
  FUN_1801a70c0(0x26,0x7a,0x41,"crypto\\engine\\eng_lib.c",0x23,uVar4);
  return 0;
}



// ===== FUN_1801abbf0 @ 1801abbf0 (size 68)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801abbf0(longlong *param_1,longlong param_2)

{
  if (param_2 == 0) {
    FUN_1801a70c0(0x26,0x81,0x43,"crypto\\engine\\eng_lib.c",199);
    return 0;
  }
  *param_1 = param_2;
  return 1;
}



// ===== FUN_1801abc50 @ 1801abc50 (size 69)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801abc50(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    FUN_1801a70c0(0x26,0x82,0x43,"crypto\\engine\\eng_lib.c",0xd1);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}



// ===== FUN_1801abca0 @ 1801abca0 (size 70)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801abca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1801e4120(0,0,param_3,param_4,0x1801abcaa);
  if (iVar1 == 0) {
    DAT_1803c902c = 0;
    return;
  }
  DAT_180447968 = FUN_1801add30();
  DAT_1803c902c = (uint)(DAT_180447968 != 0);
  return;
}



// ===== FUN_1801abcf0 @ 1801abcf0 (size 87)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801abcf0(undefined8 param_1)

{
  longlong lVar1;
  
  if ((DAT_1803c9030 == 0) && (DAT_1803c9030 = FUN_1801957e0(), DAT_1803c9030 == 0)) {
    return;
  }
  lVar1 = FUN_1801abf50(param_1);
  if (lVar1 == 0) {
    return;
  }
  FUN_1801956a0(DAT_1803c9030,lVar1,0);
  return;
}



// ===== FUN_1801abd50 @ 1801abd50 (size 112)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801abd50(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((DAT_1803c9030 == 0) && (DAT_1803c9030 = FUN_1801957e0(), DAT_1803c9030 == 0)) {
    return;
  }
  lVar2 = FUN_1801abf50(param_1);
  if ((lVar2 == 0) || (iVar1 = FUN_180195990(DAT_1803c9030,lVar2), 0 < iVar1)) {
    return;
  }
  FUN_180195e10(lVar2,"crypto\\engine\\eng_lib.c",0x9d);
  return;
}



// ===== FUN_1801abdf0 @ 1801abdf0 (size 76)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801abdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_1803c9030 != 0) {
    FUN_1801958f0(DAT_1803c9030,FUN_1801abdc0,param_3,param_4,0x1801abdfa);
    DAT_1803c9030 = 0;
  }
  FUN_1801adcf0(DAT_180447968);
  DAT_180447968 = 0;
  return;
}



// ===== FUN_1801abe40 @ 1801abe40 (size 162)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801abe40(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 0x9c) + -1;
      *(int *)(param_1 + 0x9c) = iVar2;
    }
    else {
      LOCK();
      piVar1 = (int *)(param_1 + 0x9c);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      iVar2 = iVar2 + -1;
    }
    if (iVar2 < 1) {
      FUN_1801c6610();
      FUN_1801e9080(param_1);
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        (**(code **)(param_1 + 0x58))(param_1);
      }
      FUN_1801ab150(param_1,param_2);
      FUN_1801ae0a0(10,param_1,param_1 + 0xa8);
      FUN_180195e10(param_1,"crypto\\engine\\eng_lib.c",0x62);
    }
  }
  return 1;
}



// ===== FUN_1801abef0 @ 1801abef0 (size 81)

void FUN_1801abef0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1a] = 0;
  return;
}



// ===== FUN_1801abf50 @ 1801abf50 (size 91)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1801abf50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801abf5c;
  puVar1 = (undefined8 *)FUN_180195dc0(8,"crypto\\engine\\eng_lib.c",0x82);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1801a70c0(0x26,199,0x41,"crypto\\engine\\eng_lib.c",0x83,uVar2);
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  return puVar1;
}



// ===== FUN_1801abfb0 @ 1801abfb0 (size 229)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801abfb0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801abfc0;
  if (param_1 == 0) {
    return 1;
  }
  FUN_1801add90(DAT_180447968);
  iVar2 = 1;
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    FUN_1801ade50(DAT_180447968);
    iVar2 = (**(code **)(param_1 + 0x68))(param_1);
    FUN_1801add90(DAT_180447968);
    if (iVar2 != 0) goto LAB_1801ac01d;
  }
  else {
LAB_1801ac01d:
    iVar3 = FUN_1801abe40(param_1,0);
    if (iVar3 != 0) goto LAB_1801ac04d;
    FUN_1801a70c0(0x26,0xbf,0x6a,"crypto\\engine\\eng_init.c",0x46,uVar4);
  }
  iVar2 = 0;
LAB_1801ac04d:
  FUN_1801ade50(DAT_180447968);
  if (iVar2 == 0) {
    FUN_1801a70c0(0x26,0x6b,0x6a,"crypto\\engine\\eng_init.c",0x69);
    return 0;
  }
  return iVar2;
}



// ===== FUN_1801ac0a0 @ 1801ac0a0 (size 229)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801ac0a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801ac0ac;
  if (param_1 == 0) {
    FUN_1801a70c0(0x26,0x77,0x43,"crypto\\engine\\eng_init.c",0x51,0x1801ac0ac);
    return 0;
  }
  iVar1 = FUN_1801addb0(&DAT_1803c9028,FUN_1801abca0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1803c902c;
  }
  if (iVar2 == 0) {
    FUN_1801a70c0(0x26,0x77,0x41,"crypto\\engine\\eng_init.c",0x55,uVar3);
    return 0;
  }
  FUN_1801add90(DAT_180447968);
  iVar2 = 1;
  if ((*(int *)(param_1 + 0xa0) == 0) && (*(code **)(param_1 + 0x60) != (code *)0x0)) {
    iVar2 = (**(code **)(param_1 + 0x60))(param_1);
    if (iVar2 == 0) goto LAB_1801ac16c;
  }
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
LAB_1801ac16c:
  FUN_1801ade50(DAT_180447968);
  return iVar2;
}



// ===== FUN_1801ac190 @ 1801ac190 (size 180)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801ac190(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801ac1a5;
  iVar2 = 1;
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (pcVar4 = *(code **)(param_1 + 0x68), pcVar4 != (code *)0x0)) {
    if (param_2 != 0) {
      FUN_1801ade50(DAT_180447968);
      pcVar4 = *(code **)(param_1 + 0x68);
    }
    iVar2 = (*pcVar4)(param_1);
    if (param_2 != 0) {
      FUN_1801add90(DAT_180447968);
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar3 = FUN_1801abe40(param_1,0);
  if (iVar3 == 0) {
    FUN_1801a70c0(0x26,0xbf,0x6a,"crypto\\engine\\eng_init.c",0x46,uVar5);
    return 0;
  }
  return iVar2;
}



// ===== FUN_1801ac250 @ 1801ac250 (size 78)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801ac250(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 1;
  if ((*(int *)(param_1 + 0xa0) == 0) && (*(code **)(param_1 + 0x60) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x60))(param_1);
    uVar2 = uVar1 & 0xffffffff;
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  return uVar2;
}



// ===== FUN_1801ac2a0 @ 1801ac2a0 (size 213)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801ac2a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801ac2ba;
  if (param_1 == 0) {
    uVar3 = 0x3c;
    uVar2 = 0x43;
  }
  else {
    FUN_1801add90(DAT_180447968);
    if (*(int *)(param_1 + 0xa0) == 0) {
      FUN_1801ade50(DAT_180447968);
      uVar2 = 0x75;
      uVar3 = 0x42;
    }
    else {
      FUN_1801ade50(DAT_180447968);
      if (*(code **)(param_1 + 0x78) == (code *)0x0) {
        uVar3 = 0x48;
        uVar2 = 0x7d;
      }
      else {
        lVar1 = (**(code **)(param_1 + 0x78))(param_1,param_2,param_3,param_4);
        if (lVar1 != 0) {
          return lVar1;
        }
        uVar3 = 0x4e;
        uVar2 = 0x80;
      }
    }
  }
  FUN_1801a70c0(0x26,0x96,uVar2,"crypto\\engine\\eng_pkey.c",uVar3,uVar4);
  return 0;
}



// ===== FUN_1801ac380 @ 1801ac380 (size 292)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801ac380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (param_1 == 0) {
    FUN_1801a70c0(0x26,0xc2,0x43,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x7a));
    uVar1 = 0;
  }
  else {
    FUN_1801add90(DAT_180447968);
    if (*(int *)(param_1 + 0xa0) == 0) {
      FUN_1801ade50(DAT_180447968);
      FUN_1801a70c0(0x26,0xc2,0x75,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x81));
      uVar1 = 0;
    }
    else {
      FUN_1801ade50(DAT_180447968);
      if (*(code **)(param_1 + 0x88) == (code *)0x0) {
        FUN_1801a70c0(0x26,0xc2,0x7d,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x87));
        uVar1 = 0;
      }
      else {
        uVar1 = (**(code **)(param_1 + 0x88))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
  }
  return uVar1;
}



// ===== FUN_1801ac4d0 @ 1801ac4d0 (size 140)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ac4d0(void)

{
  longlong lVar1;
  
  for (lVar1 = FUN_1801aadb0(); lVar1 != 0; lVar1 = FUN_1801aae50(lVar1)) {
    if ((*(byte *)(lVar1 + 0x98) & 8) == 0) {
      FUN_1801aff10(lVar1);
      FUN_1801c34c0(lVar1);
      FUN_1801c8a40(lVar1);
      FUN_1801cc580(lVar1);
      FUN_1801cb9a0(lVar1);
      FUN_1801e9220(lVar1);
      FUN_1801b8e10(lVar1);
      FUN_1801c6530(lVar1);
      FUN_1801e8fa0(lVar1);
    }
  }
  return 1;
}



// ===== FUN_1801ac560 @ 1801ac560 (size 209)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ac560(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if (((param_2 & 0x40) != 0) && (iVar1 = FUN_1801aff90(), iVar1 == 0)) {
    return 0;
  }
  if (((char)param_2 < '\0') && (iVar1 = FUN_1801c3530(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 1) != 0) && (iVar1 = FUN_1801c8a90(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 2) != 0) && (iVar1 = FUN_1801cc5d0(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 4) != 0) && (iVar1 = FUN_1801cb9f0(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 >> 0xb & 1) != 0) && (iVar1 = FUN_1801e9280(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 8) != 0) && (iVar1 = FUN_1801b8e70(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 >> 9 & 1) != 0) && (iVar1 = FUN_1801c65a0(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 >> 10 & 1) == 0) || (iVar1 = FUN_1801e9010(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// ===== FUN_1801ac640 @ 1801ac640 (size 336)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ac640(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint local_res18 [4];
  
  local_res18[0] = 0;
  iVar2 = FUN_1801e9610(param_2,0x2c,1,FUN_1801ac790,local_res18,0x1801ac655);
  uVar1 = local_res18[0];
  if (iVar2 == 0) {
    FUN_1801a70c0(0x26,0xbd,0x96,"crypto\\engine\\eng_fat.c",0x56);
    FUN_1801a6360(2,&DAT_18030fa20,param_2);
    return 0;
  }
  cVar3 = (char)local_res18[0];
  if (((local_res18[0] & 0x40) != 0) && (iVar2 = FUN_1801aff90(param_1), iVar2 == 0)) {
    return 0;
  }
  if ((cVar3 < '\0') && (iVar2 = FUN_1801c3530(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 & 1) != 0) && (iVar2 = FUN_1801c8a90(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 & 2) != 0) && (iVar2 = FUN_1801cc5d0(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 & 4) != 0) && (iVar2 = FUN_1801cb9f0(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 >> 0xb & 1) != 0) && (iVar2 = FUN_1801e9280(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 & 8) != 0) && (iVar2 = FUN_1801b8e70(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 >> 9 & 1) != 0) && (iVar2 = FUN_1801c65a0(param_1), iVar2 == 0)) {
    return 0;
  }
  if (((uVar1 >> 10 & 1) == 0) || (iVar2 = FUN_1801e9010(param_1), iVar2 != 0)) {
    return 1;
  }
  return 0;
}



// ===== FUN_1801ac790 @ 1801ac790 (size 592)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ac790(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  size_t _MaxCount;
  
  if (param_1 != (char *)0x0) {
    _MaxCount = (size_t)param_2;
    iVar1 = strncmp(param_1,"ALL",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0xffff;
      return 1;
    }
    iVar1 = strncmp(param_1,"RSA",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 1;
      return 1;
    }
    iVar1 = strncmp(param_1,"DSA",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 2;
      return 1;
    }
    iVar1 = strncmp(param_1,"DH",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 4;
      return 1;
    }
    iVar1 = strncmp(param_1,"EC",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x800;
      return 1;
    }
    iVar1 = strncmp(param_1,"RAND",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 8;
      return 1;
    }
    iVar1 = strncmp(param_1,"CIPHERS",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x40;
      return 1;
    }
    iVar1 = strncmp(param_1,"DIGESTS",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x80;
      return 1;
    }
    iVar1 = strncmp(param_1,"PKEY",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x600;
      return 1;
    }
    iVar1 = strncmp(param_1,"PKEY_CRYPTO",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x200;
      return 1;
    }
    iVar1 = strncmp(param_1,"PKEY_ASN1",_MaxCount);
    if (iVar1 == 0) {
      *param_3 = *param_3 | 0x400;
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801ac9e0 @ 1801ac9e0 (size 202)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ac9e0(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *param_1;
  local_resc = param_1[1];
  FUN_1801ea3a0(&local_res8,param_3,param_4);
  *param_2 = (undefined1)local_res8;
  param_2[1] = (char)((uint)local_res8 >> 8);
  param_2[2] = (char)((uint)local_res8 >> 0x10);
  param_2[3] = (char)((uint)local_res8 >> 0x18);
  param_2[4] = (undefined1)local_resc;
  param_2[5] = (char)((uint)local_resc >> 8);
  param_2[6] = (char)((uint)local_resc >> 0x10);
  param_2[7] = (char)((uint)local_resc >> 0x18);
  return;
}



// ===== FUN_1801acab0 @ 1801acab0 (size 1620)

void FUN_1801acab0(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  piVar4 = &DAT_1803103b8;
  uVar3 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar3;
  uVar7 = param_1[1] ^ uVar3 << 4;
  uVar3 = (uVar2 << 0x12 ^ uVar2) & 0xcccc0000;
  uVar2 = uVar2 ^ uVar3 >> 0x12 ^ uVar3;
  uVar3 = (uVar7 << 0x12 ^ uVar7) & 0xcccc0000;
  uVar7 = uVar7 ^ uVar3 >> 0x12 ^ uVar3;
  uVar3 = (uVar7 >> 1 ^ uVar2) & 0x55555555;
  uVar2 = uVar2 ^ uVar3;
  uVar7 = uVar7 ^ uVar3 * 2;
  uVar3 = (uVar2 >> 8 ^ uVar7) & 0xff00ff;
  uVar7 = uVar7 ^ uVar3;
  uVar2 = uVar2 ^ uVar3 << 8;
  uVar3 = (uVar7 >> 1 ^ uVar2) & 0x55555555;
  uVar2 = uVar2 ^ uVar3;
  uVar7 = uVar7 ^ uVar3 * 2;
  uVar3 = (uVar7 >> 0xc & 0xff0 | uVar2 & 0xf000000f) >> 4 | (uVar7 & 0xff) << 0x10 | uVar7 & 0xff00
  ;
  uVar2 = uVar2 & 0xfffffff;
  do {
    if (piVar4[-2] == 0) {
      uVar8 = uVar2 << 0x1b;
      uVar2 = uVar2 >> 1;
      uVar7 = uVar3 << 0x1b;
      uVar3 = uVar3 >> 1;
    }
    else {
      uVar8 = uVar2 << 0x1a;
      uVar2 = uVar2 >> 2;
      uVar7 = uVar3 << 0x1a;
      uVar3 = uVar3 >> 2;
    }
    uVar9 = uVar8 & 0xfffffff | uVar2;
    uVar5 = uVar7 & 0xfffffff | uVar3;
    uVar8 = *(uint *)(&DAT_18030feb0 +
                     (ulonglong)
                     (((uVar2 & 0xc00000 | (uVar8 & 0xfffffff | uVar2 & 0xe000000) >> 1) >> 1 |
                      uVar2 & 0x100000) >> 0x14) * 4) |
            *(uint *)(&DAT_18030fcb0 + (ulonglong)(((uVar2 & 0x1e00) >> 1 | uVar2 & 0xc0) >> 6) * 4)
            | *(uint *)(&DAT_18030fdb0 +
                       (ulonglong)((uVar2 & 0x1e000 | (uVar2 & 0xc0000) >> 1) >> 0xd) * 4) |
            *(uint *)(&DAT_18030fbb0 + (ulonglong)(uVar2 & 0x3f) * 4);
    uVar7 = *(uint *)(&DAT_1803100b0 + (ulonglong)((uVar3 & 0x180 | (uVar3 & 0x3c00) >> 1) >> 7) * 4
                     ) |
            *(uint *)(&DAT_1803102b0 +
                     (ulonglong)
                     ((uVar3 & 0x1e00000 | (uVar7 & 0xfffffff | uVar3 & 0xc000000) >> 1) >> 0x15) *
                     4) | *(uint *)(&DAT_1803101b0 + (ulonglong)((uVar3 & 0x1f8000) >> 0xf) * 4) |
            *(uint *)(&DAT_18030ffb0 + (ulonglong)(uVar3 & 0x3f) * 4);
    iVar1 = piVar4[-1];
    *param_2 = (uVar7 & 0xffff) >> 0xe | (uVar8 & 0xffff | uVar7 << 0x10) << 2;
    param_2[1] = uVar7 >> 0x1a | (uVar8 >> 0x10 | uVar7 & 0xffff0000) << 6;
    if (iVar1 == 0) {
      uVar2 = uVar2 << 0x1b | uVar9 >> 1;
      uVar3 = uVar3 << 0x1b;
      uVar5 = uVar5 >> 1;
    }
    else {
      uVar2 = uVar2 << 0x1a | uVar9 >> 2;
      uVar3 = uVar3 << 0x1a;
      uVar5 = uVar5 >> 2;
    }
    uVar8 = uVar2 & 0xfffffff;
    uVar9 = uVar3 & 0xfffffff | uVar5;
    uVar7 = uVar8 >> 1;
    uVar7 = *(uint *)(&DAT_18030feb0 +
                     (ulonglong)
                     (((uVar2 & 0xc00000 | uVar7 & 0x7000000) >> 1 | uVar2 & 0x100000) >> 0x14) * 4)
            | *(uint *)(&DAT_18030fcb0 + (ulonglong)((uVar7 & 0xf00 | uVar2 & 0xc0) >> 6) * 4) |
            *(uint *)(&DAT_18030fdb0 + (ulonglong)((uVar2 & 0x1e000 | uVar7 & 0x60000) >> 0xd) * 4)
            | *(uint *)(&DAT_18030fbb0 + (ulonglong)(uVar2 & 0x3f) * 4);
    uVar3 = *(uint *)(&DAT_1803102b0 +
                     (ulonglong)
                     ((uVar5 & 0x1e00000 | (uVar3 & 0xfffffff | uVar5 & 0xc000000) >> 1) >> 0x15) *
                     4) |
            *(uint *)(&DAT_1803100b0 + (ulonglong)((uVar5 & 0x180 | (uVar5 & 0x3c00) >> 1) >> 7) * 4
                     ) | *(uint *)(&DAT_1803101b0 + (ulonglong)((uVar5 & 0x1f8000) >> 0xf) * 4) |
            *(uint *)(&DAT_18030ffb0 + (ulonglong)(uVar5 & 0x3f) * 4);
    iVar1 = *piVar4;
    param_2[2] = (uVar3 & 0xffff) >> 0xe | (uVar7 & 0xffff | uVar3 << 0x10) << 2;
    param_2[3] = uVar3 >> 0x1a | (uVar7 >> 0x10 | uVar3 & 0xffff0000) << 6;
    if (iVar1 == 0) {
      uVar2 = uVar2 << 0x1b;
      uVar8 = uVar8 >> 1;
      uVar5 = uVar5 << 0x1b;
      uVar9 = uVar9 >> 1;
    }
    else {
      uVar2 = uVar2 << 0x1a;
      uVar8 = uVar8 >> 2;
      uVar5 = uVar5 << 0x1a;
      uVar9 = uVar9 >> 2;
    }
    uVar6 = uVar2 & 0xfffffff | uVar8;
    uVar7 = uVar5 & 0xfffffff | uVar9;
    uVar3 = *(uint *)(&DAT_18030feb0 +
                     (ulonglong)
                     (((uVar8 & 0xc00000 | (uVar2 & 0xfffffff | uVar8 & 0xe000000) >> 1) >> 1 |
                      uVar8 & 0x100000) >> 0x14) * 4) |
            *(uint *)(&DAT_18030fcb0 + (ulonglong)(((uVar8 & 0x1e00) >> 1 | uVar8 & 0xc0) >> 6) * 4)
            | *(uint *)(&DAT_18030fdb0 +
                       (ulonglong)((uVar8 & 0x1e000 | (uVar8 & 0xc0000) >> 1) >> 0xd) * 4) |
            *(uint *)(&DAT_18030fbb0 + (ulonglong)(uVar8 & 0x3f) * 4);
    uVar2 = *(uint *)(&DAT_1803102b0 +
                     (ulonglong)
                     ((uVar9 & 0x1e00000 | (uVar5 & 0xfffffff | uVar9 & 0xc000000) >> 1) >> 0x15) *
                     4) |
            *(uint *)(&DAT_1803100b0 + (ulonglong)((uVar9 & 0x180 | (uVar9 & 0x3c00) >> 1) >> 7) * 4
                     ) | *(uint *)(&DAT_1803101b0 + (ulonglong)((uVar9 & 0x1f8000) >> 0xf) * 4) |
            *(uint *)(&DAT_18030ffb0 + (ulonglong)(uVar9 & 0x3f) * 4);
    iVar1 = piVar4[1];
    param_2[4] = (uVar2 & 0xffff) >> 0xe | (uVar3 & 0xffff | uVar2 << 0x10) << 2;
    param_2[5] = uVar2 >> 0x1a | (uVar3 >> 0x10 | uVar2 & 0xffff0000) << 6;
    if (iVar1 == 0) {
      uVar8 = uVar8 << 0x1b;
      uVar6 = uVar6 >> 1;
      uVar9 = uVar9 << 0x1b;
      uVar7 = uVar7 >> 1;
    }
    else {
      uVar8 = uVar8 << 0x1a;
      uVar6 = uVar6 >> 2;
      uVar9 = uVar9 << 0x1a;
      uVar7 = uVar7 >> 2;
    }
    uVar2 = uVar8 & 0xfffffff | uVar6;
    uVar3 = uVar9 & 0xfffffff | uVar7;
    piVar4 = piVar4 + 4;
    uVar8 = *(uint *)(&DAT_18030feb0 +
                     (ulonglong)
                     (((uVar6 & 0xc00000 | (uVar8 & 0xfffffff | uVar6 & 0xe000000) >> 1) >> 1 |
                      uVar6 & 0x100000) >> 0x14) * 4) |
            *(uint *)(&DAT_18030fcb0 + (ulonglong)(((uVar6 & 0x1e00) >> 1 | uVar6 & 0xc0) >> 6) * 4)
            | *(uint *)(&DAT_18030fdb0 +
                       (ulonglong)((uVar6 & 0x1e000 | (uVar6 & 0xc0000) >> 1) >> 0xd) * 4) |
            *(uint *)(&DAT_18030fbb0 + (ulonglong)(uVar6 & 0x3f) * 4);
    uVar7 = *(uint *)(&DAT_1803100b0 + (ulonglong)(((uVar7 & 0x3c00) >> 1 | uVar7 & 0x180) >> 7) * 4
                     ) |
            *(uint *)(&DAT_1803102b0 +
                     (ulonglong)
                     (((uVar9 & 0xfffffff | uVar7 & 0xc000000) >> 1 | uVar7 & 0x1e00000) >> 0x15) *
                     4) | *(uint *)(&DAT_1803101b0 + (ulonglong)((uVar7 & 0x1f8000) >> 0xf) * 4) |
            *(uint *)(&DAT_18030ffb0 + (ulonglong)(uVar7 & 0x3f) * 4);
    param_2[6] = (uVar7 & 0xffff) >> 0xe | (uVar8 & 0xffff | uVar7 << 0x10) << 2;
    param_2[7] = uVar7 >> 0x1a | (uVar8 >> 0x10 | uVar7 & 0xffff0000) << 6;
    param_2 = param_2 + 8;
  } while ((longlong)piVar4 < 0x1803103f8);
  return;
}



// ===== FUN_1801ad110 @ 1801ad110 (size 94)

void FUN_1801ad110(byte *param_1)

{
  *param_1 = (&DAT_18030fa30)[*param_1];
  param_1[1] = (&DAT_18030fa30)[param_1[1]];
  param_1[2] = (&DAT_18030fa30)[param_1[2]];
  param_1[3] = (&DAT_18030fa30)[param_1[3]];
  param_1[4] = (&DAT_18030fa30)[param_1[4]];
  param_1[5] = (&DAT_18030fa30)[param_1[5]];
  param_1[6] = (&DAT_18030fa30)[param_1[6]];
  param_1[7] = (&DAT_18030fa30)[param_1[7]];
  return;
}



// ===== FUN_1801ad170 @ 1801ad170 (size 356)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ad170(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x16];
  puVar1 = param_2 + 6;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    memset((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    FUN_1801ad420(param_2,puVar1,1);
  }
  memset((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_2 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined1 *)((longlong)param_2 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined1 *)((longlong)param_2 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x13);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x17);
  FUN_1801ad420(param_2,puVar1,1);
  param_2[0x16] = 0;
  FUN_180001240(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)uVar3;
  param_1[1] = (char)((uint)uVar3 >> 8);
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[1];
  param_1[4] = (char)uVar3;
  param_1[5] = (char)((uint)uVar3 >> 8);
  param_1[6] = (char)((uint)uVar3 >> 0x10);
  param_1[7] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[2];
  param_1[8] = (char)uVar3;
  param_1[9] = (char)((uint)uVar3 >> 8);
  param_1[10] = (char)((uint)uVar3 >> 0x10);
  param_1[0xb] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[3];
  param_1[0xc] = (char)uVar3;
  param_1[0xd] = (char)((uint)uVar3 >> 8);
  param_1[0xe] = (char)((uint)uVar3 >> 0x10);
  param_1[0xf] = (char)((uint)uVar3 >> 0x18);
  return 1;
}



// ===== FUN_1801ad2e0 @ 1801ad2e0 (size 307)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ad2e0(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    uVar3 = *(uint *)(param_1 + 0x10) + (int)param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x10)) {
      iVar2 = iVar2 + 1;
    }
    *(uint *)(param_1 + 0x10) = uVar3;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x58);
    *(int *)(param_1 + 0x14) = (int)(param_3 >> 0x1d) + iVar2;
    if (uVar4 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x18);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        memcpy((void *)(uVar4 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar4;
      memcpy((void *)(uVar4 + (longlong)puVar1),param_2,_Size);
      FUN_1801ad420(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x58) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    uVar4 = param_3 >> 6;
    if (uVar4 != 0) {
      FUN_1801ad420(param_1,param_2,uVar4);
      param_2 = (void *)((longlong)param_2 + uVar4 * 0x40);
      param_3 = param_3 + uVar4 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      memcpy((void *)(param_1 + 0x18),param_2,param_3);
    }
  }
  return 1;
}



// ===== FUN_1801ad420 @ 1801ad420 (size 2033)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ad420(int *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint local_58;
  uint local_54;
  uint local_50;
  
  if (param_3 != 0) {
    local_58 = param_1[1];
    local_54 = param_1[2];
    local_50 = param_1[3];
    iVar19 = *param_1;
    do {
      param_3 = param_3 + -1;
      iVar5 = *param_2;
      uVar18 = ((local_50 ^ local_54) & local_58 ^ local_50) + iVar5 + iVar19;
      iVar6 = param_2[1];
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar20 = ((local_54 ^ local_58) & uVar18 ^ local_54) + iVar6 + local_50;
      iVar7 = param_2[2];
      uVar20 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar21 = ((local_58 ^ uVar18) & uVar20 ^ local_58) + iVar7 + local_54;
      iVar8 = param_2[3];
      uVar22 = uVar21 * 0x800 | uVar21 >> 0x15;
      iVar9 = param_2[4];
      uVar21 = ((uVar20 ^ uVar18) & uVar22 ^ uVar18) + iVar8 + local_58;
      uVar21 = uVar21 >> 0xd | uVar21 * 0x80000;
      iVar19 = param_2[5];
      uVar18 = ((uVar20 ^ uVar22) & uVar21 ^ uVar20) + iVar9 + uVar18;
      uVar23 = uVar18 * 8 | uVar18 >> 0x1d;
      iVar10 = param_2[6];
      uVar20 = ((uVar22 ^ uVar21) & uVar23 ^ uVar22) + iVar19 + uVar20;
      uVar18 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar22 = ((uVar21 ^ uVar23) & uVar18 ^ uVar21) + iVar10 + uVar22;
      iVar11 = param_2[7];
      uVar22 = uVar22 * 0x800 | uVar22 >> 0x15;
      uVar21 = ((uVar18 ^ uVar23) & uVar22 ^ uVar23) + iVar11 + uVar21;
      uVar20 = uVar21 >> 0xd | uVar21 * 0x80000;
      iVar12 = param_2[8];
      iVar13 = param_2[9];
      uVar23 = ((uVar18 ^ uVar22) & uVar20 ^ uVar18) + iVar12 + uVar23;
      uVar21 = uVar23 * 8 | uVar23 >> 0x1d;
      iVar14 = param_2[10];
      uVar18 = ((uVar22 ^ uVar20) & uVar21 ^ uVar22) + iVar13 + uVar18;
      uVar23 = uVar18 * 0x80 | uVar18 >> 0x19;
      iVar15 = param_2[0xb];
      uVar22 = ((uVar20 ^ uVar21) & uVar23 ^ uVar20) + iVar14 + uVar22;
      uVar22 = uVar22 * 0x800 | uVar22 >> 0x15;
      iVar16 = param_2[0xc];
      uVar20 = ((uVar23 ^ uVar21) & uVar22 ^ uVar21) + iVar15 + uVar20;
      uVar18 = uVar20 >> 0xd | uVar20 * 0x80000;
      uVar21 = ((uVar23 ^ uVar22) & uVar18 ^ uVar23) + iVar16 + uVar21;
      iVar17 = param_2[0xd];
      uVar20 = uVar21 * 8 | uVar21 >> 0x1d;
      piVar1 = param_2 + 0xe;
      piVar2 = param_2 + 0xf;
      param_2 = param_2 + 0x10;
      uVar23 = ((uVar22 ^ uVar18) & uVar20 ^ uVar22) + iVar17 + uVar23;
      uVar21 = uVar23 * 0x80 | uVar23 >> 0x19;
      iVar3 = *piVar1;
      uVar22 = ((uVar18 ^ uVar20) & uVar21 ^ uVar18) + iVar3 + uVar22;
      uVar22 = uVar22 * 0x800 | uVar22 >> 0x15;
      iVar4 = *piVar2;
      uVar18 = ((uVar21 ^ uVar20) & uVar22 ^ uVar20) + iVar4 + uVar18;
      uVar18 = uVar18 >> 0xd | uVar18 * 0x80000;
      uVar20 = uVar20 + 0x5a827999 + ((uVar22 | uVar18) & uVar21 | uVar22 & uVar18) + iVar5;
      uVar20 = uVar20 * 8 | uVar20 >> 0x1d;
      uVar21 = uVar21 + ((uVar18 | uVar20) & uVar22 | uVar18 & uVar20) + 0x5a827999 + iVar9;
      uVar21 = uVar21 * 0x20 | uVar21 >> 0x1b;
      uVar22 = uVar22 + ((uVar18 | uVar20) & uVar21 | uVar18 & uVar20) + 0x5a827999 + iVar12;
      uVar23 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar18 = uVar18 + ((uVar23 | uVar20) & uVar21 | uVar23 & uVar20) + 0x5a827999 + iVar16;
      uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar20 = uVar20 + ((uVar23 | uVar18) & uVar21 | uVar23 & uVar18) + 0x5a827999 + iVar6;
      uVar20 = uVar20 * 8 | uVar20 >> 0x1d;
      uVar21 = uVar21 + ((uVar18 | uVar20) & uVar23 | uVar18 & uVar20) + 0x5a827999 + iVar19;
      uVar22 = uVar21 * 0x20 | uVar21 >> 0x1b;
      uVar23 = uVar23 + ((uVar18 | uVar20) & uVar22 | uVar18 & uVar20) + 0x5a827999 + iVar13;
      uVar23 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar18 = uVar18 + ((uVar23 | uVar20) & uVar22 | uVar23 & uVar20) + 0x5a827999 + iVar17;
      uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar20 = uVar20 + ((uVar23 | uVar18) & uVar22 | uVar23 & uVar18) + 0x5a827999 + iVar7;
      uVar21 = uVar20 * 8 | uVar20 >> 0x1d;
      uVar22 = uVar22 + ((uVar18 | uVar21) & uVar23 | uVar18 & uVar21) + 0x5a827999 + iVar10;
      uVar22 = uVar22 * 0x20 | uVar22 >> 0x1b;
      uVar23 = uVar23 + ((uVar18 | uVar21) & uVar22 | uVar18 & uVar21) + 0x5a827999 + iVar14;
      uVar23 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar18 = uVar18 + 0x5a827999 + ((uVar23 | uVar21) & uVar22 | uVar23 & uVar21) + iVar3;
      uVar20 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar18 = uVar21 + 0x5a827999 + ((uVar23 | uVar20) & uVar22 | uVar23 & uVar20) + iVar8;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar21 = uVar22 + 0x5a827999 + ((uVar20 | uVar18) & uVar23 | uVar20 & uVar18) + iVar11;
      uVar21 = uVar21 * 0x20 | uVar21 >> 0x1b;
      uVar22 = uVar23 + 0x5a827999 + ((uVar20 | uVar18) & uVar21 | uVar20 & uVar18) + iVar15;
      uVar22 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar20 = ((uVar22 | uVar18) & uVar21 | uVar22 & uVar18) + 0x5a827999 + iVar4 + uVar20;
      uVar23 = uVar20 * 0x2000 | uVar20 >> 0x13;
      uVar18 = (uVar21 ^ uVar22 ^ uVar23) + 0x6ed9eba1 + iVar5 + uVar18;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar21 = uVar21 + (uVar22 ^ uVar23 ^ uVar18) + 0x6ed9eba1 + iVar12;
      uVar20 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar22 = uVar22 + (uVar20 ^ uVar23 ^ uVar18) + 0x6ed9eba1 + iVar9;
      uVar21 = uVar22 * 0x800 | uVar22 >> 0x15;
      uVar23 = uVar23 + (uVar20 ^ uVar21 ^ uVar18) + 0x6ed9eba1 + iVar16;
      uVar23 = uVar23 * 0x8000 | uVar23 >> 0x11;
      uVar18 = uVar18 + (uVar20 ^ uVar21 ^ uVar23) + 0x6ed9eba1 + iVar7;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar20 = uVar20 + (uVar21 ^ uVar23 ^ uVar18) + 0x6ed9eba1 + iVar14;
      uVar20 = uVar20 * 0x200 | uVar20 >> 0x17;
      uVar21 = uVar21 + (uVar20 ^ uVar23 ^ uVar18) + 0x6ed9eba1 + iVar10;
      uVar22 = uVar21 * 0x800 | uVar21 >> 0x15;
      uVar23 = uVar23 + (uVar20 ^ uVar22 ^ uVar18) + 0x6ed9eba1 + iVar3;
      uVar23 = uVar23 * 0x8000 | uVar23 >> 0x11;
      uVar18 = uVar18 + (uVar20 ^ uVar22 ^ uVar23) + 0x6ed9eba1 + iVar6;
      uVar21 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar18 = uVar20 + 0x6ed9eba1 + (uVar22 ^ uVar23 ^ uVar21) + iVar13;
      uVar18 = uVar18 * 0x200 | uVar18 >> 0x17;
      uVar20 = uVar22 + 0x6ed9eba1 + (uVar18 ^ uVar23 ^ uVar21) + iVar19;
      uVar20 = uVar20 * 0x800 | uVar20 >> 0x15;
      uVar23 = uVar23 + (uVar18 ^ uVar20 ^ uVar21) + 0x6ed9eba1 + iVar17;
      uVar23 = uVar23 * 0x8000 | uVar23 >> 0x11;
      uVar21 = uVar21 + 0x6ed9eba1 + (uVar18 ^ uVar20 ^ uVar23) + iVar8;
      uVar21 = uVar21 * 8 | uVar21 >> 0x1d;
      uVar18 = uVar18 + 0x6ed9eba1 + (uVar20 ^ uVar23 ^ uVar21) + iVar15;
      uVar22 = uVar18 * 0x200 | uVar18 >> 0x17;
      uVar18 = uVar20 + 0x6ed9eba1 + (uVar22 ^ uVar23 ^ uVar21) + iVar11;
      uVar20 = uVar18 * 0x800 | uVar18 >> 0x15;
      uVar18 = uVar23 + 0x6ed9eba1 + (uVar22 ^ uVar20 ^ uVar21) + iVar4;
      *param_1 = *param_1 + uVar21;
      iVar19 = *param_1;
      local_58 = local_58 + (uVar18 * 0x8000 | uVar18 >> 0x11);
      local_54 = local_54 + uVar20;
      param_1[1] = local_58;
      param_1[2] = local_54;
      local_50 = local_50 + uVar22;
      param_1[3] = local_50;
    } while (param_3 != 0);
  }
  return;
}



// ===== FUN_1801add30 @ 1801add30 (size 96)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

LPCRITICAL_SECTION FUN_1801add30(void)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_180196100(0x28,"crypto\\threads_win.c",0x16);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    BVar1 = InitializeCriticalSectionAndSpinCount(lpCriticalSection,0x400);
    if (BVar1 != 0) {
      return lpCriticalSection;
    }
    FUN_180195e10(lpCriticalSection,"crypto\\threads_win.c",0x1e);
  }
  return (LPCRITICAL_SECTION)0x0;
}



// ===== FUN_1801addb0 @ 1801addb0 (size 104)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801addb0(int *param_1,code *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 2) {
    return true;
  }
  while( true ) {
    iVar2 = 0;
    LOCK();
    iVar1 = *param_1;
    if (iVar1 == 0) {
      *param_1 = 1;
    }
    else {
      iVar2 = iVar1;
    }
    UNLOCK();
    if (iVar1 == 0) break;
    if (iVar2 != 1) {
      return *param_1 == 2;
    }
  }
  (*param_2)();
  *param_1 = 2;
  return true;
}



// ===== FUN_1801ade90 @ 1801ade90 (size 527)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801ade90(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801adeaa;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_d8;
  uVar9 = 0;
  puVar5 = (undefined1 *)0x0;
  if (*param_3 == 0) {
LAB_1801ae06f:
    uVar9 = 1;
  }
  else {
    local_a0 = param_2;
    puVar4 = (undefined8 *)FUN_1801ae7e0();
    if (puVar4 != (undefined8 *)0x0) {
      iVar2 = FUN_1801958b0(*puVar4);
      iVar3 = FUN_1801958b0(*param_3);
      if (iVar3 < iVar2) {
        iVar2 = iVar3;
      }
      lVar10 = (longlong)iVar2;
      if (0 < iVar2) {
        if (iVar2 < 10) {
          puVar5 = local_98;
        }
        else {
          puVar5 = (undefined1 *)FUN_180195dc0(lVar10 * 8,"crypto\\ex_data.c",0x115);
          if (puVar5 == (undefined1 *)0x0) goto LAB_1801adf58;
        }
        iVar3 = 0;
        if (0 < iVar2) {
          lVar8 = 0;
          do {
            uVar6 = FUN_180195ae0(*puVar4,iVar3);
            *(undefined8 *)(puVar5 + lVar8 * 8) = uVar6;
            iVar3 = iVar3 + 1;
            lVar8 = lVar8 + 1;
          } while (lVar8 < lVar10);
        }
      }
LAB_1801adf58:
      FUN_1801ade50(DAT_1803c90d0);
      uVar6 = local_a0;
      if (iVar2 == 0) goto LAB_1801ae06f;
      if (puVar5 != (undefined1 *)0x0) {
        uVar7 = FUN_1801ae280(local_a0,iVar2 + -1);
        iVar3 = FUN_1801ae610(uVar6,iVar2 + -1,uVar7);
        if (iVar3 != 0) {
          iVar3 = 0;
          if (0 < iVar2) {
            lVar8 = 0;
            do {
              if ((*param_3 == 0) || (iVar2 = FUN_1801958b0(), iVar2 <= iVar3)) {
                local_a8 = 0;
              }
              else {
                local_a8 = FUN_180195ae0(*param_3,iVar3);
              }
              puVar1 = *(undefined4 **)(puVar5 + lVar8 * 8);
              if ((puVar1 != (undefined4 *)0x0) && (*(code **)(puVar1 + 8) != (code *)0x0)) {
                local_b0 = *(undefined8 *)(puVar1 + 2);
                local_b8 = *puVar1;
                iVar2 = (**(code **)(puVar1 + 8))(uVar6,param_3,&local_a8,iVar3);
                if (iVar2 == 0) goto LAB_1801ae04c;
              }
              FUN_1801ae610(uVar6,iVar3,local_a8);
              iVar3 = iVar3 + 1;
              lVar8 = lVar8 + 1;
            } while (lVar8 < lVar10);
          }
          uVar9 = 1;
        }
LAB_1801ae04c:
        if (puVar5 != local_98) {
          FUN_180195e10(puVar5,"crypto\\ex_data.c",0x137);
        }
        return uVar9;
      }
      local_b8 = 0x11f;
      FUN_1801a70c0(0xf,0x6e,0x41,"crypto\\ex_data.c");
    }
    uVar9 = 0;
  }
  return uVar9;
}



// ===== FUN_1801ae0a0 @ 1801ae0a0 (size 470)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ae0a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_c8;
  puVar4 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_1801ae7e0();
  if (puVar3 == (undefined8 *)0x0) goto LAB_1801ae247;
  iVar1 = FUN_1801958b0(*puVar3);
  lVar8 = (longlong)iVar1;
  if (0 < iVar1) {
    if (iVar1 < 10) {
      puVar4 = local_98;
    }
    else {
      puVar4 = (undefined1 *)FUN_180195dc0(lVar8 * 8,"crypto\\ex_data.c",0x151);
      if (puVar4 == (undefined1 *)0x0) goto LAB_1801ae159;
    }
    iVar1 = 0;
    if (0 < lVar8) {
      lVar7 = 0;
      do {
        uVar5 = FUN_180195ae0(*puVar3,iVar1);
        *(undefined8 *)(puVar4 + lVar7 * 8) = uVar5;
        iVar1 = iVar1 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar8);
    }
  }
LAB_1801ae159:
  FUN_1801ade50(DAT_1803c90d0);
  iVar1 = 0;
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      if (puVar4 == (undefined1 *)0x0) {
        FUN_1801add90(DAT_1803c90d0);
        puVar6 = (undefined4 *)FUN_180195ae0(*puVar3,iVar1);
        FUN_1801ade50(DAT_1803c90d0);
      }
      else {
        puVar6 = *(undefined4 **)(puVar4 + lVar7 * 8);
      }
      if ((puVar6 != (undefined4 *)0x0) && (*(longlong *)(puVar6 + 6) != 0)) {
        if ((*param_3 == 0) || (iVar2 = FUN_1801958b0(), iVar2 <= iVar1)) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_180195ae0(*param_3,iVar1);
        }
        local_a0 = *(undefined8 *)(puVar6 + 2);
        local_a8 = *puVar6;
        (**(code **)(puVar6 + 6))(param_2,uVar5,param_3,iVar1);
      }
      iVar1 = iVar1 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  if (puVar4 != local_98) {
    FUN_180195e10(puVar4,"crypto\\ex_data.c",0x167);
  }
LAB_1801ae247:
  FUN_180195650(*param_3);
  *param_3 = 0;
  return;
}



// ===== FUN_1801ae280 @ 1801ae280 (size 74)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ae280(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = FUN_1801958b0();
    if (param_2 < iVar1) {
      uVar2 = FUN_180195ae0(*param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// ===== FUN_1801ae2d0 @ 1801ae2d0 (size 354)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801ae2d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801ae2e9;
  iVar2 = -1;
  plVar3 = (longlong *)FUN_1801ae7e0();
  if (plVar3 == (longlong *)0x0) {
    return -1;
  }
  if (*plVar3 == 0) {
    lVar4 = FUN_1801957e0();
    *plVar3 = lVar4;
    if ((lVar4 == 0) || (iVar1 = FUN_180195990(lVar4,0), iVar1 == 0)) {
      FUN_1801a70c0(0xf,100,0x41,"crypto\\ex_data.c",0xac,uVar6);
      goto LAB_1801ae410;
    }
  }
  puVar5 = (undefined4 *)FUN_180195dc0(0x28,"crypto\\ex_data.c",0xb1);
  if (puVar5 == (undefined4 *)0x0) {
    FUN_1801a70c0(0xf,100,0x41,"crypto\\ex_data.c",0xb3,uVar6);
  }
  else {
    *puVar5 = param_2;
    *(undefined8 *)(puVar5 + 2) = param_3;
    *(undefined8 *)(puVar5 + 4) = param_4;
    *(undefined8 *)(puVar5 + 8) = param_5;
    *(undefined8 *)(puVar5 + 6) = param_6;
    iVar1 = FUN_180195990(*plVar3,0);
    if (iVar1 == 0) {
      FUN_1801a70c0(0xf,100,0x41,"crypto\\ex_data.c",0xbd,uVar6);
      FUN_180195e10(puVar5,"crypto\\ex_data.c",0xbe);
    }
    else {
      iVar2 = FUN_1801958b0(*plVar3);
      iVar2 = iVar2 + -1;
      FUN_180195a00(*plVar3,iVar2,puVar5);
    }
  }
LAB_1801ae410:
  FUN_1801ade50(DAT_1803c90d0);
  return iVar2;
}



// ===== FUN_1801ae440 @ 1801ae440 (size 461)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801ae440(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_c8;
  puVar4 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_1801ae7e0();
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  iVar2 = FUN_1801958b0(*puVar3);
  lVar8 = (longlong)iVar2;
  if (0 < iVar2) {
    if (iVar2 < 10) {
      puVar4 = local_98;
    }
    else {
      puVar4 = (undefined1 *)FUN_180195dc0(lVar8 * 8,"crypto\\ex_data.c",0xe2);
      if (puVar4 == (undefined1 *)0x0) goto LAB_1801ae509;
    }
    iVar7 = 0;
    if (0 < iVar2) {
      lVar6 = 0;
      do {
        uVar5 = FUN_180195ae0(*puVar3,iVar7);
        *(undefined8 *)(puVar4 + lVar6 * 8) = uVar5;
        iVar7 = iVar7 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar8);
    }
  }
LAB_1801ae509:
  FUN_1801ade50(DAT_1803c90d0);
  if ((iVar2 < 1) || (puVar4 != (undefined1 *)0x0)) {
    iVar2 = 0;
    if (0 < lVar8) {
      lVar6 = 0;
      do {
        if ((*(longlong *)(puVar4 + lVar6 * 8) != 0) &&
           (*(longlong *)(*(longlong *)(puVar4 + lVar6 * 8) + 0x10) != 0)) {
          if ((*param_3 == 0) || (iVar7 = FUN_1801958b0(), iVar7 <= iVar2)) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_180195ae0(*param_3,iVar2);
          }
          puVar1 = *(undefined4 **)(puVar4 + lVar6 * 8);
          local_a0 = *(undefined8 *)(puVar1 + 2);
          local_a8 = *puVar1;
          (**(code **)(puVar1 + 4))(param_2,uVar5,param_3,iVar2);
        }
        iVar2 = iVar2 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar8);
    }
    if (puVar4 != local_98) {
      FUN_180195e10(puVar4,"crypto\\ex_data.c",0xf5);
    }
    uVar5 = 1;
  }
  else {
    local_a8 = 0xea;
    FUN_1801a70c0(0xf,0x70,0x41,"crypto\\ex_data.c");
    uVar5 = 0;
  }
  return uVar5;
}



// ===== FUN_1801ae610 @ 1801ae610 (size 223)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ae610(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801ae625;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lVar3 = FUN_1801957e0();
    *param_1 = lVar3;
    if (lVar3 == 0) {
      FUN_1801a70c0(0xf,0x66,0x41,"crypto\\ex_data.c",0x177,uVar4);
      return 0;
    }
  }
  iVar1 = FUN_1801958b0(lVar3);
  while( true ) {
    if (param_2 < iVar1) {
      FUN_180195a00(*param_1,param_2,param_3);
      return 1;
    }
    iVar2 = FUN_180195990(*param_1,0);
    if (iVar2 == 0) break;
    iVar1 = iVar1 + 1;
  }
  FUN_1801a70c0(0xf,0x66,0x41,"crypto\\ex_data.c",0x17e,uVar4);
  return 0;
}



// ===== FUN_1801ae720 @ 1801ae720 (size 110)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ae720(void)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1803c9050;
  do {
    FUN_1801958f0(*puVar1,FUN_1801ae6f0);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while ((longlong)puVar1 < 0x1803c90d0);
  FUN_1801adcf0(DAT_1803c90d0);
  DAT_1803c90d0 = 0;
  return;
}



// ===== FUN_1801ae790 @ 1801ae790 (size 70)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ae790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1801e4120(0,0,param_3,param_4,0x1801ae79a);
  if (iVar1 == 0) {
    DAT_1803c90dc = 0;
    return;
  }
  DAT_1803c90d0 = FUN_1801add30();
  DAT_1803c90dc = (uint)(DAT_1803c90d0 != 0);
  return;
}



// ===== FUN_1801ae7e0 @ 1801ae7e0 (size 147)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1801ae7e0(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801ae7ec;
  if (param_1 < 0x10) {
    iVar1 = FUN_1801addb0(&DAT_1803c90d8);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = DAT_1803c90dc;
    }
    if (iVar2 != 0) {
      if (DAT_1803c90d0 == 0) {
        return (undefined8 *)0x0;
      }
      FUN_1801add90();
      return &DAT_1803c9050 + (int)param_1;
    }
    uVar4 = 0x3c;
    uVar3 = 0x41;
  }
  else {
    uVar4 = 0x37;
    uVar3 = 7;
  }
  FUN_1801a70c0(0xf,0x71,uVar3,"crypto\\ex_data.c",uVar4,uVar5);
  return (undefined8 *)0x0;
}



// ===== FUN_1801ae8b0 @ 1801ae8b0 (size 97)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ae8b0(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        FUN_180195f20(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                      "crypto\\buffer\\buffer.c",0x33);
      }
      else {
        FUN_1801b7560();
      }
    }
    FUN_180195e10(param_1,"crypto\\buffer\\buffer.c",0x35);
  }
  return;
}



// ===== FUN_1801ae920 @ 1801ae920 (size 312)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801ae920(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801ae930;
  uVar2 = *param_1;
  if (uVar2 < param_2) {
    if (param_1[2] < param_2) {
      if (0x5ffffffc < param_2) {
        FUN_1801a70c0(7,100,0x41,"crypto\\buffer\\buffer.c",0x5a,0x1801ae930);
        return 0;
      }
      uVar2 = (param_2 + 3) / 3 << 2;
      if ((param_1[3] & 1) == 0) {
        uVar1 = FUN_180195e50(param_1[1],uVar2,"crypto\\buffer\\buffer.c",0x61);
      }
      else {
        uVar1 = FUN_1801aece0(param_1);
      }
      if (uVar1 == 0) {
        FUN_1801a70c0(7,100,0x41,"crypto\\buffer\\buffer.c",99,uVar3);
        return 0;
      }
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      memset((void *)(uVar1 + *param_1),0,param_2 - *param_1);
      *param_1 = param_2;
      return param_2;
    }
    if (param_1[1] != 0) {
      memset((void *)(param_1[1] + uVar2),0,param_2 - uVar2);
    }
  }
  *param_1 = param_2;
  return param_2;
}



// ===== FUN_1801aea60 @ 1801aea60 (size 361)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801aea60(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *param_1;
  if (param_2 <= uVar2) {
    if (param_1[1] != 0) {
      memset((void *)(param_1[1] + param_2),0,uVar2 - param_2);
    }
    *param_1 = param_2;
    return param_2;
  }
  if (param_2 <= param_1[2]) {
    memset((void *)(param_1[1] + uVar2),0,param_2 - uVar2);
    *param_1 = param_2;
    return param_2;
  }
  if (0x5ffffffc < param_2) {
    FUN_1801a70c0(7,0x69,0x41,"crypto\\buffer\\buffer.c",0x80);
    return 0;
  }
  uVar2 = (param_2 + 3) / 3 << 2;
  if ((param_1[3] & 1) == 0) {
    uVar1 = FUN_180195fa0(param_1[1],param_1[2],uVar2,"crypto\\buffer\\buffer.c",0x87,0x1801aea70);
  }
  else {
    uVar1 = FUN_1801aece0(param_1);
  }
  if (uVar1 == 0) {
    FUN_1801a70c0(7,0x69,0x41,"crypto\\buffer\\buffer.c",0x89);
    return 0;
  }
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  memset((void *)(uVar1 + *param_1),0,param_2 - *param_1);
  *param_1 = param_2;
  return param_2;
}



// ===== FUN_1801aebd0 @ 1801aebd0 (size 74)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801aebd0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180196100(0x20,"crypto\\buffer\\buffer.c",0x23);
  if (lVar1 == 0) {
    FUN_1801a70c0(7,0x65,0x41,"crypto\\buffer\\buffer.c",0x25);
    lVar1 = 0;
  }
  return lVar1;
}



// ===== FUN_1801aec20 @ 1801aec20 (size 88)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801aec20(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801aec2c;
  lVar1 = FUN_180196100(0x20,"crypto\\buffer\\buffer.c",0x23);
  if (lVar1 == 0) {
    FUN_1801a70c0(7,0x65,0x41,"crypto\\buffer\\buffer.c",0x25,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x18) = param_1;
  return lVar1;
}



// ===== FUN_1801aec80 @ 1801aec80 (size 92)

void FUN_1801aec80(undefined1 *param_1,undefined1 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1 + (param_3 - 1);
  if (param_2 == (undefined1 *)0x0) {
    for (param_3 = param_3 >> 1; param_3 != 0; param_3 = param_3 - 1) {
      uVar1 = *puVar2;
      *puVar2 = *param_1;
      puVar2 = puVar2 + -1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  else if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + -1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return;
  }
  return;
}



// ===== FUN_1801aece0 @ 1801aece0 (size 121)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_1801aece0(size_t *param_1,undefined8 param_2)

{
  void *_Dst;
  
  _Dst = (void *)FUN_1801b75d0(param_2,"crypto\\buffer\\buffer.c",0x3e);
  if (((void *)param_1[1] != (void *)0x0) && (_Dst != (void *)0x0)) {
    memcpy(_Dst,(void *)param_1[1],*param_1);
    FUN_1801b7560(param_1[1],*param_1,"crypto\\buffer\\buffer.c",0x42);
    param_1[1] = 0;
  }
  return _Dst;
}



// ===== FUN_1801aed60 @ 1801aed60 (size 399)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801aed60(void)

{
  short sVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  short *psVar9;
  
  if (DAT_1803c92f0 == 0) {
    psVar9 = &DAT_1803c9290;
    DAT_1803c92f0 = 1;
    DVar2 = GetEnvironmentVariableW(L"OPENSSL_ia32cap",&DAT_1803c9290,0x30);
    sVar1 = DAT_1803c9290;
    if (DVar2 - 1 < 0x2f) {
      lVar8 = 0;
      lVar7 = 0;
      if (DAT_1803c9290 == 0x7e) {
        lVar7 = 2;
      }
      uVar3 = FUN_1801af480((longlong)&DAT_1803c9290 + lVar7);
      if (sVar1 == 0x7e) {
        uVar4 = FUN_180001030(&DAT_180447950);
        sVar1 = DAT_1803c9290;
        uVar5 = uVar4 & ~uVar3 & 0xedfff7fdffffffff;
        if ((uVar3 & 0x1000000) == 0) {
          uVar5 = uVar4 & ~uVar3;
        }
      }
      else {
        sVar1 = DAT_1803c9290;
        uVar5 = uVar3;
        if (DAT_1803c9290 == 0x3a) {
          uVar5 = FUN_180001030(&DAT_180447950);
          sVar1 = DAT_1803c9290;
        }
      }
      while (sVar1 != 0) {
        psVar9 = psVar9 + 1;
        if (sVar1 == 0x3a) {
          sVar1 = *psVar9;
          if (sVar1 == 0x7e) {
            lVar8 = 2;
          }
          uVar6 = FUN_1801af480((longlong)psVar9 + lVar8);
          if (sVar1 == 0x7e) {
            _DAT_180447958 = _DAT_180447958 & ~(uint)uVar6;
            _DAT_18044795c = _DAT_18044795c & ~(uint)((ulonglong)uVar6 >> 0x20);
          }
          else {
            _DAT_180447958 = uVar6;
          }
          goto LAB_1801aeebb;
        }
        sVar1 = *psVar9;
      }
      _DAT_180447958 = 0;
    }
    else {
      uVar5 = FUN_180001030(&DAT_180447950);
    }
LAB_1801aeebb:
    DAT_180447950 = (uint)uVar5 | 0x400;
    DAT_180447954 = (undefined4)(uVar5 >> 0x20);
  }
  return;
}



// ===== FUN_1801aef30 @ 1801aef30 (size 366)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801aef30(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  HMODULE hModule;
  ulonglong uVar6;
  HWINSTA hObj;
  wchar_t *pwVar7;
  undefined1 *puVar8;
  undefined8 uStackY_50;
  undefined1 auStackY_48 [32];
  uint local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803c3d80 ^ (ulonglong)local_18;
  if (DAT_1803c92f8 == (FARPROC)0x0) {
    uStackY_50 = 0x1801aef6e;
    hModule = GetModuleHandleW((LPCWSTR)0x0);
    if (hModule != (HMODULE)0x0) {
      uStackY_50 = 0x1801aef83;
      DAT_1803c92f8 = GetProcAddress(hModule,"_OPENSSL_isservice");
      if (DAT_1803c92f8 != (FARPROC)0x0) goto LAB_1801aef8f;
    }
    DAT_1803c92f8 = (FARPROC)0xffffffffffffffff;
  }
  else {
LAB_1801aef8f:
    if (DAT_1803c92f8 != (FARPROC)0xffffffffffffffff) {
      uStackY_50 = 0x1801aef97;
      uVar6 = (*DAT_1803c92f8)();
      puVar8 = auStackY_48;
      goto LAB_1801af084;
    }
  }
  uStackY_50 = 0x1801aefad;
  hObj = GetProcessWindowStation();
  puVar2 = auStackY_48;
  if (hObj != (HWINSTA)0x0) {
    uStackY_50 = 0x1801aefd5;
    BVar3 = GetUserObjectInformationW(hObj,2,(PVOID)0x0,0,local_18);
    puVar2 = auStackY_48;
    if (BVar3 == 0) {
      uStackY_50 = 0x1801aefe3;
      DVar4 = GetLastError();
      puVar2 = auStackY_48;
      if ((DVar4 == 0x7a) && (puVar2 = auStackY_48, local_18[0] < 0x201)) {
        uVar5 = local_18[0] + 1 & 0xfffffffe;
        local_18[0] = uVar5;
        uVar6 = (ulonglong)uVar5 + 0x11;
        if (uVar6 <= (ulonglong)uVar5 + 2) {
          uVar6 = 0xffffffffffffff0;
        }
        uStackY_50 = 0x1801af029;
        lVar1 = -(uVar6 & 0xfffffffffffffff0);
        puVar8 = auStackY_48 + lVar1;
        pwVar7 = (wchar_t *)((longlong)local_18 + lVar1);
        *(uint **)(auStackY_48 + lVar1 + 0x20) = local_18;
        *(undefined8 *)(auStackY_48 + lVar1 + -8) = 0x1801af04e;
        BVar3 = GetUserObjectInformationW
                          (hObj,2,pwVar7,uVar5,*(LPDWORD *)(auStackY_48 + lVar1 + 0x20));
        puVar2 = auStackY_48 + lVar1;
        if (BVar3 != 0) {
          uVar5 = local_18[0] + 1;
          local_18[0] = uVar5 & 0xfffffffe;
          pwVar7[uVar5 >> 1] = L'\0';
          *(undefined8 *)(auStackY_48 + lVar1 + -8) = 0x1801af075;
          pwVar7 = wcsstr(pwVar7,L"Service-0x");
          uVar6 = (ulonglong)(pwVar7 != (wchar_t *)0x0);
          goto LAB_1801af084;
        }
      }
    }
  }
  puVar8 = puVar2;
  uVar6 = 0xffffffff;
LAB_1801af084:
  *(undefined8 *)(puVar8 + -8) = 0x1801af090;
  return uVar6;
}



// ===== FUN_1801af0a0 @ 1801af0a0 (size 845)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801af0a0(LPCSTR param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  LPCSTR pCVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  DWORD DVar5;
  int iVar6;
  HANDLE pvVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  undefined2 *puVar11;
  undefined1 *puVar12;
  LPCSTR lpMultiByteStr;
  uint cbMultiByte;
  ulonglong uVar13;
  undefined1 uVar29;
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar20 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar46 [16];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 uStackY_2b0;
  undefined1 auStackY_2a8 [32];
  undefined8 *local_280 [5];
  undefined8 local_258;
  WCHAR local_248 [8];
  undefined1 local_238 [494];
  undefined2 local_4a;
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x1801af0c6;
  local_48 = DAT_1803c3d80 ^ (ulonglong)&local_258;
  uStackY_2b0 = 0x1801af0ea;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pvVar7 = GetStdHandle(0xfffffff4);
  if (pvVar7 != (HANDLE)0x0) {
    uStackY_2b0 = 0x1801af0fb;
    DVar5 = GetFileType(pvVar7);
    if (DVar5 != 0) {
      uStackY_2b0 = 0x1801af10b;
      puVar8 = (ulonglong *)FUN_1800e0ca0();
      uStackY_2b0 = 0x1801af137;
      local_280[0] = &local_res10;
      DVar5 = __stdio_common_vsprintf(*puVar8 | 1,local_248,0x200,param_1);
      if ((int)DVar5 < 0) {
        DVar5 = 0xffffffff;
      }
      if ((int)DVar5 < 0) {
        DVar5 = 0x200;
      }
      uStackY_2b0 = 0x1801af15f;
      WriteFile(pvVar7,local_248,DVar5,(LPDWORD)&local_258,(LPOVERLAPPED)0x0);
      puVar12 = auStackY_2a8;
      goto LAB_1801af3ce;
    }
  }
  uStackY_2b0 = 0x1801af173;
  lpMultiByteStr = param_1;
  iVar6 = FUN_1801af460(param_1);
  cbMultiByte = iVar6 + 1;
  uVar13 = (ulonglong)cbMultiByte;
  uVar9 = uVar13 * 2 + 0xf;
  if (uVar9 <= uVar13 * 2) {
    uVar9 = 0xffffffffffffff0;
  }
  uStackY_2b0 = 0x1801af19d;
  lVar4 = -(uVar9 & 0xfffffffffffffff0);
  puVar12 = auStackY_2a8 + lVar4;
  pCVar1 = (LPCSTR)((longlong)local_280 + lVar4 + 0x28);
  if (pCVar1 != (LPCSTR)0x0) {
    *(uint *)((longlong)local_280 + lVar4) = cbMultiByte;
    *(LPCSTR *)(auStackY_2a8 + lVar4 + 0x20) = pCVar1;
    *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x1801af1cc;
    iVar6 = MultiByteToWideChar(0,0,lpMultiByteStr,cbMultiByte,
                                *(LPWSTR *)(auStackY_2a8 + lVar4 + 0x20),
                                *(int *)((longlong)local_280 + lVar4));
    if ((iVar6 == 0) && (uVar9 = 0, uVar13 != 0)) {
      if ((0x1f < uVar13) &&
         ((param_1 + (uVar13 - 1) < pCVar1 || (pCVar1 + (uVar13 - 1) * 2 < param_1)))) {
        pauVar10 = (undefined1 (*) [16])(local_238 + lVar4);
        do {
          uVar2 = *(ulonglong *)(param_1 + uVar9);
          uVar3 = *(ulonglong *)(param_1 + uVar9 + 8);
          uVar29 = (undefined1)(uVar2 >> 0x38);
          auVar19._8_6_ = 0;
          auVar19._0_8_ = uVar2;
          auVar19[0xe] = uVar29;
          auVar19[0xf] = uVar29;
          uVar29 = (undefined1)(uVar2 >> 0x30);
          auVar18._14_2_ = auVar19._14_2_;
          auVar18._8_5_ = 0;
          auVar18._0_8_ = uVar2;
          auVar18[0xd] = uVar29;
          auVar17._13_3_ = auVar18._13_3_;
          auVar17._8_4_ = 0;
          auVar17._0_8_ = uVar2;
          auVar17[0xc] = uVar29;
          uVar29 = (undefined1)(uVar2 >> 0x28);
          auVar16._12_4_ = auVar17._12_4_;
          auVar16._8_3_ = 0;
          auVar16._0_8_ = uVar2;
          auVar16[0xb] = uVar29;
          auVar15._11_5_ = auVar16._11_5_;
          auVar15._8_2_ = 0;
          auVar15._0_8_ = uVar2;
          auVar15[10] = uVar29;
          uVar29 = (undefined1)(uVar2 >> 0x20);
          auVar46._10_6_ = auVar15._10_6_;
          auVar46[8] = 0;
          auVar46._0_8_ = uVar2;
          auVar46[9] = uVar29;
          auVar20._9_7_ = auVar46._9_7_;
          auVar20[8] = uVar29;
          auVar20._0_8_ = uVar2;
          uVar29 = (undefined1)(uVar2 >> 0x18);
          auVar14._8_8_ = auVar20._8_8_;
          auVar14[7] = uVar29;
          auVar14[6] = uVar29;
          uVar29 = (undefined1)(uVar2 >> 0x10);
          auVar14[5] = uVar29;
          auVar14[4] = uVar29;
          uVar29 = (undefined1)(uVar2 >> 8);
          auVar14[3] = uVar29;
          auVar14[2] = uVar29;
          auVar14[0] = (undefined1)uVar2;
          auVar14[1] = auVar14[0];
          uVar29 = (undefined1)(uVar3 >> 0x38);
          auVar37._8_6_ = 0;
          auVar37._0_8_ = uVar3;
          auVar37[0xe] = uVar29;
          auVar37[0xf] = uVar29;
          uVar29 = (undefined1)(uVar3 >> 0x30);
          auVar36._14_2_ = auVar37._14_2_;
          auVar36._8_5_ = 0;
          auVar36._0_8_ = uVar3;
          auVar36[0xd] = uVar29;
          auVar35._13_3_ = auVar36._13_3_;
          auVar35._8_4_ = 0;
          auVar35._0_8_ = uVar3;
          auVar35[0xc] = uVar29;
          uVar29 = (undefined1)(uVar3 >> 0x28);
          auVar34._12_4_ = auVar35._12_4_;
          auVar34._8_3_ = 0;
          auVar34._0_8_ = uVar3;
          auVar34[0xb] = uVar29;
          auVar33._11_5_ = auVar34._11_5_;
          auVar33._8_2_ = 0;
          auVar33._0_8_ = uVar3;
          auVar33[10] = uVar29;
          uVar29 = (undefined1)(uVar3 >> 0x20);
          auVar32._10_6_ = auVar33._10_6_;
          auVar32[8] = 0;
          auVar32._0_8_ = uVar3;
          auVar32[9] = uVar29;
          auVar31._9_7_ = auVar32._9_7_;
          auVar31[8] = uVar29;
          auVar31._0_8_ = uVar3;
          uVar29 = (undefined1)(uVar3 >> 0x18);
          auVar30._8_8_ = auVar31._8_8_;
          auVar30[7] = uVar29;
          auVar30[6] = uVar29;
          uVar29 = (undefined1)(uVar3 >> 0x10);
          auVar30[5] = uVar29;
          auVar30[4] = uVar29;
          uVar29 = (undefined1)(uVar3 >> 8);
          auVar30[3] = uVar29;
          auVar30[2] = uVar29;
          auVar30[0] = (undefined1)uVar3;
          auVar30[1] = auVar30[0];
          auVar20 = psraw(auVar14,8);
          pauVar10[-2] = auVar20;
          uVar2 = *(ulonglong *)(param_1 + uVar9 + 0x10);
          auVar20 = psraw(auVar30,8);
          pauVar10[-1] = auVar20;
          uVar3 = *(ulonglong *)(param_1 + uVar9 + 0x18);
          uVar9 = uVar9 + 0x20;
          uVar29 = (undefined1)(uVar2 >> 0x38);
          auVar28._8_6_ = 0;
          auVar28._0_8_ = uVar2;
          auVar28[0xe] = uVar29;
          auVar28[0xf] = uVar29;
          uVar29 = (undefined1)(uVar2 >> 0x30);
          auVar27._14_2_ = auVar28._14_2_;
          auVar27._8_5_ = 0;
          auVar27._0_8_ = uVar2;
          auVar27[0xd] = uVar29;
          auVar26._13_3_ = auVar27._13_3_;
          auVar26._8_4_ = 0;
          auVar26._0_8_ = uVar2;
          auVar26[0xc] = uVar29;
          uVar29 = (undefined1)(uVar2 >> 0x28);
          auVar25._12_4_ = auVar26._12_4_;
          auVar25._8_3_ = 0;
          auVar25._0_8_ = uVar2;
          auVar25[0xb] = uVar29;
          auVar24._11_5_ = auVar25._11_5_;
          auVar24._8_2_ = 0;
          auVar24._0_8_ = uVar2;
          auVar24[10] = uVar29;
          uVar29 = (undefined1)(uVar2 >> 0x20);
          auVar23._10_6_ = auVar24._10_6_;
          auVar23[8] = 0;
          auVar23._0_8_ = uVar2;
          auVar23[9] = uVar29;
          auVar22._9_7_ = auVar23._9_7_;
          auVar22[8] = uVar29;
          auVar22._0_8_ = uVar2;
          uVar29 = (undefined1)(uVar2 >> 0x18);
          auVar21._8_8_ = auVar22._8_8_;
          auVar21[7] = uVar29;
          auVar21[6] = uVar29;
          uVar29 = (undefined1)(uVar2 >> 0x10);
          auVar21[5] = uVar29;
          auVar21[4] = uVar29;
          uVar29 = (undefined1)(uVar2 >> 8);
          auVar21[3] = uVar29;
          auVar21[2] = uVar29;
          auVar21[0] = (undefined1)uVar2;
          auVar21[1] = auVar21[0];
          uVar29 = (undefined1)(uVar3 >> 0x38);
          auVar45._8_6_ = 0;
          auVar45._0_8_ = uVar3;
          auVar45[0xe] = uVar29;
          auVar45[0xf] = uVar29;
          uVar29 = (undefined1)(uVar3 >> 0x30);
          auVar44._14_2_ = auVar45._14_2_;
          auVar44._8_5_ = 0;
          auVar44._0_8_ = uVar3;
          auVar44[0xd] = uVar29;
          auVar43._13_3_ = auVar44._13_3_;
          auVar43._8_4_ = 0;
          auVar43._0_8_ = uVar3;
          auVar43[0xc] = uVar29;
          uVar29 = (undefined1)(uVar3 >> 0x28);
          auVar42._12_4_ = auVar43._12_4_;
          auVar42._8_3_ = 0;
          auVar42._0_8_ = uVar3;
          auVar42[0xb] = uVar29;
          auVar41._11_5_ = auVar42._11_5_;
          auVar41._8_2_ = 0;
          auVar41._0_8_ = uVar3;
          auVar41[10] = uVar29;
          uVar29 = (undefined1)(uVar3 >> 0x20);
          auVar40._10_6_ = auVar41._10_6_;
          auVar40[8] = 0;
          auVar40._0_8_ = uVar3;
          auVar40[9] = uVar29;
          auVar39._9_7_ = auVar40._9_7_;
          auVar39[8] = uVar29;
          auVar39._0_8_ = uVar3;
          uVar29 = (undefined1)(uVar3 >> 0x18);
          auVar38._8_8_ = auVar39._8_8_;
          auVar38[7] = uVar29;
          auVar38[6] = uVar29;
          uVar29 = (undefined1)(uVar3 >> 0x10);
          auVar38[5] = uVar29;
          auVar38[4] = uVar29;
          uVar29 = (undefined1)(uVar3 >> 8);
          auVar38[3] = uVar29;
          auVar38[2] = uVar29;
          auVar38[0] = (undefined1)uVar3;
          auVar38[1] = auVar38[0];
          auVar20 = psraw(auVar21,8);
          auVar46 = psraw(auVar38,8);
          *pauVar10 = auVar20;
          pauVar10[1] = auVar46;
          pauVar10 = pauVar10 + 4;
        } while (uVar9 < (uVar13 & 0xffffffffffffffe0));
      }
      for (; uVar9 < uVar13; uVar9 = uVar9 + 1) {
        *(short *)(pCVar1 + uVar9 * 2) = (short)param_1[uVar9];
      }
    }
    uVar9 = 0;
    puVar12 = auStackY_2a8 + lVar4;
    if (uVar13 != 0) {
      do {
        if (*(short *)(pCVar1 + uVar9 * 2) == 0x25) {
          puVar11 = (undefined2 *)((longlong)local_248 + uVar9 * 2 + lVar4 + -0xe);
          do {
            switch(*puVar11) {
            case 0x2a:
            case 0x2d:
            case 0x2e:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
              uVar9 = uVar9 + 1;
              puVar11 = puVar11 + 1;
              break;
            default:
              goto switchD_1801af2f2_caseD_2b;
            case 0x43:
              *puVar11 = 99;
              goto switchD_1801af2f2_caseD_2b;
            case 0x53:
              *puVar11 = 0x73;
              goto switchD_1801af2f2_caseD_2b;
            case 99:
              *puVar11 = 0x43;
              goto switchD_1801af2f2_caseD_2b;
            case 0x73:
              *puVar11 = 0x53;
              goto switchD_1801af2f2_caseD_2b;
            }
          } while( true );
        }
switchD_1801af2f2_caseD_2b:
        uVar9 = uVar9 + 1;
        puVar12 = auStackY_2a8 + lVar4;
      } while (uVar9 < uVar13);
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1801af327;
  puVar8 = (ulonglong *)FUN_1800e0ca0();
  *(undefined8 **)(puVar12 + 0x28) = &local_res10;
  *(undefined8 *)(puVar12 + 0x20) = 0;
  uVar9 = *puVar8;
  *(undefined8 *)(puVar12 + -8) = 0x1801af34b;
  __stdio_common_vswprintf(uVar9 | 1,local_248);
  local_4a = 0;
  *(undefined8 *)(puVar12 + -8) = 0x1801af357;
  iVar6 = FUN_1801aef30();
  if (iVar6 < 1) {
    *(undefined8 *)(puVar12 + -8) = 0x1801af3ce;
    MessageBoxW((HWND)0x0,local_248,L"OpenSSL: FATAL",0x10);
  }
  else {
    *(undefined8 *)(puVar12 + -8) = 0x1801af36a;
    pvVar7 = RegisterEventSourceW((LPCWSTR)0x0,L"OpenSSL");
    if (pvVar7 != (HANDLE)0x0) {
      *(undefined8 *)(puVar12 + 0x40) = 0;
      local_258 = local_248;
      *(undefined8 **)(puVar12 + 0x38) = &local_258;
      *(undefined4 *)(puVar12 + 0x30) = 0;
      *(undefined2 *)(puVar12 + 0x28) = 1;
      *(undefined8 *)(puVar12 + 0x20) = 0;
      *(undefined8 *)(puVar12 + -8) = 0x1801af3ac;
      ReportEventW(pvVar7,1,0,0,*(PSID *)(puVar12 + 0x20),*(WORD *)(puVar12 + 0x28),
                   *(DWORD *)(puVar12 + 0x30),*(LPCWSTR **)(puVar12 + 0x38),
                   *(LPVOID *)(puVar12 + 0x40));
      *(undefined8 *)(puVar12 + -8) = 0x1801af3b5;
      DeregisterEventSource(pvVar7);
    }
  }
LAB_1801af3ce:
  *(undefined8 *)(puVar12 + -8) = 0x1801af3dd;
  return;
}



// ===== FUN_1801af480 @ 1801af480 (size 182)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801af480(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = 0;
  uVar5 = 10;
  puVar4 = param_1;
  if (*param_1 == 0x30) {
    uVar5 = 8;
    puVar4 = param_1 + 1;
    iVar2 = FUN_1801baad0(param_1[1]);
    if (iVar2 == 0x78) {
      uVar5 = 0x10;
      puVar4 = param_1 + 2;
    }
  }
  while( true ) {
    uVar1 = *puVar4;
    iVar2 = FUN_1801baab0(uVar1,4);
    if (iVar2 == 0) {
      iVar2 = FUN_1801baab0(uVar1,0x10);
      if (iVar2 == 0) {
        uVar3 = 0x10;
      }
      else {
        iVar2 = FUN_1801baad0(uVar1);
        uVar3 = iVar2 - 0x57;
      }
    }
    else {
      uVar3 = uVar1 - 0x30;
    }
    puVar4 = puVar4 + 1;
    if (uVar5 <= uVar3) break;
    lVar6 = (ulonglong)uVar3 + (ulonglong)uVar5 * lVar6;
  }
  return lVar6;
}



// ===== FUN_1801af560 @ 1801af560 (size 70)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801af560(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_res8 [8];
  
  if ((*(uint *)(*param_1 + 0x10) & 0x800) == 0) {
    return *(undefined4 *)(*param_1 + 0xc);
  }
  iVar1 = FUN_18018eca0(param_1,0x25,0,local_res8,0x1801af56a);
  uVar2 = 0xffffffff;
  if (iVar1 == 1) {
    uVar2 = local_res8[0];
  }
  return uVar2;
}



// ===== FUN_1801af610 @ 1801af610 (size 346)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801af610(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_res8 [2];
  undefined8 uVar6;
  
  uVar6 = 0x1801af62e;
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0x40) == (code *)0x0) {
    uVar4 = *(uint *)(lVar1 + 0x10);
    if ((uVar4 >> 0xc & 1) == 0) {
LAB_1801af719:
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = uVar4 & 0xf0007;
      if (uVar2 < 6) {
LAB_1801af686:
        uVar2 = 0;
        if (param_2 != 0) {
          if ((uVar4 >> 0xb & 1) == 0) {
            uVar4 = *(uint *)(lVar1 + 0xc);
          }
          else {
            iVar3 = FUN_18018eca0(param_1,0x25,0,local_res8);
            uVar4 = 0xffffffff;
            if (iVar3 == 1) {
              uVar4 = local_res8[0];
            }
          }
          if (0x10 < uVar4) {
            FUN_1801aeef0("assertion failed: l <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x5e);
          }
          uVar2 = FUN_1801ed420(param_2,param_1 + 3,uVar4);
          if (uVar2 != uVar4) goto LAB_1801af719;
          if (0 < (int)uVar2) {
            memcpy(param_1 + 5,param_1 + 3,(ulonglong)uVar4);
          }
        }
        goto LAB_1801af713;
      }
      if ((7 < uVar2) && (uVar2 != 0x10001)) {
        if (uVar2 == 0x10002) {
          return 1;
        }
        if (uVar2 != 0x10003) goto LAB_1801af686;
      }
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = (**(code **)(lVar1 + 0x40))();
LAB_1801af713:
    if (0 < (int)uVar2) goto LAB_1801af748;
  }
  uVar5 = 0x7a;
  if (uVar2 == 0xfffffffe) {
    uVar5 = 0x6b;
  }
  FUN_1801a70c0(6,0xcc,uVar5,"crypto\\evp\\evp_lib.c",0x51,uVar6);
LAB_1801af748:
  if ((int)uVar2 < -1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ===== FUN_1801af770 @ 1801af770 (size 185)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801af770(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_res10 [2];
  
  uVar2 = 0;
  if (param_2 != 0) {
    if ((*(uint *)(*param_1 + 0x10) & 0x800) == 0) {
      uVar3 = *(uint *)(*param_1 + 0xc);
    }
    else {
      iVar1 = FUN_18018eca0(param_1,0x25,0,local_res10);
      uVar3 = 0xffffffff;
      if (iVar1 == 1) {
        uVar3 = local_res10[0];
      }
    }
    if (0x10 < uVar3) {
      FUN_1801aeef0("assertion failed: l <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x5e);
    }
    uVar2 = FUN_1801ed420(param_2,param_1 + 3,uVar3);
    if (uVar2 == uVar3) {
      if (0 < (int)uVar2) {
        memcpy(param_1 + 5,param_1 + 3,(ulonglong)uVar3);
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// ===== FUN_1801af840 @ 1801af840 (size 326)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801af840(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_res8 [2];
  undefined8 uVar6;
  
  uVar6 = 0x1801af85a;
  piVar1 = (int *)*param_1;
  if (*(code **)(piVar1 + 0xe) == (code *)0x0) {
    uVar4 = piVar1[4];
    if ((uVar4 >> 0xc & 1) == 0) {
      iVar2 = -1;
    }
    else {
      uVar3 = uVar4 & 0xf0007;
      if (uVar3 < 6) {
LAB_1801af8af:
        iVar2 = 0;
        if (param_2 != 0) {
          if ((uVar4 >> 0xb & 1) == 0) {
            uVar4 = piVar1[3];
          }
          else {
            iVar2 = FUN_18018eca0(param_1,0x25,0,local_res8);
            uVar4 = 0xffffffff;
            if (iVar2 == 1) {
              uVar4 = local_res8[0];
            }
          }
          if (0x10 < uVar4) {
            FUN_1801aeef0("assertion failed: j <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x6f);
          }
          iVar2 = FUN_1801ed530(param_2,param_1 + 3,uVar4);
        }
        goto LAB_1801af934;
      }
      if ((7 < uVar3) && (uVar3 != 0x10001)) {
        if (uVar3 == 0x10002) {
          if (*piVar1 == 0xf6) {
            FUN_1801d5970(param_2,5);
          }
          return 1;
        }
        if (uVar3 != 0x10003) goto LAB_1801af8af;
      }
      iVar2 = -2;
    }
  }
  else {
    iVar2 = (**(code **)(piVar1 + 0xe))();
LAB_1801af934:
    if (0 < iVar2) goto LAB_1801af96a;
  }
  uVar5 = 0x7a;
  if (iVar2 == -2) {
    uVar5 = 0xe4;
  }
  FUN_1801a70c0(6,0xcd,uVar5,"crypto\\evp\\evp_lib.c",0x2e,uVar6);
LAB_1801af96a:
  if (iVar2 < -1) {
    iVar2 = -1;
  }
  return iVar2;
}



// ===== FUN_1801af990 @ 1801af990 (size 155)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801af990(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_res10 [2];
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(uint *)(*param_1 + 0x10) & 0x800) == 0) {
    uVar3 = *(uint *)(*param_1 + 0xc);
  }
  else {
    iVar1 = FUN_18018eca0(param_1,0x25,0,local_res10);
    uVar3 = 0xffffffff;
    if (iVar1 == 1) {
      uVar3 = local_res10[0];
    }
  }
  if (0x10 < uVar3) {
    FUN_1801aeef0("assertion failed: j <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x6f);
  }
  uVar2 = FUN_1801ed530(param_2,param_1 + 3,uVar3);
  return uVar2;
}



// ===== FUN_1801afa30 @ 1801afa30 (size 236)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801afa30(int *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 < 0x1a6) {
    if (iVar3 == 0x1a5) {
switchD_1801afaba_caseD_28a:
      return 0x1a5;
    }
    switch(iVar3) {
    case 5:
    case 0x61:
      return 5;
    case 0x1e:
    case 0x3d:
      goto switchD_1801afa76_caseD_1e;
    case 0x25:
    case 0x62:
    case 0xa6:
      return 0x25;
    }
  }
  else {
    switch(iVar3) {
    case 0x1a9:
    case 0x28b:
    case 0x28e:
      return 0x1a9;
    case 0x1ad:
    case 0x28c:
    case 0x28f:
      return 0x1ad;
    case 0x28a:
    case 0x28d:
      goto switchD_1801afaba_caseD_28a;
    case 0x290:
    case 0x291:
    case 0x292:
    case 0x293:
switchD_1801afa76_caseD_1e:
      return 0x1e;
    }
  }
  uVar1 = FUN_1801b9550(iVar3);
  lVar2 = FUN_1801b9340(uVar1);
  if (lVar2 == 0) {
    iVar3 = 0;
  }
  FUN_18019aa30(uVar1);
  return iVar3;
}



// ===== FUN_1801afd80 @ 1801afd80 (size 65)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801afd80(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_180196100(0x48,"crypto\\evp\\evp_lib.c",0x150);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  return;
}



// ===== FUN_1801afe40 @ 1801afe40 (size 66)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801afe40(longlong param_1)

{
  if (param_1 == 0) {
    FUN_1801a70c0(6,0xa2,0x9f,"crypto\\evp\\evp_lib.c",0x143);
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 8);
}



// ===== FUN_1801afe90 @ 1801afe90 (size 89)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801afe90(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x38))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  FUN_1801a70c0(0x26,0xb9,0x92,"crypto\\engine\\tb_cipher.c",0x4a);
  return 0;
}



// ===== FUN_1801aff10 @ 1801aff10 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801aff10(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x1801aff1c;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x38))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_1801ed650(&DAT_1803c9300,FUN_1801b0000,param_1,local_res8[0],iVar1,
                            uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// ===== FUN_1801aff90 @ 1801aff90 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801aff90(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x38))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_1801ed650(&DAT_1803c9300,FUN_1801b0000,param_1,local_res8[0],iVar1,
                            CONCAT44(uVar3,1));
      return uVar2;
    }
  }
  return 1;
}



// ===== FUN_1801b0050 @ 1801b0050 (size 93)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b0050(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  if (*param_1 != 0) {
    iVar1 = FUN_1801b0570(param_1,param_2,param_1 + 2);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    *param_1 = 0;
    *param_3 = iVar1;
  }
  return 1;
}



// ===== FUN_1801b00c0 @ 1801b00c0 (size 500)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b00c0(int *param_1,longlong param_2,int *param_3,byte *param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 uVar13;
  
  uVar13 = 0x1801b00df;
  uVar9 = 0;
  iVar8 = *param_1;
  uVar10 = (ulonglong)iVar8;
  bVar2 = false;
  bVar3 = false;
  iVar7 = 0;
  iVar12 = 0;
  if ((((0 < iVar8) && (*(char *)(uVar10 + 7 + (longlong)param_1) == '=')) && (iVar7 = 1, 1 < iVar8)
      ) && (iVar7 = 1, *(char *)(uVar10 + 6 + (longlong)param_1) == '=')) {
    iVar7 = 2;
  }
  if (param_5 == 0) goto LAB_1801b0288;
  puVar6 = &DAT_1803106c0;
  if ((*(byte *)(param_1 + 0x17) & 2) == 0) {
    puVar6 = &DAT_180310640;
  }
  iVar8 = 0;
  uVar11 = uVar10;
  if (0 < param_5) {
    do {
      bVar1 = *param_4;
      param_4 = param_4 + 1;
      if ((char)bVar1 < '\0') {
        bVar4 = 0xff;
      }
      else {
        bVar4 = puVar6[bVar1];
      }
      if (bVar4 == 0xff) goto LAB_1801b02ad;
      if (bVar1 == 0x3d) {
        iVar7 = iVar7 + 1;
      }
      else if ((0 < iVar7) && ((bVar4 | 0x13) != 0xf3)) goto LAB_1801b02ad;
      if (2 < iVar7) goto LAB_1801b02ad;
      if (bVar4 == 0xf2) {
        bVar2 = true;
        bVar3 = true;
        goto LAB_1801b0245;
      }
      if ((bVar4 | 0x13) != 0xf3) {
        if (0x3f < (int)uVar11) goto LAB_1801b02ad;
        uVar11 = (ulonglong)((int)uVar11 + 1);
        *(byte *)(uVar10 + 8 + (longlong)param_1) = bVar1;
        uVar10 = uVar10 + 1;
      }
      if ((int)uVar11 == 0x40) {
        iVar5 = FUN_1801b0570(param_1,param_2,param_1 + 2,uVar11,puVar6,uVar13);
        uVar11 = 0;
        uVar10 = 0;
        if ((iVar5 < 0) || (iVar5 < iVar7)) goto LAB_1801b02ad;
        iVar12 = iVar12 + (iVar5 - iVar7);
        param_2 = param_2 + (iVar5 - iVar7);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_5);
    bVar2 = false;
  }
LAB_1801b0245:
  if ((int)uVar11 < 1) {
LAB_1801b026f:
    iVar8 = (int)uVar11;
    if (bVar3) goto LAB_1801b0288;
LAB_1801b0275:
    iVar8 = (int)uVar11;
    if ((iVar8 != 0) || (iVar7 == 0)) {
      uVar9 = 1;
    }
  }
  else {
    if ((uVar11 & 3) == 0) {
      iVar8 = FUN_1801b0570(param_1,param_2,param_1 + 2,uVar11,puVar6,uVar13);
      uVar11 = 0;
      if ((-1 < iVar8) && (iVar7 <= iVar8)) {
        iVar12 = iVar12 + (iVar8 - iVar7);
        goto LAB_1801b026f;
      }
    }
    else if (!bVar2) goto LAB_1801b0275;
LAB_1801b02ad:
    iVar8 = (int)uVar11;
    uVar9 = 0xffffffff;
  }
LAB_1801b0288:
  *param_3 = iVar12;
  *param_1 = iVar8;
  return uVar9;
}



// ===== FUN_1801b0350 @ 1801b0350 (size 117)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b0350(int *param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*param_1 == 0) {
    *param_3 = 0;
    return;
  }
  uVar1 = FUN_1801b0700(param_1,param_2,param_1 + 2);
  if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
    uVar2 = (ulonglong)uVar1;
    uVar1 = uVar1 + 1;
    *(undefined1 *)(uVar2 + param_2) = 10;
  }
  *(undefined1 *)((ulonglong)uVar1 + param_2) = 0;
  *param_1 = 0;
  *param_3 = uVar1;
  return;
}



// ===== FUN_1801b03e0 @ 1801b03e0 (size 389)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801b03e0(uint *param_1,undefined1 *param_2,undefined4 *param_3,void *param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  int iVar5;
  
  _Size = (size_t)param_5;
  uVar4 = 0;
  *param_3 = 0;
  if (param_5 < 1) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1[1];
    if (0x50 < (int)uVar1) {
      FUN_1801aeef0("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)",
                    "crypto\\evp\\encode.c",0xab);
      uVar1 = param_1[1];
    }
    uVar3 = *param_1;
    iVar5 = uVar1 - uVar3;
    if (param_5 < iVar5) {
      memcpy((void *)((longlong)param_1 + (longlong)(int)uVar3 + 8),param_4,_Size);
      *param_1 = *param_1 + param_5;
    }
    else {
      if (uVar3 != 0) {
        memcpy((void *)((longlong)param_1 + (longlong)(int)uVar3 + 8),param_4,(longlong)iVar5);
        param_4 = (void *)((longlong)param_4 + (longlong)iVar5);
        _Size = (size_t)(uint)(param_5 - iVar5);
        iVar5 = FUN_1801b0700(param_1,param_2,param_1 + 2,param_1[1]);
        uVar4 = (ulonglong)iVar5;
        param_2 = param_2 + uVar4;
        *param_1 = 0;
        if ((param_1[0x17] & 1) == 0) {
          *param_2 = 10;
          param_2 = param_2 + 1;
          uVar4 = uVar4 + 1;
        }
        *param_2 = 0;
        uVar1 = param_1[1];
      }
      uVar3 = (uint)_Size;
      if ((int)uVar1 <= (int)uVar3) {
        do {
          if (0x7fffffff < uVar4) goto LAB_1801b051d;
          iVar5 = FUN_1801b0700(param_1,param_2,param_4,uVar1);
          param_4 = (void *)((longlong)param_4 + (longlong)(int)param_1[1]);
          uVar3 = (int)_Size - param_1[1];
          _Size = (size_t)uVar3;
          param_2 = param_2 + iVar5;
          uVar4 = uVar4 + (longlong)iVar5;
          if ((param_1[0x17] & 1) == 0) {
            *param_2 = 10;
            param_2 = param_2 + 1;
            uVar4 = uVar4 + 1;
          }
          *param_2 = 0;
          uVar1 = param_1[1];
        } while ((int)uVar1 <= (int)uVar3);
      }
      if (0x7fffffff < uVar4) {
LAB_1801b051d:
        *param_3 = 0;
        return 0;
      }
      if (uVar3 != 0) {
        memcpy(param_1 + 2,param_4,(longlong)(int)uVar3);
      }
      *param_1 = uVar3;
      *param_3 = (int)uVar4;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// ===== FUN_1801b0570 @ 1801b0570 (size 387)

int FUN_1801b0570(longlong param_1,undefined1 *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  if ((param_1 == 0) || (puVar8 = &DAT_1803106c0, (*(byte *)(param_1 + 0x5c) & 2) == 0)) {
    puVar8 = &DAT_180310640;
  }
  while (((0 < (int)param_4 && (-1 < (char)*param_3)) && (puVar8[*param_3] == -0x20))) {
    param_3 = param_3 + 1;
    param_4 = param_4 - 1;
  }
  for (lVar5 = (longlong)(int)param_4; 3 < lVar5; lVar5 = lVar5 + -1) {
    if ((char)param_3[lVar5 + -1] < '\0') {
      bVar1 = 0xff;
    }
    else {
      bVar1 = puVar8[param_3[lVar5 + -1]];
    }
    if ((bVar1 | 0x13) != 0xf3) break;
    param_4 = param_4 - 1;
  }
  uVar3 = param_4 & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  if (uVar3 == 0) {
    iVar9 = 0;
    if (0 < (int)param_4) {
      do {
        if ((char)*param_3 < '\0') {
          bVar1 = 0xff;
        }
        else {
          bVar1 = puVar8[*param_3];
        }
        if ((char)param_3[1] < '\0') {
          bVar4 = 0xff;
        }
        else {
          bVar4 = puVar8[param_3[1]];
        }
        if ((char)param_3[2] < '\0') {
          bVar2 = 0xff;
        }
        else {
          bVar2 = puVar8[param_3[2]];
        }
        if ((char)param_3[3] < '\0') {
          bVar7 = 0xff;
        }
        else {
          bVar7 = puVar8[param_3[3]];
        }
        param_3 = param_3 + 4;
        if (((char)(bVar4 | bVar1) < '\0') || ((char)(bVar7 | bVar2) < '\0')) goto LAB_1801b06d6;
        iVar10 = iVar10 + 3;
        iVar9 = iVar9 + 4;
        iVar6 = (((uint)bVar1 << 6 | (uint)bVar4) << 6 | (uint)bVar2) << 6;
        *param_2 = (char)((uint)iVar6 >> 0x10);
        param_2[1] = (char)((uint)iVar6 >> 8);
        param_2[2] = (byte)iVar6 | bVar7;
        param_2 = param_2 + 3;
      } while (iVar9 < (int)param_4);
    }
  }
  else {
LAB_1801b06d6:
    iVar10 = -1;
  }
  return iVar10;
}



// ===== FUN_1801b0700 @ 1801b0700 (size 298)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801b0700(longlong param_1,char *param_2,longlong param_3,int param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint3 uVar4;
  char cVar5;
  ulonglong uVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  
  iVar9 = 0;
  if ((param_1 == 0) ||
     (pcVar8 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./",
     (*(byte *)(param_1 + 0x5c) & 2) == 0)) {
    pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  }
  if (param_4 < 1) {
    *param_2 = '\0';
    return 0;
  }
  pbVar7 = (byte *)(param_3 + 1);
  do {
    bVar2 = pbVar7[-1];
    if (param_4 < 3) {
      uVar6 = (ulonglong)bVar2 << 0x10;
      if (param_4 == 2) {
        uVar6 = (ulonglong)((uint)uVar6 | (uint)*pbVar7 << 8);
      }
      *param_2 = pcVar8[uVar6 >> 0x12];
      param_2[1] = pcVar8[(uint)(uVar6 >> 0xc) & 0x3f];
      if (param_4 == 1) {
        cVar5 = '=';
      }
      else {
        cVar5 = pcVar8[(uint)(uVar6 >> 6) & 0x3f];
      }
      param_2[2] = cVar5;
      cVar5 = '=';
    }
    else {
      bVar3 = *pbVar7;
      uVar4 = CONCAT21(CONCAT11(bVar2,bVar3),pbVar7[1]);
      *param_2 = pcVar8[bVar2 >> 2];
      param_2[1] = pcVar8[(ushort)(CONCAT11(bVar2,bVar3) >> 4) & 0x3f];
      param_2[2] = pcVar8[uVar4 >> 6 & 0x3f];
      cVar5 = pcVar8[uVar4 & 0x3f];
    }
    pcVar1 = param_2 + 3;
    iVar9 = iVar9 + 4;
    param_2 = param_2 + 4;
    *pcVar1 = cVar5;
    pbVar7 = pbVar7 + 3;
    param_4 = param_4 + -3;
  } while (0 < param_4);
  *param_2 = '\0';
  return iVar9;
}



// ===== FUN_1801b0830 @ 1801b0830 (size 1508)

void FUN_1801b0830(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar5;
  byte bVar4;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  
  uVar9 = param_1[3];
  uVar6 = param_1[2];
  uVar12 = param_1[1];
  uVar14 = *param_1;
  uVar10 = ((ulonglong)(uVar9 >> 8 | uVar9 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar9 & 0xff00) << 8 | uVar9 >> 0x18)) ^ (ulonglong)param_3[3];
  uVar8 = ((ulonglong)(uVar6 >> 8 | uVar6 << 0x18) & 0xff00ff00 |
          (ulonglong)((uVar6 & 0xff00) << 8 | uVar6 >> 0x18)) ^ (ulonglong)param_3[2];
  uVar13 = ((ulonglong)(uVar12 >> 8 | uVar12 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar12 & 0xff00) << 8 | uVar12 >> 0x18)) ^ (ulonglong)param_3[1];
  uVar11 = ((ulonglong)(uVar14 >> 8 | uVar14 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar14 & 0xff00) << 8 | uVar14 >> 0x18)) ^ (ulonglong)*param_3;
  uVar9 = *(uint *)(&DAT_180311fa0 + (uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_180311ba0 + (uVar10 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1803117a0 + (uVar11 >> 0x18) * 4) ^
          *(uint *)(&DAT_1803123a0 + (uVar13 & 0xff) * 4) ^ param_3[4];
  uVar14 = *(uint *)(&DAT_180311ba0 + (uVar11 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_180311fa0 + (uVar10 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1803117a0 + (uVar13 >> 0x18) * 4) ^
           *(uint *)(&DAT_1803123a0 + (uVar8 & 0xff) * 4) ^ param_3[5];
  uVar6 = *(uint *)(&DAT_180311ba0 + (uVar13 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_180311fa0 + (uVar11 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1803117a0 + (uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_1803123a0 + (uVar10 & 0xff) * 4) ^ param_3[6];
  iVar15 = (int)param_3[0x3c] >> 1;
  uVar12 = *(uint *)(&DAT_180311ba0 + (uVar8 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_180311fa0 + (uVar13 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1803117a0 + (uVar10 >> 0x18) * 4) ^
           *(uint *)(&DAT_1803123a0 + (uVar11 & 0xff) * 4) ^ param_3[7];
  while( true ) {
    iVar15 = iVar15 + -1;
    puVar3 = param_3 + 8;
    bVar4 = (byte)(uVar9 >> 8);
    bVar5 = (byte)(uVar9 >> 0x10);
    if (iVar15 == 0) break;
    uVar7 = *(uint *)(&DAT_180311fa0 + ((ulonglong)(uVar14 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_180311ba0 + ((ulonglong)(uVar6 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_1803117a0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
            *(uint *)(&DAT_1803123a0 + (ulonglong)(uVar9 & 0xff) * 4) ^ param_3[0xb];
    uVar1 = *(uint *)(&DAT_180311fa0 + (ulonglong)bVar4 * 4) ^
            *(uint *)(&DAT_180311ba0 + ((ulonglong)(uVar14 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_1803117a0 + (ulonglong)(uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_1803123a0 + ((ulonglong)uVar12 & 0xff) * 4) ^ param_3[10];
    uVar2 = *(uint *)(&DAT_180311ba0 + (ulonglong)bVar5 * 4) ^
            *(uint *)(&DAT_180311fa0 + ((ulonglong)(uVar12 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_1803117a0 + (ulonglong)(uVar14 >> 0x18) * 4) ^
            *(uint *)(&DAT_1803123a0 + ((ulonglong)uVar6 & 0xff) * 4) ^ param_3[9];
    uVar12 = *(uint *)(&DAT_180311fa0 + ((ulonglong)(uVar6 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_180311ba0 + ((ulonglong)(uVar12 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_1803117a0 + (ulonglong)(uVar9 >> 0x18) * 4) ^
             *(uint *)(&DAT_1803123a0 + ((ulonglong)uVar14 & 0xff) * 4) ^ *puVar3;
    uVar9 = *(uint *)(&DAT_180311fa0 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
            *(uint *)(&DAT_180311ba0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^
            *(uint *)(&DAT_1803117a0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
            *(uint *)(&DAT_1803123a0 + ((ulonglong)uVar2 & 0xff) * 4) ^ param_3[0xc];
    uVar14 = *(uint *)(&DAT_180311ba0 + (ulonglong)(byte)(uVar12 >> 0x10) * 4) ^
             *(uint *)(&DAT_180311fa0 + (ulonglong)(byte)(uVar7 >> 8) * 4) ^
             *(uint *)(&DAT_1803117a0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
             *(uint *)(&DAT_1803123a0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_3[0xd];
    uVar6 = *(uint *)(&DAT_180311fa0 + (ulonglong)(byte)(uVar12 >> 8) * 4) ^
            *(uint *)(&DAT_180311ba0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
            *(uint *)(&DAT_1803117a0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
            *(uint *)(&DAT_1803123a0 + ((ulonglong)uVar7 & 0xff) * 4) ^ param_3[0xe];
    uVar12 = *(uint *)(&DAT_180311fa0 + ((ulonglong)(uVar2 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_180311ba0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_1803117a0 + (ulonglong)(uVar7 >> 0x18) * 4) ^
             *(uint *)(&DAT_1803123a0 + ((ulonglong)uVar12 & 0xff) * 4) ^ param_3[0xf];
    param_3 = puVar3;
  }
  uVar7 = CONCAT31(CONCAT21(CONCAT11((&DAT_1803127a0)[uVar9 >> 0x18],
                                     (&DAT_1803127a0)[(ulonglong)(uVar12 >> 0x10) & 0xff]),
                            (&DAT_1803127a0)[(byte)(uVar6 >> 8)]),
                   (&DAT_1803127a0)[(ulonglong)uVar14 & 0xff]) ^ *puVar3;
  *param_2 = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar7 = CONCAT31(CONCAT21(CONCAT11((&DAT_1803127a0)[uVar14 >> 0x18],(&DAT_1803127a0)[bVar5]),
                            (&DAT_1803127a0)[(ulonglong)(uVar12 >> 8) & 0xff]),
                   (&DAT_1803127a0)[(ulonglong)uVar6 & 0xff]) ^ param_3[9];
  param_2[1] = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar7 = CONCAT31(CONCAT21(CONCAT11((&DAT_1803127a0)[uVar6 >> 0x18],
                                     (&DAT_1803127a0)[(ulonglong)(uVar14 >> 0x10) & 0xff]),
                            (&DAT_1803127a0)[bVar4]),(&DAT_1803127a0)[(ulonglong)uVar12 & 0xff]) ^
          param_3[10];
  param_2[2] = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar9 = CONCAT31(CONCAT21(CONCAT11((&DAT_1803127a0)[uVar12 >> 0x18],
                                     (&DAT_1803127a0)[(ulonglong)(uVar6 >> 0x10) & 0xff]),
                            (&DAT_1803127a0)[(ulonglong)(uVar14 >> 8) & 0xff]),
                   (&DAT_1803127a0)[uVar9 & 0xff]) ^ param_3[0xb];
  param_2[3] = uVar9 >> 8 & 0xff00ff00 | uVar9 << 0x18 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  return;
}



// ===== FUN_1801b0e20 @ 1801b0e20 (size 1538)

void FUN_1801b0e20(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar5;
  byte bVar4;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  uVar9 = param_1[2];
  uVar14 = param_1[1];
  uVar6 = *param_1;
  uVar13 = param_1[3];
  uVar10 = ((ulonglong)(uVar9 >> 8 | uVar9 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar9 & 0xff00) << 8 | uVar9 >> 0x18)) ^ (ulonglong)param_3[2];
  uVar8 = ((ulonglong)(uVar14 >> 8 | uVar14 << 0x18) & 0xff00ff00 |
          (ulonglong)((uVar14 & 0xff00) << 8 | uVar14 >> 0x18)) ^ (ulonglong)param_3[1];
  uVar12 = ((ulonglong)(uVar13 >> 8 | uVar13 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar13 & 0xff00) << 8 | uVar13 >> 0x18)) ^ (ulonglong)param_3[3];
  uVar11 = ((ulonglong)(uVar6 >> 8 | uVar6 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar6 & 0xff00) << 8 | uVar6 >> 0x18)) ^ (ulonglong)*param_3;
  uVar9 = *(uint *)(&DAT_180310ba0 + (uVar8 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_180310fa0 + (uVar10 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1803107a0 + (uVar11 >> 0x18) * 4) ^
          *(uint *)(&DAT_1803113a0 + (uVar12 & 0xff) * 4) ^ param_3[4];
  uVar14 = *(uint *)(&DAT_180310fa0 + (uVar12 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_180310ba0 + (uVar10 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1803107a0 + (uVar8 >> 0x18) * 4) ^
           *(uint *)(&DAT_1803113a0 + (uVar11 & 0xff) * 4) ^ param_3[5];
  uVar6 = *(uint *)(&DAT_180310ba0 + (uVar12 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_180310fa0 + (uVar11 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1803107a0 + (uVar10 >> 0x18) * 4) ^
          *(uint *)(&DAT_1803113a0 + (uVar8 & 0xff) * 4) ^ param_3[6];
  iVar15 = (int)param_3[0x3c] >> 1;
  uVar13 = *(uint *)(&DAT_180310fa0 + (uVar8 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_180310ba0 + (uVar11 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1803107a0 + (uVar12 >> 0x18) * 4) ^
           *(uint *)(&DAT_1803113a0 + (uVar10 & 0xff) * 4) ^ param_3[7];
  while( true ) {
    iVar15 = iVar15 + -1;
    puVar3 = param_3 + 8;
    bVar4 = (byte)(uVar6 >> 0x10);
    bVar5 = (byte)(uVar9 >> 8);
    if (iVar15 == 0) break;
    uVar7 = *(uint *)(&DAT_180310fa0 + (ulonglong)bVar5 * 4) ^
            *(uint *)(&DAT_180310ba0 + ((ulonglong)(uVar13 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_1803113a0 + ((ulonglong)uVar14 & 0xff) * 4) ^ param_3[10];
    uVar1 = *(uint *)(&DAT_180310fa0 + ((ulonglong)(uVar13 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_180310ba0 + (ulonglong)bVar4 * 4) ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar14 >> 0x18) * 4) ^
            *(uint *)(&DAT_1803113a0 + (ulonglong)(uVar9 & 0xff) * 4) ^ param_3[9];
    uVar2 = *(uint *)(&DAT_180310ba0 + (ulonglong)(byte)(uVar9 >> 0x10) * 4) ^
            *(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar14 >> 8) * 4) ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar13 >> 0x18) * 4) ^
            *(uint *)(&DAT_1803113a0 + ((ulonglong)uVar6 & 0xff) * 4) ^ param_3[0xb];
    uVar13 = *(uint *)(&DAT_180310ba0 + ((ulonglong)(uVar14 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_180310fa0 + ((ulonglong)(uVar6 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar9 >> 0x18) * 4) ^
             *(uint *)(&DAT_1803113a0 + ((ulonglong)uVar13 & 0xff) * 4) ^ *puVar3;
    uVar9 = *(uint *)(&DAT_180310ba0 + (ulonglong)(byte)(uVar1 >> 0x10) * 4) ^
            *(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar7 >> 8) * 4) ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar13 >> 0x18) * 4) ^
            *(uint *)(&DAT_1803113a0 + ((ulonglong)uVar2 & 0xff) * 4) ^ param_3[0xc];
    uVar14 = *(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
             *(uint *)(&DAT_180310ba0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^
             *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
             *(uint *)(&DAT_1803113a0 + ((ulonglong)uVar13 & 0xff) * 4) ^ param_3[0xd];
    uVar6 = *(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar13 >> 8) * 4) ^
            *(uint *)(&DAT_180310ba0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar7 >> 0x18) * 4) ^
            *(uint *)(&DAT_1803113a0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_3[0xe];
    uVar13 = *(uint *)(&DAT_180310ba0 + ((ulonglong)(uVar13 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_180310fa0 + ((ulonglong)(uVar1 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
             *(uint *)(&DAT_1803113a0 + ((ulonglong)uVar7 & 0xff) * 4) ^ param_3[0xf];
    param_3 = puVar3;
  }
  uVar7 = *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar14 >> 0x10) * 4) & 0xff0000 ^
          *(uint *)(&DAT_1803107a0 + (ulonglong)(byte)(uVar6 >> 8) * 4) & 0xff00 ^
          *(uint *)(&DAT_180310fa0 + (ulonglong)(uVar9 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_180310ba0)[((ulonglong)uVar13 & 0xff) * 4] ^ *puVar3;
  *param_2 = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar7 = *(uint *)(&DAT_1803113a0 + (ulonglong)bVar4 * 4) & 0xff0000 ^
          *(uint *)(&DAT_1803107a0 + ((ulonglong)(uVar13 >> 8) & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_180310fa0 + (ulonglong)(uVar14 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar9 & 0xff) * 4] ^ param_3[9];
  param_2[1] = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar7 = *(uint *)(&DAT_1803113a0 + ((ulonglong)(uVar13 >> 0x10) & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_1803107a0 + (ulonglong)bVar5 * 4) & 0xff00 ^
          *(uint *)(&DAT_180310fa0 + (ulonglong)(uVar6 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_180310ba0)[((ulonglong)uVar14 & 0xff) * 4] ^ param_3[10];
  param_2[2] = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar9 = *(uint *)(&DAT_1803113a0 + ((ulonglong)(uVar9 >> 0x10) & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_1803107a0 + ((ulonglong)(uVar14 >> 8) & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_180310fa0 + (ulonglong)(uVar13 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_180310ba0)[((ulonglong)uVar6 & 0xff) * 4] ^ param_3[0xb];
  param_2[3] = uVar9 >> 8 & 0xff00ff00 | uVar9 << 0x18 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  return;
}



// ===== FUN_1801b1430 @ 1801b1430 (size 634)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b1430(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  
  uVar4 = FUN_1801b16b0();
  if (-1 < (int)uVar4) {
    iVar6 = *(int *)(param_3 + 0xf0);
    lVar8 = (longlong)(iVar6 * 4);
    if (0 < iVar6 * 4) {
      lVar9 = 0;
      puVar5 = (undefined4 *)(param_3 + 8);
      puVar7 = (undefined4 *)(param_3 + 8 + lVar8 * 4);
      do {
        uVar1 = puVar5[-2];
        lVar9 = lVar9 + 4;
        puVar5[-2] = puVar7[-2];
        lVar8 = lVar8 + -4;
        puVar7[-2] = uVar1;
        uVar1 = puVar5[-1];
        puVar5[-1] = puVar7[-1];
        puVar7[-1] = uVar1;
        uVar1 = *puVar5;
        *puVar5 = *puVar7;
        *puVar7 = uVar1;
        uVar1 = puVar5[1];
        puVar5[1] = puVar7[1];
        puVar7[1] = uVar1;
        puVar5 = puVar5 + 4;
        puVar7 = puVar7 + -4;
      } while (lVar9 < lVar8);
      iVar6 = *(int *)(param_3 + 0xf0);
    }
    iVar11 = 1;
    if (1 < iVar6) {
      puVar10 = (uint *)(param_3 + 4);
      do {
        uVar2 = puVar10[4];
        iVar11 = iVar11 + 1;
        puVar10[3] = *(uint *)(&DAT_180311fa0 +
                              (ulonglong)
                              (byte)(&DAT_180310ba0)
                                    [(ulonglong)*(byte *)((longlong)puVar10 + 0xd) * 4] * 4) ^
                     *(uint *)(&DAT_1803117a0 +
                              (ulonglong)(byte)(&DAT_180310ba0)[(ulonglong)(puVar10[3] >> 0x18) * 4]
                              * 4) ^
                     *(uint *)(&DAT_1803123a0 +
                              (ulonglong)(byte)(&DAT_180310ba0)[(ulonglong)(puVar10[3] & 0xff) * 4]
                              * 4) ^
                     *(uint *)(&DAT_180311ba0 +
                              (ulonglong)
                              (byte)(&DAT_180310ba0)
                                    [(ulonglong)*(byte *)((longlong)puVar10 + 0xe) * 4] * 4);
        uVar3 = puVar10[5];
        puVar10[4] = *(uint *)(&DAT_180311ba0 +
                              (ulonglong)
                              (byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x10 & 0xff) * 4] * 4) ^
                     *(uint *)(&DAT_180311fa0 +
                              (ulonglong)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 8 & 0xff) * 4]
                              * 4) ^
                     *(uint *)(&DAT_1803117a0 +
                              (ulonglong)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] * 4)
                     ^ *(uint *)(&DAT_1803123a0 +
                                (ulonglong)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 & 0xff) * 4] * 4
                                );
        uVar2 = puVar10[6];
        puVar10[5] = *(uint *)(&DAT_180311ba0 +
                              (ulonglong)
                              (byte)(&DAT_180310ba0)[(ulonglong)(uVar3 >> 0x10 & 0xff) * 4] * 4) ^
                     *(uint *)(&DAT_180311fa0 +
                              (ulonglong)(byte)(&DAT_180310ba0)[(ulonglong)(uVar3 >> 8 & 0xff) * 4]
                              * 4) ^
                     *(uint *)(&DAT_1803117a0 +
                              (ulonglong)(byte)(&DAT_180310ba0)[(ulonglong)(uVar3 >> 0x18) * 4] * 4)
                     ^ *(uint *)(&DAT_1803123a0 +
                                (ulonglong)(byte)(&DAT_180310ba0)[(ulonglong)(uVar3 & 0xff) * 4] * 4
                                );
        puVar10[6] = *(uint *)(&DAT_180311ba0 +
                              (ulonglong)
                              (byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x10 & 0xff) * 4] * 4) ^
                     *(uint *)(&DAT_180311fa0 +
                              (ulonglong)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 8 & 0xff) * 4]
                              * 4) ^
                     *(uint *)(&DAT_1803117a0 +
                              (ulonglong)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] * 4)
                     ^ *(uint *)(&DAT_1803123a0 +
                                (ulonglong)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 & 0xff) * 4] * 4
                                );
        puVar10 = puVar10 + 4;
      } while (iVar11 < *(int *)(param_3 + 0xf0));
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_1801b16b0 @ 1801b16b0 (size 4038)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b16b0(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  if ((param_1 == (uint *)0x0) || (param_3 == (uint *)0x0)) {
    return 0xffffffff;
  }
  if (((param_2 - 0x80U & 0xffffff3f) != 0) || (param_2 == 0x140)) {
    return 0xfffffffe;
  }
  if (param_2 == 0x80) {
    param_3[0x3c] = 10;
  }
  else {
    uVar2 = 0xe;
    if (param_2 == 0xc0) {
      uVar2 = 0xc;
    }
    param_3[0x3c] = uVar2;
  }
  uVar2 = *param_1;
  uVar4 = uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18;
  *param_3 = uVar4;
  uVar2 = param_1[1];
  param_3[1] = uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18;
  uVar2 = param_1[2];
  param_3[2] = uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18;
  uVar2 = param_1[3];
  uVar3 = uVar2 >> 8 & 0xff00ff00;
  uVar6 = uVar3 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18;
  param_3[3] = uVar6;
  if (param_2 == 0x80) {
    uVar4 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)((uVar2 & 0xff00) >> 8) * 4) ^ 0x1000000) &
            0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 & 0xff) * 4] ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 >> 0x18) * 4) & 0xff00 ^ uVar4;
    param_3[4] = uVar4;
    uVar2 = param_3[2] ^ uVar4 ^ param_3[1];
    param_3[5] = uVar4 ^ param_3[1];
    param_3[6] = uVar2;
    uVar2 = uVar2 ^ uVar6;
    param_3[7] = uVar2;
    uVar4 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x2000000) &
            0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ uVar4;
    param_3[8] = uVar4;
    uVar4 = uVar4 ^ param_3[5];
    param_3[9] = uVar4;
    uVar4 = uVar4 ^ param_3[6];
    param_3[10] = uVar4;
    uVar4 = param_3[7] ^ uVar4;
    param_3[0xb] = uVar4;
    uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^ 0x4000000) &
            0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar4 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar4 >> 0x18) * 4] ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar4 & 0xff) * 4) & 0xff00 ^ param_3[8];
    param_3[0xc] = uVar2;
    uVar2 = uVar2 ^ param_3[9];
    param_3[0xd] = uVar2;
    uVar2 = param_3[10] ^ uVar2;
    param_3[0xe] = uVar2;
    uVar2 = uVar2 ^ param_3[0xb];
    param_3[0xf] = uVar2;
    uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x8000000) &
            0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ param_3[0xc];
    param_3[0x10] = uVar2;
    uVar2 = param_3[0xd] ^ uVar2;
    param_3[0x11] = uVar2;
    uVar2 = param_3[0xe] ^ uVar2;
    param_3[0x12] = uVar2;
    uVar2 = param_3[0xf] ^ uVar2;
    param_3[0x13] = uVar2;
    uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x10000000) &
            0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ param_3[0x10];
    param_3[0x14] = uVar2;
    uVar2 = uVar2 ^ param_3[0x11];
    param_3[0x15] = uVar2;
    uVar2 = param_3[0x12] ^ uVar2;
    param_3[0x16] = uVar2;
    uVar2 = param_3[0x13] ^ uVar2;
    param_3[0x17] = uVar2;
    uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x20000000) &
            0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ param_3[0x14];
    param_3[0x18] = uVar2;
    uVar2 = param_3[0x15] ^ uVar2;
    param_3[0x19] = uVar2;
    uVar2 = param_3[0x16] ^ uVar2;
    param_3[0x1a] = uVar2;
    uVar2 = param_3[0x17] ^ uVar2;
    param_3[0x1b] = uVar2;
    uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x40000000) &
            0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ param_3[0x18];
    param_3[0x1c] = uVar2;
    uVar2 = uVar2 ^ param_3[0x19];
    param_3[0x1d] = uVar2;
    uVar2 = param_3[0x1a] ^ uVar2;
    param_3[0x1e] = uVar2;
    uVar2 = param_3[0x1b] ^ uVar2;
    param_3[0x1f] = uVar2;
    uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x80ffffff) &
            0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ param_3[0x1c];
    param_3[0x20] = uVar2;
    uVar2 = param_3[0x1d] ^ uVar2;
    param_3[0x21] = uVar2;
    uVar2 = param_3[0x1e] ^ uVar2;
    param_3[0x22] = uVar2;
    uVar2 = param_3[0x1f] ^ uVar2;
    param_3[0x23] = uVar2;
    uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x1b000000) &
            0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ param_3[0x20];
    param_3[0x24] = uVar2;
    uVar2 = param_3[0x21] ^ uVar2;
    param_3[0x25] = uVar2;
    uVar2 = param_3[0x22] ^ uVar2;
    param_3[0x26] = uVar2;
    uVar2 = param_3[0x23] ^ uVar2;
    param_3[0x27] = uVar2;
    uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x36000000) &
            0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
            *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ param_3[0x24];
    param_3[0x28] = uVar2;
    uVar2 = param_3[0x25] ^ uVar2;
    param_3[0x29] = uVar2;
    uVar2 = param_3[0x26] ^ uVar2;
    param_3[0x2a] = uVar2;
    param_3[0x2b] = param_3[0x27] ^ uVar2;
  }
  else {
    uVar2 = param_1[4];
    param_3[4] = uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18;
    uVar2 = param_1[5];
    uVar3 = uVar2 >> 8 & 0xff00ff00;
    puVar1 = param_3 + 5;
    *puVar1 = uVar3 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18;
    if (param_2 == 0xc0) {
      uVar4 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)((uVar2 & 0xff00) >> 8) * 4) ^ 0x1000000)
              & 0xff000000 ^
              *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff0000 ^
              (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 & 0xff) * 4] ^
              *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 >> 0x18) * 4) & 0xff00 ^ uVar4;
      param_3[6] = uVar4;
      param_3[7] = uVar4 ^ param_3[1];
      uVar3 = uVar4 ^ param_3[1] ^ param_3[2];
      param_3[8] = uVar3;
      uVar3 = uVar3 ^ uVar6;
      uVar2 = param_3[4] ^ uVar3;
      param_3[9] = uVar3;
      param_3[10] = uVar2;
      uVar2 = uVar2 ^ *puVar1;
      param_3[0xb] = uVar2;
      uVar4 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x2000000) &
              0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000
              ^ (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
              *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ uVar4;
      param_3[0xc] = uVar4;
      uVar4 = param_3[7] ^ uVar4;
      param_3[0xd] = uVar4;
      uVar4 = uVar4 ^ param_3[8];
      param_3[0xe] = uVar4;
      uVar4 = param_3[9] ^ uVar4;
      param_3[0xf] = uVar4;
      uVar4 = param_3[10] ^ uVar4;
      param_3[0x10] = uVar4;
      uVar4 = uVar4 ^ param_3[0xb];
      param_3[0x11] = uVar4;
      uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^ 0x4000000) &
              0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar4 >> 8) * 4) & 0xff0000
              ^ (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar4 >> 0x18) * 4] ^
              *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar4 & 0xff) * 4) & 0xff00 ^ param_3[0xc];
      param_3[0x12] = uVar2;
      uVar2 = param_3[0xd] ^ uVar2;
      param_3[0x13] = uVar2;
      uVar2 = param_3[0xe] ^ uVar2;
      param_3[0x14] = uVar2;
      uVar2 = param_3[0xf] ^ uVar2;
      param_3[0x15] = uVar2;
      uVar2 = param_3[0x10] ^ uVar2;
      uVar3 = param_3[0x11] ^ uVar2;
      param_3[0x16] = uVar2;
      param_3[0x17] = uVar3;
      uVar3 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) ^ 0x8000000) &
              0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff0000
              ^ (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar3 >> 0x18) * 4] ^
              *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar3 & 0xff) * 4) & 0xff00 ^ param_3[0x12];
      param_3[0x18] = uVar3;
      uVar3 = uVar3 ^ param_3[0x13];
      param_3[0x19] = uVar3;
      uVar3 = uVar3 ^ param_3[0x14];
      param_3[0x1a] = uVar3;
      uVar3 = param_3[0x15] ^ uVar3;
      param_3[0x1b] = uVar3;
      uVar3 = uVar3 ^ param_3[0x16];
      uVar2 = param_3[0x17] ^ uVar3;
      param_3[0x1c] = uVar3;
      param_3[0x1d] = uVar2;
      uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x10000000) &
              0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000
              ^ (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
              *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ param_3[0x18];
      param_3[0x1e] = uVar2;
      uVar2 = uVar2 ^ param_3[0x19];
      param_3[0x1f] = uVar2;
      uVar2 = uVar2 ^ param_3[0x1a];
      param_3[0x20] = uVar2;
      uVar2 = uVar2 ^ param_3[0x1b];
      param_3[0x21] = uVar2;
      uVar2 = param_3[0x1c] ^ uVar2;
      param_3[0x22] = uVar2;
      uVar2 = uVar2 ^ param_3[0x1d];
      param_3[0x23] = uVar2;
      uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x20000000) &
              0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000
              ^ (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
              *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ param_3[0x1e];
      param_3[0x24] = uVar2;
      uVar2 = param_3[0x1f] ^ uVar2;
      param_3[0x25] = uVar2;
      uVar2 = uVar2 ^ param_3[0x20];
      param_3[0x26] = uVar2;
      uVar2 = uVar2 ^ param_3[0x21];
      param_3[0x27] = uVar2;
      uVar2 = uVar2 ^ param_3[0x22];
      param_3[0x28] = uVar2;
      uVar2 = uVar2 ^ param_3[0x23];
      param_3[0x29] = uVar2;
      uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x40000000) &
              0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000
              ^ (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
              *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ param_3[0x24];
      param_3[0x2a] = uVar2;
      uVar2 = param_3[0x25] ^ uVar2;
      param_3[0x2b] = uVar2;
      uVar2 = param_3[0x26] ^ uVar2;
      param_3[0x2c] = uVar2;
      uVar2 = param_3[0x27] ^ uVar2;
      param_3[0x2d] = uVar2;
      uVar2 = uVar2 ^ param_3[0x28];
      param_3[0x2e] = uVar2;
      uVar2 = uVar2 ^ param_3[0x29];
      param_3[0x2f] = uVar2;
      uVar2 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^ 0x80ffffff) &
              0xff000000 ^ *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000
              ^ (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
              *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ param_3[0x2a];
      param_3[0x30] = uVar2;
      uVar2 = uVar2 ^ param_3[0x2b];
      param_3[0x31] = uVar2;
      uVar2 = param_3[0x2c] ^ uVar2;
      param_3[0x32] = uVar2;
      param_3[0x33] = uVar2 ^ param_3[0x2d];
      return 0;
    }
    uVar2 = param_1[6];
    param_3[6] = uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18;
    uVar2 = param_1[7];
    uVar3 = uVar2 >> 8 & 0xff00ff00;
    param_3[7] = uVar3 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18;
    if (param_2 == 0x100) {
      uVar4 = (*(uint *)(&DAT_180310fa0 + (ulonglong)(byte)((uVar2 & 0xff00) >> 8) * 4) ^ 0x1000000)
              & 0xff000000 ^
              *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff0000 ^
              (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 & 0xff) * 4] ^
              *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 >> 0x18) * 4) & 0xff00 ^ uVar4;
      puVar5 = &DAT_1803128ac;
      param_3[8] = uVar4;
      uVar4 = uVar4 ^ param_3[1];
      param_3[9] = uVar4;
      uVar4 = uVar4 ^ param_3[2];
      param_3[10] = uVar4;
      param_3[0xb] = uVar4 ^ uVar6;
      do {
        uVar2 = puVar1[6];
        uVar2 = *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) & 0xff0000 ^
                *(uint *)(&DAT_1803107a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff00 ^
                *(uint *)(&DAT_180310fa0 + (ulonglong)(uVar2 >> 0x18) * 4) & 0xff000000 ^
                (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 & 0xff) * 4] ^ puVar1[-1];
        puVar1[7] = uVar2;
        uVar2 = uVar2 ^ *puVar1;
        uVar3 = puVar1[1] ^ uVar2;
        puVar1[8] = uVar2;
        uVar2 = puVar1[2] ^ uVar3;
        puVar1[9] = uVar3;
        puVar1[10] = uVar2;
        uVar2 = *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000 ^
                *(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) & 0xff000000 ^
                (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
                *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ puVar5[-2] ^
                puVar1[3];
        puVar1[0xb] = uVar2;
        uVar2 = puVar1[4] ^ uVar2;
        puVar1[0xc] = uVar2;
        uVar2 = puVar1[5] ^ uVar2;
        puVar1[0xd] = uVar2;
        uVar2 = uVar2 ^ puVar1[6];
        puVar1[0xe] = uVar2;
        uVar3 = *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) & 0xff0000 ^
                *(uint *)(&DAT_1803107a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff00 ^
                *(uint *)(&DAT_180310fa0 + (ulonglong)(uVar2 >> 0x18) * 4) & 0xff000000 ^
                (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 & 0xff) * 4] ^ puVar1[7];
        puVar1[0xf] = uVar3;
        uVar3 = uVar3 ^ puVar1[8];
        puVar1[0x10] = uVar3;
        uVar3 = uVar3 ^ puVar1[9];
        uVar2 = puVar1[10] ^ uVar3;
        puVar1[0x11] = uVar3;
        puVar1[0x12] = uVar2;
        uVar2 = *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff0000 ^
                *(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) & 0xff000000 ^
                (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 >> 0x18) * 4] ^
                *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar2 & 0xff) * 4) & 0xff00 ^ puVar5[-1] ^
                puVar1[0xb];
        puVar1[0x13] = uVar2;
        uVar2 = uVar2 ^ puVar1[0xc];
        puVar1[0x14] = uVar2;
        uVar2 = uVar2 ^ puVar1[0xd];
        puVar1[0x15] = uVar2;
        uVar2 = puVar1[0xe] ^ uVar2;
        puVar1[0x16] = uVar2;
        uVar2 = *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) & 0xff0000 ^
                *(uint *)(&DAT_1803107a0 + (ulonglong)(byte)(uVar2 >> 8) * 4) & 0xff00 ^
                *(uint *)(&DAT_180310fa0 + (ulonglong)(uVar2 >> 0x18) * 4) & 0xff000000 ^
                (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar2 & 0xff) * 4] ^ puVar1[0xf];
        uVar3 = puVar1[0x10] ^ uVar2;
        puVar1[0x17] = uVar2;
        uVar2 = puVar1[0x11] ^ uVar3;
        puVar1[0x18] = uVar3;
        uVar3 = puVar1[0x12] ^ uVar2;
        puVar1[0x19] = uVar2;
        puVar1[0x1a] = uVar3;
        uVar2 = *(uint *)(&DAT_1803113a0 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff0000 ^
                *(uint *)(&DAT_180310fa0 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) & 0xff000000 ^
                (uint)(byte)(&DAT_180310ba0)[(ulonglong)(uVar3 >> 0x18) * 4] ^
                *(uint *)(&DAT_1803107a0 + (ulonglong)(uVar3 & 0xff) * 4) & 0xff00 ^ puVar1[0x13] ^
                *puVar5;
        puVar5 = puVar5 + 3;
        puVar1[0x1b] = uVar2;
        uVar2 = puVar1[0x14] ^ uVar2;
        puVar1[0x1c] = uVar2;
        uVar2 = puVar1[0x15] ^ uVar2;
        puVar1[0x1d] = uVar2;
        puVar1[0x1e] = puVar1[0x16] ^ uVar2;
        puVar1 = puVar1 + 0x18;
      } while (puVar5 != (uint *)&DAT_1803128c4);
      return 0;
    }
  }
  return 0;
}



// ===== FUN_1801b26c0 @ 1801b26c0 (size 696)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b26c0(ulonglong *param_1,ulonglong *param_2,byte *param_3,undefined8 param_4,
                  ulonglong *param_5,code *param_6)

{
  byte bVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  if (param_3 != (byte *)0x0) {
    local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
    if (param_1 == param_2) {
      if ((byte *)0xf < param_3) {
        uVar7 = (ulonglong)param_3 >> 4;
        param_3 = param_3 + uVar7 * -0x10;
        do {
          (*param_6)(param_1,&local_50,param_4);
          uVar2 = *param_1;
          *param_2 = *param_5 ^ local_50;
          *param_5 = uVar2;
          uVar2 = param_1[1];
          param_1 = param_1 + 2;
          param_2[1] = param_5[1] ^ local_48;
          param_2 = param_2 + 2;
          param_5[1] = uVar2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else if ((byte *)0xf < param_3) {
      uVar7 = (ulonglong)param_3 >> 4;
      param_3 = param_3 + uVar7 * -0x10;
      puVar10 = param_5;
      do {
        puVar6 = param_1;
        (*param_6)(puVar6,param_2,param_4);
        *param_2 = *param_2 ^ *puVar10;
        param_2[1] = param_2[1] ^ puVar10[1];
        param_1 = puVar6 + 2;
        param_2 = param_2 + 2;
        uVar7 = uVar7 - 1;
        puVar10 = puVar6;
      } while (uVar7 != 0);
      if (param_5 != puVar6) {
        uVar3 = *(undefined4 *)((longlong)puVar6 + 4);
        uVar7 = puVar6[1];
        uVar4 = *(undefined4 *)((longlong)puVar6 + 0xc);
        *(int *)param_5 = (int)*puVar6;
        *(undefined4 *)((longlong)param_5 + 4) = uVar3;
        *(int *)(param_5 + 1) = (int)uVar7;
        *(undefined4 *)((longlong)param_5 + 0xc) = uVar4;
      }
    }
    if (param_3 != (byte *)0x0) {
      local_68 = (longlong)param_5 - (longlong)&local_50;
      local_60 = 1 - (longlong)&local_50;
      local_58 = 2 - (longlong)&local_50;
      lVar8 = (longlong)param_2 + 1;
      do {
        (*param_6)(param_1,&local_50,param_4);
        pbVar5 = (byte *)0x0;
        do {
          if (param_3 <= pbVar5) break;
          pbVar9 = (byte *)((longlong)&local_50 + (longlong)pbVar5);
          bVar1 = (pbVar9 + (longlong)param_1)[-((longlong)&local_50 + 1) + 1];
          pbVar9[-((longlong)&local_50 + 1) + lVar8] = pbVar9[local_68] ^ *pbVar9;
          pbVar9[local_68] = bVar1;
          if (param_3 <= pbVar9 + local_60) {
            pbVar5 = pbVar5 + 1;
            break;
          }
          bVar1 = (pbVar5 + 1)[(longlong)param_1];
          pbVar5[lVar8] = pbVar5[(longlong)&local_50 + 1] ^ pbVar5[(longlong)param_5 + 1];
          pbVar5[(longlong)param_5 + 1] = bVar1;
          if (param_3 <= pbVar9 + local_58) {
            pbVar5 = pbVar5 + 2;
            break;
          }
          bVar1 = pbVar5[(longlong)param_1 + 2];
          pbVar5[lVar8 + 1] = pbVar5[(longlong)&local_50 + 2] ^ pbVar5[(longlong)param_5 + 2];
          pbVar5[(longlong)param_5 + 2] = bVar1;
          if (param_3 <= pbVar9 + (3 - (longlong)&local_50)) {
            pbVar5 = pbVar5 + 3;
            break;
          }
          bVar1 = pbVar5[(longlong)param_1 + 3];
          pbVar5[lVar8 + 2] = pbVar5[(longlong)&local_50 + 3] ^ pbVar5[(longlong)param_5 + 3];
          pbVar5[(longlong)param_5 + 3] = bVar1;
          pbVar5 = pbVar5 + 4;
        } while (pbVar5 < (byte *)0x10);
        if (param_3 < (byte *)0x11) {
          if ((byte *)0xf < pbVar5) {
            return;
          }
          pbVar9 = (byte *)((longlong)param_5 + (longlong)pbVar5);
          lVar8 = 0x10 - (longlong)pbVar5;
          do {
            *pbVar9 = pbVar9[(longlong)param_1 - (longlong)param_5];
            pbVar9 = pbVar9 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          return;
        }
        param_1 = param_1 + 2;
        lVar8 = lVar8 + 0x10;
        param_3 = param_3 + -0x10;
      } while (param_3 != (byte *)0x0);
    }
  }
  return;
}



// ===== FUN_1801b2980 @ 1801b2980 (size 463)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b2980(ulonglong *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4,
                  undefined8 *param_5,code *param_6)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_3 != (byte *)0x0) {
    puVar8 = param_5;
    if ((byte *)0xf < param_3) {
      uVar6 = (ulonglong)param_3 >> 4;
      param_3 = param_3 + uVar6 * -0x10;
      puVar7 = param_5;
      do {
        puVar8 = param_2;
        lVar5 = 2;
        puVar3 = param_1;
        do {
          *(ulonglong *)(((longlong)puVar8 - (longlong)param_1) + (longlong)puVar3) =
               *(ulonglong *)(((longlong)puVar7 - (longlong)param_1) + (longlong)puVar3) ^ *puVar3;
          puVar3 = puVar3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        (*param_6)(puVar8,puVar8,param_4);
        param_1 = param_1 + 2;
        uVar6 = uVar6 - 1;
        param_2 = puVar8 + 2;
        puVar7 = puVar8;
      } while (uVar6 != 0);
    }
    for (; param_3 != (byte *)0x0; param_3 = param_3 + -0x10) {
      pbVar2 = (byte *)0x0;
      do {
        if (param_3 <= pbVar2) {
LAB_1801b2ad4:
          if (pbVar2 < (byte *)0x10) {
            pbVar4 = pbVar2 + (longlong)param_2;
            lVar5 = 0x10 - (longlong)pbVar2;
            do {
              *pbVar4 = pbVar4[(longlong)puVar8 - (longlong)param_2];
              pbVar4 = pbVar4 + 1;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
          break;
        }
        pbVar4 = pbVar2 + (longlong)param_1;
        pbVar4[(longlong)param_2 - (longlong)param_1] =
             pbVar4[(longlong)puVar8 - (longlong)param_1] ^ *pbVar4;
        if (param_3 <= pbVar4 + (1 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 1;
          goto LAB_1801b2ad4;
        }
        pbVar2[(longlong)param_2 + 1] =
             pbVar2[(longlong)param_1 + 1] ^ (pbVar2 + 1)[(longlong)puVar8];
        if (param_3 <= pbVar4 + (2 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 2;
          goto LAB_1801b2ad4;
        }
        pbVar2[(longlong)param_2 + 2] =
             pbVar2[(longlong)param_1 + 2] ^ (pbVar2 + 2)[(longlong)puVar8];
        if (param_3 <= pbVar4 + (3 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 3;
          goto LAB_1801b2ad4;
        }
        pbVar2[(longlong)param_2 + 3] =
             pbVar2[(longlong)param_1 + 3] ^ (pbVar2 + 3)[(longlong)puVar8];
        pbVar2 = pbVar2 + 4;
      } while (pbVar2 < (byte *)0x10);
      (*param_6)(param_2,param_2,param_4);
      puVar8 = param_2;
      if (param_3 < (byte *)0x11) break;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
    }
    if (param_5 != puVar8) {
      uVar1 = puVar8[1];
      *param_5 = *puVar8;
      param_5[1] = uVar1;
    }
  }
  return;
}



// ===== FUN_1801b2b50 @ 1801b2b50 (size 373)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b2b50(byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong *param_6,uint *param_7,code *param_8)

{
  byte bVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint local_res18;
  
  local_res18 = *param_7;
  for (; (local_res18 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((ulonglong)local_res18 + (longlong)param_6) ^ bVar1;
    param_2 = param_2 + 1;
    local_res18 = local_res18 + 1 & 0xf;
  }
  if (0xf < param_3) {
    uVar5 = param_3 >> 4;
    local_res18 = 0;
    param_3 = param_3 + uVar5 * -0x10;
    lVar4 = (longlong)param_2 - (longlong)param_6;
    lVar6 = (longlong)param_1 - (longlong)param_6;
    param_2 = param_2 + uVar5 * 0x10;
    param_1 = param_1 + uVar5 * 0x10;
    do {
      (*param_8)(param_5,param_6,param_4);
      FUN_1801b2f10(param_5);
      lVar3 = 2;
      puVar2 = param_6;
      do {
        *(ulonglong *)(lVar4 + (longlong)puVar2) =
             *(ulonglong *)(lVar6 + (longlong)puVar2) ^ *puVar2;
        puVar2 = puVar2 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar4 = lVar4 + 0x10;
      lVar6 = lVar6 + 0x10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_3 != 0) {
    (*param_8)(param_5,param_6,param_4);
    FUN_1801b2f10(param_5);
    do {
      uVar5 = (ulonglong)local_res18;
      local_res18 = local_res18 + 1;
      param_2[uVar5] = param_1[uVar5] ^ *(byte *)(uVar5 + (longlong)param_6);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  *param_7 = local_res18;
  return;
}



// ===== FUN_1801b2cd0 @ 1801b2cd0 (size 572)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b2cd0(byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5
                  ,undefined8 *param_6,uint *param_7,code *param_8)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint *puVar11;
  uint local_res18;
  uint local_48;
  
  local_48 = *param_7;
  if (local_48 != 0) {
    do {
      if (param_3 == 0) break;
      param_3 = param_3 - 1;
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = *(byte *)((ulonglong)local_48 + (longlong)param_6) ^ bVar2;
      param_2 = param_2 + 1;
      local_48 = local_48 + 1 & 0xf;
    } while (local_48 != 0);
  }
  uVar6 = 1;
  uVar7 = *(uint *)(param_5 + 0xc);
  puVar11 = (uint *)(param_5 + 0xc);
  iVar10 = 0xc;
  local_res18 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  if (0xf < param_3) {
    do {
      uVar4 = param_3 >> 4;
      if (0x10000000 < uVar4) {
        uVar4 = 0x10000000;
      }
      uVar7 = local_res18 + (int)uVar4;
      uVar3 = (ulonglong)uVar7;
      uVar9 = uVar4 - uVar3;
      if (uVar4 <= uVar3) {
        uVar9 = uVar4;
      }
      local_res18 = 0;
      if (uVar4 <= uVar3) {
        local_res18 = uVar7;
      }
      (*param_8)(param_1,param_2,uVar9,param_4,param_5);
      *puVar11 = local_res18 >> 0x18 | (local_res18 & 0xff0000) >> 8 | (local_res18 & 0xff00) << 8 |
                 local_res18 << 0x18;
      if (local_res18 == 0) {
        iVar8 = 0xc;
        uVar7 = 1;
        puVar5 = puVar11;
        do {
          pbVar1 = (byte *)((longlong)puVar5 + -1);
          puVar5 = (uint *)((longlong)puVar5 + -1);
          uVar7 = uVar7 + *pbVar1;
          *(char *)puVar5 = (char)uVar7;
          uVar7 = uVar7 >> 8;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      param_3 = param_3 + uVar9 * -0x10;
      param_2 = param_2 + uVar9 * 0x10;
      param_1 = param_1 + uVar9 * 0x10;
    } while (0xf < param_3);
  }
  if (param_3 == 0) {
    *param_7 = local_48;
  }
  else {
    *param_6 = 0;
    param_6[1] = 0;
    (*param_8)(param_6,param_6,1,param_4,param_5);
    local_res18 = local_res18 + 1;
    *puVar11 = local_res18 >> 0x18 | (local_res18 & 0xff0000) >> 8 | (local_res18 & 0xff00) << 8 |
               local_res18 * 0x1000000;
    if (local_res18 == 0) {
      do {
        pbVar1 = (byte *)((longlong)puVar11 + -1);
        puVar11 = (uint *)((longlong)puVar11 + -1);
        uVar6 = uVar6 + *pbVar1;
        *(char *)puVar11 = (char)uVar6;
        uVar6 = uVar6 >> 8;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    do {
      uVar4 = (ulonglong)local_48;
      local_48 = local_48 + 1;
      param_2[uVar4] = param_1[uVar4] ^ *(byte *)(uVar4 + (longlong)param_6);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    *param_7 = local_48;
  }
  return;
}



// ===== FUN_1801b2f10 @ 1801b2f10 (size 183)

void FUN_1801b2f10(char *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = param_1[0xf];
  param_1[0xf] = (char)(bVar1 + 1);
  uVar2 = (bVar1 + 1 >> 8) + (uint)(byte)param_1[0xe];
  param_1[0xe] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[0xd];
  param_1[0xd] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[0xc];
  param_1[0xc] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[0xb];
  param_1[0xb] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[10];
  param_1[10] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[9];
  param_1[9] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[8];
  param_1[8] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[7];
  param_1[7] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[6];
  param_1[6] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[5];
  param_1[5] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[4];
  param_1[4] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[3];
  param_1[3] = (char)uVar2;
  uVar2 = (uVar2 >> 8) + (uint)(byte)param_1[2];
  param_1[2] = (char)uVar2;
  iVar3 = (uVar2 >> 8) + (uint)(byte)param_1[1];
  param_1[1] = (char)iVar3;
  *param_1 = *param_1 + (char)((uint)iVar3 >> 8);
  return;
}



// ===== FUN_1801b2fd0 @ 1801b2fd0 (size 357)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b2fd0(byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5
                  ,uint *param_6,code *param_7)

{
  byte bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar4 = *param_6;
  for (; (uVar4 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((ulonglong)uVar4 + param_5) ^ bVar1;
    param_2 = param_2 + 1;
    uVar4 = uVar4 + 1 & 0xf;
  }
  if (0xf < param_3) {
    uVar6 = param_3 >> 4;
    lVar5 = (longlong)param_2 - param_5;
    lVar7 = (longlong)param_1 - param_5;
    param_3 = param_3 + uVar6 * -0x10;
    param_2 = param_2 + uVar6 * 0x10;
    param_1 = param_1 + uVar6 * 0x10;
    do {
      (*param_7)(param_5,param_5,param_4);
      if (uVar4 < 0x10) {
        puVar2 = (ulonglong *)((ulonglong)uVar4 + param_5);
        uVar3 = (ulonglong)((0xf - uVar4 >> 3) + 1);
        do {
          *(ulonglong *)(lVar5 + (longlong)puVar2) =
               *(ulonglong *)(lVar7 + (longlong)puVar2) ^ *puVar2;
          puVar2 = puVar2 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      lVar5 = lVar5 + 0x10;
      lVar7 = lVar7 + 0x10;
      uVar4 = 0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_3 != 0) {
    (*param_7)(param_5,param_5,param_4);
    do {
      uVar6 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_2[uVar6] = param_1[uVar6] ^ *(byte *)(uVar6 + param_5);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  *param_6 = uVar4;
  return;
}



// ===== FUN_1801b3140 @ 1801b3140 (size 277)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b3140(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  byte local_res18 [16];
  byte local_48 [16];
  
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      bVar2 = (byte)uVar4;
      uVar1 = uVar4 >> 3;
      local_res18[0] =
           -(((byte)(1 << (7 - (bVar2 & 7) & 0x1f)) & *(byte *)(uVar1 + param_1)) != 0) & 0x80;
      FUN_1801b35a0(local_res18,local_48,1,param_4,param_5,param_7,param_8);
      uVar3 = (uint)uVar4;
      uVar4 = uVar4 + 1;
      *(byte *)(uVar1 + param_2) =
           *(byte *)(uVar1 + param_2) & ~(byte)(1 << (7 - (uVar3 & 7) & 0x1f)) |
           (local_48[0] & 0x80) >> (bVar2 & 7);
    } while (uVar4 < param_3);
  }
  return;
}



// ===== FUN_1801b3260 @ 1801b3260 (size 169)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b3260(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = 0x1801b327b;
    param_2 = param_2 - param_1;
    do {
      FUN_1801b35a0(param_1,param_2 + param_1,8,param_4,param_5,param_7,param_8,uVar1);
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// ===== FUN_1801b3310 @ 1801b3310 (size 643)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b3310(byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5
                  ,uint *param_6,int param_7,code *param_8)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar6 = *param_6;
  if (param_7 == 0) {
    for (; (uVar6 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = *(byte *)((ulonglong)uVar6 + param_5) ^ bVar2;
      param_2 = param_2 + 1;
      *(byte *)((ulonglong)uVar6 + param_5) = bVar2;
      uVar6 = uVar6 + 1 & 0xf;
    }
    if (0xf < param_3) {
      uVar8 = param_3 >> 4;
      lVar7 = (longlong)param_2 - param_5;
      param_3 = param_3 + uVar8 * -0x10;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar6 < 0x10) {
          uVar5 = (ulonglong)((0xf - uVar6 >> 3) + 1);
          puVar4 = (ulonglong *)((ulonglong)uVar6 + param_5);
          do {
            uVar3 = *(ulonglong *)
                     (lVar7 + (longlong)puVar4 + ((longlong)param_1 - (longlong)param_2));
            *(ulonglong *)(lVar7 + (longlong)puVar4) = *puVar4 ^ uVar3;
            *puVar4 = uVar3;
            uVar5 = uVar5 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar5 != 0);
        }
        param_2 = param_2 + 0x10;
        lVar7 = lVar7 + 0x10;
        param_1 = param_1 + 0x10;
        uVar6 = 0;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      do {
        uVar8 = (ulonglong)uVar6;
        uVar6 = uVar6 + 1;
        bVar2 = param_1[uVar8];
        param_2[uVar8] = *(byte *)(uVar8 + param_5) ^ bVar2;
        *(byte *)(uVar8 + param_5) = bVar2;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else {
    for (; (uVar6 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      pbVar1 = (byte *)((ulonglong)uVar6 + param_5);
      *pbVar1 = *pbVar1 ^ bVar2;
      *param_2 = *(byte *)((ulonglong)uVar6 + param_5);
      param_2 = param_2 + 1;
      uVar6 = uVar6 + 1 & 0xf;
    }
    if (0xf < param_3) {
      uVar8 = param_3 >> 4;
      lVar9 = (longlong)param_2 - param_5;
      lVar7 = (longlong)param_1 - param_5;
      param_3 = param_3 + uVar8 * -0x10;
      param_2 = param_2 + uVar8 * 0x10;
      param_1 = param_1 + uVar8 * 0x10;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar6 < 0x10) {
          puVar4 = (ulonglong *)((ulonglong)uVar6 + param_5);
          uVar5 = (ulonglong)((0xf - uVar6 >> 3) + 1);
          do {
            *puVar4 = *puVar4 ^ *(ulonglong *)(lVar7 + (longlong)puVar4);
            *(ulonglong *)(lVar9 + (longlong)puVar4) = *puVar4;
            puVar4 = puVar4 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar9 = lVar9 + 0x10;
        lVar7 = lVar7 + 0x10;
        uVar6 = 0;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      do {
        uVar8 = (ulonglong)uVar6;
        uVar6 = uVar6 + 1;
        *(byte *)(uVar8 + param_5) = *(byte *)(uVar8 + param_5) ^ param_1[uVar8];
        param_2[uVar8] = *(byte *)(uVar8 + param_5);
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  *param_6 = uVar6;
  return;
}



// ===== FUN_1801b35a0 @ 1801b35a0 (size 978)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b35a0(ulonglong *param_1,ulonglong *param_2,int param_3,undefined8 param_4,
                  ulonglong *param_5,int param_6,code *param_7)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulonglong *puVar12;
  byte bVar13;
  longlong lVar14;
  uint uVar15;
  byte *pbVar16;
  longlong lVar17;
  longlong lVar18;
  byte bVar19;
  longlong lVar20;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48 [4];
  
  local_48[3] = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  if (param_3 - 1U < 0x80) {
    local_58 = *param_5;
    uStack_50 = param_5[1];
    (*param_7)(param_5,param_5);
    uVar10 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
    lVar20 = (longlong)(int)uVar10;
    if (param_6 == 0) {
      iVar11 = 0;
      if ((0 < (int)uVar10) && (0xf < uVar10)) {
        lVar14 = (longlong)(int)(uVar10 - 1);
        if ((((((ulonglong *)((longlong)param_5 + lVar14) < local_48) ||
              (auStack_78 + (longlong)(int)(uVar10 + 0xf) + 0x20 < param_5)) &&
             ((puVar1 = (ulonglong *)((longlong)param_2 + lVar14), puVar1 < local_48 ||
              (auStack_78 + (longlong)(int)(uVar10 + 0xf) + 0x20 < param_2)))) &&
            (((ulonglong *)((longlong)param_5 + lVar14) < param_2 || (puVar1 < param_5)))) &&
           (((ulonglong *)((longlong)param_1 + lVar14) < param_2 || (puVar1 < param_1)))) {
          uVar15 = uVar10 & 0x8000000f;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
          }
          lVar14 = 0;
          do {
            iVar11 = iVar11 + 0x10;
            puVar12 = (ulonglong *)((longlong)local_48 + lVar14);
            lVar18 = lVar14 + 0x10;
            puVar1 = (ulonglong *)((longlong)puVar12 + ((longlong)param_1 - (longlong)local_48));
            uVar5 = *puVar1;
            uVar6 = puVar1[1];
            puVar1 = (ulonglong *)((longlong)puVar12 + ((longlong)param_5 - (longlong)local_48));
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            *puVar12 = uVar5;
            *(ulonglong *)((longlong)local_48 + lVar14 + 8) = uVar6;
            puVar12 = (ulonglong *)((longlong)puVar12 + ((longlong)param_2 - (longlong)local_48));
            *puVar12 = uVar7 ^ uVar5;
            puVar12[1] = uVar8 ^ uVar6;
            lVar14 = lVar18;
          } while (lVar18 < (int)(uVar10 - uVar15));
        }
      }
      lVar14 = (longlong)iVar11;
      if (lVar14 < lVar20) {
        do {
          pbVar16 = (byte *)((longlong)local_48 + lVar14);
          lVar14 = lVar14 + 1;
          bVar9 = pbVar16[(longlong)param_1 - (longlong)local_48];
          bVar2 = pbVar16[(longlong)param_5 - (longlong)local_48];
          *pbVar16 = bVar9;
          pbVar16[(longlong)param_2 - (longlong)local_48] = bVar2 ^ bVar9;
        } while (lVar14 < lVar20);
      }
    }
    else if (0 < (int)uVar10) {
      lVar14 = (longlong)param_5 - (longlong)param_1;
      lVar18 = (longlong)local_48 - (longlong)param_1;
      lVar17 = (longlong)param_2 - (longlong)param_1;
      do {
        bVar9 = *(byte *)((longlong)param_1 + lVar14) ^ (byte)*param_1;
        *(byte *)((longlong)param_1 + lVar18) = bVar9;
        *(byte *)((longlong)param_1 + lVar17) = bVar9;
        param_1 = (ulonglong *)((longlong)param_1 + 1);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    uVar15 = param_3 >> 0x1f & 7;
    uVar10 = param_3 + uVar15;
    iVar11 = (uVar10 & 7) - uVar15;
    lVar20 = (longlong)((int)uVar10 >> 3);
    if (iVar11 == 0) {
      uVar5 = *(ulonglong *)((longlong)local_48 + lVar20 + -8);
      *param_5 = *(ulonglong *)(auStack_78 + lVar20 + 0x20);
      param_5[1] = uVar5;
    }
    else {
      bVar9 = auStack_78[lVar20 + 0x21];
      bVar2 = auStack_78[lVar20 + 0x24];
      bVar13 = (byte)iVar11;
      bVar19 = 8 - bVar13;
      *(byte *)param_5 = auStack_78[lVar20 + 0x20] << (bVar13 & 0x1f) | bVar9 >> (bVar19 & 0x1f);
      bVar3 = auStack_78[lVar20 + 0x22];
      *(byte *)((longlong)param_5 + 1) = bVar9 << (bVar13 & 0x1f) | bVar3 >> (bVar19 & 0x1f);
      bVar9 = auStack_78[lVar20 + 0x23];
      bVar4 = auStack_78[lVar20 + 0x25];
      *(byte *)((longlong)param_5 + 2) = bVar9 >> (bVar19 & 0x1f) | bVar3 << (bVar13 & 0x1f);
      bVar3 = auStack_78[lVar20 + 0x26];
      *(byte *)((longlong)param_5 + 3) = bVar2 >> (bVar19 & 0x1f) | bVar9 << (bVar13 & 0x1f);
      bVar9 = auStack_78[lVar20 + 0x27];
      *(byte *)((longlong)param_5 + 5) = bVar3 >> (bVar19 & 0x1f) | bVar4 << (bVar13 & 0x1f);
      *(byte *)((longlong)param_5 + 6) = bVar3 << (bVar13 & 0x1f) | bVar9 >> (bVar19 & 0x1f);
      bVar3 = *(byte *)((longlong)local_48 + lVar20 + -8);
      *(byte *)((longlong)param_5 + 4) = bVar2 << (bVar13 & 0x1f) | bVar4 >> (bVar19 & 0x1f);
      *(byte *)((longlong)param_5 + 7) = bVar9 << (bVar13 & 0x1f) | bVar3 >> (bVar19 & 0x1f);
      bVar9 = *(byte *)((longlong)local_48 + lVar20 + -7);
      *(byte *)(param_5 + 1) = bVar3 << (bVar13 & 0x1f) | bVar9 >> (bVar19 & 0x1f);
      bVar2 = *(byte *)((longlong)local_48 + lVar20 + -6);
      *(byte *)((longlong)param_5 + 9) = bVar9 << (bVar13 & 0x1f) | bVar2 >> (bVar19 & 0x1f);
      bVar9 = *(byte *)((longlong)local_48 + lVar20 + -5);
      *(byte *)((longlong)param_5 + 10) = bVar2 << (bVar13 & 0x1f) | bVar9 >> (bVar19 & 0x1f);
      bVar2 = *(byte *)((longlong)local_48 + lVar20 + -4);
      *(byte *)((longlong)param_5 + 0xb) = bVar9 << (bVar13 & 0x1f) | bVar2 >> (bVar19 & 0x1f);
      bVar9 = *(byte *)((longlong)local_48 + lVar20 + -3);
      *(byte *)((longlong)param_5 + 0xc) = bVar2 << (bVar13 & 0x1f) | bVar9 >> (bVar19 & 0x1f);
      bVar2 = *(byte *)((longlong)local_48 + lVar20 + -2);
      *(byte *)((longlong)param_5 + 0xd) = bVar9 << (bVar13 & 0x1f) | bVar2 >> (bVar19 & 0x1f);
      bVar9 = *(byte *)((longlong)local_48 + lVar20 + -1);
      bVar3 = *(byte *)((longlong)local_48 + lVar20);
      *(byte *)((longlong)param_5 + 0xe) = bVar2 << (bVar13 & 0x1f) | bVar9 >> (bVar19 & 0x1f);
      *(byte *)((longlong)param_5 + 0xf) = bVar3 >> (bVar19 & 0x1f) | bVar9 << (bVar13 & 0x1f);
    }
  }
  return;
}



// ===== FUN_1801b3980 @ 1801b3980 (size 324)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b3980(longlong param_1,byte *param_2,ulonglong param_3,undefined8 param_4)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  pcVar2 = *(code **)(param_1 + 0x160);
  pcVar3 = *(code **)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return 0xfffffffe;
  }
  uVar4 = *(longlong *)(param_1 + 0x30) + param_3;
  if ((0x2000000000000000 < uVar4) || (uVar4 < param_3)) {
    return 0xffffffff;
  }
  uVar6 = *(uint *)(param_1 + 0x174);
  *(ulonglong *)(param_1 + 0x30) = uVar4;
  if (uVar6 != 0) {
    do {
      if (param_3 == 0) {
        if (uVar6 != 0) goto LAB_1801b3a92;
        (*pcVar2)(param_1 + 0x40,param_1 + 0x60,pcVar2,param_4,0x1801b3991);
        param_3 = 0;
        goto LAB_1801b3a4b;
      }
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
      pbVar5 = (byte *)((ulonglong)uVar6 + param_1 + 0x40);
      *pbVar5 = *pbVar5 ^ bVar1;
      uVar6 = uVar6 + 1 & 0xf;
    } while (uVar6 != 0);
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,pcVar2,param_4,0x1801b3991);
  }
LAB_1801b3a4b:
  pbVar5 = (byte *)(param_1 + 0x40);
  uVar4 = param_3 & 0xfffffffffffffff0;
  if (uVar4 != 0) {
    (*pcVar3)(pbVar5,param_1 + 0x60,param_2,uVar4);
    param_2 = param_2 + uVar4;
    param_3 = param_3 - uVar4;
  }
  if (param_3 != 0) {
    uVar6 = (uint)param_3;
    do {
      *pbVar5 = *pbVar5 ^ pbVar5[(longlong)(param_2 + (-0x40 - param_1))];
      pbVar5 = pbVar5 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
LAB_1801b3a92:
  *(uint *)(param_1 + 0x174) = uVar6;
  return 0;
}



// ===== FUN_1801b3ad0 @ 1801b3ad0 (size 878)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b3ad0(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res8;
  uint local_68;
  ulonglong local_40;
  
  pcVar4 = *(code **)(param_1 + 0x178);
  pcVar5 = *(code **)(param_1 + 0x168);
  uVar6 = *(undefined8 *)(param_1 + 0x180);
  uVar9 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar9) || (uVar9 < param_4)) {
    return 0xffffffff;
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar9;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(puVar1,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  local_68 = local_res8 & 0xf;
  uVar9 = (ulonglong)local_68;
  uVar10 = *(uint *)(param_1 + 0xc);
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  if (local_68 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar9 != 0) goto LAB_1801b3e05;
        break;
      }
      uVar8 = *param_2;
      param_4 = param_4 - 1;
      uVar7 = (ulonglong)local_res8;
      param_2 = (ulonglong *)((longlong)param_2 + 1);
      local_res8 = local_res8 + 1;
      *(byte *)(uVar7 + 0x188 + param_1) = (byte)uVar8;
      *(byte *)param_3 = *(byte *)(uVar9 + 0x10 + param_1) ^ (byte)uVar8;
      param_3 = (ulonglong *)((longlong)param_3 + 1);
      local_68 = (int)uVar9 + 1U & 0xf;
      uVar9 = (ulonglong)local_68;
    } while (local_68 != 0);
    (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar5)(puVar1,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    local_40 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*pcVar5)(puVar1,param_1 + 0x60,param_2,0xc00);
      lVar11 = 0xc0;
      do {
        (*pcVar4)(param_1,param_1 + 0x10,uVar6);
        uVar10 = uVar10 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000
        ;
        *param_3 = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
        puVar2 = param_2 + 1;
        param_2 = param_2 + 2;
        param_3[1] = *puVar2 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = param_3 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      local_40 = local_40 - 1;
    } while (local_40 != 0);
    uVar9 = (ulonglong)local_68;
  }
  if (((param_4 & 0xfffffffffffffff0) != 0) &&
     ((*pcVar5)(puVar1,param_1 + 0x60,param_2), 0xf < param_4)) {
    uVar9 = param_4 >> 4;
    param_4 = param_4 + uVar9 * -0x10;
    do {
      (*pcVar4)(param_1,param_1 + 0x10,uVar6);
      uVar10 = uVar10 + 1;
      *(uint *)(param_1 + 0xc) =
           uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000;
      *param_3 = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
      puVar2 = param_2 + 1;
      param_2 = param_2 + 2;
      param_3[1] = *puVar2 ^ *(ulonglong *)(param_1 + 0x18);
      param_3 = param_3 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    uVar9 = (ulonglong)local_68;
  }
  if (param_4 != 0) {
    (*pcVar4)(param_1,param_1 + 0x10,uVar6);
    uVar10 = uVar10 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000;
    do {
      uVar8 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      bVar3 = *(byte *)(uVar9 + (longlong)param_2);
      *(byte *)(uVar8 + 0x188 + param_1) = bVar3;
      *(byte *)(uVar9 + (longlong)param_3) = *(byte *)(uVar9 + 0x10 + param_1) ^ bVar3;
      param_4 = param_4 - 1;
      uVar9 = (ulonglong)((int)uVar9 + 1);
    } while (param_4 != 0);
  }
LAB_1801b3e05:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// ===== FUN_1801b3e40 @ 1801b3e40 (size 771)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801b3e40(longlong param_1,byte *param_2,byte *param_3,ulonglong param_4,code *param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint local_res8;
  uint local_58;
  
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  pcVar4 = *(code **)(param_1 + 0x168);
  uVar6 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar6) || (uVar6 < param_4)) {
    return 0xffffffff;
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar6;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(puVar1,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  local_58 = local_res8 & 0xf;
  uVar6 = (ulonglong)local_58;
  uVar7 = *(uint *)(param_1 + 0xc);
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  if (local_58 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar6 != 0) goto LAB_1801b4108;
        break;
      }
      bVar2 = *param_2;
      param_4 = param_4 - 1;
      uVar5 = (ulonglong)local_res8;
      param_2 = param_2 + 1;
      local_res8 = local_res8 + 1;
      *(byte *)(uVar5 + 0x188 + param_1) = bVar2;
      *param_3 = *(byte *)(uVar6 + 0x10 + param_1) ^ bVar2;
      param_3 = param_3 + 1;
      local_58 = (int)uVar6 + 1U & 0xf;
      uVar6 = (ulonglong)local_58;
    } while (local_58 != 0);
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar4)(puVar1,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    uVar6 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*pcVar4)(puVar1,param_1 + 0x60,param_2,0xc00);
      (*param_5)(param_2,param_3,0xc0,uVar3,param_1);
      uVar7 = uVar7 + 0xc0;
      param_3 = param_3 + 0xc00;
      param_2 = param_2 + 0xc00;
      *(uint *)(param_1 + 0xc) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    uVar6 = (ulonglong)local_58;
  }
  uVar5 = param_4 & 0xfffffffffffffff0;
  if (uVar5 != 0) {
    (*pcVar4)(puVar1,param_1 + 0x60,param_2,uVar5);
    (*param_5)(param_2,param_3,param_4 >> 4,uVar3,param_1);
    uVar7 = uVar7 + (int)(param_4 >> 4);
    *(uint *)(param_1 + 0xc) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
    param_3 = param_3 + uVar5;
    param_2 = param_2 + uVar5;
    param_4 = param_4 - uVar5;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar3);
    uVar7 = uVar7 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
    do {
      uVar5 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      bVar2 = param_2[uVar6];
      *(byte *)(uVar5 + 0x188 + param_1) = bVar2;
      param_3[uVar6] = *(byte *)(uVar6 + 0x10 + param_1) ^ bVar2;
      param_4 = param_4 - 1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (param_4 != 0);
  }
LAB_1801b4108:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// ===== FUN_1801b4150 @ 1801b4150 (size 906)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b4150(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res8;
  uint local_68;
  ulonglong local_40;
  
  pcVar3 = *(code **)(param_1 + 0x178);
  pcVar4 = *(code **)(param_1 + 0x168);
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  uVar8 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar8) || (uVar8 < param_4)) {
    return 0xffffffff;
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar8;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(puVar1,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar10 = *(uint *)(param_1 + 0xc);
  local_68 = local_res8 & 0xf;
  uVar8 = (ulonglong)local_68;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  if (local_68 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar8 != 0) goto LAB_1801b44a2;
        break;
      }
      param_4 = param_4 - 1;
      bVar7 = *(byte *)(uVar8 + 0x10 + param_1) ^ (byte)*param_2;
      param_2 = (ulonglong *)((longlong)param_2 + 1);
      *(byte *)param_3 = bVar7;
      param_3 = (ulonglong *)((longlong)param_3 + 1);
      uVar6 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      local_68 = (int)uVar8 + 1U & 0xf;
      uVar8 = (ulonglong)local_68;
      *(byte *)(uVar6 + 0x188 + param_1) = bVar7;
    } while (local_68 != 0);
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar4)(puVar1,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    local_40 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      lVar11 = 0xc0;
      do {
        puVar9 = param_3;
        (*pcVar3)(param_1,param_1 + 0x10,uVar5);
        uVar10 = uVar10 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000
        ;
        *puVar9 = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
        puVar2 = param_2 + 1;
        param_2 = param_2 + 2;
        puVar9[1] = *puVar2 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = puVar9 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      (*pcVar4)(puVar1,param_1 + 0x60,puVar9 + -0x17e,0xc00);
      local_40 = local_40 - 1;
    } while (local_40 != 0);
    uVar8 = (ulonglong)local_68;
  }
  uVar6 = param_4 & 0xfffffffffffffff0;
  if (uVar6 != 0) {
    if (0xf < param_4) {
      uVar8 = param_4 >> 4;
      param_4 = param_4 + uVar8 * -0x10;
      do {
        (*pcVar3)(param_1,param_1 + 0x10,uVar5);
        uVar10 = uVar10 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000
        ;
        *param_3 = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
        puVar2 = param_2 + 1;
        param_2 = param_2 + 2;
        param_3[1] = *puVar2 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = param_3 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      uVar8 = (ulonglong)local_68;
    }
    (*pcVar4)(puVar1,param_1 + 0x60,(longlong)param_3 - uVar6,uVar6);
  }
  if (param_4 != 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar5);
    uVar10 = uVar10 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000;
    do {
      bVar7 = *(byte *)(uVar8 + 0x10 + param_1) ^ *(byte *)(uVar8 + (longlong)param_2);
      *(byte *)(uVar8 + (longlong)param_3) = bVar7;
      uVar6 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      *(byte *)(uVar6 + 0x188 + param_1) = bVar7;
      param_4 = param_4 - 1;
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (param_4 != 0);
  }
LAB_1801b44a2:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// ===== FUN_1801b44e0 @ 1801b44e0 (size 782)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801b44e0(longlong param_1,byte *param_2,byte *param_3,ulonglong param_4,code *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint local_res8;
  uint local_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  pcVar3 = *(code **)(param_1 + 0x168);
  uVar6 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar6) || (uVar6 < param_4)) {
    return 0xffffffff;
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar6;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(puVar1,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar7 = *(uint *)(param_1 + 0xc);
  local_58 = local_res8 & 0xf;
  uVar6 = (ulonglong)local_58;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  if (local_58 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar6 != 0) goto LAB_1801b47b4;
        break;
      }
      param_4 = param_4 - 1;
      bVar5 = *(byte *)(uVar6 + 0x10 + param_1) ^ *param_2;
      param_2 = param_2 + 1;
      *param_3 = bVar5;
      param_3 = param_3 + 1;
      uVar4 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      local_58 = (int)uVar6 + 1U & 0xf;
      uVar6 = (ulonglong)local_58;
      *(byte *)(uVar4 + 0x188 + param_1) = bVar5;
    } while (local_58 != 0);
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar3)(puVar1,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    uVar6 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*param_5)(param_2,param_3,0xc0,uVar2,param_1);
      uVar7 = uVar7 + 0xc0;
      *(uint *)(param_1 + 0xc) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
      (*pcVar3)(puVar1,param_1 + 0x60,param_3,0xc00);
      param_3 = param_3 + 0xc00;
      param_2 = param_2 + 0xc00;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    uVar6 = (ulonglong)local_58;
  }
  uVar4 = param_4 & 0xfffffffffffffff0;
  if (uVar4 != 0) {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar2,param_1);
    uVar7 = uVar7 + (int)(param_4 >> 4);
    *(uint *)(param_1 + 0xc) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
    param_2 = param_2 + uVar4;
    param_4 = param_4 - uVar4;
    (*pcVar3)(puVar1,param_1 + 0x60,param_3,uVar4);
    param_3 = param_3 + uVar4;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar2);
    uVar7 = uVar7 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
    do {
      bVar5 = *(byte *)(uVar6 + 0x10 + param_1) ^ param_2[uVar6];
      param_3[uVar6] = bVar5;
      uVar4 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      *(byte *)(uVar4 + 0x188 + param_1) = bVar5;
      param_4 = param_4 - 1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (param_4 != 0);
  }
LAB_1801b47b4:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// ===== FUN_1801b47f0 @ 1801b47f0 (size 297)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b47f0(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x170);
  pcVar5 = *(code **)(param_1 + 0x168);
  uVar9 = lVar3 << 3;
  uVar10 = lVar4 << 3;
  if (uVar2 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x174) != 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
    }
  }
  else {
    uVar7 = uVar2 + 0xf & 0xfffffff0;
    memset((void *)(param_1 + 0x188 + (ulonglong)uVar2),0,(ulonglong)(uVar7 - uVar2));
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0x30) {
      (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,0x30);
      uVar8 = 0;
    }
  }
  uVar7 = (uint)(uVar9 >> 0x18);
  uVar2 = (uint)(uVar9 >> 8);
  local_38 = ((uint)((ulonglong)lVar3 >> 0x20) & 0x1fffffff) >> 0x15 |
             ((uint)(uVar9 >> 0x20) & 0xff0000) >> 8 | uVar7 & 0xff0000 | uVar2 & 0xff000000;
  uStack_34 = uVar7 & 0xff | uVar2 & 0xff00 | (uint)(((uVar9 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar3 << 0x3b) >> 0x20);
  uVar7 = (uint)(uVar10 >> 0x18);
  uVar2 = (uint)(uVar10 >> 8);
  uStack_30 = ((uint)((ulonglong)lVar4 >> 0x20) & 0x1fffffff) >> 0x15 |
              ((uint)(uVar10 >> 0x20) & 0xff0000) >> 8 | uVar7 & 0xff0000 | uVar2 & 0xff000000;
  uStack_2c = uVar7 & 0xff | uVar2 & 0xff00 | (uint)(((uVar10 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar4 << 0x3b) >> 0x20);
  puVar1 = (uint *)(uVar8 + 0x188 + param_1);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,(int)uVar8 + 0x10);
  *(ulonglong *)(param_1 + 0x40) = *(ulonglong *)(param_1 + 0x40) ^ *(ulonglong *)(param_1 + 0x20);
  *(ulonglong *)(param_1 + 0x48) = *(ulonglong *)(param_1 + 0x48) ^ *(ulonglong *)(param_1 + 0x28);
  if ((param_2 == 0) || (0x10 < param_3)) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = FUN_1800012a0(param_1 + 0x40,param_2,param_3);
  }
  return uVar6;
}



// ===== FUN_1801b4920 @ 1801b4920 (size 256)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b4920(void *param_1,undefined8 param_2,code *param_3)

{
  ulonglong uVar1;
  
  memset(param_1,0,0x1b8);
  *(code **)((longlong)param_1 + 0x178) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x180) = param_2;
  (*param_3)((longlong)param_1 + 0x50,(longlong)param_1 + 0x50,param_2);
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x50);
  *(ulonglong *)((longlong)param_1 + 0x50) =
       uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
       (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
       (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x58);
  *(ulonglong *)((longlong)param_1 + 0x58) =
       uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
       (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
       (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  if ((DAT_180447954 & 2) == 0) {
    FUN_1801b4d00((longlong)param_1 + 0x60,(longlong)param_1 + 0x50);
    *(code **)((longlong)param_1 + 0x160) = FUN_180008180;
    *(code **)((longlong)param_1 + 0x168) = FUN_1800082c0;
  }
  else if ((DAT_180447954 & 0x10400000) == 0x10400000) {
    FUN_180009500();
    *(undefined **)((longlong)param_1 + 0x160) = &DAT_1800096c0;
    *(undefined **)((longlong)param_1 + 0x168) = &DAT_1800096e0;
  }
  else {
    FUN_180008af0();
    *(undefined1 **)((longlong)param_1 + 0x160) = &LAB_180008d60;
    *(undefined **)((longlong)param_1 + 0x168) = &DAT_180008e20;
  }
  return;
}



// ===== FUN_1801b4a20 @ 1801b4a20 (size 447)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b4a20(undefined8 *param_1,byte *param_2,ulonglong param_3)

{
  code *pcVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pcVar1 = (code *)param_1[0x2c];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x2e] = 0;
  if (param_3 == 0xc) {
    uVar3 = 1;
    *param_1 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x1000000;
  }
  else {
    param_1[8] = 0;
    param_1[9] = 0;
    uVar4 = param_3;
    if (0xf < param_3) {
      uVar5 = param_3 >> 4;
      uVar4 = param_3 + uVar5 * -0x10;
      do {
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) ^ *param_2;
        *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) ^ param_2[1];
        *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) ^ param_2[2];
        *(byte *)((longlong)param_1 + 0x43) = *(byte *)((longlong)param_1 + 0x43) ^ param_2[3];
        *(byte *)((longlong)param_1 + 0x44) = *(byte *)((longlong)param_1 + 0x44) ^ param_2[4];
        *(byte *)((longlong)param_1 + 0x45) = *(byte *)((longlong)param_1 + 0x45) ^ param_2[5];
        *(byte *)((longlong)param_1 + 0x46) = *(byte *)((longlong)param_1 + 0x46) ^ param_2[6];
        *(byte *)((longlong)param_1 + 0x47) = *(byte *)((longlong)param_1 + 0x47) ^ param_2[7];
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) ^ param_2[8];
        *(byte *)((longlong)param_1 + 0x49) = *(byte *)((longlong)param_1 + 0x49) ^ param_2[9];
        *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) ^ param_2[10];
        *(byte *)((longlong)param_1 + 0x4b) = *(byte *)((longlong)param_1 + 0x4b) ^ param_2[0xb];
        *(byte *)((longlong)param_1 + 0x4c) = *(byte *)((longlong)param_1 + 0x4c) ^ param_2[0xc];
        *(byte *)((longlong)param_1 + 0x4d) = *(byte *)((longlong)param_1 + 0x4d) ^ param_2[0xd];
        *(byte *)((longlong)param_1 + 0x4e) = *(byte *)((longlong)param_1 + 0x4e) ^ param_2[0xe];
        *(byte *)((longlong)param_1 + 0x4f) = *(byte *)((longlong)param_1 + 0x4f) ^ param_2[0xf];
        (*pcVar1)(param_1 + 8,param_1 + 0xc);
        param_2 = param_2 + 0x10;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (uVar4 != 0) {
      pbVar2 = (byte *)(param_1 + 8);
      do {
        *pbVar2 = *pbVar2 ^ pbVar2[(longlong)(param_2 + (-0x40 - (longlong)param_1))];
        pbVar2 = pbVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      (*pcVar1)(param_1 + 8,param_1 + 0xc);
    }
    uVar4 = param_3 << 3;
    param_1[9] = param_1[9] ^
                 ((param_3 & 0x1fffffffffffffff) >> 0x35 | (uVar4 & 0xff000000000000) >> 0x28 |
                  (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                  (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28
                 | param_3 << 0x3b);
    (*pcVar1)(param_1 + 8,param_1 + 0xc);
    uVar3 = *(uint *)((longlong)param_1 + 0x4c);
    *param_1 = param_1[8];
    param_1[1] = param_1[9];
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  (*(code *)param_1[0x2f])(param_1,param_1 + 4,param_1[0x30]);
  uVar3 = uVar3 + 1;
  *(uint *)((longlong)param_1 + 0xc) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000;
  return;
}



// ===== FUN_1801b4be0 @ 1801b4be0 (size 288)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b4be0(longlong param_1,void *param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  size_t _Size;
  ulonglong uVar9;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x170);
  pcVar5 = *(code **)(param_1 + 0x168);
  uVar7 = lVar3 << 3;
  uVar9 = lVar4 << 3;
  if (uVar2 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x174) != 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
    }
  }
  else {
    uVar6 = uVar2 + 0xf & 0xfffffff0;
    memset((void *)(param_1 + 0x188 + (ulonglong)uVar2),0,(ulonglong)(uVar6 - uVar2));
    uVar8 = (ulonglong)uVar6;
    if (uVar6 == 0x30) {
      (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,0x30);
      uVar8 = 0;
    }
  }
  uVar6 = (uint)(uVar7 >> 0x18);
  uVar2 = (uint)(uVar7 >> 8);
  local_38 = ((uint)((ulonglong)lVar3 >> 0x20) & 0x1fffffff) >> 0x15 |
             ((uint)(uVar7 >> 0x20) & 0xff0000) >> 8 | uVar6 & 0xff0000 | uVar2 & 0xff000000;
  uStack_34 = uVar6 & 0xff | uVar2 & 0xff00 | (uint)(((uVar7 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar3 << 0x3b) >> 0x20);
  uVar6 = (uint)(uVar9 >> 0x18);
  uVar2 = (uint)(uVar9 >> 8);
  uStack_30 = ((uint)((ulonglong)lVar4 >> 0x20) & 0x1fffffff) >> 0x15 |
              ((uint)(uVar9 >> 0x20) & 0xff0000) >> 8 | uVar6 & 0xff0000 | uVar2 & 0xff000000;
  uStack_2c = uVar6 & 0xff | uVar2 & 0xff00 | (uint)(((uVar9 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar4 << 0x3b) >> 0x20);
  puVar1 = (uint *)(uVar8 + 0x188 + param_1);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,(int)uVar8 + 0x10);
  *(ulonglong *)(param_1 + 0x40) = *(ulonglong *)(param_1 + 0x40) ^ *(ulonglong *)(param_1 + 0x20);
  *(ulonglong *)(param_1 + 0x48) = *(ulonglong *)(param_1 + 0x48) ^ *(ulonglong *)(param_1 + 0x28);
  _Size = 0x10;
  if (param_3 < 0x11) {
    _Size = param_3;
  }
  memcpy(param_2,(void *)(param_1 + 0x40),_Size);
  return;
}



// ===== FUN_1801b4d00 @ 1801b4d00 (size 545)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b4d00(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = param_2[1];
  uVar2 = *param_2;
  uVar3 = uVar1 >> 1 | uVar2 << 0x3f;
  uVar5 = -(ulonglong)((uint)uVar1 & 1) & 0xe100000000000000 ^ uVar2 >> 1;
  uVar8 = uVar3 >> 1 | (uVar2 >> 1) << 0x3f;
  uVar4 = -(ulonglong)((uint)(uVar1 >> 1) & 1) & 0xe100000000000000 ^ uVar5 >> 1;
  uVar6 = (uVar5 >> 1) << 0x3f | uVar8 >> 1;
  uVar9 = -(ulonglong)((uint)(uVar3 >> 1) & 1) & 0xe100000000000000 ^ uVar4 >> 1;
  param_1[4] = uVar4;
  param_1[5] = uVar8;
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  param_1[8] = uVar5;
  param_1[9] = uVar3;
  uVar10 = uVar9 ^ uVar4;
  uVar7 = uVar6 ^ uVar8;
  param_1[6] = uVar10;
  param_1[7] = uVar7;
  param_1[2] = uVar9;
  param_1[3] = uVar6;
  param_1[0xc] = uVar4 ^ uVar5;
  uVar9 = param_1[2] ^ uVar5;
  param_1[0xe] = uVar10 ^ uVar5;
  param_1[10] = uVar9;
  uVar6 = param_1[3] ^ uVar3;
  param_1[0xb] = uVar6;
  param_1[0xd] = uVar8 ^ uVar3;
  param_1[0xf] = uVar7 ^ uVar3;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar1;
  param_1[0x12] = param_1[2] ^ uVar2;
  param_1[0x14] = uVar4 ^ uVar2;
  param_1[0x16] = uVar10 ^ uVar2;
  param_1[0x15] = uVar8 ^ uVar1;
  param_1[0x1b] = uVar6 ^ uVar1;
  param_1[0x13] = param_1[3] ^ uVar1;
  param_1[0x17] = uVar7 ^ uVar1;
  param_1[0x1d] = uVar8 ^ uVar3 ^ uVar1;
  param_1[0x18] = param_1[8] ^ uVar2;
  param_1[0x1a] = uVar9 ^ uVar2;
  param_1[0x19] = param_1[9] ^ uVar1;
  param_1[0x1f] = uVar7 ^ uVar3 ^ uVar1;
  param_1[0x1c] = uVar4 ^ uVar5 ^ uVar2;
  param_1[0x1e] = uVar10 ^ uVar5 ^ uVar2;
  return;
}



// ===== FUN_1801b4f30 @ 1801b4f30 (size 397)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b4f30(byte *param_1,byte *param_2,ulonglong param_3)

{
  code *pcVar1;
  byte bVar2;
  byte bVar4;
  byte bVar3;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  
  if (param_3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x28);
    *param_1 = *param_1 | 0x40;
    (*pcVar1)(param_1,param_1 + 0x10,*(undefined8 *)(param_1 + 0x30));
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
    bVar6 = param_1[0x11];
    bVar9 = (byte)param_3;
    bVar2 = (byte)(param_3 >> 8);
    if (param_3 < 0xff00) {
      uVar8 = 2;
      param_1[0x10] = bVar2 ^ param_1[0x10];
      bVar6 = bVar6 ^ bVar9;
    }
    else {
      param_1[0x10] = ~param_1[0x10];
      bVar3 = (byte)(param_3 >> 0x10);
      bVar4 = (byte)(param_3 >> 0x18);
      if (param_3 < 0x100000000) {
        bVar6 = bVar6 ^ 0xfe;
        uVar8 = 6;
        param_1[0x12] = bVar4 ^ param_1[0x12];
        param_1[0x13] = bVar3 ^ param_1[0x13];
        param_1[0x14] = bVar2 ^ param_1[0x14];
        param_1[0x15] = param_1[0x15] ^ bVar9;
      }
      else {
        bVar6 = ~bVar6;
        uVar8 = 10;
        param_1[0x12] = (byte)(param_3 >> 0x38) ^ param_1[0x12];
        param_1[0x13] = (byte)(param_3 >> 0x30) ^ param_1[0x13];
        param_1[0x14] = (byte)(param_3 >> 0x28) ^ param_1[0x14];
        param_1[0x15] = (byte)(param_3 >> 0x20) ^ param_1[0x15];
        param_1[0x16] = param_1[0x16] ^ bVar4;
        param_1[0x17] = param_1[0x17] ^ bVar3;
        param_1[0x18] = param_1[0x18] ^ bVar2;
        param_1[0x19] = param_1[0x19] ^ bVar9;
      }
    }
    param_1[0x11] = bVar6;
    do {
      pbVar5 = param_1 + uVar8 + 0x10;
      do {
        if (param_3 == 0) break;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        *pbVar5 = *pbVar5 ^ *param_2;
        param_2 = param_2 + 1;
        pbVar5 = pbVar5 + 1;
        param_3 = param_3 - 1;
      } while (uVar7 < 0x10);
      (*pcVar1)(param_1 + 0x10,param_1 + 0x10,*(undefined8 *)(param_1 + 0x30));
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
      uVar8 = 0;
    } while (param_3 != 0);
  }
  return;
}



// ===== FUN_1801b50c0 @ 1801b50c0 (size 479)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801b50c0(byte *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  code *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  byte local_58;
  uint local_54;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  bVar2 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_58 = bVar2;
  if ((bVar2 & 0x40) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar3);
  }
  uVar6 = bVar2 & 7;
  uVar7 = (ulonglong)uVar6;
  local_54 = 0xf - uVar6;
  *param_1 = (byte)uVar6;
  uVar4 = 0;
  if (local_54 < 0xf) {
    pbVar5 = param_1 + local_54;
    do {
      bVar2 = *pbVar5;
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      uVar4 = (uVar4 | bVar2) << 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar2 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar4 | bVar2) == param_4) {
    if (0xf < param_4) {
      uVar4 = param_4 >> 4;
      param_4 = param_4 + uVar4 * -0x10;
      do {
        (*pcVar1)(param_1,&local_50,uVar3);
        uVar7 = 8;
        do {
          uVar6 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar6;
          pbVar5 = param_1 + uVar7 + 8;
          *pbVar5 = *pbVar5 + 1;
          if (*pbVar5 != 0) break;
        } while (uVar6 != 0);
        uVar7 = *param_2;
        *param_3 = uVar7 ^ local_50;
        *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ uVar7 ^ local_50;
        uVar7 = param_2[1];
        param_3[1] = uVar7 ^ local_48;
        *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ uVar7 ^ local_48;
        (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar3);
        param_2 = param_2 + 2;
        param_3 = param_3 + 2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (param_4 != 0) {
      (*pcVar1)(param_1,&local_50,uVar3);
      if (param_4 != 0) {
        uVar4 = 0;
        do {
          uVar7 = (ulonglong)((int)uVar4 + 1);
          bVar2 = *(byte *)(uVar4 + (longlong)param_2) ^ *(byte *)((longlong)&local_50 + uVar4);
          *(byte *)(uVar4 + (longlong)param_3) = bVar2;
          param_1[uVar4 + 0x10] = param_1[uVar4 + 0x10] ^ bVar2;
          uVar4 = uVar7;
        } while (uVar7 < param_4);
      }
      (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar3);
    }
    if (local_54 < 0x10) {
      pbVar5 = param_1 + local_54;
      for (uVar4 = (ulonglong)(0x10 - local_54); uVar4 != 0; uVar4 = uVar4 - 1) {
        *pbVar5 = 0;
        pbVar5 = pbVar5 + 1;
      }
    }
    (*pcVar1)(param_1,&local_50,uVar3);
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_50;
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_48;
    *param_1 = local_58;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// ===== FUN_1801b52a0 @ 1801b52a0 (size 454)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1801b52a0(byte *param_1,longlong param_2,longlong param_3,ulonglong param_4,code *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_a8 [32];
  byte *local_88;
  byte *local_80;
  byte local_78;
  code *local_70;
  code *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x1801b52b7;
  local_50 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  bVar3 = *param_1;
  local_70 = *(code **)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_68 = param_5;
  local_78 = bVar3;
  if ((bVar3 & 0x40) == 0) {
    (*local_70)(param_1,param_1 + 0x10,uVar1);
  }
  uVar6 = 0;
  uVar7 = bVar3 & 7;
  uVar8 = (ulonglong)uVar7;
  uVar9 = 0xf - uVar7;
  *param_1 = (byte)uVar7;
  uVar4 = 0;
  if (uVar9 < 0xf) {
    pbVar5 = param_1 + uVar9;
    do {
      bVar3 = *pbVar5;
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      uVar4 = (uVar4 | bVar3) << 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  bVar3 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar4 | bVar3) != param_4) {
    return 0xffffffff;
  }
  uVar4 = param_4 >> 4;
  if (uVar4 != 0) {
    local_88 = param_1;
    local_80 = param_1 + 0x10;
    (*local_68)(param_2,param_3,uVar4,uVar1);
    param_2 = param_2 + uVar4 * 0x10;
    param_3 = param_3 + uVar4 * 0x10;
    param_4 = param_4 + uVar4 * -0x10;
    if (param_4 == 0) goto LAB_1801b5406;
    FUN_1801b5ba0(param_1,uVar4);
  }
  pcVar2 = local_70;
  if (param_4 != 0) {
    (*local_70)(param_1,&local_60,uVar1);
    if (param_4 != 0) {
      uVar4 = 0;
      do {
        uVar6 = uVar6 + 1;
        bVar3 = *(byte *)(uVar4 + param_2) ^ *(byte *)((longlong)&local_60 + uVar4);
        *(byte *)(uVar4 + param_3) = bVar3;
        param_1[uVar4 + 0x10] = param_1[uVar4 + 0x10] ^ bVar3;
        uVar4 = (ulonglong)uVar6;
      } while (uVar4 < param_4);
    }
    (*pcVar2)(param_1 + 0x10,param_1 + 0x10,uVar1);
  }
LAB_1801b5406:
  if (uVar9 < 0x10) {
    pbVar5 = param_1 + uVar9;
    for (uVar4 = (ulonglong)(0x10 - uVar9); uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
    }
  }
  (*local_70)(param_1,&local_60,uVar1);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_60;
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_58;
  *param_1 = local_78;
  return 0;
}



// ===== FUN_1801b5470 @ 1801b5470 (size 778)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801b5470(byte *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [32];
  byte local_58;
  uint local_54;
  ulonglong local_50 [3];
  
  local_50[2] = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  bVar2 = *param_1;
  pcVar3 = *(code **)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  local_58 = bVar2;
  if ((bVar2 & 0x40) == 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar6);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  }
  uVar12 = bVar2 & 7;
  uVar13 = (ulonglong)uVar12;
  uVar14 = 0;
  local_54 = 0xf - uVar12;
  *param_1 = (byte)uVar12;
  uVar9 = 0;
  if (local_54 < 0xf) {
    pbVar11 = param_1 + local_54;
    do {
      bVar2 = *pbVar11;
      *pbVar11 = 0;
      pbVar11 = pbVar11 + 1;
      uVar9 = (uVar9 | bVar2) << 8;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  bVar2 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar9 | bVar2) == param_4) {
    *(ulonglong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + ((param_4 + 0xf | 8) >> 3);
    if (*(ulonglong *)(param_1 + 0x20) < 0x2000000000000001) {
      if (0xf < param_4) {
        uVar9 = param_4 >> 4;
        param_4 = param_4 + uVar9 * -0x10;
        do {
          *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
          *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ param_2[1];
          (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar6);
          (*pcVar3)(param_1,local_50,uVar6);
          uVar13 = 8;
          do {
            uVar12 = (int)uVar13 - 1;
            uVar13 = (ulonglong)uVar12;
            pbVar11 = param_1 + uVar13 + 8;
            *pbVar11 = *pbVar11 + 1;
            if (*pbVar11 != 0) break;
          } while (uVar12 != 0);
          *param_3 = *param_2 ^ local_50[0];
          puVar1 = param_2 + 1;
          param_2 = param_2 + 2;
          param_3[1] = local_50[1] ^ *puVar1;
          param_3 = param_3 + 2;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar12 = local_54;
      if (param_4 != 0) {
        uVar10 = 0;
        uVar9 = 0;
        do {
          uVar10 = uVar10 + 1;
          param_1[uVar9 + 0x10] = param_1[uVar9 + 0x10] ^ *(byte *)(uVar9 + (longlong)param_2);
          uVar9 = (ulonglong)uVar10;
        } while (uVar9 < param_4);
        (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar6);
        (*pcVar3)(param_1,local_50,uVar6);
        uVar10 = 0;
        if (0x3f < param_4) {
          uVar5 = (int)param_4 - 1;
          if ((((ulonglong *)((longlong)local_50 + (ulonglong)uVar5) < param_3) ||
              ((ulonglong *)((ulonglong)uVar5 + (longlong)param_3) < local_50)) &&
             (((ulonglong *)((ulonglong)uVar5 + (longlong)param_2) < param_3 ||
              ((ulonglong *)((ulonglong)uVar5 + (longlong)param_3) < param_2)))) {
            uVar5 = 0x20;
            do {
              uVar9 = *(ulonglong *)((longlong)local_50 + uVar14 + 8);
              uVar7 = (ulonglong)(uVar5 - 0x10);
              uVar10 = uVar10 + 0x40;
              uVar13 = ((ulonglong *)(uVar14 + (longlong)param_2))[1];
              uVar8 = *(ulonglong *)((longlong)local_50 + uVar7);
              uVar4 = *(ulonglong *)((longlong)local_50 + uVar7 + 8);
              *(ulonglong *)(uVar14 + (longlong)param_3) =
                   *(ulonglong *)(uVar14 + (longlong)param_2) ^
                   *(ulonglong *)((longlong)local_50 + uVar14);
              ((ulonglong *)(uVar14 + (longlong)param_3))[1] = uVar13 ^ uVar9;
              uVar14 = (ulonglong)uVar10;
              uVar9 = ((ulonglong *)(uVar7 + (longlong)param_2))[1];
              *(ulonglong *)(uVar7 + (longlong)param_3) =
                   *(ulonglong *)(uVar7 + (longlong)param_2) ^ uVar8;
              ((ulonglong *)(uVar7 + (longlong)param_3))[1] = uVar9 ^ uVar4;
              uVar8 = (ulonglong)uVar5;
              uVar9 = *(ulonglong *)((longlong)local_50 + uVar8 + 8);
              uVar13 = ((ulonglong *)(uVar8 + (longlong)param_2))[1];
              *(ulonglong *)(uVar8 + (longlong)param_3) =
                   *(ulonglong *)(uVar8 + (longlong)param_2) ^
                   *(ulonglong *)((longlong)local_50 + uVar8);
              ((ulonglong *)(uVar8 + (longlong)param_3))[1] = uVar13 ^ uVar9;
              uVar8 = (ulonglong)(uVar5 + 0x10);
              uVar5 = uVar5 + 0x40;
              uVar9 = ((ulonglong *)(uVar8 + (longlong)param_2))[1];
              uVar13 = *(ulonglong *)((longlong)local_50 + uVar8 + 8);
              *(ulonglong *)(uVar8 + (longlong)param_3) =
                   *(ulonglong *)(uVar8 + (longlong)param_2) ^
                   *(ulonglong *)((longlong)local_50 + uVar8);
              ((ulonglong *)(uVar8 + (longlong)param_3))[1] = uVar9 ^ uVar13;
            } while (uVar14 < (param_4 & 0xffffffffffffffc0));
          }
        }
        for (; uVar9 = (ulonglong)uVar10, uVar9 < param_4; uVar10 = uVar10 + 1) {
          *(byte *)(uVar9 + (longlong)param_3) =
               *(byte *)(uVar9 + (longlong)param_2) ^ *(byte *)((longlong)local_50 + uVar9);
        }
      }
      if (uVar12 < 0x10) {
        pbVar11 = param_1 + uVar12;
        for (uVar9 = (ulonglong)(0x10 - uVar12); uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar11 = 0;
          pbVar11 = pbVar11 + 1;
        }
      }
      (*pcVar3)(param_1,local_50,uVar6);
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_50[0];
      *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_50[1];
      *param_1 = local_58;
      uVar6 = 0;
    }
    else {
      uVar6 = 0xfffffffe;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



// ===== FUN_1801b5780 @ 1801b5780 (size 730)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1801b5780(byte *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4,code *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  code *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [32];
  byte *local_88;
  byte *local_80;
  byte local_78;
  code *local_70;
  code *local_68;
  ulonglong local_60 [4];
  
  local_60[3] = 0x1801b5797;
  local_60[2] = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  bVar1 = *param_1;
  local_70 = *(code **)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_68 = param_5;
  local_78 = bVar1;
  if ((bVar1 & 0x40) == 0) {
    (*local_70)(param_1,param_1 + 0x10,uVar2);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  }
  uVar13 = 0;
  uVar10 = bVar1 & 7;
  uVar11 = (ulonglong)uVar10;
  uVar12 = 0xf - uVar10;
  *param_1 = (byte)uVar10;
  uVar7 = 0;
  if (uVar12 < 0xf) {
    pbVar8 = param_1 + uVar12;
    do {
      bVar1 = *pbVar8;
      *pbVar8 = 0;
      pbVar8 = pbVar8 + 1;
      uVar7 = (uVar7 | bVar1) << 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  bVar1 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar7 | bVar1) != param_4) {
    return 0xffffffff;
  }
  *(ulonglong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + ((param_4 + 0xf | 8) >> 3);
  if (0x2000000000000000 < *(ulonglong *)(param_1 + 0x20)) {
    return 0xfffffffe;
  }
  uVar7 = param_4 >> 4;
  if (uVar7 == 0) {
LAB_1801b58c6:
    pcVar9 = local_70;
    if (param_4 != 0) {
      uVar10 = 0;
      uVar7 = 0;
      do {
        uVar10 = uVar10 + 1;
        param_1[uVar7 + 0x10] = param_1[uVar7 + 0x10] ^ *(byte *)(uVar7 + (longlong)param_2);
        uVar7 = (ulonglong)uVar10;
      } while (uVar7 < param_4);
      (*local_70)(param_1 + 0x10,param_1 + 0x10,uVar2);
      (*pcVar9)(param_1,local_60,uVar2);
      uVar10 = 0;
      if (0x3f < param_4) {
        uVar4 = (int)param_4 - 1;
        if ((((longlong)local_60 + (ulonglong)uVar4 < param_3) ||
            ((ulonglong *)(uVar4 + param_3) < local_60)) &&
           (((ulonglong)uVar4 + (longlong)param_2 < param_3 ||
            ((ulonglong *)(uVar4 + param_3) < param_2)))) {
          uVar4 = 0x20;
          do {
            uVar7 = *(ulonglong *)((longlong)local_60 + uVar13 + 8);
            uVar5 = (ulonglong)(uVar4 - 0x10);
            uVar10 = uVar10 + 0x40;
            uVar11 = ((ulonglong *)(uVar13 + (longlong)param_2))[1];
            uVar6 = *(ulonglong *)((longlong)local_60 + uVar5);
            uVar3 = *(ulonglong *)((longlong)local_60 + uVar5 + 8);
            *(ulonglong *)(uVar13 + param_3) =
                 *(ulonglong *)(uVar13 + (longlong)param_2) ^
                 *(ulonglong *)((longlong)local_60 + uVar13);
            ((ulonglong *)(uVar13 + param_3))[1] = uVar11 ^ uVar7;
            uVar13 = (ulonglong)uVar10;
            uVar7 = ((ulonglong *)(uVar5 + (longlong)param_2))[1];
            *(ulonglong *)(uVar5 + param_3) = *(ulonglong *)(uVar5 + (longlong)param_2) ^ uVar6;
            ((ulonglong *)(uVar5 + param_3))[1] = uVar7 ^ uVar3;
            uVar6 = (ulonglong)uVar4;
            uVar7 = *(ulonglong *)((longlong)local_60 + uVar6 + 8);
            uVar11 = ((ulonglong *)(uVar6 + (longlong)param_2))[1];
            *(ulonglong *)(uVar6 + param_3) =
                 *(ulonglong *)(uVar6 + (longlong)param_2) ^
                 *(ulonglong *)((longlong)local_60 + uVar6);
            ((ulonglong *)(uVar6 + param_3))[1] = uVar11 ^ uVar7;
            uVar6 = (ulonglong)(uVar4 + 0x10);
            uVar4 = uVar4 + 0x40;
            uVar7 = ((ulonglong *)(uVar6 + (longlong)param_2))[1];
            uVar11 = *(ulonglong *)((longlong)local_60 + uVar6 + 8);
            *(ulonglong *)(uVar6 + param_3) =
                 *(ulonglong *)(uVar6 + (longlong)param_2) ^
                 *(ulonglong *)((longlong)local_60 + uVar6);
            ((ulonglong *)(uVar6 + param_3))[1] = uVar7 ^ uVar11;
          } while (uVar13 < (param_4 & 0xffffffffffffffc0));
        }
      }
      for (; uVar7 = (ulonglong)uVar10, uVar7 < param_4; uVar10 = uVar10 + 1) {
        *(byte *)(uVar7 + param_3) =
             *(byte *)(uVar7 + (longlong)param_2) ^ *(byte *)((longlong)local_60 + uVar7);
      }
      goto LAB_1801b59fc;
    }
  }
  else {
    local_80 = param_1 + 0x10;
    local_88 = param_1;
    (*local_68)(param_2,param_3,uVar7,uVar2);
    param_2 = param_2 + uVar7 * 2;
    param_3 = param_3 + uVar7 * 0x10;
    param_4 = param_4 + uVar7 * -0x10;
    if (param_4 != 0) {
      FUN_1801b5ba0(param_1,uVar7);
      goto LAB_1801b58c6;
    }
  }
  pcVar9 = local_70;
LAB_1801b59fc:
  if (uVar12 < 0x10) {
    pbVar8 = param_1 + uVar12;
    for (uVar7 = (ulonglong)(0x10 - uVar12); uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar8 = 0;
      pbVar8 = pbVar8 + 1;
    }
  }
  (*pcVar9)(param_1,local_60,uVar2);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_60[0];
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_60[1];
  *param_1 = local_78;
  return 0;
}



// ===== FUN_1801b5aa0 @ 1801b5aa0 (size 166)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b5aa0(byte *param_1,void *param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong _Size;
  uint uVar1;
  
  uVar1 = *param_1 & 7;
  _Size = (ulonglong)(0xe - uVar1);
  if (param_3 < _Size) {
    return 0xffffffff;
  }
  if (uVar1 < 3) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    param_1[8] = (byte)((ulonglong)param_4 >> 0x38);
    param_1[9] = (byte)((ulonglong)param_4 >> 0x30);
    param_1[10] = (byte)((ulonglong)param_4 >> 0x28);
    param_1[0xb] = (byte)((ulonglong)param_4 >> 0x20);
  }
  param_1[0xf] = (byte)param_4;
  *param_1 = *param_1 & 0xbf;
  param_1[0xc] = (byte)((ulonglong)param_4 >> 0x18);
  param_1[0xd] = (byte)((ulonglong)param_4 >> 0x10);
  param_1[0xe] = (byte)((ulonglong)param_4 >> 8);
  memcpy(param_1 + 1,param_2,_Size);
  return 0;
}



// ===== FUN_1801b5b50 @ 1801b5b50 (size 71)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801b5b50(byte *param_1,void *param_2,ulonglong param_3)

{
  ulonglong _Size;
  
  _Size = (ulonglong)((*param_1 >> 3 & 7) * 2 + 2);
  if (param_3 == _Size) {
    memcpy(param_2,param_1 + 0x10,_Size);
    return _Size;
  }
  return 0;
}



// ===== FUN_1801b5ba0 @ 1801b5ba0 (size 96)

void FUN_1801b5ba0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar3 = 0;
  puVar4 = (undefined1 *)(param_1 + 0x10);
  do {
    pbVar1 = puVar4 + -1;
    puVar4 = puVar4 + -1;
    uVar2 = uVar3 + *pbVar1 + (param_2 & 0xff);
    *puVar4 = (char)uVar2;
    uVar3 = uVar2 >> 8;
    uVar5 = param_2 >> 8;
    if (puVar4 + (-8 - param_1) == (undefined1 *)0x0) {
      return;
    }
    bVar6 = 0xff < param_2;
    param_2 = uVar5;
  } while ((bVar6) || (0xff < uVar2));
  return;
}



// ===== FUN_1801b5c00 @ 1801b5c00 (size 605)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1801b5c00(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
             ulonglong param_5,int param_6)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1801b5c14;
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  if (param_5 < 0x10) {
    uVar3 = 0xffffffff;
  }
  else {
    local_58 = *param_2;
    uStack_50 = param_2[1];
    (*(code *)param_1[3])(&local_58,&local_58,param_1[1]);
    if ((param_6 == 0) && ((param_5 & 0xf) != 0)) {
      param_5 = param_5 - 0x10;
    }
    while (0xf < param_5) {
      local_68 = *param_3 ^ local_58;
      uStack_60 = param_3[1] ^ uStack_50;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      param_3 = param_3 + 2;
      *param_4 = local_68 ^ local_58;
      local_68 = local_68 ^ local_58;
      param_4[1] = uStack_60 ^ uStack_50;
      param_4 = param_4 + 2;
      uStack_60 = uStack_60 ^ uStack_50;
      param_5 = param_5 - 0x10;
      if (param_5 == 0) goto LAB_1801b5e44;
      uVar5 = local_58 >> 0x3f;
      local_58 = (ulonglong)(uStack_50._4_4_ >> 0x1f & 0x87) ^ local_58 * 2;
      uStack_50 = uStack_50 * 2 | uVar5;
    }
    if (param_6 == 0) {
      local_48 = (ulonglong)((uint)((longlong)uStack_50 >> 0x3f) & 0x87) ^ local_58 * 2;
      uStack_40 = uStack_50 * 2 | local_58 >> 0x3f;
      uStack_60 = param_3[1] ^ uStack_40;
      local_68 = local_48 ^ *param_3;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      uVar2 = 0;
      local_68 = local_48 ^ local_68;
      uStack_60 = uStack_40 ^ uStack_60;
      if (param_5 != 0) {
        uVar5 = 0;
        do {
          uVar4 = uVar2 + 0x10;
          uVar2 = uVar2 + 1;
          uVar1 = auStack_88[uVar5 + 0x20];
          auStack_88[uVar5 + 0x20] = *(undefined1 *)((ulonglong)uVar4 + (longlong)param_3);
          uVar5 = (ulonglong)uVar2;
          *(undefined1 *)((ulonglong)uVar4 + (longlong)param_4) = uVar1;
        } while (uVar5 < param_5);
      }
      local_68 = local_58 ^ local_68;
      uStack_60 = uStack_50 ^ uStack_60;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      *param_4 = local_58 ^ local_68;
      param_4[1] = uStack_50 ^ uStack_60;
    }
    else {
      uVar2 = 0;
      if (param_5 != 0) {
        uVar5 = 0;
        do {
          uVar1 = *(undefined1 *)(uVar5 + (longlong)param_3);
          uVar2 = uVar2 + 1;
          *(undefined1 *)(uVar5 + (longlong)param_4) = auStack_88[uVar5 + 0x20];
          auStack_88[uVar5 + 0x20] = uVar1;
          uVar5 = (ulonglong)uVar2;
        } while (uVar5 < param_5);
      }
      local_68 = local_58 ^ local_68;
      uStack_60 = uStack_50 ^ uStack_60;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      param_4[-2] = local_58 ^ local_68;
      param_4[-1] = uStack_50 ^ uStack_60;
    }
LAB_1801b5e44:
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_1801b5e60 @ 1801b5e60 (size 155)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801b5e60(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  local_30 = param_6;
  local_38 = param_5;
  lVar2 = FUN_1801b63f0(param_1,local_28);
  if (lVar2 != 0) {
    puVar3 = &DAT_1803128c8;
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = param_2;
    }
    iVar1 = FUN_1800012a0(local_28,puVar3,8);
    if (iVar1 == 0) {
      return lVar2;
    }
    FUN_180001240(param_3,lVar2);
  }
  return 0;
}



// ===== FUN_1801b5f00 @ 1801b5f00 (size 346)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801b5f00(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,
                       undefined8 param_4,ulonglong param_5,code *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  if (((param_5 & 7) != 0) || (0x7fffffef < param_5 - 0x10)) {
    return 0;
  }
  if (param_5 == 0x10) {
    (*param_6)(param_4,&local_40,param_1);
    local_48 = local_40;
    lVar5 = 8;
    *param_3 = local_38;
    FUN_180001240(&local_40,0x10);
  }
  else {
    local_50 = param_6;
    local_58 = param_5;
    lVar5 = param_5 - 8;
    lVar2 = FUN_1801b63f0(param_1,&local_48);
    if (lVar5 != lVar2) goto LAB_1801b6047;
  }
  puVar3 = &DAT_1803128d0;
  if (param_2 != (undefined4 *)0x0) {
    puVar3 = param_2;
  }
  iVar1 = FUN_1800012a0(&local_48,puVar3,4);
  if (iVar1 == 0) {
    uVar4 = (ulonglong)
            CONCAT31(CONCAT21(CONCAT11(local_48._4_1_,local_48._5_1_),local_48._6_1_),local_48._7_1_
                    );
    if ((((param_5 & 0xfffffffffffffff8) - 0x10 < uVar4) &&
        (uVar4 <= (param_5 & 0xfffffffffffffff8) - 8)) &&
       (iVar1 = FUN_1800012a0((longlong)param_3 + uVar4,&DAT_1803c9308,lVar5 - uVar4), iVar1 == 0))
    {
      return uVar4;
    }
  }
LAB_1801b6047:
  FUN_180001240(param_3,param_5);
  return 0;
}



// ===== FUN_1801b6060 @ 1801b6060 (size 361)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801b6060(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,void *param_4,
                      ulonglong param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  if (((param_5 & 7) == 0) && (param_5 - 0x10 < 0x7ffffff1)) {
    uVar4 = 1;
    local_58 = param_3;
    memmove(param_3 + 1,param_4,param_5);
    lVar6 = 6;
    puVar3 = &DAT_1803128c8;
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = param_2;
    }
    local_50 = *puVar3;
    do {
      if (param_5 != 0) {
        lVar5 = (param_5 - 1 >> 3) + 1;
        puVar3 = param_3 + 1;
        do {
          local_48 = *puVar3;
          (*param_6)(&local_50,&local_50,param_1);
          uVar2 = local_50;
          bVar1 = local_50._7_1_ ^ (byte)uVar4;
          local_50 = CONCAT17(bVar1,(undefined7)local_50);
          if (0xff < uVar4) {
            local_50._6_1_ = SUB81(uVar2,6);
            local_50._5_1_ = SUB81(uVar2,5);
            local_50._4_1_ = SUB81(uVar2,4);
            local_50._4_1_ = local_50._4_1_ ^ (byte)(uVar4 >> 0x18);
            local_50._0_4_ = (undefined4)uVar2;
            local_50 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_50._6_1_ ^ (byte)(uVar4 >> 8)),
                                         local_50._5_1_ ^ (byte)(uVar4 >> 0x10)),
                                CONCAT14(local_50._4_1_,(undefined4)local_50));
          }
          uVar4 = uVar4 + 1;
          *puVar3 = local_48;
          puVar3 = puVar3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *local_58 = local_50;
    lVar6 = param_5 + 8;
  }
  else {
    lVar6 = 0;
  }
  return lVar6;
}



// ===== FUN_1801b61d0 @ 1801b61d0 (size 532)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801b61d0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,void *param_4,
                      size_t param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong _Size;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  _Size = param_5 + 7 & 0xfffffffffffffff8;
  if (param_5 - 1 < 0x7fffffff) {
    local_70 = DAT_1803128d0;
    if (param_2 != (undefined4 *)0x0) {
      local_70 = *param_2;
    }
    uStack_69 = (undefined1)param_5;
    uStack_6c = (undefined1)(param_5 >> 0x18);
    uStack_6b = (undefined1)(param_5 >> 0x10);
    uStack_6a = (undefined1)(param_5 >> 8);
    local_78 = param_3;
    if (_Size == 8) {
      memmove(param_3 + 1,param_4,param_5);
      *param_3 = CONCAT17(uStack_69,
                          CONCAT16(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,local_70))));
      memset((void *)((longlong)(param_5 + (longlong)param_3) + 8),0,_Size - param_5);
      (*param_6)(param_3,param_3,param_1);
      lVar3 = 0x10;
    }
    else {
      memmove(param_3,param_4,param_5);
      memset((void *)(param_5 + (longlong)param_3),0,_Size - param_5);
      if (_Size - 0x10 < 0x7ffffff1) {
        uVar4 = 1;
        memmove(param_3 + 1,param_3,_Size);
        local_68 = CONCAT17(uStack_69,
                            CONCAT16(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,local_70))));
        lVar3 = 6;
        do {
          if (_Size != 0) {
            lVar5 = (_Size - 1 >> 3) + 1;
            puVar6 = param_3 + 1;
            do {
              local_60 = *puVar6;
              (*param_6)(&local_68,&local_68,param_1);
              uVar2 = local_68;
              bVar1 = local_68._7_1_ ^ (byte)uVar4;
              local_68 = CONCAT17(bVar1,(undefined7)local_68);
              if (0xff < uVar4) {
                local_68._6_1_ = SUB81(uVar2,6);
                local_68._5_1_ = SUB81(uVar2,5);
                local_68._4_1_ = SUB81(uVar2,4);
                local_68._4_1_ = local_68._4_1_ ^ (byte)(uVar4 >> 0x18);
                local_68._0_4_ = (undefined4)uVar2;
                local_68 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_68._6_1_ ^ (byte)(uVar4 >> 8)),
                                             local_68._5_1_ ^ (byte)(uVar4 >> 0x10)),
                                    CONCAT14(local_68._4_1_,(undefined4)local_68));
              }
              uVar4 = uVar4 + 1;
              *puVar6 = local_60;
              puVar6 = puVar6 + 1;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        *local_78 = local_68;
        lVar3 = (longlong)((int)_Size + 8);
      }
      else {
        lVar3 = 0;
      }
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// ===== FUN_1801b63f0 @ 1801b63f0 (size 357)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801b63f0(undefined8 param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,
                       longlong param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong _Size;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  _Size = param_5 - 8;
  if (((_Size & 7) == 0) && (param_5 - 0x18U < 0x7ffffff1)) {
    local_60 = *param_4;
    uVar3 = (_Size >> 3) * 6;
    local_68 = param_2;
    memmove(param_3,param_4 + 1,_Size);
    lVar6 = 6;
    do {
      puVar5 = (undefined8 *)((longlong)param_3 + param_5 + -0x10);
      if (_Size != 0) {
        lVar4 = (param_5 - 9U >> 3) + 1;
        do {
          uVar2 = local_60;
          bVar1 = local_60._7_1_ ^ (byte)uVar3;
          local_60 = CONCAT17(bVar1,(undefined7)local_60);
          if (0xff < uVar3) {
            local_60._6_1_ = SUB81(uVar2,6);
            local_60._5_1_ = SUB81(uVar2,5);
            local_60._4_1_ = SUB81(uVar2,4);
            local_60._4_1_ = local_60._4_1_ ^ (byte)(uVar3 >> 0x18);
            local_60._0_4_ = (undefined4)uVar2;
            local_60 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_60._6_1_ ^ (byte)(uVar3 >> 8)),
                                         local_60._5_1_ ^ (byte)(uVar3 >> 0x10)),
                                CONCAT14(local_60._4_1_,(undefined4)local_60));
          }
          local_58 = *puVar5;
          (*param_6)(&local_60,&local_60,param_1);
          uVar3 = uVar3 - 1;
          *puVar5 = local_58;
          puVar5 = puVar5 + -1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *local_68 = local_60;
  }
  else {
    _Size = 0;
  }
  return _Size;
}



// ===== FUN_1801b6560 @ 1801b6560 (size 393)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801b6560(undefined8 *param_1,uint *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1801b6572;
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_68;
  uVar1 = param_1[0xc];
  uVar7 = (param_3 >> 4) + uVar1;
  while( true ) {
    uVar1 = uVar1 + 1;
    if (uVar7 < uVar1) {
      uVar8 = (uint)param_3 & 0xf;
      if ((param_3 & 0xf) != 0) {
        param_1[0xe] = param_1[0xe] ^ param_1[7];
        param_1[0xf] = param_1[0xf] ^ param_1[8];
        uVar1 = param_1[0xf];
        uVar4 = param_1[0xe];
        local_48 = 0;
        uStack_40 = 0;
        memcpy(&local_48,param_2,(ulonglong)uVar8);
        uVar2 = param_1[2];
        auStack_68[(ulonglong)uVar8 + 0x20] = 0x80;
        local_48 = local_48 ^ uVar4;
        uStack_40 = uStack_40 ^ uVar1;
        (*(code *)*param_1)(&local_48,&local_48,uVar2);
        param_1[0x10] = param_1[0x10] ^ local_48;
        param_1[0x11] = param_1[0x11] ^ uStack_40;
      }
      param_1[0xc] = uVar7;
      return 1;
    }
    iVar6 = 0;
    for (uVar4 = uVar1; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1) {
      iVar6 = iVar6 + 1;
    }
    puVar5 = (ulonglong *)FUN_1801b7450(param_1,iVar6);
    if (puVar5 == (ulonglong *)0x0) break;
    param_1[0xe] = param_1[0xe] ^ *puVar5;
    param_1[0xf] = param_1[0xf] ^ puVar5[1];
    uVar8 = *param_2;
    puVar3 = param_2 + 1;
    puVar5 = (ulonglong *)(param_2 + 2);
    param_2 = param_2 + 4;
    uStack_40 = *puVar5 ^ param_1[0xf];
    local_48 = CONCAT44(*puVar3 ^ *(uint *)((longlong)param_1 + 0x74),
                        uVar8 ^ *(uint *)(param_1 + 0xe));
    (*(code *)*param_1)(&local_48,&local_48,param_1[2]);
    param_1[0x10] = param_1[0x10] ^ local_48;
    param_1[0x11] = param_1[0x11] ^ uStack_40;
  }
  return 0;
}



// ===== FUN_1801b66f0 @ 1801b66f0 (size 71)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b66f0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_180195f20(*(undefined8 *)(param_1 + 0x58),*(longlong *)(param_1 + 0x30) << 4,
                  "crypto\\modes\\ocb128.c",0x22d);
    FUN_180001240(param_1,0xb0);
  }
  return;
}



// ===== FUN_1801b6740 @ 1801b6740 (size 271)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b6740(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined8 uVar5;
  
  uVar5 = 0x1801b6750;
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  uVar4 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar4;
  uVar4 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  uVar4 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x13);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x13) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0x15);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0x15) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
  if (param_3 != 0) {
    param_1[2] = param_3;
  }
  if (param_4 != 0) {
    param_1[3] = param_4;
  }
  if (param_2[0xb] != 0) {
    _Dst = (void *)FUN_180195dc0(param_2[6] << 4,"crypto\\modes\\ocb128.c",0xcd);
    param_1[0xb] = _Dst;
    if (_Dst == (void *)0x0) {
      FUN_1801a70c0(0xf,0x79,0x41,"crypto\\modes\\ocb128.c",0xce,uVar5);
      return 0;
    }
    memcpy(_Dst,(void *)param_2[0xb],(param_2[5] + 1) * 0x10);
  }
  return 1;
}



// ===== FUN_1801b6850 @ 1801b6850 (size 562)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801b6850(undefined8 *param_1,uint *param_2,undefined4 *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801b6865;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  uVar2 = param_1[0xd];
  uVar7 = param_4 >> 4;
  uVar1 = uVar2 + uVar7;
  if ((uVar7 == 0) || (param_1[4] == 0)) {
    while (uVar2 = uVar2 + 1, uVar2 <= uVar1) {
      iVar5 = 0;
      for (uVar7 = uVar2; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1) {
        iVar5 = iVar5 + 1;
      }
      puVar4 = (ulonglong *)FUN_1801b7450(param_1,iVar5);
      if (puVar4 == (ulonglong *)0x0) {
        return 0;
      }
      param_1[0x12] = param_1[0x12] ^ *puVar4;
      param_1[0x13] = param_1[0x13] ^ puVar4[1];
      uVar9 = *param_2;
      puVar3 = param_2 + 1;
      puVar4 = (ulonglong *)(param_2 + 2);
      param_2 = param_2 + 4;
      uStack_50 = *puVar4 ^ param_1[0x13];
      local_58 = CONCAT44(*puVar3 ^ *(uint *)((longlong)param_1 + 0x94),
                          uVar9 ^ *(uint *)(param_1 + 0x12));
      (*(code *)param_1[1])(&local_58,&local_58,param_1[3]);
      uVar6 = local_58 ^ param_1[0x12];
      uVar7 = uStack_50 ^ param_1[0x13];
      param_1[0x14] = param_1[0x14] ^ uVar6;
      param_1[0x15] = param_1[0x15] ^ uVar7;
      local_58._0_4_ = (undefined4)uVar6;
      local_58._4_4_ = (undefined4)(uVar6 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar7;
      uStack_50._4_4_ = (undefined4)(uVar7 >> 0x20);
      *param_3 = (undefined4)local_58;
      param_3[1] = local_58._4_4_;
      param_3[2] = (undefined4)uStack_50;
      param_3[3] = uStack_50._4_4_;
      param_3 = param_3 + 4;
      local_58 = uVar6;
      uStack_50 = uVar7;
    }
  }
  else {
    lVar8 = 0;
    uVar2 = uVar1;
    while (uVar2 = uVar2 >> 1, uVar2 != 0) {
      lVar8 = lVar8 + 1;
    }
    lVar8 = FUN_1801b7450(param_1,lVar8);
    if (lVar8 == 0) {
      return 0;
    }
    local_60 = param_1 + 0x14;
    local_70 = param_1 + 0x12;
    local_78 = param_1[0xd] + 1;
    local_68 = param_1[0xb];
    (*(code *)param_1[4])(param_2,param_3,uVar7,param_1[3]);
  }
  uVar9 = (uint)param_4 & 0xf;
  if ((param_4 & 0xf) != 0) {
    puVar4 = param_1 + 0x12;
    *puVar4 = *puVar4 ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(puVar4,&local_58,param_1[2]);
    FUN_1801b7250(param_2,&local_58,uVar9,param_3);
    local_58 = 0;
    uStack_50 = 0;
    memcpy(&local_58,param_3,(ulonglong)uVar9);
    *(undefined1 *)((longlong)&local_58 + (ulonglong)uVar9) = 0x80;
    param_1[0x14] = param_1[0x14] ^ local_58;
    param_1[0x15] = param_1[0x15] ^ uStack_50;
  }
  param_1[0xd] = uVar1;
  return 1;
}



// ===== FUN_1801b6a90 @ 1801b6a90 (size 561)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1801b6a90(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801b6aa5;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  uVar2 = param_1[0xd];
  uVar5 = param_4 >> 4;
  uVar1 = uVar2 + uVar5;
  if ((uVar5 == 0) || (param_1[4] == 0)) {
    while (uVar2 = uVar2 + 1, uVar2 <= uVar1) {
      iVar4 = 0;
      for (uVar5 = uVar2; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1) {
        iVar4 = iVar4 + 1;
      }
      puVar3 = (ulonglong *)FUN_1801b7450(param_1,iVar4);
      if (puVar3 == (ulonglong *)0x0) {
        return 0;
      }
      param_1[0x12] = param_1[0x12] ^ *puVar3;
      param_1[0x13] = param_1[0x13] ^ puVar3[1];
      local_58 = *param_2;
      uStack_50 = param_2[1];
      param_2 = param_2 + 2;
      param_1[0x14] = param_1[0x14] ^ local_58;
      param_1[0x15] = param_1[0x15] ^ uStack_50;
      local_58 = local_58 ^ param_1[0x12];
      uStack_50 = uStack_50 ^ param_1[0x13];
      (*(code *)*param_1)(&local_58,&local_58,param_1[2]);
      local_58 = local_58 ^ param_1[0x12];
      uStack_50 = uStack_50 ^ param_1[0x13];
      *param_3 = local_58;
      param_3[1] = uStack_50;
      param_3 = param_3 + 2;
    }
  }
  else {
    lVar6 = 0;
    uVar2 = uVar1;
    while (uVar2 = uVar2 >> 1, uVar2 != 0) {
      lVar6 = lVar6 + 1;
    }
    lVar6 = FUN_1801b7450(param_1,lVar6);
    if (lVar6 == 0) {
      return 0;
    }
    local_60 = param_1 + 0x14;
    local_70 = param_1 + 0x12;
    local_78 = param_1[0xd] + 1;
    local_68 = param_1[0xb];
    (*(code *)param_1[4])(param_2,param_3,uVar5,param_1[2]);
  }
  uVar7 = (uint)param_4 & 0xf;
  if ((param_4 & 0xf) != 0) {
    puVar3 = param_1 + 0x12;
    *puVar3 = *puVar3 ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(puVar3,&local_58,param_1[2]);
    FUN_1801b7250(param_2,&local_58,uVar7,param_3);
    local_58 = 0;
    uStack_50 = 0;
    memcpy(&local_58,param_2,(ulonglong)uVar7);
    *(undefined1 *)((longlong)&local_58 + (ulonglong)uVar7) = 0x80;
    param_1[0x14] = param_1[0x14] ^ local_58;
    param_1[0x15] = param_1[0x15] ^ uStack_50;
  }
  param_1[0xd] = uVar1;
  return 1;
}



// ===== FUN_1801b6cf0 @ 1801b6cf0 (size 435)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801b6cf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801b6d0b;
  memset(param_1,0,0xb0);
  param_1[6] = 5;
  lVar5 = FUN_180195dc0(0x50,"crypto\\modes\\ocb128.c");
  param_1[0xb] = lVar5;
  if (lVar5 != 0) {
    param_1[1] = param_5;
    param_1[4] = param_6;
    *param_1 = param_4;
    param_1[2] = param_2;
    param_1[3] = param_3;
    (*param_4)(param_1 + 7,param_1 + 7,param_2);
    cVar2 = *(char *)(param_1 + 7);
    FUN_1801b70a0(param_1 + 7,1,param_1 + 9);
    *(byte *)((longlong)param_1 + 0x57) = *(byte *)((longlong)param_1 + 0x57) ^ cVar2 >> 7 & 0x87U;
    cVar2 = *(char *)(param_1 + 9);
    lVar3 = param_1[0xb];
    FUN_1801b70a0(param_1 + 9,1,lVar3);
    pbVar1 = (byte *)(lVar3 + 0xf);
    *pbVar1 = *pbVar1 ^ cVar2 >> 7 & 0x87U;
    pcVar4 = (char *)param_1[0xb];
    cVar2 = *pcVar4;
    FUN_1801b70a0(pcVar4,1,pcVar4 + 0x10);
    pcVar4[0x1f] = pcVar4[0x1f] ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x10);
    FUN_1801b70a0(lVar3 + 0x10,1,lVar3 + 0x20);
    *(byte *)(lVar3 + 0x2f) = *(byte *)(lVar3 + 0x2f) ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x20);
    FUN_1801b70a0(lVar3 + 0x20,1,lVar3 + 0x30);
    *(byte *)(lVar3 + 0x3f) = *(byte *)(lVar3 + 0x3f) ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x30);
    FUN_1801b70a0(lVar3 + 0x30,1,lVar3 + 0x40);
    *(byte *)(lVar3 + 0x4f) = *(byte *)(lVar3 + 0x4f) ^ cVar2 >> 7 & 0x87U;
    param_1[5] = 4;
  }
  else {
    FUN_1801a70c0(0xf,0x7a,0x41,"crypto\\modes\\ocb128.c",0x9f,uVar6);
  }
  return lVar5 != 0;
}



// ===== FUN_1801b6eb0 @ 1801b6eb0 (size 463)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801b6eb0(undefined8 *param_1,void *param_2,size_t param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  byte local_78;
  undefined8 uStack_77;
  undefined4 uStack_6f;
  undefined2 uStack_6b;
  byte abStack_69 [17];
  byte local_58 [4];
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  undefined1 local_48 [15];
  byte bStack_39;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1801b6ec4;
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  if ((param_3 - 1 < 0xf) && (param_4 - 1U < 0x10)) {
    memset(param_1 + 0xc,0,0x50);
    local_78 = (char)param_4 << 4;
    uStack_77 = 0;
    uStack_6f = 0;
    uStack_6b = 0;
    abStack_69[0] = 0;
    memcpy(abStack_69 + (1 - param_3),param_2,param_3);
    uVar1 = param_1[2];
    abStack_69[-param_3] = abStack_69[-param_3] | 1;
    local_48._1_8_ = uStack_77;
    local_48[0] = local_78;
    local_48._9_4_ = uStack_6f;
    local_48._13_2_ = uStack_6b;
    bStack_39 = abStack_69[0] & 0xc0;
    (*(code *)*param_1)(local_48,abStack_69 + 1,uVar1);
    local_58[0] = abStack_69[1] ^ abStack_69[2];
    local_58[1] = abStack_69[3] ^ abStack_69[2];
    local_58[2] = abStack_69[4] ^ abStack_69[3];
    local_58[3] = abStack_69[5] ^ abStack_69[4];
    local_54 = abStack_69[6] ^ abStack_69[5];
    local_53 = abStack_69[7] ^ abStack_69[6];
    local_52 = abStack_69[8] ^ abStack_69[7];
    local_51 = abStack_69[9] ^ abStack_69[8];
    uVar3 = abStack_69[0] & 7;
    uVar4 = (ulonglong)((abStack_69[0] & 0x3f) >> 3);
    FUN_1801b70a0(abStack_69 + uVar4 + 1,uVar3,param_1 + 0x12);
    uVar1 = 1;
    cVar2 = (char)uVar3;
    *(byte *)((longlong)param_1 + 0x9f) =
         *(byte *)((longlong)param_1 + 0x9f) |
         (-1 << (8U - cVar2 & 0x1f) & local_58[uVar4]) >> (8U - cVar2 & 0x1f);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_1801b70a0 @ 1801b70a0 (size 422)

void FUN_1801b70a0(char *param_1,byte param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = param_1[0xf];
  param_3[0xf] = bVar1 << (param_2 & 0x1f);
  bVar3 = 8 - param_2;
  bVar2 = param_1[0xe];
  param_3[0xe] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[0xd];
  param_3[0xd] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[0xc];
  param_3[0xc] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[0xb];
  param_3[0xb] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[10];
  param_3[10] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[9];
  param_3[9] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[8];
  param_3[8] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[7];
  param_3[7] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[6];
  param_3[6] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[5];
  param_3[5] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[4];
  param_3[4] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[3];
  param_3[3] = bVar1 << (param_2 & 0x1f) | bVar2 >> (bVar3 & 0x1f);
  bVar2 = param_1[2];
  param_3[2] = bVar2 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  bVar1 = param_1[1];
  param_3[1] = bVar2 >> (bVar3 & 0x1f) | bVar1 << (param_2 & 0x1f);
  *param_3 = *param_1 << (param_2 & 0x1f) | bVar1 >> (bVar3 & 0x1f);
  return;
}



// ===== FUN_1801b7250 @ 1801b7250 (size 282)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b7250(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  longlong lVar15;
  
  if (param_3 != 0) {
    uVar12 = 0;
    if (((0x3f < param_3) &&
        ((puVar14 = (ulonglong *)((param_4 - 1) + param_3),
         (longlong)param_2 + (param_3 - 1) < param_4 || (puVar14 < param_2)))) &&
       (((param_3 - 1) + (longlong)param_1 < param_4 || (puVar14 < param_1)))) {
      lVar15 = (longlong)param_1 - (longlong)param_2;
      lVar13 = param_4 - (longlong)param_2;
      puVar14 = param_2;
      do {
        uVar3 = puVar14[1];
        uVar12 = uVar12 + 0x40;
        uVar4 = ((ulonglong *)(lVar15 + (longlong)puVar14))[1];
        puVar1 = (ulonglong *)(lVar15 + 0x10 + (longlong)puVar14);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        puVar1 = puVar14 + 8;
        uVar7 = puVar14[2];
        uVar8 = puVar14[3];
        puVar2 = (ulonglong *)(lVar13 + -0x40 + (longlong)puVar1);
        *puVar2 = *(ulonglong *)(lVar15 + (longlong)puVar14) ^ *puVar14;
        puVar2[1] = uVar4 ^ uVar3;
        uVar3 = puVar14[4];
        uVar4 = puVar14[5];
        puVar2 = (ulonglong *)(lVar15 + -0x20 + (longlong)puVar1);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        puVar2 = (ulonglong *)(lVar13 + -0x30 + (longlong)puVar1);
        *puVar2 = uVar5 ^ uVar7;
        puVar2[1] = uVar6 ^ uVar8;
        uVar5 = puVar14[6];
        uVar6 = puVar14[7];
        puVar14 = (ulonglong *)(lVar15 + -0x10 + (longlong)puVar1);
        uVar7 = *puVar14;
        uVar8 = puVar14[1];
        puVar14 = (ulonglong *)(lVar13 + -0x20 + (longlong)puVar1);
        *puVar14 = uVar9 ^ uVar3;
        puVar14[1] = uVar10 ^ uVar4;
        puVar14 = (ulonglong *)(lVar13 + -0x10 + (longlong)puVar1);
        *puVar14 = uVar7 ^ uVar5;
        puVar14[1] = uVar8 ^ uVar6;
        puVar14 = puVar1;
      } while (uVar12 < (param_3 & 0xffffffffffffffc0));
    }
    if (uVar12 < param_3) {
      pbVar11 = (byte *)(uVar12 + (longlong)param_2);
      lVar13 = param_3 - uVar12;
      do {
        pbVar11[param_4 - (longlong)param_2] =
             pbVar11[(longlong)param_1 - (longlong)param_2] ^ *pbVar11;
        pbVar11 = pbVar11 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  return;
}



// ===== FUN_1801b7370 @ 1801b7370 (size 221)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801b7370(undefined8 *param_1,void *param_2,size_t param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1801b7382;
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  if (param_3 - 1 < 0x10) {
    local_38 = param_1[0x14] ^ param_1[0x12] ^ param_1[9];
    local_30 = param_1[0x15] ^ param_1[0x13] ^ param_1[10];
    (*(code *)*param_1)(&local_38,&local_38,param_1[2]);
    local_38 = local_38 ^ param_1[0x10];
    local_30 = local_30 ^ param_1[0x11];
    if (param_4 == 0) {
      uVar1 = FUN_1800012a0(&local_38,param_2);
    }
    else {
      memcpy(param_2,&local_38,param_3);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_1801b7450 @ 1801b7450 (size 272)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801b7450(longlong param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = *(ulonglong *)(param_1 + 0x28);
  if (param_2 <= uVar5) {
    return param_2 * 0x10 + *(longlong *)(param_1 + 0x58);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x30);
  if (uVar2 <= param_2) {
    lVar4 = ((param_2 - uVar2) + 4 & 0xfffffffffffffffc) + uVar2;
    *(longlong *)(param_1 + 0x30) = lVar4;
    lVar4 = FUN_180195e50(*(undefined8 *)(param_1 + 0x58),lVar4 * 0x10,"crypto\\modes\\ocb128.c",
                          0x71);
    if (lVar4 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 0x58) = lVar4;
  }
  if (uVar5 < param_2) {
    lVar6 = uVar5 << 4;
    lVar4 = param_2 - uVar5;
    do {
      pcVar3 = (char *)(*(longlong *)(param_1 + 0x58) + lVar6);
      cVar1 = *pcVar3;
      FUN_1801b70a0(pcVar3,1,pcVar3 + 0x10);
      pcVar3[0x1f] = pcVar3[0x1f] ^ cVar1 >> 7 & 0x87U;
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + -1;
      uVar5 = param_2;
    } while (lVar4 != 0);
  }
  *(ulonglong *)(param_1 + 0x28) = uVar5;
  return param_2 * 0x10 + *(longlong *)(param_1 + 0x58);
}



// ===== FUN_1801b7560 @ 1801b7560 (size 73)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b7560(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    FUN_180001240();
    FUN_180195e10(param_1,param_3,param_4);
  }
  return;
}



// ===== FUN_1801b7610 @ 1801b7610 (size 181)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b7610(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_1801addb0(&DAT_1803c9320,FUN_1801b8550);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1803c9328;
  }
  if (iVar2 != 0) {
    lVar3 = FUN_1801adc80(&DAT_1803c9318);
    if (lVar3 != 0) {
LAB_1801b7696:
      uVar4 = FUN_1801b7a30(lVar3,param_1,(longlong)param_2);
      return uVar4;
    }
    iVar2 = FUN_1801e4970(4);
    if (iVar2 != 0) {
      lVar3 = FUN_1801b8640(DAT_1803c9310);
      FUN_1801ade20(&DAT_1803c9318,lVar3);
      if (lVar3 != 0) goto LAB_1801b7696;
    }
  }
  return 0;
}



// ===== FUN_1801b76d0 @ 1801b76d0 (size 347)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1801b76d0(undefined8 param_1,int param_2,double param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar8 = SUB84(param_3,0);
  iVar2 = FUN_1801addb0(&DAT_1803c9320,FUN_1801b8550);
  plVar1 = DAT_1803c9310;
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = DAT_1803c9328;
  }
  if ((((iVar5 == 0) || (DAT_1803c9310 == (longlong *)0x0)) || (param_2 < 0)) || (param_3 < 0.0)) {
    uVar8 = 0;
  }
  else {
    if (*DAT_1803c9310 != 0) {
      FUN_1801add90();
    }
    uVar3 = (ulonglong)(int)plVar1[6];
    uVar6 = plVar1[8];
    if ((plVar1[10] != 0) && (plVar1[0x2d] == 0)) {
      uVar3 = uVar3 + (longlong)((int)plVar1[6] / 2);
      uVar6 = uVar6 + plVar1[10];
    }
    if (uVar6 < uVar3 >> 3) {
      uVar6 = uVar3 >> 3;
    }
    dVar7 = (double)(longlong)uVar6;
    if ((longlong)uVar6 < 0) {
      dVar7 = dVar7 + _DAT_18030baa8;
    }
    if (((ulonglong)(longlong)param_2 < uVar6) || (param_3 < dVar7)) {
      uVar8 = 0;
      uVar9 = 0;
    }
    if ((double)CONCAT44(uVar9,uVar8) <= dVar7) {
      dVar7 = (double)CONCAT44(uVar9,uVar8);
    }
    lVar4 = 0;
    dVar7 = dVar7 * _DAT_180312930;
    if ((DAT_180312938 <= dVar7) && (dVar7 = dVar7 - DAT_180312938, dVar7 < DAT_180312938)) {
      lVar4 = -0x8000000000000000;
    }
    uVar8 = FUN_1801b8940(plVar1,param_1,(longlong)param_2,(longlong)dVar7 + lVar4);
    if (*plVar1 != 0) {
      FUN_1801ade50();
    }
  }
  return uVar8;
}



// ===== FUN_1801b7830 @ 1801b7830 (size 356)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1801b7830(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = (double)param_2;
  iVar2 = FUN_1801addb0(&DAT_1803c9320,FUN_1801b8550);
  plVar1 = DAT_1803c9310;
  iVar6 = 0;
  if (iVar2 != 0) {
    iVar6 = DAT_1803c9328;
  }
  if ((iVar6 == 0) || (DAT_1803c9310 == (longlong *)0x0)) {
    uVar3 = 0;
  }
  else if ((param_2 < 0) || (dVar9 < 0.0)) {
    uVar3 = 0;
  }
  else {
    if (*DAT_1803c9310 != 0) {
      FUN_1801add90();
    }
    uVar4 = (ulonglong)(int)plVar1[6];
    uVar7 = plVar1[8];
    if ((plVar1[10] != 0) && (plVar1[0x2d] == 0)) {
      uVar4 = uVar4 + (longlong)((int)plVar1[6] / 2);
      uVar7 = uVar7 + plVar1[10];
    }
    if (uVar7 < uVar4 >> 3) {
      uVar7 = uVar4 >> 3;
    }
    dVar8 = (double)(longlong)uVar7;
    if ((longlong)uVar7 < 0) {
      dVar8 = dVar8 + _DAT_18030baa8;
    }
    if (((ulonglong)(longlong)param_2 < uVar7) || (dVar9 < dVar8)) {
      dVar9 = 0.0;
    }
    if (dVar9 <= dVar8) {
      dVar8 = dVar9;
    }
    lVar5 = 0;
    dVar8 = dVar8 * _DAT_180312930;
    if ((DAT_180312938 <= dVar8) && (dVar8 = dVar8 - DAT_180312938, dVar8 < DAT_180312938)) {
      lVar5 = -0x8000000000000000;
    }
    uVar3 = FUN_1801b8940(plVar1,param_1,(longlong)param_2,(longlong)dVar8 + lVar5);
    if (*plVar1 != 0) {
      FUN_1801ade50();
    }
  }
  return uVar3;
}



// ===== FUN_1801b79a0 @ 1801b79a0 (size 130)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801b79a0(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = FUN_1801addb0(&DAT_1803c9320,FUN_1801b8550);
  plVar2 = DAT_1803c9310;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = DAT_1803c9328;
  }
  if ((iVar4 == 0) || (DAT_1803c9310 == (longlong *)0x0)) {
    return false;
  }
  lVar5 = 0;
  if (*DAT_1803c9310 != 0) {
    FUN_1801add90();
    lVar5 = *plVar2;
  }
  lVar1 = plVar2[0x13];
  if (lVar5 != 0) {
    FUN_1801ade50();
  }
  return (int)lVar1 == 1;
}



// ===== FUN_1801b7a30 @ 1801b7a30 (size 610)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b7a30(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  __time64_t _Var5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong local_res20;
  ulonglong in_stack_ffffffffffffffb8;
  undefined4 uVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar6 = 0;
  local_res20 = 0;
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    lVar3 = FUN_180194e90(0,0,0,*(undefined8 *)(param_1 + 0x68));
    *(longlong *)(param_1 + 0x28) = lVar3;
    if (lVar3 == 0) goto LAB_1801b7c6f;
  }
  uVar4 = FUN_180194430(lVar3,&local_res20);
  lVar3 = local_res20;
  for (; local_res20 = lVar3, param_3 != 0; param_3 = param_3 - uVar7) {
    uVar10 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
    uVar7 = *(ulonglong *)(param_1 + 0x38);
    if (param_3 <= *(ulonglong *)(param_1 + 0x38)) {
      uVar7 = param_3;
    }
    if (*(int *)(param_1 + 0x98) != 1) {
      FUN_1801b8940(param_1,0,0,0);
      if (*(int *)(param_1 + 0x98) == 2) {
        uVar2 = 0x242;
        uVar8 = 0x72;
      }
      else {
        if (*(int *)(param_1 + 0x98) != 0) goto LAB_1801b7b0d;
        uVar2 = 0x246;
        uVar8 = 0x73;
      }
LAB_1801b7c39:
      FUN_1801a70c0(0x24,0x6b,uVar8,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar10,uVar2));
      goto LAB_1801b7c6f;
    }
LAB_1801b7b0d:
    if (*(ulonglong *)(param_1 + 0x38) < uVar7) {
      uVar2 = 0x24c;
      uVar8 = 0x75;
      goto LAB_1801b7c39;
    }
    if (*(ulonglong *)(param_1 + 0x68) < uVar4) {
      uVar2 = 0x250;
      uVar8 = 0x66;
      goto LAB_1801b7c39;
    }
    iVar1 = FUN_180077ce0();
    bVar9 = *(int *)(param_1 + 0x18) != iVar1;
    if (bVar9) {
      *(int *)(param_1 + 0x18) = iVar1;
    }
    if ((*(uint *)(param_1 + 0x74) != 0) && (*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x70))
       ) {
      bVar9 = true;
    }
    if (0 < *(longlong *)(param_1 + 0x80)) {
      _Var5 = _time64((__time64_t *)0x0);
      if ((_Var5 < *(longlong *)(param_1 + 0x78)) ||
         (*(longlong *)(param_1 + 0x80) <= _Var5 - *(longlong *)(param_1 + 0x78))) {
        bVar9 = true;
      }
    }
    if ((((*(int *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 8) != 0)) &&
        (*(int *)(param_1 + 0x8c) != *(int *)(*(longlong *)(param_1 + 8) + 0x8c))) ||
       (in_stack_ffffffffffffffb8 = uVar4, bVar9)) {
      iVar1 = FUN_1801b8270(param_1,lVar3,uVar4,0);
      if (iVar1 == 0) {
        uVar2 = 0x26c;
        uVar8 = 0x76;
        goto LAB_1801b7c39;
      }
      in_stack_ffffffffffffffb8 = 0;
    }
    iVar1 = (**(code **)(*(longlong *)(param_1 + 0x150) + 0x10))(param_1);
    uVar10 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x98) = 2;
      uVar2 = 0x275;
      uVar8 = 0x70;
      goto LAB_1801b7c39;
    }
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    lVar3 = local_res20;
  }
  uVar6 = 1;
LAB_1801b7c6f:
  if (local_res20 != 0) {
    FUN_180194370(*(undefined8 *)(param_1 + 0x28));
  }
  return uVar6;
}



// ===== FUN_1801b7ca0 @ 1801b7ca0 (size 126)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b7ca0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[0x2a] != 0) {
      (**(code **)(param_1[0x2a] + 0x18))();
    }
    FUN_180194cb0(param_1[5]);
    FUN_1801adcf0(*param_1);
    FUN_1801ae0a0(0xf,param_1,param_1 + 0x14);
    if (*(int *)(param_1 + 2) != 0) {
      FUN_1801b7560();
      return;
    }
    FUN_180195f20(param_1,0x178,"crypto\\rand\\drbg_lib.c",0x115);
  }
  return;
}



// ===== FUN_1801b7d20 @ 1801b7d20 (size 605)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801b7d20(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4,undefined8 param_5,
             ulonglong param_6)

{
  int iVar1;
  undefined8 uVar2;
  __time64_t _Var3;
  bool bVar4;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar6 = 0x1801b7d37;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x98) != 1) {
    FUN_1801b8940(param_1,0,0,0);
    if (*(int *)(param_1 + 0x98) == 2) {
      FUN_1801a70c0(0x24,0x6b,0x72,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar5,0x242),uVar6);
      return 0;
    }
    if (*(int *)(param_1 + 0x98) == 0) {
      FUN_1801a70c0(0x24,0x6b,0x73,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar5,0x246),uVar6);
      return 0;
    }
  }
  if (*(ulonglong *)(param_1 + 0x38) < param_3) {
    FUN_1801a70c0(0x24,0x6b,0x75,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar5,0x24c),uVar6);
    return 0;
  }
  if (*(ulonglong *)(param_1 + 0x68) < param_6) {
    FUN_1801a70c0(0x24,0x6b,0x66,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar5,0x250),uVar6);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_180077ce0();
    bVar4 = *(int *)(param_1 + 0x18) != iVar1;
    if (bVar4) {
      *(int *)(param_1 + 0x18) = iVar1;
    }
    if ((*(uint *)(param_1 + 0x74) != 0) && (*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x70))
       ) {
      bVar4 = true;
    }
    if (0 < *(longlong *)(param_1 + 0x80)) {
      _Var3 = _time64((__time64_t *)0x0);
      if ((_Var3 < *(longlong *)(param_1 + 0x78)) ||
         (*(longlong *)(param_1 + 0x80) <= _Var3 - *(longlong *)(param_1 + 0x78))) {
        bVar4 = true;
      }
    }
    if ((((*(int *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 8) != 0)) &&
        (*(int *)(param_1 + 0x8c) != *(int *)(*(longlong *)(param_1 + 8) + 0x8c))) ||
       ((bVar4 || (param_4 != 0)))) {
      iVar1 = FUN_1801b8270(param_1,param_5,param_6,param_4);
      if (iVar1 == 0) {
        FUN_1801a70c0(0x24,0x6b,0x76,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar5,0x26c),uVar6);
        return 0;
      }
      param_6 = 0;
    }
    else {
      uVar2 = param_5;
    }
    iVar1 = (**(code **)(*(longlong *)(param_1 + 0x150) + 0x10))
                      (param_1,param_2,param_3,uVar2,param_6);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x98) = 2;
      FUN_1801a70c0(0x24,0x6b,0x70,"crypto\\rand\\drbg_lib.c",0x275);
      uVar2 = 0;
    }
    else {
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ===== FUN_1801b7f80 @ 1801b7f80 (size 128)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801b7f80(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = FUN_1801addb0(&DAT_1803c9320,FUN_1801b8550);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1803c9328;
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_1801adc80(&DAT_1803c931c);
  if (lVar3 == 0) {
    iVar2 = FUN_1801e4970(4);
    if (iVar2 == 0) {
      return 0;
    }
    lVar3 = FUN_1801b8640(DAT_1803c9310);
    FUN_1801ade20(&DAT_1803c931c,lVar3);
  }
  return lVar3;
}



// ===== FUN_1801b8000 @ 1801b8000 (size 621)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801b8000(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  __time64_t _Var4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_res8;
  longlong local_res18 [2];
  undefined8 uVar8;
  ulonglong in_stack_ffffffffffffffb0;
  undefined8 uVar9;
  
  uVar9 = 0x1801b801a;
  lVar5 = (longlong)*(int *)(param_1 + 0x30);
  local_res18[0] = 0;
  local_res8 = 0;
  uVar3 = 0;
  uVar2 = 0;
  uVar6 = *(ulonglong *)(param_1 + 0x40);
  uVar7 = *(ulonglong *)(param_1 + 0x48);
  if (*(ulonglong *)(param_1 + 0x60) < param_3) {
    uVar8 = 299;
    uVar9 = 0x74;
  }
  else if (*(longlong *)(param_1 + 0x150) == 0) {
    uVar8 = 0x131;
    uVar9 = 0x80;
  }
  else if (*(int *)(param_1 + 0x98) == 0) {
    *(undefined4 *)(param_1 + 0x98) = 2;
    if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x168) == 0)) {
      uVar6 = uVar6 + *(longlong *)(param_1 + 0x50);
      lVar5 = lVar5 + *(int *)(param_1 + 0x30) / 2;
      uVar7 = uVar7 + *(longlong *)(param_1 + 0x58);
    }
    if (*(code **)(param_1 + 0x158) != (code *)0x0) {
      uVar2 = (**(code **)(param_1 + 0x158))
                        (param_1,&local_res8,lVar5,uVar6,uVar7,
                         in_stack_ffffffffffffffb0 & 0xffffffff00000000);
    }
    if ((uVar2 < uVar6) || (uVar7 < uVar2)) {
      uVar8 = 0x14f;
      uVar9 = 0x6e;
    }
    else if (((*(longlong *)(param_1 + 0x50) == 0) || (*(code **)(param_1 + 0x168) == (code *)0x0))
            || ((uVar3 = (**(code **)(param_1 + 0x168))
                                   (param_1,local_res18,*(int *)(param_1 + 0x30) / 2,
                                    *(longlong *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58)),
                *(ulonglong *)(param_1 + 0x50) <= uVar3 && (uVar3 <= *(ulonglong *)(param_1 + 0x58))
                ))) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x150))
                        (param_1,local_res8,uVar2,local_res18[0],uVar3,param_2,param_3,uVar9);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x98) = 1;
        *(undefined4 *)(param_1 + 0x70) = 1;
        _Var4 = _time64((__time64_t *)0x0);
        *(__time64_t *)(param_1 + 0x78) = _Var4;
        if ((*(int *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 8) == 0)) {
          LOCK();
          *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
          UNLOCK();
        }
        goto LAB_1801b8205;
      }
      uVar8 = 0x15e;
      uVar9 = 0x6c;
    }
    else {
      uVar8 = 0x157;
      uVar9 = 0x6f;
    }
  }
  else {
    uVar8 = 0x138;
    uVar9 = 0x67;
    if (*(int *)(param_1 + 0x98) == 2) {
      uVar9 = 0x72;
    }
  }
  FUN_1801a70c0(0x24,0x6c,uVar9,"crypto\\rand\\drbg_lib.c",uVar8);
LAB_1801b8205:
  if ((local_res8 != 0) && (*(code **)(param_1 + 0x160) != (code *)0x0)) {
    (**(code **)(param_1 + 0x160))(param_1,local_res8,uVar2);
  }
  if ((local_res18[0] != 0) && (*(code **)(param_1 + 0x170) != (code *)0x0)) {
    (**(code **)(param_1 + 0x170))(param_1,local_res18[0],uVar3);
  }
  return *(int *)(param_1 + 0x98) == 1;
}



// ===== FUN_1801b8270 @ 1801b8270 (size 441)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801b8270(longlong param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  __time64_t _Var3;
  bool bVar4;
  longlong local_res8;
  undefined8 uVar5;
  
  uVar5 = 0x1801b8288;
  local_res8 = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x98) == 2) {
    FUN_1801a70c0(0x24,0x6e,0x72,"crypto\\rand\\drbg_lib.c",0x199,0x1801b8288);
    bVar4 = false;
  }
  else if (*(int *)(param_1 + 0x98) == 0) {
    FUN_1801a70c0(0x24,0x6e,0x73,"crypto\\rand\\drbg_lib.c",0x19d,0x1801b8288);
    bVar4 = false;
  }
  else {
    if (param_2 == 0) {
      param_3 = 0;
    }
    else if (*(ulonglong *)(param_1 + 0x68) < param_3) {
      FUN_1801a70c0(0x24,0x6e,0x66,"crypto\\rand\\drbg_lib.c",0x1a4,0x1801b8288);
      return false;
    }
    *(undefined4 *)(param_1 + 0x98) = 2;
    if (*(code **)(param_1 + 0x158) != (code *)0x0) {
      uVar5 = CONCAT44(1,param_4);
      uVar2 = (**(code **)(param_1 + 0x158))
                        (param_1,&local_res8,*(undefined4 *)(param_1 + 0x30),
                         *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),uVar5);
    }
    if ((uVar2 < *(ulonglong *)(param_1 + 0x40)) || (*(ulonglong *)(param_1 + 0x48) < uVar2)) {
      FUN_1801a70c0(0x24,0x6e,0x6e,"crypto\\rand\\drbg_lib.c",0x1b0,uVar5);
    }
    else {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x150) + 8))
                        (param_1,local_res8,uVar2,param_2,param_3);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x98) = 1;
        *(undefined4 *)(param_1 + 0x70) = 1;
        _Var3 = _time64((__time64_t *)0x0);
        *(__time64_t *)(param_1 + 0x78) = _Var3;
        if ((*(int *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 8) == 0)) {
          LOCK();
          *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
          UNLOCK();
        }
      }
    }
    if ((local_res8 != 0) && (*(code **)(param_1 + 0x160) != (code *)0x0)) {
      (**(code **)(param_1 + 0x160))(param_1,local_res8,uVar2);
    }
    bVar4 = *(int *)(param_1 + 0x98) == 1;
  }
  return bVar4;
}



// ===== FUN_1801b8430 @ 1801b8430 (size 271)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801b8430(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801b844a;
  if ((param_2 == 0) && (param_3 == 0)) {
    param_3 = DAT_1803c9324;
    param_2 = DAT_1803be4d8;
  }
  if ((*(int *)(param_1 + 0x14) != 0) &&
     ((param_2 != *(int *)(param_1 + 0x14) || (param_3 != *(ushort *)(param_1 + 0x1c))))) {
    (**(code **)(*(longlong *)(param_1 + 0x150) + 0x18))();
    FUN_180194cb0(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(short *)(param_1 + 0x1c) = (short)param_3;
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x150) = 0;
    iVar1 = 1;
  }
  else if (param_2 - 0x388U < 3) {
    iVar1 = FUN_1801ee610(param_1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x98) = 2;
      FUN_1801a70c0(0x24,0x68,0x6b,"crypto\\rand\\drbg_lib.c",0x8f,uVar2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    FUN_1801a70c0(0x24,0x68,0x78,"crypto\\rand\\drbg_lib.c",0x80,uVar2);
    iVar1 = 0;
  }
  return iVar1;
}



// ===== FUN_1801b8550 @ 1801b8550 (size 135)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b8550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1801e4120(0,0,param_3,param_4,0x1801b855a);
  if (iVar1 != 0) {
    iVar1 = FUN_1801adcc0(&DAT_1803c931c,0);
    if (iVar1 != 0) {
      iVar1 = FUN_1801adcc0(&DAT_1803c9318,0);
      if (iVar1 != 0) {
        DAT_1803c9310 = FUN_1801b8640(0);
        if (DAT_1803c9310 != 0) {
          DAT_1803c9328 = 1;
          return;
        }
        FUN_1801adc20(&DAT_1803c9318);
      }
      FUN_1801adc20(&DAT_1803c931c);
    }
  }
  DAT_1803c9328 = 0;
  return;
}



// ===== FUN_1801b85e0 @ 1801b85e0 (size 94)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b85e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1801adc80(&DAT_1803c9318);
  FUN_1801ade20(&DAT_1803c9318,0);
  FUN_1801b7ca0(uVar1);
  uVar1 = FUN_1801adc80(&DAT_1803c931c);
  FUN_1801ade20(&DAT_1803c931c,0);
  FUN_1801b7ca0(uVar1);
  return;
}



// ===== FUN_1801b8640 @ 1801b8640 (size 238)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801b8640(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801b8650;
  plVar2 = (longlong *)FUN_1801b87b0(1,DAT_1803be4d8,DAT_1803c9324,param_1);
  if (plVar2 != (longlong *)0x0) {
    if (param_1 != 0) {
LAB_1801b86f7:
      *(undefined4 *)(plVar2 + 0x11) = 1;
      *(undefined4 *)((longlong)plVar2 + 0x8c) = 1;
      FUN_1801b8000(plVar2,"OpenSSL NIST SP 800-90A DRBG",0x1c);
      return plVar2;
    }
    if ((int)plVar2[0x13] == 0) {
      if (*plVar2 != 0) goto LAB_1801b86f7;
      if (((longlong *)plVar2[1] == (longlong *)0x0) || (*(longlong *)plVar2[1] != 0)) {
        lVar3 = FUN_1801add30();
        *plVar2 = lVar3;
        if (lVar3 != 0) goto LAB_1801b86f7;
        uVar1 = 0x33a;
        uVar4 = 0x7e;
      }
      else {
        uVar1 = 0x333;
        uVar4 = 0x82;
      }
    }
    else {
      uVar1 = 0x32c;
      uVar4 = 0x81;
    }
    FUN_1801a70c0(0x24,0x77,uVar4,"crypto\\rand\\drbg_lib.c",uVar1,uVar5);
    FUN_1801b7ca0(plVar2);
  }
  return (longlong *)0x0;
}



// ===== FUN_1801b8730 @ 1801b8730 (size 74)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801b8730(void)

{
  if (DAT_1803c9310 == 0) {
    return;
  }
  FUN_1801b7ca0();
  DAT_1803c9310 = 0;
  FUN_1801adc20(&DAT_1803c931c);
  FUN_1801adc20(&DAT_1803c9318);
  return;
}



// ===== FUN_1801b87b0 @ 1801b87b0 (size 398)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801b87b0(int param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801b87d0;
  if (param_1 == 0) {
    lVar4 = FUN_180196100(0x178,"crypto\\rand\\drbg_lib.c",0xc0);
  }
  else {
    lVar4 = FUN_1801b75f0(0x178,"crypto\\rand\\drbg_lib.c",0xbf);
  }
  if (lVar4 == 0) {
    FUN_1801a70c0(0x24,0x6d,0x41,"crypto\\rand\\drbg_lib.c",0xc3,uVar5);
  }
  else {
    if ((param_1 == 0) || (iVar2 = FUN_180077ce0(lVar4), iVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined4 *)(lVar4 + 0x10) = uVar3;
    uVar3 = FUN_180077ce0();
    *(undefined4 *)(lVar4 + 0x18) = uVar3;
    *(longlong **)(lVar4 + 8) = param_4;
    if (param_4 == (longlong *)0x0) {
      *(code **)(lVar4 + 0x168) = FUN_1801947b0;
      *(code **)(lVar4 + 0x170) = FUN_180194400;
      *(undefined4 *)(lVar4 + 0x74) = DAT_1803be4dc;
      uVar5 = DAT_1803be4e8;
    }
    else {
      *(undefined4 *)(lVar4 + 0x74) = DAT_1803be4e0;
      uVar5 = DAT_1803be4f0;
    }
    *(undefined8 *)(lVar4 + 0x80) = uVar5;
    *(code **)(lVar4 + 0x158) = FUN_180194490;
    *(code **)(lVar4 + 0x160) = FUN_1801943b0;
    iVar2 = FUN_1801b8430(lVar4,param_2,param_3);
    if (iVar2 != 0) {
      if (param_4 == (longlong *)0x0) {
        return lVar4;
      }
      if (*param_4 != 0) {
        FUN_1801add90();
      }
      iVar2 = *(int *)(lVar4 + 0x30);
      lVar1 = param_4[6];
      FUN_1801b8b70(param_4);
      if (iVar2 <= (int)lVar1) {
        return lVar4;
      }
      FUN_1801a70c0(0x24,0x6d,0x83,"crypto\\rand\\drbg_lib.c",0xec);
    }
    FUN_1801b7ca0(lVar4);
  }
  return 0;
}



// ===== FUN_1801b8940 @ 1801b8940 (size 553)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801b8940(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 0x1801b8960;
  bVar5 = false;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1801a70c0(0x24,0x66,0x44,"crypto\\rand\\drbg_lib.c",0x1de,0x1801b8960);
    *(undefined4 *)(param_1 + 0x98) = 2;
    FUN_180194cb0(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    return false;
  }
  uVar3 = 0;
  lVar4 = 0;
  if (param_2 == 0) {
LAB_1801b8a57:
    if (*(int *)(param_1 + 0x98) == 2) {
      if (*(longlong *)(param_1 + 0x150) == 0) {
        *(undefined4 *)(param_1 + 0x98) = 2;
        uVar6 = CONCAT44(uVar7,0x17e);
        FUN_1801a70c0(0x24,0x76,0x80,"crypto\\rand\\drbg_lib.c",uVar6,uVar8);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x150) + 0x18))(param_1);
        FUN_1801b8430(param_1,*(undefined4 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x1c));
      }
    }
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      FUN_1801b8000(param_1,"OpenSSL NIST SP 800-90A DRBG",0x1c);
      iVar1 = *(int *)(param_1 + 0x98);
      bVar5 = iVar1 == 1;
    }
    if (iVar1 == 1) {
      if (lVar4 == 0) {
        if ((!bVar5) && (iVar1 = FUN_1801b8270(param_1,0,0,0), iVar1 == 0)) {
          FUN_1801a70c0(0x24,0x66,0x76,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar7,0x221));
        }
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x150) + 8))(param_1,lVar4,uVar3,0,0);
      }
    }
    FUN_180194cb0(*(undefined8 *)(param_1 + 0x20));
    bVar5 = *(int *)(param_1 + 0x98) == 1;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (param_4 == 0) {
      if (param_3 <= *(ulonglong *)(param_1 + 0x68)) {
        uVar3 = param_3;
        lVar4 = param_2;
        goto LAB_1801b8a57;
      }
      uVar6 = 0x1fb;
      uVar8 = 0x66;
    }
    else if (*(ulonglong *)(param_1 + 0x48) < param_3) {
      uVar6 = 0x1e9;
      uVar8 = 0x6a;
    }
    else {
      if (param_4 <= param_3 * 8) {
        lVar2 = FUN_180194af0(param_2,param_3,param_4);
        *(longlong *)(param_1 + 0x20) = lVar2;
        if (lVar2 == 0) {
          return false;
        }
        goto LAB_1801b8a57;
      }
      uVar6 = 0x1ef;
      uVar8 = 0x7c;
    }
    FUN_1801a70c0(0x24,0x66,uVar8,"crypto\\rand\\drbg_lib.c",uVar6,0x1801b8960);
    bVar5 = false;
    *(undefined4 *)(param_1 + 0x98) = 2;
  }
  return bVar5;
}



// ===== FUN_1801b8ba0 @ 1801b8ba0 (size 345)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801b8ba0(undefined8 param_1)

{
  BOOL BVar1;
  longlong lVar2;
  BYTE *pBVar3;
  longlong lVar4;
  longlong lVar5;
  HCRYPTPROV local_res10;
  
  lVar5 = 0;
  lVar4 = 0;
  lVar2 = FUN_180194b90(param_1,1);
  pBVar3 = (BYTE *)FUN_180194a00(param_1,lVar2);
  if (pBVar3 != (BYTE *)0x0) {
    BVar1 = CryptAcquireContextW(&local_res10,(LPCWSTR)0x0,(LPCWSTR)0x0,1,0xf0000040);
    if (BVar1 != 0) {
      BVar1 = CryptGenRandom(local_res10,(DWORD)lVar2,pBVar3);
      if (BVar1 != 0) {
        lVar4 = lVar2;
      }
      CryptReleaseContext(local_res10,0);
    }
    FUN_180194a90(param_1,lVar4,lVar4 * 8);
    lVar4 = FUN_180194c90(param_1);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  lVar2 = 0;
  lVar4 = FUN_180194b90(param_1,1);
  pBVar3 = (BYTE *)FUN_180194a00(param_1,lVar4);
  if (pBVar3 != (BYTE *)0x0) {
    BVar1 = CryptAcquireContextW
                      (&local_res10,(LPCWSTR)0x0,L"Intel Hardware Cryptographic Service Provider",
                       0x16,0xf0000040);
    if (BVar1 != 0) {
      BVar1 = CryptGenRandom(local_res10,(DWORD)lVar4,pBVar3);
      if (BVar1 != 0) {
        lVar5 = lVar4;
      }
      CryptReleaseContext(local_res10,0);
    }
    FUN_180194a90(param_1,lVar5,lVar5 * 8);
    lVar2 = FUN_180194c90(param_1);
  }
  if (lVar2 == 0) {
    lVar2 = FUN_180194c90(param_1);
  }
  return lVar2;
}



// ===== FUN_1801b8d00 @ 1801b8d00 (size 105)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b8d00(undefined8 param_1)

{
  DWORD DVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  LARGE_INTEGER local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801b8d0c;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20.QuadPart = 0;
  DVar1 = GetCurrentThreadId();
  local_28 = CONCAT44(local_28._4_4_,DVar1);
  QueryPerformanceCounter(&local_20);
  FUN_180194910(param_1,&local_28,0x10);
  return;
}



// ===== FUN_1801b8d70 @ 1801b8d70 (size 115)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b8d70(undefined8 param_1)

{
  DWORD DVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  _FILETIME local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801b8d7c;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20.dwLowDateTime = 0;
  local_20.dwHighDateTime = 0;
  DVar1 = GetCurrentProcessId();
  local_28 = CONCAT44(local_28._4_4_,DVar1);
  DVar1 = GetCurrentThreadId();
  local_28 = CONCAT44(DVar1,(undefined4)local_28);
  GetSystemTimeAsFileTime(&local_20);
  FUN_180194910(param_1,&local_28,0x10);
  return;
}



// ===== FUN_1801b8e10 @ 1801b8e10 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b8e10(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return 1;
  }
  uVar1 = FUN_1801ed650(&DAT_1803c9330,FUN_1801b8ec0,param_1,&DAT_18031299c,1,0,0x1801b8e1a);
  return uVar1;
}



// ===== FUN_1801b8e70 @ 1801b8e70 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801b8e70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return 1;
  }
  uVar1 = FUN_1801ed650(&DAT_1803c9330,FUN_1801b8ec0,param_1,&DAT_18031299c,1,1,0x1801b8e7a);
  return uVar1;
}



// ===== FUN_1801b8ee0 @ 1801b8ee0 (size 180)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801b8ee0(undefined8 param_1,longlong param_2,int param_3,int param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = 0;
  if ((param_3 != 0) && (iVar4 = 0, 0 < param_3)) {
    do {
      iVar1 = (param_3 + iVar4) / 2;
      lVar3 = iVar1 * param_4 + param_2;
      iVar2 = (*param_5)(param_1,lVar3);
      if (iVar2 < 0) {
        param_3 = iVar1;
      }
      else {
        if (iVar2 < 1) break;
        iVar4 = iVar1 + 1;
      }
    } while (iVar4 < param_3);
    if (iVar2 != 0) {
      lVar3 = 0;
    }
  }
  return lVar3;
}



// ===== FUN_1801b8fa0 @ 1801b8fa0 (size 242)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801b8fa0(undefined8 param_1,longlong param_2,int param_3,int param_4,code *param_5,
                      byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = 0;
  lVar4 = 0;
  if (param_3 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (param_3 + iVar3) / 2;
      lVar4 = iVar1 * param_4 + param_2;
      iVar2 = (*param_5)(param_1,lVar4);
      if (iVar2 < 0) {
        param_3 = iVar1;
      }
      else {
        if (iVar2 < 1) break;
        iVar3 = iVar1 + 1;
      }
    } while (iVar3 < param_3);
    if (iVar2 != 0) {
      if ((param_6 & 1) == 0) {
        return 0;
      }
      return lVar4;
    }
  }
  if ((param_6 & 2) != 0) {
    if (0 < iVar1) {
      iVar3 = (iVar1 + -1) * param_4;
      do {
        iVar2 = (*param_5)(param_1,iVar3 + param_2);
        if (iVar2 != 0) break;
        iVar1 = iVar1 + -1;
        iVar3 = iVar3 - param_4;
      } while (0 < iVar1);
    }
    lVar4 = iVar1 * param_4 + param_2;
  }
  return lVar4;
}



// ===== FUN_1801b90a0 @ 1801b90a0 (size 670)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801b90a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58 [6];
  
  local_58[4] = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  uVar8 = 0;
  if (((param_2 != 0) && (iVar3 = FUN_1801b9c80(param_2), iVar3 != 0)) ||
     ((param_3 != 0 && (iVar3 = FUN_1801b9360(param_3), iVar3 != 0)))) {
    local_68 = 0x2ce;
    FUN_1801a70c0(8,100,0x66,"crypto\\objects\\obj_dat.c");
    return 0;
  }
  plVar4 = (longlong *)FUN_1801b9db0(param_1,1);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  iVar3 = FUN_1801b96c0(plVar4);
  if (iVar3 != 0) {
    local_68 = 0x2d9;
    FUN_1801a70c0(8,100,0x66,"crypto\\objects\\obj_dat.c");
    goto LAB_1801b9319;
  }
  bVar10 = DAT_1803c9338 != 0;
  *(int *)(plVar4 + 2) = DAT_1803be4f8;
  *plVar4 = param_2;
  plVar4[1] = param_3;
  DAT_1803be4f8 = DAT_1803be4f8 + 1;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  if ((bVar10) || (DAT_1803c9338 = FUN_1801e5090(FUN_1801ba0c0,FUN_1801b9fd0), DAT_1803c9338 != 0))
  {
    plVar5 = (longlong *)FUN_1801bc270(plVar4);
    if (plVar5 != (longlong *)0x0) {
      local_58[3] = FUN_180195dc0(0x10,"crypto\\objects\\obj_dat.c",0xb9);
      if (local_58[3] != 0) {
        if ((*(int *)((longlong)plVar5 + 0x14) != 0) && (plVar4[3] != 0)) {
          local_58[0] = FUN_180195dc0(0x10,"crypto\\objects\\obj_dat.c",0xbc);
          if (local_58[0] == 0) goto LAB_1801b92ba;
        }
        if (*plVar5 != 0) {
          local_58[1] = FUN_180195dc0(0x10,"crypto\\objects\\obj_dat.c",0xbf);
          if (local_58[1] == 0) goto LAB_1801b92ba;
        }
        if (plVar5[1] != 0) {
          local_58[2] = FUN_180195dc0(0x10,"crypto\\objects\\obj_dat.c",0xc2);
          if (local_58[2] == 0) goto LAB_1801b92ba;
        }
        plVar9 = local_58;
        do {
          lVar2 = DAT_1803c9338;
          piVar1 = (int *)*plVar9;
          if (piVar1 != (int *)0x0) {
            *piVar1 = (int)uVar8;
            *(longlong **)(piVar1 + 2) = plVar5;
            uVar6 = FUN_1801e4f10(lVar2);
            FUN_180195e10(uVar6,"crypto\\objects\\obj_dat.c",0xcb);
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          plVar9 = plVar9 + 1;
        } while ((int)uVar7 < 4);
        *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffff2;
        uVar8 = (ulonglong)*(uint *)(plVar5 + 2);
        goto LAB_1801b930a;
      }
LAB_1801b92ba:
      local_68 = 0xd4;
      FUN_1801a70c0(8,0x69,0x41,"crypto\\objects\\obj_dat.c");
    }
    do {
      FUN_180195e10(local_58[uVar8],"crypto\\objects\\obj_dat.c",0xd7);
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < 4);
    FUN_18019aa30(plVar5);
    uVar8 = 0;
  }
LAB_1801b930a:
  *plVar4 = 0;
  plVar4[1] = 0;
LAB_1801b9319:
  FUN_18019aa30(plVar4);
  return uVar8;
}



// ===== FUN_1801b9360 @ 1801b9360 (size 290)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801b9360(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [8];
  byte *local_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801b936c;
  if (DAT_1803c9338 != 0) {
    local_40 = local_38;
    local_48[0] = 2;
    local_30 = param_1;
    lVar5 = FUN_1801e5190(DAT_1803c9338,local_48);
    if (lVar5 != 0) {
      return *(undefined4 *)(*(longlong *)(lVar5 + 8) + 0x10);
    }
    param_1 = local_30;
  }
  iVar8 = 0;
  iVar9 = 0x4a2;
  do {
    iVar2 = (iVar9 + iVar8) / 2;
    uVar7 = (ulonglong)*(uint *)(&DAT_180321550 + iVar2 * 4);
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar6;
      if (bVar1 != pbVar6[(longlong)(&PTR_s_undefined_180314808)[uVar7 * 5] - (longlong)param_1]) {
        uVar3 = -(uint)(bVar1 < pbVar6[(longlong)(&PTR_s_undefined_180314808)[uVar7 * 5] -
                                       (longlong)param_1]) | 1;
        goto LAB_1801b9439;
      }
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_1801b9439:
    if ((int)uVar3 < 0) {
      iVar9 = iVar2;
    }
    else {
      if ((int)uVar3 < 1) break;
      iVar8 = iVar2 + 1;
    }
  } while (iVar8 < iVar9);
  if ((uVar3 == 0) && ((uint *)(&DAT_180321550 + iVar2 * 4) != (uint *)0x0)) {
    uVar4 = *(undefined4 *)(&DAT_180314810 + uVar7 * 0x28);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_1801b9490 @ 1801b9490 (size 178)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_1801b9490(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x1801b949a;
  if (0x4aa < param_1) {
    if (DAT_1803c9338 == 0) {
      return (undefined *)0x0;
    }
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = param_1;
    lVar1 = FUN_1801e5190(DAT_1803c9338,local_48);
    if (lVar1 != 0) {
      return *(undefined **)(*(longlong *)(lVar1 + 8) + 8);
    }
    uVar2 = 0x128;
LAB_1801b9522:
    FUN_1801a70c0(8,0x66,0x65,"crypto\\objects\\obj_dat.c",uVar2);
    return (undefined *)0x0;
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)param_1;
    if (*(int *)(&DAT_180314810 + lVar1 * 0x28) == 0) {
      uVar2 = 0x11a;
      goto LAB_1801b9522;
    }
  }
  return (&PTR_s_undefined_180314808)[lVar1 * 5];
}



// ===== FUN_1801b9550 @ 1801b9550 (size 183)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined ** FUN_1801b9550(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x1801b955a;
  if (0x4aa < param_1) {
    if (DAT_1803c9338 == 0) {
      uVar2 = 0xe8;
    }
    else {
      local_40 = local_38;
      local_48[0] = 3;
      local_28 = param_1;
      lVar1 = FUN_1801e5190(DAT_1803c9338,local_48);
      if (lVar1 != 0) {
        return *(undefined ***)(lVar1 + 8);
      }
      uVar2 = 0xf2;
    }
LAB_1801b95e7:
    FUN_1801a70c0(8,0x67,0x65,"crypto\\objects\\obj_dat.c",uVar2);
    return (undefined **)0x0;
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)param_1;
    if (*(int *)(&DAT_180314810 + lVar1 * 0x28) == 0) {
      uVar2 = 0xe3;
      goto LAB_1801b95e7;
    }
  }
  return &PTR_s_UNDEF_180314800 + lVar1 * 5;
}



// ===== FUN_1801b9610 @ 1801b9610 (size 176)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_1801b9610(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x1801b961a;
  if (0x4aa < param_1) {
    if (DAT_1803c9338 == 0) {
      return (undefined *)0x0;
    }
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = param_1;
    lVar1 = FUN_1801e5190(DAT_1803c9338,local_48);
    if (lVar1 != 0) {
      return (undefined *)**(undefined8 **)(lVar1 + 8);
    }
    uVar2 = 0x10d;
LAB_1801b96a0:
    FUN_1801a70c0(8,0x68,0x65,"crypto\\objects\\obj_dat.c",uVar2);
    return (undefined *)0x0;
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)param_1;
    if (*(int *)(&DAT_180314810 + lVar1 * 0x28) == 0) {
      uVar2 = 0xff;
      goto LAB_1801b96a0;
    }
  }
  return (&PTR_s_UNDEF_180314800)[lVar1 * 5];
}



// ===== FUN_1801b96c0 @ 1801b96c0 (size 287)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801b96c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 local_38 [2];
  longlong local_30;
  
  local_30 = 0x1801b96e2;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return *(int *)(param_1 + 0x10);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar5 = 0;
      if (DAT_1803c9338 != 0) {
        local_38[0] = 0;
        local_30 = param_1;
        lVar4 = FUN_1801e5190(DAT_1803c9338,local_38);
        if (lVar4 != 0) {
          return *(int *)(*(longlong *)(lVar4 + 8) + 0x10);
        }
      }
      iVar1 = *(int *)(param_1 + 0x14);
      iVar6 = 0x42f;
      do {
        iVar2 = (iVar6 + iVar5) / 2;
        uVar7 = (ulonglong)*(uint *)(&DAT_1803227e0 + iVar2 * 4);
        iVar3 = iVar1 - *(int *)(&DAT_180314814 + uVar7 * 0x28);
        if (iVar3 == 0) {
          if (iVar1 == 0) goto LAB_1801b97b0;
          iVar3 = memcmp(*(void **)(param_1 + 0x18),*(void **)(&DAT_180314818 + uVar7 * 0x28),
                         (longlong)iVar1);
        }
        if (iVar3 < 0) {
          iVar6 = iVar2;
        }
        else {
          if (iVar3 < 1) break;
          iVar5 = iVar2 + 1;
        }
      } while (iVar5 < iVar6);
      if (iVar3 == 0) {
LAB_1801b97b0:
        if ((uint *)(&DAT_1803227e0 + iVar2 * 4) != (uint *)0x0) {
          return *(int *)(&DAT_180314810 + uVar7 * 0x28);
        }
      }
    }
  }
  return 0;
}



// ===== FUN_1801b97e0 @ 1801b97e0 (size 1178)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801b97e0(char *param_1,int param_2,longlong param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  uint local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_d8 [2];
  undefined1 *local_d0;
  undefined4 local_c8 [2];
  undefined1 *local_c0;
  undefined1 local_b8 [16];
  uint local_a8;
  undefined1 local_90 [16];
  uint local_80;
  char local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_118;
  uVar14 = (ulonglong)param_2;
  local_e8 = 0;
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    *param_1 = '\0';
  }
  if ((param_3 == 0) || (*(longlong *)(param_3 + 0x18) == 0)) {
    return 0;
  }
  if (param_4 != 0) goto LAB_1801b99c9;
  uVar3 = FUN_1801b96c0();
  lVar11 = (longlong)(int)uVar3;
  if (uVar3 == 0) goto LAB_1801b99c9;
  if (uVar3 < 0x4ab) {
    if (*(int *)(&DAT_180314810 + lVar11 * 0x28) != 0) {
      puVar7 = (&PTR_s_undefined_180314808)[lVar11 * 5];
      goto LAB_1801b98de;
    }
    local_f8 = 0x11a;
LAB_1801b98f1:
    FUN_1801a70c0(8,0x66,0x65,"crypto\\objects\\obj_dat.c");
  }
  else if (DAT_1803c9338 != 0) {
    local_d0 = local_b8;
    local_d8[0] = 3;
    local_a8 = uVar3;
    lVar6 = FUN_1801e5190(DAT_1803c9338,local_d8);
    if (lVar6 == 0) {
      local_f8 = 0x128;
      goto LAB_1801b98f1;
    }
    puVar7 = *(undefined **)(*(longlong *)(lVar6 + 8) + 8);
LAB_1801b98de:
    if (puVar7 != (undefined *)0x0) goto LAB_1801b997c;
  }
  if (uVar3 < 0x4ab) {
    if (*(int *)(&DAT_180314810 + lVar11 * 0x28) != 0) {
      ppuVar8 = &PTR_s_UNDEF_180314800 + lVar11 * 5;
LAB_1801b9974:
      puVar7 = *ppuVar8;
      if (puVar7 != (undefined *)0x0) {
LAB_1801b997c:
        if (param_1 != (char *)0x0) {
          FUN_1801ba810(param_1,puVar7,uVar14);
        }
        uVar14 = 0xffffffffffffffff;
        do {
          uVar14 = uVar14 + 1;
        } while (puVar7[uVar14] != '\0');
        return uVar14 & 0xffffffff;
      }
      goto LAB_1801b99c9;
    }
    local_f8 = 0xff;
  }
  else {
    if (DAT_1803c9338 == 0) goto LAB_1801b99c9;
    local_c0 = local_90;
    local_c8[0] = 3;
    local_80 = uVar3;
    lVar11 = FUN_1801e5190(DAT_1803c9338,local_c8);
    if (lVar11 != 0) {
      ppuVar8 = *(undefined ***)(lVar11 + 8);
      goto LAB_1801b9974;
    }
    local_f8 = 0x10d;
  }
  FUN_1801a70c0();
LAB_1801b99c9:
  lVar11 = 0;
  pbVar13 = *(byte **)(param_3 + 0x18);
  local_e0 = 1;
  iVar5 = *(int *)(param_3 + 0x14);
  iVar4 = local_e4;
  if (0x24a < *(int *)(param_3 + 0x14)) {
LAB_1801b9a3b:
    FUN_180198910(lVar11);
    uVar14 = 0xffffffff;
LAB_1801b9a6e:
    return uVar14;
  }
joined_r0x0001801b99ef:
  local_e4 = iVar5;
  if (0 < local_e4) {
    uVar12 = 0;
    bVar2 = false;
LAB_1801b9a10:
    do {
      bVar1 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      local_e4 = local_e4 + -1;
      if ((local_e4 == 0) && ((char)bVar1 < '\0')) goto LAB_1801b9a3b;
      if (bVar2) {
        iVar4 = FUN_1801bb790(lVar11,bVar1 & 0x7f);
        if (iVar4 == 0) goto LAB_1801b9a3b;
      }
      else {
        uVar12 = (ulonglong)((uint)uVar12 | bVar1 & 0x7f);
      }
      uVar3 = (uint)uVar12;
      if (-1 < (char)bVar1) goto LAB_1801b9afa;
      if (!bVar2) {
        if (uVar3 < 0x2000000) {
          uVar12 = (ulonglong)(uVar3 << 7);
          goto LAB_1801b9a10;
        }
        if (((lVar11 == 0) && (lVar11 = FUN_180198b30(), lVar11 == 0)) ||
           (iVar4 = FUN_180198f20(lVar11,uVar12), iVar4 == 0)) goto LAB_1801b9a3b;
        bVar2 = true;
      }
      iVar4 = FUN_1801ee8d0(lVar11,lVar11,7);
      if (iVar4 == 0) goto LAB_1801b9a3b;
    } while( true );
  }
  local_e4 = iVar4;
  FUN_180198910(lVar11);
  uVar14 = (ulonglong)local_e8;
  goto LAB_1801b9a6e;
LAB_1801b9afa:
  if (local_e0 != 0) {
    local_e0 = 0;
    if (uVar3 < 0x50) {
      iVar4 = (int)(uVar12 / 0x28);
      uVar12 = (ulonglong)(uVar3 + iVar4 * -0x28);
    }
    else {
      iVar4 = 2;
      if (bVar2) {
        iVar5 = FUN_1801bbca0(lVar11,0x50);
        if (iVar5 == 0) goto LAB_1801b9a3b;
      }
      else {
        uVar12 = (ulonglong)(uVar3 - 0x50);
      }
    }
    if ((param_1 != (char *)0x0) && (1 < (int)uVar14)) {
      *param_1 = (char)iVar4 + '0';
      param_1 = param_1 + 1;
      uVar14 = (ulonglong)((int)uVar14 - 1);
      *param_1 = '\0';
    }
    local_e8 = local_e8 + 1;
  }
  iVar4 = (int)uVar14;
  if (bVar2) {
    lVar6 = FUN_180199640(lVar11);
    if (lVar6 == 0) goto LAB_1801b9a3b;
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (*(char *)(lVar6 + lVar9) != '\0');
    iVar5 = (int)lVar9;
    if (param_1 != (char *)0x0) {
      if (1 < iVar4) {
        *param_1 = '.';
        param_1 = param_1 + 1;
        iVar4 = iVar4 + -1;
        *param_1 = '\0';
      }
      FUN_1801ba810(param_1,lVar6,(longlong)iVar4);
      if (iVar4 < iVar5) {
        param_1 = param_1 + iVar4;
        uVar14 = 0;
      }
      else {
        param_1 = param_1 + iVar5;
        uVar14 = (ulonglong)(uint)(iVar4 - iVar5);
      }
    }
    local_e8 = local_e8 + 1 + iVar5;
    FUN_180195e10(lVar6,"crypto\\objects\\obj_dat.c",0x20b);
    iVar5 = local_e4;
    iVar4 = local_e4;
  }
  else {
    FUN_180196a10(local_68,0x1a,&DAT_18032bb0c,uVar12);
    lVar6 = -1;
    do {
      lVar10 = lVar6 + 1;
      lVar9 = lVar6 + 1;
      lVar6 = lVar10;
    } while (local_68[lVar9] != '\0');
    iVar5 = (int)lVar10;
    if ((param_1 != (char *)0x0) && (0 < iVar4)) {
      FUN_1801ba810(param_1,local_68,(longlong)iVar4);
      if (iVar4 < iVar5) {
        param_1 = param_1 + iVar4;
        uVar14 = 0;
      }
      else {
        param_1 = param_1 + iVar5;
        uVar14 = (ulonglong)(uint)(iVar4 - iVar5);
      }
    }
    local_e8 = local_e8 + iVar5;
    iVar5 = local_e4;
    iVar4 = local_e4;
  }
  goto joined_r0x0001801b99ef;
}



// ===== FUN_1801b9c80 @ 1801b9c80 (size 291)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801b9c80(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_48 [2];
  byte **local_40;
  byte *local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x1801b9c8c;
  if (DAT_1803c9338 != 0) {
    local_40 = local_38;
    local_48[0] = 1;
    local_38[0] = param_1;
    lVar5 = FUN_1801e5190(DAT_1803c9338,local_48);
    if (lVar5 != 0) {
      return *(undefined4 *)(*(longlong *)(lVar5 + 8) + 0x10);
    }
    param_1 = local_38[0];
  }
  iVar8 = 0;
  iVar9 = 0x4a2;
  do {
    iVar2 = (iVar9 + iVar8) / 2;
    uVar7 = (ulonglong)*(uint *)(&DAT_1803202c0 + iVar2 * 4);
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar6;
      if (bVar1 != pbVar6[(longlong)(&PTR_s_UNDEF_180314800)[uVar7 * 5] - (longlong)param_1]) {
        uVar3 = -(uint)(bVar1 < pbVar6[(longlong)(&PTR_s_UNDEF_180314800)[uVar7 * 5] -
                                       (longlong)param_1]) | 1;
        goto LAB_1801b9d59;
      }
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_1801b9d59:
    if ((int)uVar3 < 0) {
      iVar9 = iVar2;
    }
    else {
      if ((int)uVar3 < 1) break;
      iVar8 = iVar2 + 1;
    }
  } while (iVar8 < iVar9);
  if ((uVar3 == 0) && ((uint *)(&DAT_1803202c0 + iVar2 * 4) != (uint *)0x0)) {
    uVar4 = *(undefined4 *)(&DAT_180314810 + uVar7 * 0x28);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_1801b9db0 @ 1801b9db0 (size 535)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined ** FUN_1801b9db0(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  longlong lVar5;
  longlong local_res18;
  longlong local_res20;
  undefined4 uVar6;
  undefined4 local_58 [2];
  undefined1 *local_50;
  undefined1 local_48 [16];
  uint local_38;
  
  if (param_2 != 0) {
LAB_1801b9e9c:
    iVar2 = FUN_18019ab40(0,0,param_1,0xffffffff);
    if (0 < iVar2) {
      iVar3 = FUN_18019a830(0,iVar2,6);
      if (-1 < iVar3) {
        lVar5 = FUN_180195dc0((longlong)iVar3,"crypto\\objects\\obj_dat.c",0x17c);
        if (lVar5 == 0) {
          FUN_1801a70c0(8,0x6c,0x41,"crypto\\objects\\obj_dat.c",0x17d);
          ppuVar4 = (undefined **)0x0;
        }
        else {
          local_res18 = lVar5;
          FUN_18019a8a0(&local_res18,0,iVar2,6,0);
          FUN_18019ab40(local_res18,iVar2,param_1,0xffffffff);
          local_res20 = lVar5;
          ppuVar4 = (undefined **)FUN_18019b220(0,&local_res20,iVar3);
          FUN_180195e10(lVar5,"crypto\\objects\\obj_dat.c",0x189);
        }
        return ppuVar4;
      }
    }
    return (undefined **)0x0;
  }
  uVar1 = FUN_1801b9c80();
  if (uVar1 == 0) {
    uVar1 = FUN_1801b9360(param_1);
    if (uVar1 == 0) goto LAB_1801b9e9c;
  }
  if (uVar1 < 0x4ab) {
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (longlong)(int)uVar1;
      if (*(int *)(&DAT_180314810 + lVar5 * 0x28) == 0) {
        uVar6 = 0xe3;
        goto LAB_1801b9e76;
      }
    }
    return &PTR_s_UNDEF_180314800 + lVar5 * 5;
  }
  if (DAT_1803c9338 == 0) {
    uVar6 = 0xe8;
  }
  else {
    local_50 = local_48;
    local_58[0] = 3;
    local_38 = uVar1;
    lVar5 = FUN_1801e5190(DAT_1803c9338,local_58);
    if (lVar5 != 0) {
      return *(undefined ***)(lVar5 + 8);
    }
    uVar6 = 0xf2;
  }
LAB_1801b9e76:
  FUN_1801a70c0(8,0x67,0x65,"crypto\\objects\\obj_dat.c",uVar6);
  return (undefined **)0x0;
}



// ===== FUN_1801b9fd0 @ 1801b9fd0 (size 226)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801b9fd0(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  byte *pbVar6;
  longlong lVar7;
  bool bVar8;
  
  iVar2 = *param_1;
  uVar5 = iVar2 - *param_2;
  if (uVar5 == 0) {
    puVar3 = *(undefined8 **)(param_1 + 2);
    plVar4 = *(longlong **)(param_2 + 2);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        pbVar6 = (byte *)*puVar3;
        if (pbVar6 == (byte *)0x0) {
          return 0xffffffff;
        }
        if (*plVar4 == 0) {
          return 1;
        }
        lVar7 = *plVar4 - (longlong)pbVar6;
        while( true ) {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < pbVar6[lVar7];
          if (bVar1 != pbVar6[lVar7]) break;
          pbVar6 = pbVar6 + 1;
          if (bVar1 == 0) {
            return 0;
          }
        }
LAB_1801ba086:
        return -(uint)bVar8 | 1;
      }
      if (iVar2 == 2) {
        pbVar6 = (byte *)puVar3[1];
        if (pbVar6 == (byte *)0x0) {
          return 0xffffffff;
        }
        if (plVar4[1] == 0) {
          return 1;
        }
        lVar7 = plVar4[1] - (longlong)pbVar6;
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < pbVar6[lVar7];
          if (bVar1 != pbVar6[lVar7]) goto LAB_1801ba086;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
      }
      else if (iVar2 == 3) {
        return *(int *)(puVar3 + 2) - (int)plVar4[2];
      }
      return 0;
    }
    uVar5 = *(int *)((longlong)puVar3 + 0x14) - *(int *)((longlong)plVar4 + 0x14);
    if (uVar5 == 0) {
      uVar5 = memcmp((void *)puVar3[3],(void *)plVar4[3],(longlong)*(int *)((longlong)puVar3 + 0x14)
                    );
      return uVar5;
    }
  }
  return uVar5;
}



// ===== FUN_1801ba0c0 @ 1801ba0c0 (size 186)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801ba0c0(int *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 2);
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar1 = *(uint *)((longlong)puVar2 + 0x14);
    uVar3 = uVar1 << 0x14;
    if (0 < (int)uVar1) {
      uVar6 = (ulonglong)uVar1;
      pbVar5 = (byte *)puVar2[3];
      iVar4 = 0;
      do {
        uVar3 = uVar3 ^ (uint)*pbVar5 << ((char)iVar4 + (char)(iVar4 / 0x18) * -0x18 & 0x1fU);
        uVar6 = uVar6 - 1;
        pbVar5 = pbVar5 + 1;
        iVar4 = iVar4 + 3;
      } while (uVar6 != 0);
    }
  }
  else if (iVar4 == 1) {
    uVar3 = FUN_1801e51e0(*puVar2);
  }
  else if (iVar4 == 2) {
    uVar3 = FUN_1801e51e0(puVar2[1]);
  }
  else {
    if (iVar4 != 3) {
      return 0;
    }
    uVar3 = *(uint *)(puVar2 + 2);
  }
  return *param_1 << 0x1e | uVar3 & 0x3fffffff;
}



// ===== FUN_1801ba1f0 @ 1801ba1f0 (size 117)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801ba1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_1803c9338 != 0) {
    FUN_1801de000(DAT_1803c9338,0,param_3,param_4,0x1801ba1fa);
    FUN_1801e4d70(DAT_1803c9338,&LAB_1801ba180);
    FUN_1801e4d70(DAT_1803c9338,&LAB_1801ba1a0);
    FUN_1801e4d70(DAT_1803c9338,FUN_1801ba1b0);
    FUN_1801e4e70(DAT_1803c9338);
    DAT_1803c9338 = 0;
  }
  return;
}



// ===== FUN_1801ba270 @ 1801ba270 (size 163)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_1801ba270(void *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x1801ba280;
  if ((param_1 == (void *)0x0) || (0x7ffffffe < param_2)) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_180195dc0(param_2,param_3,param_4);
  if (_Dst == (void *)0x0) {
    FUN_1801a70c0(0xf,0x73,0x41,"crypto\\o_str.c",0x42,uVar1);
    return (void *)0x0;
  }
  memcpy(_Dst,param_1,param_2);
  return _Dst;
}



// ===== FUN_1801ba320 @ 1801ba320 (size 100)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801ba320(char *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  cVar1 = *param_1;
  pcVar4 = param_1;
  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  lVar3 = FUN_180195dc0((uVar2 & 0x7fffffff) + 1);
  if (lVar3 != 0) {
    lVar5 = lVar3 - (longlong)param_1;
    do {
      cVar1 = *param_1;
      param_1[lVar5] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  return lVar3;
}



// ===== FUN_1801ba390 @ 1801ba390 (size 131)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_1801ba390(char *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  void *_Dst;
  size_t _Size;
  
  pcVar1 = param_1;
  if (param_1 == (char *)0x0) {
    return (void *)0x0;
  }
  for (; (param_2 != 0 && (param_2 = param_2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
  }
  _Size = (longlong)pcVar1 - (longlong)param_1;
  _Dst = (void *)FUN_180195dc0(_Size + 1,param_3,param_4);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = 0;
  }
  return _Dst;
}



// ===== FUN_1801ba420 @ 1801ba420 (size 209)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_1801ba420(byte *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801ba430;
  uVar3 = (ulonglong)param_2;
  if (param_2 == 0) {
    pcVar1 = (char *)FUN_180196100(1,"crypto\\o_str.c",200);
    return pcVar1;
  }
  pcVar1 = (char *)FUN_180195dc0((longlong)(int)(param_2 * 3),"crypto\\o_str.c",0xcb);
  if (pcVar1 == (char *)0x0) {
    FUN_1801a70c0(0xf,0x75,0x41,"crypto\\o_str.c",0xcc,uVar4);
    return (char *)0x0;
  }
  pcVar2 = pcVar1;
  if (0 < (int)param_2) {
    do {
      *pcVar2 = "0123456789ABCDEF"[*param_1 >> 4];
      pcVar2[1] = "0123456789ABCDEF"[*param_1 & 0xf];
      pcVar2[2] = ':';
      pcVar2 = pcVar2 + 3;
      uVar3 = uVar3 - 1;
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
  pcVar2[-1] = '\0';
  return pcVar1;
}



// ===== FUN_1801ba500 @ 1801ba500 (size 139)

undefined8 FUN_1801ba500(undefined1 param_1)

{
  switch(param_1) {
  case 0x30:
    return 0;
  case 0x31:
    return 1;
  case 0x32:
    return 2;
  case 0x33:
    return 3;
  case 0x34:
    return 4;
  case 0x35:
    return 5;
  case 0x36:
    return 6;
  case 0x37:
    return 7;
  case 0x38:
    return 8;
  case 0x39:
    return 9;
  default:
    return 0xffffffff;
  case 0x41:
  case 0x61:
    return 10;
  case 0x42:
  case 0x62:
    return 0xb;
  case 0x43:
  case 99:
    return 0xc;
  case 0x44:
  case 100:
    return 0xd;
  case 0x45:
  case 0x65:
    return 0xe;
  case 0x46:
  case 0x66:
    return 0xf;
  }
}



// ===== FUN_1801ba610 @ 1801ba610 (size 382)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * FUN_1801ba610(char *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1801ba620;
  cVar1 = *param_1;
  pcVar7 = param_1;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  pbVar6 = (byte *)FUN_180195dc0(uVar3 >> 1 & 0x3fffffff,"crypto\\o_str.c",0x9c);
  if (pbVar6 == (byte *)0x0) {
    FUN_1801a70c0(0xf,0x76,0x41,"crypto\\o_str.c",0x9d,uVar9);
    return (byte *)0x0;
  }
  cVar1 = *param_1;
  pbVar8 = pbVar6;
  do {
    if (cVar1 == '\0') {
      if (param_2 != (int *)0x0) {
        *param_2 = (int)pbVar8 - (int)pbVar6;
      }
      return pbVar6;
    }
    pcVar7 = param_1 + 1;
    if (cVar1 != ':') {
      cVar2 = *pcVar7;
      pcVar7 = param_1 + 2;
      if (cVar2 == '\0') {
        FUN_1801a70c0(0xf,0x76,0x67,"crypto\\o_str.c",0xa7,uVar9);
        FUN_180195e10(pbVar6,"crypto\\o_str.c",0xa8);
        return (byte *)0x0;
      }
      iVar4 = FUN_1801ba500();
      iVar5 = FUN_1801ba500(cVar1);
      if ((iVar4 < 0) || (iVar5 < 0)) {
        FUN_180195e10(pbVar6,"crypto\\o_str.c",0xae);
        FUN_1801a70c0(0xf,0x76,0x66,"crypto\\o_str.c",0xaf);
        return (byte *)0x0;
      }
      *pbVar8 = (char)iVar5 << 4 | (byte)iVar4;
      pbVar8 = pbVar8 + 1;
    }
    cVar1 = *pcVar7;
    param_1 = pcVar7;
  } while( true );
}



// ===== FUN_1801ba790 @ 1801ba790 (size 124)

longlong FUN_1801ba790(char *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = 0;
  lVar3 = 0;
  for (; (param_3 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    lVar3 = lVar3 + 1;
    param_3 = param_3 - 1;
  }
  lVar4 = 0;
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    lVar4 = lVar4 + 1;
    param_3 = param_3 - 1;
  }
  if (param_3 != 0) {
    *param_1 = '\0';
  }
  cVar1 = *param_2;
  for (; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  return (ulonglong)(uVar2 & 0x7fffffff) + lVar4 + lVar3;
}



// ===== FUN_1801ba810 @ 1801ba810 (size 89)

longlong FUN_1801ba810(char *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = 0;
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    lVar3 = lVar3 + 1;
    param_3 = param_3 - 1;
  }
  if (param_3 != 0) {
    *param_1 = '\0';
  }
  cVar1 = *param_2;
  for (; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  return (ulonglong)(uVar2 & 0x7fffffff) + lVar3;
}



// ===== FUN_1801ba8c0 @ 1801ba8c0 (size 477)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FILE * FUN_1801ba8c0(LPCSTR param_1,LPCSTR param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  FILE *pFVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  int cbMultiByte;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uStackY_80;
  undefined1 auStackY_78 [32];
  wchar_t local_48 [8];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1801ba8d3;
  local_38 = DAT_1803c3d80 ^ (ulonglong)local_48;
  cVar1 = *param_1;
  pcVar5 = param_1;
  for (uVar9 = 0; (cVar1 != '\0' && (uVar9 < 0x80000000)); uVar9 = uVar9 + 1) {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  cbMultiByte = (uVar9 & 0x7fffffff) + 1;
  DVar4 = 8;
  uStackY_80 = 0x1801ba940;
  iVar3 = MultiByteToWideChar(0xfde9,8,param_1,cbMultiByte,(LPWSTR)0x0,0);
  if (iVar3 < 1) {
    uStackY_80 = 0x1801ba94c;
    DVar4 = GetLastError();
    if (DVar4 == 0x3ec) {
      DVar4 = 0;
      uStackY_80 = 0x1801ba973;
      iVar3 = MultiByteToWideChar(0xfde9,0,param_1,cbMultiByte,(LPWSTR)0x0,0);
      if (0 < iVar3) goto LAB_1801ba99b;
    }
    puVar10 = auStackY_78;
    puVar11 = auStackY_78;
    uStackY_80 = 0x1801ba97f;
    DVar4 = GetLastError();
    if (DVar4 == 0x459) {
LAB_1801ba98a:
      *(undefined8 *)(puVar10 + -8) = 0x1801ba996;
      pFVar6 = fopen(param_1,param_2);
      puVar11 = puVar10;
      goto LAB_1801baa7c;
    }
  }
  else {
LAB_1801ba99b:
    uVar8 = (longlong)iVar3 * 2 + 0xf;
    if (uVar8 <= (ulonglong)((longlong)iVar3 * 2)) {
      uVar8 = 0xffffffffffffff0;
    }
    uStackY_80 = 0x1801ba9c0;
    lVar2 = -(uVar8 & 0xfffffffffffffff0);
    *(int *)((longlong)local_48 + lVar2 + -8) = iVar3;
    *(wchar_t **)(auStackY_78 + lVar2 + 0x20) = (wchar_t *)((longlong)local_48 + lVar2);
    *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x1801ba9e5;
    iVar3 = MultiByteToWideChar(0xfde9,DVar4,param_1,cbMultiByte,
                                *(LPWSTR *)(auStackY_78 + lVar2 + 0x20),
                                *(int *)((longlong)local_48 + lVar2 + -8));
    puVar11 = auStackY_78 + lVar2;
    if (iVar3 != 0) {
      cVar1 = *param_2;
      pcVar5 = param_2;
      for (uVar9 = 0; (cVar1 != '\0' && (uVar9 < 0x80000000)); uVar9 = uVar9 + 1) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      *(undefined4 *)((longlong)local_48 + lVar2 + -8) = 8;
      *(wchar_t **)(auStackY_78 + lVar2 + 0x20) = local_48;
      *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x1801baa3d;
      iVar3 = MultiByteToWideChar(0xfde9,0,param_2,(uVar9 & 0x7fffffff) + 1,
                                  *(LPWSTR *)(auStackY_78 + lVar2 + 0x20),
                                  *(int *)((longlong)local_48 + lVar2 + -8));
      puVar11 = auStackY_78 + lVar2;
      if (iVar3 != 0) {
        *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x1801baa4e;
        pFVar6 = _wfopen((wchar_t *)((longlong)local_48 + lVar2),local_48);
        puVar11 = auStackY_78 + lVar2;
        if (pFVar6 != (FILE *)0x0) goto LAB_1801baa7c;
        *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x1801baa5c;
        piVar7 = _errno();
        puVar10 = auStackY_78 + lVar2;
        if (*piVar7 != 2) {
          *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x1801baa6b;
          piVar7 = _errno();
          puVar10 = auStackY_78 + lVar2;
          puVar11 = auStackY_78 + lVar2;
          if (*piVar7 != 9) goto LAB_1801baa7c;
        }
        goto LAB_1801ba98a;
      }
    }
  }
  pFVar6 = (FILE *)0x0;
LAB_1801baa7c:
  *(undefined8 *)(puVar11 + -8) = 0x1801baa88;
  return pFVar6;
}



// ===== FUN_1801bab10 @ 1801bab10 (size 131)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_1801bab10(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = FUN_180198770(param_1 + 2,param_2 + 2);
  if (((lVar1 == 0) || (lVar1 = FUN_180198770(param_1 + 8,param_2 + 8), lVar1 == 0)) ||
     (lVar1 = FUN_180198770(param_1 + 0xe,param_2 + 0xe), lVar1 == 0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  return param_1;
}



// ===== FUN_1801baba0 @ 1801baba0 (size 82)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801baba0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1801984d0(param_1 + 8);
    FUN_1801984d0(param_1 + 0x20);
    FUN_1801984d0(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
      FUN_180195e10(param_1,"crypto\\bn\\bn_mont.c",0x104);
    }
  }
  return;
}



// ===== FUN_1801bac00 @ 1801bac00 (size 149)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_1801bac00(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801bac0c;
  puVar1 = (undefined4 *)FUN_180195dc0(0x68,"crypto\\bn\\bn_mont.c",0xe8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_1801a70c0(3,0x95,0x41,"crypto\\bn\\bn_mont.c",0xe9,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  FUN_180199560(puVar1 + 2);
  FUN_180199560(puVar1 + 8);
  FUN_180199560(puVar1 + 0xe);
  *(undefined8 *)(puVar1 + 0x16) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  puVar1[0x18] = 1;
  return puVar1;
}



// ===== FUN_1801baca0 @ 1801baca0 (size 653)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801baca0(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong local_48 [2];
  longlong *local_38;
  uint local_30;
  undefined8 local_2c;
  undefined8 uStack_20;
  
  uStack_20 = 0x1801bacb4;
  uVar6 = 0;
  iVar2 = FUN_180198a80(param_2);
  if (iVar2 != 0) {
    return 0;
  }
  FUN_1801c9140(param_3);
  puVar3 = (undefined8 *)FUN_1801c8e90(param_3);
  if ((puVar3 != (undefined8 *)0x0) && (lVar4 = FUN_180198770(param_1 + 8,param_2), lVar4 != 0)) {
    iVar2 = FUN_180198990(param_2,4);
    if (iVar2 != 0) {
      FUN_180198ef0(param_1 + 8,4);
    }
    param_1[0xc] = 0;
    FUN_180199560(&local_38);
    local_38 = local_48;
    local_2c = 2;
    iVar2 = FUN_180198990(param_2,4);
    if (iVar2 != 0) {
      FUN_180198ef0(&local_38,4);
    }
    iVar2 = FUN_180198b90(param_2);
    *param_1 = iVar2 + 0x3f + (iVar2 + 0x3f >> 0x1f & 0x3fU) & 0xffffffc0;
    FUN_180198f20(param_1 + 2,0);
    iVar2 = FUN_180198e30(param_1 + 2,0x40);
    if (iVar2 != 0) {
      local_48[0] = *(longlong *)*param_2;
      local_48[1] = 0;
      local_30 = (uint)(local_48[0] != 0);
      iVar2 = FUN_180198a30(&local_38);
      if (iVar2 == 0) {
        lVar4 = FUN_1801ca950(puVar3,param_1 + 2,&local_38,param_3);
        if (lVar4 == 0) goto LAB_1801baf09;
      }
      else {
        FUN_180198f20(puVar3,0);
      }
      iVar2 = FUN_1801ee8d0(puVar3,puVar3,0x40);
      if (iVar2 != 0) {
        iVar2 = FUN_180198a80(puVar3);
        if (iVar2 == 0) {
          iVar2 = FUN_1801bbca0(puVar3,1);
        }
        else {
          iVar2 = FUN_180198f20(puVar3,0xffffffffffffffff);
        }
        if ((iVar2 != 0) && (iVar2 = FUN_1801eeff0(puVar3,0,puVar3,&local_38,param_3), iVar2 != 0))
        {
          if (*(int *)(puVar3 + 1) < 1) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)*puVar3;
          }
          *(undefined8 *)(param_1 + 0x14) = uVar5;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          FUN_180198f20(param_1 + 2,0);
          iVar2 = FUN_180198e30(param_1 + 2,*param_1 * 2);
          if ((iVar2 != 0) &&
             (iVar2 = FUN_1801eeff0(0,param_1 + 2,param_1 + 2,param_1 + 8,param_3), iVar2 != 0)) {
            uVar1 = param_1[10];
            for (lVar4 = (longlong)(int)param_1[4]; lVar4 < (int)uVar1; lVar4 = lVar4 + 1) {
              *(undefined8 *)(*(longlong *)(param_1 + 2) + lVar4 * 8) = 0;
            }
            param_1[4] = uVar1;
            uVar6 = 1;
          }
        }
      }
    }
  }
LAB_1801baf09:
  FUN_1801c8d50(param_3);
  return uVar6;
}



// ===== FUN_1801baf30 @ 1801baf30 (size 294)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
FUN_1801baf30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801baf50;
  FUN_1801add90(param_2);
  puVar2 = (undefined4 *)*param_1;
  FUN_1801ade50(param_2);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_180195dc0(0x68,"crypto\\bn\\bn_mont.c",0xe8);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_1801a70c0(3,0x95,0x41,"crypto\\bn\\bn_mont.c",0xe9,uVar3);
      return (undefined4 *)0x0;
    }
    *puVar2 = 0;
    FUN_180199560(puVar2 + 2);
    FUN_180199560(puVar2 + 8);
    FUN_180199560(puVar2 + 0xe);
    *(undefined8 *)(puVar2 + 0x16) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    puVar2[0x18] = 1;
    iVar1 = FUN_1801baca0(puVar2,param_3,param_4);
    if (iVar1 == 0) {
      FUN_1801baba0(puVar2);
      return (undefined4 *)0x0;
    }
    FUN_1801add90(param_2);
    if (*param_1 == 0) {
      *param_1 = (longlong)puVar2;
    }
    else {
      FUN_1801baba0(puVar2);
      puVar2 = (undefined4 *)*param_1;
    }
    FUN_1801ade50(param_2);
  }
  return puVar2;
}



// ===== FUN_1801bb060 @ 1801bb060 (size 146)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1801bb060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  FUN_1801c9140(param_4);
  lVar2 = FUN_1801c8e90(param_4);
  if (lVar2 != 0) {
    lVar3 = FUN_180198770(lVar2,param_2);
    if (lVar3 != 0) {
      uVar1 = FUN_1801bb1d0(param_1,lVar2,param_3);
    }
  }
  FUN_1801c8d50(param_4);
  FUN_180199370(param_1);
  return uVar1;
}



// ===== FUN_1801bb140 @ 1801bb140 (size 138)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1801bb140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  FUN_1801c9140(param_4);
  lVar2 = FUN_1801c8e90(param_4);
  if (lVar2 != 0) {
    lVar3 = FUN_180198770(lVar2,param_2);
    if (lVar3 != 0) {
      uVar1 = FUN_1801bb1d0(param_1,lVar2,param_3);
    }
  }
  FUN_1801c8d50(param_4);
  return uVar1;
}



// ===== FUN_1801bb1d0 @ 1801bb1d0 (size 1107)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801bb1d0(ulonglong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  int iVar18;
  ulonglong uVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  
  uVar3 = *(uint *)(param_3 + 0x28);
  uVar24 = (ulonglong)uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  uVar13 = uVar3 * 2;
  lVar14 = FUN_180199580(param_2,uVar13);
  if (lVar14 != 0) {
    *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
    iVar11 = _UNK_18032bc64;
    iVar10 = _DAT_18032bc60;
    iVar21 = 0;
    iVar18 = (int)param_2[1];
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    plVar20 = (longlong *)*param_2;
    if ((0 < (int)uVar13) && (7 < uVar13)) {
      uVar12 = uVar13 & 0x80000007;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
      }
      puVar17 = (ulonglong *)(plVar20 + 4);
      iVar22 = 4;
      do {
        iVar25 = iVar21 + iVar10;
        iVar26 = iVar21 + iVar11;
        iVar21 = iVar21 + 8;
        puVar17[-4] = -(ulonglong)((uint)(iVar25 - iVar18) >> 0x1f) & puVar17[-4];
        puVar17[-3] = -(ulonglong)((uint)(iVar26 - iVar18) >> 0x1f) & puVar17[-3];
        puVar17[-2] = -(ulonglong)((uint)((iVar22 + -2 + iVar10) - iVar18) >> 0x1f) & puVar17[-2];
        puVar17[-1] = -(ulonglong)((uint)((iVar22 + -2 + iVar11) - iVar18) >> 0x1f) & puVar17[-1];
        *puVar17 = -(ulonglong)((uint)((iVar22 + iVar10) - iVar18) >> 0x1f) & *puVar17;
        puVar17[1] = -(ulonglong)((uint)((iVar22 + iVar11) - iVar18) >> 0x1f) & puVar17[1];
        puVar17[2] = -(ulonglong)((uint)((iVar22 + 2 + iVar10) - iVar18) >> 0x1f) & puVar17[2];
        puVar17[3] = -(ulonglong)((uint)((iVar22 + 2 + iVar11) - iVar18) >> 0x1f) & puVar17[3];
        puVar17 = puVar17 + 8;
        iVar22 = iVar22 + 8;
      } while (iVar21 < (int)(uVar13 - uVar12));
    }
    lVar14 = (longlong)iVar21;
    for (; lVar14 < (int)uVar13; lVar14 = lVar14 + 1) {
      plVar20[lVar14] = plVar20[lVar14] & -(ulonglong)((uint)(iVar21 - iVar18) >> 0x1f);
      iVar21 = iVar21 + 1;
    }
    *(uint *)(param_2 + 1) = uVar13;
    uVar19 = 0;
    lVar14 = *(longlong *)(param_3 + 0x50);
    lVar23 = (longlong)(int)uVar3;
    if (0 < (int)uVar3) {
      do {
        lVar15 = FUN_1801efe50(plVar20,uVar4,uVar3,lVar14 * *plVar20);
        uVar5 = plVar20[lVar23];
        uVar16 = lVar15 + uVar5 + uVar19;
        plVar20[lVar23] = uVar16;
        if (uVar16 != uVar5) {
          uVar19 = 1;
        }
        uVar19 = uVar19 & uVar16 <= uVar5;
        plVar20 = plVar20 + 1;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    lVar14 = FUN_180199580(param_1,uVar3);
    if (lVar14 != 0) {
      uVar5 = *param_1;
      *(uint *)(param_1 + 1) = uVar3;
      *(int *)(param_1 + 2) = (int)param_2[2];
      uVar24 = *param_2 + lVar23 * 8;
      lVar14 = FUN_1801f12c0(uVar5,uVar24,uVar4,uVar3);
      uVar19 = uVar19 - lVar14;
      iVar18 = 0;
      if (((0 < (int)uVar3) && (7 < uVar3)) &&
         ((uVar5 + (longlong)(int)(uVar3 - 1) * 8 < uVar24 ||
          (uVar24 + (longlong)(int)(uVar3 - 1) * 8 < uVar5)))) {
        uVar13 = uVar3 & 0x80000007;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
        }
        uVar16 = ~uVar19 & _DAT_180307690;
        uVar27 = ~uVar19 & _UNK_180307698;
        lVar14 = uVar5 - uVar24;
        lVar15 = 0;
        puVar17 = (ulonglong *)(uVar24 + 0x10);
        do {
          puVar1 = (ulonglong *)(lVar14 + -0x10 + (longlong)puVar17);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = puVar17 + 8;
          iVar18 = iVar18 + 8;
          lVar15 = lVar15 + 8;
          uVar8 = puVar17[-2];
          uVar9 = puVar17[-1];
          puVar17[-2] = 0;
          puVar17[-1] = 0;
          puVar2 = (ulonglong *)(lVar14 + -0x50 + (longlong)puVar1);
          *puVar2 = uVar16 & uVar6 | uVar8 & uVar19;
          puVar2[1] = uVar27 & uVar7 | uVar9 & uVar19;
          puVar2 = (ulonglong *)(lVar14 + -0x40 + (longlong)puVar1);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = *puVar17;
          uVar9 = puVar17[1];
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar2 = (ulonglong *)(lVar14 + -0x40 + (longlong)puVar1);
          *puVar2 = uVar16 & uVar6 | uVar8 & uVar19;
          puVar2[1] = uVar27 & uVar7 | uVar9 & uVar19;
          puVar2 = (ulonglong *)(lVar14 + -0x30 + (longlong)puVar1);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar17[2];
          uVar9 = puVar17[3];
          puVar17[2] = 0;
          puVar17[3] = 0;
          puVar2 = (ulonglong *)(lVar14 + -0x30 + (longlong)puVar1);
          *puVar2 = uVar16 & uVar6 | uVar8 & uVar19;
          puVar2[1] = uVar27 & uVar7 | uVar9 & uVar19;
          puVar2 = (ulonglong *)(lVar14 + -0x20 + (longlong)puVar1);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar17[4];
          uVar9 = puVar17[5];
          puVar17[4] = 0;
          puVar17[5] = 0;
          puVar17 = (ulonglong *)(lVar14 + -0x20 + (longlong)puVar1);
          *puVar17 = uVar16 & uVar6 | uVar8 & uVar19;
          puVar17[1] = uVar27 & uVar7 | uVar9 & uVar19;
          puVar17 = puVar1;
        } while (lVar15 < (int)(uVar3 - uVar13));
      }
      lVar14 = (longlong)iVar18;
      if (lVar14 < lVar23) {
        lVar23 = lVar23 - lVar14;
        puVar17 = (ulonglong *)(uVar24 + lVar14 * 8);
        do {
          *(ulonglong *)((longlong)puVar17 + (uVar5 - uVar24)) =
               ~uVar19 & *(ulonglong *)((longlong)puVar17 + (uVar5 - uVar24)) | *puVar17 & uVar19;
          *puVar17 = 0;
          lVar23 = lVar23 + -1;
          puVar17 = puVar17 + 1;
        } while (lVar23 != 0);
      }
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801bb630 @ 1801bb630 (size 298)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1801bb630(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar2 = *(int *)(param_4 + 0x28);
  uVar4 = 0;
  if (((iVar2 - 2U < 0x1ff) && (*(int *)(param_2 + 1) == iVar2)) && (*(int *)(param_3 + 1) == iVar2)
     ) {
    lVar3 = FUN_180199580(param_1,iVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_18000acc0(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x20),param_4 + 0x50,
                          CONCAT44(uVar5,iVar2));
    if (iVar1 != 0) {
      *(uint *)(param_1 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2);
      *(int *)(param_1 + 1) = iVar2;
      return 1;
    }
  }
  if (iVar2 * 2 < *(int *)(param_2 + 1) + *(int *)(param_3 + 1)) {
    return 0;
  }
  FUN_1801c9140(param_5);
  lVar3 = FUN_1801c8e90(param_5);
  if (lVar3 != 0) {
    if (param_2 == param_3) {
      iVar2 = FUN_1801ef710(lVar3,param_2,param_5);
    }
    else {
      iVar2 = FUN_1801c95c0(lVar3,param_2,param_3,param_5);
    }
    if (iVar2 != 0) {
      iVar2 = FUN_1801bb1d0(param_1,lVar3,param_4);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = 1;
      }
    }
  }
  FUN_1801c8d50(param_5);
  return uVar4;
}



// ===== FUN_1801bb790 @ 1801bb790 (size 447)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801bb790(longlong *param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar2 = FUN_180198a80();
  if (iVar2 != 0) {
    uVar5 = FUN_180198f20(param_1,param_2);
    return uVar5;
  }
  if ((int)param_1[2] == 0) {
    iVar2 = 0;
    lVar6 = 0;
    do {
      uVar5 = param_2;
      if ((int)param_1[1] <= iVar2) break;
      uVar8 = *(longlong *)(*param_1 + lVar6) + param_2;
      *(ulonglong *)(*param_1 + lVar6) = uVar8;
      uVar5 = (ulonglong)(uVar8 < param_2);
      iVar2 = iVar2 + 1;
      lVar6 = lVar6 + 8;
      bVar1 = uVar8 < param_2;
      param_2 = uVar5;
    } while (bVar1);
    if (uVar5 == 0) {
      return 1;
    }
    if (iVar2 != (int)param_1[1]) {
      return 1;
    }
    lVar6 = FUN_180199580(param_1,(int)param_1[1] + 1);
    if (lVar6 == 0) {
      return 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    *(ulonglong *)(*param_1 + (longlong)iVar2 * 8) = uVar5;
    return 1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  iVar2 = FUN_180198a80(param_1);
  if (iVar2 != 0) {
    uVar3 = FUN_180198f20(param_1,param_2);
    uVar5 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      FUN_180198f00(param_1,1);
    }
    goto LAB_1801bb8be;
  }
  if ((int)param_1[2] != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    uVar3 = FUN_1801bb790(param_1,param_2);
    uVar5 = (ulonglong)uVar3;
    *(undefined4 *)(param_1 + 2) = 1;
    goto LAB_1801bb8be;
  }
  if ((int)param_1[1] == 1) {
    uVar5 = *(ulonglong *)*param_1;
    if (param_2 <= uVar5) goto LAB_1801bb855;
    *(ulonglong *)*param_1 = param_2 - uVar5;
    *(undefined4 *)(param_1 + 2) = 1;
  }
  else {
LAB_1801bb855:
    puVar7 = (ulonglong *)*param_1;
    iVar2 = 0;
    if (*puVar7 < param_2) {
      lVar6 = 0;
      lVar9 = 0;
      do {
        lVar6 = lVar6 + 1;
        iVar2 = iVar2 + 1;
        *(longlong *)(lVar9 + *param_1) = *(longlong *)(lVar9 + *param_1) - param_2;
        param_2 = 1;
        puVar7 = (ulonglong *)*param_1;
        lVar9 = lVar6 * 8;
      } while (puVar7[lVar6] == 0);
    }
    puVar7[iVar2] = puVar7[iVar2] - param_2;
    if ((*(longlong *)((longlong)iVar2 * 8 + *param_1) == 0) &&
       (iVar4 = (int)param_1[1] + -1, iVar2 == iVar4)) {
      *(int *)(param_1 + 1) = iVar4;
    }
  }
  uVar5 = 1;
LAB_1801bb8be:
  iVar2 = FUN_180198a80(param_1);
  if (iVar2 == 0) {
    *(uint *)(param_1 + 2) = (uint)((int)param_1[2] == 0);
  }
  return uVar5;
}



// ===== FUN_1801bb950 @ 1801bb950 (size 273)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801bb950(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    if ((int)param_1[1] == 0) {
      return 0;
    }
    cVar2 = FUN_180198c80(param_2);
    param_2 = param_2 << (0x40U - cVar2 & 0x3f);
    iVar3 = FUN_1801ee8d0(param_1,param_1);
    if (iVar3 != 0) {
      iVar3 = (int)param_1[1];
      lVar6 = (longlong)(iVar3 + -1);
      if (-1 < iVar3 + -1) {
        do {
          lVar1 = *(longlong *)(*param_1 + lVar6 * 8);
          lVar4 = FUN_1801efcc0(uVar5,lVar1,param_2);
          uVar5 = lVar1 - lVar4 * param_2;
          *(longlong *)(*param_1 + lVar6 * 8) = lVar4;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
        iVar3 = (int)param_1[1];
      }
      if ((0 < iVar3) && (*(longlong *)(*param_1 + -8 + (longlong)iVar3 * 8) == 0)) {
        *(int *)(param_1 + 1) = iVar3 + -1;
        iVar3 = iVar3 + -1;
      }
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      return uVar5 >> (0x40U - cVar2 & 0x3f);
    }
  }
  return 0xffffffffffffffff;
}



// ===== FUN_1801bba70 @ 1801bba70 (size 414)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801bba70(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar7 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x100000001) {
      iVar3 = (int)param_1[1] + -1;
      if (-1 < iVar3) {
        puVar8 = (ulonglong *)(*param_1 + (longlong)iVar3 * 8);
        do {
          uVar9 = *puVar8;
          puVar8 = puVar8 + -1;
          uVar7 = ((uVar9 >> 0x20 | uVar7 << 0x20) % param_2 << 0x20 | uVar9 & 0xffffffff) % param_2
          ;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      return uVar7;
    }
    plVar4 = (longlong *)FUN_180198800();
    if (plVar4 != (longlong *)0x0) {
      uVar9 = 0;
      if ((int)plVar4[1] != 0) {
        cVar2 = FUN_180198c80(param_2);
        lVar6 = param_2 << (0x40U - cVar2 & 0x3f);
        iVar3 = FUN_1801ee8d0(plVar4,plVar4);
        if (iVar3 == 0) {
          uVar7 = 0xffffffffffffffff;
        }
        else {
          iVar3 = (int)plVar4[1];
          lVar10 = (longlong)(iVar3 + -1);
          if (-1 < iVar3 + -1) {
            do {
              lVar1 = *(longlong *)(*plVar4 + lVar10 * 8);
              lVar5 = FUN_1801efcc0(uVar9,lVar1,lVar6);
              *(longlong *)(*plVar4 + lVar10 * 8) = lVar5;
              uVar9 = lVar1 - lVar5 * lVar6;
              lVar10 = lVar10 + -1;
            } while (-1 < lVar10);
            iVar3 = (int)plVar4[1];
          }
          if ((0 < iVar3) && (*(longlong *)(*plVar4 + -8 + (longlong)iVar3 * 8) == 0)) {
            *(int *)(plVar4 + 1) = iVar3 + -1;
            iVar3 = iVar3 + -1;
          }
          uVar7 = uVar9 >> (0x40U - cVar2 & 0x3f);
          if (iVar3 == 0) {
            *(undefined4 *)(plVar4 + 2) = 0;
          }
        }
      }
      FUN_180198910(plVar4);
      return uVar7;
    }
  }
  return 0xffffffffffffffff;
}



// ===== FUN_1801bbc10 @ 1801bbc10 (size 138)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801bbc10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((int)param_1[1] != 0) {
    if (param_2 == 0) {
      FUN_180198f20();
      return 1;
    }
    lVar1 = FUN_1801f08e0(*param_1,*param_1,(int)param_1[1],param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_180199580(param_1,(int)param_1[1] + 1);
      if (lVar2 == 0) {
        return 0;
      }
      *(longlong *)(*param_1 + (longlong)(int)param_1[1] * 8) = lVar1;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
  }
  return 1;
}



// ===== FUN_1801bbca0 @ 1801bbca0 (size 280)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801bbca0(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    iVar1 = FUN_180198a80();
    if (iVar1 != 0) {
      uVar2 = FUN_180198f20(param_1,param_2);
      if (uVar2 != 0) {
        FUN_180198f00(param_1,1);
      }
      return (ulonglong)uVar2;
    }
    if ((int)param_1[2] != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      uVar4 = FUN_1801bb790(param_1,param_2);
      *(undefined4 *)(param_1 + 2) = 1;
      return uVar4;
    }
    if ((int)param_1[1] == 1) {
      uVar4 = *(ulonglong *)*param_1;
      if (uVar4 < param_2) {
        *(ulonglong *)*param_1 = param_2 - uVar4;
        *(undefined4 *)(param_1 + 2) = 1;
        return 1;
      }
    }
    puVar6 = (ulonglong *)*param_1;
    iVar1 = 0;
    if (*puVar6 < param_2) {
      lVar5 = 0;
      lVar7 = 0;
      do {
        lVar5 = lVar5 + 1;
        iVar1 = iVar1 + 1;
        *(longlong *)(lVar7 + *param_1) = *(longlong *)(lVar7 + *param_1) - param_2;
        param_2 = 1;
        puVar6 = (ulonglong *)*param_1;
        lVar7 = lVar5 * 8;
      } while (puVar6[lVar5] == 0);
    }
    puVar6[iVar1] = puVar6[iVar1] - param_2;
    if ((*(longlong *)((longlong)iVar1 * 8 + *param_1) == 0) &&
       (iVar3 = (int)param_1[1] + -1, iVar1 == iVar3)) {
      *(int *)(param_1 + 1) = iVar3;
    }
  }
  return 1;
}



// ===== FUN_1801bbe20 @ 1801bbe20 (size 721)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801bbe20(code *param_1,undefined8 param_2,longlong param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  char *pcVar13;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  int local_1a0;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined8 local_188;
  code *local_180;
  char local_178 [304];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_1c8;
  iVar12 = 0;
  local_198 = 0;
  if (param_5 < 0) {
    param_5 = 0;
  }
  else if (0x40 < param_5) {
    param_5 = 0x40;
  }
  iVar2 = param_5;
  if (6 < param_5) {
    iVar2 = 6;
  }
  local_194 = 0;
  iVar2 = (param_5 - iVar2) + 3;
  local_190 = 0x10 - ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  iVar2 = param_4 / local_190;
  lVar6 = (longlong)local_190;
  local_18c = iVar2 + 1;
  if (param_4 <= iVar2 * local_190) {
    local_18c = iVar2;
  }
  if (0 < local_18c) {
    iVar2 = 0;
    local_188 = param_2;
    local_180 = param_1;
    do {
      iVar12 = local_198;
      local_1a8 = &PTR_1802ead18;
      local_1a0 = iVar2;
      iVar3 = FUN_180196a10(local_178,0x121,"%*s%04x - ");
      iVar8 = 0;
      uVar5 = (ulonglong)iVar3;
      lVar7 = 0;
      if (0 < lVar6) {
        pcVar13 = local_178 + uVar5;
        do {
          iVar12 = (int)uVar5;
          if (3 < 0x121U - (longlong)iVar12) {
            if (iVar2 + iVar8 < param_4) {
              uVar4 = 0x20;
              if (iVar8 == 7) {
                uVar4 = 0x2d;
              }
              local_1a8 = (undefined **)CONCAT44(local_1a8._4_4_,uVar4);
              FUN_180196a10(local_178 + iVar12,4,"%02x%c");
            }
            else {
              builtin_strncpy(pcVar13,"   ",4);
            }
            uVar5 = (ulonglong)(iVar12 + 3);
            pcVar13 = pcVar13 + 3;
          }
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar6);
        iVar12 = local_198;
      }
      lVar7 = (longlong)(int)uVar5;
      if (2 < 0x121U - lVar7) {
        uVar5 = (ulonglong)((int)uVar5 + 2);
        *(undefined2 *)(local_178 + lVar7) = DAT_18032bc84;
        local_178[lVar7 + 2] = DAT_18032bc86;
      }
      iVar3 = (int)uVar5;
      lVar7 = 0;
      if (0 < lVar6) {
        uVar10 = (longlong)iVar3;
        iVar8 = iVar2;
        do {
          iVar3 = (int)uVar5;
          if (param_4 <= iVar8) break;
          uVar11 = uVar10;
          if (1 < 0x121U - (longlong)iVar3) {
            cVar1 = *(char *)(iVar2 + lVar7 + param_3);
            cVar9 = '.';
            if ((byte)(cVar1 - 0x20U) < 0x5f) {
              cVar9 = cVar1;
            }
            uVar5 = (ulonglong)(iVar3 + 1);
            local_178[uVar10] = cVar9;
            uVar11 = uVar10 + 1;
            if (0x120 < uVar11) goto LAB_1801bc0ec;
            local_178[uVar10 + 1] = '\0';
          }
          iVar3 = (int)uVar5;
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 1;
          uVar10 = uVar11;
        } while (lVar7 < lVar6);
      }
      uVar5 = (ulonglong)iVar3;
      if (1 < 0x121 - uVar5) {
        local_178[uVar5] = '\n';
        uVar5 = (ulonglong)(iVar3 + 1);
        if (0x120 < uVar5) {
LAB_1801bc0ec:
                    /* WARNING: Subroutine does not return */
          FUN_1802e048c();
        }
        local_178[uVar5] = '\0';
      }
      iVar3 = (*local_180)(local_178,uVar5,local_188);
      iVar2 = iVar2 + local_190;
      iVar12 = iVar12 + iVar3;
      local_194 = local_194 + 1;
      local_198 = iVar12;
    } while (local_194 < local_18c);
  }
  return iVar12;
}



// ===== FUN_1801bc100 @ 1801bc100 (size 261)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801bc100(undefined8 param_1,undefined4 param_2,int param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < param_5) {
    lVar1 = (longlong)param_5 + -1;
    if (0 < lVar1) {
      lVar3 = 0;
      do {
        if ((lVar3 != 0) && (iVar2 == 0)) {
          FUN_180196900(param_1,&DAT_18030daf0,param_2,&PTR_1802ead18);
        }
        FUN_180196900(param_1,"%02X:",*(undefined1 *)(lVar3 + param_4));
        iVar2 = (iVar2 + 1) % param_3;
        if (iVar2 == 0) {
          FUN_180196900(param_1,&DAT_1802fa360);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < lVar1);
      if (((int)lVar1 != 0) && (iVar2 == 0)) {
        FUN_180196900(param_1,&DAT_18030daf0,param_2,&PTR_1802ead18);
      }
    }
    FUN_180196900(param_1,&DAT_18032bc90,*(undefined1 *)(param_4 + lVar1));
  }
  return 1;
}



// ===== FUN_1801bc270 @ 1801bc270 (size 307)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801bc270(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801bc27c;
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return param_1;
  }
  plVar1 = (longlong *)FUN_18019aae0();
  if (plVar1 == (longlong *)0x0) {
    FUN_1801a70c0(8,0x65,0xd,"crypto\\objects\\obj_lib.c",0x1c,uVar3);
    return (longlong *)0x0;
  }
  *(uint *)(plVar1 + 4) = *(uint *)(param_1 + 4) | 0xd;
  if (0 < *(int *)((longlong)param_1 + 0x14)) {
    lVar2 = FUN_1801ba270(param_1[3],(longlong)*(int *)((longlong)param_1 + 0x14),
                          "crypto\\objects\\obj_lib.c",0x26);
    plVar1[3] = lVar2;
    if (lVar2 == 0) goto LAB_1801bc360;
  }
  *(undefined4 *)((longlong)plVar1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(int *)(plVar1 + 2) = (int)param_1[2];
  if (param_1[1] != 0) {
    lVar2 = FUN_1801ba320(param_1[1],"crypto\\objects\\obj_lib.c",0x2c);
    plVar1[1] = lVar2;
    if (lVar2 == 0) goto LAB_1801bc360;
  }
  if (*param_1 != 0) {
    lVar2 = FUN_1801ba320(*param_1,"crypto\\objects\\obj_lib.c",0x2f);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
LAB_1801bc360:
      FUN_18019aa30(plVar1);
      FUN_1801a70c0(8,0x65,0x41,"crypto\\objects\\obj_lib.c",0x35,uVar3);
      return (longlong *)0x0;
    }
  }
  return plVar1;
}



// ===== FUN_1801bc750 @ 1801bc750 (size 814)

undefined8 FUN_1801bc750(byte *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 < 1) {
    return 0;
  }
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    *param_3 = bVar1 & 0x7f;
    return 1;
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    if (param_2 < 2) {
      return 0xffffffff;
    }
    if ((param_1[1] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    uVar2 = (bVar1 & 0x1f) << 6 | param_1[1] & 0x3f;
    if (0x7f < uVar2) {
      *param_3 = uVar2;
      return 2;
    }
  }
  else if ((bVar1 & 0xf0) == 0xe0) {
    if (param_2 < 3) {
      return 0xffffffff;
    }
    if ((param_1[1] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[2] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    uVar2 = ((bVar1 & 0xf) << 6 | param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f;
    if (0x7ff < uVar2) {
      *param_3 = uVar2;
      return 3;
    }
  }
  else if ((bVar1 & 0xf8) == 0xf0) {
    if (param_2 < 4) {
      return 0xffffffff;
    }
    if ((param_1[1] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[2] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[3] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    uVar2 = ((param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f) << 6 | param_1[3] & 0x3f |
            (bVar1 & 7) << 0x12;
    if (0xffff < uVar2) {
      *param_3 = uVar2;
      return 4;
    }
  }
  else if ((bVar1 & 0xfc) == 0xf8) {
    if (param_2 < 5) {
      return 0xffffffff;
    }
    if (((((param_1[1] & 0xc0) != 0x80) || ((param_1[2] & 0xc0) != 0x80)) ||
        ((param_1[3] & 0xc0) != 0x80)) || ((param_1[4] & 0xc0) != 0x80)) {
      return 0xfffffffd;
    }
    uVar2 = (((bVar1 & 3) << 6 | param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f) << 0xc |
            (param_1[3] & 0x3f) << 6 | param_1[4] & 0x3f;
    if (0x1fffff < uVar2) {
      *param_3 = uVar2;
      return 5;
    }
  }
  else {
    if ((bVar1 & 0xfe) != 0xfc) {
      return 0xfffffffe;
    }
    if (param_2 < 6) {
      return 0xffffffff;
    }
    if ((param_1[1] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[2] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[3] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[4] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    if ((param_1[5] & 0xc0) != 0x80) {
      return 0xfffffffd;
    }
    uVar2 = ((((bVar1 & 1) << 6 | param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f) << 6 |
            param_1[3] & 0x3f) << 0xc | (param_1[4] & 0x3f) << 6 | param_1[5] & 0x3f;
    if (0x3ffffff < uVar2) {
      *param_3 = uVar2;
      return 6;
    }
  }
  return 0xfffffffc;
}



// ===== FUN_1801bca80 @ 1801bca80 (size 435)

undefined8 FUN_1801bca80(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 == (byte *)0x0) {
    param_2 = 6;
  }
  else if (param_2 < 1) {
    return 0xffffffff;
  }
  bVar2 = (byte)param_3;
  if (param_3 < 0x80) {
    if (param_1 != (byte *)0x0) {
      *param_1 = bVar2;
    }
    return 1;
  }
  if (param_3 < 0x800) {
    if (1 < param_2) {
      if (param_1 != (byte *)0x0) {
        *param_1 = (byte)(param_3 >> 6) & 0x1f | 0xc0;
        param_1[1] = bVar2 & 0x3f | 0x80;
      }
      return 2;
    }
  }
  else if (param_3 < 0x10000) {
    if (2 < param_2) {
      if (param_1 != (byte *)0x0) {
        *param_1 = (byte)(param_3 >> 0xc) & 0xf | 0xe0;
        param_1[1] = (byte)(param_3 >> 6) & 0x3f | 0x80;
        param_1[2] = bVar2 & 0x3f | 0x80;
      }
      return 3;
    }
  }
  else if (param_3 < 0x200000) {
    if (3 < param_2) {
      if (param_1 != (byte *)0x0) {
        *param_1 = (byte)(param_3 >> 0x12) & 7 | 0xf0;
        param_1[1] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
        param_1[2] = (byte)(param_3 >> 6) & 0x3f | 0x80;
        param_1[3] = bVar2 & 0x3f | 0x80;
      }
      return 4;
    }
  }
  else {
    bVar1 = (byte)(param_3 >> 0x18);
    if (param_3 < 0x4000000) {
      if (4 < param_2) {
        if (param_1 != (byte *)0x0) {
          *param_1 = bVar1 & 3 | 0xf8;
          param_1[1] = (byte)(param_3 >> 0x12) & 0x3f | 0x80;
          param_1[2] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
          param_1[3] = (byte)(param_3 >> 6) & 0x3f | 0x80;
          param_1[4] = bVar2 & 0x3f | 0x80;
        }
        return 5;
      }
    }
    else if (5 < param_2) {
      if (param_1 != (byte *)0x0) {
        *param_1 = bVar1 >> 6 & 1 | 0xfc;
        param_1[1] = bVar1 & 0x3f | 0x80;
        param_1[2] = (byte)(param_3 >> 0x12) & 0x3f | 0x80;
        param_1[3] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
        param_1[4] = (byte)(param_3 >> 6) & 0x3f | 0x80;
        param_1[5] = bVar2 & 0x3f | 0x80;
      }
      return 6;
    }
  }
  return 0xffffffff;
}



// ===== FUN_1801bccb0 @ 1801bccb0 (size 2630)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1801bccb0(undefined8 param_1,longlong *param_2,int param_3,int param_4,int param_5,int param_6,
             int param_7)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  byte *pbVar18;
  char *pcVar19;
  int iVar20;
  undefined1 auStack_168 [32];
  int local_148;
  int local_140;
  int local_138;
  longlong *local_128;
  int local_120;
  int local_11c;
  byte *local_118;
  uint local_110;
  undefined4 local_10c;
  int local_108;
  byte *local_100;
  uint local_f8;
  int local_f4;
  int local_f0;
  undefined8 local_e8;
  byte *local_e0;
  char local_d8 [128];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_168;
  uVar17 = (ulonglong)param_3;
  local_10c = 0;
  local_e8 = 0;
  local_108 = 0;
  local_128 = param_2;
  local_f4 = param_4;
  if (param_5 < 0x81) {
    local_118 = (byte *)*param_2;
    local_e0 = local_118 + uVar17;
    if (0 < param_3) {
LAB_1801bcd60:
      iVar6 = local_f4;
      pbVar16 = local_118;
      plVar3 = local_128;
      local_148 = (int)uVar17;
      uVar5 = FUN_18019a660(&local_118,&local_120,&local_110,&local_f8);
      if ((char)uVar5 < '\0') {
        piVar9 = (int *)0x0;
        piVar10 = (int *)0x0;
        piVar11 = (int *)0x0;
        iVar6 = FUN_18018dce0(param_1,"Error in encoding\n",0x12);
        param_2 = local_128;
        if (0 < iVar6) {
          local_10c = 0;
        }
        goto LAB_1801bd696;
      }
      iVar7 = (int)pbVar16;
      iVar14 = (int)local_118 - iVar7;
      local_f0 = (int)uVar17 - iVar14;
      local_11c = iVar14;
      iVar6 = FUN_180196900(param_1,"%5ld:",(iVar7 - (int)*plVar3) + iVar6);
      if (iVar6 < 1) goto LAB_1801bd643;
      if (uVar5 == 0x21) {
        iVar6 = FUN_180196900(param_1,"d=%-2d hl=%ld l=inf  ",param_5,iVar14);
      }
      else {
        local_148 = local_120;
        iVar6 = FUN_180196900(param_1,"d=%-2d hl=%ld l=%4ld ",param_5,iVar14);
      }
      uVar4 = local_f8;
      uVar15 = local_110;
      if (iVar6 < 1) goto LAB_1801bd643;
      pcVar12 = "cons: ";
      if ((uVar5 & 0x20) == 0) {
        pcVar12 = "prim: ";
      }
      iVar6 = FUN_18018dce0(param_1,pcVar12,6);
      if (iVar6 < 6) goto LAB_1801bd643;
      iVar6 = 0;
      if (param_6 != 0) {
        iVar6 = param_5;
      }
      FUN_18018d580(param_1,iVar6,0x80);
      pcVar12 = local_d8;
      bVar1 = (byte)uVar4;
      if ((bVar1 & 0xc0) == 0xc0) {
        pcVar19 = "priv [ %d ] ";
LAB_1801bce8a:
        FUN_180196a10(local_d8,0x80,pcVar19,uVar15);
      }
      else {
        if ((char)bVar1 < '\0') {
          pcVar19 = "cont [ %d ]";
          goto LAB_1801bce8a;
        }
        if ((uVar4 & 0x40) != 0) {
          pcVar19 = "appl [ %d ]";
          goto LAB_1801bce8a;
        }
        if (0x1e < (int)uVar15) {
          pcVar19 = "<ASN1 %d>";
          goto LAB_1801bce8a;
        }
        if ((uVar15 - 0x102 & 0xfffffff7) == 0) {
          uVar15 = uVar15 & 0xfffffeff;
        }
        if (uVar15 < 0x1f) {
          pcVar12 = (&PTR_DAT_18032c410)[(int)uVar15];
        }
        else {
          pcVar12 = "(unknown)";
        }
      }
      iVar14 = FUN_180196900(param_1,"%-18s",pcVar12);
      pbVar13 = local_118;
      iVar6 = local_11c;
      if (iVar14 < 1) goto LAB_1801bd643;
      if ((uVar5 & 0x20) != 0) {
        pbVar18 = local_118 + local_120;
        iVar14 = FUN_18018dce0(param_1,&DAT_1802fa360,1);
        pbVar16 = local_e0;
        iVar6 = local_f4;
        param_2 = local_128;
        if (0 < iVar14) {
          if (local_120 <= local_f0) {
            if ((uVar5 == 0x21) && (local_120 == 0)) {
              do {
                local_138 = param_7;
                local_140 = param_6;
                local_148 = param_5 + 1;
                iVar14 = FUN_1801bccb0(param_1,&local_118,(int)pbVar16 - (int)local_118,
                                       ((int)local_118 - (int)*param_2) + iVar6);
                if (iVar14 == 0) goto LAB_1801bd61f;
              } while ((iVar14 != 2) && (local_118 < pbVar16));
              local_120 = (int)local_118 - (int)pbVar13;
            }
            else if (local_118 < pbVar18) {
              iVar14 = local_120;
              do {
                local_138 = param_7;
                iVar20 = (int)local_118;
                local_140 = param_6;
                local_148 = param_5 + 1;
                iVar7 = FUN_1801bccb0(param_1,&local_118,iVar14,(iVar6 - (int)*param_2) + iVar20);
                if (iVar7 == 0) goto LAB_1801bd61f;
                iVar14 = iVar14 + (iVar20 - (int)local_118);
              } while (local_118 < pbVar18);
            }
            goto LAB_1801bd604;
          }
          FUN_180196900(param_1,"length is greater than %ld\n",local_f0);
          local_10c = 0;
        }
        goto LAB_1801bd643;
      }
      if (local_f8 != 0) {
        local_118 = local_118 + local_120;
        iVar6 = FUN_18018dce0(param_1,&DAT_1802fa360,1);
        param_2 = local_128;
        if (0 < iVar6) goto LAB_1801bd604;
        goto LAB_1801bd690;
      }
      bVar2 = false;
      if ((local_110 < 0x1b) && ((0x5dc1000U >> (local_110 & 0x1f) & 1) != 0)) {
        iVar6 = FUN_18018dce0(param_1,&DAT_1802ea954,1);
        if ((iVar6 < 1) ||
           ((0 < local_120 && (iVar6 = FUN_18018dce0(param_1,local_118), iVar6 != local_120))))
        goto LAB_1801bd643;
      }
      else {
        if (local_110 == 6) {
          local_100 = pbVar16;
          lVar8 = FUN_18019b220(&local_e8,&local_100,local_120 + local_11c);
          if (lVar8 != 0) {
            iVar14 = FUN_18018dce0(param_1,&DAT_1802ea954,1);
            if (iVar14 < 1) goto LAB_1801bd643;
            FUN_18019b2d0(param_1,local_e8);
            goto LAB_1801bd54a;
          }
          iVar14 = FUN_18018da10(param_1,":BAD OBJECT");
          if (iVar14 < 1) goto LAB_1801bd643;
          goto LAB_1801bd551;
        }
        if (local_110 == 1) {
          if (local_120 != 1) {
            iVar6 = FUN_18018da10(param_1,":BAD BOOLEAN");
            if (iVar6 < 1) goto LAB_1801bd643;
            local_108 = 1;
          }
          if (0 < local_120) {
            FUN_180196900(param_1,&DAT_180300488,*local_118);
          }
        }
        else if (local_110 != 0x1e) {
          if (local_110 == 4) {
            local_100 = pbVar16;
            piVar9 = (int *)FUN_1801bc650(0,&local_100,local_120 + local_11c);
            if ((piVar9 != (int *)0x0) && (0 < *piVar9)) {
              local_100 = *(byte **)(piVar9 + 2);
              if (0 < (longlong)*piVar9) {
                pbVar13 = local_100;
                do {
                  bVar1 = *pbVar13;
                  if (((bVar1 < 0x20) && ((0xffffd9ffU >> (bVar1 & 0x1f) & 1) != 0)) ||
                     (0x7e < bVar1)) {
                    if (param_7 == 0) {
                      iVar14 = FUN_18018dce0(param_1,"[HEX DUMP]:",0xb);
                      if (iVar14 < 1) goto LAB_1801bd64a;
                      iVar14 = 0;
                      lVar8 = 0;
                      if (*piVar9 < 1) goto LAB_1801bd231;
                      goto LAB_1801bd270;
                    }
                    iVar14 = FUN_18018dce0(param_1,&DAT_1802fa360,1);
                    if (iVar14 < 1) goto LAB_1801bd64a;
                    if ((param_7 == -1) || (iVar14 = param_7, *piVar9 < param_7)) {
                      iVar14 = *piVar9;
                    }
                    iVar14 = FUN_1801bbdf0(param_1,local_100,iVar14,6);
                    if (iVar14 < 1) goto LAB_1801bd64a;
                    bVar2 = true;
                    FUN_1801bc3c0(piVar9);
                    goto LAB_1801bd54a;
                  }
                  pbVar13 = pbVar13 + 1;
                } while ((longlong)pbVar13 - (longlong)local_100 < (longlong)*piVar9);
              }
              iVar14 = FUN_18018dce0(param_1,&DAT_1802ea954,1);
              if ((iVar14 < 1) || (iVar14 = FUN_18018dce0(param_1,local_100,*piVar9), iVar14 < 1)) {
LAB_1801bd64a:
                param_2 = local_128;
                goto LAB_1801bd692;
              }
            }
LAB_1801bd231:
            FUN_1801bc3c0(piVar9);
            goto LAB_1801bd54a;
          }
          if (local_110 == 2) {
            local_100 = pbVar16;
            piVar10 = (int *)FUN_1801bc630(0,&local_100,local_120 + local_11c);
            if (piVar10 == (int *)0x0) {
              iVar14 = FUN_18018da10(param_1,":BAD INTEGER");
              if (0 < iVar14) {
                local_108 = 1;
LAB_1801bd3e8:
                FUN_1801bc3c0(piVar10);
                goto LAB_1801bd54a;
              }
            }
            else {
              iVar14 = FUN_18018dce0(param_1,&DAT_1802ea954,1);
              if ((0 < iVar14) &&
                 ((piVar10[1] != 0x102 ||
                  (iVar14 = FUN_18018dce0(param_1,&DAT_180306a88,1), 0 < iVar14)))) {
                iVar14 = *piVar10;
                iVar7 = 0;
                lVar8 = 0;
                if (0 < iVar14) {
                  do {
                    iVar14 = FUN_180196900(param_1,&DAT_18032bc90,
                                           *(undefined1 *)(*(longlong *)(piVar10 + 2) + lVar8));
                    if (iVar14 < 1) goto LAB_1801bd3c4;
                    iVar14 = *piVar10;
                    iVar7 = iVar7 + 1;
                    lVar8 = lVar8 + 1;
                  } while (iVar7 < iVar14);
                }
                if ((iVar14 != 0) || (iVar14 = FUN_18018dce0(param_1,&DAT_18032c7a4,2), 0 < iVar14))
                goto LAB_1801bd3e8;
              }
            }
LAB_1801bd3c4:
            piVar9 = (int *)0x0;
            param_2 = local_128;
            goto LAB_1801bd694;
          }
          if (local_110 != 10) {
            if ((0 < local_120) && (param_7 != 0)) {
              iVar6 = FUN_18018dce0(param_1,&DAT_1802fa360,1);
              if (0 < iVar6) {
                iVar6 = local_120;
                if ((param_7 != -1) && (param_7 <= local_120)) {
                  iVar6 = param_7;
                }
                iVar6 = FUN_1801bbdf0(param_1,local_118,iVar6,6);
                if (0 < iVar6) {
                  bVar2 = true;
                  goto LAB_1801bd545;
                }
              }
              goto LAB_1801bd643;
            }
            goto LAB_1801bd545;
          }
          local_100 = pbVar16;
          piVar11 = (int *)FUN_1801bc610(0,&local_100,local_120 + local_11c);
          if (piVar11 == (int *)0x0) {
            iVar14 = FUN_18018da10(param_1,":BAD ENUMERATED");
            if (0 < iVar14) {
              local_108 = 1;
LAB_1801bd4da:
              FUN_1801bc3c0(piVar11);
              goto LAB_1801bd54a;
            }
          }
          else {
            iVar14 = FUN_18018dce0(param_1,&DAT_1802ea954,1);
            if ((0 < iVar14) &&
               ((piVar11[1] != 0x10a ||
                (iVar14 = FUN_18018dce0(param_1,&DAT_180306a88,1), 0 < iVar14)))) {
              iVar14 = *piVar11;
              iVar7 = 0;
              lVar8 = 0;
              if (0 < iVar14) {
                do {
                  iVar14 = FUN_180196900(param_1,&DAT_18032bc90,
                                         *(undefined1 *)(*(longlong *)(piVar11 + 2) + lVar8));
                  if (iVar14 < 1) goto LAB_1801bd4b4;
                  iVar14 = *piVar11;
                  iVar7 = iVar7 + 1;
                  lVar8 = lVar8 + 1;
                } while (iVar7 < iVar14);
              }
              if ((iVar14 != 0) || (iVar14 = FUN_18018dce0(param_1,&DAT_18032c7a4,2), 0 < iVar14))
              goto LAB_1801bd4da;
            }
          }
LAB_1801bd4b4:
          piVar9 = (int *)0x0;
          piVar10 = (int *)0x0;
          param_2 = local_128;
          goto LAB_1801bd696;
        }
      }
LAB_1801bd545:
      iVar6 = local_11c;
      goto LAB_1801bd54a;
    }
LAB_1801bd688:
    local_10c = 1;
LAB_1801bd690:
    piVar9 = (int *)0x0;
LAB_1801bd692:
    piVar10 = (int *)0x0;
LAB_1801bd694:
    piVar11 = (int *)0x0;
LAB_1801bd696:
    FUN_18019aa30(local_e8);
    FUN_1801bc3c0(piVar9);
    FUN_1801bc3c0(piVar10);
    FUN_1801bc3c0(piVar11);
    *param_2 = (longlong)local_118;
  }
  else {
    FUN_18018da10(param_1,"BAD RECURSION DEPTH\n");
    local_10c = 0;
  }
  return local_10c;
LAB_1801bd61f:
  local_10c = 0;
  goto LAB_1801bd690;
  while( true ) {
    iVar14 = iVar14 + 1;
    lVar8 = lVar8 + 1;
    if (*piVar9 <= iVar14) break;
LAB_1801bd270:
    iVar7 = FUN_180196900(param_1,&DAT_18032bc90,local_100[lVar8]);
    if (iVar7 < 1) goto LAB_1801bd64a;
  }
  FUN_1801bc3c0(piVar9);
LAB_1801bd54a:
  if (local_108 != 0) {
LAB_1801bd551:
    pbVar16 = pbVar16 + iVar6;
    iVar6 = FUN_18018da10(param_1,&DAT_18032c7c8);
    if (iVar6 < 1) goto LAB_1801bd643;
    iVar6 = 0;
    if (0 < local_120) {
      do {
        iVar14 = FUN_180196900(param_1,&DAT_18032bc90,*pbVar16);
        if (iVar14 < 1) goto LAB_1801bd643;
        iVar6 = iVar6 + 1;
        pbVar16 = pbVar16 + 1;
      } while (iVar6 < local_120);
    }
    iVar6 = FUN_18018da10(param_1,&DAT_1802ecf10);
    if (iVar6 < 1) goto LAB_1801bd643;
    local_108 = 0;
  }
  if ((bVar2) || (iVar6 = FUN_18018dce0(param_1,&DAT_1802fa360,1), 0 < iVar6)) {
    local_118 = local_118 + local_120;
    param_2 = local_128;
    if ((local_110 == 0) && (local_f8 == 0)) {
      local_10c = 2;
      goto LAB_1801bd690;
    }
LAB_1801bd604:
    uVar17 = (ulonglong)(uint)(local_f0 - local_120);
    if (local_f0 - local_120 < 1) goto LAB_1801bd688;
    goto LAB_1801bcd60;
  }
LAB_1801bd643:
  param_2 = local_128;
  goto LAB_1801bd690;
}



// ===== FUN_1801bd730 @ 1801bd730 (size 1752)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801bd730(undefined8 *param_1,byte *param_2,uint param_3,int param_4,uint param_5,
                 int param_6,int param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  code *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  uint local_98;
  char local_94;
  int local_90;
  byte *local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_c8;
  uVar17 = (ulonglong)param_3;
  if (param_3 == 0xffffffff) {
    uVar17 = 0xffffffffffffffff;
    do {
      uVar17 = uVar17 + 1;
    } while (param_2[uVar17] != 0);
  }
  if (param_5 == 0) {
    param_5 = 0x2806;
  }
  iVar9 = (int)uVar17;
  local_90 = param_4;
  local_88 = param_2;
  local_78 = param_1;
  if (param_4 == 0x1000) {
    iVar15 = 0;
    uVar13 = uVar17 & 0xffffffff;
    if (iVar9 != 0) {
      do {
        iVar8 = FUN_1801bc750(param_2,uVar13,&local_98);
        if (iVar8 < 0) {
          local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x55);
          FUN_1801a70c0(0xd,0x7a,0x86,"crypto\\asn1\\a_mbstr.c");
          return -1;
        }
        uVar12 = (int)uVar13 - iVar8;
        uVar13 = (ulonglong)uVar12;
        param_2 = param_2 + iVar8;
        iVar15 = iVar15 + 1;
      } while (uVar12 != 0);
    }
  }
  else if (param_4 == 0x1001) {
    iVar15 = iVar9;
  }
  else {
    if (param_4 == 0x1002) {
      if ((uVar17 & 1) != 0) {
        local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x41);
        FUN_1801a70c0(0xd,0x7a,0x81,"crypto\\asn1\\a_mbstr.c");
        return -1;
      }
      iVar15 = iVar9 >> 1;
    }
    else {
      if (param_4 != 0x1004) {
        local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x5f);
        FUN_1801a70c0(0xd,0x7a,0xa0,"crypto\\asn1\\a_mbstr.c");
        return -1;
      }
      if ((uVar17 & 3) != 0) {
        local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x4a);
        FUN_1801a70c0(0xd,0x7a,0x85,"crypto\\asn1\\a_mbstr.c");
        return -1;
      }
      iVar15 = iVar9 >> 2;
    }
  }
  if ((0 < param_6) && (iVar15 < param_6)) {
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,100);
    FUN_1801a70c0(0xd,0x7a,0x98,"crypto\\asn1\\a_mbstr.c");
    FUN_180196a10(local_68,0x20,&DAT_1802fc988,param_6);
    FUN_1801a6360(2,"minsize=",local_68);
    return -1;
  }
  if ((0 < param_7) && (param_7 < iVar15)) {
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x6b);
    FUN_1801a70c0(0xd,0x7a,0x97,"crypto\\asn1\\a_mbstr.c");
    FUN_180196a10(local_68,0x20,&DAT_1802fc988,param_7);
    FUN_1801a6360(2,"maxsize=",local_68);
    return -1;
  }
  uVar13 = uVar17 & 0xffffffff;
  pbVar14 = local_88;
  puVar5 = local_78;
  iVar8 = iVar9;
  while (local_78 = puVar5, iVar8 != 0) {
    iVar8 = (int)uVar13;
    if (local_90 == 0x1001) {
      bVar4 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      uVar13 = (ulonglong)(iVar8 - 1);
      local_98 = (uint)bVar4;
    }
    else if (local_90 == 0x1002) {
      bVar4 = *pbVar14;
      pbVar1 = pbVar14 + 1;
      pbVar14 = pbVar14 + 2;
      local_98 = (uint)CONCAT11(bVar4,*pbVar1);
      uVar13 = (ulonglong)(iVar8 - 2);
    }
    else if (local_90 == 0x1004) {
      bVar4 = *pbVar14;
      pbVar1 = pbVar14 + 1;
      pbVar2 = pbVar14 + 2;
      pbVar3 = pbVar14 + 3;
      pbVar14 = pbVar14 + 4;
      local_98 = (uint)*pbVar3 | (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10 | (uint)bVar4 << 0x18;
      uVar13 = (ulonglong)(iVar8 - 4);
    }
    else {
      iVar7 = FUN_1801bc750(pbVar14,uVar13,&local_98);
      if (iVar7 < 0) goto LAB_1801bdb12;
      uVar13 = (ulonglong)(uint)(iVar8 - iVar7);
      pbVar14 = pbVar14 + iVar7;
    }
    uVar12 = local_98;
    uVar16 = local_98;
    if (0x7fffffff < local_98) {
      uVar16 = 0x7fffffff;
    }
    if ((((param_5 & 1) != 0) && (iVar8 = FUN_1801baab0(uVar16,4), iVar8 == 0)) && (uVar16 != 0x20))
    {
      param_5 = param_5 & 0xfffffffe;
    }
    if (((param_5 & 2) != 0) && (iVar8 = FUN_1801baab0(uVar16,0x800), iVar8 == 0)) {
      param_5 = param_5 & 0xfffffffd;
    }
    if (((param_5 & 0x10) != 0) && ((uVar16 & 0xffffff80) != 0)) {
      param_5 = param_5 & 0xffffffef;
    }
    if (((param_5 & 4) != 0) && (0xff < uVar12)) {
      param_5 = param_5 & 0xfffffffb;
    }
    if (((param_5 >> 0xb & 1) != 0) && (0xffff < uVar12)) {
      param_5 = param_5 & 0xfffff7ff;
    }
    if (param_5 == 0) {
LAB_1801bdb12:
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x73);
      FUN_1801a70c0(0xd,0x7a,0x7c,"crypto\\asn1\\a_mbstr.c");
      return -1;
    }
    puVar5 = local_78;
    iVar8 = (int)uVar13;
  }
  iVar8 = 0x1001;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) {
      if ((param_5 & 0x10) == 0) {
        if ((param_5 & 4) == 0) {
          if ((param_5 >> 0xb & 1) == 0) {
            if ((param_5 >> 8 & 1) == 0) {
              iVar8 = 0x1000;
              iVar7 = 0xc;
            }
            else {
              iVar8 = 0x1004;
              iVar7 = 0x1c;
            }
          }
          else {
            iVar8 = 0x1002;
            iVar7 = 0x1e;
          }
        }
        else {
          iVar7 = 0x14;
        }
      }
      else {
        iVar7 = 0x16;
      }
    }
    else {
      iVar7 = 0x13;
    }
  }
  else {
    iVar7 = 0x12;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return iVar7;
  }
  piVar10 = (int *)*puVar5;
  if (piVar10 == (int *)0x0) {
    local_94 = '\x01';
    piVar10 = (int *)FUN_18019a600(iVar7);
    if (piVar10 == (int *)0x0) {
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x98);
      goto LAB_1801bdbed;
    }
    *puVar5 = piVar10;
  }
  else {
    local_94 = '\0';
    FUN_180195e10(*(undefined8 *)(piVar10 + 2),"crypto\\asn1\\a_mbstr.c",0x90);
    piVar10[1] = iVar7;
    piVar10[2] = 0;
    piVar10[3] = 0;
    *piVar10 = 0;
  }
  iVar6 = local_90;
  if (local_90 == iVar8) {
    iVar9 = FUN_18019a480(piVar10,local_88,uVar17 & 0xffffffff);
    if (iVar9 != 0) {
      return iVar7;
    }
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0xa0);
  }
  else {
    if (iVar8 == 0x1000) {
      iVar15 = 0;
      uVar13 = uVar17 & 0xffffffff;
      pbVar14 = local_88;
      while (iVar9 != 0) {
        iVar9 = (int)uVar13;
        if (iVar6 == 0x1001) {
          bVar4 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          uVar13 = (ulonglong)(iVar9 - 1);
          local_98 = (uint)bVar4;
        }
        else if (iVar6 == 0x1002) {
          bVar4 = *pbVar14;
          pbVar1 = pbVar14 + 1;
          pbVar14 = pbVar14 + 2;
          local_98 = (uint)CONCAT11(bVar4,*pbVar1);
          uVar13 = (ulonglong)(iVar9 - 2);
        }
        else if (iVar6 == 0x1004) {
          bVar4 = *pbVar14;
          pbVar1 = pbVar14 + 1;
          pbVar2 = pbVar14 + 2;
          pbVar3 = pbVar14 + 3;
          pbVar14 = pbVar14 + 4;
          local_98 = (uint)*pbVar3 |
                     (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10 | (uint)bVar4 << 0x18;
          uVar13 = (ulonglong)(iVar9 - 4);
        }
        else {
          iVar8 = FUN_1801bc750(pbVar14,uVar13,&local_98);
          if (iVar8 < 0) break;
          uVar13 = (ulonglong)(uint)(iVar9 - iVar8);
          pbVar14 = pbVar14 + iVar8;
        }
        iVar9 = FUN_1801bca80(0,0xffffffff,local_98);
        iVar15 = iVar15 + iVar9;
        iVar9 = (int)uVar13;
      }
      pcVar11 = FUN_1801bde70;
    }
    else if (iVar8 == 0x1001) {
      pcVar11 = (code *)&LAB_1801bde10;
    }
    else if (iVar8 == 0x1002) {
      iVar15 = iVar15 * 2;
      pcVar11 = (code *)&LAB_1801bde20;
    }
    else if (iVar8 == 0x1004) {
      iVar15 = iVar15 * 4;
      pcVar11 = (code *)&LAB_1801bde40;
    }
    else {
      iVar15 = 0;
      pcVar11 = (code *)0x0;
    }
    local_80 = FUN_180195dc0((longlong)(iVar15 + 1),"crypto\\asn1\\a_mbstr.c",0xbd);
    if (local_80 != 0) {
      *piVar10 = iVar15;
      local_a8 = &local_80;
      *(longlong *)(piVar10 + 2) = local_80;
      *(undefined1 *)(iVar15 + local_80) = 0;
      FUN_1801bdeb0(local_88,uVar17 & 0xffffffff,iVar6,pcVar11);
      return iVar7;
    }
    if (local_94 != '\0') {
      FUN_18019a3a0(piVar10);
    }
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0xc0);
  }
LAB_1801bdbed:
  FUN_1801a70c0(0xd,0x7a,0x41,"crypto\\asn1\\a_mbstr.c");
  return -1;
}



// ===== FUN_1801bdeb0 @ 1801bdeb0 (size 259)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801bdeb0(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_res10 [2];
  
  do {
    if (param_2 == 0) {
      return 1;
    }
    if (param_3 == 0x1001) {
      bVar4 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      local_res10[0] = (uint)bVar4;
    }
    else if (param_3 == 0x1002) {
      bVar4 = *param_1;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      local_res10[0] = (uint)CONCAT11(bVar4,*pbVar1);
      param_2 = param_2 + -2;
    }
    else if (param_3 == 0x1004) {
      bVar4 = *param_1;
      pbVar1 = param_1 + 1;
      pbVar2 = param_1 + 2;
      pbVar3 = param_1 + 3;
      param_1 = param_1 + 4;
      local_res10[0] =
           (uint)*pbVar3 | (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10 | (uint)bVar4 << 0x18;
      param_2 = param_2 + -4;
    }
    else {
      iVar5 = FUN_1801bc750(param_1,param_2,local_res10);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      param_2 = param_2 - iVar5;
      param_1 = param_1 + iVar5;
    }
  } while ((param_4 == (code *)0x0) || (uVar6 = (*param_4)(local_res10[0],param_5), 0 < (int)uVar6))
  ;
  return uVar6;
}



// ===== FUN_1801bdfc0 @ 1801bdfc0 (size 713)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801bdfc0(longlong *param_1,undefined8 *param_2,int param_3,undefined8 param_4,
                       undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  void *_Src;
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 local_res10;
  void *local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1801bdfcf;
  _Src = (void *)*param_2;
  iVar2 = 0x100000;
  if (param_3 < 0x100001) {
    iVar2 = param_3;
  }
  local_res10 = 0;
  local_28 = _Src;
  uVar4 = FUN_1801bff90(&local_res10,&local_28,iVar2,&DAT_18032c900,param_5,param_6,param_7,param_8)
  ;
  if ((int)uVar4 < 1) {
    return uVar4;
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1801ae8b0(puVar1[2]);
    FUN_1801958f0(*puVar1,FUN_1801be630);
    FUN_180195e10(puVar1[3],"crypto\\x509\\x_name.c",0x7b);
    FUN_180195e10(puVar1,"crypto\\x509\\x_name.c",0x7c);
    *param_1 = 0;
  }
  plVar5 = (longlong *)FUN_180196100(0x28,"crypto\\x509\\x_name.c");
  if (plVar5 != (longlong *)0x0) {
    lVar6 = FUN_1801957e0();
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      lVar6 = FUN_1801aebd0();
      plVar5[2] = lVar6;
      if (lVar6 != 0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        lVar6 = FUN_1801ae920(lVar6,(longlong)local_28 - (longlong)_Src);
        if (lVar6 != 0) {
          memcpy(*(void **)(plVar5[2] + 8),_Src,(longlong)local_28 - (longlong)_Src);
          iVar9 = 0;
          iVar2 = FUN_1801958b0(local_res10);
          if (0 < iVar2) {
            do {
              uVar7 = FUN_180195ae0(local_res10,iVar9);
              iVar8 = 0;
              iVar2 = FUN_1801958b0(uVar7);
              if (0 < iVar2) {
                do {
                  lVar6 = FUN_180195ae0(uVar7,iVar8);
                  *(int *)(lVar6 + 0x10) = iVar9;
                  iVar2 = FUN_180195990(*plVar5,lVar6);
                  if (iVar2 == 0) goto LAB_1801be1e1;
                  FUN_180195a00(uVar7,iVar8,0);
                  iVar8 = iVar8 + 1;
                  iVar2 = FUN_1801958b0(uVar7);
                } while (iVar8 < iVar2);
              }
              iVar9 = iVar9 + 1;
              iVar2 = FUN_1801958b0(local_res10);
            } while (iVar9 < iVar2);
          }
          uVar3 = FUN_1801be9d0(plVar5);
          if (uVar3 != 0) {
            FUN_1801958f0(local_res10,FUN_1801be990);
            *(undefined4 *)(plVar5 + 1) = 0;
            *param_1 = (longlong)plVar5;
            *param_2 = local_28;
            return (ulonglong)uVar3;
          }
        }
LAB_1801be1e1:
        FUN_1801bfa90(plVar5,&DAT_18032c968);
        goto LAB_1801be236;
      }
    }
  }
  FUN_1801a70c0(0xd,0xab,0x41,"crypto\\x509\\x_name.c",0x69);
  if (plVar5 != (longlong *)0x0) {
    FUN_180195650(*plVar5);
    FUN_180195e10(plVar5,"crypto\\x509\\x_name.c",0x6c);
  }
LAB_1801be236:
  FUN_1801958f0(local_res10,FUN_1801be9b0);
  FUN_1801a70c0(0xd,0x9e,0x3a,"crypto\\x509\\x_name.c",0xce);
  return 0;
}



// ===== FUN_1801be290 @ 1801be290 (size 466)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801be290(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong local_res8;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1801be2ae;
  puVar2 = (undefined8 *)*param_1;
  if (*(int *)(puVar2 + 1) == 0) {
LAB_1801be429:
    uVar1 = *(uint *)puVar2[2];
    if (param_2 != (longlong *)0x0) {
      memcpy((void *)*param_2,*(void **)((uint *)puVar2[2] + 2),(longlong)(int)uVar1);
      *param_2 = *param_2 + (longlong)(int)uVar1;
    }
    return (ulonglong)uVar1;
  }
  lVar6 = 0;
  iVar4 = -1;
  local_res8 = FUN_1801957e0();
  if (local_res8 != 0) {
    iVar8 = 0;
    iVar3 = FUN_1801958b0(*puVar2);
    if (0 < iVar3) {
      do {
        lVar5 = FUN_180195ae0(*puVar2,iVar8);
        if (*(int *)(lVar5 + 0x10) != iVar4) {
          lVar6 = FUN_1801957e0();
          if (lVar6 == 0) goto LAB_1801be3ef;
          iVar4 = FUN_180195990(local_res8,lVar6);
          if (iVar4 == 0) {
            FUN_180195650(lVar6);
            goto LAB_1801be3ef;
          }
          iVar4 = *(int *)(lVar5 + 0x10);
        }
        iVar3 = FUN_180195990(lVar6,lVar5);
        if (iVar3 == 0) goto LAB_1801be3ef;
        iVar8 = iVar8 + 1;
        iVar3 = FUN_1801958b0(*puVar2);
      } while (iVar8 < iVar3);
    }
    iVar4 = FUN_1801c1f90(&local_res8,0,&DAT_18032c900,0xffffffff,0xffffffff);
    uVar7 = (ulonglong)iVar4;
    lVar6 = FUN_1801ae920(puVar2[2],uVar7);
    if (lVar6 != 0) {
      local_28 = *(undefined8 *)(puVar2[2] + 8);
      FUN_1801c1f90(&local_res8,&local_28,&DAT_18032c900,0xffffffff,0xffffffff);
      FUN_1801958f0(local_res8,FUN_1801be990);
      *(undefined4 *)(puVar2 + 1) = 0;
      if (-1 < iVar4) {
        iVar4 = FUN_1801be9d0(puVar2);
        if (iVar4 == 0) {
          return 0xffffffff;
        }
        goto LAB_1801be429;
      }
      goto LAB_1801be425;
    }
  }
LAB_1801be3ef:
  FUN_1801958f0(local_res8,FUN_1801be990);
  FUN_1801a70c0(0xd,0xcb,0x41,"crypto\\x509\\x_name.c",0x114);
  uVar7 = 0xffffffff;
LAB_1801be425:
  return uVar7 & 0xffffffff;
}



// ===== FUN_1801be470 @ 1801be470 (size 183)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801be470(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801be480;
  plVar1 = (longlong *)FUN_180196100(0x28,"crypto\\x509\\x_name.c",0x5c);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1801957e0();
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_1801aebd0();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        *(undefined4 *)(plVar1 + 1) = 1;
        *param_1 = plVar1;
        return 1;
      }
    }
  }
  FUN_1801a70c0(0xd,0xab,0x41,"crypto\\x509\\x_name.c",0x69,uVar3);
  if (plVar1 != (longlong *)0x0) {
    FUN_180195650(*plVar1);
    FUN_180195e10(plVar1,"crypto\\x509\\x_name.c",0x6c);
  }
  return 0;
}



// ===== FUN_1801be530 @ 1801be530 (size 120)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801be530(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (longlong *)0x0) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)
     ) {
    FUN_1801ae8b0(puVar1[2]);
    FUN_1801958f0(*puVar1,FUN_1801be630);
    FUN_180195e10(puVar1[3],"crypto\\x509\\x_name.c",0x7b);
    FUN_180195e10(puVar1,"crypto\\x509\\x_name.c",0x7c);
    *param_1 = 0;
  }
  return;
}



// ===== FUN_1801be6e0 @ 1801be6e0 (size 364)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801be6e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar2 = (char *)FUN_1801def90(param_2,0,0);
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  if (*pcVar2 == '\0') {
    FUN_180195e10(pcVar2,"crypto\\x509\\x_name.c",0x1f6);
    return 1;
  }
  pcVar4 = pcVar2 + 1;
  pcVar5 = pcVar4;
  for (; *pcVar4 != '/'; pcVar4 = pcVar4 + 1) {
LAB_1801be796:
    if (*pcVar4 == '\0') goto LAB_1801be79b;
LAB_1801be7d9:
  }
  iVar1 = FUN_1801baab0((int)pcVar4[1],2);
  if (iVar1 == 0) goto LAB_1801be796;
  if (pcVar4[2] != '=') {
    iVar1 = FUN_1801baab0((int)pcVar4[2],2);
    if ((iVar1 == 0) || (pcVar4[3] != '=')) goto LAB_1801be796;
  }
LAB_1801be79b:
  iVar6 = (int)pcVar4 - (int)pcVar5;
  iVar1 = FUN_18018dce0(param_1,pcVar5,iVar6);
  if (iVar1 == iVar6) {
    pcVar5 = pcVar4 + 1;
    if (*pcVar4 != '\0') {
      iVar1 = FUN_18018dce0(param_1,&DAT_1802ffd08,2);
      if (iVar1 != 2) goto LAB_1801be7fa;
      if (*pcVar4 != '\0') goto LAB_1801be7d9;
    }
    FUN_180195e10(pcVar2,"crypto\\x509\\x_name.c",0x210);
    uVar3 = 1;
  }
  else {
LAB_1801be7fa:
    FUN_1801a70c0(0xb,0x75,7,"crypto\\x509\\x_name.c",0x213);
    FUN_180195e10(pcVar2,"crypto\\x509\\x_name.c",0x214);
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_1801be850 @ 1801be850 (size 110)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801be850(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*param_1 == param_2) {
    return *param_1 != 0;
  }
  lVar1 = FUN_1801d5aa0(&DAT_18032c968);
  if (lVar1 == 0) {
    return false;
  }
  FUN_1801bfa90(*param_1,&DAT_18032c968);
  *param_1 = lVar1;
  return true;
}



// ===== FUN_1801be900 @ 1801be900 (size 140)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801be900(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0x1801be91a;
  uVar4 = 0;
  iVar3 = 0;
  iVar1 = FUN_1801958b0();
  if (0 < iVar1) {
    do {
      local_res8 = FUN_180195ae0(param_1,iVar3);
      uVar2 = FUN_1801c1f90(&local_res8,param_2,&DAT_18032c8b0,0xffffffff,0xffffffff,uVar5);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar4 = uVar4 + (int)uVar2;
      iVar3 = iVar3 + 1;
      iVar1 = FUN_1801958b0(param_1);
    } while (iVar3 < iVar1);
  }
  return (ulonglong)uVar4;
}



// ===== FUN_1801be9d0 @ 1801be9d0 (size 1006)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801be9d0(undefined8 *param_1)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  undefined8 *local_res8;
  int local_res10;
  int local_res18;
  undefined4 local_res20;
  undefined4 uVar15;
  longlong local_58 [3];
  
  lVar8 = 0;
  local_res20 = 0;
  local_res18 = -1;
  plVar9 = (longlong *)0x0;
  local_res8 = param_1;
  FUN_180195e10(param_1[3],"crypto\\x509\\x_name.c",0x134);
  param_1[3] = 0;
  iVar4 = FUN_1801958b0(*param_1);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return 1;
  }
  lVar6 = FUN_1801957e0();
  if (lVar6 == 0) {
    FUN_1801a70c0(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",0x13d);
  }
  else {
    iVar13 = 0;
    local_res10 = 0;
    iVar5 = FUN_1801958b0(*param_1);
    iVar4 = -1;
    if (0 < iVar5) {
      do {
        puVar7 = (undefined8 *)FUN_180195ae0(*param_1,iVar13);
        if (*(int *)(puVar7 + 2) != iVar4) {
          lVar8 = FUN_1801957e0();
          if (lVar8 != 0) {
            iVar4 = FUN_180195990(lVar6,lVar8);
            if (iVar4 != 0) {
              local_res18 = *(int *)(puVar7 + 2);
              goto LAB_1801beae0;
            }
            FUN_180195650(lVar8);
            FUN_1801a70c0(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",0x148);
          }
          plVar9 = (longlong *)0x0;
          goto LAB_1801bed89;
        }
LAB_1801beae0:
        plVar9 = (longlong *)FUN_1801bf3f0(&DAT_18032c860);
        if (plVar9 == (longlong *)0x0) {
          uVar15 = 0x14f;
          goto LAB_1801becf6;
        }
        lVar10 = FUN_1801bc270(*puVar7);
        *plVar9 = lVar10;
        if (lVar10 == 0) {
          uVar15 = 0x154;
          goto LAB_1801becf6;
        }
        lVar10 = puVar7[1];
        piVar2 = (int *)plVar9[1];
        uVar11 = FUN_1801c0010(*(undefined4 *)(lVar10 + 4));
        if ((uVar11 & 0x2956) == 0) {
          iVar4 = FUN_18019a0c0(piVar2);
          if (iVar4 == 0) goto LAB_1801bed89;
        }
        else {
          piVar2[1] = 0xc;
          iVar4 = FUN_18019b460(piVar2 + 2,lVar10);
          *piVar2 = iVar4;
          if (iVar4 == -1) goto LAB_1801bed89;
          pbVar12 = *(byte **)(piVar2 + 2);
          while ((0 < iVar4 && (iVar13 = FUN_1801baab0(*pbVar12,8), iVar13 != 0))) {
            pbVar12 = pbVar12 + 1;
            iVar4 = iVar4 + -1;
          }
          if (0 < iVar4) {
            pbVar14 = pbVar12 + (longlong)iVar4 + -1;
            do {
              iVar13 = FUN_1801baab0(*pbVar14,8);
              if (iVar13 == 0) break;
              pbVar14 = pbVar14 + -1;
              iVar4 = iVar4 + -1;
            } while (0 < iVar4);
          }
          pbVar14 = *(byte **)(piVar2 + 2);
          iVar5 = 0;
          iVar13 = (int)pbVar14;
          if (0 < iVar4) {
            do {
              bVar3 = *pbVar12;
              if ((bVar3 & 0x80) == 0) {
                iVar13 = FUN_1801baab0(bVar3,8);
                if (iVar13 == 0) {
                  bVar3 = FUN_1801baad0(*pbVar12);
                  *pbVar14 = bVar3;
                  goto LAB_1801bec13;
                }
                *pbVar14 = 0x20;
                do {
                  pbVar1 = pbVar12 + 1;
                  pbVar12 = pbVar12 + 1;
                  iVar5 = iVar5 + 1;
                  iVar13 = FUN_1801baab0(*pbVar1,8);
                } while (iVar13 != 0);
              }
              else {
                *pbVar14 = bVar3;
LAB_1801bec13:
                pbVar12 = pbVar12 + 1;
                iVar5 = iVar5 + 1;
              }
              pbVar14 = pbVar14 + 1;
            } while (iVar5 < iVar4);
            iVar13 = piVar2[2];
          }
          *piVar2 = (int)pbVar14 - iVar13;
          param_1 = local_res8;
          iVar13 = local_res10;
        }
        iVar4 = FUN_180195990(lVar8,plVar9);
        if (iVar4 == 0) {
          uVar15 = 0x15a;
          goto LAB_1801becf6;
        }
        iVar13 = iVar13 + 1;
        local_res10 = iVar13;
        iVar4 = FUN_1801958b0(*param_1);
        if (iVar4 <= iVar13) break;
        iVar4 = local_res18;
      } while( true );
    }
    iVar4 = FUN_1801be900(lVar6,0);
    plVar9 = (longlong *)0x0;
    if (-1 < iVar4) {
      *(int *)(param_1 + 4) = iVar4;
      local_58[0] = FUN_180195dc0((longlong)iVar4,"crypto\\x509\\x_name.c",0x166);
      if (local_58[0] == 0) {
        uVar15 = 0x168;
LAB_1801becf6:
        FUN_1801a70c0(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",uVar15);
      }
      else {
        param_1[3] = local_58[0];
        iVar13 = 0;
        iVar4 = FUN_1801958b0(lVar6);
        if (0 < iVar4) {
          do {
            local_res8 = (undefined8 *)FUN_180195ae0(lVar6,iVar13);
            iVar4 = FUN_1801c1f90(&local_res8,local_58,&DAT_18032c8b0,0xffffffff,0xffffffff);
            if (iVar4 < 0) break;
            iVar13 = iVar13 + 1;
            iVar4 = FUN_1801958b0(lVar6);
          } while (iVar13 < iVar4);
        }
        local_res20 = 1;
      }
    }
  }
LAB_1801bed89:
  FUN_1801bfa90(plVar9,&DAT_18032c860);
  FUN_1801958f0(lVar6,FUN_1801be9b0);
  return local_res20;
}



// ===== FUN_1801bedf0 @ 1801bedf0 (size 409)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801bedf0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_res20;
  int local_18;
  
  iVar1 = FUN_1801bf060();
  if (iVar1 != 0) {
    iVar1 = ((local_res20 + 0x10bd9) * 4) / 0x23ab1;
    iVar2 = iVar1 * 0x23ab1 + 3;
    iVar5 = (local_res20 + 0x10bd9) - ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
    iVar2 = ((iVar5 + 1) * 4000) / 0x164b09;
    iVar3 = iVar2 * 0x5b5;
    iVar5 = iVar5 + (0x1f - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2));
    iVar3 = (iVar5 * 0x50) / 0x98f;
    uVar4 = (iVar1 + -0x44) * 100 + iVar3 / 0xb + iVar2;
    if (uVar4 < 0x1fa4) {
      param_1[5] = uVar4;
      param_1[3] = iVar5 - (iVar3 * 0x98f) / 0x50;
      param_1[4] = iVar3 + (iVar3 / 0xb) * -0xc + 1;
      param_1[2] = local_18 / 0xe10;
      param_1[1] = (local_18 / 0x3c) % 0x3c;
      *param_1 = local_18 % 0x3c;
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801bef90 @ 1801bef90 (size 199)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801bef90(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0x1801befa5;
  iVar1 = FUN_1801bf060(param_3,0,0,&local_14,(longlong)&local_10 + 4);
  if ((iVar1 == 0) || (iVar1 = FUN_1801bf060(param_4,0,0,&local_18,&local_10), iVar1 == 0)) {
    return 0;
  }
  local_18 = local_18 - local_14;
  local_10._0_4_ = (int)local_10 - local_10._4_4_;
  if ((0 < local_18) && ((int)local_10 < 0)) {
    local_18 = local_18 + -1;
    local_10._0_4_ = (int)local_10 + 0x15180;
  }
  if ((local_18 < 0) && (0 < (int)local_10)) {
    local_18 = local_18 + 1;
    local_10._0_4_ = (int)local_10 + -0x15180;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = local_18;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)local_10;
  }
  return 1;
}



// ===== FUN_1801bf060 @ 1801bf060 (size 311)

undefined8 FUN_1801bf060(int *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_2 = param_3 / 0x15180 + param_2;
  iVar3 = param_3 % 0x15180 + (param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1;
  if (iVar3 < 0x15180) {
    if (iVar3 < 0) {
      param_2 = param_2 + -1;
      iVar3 = iVar3 + 0x15180;
    }
  }
  else {
    param_2 = param_2 + 1;
    iVar3 = iVar3 + -0x15180;
  }
  iVar2 = (param_1[4] + -0xd) / 0xc;
  iVar4 = param_1[5] + iVar2;
  iVar1 = ((iVar4 + 0x1a90) / 100) * 3;
  iVar4 = (iVar4 + 0x1a2c) * 0x5b5;
  param_2 = ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + -0x7d4b +
            (((param_1[4] + iVar2 * -0xc + -1) * 0x16f) / 0xc -
            ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + param_1[3] + param_2;
  if (param_2 < 0) {
    return 0;
  }
  *param_4 = param_2;
  *param_5 = iVar3;
  return 1;
}



// ===== FUN_1801bf1a0 @ 1801bf1a0 (size 138)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801bf1a0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x1801bf1af;
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  lVar2 = FUN_1801bedc0(&local_68,local_60);
  if (lVar2 == 0) {
LAB_1801bf212:
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) || (param_4 != 0)) {
      iVar1 = FUN_1801bedf0(lVar2,param_3,param_4);
      if (iVar1 == 0) goto LAB_1801bf212;
    }
    uVar3 = FUN_18019c550(param_1,lVar2,0x17);
  }
  return uVar3;
}



// ===== FUN_1801bf260 @ 1801bf260 (size 138)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801bf260(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x1801bf26f;
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  lVar2 = FUN_1801bedc0(&local_68,local_60);
  if (lVar2 == 0) {
LAB_1801bf2d2:
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) || (param_4 != 0)) {
      iVar1 = FUN_1801bedf0(lVar2,param_3,param_4);
      if (iVar1 == 0) goto LAB_1801bf2d2;
    }
    uVar3 = FUN_18019c550(param_1,lVar2,0x18);
  }
  return uVar3;
}



// ===== FUN_1801bf350 @ 1801bf350 (size 116)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801bf350(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801bf35c;
  local_24 = 0x18;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  local_28 = (undefined4)lVar2;
  local_18 = 0;
  local_20 = param_2;
  iVar1 = FUN_18019c680(0,&local_28);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_1 == 0) || (iVar1 = FUN_18019a0c0(param_1,&local_28), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// ===== FUN_1801bf430 @ 1801bf430 (size 670)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801bf430(longlong *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801bf449;
  iVar4 = 0;
  lVar3 = *(longlong *)(param_2 + 0x18);
  if ((lVar3 == 0) || (pcVar5 = *(code **)(lVar3 + 0x18), pcVar5 == (code *)0x0)) {
    pcVar5 = (code *)0x0;
  }
  switch(*param_2) {
  case 0:
    if (*(longlong *)(param_2 + 8) == 0) goto LAB_1801bf4bf;
    iVar4 = FUN_1801bf9a0();
    break;
  case 1:
  case 6:
    if (pcVar5 != (code *)0x0) {
      iVar1 = (*pcVar5)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_1801bf694;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      lVar3 = FUN_180196100((longlong)*(int *)(param_2 + 0x20),"crypto\\asn1\\tasn_new.c",0x7a);
      *param_1 = lVar3;
      if (lVar3 == 0) goto LAB_1801bf605;
    }
    else {
      memset((void *)*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    }
    iVar1 = FUN_1801f1530(param_1,0,param_2);
    if (iVar1 < 0) {
      if (param_3 == 0) {
        FUN_180195e10(*param_1,"crypto\\asn1\\tasn_new.c",0x81);
        *param_1 = 0;
      }
      goto LAB_1801bf605;
    }
    FUN_1801f1690(param_1,param_2);
    lVar3 = *(longlong *)(param_2 + 8);
    if (0 < *(int *)(param_2 + 0x10)) {
      do {
        uVar2 = FUN_1801f1880(param_1,lVar3);
        iVar1 = FUN_1801bf9a0(uVar2,lVar3);
        if (iVar1 == 0) {
          FUN_1801bfac0(param_1,param_2,param_3);
          goto LAB_1801bf605;
        }
        lVar3 = lVar3 + 0x20;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_2 + 0x10));
    }
    if (pcVar5 == (code *)0x0) {
      return 1;
    }
    iVar4 = (*pcVar5)(1,param_1,param_2);
    goto joined_r0x0001801bf576;
  case 2:
    if (pcVar5 != (code *)0x0) {
      iVar4 = (*pcVar5)(0,param_1,param_2,0);
      if (iVar4 == 0) goto LAB_1801bf694;
      if (iVar4 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      lVar3 = FUN_180196100((longlong)*(int *)(param_2 + 0x20),"crypto\\asn1\\tasn_new.c",0x61);
      *param_1 = lVar3;
      if (lVar3 == 0) goto LAB_1801bf605;
    }
    else {
      memset((void *)*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    }
    FUN_1801f1890(param_1,0xffffffff,param_2);
    if (pcVar5 == (code *)0x0) {
      return 1;
    }
    iVar4 = (*pcVar5)(1,param_1,param_2);
joined_r0x0001801bf576:
    if (iVar4 != 0) {
      return 1;
    }
    FUN_1801bfac0(param_1,param_2,param_3);
LAB_1801bf694:
    FUN_1801a70c0(0xd,0x79,100,"crypto\\asn1\\tasn_new.c",0xa1);
    return 0;
  default:
    goto LAB_1801bf4d1;
  case 4:
    if (lVar3 == 0) {
      return 1;
    }
    if (*(code **)(lVar3 + 8) == (code *)0x0) {
      return 1;
    }
    iVar4 = (**(code **)(lVar3 + 8))(param_1,param_2);
    break;
  case 5:
LAB_1801bf4bf:
    iVar4 = FUN_1801bf740(param_1,param_2,param_3);
  }
  if (iVar4 == 0) {
LAB_1801bf605:
    FUN_1801a70c0(0xd,0x79,0x41,"crypto\\asn1\\tasn_new.c",0x98,uVar6);
    return 0;
  }
LAB_1801bf4d1:
  return 1;
}



// ===== FUN_1801bf6f0 @ 1801bf6f0 (size 76)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801bf6f0(undefined8 *param_1,char *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != (char *)0x0) {
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if ((*param_2 != '\x05') && (*(int *)(param_2 + 4) == 1)) {
        *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x20);
        return;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 0x18) + 0x20);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801bf718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



// ===== FUN_1801bf740 @ 1801bf740 (size 402)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801bf740(longlong *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    if (param_3 == 0) {
      if (*(code **)(lVar4 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801bf7a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar4 + 0x10))();
        return uVar2;
      }
    }
    else if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
      (**(code **)(lVar4 + 0x20))();
      return 1;
    }
  }
  if (*param_2 == '\x05') {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == -4) {
      puVar5 = (undefined4 *)FUN_180195dc0(0x10,"crypto\\asn1\\tasn_new.c",0x12e);
      if (puVar5 == (undefined4 *)0x0) {
        FUN_1801a70c0(0xd,0x77,0x41,"crypto\\asn1\\tasn_new.c",0x12f);
        return 0;
      }
      *(undefined8 *)(puVar5 + 2) = 0;
      *puVar5 = 0xffffffff;
      *param_1 = (longlong)puVar5;
      goto LAB_1801bf8bb;
    }
    if (iVar1 == 1) {
      *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x20);
      return 1;
    }
    if (iVar1 == 5) {
      *param_1 = 1;
      return 1;
    }
    if (iVar1 == 6) {
      lVar4 = FUN_1801b9550(0);
      *param_1 = lVar4;
      return 1;
    }
  }
  if (param_3 == 0) {
    puVar3 = (undefined8 *)FUN_18019a600(iVar1);
    *param_1 = (longlong)puVar3;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(int *)((longlong)puVar3 + 4) = iVar1;
    *(undefined4 *)(puVar3 + 2) = 0x80;
  }
  if ((*param_2 == '\x05') && (puVar3 != (undefined8 *)0x0)) {
    *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) | 0x40;
  }
LAB_1801bf8bb:
  if (*param_1 == 0) {
    return 0;
  }
  return 1;
}



// ===== FUN_1801bf8e0 @ 1801bf8e0 (size 154)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801bf8e0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar2;
  
  uVar1 = *param_2;
  while ((uVar1 & 0x306) == 0) {
    puVar2 = (undefined1 *)(**(code **)(param_2 + 6))();
    switch(*puVar2) {
    case 0:
      param_2 = *(uint **)(puVar2 + 8);
      if (param_2 == (uint *)0x0) goto switchD_1801bf91b_caseD_5;
      uVar1 = *param_2;
      break;
    case 1:
    case 2:
    case 6:
      goto switchD_1801bf91b_caseD_1;
    default:
      goto switchD_1801bf91b_caseD_3;
    case 4:
      if ((*(longlong *)(puVar2 + 0x18) != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(puVar2 + 0x18) + 0x18),
         UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001801bf962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,puVar2);
        return;
      }
      goto switchD_1801bf91b_caseD_1;
    case 5:
switchD_1801bf91b_caseD_5:
      FUN_1801bf6f0(param_1,puVar2);
      return;
    }
  }
switchD_1801bf91b_caseD_1:
  *param_1 = 0;
switchD_1801bf91b_caseD_3:
  return;
}



// ===== FUN_1801bf9a0 @ 1801bf9a0 (size 195)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801bf9a0(longlong ***param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong **pplVar3;
  longlong ***ppplVar4;
  longlong ***local_res10 [3];
  undefined8 uVar5;
  
  uVar5 = 0x1801bf9b0;
  uVar2 = (**(code **)(param_2 + 6))();
  uVar1 = *param_2;
  ppplVar4 = param_1;
  if ((uVar1 & 0x1000) != 0) {
    ppplVar4 = (longlong ***)local_res10;
    local_res10[0] = param_1;
  }
  if ((uVar1 & 1) != 0) {
    FUN_1801bf8e0(ppplVar4,param_2);
    return 1;
  }
  if ((uVar1 & 0x300) == 0) {
    if ((uVar1 & 6) == 0) {
      uVar2 = FUN_1801bf430(ppplVar4,uVar2);
      return uVar2;
    }
    pplVar3 = (longlong **)FUN_1801957e0();
    if (pplVar3 == (longlong **)0x0) {
      FUN_1801a70c0(0xd,0x85,0x41,"crypto\\asn1\\tasn_new.c",0xe7,uVar5);
      return 0;
    }
  }
  else {
    pplVar3 = (longlong **)0x0;
  }
  *ppplVar4 = pplVar3;
  return 1;
}



// ===== FUN_1801bfac0 @ 1801bfac0 (size 568)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801bfac0(longlong *param_1,char *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar6 = *(longlong *)(param_2 + 0x18);
  if ((*param_2 != '\0') && (*param_1 == 0)) {
    return;
  }
  if ((lVar6 == 0) || (pcVar4 = *(code **)(lVar6 + 0x18), pcVar4 == (code *)0x0)) {
    pcVar4 = (code *)0x0;
  }
  switch(*param_2) {
  case '\0':
    if (*(longlong *)(param_2 + 8) == 0) {
      FUN_1801bfd20(param_1,param_2,param_3);
    }
    else {
      FUN_1801bfe30();
    }
    break;
  case '\x01':
  case '\x06':
    iVar1 = FUN_1801f1530(param_1,0xffffffff,param_2);
    if ((iVar1 == 0) &&
       ((pcVar4 == (code *)0x0 || (iVar1 = (*pcVar4)(2,param_1,param_2,0), iVar1 != 2)))) {
      FUN_1801f1620(param_1,param_2);
      iVar1 = 0;
      lVar6 = (longlong)*(int *)(param_2 + 0x10) * 0x20 + *(longlong *)(param_2 + 8);
      if (0 < *(int *)(param_2 + 0x10)) {
        do {
          lVar6 = lVar6 + -0x20;
          lVar2 = FUN_1801f1420(param_1,lVar6,0);
          if (lVar2 != 0) {
            uVar3 = FUN_1801f1880(param_1,lVar2);
            FUN_1801bfe30(uVar3,lVar2);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_2 + 0x10));
      }
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(3,param_1,param_2);
      }
      if (param_3 == 0) {
        uVar5 = 0x73;
LAB_1801bfccf:
        FUN_180195e10(*param_1,"crypto\\asn1\\tasn_fre.c",uVar5);
        *param_1 = 0;
      }
    }
    break;
  case '\x02':
    if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(2,param_1,param_2), iVar1 != 2)) {
      iVar1 = FUN_1801f1870(param_1,param_2);
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x10))) {
        lVar6 = (longlong)iVar1 * 0x20 + *(longlong *)(param_2 + 8);
        uVar3 = FUN_1801f1880(param_1,lVar6);
        FUN_1801bfe30(uVar3,lVar6);
      }
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(3,param_1,param_2);
      }
      if (param_3 == 0) {
        uVar5 = 0x4b;
        goto LAB_1801bfccf;
      }
    }
    break;
  case '\x03':
    break;
  case '\x04':
    if ((lVar6 != 0) && (*(code **)(lVar6 + 0x10) != (code *)0x0)) {
      (**(code **)(lVar6 + 0x10))(param_1,param_2);
    }
    break;
  case '\x05':
    FUN_1801bfd20(param_1,param_2,param_3);
    break;
  default:
    goto LAB_1801bfcf7;
  }
LAB_1801bfcf7:
  return;
}



// ===== FUN_1801bfd20 @ 1801bfd20 (size 266)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801bfd20(longlong *param_1,char *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    iVar2 = *(int *)*param_1;
    param_1 = (longlong *)((int *)*param_1 + 2);
LAB_1801bfd93:
    if (*param_1 == 0) {
      return;
    }
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (lVar1 != 0) {
      if (param_3 == 0) {
        if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801bfd67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar1 + 0x18))();
          return;
        }
      }
      else if (*(code **)(lVar1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801bfd56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x20))();
        return;
      }
    }
    if (*param_2 == '\x05') {
      iVar2 = -1;
      if (*param_1 == 0) {
        return;
      }
      goto LAB_1801bfdac;
    }
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 != 1) goto LAB_1801bfd93;
  }
  if (iVar2 == -4) {
    FUN_1801bfd20(param_1,0,0);
    FUN_180195e10(*param_1,"crypto\\asn1\\tasn_fre.c",200);
  }
  else {
    if (iVar2 == 1) {
      if (param_2 == (char *)0x0) {
        *(int *)param_1 = -1;
        return;
      }
      *(int *)param_1 = *(int *)(param_2 + 0x20);
      return;
    }
    if (iVar2 != 5) {
LAB_1801bfdac:
      if (iVar2 == 6) {
        FUN_18019aa30(*param_1);
        *param_1 = 0;
        return;
      }
      FUN_18019a9d0(*param_1,param_3);
      *param_1 = 0;
      return;
    }
  }
  *param_1 = 0;
  return;
}



// ===== FUN_1801bfe30 @ 1801bfe30 (size 189)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801bfe30(undefined8 ***param_1,uint *param_2)

{
  undefined8 **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 ***local_res10;
  undefined8 local_res18;
  
  uVar5 = *param_2 & 0x1000;
  if (uVar5 != 0) {
    local_res10 = param_1;
    param_1 = &local_res10;
  }
  if ((*param_2 & 6) == 0) {
    uVar3 = (**(code **)(param_2 + 6))();
    FUN_1801bfac0(param_1,uVar3,uVar5);
    return;
  }
  iVar4 = 0;
  ppuVar1 = *param_1;
  iVar2 = FUN_1801958b0(ppuVar1);
  if (0 < iVar2) {
    do {
      local_res18 = FUN_180195ae0(ppuVar1,iVar4);
      uVar3 = (**(code **)(param_2 + 6))();
      FUN_1801bfac0(&local_res18,uVar3,uVar5);
      iVar4 = iVar4 + 1;
      iVar2 = FUN_1801958b0(ppuVar1);
    } while (iVar4 < iVar2);
  }
  FUN_180195650(ppuVar1);
  *param_1 = (undefined8 **)0x0;
  return;
}



// ===== FUN_1801bfef0 @ 1801bfef0 (size 148)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1801bfef0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x1801bfefd;
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  local_60 = local_40;
  local_58 = 0;
  local_68 = 0;
  puVar3 = &local_48;
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = param_1;
  }
  local_70 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_78 = 0xffffffff;
  iVar1 = FUN_1801c0d90(puVar3,param_2,param_3,param_4);
  if (iVar1 < 1) {
    FUN_1801bfa70(puVar3,param_4);
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar3;
  }
  return uVar2;
}



// ===== FUN_1801bff90 @ 1801bff90 (size 125)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801bff90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1801c0d90();
  if ((int)uVar1 < 1) {
    FUN_1801bfa70(param_1,param_4);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_1801c0030 @ 1801c0030 (size 786)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1801c0030(int *param_1,longlong *param_2,uint param_3,byte param_4,int param_5,int param_6,
             int param_7)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int local_res8 [2];
  longlong *local_res10;
  int local_58;
  int local_54;
  char *local_50;
  char *local_48 [2];
  
  pcVar9 = (char *)*param_2;
  param_4 = param_4 & 1;
  uVar7 = (ulonglong)(int)param_3;
  local_res10 = param_2;
  if ((param_1 == (int *)0x0) && (param_4 == 0)) {
    *param_2 = (longlong)(pcVar9 + uVar7);
    return 1;
  }
  do {
    local_50 = pcVar9;
    if ((int)param_3 < 1) {
      if (param_4 == 0) {
LAB_1801c030b:
        *local_res10 = (longlong)pcVar9;
        uVar4 = 1;
      }
      else {
        FUN_1801a70c0(0xd,0x6a,0x89,"crypto\\asn1\\tasn_dec.c",0x41d);
        uVar4 = 0;
      }
      return uVar4;
    }
    iVar6 = (int)uVar7;
    if (((1 < iVar6) && (*pcVar9 == '\0')) && (pcVar9[1] == '\0')) {
      pcVar9 = pcVar9 + 2;
      if (param_4 == 0) {
        local_50 = pcVar9;
        FUN_1801a70c0(0xd,0x6a,0x9f,"crypto\\asn1\\tasn_dec.c",0x403);
        return 0;
      }
      goto LAB_1801c030b;
    }
    local_48[0] = pcVar9;
    bVar2 = FUN_18019a660(local_48,local_res8,&local_58,&local_54,iVar6);
    if ((char)bVar2 < '\0') {
      uVar4 = 0x471;
      uVar8 = 0x66;
LAB_1801c02c7:
      FUN_1801a70c0(0xd,0x68,uVar8,"crypto\\asn1\\tasn_dec.c",uVar4);
      FUN_1801a70c0(0xd,0x6a,0x3a,"crypto\\asn1\\tasn_dec.c",0x40c);
      return 0;
    }
    if ((-1 < param_5) && ((param_5 != local_58 || (param_6 != local_54)))) {
      uVar4 = 0x47d;
      uVar8 = 0xa8;
      goto LAB_1801c02c7;
    }
    if ((bVar2 & 1) != 0) {
      local_res8[0] = ((int)pcVar9 - (int)local_48[0]) + iVar6;
    }
    iVar3 = local_res8[0];
    local_50 = local_48[0];
    if ((bVar2 & 0x20) == 0) {
      if (local_res8[0] != 0) {
        if (param_1 != (int *)0x0) {
          iVar1 = *param_1;
          lVar5 = FUN_1801aea60(param_1,(longlong)(local_res8[0] + iVar1));
          if (lVar5 == 0) {
            FUN_1801a70c0(0xd,0x8c,0x41,"crypto\\asn1\\tasn_dec.c",0x42a);
            return 0;
          }
          memcpy((void *)((longlong)iVar1 + *(longlong *)(param_1 + 2)),local_50,(longlong)iVar3);
        }
        local_50 = local_50 + iVar3;
      }
    }
    else {
      if (4 < param_7) {
        FUN_1801a70c0(0xd,0x6a,0xc5,"crypto\\asn1\\tasn_dec.c",0x413);
        return 0;
      }
      iVar3 = FUN_1801c0030(param_1,&local_50,local_res8[0],bVar2 & 1,param_5,param_6,param_7 + 1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    param_3 = iVar6 + ((int)pcVar9 - (int)local_50);
    uVar7 = (ulonglong)param_3;
    pcVar9 = local_50;
  } while( true );
}



// ===== FUN_1801c0350 @ 1801c0350 (size 1417)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801c0350(longlong param_1,longlong *param_2,int param_3,char *param_4,uint param_5,int param_6,
             char param_7,char *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 uVar9;
  undefined4 uVar10;
  ulonglong in_stack_ffffffffffffff70;
  char local_78 [4];
  int local_74;
  uint local_70;
  uint local_6c;
  int local_68 [2];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar8 = 0;
  local_78[0] = '\0';
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  if (param_1 == 0) {
    FUN_1801a70c0(0xd,0x6c,0x7d,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar10,0x2a0));
    return 0;
  }
  if (*param_4 == '\x05') {
    uVar6 = 0xffffffff;
    uVar1 = param_5;
  }
  else {
    uVar1 = *(uint *)(param_4 + 4);
    uVar6 = param_5;
  }
  if (uVar1 == 0xfffffffc) {
    if (-1 < (int)uVar6) {
      FUN_1801a70c0(0xd,0x6c,0x7f,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar10,0x2ae));
      return 0;
    }
    if (param_7 != '\0') {
      FUN_1801a70c0(0xd,0x6c,0x7e,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar10,0x2b3));
      return 0;
    }
    lVar5 = *param_2;
    if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
      uVar9 = CONCAT44(uVar10,param_3);
      local_60 = lVar5;
      uVar1 = FUN_18019a660(&local_60,local_68,&local_70,&local_74,uVar9);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if (param_8 == (char *)0x0) goto LAB_1801c0504;
      *(uint *)(param_8 + 4) = uVar1;
      iVar4 = (int)local_60 - (int)lVar5;
      *(int *)(param_8 + 8) = local_68[0];
      *(int *)(param_8 + 0x10) = local_74;
      *(uint *)(param_8 + 0xc) = local_70;
      *(int *)(param_8 + 0x14) = iVar4;
      *param_8 = '\x01';
      if (((uVar1 & 0x81) != 0) || (iVar4 + local_68[0] <= param_3)) goto LAB_1801c0504;
      uVar8 = CONCAT44(uVar10,0x469);
      FUN_1801a70c0(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",uVar8);
      uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    else {
      local_68[0] = *(int *)(param_8 + 8);
      local_74 = *(int *)(param_8 + 0x10);
      local_70 = *(uint *)(param_8 + 0xc);
      uVar1 = *(uint *)(param_8 + 4);
      local_60 = lVar5 + *(int *)(param_8 + 0x14);
LAB_1801c0504:
      if (-1 < (char)uVar1) {
        uVar1 = local_70;
        if ((char)local_74 != '\0') {
          uVar1 = 0xfffffffd;
        }
        goto LAB_1801c0562;
      }
      uVar8 = CONCAT44(uVar10,0x471);
      FUN_1801a70c0(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",uVar8);
      uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (param_8 == (char *)0x0) goto LAB_1801c0530;
    }
    *param_8 = '\0';
LAB_1801c0530:
    FUN_1801a70c0(0xd,0x6c,0x3a,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar10,0x2ba));
    return 0;
  }
LAB_1801c0562:
  local_68[0] = 0;
  if (uVar6 == 0xffffffff) {
    uVar6 = uVar1;
  }
  else {
    local_68[0] = param_6;
  }
  local_60 = *param_2;
  iVar4 = (int)local_60;
  if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
    uVar9 = CONCAT44(uVar10,param_3);
    uVar2 = FUN_18019a660(&local_60,&local_70,&local_6c,&local_74,uVar9);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (param_8 != (char *)0x0) {
      *(uint *)(param_8 + 4) = uVar2;
      iVar3 = (int)local_60 - iVar4;
      *(uint *)(param_8 + 8) = local_70;
      *(int *)(param_8 + 0x10) = local_74;
      *(uint *)(param_8 + 0xc) = local_6c;
      *(int *)(param_8 + 0x14) = iVar3;
      *param_8 = '\x01';
      if (((uVar2 & 0x81) == 0) && (param_3 < (int)(iVar3 + local_70))) {
        uVar8 = CONCAT44(uVar10,0x469);
        FUN_1801a70c0(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",uVar8);
        uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
        *param_8 = '\0';
        goto LAB_1801c0740;
      }
    }
  }
  else {
    local_70 = *(uint *)(param_8 + 8);
    local_60 = *(int *)(param_8 + 0x14) + local_60;
    local_74 = *(int *)(param_8 + 0x10);
    local_6c = *(uint *)(param_8 + 0xc);
    uVar2 = *(uint *)(param_8 + 4);
  }
  if ((char)(byte)uVar2 < '\0') {
    uVar8 = CONCAT44(uVar10,0x471);
    FUN_1801a70c0(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",uVar8);
    uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (param_8 != (char *)0x0) {
      *param_8 = '\0';
    }
LAB_1801c0740:
    FUN_1801a70c0(0xd,0x6c,0x3a,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar10,0x2c9));
    return 0;
  }
  if (-1 < (int)uVar6) {
    if ((uVar6 != local_6c) || (local_68[0] != local_74)) {
      if (param_7 != '\0') {
        return 0xffffffff;
      }
      if (param_8 != (char *)0x0) {
        *param_8 = '\0';
      }
      uVar8 = CONCAT44(uVar10,0x47d);
      FUN_1801a70c0(0xd,0x68,0xa8,"crypto\\asn1\\tasn_dec.c",uVar8);
      uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
      goto LAB_1801c0740;
    }
    if (param_8 != (char *)0x0) {
      *param_8 = '\0';
    }
  }
  uVar6 = local_70;
  if ((uVar2 & 1) != 0) {
    uVar6 = (iVar4 - (int)local_60) + param_3;
  }
  if ((uVar1 == 0x10) || (uVar1 == 0x11)) {
    if (uVar1 == 0xfffffffd) goto LAB_1801c07ff;
    if ((uVar2 & 0x20) == 0) {
      FUN_1801a70c0(0xd,0x6c,0x9c,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar10,0x2db));
      return 0;
    }
LAB_1801c0807:
    lVar5 = *param_2;
    if ((uVar2 & 1) == 0) {
      lVar7 = (longlong)(int)uVar6;
      uVar6 = ((int)local_60 - (int)lVar5) + uVar6;
      lVar7 = lVar7 + local_60;
    }
    else {
      iVar4 = FUN_1801c0c20(&local_60,uVar6);
      if (iVar4 == 0) goto LAB_1801c0892;
      uVar6 = (int)local_60 - (int)lVar5;
      lVar7 = local_60;
    }
  }
  else {
    if (uVar1 == 0xfffffffd) {
LAB_1801c07ff:
      if (param_8 != (char *)0x0) {
        *param_8 = '\0';
      }
      goto LAB_1801c0807;
    }
    if ((uVar2 & 0x20) == 0) {
      lVar7 = local_60 + (int)uVar6;
      lVar5 = local_60;
    }
    else {
      if ((uVar1 < 0xb) && ((0x466U >> (uVar1 & 0x1f) & 1) != 0)) {
        FUN_1801a70c0(0xd,0x6c,0xc3,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar10,0x2ed));
        return 0;
      }
      local_78[0] = '\x01';
      uVar9 = CONCAT44(uVar10,0xffffffff);
      iVar4 = FUN_1801c0030(&local_58,&local_60,uVar6,(byte)uVar2 & 1,uVar9,
                            in_stack_ffffffffffffff70 & 0xffffffff00000000,0);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if (iVar4 == 0) goto LAB_1801c0892;
      uVar6 = (uint)local_58;
      lVar7 = (longlong)(int)(uint)local_58;
      lVar5 = FUN_1801aea60(&local_58,(longlong)(int)((uint)local_58 + 1));
      if (lVar5 == 0) {
        FUN_1801a70c0(0xd,0x6c,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar10,0x2ff));
        goto LAB_1801c0892;
      }
      *(undefined1 *)(lVar7 + local_50) = 0;
      lVar7 = local_60;
      lVar5 = local_50;
    }
  }
  iVar4 = FUN_1801c08e0(param_1,lVar5,uVar6,uVar1,local_78,param_4);
  if (iVar4 != 0) {
    uVar8 = 1;
    *param_2 = lVar7;
  }
LAB_1801c0892:
  if (local_78[0] != '\0') {
    FUN_180195e10(local_50,"crypto\\asn1\\tasn_dec.c",0x313);
  }
  return uVar8;
}



// ===== FUN_1801c08e0 @ 1801c08e0 (size 791)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801c08e0(uint *param_1,byte *param_2,uint param_3,uint param_4,char *param_5,longlong param_6)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte *local_res10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar9 = 0x1801c08fc;
  puVar7 = (uint *)0x0;
  puVar3 = (uint *)0x0;
  local_res10 = param_2;
  if ((*(longlong *)(param_6 + 0x18) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_6 + 0x18) + 0x28), pcVar1 != (code *)0x0)) {
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  puVar6 = param_1;
  if (*(int *)(param_6 + 4) == -4) {
    puVar3 = *(uint **)param_1;
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)FUN_1801bc5a0();
      if (puVar3 == (uint *)0x0) goto LAB_1801c0bdd;
      *(uint **)param_1 = puVar3;
    }
    if (param_4 != *puVar3) {
      FUN_1801d5970(puVar3,param_4,0);
    }
    puVar6 = puVar3 + 2;
    puVar7 = param_1;
  }
  switch(param_4) {
  case 1:
    if (param_3 == 1) {
      *puVar6 = (uint)*local_res10;
      break;
    }
    FUN_1801a70c0(0xd,0xcc,0x6a,"crypto\\asn1\\tasn_dec.c",0x345,uVar9);
    goto LAB_1801c0bdd;
  case 2:
  case 10:
    lVar4 = FUN_1801dc5c0(puVar6,&local_res10,param_3);
    if (lVar4 == 0) goto LAB_1801c0bdd;
    *(uint *)(*(longlong *)puVar6 + 4) = *(uint *)(*(longlong *)puVar6 + 4) & 0x100 | param_4;
    break;
  case 3:
    lVar4 = FUN_1801f1a60(puVar6,&local_res10,param_3);
    goto LAB_1801c09d2;
  default:
    if (param_4 == 0x1e) {
      if ((param_3 & 1) != 0) {
        FUN_1801a70c0(0xd,0xcc,0xd6,"crypto\\asn1\\tasn_dec.c",0x36f,uVar9);
        goto LAB_1801c0bdd;
      }
    }
    else if ((param_4 == 0x1c) && ((param_3 & 3) != 0)) {
      FUN_1801a70c0(0xd,0xcc,0xd7,"crypto\\asn1\\tasn_dec.c",0x374,uVar9);
      goto LAB_1801c0bdd;
    }
    puVar5 = *(uint **)puVar6;
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)FUN_18019a600(param_4);
      if (puVar5 == (uint *)0x0) {
        FUN_1801a70c0(0xd,0xcc,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar8,0x37b));
        goto LAB_1801c0bdd;
      }
      *(uint **)puVar6 = puVar5;
    }
    else {
      puVar5[1] = param_4;
    }
    if (*param_5 == '\0') {
      iVar2 = FUN_18019a480(puVar5,local_res10,param_3);
      if (iVar2 == 0) {
        FUN_1801a70c0(0xd,0xcc,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar8,0x38b));
        FUN_18019a3a0(puVar5);
        puVar6[0] = 0;
        puVar6[1] = 0;
        goto LAB_1801c0bdd;
      }
    }
    else {
      FUN_180195e10(*(undefined8 *)(puVar5 + 2),"crypto\\asn1\\tasn_dec.c",0x385);
      *(byte **)(puVar5 + 2) = local_res10;
      *puVar5 = param_3;
      *param_5 = '\0';
    }
    break;
  case 5:
    if (param_3 != 0) {
      FUN_1801a70c0(0xd,0xcc,0x90,"crypto\\asn1\\tasn_dec.c",0x33d,uVar9);
      goto LAB_1801c0bdd;
    }
    puVar6[0] = 1;
    puVar6[1] = 0;
    break;
  case 6:
    lVar4 = FUN_18019af80(puVar6,&local_res10,param_3);
LAB_1801c09d2:
    if (lVar4 == 0) {
LAB_1801c0bdd:
      FUN_1801bc580(puVar3);
      if (puVar7 != (uint *)0x0) {
        puVar7[0] = 0;
        puVar7[1] = 0;
      }
      return 0;
    }
  }
  if ((puVar3 != (uint *)0x0) && (param_4 == 5)) {
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  return 1;
}



// ===== FUN_1801c0c20 @ 1801c0c20 (size 366)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c0c20(longlong *param_1,int param_2,char param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 uVar8;
  char *local_28 [2];
  
  pcVar2 = (char *)*param_1;
  uVar6 = (ulonglong)param_2;
  if (param_3 == '\0') {
    *param_1 = (longlong)(pcVar2 + uVar6);
    return 1;
  }
  iVar4 = 1;
  if (0 < param_2) {
    do {
      iVar5 = (int)uVar6;
      if (((iVar5 < 2) || (*pcVar2 != '\0')) || (pcVar2[1] != '\0')) {
        local_28[0] = pcVar2;
        bVar1 = FUN_18019a660(local_28,local_res18,local_res20,local_res8,iVar5);
        if ((char)bVar1 < '\0') {
          FUN_1801a70c0(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
          uVar7 = 0x3a;
          uVar8 = 0x3c5;
          goto LAB_1801c0d64;
        }
        iVar3 = (int)pcVar2;
        if ((bVar1 & 1) != 0) {
          local_res18[0] = (iVar3 - (int)local_28[0]) + iVar5;
        }
        if ((bVar1 & 1) == 0) {
          pcVar2 = local_28[0] + local_res18[0];
        }
        else {
          if (iVar4 == -1) {
            uVar8 = 0x3ca;
            uVar7 = 0x3a;
            goto LAB_1801c0d64;
          }
          iVar4 = iVar4 + 1;
          pcVar2 = local_28[0];
        }
        iVar3 = iVar3 - (int)pcVar2;
      }
      else {
        pcVar2 = pcVar2 + 2;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) goto LAB_1801c0cfc;
        iVar3 = -2;
      }
      uVar6 = (ulonglong)(uint)(iVar5 + iVar3);
    } while (0 < iVar5 + iVar3);
    if (iVar4 == 0) {
LAB_1801c0cfc:
      *param_1 = (longlong)pcVar2;
      return 1;
    }
  }
  uVar8 = 0x3d4;
  uVar7 = 0x89;
LAB_1801c0d64:
  FUN_1801a70c0(0xd,0xbe,uVar7,"crypto\\asn1\\tasn_dec.c",uVar8);
  return 0;
}



// ===== FUN_1801c0d90 @ 1801c0d90 (size 2553)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801c0d90(longlong *param_1,longlong *param_2,ulonglong param_3,undefined1 *param_4,int param_5,
             uint param_6,char param_7,char *param_8,int param_9)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  char cVar8;
  char *pcVar9;
  char *pcVar10;
  uint *puVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  bool bVar15;
  uint local_res8 [2];
  longlong *local_res10;
  uint local_res20 [2];
  ulonglong in_stack_ffffffffffffff78;
  undefined8 uVar16;
  ulonglong in_stack_ffffffffffffff80;
  uint in_stack_ffffffffffffff88;
  int local_68;
  int local_64;
  char *local_60;
  char *local_58;
  code *local_50;
  char *local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801c0db2;
  lVar5 = *(longlong *)(param_4 + 0x18);
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if ((lVar5 == 0) || (local_50 = *(code **)(lVar5 + 0x18), local_50 == (code *)0x0)) {
    local_50 = (code *)0x0;
  }
  param_9 = param_9 + 1;
  local_res10 = param_2;
  if (0x1e < param_9) {
    uVar16 = 0xa0;
    uVar6 = 0xc9;
    goto LAB_1801c0e14;
  }
  iVar4 = (int)param_3;
  switch(*param_4) {
  case 0:
    if (*(longlong *)(param_4 + 8) == 0) {
      uVar6 = FUN_1801c0350(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar6;
    }
    if ((param_5 == -1) && (param_7 == '\0')) {
      uVar6 = FUN_1801c17b0(param_1,param_2,param_3,*(longlong *)(param_4 + 8),
                            in_stack_ffffffffffffff78 & 0xffffffffffffff00,param_8,param_9);
      return uVar6;
    }
    uVar16 = 0xaf;
    uVar6 = 0xaa;
    break;
  case 1:
  case 6:
    local_58 = (char *)*param_2;
    uVar14 = 0;
    if (param_5 != -1) {
      uVar14 = param_6;
    }
    local_64 = 0x10;
    if (param_5 != -1) {
      local_64 = param_5;
    }
    local_60 = (char *)CONCAT44(local_60._4_4_,uVar14);
    local_48 = local_58;
    if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
      uVar3 = FUN_18019a660(&local_58,local_res8,&local_68,local_res20,param_3 & 0xffffffff);
      if (param_8 != (char *)0x0) {
        *(uint *)(param_8 + 4) = uVar3;
        iVar12 = (int)local_58 - (int)local_48;
        *(uint *)(param_8 + 8) = local_res8[0];
        *(uint *)(param_8 + 0x10) = local_res20[0];
        *(int *)(param_8 + 0xc) = local_68;
        *(int *)(param_8 + 0x14) = iVar12;
        *param_8 = '\x01';
        if (((uVar3 & 0x81) == 0) && (iVar4 < (int)(iVar12 + local_res8[0]))) {
          FUN_1801a70c0(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x469);
          *param_8 = '\0';
          uVar16 = 0x135;
          goto LAB_1801c1205;
        }
      }
      uVar14 = (uint)local_60;
      pcVar10 = local_58;
    }
    else {
      local_res8[0] = *(uint *)(param_8 + 8);
      local_res20[0] = *(uint *)(param_8 + 0x10);
      local_68 = *(int *)(param_8 + 0xc);
      uVar3 = *(uint *)(param_8 + 4);
      pcVar10 = local_58 + *(int *)(param_8 + 0x14);
    }
    local_58 = pcVar10;
    pcVar9 = local_58;
    cVar8 = (char)uVar3;
    if (cVar8 < '\0') {
      FUN_1801a70c0(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
      if (param_8 == (char *)0x0) {
LAB_1801c143c:
        uVar16 = 0x135;
      }
      else {
        *param_8 = '\0';
        uVar16 = 0x135;
      }
LAB_1801c1205:
      uVar6 = 0x3a;
    }
    else {
      if (-1 < local_64) {
        if ((local_64 != local_68) || (uVar14 != local_res20[0])) {
          if (param_7 != '\0') {
            return 0xffffffff;
          }
          if (param_8 != (char *)0x0) {
            *param_8 = '\0';
          }
          FUN_1801a70c0(0xd,0x68,0xa8,"crypto\\asn1\\tasn_dec.c",0x47d);
          goto LAB_1801c143c;
        }
        if (param_8 != (char *)0x0) {
          *param_8 = '\0';
        }
      }
      uVar14 = local_res8[0];
      if ((uVar3 & 1) != 0) {
        uVar14 = ((int)local_48 - (int)local_58) + iVar4;
      }
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,cVar8) & 0xffffff01;
      if ((lVar5 == 0) || ((*(byte *)(lVar5 + 8) & 4) == 0)) {
        local_res20[0] = CONCAT31(local_res20[0]._1_3_,cVar8) & 0xffffff01;
      }
      else {
        local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
        uVar14 = (iVar4 - (int)local_58) + (int)*local_res10;
      }
      local_60 = local_58;
      if ((uVar3 & 0x20) == 0) {
        uVar16 = 0x141;
        uVar6 = 0x95;
      }
      else {
        if ((*param_1 == 0) && (iVar4 = FUN_1801bf3d0(param_1,param_4), iVar4 == 0)) {
          uVar16 = 0x146;
          goto LAB_1801c1205;
        }
        if ((local_50 != (code *)0x0) && (iVar4 = (*local_50)(4,param_1,param_4), iVar4 == 0))
        goto LAB_1801c1734;
        iVar4 = *(int *)(param_4 + 0x10);
        iVar12 = 0;
        puVar11 = *(uint **)(param_4 + 8);
        if (0 < iVar4) {
          do {
            if (((*puVar11 & 0x300) != 0) && (lVar5 = FUN_1801f1420(param_1,puVar11,0), lVar5 != 0))
            {
              uVar6 = FUN_1801f1880(param_1,lVar5);
              FUN_1801bfe30(uVar6,lVar5);
            }
            iVar4 = *(int *)(param_4 + 0x10);
            iVar12 = iVar12 + 1;
            puVar11 = puVar11 + 8;
          } while (iVar12 < iVar4);
          puVar11 = *(uint **)(param_4 + 8);
        }
        iVar12 = 0;
        pcVar10 = pcVar9;
        if (0 < iVar4) {
          do {
            pbVar7 = (byte *)FUN_1801f1420(param_1,puVar11,1);
            if (pbVar7 == (byte *)0x0) goto LAB_1801c0e19;
            local_48 = (char *)FUN_1801f1880(param_1,pbVar7);
            pcVar10 = pcVar9;
            if (uVar14 == 0) break;
            local_58 = pcVar9;
            if (((1 < (int)uVar14) && (*pcVar9 == '\0')) && (pcVar9[1] == '\0')) {
              pcVar10 = pcVar9 + 2;
              if ((char)local_res8[0] != '\0') {
                uVar14 = uVar14 + ((int)pcVar9 - (int)pcVar10);
                goto LAB_1801c15f8;
              }
              uVar16 = 0x168;
              uVar6 = 0x9f;
              goto LAB_1801c0e14;
            }
            if (iVar12 == *(int *)(param_4 + 0x10) + -1) {
              bVar2 = 0;
            }
            else {
              bVar2 = *pbVar7 & 1;
            }
            iVar4 = FUN_1801c17b0(local_48,&local_60,uVar14,pbVar7,bVar2,param_8,param_9);
            pcVar9 = local_60;
            if (iVar4 == 0) goto LAB_1801c1756;
            if (iVar4 == -1) {
              FUN_1801bfe30(local_48,pbVar7);
            }
            else {
              uVar14 = uVar14 + ((int)local_58 - (int)local_60);
            }
            iVar12 = iVar12 + 1;
            puVar11 = puVar11 + 8;
            pcVar10 = pcVar9;
          } while (iVar12 < *(int *)(param_4 + 0x10));
        }
        if ((char)local_res8[0] != '\0') {
          if ((((int)uVar14 < 2) || (*pcVar10 != '\0')) || (pcVar10[1] != '\0')) {
            uVar16 = 400;
            uVar6 = 0x89;
            break;
          }
          pcVar10 = pcVar10 + 2;
        }
LAB_1801c15f8:
        if (((char)local_res20[0] != '\0') || (uVar14 == 0)) {
          if (iVar12 < *(int *)(param_4 + 0x10)) {
            do {
              pbVar7 = (byte *)FUN_1801f1420(param_1,puVar11,1);
              if (pbVar7 == (byte *)0x0) goto LAB_1801c0e19;
              if ((*pbVar7 & 1) == 0) {
                FUN_1801a70c0(0xd,0x78,0x79,"crypto\\asn1\\tasn_dec.c",0x1a9);
                goto LAB_1801c1756;
              }
              uVar6 = FUN_1801f1880(param_1,pbVar7);
              FUN_1801bfe30(uVar6,pbVar7);
              puVar11 = puVar11 + 8;
              iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)(param_4 + 0x10));
          }
          plVar13 = local_res10;
          iVar4 = FUN_1801f1770(param_1,*local_res10,(int)pcVar10 - (int)*local_res10,param_4);
          if (iVar4 != 0) goto LAB_1801c16e5;
          goto LAB_1801c1734;
        }
        uVar16 = 0x195;
        uVar6 = 0x94;
      }
    }
    break;
  case 2:
    if (param_5 != -1) {
      uVar16 = 0xe9;
LAB_1801c0ef9:
      uVar6 = 0xe6;
      break;
    }
    if ((local_50 == (code *)0x0) || (iVar4 = (*local_50)(4,param_1,param_4), iVar4 != 0)) {
      if (*param_1 == 0) {
        iVar4 = FUN_1801bf3d0(param_1,param_4);
        if (iVar4 == 0) {
          uVar16 = 0xf9;
          goto LAB_1801c1205;
        }
      }
      else {
        iVar4 = FUN_1801f1870();
        if ((-1 < iVar4) && (iVar4 < *(int *)(param_4 + 0x10))) {
          lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)(param_4 + 8);
          uVar6 = FUN_1801f1880(param_1,lVar5);
          FUN_1801bfe30(uVar6,lVar5);
          FUN_1801f1890(param_1,0xffffffff,param_4);
        }
      }
      iVar4 = 0;
      pbVar7 = *(byte **)(param_4 + 8);
      local_60 = (char *)*local_res10;
      bVar15 = *(int *)(param_4 + 0x10) == 0;
      if (0 < *(int *)(param_4 + 0x10)) {
        do {
          uVar6 = FUN_1801f1880(param_1,pbVar7);
          iVar12 = FUN_1801c17b0(uVar6,&local_60,param_3 & 0xffffffff,pbVar7,1,param_8,param_9);
          if (iVar12 != -1) {
            if (iVar12 < 1) {
              FUN_1801bfe30(uVar6,pbVar7);
              FUN_1801a70c0(0xd,0x78,0x3a,"crypto\\asn1\\tasn_dec.c",0x110);
              goto LAB_1801c1756;
            }
            break;
          }
          iVar4 = iVar4 + 1;
          pbVar7 = pbVar7 + 0x20;
        } while (iVar4 < *(int *)(param_4 + 0x10));
        bVar15 = iVar4 == *(int *)(param_4 + 0x10);
      }
      pcVar10 = local_60;
      plVar13 = local_res10;
      if (bVar15) {
        if (param_7 != '\0') {
          FUN_1801bfa70(param_1,param_4);
          return 0xffffffff;
        }
        uVar16 = 0x11c;
        uVar6 = 0x8f;
        break;
      }
      FUN_1801f1890(param_1,iVar4,param_4);
LAB_1801c16e5:
      if ((local_50 == (code *)0x0) || (iVar4 = (*local_50)(5,param_1,param_4), iVar4 != 0)) {
        *plVar13 = (longlong)pcVar10;
        return 1;
      }
    }
LAB_1801c1734:
    FUN_1801a70c0(0xd,0x78,100,"crypto\\asn1\\tasn_dec.c",0x1b9);
    pbVar7 = (byte *)0x0;
LAB_1801c1756:
    if (pbVar7 != (byte *)0x0) {
      FUN_1801a6360(4,"Field=",*(undefined8 *)(pbVar7 + 0x10),", Type=",
                    *(undefined8 *)(param_4 + 0x28));
      return 0;
    }
    goto LAB_1801c0e19;
  default:
    goto LAB_1801c0e30;
  case 4:
    uVar6 = (**(code **)(lVar5 + 0x20))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar6;
  case 5:
    if (param_5 != -1) {
      uVar16 = 0xbe;
      goto LAB_1801c0ef9;
    }
    pcVar1 = (code *)*param_2;
    if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
      local_50 = pcVar1;
      uVar14 = FUN_18019a660(&local_50,&local_60,local_res20,local_res8,param_3 & 0xffffffff);
      if (param_8 != (char *)0x0) {
        *(uint *)(param_8 + 4) = uVar14;
        iVar12 = (int)local_50 - (int)pcVar1;
        *(uint *)(param_8 + 8) = (uint)local_60;
        *(uint *)(param_8 + 0x10) = local_res8[0];
        *(uint *)(param_8 + 0xc) = local_res20[0];
        *(int *)(param_8 + 0x14) = iVar12;
        *param_8 = '\x01';
        if (((uVar14 & 0x81) == 0) && (iVar4 < (int)(iVar12 + (uint)local_60))) {
          FUN_1801a70c0(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x469);
          *param_8 = '\0';
          uVar16 = 199;
          goto LAB_1801c1205;
        }
      }
    }
    else {
      local_res8[0] = *(uint *)(param_8 + 0x10);
      local_res20[0] = *(uint *)(param_8 + 0xc);
      uVar14 = *(uint *)(param_8 + 4);
      local_60 = (char *)CONCAT44(local_60._4_4_,*(undefined4 *)(param_8 + 8));
      local_50 = pcVar1 + *(int *)(param_8 + 0x14);
    }
    if ((char)uVar14 < '\0') {
      FUN_1801a70c0(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
      if (param_8 != (char *)0x0) {
        *param_8 = '\0';
      }
      uVar16 = 199;
      goto LAB_1801c1205;
    }
    if ((char)local_res8[0] == '\0') {
      if (local_res20[0] < 0x1f) {
        uVar14 = *(uint *)(&DAT_18032ca40 + (longlong)(int)local_res20[0] * 4);
      }
      else {
        uVar14 = 0;
      }
      if ((*(uint *)(param_4 + 4) & uVar14) != 0) {
        uVar6 = FUN_1801c0350(param_1,local_res10,param_3 & 0xffffffff,param_4,local_res20[0],
                              in_stack_ffffffffffffff80 & 0xffffffff00000000,
                              in_stack_ffffffffffffff88 & 0xffffff00,param_8);
        return uVar6;
      }
      if (param_7 != '\0') {
        return 0xffffffff;
      }
      uVar16 = 0xd9;
      uVar6 = 0x8c;
    }
    else {
      if (param_7 != '\0') {
        return 0xffffffff;
      }
      uVar16 = 0xd0;
      uVar6 = 0x8b;
    }
  }
LAB_1801c0e14:
  FUN_1801a70c0(0xd,0x78,uVar6,"crypto\\asn1\\tasn_dec.c",uVar16);
LAB_1801c0e19:
  FUN_1801a6360(2,"Type=",*(undefined8 *)(param_4 + 0x28));
LAB_1801c0e30:
  return 0;
}



// ===== FUN_1801c17b0 @ 1801c17b0 (size 833)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801c17b0(char *param_1,undefined8 *param_2,uint param_3,uint *param_4,char param_5,
             char *param_6,undefined4 param_7)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  char *local_res8;
  uint in_stack_ffffffffffffff98;
  undefined4 uVar8;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  char *local_38 [2];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar1 = *param_4;
  local_38[0] = (char *)*param_2;
  local_res8 = param_1;
  if ((uVar1 & 0x10) == 0) {
    uVar7 = FUN_1801c1b00();
    return uVar7;
  }
  local_3c = param_4[1];
  iVar4 = (int)local_38[0];
  if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
    in_stack_ffffffffffffff98 = param_3;
    uVar3 = FUN_18019a660(local_38,&local_48,&local_40,&local_44,param_3);
    if (param_6 == (char *)0x0) goto LAB_1801c18ff;
    *(uint *)(param_6 + 4) = uVar3;
    iVar6 = (int)local_38[0] - iVar4;
    *(int *)(param_6 + 8) = local_48;
    *(uint *)(param_6 + 0x10) = local_44;
    *(uint *)(param_6 + 0xc) = local_40;
    *(int *)(param_6 + 0x14) = iVar6;
    *param_6 = '\x01';
    if (((uVar3 & 0x81) != 0) || (iVar6 + local_48 <= (int)param_3)) goto LAB_1801c18ff;
    FUN_1801a70c0(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x469);
    *param_6 = '\0';
    uVar8 = 0x1e4;
  }
  else {
    local_48 = *(int *)(param_6 + 8);
    local_38[0] = local_38[0] + *(int *)(param_6 + 0x14);
    local_44 = *(uint *)(param_6 + 0x10);
    local_40 = *(uint *)(param_6 + 0xc);
    uVar3 = *(uint *)(param_6 + 4);
LAB_1801c18ff:
    pcVar2 = local_res8;
    if ((char)uVar3 < '\0') {
      FUN_1801a70c0(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
      if (param_6 == (char *)0x0) {
LAB_1801c19fb:
        uVar8 = 0x1e4;
      }
      else {
        *param_6 = '\0';
        uVar8 = 0x1e4;
      }
    }
    else {
      if (-1 < (int)local_3c) {
        if ((local_3c != local_40) || ((uVar1 & 0xc0) != local_44)) {
          if (param_5 != '\0') {
            return 0xffffffff;
          }
          if (param_6 != (char *)0x0) {
            *param_6 = '\0';
          }
          FUN_1801a70c0(0xd,0x68,0xa8,"crypto\\asn1\\tasn_dec.c",0x47d);
          goto LAB_1801c19fb;
        }
        if (param_6 != (char *)0x0) {
          *param_6 = '\0';
        }
      }
      iVar5 = (int)local_38[0];
      iVar6 = local_48;
      if ((uVar3 & 1) != 0) {
        iVar6 = (iVar4 - iVar5) + param_3;
      }
      local_res8 = local_38[0];
      if ((uVar3 & 0x20) == 0) {
        uVar8 = 0x1ea;
        uVar7 = 0x78;
        goto LAB_1801c1995;
      }
      iVar4 = FUN_1801c1b00(pcVar2,&local_res8,iVar6,param_4,in_stack_ffffffffffffff98 & 0xffffff00,
                            param_6,param_7);
      if (iVar4 != 0) {
        iVar6 = (iVar5 - (int)local_res8) + iVar6;
        if ((uVar3 & 1) == 0) {
          if (iVar6 == 0) goto LAB_1801c1a81;
          uVar8 = 0x201;
          uVar7 = 0x77;
        }
        else {
          if (((1 < iVar6) && (*local_res8 == '\0')) && (local_res8[1] == '\0')) {
            local_res8 = local_res8 + 2;
LAB_1801c1a81:
            *param_2 = local_res8;
            return 1;
          }
          uVar8 = 0x1f8;
          uVar7 = 0x89;
        }
        goto LAB_1801c1995;
      }
      uVar8 = 0x1f0;
    }
  }
  uVar7 = 0x3a;
LAB_1801c1995:
  FUN_1801a70c0(0xd,0x84,uVar7,"crypto\\asn1\\tasn_dec.c",uVar8);
  return 0;
}



// ===== FUN_1801c1b00 @ 1801c1b00 (size 1160)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1801c1b00(longlong *******param_1,undefined8 *param_2,undefined4 param_3,uint *param_4,
             char param_5,char *param_6,undefined4 param_7)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  longlong ******pppppplVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 local_res8;
  undefined8 *local_res10;
  undefined4 uVar9;
  int local_64;
  uint local_60;
  uint local_5c;
  char *local_58;
  char *local_50;
  longlong *******local_48 [2];
  
  local_res8 = CONCAT44(local_res8._4_4_,param_3);
  if (param_1 == (longlong *******)0x0) {
    return 0;
  }
  uVar6 = *param_4;
  local_58 = (char *)*param_2;
  uVar8 = uVar6 & 0xc0;
  if ((uVar6 >> 0xc & 1) != 0) {
    local_48[0] = param_1;
    param_1 = (longlong *******)local_48;
  }
  local_res10 = param_2;
  if ((uVar6 & 6) == 0) {
    if ((uVar6 & 8) == 0) {
      uVar7 = (**(code **)(param_4 + 6))();
      iVar3 = FUN_1801c0d90(param_1,&local_58,param_3,uVar7,0xffffffff,0,param_5,param_6,param_7);
      if (iVar3 != 0) goto LAB_1801c1f3e;
      uVar9 = 0x286;
    }
    else {
      uVar7 = (**(code **)(param_4 + 6))();
      iVar3 = FUN_1801c0d90(param_1,&local_58,param_3,uVar7,param_4[1],uVar8,param_5,param_6,param_7
                           );
      if (iVar3 != 0) {
LAB_1801c1f3e:
        if (iVar3 == -1) {
          return 0xffffffff;
        }
LAB_1801c1f4e:
        *local_res10 = local_58;
        return 1;
      }
      uVar9 = 0x27d;
    }
    uVar7 = 0x3a;
LAB_1801c1f26:
    FUN_1801a70c0(0xd,0x83,uVar7,"crypto\\asn1\\tasn_dec.c",uVar9);
  }
  else {
    if ((uVar6 & 8) == 0) {
      uVar8 = 0;
      uVar6 = (uVar6 & 2 | 0x20) >> 1;
    }
    else {
      uVar6 = param_4[1];
    }
    iVar3 = (int)local_58;
    if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
      local_50 = local_58;
      uVar2 = FUN_18019a660(&local_50,&local_64,&local_5c,&local_60,param_3);
      if (param_6 == (char *)0x0) goto LAB_1801c1bd9;
      *(uint *)(param_6 + 4) = uVar2;
      iVar5 = (int)local_50 - iVar3;
      *(int *)(param_6 + 8) = local_64;
      *(uint *)(param_6 + 0x10) = local_60;
      *(uint *)(param_6 + 0xc) = local_5c;
      *(int *)(param_6 + 0x14) = iVar5;
      *param_6 = '\x01';
      if ((uVar2 & 0x81) != 0) goto LAB_1801c1bd9;
      if (iVar5 + local_64 <= (int)local_res8) goto LAB_1801c1bdd;
      FUN_1801a70c0(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x469);
      *param_6 = '\0';
    }
    else {
      local_64 = *(int *)(param_6 + 8);
      local_50 = local_58 + *(int *)(param_6 + 0x14);
      local_60 = *(uint *)(param_6 + 0x10);
      local_5c = *(uint *)(param_6 + 0xc);
      uVar2 = *(uint *)(param_6 + 4);
LAB_1801c1bd9:
LAB_1801c1bdd:
      if (-1 < (char)uVar2) {
        if (-1 < (int)uVar6) {
          if ((uVar6 != local_5c) || (uVar8 != local_60)) {
            if (param_5 != '\0') {
              return 0xffffffff;
            }
            if (param_6 != (char *)0x0) {
              *param_6 = '\0';
            }
            FUN_1801a70c0(0xd,0x68,0xa8,"crypto\\asn1\\tasn_dec.c",0x47d);
            goto LAB_1801c1d15;
          }
          if (param_6 != (char *)0x0) {
            *param_6 = '\0';
          }
        }
        iVar5 = local_64;
        if ((uVar2 & 1) != 0) {
          iVar5 = (iVar3 - (int)local_50) + (int)local_res8;
        }
        pppppplVar4 = *param_1;
        local_58 = local_50;
        if (pppppplVar4 == (longlong ******)0x0) {
          pppppplVar4 = (longlong ******)FUN_1801957e0();
          *param_1 = pppppplVar4;
        }
        else {
          iVar3 = FUN_1801958b0(pppppplVar4);
          while (0 < iVar3) {
            local_res8 = FUN_1801958c0(pppppplVar4);
            uVar7 = (**(code **)(param_4 + 6))();
            FUN_1801bfa70(&local_res8,uVar7);
            iVar3 = FUN_1801958b0(pppppplVar4);
          }
        }
        pcVar1 = local_58;
        if (*param_1 == (longlong ******)0x0) {
          uVar9 = 0x24f;
          uVar7 = 0x41;
        }
        else {
          while( true ) {
            local_58 = pcVar1;
            if (iVar5 < 1) {
              if ((uVar2 & 1) == 0) goto LAB_1801c1f4e;
              uVar9 = 0x274;
              uVar7 = 0x89;
              goto LAB_1801c1f26;
            }
            if (((1 < iVar5) && (*pcVar1 == '\0')) && (pcVar1[1] == '\0')) break;
            local_res8 = 0;
            uVar7 = (**(code **)(param_4 + 6))();
            iVar3 = FUN_1801c0d90(&local_res8,&local_58,iVar5,uVar7,0xffffffff,0,0,param_6,param_7);
            if (iVar3 == 0) {
              uVar9 = 0x267;
              uVar7 = 0x3a;
              goto LAB_1801c1e5e;
            }
            iVar5 = iVar5 + ((int)pcVar1 - (int)local_58);
            iVar3 = FUN_180195990(*param_1,local_res8);
            pcVar1 = local_58;
            if (iVar3 == 0) {
              uVar9 = 0x26e;
              uVar7 = 0x41;
LAB_1801c1e5e:
              FUN_1801a70c0(0xd,0x83,uVar7,"crypto\\asn1\\tasn_dec.c",uVar9);
              uVar7 = (**(code **)(param_4 + 6))();
              FUN_1801bfa90(local_res8,uVar7);
              return 0;
            }
          }
          local_58 = pcVar1 + 2;
          if ((uVar2 & 1) != 0) goto LAB_1801c1f4e;
          uVar9 = 0x25b;
          uVar7 = 0x9f;
        }
        goto LAB_1801c1f26;
      }
      FUN_1801a70c0(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
      if (param_6 != (char *)0x0) {
        *param_6 = '\0';
      }
    }
LAB_1801c1d15:
    FUN_1801a70c0(0xd,0x83,0x3a,"crypto\\asn1\\tasn_dec.c",0x23c);
  }
  return 0;
}



// ===== FUN_1801c1f90 @ 1801c1f90 (size 932)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801c1f90(longlong *param_1,longlong param_2,char *param_3,undefined8 param_4,
                       uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint local_res18 [2];
  undefined4 uVar11;
  int local_38;
  
  lVar10 = *(longlong *)(param_3 + 0x18);
  iVar9 = 0;
  local_38 = 1;
  iVar2 = (int)param_4;
  if ((*param_3 == '\0') || (*param_1 != 0)) {
    pcVar7 = (code *)0x0;
    if ((lVar10 != 0) && (*(code **)(lVar10 + 0x18) != (code *)0x0)) {
      pcVar7 = *(code **)(lVar10 + 0x18);
    }
    switch(*param_3) {
    case '\0':
      lVar10 = *(longlong *)(param_3 + 8);
      if (lVar10 == 0) {
        uVar6 = FUN_1801c2530(param_1,param_2,param_3);
        return uVar6;
      }
LAB_1801c20fd:
      uVar6 = FUN_1801c29d0(param_1,param_2,lVar10,param_4,param_5);
      return uVar6;
    case '\x02':
      if (iVar2 != -1) {
        uVar11 = 0x7a;
        goto LAB_1801c2052;
      }
      if ((pcVar7 == (code *)0x0) || (iVar2 = (*pcVar7)(6,param_1,param_3), iVar2 != 0)) {
        iVar2 = FUN_1801f1870(param_1,param_3);
        if ((-1 < iVar2) && (iVar2 < *(int *)(param_3 + 0x10))) {
          lVar10 = (longlong)iVar2 * 0x20 + *(longlong *)(param_3 + 8);
          param_1 = (longlong *)FUN_1801f1880(param_1,lVar10);
          param_4 = 0xffffffff;
          goto LAB_1801c20fd;
        }
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(7,param_1,param_3);
        }
      }
      break;
    case '\x04':
      uVar6 = (**(code **)(lVar10 + 0x28))(param_1,param_2,param_3,param_4,param_5);
      return uVar6;
    case '\x05':
      if (iVar2 == -1) {
        uVar6 = FUN_1801c2530(param_1,param_2,param_3,0xffffffff,param_5);
        return uVar6;
      }
      uVar11 = 0x6f;
LAB_1801c2052:
      FUN_1801a70c0(0xd,0x90,0xe6,"crypto\\asn1\\tasn_enc.c",uVar11);
      return 0xffffffff;
    case '\x06':
      local_38 = 1;
      if ((param_5 >> 0xb & 1) != 0) {
        local_38 = 2;
      }
    case '\x01':
      iVar1 = FUN_1801f16d0(local_res18,param_2,param_1,param_3);
      if (-1 < iVar1) {
        if (0 < iVar1) {
          return (ulonglong)local_res18[0];
        }
        iVar1 = 0x10;
        if (iVar2 != -1) {
          iVar1 = iVar2;
        }
        local_res18[0] = 0;
        uVar8 = param_5 & 0xffffff3f;
        if (iVar2 != -1) {
          uVar8 = param_5;
        }
        if ((pcVar7 == (code *)0x0) || (iVar2 = (*pcVar7)(6,param_1,param_3), iVar2 != 0)) {
          lVar10 = *(longlong *)(param_3 + 8);
          iVar2 = 0;
          if (0 < *(int *)(param_3 + 0x10)) {
            do {
              lVar4 = FUN_1801f1420(param_1,lVar10,1);
              if (lVar4 == 0) {
                return 0;
              }
              uVar5 = FUN_1801f1880(param_1,lVar4);
              iVar3 = FUN_1801c29d0(uVar5,0,lVar4,0xffffffff,uVar8);
              if (iVar3 == -1) {
                return 0xffffffff;
              }
              if ((int)(0x7fffffff - local_res18[0]) < iVar3) {
                return 0xffffffff;
              }
              local_res18[0] = local_res18[0] + iVar3;
              lVar10 = lVar10 + 0x20;
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_3 + 0x10));
          }
          uVar6 = FUN_18019a830(local_38,local_res18[0],iVar1);
          if (param_2 == 0) {
            return uVar6;
          }
          if ((int)uVar6 == -1) {
            return uVar6;
          }
          FUN_18019a8a0(param_2,local_38,local_res18[0],iVar1,uVar8);
          lVar10 = *(longlong *)(param_3 + 8);
          if (0 < *(int *)(param_3 + 0x10)) {
            do {
              lVar4 = FUN_1801f1420(param_1,lVar10,1);
              if (lVar4 == 0) {
                return 0;
              }
              uVar5 = FUN_1801f1880(param_1,lVar4);
              FUN_1801c29d0(uVar5,param_2,lVar4,0xffffffff,uVar8);
              lVar10 = lVar10 + 0x20;
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(param_3 + 0x10));
          }
          if (local_38 == 2) {
            FUN_18019a880(param_2);
          }
          if ((pcVar7 == (code *)0x0) || (iVar2 = (*pcVar7)(7,param_1,param_3), iVar2 != 0)) {
            return uVar6 & 0xffffffff;
          }
        }
      }
    }
  }
  return 0;
}



// ===== FUN_1801c2370 @ 1801c2370 (size 405)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801c2370(longlong *param_1,void *param_2,undefined4 *param_3,char *param_4)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 *_Src;
  void **ppvVar6;
  uint uVar7;
  void *local_res10 [2];
  undefined1 local_res20 [8];
  
  local_res10[0] = param_2;
  if ((*(longlong *)(param_4 + 0x18) != 0) &&
     (pcVar2 = *(code **)(*(longlong *)(param_4 + 0x18) + 0x30), pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if ((*param_4 != '\0') || (*(int *)(param_4 + 4) != 1)) {
    if (*param_1 == 0) {
      return 0xffffffff;
    }
    if (*param_4 == '\x05') {
      uVar5 = *(undefined4 *)(*param_1 + 4);
      *param_3 = uVar5;
      goto LAB_1801c23e1;
    }
  }
  if (*(int *)(param_4 + 4) == -4) {
    uVar5 = *(undefined4 *)*param_1;
    param_1 = (longlong *)((undefined4 *)*param_1 + 2);
    *param_3 = uVar5;
  }
  else {
    uVar5 = *param_3;
  }
LAB_1801c23e1:
  switch(uVar5) {
  case 1:
    iVar1 = (int)*param_1;
    if ((iVar1 == -1) ||
       ((local_res20[0] = (undefined1)*param_1, *(int *)(param_4 + 4) != -4 &&
        (((iVar1 != 0 && (0 < *(int *)(param_4 + 0x20))) ||
         ((iVar1 == 0 && (local_res20[0] = 0, *(int *)(param_4 + 0x20) == 0)))))))) {
      return 0xffffffff;
    }
    uVar7 = 1;
    _Src = local_res20;
    break;
  case 2:
  case 10:
    ppvVar6 = local_res10;
    if (param_2 == (void *)0x0) {
      ppvVar6 = (void **)0x0;
    }
    uVar4 = FUN_1801dc970(*param_1,ppvVar6);
    return uVar4;
  case 3:
    ppvVar6 = local_res10;
    if (param_2 == (void *)0x0) {
      ppvVar6 = (void **)0x0;
    }
    uVar4 = FUN_1801f1bc0(*param_1,ppvVar6);
    return uVar4;
  default:
    puVar3 = (uint *)*param_1;
    if ((*(int *)(param_4 + 0x20) == 0x800) && ((puVar3[4] & 0x10) != 0)) {
      if (param_2 != (void *)0x0) {
        *(void **)(puVar3 + 2) = param_2;
        *puVar3 = 0;
      }
      return 0xfffffffe;
    }
    _Src = *(undefined1 **)(puVar3 + 2);
    uVar7 = *puVar3;
    break;
  case 5:
    _Src = (undefined1 *)0x0;
    uVar7 = 0;
    break;
  case 6:
    _Src = *(undefined1 **)(*param_1 + 0x18);
    uVar7 = *(uint *)(*param_1 + 0x14);
    if (_Src == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    if (uVar7 == 0) {
      return 0xffffffff;
    }
  }
  if ((param_2 != (void *)0x0) && (uVar7 != 0)) {
    memcpy(param_2,_Src,(longlong)(int)uVar7);
  }
  return (ulonglong)uVar7;
}



// ===== FUN_1801c2530 @ 1801c2530 (size 245)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801c2530(undefined8 param_1,longlong *param_2,longlong param_3,int param_4,
                       undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int local_res18 [4];
  undefined8 uVar5;
  
  uVar5 = 0x1801c254c;
  local_res18[0] = *(int *)(param_3 + 4);
  iVar4 = 0;
  uVar2 = FUN_1801c2370(param_1,0,local_res18,param_3);
  uVar3 = (ulonglong)uVar2;
  if ((local_res18[0] - 0x10U < 2) || (local_res18[0] == -3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (uVar2 == 0xffffffff) {
    uVar3 = 0;
  }
  else {
    if (uVar2 == 0xfffffffe) {
      uVar3 = 0;
      iVar4 = 2;
    }
    if (param_4 == -1) {
      param_4 = local_res18[0];
    }
    if (param_2 != (longlong *)0x0) {
      if (bVar1) {
        FUN_18019a8a0(param_2,iVar4,uVar3,param_4,param_5,uVar5);
      }
      FUN_1801c2370(param_1,*param_2,local_res18,param_3);
      if (iVar4 == 0) {
        *param_2 = *param_2 + (longlong)(int)uVar3;
      }
      else {
        FUN_18019a880(param_2);
      }
    }
    if (bVar1) {
      uVar3 = FUN_18019a830(iVar4,uVar3,param_4);
    }
  }
  return uVar3;
}



// ===== FUN_1801c2630 @ 1801c2630 (size 251)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801c2630(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x1801c2642;
  local_res8 = param_1;
  if ((param_2 == (longlong *)0x0) || (*param_2 != 0)) {
    uVar3 = FUN_1801c1f90(&local_res8,param_2,param_3,0xffffffff,param_4,0x1801c2642);
    return uVar3;
  }
  uVar1 = FUN_1801c1f90(&local_res8,0,param_3,0xffffffff,param_4,0x1801c2642);
  if ((int)uVar1 < 1) {
    return (ulonglong)uVar1;
  }
  lVar2 = FUN_180195dc0((longlong)(int)uVar1,"crypto\\asn1\\tasn_enc.c",0x40);
  if (lVar2 == 0) {
    FUN_1801a70c0(0xd,0x76,0x41,"crypto\\asn1\\tasn_enc.c",0x41);
    uVar1 = 0xffffffff;
  }
  else {
    local_res10 = lVar2;
    FUN_1801c1f90(&local_res8,&local_res10,param_3,0xffffffff,param_4,uVar4);
    *param_2 = lVar2;
  }
  return (ulonglong)uVar1;
}



// ===== FUN_1801c2730 @ 1801c2730 (size 669)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801c2730(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4,int param_5,
             undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  void *_Base;
  void *pvVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  int iVar8;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1801c2741;
  iVar5 = 0;
  local_48 = (void *)0x0;
  if ((param_5 == 0) || (iVar1 = FUN_1801958b0(), iVar1 < 2)) {
    iVar1 = FUN_1801958b0(param_1);
    if (0 < iVar1) {
      do {
        local_40 = FUN_180195ae0(param_1,iVar5);
        FUN_1801c1f90(&local_40,param_2,param_4,0xffffffff,param_6);
        iVar5 = iVar5 + 1;
        iVar1 = FUN_1801958b0(param_1);
      } while (iVar5 < iVar1);
    }
    return 1;
  }
  iVar1 = FUN_1801958b0(param_1);
  _Base = (void *)FUN_180195dc0((longlong)iVar1 * 0x18,"crypto\\asn1\\tasn_enc.c",400);
  uVar4 = 0;
  if (_Base != (void *)0x0) {
    pvVar3 = (void *)FUN_180195dc0((longlong)param_3,"crypto\\asn1\\tasn_enc.c",0x193);
    local_38 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      FUN_180195e10(_Base,"crypto\\asn1\\tasn_enc.c",0x195);
      uVar4 = 0;
    }
    else {
      iVar8 = 0;
      local_48 = pvVar3;
      iVar1 = FUN_1801958b0(param_1);
      if (0 < iVar1) {
        puVar7 = (undefined8 *)((longlong)_Base + 0x10);
        do {
          local_40 = FUN_180195ae0(param_1,iVar8);
          puVar7[-2] = local_48;
          uVar2 = FUN_1801c1f90(&local_40,&local_48,param_4,0xffffffff,param_6);
          *(undefined4 *)(puVar7 + -1) = uVar2;
          *puVar7 = local_40;
          iVar8 = iVar8 + 1;
          iVar1 = FUN_1801958b0(param_1);
          puVar7 = puVar7 + 3;
        } while (iVar8 < iVar1);
        pvVar3 = local_38;
      }
      iVar1 = FUN_1801958b0(param_1);
      qsort(_Base,(longlong)iVar1,0x18,FUN_1801c2cf0);
      local_48 = (void *)*param_2;
      iVar8 = 0;
      iVar1 = FUN_1801958b0(param_1);
      if (0 < iVar1) {
        piVar6 = (int *)((longlong)_Base + 8);
        do {
          memcpy(local_48,*(void **)(piVar6 + -2),(longlong)*piVar6);
          iVar1 = *piVar6;
          piVar6 = piVar6 + 6;
          local_48 = (void *)((longlong)local_48 + (longlong)iVar1);
          iVar8 = iVar8 + 1;
          iVar1 = FUN_1801958b0(param_1);
        } while (iVar8 < iVar1);
      }
      *param_2 = (longlong)local_48;
      if ((param_5 == 2) && (iVar1 = FUN_1801958b0(param_1), 0 < iVar1)) {
        puVar7 = (undefined8 *)((longlong)_Base + 0x10);
        do {
          FUN_180195a00(param_1,iVar5,*puVar7);
          puVar7 = puVar7 + 3;
          iVar5 = iVar5 + 1;
          iVar1 = FUN_1801958b0(param_1);
        } while (iVar5 < iVar1);
      }
      FUN_180195e10(_Base,"crypto\\asn1\\tasn_enc.c",0x1ba);
      FUN_180195e10(pvVar3,"crypto\\asn1\\tasn_enc.c",0x1bb);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FUN_1801c29d0 @ 1801c29d0 (size 798)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1801c29d0(longlong *******param_1,longlong param_2,uint *param_3,uint param_4,
                       uint param_5)

{
  longlong ******pppppplVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  bool bVar13;
  uint local_54;
  uint local_50;
  longlong *******local_38;
  undefined8 local_30;
  
  local_30 = 0x1801c29ec;
  uVar10 = *param_3;
  if ((uVar10 >> 0xc & 1) != 0) {
    local_38 = param_1;
    param_1 = (longlong *******)&local_38;
  }
  iVar8 = 0;
  if ((uVar10 & 0x18) == 0) {
    if (param_4 == 0xffffffff) {
      param_4 = 0xffffffff;
      uVar9 = 0;
    }
    else {
      uVar9 = param_5 & 0xc0;
    }
LAB_1801c2a5b:
    param_5 = param_5 & 0xffffff3f;
    bVar13 = ((uVar10 & param_5) >> 0xb & 1) != 0;
    cVar11 = bVar13 + '\x01';
    if ((uVar10 & 6) == 0) {
      if ((uVar10 & 0x10) == 0) {
        uVar5 = (**(code **)(param_3 + 6))();
        uVar6 = FUN_1801c1f90(param_1,param_2,uVar5,param_4,uVar9 | param_5);
        return uVar6;
      }
      uVar5 = (**(code **)(param_3 + 6))();
      iVar8 = FUN_1801c1f90(param_1,0,uVar5,0xffffffff,param_5);
      if (iVar8 != 0) {
        uVar10 = FUN_18019a830(cVar11,iVar8,param_4);
        if ((param_2 != 0) && (uVar10 != 0xffffffff)) {
          FUN_18019a8a0(param_2,cVar11,iVar8,param_4,uVar9);
          uVar5 = (**(code **)(param_3 + 6))();
          FUN_1801c1f90(param_1,param_2,uVar5,0xffffffff,param_5);
          if (bVar13) {
            FUN_18019a880(param_2);
          }
        }
        return (ulonglong)uVar10;
      }
    }
    else {
      pppppplVar1 = *param_1;
      if (pppppplVar1 != (longlong ******)0x0) {
        if ((uVar10 & 2) == 0) {
          cVar7 = '\0';
        }
        else {
          cVar7 = ((uVar10 & 4) != 0) + '\x01';
        }
        if ((param_4 == 0xffffffff) || ((uVar10 & 0x10) != 0)) {
          local_50 = 0;
          local_54 = (cVar7 != '\0') + 0x10;
        }
        else {
          local_54 = param_4;
          local_50 = uVar9;
        }
        iVar12 = 0;
        iVar2 = FUN_1801958b0(pppppplVar1);
        if (0 < iVar2) {
          do {
            local_30 = FUN_180195ae0(pppppplVar1,iVar12);
            uVar5 = (**(code **)(param_3 + 6))();
            iVar2 = FUN_1801c1f90(&local_30,0,uVar5,0xffffffff,param_5);
            if ((iVar2 == -1) || (0x7fffffff - iVar2 < iVar8)) goto LAB_1801c2b61;
            iVar8 = iVar8 + iVar2;
            iVar12 = iVar12 + 1;
            iVar2 = FUN_1801958b0(pppppplVar1);
          } while (iVar12 < iVar2);
        }
        uVar3 = FUN_18019a830(cVar11,iVar8,local_54);
        if (uVar3 != 0xffffffff) {
          uVar10 = uVar10 & 0x10;
          uVar4 = uVar3;
          if (uVar10 != 0) {
            uVar4 = FUN_18019a830(cVar11,uVar3,param_4);
          }
          if ((param_2 != 0) && (uVar4 != 0xffffffff)) {
            if (uVar10 != 0) {
              FUN_18019a8a0(param_2,cVar11,uVar3,param_4,uVar9);
            }
            FUN_18019a8a0(param_2,cVar11,iVar8,local_54,local_50);
            uVar5 = (**(code **)(param_3 + 6))();
            FUN_1801c2730(pppppplVar1,param_2,iVar8,uVar5,cVar7,param_5);
            if ((bVar13) && (FUN_18019a880(param_2), uVar10 != 0)) {
              FUN_18019a880(param_2);
            }
          }
          return (ulonglong)uVar4;
        }
        goto LAB_1801c2b61;
      }
    }
    uVar6 = 0;
  }
  else {
    if (param_4 == 0xffffffff) {
      param_4 = param_3[1];
      uVar9 = uVar10 & 0xc0;
      goto LAB_1801c2a5b;
    }
LAB_1801c2b61:
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



// ===== FUN_1801c2cf0 @ 1801c2cf0 (size 65)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801c2cf0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = *(int *)(param_2 + 1);
  iVar3 = iVar1;
  if (iVar2 <= iVar1) {
    iVar3 = iVar2;
  }
  iVar3 = memcmp((void *)*param_1,(void *)*param_2,(longlong)iVar3);
  if (iVar3 == 0) {
    iVar3 = iVar1 - iVar2;
  }
  return iVar3;
}



// ===== FUN_1801c2d40 @ 1801c2d40 (size 292)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801c2d40(undefined8 *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5
                 ,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar1 = (int *)*param_1, piVar1 == (int *)0x0)) ||
     (*(code **)(piVar1 + 0x30) == (code *)0x0)) {
    FUN_1801a70c0(6,0x89,0x93,"crypto\\evp\\pmeth_lib.c",0x174);
    return -2;
  }
  if ((param_2 != -1) && (*piVar1 != param_2)) {
    return -1;
  }
  if (*(longlong *)(piVar1 + 0x3e) == 0) {
    if (*(uint *)(param_1 + 4) == 0) {
      FUN_1801a70c0(6,0x89,0x95,"crypto\\evp\\pmeth_lib.c",0x17f);
      return -1;
    }
    if ((param_3 != 0xffffffff) && ((param_3 & *(uint *)(param_1 + 4)) == 0)) {
      FUN_1801a70c0(6,0x89,0x94,"crypto\\evp\\pmeth_lib.c",0x184);
      return -1;
    }
  }
  iVar2 = (**(code **)(piVar1 + 0x30))(param_1,param_4,param_5,param_6);
  if (iVar2 == -2) {
    FUN_1801a70c0(6,0x89,0x93,"crypto\\evp\\pmeth_lib.c",0x18c);
  }
  return iVar2;
}



// ===== FUN_1801c2e70 @ 1801c2e70 (size 316)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801c2e70(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801c2e7c;
  if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x10) == 0)) {
    return (longlong *)0x0;
  }
  if ((param_1[1] != 0) && (iVar1 = FUN_1801ac0a0(), iVar1 == 0)) {
    FUN_1801a70c0(6,0x9c,0x26,"crypto\\evp\\pmeth_lib.c",0x105,uVar4);
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)FUN_180195dc0(0x50,"crypto\\evp\\pmeth_lib.c",0x109);
  if (plVar2 == (longlong *)0x0) {
    FUN_1801a70c0(6,0x9c,0x41,"crypto\\evp\\pmeth_lib.c",0x10b,uVar4);
    return (longlong *)0x0;
  }
  *plVar2 = *param_1;
  plVar2[1] = param_1[1];
  lVar3 = 0;
  if (param_1[2] != 0) {
    FUN_18019e860(param_1[2]);
    lVar3 = param_1[2];
  }
  plVar2[2] = lVar3;
  lVar3 = 0;
  if (param_1[3] != 0) {
    FUN_18019e860(param_1[3]);
    lVar3 = param_1[3];
  }
  plVar2[3] = lVar3;
  plVar2[5] = 0;
  plVar2[6] = 0;
  *(int *)(plVar2 + 4) = (int)param_1[4];
  iVar1 = (**(code **)(*param_1 + 0x10))(plVar2,param_1);
  if (iVar1 < 1) {
    *plVar2 = 0;
    FUN_1801c2fb0(plVar2);
    return (longlong *)0x0;
  }
  return plVar2;
}



// ===== FUN_1801c2fb0 @ 1801c2fb0 (size 95)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c2fb0(longlong *param_1)

{
  code *pcVar1;
  
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x18), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    FUN_18019deb0(param_1[2]);
    FUN_18019deb0(param_1[3]);
    FUN_1801abfb0(param_1[1]);
    FUN_180195e10(param_1,"crypto\\evp\\pmeth_lib.c",0x16b);
  }
  return;
}



// ===== FUN_1801c3010 @ 1801c3010 (size 129)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801c3010(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 local_res20 [2];
  
  lVar2 = FUN_1801ba610(param_3,local_res20);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_2,local_res20[0],lVar2);
  FUN_180195e10(lVar2,"crypto\\evp\\pmeth_lib.c",0x1bb);
  return uVar1;
}



// ===== FUN_1801c30a0 @ 1801c30a0 (size 150)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c30a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801c30b5;
  if (param_4 != 0) {
    lVar1 = FUN_1801dcf20(param_4);
    if (lVar1 != 0) {
      uVar2 = FUN_1801c2d40(param_1,0xffffffff,param_2,param_3,0,lVar1);
      return uVar2;
    }
  }
  FUN_1801a70c0(6,0xa8,0x98,"crypto\\evp\\pmeth_lib.c",0x1c5,uVar2);
  return 0;
}



// ===== FUN_1801c3190 @ 1801c3190 (size 75)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c3190(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)(param_3 + uVar2) != '\0');
  if (uVar2 < 0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x0001801c31d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0xc0))();
    return uVar1;
  }
  return 0xffffffff;
}



// ===== FUN_1801c3240 @ 1801c3240 (size 484)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801c3240(int *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int *local_res20;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar6;
  undefined8 uVar5;
  int local_108 [62];
  undefined8 uStack_10;
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uStack_10 = 0x1801c3255;
  if (param_3 == -1) {
    if (param_1 == (int *)0x0) {
      return (longlong *)0x0;
    }
    param_3 = *param_1;
  }
  if ((param_2 == 0) &&
     ((param_1 == (int *)0x0 ||
      ((param_2 = *(longlong *)(param_1 + 8), param_2 == 0 &&
       (param_2 = *(longlong *)(param_1 + 6), param_2 == 0)))))) {
    param_2 = FUN_1801c6510(param_3);
  }
  else {
    iVar1 = FUN_1801ac0a0(param_2);
    if (iVar1 == 0) {
      FUN_1801a70c0(6,0x9d,0x26,"crypto\\evp\\pmeth_lib.c",CONCAT44(uVar6,0x77));
      return (longlong *)0x0;
    }
  }
  if (param_2 == 0) {
    local_res20 = local_108;
    local_108[0] = param_3;
    if ((DAT_1803c9340 != 0) && (iVar1 = FUN_180195630(DAT_1803c9340,local_108), -1 < iVar1)) {
      lVar2 = FUN_180195ae0(DAT_1803c9340,iVar1);
      goto LAB_1801c335f;
    }
    uVar6 = 1;
    plVar3 = (longlong *)FUN_1801b8ee0(&local_res20,&PTR_DAT_1803be500,0x12,8,&LAB_1801c3430);
    if ((plVar3 != (longlong *)0x0) && (lVar2 = *plVar3, lVar2 != 0)) goto LAB_1801c335f;
  }
  else {
    lVar2 = FUN_1801c64b0(param_2,param_3);
LAB_1801c335f:
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_180196100(0x50,"crypto\\evp\\pmeth_lib.c");
      if (plVar3 != (longlong *)0x0) {
        plVar3[1] = param_2;
        *plVar3 = lVar2;
        *(undefined4 *)(plVar3 + 4) = 0;
        plVar3[2] = (longlong)param_1;
        if (param_1 != (int *)0x0) {
          FUN_18019e860(param_1);
        }
        if ((*(code **)(lVar2 + 8) == (code *)0x0) ||
           (iVar1 = (**(code **)(lVar2 + 8))(plVar3), 0 < iVar1)) {
          return plVar3;
        }
        *plVar3 = 0;
        FUN_1801c2fb0(plVar3);
        return (longlong *)0x0;
      }
      FUN_1801abfb0(param_2);
      uVar4 = 0x41;
      uVar5 = CONCAT44(uVar6,0x95);
      goto LAB_1801c33ef;
    }
  }
  FUN_1801abfb0(param_2);
  uVar4 = 0x9c;
  uVar5 = CONCAT44(uVar6,0x8c);
LAB_1801c33ef:
  FUN_1801a70c0(6,0x9d,uVar4,"crypto\\evp\\pmeth_lib.c",uVar5);
  return (longlong *)0x0;
}



// ===== FUN_1801c3440 @ 1801c3440 (size 89)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c3440(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  FUN_1801a70c0(0x26,0xba,0x93,"crypto\\engine\\tb_digest.c",0x4a);
  return 0;
}



// ===== FUN_1801c34c0 @ 1801c34c0 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c34c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x1801c34cc;
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_1801ed650(&DAT_1803c9348,FUN_1801c35a0,param_1,local_res8[0],iVar1,
                            uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// ===== FUN_1801c3530 @ 1801c3530 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c3530(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_1801ed650(&DAT_1803c9348,FUN_1801c35a0,param_1,local_res8[0],iVar1,
                            CONCAT44(uVar3,1));
      return uVar2;
    }
  }
  return 1;
}



// ===== FUN_1801c35c0 @ 1801c35c0 (size 395)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c35c0(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x17];
  puVar1 = param_2 + 7;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    memset((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    FUN_18000be80(param_2,puVar1,1);
  }
  memset((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x1b);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x17);
  *(undefined1 *)((longlong)param_2 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x5b) = *(undefined1 *)(param_2 + 5);
  FUN_18000be80(param_2,puVar1,1);
  param_2[0x17] = 0;
  FUN_180001240(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)((uint)uVar3 >> 0x18);
  param_1[1] = (char)((uint)uVar3 >> 0x10);
  param_1[2] = (char)((uint)uVar3 >> 8);
  param_1[3] = (char)uVar3;
  uVar3 = param_2[1];
  param_1[4] = (char)((uint)uVar3 >> 0x18);
  param_1[5] = (char)((uint)uVar3 >> 0x10);
  param_1[6] = (char)((uint)uVar3 >> 8);
  param_1[7] = (char)uVar3;
  uVar3 = param_2[2];
  param_1[8] = (char)((uint)uVar3 >> 0x18);
  param_1[9] = (char)((uint)uVar3 >> 0x10);
  param_1[10] = (char)((uint)uVar3 >> 8);
  param_1[0xb] = (char)uVar3;
  uVar3 = param_2[3];
  param_1[0xc] = (char)((uint)uVar3 >> 0x18);
  param_1[0xd] = (char)((uint)uVar3 >> 0x10);
  param_1[0xe] = (char)((uint)uVar3 >> 8);
  param_1[0xf] = (char)uVar3;
  uVar3 = param_2[4];
  param_1[0x10] = (char)((uint)uVar3 >> 0x18);
  param_1[0x11] = (char)((uint)uVar3 >> 0x10);
  param_1[0x12] = (char)((uint)uVar3 >> 8);
  param_1[0x13] = (char)uVar3;
  return 1;
}



// ===== FUN_1801c3750 @ 1801c3750 (size 81)

undefined8 FUN_1801c3750(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return 1;
}



// ===== FUN_1801c37d0 @ 1801c37d0 (size 307)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c37d0(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x14) + (int)param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x14)) {
      iVar2 = iVar2 + 1;
    }
    *(uint *)(param_1 + 0x14) = uVar3;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x18) = (int)(param_3 >> 0x1d) + iVar2;
    if (uVar4 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x1c);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        memcpy((void *)(uVar4 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar4;
      memcpy((void *)(uVar4 + (longlong)puVar1),param_2,_Size);
      FUN_18000be80(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
    }
    uVar4 = param_3 >> 6;
    if (uVar4 != 0) {
      FUN_18000be80(param_1,param_2,uVar4);
      param_2 = (void *)((longlong)param_2 + uVar4 * 0x40);
      param_3 = param_3 + uVar4 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x5c) = (int)param_3;
      memcpy((void *)(param_1 + 0x1c),param_2,param_3);
    }
  }
  return 1;
}



// ===== FUN_1801c3930 @ 1801c3930 (size 109)

undefined8 FUN_1801c3930(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *param_1 = 0xc1059ed8;
  param_1[1] = 0x367cd507;
  param_1[2] = 0x3070dd17;
  param_1[3] = 0xf70e5939;
  param_1[4] = 0xffc00b31;
  param_1[5] = 0x68581511;
  param_1[6] = 0x64f98fa7;
  param_1[7] = 0xbefa4fa4;
  param_1[0x1b] = 0x1c;
  return 1;
}



// ===== FUN_1801c39c0 @ 1801c39c0 (size 793)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c39c0(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = param_2[0x1a];
  puVar1 = param_2 + 10;
  *(undefined1 *)((ulonglong)uVar3 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar3 + 1;
  if (0x38 < uVar4) {
    memset((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    FUN_180010b40(param_2,puVar1,1);
  }
  memset((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)((longlong)param_2 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_2 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_2 + 99) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)((longlong)param_2 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_2 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_2 + 0x67) = *(undefined1 *)(param_2 + 8);
  FUN_180010b40(param_2,puVar1,1);
  param_2[0x1a] = 0;
  FUN_180001240(puVar1,0x40);
  uVar3 = param_2[0x1b];
  if (uVar3 == 0x1c) {
    uVar2 = *param_2;
    *param_1 = (char)((uint)uVar2 >> 0x18);
    param_1[1] = (char)((uint)uVar2 >> 0x10);
    param_1[2] = (char)((uint)uVar2 >> 8);
    param_1[3] = (char)uVar2;
    uVar2 = param_2[1];
    param_1[4] = (char)((uint)uVar2 >> 0x18);
    param_1[5] = (char)((uint)uVar2 >> 0x10);
    param_1[6] = (char)((uint)uVar2 >> 8);
    param_1[7] = (char)uVar2;
    uVar2 = param_2[2];
    param_1[8] = (char)((uint)uVar2 >> 0x18);
    param_1[9] = (char)((uint)uVar2 >> 0x10);
    param_1[10] = (char)((uint)uVar2 >> 8);
    param_1[0xb] = (char)uVar2;
    uVar2 = param_2[3];
    param_1[0xc] = (char)((uint)uVar2 >> 0x18);
    param_1[0xd] = (char)((uint)uVar2 >> 0x10);
    param_1[0xe] = (char)((uint)uVar2 >> 8);
    param_1[0xf] = (char)uVar2;
    uVar2 = param_2[4];
    param_1[0x10] = (char)((uint)uVar2 >> 0x18);
    param_1[0x11] = (char)((uint)uVar2 >> 0x10);
    param_1[0x12] = (char)((uint)uVar2 >> 8);
    param_1[0x13] = (char)uVar2;
    uVar2 = param_2[5];
    param_1[0x14] = (char)((uint)uVar2 >> 0x18);
    param_1[0x15] = (char)((uint)uVar2 >> 0x10);
    param_1[0x16] = (char)((uint)uVar2 >> 8);
    param_1[0x17] = (char)uVar2;
    uVar2 = param_2[6];
    param_1[0x18] = (char)((uint)uVar2 >> 0x18);
    param_1[0x19] = (char)((uint)uVar2 >> 0x10);
    param_1[0x1a] = (char)((uint)uVar2 >> 8);
    param_1[0x1b] = (char)uVar2;
  }
  else if (uVar3 == 0x20) {
    uVar2 = *param_2;
    *param_1 = (char)((uint)uVar2 >> 0x18);
    param_1[1] = (char)((uint)uVar2 >> 0x10);
    param_1[2] = (char)((uint)uVar2 >> 8);
    param_1[3] = (char)uVar2;
    uVar2 = param_2[1];
    param_1[4] = (char)((uint)uVar2 >> 0x18);
    param_1[5] = (char)((uint)uVar2 >> 0x10);
    param_1[6] = (char)((uint)uVar2 >> 8);
    param_1[7] = (char)uVar2;
    uVar2 = param_2[2];
    param_1[8] = (char)((uint)uVar2 >> 0x18);
    param_1[9] = (char)((uint)uVar2 >> 0x10);
    param_1[10] = (char)((uint)uVar2 >> 8);
    param_1[0xb] = (char)uVar2;
    uVar2 = param_2[3];
    param_1[0xc] = (char)((uint)uVar2 >> 0x18);
    param_1[0xd] = (char)((uint)uVar2 >> 0x10);
    param_1[0xe] = (char)((uint)uVar2 >> 8);
    param_1[0xf] = (char)uVar2;
    uVar2 = param_2[4];
    param_1[0x10] = (char)((uint)uVar2 >> 0x18);
    param_1[0x11] = (char)((uint)uVar2 >> 0x10);
    param_1[0x12] = (char)((uint)uVar2 >> 8);
    param_1[0x13] = (char)uVar2;
    uVar2 = param_2[5];
    param_1[0x14] = (char)((uint)uVar2 >> 0x18);
    param_1[0x15] = (char)((uint)uVar2 >> 0x10);
    param_1[0x16] = (char)((uint)uVar2 >> 8);
    param_1[0x17] = (char)uVar2;
    uVar2 = param_2[6];
    param_1[0x18] = (char)((uint)uVar2 >> 0x18);
    param_1[0x19] = (char)((uint)uVar2 >> 0x10);
    param_1[0x1a] = (char)((uint)uVar2 >> 8);
    param_1[0x1b] = (char)uVar2;
    uVar2 = param_2[7];
    param_1[0x1c] = (char)((uint)uVar2 >> 0x18);
    param_1[0x1d] = (char)((uint)uVar2 >> 0x10);
    param_1[0x1e] = (char)((uint)uVar2 >> 8);
    param_1[0x1f] = (char)uVar2;
  }
  else {
    if (0x20 < uVar3) {
      return 0;
    }
    uVar4 = 0;
    if ((uVar3 & 0xfffffffc) != 0) {
      do {
        uVar3 = (int)uVar4 + 1;
        uVar2 = param_2[uVar4];
        *param_1 = (char)((uint)uVar2 >> 0x18);
        param_1[1] = (char)((uint)uVar2 >> 0x10);
        param_1[2] = (char)((uint)uVar2 >> 8);
        param_1[3] = (char)uVar2;
        param_1 = param_1 + 4;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < (uint)param_2[0x1b] >> 2);
    }
  }
  return 1;
}



// ===== FUN_1801c3ce0 @ 1801c3ce0 (size 109)

undefined8 FUN_1801c3ce0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *param_1 = 0x6a09e667;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  param_1[3] = 0xa54ff53a;
  param_1[4] = 0x510e527f;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  param_1[0x1b] = 0x20;
  return 1;
}



// ===== FUN_1801c3d70 @ 1801c3d70 (size 307)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c3d70(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    uVar3 = *(uint *)(param_1 + 0x20) + (int)param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x20)) {
      iVar2 = iVar2 + 1;
    }
    *(uint *)(param_1 + 0x20) = uVar3;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x68);
    *(int *)(param_1 + 0x24) = (int)(param_3 >> 0x1d) + iVar2;
    if (uVar4 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x28);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        memcpy((void *)(uVar4 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar4;
      memcpy((void *)(uVar4 + (longlong)puVar1),param_2,_Size);
      FUN_180010b40(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    uVar4 = param_3 >> 6;
    if (uVar4 != 0) {
      FUN_180010b40(param_1,param_2,uVar4);
      param_2 = (void *)((longlong)param_2 + uVar4 * 0x40);
      param_3 = param_3 + uVar4 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = (int)param_3;
      memcpy((void *)(param_1 + 0x28),param_2,param_3);
    }
  }
  return 1;
}



// ===== FUN_1801c3ed0 @ 1801c3ed0 (size 143)

undefined8 FUN_1801c3ed0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x30;
  *param_1 = 0xcbbb9d5dc1059ed8;
  param_1[1] = 0x629a292a367cd507;
  param_1[2] = 0x9159015a3070dd17;
  param_1[3] = 0x152fecd8f70e5939;
  param_1[4] = 0x67332667ffc00b31;
  param_1[5] = 0x8eb44a8768581511;
  param_1[6] = 0xdb0c2e0d64f98fa7;
  param_1[7] = 0x47b5481dbefa4fa4;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// ===== FUN_1801c3f80 @ 1801c3f80 (size 269)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_1801c3f80(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1801c3f8c;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_118;
  local_24 = 0x40;
  local_f8 = 0x6a09e667f3bcc908;
  puVar1 = &DAT_1803c93c0;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  local_f0 = 0xbb67ae8584caa73b;
  local_e8 = 0x3c6ef372fe94f82b;
  local_e0 = 0xa54ff53a5f1d36f1;
  local_d8 = 0x510e527fade682d1;
  local_d0 = 0x9b05688c2b3e6c1f;
  local_c8 = 0x1f83d9abfb41bd6b;
  local_c0 = 0x5be0cd19137e2179;
  local_b8 = 0;
  local_b0 = 0;
  local_28 = 0;
  FUN_1801c4940(&local_f8,param_1,param_2);
  FUN_1801c4090(puVar1,&local_f8);
  FUN_180001240(&local_f8,0xd8);
  return puVar1;
}



// ===== FUN_1801c4090 @ 1801c4090 (size 2044)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c4090(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar2 = *(uint *)(param_2 + 0x1a);
  puVar1 = param_2 + 10;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar5 = (ulonglong)uVar2 + 1;
  if (0x70 < uVar5) {
    memset((void *)(uVar5 + (longlong)puVar1),0,0x80 - uVar5);
    uVar5 = 0;
    FUN_180015900(param_2,puVar1,1);
  }
  memset((void *)(uVar5 + (longlong)puVar1),0,0x70 - uVar5);
  *(undefined1 *)((longlong)param_2 + 0xcf) = *(undefined1 *)(param_2 + 8);
  *(char *)((longlong)param_2 + 0xce) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 8);
  *(char *)((longlong)param_2 + 0xcd) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
  *(char *)((longlong)param_2 + 0xcc) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 0x18);
  *(char *)((longlong)param_2 + 0xcb) = (char)((ulonglong)param_2[8] >> 0x20);
  *(char *)((longlong)param_2 + 0xca) = (char)((ulonglong)param_2[8] >> 0x28);
  *(undefined1 *)((longlong)param_2 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0x46);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x47);
  *(undefined1 *)((longlong)param_2 + 199) = *(undefined1 *)(param_2 + 9);
  *(char *)((longlong)param_2 + 0xc6) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 8);
  *(char *)((longlong)param_2 + 0xc5) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 0x10);
  *(char *)((longlong)param_2 + 0xc4) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 0x18);
  *(char *)((longlong)param_2 + 0xc3) = (char)((ulonglong)param_2[9] >> 0x20);
  *(char *)((longlong)param_2 + 0xc2) = (char)((ulonglong)param_2[9] >> 0x28);
  *(undefined1 *)((longlong)param_2 + 0xc1) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x4f);
  FUN_180015900(param_2,puVar1,1);
  if (param_1 != (undefined1 *)0x0) {
    iVar3 = *(int *)((longlong)param_2 + 0xd4);
    if (iVar3 == 0x1c) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      return 1;
    }
    if (iVar3 == 0x20) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
      return 1;
    }
    if (iVar3 == 0x30) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
      uVar4 = param_2[4];
      param_1[0x20] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x21] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x22] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x23] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x24] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x25] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x26] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x27] = (char)uVar4;
      uVar4 = param_2[5];
      param_1[0x28] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x29] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x2a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x2b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x2c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x2d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x2e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x2f] = (char)uVar4;
      return 1;
    }
    if (iVar3 == 0x40) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
      uVar4 = param_2[4];
      param_1[0x20] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x21] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x22] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x23] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x24] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x25] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x26] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x27] = (char)uVar4;
      uVar4 = param_2[5];
      param_1[0x28] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x29] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x2a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x2b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x2c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x2d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x2e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x2f] = (char)uVar4;
      uVar4 = param_2[6];
      param_1[0x30] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x31] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x32] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x33] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x34] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x35] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x36] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x37] = (char)uVar4;
      uVar4 = param_2[7];
      param_1[0x38] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x39] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x3a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x3b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x3c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x3d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x3e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x3f] = (char)uVar4;
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801c4890 @ 1801c4890 (size 143)

undefined8 FUN_1801c4890(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x40;
  *param_1 = 0x6a09e667f3bcc908;
  param_1[1] = 0xbb67ae8584caa73b;
  param_1[2] = 0x3c6ef372fe94f82b;
  param_1[3] = 0xa54ff53a5f1d36f1;
  param_1[4] = 0x510e527fade682d1;
  param_1[5] = 0x9b05688c2b3e6c1f;
  param_1[6] = 0x1f83d9abfb41bd6b;
  param_1[7] = 0x5be0cd19137e2179;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// ===== FUN_1801c4940 @ 1801c4940 (size 273)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c4940(longlong param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  void *_Dst_00;
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  _Dst = (void *)(param_1 + 0x50);
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    uVar3 = *(ulonglong *)(param_1 + 0x40) + param_3 * 8;
    if (uVar3 < *(ulonglong *)(param_1 + 0x40)) {
      lVar2 = lVar2 + 1;
    }
    *(ulonglong *)(param_1 + 0x40) = uVar3;
    *(ulonglong *)(param_1 + 0x48) = (param_3 >> 0x3d) + lVar2;
    uVar1 = *(uint *)(param_1 + 0xd0);
    if (uVar1 != 0) {
      _Dst_00 = (void *)((ulonglong)uVar1 + (longlong)_Dst);
      uVar3 = 0x80 - (ulonglong)uVar1;
      if (param_3 < uVar3) {
        memcpy(_Dst_00,param_2,param_3);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + (int)param_3;
        return 1;
      }
      memcpy(_Dst_00,param_2,uVar3);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      param_3 = param_3 - uVar3;
      param_2 = (void *)((longlong)param_2 + uVar3);
      FUN_180015900(param_1,_Dst,1);
    }
    uVar3 = param_3;
    if (0x7f < param_3) {
      FUN_180015900(param_1,param_2,param_3 >> 7);
      uVar3 = (ulonglong)((uint)param_3 & 0x7f);
      param_2 = (void *)((longlong)param_2 + (param_3 - uVar3));
    }
    if (uVar3 != 0) {
      memcpy(_Dst,param_2,uVar3);
      *(int *)(param_1 + 0xd0) = (int)uVar3;
    }
  }
  return 1;
}



// ===== FUN_1801c4a60 @ 1801c4a60 (size 143)

undefined8 FUN_1801c4a60(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x1c;
  *param_1 = 0x8c3d37c819544da2;
  param_1[1] = 0x73e1996689dcd4d6;
  param_1[2] = 0x1dfab7ae32ff9c82;
  param_1[3] = 0x679dd514582f9fcf;
  param_1[4] = 0xf6d2b697bd44da8;
  param_1[5] = 0x77e36f7304c48942;
  param_1[6] = 0x3f9d85a86a1d36c8;
  param_1[7] = 0x1112e6ad91d692a1;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// ===== FUN_1801c4af0 @ 1801c4af0 (size 143)

undefined8 FUN_1801c4af0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x20;
  *param_1 = 0x22312194fc2bf72c;
  param_1[1] = 0x9f555fa3c84c64c2;
  param_1[2] = 0x2393b86b6f53b151;
  param_1[3] = 0x963877195940eabd;
  param_1[4] = 0x96283ee2a88effe3;
  param_1[5] = 0xbe5e1e2553863992;
  param_1[6] = 0x2b0199fc2c85b8aa;
  param_1[7] = 0xeb72ddc81c52ca2;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// ===== FUN_1801c4b80 @ 1801c4b80 (size 251)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801c4b80(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *local_res8;
  undefined4 local_128 [70];
  undefined8 uStack_10;
  
  uStack_10 = 0x1801c4b90;
  do {
    local_res8 = local_128;
    local_128[0] = param_2;
    if ((DAT_1803c9400 == 0) || (iVar1 = FUN_180195630(DAT_1803c9400,local_128), iVar1 < 0)) {
      plVar3 = (longlong *)FUN_1801b8ee0(&local_res8,&PTR_DAT_1803be590,0x14,8,&LAB_1801c3430);
      if ((plVar3 == (longlong *)0x0) || (lVar2 = *plVar3, lVar2 == 0)) {
        lVar2 = 0;
LAB_1801c4c30:
        if (param_1 != (longlong *)0x0) {
          lVar4 = FUN_1801e8eb0(param_2);
          if (lVar4 != 0) {
            *param_1 = lVar4;
            lVar2 = FUN_1801e8e50(lVar4,param_2);
            return lVar2;
          }
          *param_1 = 0;
        }
        return lVar2;
      }
    }
    else {
      lVar2 = FUN_180195ae0(DAT_1803c9400,iVar1);
    }
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 8) & 1) == 0)) goto LAB_1801c4c30;
    param_2 = *(undefined4 *)(lVar2 + 4);
  } while( true );
}



// ===== FUN_1801c4c80 @ 1801c4c80 (size 351)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_1801c4c80(undefined8 *param_1,char *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 local_res8;
  
  if (param_3 == 0xffffffff) {
    cVar1 = *param_2;
    pcVar3 = param_2;
    for (param_3 = 0; (cVar1 != '\0' && (param_3 < 0x80000000)); param_3 = param_3 + 1) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    param_3 = param_3 & 0x7fffffff;
  }
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = (undefined *)FUN_1801e8ed0(&local_res8,param_2,param_3,param_4,0x1801c4c91);
    if (puVar4 != (undefined *)0x0) {
      iVar2 = FUN_1801ac0a0(local_res8);
      if (iVar2 == 0) {
        puVar4 = (undefined *)0x0;
      }
      FUN_1801aba00(local_res8);
      *param_1 = local_res8;
      return puVar4;
    }
    *param_1 = 0;
  }
  iVar2 = 0x14;
  if (DAT_1803c9400 != 0) {
    iVar2 = FUN_1801958b0();
    iVar2 = iVar2 + 0x14;
  }
  if (0 < iVar2) {
    lVar7 = (longlong)iVar2;
    do {
      iVar6 = iVar2 + -1;
      lVar7 = lVar7 + -1;
      if (lVar7 < 0) {
        puVar4 = (undefined *)0x0;
      }
      else if (iVar6 < 0x14) {
        puVar4 = (&PTR_DAT_1803be590)[lVar7];
      }
      else {
        puVar4 = (undefined *)FUN_180195ae0(DAT_1803c9400,iVar2 + -0x15);
      }
      if ((puVar4[8] & 1) == 0) {
        pcVar3 = *(char **)(puVar4 + 0x10);
        cVar1 = *pcVar3;
        pcVar8 = pcVar3;
        for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar8;
        }
        if (((uVar5 & 0x7fffffff) == param_3) &&
           (iVar2 = _strnicmp(pcVar3,param_2,(longlong)(int)param_3), iVar2 == 0)) {
          return puVar4;
        }
      }
      iVar2 = iVar6;
    } while (0 < iVar6);
  }
  return (undefined *)0x0;
}



// ===== FUN_1801c4de0 @ 1801c4de0 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c4de0(longlong param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 2) != 0)) {
    FUN_180195e10(*(undefined8 *)(param_1 + 0x10),"crypto\\asn1\\ameth_lib.c",299);
    FUN_180195e10(*(undefined8 *)(param_1 + 0x18),"crypto\\asn1\\ameth_lib.c",300);
    FUN_180195e10(param_1,"crypto\\asn1\\ameth_lib.c",0x12d);
  }
  return;
}



// ===== FUN_1801c4e50 @ 1801c4e50 (size 67)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_1801c4e50(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 0x14) {
    return (&PTR_DAT_1803be590)[param_1];
  }
  puVar1 = (undefined *)FUN_180195ae0(DAT_1803c9400,param_1 + -0x14);
  return puVar1;
}



// ===== FUN_1801c4ea0 @ 1801c4ea0 (size 81)

undefined8
FUN_1801c4ea0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 *param_6)

{
  if (param_6 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_6;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_6[1];
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_6[2];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_6 + 6);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_6 + 4);
  }
  return 1;
}



// ===== FUN_1801c4f50 @ 1801c4f50 (size 113)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c4f50(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) || (*(longlong **)(param_1 + 0x18) == (longlong *)0x0)) ||
     (*(longlong *)(param_1 + 0x20) == 0)) {
    uVar3 = 0x103;
    uVar2 = 0x43;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x18) + 0x160);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801c4f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar3 = 0x108;
    uVar2 = 0x42;
  }
  FUN_1801a70c0(0x10,0xb1,uVar2,"crypto\\ec\\ec_key.c",uVar3);
  return 0;
}



// ===== FUN_1801c4fe0 @ 1801c4fe0 (size 519)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801c4fe0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
    FUN_1801a70c0(0x10,0xb2,0x43,"crypto\\ec\\ec_key.c",0x4d,0x1801c4ff0);
    return (longlong *)0x0;
  }
  if (*param_2 != *param_1) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    if (((longlong *)param_1[3] != (longlong *)0x0) &&
       (pcVar1 = *(code **)(*(longlong *)param_1[3] + 0x178), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    iVar2 = FUN_1801abfb0(param_1[1]);
    if (iVar2 == 0) {
      return (longlong *)0x0;
    }
    param_1[1] = 0;
  }
  if (param_2[3] != 0) {
    uVar3 = FUN_18008d530();
    FUN_1801dd8b0(param_1[3]);
    lVar4 = FUN_1801ddab0(uVar3);
    param_1[3] = lVar4;
    if (lVar4 == 0) {
      return (longlong *)0x0;
    }
    iVar2 = FUN_1801dd400(lVar4,param_2[3]);
    if (iVar2 == 0) {
      return (longlong *)0x0;
    }
    if (param_2[4] != 0) {
      FUN_1801de3b0(param_1[4]);
      lVar4 = FUN_1801de790(param_2[3]);
      param_1[4] = lVar4;
      if (lVar4 == 0) {
        return (longlong *)0x0;
      }
      iVar2 = FUN_1801de290(lVar4,param_2[4]);
      if (iVar2 == 0) {
        return (longlong *)0x0;
      }
    }
    lVar4 = param_2[5];
    if (lVar4 != 0) {
      lVar5 = param_1[5];
      if (lVar5 == 0) {
        lVar5 = FUN_180198b30();
        param_1[5] = lVar5;
        if (lVar5 == 0) {
          return (longlong *)0x0;
        }
        lVar4 = param_2[5];
      }
      lVar4 = FUN_180198770(lVar5,lVar4);
      if (lVar4 == 0) {
        return (longlong *)0x0;
      }
      if ((*(code **)(*(longlong *)param_2[3] + 0x170) != (code *)0x0) &&
         (iVar2 = (**(code **)(*(longlong *)param_2[3] + 0x170))(param_1,param_2), iVar2 == 0)) {
        return (longlong *)0x0;
      }
    }
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  iVar2 = FUN_1801ade90(8,param_1 + 8,param_2 + 8);
  if (iVar2 == 0) {
    return (longlong *)0x0;
  }
  lVar4 = *param_2;
  if (lVar4 != *param_1) {
    if ((param_2[1] != 0) && (iVar2 = FUN_1801ac0a0(), iVar2 == 0)) {
      return (longlong *)0x0;
    }
    param_1[1] = param_2[1];
    *param_1 = *param_2;
    lVar4 = *param_2;
  }
  if ((*(code **)(lVar4 + 0x20) == (code *)0x0) ||
     (iVar2 = (**(code **)(lVar4 + 0x20))(param_1,param_2), iVar2 != 0)) {
    return param_1;
  }
  return (longlong *)0x0;
}



// ===== FUN_1801c5210 @ 1801c5210 (size 90)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801c5210(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1802026c0(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = FUN_1801c4fe0(lVar1,param_1);
    if (lVar2 != 0) {
      return lVar1;
    }
    FUN_1801c5270(lVar1);
  }
  return 0;
}



// ===== FUN_1801c5270 @ 1801c5270 (size 186)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c5270(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 7;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 < 2) {
      if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x18), pcVar2 != (code *)0x0)) {
        (*pcVar2)();
      }
      FUN_1801abfb0(param_1[1]);
      if (((longlong *)param_1[3] != (longlong *)0x0) &&
         (pcVar2 = *(code **)(*(longlong *)param_1[3] + 0x178), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1);
      }
      FUN_1801ae0a0(8,param_1,param_1 + 8);
      FUN_1801adcf0(param_1[9]);
      FUN_1801dd8b0(param_1[3]);
      FUN_1801de3b0(param_1[4]);
      FUN_1801984d0(param_1[5]);
      FUN_180195f20(param_1,0x50,"crypto\\ec\\ec_key.c");
    }
  }
  return;
}



// ===== FUN_1801c5330 @ 1801c5330 (size 103)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c5330(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_1[3] == 0)) {
    uVar2 = 0xb9;
    uVar1 = 0x43;
  }
  else {
    if (*(code **)(*param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801c5359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x40))();
      return uVar1;
    }
    uVar2 = 0xbe;
    uVar1 = 0x98;
  }
  FUN_1801a70c0(0x10,0xb3,uVar1,"crypto\\ec\\ec_key.c",uVar2);
  return 0;
}



// ===== FUN_1801c53d0 @ 1801c53d0 (size 66)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c53d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(longlong *)(param_1 + 0x18) == 0)) {
    return 0;
  }
  uVar1 = FUN_180202310(*(longlong *)(param_1 + 0x18),*(longlong *)(param_1 + 0x20),param_2,param_3,
                        param_4);
  return uVar1;
}



// ===== FUN_1801c5440 @ 1801c5440 (size 112)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801c5440(undefined4 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_1802026c0(0);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_180201860(param_1);
    plVar2[3] = lVar3;
    if (lVar3 != 0) {
      if (*(code **)(*plVar2 + 0x28) == (code *)0x0) {
        return plVar2;
      }
      iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,lVar3);
      if (iVar1 != 0) {
        return plVar2;
      }
    }
    FUN_1801c5270(plVar2);
  }
  return (longlong *)0x0;
}



// ===== FUN_1801c54b0 @ 1801c54b0 (size 156)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c54b0(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801c54ca;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 == 0) {
      lVar2 = FUN_1801de790();
      *(longlong *)(param_1 + 0x20) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_180202250(*(undefined8 *)(param_1 + 0x18),lVar2,param_2,param_3,param_4,uVar3);
    if (iVar1 != 0) {
      if ((*(byte *)**(undefined8 **)(param_1 + 0x18) & 2) == 0) {
        *(uint *)(param_1 + 0x34) = *param_2 & 0xfffffffe;
      }
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801c5550 @ 1801c5550 (size 91)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c5550(longlong param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x18), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x148);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801c55a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    FUN_1801a70c0(0x10,0xff,0x42,"crypto\\ec\\ec_key.c",0x290);
  }
  return 0;
}



// ===== FUN_1801c55b0 @ 1801c55b0 (size 266)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801c55b0(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801c55c6;
  if ((*(longlong **)(param_1 + 0x18) == (longlong *)0x0) ||
     (lVar2 = **(longlong **)(param_1 + 0x18), lVar2 == 0)) {
    return 0;
  }
  pcVar1 = *(code **)(lVar2 + 0x140);
  if (pcVar1 == (code *)0x0) {
    FUN_1801a70c0(0x10,0x100,0x42,"crypto\\ec\\ec_key.c",0x26d,0x1801c55c6);
    return 0;
  }
  lVar2 = (*pcVar1)(param_1,0,0);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_180195dc0(lVar2,"crypto\\ec\\ec_key.c",0x2ad);
  if (lVar3 == 0) {
    FUN_1801a70c0(0x10,0x117,0x41,"crypto\\ec\\ec_key.c",0x2ae,uVar4);
  }
  else {
    lVar2 = FUN_1801c56c0(param_1,lVar3,lVar2);
    if (lVar2 != 0) {
      *param_2 = lVar3;
      return lVar2;
    }
    FUN_180195e10(lVar3,"crypto\\ec\\ec_key.c",0x2b3);
  }
  return 0;
}



// ===== FUN_1801c56c0 @ 1801c56c0 (size 91)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c56c0(longlong param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x18), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x140);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801c5718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    FUN_1801a70c0(0x10,0x100,0x42,"crypto\\ec\\ec_key.c",0x26d);
  }
  return 0;
}



// ===== FUN_1801c5740 @ 1801c5740 (size 97)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801c5740(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x28))();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  FUN_1801dd8b0(param_1[3]);
  lVar2 = FUN_1801dd6b0(param_2);
  param_1[3] = lVar2;
  return (ulonglong)(lVar2 != 0);
}



// ===== FUN_1801c57d0 @ 1801c57d0 (size 614)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c57d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x1801c57ea;
  uVar4 = 0;
  lVar2 = 0;
  lVar3 = 0;
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) ||
     (*(longlong *)(param_1 + 0x20) == 0)) {
    FUN_1801a70c0(0x10,0x102,0x43,"crypto\\ec\\ec_key.c",0x117,0x1801c57ea);
    return 0;
  }
  iVar1 = FUN_1801de5b0();
  if (iVar1 != 0) {
    FUN_1801a70c0(0x10,0x102,0x6a,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x11c),uVar7);
    goto LAB_1801c59e9;
  }
  lVar2 = FUN_1801c9050();
  if ((lVar2 == 0) || (lVar3 = FUN_1801de790(*(undefined8 *)(param_1 + 0x18)), lVar3 == 0))
  goto LAB_1801c59e9;
  iVar1 = FUN_1801de630(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),lVar2);
  if (iVar1 < 1) {
    FUN_1801a70c0(0x10,0x102,0x6b,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x127),uVar7);
    goto LAB_1801c59e9;
  }
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar1 = FUN_180198a80(uVar7);
  if (iVar1 == 0) {
    iVar1 = FUN_1801de730(*(undefined8 *)(param_1 + 0x18),lVar3,0,*(undefined8 *)(param_1 + 0x20),
                          uVar7,lVar2);
    if (iVar1 == 0) {
      uVar5 = 0x131;
      uVar7 = 0x10;
    }
    else {
      iVar1 = FUN_1801de5b0(*(undefined8 *)(param_1 + 0x18),lVar3);
      if (iVar1 != 0) {
        if (*(longlong *)(param_1 + 0x28) != 0) {
          iVar1 = FUN_180198550(*(longlong *)(param_1 + 0x28),uVar7);
          if (-1 < iVar1) {
            uVar5 = 0x13e;
            goto LAB_1801c593f;
          }
          uVar6 = 0;
          iVar1 = FUN_1801de730(*(undefined8 *)(param_1 + 0x18),lVar3,
                                *(undefined8 *)(param_1 + 0x28),0,0,lVar2);
          if (iVar1 == 0) {
            FUN_1801a70c0(0x10,0x102,0x10,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x143));
            goto LAB_1801c59e9;
          }
          iVar1 = FUN_1801de1f0(*(undefined8 *)(param_1 + 0x18),lVar3,
                                *(undefined8 *)(param_1 + 0x20),lVar2);
          if (iVar1 != 0) {
            FUN_1801a70c0(0x10,0x102,0x7b,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x147));
            goto LAB_1801c59e9;
          }
        }
        uVar4 = 1;
        goto LAB_1801c59e9;
      }
      uVar5 = 0x135;
LAB_1801c593f:
      uVar7 = 0x82;
    }
  }
  else {
    uVar5 = 0x12d;
    uVar7 = 0x7a;
  }
  FUN_1801a70c0(0x10,0x102,uVar7,"crypto\\ec\\ec_key.c",uVar5);
LAB_1801c59e9:
  FUN_1801c8dd0(lVar2);
  FUN_1801de3b0(lVar3);
  return uVar4;
}



// ===== FUN_1801c5a40 @ 1801c5a40 (size 259)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c5a40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  lVar3 = 0;
  lVar5 = 0;
  lVar2 = FUN_1801c9050();
  if ((lVar2 != 0) &&
     (((lVar3 = *(longlong *)(param_1 + 0x28), lVar3 != 0 || (lVar3 = FUN_180198b30(), lVar3 != 0))
      && (lVar4 = FUN_18007e060(*(undefined8 *)(param_1 + 0x18)), lVar4 != 0)))) {
    do {
      iVar1 = FUN_1802013f0(lVar3,lVar4);
      if (iVar1 == 0) goto LAB_1801c5b09;
      iVar1 = FUN_180198a80(lVar3);
    } while (iVar1 != 0);
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (((lVar5 != 0) || (lVar5 = FUN_1801de790(*(undefined8 *)(param_1 + 0x18)), lVar5 != 0)) &&
       (iVar1 = FUN_1801de730(*(undefined8 *)(param_1 + 0x18),lVar5,lVar3,0,0,lVar2), iVar1 != 0)) {
      *(longlong *)(param_1 + 0x28) = lVar3;
      uVar6 = 1;
      *(longlong *)(param_1 + 0x20) = lVar5;
    }
  }
LAB_1801c5b09:
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_1801de3b0(lVar5);
  }
  if (*(longlong *)(param_1 + 0x28) != lVar3) {
    FUN_180198910(lVar3);
  }
  FUN_1801c8dd0(lVar2);
  return uVar6;
}



// ===== FUN_1801c5b90 @ 1801c5b90 (size 195)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c5b90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1801c5ba5;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = FUN_180198d60();
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      FUN_1801a70c0(0x10,0x103,0x41,"crypto\\ec\\ec_key.c",0x29b,uVar2);
      return 0;
    }
  }
  lVar1 = FUN_180198210(param_2,param_3,lVar1);
  if (lVar1 == 0) {
    FUN_1801a70c0(0x10,0x103,3,"crypto\\ec\\ec_key.c",0x29f,uVar2);
    return 0;
  }
  return 1;
}



// ===== FUN_1801c5c60 @ 1801c5c60 (size 157)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801c5c60(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801c5c7a;
  iVar1 = FUN_1801ddbf0(*(undefined8 *)(param_1 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  uVar2 = (ulonglong)iVar1;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (param_2 == 0) {
      return uVar2;
    }
    if (uVar2 <= param_3) {
      iVar1 = FUN_180198430(*(longlong *)(param_1 + 0x28),param_2,iVar1);
      if (iVar1 != -1) {
        return uVar2;
      }
      FUN_1801a70c0(0x10,0x104,100,"crypto\\ec\\ec_key.c",0x284,uVar3);
    }
  }
  return 0;
}



// ===== FUN_1801c5d20 @ 1801c5d20 (size 163)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801c5d20(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_1801b9550();
  if ((lVar2 != 0) &&
     (plVar3 = (longlong *)FUN_1801bf3f0(&DAT_18032cbc0), plVar3 != (longlong *)0x0)) {
    *plVar3 = lVar2;
    lVar2 = FUN_1801bc5a0();
    if ((lVar2 != 0) && (iVar1 = FUN_180195990(plVar3[1],lVar2), iVar1 != 0)) {
      FUN_1801d5970(lVar2,param_2,param_3);
      return plVar3;
    }
    FUN_1801bfa90(plVar3,&DAT_18032cbc0);
    FUN_1801bc580(lVar2);
  }
  return (longlong *)0x0;
}



// ===== FUN_1801c5e40 @ 1801c5e40 (size 179)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c5e40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  size_t _Size;
  
  if (*(int *)(param_2 + 0x11) != -1) {
    iVar1 = FUN_18018eb20(*param_1,*param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_1801af540(*param_2);
      _Size = (size_t)iVar1;
      memcpy(param_1 + 1,param_2 + 1,_Size);
      memcpy(param_1 + 5,param_2 + 5,_Size);
      memcpy(param_1 + 9,param_2 + 9,_Size);
      memcpy(param_1 + 0xd,param_2 + 0xd,_Size);
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801c5f00 @ 1801c5f00 (size 131)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c5f00(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_18018ee30(*param_1);
    FUN_180001240(param_1 + 9,0x20);
    FUN_180001240(param_1 + 1,0x20);
    FUN_180001240(param_1 + 5,0x20);
    FUN_180001240(param_1 + 0xd,0x20);
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
    FUN_18018ed10(*param_1);
    FUN_180195e10(param_1,"crypto\\cmac\\cmac.c",0x54);
  }
  return;
}



// ===== FUN_1801c5f90 @ 1801c5f90 (size 139)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801c5f90(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801c5f9c;
  plVar1 = (longlong *)FUN_180195dc0(0x90,"crypto\\cmac\\cmac.c",0x32);
  if (plVar1 == (longlong *)0x0) {
    FUN_1801a70c0(0xf,0x78,0x41,"crypto\\cmac\\cmac.c",0x33,uVar3);
    return (longlong *)0x0;
  }
  lVar2 = FUN_18018ed50();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    FUN_180195e10(plVar1,"crypto\\cmac\\cmac.c",0x38);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar1 + 0x11) = 0xffffffff;
  return plVar1;
}



// ===== FUN_1801c6020 @ 1801c6020 (size 296)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c6020(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  iVar2 = FUN_1801af540(*param_1);
  lVar5 = (longlong)iVar2;
  *param_3 = lVar5;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x11);
    if (iVar1 == iVar2) {
      if (0 < iVar2) {
        pbVar3 = (byte *)(param_1 + 1);
        lVar4 = lVar5;
        do {
          pbVar3[(param_2 - (longlong)param_1) + -8] = pbVar3[0x60] ^ *pbVar3;
          pbVar3 = pbVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    else {
      *(undefined1 *)((longlong)iVar1 + 0x68 + (longlong)param_1) = 0x80;
      if (1 < iVar2 - iVar1) {
        memset((void *)((longlong)iVar1 + 0x69 + (longlong)param_1),0,
               (longlong)((iVar2 - iVar1) + -1));
      }
      if (0 < iVar2) {
        pbVar3 = (byte *)(param_1 + 5);
        lVar4 = lVar5;
        do {
          pbVar3[(param_2 - (longlong)param_1) + -0x28] = pbVar3[0x40] ^ *pbVar3;
          pbVar3 = pbVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    iVar2 = FUN_1801afcd0(*param_1,param_2,param_2,iVar2);
    if (iVar2 == 0) {
      FUN_180001240(param_2,lVar5);
      return 0;
    }
  }
  return 1;
}



// ===== FUN_1801c6150 @ 1801c6150 (size 430)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801c6150(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4,
             longlong param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801c6170;
  if (param_2 == 0) {
    if (param_4 == 0) {
      if (param_5 != 0) {
        return 1;
      }
      if (param_3 != 0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x11) == -1) {
        return 0;
      }
      iVar1 = FUN_18018f9c0(*param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_1801af540(*param_1);
      goto LAB_1801c61cf;
    }
LAB_1801c6203:
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
    iVar1 = FUN_18018f9c0(*param_1,param_4,param_5,0,0,0x1801c6170);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_4 != 0) goto LAB_1801c6203;
  if (param_2 == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  lVar3 = FUN_18008d530(*param_1);
  if (((lVar3 == 0) || (iVar1 = FUN_18018eec0(*param_1,param_3 & 0xffffffff), iVar1 == 0)) ||
     (iVar1 = FUN_18018f9c0(*param_1,0,0,param_2,&DAT_18032cc08,uVar4), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_1801af540(*param_1);
  iVar2 = FUN_1801afcd0(*param_1,param_1 + 9,&DAT_18032cc08,iVar1);
  if (iVar2 < 1) {
    return 0;
  }
  FUN_1801c6410(param_1 + 1,param_1 + 9,iVar1);
  FUN_1801c6410(param_1 + 5,param_1 + 1,iVar1);
  FUN_180001240(param_1 + 9);
  iVar2 = FUN_18018f9c0(*param_1,0,0,0,&DAT_18032cc08);
  if (iVar2 == 0) {
    return 0;
  }
LAB_1801c61cf:
  memset(param_1 + 9,0,(longlong)iVar1);
  *(undefined4 *)(param_1 + 0x11) = 0;
  return 1;
}



// ===== FUN_1801c6300 @ 1801c6300 (size 257)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c6300(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong _Size;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  if (param_3 != 0) {
    iVar1 = FUN_1801af540(*param_1);
    uVar4 = (ulonglong)iVar1;
    iVar2 = *(int *)(param_1 + 0x11);
    if (0 < iVar2) {
      uVar3 = uVar4 - (longlong)iVar2;
      _Size = param_3;
      if (uVar3 <= param_3) {
        _Size = uVar3;
      }
      memcpy((void *)((longlong)iVar2 + 0x68 + (longlong)param_1),param_2,_Size);
      *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + (int)_Size;
      param_3 = param_3 - _Size;
      if (param_3 == 0) {
        return 1;
      }
      param_2 = (void *)((longlong)param_2 + _Size);
      iVar2 = FUN_1801afcd0(*param_1,param_1 + 9,param_1 + 0xd,iVar1);
      if (iVar2 < 1) {
        return 0;
      }
    }
    for (; uVar4 < param_3; param_3 = param_3 - uVar4) {
      iVar2 = FUN_1801afcd0(*param_1,param_1 + 9,param_2,iVar1);
      if (iVar2 < 1) {
        return 0;
      }
      param_2 = (void *)((longlong)param_2 + uVar4);
    }
    memcpy(param_1 + 0xd,param_2,param_3);
    *(int *)(param_1 + 0x11) = (int)param_3;
  }
  return 1;
}



// ===== FUN_1801c6410 @ 1801c6410 (size 150)

void FUN_1801c6410(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  
  bVar6 = *param_2;
  iVar2 = param_3 + -1;
  lVar7 = (longlong)iVar2;
  bVar1 = (char)bVar6 >> 7;
  iVar3 = 0;
  if (0 < iVar2) {
    pbVar4 = param_1;
    bVar5 = bVar6;
    do {
      bVar6 = pbVar4[(longlong)(param_2 + (1 - (longlong)param_1))];
      *pbVar4 = bVar6 >> 7 | bVar5 * '\x02';
      lVar7 = lVar7 + -1;
      pbVar4 = pbVar4 + 1;
      bVar5 = bVar6;
      iVar3 = iVar2;
    } while (lVar7 != 0);
  }
  bVar5 = 0x1b;
  if (param_3 == 0x10) {
    bVar5 = 0x87;
  }
  param_1[iVar3] = bVar5 & bVar1 ^ bVar6 * '\x02';
  return;
}



// ===== FUN_1801c64b0 @ 1801c64b0 (size 89)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c64b0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  FUN_1801a70c0(0x26,0xc0,0x65,"crypto\\engine\\tb_pkmeth.c",0x4c);
  return 0;
}



// ===== FUN_1801c6530 @ 1801c6530 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c6530(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x1801c653c;
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_1801ed650(&DAT_1803c9408,FUN_1801c6690,param_1,local_res8[0],iVar1,
                            uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// ===== FUN_1801c65a0 @ 1801c65a0 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c65a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_1801ed650(&DAT_1803c9408,FUN_1801c6690,param_1,local_res8[0],iVar1,
                            CONCAT44(uVar3,1));
      return uVar2;
    }
  }
  return 1;
}



// ===== FUN_1801c6610 @ 1801c6610 (size 125)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c6610(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,&local_res8,0);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        iVar2 = (**(code **)(param_1 + 0x48))
                          (param_1,&local_res10,0,*(undefined4 *)(local_res8 + lVar3 * 4));
        if (iVar2 != 0) {
          FUN_1801c31e0(local_res10);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
  }
  return;
}



// ===== FUN_1801c66b0 @ 1801c66b0 (size 403)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c66b0(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if ((*param_3 == 0) || (lVar3 = param_3[1], lVar3 == 0)) {
    FUN_1801a70c0(3,100,0x6b,"crypto\\bn\\bn_blind.c",0x8d,0x1801c66cb);
    return 0;
  }
  if (*(int *)((longlong)param_3 + 0x24) == -1) {
    *(undefined4 *)((longlong)param_3 + 0x24) = 0;
    goto LAB_1801c67cc;
  }
  bVar1 = false;
  iVar2 = *(int *)((longlong)param_3 + 0x24) + 1;
  *(int *)((longlong)param_3 + 0x24) = iVar2;
  if (((iVar2 == 0x20) && (param_3[2] != 0)) && ((*(byte *)(param_3 + 5) & 2) == 0)) {
    lVar3 = FUN_1801c6850(param_3,0,0,param_4,0,0);
    bVar5 = lVar3 == 0;
LAB_1801c67ad:
    if (!bVar5) {
LAB_1801c67af:
      bVar1 = true;
    }
  }
  else {
    if ((*(byte *)(param_3 + 5) & 1) != 0) goto LAB_1801c67af;
    if (param_3[6] == 0) {
      iVar2 = FUN_180202da0(lVar3,lVar3,lVar3,param_3[3],param_4);
      if (iVar2 != 0) {
        lVar3 = *param_3;
        iVar2 = FUN_180202da0(lVar3,lVar3,lVar3,param_3[3],param_4);
        bVar5 = iVar2 == 0;
        goto LAB_1801c67ad;
      }
    }
    else {
      iVar2 = FUN_1801bb630(lVar3,lVar3,lVar3);
      if (iVar2 != 0) {
        lVar3 = *param_3;
        iVar2 = FUN_1801bb630(lVar3,lVar3,lVar3,param_3[6],param_4);
        if (iVar2 != 0) goto LAB_1801c67af;
      }
    }
  }
  if (*(int *)((longlong)param_3 + 0x24) == 0x20) {
    *(undefined4 *)((longlong)param_3 + 0x24) = 0;
  }
  if (!bVar1) {
    return 0;
  }
LAB_1801c67cc:
  if ((param_2 != 0) && (lVar3 = FUN_180198770(param_2,param_3[1]), lVar3 == 0)) {
    return 0;
  }
  if (param_3[6] == 0) {
    uVar4 = FUN_180202da0(param_1,param_1,*param_3,param_3[3],param_4);
    return uVar4;
  }
  uVar4 = FUN_1801bb100();
  return uVar4;
}



// ===== FUN_1801c6850 @ 1801c6850 (size 720)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
FUN_1801c6850(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (param_1 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_180196100(0x48,"crypto\\bn\\bn_blind.c",0x24);
    if (plVar4 == (longlong *)0x0) {
      FUN_1801a70c0(3,0x66,0x41,"crypto\\bn\\bn_blind.c",CONCAT44(uVar1,0x25));
      plVar4 = (longlong *)0x0;
    }
    else {
      lVar5 = FUN_1801add30();
      plVar4[8] = lVar5;
      if (lVar5 != 0) {
        uVar1 = FUN_1801adc60();
        *(undefined4 *)(plVar4 + 4) = uVar1;
        lVar5 = FUN_180198800(param_3);
        plVar4[3] = lVar5;
        if (lVar5 == 0) {
          FUN_1801c6b20(plVar4);
          plVar4 = (longlong *)0x0;
        }
        else {
          iVar3 = FUN_180198990(param_3,4);
          if (iVar3 != 0) {
            FUN_180198ef0(plVar4[3],4);
          }
          *(undefined4 *)((longlong)plVar4 + 0x24) = 0xffffffff;
        }
        goto LAB_1801c6969;
      }
      FUN_1801a70c0(3,0x66,0x41,"crypto\\bn\\bn_blind.c",CONCAT44(uVar1,0x2b));
      FUN_180195e10(plVar4,"crypto\\bn\\bn_blind.c",0x2c);
      plVar4 = (longlong *)0x0;
    }
  }
  else {
    plVar4 = param_1;
LAB_1801c6969:
    if (plVar4 != (longlong *)0x0) {
      if (*plVar4 == 0) {
        lVar5 = FUN_180198b30();
        *plVar4 = lVar5;
        if (lVar5 == 0) goto LAB_1801c6a40;
      }
      if (plVar4[1] == 0) {
        lVar5 = FUN_180198b30();
        plVar4[1] = lVar5;
        if (lVar5 == 0) goto LAB_1801c6a40;
      }
      if (param_2 != 0) {
        FUN_180198910(plVar4[2]);
        lVar5 = FUN_180198800(param_2);
        plVar4[2] = lVar5;
      }
      if (plVar4[2] != 0) {
        if (param_5 != 0) {
          plVar4[7] = param_5;
        }
        if (param_6 != 0) {
          plVar4[6] = param_6;
        }
        iVar2 = FUN_1802013f0(*plVar4,plVar4[3]);
        iVar3 = 0x20;
        while (iVar2 != 0) {
          lVar5 = FUN_1801cad10(plVar4[1],*plVar4,plVar4[3],param_4,local_res8);
          if (lVar5 != 0) {
            if (((code *)plVar4[7] == (code *)0x0) || (plVar4[6] == 0)) {
              iVar3 = FUN_1802033a0(*plVar4,*plVar4,plVar4[2],plVar4[3],param_4);
            }
            else {
              iVar3 = (*(code *)plVar4[7])(*plVar4,*plVar4,plVar4[2],plVar4[3],param_4,plVar4[6]);
            }
            if ((iVar3 != 0) &&
               ((plVar4[6] == 0 ||
                ((iVar3 = FUN_1801bb760(plVar4[1],plVar4[1],plVar4[6],param_4), iVar3 != 0 &&
                 (iVar3 = FUN_1801bb760(*plVar4,*plVar4,plVar4[6],param_4), iVar3 != 0)))))) {
              return plVar4;
            }
            break;
          }
          if (local_res8[0] == 0) break;
          if (iVar3 == 0) {
            FUN_1801a70c0(3,0x80,0x71,"crypto\\bn\\bn_blind.c",0x11e);
            break;
          }
          iVar2 = FUN_1802013f0(*plVar4,plVar4[3]);
          iVar3 = iVar3 + -1;
        }
      }
    }
LAB_1801c6a40:
    if (param_1 != (longlong *)0x0) goto LAB_1801c6a50;
  }
  FUN_1801c6b20(plVar4);
LAB_1801c6a50:
  plVar6 = (longlong *)0x0;
  if (param_1 != (longlong *)0x0) {
    plVar6 = plVar4;
  }
  return plVar6;
}



// ===== FUN_1801c6b20 @ 1801c6b20 (size 93)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c6b20(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_180198910(*param_1);
    FUN_180198910(param_1[1]);
    FUN_180198910(param_1[2]);
    FUN_180198910(param_1[3]);
    FUN_1801adcf0(param_1[8]);
    FUN_180195e10(param_1,"crypto\\bn\\bn_blind.c",0x5a);
  }
  return;
}



// ===== FUN_1801c6b80 @ 1801c6b80 (size 623)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801c6b80(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar8 = _UNK_18032cc88;
  lVar7 = _DAT_18032cc80;
  if ((param_2 == 0) && (param_2 = *(longlong *)(param_3 + 8), param_2 == 0)) {
    FUN_1801a70c0(3,0x65,0x6b,"crypto\\bn\\bn_blind.c",0xaf);
    return 0;
  }
  if (*(longlong *)(param_3 + 0x30) == 0) {
    uVar12 = FUN_180202da0(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x18),param_4);
    return uVar12;
  }
  uVar9 = *(uint *)(param_2 + 8);
  uVar12 = (ulonglong)(int)uVar9;
  if ((int)uVar9 <= *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = 0;
    uVar6 = param_1[1];
    lVar15 = (longlong)(int)(uint)uVar6;
    if (uVar9 != 0) {
      if (7 < uVar12) {
        puVar3 = (ulonglong *)*param_1;
        if ((param_1 < puVar3) || (puVar3 + (uVar12 - 1) < param_1)) {
          uVar10 = uVar11;
          lVar13 = 4;
          lVar14 = 0x20;
          do {
            uVar11 = uVar10 + 8;
            puVar1 = (ulonglong *)((longlong)puVar3 + lVar14 + -0x20);
            uVar5 = puVar1[1];
            puVar2 = (ulonglong *)((longlong)puVar3 + lVar14 + -0x20);
            *puVar2 = (longlong)((uVar10 + lVar7) - lVar15) >> 0x3f & *puVar1;
            puVar2[1] = (longlong)((uVar10 + lVar8) - lVar15) >> 0x3f & uVar5;
            puVar1 = (ulonglong *)((longlong)puVar3 + lVar14 + -0x10);
            uVar10 = puVar1[1];
            puVar2 = (ulonglong *)((longlong)puVar3 + lVar14 + -0x10);
            *puVar2 = (lVar13 + -2 + lVar7) - lVar15 >> 0x3f & *puVar1;
            puVar2[1] = (lVar13 + -2 + lVar8) - lVar15 >> 0x3f & uVar10;
            uVar10 = ((ulonglong *)(lVar14 + (longlong)puVar3))[1];
            *(ulonglong *)(lVar14 + (longlong)puVar3) =
                 (lVar13 + lVar7) - lVar15 >> 0x3f & *(ulonglong *)(lVar14 + (longlong)puVar3);
            ((ulonglong *)(lVar14 + (longlong)puVar3))[1] =
                 (lVar13 + lVar8) - lVar15 >> 0x3f & uVar10;
            puVar1 = (ulonglong *)((longlong)puVar3 + lVar14 + 0x10);
            uVar10 = puVar1[1];
            puVar2 = (ulonglong *)((longlong)puVar3 + lVar14 + 0x10);
            *puVar2 = (lVar13 + 2 + lVar7) - lVar15 >> 0x3f & *puVar1;
            puVar2[1] = (lVar13 + 2 + lVar8) - lVar15 >> 0x3f & uVar10;
            uVar10 = uVar11;
            lVar13 = lVar13 + 8;
            lVar14 = lVar14 + 0x40;
          } while (uVar11 < (uVar12 & 0xfffffffffffffff8));
        }
      }
      for (; uVar11 < uVar12; uVar11 = uVar11 + 1) {
        puVar3 = (ulonglong *)(*param_1 + uVar11 * 8);
        *puVar3 = *puVar3 & (longlong)(uVar11 - lVar15) >> 0x3f;
      }
    }
    uVar4 = (uint)((longlong)(uVar12 - lVar15) >> 0x3f);
    *(uint *)(param_1 + 1) = ~uVar4 & uVar9 | uVar4 & (uint)uVar6;
  }
  uVar9 = FUN_1801bb630(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x30),param_4);
  FUN_1801993a0(param_1);
  return (ulonglong)uVar9;
}



// ===== FUN_1801c6e80 @ 1801c6e80 (size 743)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1801c6e80(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulonglong in_stack_ffffffffffffffc0;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar3 = 0xffffffff;
  iVar2 = 0;
  lVar7 = 0;
  iVar1 = FUN_180198b90(*(undefined8 *)(param_4 + 0x18));
  if (0x4000 < iVar1) {
    FUN_1801a70c0(4,0x68,0x69,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar10,0x4d));
    return 0xffffffff;
  }
  iVar1 = FUN_180198fc0(*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  if (iVar1 < 1) {
    uVar5 = CONCAT44(uVar10,0x52);
LAB_1801c6f04:
    FUN_1801a70c0(4,0x68,0x65,"crypto\\rsa\\rsa_ossl.c",uVar5);
    return 0xffffffff;
  }
  iVar1 = FUN_180198b90(*(undefined8 *)(param_4 + 0x18));
  if ((0xc00 < iVar1) && (iVar1 = FUN_180198b90(*(undefined8 *)(param_4 + 0x20)), 0x40 < iVar1)) {
    uVar5 = CONCAT44(uVar10,0x59);
    goto LAB_1801c6f04;
  }
  lVar4 = FUN_1801c9050();
  if (lVar4 == 0) goto LAB_1801c7129;
  FUN_1801c9140(lVar4);
  uVar5 = FUN_1801c8e90(lVar4);
  lVar6 = FUN_1801c8e90(lVar4);
  iVar1 = FUN_180198b90(*(undefined8 *)(param_4 + 0x18));
  iVar2 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  lVar7 = FUN_180195dc0((longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",100);
  if ((lVar6 == 0) || (lVar7 == 0)) {
    uVar9 = CONCAT44(uVar10,0x66);
    uVar5 = 0x41;
  }
  else {
    if (param_5 == 1) {
      iVar1 = FUN_180205320(lVar7,iVar2,param_2,param_1);
    }
    else if (param_5 == 2) {
      iVar1 = FUN_180206790(lVar7,iVar2,param_2,param_1);
    }
    else if (param_5 == 3) {
      iVar1 = FUN_180206d30(lVar7,iVar2,param_2,param_1);
    }
    else {
      if (param_5 != 4) {
        uVar9 = CONCAT44(uVar10,0x78);
        uVar5 = 0x76;
        goto LAB_1801c7110;
      }
      uVar10 = 0;
      iVar1 = FUN_180205b00(lVar7,iVar2,param_2,param_1,0,
                            in_stack_ffffffffffffffc0 & 0xffffffff00000000);
    }
    if ((iVar1 < 1) || (lVar8 = FUN_180198210(lVar7,iVar2,uVar5), lVar8 == 0)) goto LAB_1801c7129;
    iVar1 = FUN_180198fc0(uVar5,*(undefined8 *)(param_4 + 0x18));
    if (iVar1 < 0) {
      if ((((*(byte *)(param_4 + 0x74) & 2) == 0) ||
          (lVar8 = FUN_1801baf30(param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                                 *(undefined8 *)(param_4 + 0x18),lVar4), lVar8 != 0)) &&
         (iVar1 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                            (lVar6,uVar5,*(undefined8 *)(param_4 + 0x20),
                             *(undefined8 *)(param_4 + 0x18),lVar4,*(undefined8 *)(param_4 + 0x78)),
         iVar1 != 0)) {
        uVar3 = FUN_180198430(lVar6,param_3,iVar2);
      }
      goto LAB_1801c7129;
    }
    uVar9 = CONCAT44(uVar10,0x84);
    uVar5 = 0x84;
  }
LAB_1801c7110:
  FUN_1801a70c0(4,0x68,uVar5,"crypto\\rsa\\rsa_ossl.c",uVar9);
LAB_1801c7129:
  FUN_1801c8d50(lVar4);
  FUN_1801c8dd0(lVar4);
  FUN_180195f20(lVar7,(longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x99);
  return uVar3;
}



// ===== FUN_1801c7170 @ 1801c7170 (size 966)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1801c7170(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar9;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  undefined8 uStack_30;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uStack_30 = 0x1801c718c;
  iVar1 = 0;
  local_44 = 0xffffffff;
  lVar6 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  lVar3 = FUN_1801c9050();
  if (lVar3 == 0) goto LAB_1801c74f5;
  FUN_1801c9140(lVar3);
  lVar4 = FUN_1801c8e90(lVar3);
  lVar5 = FUN_1801c8e90(lVar3);
  iVar1 = FUN_180198b90(*(undefined8 *)(param_4 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  lVar6 = FUN_180195dc0((longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x100);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar9 = CONCAT44(uVar8,0x102);
LAB_1801c74cb:
    uVar8 = 0x41;
  }
  else if (param_5 == 1) {
    iVar2 = FUN_180205270(lVar6,iVar1,param_2,param_1);
LAB_1801c7296:
    if ((iVar2 < 1) || (lVar7 = FUN_180198210(lVar6,iVar1,lVar4), lVar7 == 0)) goto LAB_1801c74f5;
    iVar2 = FUN_180198fc0(lVar4,*(undefined8 *)(param_4 + 0x18));
    if (iVar2 < 0) {
      if (((*(byte *)(param_4 + 0x74) & 2) != 0) &&
         (lVar7 = FUN_1801baf30(param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                                *(undefined8 *)(param_4 + 0x18),lVar3), lVar7 == 0))
      goto LAB_1801c74f5;
      if ((*(byte *)(param_4 + 0x74) & 0x80) == 0) {
        lVar7 = FUN_1801c8750(param_4,&local_48,lVar3);
        local_38 = lVar7;
        if (lVar7 == 0) {
          uVar9 = CONCAT44(uVar8,0x12a);
          uVar8 = 0x44;
          goto LAB_1801c74d1;
        }
        if (local_48 == 0) {
          local_40 = FUN_1801c8e90(lVar3);
          if (local_40 == 0) {
            uVar9 = CONCAT44(uVar8,0x131);
            goto LAB_1801c74cb;
          }
        }
        iVar2 = FUN_1801c8670(lVar7,lVar4,local_40,lVar3);
        if (iVar2 == 0) goto LAB_1801c74f5;
      }
      if ((((*(byte *)(param_4 + 0x74) & 0x20) == 0) && (*(int *)(param_4 + 4) != 1)) &&
         (((*(longlong *)(param_4 + 0x30) == 0 ||
           (((*(longlong *)(param_4 + 0x38) == 0 || (*(longlong *)(param_4 + 0x40) == 0)) ||
            (*(longlong *)(param_4 + 0x48) == 0)))) || (*(longlong *)(param_4 + 0x50) == 0)))) {
        lVar7 = FUN_180198b30();
        if (lVar7 == 0) {
          uVar9 = CONCAT44(uVar8,0x142);
          goto LAB_1801c74cb;
        }
        if (*(longlong *)(param_4 + 0x28) == 0) {
          FUN_1801a70c0(4,0x66,0xb3,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar8,0x146));
          FUN_180198910(lVar7);
          goto LAB_1801c74f5;
        }
        FUN_180199020(lVar7,*(longlong *)(param_4 + 0x28),4);
        iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                          (lVar5,lVar4,lVar7,*(undefined8 *)(param_4 + 0x18),lVar3,
                           *(undefined8 *)(param_4 + 0x78));
        FUN_180198910(lVar7);
      }
      else {
        iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x28))(lVar5,lVar4,param_4,lVar3);
      }
      if ((iVar2 != 0) &&
         ((local_38 == 0 || (iVar2 = FUN_1801c86f0(local_38,lVar5,local_40,lVar3), iVar2 != 0)))) {
        if (param_5 == 5) {
          iVar2 = FUN_1801c9300(lVar4,*(undefined8 *)(param_4 + 0x18),lVar5);
          if (iVar2 == 0) goto LAB_1801c74f5;
          iVar2 = FUN_180198550(lVar5,lVar4);
          if (0 < iVar2) {
            lVar5 = lVar4;
          }
        }
        local_44 = FUN_180198430(lVar5,param_3,iVar1);
      }
      goto LAB_1801c74f5;
    }
    uVar9 = CONCAT44(uVar8,0x11e);
    uVar8 = 0x84;
  }
  else {
    if (param_5 == 3) {
      iVar2 = FUN_180206d30(lVar6,iVar1,param_2,param_1);
      goto LAB_1801c7296;
    }
    if (param_5 == 5) {
      iVar2 = FUN_180206df0(lVar6,iVar1,param_2,param_1);
      goto LAB_1801c7296;
    }
    uVar9 = CONCAT44(uVar8,0x112);
    uVar8 = 0x76;
  }
LAB_1801c74d1:
  FUN_1801a70c0(4,0x66,uVar8,"crypto\\rsa\\rsa_ossl.c",uVar9);
LAB_1801c74f5:
  FUN_1801c8d50(lVar3);
  FUN_1801c8dd0(lVar3);
  FUN_180195f20(lVar6,(longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x16c);
  return local_44;
}



// ===== FUN_1801c7540 @ 1801c7540 (size 792)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801c7540(int param_1,undefined8 param_2,void *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *_Src;
  longlong lVar7;
  byte *pbVar8;
  int iVar9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar11;
  undefined8 uVar10;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  iVar9 = -1;
  iVar2 = 0;
  _Src = (void *)0x0;
  iVar1 = FUN_180198b90(*(undefined8 *)(param_4 + 0x18));
  if (0x4000 < iVar1) {
    FUN_1801a70c0(4,0x67,0x69,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar11,0x1fe));
    return -1;
  }
  iVar1 = FUN_180198fc0(*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20));
  if (iVar1 < 1) {
    uVar5 = CONCAT44(uVar11,0x203);
LAB_1801c75c0:
    FUN_1801a70c0(4,0x67,0x65,"crypto\\rsa\\rsa_ossl.c",uVar5);
    return -1;
  }
  iVar1 = FUN_180198b90(*(undefined8 *)(param_4 + 0x18));
  if ((0xc00 < iVar1) && (iVar1 = FUN_180198b90(*(undefined8 *)(param_4 + 0x20)), 0x40 < iVar1)) {
    uVar5 = CONCAT44(uVar11,0x20a);
    goto LAB_1801c75c0;
  }
  lVar4 = FUN_1801c9050();
  iVar1 = iVar9;
  if (lVar4 == 0) goto LAB_1801c781d;
  FUN_1801c9140(lVar4);
  uVar5 = FUN_1801c8e90(lVar4);
  lVar6 = FUN_1801c8e90(lVar4);
  iVar2 = FUN_180198b90(*(undefined8 *)(param_4 + 0x18));
  iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  _Src = (void *)FUN_180195dc0((longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x215);
  if ((lVar6 == 0) || (_Src == (void *)0x0)) {
    uVar10 = 0x217;
    uVar5 = 0x41;
  }
  else if (iVar2 < param_1) {
    uVar10 = 0x220;
    uVar5 = 0x6c;
  }
  else {
    lVar7 = FUN_180198210(param_2,param_1,uVar5);
    if (lVar7 == 0) goto LAB_1801c781d;
    iVar3 = FUN_180198fc0(uVar5,*(undefined8 *)(param_4 + 0x18));
    if (iVar3 < 0) {
      if (((*(byte *)(param_4 + 0x74) & 2) != 0) &&
         (lVar7 = FUN_1801baf30(param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                                *(undefined8 *)(param_4 + 0x18),lVar4), lVar7 == 0))
      goto LAB_1801c781d;
      lVar7 = lVar4;
      iVar3 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                        (lVar6,uVar5,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x18)
                         ,lVar4,*(undefined8 *)(param_4 + 0x78));
      uVar11 = (undefined4)((ulonglong)lVar7 >> 0x20);
      if ((iVar3 == 0) ||
         (((param_5 == 5 && (pbVar8 = (byte *)FUN_18008d530(lVar6), (*pbVar8 & 0xf) != 0xc)) &&
          (iVar3 = FUN_1801c9300(lVar6,*(undefined8 *)(param_4 + 0x18),lVar6), iVar3 == 0))))
      goto LAB_1801c781d;
      iVar1 = FUN_180198430(lVar6,_Src,iVar2);
      if (param_5 == 1) {
        iVar1 = FUN_180205420(param_3,iVar2,_Src,iVar1,CONCAT44(uVar11,iVar2));
      }
      else if (param_5 == 3) {
        memcpy(param_3,_Src,(longlong)iVar1);
      }
      else {
        if (param_5 != 5) {
          uVar10 = CONCAT44(uVar11,0x247);
          uVar5 = 0x76;
          goto LAB_1801c77fc;
        }
        iVar1 = FUN_180206eb0(param_3,iVar2,_Src,iVar1,CONCAT44(uVar11,iVar2));
      }
      if (-1 < iVar1) goto LAB_1801c781d;
      uVar10 = 0x24b;
      uVar5 = 0x72;
      iVar9 = iVar1;
    }
    else {
      uVar10 = 0x229;
      uVar5 = 0x84;
    }
  }
LAB_1801c77fc:
  FUN_1801a70c0(4,0x67,uVar5,"crypto\\rsa\\rsa_ossl.c",uVar10);
  iVar1 = iVar9;
LAB_1801c781d:
  FUN_1801c8d50(lVar4);
  FUN_1801c8dd0(lVar4);
  FUN_180195f20(_Src,(longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x250);
  return iVar1;
}



// ===== FUN_1801c7860 @ 1801c7860 (size 1033)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801c7860(int param_1,undefined8 param_2,void *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar8;
  longlong lVar9;
  int local_48 [2];
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_48[0] = 0;
  local_30 = 0;
  iVar1 = 0;
  _Src = (void *)0x0;
  iVar7 = -1;
  lVar5 = 0;
  lVar3 = FUN_1801c9050();
  if (lVar3 == 0) goto LAB_1801c7c20;
  FUN_1801c9140(lVar3);
  local_38 = FUN_1801c8e90(lVar3);
  local_40 = FUN_1801c8e90(lVar3);
  iVar1 = FUN_180198b90(*(undefined8 *)(param_4 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  _Src = (void *)FUN_180195dc0((longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x186);
  if ((local_40 == 0) || (_Src == (void *)0x0)) {
    uVar8 = CONCAT44(uVar6,0x188);
LAB_1801c7c06:
    uVar6 = 0x41;
  }
  else if (iVar1 < param_1) {
    uVar8 = CONCAT44(uVar6,0x192);
    uVar6 = 0x6c;
  }
  else {
    lVar4 = FUN_180198210(param_2,param_1,local_38);
    uVar8 = local_38;
    if (lVar4 == 0) goto LAB_1801c7c20;
    iVar2 = FUN_180198fc0(local_38,*(undefined8 *)(param_4 + 0x18));
    if (iVar2 < 0) {
      if ((*(byte *)(param_4 + 0x74) & 2) != 0) {
        lVar4 = FUN_1801baf30(param_4 + 0x78,*(undefined8 *)(param_4 + 0xa8),
                              *(undefined8 *)(param_4 + 0x18),lVar3);
        if (lVar4 == 0) goto LAB_1801c7c20;
      }
      if ((*(byte *)(param_4 + 0x74) & 0x80) == 0) {
        lVar5 = FUN_1801c8750(param_4,local_48,lVar3);
        if (lVar5 == 0) {
          uVar8 = CONCAT44(uVar6,0x1a8);
          uVar6 = 0x44;
          goto LAB_1801c7c0c;
        }
        if ((local_48[0] == 0) && (local_30 = FUN_1801c8e90(lVar3), local_30 == 0)) {
          uVar8 = CONCAT44(uVar6,0x1af);
          goto LAB_1801c7c06;
        }
        iVar2 = FUN_1801c8670(lVar5,uVar8,local_30,lVar3);
        if (iVar2 == 0) goto LAB_1801c7c20;
      }
      lVar4 = local_40;
      if ((((*(byte *)(param_4 + 0x74) & 0x20) == 0) && (*(int *)(param_4 + 4) != 1)) &&
         (((*(longlong *)(param_4 + 0x30) == 0 ||
           (((*(longlong *)(param_4 + 0x38) == 0 || (*(longlong *)(param_4 + 0x40) == 0)) ||
            (*(longlong *)(param_4 + 0x48) == 0)))) || (*(longlong *)(param_4 + 0x50) == 0)))) {
        lVar4 = FUN_180198b30();
        if (lVar4 == 0) {
          uVar8 = CONCAT44(uVar6,0x1c1);
          goto LAB_1801c7c06;
        }
        if (*(longlong *)(param_4 + 0x28) == 0) {
          FUN_1801a70c0(4,0x65,0xb3,"crypto\\rsa\\rsa_ossl.c",CONCAT44(uVar6,0x1c5));
          FUN_180198910(lVar4);
          goto LAB_1801c7c20;
        }
        FUN_180199020(lVar4,*(longlong *)(param_4 + 0x28),4);
        lVar9 = lVar3;
        iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x30))
                          (local_40,local_38,lVar4,*(undefined8 *)(param_4 + 0x18),lVar3,
                           *(undefined8 *)(param_4 + 0x78));
        uVar6 = (undefined4)((ulonglong)lVar9 >> 0x20);
        FUN_180198910(lVar4);
        if (iVar2 == 0) goto LAB_1801c7c20;
        lVar4 = local_40;
      }
      else {
        iVar2 = (**(code **)(*(longlong *)(param_4 + 8) + 0x28))(local_40,uVar8,param_4,lVar3);
        if (iVar2 == 0) goto LAB_1801c7c20;
      }
      if (lVar5 != 0) {
        iVar2 = FUN_1801c86f0(lVar5,lVar4,local_30,lVar3);
        if (iVar2 == 0) goto LAB_1801c7c20;
      }
      iVar2 = FUN_180198430(lVar4,_Src,iVar1);
      if (param_5 == 1) {
        iVar2 = FUN_1802055a0(param_3,iVar1,_Src,iVar2,CONCAT44(uVar6,iVar1));
      }
      else if (param_5 == 2) {
        iVar2 = FUN_1802068a0(param_3,iVar1,_Src,iVar2,CONCAT44(uVar6,iVar1));
      }
      else if (param_5 == 3) {
        memcpy(param_3,_Src,(longlong)iVar2);
      }
      else {
        if (param_5 != 4) {
          uVar8 = CONCAT44(uVar6,0x1e7);
          uVar6 = 0x76;
          goto LAB_1801c7c0c;
        }
        iVar2 = FUN_180205ff0(param_3,iVar1,_Src,iVar2,CONCAT44(uVar6,iVar1),0,0);
      }
      FUN_1801a70c0(4,0x65,0x72,"crypto\\rsa\\rsa_ossl.c",0x1ea);
      FUN_1801a73b0(0xffffffffU - (iVar2 >> 0x1f) & 1);
      iVar7 = iVar2;
      goto LAB_1801c7c20;
    }
    uVar8 = CONCAT44(uVar6,0x19c);
    uVar6 = 0x84;
  }
LAB_1801c7c0c:
  FUN_1801a70c0(4,0x65,uVar6,"crypto\\rsa\\rsa_ossl.c",uVar8);
LAB_1801c7c20:
  FUN_1801c8d50(lVar3);
  FUN_1801c8dd0(lVar3);
  FUN_180195f20(_Src,(longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x1f0);
  return iVar7;
}



// ===== FUN_1801c7c70 @ 1801c7c70 (size 2367)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801c7c70(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 *local_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong alStack_68 [4];
  undefined8 uStack_48;
  
  uStack_48 = 0x1801c7c87;
  alStack_68[3] = DAT_1803c3d80 ^ (ulonglong)auStack_d8;
  iVar12 = 0;
  local_88 = 0;
  local_a4 = 0;
  iVar2 = 0;
  bVar1 = false;
  local_a0 = param_2;
  FUN_1801c9140(param_4);
  uVar5 = FUN_1801c8e90(param_4);
  local_78 = FUN_1801c8e90(param_4);
  uVar6 = FUN_1801c8e90(param_4);
  local_80 = uVar6;
  local_70 = FUN_1801c8e90(param_4);
  if (local_70 == 0) goto LAB_1801c857f;
  if (*(int *)(param_3 + 4) == 1) {
    iVar2 = FUN_1801958b0(*(undefined8 *)(param_3 + 0x58));
    local_a4 = iVar2;
    if (2 < iVar2 - 1U) goto LAB_1801c857f;
  }
  uVar4 = *(uint *)(param_3 + 0x74);
  if ((uVar4 & 4) != 0) {
    lVar7 = FUN_180198b30();
    if (lVar7 == 0) goto LAB_1801c857f;
    FUN_180199020(lVar7,*(undefined8 *)(param_3 + 0x30),4);
    lVar8 = FUN_1801baf30(param_3 + 0x80,*(undefined8 *)(param_3 + 0xa8),lVar7,param_4);
    if (lVar8 != 0) {
      FUN_180199020(lVar7,*(undefined8 *)(param_3 + 0x38),4);
      lVar8 = FUN_1801baf30(param_3 + 0x88,*(undefined8 *)(param_3 + 0xa8),lVar7,param_4);
      if (lVar8 != 0) {
        if (0 < iVar2) {
          do {
            puVar9 = (undefined8 *)FUN_180195ae0(*(undefined8 *)(param_3 + 0x58),iVar12);
            FUN_180199020(lVar7,*puVar9,4);
            lVar8 = FUN_1801baf30(puVar9 + 4,*(undefined8 *)(param_3 + 0xa8),lVar7,param_4);
            if (lVar8 == 0) goto LAB_1801c846a;
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar2);
        }
        FUN_180198910(lVar7);
        if ((iVar2 == 0) && (*(code **)(*(longlong *)(param_3 + 8) + 0x30) == FUN_1802034a0)) {
          iVar12 = FUN_180198b90(*(undefined8 *)(param_3 + 0x38));
          iVar3 = FUN_180198b90(*(undefined8 *)(param_3 + 0x30));
          if (iVar12 != iVar3) goto LAB_1801c7e33;
          bVar1 = true;
        }
        else {
LAB_1801c7e33:
          bVar1 = false;
        }
        uVar4 = *(uint *)(param_3 + 0x74);
        uVar6 = local_80;
        goto LAB_1801c7e3d;
      }
    }
LAB_1801c846a:
    FUN_180198910(lVar7);
    goto LAB_1801c857f;
  }
LAB_1801c7e3d:
  if (((uVar4 & 2) != 0) &&
     (lVar7 = FUN_1801baf30(param_3 + 0x78,*(undefined8 *)(param_3 + 0xa8),
                            *(undefined8 *)(param_3 + 0x18),param_4), lVar7 == 0))
  goto LAB_1801c857f;
  uVar13 = local_a0;
  if (bVar1) {
    iVar2 = FUN_1801bb140(uVar6,local_a0,*(undefined8 *)(param_3 + 0x88),param_4);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_1801bb760(uVar6,uVar6,*(undefined8 *)(param_3 + 0x88),param_4), iVar2 == 0))
    goto LAB_1801c857f;
    local_b0 = *(undefined8 *)(param_3 + 0x88);
    local_b8 = param_4;
    iVar2 = FUN_180203a40(uVar6,uVar6,*(undefined8 *)(param_3 + 0x48),
                          *(undefined8 *)(param_3 + 0x38));
    if ((iVar2 == 0) ||
       ((iVar2 = FUN_1801bb140(uVar5,uVar13,*(undefined8 *)(param_3 + 0x80),param_4), iVar2 == 0 ||
        (iVar2 = FUN_1801bb760(uVar5,uVar5,*(undefined8 *)(param_3 + 0x80),param_4), iVar2 == 0))))
    goto LAB_1801c857f;
    local_b0 = *(undefined8 *)(param_3 + 0x80);
    local_b8 = param_4;
    iVar2 = FUN_180203a40(uVar5,uVar5,*(undefined8 *)(param_3 + 0x40),
                          *(undefined8 *)(param_3 + 0x30));
    if ((iVar2 == 0) ||
       ((iVar2 = FUN_1802031f0(uVar5,uVar5,uVar6,*(undefined8 *)(param_3 + 0x30)), iVar2 == 0 ||
        (iVar2 = FUN_1801bb760(uVar5,uVar5,*(undefined8 *)(param_3 + 0x80),param_4), iVar2 == 0))))
    goto LAB_1801c857f;
    local_b8 = param_4;
    iVar2 = FUN_1801bb630(uVar5,uVar5,*(undefined8 *)(param_3 + 0x50),
                          *(undefined8 *)(param_3 + 0x80));
    if ((iVar2 == 0) ||
       (iVar2 = FUN_1801c95c0(param_1,uVar5,*(undefined8 *)(param_3 + 0x38),param_4), iVar2 == 0))
    goto LAB_1801c857f;
    iVar2 = FUN_180203000(param_1,param_1,uVar6,*(undefined8 *)(param_3 + 0x18));
    if (iVar2 == 0) goto LAB_1801c857f;
  }
  else {
    lVar7 = FUN_180198b30();
    if (lVar7 == 0) goto LAB_1801c857f;
    FUN_180199020(lVar7,local_a0,4);
    local_b8 = param_4;
    iVar12 = FUN_1801eeff0(0,uVar5,lVar7,*(undefined8 *)(param_3 + 0x38));
    if ((iVar12 == 0) || (lVar8 = FUN_180198b30(), lVar8 == 0)) {
LAB_1801c800e:
      FUN_180198910(lVar7);
      goto LAB_1801c857f;
    }
    FUN_180199020(lVar8,*(undefined8 *)(param_3 + 0x48),4);
    local_b0 = *(undefined8 *)(param_3 + 0x88);
    local_b8 = param_4;
    iVar12 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                       (uVar6,uVar5,lVar8,*(undefined8 *)(param_3 + 0x38));
    if (iVar12 == 0) {
      FUN_180198910(lVar7);
      FUN_180198910(lVar8);
      goto LAB_1801c857f;
    }
    FUN_180198910(lVar8);
    local_b8 = param_4;
    iVar12 = FUN_1801eeff0(0,uVar5,lVar7,*(undefined8 *)(param_3 + 0x30));
    FUN_180198910(lVar7);
    if ((iVar12 == 0) || (lVar7 = FUN_180198b30(), lVar7 == 0)) goto LAB_1801c857f;
    FUN_180199020(lVar7,*(undefined8 *)(param_3 + 0x40),4);
    local_b0 = *(undefined8 *)(param_3 + 0x80);
    local_b8 = param_4;
    iVar12 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                       (param_1,uVar5,lVar7,*(undefined8 *)(param_3 + 0x30));
    FUN_180198910(lVar7);
    if (iVar12 == 0) goto LAB_1801c857f;
    lVar8 = (longlong)iVar2;
    local_90 = lVar8;
    if (0 < iVar2) {
      lVar7 = FUN_180198b30();
      lVar10 = FUN_180198b30();
      if ((lVar10 == 0) || (lVar7 == 0)) {
LAB_1801c8462:
        FUN_180198910(lVar10);
        goto LAB_1801c846a;
      }
      local_a8 = 0;
      if (0 < lVar8) {
        lVar8 = 0;
        do {
          lVar11 = FUN_1801c8e90(param_4);
          alStack_68[lVar8] = lVar11;
          if (lVar11 == 0) goto LAB_1801c8462;
          local_98 = (undefined8 *)FUN_180195ae0(*(undefined8 *)(param_3 + 0x58),local_a8);
          FUN_180199020(lVar10,local_a0,4);
          FUN_180199020(lVar7,local_98[1],4);
          local_b8 = param_4;
          iVar2 = FUN_1801eeff0(0,uVar5,lVar10,*local_98);
          if (iVar2 == 0) goto LAB_1801c8462;
          local_b0 = local_98[4];
          local_b8 = param_4;
          iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))(lVar11,uVar5,lVar7,*local_98);
          if (iVar2 == 0) goto LAB_1801c8462;
          local_a8 = local_a8 + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < local_90);
      }
      FUN_180198910(lVar10);
      FUN_180198910(lVar7);
      uVar6 = local_80;
      iVar2 = local_a4;
    }
    iVar12 = FUN_1801c9300(param_1,param_1,uVar6);
    if ((iVar12 == 0) ||
       ((((iVar12 = FUN_180198a00(param_1), iVar12 != 0 &&
          (iVar12 = FUN_1801c9260(param_1,param_1,*(undefined8 *)(param_3 + 0x30)), iVar12 == 0)) ||
         (iVar12 = FUN_1801c9580(uVar5,param_1,*(undefined8 *)(param_3 + 0x50),param_4), iVar12 == 0
         )) || (lVar7 = FUN_180198b30(), lVar7 == 0)))) goto LAB_1801c857f;
    FUN_180199020(lVar7,uVar5,4);
    local_b8 = param_4;
    iVar12 = FUN_1801eeff0(0,param_1,lVar7,*(undefined8 *)(param_3 + 0x30));
    FUN_180198910(lVar7);
    if ((iVar12 == 0) ||
       (((iVar12 = FUN_180198a00(param_1), iVar12 != 0 &&
         (iVar12 = FUN_1801c9260(param_1,param_1,*(undefined8 *)(param_3 + 0x30)), iVar12 == 0)) ||
        ((iVar12 = FUN_1801c9580(uVar5,param_1,*(undefined8 *)(param_3 + 0x38),param_4), iVar12 == 0
         || (iVar12 = FUN_1801c9260(param_1,uVar5,uVar6), iVar12 == 0)))))) goto LAB_1801c857f;
    if (0 < iVar2) {
      lVar7 = FUN_180198b30();
      if (lVar7 == 0) goto LAB_1801c857f;
      iVar2 = 0;
      if (0 < local_90) {
        lVar8 = 0;
        do {
          puVar9 = (undefined8 *)FUN_180195ae0(*(undefined8 *)(param_3 + 0x58),iVar2);
          iVar12 = FUN_1801c9300(uVar5,alStack_68[lVar8],param_1);
          if ((iVar12 == 0) ||
             (iVar12 = FUN_1801c9580(local_78,uVar5,puVar9[2],param_4), iVar12 == 0))
          goto LAB_1801c800e;
          FUN_180199020(lVar7,local_78,4);
          local_b8 = param_4;
          iVar12 = FUN_1801eeff0(0,uVar5,lVar7,*puVar9);
          if (((iVar12 == 0) ||
              (((iVar12 = FUN_180198a00(uVar5), iVar12 != 0 &&
                (iVar12 = FUN_1801c9260(uVar5,uVar5,*puVar9), iVar12 == 0)) ||
               (iVar12 = FUN_1801c9580(uVar5,uVar5,puVar9[3],param_4), iVar12 == 0)))) ||
             (iVar12 = FUN_1801c9260(param_1,param_1,uVar5), iVar12 == 0)) goto LAB_1801c800e;
          iVar2 = iVar2 + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < local_90);
      }
      FUN_180198910(lVar7);
    }
    uVar13 = local_a0;
  }
  lVar7 = local_70;
  if ((*(longlong *)(param_3 + 0x20) != 0) && (*(longlong *)(param_3 + 0x18) != 0)) {
    if (*(code **)(*(longlong *)(param_3 + 8) + 0x30) == FUN_1802034a0) {
      local_b0 = *(undefined8 *)(param_3 + 0x78);
      local_b8 = param_4;
      iVar2 = FUN_1802034a0(local_70,param_1);
    }
    else {
      FUN_180199370(param_1);
      lVar7 = local_70;
      local_b0 = *(undefined8 *)(param_3 + 0x78);
      local_b8 = param_4;
      iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                        (local_70,param_1,*(undefined8 *)(param_3 + 0x20),
                         *(undefined8 *)(param_3 + 0x18));
    }
    if ((iVar2 == 0) || (iVar2 = FUN_1801c9300(lVar7,lVar7,uVar13), iVar2 == 0)) goto LAB_1801c857f;
    iVar2 = FUN_180198a80(lVar7);
    if (iVar2 == 0) {
      local_b8 = param_4;
      iVar2 = FUN_1801eeff0(0,lVar7,lVar7,*(undefined8 *)(param_3 + 0x18));
      if ((iVar2 == 0) ||
         ((iVar2 = FUN_180198a00(lVar7), iVar2 != 0 &&
          (iVar2 = FUN_1801c9260(lVar7,lVar7,*(undefined8 *)(param_3 + 0x18)), iVar2 == 0))))
      goto LAB_1801c857f;
      iVar2 = FUN_180198a80(lVar7);
      if (iVar2 == 0) {
        lVar7 = FUN_180198b30();
        if (lVar7 == 0) goto LAB_1801c857f;
        FUN_180199020(lVar7,*(undefined8 *)(param_3 + 0x28),4);
        local_b0 = *(undefined8 *)(param_3 + 0x78);
        local_b8 = param_4;
        iVar2 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))
                          (param_1,uVar13,lVar7,*(undefined8 *)(param_3 + 0x18));
        FUN_180198910(lVar7);
        if (iVar2 == 0) goto LAB_1801c857f;
      }
    }
  }
  FUN_180199370(param_1);
  local_88 = CONCAT44(local_88._4_4_,1);
LAB_1801c857f:
  FUN_1801c8d50(param_4);
  return local_88 & 0xffffffff;
}



// ===== FUN_1801c85c0 @ 1801c85c0 (size 131)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c85c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_1801baba0(*(undefined8 *)(param_1 + 0x78));
  FUN_1801baba0(*(undefined8 *)(param_1 + 0x80));
  FUN_1801baba0(*(undefined8 *)(param_1 + 0x88));
  iVar3 = 0;
  iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x58));
  if (0 < iVar1) {
    do {
      lVar2 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x58),iVar3);
      FUN_1801baba0(*(undefined8 *)(lVar2 + 0x20));
      iVar3 = iVar3 + 1;
      iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x58));
    } while (iVar3 < iVar1);
  }
  return 1;
}



// ===== FUN_1801c8670 @ 1801c8670 (size 116)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801c8670(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_3 == 0) {
    uVar2 = FUN_1801c66b0(param_2,0,param_1);
  }
  else {
    FUN_1801c6e20();
    uVar1 = FUN_1801c66b0(param_2,param_3,param_1,param_4);
    uVar2 = (ulonglong)uVar1;
    FUN_1801c6e60(param_1);
  }
  return uVar2;
}



// ===== FUN_1801c86f0 @ 1801c86f0 (size 89)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c86f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180198ef0(param_2,4);
  FUN_1801c6b80(param_2,param_3,param_1,param_4);
  return;
}



// ===== FUN_1801c8750 @ 1801c8750 (size 183)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801c8750(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1801add90(*(undefined8 *)(param_1 + 0xa8));
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (lVar2 == 0) {
    lVar2 = FUN_18019f030(param_1,param_3);
    *(longlong *)(param_1 + 0x98) = lVar2;
    if (lVar2 == 0) goto LAB_1801c87e3;
  }
  iVar1 = FUN_1801c6df0(lVar2);
  if (iVar1 == 0) {
    *param_2 = 0;
    lVar2 = *(longlong *)(param_1 + 0xa0);
    if (lVar2 == 0) {
      lVar2 = FUN_18019f030(param_1,param_3);
      *(longlong *)(param_1 + 0xa0) = lVar2;
    }
  }
  else {
    *param_2 = 1;
  }
LAB_1801c87e3:
  FUN_1801ade50(*(undefined8 *)(param_1 + 0xa8));
  return lVar2;
}



// ===== FUN_1801c8820 @ 1801c8820 (size 122)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_1801c8820(int param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  
  if (param_1 == 0) {
    lVar2 = FUN_18019eb30();
    *param_2 = lVar2;
    return -(lVar2 != 0) & 2;
  }
  if (param_1 == 2) {
    FUN_18019e9c0();
    *param_2 = 0;
    return 2;
  }
  if ((param_1 != 5) || (*(int *)(*param_2 + 4) != 1)) {
    return 1;
  }
  iVar1 = FUN_1801c8b00();
  bVar3 = 0;
  if (iVar1 == 1) {
    bVar3 = 2;
  }
  return bVar3;
}



// ===== FUN_1801c8a40 @ 1801c8a40 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c8a40(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 1;
  }
  uVar1 = FUN_1801ed650(&DAT_1803c9410,FUN_1801c8ae0,param_1,&DAT_18032d1f8,1,0,0x1801c8a4a);
  return uVar1;
}



// ===== FUN_1801c8a90 @ 1801c8a90 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c8a90(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 1;
  }
  uVar1 = FUN_1801ed650(&DAT_1803c9410,FUN_1801c8ae0,param_1,&DAT_18032d1f8,1,1,0x1801c8a9a);
  return uVar1;
}



// ===== FUN_1801c8b00 @ 1801c8b00 (size 234)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c8b00(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = 0;
  lVar3 = 0;
  iVar1 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x58));
  if ((0 < iVar1) && (lVar3 = FUN_1801c9050(), lVar3 != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    iVar8 = 0;
    if (0 < iVar1) {
      do {
        puVar4 = (undefined8 *)FUN_180195ae0(*(undefined8 *)(param_1 + 0x58),iVar8);
        lVar5 = puVar4[3];
        if (lVar5 == 0) {
          lVar5 = FUN_180198d60();
          puVar4[3] = lVar5;
          if (lVar5 == 0) goto LAB_1801c8bd2;
        }
        iVar2 = FUN_1801c9580(lVar5,uVar7,uVar6,lVar3);
        if (iVar2 == 0) goto LAB_1801c8bd2;
        uVar7 = puVar4[3];
        iVar8 = iVar8 + 1;
        uVar6 = *puVar4;
      } while (iVar8 < iVar1);
    }
    uVar9 = 1;
  }
LAB_1801c8bd2:
  FUN_1801c8dd0(lVar3);
  return uVar9;
}



// ===== FUN_1801c8c20 @ 1801c8c20 (size 79)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c8c20(undefined8 *param_1)

{
  FUN_1801984d0(*param_1);
  FUN_1801984d0(param_1[1]);
  FUN_1801984d0(param_1[2]);
  FUN_1801984d0(param_1[3]);
  FUN_180195e10(param_1,"crypto\\rsa\\rsa_mp.c",0x13);
  return;
}



// ===== FUN_1801c8c70 @ 1801c8c70 (size 210)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801c8c70(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801c8c7c;
  plVar1 = (longlong *)FUN_180196100(0x28,"crypto\\rsa\\rsa_mp.c",0x24);
  if (plVar1 == (longlong *)0x0) {
    FUN_1801a70c0(4,0xa6,0x41,"crypto\\rsa\\rsa_mp.c",0x25,uVar3);
    return (longlong *)0x0;
  }
  lVar2 = FUN_180198d60();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_180198d60();
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_180198d60();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_180198d60();
        plVar1[3] = lVar2;
        if (lVar2 != 0) {
          return plVar1;
        }
      }
    }
  }
  FUN_180198910(*plVar1);
  FUN_180198910(plVar1[1]);
  FUN_180198910(plVar1[2]);
  FUN_180198910(plVar1[3]);
  FUN_180195e10(plVar1,"crypto\\rsa\\rsa_mp.c",0x38);
  return (longlong *)0x0;
}



// ===== FUN_1801c8d50 @ 1801c8d50 (size 120)

void FUN_1801c8d50(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      return;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 4);
    if (uVar1 < *(uint *)(param_1 + 0x30)) {
      iVar3 = *(uint *)(param_1 + 0x30) - uVar1;
      uVar2 = *(int *)(param_1 + 0x18) - 1U & 0xf;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar3;
      while (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        if (uVar2 == 0) {
          uVar2 = 0xf;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x180);
        }
        else {
          uVar2 = uVar2 - 1;
        }
      }
    }
    *(uint *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



// ===== FUN_1801c8dd0 @ 1801c8dd0 (size 190)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c8dd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    FUN_180195e10(param_1[4],"crypto\\bn\\bn_ctx.c",0xfb);
    param_1[4] = 0;
    plVar1 = (longlong *)*param_1;
    while (plVar1 != (longlong *)0x0) {
      lVar2 = 0x10;
      do {
        if (*plVar1 != 0) {
          FUN_1801984d0(plVar1);
        }
        plVar1 = plVar1 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      param_1[1] = *(longlong *)(*param_1 + 0x188);
      FUN_180195e10(*param_1,"crypto\\bn\\bn_ctx.c",0x12f);
      plVar1 = (longlong *)param_1[1];
      *param_1 = (longlong)plVar1;
    }
    FUN_180195e10(param_1,"crypto\\bn\\bn_ctx.c",0xb2);
  }
  return;
}



// ===== FUN_1801c8e90 @ 1801c8e90 (size 444)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801c8e90(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801c8e9c;
  if ((*(int *)((longlong)param_1 + 0x34) != 0) || ((int)param_1[7] != 0)) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 3);
  uVar2 = *(uint *)((longlong)param_1 + 0x3c);
  if (uVar1 == *(uint *)((longlong)param_1 + 0x1c)) {
    lVar3 = FUN_180195dc0(400,"crypto\\bn\\bn_ctx.c");
    if (lVar3 == 0) {
      FUN_1801a70c0(3,0x93,0x41,"crypto\\bn\\bn_ctx.c",0x13f,uVar6);
      goto LAB_1801c8fe7;
    }
    lVar4 = 0x10;
    lVar5 = lVar3;
    do {
      FUN_180199560(lVar5);
      if ((uVar2 & 8) != 0) {
        FUN_180198ef0(lVar5,8);
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar5 = param_1[2];
    *(undefined8 *)(lVar3 + 0x188) = 0;
    *(longlong *)(lVar3 + 0x180) = lVar5;
    if (*param_1 == 0) {
      *param_1 = lVar3;
      param_1[2] = lVar3;
      param_1[1] = lVar3;
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 0x10;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      *(longlong *)(param_1[2] + 0x188) = lVar3;
      param_1[2] = lVar3;
      param_1[1] = lVar3;
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 0x10;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
  }
  else {
    if (uVar1 == 0) {
      param_1[1] = *param_1;
    }
    else if ((uVar1 & 0xf) == 0) {
      param_1[1] = *(longlong *)(param_1[1] + 0x188);
    }
    lVar3 = param_1[1] + (ulonglong)(uVar1 & 0xf) * 0x18;
    *(uint *)(param_1 + 3) = uVar1 + 1;
  }
  if (lVar3 != 0) {
    FUN_180198f20(lVar3,0);
    *(uint *)(lVar3 + 0x14) = *(uint *)(lVar3 + 0x14) & 0xfffffffb;
    *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    return lVar3;
  }
LAB_1801c8fe7:
  *(undefined4 *)(param_1 + 7) = 1;
  FUN_1801a70c0(3,0x74,0x6d,"crypto\\bn\\bn_ctx.c",0xe3,uVar6);
  return 0;
}



// ===== FUN_1801c9050 @ 1801c9050 (size 104)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1801c9050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180196100(0x40,"crypto\\bn\\bn_ctx.c",0x8a);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1801a70c0(3,0x6a,0x41,"crypto\\bn\\bn_ctx.c",0x8b);
    return (undefined8 *)0x0;
  }
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar1;
}



// ===== FUN_1801c90c0 @ 1801c90c0 (size 113)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1801c90c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180196100(0x40,"crypto\\bn\\bn_ctx.c",0x8a);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1801a70c0(3,0x6a,0x41,"crypto\\bn\\bn_ctx.c",0x8b);
    return (undefined8 *)0x0;
  }
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 8;
  return puVar1;
}



// ===== FUN_1801c9140 @ 1801c9140 (size 285)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c9140(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *_Dst;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801c914c;
  if ((*(int *)(param_1 + 0x34) != 0) || (*(int *)(param_1 + 0x38) != 0)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x28) == iVar1) {
    if (iVar1 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = (uint)(iVar1 * 3) >> 1;
    }
    _Dst = (void *)FUN_180195dc0((ulonglong)uVar3 << 2,"crypto\\bn\\bn_ctx.c",0x108);
    if (_Dst == (void *)0x0) {
      FUN_1801a70c0(3,0x94,0x41,"crypto\\bn\\bn_ctx.c",0x109,uVar4);
      FUN_1801a70c0(3,0x81,0x6d,"crypto\\bn\\bn_ctx.c",0xbd);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      return;
    }
    if (*(uint *)(param_1 + 0x28) != 0) {
      memcpy(_Dst,*(void **)(param_1 + 0x20),(ulonglong)*(uint *)(param_1 + 0x28) << 2);
    }
    FUN_180195e10(*(undefined8 *)(param_1 + 0x20),"crypto\\bn\\bn_ctx.c",0x10e);
    *(void **)(param_1 + 0x20) = _Dst;
    *(uint *)(param_1 + 0x2c) = uVar3;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 4) = uVar2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}



// ===== FUN_1801c9260 @ 1801c9260 (size 155)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c9260(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == *(int *)(param_3 + 0x10)) {
    uVar3 = FUN_1801c93a0();
    *(int *)(param_1 + 0x10) = iVar2;
  }
  else {
    iVar2 = FUN_180198fc0(param_2,param_3);
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        uVar1 = *(undefined4 *)(param_3 + 0x10);
        uVar3 = FUN_1801c9470(param_1,param_3,param_2);
        *(undefined4 *)(param_1 + 0x10) = uVar1;
      }
      else {
        FUN_180198f20(param_1,0);
        uVar3 = 1;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      uVar3 = FUN_1801c9470(param_1,param_2,param_3);
      *(undefined4 *)(param_1 + 0x10) = uVar1;
    }
  }
  return uVar3;
}



// ===== FUN_1801c9300 @ 1801c9300 (size 147)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c9300(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  if (uVar3 == *(uint *)(param_3 + 0x10)) {
    iVar1 = FUN_180198fc0(param_2,param_3);
    if (iVar1 < 1) {
      if (iVar1 < 0) {
        uVar3 = (uint)(*(int *)(param_3 + 0x10) == 0);
        uVar2 = FUN_1801c9470(param_1,param_3,param_2);
      }
      else {
        uVar3 = 0;
        FUN_180198f20(param_1,0);
        uVar2 = 1;
      }
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x10);
      uVar2 = FUN_1801c9470(param_1,param_2,param_3);
    }
  }
  else {
    uVar2 = FUN_1801c93a0();
  }
  *(uint *)(param_1 + 0x10) = uVar3;
  return uVar2;
}



// ===== FUN_1801c93a0 @ 1801c93a0 (size 207)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c93a0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  int iVar8;
  longlong *plVar9;
  
  plVar9 = param_2;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar9 = param_3;
    param_3 = param_2;
  }
  iVar1 = (int)param_3[1];
  iVar2 = (int)plVar9[1];
  iVar8 = iVar1 - iVar2;
  lVar4 = FUN_180199580(param_1,iVar1 + 1);
  uVar6 = 0;
  if (lVar4 != 0) {
    *(int *)(param_1 + 1) = iVar1;
    lVar4 = *param_3;
    lVar3 = *param_1;
    uVar5 = FUN_1801efb80(lVar3,lVar4,*plVar9,iVar2);
    puVar7 = (ulonglong *)(lVar3 + (longlong)iVar2 * 8);
    plVar9 = (longlong *)(lVar4 + (longlong)iVar2 * 8);
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      lVar4 = *plVar9;
      plVar9 = plVar9 + 1;
      *puVar7 = lVar4 + uVar5;
      puVar7 = puVar7 + 1;
      uVar5 = uVar5 & lVar4 + uVar5 == 0;
    }
    *puVar7 = uVar5;
    uVar6 = 1;
    *(int *)(param_1 + 1) = (int)param_1[1] + (int)uVar5;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return uVar6;
}



// ===== FUN_1801c9470 @ 1801c9470 (size 272)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801c9470(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  
  iVar7 = (int)param_2[1];
  iVar1 = *(int *)(param_3 + 1);
  iVar6 = iVar7 - iVar1;
  if (iVar6 < 0) {
    FUN_1801a70c0(3,0x73,100,"crypto\\bn\\bn_add.c",0x8b,0x1801c948f);
  }
  else {
    lVar3 = FUN_180199580(param_1,iVar7);
    if (lVar3 != 0) {
      lVar3 = *param_2;
      lVar2 = *param_1;
      uVar4 = FUN_1801f12c0(lVar2,lVar3,*param_3,iVar1);
      plVar8 = (longlong *)(lVar3 + (longlong)iVar1 * 8);
      plVar5 = (longlong *)(lVar2 + (longlong)iVar1 * 8);
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        lVar3 = *plVar8;
        plVar8 = plVar8 + 1;
        *plVar5 = lVar3 - uVar4;
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 & lVar3 == 0;
      }
      while ((iVar7 != 0 && (plVar8 = plVar5 + -1, plVar5 = plVar5 + -1, *plVar8 == 0))) {
        iVar7 = iVar7 + -1;
      }
      *(int *)(param_1 + 1) = iVar7;
      *(undefined4 *)(param_1 + 2) = 0;
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801c95c0 @ 1801c95c0 (size 649)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801c95c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_2 + 1);
  cVar3 = '\0';
  iVar2 = *(int *)(param_3 + 1);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    FUN_180198f20(param_1,0);
    return 1;
  }
  iVar4 = iVar2 + iVar1;
  FUN_1801c9140(param_4);
  if ((param_1 == param_2) || (param_1 == param_3)) {
    puVar5 = (undefined8 *)FUN_1801c8e90(param_4);
    if (puVar5 != (undefined8 *)0x0) goto LAB_1801c9641;
  }
  else {
    puVar5 = param_1;
LAB_1801c9641:
    iVar9 = iVar1 - iVar2;
    if ((iVar9 == 0) && (iVar1 == 8)) {
      lVar6 = FUN_180199580(puVar5,0x10);
      if (lVar6 != 0) {
        *(undefined4 *)(puVar5 + 1) = 0x10;
        FUN_1801f01c0(*puVar5,*param_2,*param_3);
LAB_1801c97dc:
        *(uint *)(puVar5 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2);
        if (param_1 != puVar5) {
          lVar6 = FUN_180198770(param_1,puVar5);
          if (lVar6 == 0) goto LAB_1801c9804;
        }
        uVar8 = 1;
        goto LAB_1801c9806;
      }
    }
    else if ((iVar1 < 0x10) || ((iVar2 < 0x10 || (2 < iVar9 + 1U)))) {
      lVar6 = FUN_180199580(puVar5,iVar4);
      if (lVar6 != 0) {
        *(int *)(puVar5 + 1) = iVar4;
        FUN_1801c9850(*puVar5,*param_2,iVar1,*param_3,iVar2);
        goto LAB_1801c97dc;
      }
    }
    else {
      if (-1 < iVar9) {
        cVar3 = FUN_180198c80((longlong)iVar1);
      }
      if (iVar9 == -1) {
        cVar3 = FUN_180198c80((longlong)iVar2);
      }
      iVar9 = 1 << (cVar3 - 1U & 0x1f);
      puVar7 = (undefined8 *)FUN_1801c8e90(param_4);
      if (puVar7 != (undefined8 *)0x0) {
        if ((iVar9 < iVar1) || (iVar9 < iVar2)) {
          lVar6 = FUN_180199580(puVar7,iVar9 * 8);
          if (lVar6 != 0) {
            lVar6 = FUN_180199580(puVar5,iVar9 * 8);
            if (lVar6 != 0) {
              FUN_1801c9980(*puVar5,*param_2,*param_3,iVar9,iVar1 - iVar9,iVar2 - iVar9,*puVar7);
              *(int *)(puVar5 + 1) = iVar4;
              goto LAB_1801c97dc;
            }
          }
        }
        else {
          lVar6 = FUN_180199580(puVar7,iVar9 * 4);
          if (lVar6 != 0) {
            lVar6 = FUN_180199580(puVar5,iVar9 * 4);
            if (lVar6 != 0) {
              FUN_1801c9ee0(*puVar5,*param_2,*param_3,iVar9,iVar1 - iVar9,iVar2 - iVar9,*puVar7);
              *(int *)(puVar5 + 1) = iVar4;
              goto LAB_1801c97dc;
            }
          }
        }
      }
    }
  }
LAB_1801c9804:
  uVar8 = 0;
LAB_1801c9806:
  FUN_1801c8d50(param_4);
  return uVar8;
}



// ===== FUN_1801c9850 @ 1801c9850 (size 294)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c9850(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_2;
  iVar1 = param_5;
  if (param_5 <= param_3) {
    puVar3 = param_4;
    iVar1 = param_3;
    param_4 = param_2;
    param_3 = param_5;
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 8 + param_1);
  if (param_3 < 1) {
    FUN_1801f08e0(param_1,param_4,iVar1,0);
  }
  else {
    uVar2 = FUN_1801f08e0(param_1,param_4,iVar1,*puVar3);
    param_3 = param_3 + -1;
    *puVar4 = uVar2;
    if (0 < param_3) {
      puVar4 = puVar4 + 2;
      puVar3 = puVar3 + 2;
      param_1 = param_1 + 0x10;
      do {
        uVar2 = FUN_1801efe50(param_1 + -8,param_4,iVar1,puVar3[-1]);
        puVar4[-1] = uVar2;
        if (param_3 + -1 < 1) {
          return;
        }
        uVar2 = FUN_1801efe50(param_1,param_4,iVar1,*puVar3);
        *puVar4 = uVar2;
        if (param_3 + -2 < 1) {
          return;
        }
        uVar2 = FUN_1801efe50(param_1 + 8,param_4,iVar1,puVar3[1]);
        puVar4[1] = uVar2;
        if (param_3 + -3 < 1) {
          return;
        }
        uVar2 = FUN_1801efe50(param_1 + 0x10,param_4,iVar1,puVar3[2]);
        puVar4[2] = uVar2;
        puVar3 = puVar3 + 4;
        puVar4 = puVar4 + 4;
        param_1 = param_1 + 0x20;
        param_3 = param_3 + -4;
      } while (0 < param_3);
    }
  }
  return;
}



// ===== FUN_1801c9980 @ 1801c9980 (size 1329)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c9980(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6,longlong param_7)

{
  ulonglong *puVar1;
  longlong lVar2;
  size_t _Size;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  void *_Dst;
  longlong lVar10;
  ulonglong *puVar11;
  
  iVar6 = param_4 * 2;
  if (param_4 < 8) {
    FUN_1801c9850(param_1,param_2,param_4 + param_5,param_3);
    return;
  }
  iVar7 = param_4 - param_5;
  lVar2 = (longlong)param_4 * 8;
  iVar4 = FUN_180199230(param_2,param_2 + lVar2,param_5,iVar7);
  bVar3 = false;
  iVar8 = param_6 - param_4;
  iVar5 = FUN_180199230(lVar2 + param_3,param_3,param_6,iVar8);
  switch(iVar4 * 3 + 4 + iVar5) {
  case 0:
    FUN_1801ca410(param_7,lVar2 + param_2,param_2,param_5,param_5 - param_4);
    FUN_1801ca410(lVar2 + param_7,param_3,lVar2 + param_3,param_6,param_4 - param_6);
    break;
  case 1:
  case 2:
    FUN_1801ca410(param_7,lVar2 + param_2,param_2,param_5,param_5 - param_4);
    FUN_1801ca410(lVar2 + param_7,lVar2 + param_3,param_3,param_6,iVar8);
    bVar3 = true;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    FUN_1801ca410(param_7,param_2,lVar2 + param_2,param_5,iVar7);
    FUN_1801ca410(lVar2 + param_7,param_3,lVar2 + param_3,param_6,param_4 - param_6);
    bVar3 = true;
    break;
  case 7:
  case 8:
    FUN_1801ca410(param_7,param_2,lVar2 + param_2,param_5,iVar7);
    FUN_1801ca410(lVar2 + param_7,lVar2 + param_3,param_3,param_6,iVar8);
  }
  _Size = (longlong)iVar6 * 8;
  if (param_4 == 8) {
    FUN_1801f01c0(_Size + param_7);
    FUN_1801f01c0(param_1,param_2,param_3);
    FUN_1801c9850(param_1 + 0x80,param_2 + 0x40,param_5,param_3 + 0x40,param_6);
    memset((void *)(param_1 + (longlong)(param_5 + 0x10 + param_6) * 8),0,
           (longlong)((0x10 - param_5) - param_6) << 3);
  }
  else {
    lVar10 = param_7 + (longlong)(param_4 << 2) * 8;
    FUN_1801c9ee0(_Size + param_7,param_7,lVar2 + param_7,param_4,0,0,lVar10);
    FUN_1801c9ee0(param_1,param_2,param_3,param_4,0,0,lVar10);
    iVar4 = param_4 / 2;
    iVar8 = param_6 - iVar4;
    iVar7 = param_5 - iVar4;
    iVar5 = iVar7;
    if (param_5 <= param_6) {
      iVar5 = iVar8;
    }
    _Dst = (void *)(param_1 + _Size);
    if (iVar5 == 0) {
      FUN_1801c9ee0(_Dst,lVar2 + param_2,lVar2 + param_3,iVar4,iVar7,iVar8,lVar10);
      memset((void *)(param_1 + (longlong)(iVar4 * 2 + iVar6) * 8),0,
             (longlong)(iVar6 + iVar4 * -2) << 3);
    }
    else if (iVar5 < 1) {
      memset(_Dst,0,_Size);
      if ((param_5 < 0x10) && (param_6 < 0x10)) {
        FUN_1801c9850(_Dst,lVar2 + param_2,param_5,lVar2 + param_3,param_6);
      }
      else {
        do {
          iVar4 = iVar4 / 2;
          if ((iVar4 < param_5) || (iVar4 < param_6)) {
            FUN_1801c9980(_Dst,lVar2 + param_2,lVar2 + param_3,iVar4,param_5 - iVar4,param_6 - iVar4
                          ,lVar10);
            goto LAB_1801c9ddb;
          }
        } while ((iVar4 != param_5) && (iVar4 != param_6));
        FUN_1801c9ee0(_Dst,lVar2 + param_2,lVar2 + param_3,iVar4,param_5 - iVar4,param_6 - iVar4,
                      lVar10);
      }
    }
    else {
      FUN_1801c9980(_Dst,lVar2 + param_2,lVar2 + param_3,iVar4,iVar7,iVar8,lVar10);
      memset((void *)(param_1 + (longlong)(iVar6 + param_5 + param_6) * 8),0,
             (longlong)((iVar6 - param_5) - param_6) << 3);
    }
  }
LAB_1801c9ddb:
  iVar4 = FUN_1801efb80(param_7,param_1,param_1 + _Size,iVar6);
  lVar10 = _Size + param_7;
  if (bVar3) {
    iVar5 = FUN_1801f12c0(lVar10,param_7,lVar10);
    iVar5 = -iVar5;
  }
  else {
    iVar5 = FUN_1801efb80(lVar10,lVar10,param_7,iVar6);
  }
  iVar6 = FUN_1801efb80(lVar2 + param_1,lVar2 + param_1,lVar10,iVar6);
  iVar6 = iVar4 + iVar5 + iVar6;
  if (iVar6 != 0) {
    puVar11 = (ulonglong *)(param_1 + (longlong)(param_4 * 3) * 8);
    uVar9 = *(longlong *)(param_1 + (longlong)(param_4 * 3) * 8) + (longlong)iVar6;
    *puVar11 = uVar9;
    if (uVar9 < (ulonglong)(longlong)iVar6) {
      do {
        puVar1 = puVar11 + 1;
        *puVar1 = *puVar1 + 1;
        puVar11 = puVar11 + 1;
      } while (*puVar1 == 0);
    }
  }
  return;
}



// ===== FUN_1801c9ee0 @ 1801c9ee0 (size 1285)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c9ee0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6,longlong param_7)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong *puVar17;
  
  lVar16 = (longlong)param_4;
  iVar8 = param_4 / 2;
  if (param_4 == 8) {
    if ((param_5 == 0) && (param_6 == 0)) {
      FUN_1801f01c0(param_1,param_2);
      return;
    }
LAB_1801c9f60:
    FUN_1801c9850(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
    if (param_5 + param_6 < 0) {
      memset((void *)(param_1 + (longlong)(param_5 + param_4 * 2 + param_6) * 8),0,
             (longlong)-(param_5 + param_6) << 3);
      return;
    }
    return;
  }
  if (param_4 < 0x10) goto LAB_1801c9f60;
  iVar14 = iVar8 - (param_5 + iVar8);
  lVar5 = (longlong)iVar8 * 8;
  lVar11 = lVar5 + param_2;
  iVar9 = FUN_180199230(param_2,lVar11,param_5 + iVar8,iVar14);
  bVar7 = false;
  bVar6 = false;
  lVar12 = lVar5 + param_3;
  iVar10 = FUN_180199230(lVar12,param_3,iVar8 + param_6,param_6);
  switch(iVar9 * 3 + 4 + iVar10) {
  case 0:
    FUN_1801ca410(param_7,lVar11,param_2,param_5 + iVar8,param_5);
    FUN_1801ca410(lVar5 + param_7,param_3,lVar12,iVar8 + param_6,iVar8 - (iVar8 + param_6));
    break;
  case 1:
  case 3:
  case 4:
  case 5:
  case 7:
    bVar6 = true;
    break;
  case 2:
    FUN_1801ca410(param_7,lVar11,param_2,param_5 + iVar8,param_5);
    FUN_1801ca410(lVar5 + param_7,lVar12,param_3,iVar8 + param_6,param_6);
    bVar7 = true;
    break;
  case 6:
    FUN_1801ca410(param_7,param_2,lVar11,param_5 + iVar8,iVar14);
    FUN_1801ca410(lVar5 + param_7,param_3,lVar12,iVar8 + param_6,iVar8 - (iVar8 + param_6));
    bVar7 = true;
    break;
  case 8:
    FUN_1801ca410(param_7,param_2,lVar11,param_5 + iVar8,iVar14);
    FUN_1801ca410(lVar5 + param_7,lVar12,param_3,iVar8 + param_6,param_6);
  }
  if (iVar8 == 4) {
    if ((param_5 == 0) && (param_6 == 0)) {
      puVar2 = (undefined8 *)(lVar16 * 8 + param_7);
      if (bVar6) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
      }
      else {
        FUN_1801effb0(puVar2,param_7,param_7 + 0x20);
      }
      FUN_1801effb0(param_1,param_2,param_3);
      lVar15 = lVar16 * 8 + param_1;
      FUN_1801effb0(lVar15,lVar11,lVar12);
      goto LAB_1801ca347;
    }
  }
  else if (((iVar8 == 8) && (param_5 == 0)) && (param_6 == 0)) {
    pvVar3 = (void *)(lVar16 * 8 + param_7);
    if (bVar6) {
      memset(pvVar3,0,0x80);
    }
    else {
      FUN_1801f01c0(pvVar3,param_7,param_7 + 0x40);
    }
    FUN_1801f01c0(param_1,param_2,param_3);
    lVar15 = lVar16 * 8 + param_1;
    FUN_1801f01c0(lVar15,lVar11,lVar12);
    goto LAB_1801ca347;
  }
  pvVar3 = (void *)(lVar16 * 8 + param_7);
  lVar4 = param_7 + (longlong)(param_4 * 2) * 8;
  if (bVar6) {
    memset(pvVar3,0,lVar16 * 8);
  }
  else {
    FUN_1801c9ee0(pvVar3,param_7,lVar5 + param_7,iVar8,0,0,lVar4);
  }
  FUN_1801c9ee0(param_1,param_2,param_3,iVar8,0,0,lVar4);
  lVar15 = lVar16 * 8 + param_1;
  FUN_1801c9ee0(lVar15,lVar11,lVar12,iVar8,param_5,param_6,lVar4);
LAB_1801ca347:
  iVar9 = FUN_1801efb80(param_7,param_1,lVar15,param_4);
  lVar16 = lVar16 * 8 + param_7;
  if (bVar7) {
    iVar10 = FUN_1801f12c0(lVar16,param_7,lVar16);
    iVar10 = -iVar10;
  }
  else {
    iVar10 = FUN_1801efb80(lVar16,lVar16,param_7,param_4);
  }
  iVar14 = FUN_1801efb80(lVar5 + param_1,lVar5 + param_1,lVar16,param_4);
  iVar14 = iVar9 + iVar10 + iVar14;
  if (iVar14 == 0) {
    return;
  }
  puVar17 = (ulonglong *)(param_1 + (longlong)(param_4 + iVar8) * 8);
  uVar13 = *(longlong *)(param_1 + (longlong)(param_4 + iVar8) * 8) + (longlong)iVar14;
  *puVar17 = uVar13;
  if ((ulonglong)(longlong)iVar14 <= uVar13) {
    return;
  }
  do {
    puVar1 = puVar17 + 1;
    *puVar1 = *puVar1 + 1;
    puVar17 = puVar17 + 1;
  } while (*puVar1 == 0);
  return;
}



// ===== FUN_1801ca410 @ 1801ca410 (size 543)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801ca410(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar1 = FUN_1801f12c0();
  if (param_5 != 0) {
    lVar2 = (longlong)param_4 * 8;
    plVar5 = (longlong *)(param_1 + lVar2);
    plVar7 = (longlong *)(param_2 + lVar2);
    plVar6 = (longlong *)(param_3 + lVar2);
    if (param_5 < 0) {
      while( true ) {
        lVar2 = *plVar6;
        *plVar5 = -(lVar2 + lVar1);
        if (lVar2 != 0) {
          lVar1 = 1;
        }
        if (-1 < param_5 + 1) break;
        lVar2 = plVar6[1];
        plVar5[1] = -(lVar2 + lVar1);
        if (lVar2 != 0) {
          lVar1 = 1;
        }
        if (-1 < param_5 + 2) break;
        lVar2 = plVar6[2];
        plVar5[2] = -(lVar2 + lVar1);
        if (lVar2 != 0) {
          lVar1 = 1;
        }
        if (-1 < param_5 + 3) break;
        lVar2 = plVar6[3];
        plVar5[3] = -(lVar2 + lVar1);
        if (lVar2 != 0) {
          lVar1 = 1;
        }
        param_5 = param_5 + 4;
        if (-1 < param_5) break;
        plVar6 = plVar6 + 4;
        plVar5 = plVar5 + 4;
      }
    }
    else {
      while (lVar1 != 0) {
        lVar2 = *plVar7;
        *plVar5 = lVar2 - lVar1;
        lVar3 = 0;
        if (lVar2 == 0) {
          lVar3 = lVar1;
        }
        lVar1 = lVar3;
        if (param_5 + -1 < 1) goto LAB_1801ca61a;
        lVar2 = plVar7[1];
        plVar5[1] = lVar2 - lVar3;
        lVar1 = 0;
        if (lVar2 == 0) {
          lVar1 = lVar3;
        }
        if (param_5 + -2 < 1) goto LAB_1801ca61a;
        lVar2 = plVar7[2];
        plVar5[2] = lVar2 - lVar1;
        lVar3 = 0;
        if (lVar2 == 0) {
          lVar3 = lVar1;
        }
        lVar1 = lVar3;
        if (param_5 + -3 < 1) goto LAB_1801ca61a;
        lVar2 = plVar7[3];
        plVar5[3] = lVar2 - lVar3;
        lVar1 = 0;
        if (lVar2 == 0) {
          lVar1 = lVar3;
        }
        param_5 = param_5 + -4;
        if (param_5 < 1) goto LAB_1801ca61a;
        plVar7 = plVar7 + 4;
        plVar5 = plVar5 + 4;
      }
      if (0 < param_5) {
        param_5 = param_5 + -1;
        *plVar5 = *plVar7;
        if (0 < param_5) {
          plVar6 = plVar7 + 2;
          plVar4 = plVar5 + 2;
          do {
            plVar4[-1] = plVar6[-1];
            if (((param_5 + -1 < 1) || (*plVar4 = *plVar6, param_5 + -2 < 1)) ||
               (plVar4[1] = plVar6[1], param_5 + -3 < 1)) break;
            plVar6 = plVar6 + 4;
            param_5 = param_5 + -4;
            plVar4[2] = *(longlong *)
                         ((longlong)plVar4 + (longlong)plVar7 + (0x10 - (longlong)plVar5));
            plVar4 = plVar4 + 4;
          } while (0 < param_5);
        }
      }
    }
  }
LAB_1801ca61a:
  return lVar1;
}



// ===== FUN_1801ca630 @ 1801ca630 (size 786)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1801ca630(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  uint local_38;
  
  bVar12 = false;
  local_38 = 1;
  uVar8 = 1;
  iVar9 = 0;
  iVar1 = FUN_180198a80(param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_180198a80(param_2);
    if (iVar1 == 0) {
      FUN_1801c9140(param_4);
      uVar3 = FUN_1801c8e90(param_4);
      plVar4 = (longlong *)FUN_1801c8e90(param_4);
      if (((plVar4 != (longlong *)0x0) && (iVar1 = FUN_1801eea50(plVar4,param_3), iVar1 != 0)) &&
         (iVar1 = FUN_1801eea50(param_1,param_2), iVar1 != 0)) {
        iVar1 = 0;
        if (0 < *(int *)((longlong)param_1 + 0xc)) {
          lVar2 = 0;
          do {
            if (*(int *)((longlong)plVar4 + 0xc) <= lVar2) break;
            iVar10 = 0;
            lVar11 = 0x10;
            iVar7 = 0;
            iVar6 = 0;
            uVar5 = ~(*(ulonglong *)(*param_1 + lVar2 * 8) | *(ulonglong *)(*plVar4 + lVar2 * 8));
            do {
              uVar8 = uVar8 & (uint)uVar5;
              iVar9 = iVar9 + uVar8;
              uVar8 = uVar8 & (uint)(uVar5 >> 1);
              iVar10 = iVar10 + uVar8;
              uVar8 = uVar8 & (uint)(uVar5 >> 2);
              iVar7 = iVar7 + uVar8;
              uVar8 = uVar8 & (uint)(uVar5 >> 3);
              iVar6 = iVar6 + uVar8;
              uVar5 = uVar5 >> 4;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            iVar1 = iVar1 + 1;
            lVar2 = lVar2 + 1;
            iVar9 = iVar9 + iVar6 + iVar7 + iVar10;
          } while (iVar1 < *(int *)((longlong)param_1 + 0xc));
        }
        iVar1 = FUN_1801eeb00(param_1,param_1,iVar9);
        if ((iVar1 != 0) && (iVar1 = FUN_1801eeb00(plVar4,plVar4,iVar9), iVar1 != 0)) {
          iVar1 = (int)param_1[1];
          if ((int)param_1[1] < (int)plVar4[1]) {
            iVar1 = (int)plVar4[1];
          }
          iVar1 = iVar1 + 1;
          lVar2 = FUN_180199580(param_1,iVar1);
          if (((lVar2 != 0) && (lVar2 = FUN_180199580(plVar4,iVar1), lVar2 != 0)) &&
             (lVar2 = FUN_180199580(uVar3,iVar1), lVar2 != 0)) {
            FUN_1801985e0(~(uint)*(undefined8 *)*param_1 & 1,param_1,plVar4,iVar1);
            iVar7 = FUN_180198b90(param_1);
            iVar6 = FUN_180198b90(plVar4);
            iVar10 = 0;
            if (iVar6 <= iVar7) {
              iVar6 = iVar7;
            }
            iVar6 = iVar6 * 3 + 4;
            if (0 < iVar6) {
              do {
                uVar8 = ~((int)plVar4[1] + -1 >> 0x1f) & (int)-local_38 >> 0x1f & *(uint *)*plVar4 &
                        1;
                *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) ^ uVar8;
                FUN_1801985e0(uVar8,param_1,plVar4,iVar1);
                local_38 = (-uVar8 & -local_38 | uVar8 - 1 & local_38) + 1;
                iVar7 = FUN_1801c9260(uVar3,plVar4,param_1);
                if (iVar7 == 0) goto LAB_1801ca91f;
                FUN_1801985e0((ulonglong)(~((int)plVar4[1] + -1 >> 0x1f) & 1) &
                              *(ulonglong *)*plVar4,plVar4,uVar3,iVar1);
                iVar7 = FUN_1801eec70(plVar4,plVar4);
                if (iVar7 == 0) goto LAB_1801ca91f;
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar6);
            }
            *(undefined4 *)(param_1 + 2) = 0;
            iVar1 = FUN_1801ee8d0(param_1,param_1,iVar9);
            if (iVar1 != 0) {
              iVar1 = FUN_1801eec70(param_1,param_1);
              bVar12 = false;
              if (iVar1 != 0) {
                bVar12 = true;
              }
            }
          }
        }
      }
LAB_1801ca91f:
      FUN_1801c8d50(param_4);
    }
    else {
      lVar2 = FUN_180198770(param_1,param_3);
      bVar12 = lVar2 != 0;
      *(undefined4 *)(param_1 + 2) = 0;
    }
  }
  else {
    lVar2 = FUN_180198770(param_1,param_2);
    bVar12 = lVar2 != 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return bVar12;
}



// ===== FUN_1801ca950 @ 1801ca950 (size 197)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ca950(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = 0x1801ca96a;
  lVar1 = 0;
  local_res20[0] = 0;
  if ((param_4 == 0) && (lVar1 = FUN_1801c9050(), param_4 = lVar1, lVar1 == 0)) {
    FUN_1801a70c0(3,0x6e,0x41,"crypto\\bn\\bn_gcd.c",CONCAT44(uVar2,0x20d));
    return 0;
  }
  uVar3 = FUN_1801cad10(param_1,param_2,param_3,param_4,local_res20,uVar3);
  if (local_res20[0] != 0) {
    FUN_1801a70c0(3,0x6e,0x6c,"crypto\\bn\\bn_gcd.c",0x214);
  }
  FUN_1801c8dd0(lVar1);
  return uVar3;
}



// ===== FUN_1801caa20 @ 1801caa20 (size 741)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801caa20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_58;
  undefined1 local_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = 0x1801caa49;
  lVar9 = 0;
  local_58 = 0;
  FUN_1801c9140(param_4);
  lVar2 = FUN_1801c8e90(param_4);
  lVar3 = FUN_1801c8e90(param_4);
  lVar4 = FUN_1801c8e90(param_4);
  uVar5 = FUN_1801c8e90(param_4);
  lVar6 = FUN_1801c8e90(param_4);
  lVar7 = FUN_1801c8e90(param_4);
  lVar8 = FUN_1801c8e90(param_4);
  if (lVar8 != 0) {
    lVar9 = param_1;
    if (param_1 == 0) {
      lVar9 = FUN_180198b30();
    }
    if ((lVar9 != 0) && (iVar1 = FUN_180198f20(lVar4,1), iVar1 != 0)) {
      FUN_180198f20(lVar7,0);
      lVar8 = FUN_180198770(lVar3,param_2);
      if ((lVar8 != 0) && (lVar8 = FUN_180198770(lVar2,param_3), lVar8 != 0)) {
        *(undefined4 *)(lVar2 + 0x10) = 0;
        if ((*(int *)(lVar3 + 0x10) != 0) || (iVar1 = FUN_180198fc0(lVar3,lVar2), -1 < iVar1)) {
          FUN_180199560(local_50);
          FUN_180199020(local_50,lVar3,4);
          iVar1 = FUN_180202f80(lVar3,local_50,lVar2,param_4);
          if (iVar1 == 0) goto LAB_1801caccd;
        }
        iVar10 = -1;
        iVar1 = FUN_180198a80(lVar3);
        lVar8 = lVar7;
        lVar11 = lVar2;
        if (iVar1 == 0) {
          do {
            lVar7 = lVar4;
            lVar4 = lVar8;
            lVar2 = lVar3;
            FUN_180199560(local_50);
            FUN_180199020(local_50,lVar11,4);
            iVar1 = FUN_1801eeff0(uVar5,lVar6,local_50,lVar2,param_4);
            if (((iVar1 == 0) || (iVar1 = FUN_1801c9580(lVar11,uVar5,lVar7,param_4), iVar1 == 0)) ||
               (iVar1 = FUN_1801c9260(lVar11,lVar11,lVar4), iVar1 == 0)) goto LAB_1801caccd;
            iVar10 = -iVar10;
            iVar1 = FUN_180198a80(lVar6);
            lVar3 = lVar6;
            lVar8 = lVar7;
            lVar6 = lVar4;
            lVar4 = lVar11;
            lVar11 = lVar2;
          } while (iVar1 == 0);
          if (iVar10 < 0) goto LAB_1801cac2d;
        }
        else {
LAB_1801cac2d:
          iVar1 = FUN_1801c9300(lVar7,param_3,lVar7);
          if (iVar1 == 0) goto LAB_1801caccd;
        }
        iVar1 = FUN_180198a30(lVar2);
        if (iVar1 == 0) {
          *param_5 = 1;
        }
        else {
          if ((*(int *)(lVar7 + 0x10) == 0) && (iVar1 = FUN_180198fc0(lVar7,param_3), iVar1 < 0)) {
            lVar3 = FUN_180198770(lVar9,lVar7);
            bVar12 = lVar3 == 0;
          }
          else {
            iVar1 = FUN_180202f80(lVar9,lVar7,param_3,param_4);
            bVar12 = iVar1 == 0;
          }
          if (!bVar12) {
            *param_5 = 0;
            local_58 = lVar9;
            goto LAB_1801cace0;
          }
        }
      }
    }
  }
LAB_1801caccd:
  if (param_1 == 0) {
    FUN_180198910(lVar9);
  }
LAB_1801cace0:
  FUN_1801c8d50(param_4);
  return local_58;
}



// ===== FUN_1801cad10 @ 1801cad10 (size 1628)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801cad10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  
  iVar1 = FUN_1801981e0(param_3,1);
  if ((iVar1 != 0) || (iVar1 = FUN_180198a80(param_3), iVar1 != 0)) {
    *param_5 = 1;
    return 0;
  }
  *param_5 = 0;
  iVar1 = FUN_180198990(param_2,4);
  if ((iVar1 != 0) || (iVar1 = FUN_180198990(param_3,4), iVar1 != 0)) {
    lVar5 = FUN_1801caa20(param_1,param_2,param_3,param_4,param_5);
    return lVar5;
  }
  FUN_1801c9140(param_4);
  lVar3 = FUN_1801c8e90(param_4);
  lVar4 = FUN_1801c8e90(param_4);
  lVar5 = FUN_1801c8e90(param_4);
  puVar6 = (undefined8 *)FUN_1801c8e90(param_4);
  lVar7 = FUN_1801c8e90(param_4);
  lVar8 = FUN_1801c8e90(param_4);
  lVar9 = FUN_1801c8e90(param_4);
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1;
    if (param_1 == 0) {
      lVar10 = FUN_180198b30();
    }
    if ((lVar10 != 0) && (iVar1 = FUN_180198f20(lVar5,1), iVar1 != 0)) {
      FUN_180198f20(lVar8,0);
      lVar11 = FUN_180198770(lVar4,param_2);
      if (((lVar11 != 0) && (lVar11 = FUN_180198770(lVar3,param_3), lVar11 != 0)) &&
         (((*(undefined4 *)(lVar3 + 0x10) = 0, *(int *)(lVar4 + 0x10) == 0 &&
           (iVar1 = FUN_180198fc0(lVar4,lVar3), iVar1 < 0)) ||
          (iVar1 = FUN_180202f80(lVar4,lVar4,lVar3,param_4), iVar1 != 0)))) {
        iVar13 = -1;
        iVar1 = FUN_180198a10(param_3);
        if ((iVar1 == 0) || (iVar1 = FUN_180198b90(param_3), 0x800 < iVar1)) {
          iVar1 = FUN_180198a80(lVar4);
          lVar11 = lVar3;
          if (iVar1 != 0) goto LAB_1801cb25a;
          do {
            lVar12 = lVar8;
            lVar3 = lVar4;
            lVar8 = lVar5;
            iVar1 = FUN_180198b90(lVar3);
            iVar2 = FUN_180198b90(lVar11);
            if (iVar2 == iVar1) {
              iVar1 = FUN_180198f20(puVar6,1);
              if (iVar1 == 0) goto LAB_1801cb2ee;
              iVar1 = FUN_1801c9300(lVar7,lVar11,lVar3);
            }
            else {
              iVar1 = FUN_180198b90(lVar3);
              iVar2 = FUN_180198b90(lVar11);
              if (iVar2 == iVar1 + 1) {
                iVar1 = FUN_1801eea50(lVar9,lVar3);
                if (iVar1 == 0) goto LAB_1801cb2ee;
                iVar1 = FUN_180198fc0(lVar11,lVar9);
                if (iVar1 < 0) {
                  iVar1 = FUN_180198f20(puVar6,1);
                  if (iVar1 == 0) goto LAB_1801cb2ee;
                  iVar1 = FUN_1801c9300(lVar7,lVar11,lVar3);
                }
                else {
                  iVar1 = FUN_1801c9300(lVar7,lVar11,lVar9);
                  if ((iVar1 == 0) || (iVar1 = FUN_1801c9260(puVar6,lVar9,lVar3), iVar1 == 0))
                  goto LAB_1801cb2ee;
                  iVar1 = FUN_180198fc0(lVar11,puVar6);
                  if (iVar1 < 0) {
                    iVar1 = FUN_180198f20(puVar6,2);
                  }
                  else {
                    iVar1 = FUN_180198f20(puVar6,3);
                    if (iVar1 == 0) goto LAB_1801cb2ee;
                    iVar1 = FUN_1801c9300(lVar7,lVar7,lVar3);
                  }
                }
              }
              else {
                iVar1 = FUN_1801eeff0(puVar6,lVar7,lVar11,lVar3,param_4);
              }
            }
            if (iVar1 == 0) goto LAB_1801cb2ee;
            iVar1 = FUN_180198a30(puVar6);
            if (iVar1 == 0) {
              iVar1 = FUN_180198a50(puVar6,2);
              if (iVar1 == 0) {
                iVar1 = FUN_180198a50(puVar6,4);
                if (iVar1 == 0) {
                  if (*(int *)(puVar6 + 1) == 1) {
                    lVar5 = FUN_180198770(lVar11,lVar8);
                    if (lVar5 == 0) goto LAB_1801cb2ee;
                    iVar1 = FUN_1801bbc10(lVar11,*(undefined8 *)*puVar6);
                  }
                  else {
                    iVar1 = FUN_1801c9580(lVar11,puVar6,lVar8,param_4);
                  }
                }
                else {
                  iVar1 = FUN_1801ee8d0(lVar11,lVar8,2);
                }
              }
              else {
                iVar1 = FUN_1801eea50(lVar11,lVar8);
              }
              if (iVar1 == 0) goto LAB_1801cb2ee;
              lVar5 = lVar11;
            }
            else {
              lVar5 = lVar8;
            }
            iVar1 = FUN_1801c9260(lVar11,lVar5,lVar12);
            if (iVar1 == 0) goto LAB_1801cb2ee;
            iVar13 = -iVar13;
            iVar1 = FUN_180198a80(lVar7);
            lVar5 = lVar11;
            lVar4 = lVar7;
            lVar7 = lVar12;
            lVar11 = lVar3;
          } while (iVar1 == 0);
          if (iVar13 < 0) goto LAB_1801cb25a;
        }
        else {
          iVar1 = FUN_180198a80(lVar4);
          while (iVar1 == 0) {
            iVar13 = 0;
            iVar1 = FUN_1801989c0(lVar4,0);
            if (iVar1 == 0) {
              do {
                iVar13 = iVar13 + 1;
                iVar1 = FUN_180198a10(lVar5);
                if (((iVar1 != 0) && (iVar1 = FUN_1801c93a0(lVar5,lVar5,param_3), iVar1 == 0)) ||
                   (iVar1 = FUN_1801eec70(lVar5,lVar5), iVar1 == 0)) goto LAB_1801cb2ee;
                iVar1 = FUN_1801989c0(lVar4,iVar13);
              } while (iVar1 == 0);
              if ((0 < iVar13) && (iVar1 = FUN_1801eeb00(lVar4,lVar4,iVar13), iVar1 == 0))
              goto LAB_1801cb2ee;
            }
            iVar13 = 0;
            iVar1 = FUN_1801989c0(lVar3,0);
            if (iVar1 == 0) {
              do {
                iVar13 = iVar13 + 1;
                iVar1 = FUN_180198a10(lVar8);
                if (((iVar1 != 0) && (iVar1 = FUN_1801c93a0(lVar8,lVar8,param_3), iVar1 == 0)) ||
                   (iVar1 = FUN_1801eec70(lVar8,lVar8), iVar1 == 0)) goto LAB_1801cb2ee;
                iVar1 = FUN_1801989c0(lVar3,iVar13);
              } while (iVar1 == 0);
              if ((0 < iVar13) && (iVar1 = FUN_1801eeb00(lVar3,lVar3,iVar13), iVar1 == 0))
              goto LAB_1801cb2ee;
            }
            iVar1 = FUN_180198fc0(lVar4,lVar3);
            if (iVar1 < 0) {
              iVar1 = FUN_1801c93a0(lVar8,lVar8,lVar5);
              if (iVar1 == 0) goto LAB_1801cb2ee;
              lVar7 = lVar3;
              lVar9 = lVar4;
            }
            else {
              iVar1 = FUN_1801c93a0(lVar5,lVar5,lVar8);
              if (iVar1 == 0) goto LAB_1801cb2ee;
              lVar7 = lVar4;
              lVar9 = lVar3;
            }
            iVar1 = FUN_1801c9470(lVar7,lVar7,lVar9);
            if (iVar1 == 0) goto LAB_1801cb2ee;
            iVar1 = FUN_180198a80(lVar4);
          }
LAB_1801cb25a:
          iVar1 = FUN_1801c9300(lVar8,param_3,lVar8);
          if (iVar1 == 0) goto LAB_1801cb2ee;
        }
        iVar1 = FUN_180198a30(lVar3);
        if (iVar1 == 0) {
          *param_5 = 1;
        }
        else {
          if ((*(int *)(lVar8 + 0x10) == 0) && (iVar1 = FUN_180198fc0(lVar8,param_3), iVar1 < 0)) {
            lVar5 = FUN_180198770(lVar10,lVar8);
            bVar14 = lVar5 == 0;
          }
          else {
            iVar1 = FUN_180202f80(lVar10,lVar8,param_3,param_4);
            bVar14 = iVar1 == 0;
          }
          if (!bVar14) {
            lVar5 = lVar10;
            goto LAB_1801cb301;
          }
        }
      }
    }
  }
LAB_1801cb2ee:
  lVar5 = 0;
  if (param_1 == 0) {
    FUN_180198910(lVar10);
  }
LAB_1801cb301:
  FUN_1801c8d50(param_4);
  return lVar5;
}



// ===== FUN_1801cb370 @ 1801cb370 (size 585)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cb370(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar11;
  undefined8 uVar10;
  
  uVar9 = 0;
  bVar1 = false;
  lVar6 = 0;
  lVar4 = 0;
  iVar2 = FUN_180198b90(*(undefined8 *)(param_1 + 8));
  if (10000 < iVar2) {
    FUN_1801a70c0(5,0x67,0x67,"crypto\\dh\\dh_key.c",0x71);
    return 0;
  }
  lVar3 = FUN_1801c9050();
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar8 = 0;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (lVar4 == 0) {
      lVar4 = FUN_180198d60();
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (lVar4 == 0) goto LAB_1801cb551;
      bVar1 = true;
    }
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
      lVar5 = FUN_180198b30();
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      lVar8 = lVar5;
      if (lVar5 == 0) goto LAB_1801cb551;
    }
    lVar8 = lVar5;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      lVar6 = FUN_1801baf30(param_1 + 0x38,*(undefined8 *)(param_1 + 0x88),
                            *(undefined8 *)(param_1 + 8),lVar3);
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (lVar6 == 0) goto LAB_1801cb551;
    }
    uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    if (bVar1) {
      if (*(longlong *)(param_1 + 0x40) == 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        if (iVar2 == 0) {
          iVar2 = FUN_180198b90(*(undefined8 *)(param_1 + 8));
          iVar2 = iVar2 + -1;
        }
        iVar2 = FUN_1802013c0(lVar4,iVar2,0,0);
        if ((iVar2 == 0) ||
           (((iVar2 = FUN_180198a50(*(undefined8 *)(param_1 + 0x10),2), iVar2 != 0 &&
             (iVar2 = FUN_1801989c0(*(undefined8 *)(param_1 + 8),2), iVar2 == 0)) &&
            (iVar2 = FUN_180198460(lVar4,0), iVar2 == 0)))) goto LAB_1801cb551;
      }
      else {
        do {
          do {
            iVar2 = FUN_1802013f0(lVar4,*(undefined8 *)(param_1 + 0x40));
            uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
            if (iVar2 == 0) goto LAB_1801cb551;
            iVar2 = FUN_180198a80(lVar4);
          } while (iVar2 != 0);
          iVar2 = FUN_180198a30(lVar4);
          uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
        } while (iVar2 != 0);
      }
    }
    lVar7 = FUN_180198b30();
    if (lVar7 != 0) {
      FUN_180199020(lVar7,lVar4,4);
      uVar10 = *(undefined8 *)(param_1 + 8);
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))
                        (param_1,lVar5,*(undefined8 *)(param_1 + 0x10),lVar7,uVar10,lVar3,lVar6);
      uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
      FUN_1801984d0(lVar7);
      if (iVar2 != 0) {
        *(longlong *)(param_1 + 0x20) = lVar5;
        uVar9 = 1;
        *(longlong *)(param_1 + 0x28) = lVar4;
        goto LAB_1801cb575;
      }
    }
  }
LAB_1801cb551:
  FUN_1801a70c0(5,0x67,3,"crypto\\dh\\dh_key.c",CONCAT44(uVar11,0xbb));
  lVar5 = *(longlong *)(param_1 + 0x20);
LAB_1801cb575:
  if (lVar8 != lVar5) {
    FUN_180198910(lVar8);
  }
  if (lVar4 != *(longlong *)(param_1 + 0x28)) {
    FUN_180198910(lVar4);
  }
  FUN_1801c8dd0(lVar3);
  return uVar9;
}



// ===== FUN_1801cb5c0 @ 1801cb5c0 (size 434)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1801cb5c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int local_res18 [4];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  undefined8 uVar7;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar2 = 0xffffffff;
  lVar3 = 0;
  lVar5 = 0;
  iVar1 = FUN_180198b90(*(undefined8 *)(param_3 + 8));
  if (iVar1 < 0x2711) {
    lVar3 = FUN_1801c9050();
    if (lVar3 != 0) {
      FUN_1801c9140(lVar3);
      lVar4 = FUN_1801c8e90(lVar3);
      if (lVar4 != 0) {
        if (*(longlong *)(param_3 + 0x28) == 0) {
          uVar7 = 0xdb;
          uVar6 = 100;
        }
        else {
          if ((*(byte *)(param_3 + 0x30) & 1) != 0) {
            lVar5 = FUN_1801baf30(param_3 + 0x38,*(undefined8 *)(param_3 + 0x88),
                                  *(undefined8 *)(param_3 + 8),lVar3);
            FUN_180198ef0(*(undefined8 *)(param_3 + 0x28),4);
            if (lVar5 == 0) goto LAB_1801cb74e;
          }
          iVar1 = FUN_180207cb0(param_3,param_2,local_res18);
          if ((iVar1 == 0) || (local_res18[0] != 0)) {
            uVar7 = 0xe8;
            uVar6 = 0x66;
          }
          else {
            iVar1 = (**(code **)(*(longlong *)(param_3 + 0x78) + 0x18))
                              (param_3,lVar4,param_2,*(undefined8 *)(param_3 + 0x28),
                               *(undefined8 *)(param_3 + 8),lVar3,lVar5);
            if (iVar1 != 0) {
              iVar1 = FUN_180198b90(*(undefined8 *)(param_3 + 8));
              uVar2 = FUN_180198430(lVar4,param_1,(int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3);
              goto LAB_1801cb74e;
            }
            uVar7 = 0xee;
            uVar6 = 3;
          }
        }
        FUN_1801a70c0(5,0x66,uVar6,"crypto\\dh\\dh_key.c",uVar7);
      }
    }
  }
  else {
    FUN_1801a70c0(5,0x66,0x67,"crypto\\dh\\dh_key.c",CONCAT44(uVar8,0xce));
  }
LAB_1801cb74e:
  FUN_1801c8d50(lVar3);
  FUN_1801c8dd0(lVar3);
  return uVar2;
}



// ===== FUN_1801cb780 @ 1801cb780 (size 66)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801cb780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1802034a0(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// ===== FUN_1801cb800 @ 1801cb800 (size 174)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801cb800(void *param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  size_t local_res18;
  ulonglong local_res20;
  
  local_res18 = 0;
  local_res20 = 1;
  iVar2 = (**(code **)(*(longlong *)(param_3 + 0x78) + 0x10))();
  uVar5 = (ulonglong)iVar2;
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      pcVar1 = (char *)(lVar3 + (longlong)param_1);
      lVar3 = lVar3 + 1;
      local_res20 = local_res20 & *pcVar1 == '\0';
      local_res18 = local_res20 + local_res18;
    } while (lVar3 < (longlong)uVar5);
    uVar4 = iVar2 - (int)local_res18;
    uVar5 = (ulonglong)uVar4;
    memmove(param_1,(void *)(local_res18 + (longlong)param_1),(longlong)(int)uVar4);
    memset((void *)((longlong)(int)uVar4 + (longlong)param_1),0,local_res18);
  }
  return uVar5 & 0xffffffff;
}



// ===== FUN_1801cb8b0 @ 1801cb8b0 (size 150)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801cb8b0(void *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(longlong *)(param_3 + 0x78) + 0x10))();
  if (iVar1 < 1) {
    return iVar1;
  }
  iVar2 = FUN_180198b90(*(undefined8 *)(param_3 + 8));
  iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  iVar3 = iVar2 - iVar1;
  if (0 < iVar3) {
    memmove((void *)((longlong)iVar3 + (longlong)param_1),param_1,(longlong)iVar1);
    memset(param_1,0,(longlong)iVar3);
  }
  return iVar2;
}



// ===== FUN_1801cb9a0 @ 1801cb9a0 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cb9a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 1;
  }
  uVar1 = FUN_1801ed650(&DAT_1803c9418,FUN_1801cba40,param_1,&DAT_18032d28c,1,0,0x1801cb9aa);
  return uVar1;
}



// ===== FUN_1801cb9f0 @ 1801cb9f0 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cb9f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 1;
  }
  uVar1 = FUN_1801ed650(&DAT_1803c9418,FUN_1801cba40,param_1,&DAT_18032d28c,1,1,0x1801cb9fa);
  return uVar1;
}



// ===== FUN_1801cba60 @ 1801cba60 (size 808)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801cba60(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar10 = 0x1801cba7a;
  lVar4 = 0;
  local_res18 = 0;
  plVar2 = (longlong *)0x0;
  if (((*(longlong *)(param_3 + 8) == 0) || (*(longlong *)(param_3 + 0x10) == 0)) ||
     (*(longlong *)(param_3 + 0x18) == 0)) {
    uVar5 = 0x65;
  }
  else if (*(longlong *)(param_3 + 0x28) == 0) {
    uVar5 = 0x6f;
  }
  else {
    plVar2 = (longlong *)FUN_1801d4bf0();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_180198b30();
      *plVar2 = lVar3;
      lVar3 = FUN_180198b30();
      plVar2[1] = lVar3;
      if (((*plVar2 != 0) && (lVar3 != 0)) && (lVar4 = FUN_1801c9050(), lVar4 != 0)) {
        local_res20 = FUN_1801c8e90(lVar4);
        uVar5 = FUN_1801c8e90(lVar4);
        uVar6 = FUN_1801c8e90(lVar4);
        lVar3 = FUN_1801c8e90(lVar4);
        if (lVar3 != 0) {
          uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),param_2);
          uVar8 = param_1;
          iVar1 = FUN_1801cc1a0(param_3,lVar4,&local_res18,plVar2,param_1,uVar10);
          uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if (iVar1 != 0) {
            while( true ) {
              iVar1 = FUN_180198b90(*(undefined8 *)(param_3 + 0x10));
              if ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3 < param_2) {
                iVar1 = FUN_180198b90(*(undefined8 *)(param_3 + 0x10));
                param_2 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
              }
              lVar7 = FUN_180198210(param_1,param_2,local_res20);
              uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
              if (lVar7 == 0) break;
              do {
                iVar1 = FUN_180198b90(*(undefined8 *)(param_3 + 0x10));
                iVar1 = FUN_1802013c0(uVar5,iVar1 + -1,0xffffffff);
                uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
                if (iVar1 == 0) goto LAB_1801cbd27;
                iVar1 = FUN_180198a80(uVar5);
              } while (iVar1 != 0);
              FUN_180198ef0(uVar5,4);
              FUN_180198ef0(uVar6,4);
              FUN_180198ef0(lVar3,4);
              lVar7 = lVar4;
              iVar1 = FUN_180202da0(lVar3,uVar5,*(undefined8 *)(param_3 + 0x28),
                                    *(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              lVar7 = lVar4;
              iVar1 = FUN_180202da0(lVar3,lVar3,*plVar2,*(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              lVar7 = lVar4;
              iVar1 = FUN_180202da0(uVar6,uVar5,local_res20,*(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if ((iVar1 == 0) ||
                 (iVar1 = FUN_180202c00(plVar2[1],lVar3,uVar6,*(undefined8 *)(param_3 + 0x10)),
                 iVar1 == 0)) break;
              lVar7 = lVar4;
              iVar1 = FUN_180202da0(plVar2[1],plVar2[1],local_res18,*(undefined8 *)(param_3 + 0x10),
                                    lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if ((iVar1 == 0) ||
                 (lVar7 = FUN_1801ca950(uVar5,uVar5,*(undefined8 *)(param_3 + 0x10),lVar4),
                 lVar7 == 0)) break;
              lVar7 = lVar4;
              iVar1 = FUN_180202da0(plVar2[1],plVar2[1],uVar5,*(undefined8 *)(param_3 + 0x10),lVar4)
              ;
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              iVar1 = FUN_180198a80(*plVar2);
              uVar9 = (undefined4)((ulonglong)uVar10 >> 0x20);
              if ((iVar1 == 0) && (iVar1 = FUN_180198a80(plVar2[1]), iVar1 == 0))
              goto LAB_1801cbd53;
              uVar10 = CONCAT44(uVar9,param_2);
              uVar8 = param_1;
              iVar1 = FUN_1801cc1a0(param_3,lVar4,&local_res18,plVar2,param_1,uVar10);
              uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
              if (iVar1 == 0) break;
            }
          }
        }
      }
    }
LAB_1801cbd27:
    uVar5 = 3;
  }
  FUN_1801a70c0(10,0x70,uVar5,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar9,0xa7),uVar10);
  FUN_1801d4ba0(plVar2);
  plVar2 = (longlong *)0x0;
LAB_1801cbd53:
  FUN_1801c8dd0(lVar4);
  FUN_1801984d0(local_res18);
  return plVar2;
}



// ===== FUN_1801cbdc0 @ 1801cbdc0 (size 953)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801cbdc0(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 local_58 [3];
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar10 = 0;
  lVar9 = 0;
  if (((*(longlong *)(param_4 + 8) == 0) || (*(longlong *)(param_4 + 0x10) == 0)) ||
     (*(longlong *)(param_4 + 0x18) == 0)) {
    FUN_1801a70c0(10,0x71,0x65,"crypto\\dsa\\dsa_ossl.c",0x134);
    return 0xffffffff;
  }
  iVar2 = FUN_180198b90();
  if (((iVar2 - 0xa0U & 0xffffff9f) != 0) || (iVar2 == 0xc0)) {
    uVar12 = CONCAT44(uVar13,0x13b);
    uVar11 = 0x66;
LAB_1801cbe5b:
    FUN_1801a70c0(10,0x71,uVar11,"crypto\\dsa\\dsa_ossl.c",uVar12);
    return 0xffffffff;
  }
  iVar3 = FUN_180198b90(*(undefined8 *)(param_4 + 8));
  if (10000 < iVar3) {
    uVar12 = CONCAT44(uVar13,0x140);
    uVar11 = 0x67;
    goto LAB_1801cbe5b;
  }
  lVar4 = FUN_180198b30();
  lVar5 = FUN_180198b30();
  lVar6 = FUN_180198b30();
  lVar7 = FUN_1801c9050();
  if (((lVar4 == 0) || (lVar5 == 0)) || ((lVar6 == 0 || (lVar7 == 0)))) goto LAB_1801cc0b6;
  FUN_1801d2c80(param_3,&local_res20,local_58);
  iVar3 = FUN_180198a80(local_res20);
  if (iVar3 != 0) goto LAB_1801cc0db;
  iVar3 = FUN_180198a00(local_res20);
  if (iVar3 != 0) goto LAB_1801cc0db;
  iVar3 = FUN_180198fc0(local_res20,*(undefined8 *)(param_4 + 0x10));
  if (-1 < iVar3) goto LAB_1801cc0db;
  iVar3 = FUN_180198a80(local_58[0]);
  if (iVar3 != 0) goto LAB_1801cc0db;
  iVar3 = FUN_180198a00(local_58[0]);
  if (iVar3 != 0) goto LAB_1801cc0db;
  iVar3 = FUN_180198fc0(local_58[0],*(undefined8 *)(param_4 + 0x10));
  if (-1 < iVar3) goto LAB_1801cc0db;
  lVar8 = FUN_1801ca950(lVar5,local_58[0],*(undefined8 *)(param_4 + 0x10),lVar7);
  if (lVar8 != 0) {
    if (iVar2 >> 3 < param_2) {
      param_2 = iVar2 >> 3;
    }
    lVar8 = FUN_180198210(param_1,param_2,lVar4);
    if (lVar8 != 0) {
      lVar8 = lVar7;
      iVar2 = FUN_180202da0(lVar4,lVar4,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
      uVar13 = (undefined4)((ulonglong)lVar8 >> 0x20);
      if (iVar2 != 0) {
        lVar8 = lVar7;
        iVar2 = FUN_180202da0(lVar5,local_res20,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
        uVar13 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if (iVar2 != 0) {
          if ((*(byte *)(param_4 + 0x30) & 1) != 0) {
            lVar9 = FUN_1801baf30(param_4 + 0x38,*(undefined8 *)(param_4 + 0x60),
                                  *(undefined8 *)(param_4 + 8),lVar7);
            if (lVar9 == 0) goto LAB_1801cc0b6;
          }
          uVar11 = *(undefined8 *)(param_4 + 0x20);
          pcVar1 = *(code **)(*(longlong *)(param_4 + 0x50) + 0x20);
          if (pcVar1 == (code *)0x0) {
            lVar8 = lVar5;
            iVar2 = FUN_180207f80(lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,uVar11,lVar5,
                                  *(undefined8 *)(param_4 + 8),lVar7,lVar9);
            uVar13 = (undefined4)((ulonglong)lVar8 >> 0x20);
          }
          else {
            iVar2 = (*pcVar1)(param_4,lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,uVar11,lVar5,
                              *(undefined8 *)(param_4 + 8),lVar7,lVar9);
            uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
          }
          if (iVar2 != 0) {
            lVar9 = lVar7;
            iVar2 = FUN_1801eeff0(0,lVar4,lVar6,*(undefined8 *)(param_4 + 0x10),lVar7);
            uVar13 = (undefined4)((ulonglong)lVar9 >> 0x20);
            if (iVar2 != 0) {
              iVar2 = FUN_180198fc0(lVar4,local_res20);
              uVar10 = (ulonglong)(iVar2 == 0);
              goto LAB_1801cc0db;
            }
          }
        }
      }
    }
  }
LAB_1801cc0b6:
  FUN_1801a70c0(10,0x71,3,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar13,0x18c));
  uVar10 = 0xffffffff;
LAB_1801cc0db:
  FUN_1801c8dd0(lVar7);
  FUN_180198910(lVar4);
  FUN_180198910(lVar5);
  FUN_180198910(lVar6);
  return uVar10;
}



// ===== FUN_1801cc1a0 @ 1801cc1a0 (size 957)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801cc1a0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
             longlong param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong in_stack_ffffffffffffff98;
  undefined4 uVar15;
  undefined8 uVar13;
  longlong lVar14;
  
  uVar11 = *param_4;
  uVar12 = 0;
  lVar7 = 0;
  if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar12 = 0xc1;
    uVar11 = 0x65;
    goto LAB_1801cc53b;
  }
  iVar2 = FUN_180198a80();
  if (iVar2 == 0) {
    iVar2 = FUN_180198a80(*(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 0) {
      iVar2 = FUN_180198a80(*(undefined8 *)(param_1 + 0x18));
      if (iVar2 == 0) {
        if (*(longlong *)(param_1 + 0x28) == 0) {
          uVar12 = 0xcb;
          uVar11 = 0x6f;
          goto LAB_1801cc53b;
        }
        lVar5 = FUN_180198b30();
        lVar6 = FUN_180198b30();
        uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
        if ((lVar5 != 0) && (lVar6 != 0)) {
          if (param_2 == 0) {
            lVar7 = FUN_1801c9050();
            uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (lVar7 == 0) goto LAB_1801cc26f;
          }
          else {
            lVar7 = param_2;
          }
          uVar3 = FUN_180198b90(*(undefined8 *)(param_1 + 0x10));
          iVar2 = FUN_1801af830(*(undefined8 *)(param_1 + 0x10));
          iVar2 = iVar2 + 2;
          lVar8 = FUN_180199580(lVar5,iVar2);
          uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          if (lVar8 != 0) {
            lVar8 = FUN_180199580(lVar6,iVar2);
            uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (lVar8 != 0) {
              do {
                if (param_5 == 0) {
                  iVar4 = FUN_1802013f0(lVar5,*(undefined8 *)(param_1 + 0x10));
                }
                else {
                  in_stack_ffffffffffffff98 = (longlong)param_6;
                  iVar4 = FUN_180201190(lVar5,*(undefined8 *)(param_1 + 0x10),
                                        *(undefined8 *)(param_1 + 0x28),param_5,(longlong)param_6,
                                        lVar7);
                }
                uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
                if (iVar4 == 0) goto LAB_1801cc26f;
                iVar4 = FUN_180198a80(lVar5);
                uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
              } while (iVar4 != 0);
              FUN_180198ef0(lVar5,4);
              FUN_180198ef0(lVar6,4);
              if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
                lVar8 = FUN_1801baf30(param_1 + 0x38,*(undefined8 *)(param_1 + 0x60),
                                      *(undefined8 *)(param_1 + 8),lVar7);
                if (lVar8 == 0) goto LAB_1801cc26f;
              }
              iVar4 = FUN_1801c9260(lVar6,lVar5,*(undefined8 *)(param_1 + 0x10));
              if (iVar4 != 0) {
                iVar4 = FUN_1801c9260(lVar5,lVar6,*(undefined8 *)(param_1 + 0x10));
                if (iVar4 != 0) {
                  iVar4 = FUN_1801989c0(lVar6,uVar3);
                  FUN_1801985e0((longlong)iVar4,lVar5,lVar6,iVar2);
                  uVar13 = *(undefined8 *)(param_1 + 8);
                  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x50) + 0x28);
                  if (pcVar1 == (code *)0x0) {
                    lVar8 = lVar7;
                    iVar2 = FUN_1802034a0(uVar11,*(undefined8 *)(param_1 + 0x18),lVar5,uVar13,lVar7,
                                          *(undefined8 *)(param_1 + 0x38));
                    uVar15 = (undefined4)((ulonglong)lVar8 >> 0x20);
                  }
                  else {
                    iVar2 = (*pcVar1)(param_1,uVar11,*(undefined8 *)(param_1 + 0x18),lVar5,uVar13,
                                      lVar7,*(undefined8 *)(param_1 + 0x38));
                    uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
                  }
                  if (iVar2 != 0) {
                    lVar8 = lVar7;
                    iVar2 = FUN_1801eeff0(0,uVar11,uVar11,*(undefined8 *)(param_1 + 0x10),lVar7);
                    uVar15 = (undefined4)((ulonglong)lVar8 >> 0x20);
                    if (iVar2 != 0) {
                      uVar11 = *(undefined8 *)(param_1 + 0x10);
                      lVar8 = 0;
                      lVar9 = FUN_180198b30();
                      if (lVar9 != 0) {
                        FUN_1801c9140(lVar7);
                        lVar10 = FUN_1801c8e90(lVar7);
                        if (lVar10 == 0) {
LAB_1801cc4e6:
                          FUN_180198910(lVar9);
                        }
                        else {
                          iVar2 = FUN_180198f20(lVar9,2);
                          if (iVar2 == 0) goto LAB_1801cc4e6;
                          iVar2 = FUN_1801c9300(lVar10,uVar11,lVar9);
                          if (iVar2 == 0) goto LAB_1801cc4e6;
                          lVar14 = lVar7;
                          iVar2 = FUN_1802034a0(lVar9,lVar5,lVar10,uVar11,lVar7,0);
                          uVar15 = (undefined4)((ulonglong)lVar14 >> 0x20);
                          if (iVar2 == 0) goto LAB_1801cc4e6;
                          lVar8 = lVar9;
                        }
                        FUN_1801c8d50(lVar7);
                        if (lVar8 != 0) {
                          FUN_1801984d0(*param_3);
                          *param_3 = lVar8;
                          uVar12 = 1;
                          goto LAB_1801cc28f;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_1801cc26f:
        FUN_1801a70c0(10,0x6b,3,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar15,0x123));
LAB_1801cc28f:
        if (lVar7 != param_2) {
          FUN_1801c8dd0(lVar7);
        }
        FUN_1801984d0(lVar5);
        FUN_1801984d0(lVar6);
        return uVar12;
      }
    }
  }
  uVar12 = 199;
  uVar11 = 0x70;
LAB_1801cc53b:
  FUN_1801a70c0(10,0x6b,uVar11,"crypto\\dsa\\dsa_ossl.c",uVar12);
  return 0;
}



// ===== FUN_1801cc580 @ 1801cc580 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cc580(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 1;
  }
  uVar1 = FUN_1801ed650(&DAT_1803c9420,FUN_1801cc620,param_1,&DAT_18032d2c0,1,0,0x1801cc58a);
  return uVar1;
}



// ===== FUN_1801cc5d0 @ 1801cc5d0 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cc5d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 1;
  }
  uVar1 = FUN_1801ed650(&DAT_1803c9420,FUN_1801cc620,param_1,&DAT_18032d2c0,1,1,0x1801cc5da);
  return uVar1;
}



// ===== FUN_1801cc640 @ 1801cc640 (size 151)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801cc640(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1801958f0(*(undefined8 *)(param_1 + 0x28),FUN_18019aa30);
    FUN_1801958f0(*(undefined8 *)(param_1 + 0x30),FUN_1801ccc50);
    FUN_180195e10(*(undefined8 *)(param_1 + 0x40),"crypto\\x509\\x509_vpm.c",0x68);
    FUN_180195e10(*(undefined8 *)(param_1 + 0x48),"crypto\\x509\\x509_vpm.c",0x69);
    FUN_180195e10(*(undefined8 *)(param_1 + 0x58),"crypto\\x509\\x509_vpm.c",0x6a);
    FUN_180195e10(param_1,"crypto\\x509\\x509_vpm.c",0x6b);
  }
  return;
}



// ===== FUN_1801cc6e0 @ 1801cc6e0 (size 670)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cc6e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar7 = *(uint *)(param_2 + 0x10) | *(uint *)(param_1 + 0x10);
  if ((uVar7 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((uVar7 & 8) != 0) {
    return 1;
  }
  uVar9 = uVar7 & 1;
  if ((uVar7 & 2) == 0) {
    bVar1 = false;
    if ((*(int *)(param_2 + 0x18) != 0) && ((uVar9 != 0 || (*(int *)(param_1 + 0x18) == 0))))
    goto LAB_1801cc758;
LAB_1801cc760:
    if ((*(int *)(param_2 + 0x1c) != 0) && ((uVar9 != 0 || (*(int *)(param_1 + 0x1c) == 0))))
    goto LAB_1801cc771;
LAB_1801cc77c:
    if ((*(int *)(param_2 + 0x20) != -1) && ((uVar9 != 0 || (*(int *)(param_1 + 0x20) == -1))))
    goto LAB_1801cc78d;
LAB_1801cc798:
    if ((*(int *)(param_2 + 0x24) != -1) && ((uVar9 != 0 || (*(int *)(param_1 + 0x24) == -1))))
    goto LAB_1801cc7a9;
LAB_1801cc7b9:
    uVar6 = *(uint *)(param_1 + 0x14);
    if ((uVar6 & 2) == 0) goto LAB_1801cc7c1;
  }
  else {
    bVar1 = true;
LAB_1801cc758:
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
    if (!bVar1) goto LAB_1801cc760;
LAB_1801cc771:
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    if (!bVar1) goto LAB_1801cc77c;
LAB_1801cc78d:
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    if (!bVar1) goto LAB_1801cc798;
LAB_1801cc7a9:
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    if (!bVar1) goto LAB_1801cc7b9;
    uVar6 = *(uint *)(param_1 + 0x14);
LAB_1801cc7c1:
    uVar6 = uVar6 & 0xfffffffd;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(uint *)(param_1 + 0x14) = uVar6;
  }
  if ((uVar7 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_2 + 0x14) | uVar6;
  if ((bVar1) ||
     ((*(longlong *)(param_2 + 0x28) != 0 && ((uVar9 != 0 || (*(longlong *)(param_1 + 0x28) == 0))))
     )) {
    lVar5 = *(longlong *)(param_2 + 0x28);
    FUN_1801958f0(*(undefined8 *)(param_1 + 0x28),FUN_18019aa30);
    if (lVar5 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      lVar3 = FUN_1801957e0();
      *(longlong *)(param_1 + 0x28) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      iVar8 = 0;
      iVar2 = FUN_1801958b0(lVar5);
      if (0 < iVar2) {
        do {
          uVar4 = FUN_180195ae0(lVar5,iVar8);
          lVar3 = FUN_1801bc270(uVar4);
          if (lVar3 == 0) {
            return 0;
          }
          iVar2 = FUN_180195990(*(undefined8 *)(param_1 + 0x28),lVar3);
          if (iVar2 == 0) {
            FUN_18019aa30(lVar3);
            return 0;
          }
          iVar8 = iVar8 + 1;
          iVar2 = FUN_1801958b0(lVar5);
        } while (iVar8 < iVar2);
      }
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80;
    }
    if (!bVar1) goto LAB_1801cc88d;
LAB_1801cc89e:
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    if (!bVar1) goto LAB_1801cc8a9;
LAB_1801cc8ba:
    FUN_1801958f0(*(undefined8 *)(param_1 + 0x30),FUN_1801ccc50);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      lVar5 = FUN_180195310(*(longlong *)(param_2 + 0x30),FUN_1801ccc20,FUN_1801ccc50);
      *(longlong *)(param_1 + 0x30) = lVar5;
      if (lVar5 == 0) {
        return 0;
      }
    }
    if (!bVar1) goto LAB_1801cc8f8;
LAB_1801cc909:
    iVar2 = FUN_1801ccb70(param_1 + 0x48,param_1 + 0x50,*(undefined8 *)(param_2 + 0x48),
                          *(undefined8 *)(param_2 + 0x50));
    if (iVar2 == 0) {
      return 0;
    }
    if (bVar1) goto LAB_1801cc938;
  }
  else {
LAB_1801cc88d:
    if ((*(int *)(param_2 + 0x38) != 0) && ((uVar9 != 0 || (*(int *)(param_1 + 0x38) == 0))))
    goto LAB_1801cc89e;
LAB_1801cc8a9:
    if ((*(longlong *)(param_2 + 0x30) != 0) &&
       ((uVar9 != 0 || (*(longlong *)(param_1 + 0x30) == 0)))) goto LAB_1801cc8ba;
LAB_1801cc8f8:
    if ((*(longlong *)(param_2 + 0x48) != 0) &&
       ((uVar9 != 0 || (*(longlong *)(param_1 + 0x48) == 0)))) goto LAB_1801cc909;
  }
  if (*(longlong *)(param_2 + 0x58) == 0) {
    return 1;
  }
  if ((uVar9 == 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    return 1;
  }
LAB_1801cc938:
  iVar2 = FUN_1801ccb10(param_1,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60));
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



// ===== FUN_1801cc980 @ 1801cc980 (size 113)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801cc980(undefined8 param_1)

{
  int iVar1;
  undefined8 local_78 [14];
  undefined8 uStack_8;
  
  uStack_8 = 0x1801cc98a;
  local_78[0] = param_1;
  if (DAT_1803c9428 != 0) {
    iVar1 = FUN_180195630(DAT_1803c9428,local_78);
    if (-1 < iVar1) {
      FUN_180195ae0(DAT_1803c9428,iVar1);
      return;
    }
  }
  FUN_1801b8ee0(local_78,&PTR_s_default_18032d2d0,5,0x68,&LAB_1801ccc80);
  return;
}



// ===== FUN_1801cca00 @ 1801cca00 (size 103)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801cca00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x40) != lVar1) {
    FUN_180195e10(*(longlong *)(param_1 + 0x40),"crypto\\x509\\x509_vpm.c",0x1a1);
    *(longlong *)(param_1 + 0x40) = lVar1;
  }
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return;
}



// ===== FUN_1801cca70 @ 1801cca70 (size 96)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801cca70(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180196100(0x68,"crypto\\x509\\x509_vpm.c",0x56);
  if (lVar1 == 0) {
    FUN_1801a70c0(0xb,0x9f,0x41,"crypto\\x509\\x509_vpm.c",0x58);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0xffffffffffffffff;
  return lVar1;
}



// ===== FUN_1801ccb70 @ 1801ccb70 (size 171)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ccb70(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_3 == 0) {
    param_4 = 0;
    lVar1 = 0;
  }
  else {
    if (param_4 == 0) {
      param_4 = -1;
      do {
        param_4 = param_4 + 1;
      } while (*(char *)(param_3 + param_4) != '\0');
    }
    lVar1 = FUN_1801ba270(param_3,param_4,"crypto\\x509\\x509_vpm.c",0xf7);
    if (lVar1 == 0) {
      return 0;
    }
  }
  FUN_180195e10(*param_1,"crypto\\x509\\x509_vpm.c",0xfe);
  *param_1 = lVar1;
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_4;
  }
  return 1;
}



// ===== FUN_1801ccd10 @ 1801ccd10 (size 412)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char FUN_1801ccd10(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_40;
  
  uStack_40 = 0x1801ccd34;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    iVar1 = FUN_180195790();
    if (iVar1 == 0) {
      FUN_1801add90(*(undefined8 *)(param_1 + 0xd8));
      FUN_180195a90(*(undefined8 *)(param_1 + 0x30));
      FUN_1801ade50(*(undefined8 *)(param_1 + 0xd8));
    }
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_68 = *(undefined8 *)(param_3 + 4);
    iVar1 = FUN_180195630(*(undefined8 *)(param_1 + 0x30),&local_78);
    if (-1 < iVar1) {
      iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x30));
      for (; iVar1 < iVar2; iVar1 = iVar1 + 1) {
        lVar4 = FUN_180195ae0(*(undefined8 *)(param_1 + 0x30),iVar1);
        iVar3 = FUN_1801dbf30(lVar4,param_3);
        if (iVar3 != 0) {
          return '\0';
        }
        lVar8 = *(longlong *)(lVar4 + 0x28);
        if (lVar8 == 0) {
          if (param_4 == 0) {
LAB_1801cce09:
            if (param_2 != (longlong *)0x0) {
              *param_2 = lVar4;
            }
            return (*(int *)(lVar4 + 0x30) == 8) + '\x01';
          }
          uVar5 = FUN_1800b7fa0(param_1);
          iVar3 = FUN_1801a2de0(param_4,uVar5);
          if (iVar3 == 0) goto LAB_1801cce09;
        }
        else {
          lVar6 = param_4;
          if (param_4 == 0) {
            lVar6 = FUN_1800b7fa0(param_1);
            lVar8 = *(longlong *)(lVar4 + 0x28);
          }
          iVar9 = 0;
          iVar3 = FUN_1801958b0(lVar8);
          if (0 < iVar3) {
            do {
              piVar7 = (int *)FUN_180195ae0(*(undefined8 *)(lVar4 + 0x28),iVar9);
              if ((*piVar7 == 4) &&
                 (iVar3 = FUN_1801a2de0(lVar6,*(undefined8 *)(piVar7 + 2)), iVar3 == 0))
              goto LAB_1801cce09;
              iVar9 = iVar9 + 1;
              iVar3 = FUN_1801958b0(*(undefined8 *)(lVar4 + 0x28));
            } while (iVar9 < iVar3);
          }
        }
      }
    }
  }
  return '\0';
}



// ===== FUN_1801ccef0 @ 1801ccef0 (size 1013)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801ccef0(int param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  uint uVar15;
  int local_res8 [2];
  
  lVar1 = *param_2;
  if (param_1 == 1) {
LAB_1801cd216:
    puVar3 = PTR_DAT_1803be790;
    *(undefined8 *)(lVar1 + 0x88) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined4 *)(lVar1 + 0x7c) = 0;
    *(undefined4 *)(lVar1 + 0x90) = 0;
    *(undefined **)(lVar1 + 200) = puVar3;
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined4 *)(lVar1 + 0x94) = 0x807f;
    return 1;
  }
  if (param_1 == 3) {
    if (((*(longlong *)(lVar1 + 200) == 0) ||
        (pcVar2 = *(code **)(*(longlong *)(lVar1 + 200) + 0x10), pcVar2 == (code *)0x0)) ||
       (iVar4 = (*pcVar2)(lVar1), iVar4 != 0)) {
      FUN_1801d5ea0(*(undefined8 *)(lVar1 + 0x80));
      FUN_1801d6730(*(undefined8 *)(lVar1 + 0x88));
      FUN_1801bc3c0(*(undefined8 *)(lVar1 + 0x98));
      FUN_1801bc3c0(*(undefined8 *)(lVar1 + 0xa0));
      FUN_1801958f0(*(undefined8 *)(lVar1 + 0xa8),FUN_1801a48f0);
      return 1;
    }
    return 0;
  }
  if (param_1 == 4) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + 200) + 0x10);
    if ((pcVar2 != (code *)0x0) && (iVar4 = (*pcVar2)(lVar1), iVar4 == 0)) {
      return 0;
    }
    FUN_1801d5ea0(*(undefined8 *)(lVar1 + 0x80));
    FUN_1801d6730(*(undefined8 *)(lVar1 + 0x88));
    FUN_1801bc3c0(*(undefined8 *)(lVar1 + 0x98));
    FUN_1801bc3c0(*(undefined8 *)(lVar1 + 0xa0));
    FUN_1801958f0(*(undefined8 *)(lVar1 + 0xa8),FUN_1801a48f0);
    goto LAB_1801cd216;
  }
  if (param_1 != 5) {
    return 1;
  }
  uVar8 = FUN_18019db60();
  iVar4 = FUN_1801a1a40(lVar1,uVar8,lVar1 + 0xb0,0);
  if (iVar4 == 0) {
    *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
  }
  puVar9 = (undefined8 *)FUN_1801a3c70(lVar1,0x302,local_res8,0);
  iVar4 = 0;
  *(undefined8 **)(lVar1 + 0x88) = puVar9;
  if (puVar9 == (undefined8 *)0x0) {
    if (local_res8[0] != -1) goto LAB_1801cd050;
  }
  else {
    uVar15 = *(uint *)(lVar1 + 0x90);
    uVar5 = uVar15 | 1;
    *(uint *)(lVar1 + 0x90) = uVar5;
    iVar6 = *(int *)(puVar9 + 1);
    if (0 < iVar6) {
      uVar5 = uVar15 | 5;
      *(uint *)(lVar1 + 0x90) = uVar5;
    }
    bVar14 = 0 < iVar6;
    if (0 < *(int *)((longlong)puVar9 + 0xc)) {
      bVar14 = bVar14 + 1;
      uVar5 = uVar5 | 8;
      *(uint *)(lVar1 + 0x90) = uVar5;
    }
    if (0 < *(int *)((longlong)puVar9 + 0x1c)) {
      bVar14 = bVar14 + 1;
      uVar5 = uVar5 | 0x10;
      *(uint *)(lVar1 + 0x90) = uVar5;
    }
    if (1 < bVar14) {
      uVar5 = uVar5 | 2;
      *(uint *)(lVar1 + 0x90) = uVar5;
    }
    if (0 < *(int *)(puVar9 + 3)) {
      uVar5 = uVar5 | 0x20;
      *(uint *)(lVar1 + 0x90) = uVar5;
    }
    if (puVar9[2] != 0) {
      *(uint *)(lVar1 + 0x90) = uVar5 | 0x40;
      piVar10 = (int *)puVar9[2];
      iVar6 = *piVar10;
      if (iVar6 < 1) {
        uVar15 = *(uint *)(lVar1 + 0x94);
      }
      else {
        uVar15 = (uint)**(byte **)(piVar10 + 2);
        *(uint *)(lVar1 + 0x94) = (uint)**(byte **)(piVar10 + 2);
        piVar10 = (int *)puVar9[2];
        iVar6 = *piVar10;
      }
      if (1 < iVar6) {
        uVar15 = uVar15 | (uint)*(byte *)(*(longlong *)(piVar10 + 2) + 1) << 8;
      }
      *(uint *)(lVar1 + 0x94) = uVar15 & 0x807f;
    }
    uVar8 = FUN_1800b7fa0(lVar1);
    iVar6 = FUN_1801d6660(*puVar9,uVar8);
    if (iVar6 == 0) {
LAB_1801cd050:
      *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
    }
  }
  lVar11 = FUN_1801a3c70(lVar1,0x5a,local_res8);
  *(longlong *)(lVar1 + 0x80) = lVar11;
  if ((lVar11 == 0) && (local_res8[0] != -1)) {
    *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
  }
  lVar11 = FUN_1801a3c70(lVar1,0x58,local_res8);
  *(longlong *)(lVar1 + 0x98) = lVar11;
  if ((lVar11 == 0) && (local_res8[0] != -1)) {
    *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
  }
  lVar11 = FUN_1801a3c70(lVar1,0x8c,local_res8,0);
  *(longlong *)(lVar1 + 0xa0) = lVar11;
  if (lVar11 == 0) {
    if (local_res8[0] == -1) goto LAB_1801cd0ed;
  }
  else if (*(longlong *)(lVar1 + 0x98) != 0) goto LAB_1801cd0ed;
  *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x80;
LAB_1801cd0ed:
  uVar8 = *(undefined8 *)(lVar1 + 0x38);
  iVar6 = FUN_1801958b0(uVar8);
  if (0 < iVar6) {
    do {
      uVar12 = FUN_180195ae0(uVar8,iVar4);
      uVar13 = FUN_1801a3790(uVar12);
      iVar6 = FUN_1801b96c0(uVar13);
      if (iVar6 == 0x359) {
        *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x1000;
      }
      iVar7 = FUN_1801a3d50(uVar12);
      if ((((iVar7 != 0) && (iVar6 != 0x302)) && (iVar6 != 0x5a)) && (iVar6 != 0x8c)) {
        *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x200;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar6 = FUN_1801958b0(uVar8);
    } while (iVar4 < iVar6);
  }
  iVar4 = FUN_1801cd3f0(lVar1);
  if ((iVar4 == 0) ||
     ((pcVar2 = *(code **)(*(longlong *)(lVar1 + 200) + 8), pcVar2 != (code *)0x0 &&
      (iVar4 = (*pcVar2)(lVar1), iVar4 == 0)))) {
    return 0;
  }
  *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 0x100;
  return 1;
}



// ===== FUN_1801cd310 @ 1801cd310 (size 123)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cd310(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1801a3490(param_3);
    uVar3 = FUN_1800d2280(param_3);
    uVar2 = (**(code **)(lVar1 + 0x18))(param_1,param_2,uVar3,uVar2);
  }
  return uVar2;
}



// ===== FUN_1801cd3f0 @ 1801cd3f0 (size 420)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cd3f0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int local_res10 [2];
  
  uVar4 = FUN_1801a3490();
  iVar9 = 0;
  iVar2 = FUN_1801958b0(uVar4);
  lVar7 = 0;
  if (0 < iVar2) {
    do {
      lVar5 = FUN_180195ae0(uVar4,iVar9);
      lVar6 = FUN_1801a3c90(lVar5,0x303,local_res10,0);
      if (lVar6 == 0) {
        lVar6 = lVar7;
        if (local_res10[0] != -1) goto LAB_1801cd461;
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0xa8);
        if (lVar7 == 0) {
          lVar7 = FUN_1801957e0();
          *(longlong *)(param_1 + 0xa8) = lVar7;
          if (lVar7 == 0) goto LAB_1801cd585;
        }
        iVar2 = FUN_180195990(lVar7,lVar6);
        if (iVar2 == 0) {
LAB_1801cd585:
          FUN_1801a48f0(lVar6);
          return 0;
        }
      }
      *(longlong *)(lVar5 + 0x28) = lVar6;
      lVar7 = FUN_1801a3c90(lVar5,0x8d,local_res10,0);
      if ((lVar7 == 0) && (local_res10[0] != -1)) {
LAB_1801cd461:
        *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x80;
        return 1;
      }
      if (lVar7 == 0) {
        *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
      }
      else {
        uVar3 = FUN_1801dbeb0(lVar7);
        *(undefined4 *)(lVar5 + 0x30) = uVar3;
        FUN_1801bc3c0(lVar7);
      }
      uVar1 = *(undefined8 *)(lVar5 + 0x20);
      local_res10[0] = 0;
      iVar2 = FUN_1801958b0(uVar1);
      if (local_res10[0] < iVar2) {
        do {
          uVar8 = FUN_180195ae0(uVar1,local_res10[0]);
          iVar2 = FUN_1801a3d50(uVar8);
          if (iVar2 != 0) {
            uVar8 = FUN_1801a3790(uVar8);
            iVar2 = FUN_1801b96c0(uVar8);
            if (iVar2 != 0x303) {
              *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x200;
              break;
            }
          }
          local_res10[0] = local_res10[0] + 1;
          iVar2 = FUN_1801958b0(uVar1);
        } while (local_res10[0] < iVar2);
      }
      iVar9 = iVar9 + 1;
      iVar2 = FUN_1801958b0(uVar4);
      lVar7 = lVar6;
    } while (iVar9 < iVar2);
  }
  return 1;
}



// ===== FUN_1801cd5e0 @ 1801cd5e0 (size 157)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801cd5e0(longlong param_1)

{
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      FUN_1801cc640();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_180208890(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_1801958f0(*(undefined8 *)(param_1 + 0x98),FUN_1801a2830);
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_1801ae0a0(5,param_1,param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



// ===== FUN_1801cd710 @ 1801cd710 (size 669)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cd710(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801cd725;
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar4 = 0;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[0x12] = 0;
  param_1[5] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  if (param_2 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x78);
  }
  param_1[0x11] = lVar4;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x38), pcVar3 == (code *)0x0)) {
    pcVar3 = FUN_1801cf870;
  }
  param_1[9] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x30), pcVar3 == (code *)0x0)) {
    pcVar3 = FUN_1801a03a0;
  }
  param_1[8] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x28), pcVar3 == (code *)0x0)) {
    pcVar3 = FUN_180140190;
  }
  param_1[7] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x20), pcVar3 == (code *)0x0)) {
    pcVar3 = FUN_1801d13e0;
  }
  param_1[6] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x40), pcVar3 == (code *)0x0)) {
    pcVar3 = FUN_1801cfec0;
  }
  param_1[10] = (longlong)pcVar3;
  if ((param_2 == 0) || (lVar4 = *(longlong *)(param_2 + 0x48), lVar4 == 0)) {
    lVar4 = 0;
  }
  param_1[0xb] = lVar4;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x50), pcVar3 == (code *)0x0)) {
    pcVar3 = FUN_1801cf240;
  }
  param_1[0xc] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x58), pcVar3 == (code *)0x0)) {
    pcVar3 = FUN_1801cebd0;
  }
  param_1[0xd] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x60), pcVar3 == (code *)0x0)) {
    pcVar3 = FUN_1801cfcb0;
  }
  param_1[0xe] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x68), pcVar3 == (code *)0x0)) {
    pcVar3 = FUN_1801a0030;
  }
  param_1[0xf] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x70), pcVar3 == (code *)0x0)) {
    pcVar3 = FUN_1801a01b0;
  }
  param_1[0x10] = (longlong)pcVar3;
  lVar4 = FUN_1801cca70();
  param_1[4] = lVar4;
  if (lVar4 == 0) {
    uVar2 = 0x93f;
    goto LAB_1801cd975;
  }
  if (param_2 == 0) {
    *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 0x11;
LAB_1801cd8f3:
    uVar5 = FUN_1801cc980("default");
    iVar1 = FUN_1801cc6e0(param_1[4],uVar5);
    if (iVar1 != 0) {
      if (*(int *)(param_1[4] + 0x1c) == 0) {
        uVar2 = FUN_1801a5340(*(undefined4 *)(param_1[4] + 0x18));
        lVar4 = FUN_1801a52f0(uVar2);
        if (lVar4 != 0) {
          uVar2 = FUN_18019a5f0(lVar4);
          *(undefined4 *)(param_1[4] + 0x1c) = uVar2;
        }
      }
      iVar1 = FUN_1801ae440(5,param_1,param_1 + 0x1c);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = 0x963;
      goto LAB_1801cd975;
    }
  }
  else {
    iVar1 = FUN_1801cc6e0(lVar4,*(undefined8 *)(param_2 + 0x18));
    if (iVar1 != 0) goto LAB_1801cd8f3;
  }
  uVar2 = 0x950;
LAB_1801cd975:
  FUN_1801a70c0(0xb,0x8f,0x41,"crypto\\x509\\x509_vfy.c",uVar2,uVar6);
  FUN_1801cd5e0(param_1);
  return 0;
}



// ===== FUN_1801cd9b0 @ 1801cd9b0 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801cd9b0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180196100(0xf8,"crypto\\x509\\x509_vfy.c",0x8d2);
  if (lVar1 == 0) {
    FUN_1801a70c0(0xb,0x8e,0x41,"crypto\\x509\\x509_vfy.c",0x8d5);
    lVar1 = 0;
  }
  return lVar1;
}



// ===== FUN_1801cda00 @ 1801cda00 (size 248)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cda00(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1801cda1a;
  if (param_3 == 0) {
    param_3 = param_2;
  }
  else if (param_2 == 0) {
    param_2 = param_3;
  }
  if (param_3 == 0) {
LAB_1801cda9e:
    if (param_4 != 0) {
LAB_1801cdaa2:
      iVar1 = FUN_1801e8b80(param_4);
      if (iVar1 == -1) {
        uVar4 = 0x8c4;
        uVar3 = 0x78;
        goto LAB_1801cda55;
      }
    }
    if ((param_3 != 0) && (*(int *)(*(longlong *)(param_1 + 0x20) + 0x18) == 0)) {
      *(int *)(*(longlong *)(param_1 + 0x20) + 0x18) = param_3;
    }
    if ((param_4 != 0) && (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) == 0)) {
      *(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) = param_4;
    }
    uVar5 = 1;
  }
  else {
    iVar1 = FUN_1801a5340(param_3);
    if (iVar1 != -1) {
      lVar2 = FUN_1801a52f0(iVar1);
      if (*(int *)(lVar2 + 4) == 0) {
        iVar1 = FUN_1801a5340(param_2);
        if (iVar1 == -1) {
          uVar4 = 0x8b7;
          goto LAB_1801cda4f;
        }
        lVar2 = FUN_1801a52f0(iVar1);
      }
      if (param_4 == 0) {
        param_4 = *(int *)(lVar2 + 4);
        goto LAB_1801cda9e;
      }
      goto LAB_1801cdaa2;
    }
    uVar4 = 0x8af;
LAB_1801cda4f:
    uVar3 = 0x79;
LAB_1801cda55:
    FUN_1801a70c0(0xb,0x86,uVar3,"crypto\\x509\\x509_vfy.c",uVar4,uVar5);
    uVar5 = 0;
  }
  return uVar5;
}



// ===== FUN_1801cdbb0 @ 1801cdbb0 (size 268)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cdbb0(int *param_1,__time64_t *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int local_res8 [4];
  int local_res18 [2];
  __time64_t local_res20;
  
  uVar2 = 0;
  if (param_1[1] == 0x17) {
    iVar1 = *param_1;
    if (iVar1 != 0xd) {
      return 0;
    }
  }
  else {
    if (param_1[1] != 0x18) {
      return 0;
    }
    if (*param_1 != 0xf) {
      return 0;
    }
    iVar1 = 0xf;
  }
  iVar4 = 0;
  if (0 < iVar1 + -1) {
    lVar3 = 0;
    do {
      iVar1 = FUN_1801baaa0(*(undefined1 *)(*(longlong *)(param_1 + 2) + lVar3));
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = *param_1;
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar4 < iVar1 + -1);
  }
  if (*(char *)(*(longlong *)(param_1 + 2) + -1 + (longlong)iVar1) != 'Z') {
    return 0;
  }
  if (param_2 == (__time64_t *)0x0) {
    _time64(&local_res20);
  }
  else {
    local_res20 = *param_2;
  }
  lVar3 = FUN_18019c140(0,local_res20,0,0);
  if (((lVar3 != 0) && (iVar1 = FUN_18019c230(local_res8,local_res18,param_1,lVar3), iVar1 != 0)) &&
     ((local_res8[0] < 0 || (uVar2 = 0xffffffff, local_res18[0] < 0)))) {
    uVar2 = 1;
  }
  FUN_18019c330(lVar3);
  return uVar2;
}



// ===== FUN_1801cdcc0 @ 1801cdcc0 (size 274)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801cdcc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1801cdcda;
  if ((param_1 == 0) || (iVar1 = FUN_18019e280(), iVar1 != 0)) {
    iVar1 = 0;
    iVar2 = FUN_1801958b0(param_2);
    if (iVar2 < 1) {
      uVar5 = 0x7b7;
      uVar3 = 0x6b;
LAB_1801cdda7:
      FUN_1801a70c0(0xb,0x6e,uVar3,"crypto\\x509\\x509_vfy.c",uVar5,uVar6);
      return 0;
    }
    do {
      uVar3 = FUN_180195ae0(param_2,iVar1);
      lVar4 = FUN_1801a3460(uVar3);
      if (lVar4 == 0) {
        uVar5 = 0x7af;
        uVar3 = 0x6c;
        goto LAB_1801cdda7;
      }
      iVar2 = FUN_18019e280(lVar4);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
      iVar2 = FUN_1801958b0(param_2);
    } while (iVar1 < iVar2);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      uVar6 = FUN_180195ae0(param_2,iVar1);
      uVar6 = FUN_1801a3460(uVar6);
      FUN_18019dd80(uVar6,lVar4);
    }
    if (param_1 != 0) {
      FUN_18019dd80(param_1,lVar4);
    }
  }
  return 1;
}



