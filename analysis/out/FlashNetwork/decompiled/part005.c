// ===== FUN_18016e070 @ 18016e070 (size 264)

undefined4 FUN_18016e070(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x1390) == 0) {
    return 0x43;
  }
  *(undefined4 *)(lVar1 + 0x3c0) = 1;
  lVar2 = (*(code *)PTR_malloc_1803bd530)(0x9000);
  *(longlong *)(lVar1 + 0x3f0) = lVar2;
  if (lVar2 != 0) {
    FUN_180152410(lVar1,0);
    pcVar3 = strchr(*(char **)(lVar1 + 0x150),0x2f);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = strchr(*(char **)(lVar1 + 0x150),0x5c);
    }
    if (pcVar3 == (char *)0x0) {
      *(undefined8 *)(lVar1 + 0x3c8) = *(undefined8 *)(lVar1 + 0x150);
      lVar2 = (*(code *)PTR__strdup_1803bd548)(*(undefined8 *)(lVar1 + 0x70));
      *(longlong *)(lVar1 + 0x3d0) = lVar2;
      uVar4 = 0;
      if (lVar2 == 0) {
        uVar4 = 0x1b;
      }
      return uVar4;
    }
    *(char **)(lVar1 + 0x3c8) = pcVar3 + 1;
    lVar2 = (*(code *)PTR__strdup_1803bd548)(*(undefined8 *)(lVar1 + 0x150));
    *(longlong *)(lVar1 + 0x3d0) = lVar2;
    if (lVar2 != 0) {
      pcVar3[lVar2 - *(longlong *)(lVar1 + 0x150)] = '\0';
      return 0;
    }
  }
  return 0x1b;
}



// ===== FUN_18016e180 @ 18016e180 (size 528)

ulonglong FUN_18016e180(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  char local_res8 [8];
  longlong local_res18 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_res18[0] = 0;
  if (*(int *)(lVar1 + 0x3c0) == 1) {
    if ((*(byte *)(*(longlong *)(lVar1 + 0x308) + 0x8c) & 1) != 0) {
      local_res8[0] = '\0';
      uVar4 = FUN_1801502c0(param_1,0,0,local_res8);
      if (((int)uVar4 != 0) && ((int)uVar4 != 0x51)) {
        return uVar4;
      }
      if (local_res8[0] == '\0') {
        return 0;
      }
    }
    uVar3 = FUN_18015eee0(param_1);
    uVar4 = (ulonglong)uVar3;
    if (uVar3 != 0) goto LAB_18016e253;
    FUN_18016ed70(param_1,*(undefined8 *)(param_1 + 0xce8),0x72,0xf);
    lVar2 = *(longlong *)(param_1 + 0xce8);
    *(undefined8 *)(lVar2 + 0x24) = DAT_180303f18;
    *(undefined4 *)(lVar2 + 0x2c) = DAT_180303f20;
    *(undefined2 *)(lVar2 + 0x30) = DAT_180303f24;
    *(undefined1 *)(lVar2 + 0x32) = DAT_180303f26;
    uVar3 = FUN_18016ee10(param_1,0x33,0);
    uVar4 = (ulonglong)uVar3;
    if (uVar3 != 0) goto LAB_18016e253;
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x3c0) = 2;
  }
  uVar3 = FUN_18016ee80(param_1,local_res18);
  uVar4 = (ulonglong)uVar3;
  if ((uVar3 != 0) && (uVar3 != 0x51)) {
LAB_18016e253:
    FUN_180152410(lVar1,1);
    return uVar4;
  }
  if (local_res18[0] != 0) {
    if (*(int *)(lVar1 + 0x3c0) == 2) {
      if ((*(ulonglong *)(lVar1 + 0x410) < 0x51) || (*(int *)(local_res18[0] + 9) != 0)) {
        FUN_180152410(lVar1,1);
        return 7;
      }
      *(undefined8 *)(lVar1 + 0x3e0) = *(undefined8 *)(local_res18[0] + 0x49);
      *(undefined4 *)(lVar1 + 1000) = *(undefined4 *)(local_res18[0] + 0x34);
      uVar3 = FUN_18016f070(param_1);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 != 0) goto LAB_18016e253;
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x3c0) = 3;
    }
    else if (*(int *)(lVar1 + 0x3c0) == 3) {
      if (*(int *)(local_res18[0] + 9) == 0) {
        *(undefined2 *)(lVar1 + 0x3ec) = *(undefined2 *)(local_res18[0] + 0x20);
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x3c0) = 4;
        *param_2 = 1;
        *(undefined8 *)(lVar1 + 0x410) = 0;
        return 0;
      }
      FUN_180152410(lVar1);
      return 0x43;
    }
    *(undefined8 *)(lVar1 + 0x410) = 0;
  }
  return 0;
}



// ===== FUN_18016e3b0 @ 18016e3b0 (size 1983)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18016e3b0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar8;
  longlong lVar7;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined1 auStack_4f8 [32];
  ushort local_4d8;
  int *local_4d0;
  undefined8 local_4c8;
  longlong local_498 [2];
  undefined2 local_488 [3];
  uint3 uStack_482;
  short local_47f;
  undefined2 local_47d;
  char local_47b;
  undefined2 uStack_47a;
  undefined1 auStack_478 [5];
  undefined4 auStack_473 [2];
  undefined4 local_468;
  undefined4 local_464;
  short local_457;
  char local_455 [19];
  undefined1 auStack_442 [1018];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_4f8;
  local_4d0 = *(int **)(param_1 + 0x1a8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar14 = 7;
  local_498[0] = 0;
  local_4c8 = param_2;
  if ((*(char *)(param_1 + 0x13c8) != '\0') && (*(longlong *)(param_1 + 0x1200) < 0)) {
    FUN_180150e00(param_1,"SMB upload needs to know the size up front");
    return 0x37;
  }
  if (*local_4d0 == 0) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(*(longlong *)(lVar2 + 0x70) + lVar10) != '\0');
    lVar7 = -1;
    do {
      lVar8 = lVar7;
      lVar7 = lVar8 + 1;
    } while (*(char *)(*(longlong *)(lVar2 + 0x3d8) + lVar7) != '\0');
    if (0x400 < (ulonglong)(lVar8 + 0xb + lVar10)) {
      FUN_180152410(lVar2,1);
      return 0x3f;
    }
    memset(local_488,0,0x40b);
    pcVar12 = &local_47b;
    local_47d = DAT_180303f30;
    local_47b = DAT_180303f32;
    local_488[0] = 0xff04;
    uStack_482 = uStack_482 & 0xff;
    pcVar11 = *(char **)(lVar2 + 0x70);
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar12 = cVar1;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    lVar10 = -1;
    do {
      lVar7 = lVar10;
      lVar10 = lVar7 + 1;
    } while (*(char *)(*(longlong *)(lVar2 + 0x70) + lVar10) != '\0');
    *(undefined2 *)(auStack_478 + lVar7 + -2) = 0x5c;
    pcVar11 = auStack_478 + lVar7 + -1;
    pcVar12 = *(char **)(lVar2 + 0x3d8);
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar11 = cVar1;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(*(longlong *)(lVar2 + 0x3d8) + lVar7) != '\0');
    puVar13 = (undefined4 *)(auStack_478 + lVar7 + lVar10 + -1);
    *puVar13 = DAT_180303f34;
    *(undefined2 *)(puVar13 + 1) = DAT_180303f38;
    lVar10 = (longlong)puVar13 - (longlong)&local_47d;
    local_47f = (short)lVar10 + 6;
    uVar5 = FUN_18015eee0(param_1);
    if (uVar5 != 0) {
      FUN_180152410(lVar2,1);
      return (ulonglong)uVar5;
    }
    FUN_18016ed70(param_1,*(undefined8 *)(param_1 + 0xce8),0x75,lVar10 + 0x11U);
    memcpy((void *)(*(longlong *)(param_1 + 0xce8) + 0x24),local_488,lVar10 + 0x11U);
    uVar5 = FUN_18016ee10(param_1,lVar10 + 0x35,0);
    if (uVar5 != 0) goto LAB_18016e5f1;
    **(undefined4 **)(param_1 + 0x1a8) = 1;
  }
  uVar5 = FUN_18016ee80(param_1,local_498);
  lVar10 = local_498[0];
  if ((uVar5 != 0) && (uVar5 != 0x51)) {
LAB_18016e5f1:
    FUN_180152410(lVar2,1);
    return (ulonglong)uVar5;
  }
  if (local_498[0] == 0) {
    return 0;
  }
  switch(*local_4d0) {
  case 1:
    if (*(int *)(local_498[0] + 9) != 0) {
      local_4d0[5] = 0x4e;
      if (*(int *)(local_498[0] + 9) == 0x50001) {
        local_4d0[5] = 9;
      }
      goto switchD_18016e652_caseD_6;
    }
    iVar14 = 2;
    *(undefined2 *)(local_4d0 + 4) = *(undefined2 *)(local_498[0] + 0x1c);
    *(undefined8 *)(lVar2 + 0x410) = 0;
    pcVar11 = *(char **)(*(longlong *)(param_1 + 0x1a8) + 8);
    lVar10 = -1;
    do {
      lVar7 = lVar10;
      lVar10 = lVar7 + 1;
    } while (pcVar11[lVar10] != '\0');
    if (0x400 < lVar7 + 2U) {
      FUN_180152410(lVar2,1);
      return 0x3f;
    }
    memset(local_488,0,0x433);
    local_488[0] = 0xff18;
    lVar10 = -1;
    do {
      lVar7 = lVar10;
      lVar10 = lVar7 + 1;
    } while (pcVar11[lVar10] != '\0');
    uStack_482 = CONCAT12(uStack_482._2_1_,(short)lVar10);
    local_468 = 7;
    if (*(char *)(param_1 + 0x13c8) == '\0') {
      auStack_478._0_4_ = 0x80000000;
      local_464 = 1;
    }
    else {
      auStack_478._0_4_ = 0xc0000000;
      local_464 = 5;
    }
    local_457 = (short)lVar7 + 2;
    lVar10 = -(longlong)pcVar11;
    do {
      cVar1 = *pcVar11;
      pcVar11[(longlong)(local_455 + lVar10)] = cVar1;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar5 = FUN_18015eee0(param_1);
    if (uVar5 == 0) {
      FUN_18016ed70(param_1,*(undefined8 *)(param_1 + 0xce8),0xa2,lVar7 + 0x35);
      memcpy((void *)(*(longlong *)(param_1 + 0xce8) + 0x24),local_488,lVar7 + 0x35);
      uVar5 = FUN_18016ee10(param_1,lVar7 + 0x59,0);
    }
    break;
  case 2:
    if ((*(int *)(local_498[0] + 9) == 0) && (99 < *(ulonglong *)(lVar2 + 0x410))) {
      *(undefined2 *)((longlong)local_4d0 + 0x12) = *(undefined2 *)(local_498[0] + 0x2a);
      *(undefined8 *)(param_1 + 0x148) = 0;
      if (*(char *)(param_1 + 0x13c8) != '\0') {
        *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x1200);
        FUN_180160940(param_1);
        *(undefined8 *)(lVar2 + 0x410) = 0;
        uVar6 = 2;
        goto LAB_18016e9c6;
      }
      lVar7 = *(longlong *)(local_498[0] + 0x5c);
      *(longlong *)(param_1 + 0xf0) = lVar7;
      if (lVar7 < 0) {
        local_4d0[5] = 8;
        uVar6 = 3;
        *(undefined8 *)(lVar2 + 0x410) = 0;
        goto LAB_18016e9c6;
      }
      FUN_1801608f0(param_1,lVar7);
      if (*(char *)(param_1 + 0xac2) != '\0') {
        lVar10 = *(longlong *)(lVar10 + 0x48) + -0x19db1ded53e8000;
        lVar10 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar10),8) + lVar10;
        *(longlong *)(param_1 + 0x13e8) = (lVar10 >> 0x17) - (lVar10 >> 0x3f);
      }
      iVar14 = 3;
LAB_18016e9a2:
      uVar6 = iVar14 - 2;
      *(undefined8 *)(lVar2 + 0x410) = 0;
      if (uVar6 < 6) {
LAB_18016e9c6:
                    /* WARNING: Could not recover jumptable at 0x00018016e9d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*(code *)((ulonglong)*(uint *)(&DAT_18016ece8 + (longlong)(int)uVar6 * 4) +
                          0x180000000))
                          ((code *)((ulonglong)*(uint *)(&DAT_18016ece8 + (longlong)(int)uVar6 * 4)
                                   + 0x180000000),local_4d0);
        return uVar9;
      }
      break;
    }
    local_4d0[5] = 0x4e;
    if (*(int *)(local_498[0] + 9) == 0x50001) {
      local_4d0[5] = 9;
    }
  case 5:
    *(undefined8 *)(lVar2 + 0x410) = 0;
    iVar14 = 6;
    uVar5 = FUN_18015eee0(param_1);
    if (uVar5 == 0) {
      FUN_18016ed70(param_1,*(undefined8 *)(param_1 + 0xce8),0x71,3);
      lVar10 = *(longlong *)(param_1 + 0xce8);
      *(undefined2 *)(lVar10 + 0x24) = 0;
      *(undefined1 *)(lVar10 + 0x26) = 0;
      uVar5 = FUN_18016ee10(param_1,0x27,0);
    }
    break;
  case 3:
    if ((*(int *)(local_498[0] + 9) == 0) && (0x31 < *(ulonglong *)(lVar2 + 0x410))) {
      uVar4 = FUN_18018bb90(local_498[0] + 0x2f);
      uVar9 = (ulonglong)uVar4;
      local_4d8 = uVar4;
      uVar3 = FUN_18018bb90(lVar10 + 0x31);
      if (uVar4 == 0) {
LAB_18016e8ed:
        *(longlong *)(param_1 + 0x148) = *(longlong *)(param_1 + 0x148) + uVar9;
        *(ulonglong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + uVar9;
        iVar14 = FUN_1801608b0(param_1);
        if (iVar14 == 0) {
          iVar14 = 3;
          if (local_4d8 < 0x8000) {
            iVar14 = 5;
          }
          uVar5 = 0;
          goto LAB_18016e9a2;
        }
        local_4d0[5] = iVar14;
      }
      else if (*(ulonglong *)(lVar2 + 0x410) < (ulonglong)uVar3 + 4 + uVar9) {
        FUN_180150e00(param_1,"Invalid input packet");
        local_4d0[5] = 0x38;
      }
      else {
        iVar14 = FUN_180151330(param_1,1,lVar10 + 4 + (ulonglong)uVar3,uVar9);
        if (iVar14 == 0) goto LAB_18016e8ed;
        local_4d0[5] = iVar14;
      }
    }
    else {
      local_4d0[5] = 0x38;
    }
    goto LAB_18016ec05;
  case 4:
    if ((*(int *)(local_498[0] + 9) == 0) && (0x29 < *(ulonglong *)(lVar2 + 0x410))) {
      uVar4 = FUN_18018bb90(local_498[0] + 0x29);
      *(longlong *)(param_1 + 0x148) = *(longlong *)(param_1 + 0x148) + (ulonglong)uVar4;
      *(ulonglong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + (ulonglong)uVar4;
      FUN_180160930(param_1);
      iVar14 = (*(longlong *)(param_1 + 0xf0) <= *(longlong *)(param_1 + 0x100)) + 4;
      goto LAB_18016e9a2;
    }
    local_4d0[5] = 0x19;
LAB_18016ec05:
    *(undefined8 *)(lVar2 + 0x410) = 0;
    iVar14 = 5;
    local_4c8 = (undefined1 *)
                (ulonglong)CONCAT21(*(undefined2 *)(*(longlong *)(param_1 + 0x1a8) + 0x12),3);
    uVar5 = FUN_18015eee0(param_1);
    if (uVar5 == 0) {
      FUN_18016ed70(param_1,*(undefined8 *)(param_1 + 0xce8),4,9);
      lVar10 = *(longlong *)(param_1 + 0xce8);
      *(undefined1 **)(lVar10 + 0x24) = local_4c8;
      *(undefined1 *)(lVar10 + 0x2c) = 0;
      uVar5 = FUN_18016ee10(param_1,0x2d,0);
    }
    break;
  case 6:
switchD_18016e652_caseD_6:
    *(undefined8 *)(lVar2 + 0x410) = 0;
    uVar5 = local_4d0[5];
    *local_4c8 = 1;
    break;
  default:
    *(undefined8 *)(lVar2 + 0x410) = 0;
    goto LAB_18016ec97;
  }
  if (uVar5 == 0) {
    **(int **)(param_1 + 0x1a8) = iVar14;
LAB_18016ec97:
    uVar9 = 0;
  }
  else {
    FUN_180152410(lVar2,1);
    uVar9 = (ulonglong)uVar5;
  }
  return uVar9;
}



// ===== FUN_18016ed00 @ 18016ed00 (size 89)

undefined8 FUN_18016ed00(undefined8 param_1,longlong param_2)

{
  (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_2 + 0x3d8));
  *(undefined8 *)(param_2 + 0x3d8) = 0;
  (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_2 + 0x3d0));
  *(undefined8 *)(param_2 + 0x3d0) = 0;
  (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_2 + 0x3f0));
  *(undefined8 *)(param_2 + 0x3f0) = 0;
  return 0;
}



// ===== FUN_18016ed70 @ 18016ed70 (size 146)

void FUN_18016ed70(longlong param_1,undefined8 *param_2,undefined1 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 uVar3;
  DWORD DVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  uVar3 = Ordinal_9(param_4 + 0x20);
  *(undefined2 *)((longlong)param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 4) = 0x424d53ff;
  *(undefined1 *)(param_2 + 1) = param_3;
  *(undefined1 *)((longlong)param_2 + 0xd) = 0x18;
  *(undefined2 *)((longlong)param_2 + 0xe) = 0x41;
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)(lVar1 + 0x3ec);
  *(undefined2 *)((longlong)param_2 + 0x1c) = *(undefined2 *)(lVar2 + 0x10);
  DVar4 = GetCurrentProcessId();
  *(short *)(param_2 + 2) = (short)(DVar4 >> 0x10);
  *(short *)((longlong)param_2 + 0x1e) = (short)DVar4;
  return;
}



// ===== FUN_18016ee10 @ 18016ee10 (size 107)

undefined8 FUN_18016ee10(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = FUN_180151380(param_1,0,*(undefined8 *)(param_1 + 0xce8),param_2,&local_res8);
  if ((int)uVar2 == 0) {
    if (local_res8 != param_2) {
      *(longlong *)(lVar1 + 0x400) = param_2;
      *(longlong *)(lVar1 + 0x408) = local_res8;
    }
    *(undefined8 *)(lVar1 + 0x3f8) = param_3;
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_18016ee80 @ 18016ee80 (size 491)

undefined8 FUN_18016ee80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  *param_2 = 0;
  if (*(longlong *)(lVar2 + 0x400) == 0) {
    uVar6 = *(ulonglong *)(lVar2 + 0x3f8);
    if (uVar6 == 0) goto LAB_18016ef86;
    local_res8 = (ulonglong)*(uint *)(param_1 + 0x6f0);
    if (uVar6 <= *(uint *)(param_1 + 0x6f0)) {
      local_res8 = uVar6;
    }
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0xce8);
    uVar4 = FUN_18015e610(param_1,local_res8,&local_res8);
    if (((int)uVar4 != 0) && ((int)uVar4 != 0x51)) {
      return uVar4;
    }
    if (local_res8 == 0) {
      return 0;
    }
    *(longlong *)(lVar2 + 0x3f8) = *(longlong *)(lVar2 + 0x3f8) - local_res8;
    *(ulonglong *)(lVar2 + 0x400) = local_res8;
    *(undefined8 *)(lVar2 + 0x408) = 0;
    if (local_res8 == 0) goto LAB_18016ef86;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar6 = *(longlong *)(lVar3 + 0x400) - *(longlong *)(lVar3 + 0x408);
  if (*(longlong *)(lVar3 + 0x400) != 0) {
    uVar4 = FUN_180151380(param_1,0,*(longlong *)(param_1 + 0xce8) + *(longlong *)(lVar3 + 0x408),
                          uVar6,&local_res8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (local_res8 == uVar6) {
      *(undefined8 *)(lVar3 + 0x400) = 0;
    }
    else {
      *(longlong *)(lVar3 + 0x408) = *(longlong *)(lVar3 + 0x408) + local_res8;
    }
  }
LAB_18016ef86:
  if ((*(longlong *)(lVar2 + 0x400) != 0) || (*(longlong *)(lVar2 + 0x3f8) != 0)) {
    return 0x51;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = *(longlong *)(lVar2 + 0x3f0);
  uVar4 = FUN_1801513e0(param_1,*(undefined8 *)(lVar2 + 0x1a8),*(longlong *)(lVar2 + 0x410) + lVar3,
                        0x9000 - *(longlong *)(lVar2 + 0x410),&local_res8);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if ((local_res8 != 0) &&
     (*(longlong *)(lVar2 + 0x410) = *(longlong *)(lVar2 + 0x410) + local_res8,
     3 < *(ulonglong *)(lVar2 + 0x410))) {
    uVar6 = FUN_18018bb80(lVar3 + 2);
    uVar6 = (uVar6 & 0xffff) + 4;
    if (uVar6 <= *(ulonglong *)(lVar2 + 0x410)) {
      if (((0x24 < uVar6) &&
          (lVar2 = (ulonglong)*(byte *)(lVar3 + 0x24) * 2, lVar1 = lVar2 + 0x25,
          lVar2 + 0x27U <= uVar6)) &&
         (uVar5 = FUN_18018bb90(lVar1 + lVar3), uVar6 < (uVar5 & 0xffff) + 2 + lVar1)) {
        return 0x1a;
      }
      *param_2 = lVar3;
    }
  }
  return 0;
}



// ===== FUN_18016f070 @ 18016f070 (size 643)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18016f070(longlong param_1)

{
  char cVar1;
  longlong lVar3;
  longlong lVar2;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_4c8 [32];
  undefined2 local_4a8 [2];
  undefined4 local_4a3;
  undefined2 local_49f;
  undefined4 local_49d;
  undefined4 local_499;
  undefined4 local_491;
  short local_48d;
  undefined8 local_48b;
  undefined8 uStack_483;
  undefined8 local_47b;
  undefined4 local_473;
  undefined4 uStack_46f;
  undefined4 uStack_46b;
  undefined4 uStack_467;
  undefined8 local_463;
  char local_45b [12];
  char acStack_44f [4];
  char acStack_44b [30];
  undefined1 auStack_42d [36];
  undefined1 auStack_409 [897];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_4c8;
  lVar7 = *(longlong *)(param_1 + 0x20);
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(*(longlong *)(lVar7 + 0x3d0) + lVar5) != '\0');
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (*(char *)(*(longlong *)(lVar7 + 0x3c8) + lVar2) != '\0');
  if ((ulonglong)(lVar3 + 0x40 + lVar5) < 0x401) {
    FUN_18018b480(*(undefined8 *)(lVar7 + 0x158),local_58);
    FUN_18018b3d0(local_58,lVar7 + 0x3e0,&local_88);
    FUN_18018b680(*(undefined8 *)(lVar7 + 0x158),local_40);
    FUN_18018b3d0(local_40,lVar7 + 0x3e0,&local_70);
    memset(local_4a8,0,0x41d);
    pcVar8 = local_45b;
    local_49f = 1;
    local_4a8[0] = 0xff0d;
    local_4a3 = 0x19000;
    local_49d = *(undefined4 *)(lVar7 + 1000);
    local_48b = local_88;
    uStack_483 = uStack_80;
    local_491 = 8;
    local_47b = local_78;
    local_473 = local_70;
    uStack_46f = uStack_6c;
    uStack_46b = uStack_68;
    uStack_467 = uStack_64;
    local_499 = 0x180018;
    local_463 = local_60;
    pcVar6 = *(char **)(lVar7 + 0x3c8);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    lVar5 = -1;
    do {
      lVar2 = lVar5;
      lVar5 = lVar2 + 1;
    } while (*(char *)(*(longlong *)(lVar7 + 0x3c8) + lVar5) != '\0');
    pcVar6 = *(char **)(lVar7 + 0x3d0);
    pcVar9 = local_45b + lVar2 + 2;
    pcVar8 = pcVar9;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    lVar5 = -1;
    do {
      lVar2 = lVar5;
      lVar5 = lVar2 + 1;
    } while (*(char *)(*(longlong *)(lVar7 + 0x3d0) + 1 + lVar2) != '\0');
    pcVar6 = pcVar9 + lVar2 + 2;
    pcVar6[0] = 'W';
    pcVar6[1] = 'i';
    pcVar6[2] = 'n';
    pcVar6[3] = 'd';
    pcVar6[4] = 'o';
    pcVar6[5] = 'w';
    pcVar6[6] = 's';
    pcVar6[7] = '\0';
    *(undefined4 *)(pcVar9 + lVar2 + 10) = DAT_180303f28;
    pcVar9[lVar2 + 0xe] = DAT_180303f2c;
    lVar7 = (longlong)(pcVar9 + lVar2 + 10) - (longlong)&local_48b;
    local_48d = (short)lVar7 + 5;
    uVar4 = FUN_18015eee0(param_1);
    if ((int)uVar4 == 0) {
      FUN_18016ed70(param_1,*(undefined8 *)(param_1 + 0xce8),0x73,lVar7 + 0x22U);
      memcpy((void *)(*(longlong *)(param_1 + 0xce8) + 0x24),local_4a8,lVar7 + 0x22U);
      uVar4 = FUN_18016ee10(param_1,lVar7 + 0x46,0);
    }
  }
  else {
    uVar4 = 0x3f;
  }
  return uVar4;
}



// ===== FUN_18016f300 @ 18016f300 (size 95)

int FUN_18016f300(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_2 = 0;
  iVar2 = FUN_18016f7d0();
  if (iVar2 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(undefined4 *)(lVar1 + 0x3c0) = 0;
    *(undefined4 *)(lVar1 + 0x3c4) = 2;
    return 0;
  }
  FUN_180150e00(param_1,"Error %d sending MQTT CONNECT request",iVar2);
  return iVar2;
}



// ===== FUN_18016f390 @ 18016f390 (size 939)

int FUN_18016f390(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  byte local_res8 [8];
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar13;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar12 = *(longlong *)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x1a8);
  local_res18 = *(longlong *)(param_1 + 0xce0);
  uVar3 = *(undefined8 *)(lVar12 + 0x1a8);
  *param_2 = 0;
  local_res20 = lVar12;
  if (puVar2[1] != 0) {
    uVar4 = *puVar2;
    iVar5 = FUN_180170080(param_1,uVar4);
    (*(code *)PTR_free_1803bd538)(uVar4);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  iVar5 = 0;
  FUN_180150ee0(param_1,"mqtt_doing: state [%d]",*(undefined4 *)(lVar12 + 0x3c0));
  lVar11 = 1;
  switch(*(undefined4 *)(lVar12 + 0x3c0)) {
  case 0:
    iVar5 = FUN_1801513e0(param_1,uVar3,puVar2 + 3,1,&local_res10);
    if (iVar5 != 0) break;
    if (local_res10 == 0) {
      FUN_180150e00(param_1,"Connection disconnected");
      *param_2 = 1;
      iVar5 = 0x38;
      break;
    }
    FUN_180150d10(param_1,1,puVar2 + 3,1);
    puVar2[2] = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x3c0) = 1;
  case 1:
    do {
      iVar5 = FUN_1801513e0(param_1,uVar3,local_res8,1,&local_res10);
      if (local_res10 == 0) goto LAB_18016f54d;
      FUN_180150d10(param_1,1,local_res8,1);
      *(byte *)(local_res18 + puVar2[2]) = local_res8[0];
      uVar6 = puVar2[2] + 1;
      puVar2[2] = uVar6;
    } while (((local_res8[0] & 0x80) != 0) && (uVar6 < 4));
    if ((local_res10 == 0) || ((local_res8[0] & 0x80) == 0)) {
LAB_18016f54d:
      if (iVar5 == 0) {
        uVar6 = puVar2[2];
        lVar12 = 0;
        bVar10 = 0x80;
        uVar9 = 0;
        if (uVar6 != 0) {
          do {
            if (-1 < (char)bVar10) break;
            bVar10 = *(byte *)(uVar9 + local_res18);
            uVar9 = uVar9 + 1;
            lVar7 = (ulonglong)(bVar10 & 0x7f) * lVar11;
            lVar11 = lVar11 << 7;
            lVar12 = lVar12 + lVar7;
          } while (uVar9 < uVar6);
        }
        puVar2[4] = lVar12;
        puVar2[2] = 0;
        if (lVar12 == 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x3c0) = 0;
          if (*(char *)(puVar2 + 3) == -0x20) {
            FUN_180150ee0(param_1,"Got DISCONNECT");
LAB_18016f71b:
            *param_2 = 1;
          }
        }
        else {
          lVar12 = *(longlong *)(param_1 + 0x20);
          iVar1 = *(int *)(local_res20 + 0x3c4);
          *(int *)(lVar12 + 0x3c0) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)(lVar12 + 0x3c4) = 7;
          }
        }
      }
    }
    else {
      iVar5 = 8;
    }
    break;
  case 2:
    lVar12 = *(longlong *)(param_1 + 0x1a8);
    iVar5 = FUN_18016ff70(param_1,2);
    if (iVar5 == 0) {
      lVar12 = lVar12 + 0x28;
      pcVar8 = (char *)FUN_18008d530(lVar12);
      FUN_180150d10(param_1,1,pcVar8,2);
      if ((*pcVar8 == '\0') && (pcVar8[1] == '\0')) {
        FUN_180170030(param_1,2);
        if (*(char *)(param_1 + 0x13b2) == '\x01') {
          iVar5 = FUN_18016fb20();
          if (iVar5 == 0) {
            puVar2 = *(undefined8 **)(param_1 + 0x1a8);
            iVar5 = FUN_180170080(param_1,&DAT_1803041e8,2);
            (*(code *)PTR_free_1803bd538)(*puVar2);
            *puVar2 = 0;
            FUN_18013ff30(puVar2 + 5);
            *param_2 = 1;
          }
          *(undefined4 *)(local_res20 + 0x3c4) = 0;
        }
        else {
          iVar5 = FUN_180170120(param_1);
          if (iVar5 == 0) {
            lVar12 = *(longlong *)(param_1 + 0x20);
            *(undefined4 *)(lVar12 + 0x3c0) = 0;
            *(undefined4 *)(lVar12 + 0x3c4) = 3;
          }
        }
      }
      else {
        FUN_180150e00(param_1,"Expected %02x%02x but got %02x%02x",0,0,CONCAT44(uVar13,(int)*pcVar8)
                      ,(int)pcVar8[1]);
        FUN_18013ff90(lVar12);
        iVar5 = 8;
      }
    }
    break;
  case 3:
  case 5:
  case 6:
    iVar5 = FUN_18016fce0(param_1,param_2);
    break;
  default:
    FUN_180150e00(param_1,"State not handled yet");
    goto LAB_18016f71b;
  }
  iVar1 = 0;
  if (iVar5 != 0x51) {
    iVar1 = iVar5;
  }
  return iVar1;
}



// ===== FUN_18016f770 @ 18016f770 (size 83)

undefined4 FUN_18016f770(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_calloc_1803bd550)(1);
  if (lVar1 == 0) {
    return 0x1b;
  }
  FUN_18013ff60(lVar1 + 0x28,0x10000);
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  return 0;
}



// ===== FUN_18016f7d0 @ 18016f7d0 (size 843)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18016f7d0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined1 *_Dst;
  longlong lVar4;
  byte bVar5;
  size_t _Size;
  size_t _Size_00;
  longlong lVar6;
  size_t _Size_01;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined **_Src;
  int iVar10;
  undefined1 auStack_88 [32];
  byte local_68 [8];
  longlong local_60;
  undefined **local_58;
  ulonglong local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  local_48 = DAT_180303f28;
  lVar6 = -1;
  _Size = 0xffffffffffffffff;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  uStack_44 = (uint)DAT_180303f2c;
  uStack_40 = 0;
  uStack_3c = 0;
  local_58 = &PTR_1802ead18;
  if (*(undefined ***)(param_1 + 0x1390) != (undefined **)0x0) {
    local_58 = *(undefined ***)(param_1 + 0x1390);
  }
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)local_58 + _Size) != '\0');
  _Size_01 = 0xffffffffffffffff;
  _Src = &PTR_1802ead18;
  if (*(undefined ***)(param_1 + 0x1398) != (undefined **)0x0) {
    _Src = *(undefined ***)(param_1 + 0x1398);
  }
  do {
    _Size_01 = _Size_01 + 1;
  } while (*(char *)((longlong)_Src + _Size_01) != '\0');
  lVar9 = 0x10;
  if (_Size == 0) {
    lVar9 = 0xe;
  }
  lVar9 = lVar9 + _Size_01 + _Size;
  if (_Size_01 != 0) {
    lVar9 = lVar9 + 2;
  }
  uVar7 = lVar9 + 10;
  iVar10 = 0;
  if (uVar7 != 0) {
    lVar8 = 0;
    do {
      if (3 < lVar8) break;
      bVar2 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      bVar2 = bVar2 & 0x7f;
      bVar5 = bVar2 | 0x80;
      if (uVar7 == 0) {
        bVar5 = bVar2;
      }
      iVar10 = iVar10 + 1;
      local_68[lVar8] = bVar5;
      lVar8 = lVar8 + 1;
    } while (uVar7 != 0);
  }
  local_60 = (longlong)iVar10;
  uVar7 = local_60 + 0xb + lVar9;
  if (0xfffffff < uVar7) {
    return 8;
  }
  local_50 = uVar7;
  _Dst = (undefined1 *)(*(code *)PTR_malloc_1803bd530)(uVar7);
  if (_Dst == (undefined1 *)0x0) {
    return 0x1b;
  }
  memset(_Dst,0,uVar7);
  _Size_00 = (size_t)iVar10;
  *_Dst = 0x10;
  memcpy(_Dst + 1,local_68,_Size_00);
  *(undefined4 *)(_Dst + _Size_00 + 1) = 0x514d0400;
  *(undefined4 *)(_Dst + _Size_00 + 5) = 0x2045454;
  *(undefined2 *)(_Dst + _Size_00 + 9) = 0x3c00;
  iVar3 = FUN_180177c70(param_1,&uStack_44,9);
  lVar8 = (longlong)(iVar10 + 0xb);
  lVar9 = -1;
  do {
    lVar4 = lVar9 + 1;
    lVar1 = lVar9 + 1;
    lVar9 = lVar4;
  } while (*(char *)((longlong)&local_48 + lVar1) != '\0');
  if (lVar4 == 0xc) {
    *(undefined2 *)(_Dst + lVar8) = 0xc00;
    *(ulonglong *)(_Dst + lVar8 + 2) = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(_Dst + lVar8 + 10) = uStack_40;
    FUN_180150ee0(param_1,"Using client id \'%s\'",&local_48);
    lVar9 = local_60;
    lVar8 = (longlong)(iVar10 + 0x19);
    lVar6 = _Size + lVar8;
    if (_Size != 0) {
      lVar6 = lVar6 + 2;
      if (0xffff < _Size) {
        FUN_180150e00(param_1,"Username is too large: [%zu]");
        iVar3 = 8;
        goto LAB_18016fab8;
      }
      _Dst[local_60 + 8] = _Dst[local_60 + 8] | 0x80;
      _Dst[lVar8] = (char)(_Size >> 8);
      _Dst[lVar8 + 1] = (char)_Size;
      memcpy(_Dst + lVar8 + 2,local_58,_Size);
    }
    if (_Size_01 != 0) {
      if (0xffff < _Size_01) {
        FUN_180150e00(param_1,"Password is too large: [%zu]");
        iVar3 = 8;
        goto LAB_18016fab8;
      }
      _Dst[lVar9 + 8] = _Dst[lVar9 + 8] | 0x40;
      _Dst[lVar6 + 1] = (char)_Size_01;
      _Dst[lVar6] = (char)(_Size_01 >> 8);
      memcpy(_Dst + lVar6 + 2,_Src,_Size_01);
    }
    if (iVar3 == 0) {
      iVar3 = FUN_180170080(param_1,_Dst,local_50);
    }
  }
  else {
    do {
      lVar8 = lVar6 + 1;
      lVar9 = lVar6 + 1;
      lVar6 = lVar8;
    } while (*(char *)((longlong)&local_48 + lVar9) != '\0');
    FUN_180150e00(param_1,"Client ID length mismatched: [%zu]",lVar8);
    iVar3 = 8;
  }
LAB_18016fab8:
  (*(code *)PTR_free_1803bd538)(_Dst);
  (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_1 + 0x1390));
  *(undefined8 *)(param_1 + 0x1390) = 0;
  (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_1 + 0x1398));
  *(undefined8 *)(param_1 + 0x1398) = 0;
  return iVar3;
}



// ===== FUN_18016fb20 @ 18016fb20 (size 446)

int FUN_18016fb20(longlong param_1)

{
  void *_Src;
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  byte bVar5;
  size_t _Size;
  uint uVar6;
  size_t _Size_00;
  ulonglong uVar7;
  longlong lVar8;
  byte local_res8 [8];
  undefined1 local_res10;
  undefined7 uStackX_11;
  void *local_res18 [2];
  
  _Src = *(void **)(param_1 + 0x218);
  puVar4 = (undefined1 *)0x0;
  uVar6 = 0;
  _Size_00 = *(size_t *)(param_1 + 0x228);
  local_res18[0] = (void *)0x0;
  if (_Src == (void *)0x0) {
    return 0x2b;
  }
  uVar3 = 0xffffffffffffffff;
  if ((longlong)_Size_00 < 0) {
    _Size_00 = 0xffffffffffffffff;
    do {
      _Size_00 = _Size_00 + 1;
    } while (*(char *)((longlong)_Src + _Size_00) != '\0');
  }
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)(*(longlong *)(param_1 + 0x1250) + uVar3) != '\0');
  if (uVar3 < 2) {
    FUN_180150e00(param_1,"No MQTT topic found. Forgot to URL encode it?");
    iVar2 = 3;
  }
  else {
    iVar2 = FUN_180134970(*(longlong *)(param_1 + 0x1250) + 1,0,local_res18,&local_res10,2);
    if ((iVar2 == 0) && (0xffff < CONCAT71(uStackX_11,local_res10))) {
      FUN_180150e00(param_1,"Too long MQTT topic");
      iVar2 = 3;
    }
    if (iVar2 == 0) {
      uVar3 = CONCAT71(uStackX_11,local_res10) + 2 + _Size_00;
      if (uVar3 != 0) {
        lVar8 = 0;
        uVar7 = uVar3;
        do {
          uVar6 = (uint)puVar4;
          if (3 < lVar8) break;
          bVar1 = (byte)uVar7;
          uVar7 = uVar7 >> 7;
          bVar1 = bVar1 & 0x7f;
          bVar5 = bVar1 | 0x80;
          if (uVar7 == 0) {
            bVar5 = bVar1;
          }
          uVar6 = uVar6 + 1;
          puVar4 = (undefined1 *)(ulonglong)uVar6;
          local_res8[lVar8] = bVar5;
          lVar8 = lVar8 + 1;
        } while (uVar7 != 0);
      }
      _Size = (size_t)(int)uVar6;
      puVar4 = (undefined1 *)(*(code *)PTR_malloc_1803bd530)(uVar3 + 1 + _Size);
      if (puVar4 == (undefined1 *)0x0) {
        iVar2 = 0x1b;
      }
      else {
        *puVar4 = 0x30;
        memcpy(puVar4 + 1,local_res8,_Size);
        puVar4[_Size + 1] = (char)uStackX_11;
        puVar4[_Size + 2] = local_res10;
        memcpy(puVar4 + _Size + 3,local_res18[0],CONCAT71(uStackX_11,local_res10));
        lVar8 = _Size + 3 + CONCAT71(uStackX_11,local_res10);
        memcpy(puVar4 + lVar8,_Src,_Size_00);
        iVar2 = FUN_180170080(param_1,puVar4,_Size_00 + lVar8);
      }
    }
  }
  (*(code *)PTR_free_1803bd538)(puVar4);
  (*(code *)PTR_free_1803bd538)(local_res18[0]);
  return iVar2;
}



// ===== FUN_18016fce0 @ 18016fce0 (size 650)

int FUN_18016fce0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0xce0);
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  iVar6 = *(int *)(lVar1 + 0x3c0);
  uVar4 = *(undefined8 *)(lVar1 + 0x1a8);
  if (iVar6 == 3) {
LAB_18016fd5c:
    bVar5 = *(byte *)(lVar3 + 0x18) & 0xf0;
    if (bVar5 == 0x30) {
      *(undefined4 *)(lVar1 + 0x3c0) = 6;
      lVar1 = *(longlong *)(lVar3 + 0x20);
      FUN_180150ee0(param_1,"Remaining length: %zu bytes",lVar1);
      if ((*(longlong *)(param_1 + 0x710) != 0) && (*(longlong *)(param_1 + 0x710) < lVar1)) {
        FUN_180150e00(param_1,"Maximum file size exceeded");
        return 0x3f;
      }
      FUN_1801608f0(param_1,lVar1);
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(longlong *)(param_1 + 0xf0) = lVar1;
      *(longlong *)(lVar3 + 0x10) = lVar1;
LAB_18016fdd3:
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x6ec);
      if (*(ulonglong *)(lVar3 + 0x10) <= (ulonglong)*(uint *)(param_1 + 0x6ec)) {
        uVar8 = *(ulonglong *)(lVar3 + 0x10);
      }
      iVar6 = FUN_1801513e0(param_1,uVar4,uVar2,uVar8,&local_res8);
      if (iVar6 != 0) {
        if (iVar6 == 0x51) {
          FUN_180150ee0(param_1,"EEEE AAAAGAIN");
          return 0x51;
        }
        return iVar6;
      }
      if (local_res8 == 0) {
        FUN_180150ee0(param_1,"server disconnected");
        return 0x12;
      }
      FUN_180150d10(param_1,3,uVar2);
      *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) - local_res8;
      *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + local_res8;
      iVar6 = FUN_1801608b0(param_1,*(undefined8 *)(param_1 + 0x100));
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = FUN_180151330(param_1,1,uVar2,local_res8);
      if (iVar6 != 0) {
        return iVar6;
      }
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        return 0;
      }
      goto LAB_18016ff1f;
    }
    if (bVar5 != 0x90) {
      if (bVar5 == 0xe0) {
        FUN_180150ee0(param_1,"Got DISCONNECT");
        *param_2 = 1;
        return 0;
      }
      return 8;
    }
    *(undefined4 *)(lVar1 + 0x3c0) = 4;
  }
  else if (iVar6 != 4) {
    if (iVar6 == 5) goto LAB_18016fd5c;
    if (iVar6 != 6) {
      return 8;
    }
    goto LAB_18016fdd3;
  }
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  lVar3 = *(longlong *)(param_1 + 0x20);
  iVar6 = FUN_18016ff70(param_1,3);
  if (iVar6 != 0) {
    return iVar6;
  }
  pcVar7 = (char *)FUN_18008d530(lVar1 + 0x28);
  FUN_180150d10(param_1,1,pcVar7,3);
  if (((*pcVar7 != *(char *)(lVar3 + 0x3c9)) || (pcVar7[1] != (char)*(undefined4 *)(lVar3 + 0x3c8)))
     || (pcVar7[2] != '\0')) {
    FUN_18013ff90(lVar1 + 0x28);
    return 8;
  }
  FUN_180170030(param_1,3);
LAB_18016ff1f:
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar1 + 0x3c0) = 0;
  *(undefined4 *)(lVar1 + 0x3c4) = 5;
  return 0;
}



// ===== FUN_18016ff70 @ 18016ff70 (size 192)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18016ff70(longlong param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_458 [32];
  undefined8 *local_438;
  undefined8 local_428 [2];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_458;
  lVar3 = *(longlong *)(param_1 + 0x1a8) + 0x28;
  uVar2 = FUN_18013ff80(lVar3);
  bVar4 = false;
  if (uVar2 < param_2) {
    local_438 = local_428;
    uVar2 = FUN_1801513e0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1a8),local_418,
                          param_2 - uVar2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    iVar1 = thunk_FUN_180140070(lVar3,local_418,local_428[0]);
    if (iVar1 != 0) {
      return 0x1b;
    }
    uVar2 = FUN_18013ff80(lVar3);
    bVar4 = uVar2 < param_2;
  }
  return (ulonglong)(-(uint)bVar4 & 0x51);
}



// ===== FUN_180170030 @ 180170030 (size 76)

void FUN_180170030(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1a8) + 0x28;
  uVar1 = FUN_18013ff80(lVar2);
  if (param_2 < uVar1) {
    FUN_18013ffd0(lVar2,uVar1 - param_2);
    return;
  }
  FUN_18013ff90();
  return;
}



// ===== FUN_180170080 @ 180170080 (size 153)

undefined8 FUN_180170080(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  
  plVar1 = *(longlong **)(param_1 + 0x1a8);
  uVar2 = FUN_180151380(param_1,0,param_2,param_3,&local_res8);
  if ((int)uVar2 == 0) {
    FUN_180150d10(param_1,2,param_2,local_res8);
    if (param_3 == local_res8) {
      param_3 = 0;
      lVar3 = 0;
    }
    else {
      param_3 = param_3 - local_res8;
      lVar3 = FUN_180144e60(local_res8 + param_2,param_3);
      if (lVar3 == 0) {
        return 0x1b;
      }
    }
    *plVar1 = lVar3;
    uVar2 = 0;
    plVar1[1] = param_3;
  }
  return uVar2;
}



// ===== FUN_180170120 @ 180170120 (size 422)

int FUN_180170120(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  size_t _Size;
  longlong lVar9;
  byte local_res8 [8];
  undefined1 local_res10;
  undefined7 uStackX_11;
  void *local_res18 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar5 = (undefined1 *)0x0;
  uVar8 = 0;
  local_res18[0] = (void *)0x0;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)(*(longlong *)(param_1 + 0x1250) + uVar3) != '\0');
  if (uVar3 < 2) {
    FUN_180150e00(param_1,"No MQTT topic found. Forgot to URL encode it?");
    iVar2 = 3;
  }
  else {
    iVar2 = FUN_180134970(*(longlong *)(param_1 + 0x1250) + 1,0,local_res18,&local_res10,2);
    if ((iVar2 == 0) && (0xffff < CONCAT71(uStackX_11,local_res10))) {
      FUN_180150e00(param_1,"Too long MQTT topic");
      iVar2 = 3;
    }
    if (iVar2 == 0) {
      *(int *)(lVar1 + 0x3c8) = *(int *)(lVar1 + 0x3c8) + 1;
      uVar3 = CONCAT71(uStackX_11,local_res10) + 5;
      if (uVar3 != 0) {
        lVar9 = 0;
        uVar4 = uVar3;
        do {
          uVar8 = (uint)puVar5;
          if (3 < lVar9) break;
          bVar6 = (byte)uVar4;
          uVar4 = uVar4 >> 7;
          bVar6 = bVar6 & 0x7f;
          bVar7 = bVar6 | 0x80;
          if (uVar4 == 0) {
            bVar7 = bVar6;
          }
          uVar8 = uVar8 + 1;
          puVar5 = (undefined1 *)(ulonglong)uVar8;
          local_res8[lVar9] = bVar7;
          lVar9 = lVar9 + 1;
        } while (uVar4 != 0);
      }
      _Size = (size_t)(int)uVar8;
      puVar5 = (undefined1 *)(*(code *)PTR_malloc_1803bd530)(uVar3 + _Size + 1);
      if (puVar5 == (undefined1 *)0x0) {
        iVar2 = 0x1b;
      }
      else {
        *puVar5 = 0x82;
        memcpy(puVar5 + 1,local_res8,_Size);
        puVar5[_Size + 1] = *(undefined1 *)(lVar1 + 0x3c9);
        puVar5[_Size + 2] = *(undefined1 *)(lVar1 + 0x3c8);
        puVar5[_Size + 3] = (char)uStackX_11;
        puVar5[_Size + 4] = local_res10;
        memcpy(puVar5 + _Size + 5,local_res18[0],CONCAT71(uStackX_11,local_res10));
        puVar5[CONCAT71(uStackX_11,local_res10) + _Size + 5] = 0;
        iVar2 = FUN_180170080(param_1,puVar5,uVar3 + _Size + 1);
      }
    }
  }
  (*(code *)PTR_free_1803bd538)(local_res18[0]);
  (*(code *)PTR_free_1803bd538)(puVar5);
  return iVar2;
}



// ===== FUN_1801702d0 @ 1801702d0 (size 877)

ulonglong FUN_1801702d0(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  char *pcVar9;
  char cVar10;
  ulonglong uVar11;
  char *local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar12;
  undefined4 uVar14;
  longlong lVar13;
  
  uVar12 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20),3);
  lVar8 = 0;
  pcVar5 = (char *)0x0;
  pcVar6 = (char *)0x0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1a8);
  *param_2 = 1;
  uVar4 = FUN_180134970(*(undefined8 *)(param_1 + 0x1250),0,&local_res8,0,uVar12);
  uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uVar11 = uVar4 & 0xffffffff;
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  iVar2 = FUN_1801403a0(local_res8,"/MATCH:",7);
  if (((iVar2 == 0) && (iVar2 = FUN_1801403a0(local_res8,&DAT_1803043d0,3), iVar2 == 0)) &&
     (iVar2 = FUN_1801403a0(local_res8,"/FIND:",6), iVar2 == 0)) {
    iVar2 = FUN_1801403a0(local_res8,"/DEFINE:",8);
    if (((iVar2 == 0) && (iVar2 = FUN_1801403a0(local_res8,&DAT_180304464,3), iVar2 == 0)) &&
       (iVar2 = FUN_1801403a0(local_res8,"/LOOKUP:",8), iVar2 == 0)) {
      pcVar5 = strchr(local_res8,0x2f);
      if (pcVar5 == (char *)0x0) goto LAB_18017060e;
      cVar10 = pcVar5[1];
      if (cVar10 != '\0') {
        pcVar6 = pcVar5;
        do {
          if (cVar10 == ':') {
            pcVar6[1] = ' ';
          }
          cVar10 = pcVar6[2];
          pcVar6 = pcVar6 + 1;
        } while (cVar10 != '\0');
      }
      uVar3 = FUN_180170640(uVar1,param_1,"CLIENT libcurl 8.4.0\r\n%s\r\nQUIT\r\n",pcVar5 + 1);
      uVar11 = (ulonglong)uVar3;
      if (uVar3 != 0) {
        FUN_180150e00(param_1,"Failed sending DICT request");
        goto LAB_18017060e;
      }
    }
    else {
      pcVar6 = strchr(local_res8,0x3a);
      if (pcVar6 == (char *)0x0) {
LAB_180170491:
        FUN_180150ee0(param_1,"lookup word is missing");
        pcVar6 = "default";
      }
      else {
        pcVar6 = pcVar6 + 1;
        pcVar7 = strchr(pcVar6,0x3a);
        pcVar5 = pcVar7;
        if (pcVar7 != (char *)0x0) {
          pcVar5 = pcVar7 + 1;
          *pcVar7 = '\0';
          pcVar7 = strchr(pcVar5,0x3a);
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = '\0';
          }
        }
        if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) goto LAB_180170491;
      }
      if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
        pcVar5 = "!";
      }
      lVar8 = FUN_180170740(pcVar6);
      if (lVar8 == 0) goto LAB_1801705bb;
      lVar13 = lVar8;
      uVar3 = FUN_180170640(uVar1,param_1,"CLIENT libcurl 8.4.0\r\nDEFINE %s %s\r\nQUIT\r\n",pcVar5,
                            lVar8);
      uVar14 = (undefined4)((ulonglong)lVar13 >> 0x20);
      uVar11 = (ulonglong)uVar3;
      if (uVar3 != 0) {
        FUN_180150e00(param_1,"Failed sending DICT request");
        goto LAB_18017060e;
      }
    }
  }
  else {
    pcVar7 = strchr(local_res8,0x3a);
    if (pcVar7 == (char *)0x0) {
LAB_180170573:
      FUN_180150ee0(param_1,"lookup word is missing");
      pcVar7 = "default";
    }
    else {
      pcVar7 = pcVar7 + 1;
      pcVar9 = strchr(pcVar7,0x3a);
      pcVar5 = pcVar9;
      if (pcVar9 != (char *)0x0) {
        pcVar5 = pcVar9 + 1;
        *pcVar9 = '\0';
        pcVar9 = strchr(pcVar5,0x3a);
        pcVar6 = pcVar9;
        if (pcVar9 != (char *)0x0) {
          pcVar6 = pcVar9 + 1;
          *pcVar9 = '\0';
          pcVar9 = strchr(pcVar6,0x3a);
          if (pcVar9 != (char *)0x0) {
            *pcVar9 = '\0';
          }
        }
      }
      if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) goto LAB_180170573;
    }
    if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
      pcVar5 = "!";
    }
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
      pcVar6 = ".";
    }
    lVar8 = FUN_180170740(pcVar7);
    if (lVar8 == 0) {
LAB_1801705bb:
      uVar11 = 0x1b;
      goto LAB_18017060e;
    }
    uVar3 = FUN_180170640(uVar1,param_1,"CLIENT libcurl 8.4.0\r\nMATCH %s %s %s\r\nQUIT\r\n",pcVar5,
                          pcVar6,lVar8);
    uVar14 = (undefined4)((ulonglong)pcVar6 >> 0x20);
    uVar11 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      FUN_180150e00(param_1,"Failed sending DICT request");
      goto LAB_18017060e;
    }
  }
  FUN_18015f7f0(param_1,0,0xffffffffffffffff,0,CONCAT44(uVar14,0xffffffff));
LAB_18017060e:
  (*(code *)PTR_free_1803bd538)(lVar8);
  (*(code *)PTR_free_1803bd538)(local_res8);
  return uVar11;
}



// ===== FUN_180170640 @ 180170640 (size 250)

int FUN_180170640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res20;
  longlong local_48 [3];
  
  local_res20 = param_4;
  lVar2 = FUN_180145140(param_3,&local_res20);
  if (lVar2 == 0) {
    return 0x1b;
  }
  lVar3 = -1;
  local_48[0] = 0;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(lVar2 + lVar3) != '\0');
  iVar1 = FUN_180151460(param_2,param_1,lVar2,lVar3,local_48);
  lVar4 = lVar2;
  while ((iVar1 == 0 && (FUN_180150d10(param_2,4,lVar4,local_48[0]), local_48[0] != lVar3))) {
    lVar3 = lVar3 - local_48[0];
    lVar4 = lVar4 + local_48[0];
    iVar1 = FUN_180151460(param_2,param_1,lVar4,lVar3,local_48);
  }
  (*(code *)PTR_free_1803bd538)(lVar2);
  return iVar1;
}



// ===== FUN_180170740 @ 180170740 (size 163)

undefined8 FUN_180170740(byte *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  FUN_18013ff60(local_28,10000);
  bVar1 = *param_1;
  while( true ) {
    if (bVar1 == 0) {
      uVar3 = FUN_18008d530(local_28);
      return uVar3;
    }
    if (((((0x3a < (byte)(bVar1 - 0x21)) ||
          ((0x7ffffffffffffbdU >> ((ulonglong)(bVar1 - 0x21) & 0x3f) & 1) == 0)) &&
         (0x21 < (byte)(bVar1 + 0xa3))) &&
        (iVar2 = thunk_FUN_180140070(local_28,&DAT_1803021bc,1), iVar2 != 0)) ||
       (iVar2 = thunk_FUN_180140070(local_28,param_1,1), iVar2 != 0)) break;
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return 0;
}



// ===== FUN_1801707f0 @ 1801707f0 (size 1505)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801707f0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  LPVOID lpBuffer;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  BOOL BVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  HANDLE pvVar14;
  HANDLE hFile;
  undefined4 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int *piVar18;
  undefined1 auStackY_128 [32];
  DWORD local_f8;
  DWORD local_f4;
  DWORD local_f0;
  undefined8 local_e8;
  longlong local_e0;
  HANDLE local_d8;
  int *local_d0;
  HANDLE local_c8;
  longlong local_c0;
  HANDLE local_b8;
  HANDLE local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  uint local_78;
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStackY_128;
  local_c0 = *(longlong *)(param_1 + 0x20);
  lpBuffer = *(LPVOID *)(param_1 + 0xce0);
  bVar5 = true;
  bVar4 = true;
  uVar2 = *(undefined8 *)(local_c0 + 0x1a8);
  *param_2 = 1;
  local_e8 = uVar2;
  lVar12 = (*(code *)PTR_calloc_1803bd550)(1,0x1ec8);
  if (lVar12 == 0) {
    uVar13 = 0x1b;
  }
  else {
    *(longlong *)(param_1 + 0x1a8) = lVar12;
    *(undefined4 *)(lVar12 + 0x1cac) = 0;
    *(longlong *)(lVar12 + 0x1eb8) = lVar12 + 0x1cb8;
    *(undefined4 *)(lVar12 + 0x814) = 1;
    *(undefined4 *)(lVar12 + 0x1414) = 1;
    *(undefined4 *)(lVar12 + 0x808) = 1;
    *(undefined4 *)(lVar12 + 0x1408) = 1;
    *(undefined4 *)(lVar12 + 0x140c) = 1;
    *(undefined4 *)(lVar12 + 0x1884) = 1;
    piVar18 = *(int **)(param_1 + 0x1a8);
    local_d0 = piVar18;
    uVar13 = FUN_180170e20(param_1);
    uVar17 = uVar13 & 0xffffffff;
    if ((int)uVar13 == 0) {
      pvVar14 = (HANDLE)WSACreateEvent();
      local_c8 = pvVar14;
      if (pvVar14 == (HANDLE)0x0) {
        uVar6 = Ordinal_111();
        FUN_180150e00(param_1,"WSACreateEvent failed (%d)",uVar6);
        uVar13 = 2;
      }
      else {
        iVar7 = WSAEventSelect(uVar2,pvVar14,0x21);
        if (iVar7 != -1) {
          hFile = GetStdHandle(0xfffffff6);
          local_d8 = hFile;
          local_b8 = pvVar14;
          local_b0 = hFile;
          DVar8 = GetFileType(hFile);
          if ((DVar8 == 3) || (*(char *)(param_1 + 0xabb) != '\0')) {
            local_f4 = 1;
            local_f0 = 100;
          }
          else {
            local_f4 = 2;
            local_f0 = 1000;
          }
          do {
            DVar8 = *(DWORD *)(param_1 + 0x6ec);
            DVar9 = WaitForMultipleObjects(local_f4,&local_b8,0,local_f0);
            uVar2 = local_e8;
            if (DVar9 == 0) {
              local_78 = 0;
              iVar7 = WSAEnumNetworkEvents(local_e8,pvVar14);
              if (iVar7 == -1) {
                iVar7 = Ordinal_111();
                if (iVar7 != 0x2734) {
                  FUN_180150ee0(param_1,"WSAEnumNetworkEvents failed (%d)");
                  uVar17 = 0x1a;
                  bVar4 = false;
                  bVar5 = false;
                }
              }
              else if ((local_78 & 1) == 0) {
LAB_180170cc1:
                bVar4 = bVar5;
                if ((local_78 & 0x20) != 0) {
                  bVar4 = false;
                  bVar5 = false;
                }
              }
              else {
                uVar11 = FUN_1801513e0(param_1,uVar2,lpBuffer,*(undefined4 *)(param_1 + 0x6ec));
                uVar17 = (ulonglong)uVar11;
                if (uVar11 != 0x51) {
                  if (uVar11 == 0) {
                    if (local_e0 < 1) {
                      bVar4 = false;
                      bVar5 = false;
                    }
                    else {
                      uVar11 = FUN_180171d10(param_1,lpBuffer);
                      uVar17 = (ulonglong)uVar11;
                      if (uVar11 == 0) {
                        if (*piVar18 != 0) {
                          if (piVar18[1] == 0) {
                            lVar12 = *(longlong *)(param_1 + 0x1a8);
                            iVar7 = 0;
                            lVar16 = 0x408;
                            do {
                              if (iVar7 != 1) {
                                if (*(int *)(lVar12 + 0x400 + lVar16) == 1) {
                                  lVar3 = *(longlong *)(param_1 + 0x1a8);
                                  iVar1 = *(int *)(lVar3 + -0x400 + lVar16);
                                  if (iVar1 == 0) {
                                    *(undefined4 *)(lVar3 + -0x400 + lVar16) = 2;
                                    FUN_180171620(param_1,0xfb);
                                  }
                                  else if (iVar1 == 2) {
                                    if (*(int *)(lVar16 + lVar3) == 1) {
                                      *(undefined4 *)(lVar16 + lVar3) = 0;
                                    }
                                  }
                                  else if ((iVar1 == 3) && (*(int *)(lVar16 + lVar3) == 0)) {
                                    *(undefined4 *)(lVar16 + lVar3) = 1;
                                  }
                                }
                                if (*(int *)(lVar12 + 0x1000 + lVar16) == 1) {
                                  lVar3 = *(longlong *)(param_1 + 0x1a8);
                                  iVar1 = *(int *)(lVar3 + 0x800 + lVar16);
                                  if (iVar1 == 0) {
                                    *(undefined4 *)(lVar3 + 0x800 + lVar16) = 2;
                                    FUN_180171620(param_1,0xfd);
                                  }
                                  else if (iVar1 == 2) {
                                    if (*(int *)(lVar3 + 0xc00 + lVar16) == 1) {
                                      *(undefined4 *)(lVar3 + 0xc00 + lVar16) = 0;
                                    }
                                  }
                                  else if ((iVar1 == 3) && (*(int *)(lVar3 + 0xc00 + lVar16) == 0))
                                  {
                                    *(undefined4 *)(lVar3 + 0xc00 + lVar16) = 1;
                                  }
                                }
                              }
                              iVar7 = iVar7 + 1;
                              lVar16 = lVar16 + 4;
                            } while (iVar7 < 0x28);
                            local_d0[1] = 1;
                            pvVar14 = local_c8;
                            hFile = local_d8;
                            piVar18 = local_d0;
                          }
                        }
                        goto LAB_180170cc1;
                      }
                      bVar4 = false;
                      bVar5 = false;
                    }
                  }
                  else {
                    bVar4 = false;
                    bVar5 = false;
                  }
                }
              }
            }
            else if (DVar9 == 1) {
              BVar10 = ReadFile(hFile,lpBuffer,DVar8,&local_f8,(LPOVERLAPPED)0x0);
              if (BVar10 == 0) {
LAB_180170ab0:
                uVar17 = 0x1a;
                bVar4 = false;
                bVar5 = false;
              }
              else {
                uVar11 = FUN_1801716b0(param_1,lpBuffer);
                uVar17 = (ulonglong)uVar11;
                if (uVar11 != 0) {
                  bVar4 = false;
                  bVar5 = false;
                }
              }
            }
            else if (DVar9 == 0x102) {
              do {
                if (*(char *)(param_1 + 0xabb) == '\0') {
                  BVar10 = PeekNamedPipe(hFile,(LPVOID)0x0,0,(LPDWORD)0x0,&local_f8,(LPDWORD)0x0);
                  if (BVar10 == 0) goto LAB_180170ab0;
                  if (local_f8 == 0) goto LAB_180170cd6;
                  BVar10 = ReadFile(hFile,lpBuffer,DVar8,&local_f8,(LPOVERLAPPED)0x0);
                  if (BVar10 == 0) goto LAB_180170ab0;
                }
                else {
                  lVar12 = (**(code **)(param_1 + 0x1208))(lpBuffer,1);
                  if (lVar12 == 0x10000000) goto LAB_180170ab0;
                  if (lVar12 == 0x10000001) goto LAB_180170cd6;
                  if (lVar12 == 0) goto LAB_180170cd6;
                  local_f8 = (DWORD)lVar12;
                }
                uVar11 = FUN_1801716b0(param_1);
                uVar17 = (ulonglong)uVar11;
              } while (uVar11 == 0);
              bVar4 = false;
              bVar5 = false;
            }
LAB_180170cd6:
            if (*(int *)(param_1 + 0x300) != 0) {
              puVar15 = (undefined4 *)FUN_180148b70(local_88);
              local_98 = *puVar15;
              uStack_94 = puVar15[1];
              uStack_90 = puVar15[2];
              uStack_8c = puVar15[3];
              local_a8 = *(undefined4 *)(local_c0 + 0x188);
              uStack_a4 = *(undefined4 *)(local_c0 + 0x18c);
              uStack_a0 = *(undefined4 *)(local_c0 + 400);
              uStack_9c = *(undefined4 *)(local_c0 + 0x194);
              lVar12 = FUN_180148c00(&local_98,&local_a8);
              if ((longlong)(ulonglong)*(uint *)(param_1 + 0x300) <= lVar12) {
                FUN_180150e00(param_1,"Time-out");
                uVar17 = 0x1c;
                break;
              }
            }
          } while (bVar4);
          iVar7 = WSACloseEvent(pvVar14);
          if (iVar7 == 0) {
            uVar6 = Ordinal_111();
            FUN_180150ee0(param_1,"WSACloseEvent failed (%d)",uVar6);
          }
          FUN_18015f7f0(param_1,0xffffffff,0xffffffffffffffff);
          return uVar17;
        }
        WSACloseEvent(pvVar14);
        uVar13 = 0;
      }
    }
  }
  return uVar13;
}



// ===== FUN_180170e20 @ 180170e20 (size 917)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180170e20(longlong param_1)

{
  char *_Str;
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_168 [32];
  char *local_148 [2];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  iVar9 = 0;
  if (*(longlong *)(param_1 + 0x1390) != 0) {
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 0x150);
    cVar3 = *pcVar2;
    while (cVar3 != '\0') {
      pcVar2 = pcVar2 + 1;
      if (cVar3 < '\0') {
        return 0x2b;
      }
      cVar3 = *pcVar2;
    }
    FUN_1801450d0(local_138,0x100,"USER,%s");
    lVar7 = FUN_180138590(*(undefined8 *)(lVar1 + 0x1cb0),local_138);
    if (lVar7 == 0) {
      FUN_180138630(*(undefined8 *)(lVar1 + 0x1cb0));
      *(undefined8 *)(lVar1 + 0x1cb0) = 0;
      return 0x1b;
    }
    *(longlong *)(lVar1 + 0x1cb0) = lVar7;
    *(undefined4 *)(lVar1 + 0x8a4) = 1;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x510);
  if (puVar10 != (undefined8 *)0x0) {
    do {
      if (iVar9 != 0) goto LAB_18017116b;
      pcVar2 = (char *)*puVar10;
      pcVar8 = strchr(pcVar2,0x3d);
      if (pcVar8 == (char *)0x0) {
LAB_180171143:
        FUN_180150e00(param_1,"Syntax error in telnet option: %s",*puVar10);
        iVar9 = 0x31;
      }
      else {
        _Str = pcVar8 + 1;
        lVar7 = (longlong)pcVar8 - (longlong)pcVar2;
        cVar3 = *_Str;
        pcVar8 = _Str;
        while (cVar3 != '\0') {
          pcVar8 = pcVar8 + 1;
          if (cVar3 < '\0') goto LAB_18017115a;
          cVar3 = *pcVar8;
        }
        if (lVar7 == 2) {
          iVar4 = FUN_1801403a0(pcVar2,&DAT_180304b70,2);
          if (iVar4 != 0) {
            uVar5 = strtoul(_Str,local_148,10);
            if ((uVar5 - 1 < 0xffff) && (cVar3 = FUN_1801401f0(*local_148[0]), cVar3 == 'x')) {
              local_148[0] = local_148[0] + 1;
              uVar6 = strtoul(local_148[0],(char **)0x0,10);
              if (uVar6 != 0) {
                if (uVar6 < 0x10000) {
                  *(short *)(lVar1 + 0x1ca8) = (short)uVar5;
                  *(short *)(lVar1 + 0x1caa) = (short)uVar6;
                  *(undefined4 *)(lVar1 + 0x884) = 1;
                }
                goto LAB_18017115a;
              }
            }
            goto LAB_180171143;
          }
        }
        else if (lVar7 == 5) {
          iVar4 = FUN_1801403a0(pcVar2,"TTYPE",5);
          if (iVar4 != 0) {
            strncpy((char *)(lVar1 + 0x1c08),_Str,0x1f);
            *(undefined1 *)(lVar1 + 0x1c27) = 0;
            *(undefined4 *)(lVar1 + 0x868) = 1;
            goto LAB_18017115a;
          }
        }
        else if (lVar7 == 6) {
          iVar4 = FUN_1801403a0(pcVar2,"BINARY",6);
          if (iVar4 != 0) {
            iVar4 = atoi(_Str);
            if (iVar4 != 1) {
              *(undefined4 *)(lVar1 + 0x808) = 0;
              *(undefined4 *)(lVar1 + 0x1408) = 0;
            }
            goto LAB_18017115a;
          }
        }
        else if (lVar7 == 7) {
          iVar4 = FUN_1801403a0(pcVar2,"NEW_ENV",7);
          if (iVar4 != 0) {
            lVar7 = FUN_180138590(*(undefined8 *)(lVar1 + 0x1cb0),_Str);
            if (lVar7 == 0) {
              iVar9 = 0x1b;
            }
            else {
              *(longlong *)(lVar1 + 0x1cb0) = lVar7;
              *(undefined4 *)(lVar1 + 0x8a4) = 1;
            }
            goto LAB_18017115a;
          }
        }
        else if (lVar7 == 8) {
          iVar4 = FUN_1801403a0(pcVar2,"XDISPLOC",8);
          if (iVar4 != 0) {
            strncpy((char *)(lVar1 + 0x1c28),_Str,0x7f);
            *(undefined1 *)(lVar1 + 0x1ca7) = 0;
            *(undefined4 *)(lVar1 + 0x894) = 1;
            goto LAB_18017115a;
          }
        }
        else {
          FUN_180150e00(param_1,"Unknown telnet option %s",*puVar10);
        }
        iVar9 = 0x30;
      }
LAB_18017115a:
      puVar10 = (undefined8 *)puVar10[1];
    } while (puVar10 != (undefined8 *)0x0);
    if (iVar9 != 0) {
LAB_18017116b:
      FUN_180138630(*(undefined8 *)(lVar1 + 0x1cb0));
      *(undefined8 *)(lVar1 + 0x1cb0) = 0;
    }
  }
  return iVar9;
}



// ===== FUN_1801711c0 @ 1801711c0 (size 297)

void FUN_1801711c0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0xad7) == '\0') {
    return;
  }
  if (param_3 == 0xff) {
    if (param_4 - 0xecU < 0x14) {
      FUN_180150ee0(param_1,"%s IAC %s",param_2,(&PTR_LAB_180303fc0)[param_4]);
      return;
    }
    FUN_180150ee0(param_1,"%s IAC %d",param_2,param_4);
    return;
  }
  if (param_3 == 0xfb) {
    puVar2 = &DAT_1803049d4;
  }
  else if (param_3 == 0xfc) {
    puVar2 = &DAT_1803049dc;
  }
  else if (param_3 == 0xfd) {
    puVar2 = &DAT_1803049e4;
  }
  else {
    puVar2 = (undefined *)0x0;
    if (param_3 == 0xfe) {
      puVar2 = &DAT_1803049e8;
    }
    if (puVar2 == (undefined *)0x0) {
      FUN_180150ee0(param_1,"%s %d %d",param_2,param_3,param_4);
      return;
    }
  }
  if (param_4 < 0x28) {
    pcVar1 = (&PTR_s_BINARY_1803045e0)[param_4];
    if (pcVar1 != (char *)0x0) {
LAB_1801712b4:
      FUN_180150ee0(param_1,"%s %s %s",param_2,puVar2,pcVar1);
      return;
    }
  }
  else if (param_4 == 0xff) {
    pcVar1 = "EXOPL";
    goto LAB_1801712b4;
  }
  FUN_180150ee0(param_1,"%s %s %d",param_2,puVar2,param_4);
  return;
}



// ===== FUN_1801712f0 @ 1801712f0 (size 806)

void FUN_1801712f0(longlong param_1,int param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  
  if (*(char *)(param_1 + 0xad7) == '\0') {
    return;
  }
  uVar3 = 0;
  pcVar6 = "%s";
  if (param_2 != 0) {
    puVar4 = &DAT_180304a74;
    if (param_2 == 0x3c) {
      puVar4 = &DAT_180304a7c;
    }
    FUN_180150ee0(param_1,"%s IAC SB ",puVar4);
    if (2 < param_4) {
      bVar1 = param_3[param_4 - 2];
      uVar3 = (ulonglong)bVar1;
      bVar2 = param_3[param_4 - 1];
      uVar5 = (uint)bVar2;
      if ((bVar1 != 0xff) || (uVar5 != 0xf0)) {
        FUN_180150ee0(param_1,"(terminated by ");
        if (bVar1 < 0x28) {
          FUN_180150ee0(param_1,&DAT_180301010,(&PTR_s_BINARY_1803045e0)[uVar3]);
        }
        else if (bVar1 < 0xec) {
          FUN_180150ee0(param_1,&DAT_180304aa8,bVar1);
        }
        else {
          FUN_180150ee0(param_1,&DAT_180301010,(&PTR_DAT_180304720)[bVar1 - 0xec]);
        }
        if (bVar2 < 0x28) {
          FUN_180150ee0(param_1,&DAT_1802fa0cc,(&PTR_s_BINARY_1803045e0)[(int)uVar5]);
        }
        else if (uVar5 < 0xec) {
          FUN_180150ee0(param_1,&DAT_1802fec90,(ulonglong)bVar2);
        }
        else {
          FUN_180150ee0(param_1,&DAT_1802fa0cc,(&PTR_LAB_180303fc0)[bVar2]);
        }
        FUN_180150ee0(param_1,", not IAC SE) ");
      }
    }
    param_4 = param_4 - 2;
  }
  if (param_4 == 0) {
    FUN_180150ee0(param_1,"(Empty suboption?)");
    return;
  }
  bVar1 = *param_3;
  if (bVar1 < 0x28) {
    if ((0x8881000000U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0) {
      pcVar6 = "%s (unsupported)";
    }
    FUN_180150ee0(param_1,pcVar6,(&PTR_s_BINARY_1803045e0)[bVar1]);
  }
  else {
    FUN_180150ee0(param_1,"%d (unknown)",param_3[uVar3]);
  }
  if (*param_3 == 0x1f) {
    if (param_4 < 5) {
      return;
    }
    FUN_180150ee0(param_1,"Width: %d ; Height: %d",CONCAT11(param_3[1],param_3[2]),
                  CONCAT11(param_3[3],param_3[4]));
    return;
  }
  bVar1 = param_3[1];
  if (bVar1 == 0) {
    pcVar6 = " IS";
  }
  else if (bVar1 == 1) {
    pcVar6 = " SEND";
  }
  else if (bVar1 == 2) {
    pcVar6 = " INFO/REPLY";
  }
  else {
    if (bVar1 != 3) goto LAB_1801714f2;
    pcVar6 = " NAME";
  }
  FUN_180150ee0(param_1,pcVar6);
LAB_1801714f2:
  bVar1 = *param_3;
  if ((bVar1 == 0x18) || (bVar1 == 0x23)) {
    param_3[param_4] = 0;
    FUN_180150ee0(param_1," \"%s\"",param_3 + 2);
  }
  else if (bVar1 == 0x27) {
    if (param_3[1] == 0) {
      FUN_180150ee0(param_1,&DAT_1802ffaf0);
      uVar3 = 3;
      if (3 < param_4) {
        do {
          if (param_3[uVar3] == 0) {
            puVar4 = &DAT_1802ffd08;
LAB_1801715a1:
            FUN_180150ee0(param_1,puVar4);
          }
          else {
            if (param_3[uVar3] == 1) {
              puVar4 = &DAT_180304b44;
              goto LAB_1801715a1;
            }
            FUN_180150ee0(param_1,&DAT_180304b48);
          }
          uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < param_4);
      }
    }
  }
  else {
    uVar3 = 2;
    if (2 < param_4) {
      do {
        FUN_180150ee0(param_1," %.2x",param_3[uVar3]);
        uVar3 = (ulonglong)((int)uVar3 + 1);
      } while (uVar3 < param_4);
    }
  }
  return;
}



// ===== FUN_180171620 @ 180171620 (size 132)

void FUN_180171620(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  
  local_res10 = 0xff;
  local_res12 = (undefined1)param_3;
  local_res11 = (undefined1)param_2;
  iVar1 = Ordinal_19(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1a8),&local_res10,3);
  if (iVar1 < 0) {
    uVar2 = Ordinal_111();
    FUN_180150e00(param_1,"Sending data failed (%d)",uVar2);
  }
  FUN_1801711c0(param_1,&DAT_180304a74,param_2,param_3);
  return;
}



// ===== FUN_1801716b0 @ 1801716b0 (size 360)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801716b0(longlong param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58;
  undefined8 local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x20);
  iVar2 = 0;
  lVar3 = 0;
  lVar7 = 0;
  lVar6 = lVar3;
  if (0 < param_3) {
    do {
      lVar3 = lVar6 + 1;
      if (param_2[lVar7] != -1) {
        lVar3 = lVar6;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar3;
    } while (lVar7 < param_3);
  }
  lVar3 = param_3 + lVar3;
  if (lVar3 == param_3) {
    pcVar4 = param_2;
  }
  else {
    pcVar4 = (char *)(*(code *)PTR_malloc_1803bd530)(lVar3 + 1);
    if (pcVar4 == (char *)0x0) {
      return 0x1b;
    }
    lVar6 = 0;
    if (0 < param_3) {
      lVar7 = lVar6;
      pcVar5 = param_2;
      do {
        pcVar4[lVar7] = *pcVar5;
        lVar6 = lVar7 + 1;
        if (*pcVar5 == -1) {
          pcVar4[lVar6] = -1;
          lVar6 = lVar7 + 2;
        }
        pcVar5 = pcVar5 + 1;
        param_3 = param_3 + -1;
        lVar7 = lVar6;
      } while (param_3 != 0);
    }
    pcVar4[lVar6] = '\0';
  }
  lVar6 = 0;
  do {
    if (lVar3 <= lVar6) break;
    local_50 = *(undefined8 *)(lVar1 + 0x1a8);
    local_48 = 0x10;
    iVar2 = FUN_1801617d0(&local_50,1,0xffffffffffffffff);
    if (iVar2 + 1U < 2) {
      iVar2 = 0x37;
      break;
    }
    local_68 = &local_58;
    local_58 = 0;
    iVar2 = FUN_180151380(param_1,0,pcVar4 + lVar6,lVar3 - lVar6);
    lVar6 = lVar6 + local_58;
  } while (iVar2 == 0);
  if (pcVar4 != param_2) {
    (*(code *)PTR_free_1803bd538)(pcVar4);
  }
  return iVar2;
}



// ===== FUN_180171820 @ 180171820 (size 438)

void FUN_180171820(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  
  if (param_2 == 0x1f) {
    lVar3 = *(longlong *)(param_1 + 0x1a8);
    lVar4 = *(longlong *)(param_1 + 0x20);
    plVar1 = (longlong *)(lVar3 + 0x1eb8);
    plVar2 = (longlong *)(lVar3 + 0x1cb8);
    *plVar1 = (longlong)plVar2;
    plVar9 = plVar2;
    if (plVar2 < plVar1) {
      plVar9 = (longlong *)(lVar3 + 0x1cb9);
      *(undefined1 *)plVar2 = 0xff;
      *plVar1 = (longlong)plVar9;
    }
    if (plVar9 < plVar1) {
      *(undefined1 *)plVar9 = 0xfa;
      *plVar1 = *plVar1 + 1;
      if ((longlong *)*plVar1 < plVar1) {
        *(undefined1 *)*plVar1 = 0x1f;
        *plVar1 = *plVar1 + 1;
      }
    }
    uVar5 = Ordinal_9(*(undefined2 *)(lVar3 + 0x1ca8));
    uVar6 = Ordinal_9(*(undefined2 *)(lVar3 + 0x1caa));
    plVar9 = (longlong *)*plVar1;
    if (plVar9 < plVar1) {
      *(char *)plVar9 = (char)uVar5;
      *plVar1 = *plVar1 + 1;
      plVar9 = (longlong *)*plVar1;
    }
    if (plVar9 < plVar1) {
      *(char *)plVar9 = (char)((ushort)uVar5 >> 8);
      *plVar1 = *plVar1 + 1;
      plVar9 = (longlong *)*plVar1;
    }
    if (plVar9 < plVar1) {
      *(char *)plVar9 = (char)uVar6;
      *plVar1 = *plVar1 + 1;
      plVar9 = (longlong *)*plVar1;
      if (plVar9 < plVar1) {
        *(char *)plVar9 = (char)((ushort)uVar6 >> 8);
        *plVar1 = *plVar1 + 1;
        plVar9 = (longlong *)*plVar1;
        if (plVar9 < plVar1) {
          *(undefined1 *)plVar9 = 0xff;
          *plVar1 = *plVar1 + 1;
          plVar9 = (longlong *)*plVar1;
          if (plVar9 < plVar1) {
            *(undefined1 *)plVar9 = 0xf0;
            plVar9 = (longlong *)(*plVar1 + 1);
          }
        }
      }
    }
    *(longlong **)(lVar3 + 0x1ec0) = plVar9;
    *plVar1 = (longlong)plVar2;
    FUN_1801712f0(param_1,0x3e,lVar3 + 0x1cba,(longlong)plVar9 + (-2 - (longlong)plVar2));
    iVar7 = Ordinal_19(*(undefined8 *)(lVar4 + 0x1a8),plVar2,3);
    if (iVar7 < 0) {
      uVar8 = Ordinal_111();
      FUN_180150e00(param_1,"Sending data failed (%d)",uVar8);
    }
    FUN_1801716b0(param_1,lVar3 + 0x1cbb,4);
    iVar7 = Ordinal_19(*(undefined8 *)(lVar4 + 0x1a8),lVar3 + 0x1cbf,2);
    if (iVar7 < 0) {
      uVar8 = Ordinal_111();
      FUN_180150e00(param_1,"Sending data failed (%d)",uVar8);
    }
  }
  return;
}



// ===== FUN_1801719e0 @ 1801719e0 (size 806)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801719e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 auStack_878 [32];
  undefined8 local_858;
  undefined8 local_850;
  undefined8 local_848;
  char *local_840;
  undefined4 local_838;
  undefined4 local_830;
  undefined1 local_828 [2048];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_878;
  lVar6 = *(longlong *)(param_1 + 0x1a8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  FUN_1801712f0(param_1,0x3c,lVar6 + 0x1cb8,
                (*(longlong *)(lVar6 + 0x1ec0) - *(longlong *)(lVar6 + 0x1eb8)) + 2);
  cVar1 = **(char **)(lVar6 + 0x1eb8);
  *(char **)(lVar6 + 0x1eb8) = *(char **)(lVar6 + 0x1eb8) + 1;
  if (cVar1 == '\x18') {
    local_840 = (char *)(lVar6 + 0x1c08);
    lVar8 = -1;
    do {
      pcVar7 = (char *)(lVar6 + 0x1c09 + lVar8);
      lVar8 = lVar8 + 1;
    } while (*pcVar7 != '\0');
    local_850 = CONCAT44(local_850._4_4_,0x18);
  }
  else {
    if (cVar1 != '#') {
      if (cVar1 != '\'') {
        return;
      }
      local_848 = 0;
      local_850 = CONCAT44(local_850._4_4_,0x27);
      local_858 = CONCAT44(local_858._4_4_,0xfa);
      FUN_1801450d0(local_828,0x800,"%c%c%c%c",0xff);
      lVar8 = 4;
      for (puVar3 = *(undefined8 **)(lVar6 + 0x1cb0); puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)puVar3[1]) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (((char *)*puVar3)[lVar6] != '\0');
        if ((ulonglong)(lVar8 + 1 + lVar6) < 0x7fa) {
          pcVar7 = strchr((char *)*puVar3,0x2c);
          if (pcVar7 == (char *)0x0) {
            local_858 = *puVar3;
            iVar4 = FUN_1801450d0(local_828 + lVar8,0x800 - lVar8,&DAT_180304bdc);
          }
          else {
            local_850 = *puVar3;
            local_840 = pcVar7 + 1;
            local_848 = CONCAT44(local_848._4_4_,1);
            local_858 = CONCAT44(local_858._4_4_,(int)pcVar7 - (int)local_850);
            iVar4 = FUN_1801450d0(local_828 + lVar8,0x800 - lVar8,"%c%.*s%c%s",0);
          }
          lVar8 = lVar8 + iVar4;
        }
      }
      local_858._4_4_ = (undefined4)((ulonglong)local_858 >> 0x20);
      local_858 = CONCAT44(local_858._4_4_,0xf0);
      FUN_1801450d0(local_828 + lVar8,0x800 - lVar8,&DAT_180304bf4,0xff);
      iVar4 = Ordinal_19(*(undefined8 *)(lVar2 + 0x1a8),local_828,(int)lVar8 + 2,0);
      if (iVar4 < 0) {
        uVar5 = Ordinal_111();
        FUN_180150e00(param_1,"Sending data failed (%d)",uVar5);
      }
      FUN_1801712f0(param_1,0x3e,local_828 + 2,lVar8);
      return;
    }
    local_840 = (char *)(lVar6 + 0x1c28);
    lVar8 = -1;
    do {
      pcVar7 = (char *)(lVar6 + 0x1c29 + lVar8);
      lVar8 = lVar8 + 1;
    } while (*pcVar7 != '\0');
    local_850 = CONCAT44(local_850._4_4_,0x23);
  }
  local_830 = 0xf0;
  local_838 = 0xff;
  local_848 = 0;
  local_858 = CONCAT44(local_858._4_4_,0xfa);
  FUN_1801450d0(local_828,0x800,"%c%c%c%c%s%c%c",0xff);
  iVar4 = Ordinal_19(*(undefined8 *)(lVar2 + 0x1a8),local_828,(int)lVar8 + 6,0);
  if (iVar4 < 0) {
    uVar5 = Ordinal_111();
    FUN_180150e00(param_1,"Sending data failed (%d)",uVar5);
  }
  FUN_1801712f0(param_1,0x3e,local_828 + 2,lVar8 + 4);
  return;
}



// ===== FUN_180171d10 @ 180171d10 (size 2141)

undefined8 FUN_180171d10(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  longlong *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong local_res8;
  
  puVar5 = *(undefined4 **)(param_1 + 0x1a8);
  iVar14 = 0;
  iVar16 = -1;
  if (param_3 != 0) {
    local_res8 = 0;
    do {
      uVar15 = param_3;
      bVar3 = *(byte *)(local_res8 + param_2);
      uVar13 = (ulonglong)bVar3;
      param_3 = uVar15 - 1;
      if (8 < (uint)puVar5[0x72b]) goto LAB_18017251b;
      uVar12 = (uint)bVar3;
      switch(puVar5[0x72b]) {
      case 0:
        if (bVar3 == 0xff) {
          puVar5[0x72b] = 1;
          goto LAB_180171d87;
        }
        if (bVar3 == 0xd) {
          puVar5[0x72b] = 6;
        }
LAB_180171ddd:
        iVar4 = iVar14;
        if (-1 < iVar16) {
          iVar4 = iVar16;
        }
        iVar16 = iVar4;
        break;
      case 1:
code_r0x0001801723e6:
        switch(bVar3) {
        default:
          puVar5[0x72b] = 0;
          if (*(char *)(param_1 + 0xad7) != '\0') {
            if (uVar12 < 0xec) {
              FUN_180150ee0(param_1,"%s IAC %d",&DAT_180304a7c);
            }
            else {
              FUN_180150ee0(param_1,"%s IAC %s",&DAT_180304a7c,(&PTR_LAB_180303fc0)[uVar13]);
            }
          }
          break;
        case 0xfa:
          puVar5[0x72b] = 7;
          *(undefined4 **)(puVar5 + 0x7ae) = puVar5 + 0x72e;
          break;
        case 0xfb:
          puVar5[0x72b] = 2;
          break;
        case 0xfc:
          puVar5[0x72b] = 3;
          break;
        case 0xfd:
          puVar5[0x72b] = 4;
          break;
        case 0xfe:
          puVar5[0x72b] = 5;
          break;
        case 0xff:
          puVar5[0x72b] = 0;
          iVar4 = iVar14;
          if (-1 < iVar16) {
            iVar4 = iVar16;
          }
          iVar16 = iVar4;
        }
        break;
      case 2:
        if (*(char *)(param_1 + 0xad7) != '\0') {
          if (uVar12 < 0x28) {
            pcVar9 = (&PTR_s_BINARY_1803045e0)[(int)uVar12];
            if (pcVar9 == (char *)0x0) goto LAB_180171e15;
LAB_180171ea2:
            pcVar11 = "%s %s %s";
          }
          else {
            if (uVar12 == 0xff) {
              pcVar9 = "EXOPL";
              goto LAB_180171ea2;
            }
LAB_180171e15:
            pcVar9 = (char *)(ulonglong)uVar12;
            pcVar11 = "%s %s %d";
          }
          FUN_180150ee0(param_1,pcVar11,&DAT_180304a7c,&DAT_1803049d4,pcVar9);
        }
        *puVar5 = 1;
        lVar10 = *(longlong *)(param_1 + 0x1a8);
        iVar4 = *(int *)(lVar10 + 0xc08 + uVar13 * 4);
        if (iVar4 == 0) {
          if (*(int *)(lVar10 + 0x1408 + uVar13 * 4) != 1) goto LAB_180172028;
          *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 1;
          uVar8 = 0xfd;
          goto LAB_18017202d;
        }
        if (iVar4 == 2) {
          iVar4 = *(int *)(lVar10 + 0x1008 + uVar13 * 4);
          if (iVar4 == 0) {
            *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 1;
            puVar5[0x72b] = 0;
            break;
          }
          if (iVar4 == 1) {
            *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 3;
            *(undefined4 *)(lVar10 + 0x1008 + uVar13 * 4) = 0;
            goto LAB_180172028;
          }
        }
        else if (iVar4 == 3) {
          iVar4 = *(int *)(lVar10 + 0x1008 + uVar13 * 4);
          if (iVar4 == 0) goto LAB_180171eb3;
          if (iVar4 == 1) {
            *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 1;
            *(undefined4 *)(lVar10 + 0x1008 + uVar13 * 4) = 0;
            puVar5[0x72b] = 0;
            break;
          }
        }
        goto LAB_180172038;
      case 3:
        if (*(char *)(param_1 + 0xad7) != '\0') {
          if (uVar12 < 0x28) {
            pcVar9 = (&PTR_s_BINARY_1803045e0)[(int)uVar12];
            if (pcVar9 == (char *)0x0) goto LAB_180171f51;
LAB_180171fe2:
            pcVar11 = "%s %s %s";
          }
          else {
            if (uVar12 == 0xff) {
              pcVar9 = "EXOPL";
              goto LAB_180171fe2;
            }
LAB_180171f51:
            pcVar9 = (char *)(ulonglong)uVar12;
            pcVar11 = "%s %s %d";
          }
          FUN_180150ee0(param_1,pcVar11,&DAT_180304a7c,&DAT_1803049dc,pcVar9);
        }
        *puVar5 = 1;
        lVar10 = *(longlong *)(param_1 + 0x1a8);
        iVar4 = *(int *)(lVar10 + 0xc08 + uVar13 * 4);
        if (iVar4 != 1) {
          if (iVar4 == 2) {
            iVar4 = *(int *)(lVar10 + 0x1008 + uVar13 * 4);
            if (iVar4 == 0) {
LAB_180171eb3:
              *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
              break;
            }
            if (iVar4 == 1) {
              *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 0;
              *(undefined4 *)(lVar10 + 0x1008 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
              break;
            }
          }
          else if (iVar4 == 3) {
            iVar4 = *(int *)(lVar10 + 0x1008 + uVar13 * 4);
            if (iVar4 == 0) goto LAB_180171eb3;
            if (iVar4 == 1) {
              *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 2;
              *(undefined4 *)(lVar10 + 0x1008 + uVar13 * 4) = 0;
              uVar8 = 0xfd;
              goto LAB_18017202d;
            }
          }
          goto LAB_180172038;
        }
        *(undefined4 *)(lVar10 + 0xc08 + uVar13 * 4) = 0;
LAB_180172028:
        uVar8 = 0xfe;
        goto LAB_18017202d;
      case 4:
        if (*(char *)(param_1 + 0xad7) != '\0') {
          if (uVar12 < 0x28) {
            pcVar9 = (&PTR_s_BINARY_1803045e0)[(int)uVar12];
            if (pcVar9 == (char *)0x0) goto LAB_18017206a;
LAB_1801720fc:
            pcVar11 = "%s %s %s";
          }
          else {
            if (uVar12 == 0xff) {
              pcVar9 = "EXOPL";
              goto LAB_1801720fc;
            }
LAB_18017206a:
            pcVar9 = (char *)(ulonglong)uVar12;
            pcVar11 = "%s %s %d";
          }
          FUN_180150ee0(param_1,pcVar11,&DAT_180304a7c,&DAT_1803049e4,pcVar9);
        }
        *puVar5 = 1;
        lVar10 = *(longlong *)(param_1 + 0x1a8);
        iVar4 = *(int *)(lVar10 + 8 + uVar13 * 4);
        if (iVar4 == 0) {
          if (*(int *)(lVar10 + 0x808 + uVar13 * 4) == 1) {
            *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 1;
            FUN_180171620(param_1,0xfb,uVar13);
LAB_18017219a:
            if (*(int *)(lVar10 + 0x1808 + uVar13 * 4) != 1) goto LAB_18017215b;
            FUN_180171820(param_1,uVar13);
            puVar5[0x72b] = 0;
          }
          else {
            if (*(int *)(lVar10 + 0x1808 + uVar13 * 4) != 1) {
LAB_18017214b:
              FUN_180171620(param_1,0xfc,uVar13);
              goto LAB_18017215b;
            }
            *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 1;
            FUN_180171620(param_1,0xfb,uVar13);
            FUN_180171820(param_1,uVar13);
            puVar5[0x72b] = 0;
          }
        }
        else {
          if (iVar4 == 2) {
            iVar4 = *(int *)(lVar10 + 0x408 + uVar13 * 4);
            if (iVar4 == 0) {
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 1;
              goto LAB_18017219a;
            }
            if (iVar4 == 1) {
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 3;
              *(undefined4 *)(lVar10 + 0x1008 + uVar13 * 4) = 0;
              goto LAB_18017214b;
            }
          }
          else if (iVar4 == 3) {
            iVar4 = *(int *)(lVar10 + 0x408 + uVar13 * 4);
            if (iVar4 == 0) {
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
            }
            else {
              if (iVar4 != 1) goto LAB_18017215b;
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 1;
              *(undefined4 *)(lVar10 + 0x408 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
            }
            break;
          }
LAB_18017215b:
          puVar5[0x72b] = 0;
        }
        break;
      case 5:
        if (*(char *)(param_1 + 0xad7) != '\0') {
          if (uVar12 < 0x28) {
            pcVar9 = (&PTR_s_BINARY_1803045e0)[(int)uVar12];
            if (pcVar9 == (char *)0x0) goto LAB_180172226;
LAB_1801722ac:
            pcVar11 = "%s %s %s";
          }
          else {
            if (uVar12 == 0xff) {
              pcVar9 = "EXOPL";
              goto LAB_1801722ac;
            }
LAB_180172226:
            pcVar9 = (char *)(ulonglong)uVar12;
            pcVar11 = "%s %s %d";
          }
          FUN_180150ee0(param_1,pcVar11,&DAT_180304a7c,&DAT_1803049e8,pcVar9);
        }
        *puVar5 = 1;
        lVar10 = *(longlong *)(param_1 + 0x1a8);
        iVar4 = *(int *)(lVar10 + 8 + uVar13 * 4);
        if (iVar4 != 1) {
          if (iVar4 == 2) {
            iVar4 = *(int *)(lVar10 + 0x408 + uVar13 * 4);
            if (iVar4 == 0) {
LAB_1801722e8:
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
              break;
            }
            if (iVar4 == 1) {
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 0;
              *(undefined4 *)(lVar10 + 0x408 + uVar13 * 4) = 0;
              puVar5[0x72b] = 0;
              break;
            }
          }
          else if (iVar4 == 3) {
            iVar4 = *(int *)(lVar10 + 0x408 + uVar13 * 4);
            if (iVar4 == 0) goto LAB_1801722e8;
            if (iVar4 == 1) {
              *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 2;
              *(undefined4 *)(lVar10 + 0x408 + uVar13 * 4) = 0;
              uVar8 = 0xfb;
              goto LAB_18017202d;
            }
          }
          goto LAB_180172038;
        }
        *(undefined4 *)(lVar10 + 8 + uVar13 * 4) = 0;
        uVar8 = 0xfc;
LAB_18017202d:
        FUN_180171620(param_1,uVar8,uVar13);
LAB_180172038:
        puVar5[0x72b] = 0;
        break;
      case 6:
        puVar5[0x72b] = 0;
        if (bVar3 != 0) goto LAB_180171ddd;
LAB_180171d87:
        if ((-1 < iVar16) &&
           (uVar8 = FUN_180151330(param_1,1,iVar16 + param_2,(longlong)(iVar14 - iVar16)),
           (int)uVar8 != 0)) {
          return uVar8;
        }
        iVar16 = -1;
        break;
      case 7:
        if (bVar3 == 0xff) {
          puVar5[0x72b] = 8;
        }
        else {
          pbVar1 = (byte *)(puVar5 + 0x7ae);
          if (*(byte **)pbVar1 < pbVar1) {
            **(byte **)pbVar1 = bVar3;
            *(longlong *)pbVar1 = *(longlong *)pbVar1 + 1;
          }
        }
        break;
      case 8:
        if (bVar3 == 0xf0) {
          plVar2 = (longlong *)(puVar5 + 0x7ae);
          plVar7 = (longlong *)*plVar2;
          if (plVar7 < plVar2) {
            *(undefined1 *)plVar7 = 0xff;
            *plVar2 = *plVar2 + 1;
            plVar7 = (longlong *)*plVar2;
            if (plVar7 < plVar2) {
              *(undefined1 *)plVar7 = 0xf0;
              plVar7 = (longlong *)(*plVar2 + 1);
            }
          }
          *(longlong *)(puVar5 + 0x7b0) = (longlong)plVar7 + -2;
          *plVar2 = (longlong)(puVar5 + 0x72e);
          FUN_1801719e0(param_1);
          puVar5[0x72b] = 0;
        }
        else {
          if (bVar3 != 0xff) {
            pbVar1 = (byte *)(puVar5 + 0x7ae);
            pbVar6 = *(byte **)pbVar1;
            if (pbVar6 < pbVar1) {
              *pbVar6 = 0xff;
              *(longlong *)pbVar1 = *(longlong *)pbVar1 + 1;
              pbVar6 = *(byte **)pbVar1;
              if (pbVar6 < pbVar1) {
                *pbVar6 = bVar3;
                pbVar6 = (byte *)(*(longlong *)pbVar1 + 1);
              }
            }
            *(byte **)(puVar5 + 0x7b0) = pbVar6 + -2;
            *(undefined4 **)pbVar1 = puVar5 + 0x72e;
            if (*(char *)(param_1 + 0xad7) != '\0') {
              if (uVar12 < 0xec) {
                FUN_180150ee0(param_1,"%s IAC %d","In SUBOPTION processing, RCVD");
              }
              else {
                FUN_180150ee0(param_1,"%s IAC %s","In SUBOPTION processing, RCVD",
                              (&PTR_LAB_180303fc0)[uVar13]);
              }
            }
            FUN_1801719e0(param_1);
            goto code_r0x0001801723e6;
          }
          plVar2 = (longlong *)(puVar5 + 0x7ae);
          if ((longlong *)*plVar2 < plVar2) {
            *(undefined1 *)*plVar2 = 0xff;
            *plVar2 = *plVar2 + 1;
          }
          puVar5[0x72b] = 7;
        }
      }
LAB_18017251b:
      iVar14 = iVar14 + 1;
      local_res8 = local_res8 + 1;
    } while (param_3 != 0);
    if (-1 < iVar16) {
      uVar8 = FUN_180151330(param_1,uVar15 & 0xffffffff,iVar16 + param_2,(longlong)(iVar14 - iVar16)
                           );
      return uVar8;
    }
  }
  return 0;
}



// ===== FUN_1801725d0 @ 1801725d0 (size 456)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801725d0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar5 = (undefined4 *)(*(code *)PTR_calloc_1803bd550)(1,0x160);
  *(undefined4 **)(lVar1 + 0x3c0) = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
LAB_180172767:
    uVar7 = 0x1b;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x318);
    uVar8 = 0x200;
    if ((uVar2 != 0) && (uVar8 = uVar2, 0xffb0 < uVar2 - 8)) {
      return 0x47;
    }
    uVar2 = uVar8;
    if (uVar8 < 0x200) {
      uVar2 = 0x200;
    }
    if (*(longlong *)(puVar5 + 0x54) == 0) {
      lVar6 = (*(code *)PTR_calloc_1803bd550)(1,(longlong)(int)(uVar2 + 4));
      *(longlong *)(puVar5 + 0x54) = lVar6;
      if (lVar6 == 0) goto LAB_180172767;
    }
    if (*(longlong *)(puVar5 + 0x56) == 0) {
      lVar6 = (*(code *)PTR_calloc_1803bd550)(1,(longlong)(int)(uVar2 + 4));
      *(longlong *)(puVar5 + 0x56) = lVar6;
      if (lVar6 == 0) goto LAB_180172767;
    }
    FUN_180152410(lVar1,1);
    *(longlong *)(puVar5 + 4) = param_1;
    *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(lVar1 + 0x1a8);
    *puVar5 = 0;
    puVar5[2] = 0xffffff9c;
    puVar5[0x51] = 0x200;
    puVar5[0x52] = uVar8;
    *(undefined2 *)(puVar5 + 0xe) = **(undefined2 **)(lVar1 + 0x58);
    FUN_180173b80(puVar5);
    if (*(char *)(lVar1 + 0x2fe) == '\0') {
      iVar3 = Ordinal_2(*(undefined8 *)(puVar5 + 6),puVar5 + 0xe,
                        *(undefined4 *)(*(longlong *)(lVar1 + 0x58) + 0xc));
      if (iVar3 != 0) {
        uVar4 = Ordinal_111();
        uVar7 = FUN_180138690(uVar4,local_138,0x100);
        FUN_180150e00(param_1,"bind() failed; %s",uVar7);
        return 7;
      }
      *(undefined1 *)(lVar1 + 0x2fe) = 1;
    }
    FUN_180160980(param_1);
    uVar7 = 0;
    *param_2 = 1;
  }
  return uVar7;
}



// ===== FUN_1801727a0 @ 1801727a0 (size 83)

undefined8 FUN_1801727a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x3c0);
  if (lVar1 != 0) {
    (*(code *)PTR_free_1803bd538)(*(undefined8 *)(lVar1 + 0x150));
    *(undefined8 *)(lVar1 + 0x150) = 0;
    (*(code *)PTR_free_1803bd538)(*(undefined8 *)(lVar1 + 0x158));
    *(undefined8 *)(lVar1 + 0x158) = 0;
    (*(code *)PTR_free_1803bd538)(lVar1);
  }
  return 0;
}



// ===== FUN_180172800 @ 180172800 (size 533)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180172800(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(param_1 + 0x20);
  *param_2 = 0;
  if (*(longlong *)(lVar1 + 0x3c0) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    puVar7 = (undefined4 *)(*(code *)PTR_calloc_1803bd550)(1,0x160);
    *(undefined4 **)(lVar2 + 0x3c0) = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      return 0x1b;
    }
    uVar4 = *(uint *)(param_1 + 0x318);
    uVar10 = 0x200;
    if ((uVar4 != 0) && (uVar10 = uVar4, 0xffb0 < uVar4 - 8)) {
      return 0x47;
    }
    uVar4 = uVar10;
    if (uVar10 < 0x200) {
      uVar4 = 0x200;
    }
    if (*(longlong *)(puVar7 + 0x54) == 0) {
      lVar8 = (*(code *)PTR_calloc_1803bd550)(1,(longlong)(int)(uVar4 + 4));
      *(longlong *)(puVar7 + 0x54) = lVar8;
      if (lVar8 == 0) {
        return 0x1b;
      }
    }
    if (*(longlong *)(puVar7 + 0x56) == 0) {
      lVar8 = (*(code *)PTR_calloc_1803bd550)(1,(longlong)(int)(uVar4 + 4));
      *(longlong *)(puVar7 + 0x56) = lVar8;
      if (lVar8 == 0) {
        return 0x1b;
      }
    }
    FUN_180152410(lVar2,1);
    *(longlong *)(puVar7 + 4) = param_1;
    *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(lVar2 + 0x1a8);
    *puVar7 = 0;
    puVar7[2] = 0xffffff9c;
    puVar7[0x51] = 0x200;
    puVar7[0x52] = uVar10;
    *(undefined2 *)(puVar7 + 0xe) = **(undefined2 **)(lVar2 + 0x58);
    FUN_180173b80(puVar7);
    if (*(char *)(lVar2 + 0x2fe) == '\0') {
      iVar5 = Ordinal_2(*(undefined8 *)(puVar7 + 6),puVar7 + 0xe,
                        *(undefined4 *)(*(longlong *)(lVar2 + 0x58) + 0xc));
      if (iVar5 != 0) {
        uVar6 = Ordinal_111();
        uVar9 = FUN_180138690(uVar6,local_148,0x100);
        FUN_180150e00(param_1,"bind() failed; %s",uVar9);
        return 7;
      }
      *(undefined1 *)(lVar2 + 0x2fe) = 1;
    }
    FUN_180160980(param_1);
    *param_2 = 1;
  }
  lVar1 = *(longlong *)(lVar1 + 0x3c0);
  if (lVar1 == 0) {
    return 0x47;
  }
  piVar3 = *(int **)(*(longlong *)(param_1 + 0x20) + 0x3c0);
  *param_2 = 0;
  uVar9 = FUN_180173c80(piVar3,0);
  if (*piVar3 == 3) {
    if ((int)uVar9 != 0) {
      return uVar9;
    }
  }
  else {
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    FUN_180172b00(param_1,param_2);
  }
  uVar9 = FUN_180173d30(*(undefined4 *)(lVar1 + 8));
  return uVar9;
}



// ===== FUN_180172a20 @ 180172a20 (size 74)

undefined4 FUN_180172a20(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x3c0);
  iVar2 = FUN_180160670();
  if (iVar2 != 0) {
    return 0x2a;
  }
  if (lVar1 != 0) {
    uVar3 = FUN_180173d30(*(undefined4 *)(lVar1 + 8));
  }
  return uVar3;
}



// ===== FUN_180172a70 @ 180172a70 (size 138)

undefined8 FUN_180172a70(longlong param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined1 *)(param_2 + 0x4f7) = 4;
  pcVar2 = strstr(*(char **)(param_1 + 0x1250),";mode=");
  if ((pcVar2 == (char *)0x0) &&
     (pcVar2 = strstr(*(char **)(param_2 + 0x60),";mode="), pcVar2 == (char *)0x0)) {
    return 0;
  }
  *pcVar2 = '\0';
  cVar1 = FUN_180140200(pcVar2[6]);
  if ((cVar1 == 'A') || ((cVar1 != 'I' && (cVar1 == 'N')))) {
    *(undefined1 *)(param_1 + 0x13c2) = 1;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x13c2) = 0;
  return 0;
}



// ===== FUN_180172b00 @ 180172b00 (size 324)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180172b00(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong local_128 [2];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_158;
  piVar1 = *(int **)(*(longlong *)(param_1 + 0x20) + 0x3c0);
  lVar4 = FUN_180152610(*(undefined8 *)(piVar1 + 4),0,*piVar1 == 0);
  if (lVar4 < 0) {
    piVar1[2] = -99;
    *piVar1 = 3;
  }
  else {
    _time64(local_128);
    if ((longlong)piVar1[9] + *(longlong *)(piVar1 + 0xc) < local_128[0]) {
      _time64((__time64_t *)(piVar1 + 0xc));
      iVar2 = 7;
      *param_2 = 0;
      goto LAB_180172bed;
    }
  }
  *param_2 = 0;
  iVar2 = FUN_180161bd0(*(undefined8 *)(piVar1 + 6),0xffffffffffffffff,0xffffffffffffffff,0);
  if (iVar2 == -1) {
    uVar3 = Ordinal_111();
    uVar5 = FUN_180138690(uVar3,local_118,0x100);
    FUN_180150e00(param_1,&DAT_1802fa0cc,uVar5);
    piVar1[3] = 5;
    return 0;
  }
  if (iVar2 == 0) {
    return 0;
  }
  uVar5 = FUN_180173020(param_1);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  iVar2 = piVar1[3];
LAB_180172bed:
  uVar5 = FUN_180173c80(piVar1,iVar2);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  iVar2 = *piVar1;
  *param_2 = iVar2 == 3;
  if (iVar2 == 3) {
    local_138 = 0xffffffff;
    FUN_18015f7f0(param_1,0xffffffff);
  }
  return 0;
}



// ===== FUN_180172c50 @ 180172c50 (size 100)

undefined8 FUN_180172c50(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  uVar2 = FUN_180172b00();
  if ((*param_2 == '\0') && ((int)uVar2 == 0)) {
    iVar1 = FUN_180160d50(param_1);
    if (iVar1 != 0) {
      return 0x2a;
    }
    puVar3 = (undefined4 *)FUN_180148b70(local_18);
    local_28 = *puVar3;
    uStack_24 = puVar3[1];
    uStack_20 = puVar3[2];
    uStack_1c = puVar3[3];
    uVar2 = FUN_180161d80(param_1,&local_28);
  }
  return uVar2;
}



// ===== FUN_180172cc0 @ 180172cc0 (size 77)

void FUN_180172cc0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_180150ee0(*(undefined8 *)(param_1 + 4),&DAT_1802fa0cc,"Connected for receive");
  *param_1 = 1;
  iVar1 = FUN_180173b80(param_1);
  if (iVar1 == 0) {
    FUN_180173290(param_1,param_2);
  }
  return;
}



// ===== FUN_180172d10 @ 180172d10 (size 77)

void FUN_180172d10(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_180150ee0(*(undefined8 *)(param_1 + 4),&DAT_1802fa0cc,"Connected for transmit");
  *param_1 = 2;
  iVar1 = FUN_180173b80(param_1);
  if (iVar1 == 0) {
    FUN_180173e30(param_1,param_2);
  }
  return;
}



// ===== FUN_180172d60 @ 180172d60 (size 690)

undefined8 FUN_180172d60(longlong param_1,void *param_2,int param_3)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  longlong lVar7;
  longlong lVar6;
  void *_Buf;
  size_t sVar8;
  char *_Str;
  size_t _MaxCount;
  ulonglong uVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x144) = 0x200;
  pvVar1 = (void *)((longlong)param_3 + (longlong)param_2);
  _Buf = param_2;
  if (pvVar1 <= param_2) {
    return 0;
  }
  while( true ) {
    _MaxCount = ((longlong)param_3 - (longlong)_Buf) + (longlong)param_2;
    pvVar5 = memchr(_Buf,0,_MaxCount);
    sVar8 = _MaxCount;
    if (pvVar5 != (void *)0x0) {
      sVar8 = (longlong)pvVar5 - (longlong)_Buf;
    }
    uVar9 = sVar8 + 1;
    if (_MaxCount <= uVar9) break;
    pvVar5 = memchr((void *)(uVar9 + (longlong)_Buf),0,_MaxCount - uVar9);
    sVar8 = _MaxCount - uVar9;
    if (pvVar5 != (void *)0x0) {
      sVar8 = (longlong)pvVar5 - (longlong)(uVar9 + (longlong)_Buf);
    }
    uVar9 = sVar8 + 1 + uVar9;
    if (_MaxCount < uVar9) break;
    lVar6 = -1;
    do {
      lVar7 = lVar6;
      lVar6 = lVar7 + 1;
    } while (*(char *)((longlong)_Buf + lVar6) != '\0');
    _Str = (char *)((longlong)_Buf + lVar7 + 2);
    pvVar5 = (void *)((longlong)_Buf + uVar9);
    if (pvVar5 == (void *)0x0) break;
    FUN_180150ee0(lVar2,"got option=(%s) value=(%s)",_Buf,_Str);
    iVar3 = FUN_1801403a0(_Buf,"blksize",7);
    if (iVar3 == 0) {
      iVar3 = FUN_1801403a0(_Buf,"tsize",5);
      if (iVar3 != 0) {
        lVar4 = strtol(_Str,(char **)0x0,10);
        FUN_180150ee0(lVar2,"%s (%ld)","tsize parsed from OACK",lVar4);
        if (*(char *)(lVar2 + 0x13c8) == '\0') {
          if (lVar4 == 0) {
            FUN_180150e00(lVar2,"invalid tsize -:%s:- value in OACK packet",_Str);
            return 0x47;
          }
          FUN_1801608f0(lVar2,(longlong)lVar4);
        }
      }
    }
    else {
      lVar4 = strtol(_Str,(char **)0x0,10);
      if (lVar4 == 0) {
        FUN_180150e00(lVar2,"invalid blocksize value in OACK packet");
        return 0x47;
      }
      if (0xffb8 < lVar4) {
        FUN_180150e00(lVar2,"%s (%d)","blksize is larger than max supported",0xffb8);
        return 0x47;
      }
      if (lVar4 < 8) {
        FUN_180150e00(lVar2,"%s (%d)","blksize is smaller than min supported",8);
        return 0x47;
      }
      if (*(int *)(param_1 + 0x148) < lVar4) {
        FUN_180150e00(lVar2,"%s (%ld)","server requested blksize larger than allocated",lVar4);
        return 0x47;
      }
      *(long *)(param_1 + 0x144) = lVar4;
      FUN_180150ee0(lVar2,"%s (%d) %s (%d)","blksize parsed from OACK",lVar4,"requested",
                    *(int *)(param_1 + 0x148));
    }
    if (pvVar1 <= pvVar5) {
      return 0;
    }
    _Buf = pvVar5;
  }
  FUN_180150e00(lVar2,"Malformed ACK packet, rejecting");
  return 0x47;
}



// ===== FUN_180173020 @ 180173020 (size 587)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180173020(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  int *local_c0;
  int local_b8 [4];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_e8;
  uVar9 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x3c0);
  local_c0 = local_b8;
  local_b8[0] = 0x80;
  local_c8 = local_a8;
  uVar5 = Ordinal_17(*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x150),
                     *(int *)(lVar3 + 0x144) + 4,0);
  *(undefined4 *)(lVar3 + 0x13c) = uVar5;
  if (*(int *)(lVar3 + 0x138) == 0) {
    memcpy((void *)(lVar3 + 0xb8),local_a8,(longlong)local_b8[0]);
    *(int *)(lVar3 + 0x138) = local_b8[0];
  }
  iVar7 = *(int *)(lVar3 + 0x13c);
  if (iVar7 < 4) {
    FUN_180150e00(param_1,"Received too short packet");
    *(undefined4 *)(lVar3 + 0xc) = 7;
    return 0;
  }
  puVar4 = *(undefined1 **)(lVar3 + 0x150);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  *(uint *)(lVar3 + 0xc) = (uint)CONCAT11(uVar1,uVar2);
  switch((uint)CONCAT11(uVar1,uVar2)) {
  default:
    FUN_180150e00(param_1,&DAT_1802fa0cc,"Internal error: Unexpected packet");
    break;
  case 3:
    if ((4 < iVar7) && ((short)(*(short *)(lVar3 + 0x14c) + 1) == CONCAT11(puVar4[2],puVar4[3]))) {
      uVar6 = FUN_180151330(param_1,1,puVar4 + 4,(longlong)(iVar7 + -4));
      uVar9 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        *(longlong *)(param_1 + 0x100) =
             *(longlong *)(param_1 + 0x100) + (longlong)(*(int *)(lVar3 + 0x13c) + -4);
        uVar6 = FUN_1801608b0(param_1,*(undefined8 *)(param_1 + 0x100));
        uVar9 = (ulonglong)uVar6;
        if (uVar6 == 0) break;
      }
      FUN_180173c80(lVar3,5);
      return uVar9;
    }
    break;
  case 4:
    break;
  case 5:
    *(uint *)(lVar3 + 8) = (uint)CONCAT11(puVar4[2],puVar4[3]);
    uVar8 = FUN_180173cf0(puVar4 + 4,(longlong)(iVar7 + -4));
    if (uVar8 < (ulonglong)(longlong)(iVar7 + -4)) {
      FUN_180150ee0(param_1,"TFTP error: %s",puVar4 + 4);
    }
    break;
  case 6:
    uVar8 = FUN_180172d60(lVar3,puVar4 + 2,iVar7 + -2);
    uVar9 = uVar8 & 0xffffffff;
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  iVar7 = FUN_180160d50(param_1);
  if (iVar7 == 0) {
    return uVar9;
  }
  FUN_180173c80(lVar3,5);
  return 0x2a;
}



// ===== FUN_180173290 @ 180173290 (size 821)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180173290(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined4 local_120;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_148;
  uVar2 = *(undefined8 *)(param_1 + 4);
  if (param_2 == 3) {
    sVar3 = CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x54) + 2),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x54) + 3));
    if ((short)(*(short *)(param_1 + 0x53) + 1) == sVar3) {
      param_1[8] = 0;
    }
    else {
      if (*(short *)(param_1 + 0x53) != sVar3) {
        FUN_180150ee0(uVar2,"Received unexpected DATA packet block %d, expecting block %d",sVar3);
        return 0;
      }
      FUN_180150ee0(uVar2,"Received last DATA packet block %d again.",sVar3);
    }
    *(short *)(param_1 + 0x53) = sVar3;
    **(undefined1 **)(param_1 + 0x56) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 4;
    uVar1 = *(undefined2 *)(param_1 + 0x53);
    *(char *)(*(longlong *)(param_1 + 0x56) + 2) = (char)((ushort)uVar1 >> 8);
    local_128 = param_1 + 0x2e;
    *(char *)(*(longlong *)(param_1 + 0x56) + 3) = (char)uVar1;
    local_120 = param_1[0x4e];
    iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),4);
    if (iVar4 < 0) goto LAB_180173372;
    uVar5 = 3;
    if ((longlong)(int)param_1[0x51] + 4 <= (longlong)(int)param_1[0x4f]) {
      uVar5 = 1;
    }
    *param_1 = uVar5;
    _time64((__time64_t *)(param_1 + 0xc));
  }
  else if (param_2 == 5) {
    **(undefined1 **)(param_1 + 0x56) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 5;
    uVar1 = *(undefined2 *)(param_1 + 0x53);
    *(char *)(*(longlong *)(param_1 + 0x56) + 2) = (char)((ushort)uVar1 >> 8);
    local_128 = param_1 + 0x2e;
    *(char *)(*(longlong *)(param_1 + 0x56) + 3) = (char)uVar1;
    local_120 = param_1[0x4e];
    Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),4);
    *param_1 = 3;
  }
  else if (param_2 == 6) {
    *(undefined2 *)(param_1 + 0x53) = 0;
    param_1[8] = 0;
    **(undefined1 **)(param_1 + 0x56) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 4;
    uVar1 = *(undefined2 *)(param_1 + 0x53);
    *(char *)(*(longlong *)(param_1 + 0x56) + 2) = (char)((ushort)uVar1 >> 8);
    local_128 = param_1 + 0x2e;
    *(char *)(*(longlong *)(param_1 + 0x56) + 3) = (char)uVar1;
    local_120 = param_1[0x4e];
    iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),4);
    if (iVar4 < 0) {
LAB_180173372:
      uVar5 = Ordinal_111();
      uVar6 = FUN_180138690(uVar5,local_118,0x100);
      FUN_180150e00(uVar2,&DAT_1802fa0cc,uVar6);
      return 0x37;
    }
    *param_1 = 1;
    _time64((__time64_t *)(param_1 + 0xc));
  }
  else {
    if (param_2 != 7) {
      FUN_180150e00(uVar2,&DAT_1802fa0cc,"tftp_rx: internal error");
      return 0x47;
    }
    param_1[8] = param_1[8] + 1;
    FUN_180150ee0(uVar2,"Timeout waiting for block %d ACK.  Retries = %d",
                  *(short *)(param_1 + 0x53) + 1);
    if ((int)param_1[10] < (int)param_1[8]) {
      param_1[2] = 0xffffff9d;
      *param_1 = 3;
    }
    else {
      local_120 = param_1[0x4e];
      local_128 = param_1 + 0x2e;
      iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),4);
      if (iVar4 < 0) goto LAB_180173372;
    }
  }
  return 0;
}



// ===== FUN_1801735d0 @ 1801735d0 (size 1421)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801735d0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  char *local_1a0;
  undefined8 local_198;
  longlong local_188 [2];
  char local_178 [64];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_1c8;
  lVar2 = *(longlong *)(param_1 + 4);
  uVar6 = 0;
  pcVar13 = "netascii";
  if (*(char *)(lVar2 + 0x13c2) == '\0') {
    pcVar13 = "octet";
  }
  switch(param_2) {
  case 0:
  case 7:
    param_1[8] = param_1[8] + 1;
    if ((int)param_1[10] < (int)param_1[8]) {
      param_1[2] = 0xffffff9e;
      *param_1 = 3;
      return 0;
    }
    cVar1 = *(char *)(lVar2 + 0x13c8);
    **(undefined1 **)(param_1 + 0x56) = 0;
    if (cVar1 == '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 1;
    }
    else {
      *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 2;
      *(longlong *)(*(longlong *)(param_1 + 4) + 0x1a0) = *(longlong *)(param_1 + 0x56) + 4;
      if (*(longlong *)(lVar2 + 0x1200) != -1) {
        FUN_180160940(lVar2);
      }
    }
    local_1a8 = CONCAT44(local_1a8._4_4_,4);
    uVar6 = FUN_180134970(*(longlong *)(*(longlong *)(param_1 + 4) + 0x1250) + 1,0,local_188,0);
    uVar12 = uVar6 & 0xffffffff;
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pcVar13[lVar7] != '\0');
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)(local_188[0] + uVar6) != '\0');
    if (((int)param_1[0x51] - lVar7) - 4U < uVar6) {
      pcVar13 = "TFTP file name too long";
      goto LAB_180173726;
    }
    local_198 = 0;
    local_1a8 = 0;
    local_1a0 = pcVar13;
    FUN_1801450d0(*(longlong *)(param_1 + 0x56) + 2,(longlong)(int)param_1[0x51],"%s%c%s%c");
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pcVar13[lVar7] != '\0');
    lVar9 = -1;
    do {
      lVar8 = lVar9;
      lVar9 = lVar8 + 1;
    } while (*(char *)(local_188[0] + 1 + lVar8) != '\0');
    uVar6 = lVar8 + 5 + lVar7;
    if (*(char *)(lVar2 + 0xabc) != '\0') {
LAB_180173a84:
      lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x58);
      local_1a8 = lVar7 + 0x10;
      local_1a0 = (char *)CONCAT44(local_1a0._4_4_,*(undefined4 *)(lVar7 + 0xc));
      iVar3 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),
                         uVar6 & 0xffffffff,0);
      if ((longlong)iVar3 != uVar6) {
        uVar4 = Ordinal_111();
        uVar10 = FUN_180138690(uVar4,local_138,0x100);
        FUN_180150e00(lVar2,&DAT_1802fa0cc,uVar10);
      }
      (*(code *)PTR_free_1803bd538)(local_188[0]);
      return uVar12;
    }
    if ((*(char *)(lVar2 + 0x13c8) == '\0') || (*(longlong *)(lVar2 + 0x1200) == -1)) {
      local_178[0] = '0';
      local_178[1] = '\0';
    }
    else {
      FUN_1801450d0(local_178,0x40,"%I64d");
    }
    uVar12 = uVar6 + 6;
    if ((ulonglong)(longlong)(int)param_1[0x51] < uVar12) {
LAB_180173853:
      FUN_1801450d0(local_178,0x40,&DAT_1802fec90,param_1[0x52]);
LAB_18017386b:
      FUN_1801450d0(local_178,0x40,&DAT_1802fec90,param_1[9]);
    }
    else {
      pcVar13 = "tsize";
      pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + uVar6);
      do {
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        *pcVar11 = cVar1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      lVar7 = -1;
      do {
        lVar9 = lVar7;
        lVar7 = lVar9 + 1;
      } while (local_178[lVar9 + 1] != '\0');
      pcVar13 = local_178;
      if ((ulonglong)(longlong)(int)param_1[0x51] < lVar9 + 2 + uVar12) goto LAB_180173853;
      pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + uVar12);
      do {
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        *pcVar11 = cVar1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      lVar7 = -1;
      do {
        lVar9 = lVar7;
        lVar7 = lVar9 + 1;
      } while (local_178[lVar9 + 1] != '\0');
      lVar7 = lVar9 + 2 + uVar12;
      FUN_1801450d0(local_178,0x40,&DAT_1802fec90,param_1[0x52]);
      uVar6 = lVar7 + 8;
      if ((ulonglong)(longlong)(int)param_1[0x51] < uVar6) goto LAB_18017386b;
      pcVar13 = "blksize";
      pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + lVar7);
      do {
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        *pcVar11 = cVar1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      lVar7 = -1;
      do {
        lVar9 = lVar7;
        lVar7 = lVar9 + 1;
      } while (local_178[lVar9 + 1] != '\0');
      pcVar13 = local_178;
      if ((ulonglong)(longlong)(int)param_1[0x51] < lVar9 + 2 + uVar6) {
        FUN_1801450d0(pcVar13,0x40,&DAT_1802fec90,param_1[9]);
        pcVar13 = "TFTP buffer too small for options";
        goto LAB_180173726;
      }
      pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + uVar6);
      do {
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        *pcVar11 = cVar1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      lVar7 = -1;
      do {
        lVar9 = lVar7;
        lVar7 = lVar9 + 1;
      } while (local_178[lVar9 + 1] != '\0');
      lVar7 = lVar9 + 2 + uVar6;
      FUN_1801450d0(local_178,0x40,&DAT_1802fec90,param_1[9]);
      uVar6 = lVar7 + 8;
      if (uVar6 <= (ulonglong)(longlong)(int)param_1[0x51]) {
        pcVar13 = "timeout";
        pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + lVar7);
        do {
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          *pcVar11 = cVar1;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        lVar7 = -1;
        do {
          lVar9 = lVar7;
          lVar7 = lVar9 + 1;
        } while (local_178[lVar9 + 1] != '\0');
        if (lVar9 + 2 + uVar6 <= (ulonglong)(longlong)(int)param_1[0x51]) {
          pcVar13 = local_178;
          pcVar11 = (char *)(*(longlong *)(param_1 + 0x56) + uVar6);
          do {
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            *pcVar11 = cVar1;
            pcVar11 = pcVar11 + 1;
            lVar7 = -1;
          } while (cVar1 != '\0');
          do {
            lVar9 = lVar7;
            lVar7 = lVar9 + 1;
          } while (local_178[lVar9 + 1] != '\0');
          uVar6 = lVar9 + 2 + uVar6;
          uVar12 = 0;
          goto LAB_180173a84;
        }
      }
    }
    pcVar13 = "TFTP buffer too small for options";
LAB_180173726:
    FUN_180150e00(lVar2,pcVar13);
    (*(code *)PTR_free_1803bd538)(local_188[0]);
    return 0x47;
  default:
    FUN_180150e00(lVar2,"tftp_send_first: internal error");
    break;
  case 3:
    goto LAB_180173b15;
  case 4:
    uVar5 = FUN_180172d10(param_1);
    uVar6 = (ulonglong)uVar5;
    break;
  case 5:
    *param_1 = 3;
    break;
  case 6:
    if (*(char *)(lVar2 + 0x13c8) != '\0') {
      uVar5 = FUN_180172d10(param_1);
      return (ulonglong)uVar5;
    }
LAB_180173b15:
    uVar5 = FUN_180172cc0(param_1);
    uVar6 = (ulonglong)uVar5;
  }
  return uVar6;
}



// ===== FUN_180173b80 @ 180173b80 (size 249)

undefined8 FUN_180173b80(int *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar2 = FUN_180152610(*(undefined8 *)(param_1 + 4),0,*param_1 == 0);
  if (lVar2 < 0) {
    FUN_180150e00(*(undefined8 *)(param_1 + 4),"Connection time-out");
    return 0x1c;
  }
  if (lVar2 < 1) {
    lVar4 = 0xe10;
  }
  else {
    lVar4 = (lVar2 + 500) / 1000;
  }
  uVar3 = (int)lVar4 / 5;
  param_1[10] = uVar3;
  if ((int)uVar3 < 3) {
    uVar3 = 3;
  }
  else {
    if ((int)uVar3 < 0x33) goto LAB_180173c29;
    uVar3 = 0x32;
  }
  param_1[10] = uVar3;
LAB_180173c29:
  iVar1 = (int)(lVar4 / (longlong)(ulonglong)uVar3);
  param_1[9] = iVar1;
  if (iVar1 < 1) {
    param_1[9] = 1;
    iVar1 = 1;
  }
  FUN_180150ee0(*(undefined8 *)(param_1 + 4),
                "set timeouts for state %d; Total % I64d, retry %d maxtry %d",*param_1,lVar2,iVar1,
                uVar3);
  _time64((__time64_t *)(param_1 + 0xc));
  return 0;
}



// ===== FUN_180173c80 @ 180173c80 (size 112)

undefined8 FUN_180173c80(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = FUN_1801735d0();
    return uVar2;
  }
  if (iVar1 == 1) {
    uVar2 = FUN_180173290();
    return uVar2;
  }
  if (iVar1 == 2) {
    uVar2 = FUN_180173e30();
    return uVar2;
  }
  if (iVar1 == 3) {
    FUN_180150ee0(*(undefined8 *)(param_1 + 4),&DAT_1802fa0cc,"TFTP finished");
    return 0;
  }
  FUN_180150e00(*(undefined8 *)(param_1 + 4),&DAT_1802fa0cc,"Internal state machine error");
  return 0x47;
}



// ===== FUN_180173d30 @ 180173d30 (size 106)

undefined8 FUN_180173d30(int param_1)

{
  if (param_1 == -100) {
    return 0;
  }
  switch(param_1) {
  case 0:
  case 4:
    return 0x47;
  case 1:
    return 0x44;
  case 2:
    return 0x45;
  case 3:
    return 0x46;
  case 5:
    return 0x48;
  case 6:
    return 0x49;
  case 7:
    return 0x4a;
  case -99:
    return 0x1c;
  case -0x62:
    return 7;
  default:
    return 0x2a;
  }
}



// ===== FUN_180173e30 @ 180173e30 (size 987)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180173e30(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined4 local_130;
  longlong local_128 [2];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_158;
  lVar2 = *(longlong *)(param_1 + 4);
  uVar6 = 0;
  if (param_2 != 4) {
    if (param_2 == 5) {
      *param_1 = 3;
      **(undefined1 **)(param_1 + 0x56) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 5;
      uVar1 = *(undefined2 *)(param_1 + 0x53);
      *(char *)(*(longlong *)(param_1 + 0x56) + 2) = (char)((ushort)uVar1 >> 8);
      local_138 = param_1 + 0x2e;
      *(char *)(*(longlong *)(param_1 + 0x56) + 3) = (char)uVar1;
      local_130 = param_1[0x4e];
      Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),4);
      goto LAB_180173fb0;
    }
    if (param_2 != 6) {
      if (param_2 != 7) {
        FUN_180150e00(lVar2,"tftp_tx: internal error, event: %i",param_2);
        return 0;
      }
      param_1[8] = param_1[8] + 1;
      FUN_180150ee0(lVar2,"Timeout waiting for block %d ACK.  Retries = %d",
                    *(short *)(param_1 + 0x53) + 1);
      if ((int)param_1[10] < (int)param_1[8]) {
        param_1[2] = 0xffffff9d;
        *param_1 = 3;
        return 0;
      }
      local_130 = param_1[0x4e];
      local_138 = param_1 + 0x2e;
      iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),
                         param_1[0x50] + 4,0);
      if (iVar4 < 0) goto LAB_180173f11;
      goto LAB_1801741d5;
    }
  }
  if (param_2 == 4) {
    sVar3 = CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x54) + 2),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x54) + 3));
    if ((sVar3 != *(short *)(param_1 + 0x53)) &&
       ((*(short *)(param_1 + 0x53) != 0 || (sVar3 != -1)))) {
      FUN_180150ee0(lVar2,"Received ACK for block %d, expecting %d");
      param_1[8] = param_1[8] + 1;
      if ((int)param_1[10] < (int)param_1[8]) {
        FUN_180150e00(lVar2,"tftp_tx: giving up waiting for block %d ack",
                      *(undefined2 *)(param_1 + 0x53));
        return 0x37;
      }
      local_130 = param_1[0x4e];
      local_138 = param_1 + 0x2e;
      iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),
                         param_1[0x50] + 4,0);
      if (iVar4 < 0) {
        uVar5 = Ordinal_111();
        uVar6 = FUN_180138690(uVar5,local_118,0x100);
        FUN_180150e00(lVar2,&DAT_1802fa0cc,uVar6);
        uVar6 = 0x37;
      }
      return uVar6;
    }
    _time64((__time64_t *)(param_1 + 0xc));
    *(short *)(param_1 + 0x53) = *(short *)(param_1 + 0x53) + 1;
  }
  else {
    *(undefined2 *)(param_1 + 0x53) = 1;
  }
  param_1[8] = 0;
  **(undefined1 **)(param_1 + 0x56) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x56) + 1) = 3;
  uVar1 = *(undefined2 *)(param_1 + 0x53);
  *(char *)(*(longlong *)(param_1 + 0x56) + 2) = (char)((ushort)uVar1 >> 8);
  *(char *)(*(longlong *)(param_1 + 0x56) + 3) = (char)uVar1;
  if ((*(ushort *)(param_1 + 0x53) < 2) || ((int)param_1[0x51] <= (int)param_1[0x50])) {
    param_1[0x50] = 0;
    *(longlong *)(*(longlong *)(param_1 + 4) + 0x1a0) = *(longlong *)(param_1 + 0x56) + 4;
    do {
      uVar6 = FUN_18015e610(lVar2,(longlong)(int)(param_1[0x51] - param_1[0x50]),local_128);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      param_1[0x50] = param_1[0x50] + (int)local_128[0];
      *(longlong *)(*(longlong *)(param_1 + 4) + 0x1a0) =
           *(longlong *)(*(longlong *)(param_1 + 4) + 0x1a0) + local_128[0];
    } while (((int)param_1[0x50] < (int)param_1[0x51]) && (local_128[0] != 0));
    local_130 = param_1[0x4e];
    local_138 = param_1 + 0x2e;
    iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x56),
                       param_1[0x50] + 4,0);
    if (iVar4 < 0) {
LAB_180173f11:
      uVar5 = Ordinal_111();
      uVar6 = FUN_180138690(uVar5,local_118,0x100);
      FUN_180150e00(lVar2,&DAT_1802fa0cc,uVar6);
      return 0x37;
    }
    *(longlong *)(lVar2 + 0x108) = *(longlong *)(lVar2 + 0x108) + (longlong)(int)param_1[0x50];
LAB_1801741d5:
    FUN_180160930(lVar2,*(undefined8 *)(lVar2 + 0x108));
    return 0;
  }
LAB_180173fb0:
  *param_1 = 3;
  return 0;
}



// ===== FUN_180174210 @ 180174210 (size 2277)

int FUN_180174210(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong lVar2;
  void *_Memory;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *_Memory_00;
  char *pcVar6;
  char *pcVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar11;
  longlong lVar10;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  char *pcVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  int iVar19;
  longlong local_res8;
  uint local_res10;
  int local_res18;
  undefined4 local_res20 [2];
  longlong local_98;
  char *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  *param_2 = 1;
  local_68 = 0;
  iVar9 = 0;
  local_res20[0] = 3;
  local_78 = 0;
  lVar13 = 0;
  local_70 = 0;
  pcVar6 = (char *)0x0;
  local_80 = (char *)0x0;
  pcVar7 = (char *)0x0;
  local_res8 = param_1;
  FUN_180150ee0(param_1,"LDAP local: LDAP Vendor = %s ; LDAP Version = %d","Microsoft Corporation.",
                0x1fe);
  FUN_180150ee0(param_1,"LDAP local: %s",*(undefined8 *)(param_1 + 0x1260));
  lVar4 = (*(code *)PTR_calloc_1803bd550)(1);
  local_60 = 0;
  if (lVar4 == 0) {
    uVar3 = 0x5a;
LAB_1801742d7:
    local_60 = 0;
    uVar5 = Ordinal_22(uVar3);
    lVar16 = local_res8;
    FUN_180150e00(local_res8,"Bad LDAP URL: %s",uVar5);
    local_98 = 0;
    iVar9 = 3;
    iVar19 = 0;
  }
  else {
    uVar3 = FUN_180174ba0(param_1,lVar2,lVar4);
    if (uVar3 != 0) {
      FUN_180174b00(lVar4);
      goto LAB_1801742d7;
    }
    pcVar15 = "cleartext";
    uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x310) + 0x8c);
    uVar17 = uVar1 & 1;
    if (uVar17 != 0) {
      pcVar15 = "encrypted";
    }
    local_res10 = uVar3;
    local_60 = lVar4;
    FUN_180150ee0(param_1,"LDAP local: trying to establish %s connection",pcVar15);
    local_80 = _strdup(*(char **)(lVar2 + 0x70));
    if (local_80 == (char *)0x0) {
      iVar9 = 0x1b;
      local_98 = 0;
      lVar16 = local_res8;
      iVar19 = 0;
LAB_1801749e3:
      uVar3 = local_res10;
    }
    else {
      if (*(longlong *)(param_1 + 0x1390) != 0) {
        pcVar6 = *(char **)(lVar2 + 0x150);
        pcVar7 = *(char **)(lVar2 + 0x158);
      }
      Ordinal_211(0,0x11,local_res20);
      lVar16 = local_res8;
      if (uVar17 == 0) {
        if (1 < *(byte *)(param_1 + 0xab9)) {
          FUN_180150e00(local_res8,"LDAP local: explicit TLS not supported");
          local_98 = 0;
          iVar9 = 4;
          iVar19 = 0;
          goto LAB_1801749e3;
        }
        local_98 = Ordinal_143(local_80,*(undefined4 *)(lVar2 + 0x4e0));
        lVar16 = local_res8;
        if (local_98 == 0) {
          FUN_180150e00(local_res8,"LDAP local: Cannot connect to %s:%u",
                        *(undefined8 *)(lVar2 + 0x78),*(undefined4 *)(lVar2 + 0x4e0));
          iVar9 = 7;
          iVar19 = 0;
          uVar3 = local_res10;
          goto LAB_1801749eb;
        }
      }
      else {
        local_98 = Ordinal_217(local_80,*(undefined4 *)(lVar2 + 0x4e0),1);
        Ordinal_211(local_98,10,1);
      }
      Ordinal_211(local_98,0x11,local_res20);
      local_res10 = 0x31;
      if (((pcVar6 != (char *)0x0) && (pcVar7 != (char *)0x0)) &&
         ((*(byte *)(param_1 + 0x20c) & 1) != 0)) {
        pcVar15 = _strdup(pcVar6);
        _Memory_00 = _strdup(pcVar7);
        local_res10 = Ordinal_60(local_98,pcVar15,_Memory_00);
        if (pcVar15 != (char *)0x0) {
          free(pcVar15);
        }
        if (_Memory_00 != (char *)0x0) {
          free(_Memory_00);
        }
        param_1 = local_res8;
      }
      if ((uVar1 & 1) == 0) {
        if (local_res10 != 0) {
          local_res20[0] = 2;
          Ordinal_211(local_98,0x11,local_res20);
          local_res10 = 0x31;
          if (((pcVar6 != (char *)0x0) && (pcVar7 != (char *)0x0)) &&
             ((*(byte *)(param_1 + 0x20c) & 1) != 0)) {
            pcVar6 = _strdup(pcVar6);
            pcVar7 = _strdup(pcVar7);
            local_res10 = Ordinal_60(local_98,pcVar6,pcVar7);
            if (pcVar6 != (char *)0x0) {
              free(pcVar6);
            }
            if (pcVar7 != (char *)0x0) {
              free(pcVar7);
            }
          }
          goto LAB_1801744e6;
        }
LAB_1801745aa:
        uVar3 = Ordinal_50(local_98,*(undefined8 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x20),
                           *(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x18),0,&local_68);
        local_res10 = uVar3;
        if ((uVar3 & 0xfffffffb) == 0) {
          iVar19 = 0;
          local_res18 = 0;
          local_58 = Ordinal_26(local_98,local_68);
          lVar16 = local_res8;
          if (local_58 != 0) {
            do {
              lVar4 = local_58;
              local_res8 = 0;
              pcVar6 = (char *)Ordinal_30(local_98,local_58);
              pcVar7 = _strdup(pcVar6);
              if (pcVar7 == (char *)0x0) {
                Ordinal_200(pcVar6);
LAB_1801749da:
                iVar9 = 0x1b;
LAB_1801749df:
                iVar19 = local_res18;
                break;
              }
              lVar10 = -1;
              do {
                lVar11 = lVar10;
                lVar10 = lVar11 + 1;
              } while (pcVar7[lVar10] != '\0');
              iVar9 = FUN_180151330(lVar16,1,&DAT_1803053b0);
              if (((iVar9 != 0) || (iVar9 = FUN_180151330(lVar16,1,pcVar7,lVar10), iVar9 != 0)) ||
                 (iVar9 = FUN_180151330(lVar16,1,&DAT_1802fa360), iVar9 != 0)) {
                free(pcVar7);
                Ordinal_200(pcVar6);
                goto LAB_1801749df;
              }
              lVar13 = lVar13 + lVar11 + 6;
              free(pcVar7);
              Ordinal_200(pcVar6);
              pcVar6 = (char *)Ordinal_32(local_98,lVar4,&local_res8);
              while (pcVar6 != (char *)0x0) {
                pcVar7 = _strdup(pcVar6);
                if (pcVar7 == (char *)0x0) {
                  if (local_res8 != 0) {
                    Ordinal_301(local_res8,0);
                  }
                  goto LAB_1801749da;
                }
                uVar14 = 0xffffffffffffffff;
                do {
                  uVar12 = uVar14;
                  uVar14 = uVar12 + 1;
                } while (pcVar7[uVar14] != '\0');
                plVar8 = (longlong *)Ordinal_35(local_98,lVar4,pcVar6);
                if (plVar8 != (longlong *)0x0) {
                  if (*plVar8 != 0) {
                    plVar18 = plVar8;
                    do {
                      iVar9 = FUN_180151330(lVar16,1,&DAT_1802ff184);
                      if (((iVar9 != 0) ||
                          (iVar9 = FUN_180151330(lVar16,1,pcVar7,uVar14), iVar9 != 0)) ||
                         (iVar9 = FUN_180151330(lVar16,1,&DAT_1802f9f40,2), iVar9 != 0)) {
LAB_180174973:
                        Ordinal_79(plVar8);
                        free(pcVar7);
                        Ordinal_200(pcVar6);
                        if (local_res8 != 0) {
                          Ordinal_301(local_res8,0);
                        }
                        goto LAB_1801749df;
                      }
                      lVar13 = lVar13 + 3 + uVar14;
                      if (uVar14 < 8) {
LAB_18017485c:
                        iVar9 = FUN_180151330(lVar16,1,*(undefined8 *)((undefined4 *)*plVar18 + 2),
                                              *(undefined4 *)*plVar18);
                        if (iVar9 == 0) {
                          lVar13 = lVar13 + (ulonglong)*(uint *)*plVar18;
                          goto LAB_180174885;
                        }
                        goto LAB_180174973;
                      }
                      lVar4 = 0;
                      do {
                        pcVar15 = ";binary" + lVar4;
                        lVar4 = lVar4 + 1;
                        if (*pcVar15 != pcVar7[lVar4 + (uVar12 - 7)]) goto LAB_18017485c;
                      } while (lVar4 != 8);
                      iVar9 = FUN_18017d960(*(undefined8 *)((undefined4 *)*plVar18 + 2),
                                            *(undefined4 *)*plVar18,&local_78,&local_70);
                      if (iVar9 != 0) goto LAB_180174973;
                      if (local_70 != 0) {
                        iVar9 = FUN_180151330(lVar16,1,local_78);
                        (*(code *)PTR_free_1803bd538)(local_78);
                        if (iVar9 != 0) goto LAB_180174973;
                        lVar13 = lVar13 + local_70;
                      }
LAB_180174885:
                      iVar9 = FUN_180151330(lVar16,1,&DAT_1802fa360);
                      if (iVar9 != 0) goto LAB_180174973;
                      plVar18 = plVar18 + 1;
                      lVar13 = lVar13 + 1;
                    } while (*plVar18 != 0);
                  }
                  Ordinal_79(plVar8);
                }
                free(pcVar7);
                Ordinal_200(pcVar6);
                iVar9 = FUN_180151330(lVar16,1,&DAT_1802fa360);
                if (iVar9 != 0) goto LAB_1801749df;
                lVar13 = lVar13 + 1;
                iVar9 = FUN_1801608b0(lVar16,lVar13);
                lVar4 = local_58;
                if (iVar9 != 0) goto LAB_1801749df;
                pcVar6 = (char *)Ordinal_33(local_98,local_58,local_res8);
              }
              if (local_res8 != 0) {
                Ordinal_301(local_res8,0);
              }
              local_58 = Ordinal_27(local_98,lVar4);
              iVar19 = local_res18 + 1;
              local_res18 = iVar19;
            } while (local_58 != 0);
            goto LAB_1801749e3;
          }
        }
        else {
          uVar5 = Ordinal_22(uVar3);
          lVar16 = local_res8;
          FUN_180150e00(local_res8,"LDAP remote: %s",uVar5);
          iVar9 = 0x27;
          iVar19 = 0;
        }
      }
      else {
LAB_1801744e6:
        uVar3 = local_res10;
        if (local_res10 == 0) goto LAB_1801745aa;
        uVar5 = Ordinal_22(local_res10);
        lVar16 = local_res8;
        FUN_180150e00(local_res8,"LDAP local: bind via ldap_win_bind %s",uVar5);
        iVar9 = 0x26;
        iVar19 = 0;
      }
    }
  }
LAB_1801749eb:
  if (local_68 != 0) {
    Ordinal_41();
  }
  if (uVar3 == 4) {
    FUN_180150ee0(lVar16,"There are more than %d entries",iVar19);
  }
  lVar13 = local_60;
  if (local_60 != 0) {
    if (*(void **)(local_60 + 0x10) != (void *)0x0) {
      free(*(void **)(local_60 + 0x10));
      *(undefined8 *)(lVar13 + 0x10) = 0;
    }
    uVar14 = 0;
    if (*(void **)(lVar13 + 0x28) != (void *)0x0) {
      free(*(void **)(lVar13 + 0x28));
      *(undefined8 *)(lVar13 + 0x28) = 0;
    }
    if (*(longlong *)(lVar13 + 0x18) != 0) {
      if (*(longlong *)(lVar13 + 0x38) != 0) {
        do {
          _Memory = *(void **)(*(longlong *)(lVar13 + 0x18) + uVar14 * 8);
          if (_Memory != (void *)0x0) {
            free(_Memory);
            *(undefined8 *)(*(longlong *)(lVar13 + 0x18) + uVar14 * 8) = 0;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ulonglong *)(lVar13 + 0x38));
      }
      (*(code *)PTR_free_1803bd538)(*(undefined8 *)(lVar13 + 0x18));
    }
    (*(code *)PTR_free_1803bd538)(lVar13);
  }
  if (local_98 != 0) {
    Ordinal_46(local_98);
  }
  if (local_80 != (char *)0x0) {
    free(local_80);
  }
  FUN_18015f7f0(lVar16,0xffffffff,0xffffffffffffffff,0,0xffffffff);
  FUN_180152410(lVar2,1);
  return iVar9;
}



// ===== FUN_180174b00 @ 180174b00 (size 153)

void FUN_180174b00(longlong param_1)

{
  void *_Memory;
  ulonglong uVar1;
  
  if (param_1 != 0) {
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      free(*(void **)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (*(void **)(param_1 + 0x28) != (void *)0x0) {
      free(*(void **)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar1 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        do {
          _Memory = *(void **)(*(longlong *)(param_1 + 0x18) + uVar1 * 8);
          if (_Memory != (void *)0x0) {
            free(_Memory);
            *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar1 * 8) = 0;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(ulonglong *)(param_1 + 0x38));
      }
      (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_1 + 0x18));
    }
    (*(code *)PTR_free_1803bd538)(param_1);
  }
  return;
}



// ===== FUN_180174ba0 @ 180174ba0 (size 985)

undefined4 FUN_180174ba0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *_Str;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *local_res8;
  undefined1 local_res20 [8];
  
  uVar7 = 0;
  _Str = (char *)0x0;
  if ((((param_1 == 0) || (*(char **)(param_1 + 0x1250) == (char *)0x0)) ||
      (**(char **)(param_1 + 0x1250) != '/')) ||
     (iVar1 = FUN_1801403a0(&DAT_180305250,*(undefined8 *)(param_1 + 0x1220),4), iVar1 == 0)) {
    return 0x15;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x4e4);
  *param_3 = *(undefined8 *)(param_2 + 0x70);
  pcVar2 = (char *)(*(code *)PTR__strdup_1803bd548)(*(longlong *)(param_1 + 0x1250) + 1);
  if (pcVar2 == (char *)0x0) {
    return 0x5a;
  }
  if ((*(longlong *)(param_1 + 0x1258) != 0) &&
     (_Str = (char *)(*(code *)PTR__strdup_1803bd548)(), _Str == (char *)0x0)) {
    (*(code *)PTR_free_1803bd538)(pcVar2);
    return 0x5a;
  }
  if (*pcVar2 != '\0') {
    iVar1 = FUN_180134970(pcVar2,0,&local_res8,0,4);
    if (iVar1 == 0) {
      pcVar3 = _strdup(local_res8);
      param_3[2] = pcVar3;
      (*(code *)PTR_free_1803bd538)(local_res8);
      if (param_3[2] != 0) goto LAB_180174cb0;
    }
    uVar7 = 0x5a;
    goto LAB_180174f45;
  }
LAB_180174cb0:
  if (_Str == (char *)0x0) goto LAB_180174f45;
  pcVar3 = strchr(_Str,0x3f);
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  if (*_Str != '\0') {
    uVar8 = 1;
    for (pcVar4 = strchr(_Str,0x2c); pcVar4 != (char *)0x0; pcVar4 = strchr(pcVar4 + 1,0x2c)) {
      uVar8 = uVar8 + 1;
    }
    lVar5 = (*(code *)PTR_calloc_1803bd550)(uVar8,8);
    if (lVar5 != 0) {
      lVar6 = FUN_180176ab0(_Str,&DAT_180305408,local_res20);
      for (uVar9 = 0; (lVar6 != 0 && (uVar9 < uVar8)); uVar9 = uVar9 + 1) {
        *(longlong *)(lVar5 + uVar9 * 8) = lVar6;
        lVar6 = FUN_180176ab0(0,&DAT_180305408,local_res20);
      }
      lVar6 = (*(code *)PTR_calloc_1803bd550)(uVar8 + 1,8);
      param_3[3] = lVar6;
      if (lVar6 != 0) {
        uVar9 = 0;
        if (uVar8 != 0) {
          do {
            iVar1 = FUN_180134970(*(undefined8 *)(lVar5 + uVar9 * 8),0,&local_res8,0,4);
            if (iVar1 != 0) goto LAB_180174e6a;
            pcVar4 = _strdup(local_res8);
            *(char **)(param_3[3] + uVar9 * 8) = pcVar4;
            (*(code *)PTR_free_1803bd538)(local_res8);
            if (*(longlong *)(param_3[3] + uVar9 * 8) == 0) goto LAB_180174e6a;
            param_3[7] = param_3[7] + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar8);
        }
        (*(code *)PTR_free_1803bd538)(lVar5);
        goto LAB_180174e00;
      }
LAB_180174e6a:
      (*(code *)PTR_free_1803bd538)(lVar5);
    }
    goto LAB_180174e73;
  }
LAB_180174e00:
  if (pcVar3 == (char *)0x0) goto LAB_180174f45;
  pcVar4 = strchr(pcVar3,0x3f);
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + 1;
  }
  if (*pcVar3 != '\0') {
    iVar1 = FUN_180140330(pcVar3,&DAT_1803053e0);
    if ((iVar1 == 0) && (iVar1 = FUN_180140330(pcVar3,"onetree"), iVar1 == 0)) {
      iVar1 = FUN_180140330(pcVar3,&DAT_1803053f0);
      if (iVar1 == 0) {
        iVar1 = FUN_180140330(pcVar3,&DAT_1803053f8);
        if ((iVar1 == 0) && (iVar1 = FUN_180140330(pcVar3,"subtree"), iVar1 == 0)) {
          *(undefined4 *)(param_3 + 4) = 0xffffffff;
          uVar7 = 0x15;
          goto LAB_180174f45;
        }
        *(undefined4 *)(param_3 + 4) = 2;
      }
      else {
        *(undefined4 *)(param_3 + 4) = 0;
      }
    }
    else {
      *(undefined4 *)(param_3 + 4) = 1;
    }
  }
  if (pcVar4 == (char *)0x0) goto LAB_180174f45;
  pcVar3 = strchr(pcVar4,0x3f);
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  if (*pcVar4 == '\0') {
LAB_180174f2c:
    if ((pcVar3 != (char *)0x0) && (uVar7 = 0, *pcVar3 == '\0')) {
      uVar7 = 0x15;
    }
  }
  else {
    iVar1 = FUN_180134970(pcVar4,0,&local_res8,0,4);
    if (iVar1 == 0) {
      pcVar4 = _strdup(local_res8);
      param_3[5] = pcVar4;
      (*(code *)PTR_free_1803bd538)(local_res8);
      if (param_3[5] != 0) goto LAB_180174f2c;
    }
LAB_180174e73:
    uVar7 = 0x5a;
  }
LAB_180174f45:
  (*(code *)PTR_free_1803bd538)(pcVar2);
  (*(code *)PTR_free_1803bd538)(_Str);
  return uVar7;
}



// ===== FUN_180174f80 @ 180174f80 (size 665)

ulonglong FUN_180174f80(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined **local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar11;
  longlong *plVar10;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x1250);
  lVar6 = *(longlong *)(param_1 + 0x1258);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1a8);
  local_res8 = (undefined **)0x0;
  *param_2 = 1;
  if (lVar6 == 0) {
    lVar6 = (*(code *)PTR__strdup_1803bd548)();
  }
  else {
    lVar6 = FUN_180145000("%s?%s",uVar1);
  }
  if (lVar6 == 0) {
    return 0x1b;
  }
  uVar7 = 0xffffffffffffffff;
  do {
    uVar7 = uVar7 + 1;
  } while (*(char *)(lVar6 + uVar7) != '\0');
  if (uVar7 < 3) {
    local_res8 = &PTR_1802ead18;
    lVar8 = -1;
    do {
      local_res18 = lVar8 + 1;
      lVar3 = lVar8 + 1;
      lVar8 = local_res18;
    } while (*(char *)((longlong)&PTR_1802ead18 + lVar3) != '\0');
    (*(code *)PTR_free_1803bd538)(lVar6);
    ppuVar9 = (undefined **)0x0;
  }
  else {
    uVar4 = FUN_180134970(lVar6 + 2,0,&local_res8,&local_res18,CONCAT44(uVar11,4));
    (*(code *)PTR_free_1803bd538)(lVar6);
    if (uVar4 != 0) {
      return (ulonglong)uVar4;
    }
    ppuVar9 = local_res8;
  }
  lVar6 = FUN_1801401c0(local_res18);
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (*(char *)((longlong)local_res8 + lVar8) != '\0');
  while (lVar8 != 0) {
    uVar4 = FUN_180151380(param_1,0,local_res8,lVar6,&local_res10);
    uVar7 = (ulonglong)uVar4;
    if (uVar4 != 0) {
LAB_1801751c2:
      (*(code *)PTR_free_1803bd538)(ppuVar9);
      goto LAB_18017519a;
    }
    uVar4 = FUN_180151330(param_1,4,local_res8,local_res10);
    uVar7 = (ulonglong)uVar4;
    if (uVar4 != 0) goto LAB_1801751c2;
    local_res8 = (undefined **)((longlong)local_res8 + local_res10);
    lVar6 = lVar6 - local_res10;
    if (lVar6 < 1) break;
    lVar8 = FUN_180152610(param_1,0,0);
    if (lVar8 < 0) {
LAB_1801751bd:
      uVar7 = 0x1c;
      goto LAB_1801751c2;
    }
    if (lVar8 == 0) {
      lVar8 = 0x7fffffffffffffff;
    }
    iVar5 = FUN_180161bd0(0xffffffffffffffff,0xffffffffffffffff,uVar2,lVar8);
    if (iVar5 < 0) {
      uVar7 = 0x37;
      (*(code *)PTR_free_1803bd538)(ppuVar9);
      goto LAB_18017519a;
    }
    if (iVar5 == 0) goto LAB_1801751bd;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)((longlong)local_res8 + lVar8) != '\0');
  }
  (*(code *)PTR_free_1803bd538)(ppuVar9);
  plVar10 = &local_res10;
  uVar4 = FUN_180151380(param_1,0,&DAT_1802ead50,2,plVar10);
  uVar11 = (undefined4)((ulonglong)plVar10 >> 0x20);
  uVar7 = (ulonglong)uVar4;
  if (uVar4 == 0) {
    uVar7 = FUN_180151330(param_1,4,&DAT_1802ead50);
    if ((int)uVar7 == 0) {
      FUN_18015f7f0(param_1,0,0xffffffffffffffff,0,CONCAT44(uVar11,0xffffffff));
      uVar7 = 0;
    }
  }
  else {
LAB_18017519a:
    FUN_180150e00(param_1,"Failed sending Gopher request");
  }
  return uVar7;
}



// ===== FUN_180175220 @ 180175220 (size 75)

ulonglong FUN_180175220(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = FUN_1801502c0(param_1,0,1,param_2);
  if ((int)uVar2 != 0) {
    FUN_180152410(uVar1,1);
    uVar2 = uVar2 & 0xffffffff;
  }
  *param_2 = 1;
  return uVar2;
}



// ===== FUN_180175270 @ 180175270 (size 173)

LPSTR FUN_180175270(LPCSTR param_1)

{
  LPSTR pCVar1;
  uint nSize;
  DWORD DVar2;
  LPSTR pCVar3;
  LPSTR lpBuffer;
  
  pCVar3 = (LPSTR)(*(code *)PTR_realloc_1803bd540)(0,1);
  pCVar1 = (LPSTR)0x0;
  nSize = 1;
  while (lpBuffer = pCVar3, lpBuffer != (LPSTR)0x0) {
    DVar2 = GetEnvironmentVariableA(param_1,lpBuffer,nSize);
    if (((DVar2 == 0) || (DVar2 == nSize)) || (0x8000 < DVar2)) goto LAB_1801752f0;
    if (DVar2 < nSize) {
      return lpBuffer;
    }
    pCVar3 = (LPSTR)(*(code *)PTR_realloc_1803bd540)(lpBuffer,DVar2);
    pCVar1 = lpBuffer;
    nSize = DVar2;
  }
  lpBuffer = pCVar1;
LAB_1801752f0:
  (*(code *)PTR_free_1803bd538)(lpBuffer);
  return (LPSTR)0x0;
}



// ===== FUN_180175350 @ 180175350 (size 426)

ulonglong FUN_180175350(void)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong lVar6;
  longlong lVar5;
  size_t _Size;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *in_R9;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *local_res20;
  
  puVar8 = (undefined4 *)0x0;
  *in_R9 = 0;
  puVar10 = (undefined4 *)0x0;
  uVar3 = getaddrinfo();
  uVar9 = uVar3 & 0xffffffff;
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  puVar7 = local_res20;
  if (local_res20 != (undefined4 *)0x0) {
    do {
      if (*(longlong *)(puVar7 + 6) == 0) {
        _Size = 0;
      }
      else {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(puVar7 + 6) + lVar5) != '\0');
        _Size = lVar6 + 2;
      }
      if (puVar7[1] == 2) {
        uVar1 = 0x10;
LAB_1801753d9:
        uVar3 = (ulonglong)uVar1;
        if (((*(longlong *)(puVar7 + 8) != 0) && (*(ulonglong *)(puVar7 + 4) != 0)) &&
           (uVar3 <= *(ulonglong *)(puVar7 + 4))) {
          puVar4 = (undefined4 *)(*(code *)PTR_malloc_1803bd530)(uVar3 + 0x30 + _Size);
          if (puVar4 == (undefined4 *)0x0) {
            uVar9 = 8;
            break;
          }
          *puVar4 = *puVar7;
          puVar4[1] = puVar7[1];
          puVar4[2] = puVar7[2];
          puVar4[3] = puVar7[3];
          puVar4[4] = uVar1;
          *(undefined8 *)(puVar4 + 6) = 0;
          *(undefined8 *)(puVar4 + 10) = 0;
          *(undefined4 **)(puVar4 + 8) = puVar4 + 0xc;
          memcpy(puVar4 + 0xc,*(void **)(puVar7 + 8),uVar3);
          if (_Size != 0) {
            *(void **)(puVar4 + 6) = (void *)(*(longlong *)(puVar4 + 8) + uVar3);
            memcpy((void *)(*(longlong *)(puVar4 + 8) + uVar3),*(void **)(puVar7 + 6),_Size);
          }
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = puVar4;
          }
          if (puVar10 != (undefined4 *)0x0) {
            *(undefined4 **)(puVar10 + 10) = puVar4;
          }
          puVar10 = puVar4;
        }
      }
      else if (puVar7[1] == 0x17) {
        uVar1 = 0x1c;
        goto LAB_1801753d9;
      }
      puVar2 = (undefined8 *)(puVar7 + 10);
      puVar7 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
    if (local_res20 != (undefined4 *)0x0) {
      freeaddrinfo();
    }
    if ((int)uVar9 != 0) {
      while (puVar8 != (undefined4 *)0x0) {
        puVar10 = *(undefined4 **)(puVar8 + 10);
        (*(code *)PTR_free_1803bd538)(puVar8);
        puVar8 = puVar10;
      }
      puVar8 = (undefined4 *)0x0;
      goto LAB_1801754dd;
    }
    if (puVar8 != (undefined4 *)0x0) goto LAB_1801754dd;
  }
  uVar9 = 0x2af9;
  Ordinal_112(0x2af9);
LAB_1801754dd:
  *in_R9 = puVar8;
  return uVar9;
}



// ===== FUN_180175500 @ 180175500 (size 525)

longlong FUN_180175500(int param_1,longlong *param_2,undefined8 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  void *_Dst;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  
  plVar5 = (longlong *)(*(code *)PTR_malloc_1803bd530)(0x40);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  lVar6 = (*(code *)PTR__strdup_1803bd548)(param_3);
  if (lVar6 == 0) {
LAB_180175557:
    (*(code *)PTR_free_1803bd538)(plVar5);
    return 0;
  }
  if (param_1 == 2) {
    *(int *)(plVar5 + 4) = (int)*param_2;
    uVar4 = 4;
  }
  else {
    if (param_1 != 0x17) {
      (*(code *)PTR_free_1803bd538)(lVar6);
      goto LAB_180175557;
    }
    lVar11 = param_2[1];
    uVar4 = 0x10;
    plVar5[4] = *param_2;
    plVar5[5] = lVar11;
  }
  *(undefined2 *)((longlong)plVar5 + 0x12) = uVar4;
  *plVar5 = lVar6;
  plVar5[3] = (longlong)(plVar5 + 6);
  lVar11 = 0;
  plVar5[1] = 0;
  *(short *)(plVar5 + 2) = (short)param_1;
  plVar5[6] = (longlong)(plVar5 + 4);
  plVar5[7] = 0;
  puVar15 = *(undefined4 **)plVar5[3];
  if (puVar15 != (undefined4 *)0x0) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      lVar14 = 0x10;
      lVar7 = -1;
      do {
        lVar9 = lVar7;
        lVar7 = lVar9 + 1;
      } while (*(char *)(*plVar5 + 1 + lVar9) != '\0');
      if ((short)plVar5[2] == 0x17) {
        lVar14 = 0x1c;
      }
      lVar7 = (*(code *)PTR_calloc_1803bd550)(1,lVar9 + 0x32 + lVar14);
      if (lVar7 == 0) goto joined_r0x0001801756c0;
      *(longlong *)(lVar7 + 0x20) = lVar7 + 0x30;
      _Dst = (void *)(lVar7 + 0x30 + lVar14);
      *(void **)(lVar7 + 0x18) = _Dst;
      memcpy(_Dst,(void *)*plVar5,lVar9 + 2);
      if (lVar11 == 0) {
        lVar11 = lVar7;
      }
      if (lVar13 != 0) {
        *(longlong *)(lVar13 + 0x28) = lVar7;
      }
      iVar8 = (int)(short)plVar5[2];
      *(int *)(lVar7 + 4) = iVar8;
      *(undefined4 *)(lVar7 + 8) = 1;
      *(int *)(lVar7 + 0x10) = (int)lVar14;
      if (iVar8 == 2) {
        puVar10 = *(undefined2 **)(lVar7 + 0x20);
        *(undefined4 *)(puVar10 + 2) = *puVar15;
LAB_180175684:
        *puVar10 = (short)plVar5[2];
        uVar4 = Ordinal_9(param_4);
        puVar10[1] = uVar4;
      }
      else if (iVar8 == 0x17) {
        puVar10 = *(undefined2 **)(lVar7 + 0x20);
        uVar1 = puVar15[1];
        uVar2 = puVar15[2];
        uVar3 = puVar15[3];
        *(undefined4 *)(puVar10 + 4) = *puVar15;
        *(undefined4 *)(puVar10 + 6) = uVar1;
        *(undefined4 *)(puVar10 + 8) = uVar2;
        *(undefined4 *)(puVar10 + 10) = uVar3;
        goto LAB_180175684;
      }
      lVar12 = lVar12 + 8;
      puVar15 = *(undefined4 **)(lVar12 + plVar5[3]);
      lVar13 = lVar7;
    } while (puVar15 != (undefined4 *)0x0);
  }
LAB_1801756e3:
  (*(code *)PTR_free_1803bd538)(lVar6);
  (*(code *)PTR_free_1803bd538)(plVar5);
  return lVar11;
joined_r0x0001801756c0:
  while (lVar11 != 0) {
    lVar13 = *(longlong *)(lVar11 + 0x28);
    (*(code *)PTR_free_1803bd538)(lVar11);
    lVar11 = lVar13;
  }
  lVar11 = 0;
  goto LAB_1801756e3;
}



// ===== FUN_180175710 @ 180175710 (size 148)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180175710(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStack_48;
  iVar1 = inet_pton(2,param_1,local_28);
  if (iVar1 < 1) {
    iVar1 = inet_pton(0x17,param_1,local_20);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_180175500(0x17,local_20,param_1,param_2);
    }
  }
  else {
    uVar2 = FUN_180175500(2,local_28,param_1,param_2);
  }
  return uVar2;
}



// ===== FUN_1801757b0 @ 1801757b0 (size 196)

longlong FUN_1801757b0(void *param_1,undefined1 *param_2,char param_3)

{
  longlong lVar1;
  void *_Dst;
  size_t sVar3;
  size_t sVar2;
  ulonglong _Size;
  
  *param_2 = 0;
  lVar1 = (*(code *)PTR_calloc_1803bd550)(1,0x9e);
  if (lVar1 != 0) {
    *(undefined2 **)(lVar1 + 0x20) = (undefined2 *)(lVar1 + 0x30);
    *(undefined2 *)(lVar1 + 0x30) = 1;
    sVar2 = 0xffffffffffffffff;
    do {
      sVar3 = sVar2;
      sVar2 = sVar3 + 1;
    } while (*(char *)((longlong)param_1 + sVar2) != '\0');
    _Size = sVar3 + 2;
    if (_Size < 0x6d) {
      *(undefined4 *)(lVar1 + 4) = 1;
      *(undefined4 *)(lVar1 + 8) = 1;
      *(uint *)(lVar1 + 0x10) = (int)sVar3 + 4U & 0x7fffffff;
      if (param_3 == '\0') {
        _Dst = (void *)(lVar1 + 0x32);
      }
      else {
        _Dst = (void *)(lVar1 + 0x33);
        _Size = sVar2;
      }
      memcpy(_Dst,param_1,_Size);
      return lVar1;
    }
    (*(code *)PTR_free_1803bd538)(lVar1);
    *param_2 = 1;
  }
  return 0;
}



// ===== FUN_180175880 @ 180175880 (size 272)

int FUN_180175880(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 == 0) {
    lVar2 = FUN_180175270(&DAT_180305578);
    if ((lVar2 == 0) && (lVar2 = FUN_180175270("USERPROFILE"), lVar2 == 0)) {
      return 1;
    }
    lVar3 = FUN_180145000("%s%s.netrc",lVar2,&DAT_1803021bc);
    if (lVar3 == 0) {
LAB_18017595e:
      (*(code *)PTR_free_1803bd538)(lVar2);
      return -1;
    }
    iVar1 = FUN_180175990(param_1,param_2,param_3,lVar3);
    (*(code *)PTR_free_1803bd538)(lVar3);
    if (iVar1 == 1) {
      lVar3 = FUN_180145000("%s%s_netrc",lVar2,&DAT_1803021bc);
      if (lVar3 == 0) goto LAB_18017595e;
      iVar1 = FUN_180175990(param_1,param_2,param_3,lVar3);
      (*(code *)PTR_free_1803bd538)(lVar3);
    }
    (*(code *)PTR_free_1803bd538)(lVar2);
  }
  else {
    iVar1 = FUN_180175990();
  }
  return iVar1;
}



// ===== FUN_180175990 @ 180175990 (size 1173)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180175990(undefined8 param_1,longlong *param_2,longlong *param_3,char *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char cVar11;
  char *pcVar12;
  byte bVar13;
  char cVar14;
  char *pcVar15;
  int iVar16;
  undefined1 auStack_10a8 [32];
  char local_1088;
  char local_1087;
  uint local_1084;
  char local_1080;
  FILE *local_1078;
  undefined8 local_1070;
  longlong *local_1068;
  longlong *local_1060;
  char local_1058;
  char local_1057 [4095];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1801759a7;
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_10a8;
  pcVar8 = (char *)*param_2;
  iVar16 = 1;
  pcVar9 = (char *)*param_3;
  if ((pcVar8 == (char *)0x0) || (local_1080 = '\x01', *pcVar8 == '\0')) {
    local_1080 = '\0';
  }
  cVar14 = '\0';
  local_1084 = 1;
  cVar11 = '\0';
  local_1088 = '\0';
  local_1087 = '\0';
  bVar13 = 0;
  bVar2 = false;
  bVar3 = false;
  local_1070 = param_1;
  local_1068 = param_2;
  local_1060 = param_3;
  local_1078 = fopen(param_4,"rt");
  if (local_1078 != (FILE *)0x0) {
LAB_180175a30:
    lVar7 = FUN_180176c40(&local_1058,0x1000);
    if (lVar7 != 0) {
      if (bVar13 == 3) {
        if (local_1058 != '\n') goto code_r0x000180175a59;
        goto LAB_180175a62;
      }
      goto LAB_180175a6d;
    }
LAB_180175dce:
    plVar4 = local_1068;
    if (iVar16 == 0) {
      if (cVar14 != '\0') {
        if (*local_1068 != 0) {
          (*(code *)PTR_free_1803bd538)();
        }
        *plVar4 = (longlong)pcVar8;
      }
      plVar4 = local_1060;
      if (cVar11 != '\0') {
        if (*local_1060 != 0) {
          (*(code *)PTR_free_1803bd538)();
        }
        *plVar4 = (longlong)pcVar9;
      }
    }
    else {
LAB_180175b18:
      cVar14 = local_1088;
LAB_180175b1e:
      if (cVar14 != '\0') {
        (*(code *)PTR_free_1803bd538)(pcVar8);
      }
      if (cVar11 != '\0') {
        (*(code *)PTR_free_1803bd538)(pcVar9);
      }
    }
    fclose(local_1078);
  }
  return iVar16;
code_r0x000180175a59:
  if (local_1058 == '\r') {
LAB_180175a62:
    bVar13 = 0;
LAB_180175a6d:
    pcVar12 = &local_1058;
    do {
      for (; (cVar5 = *pcVar12, cVar5 == ' ' || (cVar5 == '\t')); pcVar12 = pcVar12 + 1) {
      }
      cVar11 = local_1087;
      cVar14 = local_1088;
      if ((cVar5 == '\0') || (cVar5 == '#')) goto LAB_180175a30;
      pcVar15 = pcVar12;
      if (cVar5 == '\"') {
        cVar5 = pcVar12[1];
        bVar1 = false;
        pcVar10 = pcVar12;
        if (cVar5 != '\0') {
LAB_180175ad0:
          if (bVar1) {
            bVar1 = false;
            if (cVar5 == 'n') {
              cVar5 = '\n';
            }
            else if (cVar5 == 'r') {
              cVar5 = '\r';
            }
            else if (cVar5 == 't') {
              cVar5 = '\t';
            }
LAB_180175afa:
            *pcVar10 = cVar5;
            pcVar10 = pcVar10 + 1;
LAB_180175aff:
            cVar5 = pcVar15[2];
            pcVar15 = pcVar15 + 1;
            if (cVar5 == '\0') goto LAB_180175b0a;
            goto LAB_180175ad0;
          }
          if (cVar5 == '\\') {
            bVar1 = true;
            goto LAB_180175aff;
          }
          if (cVar5 != '\"') goto LAB_180175afa;
          pcVar15 = pcVar15 + 2;
          *pcVar10 = '\0';
          goto LAB_180175b71;
        }
LAB_180175b0a:
        *pcVar10 = '\0';
LAB_180175b0d:
        iVar16 = -1;
        cVar11 = local_1087;
        goto LAB_180175b18;
      }
      do {
        if ((byte)(cVar5 - 9U) < 5) break;
        cVar5 = pcVar15[1];
        pcVar15 = pcVar15 + 1;
      } while (cVar5 != ' ');
      *pcVar15 = '\0';
LAB_180175b71:
      if ((((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) && (pcVar9 != (char *)0x0)) &&
         (*pcVar9 != '\0')) goto LAB_180175dce;
      if (bVar13 == 0) {
        iVar6 = FUN_180140330("macdef",pcVar12);
        if (iVar6 == 0) {
          iVar6 = FUN_180140330("machine",pcVar12);
          if (iVar6 == 0) {
            iVar6 = FUN_180140330("default",pcVar12);
            if (iVar6 != 0) {
              bVar13 = 2;
              iVar16 = 0;
            }
          }
          else {
            bVar13 = 1;
          }
        }
        else {
          bVar13 = 3;
        }
      }
      else if (bVar13 == 1) {
        iVar6 = FUN_180140330(local_1070,pcVar12);
        if (iVar6 != 0) {
          iVar16 = 0;
        }
        bVar13 = -(iVar6 != 0) & 2;
      }
      else if (bVar13 == 2) {
        if (bVar2) {
          if (local_1080 == '\0') {
            if ((pcVar8 == (char *)0x0) || (iVar6 = FUN_1801402b0(pcVar8,pcVar12), iVar6 != 0)) {
              if (local_1088 != '\0') {
                (*(code *)PTR_free_1803bd538)(pcVar8);
                local_1088 = '\0';
              }
              cVar14 = local_1088;
              pcVar8 = (char *)(*(code *)PTR__strdup_1803bd548)(pcVar12);
              if (pcVar8 == (char *)0x0) {
                iVar16 = -1;
                cVar11 = local_1087;
                goto LAB_180175b1e;
              }
              local_1088 = '\x01';
            }
          }
          else {
            iVar6 = FUN_1801402b0(pcVar8,pcVar12);
            local_1084 = (uint)(iVar6 == 0);
          }
          bVar2 = false;
        }
        else if (bVar3) {
          if (((local_1084 != 0) || (local_1080 == '\0')) &&
             ((pcVar9 == (char *)0x0 || (iVar6 = FUN_1801402b0(pcVar9,pcVar12), iVar6 != 0)))) {
            if (local_1087 != '\0') {
              (*(code *)PTR_free_1803bd538)(pcVar9);
              local_1087 = '\0';
            }
            pcVar9 = (char *)(*(code *)PTR__strdup_1803bd548)(pcVar12);
            if (pcVar9 == (char *)0x0) goto LAB_180175b0d;
            local_1087 = '\x01';
          }
          bVar3 = false;
        }
        else {
          iVar6 = FUN_180140330("login",pcVar12);
          if (iVar6 == 0) {
            iVar6 = FUN_180140330("password",pcVar12);
            if (iVar6 == 0) {
              iVar6 = FUN_180140330("machine",pcVar12);
              if (iVar6 != 0) {
                bVar13 = 1;
                local_1084 = 0;
              }
            }
            else {
              bVar3 = true;
            }
          }
          else {
            bVar2 = true;
          }
        }
      }
      else if (bVar13 == 3) {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (pcVar12[lVar7] != '\0');
        if (lVar7 == 0) {
          bVar13 = 0;
        }
      }
      pcVar12 = pcVar15 + 1;
    } while (pcVar12 != (char *)0x0);
    cVar11 = local_1087;
    cVar14 = local_1088;
  }
  goto LAB_180175a30;
}



// ===== FUN_180175e30 @ 180175e30 (size 1008)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001801761d6) */

undefined8 FUN_180175e30(char *param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong _Size;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_198 [32];
  int local_178 [2];
  int local_170 [2];
  byte local_168 [16];
  byte local_158 [16];
  char local_148 [128];
  char local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_198;
  *param_3 = 0;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (*param_1 == '\0') {
    return 0;
  }
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (*param_2 == 0) {
    return 0;
  }
  iVar10 = 0;
  if ((*param_2 == 0x2a) && (param_2[1] == 0)) {
    return 1;
  }
  if (*param_1 == '[') {
    pcVar5 = strchr(param_1,0x5d);
    if (pcVar5 == (char *)0x0) {
      return 0;
    }
    _Size = (longlong)pcVar5 - (longlong)(param_1 + 1);
    if (0x7f < _Size) {
      return 0;
    }
    memcpy(local_c8,param_1 + 1,_Size);
    local_c8[_Size] = '\0';
    param_1 = local_c8;
    iVar10 = 2;
  }
  else {
    _Size = 0xffffffffffffffff;
    do {
      uVar8 = _Size;
      _Size = uVar8 + 1;
    } while (param_1[_Size] != '\0');
    iVar3 = inet_pton(2,param_1,local_170);
    if (iVar3 == 1) {
      iVar10 = 1;
    }
    else if (param_1[uVar8] == '.') {
      _Size = uVar8;
    }
  }
  bVar1 = *param_2;
  do {
    if (bVar1 == 0) {
      return 0;
    }
    uVar8 = 0;
    do {
      bVar6 = bVar1;
      if ((bVar6 != 0x20) && (bVar6 != 9)) break;
      pbVar9 = param_2 + 1;
      param_2 = param_2 + 1;
      bVar6 = 0;
      bVar1 = *pbVar9;
    } while (*pbVar9 != 0);
    pbVar9 = param_2;
    if (bVar6 != 0) {
      do {
        if ((bVar6 < 0x2d) && ((0x100100000200U >> ((longlong)(char)bVar6 & 0x3fU) & 1) != 0))
        break;
        bVar6 = pbVar9[1];
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 + 1;
      } while (bVar6 != 0);
      if (uVar8 != 0) {
        if (iVar10 == 0) {
          if (((param_2[uVar8 - 1] != 0x2e) || (uVar8 = uVar8 - 1, uVar8 != 0)) &&
             (*param_2 == 0x2e)) {
            param_2 = param_2 + 1;
            uVar8 = uVar8 - 1;
          }
          if (uVar8 == _Size) {
            iVar3 = FUN_1801403a0(param_2,param_1,_Size);
            bVar11 = iVar3 != 0;
          }
          else {
            if (_Size <= uVar8) goto LAB_1801761b0;
            if (((param_1 + (_Size - uVar8))[-1] == '.') &&
               (iVar3 = FUN_1801403a0(param_2,param_1 + (_Size - uVar8),uVar8), iVar3 != 0)) {
              bVar11 = true;
            }
            else {
              bVar11 = false;
            }
          }
LAB_18017619b:
          bVar11 = !bVar11;
LAB_18017619d:
          if (!bVar11) {
            return 1;
          }
        }
        else if (((iVar10 == 1) || (iVar10 == 2)) && (uVar2 = 0, uVar8 < 0x80)) {
          memcpy(local_148,param_2,uVar8);
          local_148[uVar8] = '\0';
          pcVar5 = strchr(local_148,0x2f);
          if (pcVar5 != (char *)0x0) {
            uVar2 = atoi(pcVar5 + 1);
            *pcVar5 = '\0';
          }
          if (iVar10 == 2) {
            if (uVar2 == 0) {
              uVar2 = 0x80;
            }
            uVar7 = uVar2 >> 3;
            uVar8 = (ulonglong)uVar7;
            uVar2 = uVar2 & 7;
            iVar3 = inet_pton(0x17,param_1,local_158);
            if (((iVar3 == 1) && (iVar3 = inet_pton(0x17,local_148,local_168), iVar3 == 1)) &&
               ((uVar7 < 0x11 && ((uVar7 != 0x10 || (uVar2 == 0)))))) {
              if (uVar7 == 0) {
                uVar8 = 0;
              }
              else {
                iVar3 = memcmp(local_158,local_168,uVar8);
                if (iVar3 != 0) goto LAB_1801761b0;
              }
              if (uVar2 == 0) {
                return 1;
              }
              bVar11 = (0xff << (8U - (char)uVar2 & 0x1f) &
                       (uint)(local_168[uVar8] ^ local_158[uVar8])) == 0;
              goto LAB_18017619d;
            }
          }
          else {
            local_170[0] = 0;
            local_178[0] = 0;
            if (((uVar2 < 0x21) && (iVar3 = inet_pton(2,param_1,local_170), iVar3 == 1)) &&
               (iVar3 = inet_pton(2,local_148,local_178), iVar3 == 1)) {
              if ((uVar2 & 0xffffffdf) == 0) {
                bVar11 = local_170[0] == local_178[0];
                goto LAB_18017619b;
              }
              uVar7 = Ordinal_8(local_170[0]);
              uVar4 = Ordinal_8(local_178[0]);
              if ((-1 << (0x20U - (char)uVar2 & 0x1f) & (uVar4 ^ uVar7)) == 0) {
                return 1;
              }
            }
          }
        }
      }
    }
LAB_1801761b0:
    for (; (bVar1 = *pbVar9, bVar1 == 0x20 || (bVar1 == 9)); pbVar9 = pbVar9 + 1) {
    }
    if (bVar1 == 0) {
      bVar1 = 0;
    }
    else if (bVar1 == 0x2c) {
      do {
        bVar1 = pbVar9[1];
        pbVar9 = pbVar9 + 1;
      } while (bVar1 == 0x2c);
    }
    else {
      *param_3 = 1;
      bVar1 = *pbVar9;
    }
    param_2 = pbVar9;
  } while( true );
}



// ===== FUN_180176250 @ 180176250 (size 413)

int FUN_180176250(longlong param_1,char param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined1 local_38 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar6 = 0x388;
  if (param_2 == '\0') {
    lVar6 = 0x370;
  }
  lVar4 = 0x36c;
  if (param_2 == '\0') {
    lVar4 = 0x368;
  }
  piVar5 = (int *)(lVar4 + lVar1);
  iVar3 = FUN_1801403a0(param_3,&DAT_180300994,4);
  if (iVar3 != 0) {
    cVar2 = *(char *)(param_3 + 4);
    param_3 = param_3 + 4;
    if (cVar2 != '\0') {
      do {
        if ((cVar2 != ' ') && (cVar2 != '\t')) {
          if (cVar2 < '\n') break;
          if ('\r' < cVar2) goto LAB_1801762e7;
        }
        cVar2 = *(char *)(param_3 + 1);
        param_3 = param_3 + 1;
      } while (cVar2 != '\0');
      if (cVar2 != '\0') {
LAB_1801762e7:
        iVar3 = FUN_18017d6c0(param_3,&local_res20,&local_res8);
        if (iVar3 == 0) {
          FUN_18018a250(local_38);
          FUN_18018a2f0(local_38,local_res20,local_res8,free);
          iVar3 = FUN_180187a20(param_1,local_38,lVar6 + lVar1);
          FUN_18018a220(local_38);
          if (iVar3 == 0) {
            *piVar5 = 2;
            return 0;
          }
        }
        return iVar3;
      }
    }
    iVar3 = *piVar5;
    if (iVar3 == 4) {
      FUN_180150ee0(param_1,"NTLM auth restarted");
      FUN_180187250(lVar1 + 0x370);
      FUN_180187250(lVar1 + 0x388);
    }
    else {
      if (iVar3 == 3) {
        FUN_180150ee0(param_1,"NTLM handshake rejected");
        FUN_180187250(lVar1 + 0x370);
        FUN_180187250(lVar1 + 0x388);
        *piVar5 = 0;
        return 9;
      }
      if (0 < iVar3) {
        FUN_180150ee0(param_1,"NTLM handshake failure (internal error)");
        return 9;
      }
    }
    *piVar5 = 1;
  }
  return 0;
}



// ===== FUN_1801763f0 @ 1801763f0 (size 774)

int FUN_1801763f0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined8 local_58;
  undefined1 local_50 [24];
  
  iVar4 = 0;
  local_res8 = 0;
  lVar10 = *(longlong *)(param_1 + 0x20);
  local_58 = 0;
  puVar12 = &DAT_1803006e8;
  if (param_2 == '\0') {
    lVar14 = 0x1358;
    ppuVar7 = *(undefined ***)(param_1 + 0x1390);
    ppuVar13 = *(undefined ***)(param_1 + 0x1398);
    lVar15 = 0x368;
    if (*(undefined **)(param_1 + 0x908) != (undefined *)0x0) {
      puVar12 = *(undefined **)(param_1 + 0x908);
    }
    lVar16 = 0xe34;
    local_res20 = *(undefined8 *)(lVar10 + 0x70);
    lVar5 = 0x370;
  }
  else {
    lVar14 = 0x1340;
    ppuVar7 = *(undefined ***)(param_1 + 0x13a0);
    ppuVar13 = *(undefined ***)(param_1 + 0x13a8);
    lVar16 = 0xe44;
    if (*(undefined **)(param_1 + 0x900) != (undefined *)0x0) {
      puVar12 = *(undefined **)(param_1 + 0x900);
    }
    local_res20 = *(undefined8 *)(lVar10 + 0xf8);
    lVar5 = 0x388;
    lVar15 = 0x36c;
  }
  *(undefined1 *)(lVar16 + param_1) = 0;
  ppuVar11 = &PTR_1802ead18;
  piVar1 = (int *)(lVar15 + lVar10);
  ppuVar6 = &PTR_1802ead18;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar6 = ppuVar7;
  }
  plVar2 = (longlong *)(lVar14 + param_1);
  ppuVar7 = &PTR_1802ead18;
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar7 = ppuVar13;
  }
  FUN_18018a250(local_50);
  iVar3 = *piVar1;
  if (iVar3 == 3) {
    *piVar1 = 4;
LAB_18017651e:
    (*(code *)PTR_free_1803bd538)(*plVar2);
    *plVar2 = 0;
    *(undefined1 *)(lVar16 + param_1) = 1;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        iVar4 = FUN_180187390(param_1,ppuVar6,ppuVar7,lVar5 + lVar10,local_50);
        if (iVar4 == 0) {
          lVar10 = FUN_18007e060(local_50);
          if (lVar10 != 0) {
            uVar8 = FUN_18007e060(local_50);
            uVar9 = FUN_18013ff80(local_50);
            iVar4 = FUN_18017d960(uVar9,uVar8,&local_res8,&local_58);
            if (iVar4 == 0) {
              (*(code *)PTR_free_1803bd538)(*plVar2);
              if (param_2 != '\0') {
                ppuVar11 = (undefined **)"Proxy-";
              }
              lVar10 = FUN_180145000("%sAuthorization: NTLM %s\r\n",ppuVar11,local_res8);
              *plVar2 = lVar10;
              (*(code *)PTR_free_1803bd538)(local_res8);
              if (*plVar2 == 0) {
                iVar4 = 0x1b;
              }
              else {
                *piVar1 = 3;
                *(undefined1 *)(lVar16 + param_1) = 1;
              }
            }
          }
        }
        goto LAB_1801766d2;
      }
      if (iVar3 == 4) goto LAB_18017651e;
    }
    iVar4 = FUN_180187280(param_1,ppuVar6,ppuVar7,puVar12,local_res20,lVar5 + lVar10,local_50);
    if (iVar4 == 0) {
      uVar8 = FUN_18007e060(local_50);
      uVar9 = FUN_18013ff80(local_50);
      iVar4 = FUN_18017d960(uVar9,uVar8,&local_res8,&local_58);
      if (iVar4 == 0) {
        (*(code *)PTR_free_1803bd538)(*plVar2);
        if (param_2 != '\0') {
          ppuVar11 = (undefined **)"Proxy-";
        }
        lVar10 = FUN_180145000("%sAuthorization: NTLM %s\r\n",ppuVar11,local_res8);
        *plVar2 = lVar10;
        (*(code *)PTR_free_1803bd538)(local_res8);
        if (*plVar2 == 0) {
          iVar4 = 0x1b;
        }
      }
    }
  }
LAB_1801766d2:
  FUN_18018a220(local_50);
  return iVar4;
}



// ===== FUN_180176700 @ 180176700 (size 96)

undefined8 FUN_180176700(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x12b0);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[2];
    (*(code *)PTR_free_1803bd538)(*puVar2);
    puVar2 = puVar1;
  }
  FUN_180155e90(param_1 + 0x12b0,0);
  *(undefined8 *)(param_1 + 0x1330) = 0;
  return 0;
}



// ===== FUN_180176760 @ 180176760 (size 741)

undefined4 FUN_180176760(longlong param_1,char *param_2,char param_3)

{
  char *_Dst;
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar6;
  longlong lVar5;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  
  if ((*param_2 == '\r') || (*param_2 == '\n')) {
    return 0;
  }
  pcVar3 = strchr(param_2,0xd);
  if ((pcVar3 == (char *)0x0) && (pcVar3 = strchr(param_2,10), pcVar3 == (char *)0x0)) {
    return 0x2b;
  }
  cVar1 = *param_2;
  pcVar3 = pcVar3 + (1 - (longlong)param_2);
  if ((cVar1 == ' ') || (cVar1 == '\t')) {
    lVar4 = *(longlong *)(param_1 + 0x1330);
    if (lVar4 != 0) {
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while (*(char *)(*(longlong *)(lVar4 + 0x20) + lVar5) != '\0');
      lVar9 = *(longlong *)(lVar4 + 0x20) - lVar4;
      while ((pcVar3 != (char *)0x0 &&
             (((cVar2 = param_2[(longlong)(pcVar3 + -1)], cVar2 == ' ' || (cVar2 == '\t')) ||
              ((byte)(cVar2 - 10U) < 4))))) {
        pcVar3 = pcVar3 + -1;
      }
      for (; (((char *)0x1 < pcVar3 && ((cVar1 == ' ' || (cVar1 == '\t')))) &&
             ((cVar1 = param_2[1], cVar1 == ' ' || (cVar1 == '\t')))); param_2 = param_2 + 1) {
        pcVar3 = pcVar3 + -1;
      }
      FUN_180155f30(param_1 + 0x12b0,lVar4,0);
      lVar4 = FUN_180144ec0(lVar4,pcVar3 + lVar6 + lVar9 + 6);
      if (lVar4 == 0) {
        return 0x1b;
      }
      *(longlong *)(lVar4 + 0x18) = lVar4 + 0x2d;
      lVar9 = lVar9 + lVar4;
      *(longlong *)(lVar4 + 0x20) = lVar9;
      memcpy((void *)(lVar9 + lVar5),param_2,(size_t)pcVar3);
      pcVar3[*(longlong *)(lVar4 + 0x20) + lVar5] = '\0';
      FUN_180155eb0(param_1 + 0x12b0,*(undefined8 *)(param_1 + 0x12b8),lVar4,lVar4);
      *(longlong *)(param_1 + 0x1330) = lVar4;
      return 0;
    }
    while( true ) {
      if (pcVar3 == (char *)0x0) {
        return 8;
      }
      if ((*param_2 != ' ') && (*param_2 != '\t')) break;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + -1;
    }
    if (pcVar3 == (char *)0x0) {
      return 8;
    }
  }
  lVar4 = (*(code *)PTR_calloc_1803bd550)(1,pcVar3 + 0x30);
  if (lVar4 == 0) {
    return 0x1b;
  }
  _Dst = (char *)(lVar4 + 0x2d);
  memcpy(_Dst,param_2,(size_t)pcVar3);
  pcVar3[lVar4 + 0x2d] = '\0';
  pcVar3 = pcVar3 + lVar4 + 0x2c;
  pcVar7 = _Dst;
  if (param_3 == '\x10') {
    if (*_Dst != ':') goto LAB_1801769a3;
    pcVar7 = (char *)(lVar4 + 0x2e);
  }
  cVar1 = *pcVar7;
  while (cVar1 != '\0') {
    pcVar8 = pcVar7 + 1;
    if (cVar1 == ':') {
      *pcVar7 = '\0';
      cVar1 = *pcVar8;
      while ((cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))))) {
        pcVar7 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar7;
      }
      for (; (pcVar8 < pcVar3 &&
             (((cVar1 = *pcVar3, cVar1 == ' ' || (cVar1 == '\t')) || ((byte)(cVar1 - 10U) < 4))));
          pcVar3 = pcVar3 + -1) {
        *pcVar3 = '\0';
      }
      *(char **)(lVar4 + 0x18) = _Dst;
      *(char **)(lVar4 + 0x20) = pcVar8;
      *(char *)(lVar4 + 0x2c) = param_3;
      *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(param_1 + 0xdac);
      FUN_180155eb0(param_1 + 0x12b0,*(undefined8 *)(param_1 + 0x12b8),lVar4,lVar4);
      *(longlong *)(param_1 + 0x1330) = lVar4;
      return 0;
    }
    pcVar7 = pcVar8;
    cVar1 = *pcVar8;
  }
LAB_1801769a3:
  (*(code *)PTR_free_1803bd538)(lVar4);
  return 0x2b;
}



// ===== FUN_180176ab0 @ 180176ab0 (size 172)

char * FUN_180176ab0(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)*param_3;
  }
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    pcVar2 = strchr(param_2,(int)cVar1);
    if (pcVar2 == (char *)0x0) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (*param_1 == '\0') {
    return (char *)0x0;
  }
  pcVar2 = param_1 + 1;
  *param_3 = (longlong)pcVar2;
  cVar1 = *pcVar2;
  while ((cVar1 != '\0' && (pcVar2 = strchr(param_2,(int)*pcVar2), pcVar2 == (char *)0x0))) {
    *param_3 = *param_3 + 1;
    pcVar2 = (char *)*param_3;
    cVar1 = *pcVar2;
  }
  if (*(char *)*param_3 != '\0') {
    *(char *)*param_3 = '\0';
    *param_3 = *param_3 + 1;
  }
  return param_1;
}



// ===== FUN_180176b60 @ 180176b60 (size 215)

undefined8 FUN_180176b60(byte *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte *local_res8;
  
  piVar1 = _errno();
  *piVar1 = 0;
  *param_4 = 0;
  bVar4 = *param_1;
  uVar2 = (ulonglong)bVar4;
  if (bVar4 != 0) {
    do {
      if ((bVar4 != 0x20) && (uVar2 = (ulonglong)bVar4, bVar4 != 9)) break;
      bVar4 = param_1[1];
      uVar2 = (ulonglong)bVar4;
      param_1 = param_1 + 1;
    } while (bVar4 != 0);
  }
  if (((byte)uVar2 < 0x2e) && ((0x200100003e00U >> (uVar2 & 0x3f) & 1) != 0)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
  }
  else {
    uVar3 = strtoll(param_1,&local_res8,param_3);
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = local_res8;
    }
    piVar1 = _errno();
    if (*piVar1 == 0x22) {
      return 1;
    }
    if (param_1 != local_res8) {
      *param_4 = uVar3;
      return 0;
    }
  }
  return 2;
}



// ===== FUN_180176c40 @ 180176c40 (size 202)

char * FUN_180176c40(char *param_1,int param_2,FILE *param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar5;
  longlong lVar4;
  
  bVar1 = false;
  pcVar3 = fgets(param_1,param_2,param_3);
  do {
    if (pcVar3 == (char *)0x0) {
      return (char *)0x0;
    }
    lVar4 = -1;
    do {
      lVar5 = lVar4;
      lVar4 = lVar5 + 1;
    } while (pcVar3[lVar4] != '\0');
    if (lVar4 == 0) {
      return (char *)0x0;
    }
    if (pcVar3[lVar5] == '\n') {
      if (!bVar1) {
        return pcVar3;
      }
      bVar1 = false;
    }
    else {
      iVar2 = feof(param_3);
      if (iVar2 != 0) {
        if (bVar1) {
          return (char *)0x0;
        }
        if (lVar5 + 2U < (ulonglong)(longlong)param_2) {
          (pcVar3 + lVar4)[0] = '\n';
          (pcVar3 + lVar4)[1] = '\0';
          return pcVar3;
        }
        return (char *)0x0;
      }
      bVar1 = true;
    }
    pcVar3 = fgets(param_1,param_2,param_3);
  } while( true );
}



// ===== FUN_180176d30 @ 180176d30 (size 74)

longlong FUN_180176d30(undefined8 param_1)

{
  int iVar1;
  longlong local_res10 [3];
  
  local_res10[0] = -1;
  iVar1 = FUN_180176dd0(param_1,local_res10);
  if (iVar1 == 0) {
    if (local_res10[0] == -1) {
      local_res10[0] = 0;
    }
    return local_res10[0];
  }
  if (iVar1 == 1) {
    return local_res10[0];
  }
  return -1;
}



// ===== FUN_180176d80 @ 180176d80 (size 68)

undefined8 FUN_180176d80(__time64_t param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  tm *ptVar2;
  __time64_t local_res8 [4];
  
  local_res8[0] = param_1;
  ptVar2 = _gmtime64(local_res8);
  if (ptVar2 == (tm *)0x0) {
    return 0x2b;
  }
  uVar1 = *(undefined8 *)&ptVar2->tm_hour;
  *param_2 = *(undefined8 *)ptVar2;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)&ptVar2->tm_wday;
  param_2[2] = *(undefined8 *)&ptVar2->tm_mon;
  param_2[3] = uVar1;
  *(int *)(param_2 + 4) = ptVar2->tm_isdst;
  return 0;
}



// ===== FUN_180176dd0 @ 180176dd0 (size 1746)

undefined8 FUN_180176dd0(char *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  int local_res8;
  int local_res18;
  int local_res20;
  int local_68;
  int local_60;
  int local_5c;
  char *local_58;
  char *local_50;
  
  iVar4 = -1;
  local_res8 = -1;
  iVar20 = -1;
  local_res20 = -1;
  local_68 = -1;
  iVar22 = -1;
  local_res18 = -1;
  iVar12 = -1;
  local_60 = -1;
  bVar23 = false;
  local_5c = 0;
  iVar8 = iVar20;
  iVar9 = iVar20;
  iVar21 = iVar20;
  iVar10 = -1;
  local_50 = param_1;
  iVar19 = -1;
  iVar1 = -1;
  if (*param_1 != '\0') {
    do {
      iVar21 = iVar1;
      iVar20 = iVar19;
      if (5 < local_5c) {
        iVar8 = local_68;
        iVar9 = local_res20;
        break;
      }
      cVar2 = *param_1;
      if (cVar2 != '\0') {
        do {
          if (((('/' < cVar2) && (cVar2 < ':')) || (('`' < cVar2 && (cVar2 < '{')))) ||
             (('@' < cVar2 && (cVar2 < '[')))) break;
          cVar2 = param_1[1];
          param_1 = param_1 + 1;
        } while (cVar2 != '\0');
      }
      if (((byte)(cVar2 + 0x9fU) < 0x1a) || ((byte)(cVar2 + 0xbfU) < 0x1a)) {
        pcVar14 = param_1;
        for (uVar18 = 0;
            (((byte)(cVar2 + 0x9fU) < 0x1a || ((byte)(cVar2 + 0xbfU) < 0x1a)) && (uVar18 < 0xc));
            uVar18 = uVar18 + 1) {
          cVar2 = pcVar14[1];
          pcVar14 = pcVar14 + 1;
        }
        if (uVar18 == 0xc) goto LAB_1801772f2;
        if (iVar22 == -1) {
          if (uVar18 < 4) {
            if (uVar18 == 3) {
              ppuVar15 = &PTR_DAT_180305630;
              goto LAB_180177208;
            }
          }
          else {
            ppuVar15 = &PTR_s_Monday_1803056d0;
LAB_180177208:
            iVar22 = 0;
            do {
              uVar6 = 0xffffffffffffffff;
              do {
                uVar6 = uVar6 + 1;
              } while ((*ppuVar15)[uVar6] != '\0');
              if ((uVar6 == uVar18) && (iVar4 = FUN_1801403a0(param_1,*ppuVar15,uVar18), iVar4 != 0)
                 ) {
                if (iVar22 == -1) goto LAB_180177250;
                goto LAB_180177311;
              }
              ppuVar15 = ppuVar15 + 1;
              iVar22 = iVar22 + 1;
            } while (iVar22 < 7);
          }
          iVar22 = -1;
        }
LAB_180177250:
        if ((iVar12 == -1) && (ppuVar15 = &PTR_DAT_180305670, uVar18 == 3)) {
          iVar12 = 0;
          do {
            iVar4 = FUN_1801403a0(param_1,*ppuVar15,3);
            if (iVar4 != 0) {
              if (iVar12 != -1) goto LAB_180177311;
              goto LAB_1801772a1;
            }
            ppuVar15 = ppuVar15 + 1;
            iVar12 = iVar12 + 1;
          } while (iVar12 < 0xc);
          iVar12 = -1;
        }
LAB_1801772a1:
        if ((iVar21 != -1) || (puVar16 = &DAT_180305710, 4 < uVar18)) goto LAB_1801772f2;
        uVar17 = 0;
        while( true ) {
          uVar6 = 0xffffffffffffffff;
          do {
            uVar6 = uVar6 + 1;
          } while (puVar16[uVar6] != '\0');
          if ((uVar6 == uVar18) && (iVar4 = FUN_1801403a0(param_1,puVar16,uVar18), iVar4 != 0))
          break;
          puVar16 = puVar16 + 0xc;
          uVar17 = uVar17 + 1;
          if (0x44 < uVar17) goto LAB_1801772f2;
        }
        iVar21 = *(int *)(puVar16 + 8) * 0x3c;
        iVar20 = local_60;
LAB_180177311:
        pcVar14 = param_1 + uVar18;
        cVar2 = *pcVar14;
        iVar4 = local_res8;
      }
      else {
        pcVar14 = param_1;
        if ('/' < cVar2) {
          if (cVar2 < ':') {
            if (iVar20 == -1) {
              pcVar13 = param_1 + 1;
              iVar8 = (int)cVar2;
              iVar20 = 0;
              if ((byte)(param_1[1] - 0x30U) < 10) {
                iVar8 = (int)param_1[1] + (iVar8 + -0x30) * 10;
                pcVar13 = param_1 + 2;
              }
              if (((iVar8 + -0x30 < 0x18) && (*pcVar13 == ':')) &&
                 (iVar9 = (int)pcVar13[1], (byte)(pcVar13[1] - 0x30U) < 10)) {
                if ((byte)(pcVar13[2] - 0x30U) < 10) {
                  pcVar14 = pcVar13 + 3;
                  iVar9 = (int)pcVar13[2] + (iVar9 + -0x30) * 10;
                }
                else {
                  pcVar14 = pcVar13 + 2;
                }
                if (iVar9 + -0x30 < 0x3c) {
                  if ((*pcVar14 == ':') &&
                     (iVar10 = (int)pcVar14[1], (byte)(pcVar14[1] - 0x30U) < 10)) {
                    pcVar13 = pcVar14 + 2;
                    if ((byte)(*pcVar13 - 0x30U) < 10) {
                      pcVar14 = pcVar14 + 3;
                      iVar10 = (int)*pcVar13 + (iVar10 + -0x30) * 10;
                    }
                    else {
                      pcVar14 = pcVar14 + 2;
                    }
                    iVar20 = iVar10 + -0x30;
                    if (0x3c < iVar20) goto LAB_180176f94;
                  }
                  cVar2 = *pcVar14;
                  local_res20 = iVar8 + -0x30;
                  local_68 = iVar9 + -0x30;
                  local_60 = iVar20;
                  local_58 = pcVar14;
                  goto LAB_18017732a;
                }
              }
            }
LAB_180176f94:
            piVar5 = _errno();
            iVar4 = *piVar5;
            piVar5 = _errno();
            *piVar5 = 0;
            lVar3 = strtol(param_1,&local_58,10);
            piVar5 = _errno();
            iVar8 = *piVar5;
            piVar5 = _errno();
            if (*piVar5 != iVar4) {
              piVar5 = _errno();
              *piVar5 = iVar4;
            }
            if (iVar8 != 0) goto LAB_1801772f2;
            iVar4 = FUN_180140180(lVar3);
            pcVar14 = local_58;
            if ((iVar21 == -1) && ((longlong)local_58 - (longlong)param_1 == 4)) {
              if ((0x578 < iVar4) || ((param_1 <= local_50 || ((param_1[-1] - 0x2bU & 0xfd) != 0))))
              goto LAB_180177112;
              iVar4 = iVar4 + (iVar4 / 100) * -0x28;
              iVar21 = iVar4 * 0x3c;
              if (param_1[-1] == '+') {
                cVar2 = *local_58;
                iVar21 = iVar4 * -0x3c;
                iVar4 = local_res8;
                iVar20 = local_60;
                goto LAB_18017732a;
              }
            }
            else {
              if (((((longlong)local_58 - (longlong)param_1 == 8) && (local_res18 == -1)) &&
                  (iVar12 == -1)) && (local_res8 == -1)) {
                local_res18 = iVar4 / 10000;
                cVar2 = *local_58;
                iVar12 = (iVar4 % 10000) / 100 + -1;
                local_res8 = iVar4 % 100;
                iVar4 = local_res8;
                iVar20 = local_60;
                goto LAB_18017732a;
              }
LAB_180177112:
              if (!bVar23) {
                if (local_res8 != -1) goto LAB_1801772f2;
                if (iVar4 - 1U < 0x1f) {
                  cVar2 = *local_58;
                  bVar23 = true;
                  local_res8 = iVar4;
                  iVar20 = local_60;
                  goto LAB_18017732a;
                }
                bVar23 = true;
              }
              if (local_res18 != -1) goto LAB_1801772f2;
              local_res18 = iVar4;
              if ((iVar4 < 100) && (local_res18 = iVar4 + 0x76c, iVar4 < 0x47)) {
                local_res18 = iVar4 + 2000;
              }
              if (local_res8 == -1) {
                bVar23 = false;
              }
            }
            cVar2 = *local_58;
            iVar4 = local_res8;
            iVar20 = local_60;
          }
        }
      }
LAB_18017732a:
      local_5c = local_5c + 1;
      param_1 = pcVar14;
      iVar8 = local_68;
      iVar9 = local_res20;
      iVar19 = iVar20;
      iVar1 = iVar21;
    } while (cVar2 != '\0');
    iVar10 = local_res18;
  }
  bVar23 = iVar20 != -1;
  iVar19 = 0;
  if (bVar23) {
    iVar19 = iVar20;
  }
  iVar20 = 0;
  if (bVar23) {
    iVar20 = iVar8;
  }
  iVar8 = 0;
  if (bVar23) {
    iVar8 = iVar9;
  }
  if ((((iVar4 == -1) || (iVar12 == -1)) ||
      ((iVar10 < 0x62f || (((0x1f < iVar4 || (0xb < iVar12)) || (0x17 < iVar8)))))) ||
     ((0x3b < iVar20 || (0x3c < iVar19)))) {
LAB_1801772f2:
    uVar7 = 0xffffffff;
  }
  else {
    iVar9 = iVar10 - (uint)(iVar12 < 2);
    lVar11 = (((longlong)iVar8 +
              ((longlong)
               (((int)((iVar9 >> 0x1f & 3U) + iVar9) >> 2) + -0x1dd + (iVar9 / 400 - iVar9 / 100)) +
               (longlong)*(int *)(&DAT_180305a50 + (longlong)iVar12 * 4) +
               (longlong)(iVar10 + -0x7b2) * 0x16d + -1 + (longlong)iVar4) * 0x18) * 0x3c +
             (longlong)iVar20) * 0x3c + (longlong)iVar19;
    iVar4 = 0;
    if (iVar21 != -1) {
      iVar4 = iVar21;
    }
    if ((iVar4 < 1) || (lVar11 <= 0x7fffffffffffffff - (longlong)iVar4)) {
      *param_2 = iVar4 + lVar11;
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
      *param_2 = 0x7fffffffffffffff;
    }
  }
  return uVar7;
}



// ===== FUN_1801774b0 @ 1801774b0 (size 262)

undefined8 FUN_1801774b0(char *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  char *lpExistingFileName;
  char *lpNewFileName;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  puVar4 = (undefined8 *)FUN_180148b70(&local_38);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  lpExistingFileName = _strdup(param_1);
  lpNewFileName = _strdup(param_2);
  iVar3 = MoveFileExA(lpExistingFileName,lpNewFileName,1);
  while( true ) {
    if (iVar3 != 0) {
      if (lpExistingFileName != (char *)0x0) {
        free(lpExistingFileName);
      }
      if (lpNewFileName != (char *)0x0) {
        free(lpNewFileName);
      }
      return 0;
    }
    local_48 = uVar1;
    uStack_40 = uVar2;
    puVar5 = (undefined4 *)FUN_180148b70(local_28);
    local_38 = *puVar5;
    uStack_34 = puVar5[1];
    uStack_30 = puVar5[2];
    uStack_2c = puVar5[3];
    uVar6 = FUN_180148c00(&local_38,&local_48);
    if (1000 < uVar6) break;
    Sleep(1);
    iVar3 = MoveFileExA(lpExistingFileName,lpNewFileName,1);
  }
  if (lpExistingFileName != (char *)0x0) {
    free(lpExistingFileName);
  }
  if (lpNewFileName != (char *)0x0) {
    free(lpNewFileName);
  }
  return 1;
}



// ===== FUN_1801775c0 @ 1801775c0 (size 314)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801775c0(undefined8 param_1,char *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int _FileHandle;
  FILE *pFVar2;
  char *_Filename;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [6];
  ushort local_82;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  _Filename = (char *)0x0;
  *param_4 = 0;
  iVar1 = 0x17;
  pFVar2 = fopen(param_2,"wt");
  *param_3 = pFVar2;
  if (pFVar2 != (FILE *)0x0) {
    iVar1 = _fileno(pFVar2);
    iVar1 = _fstat64(iVar1,local_88);
    if ((iVar1 == -1) || ((local_82 & 0xf000) != 0x8000)) {
      return 0;
    }
    fclose((FILE *)*param_3);
    *param_3 = 0;
    iVar1 = FUN_180177c70(param_1,local_50,9);
    if (iVar1 == 0) {
      _Filename = (char *)FUN_180145000("%s.%s.tmp",param_2,local_50);
      if (_Filename == (char *)0x0) {
        iVar1 = 0x1b;
      }
      else {
        iVar1 = 0x17;
        _FileHandle = FUN_180176a70(_Filename,0x501,0x180);
        if (_FileHandle != -1) {
          pFVar2 = _fdopen(_FileHandle,"wt");
          *param_3 = pFVar2;
          if (pFVar2 != (FILE *)0x0) {
            *param_4 = _Filename;
            return 0;
          }
          _close(_FileHandle);
          _unlink(_Filename);
        }
      }
    }
  }
  (*(code *)PTR_free_1803bd538)(_Filename);
  return iVar1;
}



// ===== FUN_180177700 @ 180177700 (size 770)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180177700(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *in_R9;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_c8 [4];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined2 local_88;
  undefined2 local_86;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_f8;
  local_c8[0] = 0x10;
  lVar3 = Ordinal_23(2,1,6);
  if (lVar3 == -1) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    local_80 = 0;
    local_88 = 2;
    local_84 = Ordinal_8(0x7f000001);
    local_86 = 0;
    in_R9[1] = -1;
    *in_R9 = -1;
    local_c8[1] = 1;
    local_d8 = 4;
    iVar2 = Ordinal_21(lVar3,0xffff,0xfffffffb,local_c8 + 1);
    if ((((iVar2 != -1) && (iVar2 = Ordinal_2(lVar3,&local_88,0x10), iVar2 != -1)) &&
        (iVar2 = Ordinal_6(lVar3,&local_88,local_c8), iVar2 != -1)) &&
       ((0xf < local_c8[0] && (iVar2 = Ordinal_13(lVar3,1), iVar2 != -1)))) {
      lVar4 = Ordinal_23(2,1,0);
      *in_R9 = lVar4;
      if ((lVar4 != -1) &&
         ((iVar2 = Ordinal_4(lVar4,&local_88,0x10), iVar2 != -1 &&
          (iVar2 = FUN_18018b1d0(lVar3,1), -1 < iVar2)))) {
        local_70 = 0x300;
        local_78 = lVar3;
        FUN_1801617d0(&local_78,1,1000);
        lVar4 = Ordinal_1(lVar3,0,0);
        in_R9[1] = lVar4;
        if (lVar4 != -1) {
          puVar5 = (undefined8 *)FUN_180148b70(&local_b8);
          uVar8 = 9;
          plVar9 = &local_58;
          uVar7 = *puVar5;
          uVar1 = puVar5[1];
          iVar2 = FUN_180177b80(0,&local_68,9);
          if (iVar2 == 0) {
            Ordinal_19(*in_R9,&local_68,9,0);
            while( true ) {
              while( true ) {
                local_78 = in_R9[1];
                local_70 = 0x300;
                FUN_1801617d0(&local_78,1,1000);
                iVar2 = Ordinal_16(in_R9[1],plVar9,uVar8 & 0xffffffff,0);
                lVar4 = (longlong)iVar2;
                if (lVar4 != -1) break;
                iVar2 = Ordinal_111();
                local_a8 = uVar7;
                uStack_a0 = uVar1;
                puVar6 = (undefined4 *)FUN_180148b70(local_98);
                local_b8 = *puVar6;
                uStack_b4 = puVar6[1];
                uStack_b0 = puVar6[2];
                uStack_ac = puVar6[3];
                lVar4 = FUN_180148c00(&local_b8,&local_a8);
                if ((60000 < lVar4) || (iVar2 != 0x2733)) goto LAB_18017796f;
              }
              uVar8 = uVar8 - lVar4;
              if (uVar8 == 0) break;
              plVar9 = (longlong *)((longlong)plVar9 + lVar4);
            }
            if ((local_68 == local_58) && (local_60 == local_50)) {
              Ordinal_3(lVar3);
              return 0;
            }
          }
        }
      }
    }
LAB_18017796f:
    Ordinal_3(lVar3);
    Ordinal_3(*in_R9);
    Ordinal_3(in_R9[1]);
    uVar7 = 0xffffffff;
  }
  return uVar7;
}



// ===== FUN_180177a10 @ 180177a10 (size 177)

undefined8 FUN_180177a10(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  *(int *)(param_1 + 0xe6c) = param_2;
  uVar2 = 0;
  if (param_2 == 0) {
    if (param_3 != 0) {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_180155d40(param_1,3,2);
      }
      lVar1 = FUN_180156570(param_1,param_3,*(undefined8 *)(param_1 + 0xe48),0,
                            *(undefined4 *)(param_1 + 0xe68));
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_180155d80(param_1,3);
      }
      if (lVar1 != 0) goto LAB_180177a9c;
      FUN_180175320(param_3);
    }
    uVar2 = 0x1b;
  }
LAB_180177a9c:
  *(longlong *)(param_1 + 0xe50) = lVar1;
  *(undefined1 *)(param_1 + 0xe70) = 1;
  return uVar2;
}



// ===== FUN_180177b30 @ 180177b30 (size 66)

bool FUN_180177b30(undefined8 *param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObjectEx((HANDLE)*param_1,0xffffffff,0);
  CloseHandle((HANDLE)*param_1);
  *param_1 = 0;
  return DVar1 == 0;
}



// ===== FUN_180177b80 @ 180177b80 (size 240)

ulonglong FUN_180177b80(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  NTSTATUS NVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_res18 [4];
  
  uVar3 = 0x2b;
  do {
    if (param_3 == 0) {
      return uVar3;
    }
    uVar4 = 4;
    if (param_3 < 4) {
      uVar4 = param_3;
    }
    uVar2 = thunk_FUN_180178ae0(param_1,local_res18,4);
    if ((int)uVar2 == 4) {
      if (DAT_1803c64f4 == '\0') {
        local_res18[0] = 0;
        NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,(PUCHAR)local_res18,4,2);
        uVar2 = (ulonglong)(-(uint)(NVar1 != 0) & 2);
        uVar3 = uVar2;
        goto LAB_180177c05;
      }
      uVar3 = 0;
      DAT_1803c64f0 = DAT_1803c64f0 * 0x41c64e6d + 0x3039;
      local_res18[0] = DAT_1803c64f0 >> 0x10 | DAT_1803c64f0 * 0x10000;
    }
    else {
      uVar3 = uVar2 & 0xffffffff;
LAB_180177c05:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    if (uVar4 != 0) {
      param_3 = param_3 - uVar4;
      do {
        *param_2 = (char)local_res18[0];
        param_2 = param_2 + 1;
        local_res18[0] = local_res18[0] >> 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  } while( true );
}



// ===== FUN_180177c70 @ 180177c70 (size 218)

ulonglong FUN_180177c70(undefined8 param_1,char *param_2,longlong param_3)

{
  NTSTATUS NVar1;
  ulonglong uVar2;
  uint local_res18 [4];
  
  do {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      *param_2 = '\0';
      return 0;
    }
    do {
      uVar2 = thunk_FUN_180178ae0(param_1,local_res18,4);
      if ((int)uVar2 == 4) {
        if (DAT_1803c64f4 == '\0') {
          local_res18[0] = 0;
          NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,(PUCHAR)local_res18,4,2);
          uVar2 = (ulonglong)(-(uint)(NVar1 != 0) & 2);
          goto LAB_180177cdf;
        }
        DAT_1803c64f0 = DAT_1803c64f0 * 0x41c64e6d + 0x3039;
        local_res18[0] = DAT_1803c64f0 >> 0x10 | DAT_1803c64f0 * 0x10000;
      }
      else {
LAB_180177cdf:
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
    } while (0xfffffffb < local_res18[0]);
    *param_2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
               [local_res18[0] % 0x3e];
    param_2 = param_2 + 1;
  } while( true );
}



// ===== FUN_180177d50 @ 180177d50 (size 402)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180177d50(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  NTSTATUS NVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_f8 [32];
  uint local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_f8;
  if (((param_3 & 0xfffffffffffffffe) < 0x100) && ((param_3 & 1) != 0)) {
    uVar3 = 0x2b;
    puVar6 = local_c8;
    uVar7 = param_3 - 1 >> 1;
    uVar5 = uVar7;
    while (uVar5 != 0) {
      uVar4 = 4;
      if (uVar5 < 4) {
        uVar4 = uVar5;
      }
      uVar2 = thunk_FUN_180178ae0(param_1,local_d8,4);
      if ((int)uVar2 == 4) {
        if (DAT_1803c64f4 == '\0') {
          local_d8[0] = 0;
          NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,(PUCHAR)local_d8,4,2);
          uVar2 = (ulonglong)(-(uint)(NVar1 != 0) & 2);
          uVar3 = uVar2;
          goto LAB_180177e25;
        }
        uVar3 = 0;
        DAT_1803c64f0 = DAT_1803c64f0 * 0x41c64e6d + 0x3039;
        local_d8[0] = DAT_1803c64f0 >> 0x10 | DAT_1803c64f0 * 0x10000;
      }
      else {
        uVar3 = uVar2 & 0xffffffff;
LAB_180177e25:
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      if (uVar4 != 0) {
        uVar5 = uVar5 - uVar4;
        do {
          *puVar6 = (char)local_d8[0];
          puVar6 = puVar6 + 1;
          local_d8[0] = local_d8[0] >> 8;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    if ((int)uVar3 == 0) {
      FUN_180134910(local_c8,uVar7,param_2,param_3);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x2b;
  }
  return uVar3;
}



// ===== FUN_180177ef0 @ 180177ef0 (size 203)

longlong FUN_180177ef0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char local_res18;
  undefined2 local_res19;
  
  local_res19 = 0;
  uVar1 = FUN_180195db0();
  if (uVar1 < 0x906000) {
    uVar1 = 0x1010117f;
  }
  else if ((uVar1 & 0xff0) != 0) {
    uVar3 = uVar1 >> 4 & 0xff;
    if (uVar3 < 0x1b) {
      local_res18 = (char)(uVar1 >> 4) + '`';
    }
    else {
      iVar2 = uVar3 - 1;
      local_res18 = 'z';
      local_res19 = CONCAT11(local_res19._1_1_,(char)iVar2 + (char)(iVar2 / 0x1a) * -0x1a + 'b');
    }
    goto LAB_180177f21;
  }
  local_res18 = '\0';
LAB_180177f21:
  iVar2 = FUN_1801450d0(param_1,param_2,"%s/%lx.%lx.%lx%s","OpenSSL",uVar1 >> 0x1c,
                        uVar1 >> 0x14 & 0xff,uVar1 >> 0xc & 0xff,&local_res18);
  return (longlong)iVar2;
}



// ===== FUN_180177fc0 @ 180177fc0 (size 365)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180177fc0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *_Source;
  char *_Dest;
  size_t _Count;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_148;
  lVar3 = FUN_1801aaa20(param_2);
  if (lVar3 == 0) {
    FUN_180150e00(param_1,"SSL Engine \'%s\' not found",param_2);
    uVar1 = 0x35;
  }
  else {
    if (*(longlong *)(param_1 + 0xe78) != 0) {
      FUN_1801abfb0();
      FUN_1801aba00(*(undefined8 *)(param_1 + 0xe78));
      *(undefined8 *)(param_1 + 0xe78) = 0;
    }
    iVar2 = FUN_1801ac0a0(lVar3);
    if (iVar2 == 0) {
      FUN_1801aba00(lVar3);
      _Count = 0x100;
      _Dest = local_128;
      iVar2 = FUN_1801a69b0();
      local_128[0] = '\0';
      uVar4 = FUN_180177ef0(local_128,0x100);
      if (uVar4 < 0xfe) {
        _Count = 0xfe - uVar4;
        (local_128 + uVar4)[0] = ':';
        (local_128 + uVar4)[1] = ' ';
        _Dest = local_128 + uVar4 + 2;
        *_Dest = '\0';
      }
      FUN_1801a65e0(iVar2,_Dest,_Count);
      if (*_Dest == '\0') {
        _Source = "No error";
        if (iVar2 != 0) {
          _Source = "Unknown error";
        }
        strncpy(_Dest,_Source,_Count);
        _Dest[_Count - 1] = '\0';
      }
      FUN_180150e00(param_1,"Failed to initialise SSL Engine \'%s\': %s",param_2,_Dest);
      uVar1 = 0x42;
    }
    else {
      *(longlong *)(param_1 + 0xe78) = lVar3;
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ===== FUN_180178160 @ 180178160 (size 107)

undefined8 FUN_180178160(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xe78) != 0) {
    iVar1 = FUN_1801ac560(*(longlong *)(param_1 + 0xe78),0xffff);
    if (iVar1 < 1) {
      uVar2 = FUN_18008d530(*(undefined8 *)(param_1 + 0xe78));
      FUN_180150e00(param_1,"set default crypto engine \'%s\' failed",uVar2);
      return 0x36;
    }
    uVar2 = FUN_18008d530(*(undefined8 *)(param_1 + 0xe78));
    FUN_180150ee0(param_1,"set default crypto engine \'%s\'",uVar2);
  }
  return 0;
}



// ===== FUN_1801781d0 @ 1801781d0 (size 110)

longlong FUN_1801781d0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = FUN_1801aadb0();
  lVar1 = 0;
  while( true ) {
    if (lVar2 == 0) {
      return lVar1;
    }
    uVar3 = FUN_18008d530(lVar2);
    lVar4 = FUN_180138590(lVar1,uVar3);
    if (lVar4 == 0) break;
    lVar2 = FUN_1801aae50(lVar2);
    lVar1 = lVar4;
  }
  FUN_180138630(lVar1);
  return 0;
}



// ===== FUN_180178240 @ 180178240 (size 441)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180178240(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_458;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20);
  if (plVar1[1] == 0) goto LAB_1801783a2;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != '\0')) {
    FUN_1802747e0(plVar1[1],local_428,0x400);
    FUN_1801a64b0();
    iVar2 = FUN_180274e00(plVar1[1]);
    if (iVar2 == 1) {
      FUN_180150f80(param_2,param_1,"SSL shutdown finished");
    }
    else {
      uVar3 = FUN_1802747e0(plVar1[1],local_428,0x400);
      iVar2 = FUN_180273df0(plVar1[1],uVar3);
      if (iVar2 == 0) {
LAB_180178369:
        pcVar6 = "SSL shutdown, EOF from server";
      }
      else if (iVar2 == 2) {
        pcVar6 = "SSL shutdown sent";
      }
      else {
        if (iVar2 != 3) {
          if (iVar2 != 6) {
            iVar4 = FUN_1801a69b0();
            if (iVar4 == 0) {
              uVar5 = FUN_180179af0(iVar2);
            }
            else {
              uVar5 = FUN_18017bb30(iVar4,local_428,0x400);
            }
            local_438 = Ordinal_111();
            FUN_180150f80(param_2,param_1,"SSL shutdown, error: \'%s\', errno %d",uVar5);
            goto LAB_180178383;
          }
          goto LAB_180178369;
        }
        pcVar6 = "SSL shutdown send blocked";
      }
      FUN_180150f80(param_2,param_1,pcVar6);
    }
LAB_180178383:
    FUN_1801a64b0();
    FUN_180274b00(plVar1[1]);
  }
  FUN_180273650(plVar1[1]);
  plVar1[1] = 0;
LAB_1801783a2:
  if (*plVar1 != 0) {
    FUN_1802725b0();
    *plVar1 = 0;
    *(undefined1 *)((longlong)plVar1 + 0x24) = 0;
  }
  if (plVar1[3] != 0) {
    FUN_180197f30();
    plVar1[3] = 0;
  }
  return;
}



// ===== FUN_180178400 @ 180178400 (size 610)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180178400(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  size_t _Count;
  undefined8 uVar8;
  undefined1 auStack_158 [32];
  char local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_158;
  uVar8 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  if (*(char *)(param_2 + 0x71a) == '\x02') {
    FUN_180274e00(*(undefined8 *)(lVar1 + 8));
  }
  if (*(longlong *)(lVar1 + 8) == 0) {
    return 0;
  }
  _Count = 0x100;
  iVar4 = 10;
  while (iVar4 != 0) {
    uVar5 = FUN_1801501b0(param_1,param_2);
    iVar2 = FUN_180161bd0(uVar5,0xffffffffffffffff,0xffffffffffffffff,10000);
    if (iVar2 < 1) {
      if (iVar2 == 0) {
        FUN_180150e00(param_2,"SSL shutdown timeout");
      }
      else {
        uVar3 = Ordinal_111();
        FUN_180150e00(param_2,"select/poll on SSL socket, errno: %d",uVar3);
        uVar8 = 0xffffffff;
      }
      break;
    }
    FUN_1801a64b0();
    uVar3 = FUN_1802747e0(*(undefined8 *)(lVar1 + 8),local_138,0x100);
    iVar2 = FUN_180273df0(*(undefined8 *)(lVar1 + 8),uVar3);
    if (iVar2 == 0) break;
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        FUN_180150ee0(param_2,"SSL_ERROR_WANT_WRITE");
      }
      else if (iVar2 != 6) {
        iVar4 = FUN_1801a69b0();
        if (iVar4 == 0) {
          pcVar7 = (char *)FUN_180179af0(iVar2);
        }
        else {
          local_138[0] = '\0';
          pcVar7 = local_138;
          uVar6 = FUN_180177ef0(local_138,0x100);
          if (uVar6 < 0xfe) {
            _Count = 0xfe - uVar6;
            (local_138 + uVar6)[0] = ':';
            (local_138 + uVar6)[1] = ' ';
            pcVar7 = local_138 + uVar6 + 2;
            *pcVar7 = '\0';
          }
          FUN_1801a65e0(iVar4,pcVar7,_Count);
          if (*pcVar7 == '\0') {
            strncpy(pcVar7,"Unknown error",_Count);
            pcVar7[_Count - 1] = '\0';
          }
        }
        uVar3 = Ordinal_111();
        FUN_180150e00(param_2,"OpenSSL SSL_read on shutdown: %s, errno %d",pcVar7,uVar3);
      }
      break;
    }
    FUN_180150ee0(param_2,"SSL_ERROR_WANT_READ");
    iVar4 = iVar4 + -1;
  }
  if (*(char *)(param_2 + 0xad7) != '\0') {
    iVar4 = FUN_180274070(*(undefined8 *)(lVar1 + 8));
    if (iVar4 == 1) {
      pcVar7 = "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN";
    }
    else if (iVar4 == 2) {
      pcVar7 = "SSL_get_shutdown() returned SSL_RECEIVED_SHUTDOWN";
    }
    else {
      if (iVar4 != 3) goto LAB_18017862f;
      pcVar7 = "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN|SSL_RECEIVED__SHUTDOWN";
    }
    FUN_180150ee0(param_2,pcVar7);
  }
LAB_18017862f:
  FUN_180273650(*(undefined8 *)(lVar1 + 8));
  *(undefined8 *)(lVar1 + 8) = 0;
  return uVar8;
}



// ===== FUN_180178720 @ 180178720 (size 534)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180178720(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined1 auStack_1e8 [32];
  char local_1c8 [255];
  undefined1 local_c9;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_1e8;
  piVar1 = *(int **)(param_1 + 0x10);
  lVar6 = *(longlong *)(piVar1 + 8);
  FUN_1801a64b0();
  uVar9 = (undefined4)param_4;
  if (0x7fffffff < param_4) {
    uVar9 = 0x7fffffff;
  }
  iVar2 = FUN_180274ed0(*(undefined8 *)(lVar6 + 8),param_3,uVar9);
  if (0 < iVar2) {
    *param_5 = 0;
    goto LAB_180178912;
  }
  iVar2 = FUN_180273df0(*(undefined8 *)(lVar6 + 8),iVar2);
  if (iVar2 == 1) {
    lVar6 = FUN_18014e420(*(undefined8 *)(param_1 + 8));
    if (lVar6 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(lVar6 + 0x10);
    }
    uVar4 = FUN_1801a69b0();
    if (((((uVar4 & 0xff000000) == 0x14000000) && ((uVar4 & 0xfff) == 0x80)) && (*piVar1 == 2)) &&
       ((piVar8 != (int *)0x0 && (*piVar8 == 2)))) {
      FUN_180177ef0(local_c8,0x78);
      puVar7 = local_c8;
      pcVar5 = "Error: %s does not support double SSL tunneling.";
    }
    else {
      puVar7 = (undefined1 *)FUN_18017bb30(uVar4,local_1c8,0x100);
      pcVar5 = "SSL_write() error: %s";
    }
    FUN_180150e00(param_2,pcVar5,puVar7);
    iVar2 = -1;
    *param_5 = 0x37;
    goto LAB_180178912;
  }
  if (iVar2 != 2) {
    if (iVar2 != 3) {
      if (iVar2 == 5) {
        iVar2 = Ordinal_111();
        if (*(int *)(lVar6 + 0x20) == 0x51) goto LAB_180178860;
        iVar3 = FUN_1801a69b0();
        if (iVar3 == 0) {
          if (iVar2 == 0) {
            pcVar5 = (char *)FUN_180179af0(5);
            strncpy(local_1c8,pcVar5,0x100);
            local_c9 = 0;
          }
          else {
            FUN_180138690(iVar2,local_1c8,0x100);
          }
        }
        else {
          FUN_18017bb30(iVar3,local_1c8,0x100);
        }
        pcVar5 = local_1c8;
      }
      else {
        Ordinal_111();
        pcVar5 = (char *)FUN_180179af0(iVar2);
      }
      FUN_180150e00(param_2,"OpenSSL SSL_write: %s, errno %d",pcVar5);
      iVar2 = -1;
      *param_5 = 0x37;
      goto LAB_180178912;
    }
  }
LAB_180178860:
  *param_5 = 0x51;
  iVar2 = -1;
LAB_180178912:
  return (longlong)iVar2;
}



// ===== FUN_180178940 @ 180178940 (size 414)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180178940(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      undefined4 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *_Source;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_178 [32];
  char local_158 [255];
  undefined1 local_59;
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_178;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  FUN_1801a64b0();
  uVar7 = (undefined4)param_4;
  if (0x7fffffff < param_4) {
    uVar7 = 0x7fffffff;
  }
  iVar3 = FUN_1802747e0(*(undefined8 *)(lVar2 + 8),param_3,uVar7);
  lVar6 = (longlong)iVar3;
  if (0 < iVar3) {
    return lVar6;
  }
  iVar3 = FUN_180273df0(*(undefined8 *)(lVar2 + 8),iVar3);
  if (iVar3 == 0) goto LAB_180178a94;
  if ((iVar3 == 2) || (iVar3 == 3)) {
LAB_180178ad0:
    *param_5 = 0x51;
  }
  else {
    if (iVar3 == 6) {
      if (*(int *)(param_1 + 0x20) == 0) {
        FUN_180152410(uVar1,1);
      }
      goto LAB_180178a94;
    }
    if (*(int *)(lVar2 + 0x20) == 0x51) goto LAB_180178ad0;
    iVar4 = FUN_1801a69b0();
    if ((-1 < lVar6) && (iVar4 == 0)) goto LAB_180178a94;
    iVar5 = Ordinal_111();
    if (iVar4 == 0) {
      if ((iVar5 == 0) || (iVar3 != 5)) {
        _Source = (char *)FUN_180179af0(iVar3);
        strncpy(local_158,_Source,0x100);
        local_59 = 0;
      }
      else {
        FUN_180138690(iVar5,local_158,0x100);
      }
    }
    else {
      FUN_18017bb30(iVar4,local_158,0x100);
    }
    FUN_180150e00(param_2,"OpenSSL SSL_read: %s, errno %d",local_158,iVar5);
    *param_5 = 0x38;
  }
  lVar6 = -1;
LAB_180178a94:
  return lVar6;
}



// ===== FUN_180178ae0 @ 180178ae0 (size 99)

undefined4 FUN_180178ae0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    iVar1 = FUN_1801941f0();
    if (iVar1 == 0) {
      return 2;
    }
  }
  else {
    iVar1 = FUN_18017bad0();
    if (iVar1 != 0) {
      return 2;
    }
  }
  uVar2 = FUN_180140180(param_3);
  iVar1 = FUN_180193f70(param_2,uVar2);
  uVar2 = 2;
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_180178b50 @ 180178b50 (size 148)

undefined4 FUN_180178b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  lVar3 = FUN_18019d560();
  if (lVar3 == 0) {
    uVar1 = 0x1b;
  }
  else {
    uVar4 = FUN_18019db80();
    iVar2 = FUN_18019d010(lVar3,uVar4);
    if (iVar2 == 0) {
      FUN_18019d520();
      uVar1 = 2;
    }
    else {
      FUN_18019d280(lVar3,param_1,param_2);
      FUN_18019cf70(lVar3,param_3,local_18);
      FUN_18019d520(lVar3);
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ===== FUN_180178c50 @ 180178c50 (size 3105)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180178c50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 auStack_208 [32];
  char *local_1e8;
  undefined8 local_1d8;
  int local_1d0;
  longlong local_1c8;
  int *local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_f0 [40];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_208;
  lVar5 = FUN_180273fd0(param_2);
  if (lVar5 != 0) {
    local_f8 = lVar5;
    iVar2 = FUN_1801958b0(lVar5);
    local_1d0 = iVar2;
    uVar6 = FUN_18014ecf0(param_1,iVar2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_18018e930();
    lVar7 = FUN_18018d7c0(uVar6);
    if (lVar7 != 0) {
      iVar11 = 0;
      if (0 < iVar2) {
        do {
          uVar6 = FUN_180195ae0(lVar5,iVar11);
          local_1c0 = (int *)0x0;
          local_1a8 = uVar6;
          uVar8 = FUN_1801a34d0(uVar6);
          FUN_18019b4f0(lVar7,uVar8,0,0x82031f);
          iVar2 = FUN_18018cf90(lVar7,3,0,&local_1d8);
          local_1e8 = (char *)(longlong)iVar2;
          FUN_18014ee30(param_1,iVar11,"Subject",local_1d8);
          FUN_18018cf90(lVar7,1,0);
          uVar8 = FUN_1801a3490(uVar6);
          FUN_18019b4f0(lVar7,uVar8,0,0x82031f);
          iVar2 = FUN_18018cf90(lVar7,3,0,&local_1d8);
          local_1e8 = (char *)(longlong)iVar2;
          FUN_18014ee30(param_1,iVar11,"Issuer",local_1d8);
          FUN_18018cf90(lVar7,1,0);
          uVar3 = FUN_1801a2bd0(uVar6);
          FUN_180196900(lVar7,&DAT_180306a78,uVar3);
          iVar2 = FUN_18018cf90(lVar7,3,0,&local_1d8);
          local_1e8 = (char *)(longlong)iVar2;
          FUN_18014ee30(param_1,iVar11,"Version",local_1d8);
          FUN_18018cf90(lVar7,1,0);
          piVar9 = (int *)FUN_1800d2280(uVar6);
          if (piVar9[1] == 0x102) {
            FUN_18018da10(lVar7,&DAT_180306a88);
          }
          iVar2 = 0;
          lVar5 = 0;
          if (0 < *piVar9) {
            do {
              FUN_180196900(lVar7,&DAT_1803026a0,*(undefined1 *)(*(longlong *)(piVar9 + 2) + lVar5))
              ;
              iVar2 = iVar2 + 1;
              lVar5 = lVar5 + 1;
            } while (iVar2 < *piVar9);
          }
          iVar2 = FUN_18018cf90(lVar7,3,0,&local_1d8);
          local_1e8 = (char *)(longlong)iVar2;
          FUN_18014ee30(param_1,iVar11,"Serial Number",local_1d8);
          FUN_18018cf90(lVar7,1,0);
          iVar2 = 0;
          local_1c8 = 0;
          local_1b0 = 0;
          FUN_1801a2850(&local_1c0,&local_1c8,uVar6);
          if (local_1c8 != 0) {
            local_1b8 = 0;
            FUN_1801a1e10(&local_1b8,0,0);
            FUN_18019b2d0(lVar7,local_1b8);
            iVar4 = FUN_18018cf90(lVar7,3,0,&local_1d8);
            local_1e8 = (char *)(longlong)iVar4;
            FUN_18014ee30(param_1,iVar11,"Signature Algorithm",local_1d8);
            FUN_18018cf90(lVar7,1,0,0);
          }
          lVar5 = FUN_1801a2b30(uVar6);
          if ((lVar5 != 0) &&
             (local_1e8 = (char *)lVar5, FUN_1801a2200(&local_1b0,0,0,0), local_1b0 != 0)) {
            FUN_18019b2d0(lVar7);
            iVar4 = FUN_18018cf90(lVar7,3,0,&local_1d8);
            local_1e8 = (char *)(longlong)iVar4;
            FUN_18014ee30(param_1,iVar11,"Public Key Algorithm",local_1d8);
            FUN_18018cf90(lVar7,1,0);
          }
          uVar8 = FUN_1801a2af0(uVar6);
          iVar4 = FUN_1801958b0(uVar8);
          if (0 < iVar4) {
            iVar4 = FUN_1801958b0(uVar8);
            if (0 < iVar4) {
              do {
                uVar6 = FUN_180195ae0(uVar8,iVar2);
                uVar10 = FUN_18018e930();
                lVar5 = FUN_18018d7c0(uVar10);
                if (lVar5 == 0) break;
                uVar10 = FUN_1801a3790(uVar6);
                FUN_18019b440(local_c8,0x80,uVar10);
                iVar4 = FUN_1801a4b20(lVar5,uVar6,0,0);
                if (iVar4 == 0) {
                  uVar6 = FUN_1801a3d70(uVar6);
                  FUN_18019ccd0(lVar5,uVar6);
                }
                FUN_18018cf90(lVar5,0x73,0,&local_198);
                local_1e8 = (char *)*local_198;
                FUN_18014ee30(param_1,iVar11,local_c8);
                FUN_18018d110(lVar5);
                iVar2 = iVar2 + 1;
                iVar4 = FUN_1801958b0(uVar8);
              } while (iVar2 < iVar4);
            }
            uVar6 = local_1a8;
          }
          uVar8 = FUN_18018d300(uVar6);
          FUN_18019c360(lVar7,uVar8);
          iVar2 = FUN_18018cf90(lVar7,3,0,&local_1d8);
          local_1e8 = (char *)(longlong)iVar2;
          FUN_18014ee30(param_1,iVar11,"Start date",local_1d8);
          FUN_18018cf90(lVar7,1,0);
          uVar8 = FUN_18019f410(uVar6);
          FUN_18019c360(lVar7,uVar8);
          iVar2 = FUN_18018cf90(lVar7,3,0,&local_1d8);
          local_1e8 = (char *)(longlong)iVar2;
          FUN_18014ee30(param_1,iVar11,"Expire date",local_1d8);
          FUN_18018cf90(lVar7,1,0);
          lVar5 = FUN_1801a34a0(uVar6);
          if (lVar5 == 0) {
            FUN_180150ee0(param_1,"   Unable to load public key");
          }
          else {
            iVar2 = FUN_18019a410(lVar5);
            if (iVar2 == 6) {
              uVar8 = FUN_18019e090(lVar5);
              FUN_18019eae0(uVar8,&local_1a0,&local_108,0);
              uVar3 = FUN_180198b90(local_1a0);
              FUN_180196900(lVar7,&DAT_1802fec90,uVar3);
              iVar2 = FUN_18018cf90(lVar7,3,0,&local_1d8);
              local_1e8 = (char *)(longlong)iVar2;
              FUN_18014ee30(param_1,iVar11,"RSA Public Key",local_1d8);
              FUN_18018cf90(lVar7,1,0);
              lVar1 = local_1a0;
              local_1e8 = "n";
              FUN_1801450d0(local_f0,0x20,"%s(%s)",&DAT_180306b24);
              if (lVar1 != 0) {
                FUN_180199f10(lVar7,lVar1);
              }
              iVar2 = FUN_18018cf90(lVar7,3,0,&local_110);
              local_1e8 = (char *)(longlong)iVar2;
              FUN_18014ee30(param_1,iVar11,local_f0,local_110);
              FUN_18018cf90(lVar7,1,0);
              lVar1 = local_108;
              local_1e8 = "e";
              FUN_1801450d0(local_f0,0x20,"%s(%s)",&DAT_180306b24);
              if (lVar1 != 0) {
                FUN_180199f10(lVar7,lVar1);
              }
              iVar2 = FUN_18018cf90(lVar7,3,0,&local_100);
              uVar8 = local_100;
LAB_180179714:
              local_1e8 = (char *)(longlong)iVar2;
              FUN_18014ee30(param_1,iVar11,local_f0,uVar8);
              FUN_18018cf90(lVar7,1,0);
            }
            else if (iVar2 == 0x1c) {
              uVar8 = FUN_18019df80(lVar5);
              FUN_18019f3e0(uVar8,&local_150,&local_140,&local_130);
              FUN_18019f3c0(uVar8,&local_120,0);
              lVar1 = local_150;
              local_1e8 = "p";
              FUN_1801450d0(local_f0,0x20,"%s(%s)",&DAT_180306b48);
              if (lVar1 != 0) {
                FUN_180199f10(lVar7,lVar1);
              }
              iVar2 = FUN_18018cf90(lVar7,3,0,&local_148);
              local_1e8 = (char *)(longlong)iVar2;
              FUN_18014ee30(param_1,iVar11,local_f0,local_148);
              FUN_18018cf90(lVar7,1,0);
              lVar1 = local_140;
              local_1e8 = "q";
              FUN_1801450d0(local_f0,0x20,"%s(%s)",&DAT_180306b48);
              if (lVar1 != 0) {
                FUN_180199f10(lVar7,lVar1);
              }
              iVar2 = FUN_18018cf90(lVar7,3,0,&local_138);
              local_1e8 = (char *)(longlong)iVar2;
              FUN_18014ee30(param_1,iVar11,local_f0,local_138);
              FUN_18018cf90(lVar7,1,0);
              lVar1 = local_130;
              local_1e8 = "g";
              FUN_1801450d0(local_f0,0x20,"%s(%s)",&DAT_180306b48);
              if (lVar1 != 0) {
                FUN_180199f10(lVar7,lVar1);
              }
              iVar2 = FUN_18018cf90(lVar7,3,0,&local_128);
              local_1e8 = (char *)(longlong)iVar2;
              FUN_18014ee30(param_1,iVar11,local_f0,local_128);
              FUN_18018cf90(lVar7,1,0);
              lVar1 = local_120;
              local_1e8 = "pub_key";
              FUN_1801450d0(local_f0,0x20,"%s(%s)",&DAT_180306b48);
              if (lVar1 != 0) {
                FUN_180199f10(lVar7,lVar1);
              }
              iVar2 = FUN_18018cf90(lVar7,3,0,&local_118);
              local_1e8 = (char *)(longlong)iVar2;
              FUN_18014ee30(param_1,iVar11,local_f0,local_118);
              FUN_18018cf90(lVar7,1,0);
            }
            else if (iVar2 == 0x74) {
              uVar8 = FUN_18019dfd0(lVar5);
              FUN_18019fab0(uVar8,&local_190,&local_180,&local_170);
              FUN_18019f3c0(uVar8,&local_160,0);
              lVar1 = local_190;
              local_1e8 = "p";
              FUN_1801450d0(local_f0,0x20,"%s(%s)",&DAT_180306b30);
              if (lVar1 != 0) {
                FUN_180199f10(lVar7,lVar1);
              }
              iVar2 = FUN_18018cf90(lVar7,3,0,&local_188);
              local_1e8 = (char *)(longlong)iVar2;
              FUN_18014ee30(param_1,iVar11,local_f0,local_188);
              FUN_18018cf90(lVar7,1,0);
              lVar1 = local_180;
              local_1e8 = "q";
              FUN_1801450d0(local_f0,0x20,"%s(%s)",&DAT_180306b30);
              if (lVar1 != 0) {
                FUN_180199f10(lVar7,lVar1);
              }
              iVar2 = FUN_18018cf90(lVar7,3,0,&local_178);
              local_1e8 = (char *)(longlong)iVar2;
              FUN_18014ee30(param_1,iVar11,local_f0,local_178);
              FUN_18018cf90(lVar7,1,0);
              lVar1 = local_170;
              local_1e8 = "g";
              FUN_1801450d0(local_f0,0x20,"%s(%s)",&DAT_180306b30);
              if (lVar1 != 0) {
                FUN_180199f10(lVar7,lVar1);
              }
              iVar2 = FUN_18018cf90(lVar7,3,0,&local_168);
              local_1e8 = (char *)(longlong)iVar2;
              FUN_18014ee30(param_1,iVar11,local_f0,local_168);
              FUN_18018cf90(lVar7,1,0);
              lVar1 = local_160;
              local_1e8 = "pub_key";
              FUN_1801450d0(local_f0,0x20,"%s(%s)",&DAT_180306b30);
              if (lVar1 != 0) {
                FUN_180199f10(lVar7,lVar1);
              }
              iVar2 = FUN_18018cf90(lVar7,3,0,&local_158);
              uVar8 = local_158;
              goto LAB_180179714;
            }
            FUN_18019deb0(lVar5);
          }
          if (local_1c0 != (int *)0x0) {
            iVar2 = 0;
            lVar5 = 0;
            if (0 < *local_1c0) {
              do {
                FUN_180196900(lVar7,"%02x:",*(undefined1 *)(*(longlong *)(local_1c0 + 2) + lVar5));
                lVar5 = lVar5 + 1;
                iVar2 = iVar2 + 1;
              } while (iVar2 < *local_1c0);
            }
            iVar2 = FUN_18018cf90(lVar7,3,0,&local_1d8);
            local_1e8 = (char *)(longlong)iVar2;
            FUN_18014ee30(param_1,iVar11,"Signature",local_1d8);
            FUN_18018cf90(lVar7,1,0);
          }
          FUN_1801a44b0(lVar7,uVar6);
          iVar2 = FUN_18018cf90(lVar7,3,0,&local_1d8);
          local_1e8 = (char *)(longlong)iVar2;
          FUN_18014ee30(param_1,iVar11,&DAT_180306b64,local_1d8);
          FUN_18018cf90(lVar7,1);
          iVar11 = iVar11 + 1;
          lVar5 = local_f8;
        } while (iVar11 < local_1d0);
      }
      FUN_18018d110(lVar7);
      return 0;
    }
  }
  return 0x1b;
}



// ===== FUN_180179880 @ 180179880 (size 615)

ulonglong FUN_180179880(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  char *pcVar13;
  longlong lVar14;
  bool bVar15;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  plVar6 = (longlong *)FUN_18014e400();
  lVar7 = FUN_18014e3e0(param_1,param_2);
  lVar11 = 0;
  if (((((*(int *)(param_2 + 0x6e0) == 0) || (*(char *)((longlong)plVar6 + 0x79) == '\0')) ||
       (*plVar6 != 0)) || ((plVar6[9] != 0 || (*(longlong *)(lVar7 + 0x38) != 0)))) ||
     (*(char *)(lVar7 + 0xc6) != '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar7 = *(longlong *)(param_2 + 0xe0);
  if (((lVar7 != 0) || (lVar7 = *(longlong *)(param_2 + 0xd8), lVar7 != 0)) &&
     ((lVar9 = *(longlong *)(lVar7 + 0xd8), lVar9 != 0 && (*(longlong *)(lVar9 + 8) != 0)))) {
    puVar8 = (undefined4 *)FUN_180148b70(local_38);
    local_58 = *(undefined4 *)(lVar9 + 0x10);
    uStack_54 = *(undefined4 *)(lVar9 + 0x14);
    uStack_50 = *(undefined4 *)(lVar9 + 0x18);
    uStack_4c = *(undefined4 *)(lVar9 + 0x1c);
    local_48 = *puVar8;
    uStack_44 = puVar8[1];
    uStack_40 = puVar8[2];
    uStack_3c = puVar8[3];
    lVar9 = FUN_180148c00(&local_48,&local_58);
    lVar14 = (longlong)*(int *)(param_2 + 0x6e0) * 1000;
    if ((lVar14 < 0) || (lVar9 < lVar14)) {
      puVar3 = *(undefined8 **)(lVar7 + 0xd8);
      lVar9 = FUN_18014e400(param_1);
      pcVar13 = (char *)*puVar3;
      if ((pcVar13 == (char *)0x0) || (*(longlong *)(lVar9 + 8) == 0)) {
        bVar15 = pcVar13 == *(char **)(lVar9 + 8);
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 8) - (longlong)pcVar13;
        do {
          cVar1 = *pcVar13;
          cVar2 = pcVar13[lVar9];
          if (cVar1 != cVar2) break;
          pcVar13 = pcVar13 + 1;
        } while (cVar2 != '\0');
        bVar15 = cVar1 == cVar2;
      }
      if ((((bVar15) && (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xd8) + 8), lVar7 != 0)) &&
          (bVar4)) && (iVar5 = FUN_1801a0be0(lVar7), iVar5 != 0)) {
        FUN_180272d70(param_3,lVar7);
        return 0;
      }
    }
  }
  lVar7 = FUN_1801afd00(param_3);
  uVar10 = FUN_18017c550(param_1,param_2,lVar7);
  if ((int)uVar10 != 0) {
    return uVar10;
  }
  if (bVar4) {
    lVar14 = FUN_18014e400(param_1);
    lVar9 = *(longlong *)(param_2 + 0xe0);
    if ((lVar9 != 0) || (lVar9 = *(longlong *)(param_2 + 0xd8), lVar9 != 0)) {
      plVar6 = *(longlong **)(lVar9 + 0xd8);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)(*(code *)PTR_calloc_1803bd550)(1,0x20);
        *(longlong **)(lVar9 + 0xd8) = plVar6;
        if (plVar6 == (longlong *)0x0) {
          return uVar10 & 0xffffffff;
        }
      }
      iVar5 = FUN_1801a0be0(lVar7);
      if (iVar5 != 0) {
        if ((*(longlong *)(lVar14 + 8) == 0) ||
           (lVar11 = (*(code *)PTR__strdup_1803bd548)(), lVar11 != 0)) {
          if (plVar6[1] != 0) {
            FUN_1801a0920();
            (*(code *)PTR_free_1803bd538)(*plVar6);
          }
          plVar12 = (longlong *)FUN_180148b70(local_38);
          lVar9 = *plVar12;
          lVar14 = plVar12[1];
          plVar6[1] = lVar7;
          *plVar6 = lVar11;
          plVar6[2] = lVar9;
          plVar6[3] = lVar14;
        }
        else {
          FUN_1801a0920(lVar7);
        }
      }
    }
    return uVar10 & 0xffffffff;
  }
  return uVar10;
}



// ===== FUN_180179af0 @ 180179af0 (size 123)

char * FUN_180179af0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "SSL_ERROR_NONE";
  case 1:
    return "SSL_ERROR_SSL";
  case 2:
    return "SSL_ERROR_WANT_READ";
  case 3:
    return "SSL_ERROR_WANT_WRITE";
  case 4:
    return "SSL_ERROR_WANT_X509_LOOKUP";
  case 5:
    return "SSL_ERROR_SYSCALL";
  case 6:
    return "SSL_ERROR_ZERO_RETURN";
  case 7:
    return "SSL_ERROR_WANT_CONNECT";
  case 8:
    return "SSL_ERROR_WANT_ACCEPT";
  case 9:
    return "SSL_ERROR_WANT_ASYNC";
  case 10:
    return "SSL_ERROR_WANT_ASYNC_JOB";
  default:
    return "SSL_ERROR unknown";
  }
}



// ===== FUN_180179ba0 @ 180179ba0 (size 3001)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180179ba0(longlong param_1,undefined8 param_2,char *param_3,undefined8 *param_4,char *param_5,
             char *param_6,undefined8 *param_7,undefined *param_8,longlong param_9)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  char *pcVar14;
  undefined *puVar15;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  undefined4 local_190;
  char *local_188;
  longlong local_180;
  undefined8 *local_178;
  undefined *local_170;
  char *local_168;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_1e8;
  local_168 = param_6;
  local_178 = param_7;
  local_170 = param_8;
  local_1a8 = param_9;
  local_190 = CONCAT31(local_190._1_3_,1);
  local_198 = param_4;
  if (((param_5 == (char *)0x0) || (*param_5 == '\0')) ||
     (iVar2 = FUN_180140330(param_5,&DAT_180306b6c), iVar2 != 0)) {
    iVar2 = 1;
  }
  else {
    iVar2 = FUN_180140330(param_5,&DAT_180306b70);
    if (iVar2 == 0) {
      iVar2 = FUN_180140330(param_5,&DAT_180306b74);
      if (iVar2 == 0) {
        iVar4 = FUN_180140330(param_5,&DAT_180306b78);
        iVar2 = -1;
        if (iVar4 != 0) {
          iVar2 = 0x2b;
        }
      }
      else {
        iVar2 = 0x2a;
      }
    }
    else {
      iVar2 = 2;
    }
  }
  if (((param_3 == (char *)0x0) && (param_4 == (undefined8 *)0x0)) && (iVar2 != 0x2a)) {
    return 1;
  }
  local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
  if (local_1a8 != 0) {
    FUN_180272e40(param_2,local_1a8);
    FUN_180272e30(param_2,FUN_18017c4d0);
  }
  if (iVar2 == 1) {
    if (param_4 == (undefined8 *)0x0) {
      iVar4 = FUN_18027af70(param_2,param_3);
    }
    else {
      lVar8 = FUN_18018e860(*param_4,*(undefined4 *)(param_4 + 1));
      local_1b0 = lVar8;
      if (lVar8 == 0) goto LAB_18017a394;
      FUN_1801a64b0();
      local_188 = (char *)FUN_1801a4500(lVar8,0,FUN_18017c4d0,local_1a8);
      if (local_188 == (char *)0x0) {
LAB_18017a363:
        iVar4 = 0;
      }
      else {
        iVar7 = FUN_18027aec0(param_2,local_188);
        iVar5 = FUN_1801a6f40();
        iVar4 = 0;
        if (iVar5 == 0) {
          iVar4 = iVar7;
        }
        if (iVar4 != 0) {
          iVar7 = FUN_1802721c0(param_2,0x58,0);
          if (iVar7 != 0) {
            lVar8 = FUN_1801a4470(local_1b0,0,FUN_18017c4d0,local_1a8);
            while (lVar8 != 0) {
              iVar7 = FUN_1802721c0(param_2,0x59,0,lVar8);
              if (iVar7 == 0) {
                FUN_1801a2830(lVar8);
                goto LAB_18017a363;
              }
              lVar8 = FUN_1801a4470(local_1b0,0,FUN_18017c4d0,local_1a8);
            }
            uVar6 = FUN_1801a6f70();
            if (((uVar6 & 0xff000000) == 0x9000000) && ((uVar6 & 0xfff) == 0x6c)) {
              FUN_1801a64b0();
              goto LAB_18017a366;
            }
          }
          goto LAB_18017a363;
        }
      }
LAB_18017a366:
      FUN_1801a2830(local_188);
      FUN_18018d110(local_1b0);
    }
    if (iVar4 != 1) {
LAB_18017a394:
      uVar3 = FUN_1801a69b0();
      uVar9 = FUN_18017bb30(uVar3,local_158,0x100);
      if (local_198 != (undefined8 *)0x0) {
        param_3 = "CURLOPT_SSLCERT_BLOB";
      }
      FUN_180150e00(param_1,
                    "could not load PEM client certificate from %s, OpenSSL error %s, (no key found, wrong pass phrase, or wrong file format?)"
                    ,param_3,uVar9);
      return 0;
    }
LAB_18017a161:
    iVar4 = 0;
  }
  else if (iVar2 == 2) {
    if (param_4 == (undefined8 *)0x0) {
      iVar4 = FUN_18027af90(param_2,param_3,2);
    }
    else {
      lVar8 = FUN_18018e860(*param_4,*(undefined4 *)(param_4 + 1));
      if (lVar8 == 0) goto LAB_18017a20c;
      lVar10 = FUN_1801a1d40(lVar8,0);
      if (lVar10 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_18027aec0(param_2,lVar10);
      }
      FUN_1801a2830(lVar10);
      FUN_18018d110(lVar8);
    }
    if (iVar4 != 1) {
LAB_18017a20c:
      uVar3 = FUN_1801a69b0();
      uVar9 = FUN_18017bb30(uVar3,local_158,0x100);
      if (local_198 != (undefined8 *)0x0) {
        param_3 = "CURLOPT_SSLCERT_BLOB";
      }
      FUN_180150e00(param_1,
                    "could not load ASN1 client certificate from %s, OpenSSL error %s, (no key found, wrong pass phrase, or wrong file format?)"
                    ,param_3,uVar9);
      return 0;
    }
    iVar4 = (int)local_1b8;
  }
  else {
    if (iVar2 == 0x2a) {
      if ((((*(longlong *)(param_1 + 0xe78) == 0) && (param_3 != (char *)0x0)) &&
          (iVar4 = FUN_1801403a0(param_3,"pkcs11:",7), iVar4 != 0)) &&
         (iVar4 = FUN_180177fc0(param_1,"pkcs11"), iVar4 != 0)) {
        return 0;
      }
      if (*(longlong *)(param_1 + 0xe78) == 0) {
        FUN_180150e00(param_1,"crypto engine not set, can\'t load certificate");
        return 0;
      }
      local_180 = 0;
      local_1c8 = (undefined8 *)0x0;
      local_188 = param_3;
      iVar4 = FUN_1801ab220(*(longlong *)(param_1 + 0xe78),0xd,0,"LOAD_CERT_CTRL");
      if (iVar4 == 0) {
        FUN_180150e00(param_1,"ssl engine does not support loading certificates");
        return 0;
      }
      local_1c0 = 1;
      local_1c8 = (undefined8 *)0x0;
      iVar4 = FUN_1801ab390(*(undefined8 *)(param_1 + 0xe78),"LOAD_CERT_CTRL",0,&local_188);
      if (iVar4 == 0) {
        uVar3 = FUN_1801a69b0();
        uVar9 = FUN_18017bb30(uVar3,local_158,0x100);
        FUN_180150e00(param_1,"ssl engine cannot load client cert with id \'%s\' [%s]",param_3,uVar9
                     );
        return 0;
      }
      if (local_180 == 0) {
        FUN_180150e00(param_1,"ssl engine didn\'t initialized the certificate properly.");
        return 0;
      }
      iVar4 = FUN_18027aec0(param_2);
      if (iVar4 != 1) {
        uVar3 = FUN_1801a69b0();
        uVar9 = FUN_18017bb30(uVar3,local_158,0x100);
        FUN_180150e00(param_1,"unable to set client certificate [%s]",uVar9);
        return 0;
      }
      FUN_1801a2830(local_180);
      goto LAB_18017a161;
    }
    if (iVar2 != 0x2b) {
      FUN_180150e00(param_1,"not supported file type \'%s\' for certificate",param_5);
      return 0;
    }
    local_1b8 = 0;
    if (param_4 == (undefined8 *)0x0) {
      uVar9 = FUN_1801968f0();
      lVar8 = FUN_18018d7c0(uVar9);
      if (lVar8 == 0) {
        uVar3 = FUN_1801a69b0();
        uVar9 = FUN_18017bb30(uVar3,local_158,0x100);
        FUN_180150e00(param_1,"BIO_new return NULL, OpenSSL error %s",uVar9);
        return 0;
      }
      iVar4 = FUN_18018cf90(lVar8,0x6c,3,param_3);
      if (iVar4 < 1) {
        FUN_180150e00(param_1,"could not open PKCS12 file \'%s\'",param_3);
        FUN_18018d110(lVar8);
        return 0;
      }
    }
    else {
      lVar8 = FUN_18018e860(*param_4,*(undefined4 *)(param_4 + 1));
      if (lVar8 == 0) {
        uVar3 = FUN_1801a69b0();
        uVar9 = FUN_18017bb30(uVar3,local_158,0x100);
        FUN_180150e00(param_1,"BIO_new_mem_buf NULL, OpenSSL error %s",uVar9);
        return 0;
      }
    }
    lVar10 = FUN_1801a83d0(lVar8,0);
    FUN_18018d110(lVar8);
    if (lVar10 == 0) {
      if (local_198 != (undefined8 *)0x0) {
        param_3 = "(memory blob)";
      }
      FUN_180150e00(param_1,"error reading PKCS12 file \'%s\'",param_3);
      return 0;
    }
    _guard_check_icall();
    local_1c8 = &local_1b8;
    iVar4 = FUN_1801a7c10(lVar10,local_1a8,&local_1b0,&local_1a0);
    if (iVar4 == 0) {
      uVar3 = FUN_1801a69b0();
      uVar9 = FUN_18017bb30(uVar3,local_158,0x100);
      FUN_180150e00(param_1,"could not parse PKCS12 file, check password, OpenSSL error %s",uVar9);
      FUN_1801a79a0(lVar10);
      return 0;
    }
    FUN_1801a79a0(lVar10);
    iVar4 = FUN_18027aec0(param_2,local_1a0);
    if (iVar4 != 1) {
      uVar3 = FUN_1801a69b0();
      uVar9 = FUN_18017bb30(uVar3,local_158,0x100);
      FUN_180150e00(param_1,"could not load PKCS12 client certificate, OpenSSL error %s",uVar9);
LAB_180179fe7:
      FUN_18019deb0(local_1b0);
      FUN_1801a2830(local_1a0);
      FUN_1801958f0(local_1b8,FUN_1801a2830);
      return 0;
    }
    iVar4 = FUN_18027ad40(param_2,local_1b0);
    if (iVar4 != 1) {
      FUN_180150e00(param_1,"unable to use private key from PKCS12 file \'%s\'",param_3);
      goto LAB_180179fe7;
    }
    iVar4 = FUN_180272130(param_2);
    if (iVar4 == 0) {
      FUN_180150e00(param_1,
                    "private key from PKCS12 file \'%s\' does not match certificate in same file",
                    param_3);
      goto LAB_180179fe7;
    }
    if (local_1b8 != 0) {
      iVar4 = FUN_1801958b0();
      while (iVar4 != 0) {
        uVar9 = FUN_1801958c0(local_1b8);
        iVar4 = FUN_18027d5d0(param_2,uVar9);
        if (iVar4 == 0) {
          FUN_1801a2830(uVar9);
          pcVar12 = "cannot add certificate to client CA list";
LAB_180179fdf:
          FUN_180150e00(param_1,pcVar12);
          goto LAB_180179fe7;
        }
        iVar4 = FUN_1802721c0(param_2,0xe,0,uVar9);
        if (iVar4 == 0) {
          FUN_1801a2830(uVar9);
          pcVar12 = "cannot add certificate to certificate chain";
          goto LAB_180179fdf;
        }
        iVar4 = FUN_1801958b0(local_1b8);
      }
    }
    FUN_18019deb0(local_1b0);
    FUN_1801a2830(local_1a0);
    FUN_1801958f0(local_1b8,FUN_1801a2830);
    iVar4 = 1;
  }
  pcVar12 = local_168;
  iVar7 = 0;
  if ((local_168 == (char *)0x0) && (local_178 == (undefined8 *)0x0)) {
    puVar13 = local_198;
    pcVar12 = param_3;
  }
  else {
    iVar2 = FUN_18017a760(local_170);
    puVar13 = local_178;
  }
  if (iVar2 == 1) {
    if (iVar4 != 0) goto LAB_18017a57c;
  }
  else if (iVar2 != 2) {
    if (iVar2 == 0x2a) {
      if (*(longlong *)(param_1 + 0xe78) == 0) {
        if (((pcVar12 != (char *)0x0) && (iVar2 = FUN_1801403a0(pcVar12,"pkcs11:",7), iVar2 != 0))
           && (iVar2 = FUN_180177fc0(param_1,"pkcs11"), iVar2 != 0)) {
          return 0;
        }
        if (*(longlong *)(param_1 + 0xe78) == 0) {
          FUN_180150e00(param_1,"crypto engine not set, can\'t load private key");
          return 0;
        }
      }
      lVar8 = FUN_1801a9670("curl user interface");
      if (lVar8 == 0) {
        FUN_180150e00(param_1,"unable do create OpenSSL user-interface method");
        return 0;
      }
      uVar9 = FUN_1801aa370();
      uVar9 = FUN_1801a9860(uVar9);
      FUN_1801a98b0(lVar8,uVar9);
      uVar9 = FUN_1801aa370();
      uVar9 = FUN_1801a9850(uVar9);
      FUN_1801a9890(lVar8,uVar9);
      FUN_1801a98d0(lVar8,FUN_18017d1d0);
      FUN_1801a98f0(lVar8,FUN_18017d260);
      lVar10 = FUN_1801ac2a0(*(undefined8 *)(param_1 + 0xe78),pcVar12,lVar8,local_1a8);
      FUN_1801a9740(lVar8);
      if (lVar10 == 0) {
        FUN_180150e00(param_1,"failed to load private key from crypto engine");
        return 0;
      }
      iVar2 = FUN_18027ad40(param_2,lVar10);
      if (iVar2 != 1) {
        FUN_180150e00(param_1,"unable to set private key");
        FUN_18019deb0(lVar10);
        return 0;
      }
      FUN_18019deb0(lVar10);
    }
    else {
      if (iVar2 != 0x2b) {
        FUN_180150e00(param_1,"not supported file type for private key");
        return 0;
      }
      if (iVar4 == 0) {
        FUN_180150e00(param_1,"file type P12 for private key not supported");
        return 0;
      }
    }
    goto LAB_18017a57c;
  }
  if (puVar13 == (undefined8 *)0x0) {
    iVar7 = FUN_18027ad90(param_2,pcVar12,iVar2);
  }
  else {
    lVar8 = FUN_18018e860(*puVar13,*(undefined4 *)(puVar13 + 1));
    if (lVar8 == 0) goto LAB_18017a64a;
    if (iVar2 == 1) {
      lVar10 = FUN_1801a4630(lVar8,0,FUN_18017c4d0,local_1a8);
LAB_18017a607:
      if (lVar10 != 0) {
        iVar7 = FUN_18027ad40(param_2,lVar10);
        FUN_18019deb0(lVar10);
      }
    }
    else if (iVar2 == 2) {
      lVar10 = FUN_1801a1cd0(lVar8,0);
      goto LAB_18017a607;
    }
    FUN_18018d110(lVar8);
  }
  if (iVar7 == 1) {
LAB_18017a57c:
    lVar8 = FUN_180274210(param_2);
    if (lVar8 == 0) {
      FUN_180150e00(param_1,"unable to create an SSL structure");
      return 0;
    }
    local_1a0 = FUN_180273ce0(lVar8);
    if (local_1a0 != 0) {
      uVar9 = FUN_1801a34a0(local_1a0);
      uVar11 = FUN_180274040(lVar8);
      FUN_18019dd80(uVar9,uVar11);
      FUN_18019deb0(uVar9);
    }
    uVar9 = FUN_180274040(lVar8);
    iVar2 = FUN_18019a410(uVar9);
    if (iVar2 == 6) {
      uVar9 = FUN_18019e180(uVar9);
      bVar1 = FUN_18019efa0(uVar9);
      FUN_18019e9c0(uVar9);
      bVar1 = bVar1 & 1 ^ 1;
    }
    else {
      bVar1 = (byte)local_190;
    }
    FUN_180273650(lVar8);
    if ((bVar1 == 1) && (iVar2 = FUN_180272130(param_2), iVar2 == 0)) {
      FUN_180150e00(param_1,"Private key does not match the certificate public key");
      return 0;
    }
    return 1;
  }
LAB_18017a64a:
  puVar15 = &DAT_180306b6c;
  if (local_170 != (undefined *)0x0) {
    puVar15 = local_170;
  }
  pcVar14 = "(memory blob)";
  if (pcVar12 != (char *)0x0) {
    pcVar14 = pcVar12;
  }
  FUN_180150e00(param_1,"unable to set private key file: \'%s\' type %s",pcVar14,puVar15);
  return 0;
}



// ===== FUN_18017a760 @ 18017a760 (size 144)

undefined4 FUN_18017a760(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = FUN_180140330(param_1,&DAT_180306b6c);
    if (iVar1 == 0) {
      iVar1 = FUN_180140330(param_1,&DAT_180306b70);
      if (iVar1 != 0) {
        return 2;
      }
      iVar1 = FUN_180140330(param_1,&DAT_180306b74);
      if (iVar1 != 0) {
        return 0x2a;
      }
      iVar1 = FUN_180140330(param_1,&DAT_180306b78);
      uVar2 = 0xffffffff;
      if (iVar1 != 0) {
        uVar2 = 0x2b;
      }
      return uVar2;
    }
  }
  return 1;
}



// ===== FUN_18017a830 @ 18017a830 (size 125)

uint FUN_18017a830(undefined8 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_18018d300();
  if (param_2 == 2) {
    if (*(longlong *)(lVar2 + 8) == 0) {
      return 1;
    }
    bVar3 = *(char *)(*(longlong *)(lVar2 + 8) + 0x24) == '\0';
  }
  else {
    if (param_2 == 8) {
      uVar1 = FUN_18018d330(param_1);
      return uVar1;
    }
    if (param_2 == 9) {
      FUN_18018dc80(param_1,param_3);
      return 1;
    }
    if (param_2 == 0xb) {
      return 1;
    }
    bVar3 = param_2 == 0xc;
  }
  return (uint)bVar3;
}



// ===== FUN_18017a8c0 @ 18017a8c0 (size 249)

ulonglong FUN_18017a8c0(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int local_res10 [2];
  
  lVar4 = FUN_18018d300();
  puVar1 = *(undefined8 **)(*(longlong *)(lVar4 + 0x10) + 0x20);
  uVar2 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x28);
  local_res10[0] = 0x38;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_180150250(*(undefined8 *)(lVar4 + 8),uVar2,param_2,(longlong)param_3,local_res10);
    FUN_180150f80(uVar2,lVar4,"ossl_bio_cf_in_read(len=%d) -> %d, err=%d",param_3,uVar5 & 0xffffffff
                  ,local_res10[0]);
    FUN_18018cf60(param_1,0xf);
    *(int *)(puVar1 + 4) = local_res10[0];
    if (((longlong)uVar5 < 0) && (local_res10[0] == 0x51)) {
      FUN_18018dc60(param_1,9);
    }
    if (*(char *)((longlong)puVar1 + 0x24) == '\0') {
      iVar3 = FUN_180179880(lVar4,uVar2,*puVar1);
      if (iVar3 != 0) {
        *(int *)(puVar1 + 4) = iVar3;
        return 0xffffffff;
      }
      *(undefined1 *)((longlong)puVar1 + 0x24) = 1;
    }
    uVar5 = uVar5 & 0xffffffff;
  }
  return uVar5;
}



// ===== FUN_18017a9c0 @ 18017a9c0 (size 198)

ulonglong FUN_18017a9c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int local_res18 [2];
  
  lVar3 = FUN_18018d300();
  uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x28);
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x20);
  local_res18[0] = 0x37;
  uVar4 = FUN_180150270(*(undefined8 *)(lVar3 + 8),uVar1,param_2,(longlong)param_3,local_res18);
  FUN_180150f80(uVar1,lVar3,"ossl_bio_cf_out_write(len=%d) -> %d, err=%d",param_3,uVar4 & 0xffffffff
                ,local_res18[0]);
  FUN_18018cf60(param_1,0xf);
  *(int *)(lVar2 + 0x20) = local_res18[0];
  if (((longlong)uVar4 < 0) && (local_res18[0] == 0x51)) {
    FUN_18018dc60(param_1,10);
  }
  return uVar4 & 0xffffffff;
}



// ===== FUN_18017aa90 @ 18017aa90 (size 463)

int FUN_18017aa90(longlong param_1,undefined8 param_2,char param_3,undefined1 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  piVar1 = *(int **)(param_1 + 0x10);
  uVar4 = FUN_1801501b0();
  if (*piVar1 == 2) {
    *param_4 = 1;
    return 0;
  }
  if (piVar1[1] == 0) {
    lVar5 = FUN_180152610(param_2,0,1);
    if (lVar5 < 0) {
      FUN_180150e00(param_2,"SSL connection timeout");
      return 0x1c;
    }
    iVar2 = FUN_18017ac60(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  while( true ) {
    if (2 < piVar1[1] - 1U) {
      if (piVar1[1] == 4) {
        lVar5 = *(longlong *)(param_1 + 0x10);
        lVar6 = FUN_18014e400(param_1);
        if ((*(char *)(lVar6 + 0x79) == '\0') && (*(char *)(lVar6 + 0x7a) == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        iVar2 = FUN_18017cb20(param_1,param_2,uVar4);
        if (iVar2 != 0) {
          return iVar2;
        }
        *(undefined4 *)(lVar5 + 4) = 5;
      }
      if (piVar1[1] == 5) {
        *piVar1 = 2;
      }
      *param_4 = piVar1[1] == 5;
      piVar1[1] = 0;
      return 0;
    }
    lVar5 = FUN_180152610(param_2,0);
    if (lVar5 < 0) break;
    if ((param_3 == '\0') && (iVar2 = piVar1[1], iVar2 - 2U < 2)) {
      uVar8 = 0xffffffffffffffff;
      if (iVar2 == 3) {
        uVar8 = uVar4;
      }
      uVar7 = 0xffffffffffffffff;
      if (iVar2 == 2) {
        uVar7 = uVar4;
      }
      iVar2 = FUN_180161bd0(uVar7,0xffffffffffffffff,uVar8,lVar5);
      if (iVar2 < 0) {
        uVar3 = Ordinal_111();
        FUN_180150e00(param_2,"select/poll on SSL socket, errno: %d",uVar3);
        return 0x23;
      }
      if (iVar2 == 0) break;
    }
    iVar2 = FUN_18017b690(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((param_3 != '\0') && (piVar1[1] - 1U < 3)) {
      return 0;
    }
  }
  FUN_180150e00(param_2,"SSL connection timeout");
  return 0x1c;
}



// ===== FUN_18017ac60 @ 18017ac60 (size 2541)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18017ac60(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined1 auStack_618 [32];
  longlong local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  char local_5c8;
  longlong local_5c0;
  longlong local_5b8;
  undefined8 local_5b0;
  longlong local_5a8;
  longlong local_5a0;
  longlong local_598;
  undefined8 local_590;
  undefined1 local_588 [16];
  undefined1 local_578 [36];
  undefined4 local_554;
  undefined1 local_548 [256];
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_618;
  lVar14 = *(longlong *)(param_1 + 0x10);
  local_5b0 = 0;
  local_5a8 = lVar14;
  lVar10 = FUN_18014e400();
  local_598 = lVar10;
  lVar11 = FUN_18014e3e0(param_1,param_2);
  local_590 = *(undefined8 *)(lVar14 + 8);
  uVar1 = *(undefined1 *)(lVar10 + 0x78);
  plVar2 = *(longlong **)(lVar14 + 0x20);
  local_5a0 = *(longlong *)(lVar11 + 0x18);
  local_5b8 = *(longlong *)(lVar11 + 0x40);
  local_5c0 = *(longlong *)(lVar11 + 0x98);
  local_5c8 = *(char *)(lVar10 + 0x79);
  if ((*(longlong *)(param_2 + 0xd8) == 0) ||
     (*(char *)(*(longlong *)(param_2 + 0xd8) + 0x1b4) == '\0')) {
    iVar6 = FUN_1801941f0();
    if (iVar6 == 0) {
      FUN_180150e00(param_2,"Insufficient randomness");
      return 0x23;
    }
    if (*(longlong *)(param_2 + 0xd8) != 0) {
      *(undefined1 *)(*(longlong *)(param_2 + 0xd8) + 0x1b4) = 1;
    }
  }
  *(undefined4 *)(lVar11 + 0x80) = 1;
  switch(uVar1) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
    break;
  case 2:
    FUN_180150e00(param_2,"No SSLv2 support");
    return 4;
  case 3:
    FUN_180150e00(param_2,"No SSLv3 support");
    return 4;
  default:
    pcVar16 = "Unrecognized parameter passed via CURLOPT_SSLVERSION";
    goto LAB_18017b12e;
  }
  uVar12 = FUN_18027cf00();
  if (*plVar2 != 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20);
    if (plVar3[1] != 0) {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != '\0')) {
        FUN_1802747e0(plVar3[1],local_448,0x400);
        FUN_1801a64b0();
        iVar6 = FUN_180274e00(plVar3[1]);
        if (iVar6 == 1) {
          pcVar16 = "SSL shutdown finished";
LAB_18017ae74:
          FUN_180150f80(param_2,param_1,pcVar16);
        }
        else {
          uVar8 = FUN_1802747e0(plVar3[1],local_448,0x400);
          iVar6 = FUN_180273df0(plVar3[1],uVar8);
          if (iVar6 == 0) {
LAB_18017ae6d:
            pcVar16 = "SSL shutdown, EOF from server";
            goto LAB_18017ae74;
          }
          if (iVar6 == 2) {
            pcVar16 = "SSL shutdown sent";
            goto LAB_18017ae74;
          }
          if (iVar6 == 3) {
            pcVar16 = "SSL shutdown send blocked";
            goto LAB_18017ae74;
          }
          if (iVar6 == 6) goto LAB_18017ae6d;
          iVar7 = FUN_1801a69b0();
          if (iVar7 == 0) {
            uVar13 = FUN_180179af0(iVar6);
          }
          else {
            uVar13 = FUN_18017bb30(iVar7,local_448,0x400);
          }
          uVar8 = Ordinal_111();
          local_5f8 = CONCAT44(local_5f8._4_4_,uVar8);
          FUN_180150f80(param_2,param_1,"SSL shutdown, error: \'%s\', errno %d",uVar13);
        }
        FUN_1801a64b0();
        FUN_180274b00(plVar3[1]);
      }
      FUN_180273650(plVar3[1]);
      plVar3[1] = 0;
    }
    if (*plVar3 != 0) {
      FUN_1802725b0();
      *plVar3 = 0;
      *(undefined1 *)((longlong)plVar3 + 0x24) = 0;
    }
    if (plVar3[3] != 0) {
      FUN_180197f30();
      plVar3[3] = 0;
    }
  }
  lVar14 = FUN_1802727f0(uVar12);
  *plVar2 = lVar14;
  if (lVar14 == 0) {
    uVar8 = FUN_1801a6f40();
    uVar12 = FUN_18017bb30(uVar8,local_548,0x100);
    FUN_180150e00(param_2,"SSL: couldn\'t create a context: %s",uVar12);
    return 0x1b;
  }
  FUN_1802721c0(lVar14,0x21,0x10);
  if ((*(longlong *)(param_2 + 0x268) != 0) && (*(char *)(param_2 + 0xad7) != '\0')) {
    FUN_180272e80(*plVar2,FUN_18017bbd0);
    FUN_1802721c0(*plVar2,0x10,0,param_1);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 2:
  case 3:
    return 4;
  }
  lVar14 = *plVar2;
  uVar8 = 0x82024054;
  if (*(char *)(lVar11 + 0xc2) != '\0') {
    uVar8 = 0x82024854;
  }
  lVar10 = FUN_18014e400(param_1);
  uVar12 = 0;
  uVar17 = 0x302;
  cVar5 = *(char *)(lVar10 + 0x78);
  if ((cVar5 == '\x01') || (cVar5 == '\x04')) {
    uVar12 = 0x301;
LAB_18017afd4:
    if (cVar5 != '\0') goto LAB_18017afd9;
  }
  else {
    if (cVar5 == '\x05') {
      uVar12 = 0x302;
    }
    else if (cVar5 == '\x06') {
      uVar12 = 0x303;
    }
    else {
      if (cVar5 != '\a') goto LAB_18017afd4;
      uVar12 = 0x304;
    }
LAB_18017afd9:
    iVar6 = FUN_1802721c0(lVar14,0x7b,uVar12);
    if (iVar6 == 0) {
      return 0x23;
    }
  }
  iVar6 = *(int *)(lVar10 + 0x74);
  if (iVar6 < 0x50001) {
    if (iVar6 != 0x50000) {
      if (iVar6 == 0x40000) {
        uVar17 = 0x301;
      }
      else {
LAB_18017b018:
        uVar17 = 0;
      }
    }
  }
  else if (iVar6 == 0x60000) {
    uVar17 = 0x303;
  }
  else {
    if (iVar6 != 0x70000) goto LAB_18017b018;
    uVar17 = 0x304;
  }
  iVar6 = FUN_1802721c0(lVar14,0x7c,uVar17);
  if (iVar6 == 0) {
    return 0x23;
  }
  FUN_180272ea0(*plVar2,uVar8);
  lVar14 = local_5a8;
  if (*(longlong *)(local_5a8 + 0x18) != 0) {
    iVar6 = FUN_18014d720(local_578);
    if ((iVar6 != 0) || (iVar6 = FUN_180272c00(*plVar2,local_578,local_554), iVar6 != 0)) {
      pcVar16 = "Error setting ALPN";
      goto LAB_18017b12e;
    }
    FUN_18014d7e0(local_578,*(undefined8 *)(lVar14 + 0x18));
    FUN_180150ee0(param_2,"ALPN: curl offers %s",local_578);
  }
  if (((local_5a0 != 0) || (local_5b8 != 0)) || (local_5c0 != 0)) {
    local_5d8 = *(undefined8 *)(lVar11 + 0xb8);
    local_5e0 = *(undefined8 *)(lVar11 + 0xb0);
    local_5e8 = *(undefined8 *)(lVar11 + 0xa8);
    local_5f0 = *(undefined8 *)(lVar11 + 0xa0);
    local_5f8 = local_5c0;
    iVar6 = FUN_180179ba0(param_2,*plVar2);
    if (iVar6 == 0) {
      return 0x3a;
    }
  }
  lVar4 = local_598;
  lVar10 = *(longlong *)(local_598 + 0x20);
  if (lVar10 != 0) {
    iVar6 = FUN_180272db0(*plVar2,lVar10);
    if (iVar6 == 0) {
      FUN_180150e00(param_2,"failed setting cipher list: %s");
      return 0x3b;
    }
    FUN_180150ee0(param_2,"Cipher selection: %s",lVar10);
  }
  lVar10 = *(longlong *)(lVar4 + 0x28);
  if (lVar10 != 0) {
    iVar6 = FUN_180278470(*plVar2,lVar10);
    if (iVar6 == 0) {
      FUN_180150e00(param_2,"failed setting TLS 1.3 cipher suite: %s");
      return 0x3b;
    }
    FUN_180150ee0(param_2,"TLS 1.3 cipher selection: %s",lVar10);
  }
  FUN_180272eb0(*plVar2,1);
  lVar10 = *(longlong *)(lVar4 + 0x68);
  if ((lVar10 != 0) && (iVar6 = FUN_1802721c0(*plVar2,0x5c,0,lVar10), iVar6 == 0)) {
    FUN_180150e00(param_2,"failed setting curves list: \'%s\'",lVar10);
    return 0x3b;
  }
  if ((*(longlong *)(lVar11 + 0x58) != 0) && (cVar5 = FUN_180187180(param_2), cVar5 != '\0')) {
    uVar12 = *(undefined8 *)(lVar11 + 0x58);
    uVar13 = *(undefined8 *)(lVar11 + 0x60);
    FUN_180150ee0(param_2,"Using TLS-SRP username: %s",uVar12);
    iVar6 = FUN_18027c510(*plVar2,uVar12);
    if (iVar6 == 0) {
      FUN_180150e00(param_2,"Unable to set SRP user name");
      return 0x2b;
    }
    iVar6 = FUN_18027c4f0(*plVar2,uVar13);
    if (iVar6 == 0) {
      FUN_180150e00(param_2,"failed setting SRP password");
      return 0x2b;
    }
    if (*(longlong *)(lVar4 + 0x20) == 0) {
      FUN_180150ee0(param_2,"Setting cipher list SRP");
      iVar6 = FUN_180272db0(*plVar2,&DAT_1802fe12c);
      if (iVar6 == 0) {
        FUN_180150e00(param_2,"failed setting SRP cipher list");
        return 0x3b;
      }
    }
  }
  FUN_180272ed0(*plVar2,local_5c8 != '\0',0);
  cVar5 = FUN_18018bbf0();
  if (cVar5 != '\0') {
    FUN_180272e70(*plVar2,&LAB_18017b980);
  }
  FUN_1802721c0(*plVar2,0x2c,0x301);
  FUN_180276cf0(*plVar2,FUN_18017b990);
  if (*(longlong *)(param_2 + 0x5c0) != 0) {
    if (*(char *)((longlong)plVar2 + 0x24) == '\0') {
      uVar15 = FUN_180179880(param_1,param_2,*plVar2);
      if ((int)uVar15 != 0) {
        return uVar15;
      }
      *(undefined1 *)((longlong)plVar2 + 0x24) = 1;
    }
    FUN_18013c840(param_2,1);
    uVar9 = (**(code **)(param_2 + 0x5c0))(param_2,*plVar2,*(undefined8 *)(param_2 + 0x5c8));
    FUN_18013c840(param_2,0);
    if (uVar9 != 0) {
      FUN_180150e00(param_2,"error signaled by ssl ctx callback");
      return (ulonglong)uVar9;
    }
  }
  if (plVar2[1] != 0) {
    FUN_180273650();
  }
  lVar10 = FUN_180274210(*plVar2);
  plVar2[1] = lVar10;
  if (lVar10 == 0) {
    FUN_180150e00(param_2,"SSL: couldn\'t create a context (handle)");
    return 0x1b;
  }
  FUN_180274bf0(lVar10,0,param_1);
  if (*(char *)(lVar4 + 0x7b) != '\0') {
    FUN_180273190(plVar2[1],0x41,1);
  }
  FUN_180274b00(plVar2[1]);
  uVar12 = local_590;
  plVar2[2] = 0;
  iVar6 = inet_pton(2,local_590,local_588);
  if (((iVar6 != 0) || (iVar6 = inet_pton(0x17,uVar12,local_588), iVar6 != 0)) ||
     ((lVar10 = FUN_18014efb0(param_2,uVar12,0), lVar10 != 0 &&
      (iVar6 = FUN_180273190(plVar2[1],0x37,0,lVar10), iVar6 != 0)))) {
    FUN_180274bf0(plVar2[1],0,param_1);
    if (*(char *)(lVar11 + 0x7c) != '\0') {
      FUN_18014ef40(param_2);
      cVar5 = FUN_18014eae0(param_1,param_2,&local_5b0,0);
      if (cVar5 == '\0') {
        iVar6 = FUN_180277160(plVar2[1],local_5b0);
        if (iVar6 == 0) {
          FUN_18014ef70();
          uVar8 = FUN_1801a69b0();
          uVar12 = FUN_18017bb30(uVar8,local_548,0x100);
          FUN_180150e00(param_2,"SSL: SSL_set_session failed: %s",uVar12);
          return 0x23;
        }
        FUN_180150ee0(param_2,"SSL reusing session ID");
      }
      FUN_18014ef70(param_2);
    }
    lVar10 = FUN_180197f80(0x401,"OpenSSL CF BIO");
    if (lVar10 == 0) {
      plVar2[3] = 0;
    }
    else {
      FUN_180198090(lVar10,FUN_18017a9c0);
      FUN_180198070(lVar10,FUN_18017a8c0);
      FUN_180198050(lVar10,FUN_18017a830);
      FUN_180198040(lVar10,FUN_18017a7f0);
      FUN_180198060(lVar10,&LAB_18017a8b0);
      plVar2[3] = lVar10;
      lVar10 = FUN_18018d7c0(lVar10);
      if (lVar10 != 0) {
        FUN_18018dc50(lVar10,param_1);
        FUN_18018dca0(lVar10);
        FUN_1802749a0(plVar2[1],lVar10);
        FUN_1802749e0(plVar2[1],lVar10);
        *(undefined4 *)(lVar14 + 4) = 1;
        return 0;
      }
    }
    return 0x1b;
  }
  pcVar16 = "Failed set SNI";
LAB_18017b12e:
  FUN_180150e00(param_2,pcVar16);
  return 0x23;
}



// ===== FUN_18017b690 @ 18017b690 (size 747)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18017b690(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1a8 [2];
  undefined8 local_1a0;
  char local_198 [80];
  undefined4 local_148;
  char acStack_144 [4];
  char acStack_140 [4];
  char acStack_13c [4];
  char local_138 [8];
  char acStack_130 [8];
  char local_128 [224];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2 = *(undefined8 **)(lVar1 + 0x20);
  lVar6 = FUN_18014e3e0();
  FUN_1801a64b0();
  iVar3 = FUN_180273140(puVar2[1]);
  if (*(char *)((longlong)puVar2 + 0x24) == '\0') {
    uVar7 = FUN_180179880(param_1,param_2,*puVar2);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    *(undefined1 *)((longlong)puVar2 + 0x24) = 1;
  }
  if (iVar3 == 1) {
    *(undefined4 *)(lVar1 + 4) = 4;
    uVar7 = FUN_180273db0(puVar2[1]);
    uVar7 = FUN_180278420(uVar7);
    uVar8 = FUN_180274090(puVar2[1]);
    FUN_180150ee0(param_2,"SSL connection using %s / %s",uVar8,uVar7);
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      return 0;
    }
    FUN_1802739d0(puVar2[1],&local_1a0,local_1a8);
    uVar7 = FUN_18014d640(param_1,param_2,local_1a0,local_1a8[0]);
    return uVar7;
  }
  iVar3 = FUN_180273df0(puVar2[1]);
  if (iVar3 == 2) {
    *(undefined4 *)(lVar1 + 4) = 2;
    return 0;
  }
  if (iVar3 == 3) {
    *(undefined4 *)(lVar1 + 4) = 3;
    return 0;
  }
  if (iVar3 == 9) {
    *(undefined4 *)(lVar1 + 4) = 1;
    return 0;
  }
  if (*(int *)(puVar2 + 4) == 0x51) {
    return 0;
  }
  local_148 = local_148 & 0xffffff00;
  memset((void *)((longlong)&local_148 + 1),0,0xff);
  *(undefined4 *)(lVar1 + 4) = 1;
  uVar4 = FUN_1801a69b0();
  uVar10 = uVar4 & 0xfff;
  if ((uVar4 & 0xff000000) == 0x14000000) {
    if ((uVar10 == 0x86) || (uVar10 == 0x415)) {
      uVar7 = 0x3c;
      iVar3 = FUN_180274080(puVar2[1]);
      if (iVar3 == 0) {
        local_128[0] = s_SSL_certificate_verification_fai_180306718[0x20];
        local_128[1] = s_SSL_certificate_verification_fai_180306718[0x21];
        local_128[2] = s_SSL_certificate_verification_fai_180306718[0x22];
        local_128[3] = s_SSL_certificate_verification_fai_180306718[0x23];
        local_148._0_1_ = s_SSL_certificate_verification_fai_180306718[0];
        local_148._1_1_ = s_SSL_certificate_verification_fai_180306718[1];
        local_148._2_1_ = s_SSL_certificate_verification_fai_180306718[2];
        local_148._3_1_ = s_SSL_certificate_verification_fai_180306718[3];
        acStack_144[0] = s_SSL_certificate_verification_fai_180306718[4];
        acStack_144[1] = s_SSL_certificate_verification_fai_180306718[5];
        acStack_144[2] = s_SSL_certificate_verification_fai_180306718[6];
        acStack_144[3] = s_SSL_certificate_verification_fai_180306718[7];
        acStack_140[0] = s_SSL_certificate_verification_fai_180306718[8];
        acStack_140[1] = s_SSL_certificate_verification_fai_180306718[9];
        acStack_140[2] = s_SSL_certificate_verification_fai_180306718[10];
        acStack_140[3] = s_SSL_certificate_verification_fai_180306718[0xb];
        acStack_13c[0] = s_SSL_certificate_verification_fai_180306718[0xc];
        acStack_13c[1] = s_SSL_certificate_verification_fai_180306718[0xd];
        acStack_13c[2] = s_SSL_certificate_verification_fai_180306718[0xe];
        acStack_13c[3] = s_SSL_certificate_verification_fai_180306718[0xf];
        local_138[0] = s_SSL_certificate_verification_fai_180306718[0x10];
        local_138[1] = s_SSL_certificate_verification_fai_180306718[0x11];
        local_138[2] = s_SSL_certificate_verification_fai_180306718[0x12];
        local_138[3] = s_SSL_certificate_verification_fai_180306718[0x13];
        local_138[4] = s_SSL_certificate_verification_fai_180306718[0x14];
        local_138[5] = s_SSL_certificate_verification_fai_180306718[0x15];
        local_138[6] = s_SSL_certificate_verification_fai_180306718[0x16];
        local_138[7] = s_SSL_certificate_verification_fai_180306718[0x17];
        acStack_130[0] = s_SSL_certificate_verification_fai_180306718[0x18];
        acStack_130[1] = s_SSL_certificate_verification_fai_180306718[0x19];
        acStack_130[2] = s_SSL_certificate_verification_fai_180306718[0x1a];
        acStack_130[3] = s_SSL_certificate_verification_fai_180306718[0x1b];
        acStack_130[4] = s_SSL_certificate_verification_fai_180306718[0x1c];
        acStack_130[5] = s_SSL_certificate_verification_fai_180306718[0x1d];
        acStack_130[6] = s_SSL_certificate_verification_fai_180306718[0x1e];
        acStack_130[7] = s_SSL_certificate_verification_fai_180306718[0x1f];
      }
      else {
        *(int *)(lVar6 + 0x80) = iVar3;
        uVar8 = FUN_1801a1670(iVar3);
        FUN_1801450d0(&local_148,0x100,"SSL certificate problem: %s",uVar8);
      }
      goto LAB_18017b7c9;
    }
    if (uVar10 == 0x45c) {
      uVar7 = 0x62;
      FUN_18017bb30(uVar4,&local_148,0x100);
      goto LAB_18017b7c9;
    }
  }
  uVar7 = 0x23;
  FUN_18017bb30(uVar4,&local_148,0x100);
  if (uVar4 == 0) {
    local_198[0] = '\0';
    local_198[1] = '\0';
    local_198[2] = '\0';
    local_198[3] = '\0';
    local_198[4] = '\0';
    local_198[5] = '\0';
    local_198[6] = '\0';
    local_198[7] = '\0';
    local_198[8] = '\0';
    local_198[9] = '\0';
    local_198[10] = '\0';
    local_198[0xb] = '\0';
    local_198[0xc] = '\0';
    local_198[0xd] = '\0';
    local_198[0xe] = '\0';
    local_198[0xf] = '\0';
    local_198[0x10] = '\0';
    local_198[0x41] = '\0';
    local_198[0x42] = '\0';
    local_198[0x43] = '\0';
    local_198[0x44] = '\0';
    local_198[0x45] = '\0';
    local_198[0x46] = '\0';
    local_198[0x47] = '\0';
    local_198[0x48] = '\0';
    local_198[0x11] = '\0';
    local_198[0x12] = '\0';
    local_198[0x13] = '\0';
    local_198[0x14] = '\0';
    local_198[0x15] = '\0';
    local_198[0x16] = '\0';
    local_198[0x17] = '\0';
    local_198[0x18] = '\0';
    local_198[0x19] = '\0';
    local_198[0x1a] = '\0';
    local_198[0x1b] = '\0';
    local_198[0x1c] = '\0';
    local_198[0x1d] = '\0';
    local_198[0x1e] = '\0';
    local_198[0x1f] = '\0';
    local_198[0x20] = '\0';
    local_198[0x49] = '\0';
    local_198[0x4a] = '\0';
    local_198[0x4b] = '\0';
    local_198[0x4c] = '\0';
    local_198[0x21] = '\0';
    local_198[0x22] = '\0';
    local_198[0x23] = '\0';
    local_198[0x24] = '\0';
    local_198[0x25] = '\0';
    local_198[0x26] = '\0';
    local_198[0x27] = '\0';
    local_198[0x28] = '\0';
    local_198[0x29] = '\0';
    local_198[0x2a] = '\0';
    local_198[0x2b] = '\0';
    local_198[0x2c] = '\0';
    local_198[0x2d] = '\0';
    local_198[0x2e] = '\0';
    local_198[0x2f] = '\0';
    local_198[0x30] = '\0';
    local_198[0x4d] = '\0';
    local_198[0x4e] = '\0';
    local_198[0x31] = '\0';
    local_198[0x32] = '\0';
    local_198[0x33] = '\0';
    local_198[0x34] = '\0';
    local_198[0x35] = '\0';
    local_198[0x36] = '\0';
    local_198[0x37] = '\0';
    local_198[0x38] = '\0';
    local_198[0x39] = '\0';
    local_198[0x3a] = '\0';
    local_198[0x3b] = '\0';
    local_198[0x3c] = '\0';
    local_198[0x3d] = '\0';
    local_198[0x3e] = '\0';
    local_198[0x3f] = '\0';
    local_198[0x40] = '\0';
    local_198[0x4f] = 0;
    iVar5 = Ordinal_111();
    if ((iVar5 != 0) && (iVar3 == 5)) {
      FUN_180138690(iVar5,local_198,0x50);
    }
    if (local_198[0] == '\0') {
      pcVar9 = (char *)FUN_180179af0(iVar3);
    }
    else {
      pcVar9 = local_198;
    }
    local_1b8 = *(undefined4 *)(lVar1 + 0x40);
    FUN_180150e00(param_2,"OpenSSL SSL_connect: %s in connection to %s:%d ",pcVar9,
                  *(undefined8 *)(lVar1 + 8));
    return 0x23;
  }
LAB_18017b7c9:
  FUN_180150e00(param_2,&DAT_1802fa0cc,&local_148);
  return uVar7;
}



// ===== FUN_18017b990 @ 18017b990 (size 314)

undefined8 FUN_18017b990(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char local_res18 [8];
  longlong local_res20;
  
  lVar3 = FUN_180273fa0(param_1,0);
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x10) == 0)) {
    lVar5 = 0;
    if (lVar3 == 0) {
      return 0;
    }
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x28);
  }
  if (lVar5 == 0) {
    return 0;
  }
  cVar1 = FUN_18014e450(lVar3);
  lVar4 = FUN_18014e3e0(lVar3,lVar5);
  if (*(char *)(lVar4 + 0x7c) == '\0') {
    return 0;
  }
  local_res18[0] = '\0';
  local_res20 = 0;
  FUN_18014ef40(lVar5);
  if ((cVar1 == '\0') && (cVar1 = FUN_18014eae0(lVar3,lVar5,&local_res20,0), cVar1 == '\0')) {
    if (local_res20 == param_2) goto LAB_18017ba9f;
    FUN_180150ee0(lVar5,"old SSL session ID is stale, removing");
    FUN_18014e8a0(lVar5,local_res20);
  }
  iVar2 = FUN_18014e130(lVar3,lVar5,param_2,0,local_res18);
  if (iVar2 == 0) {
    if (local_res18[0] != '\0') {
      FUN_18014ef70(lVar5);
      return 1;
    }
  }
  else {
    FUN_180150e00(lVar5,"failed to store ssl session");
  }
LAB_18017ba9f:
  FUN_18014ef70(lVar5);
  return 0;
}



// ===== FUN_18017bad0 @ 18017bad0 (size 92)

undefined8 FUN_18017bad0(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0xd8) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x1b4) == '\0')) {
    iVar1 = FUN_1801941f0();
    if (iVar1 == 0) {
      FUN_180150e00(param_1,"Insufficient randomness");
      return 0x23;
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x1b4) = 1;
    }
  }
  return 0;
}



// ===== FUN_18017bb30 @ 18017bb30 (size 148)

char * FUN_18017bb30(int param_1,char *param_2,size_t param_3)

{
  ulonglong uVar1;
  char *_Source;
  
  *param_2 = '\0';
  uVar1 = FUN_180177ef0(param_2,param_3);
  if (uVar1 < param_3 - 2) {
    param_2 = param_2 + uVar1;
    param_3 = param_3 + (-2 - uVar1);
    param_2[0] = ':';
    param_2[1] = ' ';
    param_2 = param_2 + 2;
    *param_2 = '\0';
  }
  FUN_1801a65e0(param_1,param_2,param_3);
  if (*param_2 == '\0') {
    _Source = "No error";
    if (param_1 != 0) {
      _Source = "Unknown error";
    }
    strncpy(param_2,_Source,param_3);
    param_2[param_3 - 1] = '\0';
  }
  return param_2;
}



// ===== FUN_18017bbd0 @ 18017bbd0 (size 886)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017bbd0(uint param_1,int param_2,int param_3,char *param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_4b8 [32];
  undefined *local_498;
  undefined **local_490;
  char *local_488;
  int local_480;
  char local_470 [40];
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_4b8;
  if (param_7 == 0) {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_7 + 0x10) + 0x28);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x268) == 0) {
    return;
  }
  if (1 < param_1) {
    return;
  }
  if (param_2 < 0x302) {
    if (param_2 == 0x301) {
      pcVar5 = "TLSv1.0";
    }
    else {
      if (param_2 == 0) goto LAB_18017befa;
      if (param_2 == 2) {
        pcVar5 = "SSLv2";
      }
      else {
        if (param_2 != 0x300) goto LAB_18017bc8b;
        pcVar5 = "SSLv3";
      }
    }
  }
  else if (param_2 == 0x302) {
    pcVar5 = "TLSv1.1";
  }
  else if (param_2 == 0x303) {
    pcVar5 = "TLSv1.2";
  }
  else if (param_2 == 0x304) {
    pcVar5 = "TLSv1.3";
  }
  else {
LAB_18017bc8b:
    FUN_1801450d0(local_470,0x20,&DAT_1803063d8,param_2);
    pcVar5 = local_470;
    if (param_2 == 0) goto LAB_18017befa;
  }
  if ((param_3 == 0x100) || (param_3 == 0x101)) goto LAB_18017befa;
  if ((param_2 >> 8 == 3) && (param_3 != 0)) {
    if (param_3 == 0x14) {
      iVar4 = (int)*param_4;
      pcVar3 = "TLS change cipher";
      local_488 = "Change cipher spec";
    }
    else {
      if (param_3 == 0x15) {
        iVar4 = (int)*param_4;
        pcVar3 = "TLS alert";
        goto LAB_18017bd92;
      }
      if (param_3 == 0x16) {
        iVar4 = (int)*param_4;
        pcVar3 = "TLS handshake";
      }
      else if (param_3 == 0x17) {
        iVar4 = (int)*param_4;
        pcVar3 = "TLS app data";
      }
      else {
        if (param_3 != 0x100) {
          pcVar3 = "TLS Unknown";
          goto LAB_18017bd74;
        }
        iVar4 = (int)*param_4;
        pcVar3 = "TLS header";
      }
LAB_18017bdb5:
      switch(iVar4) {
      case 0:
        local_488 = "Hello request";
        break;
      case 1:
        local_488 = "Client hello";
        break;
      case 2:
        local_488 = "Server hello";
        break;
      default:
        goto switchD_18017bddd_caseD_3;
      case 4:
        local_488 = "Newsession Ticket";
        break;
      case 5:
        local_488 = "End of early data";
        break;
      case 8:
        local_488 = "Encrypted Extensions";
        break;
      case 0xb:
        local_488 = "Certificate";
        break;
      case 0xc:
        local_488 = "Server key exchange";
        break;
      case 0xd:
        local_488 = "Request CERT";
        break;
      case 0xe:
        local_488 = "Server finished";
        break;
      case 0xf:
        local_488 = "CERT verify";
        break;
      case 0x10:
        local_488 = "Client key exchange";
        break;
      case 0x14:
        local_488 = "Finished";
        break;
      case 0x16:
        local_488 = "Certificate Status";
        break;
      case 0x17:
        local_488 = "Supplemental data";
        break;
      case 0x18:
        local_488 = "Key update";
        break;
      case 0x43:
        local_488 = "Next protocol";
        break;
      case 0xfe:
        local_488 = "Message hash";
      }
    }
  }
  else {
    pcVar3 = (char *)&PTR_1802ead18;
LAB_18017bd74:
    if (param_3 == 0x14) {
      iVar4 = (int)*param_4;
      local_488 = "Change cipher spec";
    }
    else {
      iVar4 = (int)*param_4;
      if (param_3 == 0x15) {
LAB_18017bd92:
        iVar4 = (int)param_4[1] + iVar4 * 0x100;
        local_488 = (char *)FUN_18027cff0(iVar4);
      }
      else {
        if (param_2 >> 8 == 3) goto LAB_18017bdb5;
switchD_18017bddd_caseD_3:
        local_488 = "Unknown";
      }
    }
  }
  local_498 = &DAT_1803063f8;
  if (param_1 != 0) {
    local_498 = &DAT_1803063f4;
  }
  local_490 = (undefined **)pcVar3;
  local_480 = iVar4;
  uVar2 = FUN_1801450d0(local_448,0x400,"%s (%s), %s, %s (%d):\n",pcVar5);
  if ((-1 < (int)uVar2) && (uVar2 < 0x400)) {
    FUN_180150d10(lVar1,0,local_448,(longlong)(int)uVar2);
  }
LAB_18017befa:
  FUN_180150d10(lVar1,(param_1 == 1) + '\x05',param_4,param_5);
  return;
}



// ===== FUN_18017c0a0 @ 18017c0a0 (size 1071)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18017c0a0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  size_t sVar7;
  longlong lVar8;
  undefined8 uVar9;
  size_t _Size;
  uint unaff_EBX;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_a8 [32];
  char local_88;
  char local_87;
  char local_86;
  uint local_84;
  void *local_80;
  undefined8 local_78;
  size_t local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  uVar10 = unaff_EBX & 0xffffff00;
  lVar11 = -1;
  local_78 = param_5;
  iVar4 = 2;
  local_70 = 0;
  local_86 = '\0';
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (*(char *)(param_4 + lVar12) != '\0');
  local_84 = uVar10;
  local_60 = param_3;
  local_58 = param_4;
  if ((*(char *)(param_2 + 0x2f3) == '\0') || (iVar2 = inet_pton(0x17,param_4,local_50), iVar2 == 0)
     ) {
    iVar2 = inet_pton(2,param_4,local_50);
    if (iVar2 != 0) {
      local_70 = 4;
      goto LAB_18017c153;
    }
  }
  else {
    local_70 = 0x10;
LAB_18017c153:
    iVar4 = 7;
  }
  local_68 = FUN_1801a3d30(local_60,0x55,0);
  if (local_68 != 0) {
    cVar1 = '\0';
    local_88 = '\0';
    local_87 = '\0';
    iVar2 = FUN_1801958b0(local_68);
    lVar8 = local_68;
    local_80 = (void *)CONCAT44(local_80._4_4_,iVar2);
    iVar13 = 0;
    if (0 < iVar2) {
      do {
        if (cVar1 != '\0') break;
        piVar5 = (int *)FUN_180195ae0(lVar8,iVar13);
        iVar2 = *piVar5;
        if (iVar2 == 2) {
          local_86 = '\x01';
        }
        else {
          local_84 = uVar10 & 0xff;
          if (iVar2 == 7) {
            local_84 = 1;
          }
          uVar10 = local_84;
        }
        if (iVar2 == iVar4) {
          pvVar6 = (void *)FUN_18013ff80(*(undefined8 *)(piVar5 + 2));
          iVar2 = FUN_18019a410(*(undefined8 *)(piVar5 + 2));
          _Size = (size_t)iVar2;
          if (iVar4 != 2) {
            if (((iVar4 == 7) && (_Size == local_70)) &&
               (iVar2 = memcmp(pvVar6,local_50,_Size), iVar2 == 0)) {
              local_87 = '\x01';
              FUN_180150ee0(param_1," subjectAltName: host \"%s\" matched cert\'s IP address!",
                            local_78);
            }
LAB_18017c238:
            uVar10 = local_84;
            goto LAB_18017c23c;
          }
          sVar7 = 0xffffffffffffffff;
          do {
            sVar7 = sVar7 + 1;
          } while (*(char *)((longlong)pvVar6 + sVar7) != '\0');
          if ((_Size != sVar7) ||
             (cVar1 = FUN_18018bd60(pvVar6,_Size,local_58,lVar12), cVar1 == '\0'))
          goto LAB_18017c238;
          FUN_180150ee0(param_1," subjectAltName: host \"%s\" matched cert\'s \"%s\"",local_78,
                        pvVar6);
          local_88 = '\x01';
          uVar10 = local_84;
        }
        else {
LAB_18017c23c:
        }
        iVar13 = iVar13 + 1;
        cVar1 = local_88;
      } while (iVar13 < (int)local_80);
    }
    FUN_1801a48f0(local_68);
    if (cVar1 != '\0') {
      return 0;
    }
    if (local_87 != '\0') {
      return 0;
    }
    if ((local_86 != '\0') || ((char)uVar10 != '\0')) {
      FUN_180150ee0(param_1," subjectAltName does not match %s",local_78);
      FUN_180150e00(param_1,
                    "SSL: no alternative certificate subject name matches target host name \'%s\'",
                    local_78);
      return 0x3c;
    }
    param_5 = local_78;
  }
  iVar2 = 0;
  iVar4 = 0;
  local_80 = (void *)0x0;
  lVar8 = FUN_1801a34d0(local_60);
  if ((lVar8 != 0) && (iVar13 = FUN_1801a3b40(lVar8,0xd,0xffffffff), -1 < iVar13)) {
    do {
      iVar3 = iVar13;
      iVar13 = FUN_1801a3b40(lVar8,0xd,iVar3);
    } while (-1 < iVar13);
    uVar9 = FUN_1801a3af0(lVar8,iVar3);
    lVar8 = FUN_1801a3780(uVar9);
    if (lVar8 != 0) {
      iVar4 = FUN_18019a5f0(lVar8);
      if (iVar4 == 0xc) {
        iVar4 = FUN_18019a410(lVar8);
        if (-1 < iVar4) {
          local_80 = (void *)FUN_180195dc0((longlong)(iVar4 + 1),
                                           "C:\\Users\\lny\\Desktop\\svn\\curl-8.4.0\\lib\\vtls\\openssl.c"
                                           ,0x8f5);
          if (local_80 == (void *)0x0) {
            iVar2 = 0x1b;
          }
          else {
            pvVar6 = (void *)FUN_18013ff80(lVar8);
            memcpy(local_80,pvVar6,(longlong)iVar4);
            *(undefined1 *)((longlong)iVar4 + (longlong)local_80) = 0;
          }
        }
      }
      else {
        iVar4 = FUN_18019b460(&local_80,lVar8);
      }
      if (local_80 != (void *)0x0) {
        do {
          lVar11 = lVar11 + 1;
        } while (*(char *)((longlong)local_80 + lVar11) != '\0');
        iVar13 = FUN_180140180(lVar11);
        if (iVar13 != iVar4) {
          FUN_180150e00(param_1,"SSL: illegal cert name field");
          iVar2 = 0x3c;
          goto LAB_18017c48b;
        }
      }
      if (iVar2 != 0) goto LAB_18017c48b;
    }
  }
  if (local_80 == (void *)0x0) {
    FUN_180150e00(param_1,"SSL: unable to obtain common name from peer certificate");
    iVar2 = 0x3c;
  }
  else {
    cVar1 = FUN_18018bd60(local_80,(longlong)iVar4,local_58,lVar12);
    if (cVar1 == '\0') {
      FUN_180150e00(param_1,
                    "SSL: certificate subject name \'%s\' does not match target host name \'%s\'",
                    local_80,param_5);
      iVar2 = 0x3c;
    }
    else {
      FUN_180150ee0(param_1," common name: %s (matched)",local_80);
    }
  }
LAB_18017c48b:
  if (local_80 != (void *)0x0) {
    FUN_180195e10(local_80,"C:\\Users\\lny\\Desktop\\svn\\curl-8.4.0\\lib\\vtls\\openssl.c",0x91c);
  }
  return iVar2;
}



// ===== FUN_18017c4d0 @ 18017c4d0 (size 113)

int FUN_18017c4d0(void *param_1,int param_2,int param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)((longlong)param_4 + lVar2) != '\0');
    iVar1 = FUN_180140180();
    if (iVar1 < param_2) {
      memcpy(param_1,param_4,(longlong)(iVar1 + 1));
      return iVar1;
    }
  }
  return 0;
}



// ===== FUN_18017c550 @ 18017c550 (size 1487)

undefined4 FUN_18017c550(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  LPSTR *ppCVar2;
  bool bVar3;
  LONG LVar4;
  BOOL BVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  HCERTSTORE pvVar10;
  PCCERT_CONTEXT pCertContext;
  PCERT_ENHKEY_USAGE pUsage;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  undefined1 *puVar23;
  PCERT_ENHKEY_USAGE p_Var24;
  byte local_res20 [8];
  uint local_84;
  uint local_80;
  _FILETIME local_78;
  HCERTSTORE local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  longlong local_50;
  longlong local_48;
  BYTE *local_40;
  
  puVar9 = (undefined8 *)FUN_18014e400();
  local_48 = FUN_18014e3e0(param_1);
  local_68 = (undefined8 *)puVar9[9];
  if (local_68 == (undefined8 *)0x0) {
    local_60 = (undefined1 *)puVar9[1];
  }
  else {
    local_60 = (undefined1 *)0x0;
  }
  local_58 = (undefined1 *)*puVar9;
  cVar1 = *(char *)((longlong)puVar9 + 0x79);
  local_50 = *(longlong *)(local_48 + 0x38);
  bVar3 = false;
  if (param_3 == 0) {
    return 0x1b;
  }
  if (cVar1 == '\0') goto LAB_18017ca5e;
  bVar20 = false;
  if (*(char *)(local_48 + 0xc6) != '\0') {
    pvVar10 = CertOpenSystemStoreA(0,"ROOT");
    local_70 = pvVar10;
    bVar20 = false;
    if (pvVar10 != (HCERTSTORE)0x0) {
      uVar21 = 0;
      local_80 = 0;
      p_Var24 = (PCERT_ENHKEY_USAGE)0x0;
      pCertContext = CertEnumCertificatesInStore(pvVar10,(PCCERT_CONTEXT)0x0);
      if (pCertContext != (PCCERT_CONTEXT)0x0) {
        do {
          local_40 = pCertContext->pbCertEncoded;
          if (local_40 != (BYTE *)0x0) {
            GetSystemTimeAsFileTime(&local_78);
            LVar4 = CompareFileTime(&pCertContext->pCertInfo->NotBefore,&local_78);
            if (LVar4 < 1) {
              LVar4 = CompareFileTime(&local_78,&pCertContext->pCertInfo->NotAfter);
              if (LVar4 < 1) {
                BVar5 = CertGetIntendedKeyUsage
                                  (pCertContext->dwCertEncodingType,pCertContext->pCertInfo,
                                   local_res20,2);
                if (BVar5 == 0) {
                  DVar6 = GetLastError();
                  if (DVar6 == 0) goto LAB_18017c6d2;
                }
                else if ((local_res20[0] & 4) != 0) {
LAB_18017c6d2:
                  BVar5 = CertGetEnhancedKeyUsage(pCertContext,0,(PCERT_ENHKEY_USAGE)0x0,&local_84);
                  if (BVar5 != 0) {
                    pUsage = p_Var24;
                    if ((local_84 != 0) && (uVar21 < local_84)) {
                      pUsage = (PCERT_ENHKEY_USAGE)
                               (*(code *)PTR_realloc_1803bd540)(p_Var24,local_84);
                      if (pUsage == (PCERT_ENHKEY_USAGE)0x0) {
                        FUN_180150e00(param_2,"SSL: Out of memory allocating for OID list");
                        (*(code *)PTR_free_1803bd538)(p_Var24);
                        CertFreeCertificateContext(pCertContext);
                        CertCloseStore(pvVar10,0);
                        return 0x1b;
                      }
                      local_80 = local_84;
                    }
                    BVar5 = CertGetEnhancedKeyUsage(pCertContext,0,pUsage,&local_84);
                    p_Var24 = pUsage;
                    if (BVar5 != 0) {
                      uVar21 = pUsage->cUsageIdentifier;
                      if (uVar21 == 0) {
                        DVar6 = GetLastError();
                        if (DVar6 == 0x80092004) {
LAB_18017c786:
                          lVar11 = FUN_1801a28e0(0,&local_40,pCertContext->cbCertEncoded);
                          if (lVar11 != 0) {
                            iVar7 = FUN_1801a0710(param_3,lVar11);
                            if (iVar7 == 1) {
                              bVar3 = true;
                            }
                            FUN_1801a2830(lVar11);
                          }
                        }
                      }
                      else {
                        uVar17 = 0;
                        if (uVar21 != 0) {
                          ppCVar2 = pUsage->rgpszUsageIdentifier;
                          do {
                            iVar7 = strcmp("1.3.6.1.5.5.7.3.1",ppCVar2[uVar17]);
                            pvVar10 = local_70;
                            if (iVar7 == 0) goto LAB_18017c786;
                            uVar16 = (int)uVar17 + 1;
                            uVar17 = (ulonglong)uVar16;
                          } while (uVar16 < uVar21);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          pCertContext = CertEnumCertificatesInStore(pvVar10,pCertContext);
          if (pCertContext == (PCCERT_CONTEXT)0x0) break;
          uVar21 = local_80;
        } while( true );
      }
      (*(code *)PTR_free_1803bd538)(p_Var24);
      CertFreeCertificateContext((PCCERT_CONTEXT)0x0);
      CertCloseStore(pvVar10,0);
      bVar20 = bVar3;
      if (bVar3) {
        FUN_180150ee0(param_2);
        goto LAB_18017c875;
      }
    }
    FUN_180150ee0(param_2);
  }
LAB_18017c875:
  bVar3 = false;
  if (local_68 != (undefined8 *)0x0) {
    iVar7 = 0;
    if (0x7fffffff < (ulonglong)local_68[1]) {
LAB_18017c8d4:
      FUN_180150e00(param_2,"error importing CA certificate blob");
      return 0x4d;
    }
    lVar11 = FUN_18018e860(*local_68);
    if (lVar11 == 0) {
      FUN_180150e00(param_2,"error importing CA certificate blob");
      return 0x1b;
    }
    lVar12 = FUN_1801a3f50(lVar11,0,0,0);
    if (lVar12 == 0) {
      FUN_18018d110(lVar11);
      goto LAB_18017c8d4;
    }
    iVar22 = 0;
    iVar8 = FUN_1801958b0(lVar12);
    if (0 < iVar8) {
      do {
        plVar13 = (longlong *)FUN_180195ae0(lVar12,iVar22);
        if (*plVar13 != 0) {
          iVar8 = FUN_1801a0710(param_3);
          if (iVar8 != 0) {
            iVar7 = iVar7 + 1;
            goto LAB_18017c923;
          }
LAB_18017c94a:
          iVar7 = 0;
          break;
        }
LAB_18017c923:
        if (plVar13[1] != 0) {
          iVar8 = FUN_1801a0760(param_3);
          if (iVar8 == 0) goto LAB_18017c94a;
          iVar7 = iVar7 + 1;
        }
        iVar22 = iVar22 + 1;
        iVar8 = FUN_1801958b0(lVar12);
      } while (iVar22 < iVar8);
    }
    FUN_1801958f0(lVar12,FUN_1801a2a10);
    FUN_18018d110(lVar11);
    if (iVar7 < 1) {
      FUN_180150e00(param_2,"error importing CA certificate blob");
      return 0x4d;
    }
    bVar3 = true;
    FUN_180150ee0(param_2,"successfully imported CA certificate blob");
  }
  puVar18 = local_58;
  puVar19 = local_60;
  if ((local_60 != (undefined1 *)0x0) || (local_58 != (undefined1 *)0x0)) {
    iVar7 = FUN_1801a1510(param_3,local_60,local_58);
    if (iVar7 == 0) {
      if ((!bVar20) && (!bVar3)) {
        puVar23 = &DAT_18030041c;
        if (puVar18 != (undefined1 *)0x0) {
          puVar23 = puVar18;
        }
        puVar18 = &DAT_18030041c;
        if (puVar19 != (undefined1 *)0x0) {
          puVar18 = puVar19;
        }
        FUN_180150e00(param_2,"error setting certificate verify locations:  CAfile: %s CApath: %s",
                      puVar18,puVar23);
        return 0x4d;
      }
      FUN_180150ee0(param_2,"error setting certificate verify locations, continuing anyway");
    }
    puVar23 = &DAT_18030041c;
    if (puVar19 != (undefined1 *)0x0) {
      puVar23 = puVar19;
    }
    FUN_180150ee0(param_2," CAfile: %s",puVar23);
    puVar19 = &DAT_18030041c;
    if (puVar18 != (undefined1 *)0x0) {
      puVar19 = puVar18;
    }
    FUN_180150ee0(param_2," CApath: %s",puVar19);
  }
LAB_18017ca5e:
  lVar12 = local_48;
  lVar11 = local_50;
  if (local_50 != 0) {
    uVar14 = FUN_1801a1020();
    lVar15 = FUN_1801a07b0(param_3,uVar14);
    if ((lVar15 == 0) || (iVar7 = FUN_1801a1360(lVar15,lVar11,1), iVar7 == 0)) {
      FUN_180150e00(param_2,"error loading CRL file: %s",lVar11);
      return 0x52;
    }
    FUN_180150ee0(param_2,"successfully loaded CRL file:");
    FUN_1801a0ba0(param_3,0xc);
    FUN_180150ee0(param_2,"  CRLfile: %s",lVar11);
  }
  if (((cVar1 != '\0') && (FUN_1801a0ba0(param_3,0x8000), *(char *)(lVar12 + 0xc4) == '\0')) &&
     (lVar11 == 0)) {
    FUN_1801a0ba0(param_3,0x80000);
  }
  return 0;
}



// ===== FUN_18017cb20 @ 18017cb20 (size 1706)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18017cb20(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  char *_Source;
  int iVar14;
  size_t _Count;
  char *pcVar15;
  undefined1 auStack_9a8 [32];
  undefined8 local_988;
  longlong local_978;
  longlong local_970;
  undefined8 local_968;
  longlong local_960;
  longlong local_958;
  char local_948 [256];
  char local_848 [2048];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_9a8;
  local_968 = *(undefined8 *)(param_1 + 0x18);
  lVar11 = *(longlong *)(param_1 + 0x10);
  local_958 = lVar11;
  local_960 = FUN_18014e3e0();
  lVar7 = FUN_18014e400(param_1);
  local_948[0] = '\0';
  memset(local_948 + 1,0,0xff);
  uVar8 = FUN_18018e930();
  local_978 = FUN_18018d7c0(uVar8);
  lVar1 = *(longlong *)(lVar11 + 0x20);
  if (local_978 == 0) {
    _Count = 0x100;
    pcVar15 = local_948;
    iVar3 = FUN_1801a69b0();
    local_948[0] = '\0';
    uVar9 = FUN_180177ef0(local_948,0x100);
    if (uVar9 < 0xfe) {
      _Count = 0xfe - uVar9;
      (local_948 + uVar9)[0] = ':';
      (local_948 + uVar9)[1] = ' ';
      pcVar15 = local_948 + uVar9 + 2;
      *pcVar15 = '\0';
    }
    FUN_1801a65e0(iVar3,pcVar15,_Count);
    if (*pcVar15 == '\0') {
      _Source = "No error";
      if (iVar3 != 0) {
        _Source = "Unknown error";
      }
      strncpy(pcVar15,_Source,_Count);
      pcVar15[_Count - 1] = '\0';
    }
    FUN_180150e00(param_2,"BIO_new return NULL, OpenSSL error %s",pcVar15);
    return 0x1b;
  }
  if (*(char *)(param_2 + 0x5f8) != '\0') {
    FUN_180178c50(param_2,*(undefined8 *)(lVar1 + 8));
  }
  lVar10 = FUN_180273ff0(*(undefined8 *)(lVar1 + 8));
  *(longlong *)(lVar1 + 0x10) = lVar10;
  if (lVar10 == 0) {
    FUN_18018d110(local_978);
    if (param_3 == '\0') {
      return 0;
    }
    FUN_180150e00(param_2,"SSL: couldn\'t get peer certificate");
    return 0x3c;
  }
  cVar2 = FUN_18014e450(param_1);
  pcVar15 = "Server";
  if (cVar2 != '\0') {
    pcVar15 = "Proxy";
  }
  FUN_180150ee0(param_2,"%s certificate:",pcVar15);
  uVar8 = FUN_1801a34d0(*(undefined8 *)(lVar1 + 0x10));
  iVar3 = FUN_18017d600(uVar8,local_848,0x800);
  pcVar15 = local_848;
  if (iVar3 != 0) {
    pcVar15 = "[NONE]";
  }
  FUN_180150ee0(param_2," subject: %s",pcVar15);
  uVar8 = FUN_18018d300(*(undefined8 *)(lVar1 + 0x10));
  FUN_18019c360(local_978,uVar8);
  uVar4 = FUN_18018cf90(local_978,3,0,&local_970);
  FUN_180150ee0(param_2," start date: %.*s",uVar4,local_970);
  FUN_18018cf90(local_978,1,0);
  uVar8 = FUN_18019f410(*(undefined8 *)(lVar1 + 0x10));
  FUN_18019c360(local_978,uVar8);
  uVar4 = FUN_18018cf90(local_978,3,0,&local_970);
  FUN_180150ee0(param_2," expire date: %.*s",uVar4,local_970);
  FUN_18018cf90(local_978,1,0);
  FUN_18018d110(local_978);
  if (*(char *)(lVar7 + 0x7a) != '\0') {
    local_988 = *(undefined8 *)(lVar11 + 0x10);
    iVar3 = FUN_18017c0a0(param_2,local_968,*(undefined8 *)(lVar1 + 0x10),
                          *(undefined8 *)(lVar11 + 8));
    if (iVar3 != 0) goto LAB_18017d089;
  }
  iVar14 = 0;
  uVar8 = FUN_1801a3490(*(undefined8 *)(lVar1 + 0x10));
  iVar3 = FUN_18017d600(uVar8,local_848,0x800);
  if (iVar3 == 0) {
    FUN_180150ee0(param_2," issuer: %s",local_848);
    if (*(longlong *)(lVar7 + 0x10) != 0) {
      puVar13 = *(undefined8 **)(lVar7 + 0x50);
      if (puVar13 != (undefined8 *)0x0) goto LAB_18017ce71;
      uVar8 = FUN_1801968f0();
      lVar11 = FUN_18018d7c0(uVar8);
      if (lVar11 == 0) {
        uVar4 = FUN_1801a69b0();
        uVar8 = FUN_18017bb30(uVar4,local_948,0x100);
        pcVar15 = "BIO_new return NULL, OpenSSL error %s";
        goto LAB_18017cedb;
      }
      iVar3 = FUN_18018cf90(lVar11,0x6c,3,*(undefined8 *)(lVar7 + 0x10));
      if (iVar3 < 1) {
        if (param_3 != '\0') {
          FUN_180150e00(param_2,"SSL: Unable to open issuer cert (%s)",*(undefined8 *)(lVar7 + 0x10)
                       );
        }
        FUN_18018d110(lVar11);
        goto LAB_18017cfb4;
      }
LAB_18017cf3c:
      local_978 = FUN_1801a4470(lVar11,0,0,0);
      if (local_978 == 0) {
        if (param_3 != '\0') {
          FUN_180150e00(param_2,"SSL: Unable to read issuer cert (%s)",*(undefined8 *)(lVar7 + 0x10)
                       );
        }
        FUN_18018d110(lVar11);
        lVar11 = 0;
      }
      else {
        iVar3 = FUN_1801a5520(local_978,*(undefined8 *)(lVar1 + 0x10));
        if (iVar3 == 0) {
          FUN_180150ee0(param_2," SSL certificate issuer check ok (%s)",
                        *(undefined8 *)(lVar7 + 0x10));
          FUN_18018d110(lVar11);
          FUN_1801a2830(local_978);
          goto LAB_18017cff4;
        }
        if (param_3 != '\0') {
          FUN_180150e00(param_2,"SSL: Certificate issuer check failed (%s)",
                        *(undefined8 *)(lVar7 + 0x10));
        }
        FUN_18018d110(lVar11);
        lVar11 = local_978;
      }
      FUN_1801a2830(lVar11);
LAB_18017cfb4:
      FUN_1801a2830(*(undefined8 *)(lVar1 + 0x10));
      *(undefined8 *)(lVar1 + 0x10) = 0;
      return 0x53;
    }
    if (*(longlong *)(lVar7 + 0x50) != 0) {
      puVar13 = *(undefined8 **)(lVar7 + 0x50);
LAB_18017ce71:
      lVar11 = FUN_18018e860(*puVar13,*(undefined4 *)(puVar13 + 1));
      if (lVar11 == 0) {
        uVar4 = FUN_1801a69b0();
        uVar8 = FUN_18017bb30(uVar4,local_948,0x100);
        pcVar15 = "BIO_new_mem_buf NULL, OpenSSL error %s";
LAB_18017cedb:
        FUN_180150e00(param_2,pcVar15,uVar8);
        FUN_1801a2830(*(undefined8 *)(lVar1 + 0x10));
        *(undefined8 *)(lVar1 + 0x10) = 0;
        return 0x1b;
      }
      goto LAB_18017cf3c;
    }
LAB_18017cff4:
    iVar3 = FUN_180274080(*(undefined8 *)(lVar1 + 8));
    *(int *)(local_960 + 0x80) = iVar3;
    if (iVar3 == 0) {
      FUN_180150ee0(param_2," SSL certificate verify ok.");
    }
    else if (*(char *)(lVar7 + 0x79) == '\0') {
      uVar8 = FUN_1801a1670(iVar3);
      FUN_180150ee0(param_2," SSL certificate verify result: %s (%ld), continuing anyway.",uVar8,
                    iVar3);
    }
    else {
      if (param_3 == '\0') goto LAB_18017ce2f;
      uVar8 = FUN_1801a1670(iVar3);
      FUN_180150e00(param_2,"SSL certificate verify result: %s (%ld)",uVar8,iVar3);
      iVar14 = 0x3c;
    }
  }
  else {
    if (param_3 != '\0') {
      FUN_180150e00(param_2,"SSL: couldn\'t get X509-issuer name");
    }
LAB_18017ce2f:
    iVar14 = 0x3c;
  }
  if ((*(char *)(lVar7 + 0x7b) != '\0') &&
     (iVar3 = FUN_18017d2d0(param_1,param_2), iVar14 = 0, iVar3 != 0)) {
LAB_18017d089:
    FUN_1801a2830(*(undefined8 *)(lVar1 + 0x10));
    *(undefined8 *)(lVar1 + 0x10) = 0;
    return iVar3;
  }
  iVar3 = 0;
  if (param_3 != '\0') {
    iVar3 = iVar14;
  }
  cVar2 = FUN_18014e450(param_1);
  if (cVar2 == '\0') {
    lVar11 = *(longlong *)(param_2 + 0x830);
  }
  else {
    lVar11 = *(longlong *)(param_2 + 0x838);
  }
  local_970 = lVar11;
  if ((iVar3 == 0) && (lVar11 != 0)) {
    lVar7 = *(longlong *)(lVar1 + 0x10);
    iVar3 = 0x5a;
    iVar14 = 0x5a;
    if (lVar7 != 0) {
      uVar8 = FUN_1801a2b30(lVar7);
      iVar5 = FUN_1801a2510(uVar8,0);
      lVar10 = (longlong)iVar5;
      iVar3 = 0x5a;
      if ((0 < iVar5) &&
         (lVar12 = (*(code *)PTR_malloc_1803bd530)(lVar10), local_978 = lVar12, lVar12 != 0)) {
        uVar8 = FUN_1801a2b30(lVar7);
        iVar6 = FUN_1801a2510(uVar8,&local_978);
        iVar3 = iVar14;
        if ((iVar5 == iVar6) && ((local_978 != 0 && (local_978 - lVar12 == lVar10)))) {
          iVar3 = FUN_18014dd40(param_2,lVar11,lVar12,lVar10);
        }
        (*(code *)PTR_free_1803bd538)(lVar12);
      }
      if (iVar3 == 0) goto LAB_18017d181;
    }
    FUN_180150e00(param_2,"SSL: public key does not match pinned public key");
  }
LAB_18017d181:
  FUN_1801a2830(*(undefined8 *)(lVar1 + 0x10));
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(local_958 + 4) = 5;
  return iVar3;
}



// ===== FUN_18017d1d0 @ 18017d1d0 (size 139)

undefined8 FUN_18017d1d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_18019a410(param_2);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    lVar2 = FUN_18007e060(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_1801a37a0(param_2);
      if ((uVar3 & 2) != 0) {
        FUN_1801a9bc0(param_1,param_2,lVar2);
        return 1;
      }
    }
  }
  uVar4 = FUN_1801aa370();
  UNRECOVERED_JUMPTABLE = (code *)FUN_1801a9870(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00018017d258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return uVar4;
}



// ===== FUN_18017d260 @ 18017d260 (size 107)

undefined8 FUN_18017d260(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_18019a410(param_2);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    lVar2 = FUN_18007e060(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_1801a37a0(param_2);
      if ((uVar3 & 2) != 0) {
        return 1;
      }
    }
  }
  uVar4 = FUN_1801aa370();
  UNRECOVERED_JUMPTABLE = (code *)FUN_1801a9880(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00018017d2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return uVar4;
}



// ===== FUN_18017d2d0 @ 18017d2d0 (size 812)

undefined4 FUN_18017d2d0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  int local_res8 [2];
  undefined4 local_res18 [2];
  longlong local_res20;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  
  uVar12 = 0;
  lVar4 = 0;
  lVar10 = 0;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x20);
  uVar2 = FUN_180273190(puVar1[1],0x46,0,&local_res20);
  if (local_res20 == 0) {
    FUN_180150e00(param_2,"No OCSP response received");
    uVar12 = 0x5b;
    goto LAB_18017d5e5;
  }
  local_58 = local_res20;
  lVar4 = FUN_1801a8bf0(0,&local_58,uVar2);
  if (lVar4 == 0) {
    FUN_180150e00(param_2,"Invalid OCSP response");
    uVar12 = 0x5b;
    goto LAB_18017d5e5;
  }
  iVar3 = FUN_1801a8a40(lVar4);
  if (iVar3 != 0) {
    uVar5 = FUN_1801a8c90(iVar3);
    FUN_180150e00(param_2,"Invalid OCSP response status: %s (%d)",uVar5,iVar3);
    uVar12 = 0x5b;
    goto LAB_18017d5e5;
  }
  lVar6 = FUN_1801a89b0(lVar4);
  if (lVar6 == 0) {
    FUN_180150e00(param_2,"Invalid OCSP response");
    uVar12 = 0x5b;
    goto LAB_18017d5e5;
  }
  lVar7 = FUN_180273fd0(puVar1[1]);
  if (lVar7 == 0) {
    FUN_180150e00(param_2,"Could not get peer certificate chain");
    uVar12 = 0x5b;
  }
  else {
    uVar5 = FUN_1801afd00(*puVar1);
    iVar3 = FUN_1801a8cc0(lVar6,lVar7,uVar5,0);
    if (iVar3 < 1) {
      FUN_180150e00(param_2,"OCSP response verification failed");
      uVar12 = 0x5b;
    }
    else {
      lVar8 = FUN_180273ff0(puVar1[1]);
      if (lVar8 == 0) {
        FUN_180150e00(param_2,"Error getting peer certificate");
        uVar12 = 0x5b;
      }
      else {
        iVar11 = 0;
        iVar3 = FUN_1801958b0(lVar7);
        if (iVar3 < 1) {
LAB_18017d4ae:
          FUN_1801a2830(lVar8);
          if (lVar10 != 0) {
            iVar3 = FUN_1801a8860(lVar6,lVar10,local_res8,local_res18,local_40,&local_48,&local_50);
            FUN_1801a8b30(lVar10);
            if (iVar3 == 1) {
              iVar3 = FUN_1801a86b0(local_48,local_50,300,0xffffffff);
              if (iVar3 == 0) {
                FUN_180150e00(param_2,"OCSP response has expired");
                uVar12 = 0x5b;
              }
              else {
                uVar5 = FUN_1801a8c30(local_res8[0]);
                FUN_180150ee0(param_2,"SSL certificate status: %s (%d)",uVar5,local_res8[0]);
                if ((local_res8[0] != 0) && (uVar12 = 0x5b, local_res8[0] == 1)) {
                  uVar5 = FUN_1801a8c60(local_res18[0]);
                  FUN_180150e00(param_2,"SSL certificate revocation reason: %s (%d)",uVar5,
                                local_res18[0]);
                }
              }
            }
            else {
              FUN_180150e00(param_2,"Could not find certificate ID in OCSP response");
              uVar12 = 0x5b;
            }
            goto LAB_18017d5cb;
          }
        }
        else {
          do {
            uVar5 = FUN_180195ae0(lVar7,iVar11);
            iVar3 = FUN_1801a5520(uVar5,lVar8);
            if (iVar3 == 0) {
              uVar9 = FUN_18019db60();
              lVar10 = FUN_1801a8410(uVar9,lVar8,uVar5);
              goto LAB_18017d4ae;
            }
            iVar11 = iVar11 + 1;
            iVar3 = FUN_1801958b0(lVar7);
          } while (iVar11 < iVar3);
          FUN_1801a2830(lVar8);
        }
        FUN_180150e00(param_2,"Error computing OCSP ID");
        uVar12 = 0x5b;
      }
    }
  }
LAB_18017d5cb:
  FUN_1801a8b00(lVar6);
LAB_18017d5e5:
  FUN_1801a8ba0(lVar4);
  return uVar12;
}



// ===== FUN_18017d600 @ 18017d600 (size 180)

bool FUN_18017d600(undefined8 param_1,void *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong _Size;
  ulonglong *local_res20;
  
  uVar2 = FUN_18018e930();
  lVar3 = FUN_18018d7c0(uVar2);
  if (lVar3 == 0) {
    return true;
  }
  iVar1 = FUN_18019b4f0(lVar3,param_1,0,0x30000);
  FUN_18018cf90(lVar3,0x73,0,&local_res20);
  _Size = *local_res20;
  if (param_3 <= *local_res20) {
    _Size = param_3 - 1;
  }
  memcpy(param_2,(void *)local_res20[1],_Size);
  *(undefined1 *)(_Size + (longlong)param_2) = 0;
  FUN_18018d110(lVar3);
  return iVar1 == 0;
}



// ===== FUN_18017d6c0 @ 18017d6c0 (size 670)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18017d6c0(byte *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_168 [32];
  byte local_148 [4];
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  byte local_138;
  undefined1 uStack_137;
  undefined1 uStack_136;
  undefined1 uStack_135;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  byte local_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  byte local_120;
  undefined1 uStack_11f;
  byte local_11e;
  undefined8 local_11d;
  undefined8 uStack_115;
  undefined8 local_10d;
  undefined8 uStack_105;
  undefined8 local_fd;
  undefined8 uStack_f5;
  undefined4 local_ed;
  undefined4 uStack_e9;
  undefined4 uStack_e5;
  undefined4 uStack_e1;
  undefined8 local_dd;
  undefined8 uStack_d5;
  byte local_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  byte local_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  byte local_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  byte local_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  byte local_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  byte local_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  byte local_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  byte local_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  byte local_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_168;
  uVar9 = 0;
  *param_2 = 0;
  *param_3 = 0;
  uVar8 = 0;
  uVar7 = 0xffffffffffffffff;
  do {
    uVar12 = uVar7;
    uVar7 = uVar12 + 1;
  } while (param_1[uVar7] != 0);
  if ((uVar7 == 0) || ((uVar7 & 3) != 0)) {
LAB_18017d954:
    uVar2 = 0x3d;
  }
  else {
    pbVar5 = param_1 + uVar12;
    bVar1 = *pbVar5;
    while (bVar1 == 0x3d) {
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar5 + -1;
      if (2 < uVar8) goto LAB_18017d954;
      bVar1 = *pbVar5;
    }
    uVar7 = uVar7 >> 2;
    lVar13 = uVar7 * 3 - uVar8;
    puVar6 = (undefined1 *)(*(code *)PTR_malloc_1803bd530)(lVar13 + 1);
    if (puVar6 == (undefined1 *)0x0) {
      uVar2 = 0x1b;
    }
    else {
      local_128 = DAT_180307690;
      uStack_127 = UNK_180307691;
      uStack_126 = UNK_180307692;
      uStack_125 = UNK_180307693;
      uStack_124 = UNK_180307694;
      uStack_123 = UNK_180307695;
      uStack_122 = UNK_180307696;
      uStack_121 = UNK_180307697;
      uVar12 = 0;
      local_120 = DAT_180307690;
      uStack_11f = UNK_180307691;
      local_11e = DAT_180307690;
      local_4d = DAT_180307690;
      uStack_4c = UNK_180307691;
      uStack_4b = UNK_180307692;
      uStack_4a = UNK_180307693;
      local_49 = DAT_180307690;
      local_148[0] = DAT_180307690;
      local_148[1] = UNK_180307691;
      local_148[2] = UNK_180307692;
      local_148[3] = UNK_180307693;
      uStack_144 = UNK_180307694;
      uStack_143 = UNK_180307695;
      uStack_142 = UNK_180307696;
      uStack_141 = UNK_180307697;
      uStack_140 = UNK_180307698;
      uStack_13f = UNK_180307699;
      uStack_13e = UNK_18030769a;
      uStack_13d = UNK_18030769b;
      uStack_13c = UNK_18030769c;
      uStack_13b = UNK_18030769d;
      uStack_13a = UNK_18030769e;
      uStack_139 = UNK_18030769f;
      local_138 = DAT_180307690;
      uStack_137 = UNK_180307691;
      uStack_136 = UNK_180307692;
      uStack_135 = UNK_180307693;
      uStack_134 = UNK_180307694;
      uStack_133 = UNK_180307695;
      uStack_132 = UNK_180307696;
      uStack_131 = UNK_180307697;
      uStack_130 = UNK_180307698;
      uStack_12f = UNK_180307699;
      uStack_12e = UNK_18030769a;
      uStack_12d = UNK_18030769b;
      uStack_12c = UNK_18030769c;
      uStack_12b = UNK_18030769d;
      uStack_12a = UNK_18030769e;
      uStack_129 = UNK_18030769f;
      local_cd = DAT_180307690;
      uStack_cc = UNK_180307691;
      uStack_cb = UNK_180307692;
      uStack_ca = UNK_180307693;
      uStack_c9 = UNK_180307694;
      uStack_c8 = UNK_180307695;
      uStack_c7 = UNK_180307696;
      uStack_c6 = UNK_180307697;
      uStack_c5 = UNK_180307698;
      uStack_c4 = UNK_180307699;
      uStack_c3 = UNK_18030769a;
      uStack_c2 = UNK_18030769b;
      uStack_c1 = UNK_18030769c;
      uStack_c0 = UNK_18030769d;
      uStack_bf = UNK_18030769e;
      uStack_be = UNK_18030769f;
      local_bd = DAT_180307690;
      uStack_bc = UNK_180307691;
      uStack_bb = UNK_180307692;
      uStack_ba = UNK_180307693;
      uStack_b9 = UNK_180307694;
      uStack_b8 = UNK_180307695;
      uStack_b7 = UNK_180307696;
      uStack_b6 = UNK_180307697;
      uStack_b5 = UNK_180307698;
      uStack_b4 = UNK_180307699;
      uStack_b3 = UNK_18030769a;
      uStack_b2 = UNK_18030769b;
      uStack_b1 = UNK_18030769c;
      uStack_b0 = UNK_18030769d;
      uStack_af = UNK_18030769e;
      uStack_ae = UNK_18030769f;
      local_ad = DAT_180307690;
      uStack_ac = UNK_180307691;
      uStack_ab = UNK_180307692;
      uStack_aa = UNK_180307693;
      uStack_a9 = UNK_180307694;
      uStack_a8 = UNK_180307695;
      uStack_a7 = UNK_180307696;
      uStack_a6 = UNK_180307697;
      uStack_a5 = UNK_180307698;
      uStack_a4 = UNK_180307699;
      uStack_a3 = UNK_18030769a;
      uStack_a2 = UNK_18030769b;
      uStack_a1 = UNK_18030769c;
      uStack_a0 = UNK_18030769d;
      uStack_9f = UNK_18030769e;
      uStack_9e = UNK_18030769f;
      local_9d = DAT_180307690;
      uStack_9c = UNK_180307691;
      uStack_9b = UNK_180307692;
      uStack_9a = UNK_180307693;
      uStack_99 = UNK_180307694;
      uStack_98 = UNK_180307695;
      uStack_97 = UNK_180307696;
      uStack_96 = UNK_180307697;
      uStack_95 = UNK_180307698;
      uStack_94 = UNK_180307699;
      uStack_93 = UNK_18030769a;
      uStack_92 = UNK_18030769b;
      uStack_91 = UNK_18030769c;
      uStack_90 = UNK_18030769d;
      uStack_8f = UNK_18030769e;
      uStack_8e = UNK_18030769f;
      local_8d = DAT_180307690;
      uStack_8c = UNK_180307691;
      uStack_8b = UNK_180307692;
      uStack_8a = UNK_180307693;
      uStack_89 = UNK_180307694;
      uStack_88 = UNK_180307695;
      uStack_87 = UNK_180307696;
      uStack_86 = UNK_180307697;
      uStack_85 = UNK_180307698;
      uStack_84 = UNK_180307699;
      uStack_83 = UNK_18030769a;
      uStack_82 = UNK_18030769b;
      uStack_81 = UNK_18030769c;
      uStack_80 = UNK_18030769d;
      uStack_7f = UNK_18030769e;
      uStack_7e = UNK_18030769f;
      local_7d = DAT_180307690;
      uStack_7c = UNK_180307691;
      uStack_7b = UNK_180307692;
      uStack_7a = UNK_180307693;
      uStack_79 = UNK_180307694;
      uStack_78 = UNK_180307695;
      uStack_77 = UNK_180307696;
      uStack_76 = UNK_180307697;
      uStack_75 = UNK_180307698;
      uStack_74 = UNK_180307699;
      uStack_73 = UNK_18030769a;
      uStack_72 = UNK_18030769b;
      uStack_71 = UNK_18030769c;
      uStack_70 = UNK_18030769d;
      uStack_6f = UNK_18030769e;
      uStack_6e = UNK_18030769f;
      local_6d = DAT_180307690;
      uStack_6c = UNK_180307691;
      uStack_6b = UNK_180307692;
      uStack_6a = UNK_180307693;
      uStack_69 = UNK_180307694;
      uStack_68 = UNK_180307695;
      uStack_67 = UNK_180307696;
      uStack_66 = UNK_180307697;
      uStack_65 = UNK_180307698;
      uStack_64 = UNK_180307699;
      uStack_63 = UNK_18030769a;
      uStack_62 = UNK_18030769b;
      uStack_61 = UNK_18030769c;
      uStack_60 = UNK_18030769d;
      uStack_5f = UNK_18030769e;
      uStack_5e = UNK_18030769f;
      local_5d = DAT_180307690;
      uStack_5c = UNK_180307691;
      uStack_5b = UNK_180307692;
      uStack_5a = UNK_180307693;
      uStack_59 = UNK_180307694;
      uStack_58 = UNK_180307695;
      uStack_57 = UNK_180307696;
      uStack_56 = UNK_180307697;
      uStack_55 = UNK_180307698;
      uStack_54 = UNK_180307699;
      uStack_53 = UNK_18030769a;
      uStack_52 = UNK_18030769b;
      uStack_51 = UNK_18030769c;
      uStack_50 = UNK_18030769d;
      uStack_4f = UNK_18030769e;
      uStack_4e = UNK_18030769f;
      local_11d = _DAT_180307640;
      uStack_115 = _UNK_180307648;
      local_fd = _DAT_180307660;
      uStack_f5 = _UNK_180307668;
      local_10d = _DAT_180307650;
      uStack_105 = _UNK_180307658;
      local_dd = _DAT_180307680;
      uStack_d5 = _UNK_180307688;
      local_ed = _DAT_180307670;
      uStack_e9 = _UNK_180307674;
      uStack_e5 = _UNK_180307678;
      uStack_e1 = _UNK_18030767c;
      puVar11 = puVar6;
      if (uVar7 != (uVar8 != 0)) {
        do {
          uVar4 = 0;
          iVar10 = 0;
          do {
            bVar1 = *param_1;
            param_1 = param_1 + 1;
            if (local_148[bVar1] == 0xff) goto LAB_18017d8f6;
            uVar3 = uVar4 << 6;
            iVar10 = iVar10 + 1;
            uVar4 = uVar3 | local_148[bVar1];
          } while (iVar10 < 4);
          puVar11[2] = (char)uVar4;
          uVar12 = uVar12 + 1;
          puVar11[1] = (char)(uVar3 >> 8);
          *puVar11 = (char)(uVar3 >> 0x10);
          puVar11 = puVar11 + 3;
        } while (uVar12 < uVar7 - (uVar8 != 0));
      }
      if (uVar8 != 0) {
        uVar7 = 0;
        iVar10 = 0;
        do {
          bVar1 = *param_1;
          param_1 = param_1 + 1;
          if (bVar1 == 0x3d) {
            uVar9 = uVar9 << 6;
            uVar7 = uVar7 + 1;
            if (uVar8 < uVar7) goto LAB_18017d8f6;
          }
          else {
            if (local_148[bVar1] == 0xff) {
LAB_18017d8f6:
              (*(code *)PTR_free_1803bd538)(puVar6);
              return 0x3d;
            }
            uVar9 = uVar9 << 6 | (uint)local_148[bVar1];
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 4);
        if (uVar8 == 1) {
          puVar11[1] = (char)(uVar9 >> 8);
        }
        *puVar11 = (char)(uVar9 >> 0x10);
        puVar11 = puVar11 + (3 - uVar8);
      }
      *puVar11 = 0;
      uVar2 = 0;
      *param_2 = puVar6;
      *param_3 = lVar13;
    }
  }
  return uVar2;
}



// ===== FUN_18017d990 @ 18017d990 (size 422)

undefined4
FUN_18017d990(longlong param_1,byte *param_2,ulonglong param_3,undefined8 *param_4,longlong *param_5
             )

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  
  *param_4 = 0;
  *param_5 = 0;
  if (param_3 == 0) {
    param_3 = 0xffffffffffffffff;
    do {
      param_3 = param_3 + 1;
    } while (param_2[param_3] != 0);
  }
  pcVar4 = (char *)(*(code *)PTR_malloc_1803bd530)(((param_3 + 2) / 3) * 4 + 1);
  if (pcVar4 == (char *)0x0) {
    uVar3 = 0x1b;
  }
  else {
    pcVar5 = pcVar4;
    if (2 < param_3) {
      uVar7 = param_3 / 3;
      param_3 = param_3 % 3;
      do {
        *pcVar5 = *(char *)((ulonglong)(*param_2 >> 2) + param_1);
        pcVar5[1] = *(char *)(((ulonglong)(*param_2 & 3) << 4 | (ulonglong)(param_2[1] >> 4)) +
                             param_1);
        pcVar5[2] = *(char *)(((ulonglong)(param_2[1] & 0xf) << 2 | (ulonglong)(param_2[2] >> 6)) +
                             param_1);
        pbVar1 = param_2 + 2;
        param_2 = param_2 + 3;
        pcVar5[3] = *(char *)((ulonglong)(*pbVar1 & 0x3f) + param_1);
        pcVar5 = pcVar5 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    pcVar6 = pcVar5;
    if (param_3 != 0) {
      pcVar2 = pcVar5 + 2;
      *pcVar5 = *(char *)((ulonglong)(*param_2 >> 2) + param_1);
      uVar7 = (ulonglong)(*param_2 & 3) * 0x10;
      if (param_3 == 1) {
        pcVar5[1] = *(char *)(uVar7 + param_1);
        pcVar6 = pcVar2;
        if (*(char *)(param_1 + 0x40) != '\0') {
          *pcVar2 = *(char *)(param_1 + 0x40);
          pcVar6 = pcVar5 + 4;
          pcVar5[3] = *(char *)(param_1 + 0x40);
        }
      }
      else {
        pcVar5[1] = *(char *)((param_2[1] >> 4 | uVar7) + param_1);
        pcVar6 = pcVar5 + 3;
        *pcVar2 = *(char *)(param_1 + (ulonglong)(param_2[1] & 0xf) * 4);
        if (*(char *)(param_1 + 0x40) != '\0') {
          *pcVar6 = *(char *)(param_1 + 0x40);
          pcVar6 = pcVar5 + 4;
        }
      }
    }
    *pcVar6 = '\0';
    *param_4 = pcVar4;
    uVar3 = 0;
    *param_5 = (longlong)pcVar6 - (longlong)pcVar4;
  }
  return uVar3;
}



// ===== FUN_18017db40 @ 18017db40 (size 578)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18017db40(longlong param_1,longlong param_2,char param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar6 = 7;
  if (*(char *)(param_1 + 0x24) != '\0') {
LAB_18017dd55:
    *param_4 = 1;
    return 0;
  }
  if (param_3 != '\0') {
    return 1;
  }
  *param_4 = 0;
  if (*(longlong *)(lVar1 + 0x98) == -1) {
    iVar6 = FUN_18017f750();
    if (iVar6 != 0) goto LAB_18017dc05;
    if (*(char *)(param_1 + 0x24) != '\0') goto LAB_18017dd55;
    lVar2 = *(longlong *)(param_1 + 0x10);
    if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x300) == '\0') &&
       (iVar7 = Ordinal_4(*(undefined8 *)(lVar2 + 0x98),lVar2 + 0x18,*(undefined4 *)(lVar2 + 0x14)),
       iVar7 != -1)) goto LAB_18017dc8e;
    uVar8 = Ordinal_111();
    iVar6 = FUN_18017ff00(param_2,lVar1 + 0xe0,uVar8);
  }
  else {
LAB_18017dc8e:
    uVar9 = FUN_180161bd0(0xffffffffffffffff,0xffffffffffffffff,*(undefined8 *)(lVar1 + 0x98),0);
    if (uVar9 == 0) {
      FUN_180150f80(param_2,param_1,"not connected yet");
      return 0;
    }
    if ((uVar9 == 2) || (*(char *)(*(longlong *)(param_1 + 0x18) + 0x300) != '\0')) {
      cVar5 = FUN_180180030(*(undefined8 *)(lVar1 + 0x98),lVar1 + 0x178);
      if (cVar5 != '\0') {
        puVar10 = (undefined4 *)FUN_180148b70(local_148);
        uVar8 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        *(undefined4 *)(lVar1 + 0x158) = *puVar10;
        *(undefined4 *)(lVar1 + 0x15c) = uVar8;
        *(undefined4 *)(lVar1 + 0x160) = uVar3;
        *(undefined4 *)(lVar1 + 0x164) = uVar4;
        FUN_18017fd00(param_1,param_2);
        *param_4 = 1;
        *(undefined1 *)(param_1 + 0x24) = 1;
        FUN_180150f80(param_2,param_1,"connected");
        return 0;
      }
    }
    else if ((uVar9 & 4) != 0) {
      FUN_180180030(*(undefined8 *)(lVar1 + 0x98),lVar1 + 0x178);
      iVar6 = 7;
      goto LAB_18017dc05;
    }
  }
  if (iVar6 == 0) {
    return 0;
  }
LAB_18017dc05:
  if (*(int *)(lVar1 + 0x178) != 0) {
    *(int *)(param_2 + 0xd9c) = *(int *)(lVar1 + 0x178);
    Ordinal_112(*(undefined4 *)(lVar1 + 0x178));
    local_158 = FUN_180138690(*(undefined4 *)(lVar1 + 0x178),local_138,0x100);
    FUN_180150ee0(param_2,"connect to %s port %u failed: %s",lVar1 + 0xe0,
                  *(undefined4 *)(lVar1 + 0x110));
  }
  if (*(longlong *)(lVar1 + 0x98) != -1) {
    FUN_18017fe70(param_2,*(undefined8 *)(param_1 + 0x18),1);
    *(undefined8 *)(lVar1 + 0x98) = 0xffffffffffffffff;
  }
  *param_4 = 0;
  return iVar6;
}



// ===== FUN_18017ddf0 @ 18017ddf0 (size 75)

undefined4 FUN_18017ddf0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  cVar2 = FUN_18018bf70(lVar1 + 0xa0);
  if (cVar2 != '\0') {
    uVar3 = FUN_180161bd0(*(undefined8 *)(lVar1 + 0x98),0xffffffffffffffff,0xffffffffffffffff,0);
    if (((int)uVar3 < 1) || ((uVar3 & 1) == 0)) {
      return 0;
    }
  }
  return 1;
}



// ===== FUN_18017de40 @ 18017de40 (size 304)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18017de40(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                      undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_188 [32];
  int local_168;
  undefined4 local_160;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_188;
  lVar2 = *(longlong *)(param_1 + 0x10);
  *param_5 = 0;
  lVar1 = *(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 8;
  uVar3 = *(undefined8 *)(lVar1 + 0x1a8);
  *(undefined8 *)(lVar1 + 0x1a8) = *(undefined8 *)(lVar2 + 0x98);
  iVar4 = Ordinal_19(*(undefined8 *)(lVar2 + 0x98),param_3,param_4 & 0xffffffff,0);
  if ((longlong)iVar4 == -1) {
    iVar5 = Ordinal_111();
    if (iVar5 == 0x2733) {
      *param_5 = 0x51;
    }
    else {
      uVar6 = FUN_180138690(iVar5,local_158,0x100);
      FUN_180150e00(param_2,"Send failure: %s",uVar6);
      *(int *)(param_2 + 0xd9c) = iVar5;
      *param_5 = 0x37;
    }
  }
  local_160 = *param_5;
  local_168 = iVar4;
  FUN_180150f80(param_2,param_1,"send(len=%zu) -> %d, err=%d",param_4);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8) =
       uVar3;
  return (longlong)iVar4;
}



// ===== FUN_18017df70 @ 18017df70 (size 462)

longlong FUN_18017df70(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong local_38;
  undefined8 local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar7 = 0;
  lVar1 = lVar2 + 0xa0;
  *param_5 = 0;
  lVar8 = *(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 8;
  uVar3 = *(undefined8 *)(lVar8 + 0x1a8);
  *(undefined8 *)(lVar8 + 0x1a8) = *(undefined8 *)(lVar2 + 0x98);
  if ((*(char *)(lVar2 + 0x17f) == '\0') || (cVar6 = FUN_18018bf70(lVar1), cVar6 != '\0')) {
    local_38 = param_1;
    local_30 = param_2;
    if ((*(char *)(lVar2 + 0x17f) == '\0') || (0x3ff < param_4)) {
      lVar7 = FUN_18017fc20(&local_38,param_3,param_4,param_5);
      goto LAB_18017e0bb;
    }
    lVar8 = FUN_18018c0c0(lVar1,FUN_18017fc20,&local_38,param_5);
    if (lVar8 < 0) {
      cVar6 = FUN_18018bf70(lVar1);
      if (cVar6 == '\0') {
        FUN_180150f80(param_2,param_1,"partial read: empty buffer first");
        lVar7 = FUN_18018bf90(lVar1,param_3,param_4,param_5);
      }
      else {
        lVar7 = -1;
      }
      goto LAB_18017e0bb;
    }
    if (lVar8 == 0) {
      *param_5 = 0;
      goto LAB_18017e0bb;
    }
    FUN_180150f80(param_2,param_1,"buffered %zd additional bytes",lVar8);
  }
  else {
    FUN_180150f80(param_2,param_1,"recv from buffer");
  }
  lVar7 = FUN_18018bf90(lVar1,param_3,param_4,param_5);
LAB_18017e0bb:
  FUN_180150f80(param_2,param_1,"recv(len=%zu) -> %d, err=%d",param_4,(int)lVar7,*param_5);
  if ((0 < lVar7) && (*(char *)(lVar2 + 0x17c) == '\0')) {
    puVar9 = (undefined8 *)FUN_180148b70(&local_38);
    uVar4 = *puVar9;
    uVar5 = puVar9[1];
    *(undefined1 *)(lVar2 + 0x17c) = 1;
    *(undefined8 *)(lVar2 + 0x168) = uVar4;
    *(undefined8 *)(lVar2 + 0x170) = uVar5;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8) =
       uVar3;
  return lVar7;
}



// ===== FUN_18017e140 @ 18017e140 (size 528)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18017e140(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined1 local_1b4 [12];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (param_3 == 4) {
    FUN_180152520(param_2,*(undefined8 *)(param_1 + 0x18),lVar1 + 0x114,
                  *(undefined4 *)(lVar1 + 0x144));
  }
  else if (param_3 == 0x100) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8)
         = *(undefined8 *)(lVar1 + 0x98);
    if (*(int *)(param_1 + 0x20) == 0) {
      *(int **)(*(longlong *)(param_1 + 0x18) + 0x58) = (int *)(lVar1 + 8);
      *(bool *)(*(longlong *)(param_1 + 0x18) + 0x2f4) = *(int *)(lVar1 + 8) == 0x17;
      if ((*(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x308) + 0x84) & 0x800) == 0) {
        local_1b8 = 0x80;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        iVar3 = Ordinal_5(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x98),&local_1a8,
                          &local_1b8);
        if (iVar3 == 0) {
          cVar2 = FUN_180152190(&local_1a8,local_1b8,*(longlong *)(param_1 + 0x18) + 0x120,local_1b4
                               );
          if (cVar2 == '\0') {
            piVar6 = _errno();
            iVar3 = *piVar6;
            piVar6 = _errno();
            uVar5 = FUN_180138690(iVar3,local_128,0x100);
            FUN_180150e00(param_2,"ssrem inet_ntop() failed with errno %d: %s",*piVar6,uVar5);
          }
        }
        else {
          uVar4 = Ordinal_111();
          uVar5 = FUN_180138690(uVar4,local_128,0x100);
          FUN_180150e00(param_2,"getpeername() failed with errno %d: %s",uVar4,uVar5);
        }
      }
      FUN_18017fd00(param_1,param_2);
      FUN_180152520(param_2,*(undefined8 *)(param_1 + 0x18),lVar1 + 0x114,
                    *(undefined4 *)(lVar1 + 0x144));
      *(undefined1 *)(lVar1 + 0x17f) = 0;
    }
    *(undefined1 *)(lVar1 + 0x17e) = 1;
  }
  return 0;
}



// ===== FUN_18017e350 @ 18017e350 (size 191)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18017e350(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x10);
  *param_3 = 0;
  if ((lVar1 != 0) && (local_38 = *(ulonglong *)(lVar1 + 0x98), local_38 != 0xffffffffffffffff)) {
    local_30 = 0x700;
    iVar2 = FUN_1801617d0(&local_38,1);
    if (iVar2 < 0) {
      pcVar3 = "is_alive: poll error, assume dead";
    }
    else {
      if (iVar2 == 0) {
        FUN_180150f80(param_2,param_1,"is_alive: poll timeout, assume alive");
        return 1;
      }
      if ((local_30 & 0x4070000) == 0) {
        FUN_180150f80(param_2,param_1,"is_alive: valid events, looks alive");
        *param_3 = 1;
        return 1;
      }
      pcVar3 = "is_alive: err/hup/etc events, assume dead";
    }
    FUN_180150f80(param_2,param_1,pcVar3);
  }
  return 0;
}



// ===== FUN_18017e410 @ 18017e410 (size 260)

undefined8
FUN_18017e410(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4,
             undefined8 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (param_3 == 2) {
    if ((char)piVar1[0x5f] == '\0') {
      *param_4 = 0xffffffff;
      return 0;
    }
    local_28 = piVar1[0x52];
    iStack_24 = piVar1[0x53];
    iStack_20 = piVar1[0x54];
    iStack_1c = piVar1[0x55];
    local_18 = piVar1[0x5a];
    iStack_14 = piVar1[0x5b];
    iStack_10 = piVar1[0x5c];
    iStack_c = piVar1[0x5d];
    lVar3 = FUN_180148c00(&local_18,&local_28);
    uVar4 = 0x7fffffff;
    if (lVar3 < 0x7fffffff) {
      uVar4 = (int)lVar3;
    }
    *param_4 = uVar4;
    return 0;
  }
  if (param_3 == 3) {
    *param_5 = *(undefined8 *)(piVar1 + 0x26);
    return 0;
  }
  if (param_3 != 4) {
    if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
      return 0x30;
    }
                    /* WARNING: Could not recover jumptable at 0x00018017e447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
    return uVar2;
  }
  if (((*piVar1 == 4) || (*piVar1 == 5)) && ((char)piVar1[0x5f] != '\0')) {
    uVar2 = *(undefined8 *)(piVar1 + 0x5c);
    *param_5 = *(undefined8 *)(piVar1 + 0x5a);
    param_5[1] = uVar2;
    return 0;
  }
  uVar2 = *(undefined8 *)(piVar1 + 0x58);
  *param_5 = *(undefined8 *)(piVar1 + 0x56);
  param_5[1] = uVar2;
  return 0;
}



// ===== FUN_18017e520 @ 18017e520 (size 420)

int FUN_18017e520(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 in_stack_ffffffffffffffc0;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  piVar1 = *(int **)(param_1 + 0x10);
  iVar3 = 7;
  if (*(char *)(param_1 + 0x24) == '\0') {
    *param_4 = 0;
    if (*(longlong *)(piVar1 + 0x26) == -1) {
      iVar3 = FUN_18017f750();
      if (iVar3 == 0) {
        if (*piVar1 == 5) {
          piVar2 = *(int **)(param_1 + 0x10);
          iVar3 = Ordinal_4(*(undefined8 *)(piVar2 + 0x26),piVar2 + 6,piVar2[5]);
          if (iVar3 == -1) {
            uVar4 = Ordinal_111();
            iVar3 = FUN_18017ff00(param_2,piVar2 + 0x38,uVar4);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          else {
            FUN_18017fd00(param_1,param_2);
            piVar6 = piVar2 + 0x45;
            puVar5 = &DAT_1803078d0;
            if (*piVar2 == 5) {
              puVar5 = &DAT_1803078c8;
            }
            FUN_180150f80(param_2,param_1,"%s socket %qd connected: [%s:%d] -> [%s:%d]",puVar5,
                          *(undefined8 *)(piVar2 + 0x26),piVar6,piVar2[0x51],piVar2 + 0x38,
                          piVar2[0x44]);
            uVar7 = (undefined4)((ulonglong)piVar6 >> 0x20);
            FUN_18018b1d0(*(undefined8 *)(piVar2 + 0x26),1);
          }
          iVar3 = 0;
          FUN_180150f80(param_2,param_1,"cf_udp_connect(), opened socket=%qd (%s:%d)",
                        *(undefined8 *)(piVar1 + 0x26),piVar1 + 0x45,CONCAT44(uVar7,piVar1[0x51]));
        }
        else {
          FUN_180150f80(param_2,param_1,"cf_udp_connect(), opened socket=%qd (unconnected)",
                        *(undefined8 *)(piVar1 + 0x26));
        }
        *param_4 = 1;
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      else {
        FUN_180150f80(param_2,param_1,"cf_udp_connect(), open failed -> %d",iVar3);
      }
    }
  }
  else {
    *param_4 = 1;
    iVar3 = 0;
  }
  return iVar3;
}



// ===== FUN_18017e6f0 @ 18017e6f0 (size 347)

void FUN_18017e6f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x98) == -1)) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    return;
  }
  if (*(char *)(lVar1 + 0x17e) == '\0') {
    FUN_180150f80(param_2,param_1,"cf_socket_close(%qd, not active)");
    FUN_18017fe70(param_2,*(undefined8 *)(param_1 + 0x18),*(char *)(lVar1 + 0x17d) == '\0',
                  *(undefined8 *)(lVar1 + 0x98));
    *(undefined8 *)(lVar1 + 0x98) = 0xffffffffffffffff;
  }
  else {
    if (*(longlong *)(lVar1 + 0x98) ==
        *(longlong *)
         (*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8)) {
      FUN_180150f80(param_2,param_1,"cf_socket_close(%qd, active)");
      FUN_18017fe70(param_2,*(undefined8 *)(param_1 + 0x18),*(char *)(lVar1 + 0x17d) == '\0',
                    *(undefined8 *)(lVar1 + 0x98));
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8) =
           0xffffffffffffffff;
    }
    else {
      FUN_180150f80(param_2,param_1,"cf_socket_close(%qd) no longer at conn->sock[], discarding");
    }
    *(undefined8 *)(lVar1 + 0x98) = 0xffffffffffffffff;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x58) = 0;
    }
  }
  FUN_18018c080(lVar1 + 0xa0);
  *(undefined2 *)(lVar1 + 0x17e) = 0;
  *(undefined8 *)(lVar1 + 0x148) = 0;
  *(undefined8 *)(lVar1 + 0x150) = 0;
  *(undefined8 *)(lVar1 + 0x158) = 0;
  *(undefined8 *)(lVar1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}



// ===== FUN_18017e850 @ 18017e850 (size 365)

void FUN_18017e850(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x98) != -1)) {
    if (*(char *)(lVar1 + 0x17e) == '\0') {
      FUN_180150f80(param_2,param_1,"cf_socket_close(%qd, not active)");
      FUN_18017fe70(param_2,*(undefined8 *)(param_1 + 0x18),*(char *)(lVar1 + 0x17d) == '\0',
                    *(undefined8 *)(lVar1 + 0x98));
      *(undefined8 *)(lVar1 + 0x98) = 0xffffffffffffffff;
    }
    else {
      if (*(longlong *)(lVar1 + 0x98) ==
          *(longlong *)
           (*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8)) {
        FUN_180150f80(param_2,param_1,"cf_socket_close(%qd, active)");
        FUN_18017fe70(param_2,*(undefined8 *)(param_1 + 0x18),*(char *)(lVar1 + 0x17d) == '\0',
                      *(undefined8 *)(lVar1 + 0x98));
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x18) + 0x1a8 + (longlong)*(int *)(param_1 + 0x20) * 8) =
             0xffffffffffffffff;
      }
      else {
        FUN_180150f80(param_2,param_1,"cf_socket_close(%qd) no longer at conn->sock[], discarding");
      }
      *(undefined8 *)(lVar1 + 0x98) = 0xffffffffffffffff;
      if (*(int *)(param_1 + 0x20) == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x58) = 0;
      }
    }
    FUN_18018c080(lVar1 + 0xa0);
    *(undefined2 *)(lVar1 + 0x17e) = 0;
    *(undefined8 *)(lVar1 + 0x148) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    *(undefined8 *)(lVar1 + 0x160) = 0;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_180150f80(param_2,param_1,"destroy");
  FUN_18018bee0(lVar1 + 0xa0);
  (*(code *)PTR_free_1803bd538)(lVar1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// ===== FUN_18017e9c0 @ 18017e9c0 (size 165)

ulonglong FUN_18017e9c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  lVar1 = (*(code *)PTR_calloc_1803bd550)(0x180,1);
  if (lVar1 == 0) {
    uVar4 = 0x1b;
    *param_1 = 0;
  }
  else {
    FUN_18017f650(lVar1,param_4,param_5);
    uVar2 = FUN_18014fd90(local_18,&PTR_DAT_1803bd810,lVar1);
    uVar4 = (uint)uVar2;
    uVar3 = 0;
    if (uVar4 == 0) {
      uVar3 = local_18[0];
    }
    *param_1 = uVar3;
    if (uVar4 == 0) {
      return uVar2;
    }
  }
  (*(code *)PTR_free_1803bd538)(local_18[0]);
  local_18[0] = 0;
  (*(code *)PTR_free_1803bd538)(lVar1);
  return (ulonglong)uVar4;
}



// ===== FUN_18017ea70 @ 18017ea70 (size 165)

ulonglong FUN_18017ea70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  lVar1 = (*(code *)PTR_calloc_1803bd550)(0x180,1);
  if (lVar1 == 0) {
    uVar4 = 0x1b;
    *param_1 = 0;
  }
  else {
    FUN_18017f650(lVar1,param_4,param_5);
    uVar2 = FUN_18014fd90(local_18,&PTR_DAT_1803bd880,lVar1);
    uVar4 = (uint)uVar2;
    uVar3 = 0;
    if (uVar4 == 0) {
      uVar3 = local_18[0];
    }
    *param_1 = uVar3;
    if (uVar4 == 0) {
      return uVar2;
    }
  }
  (*(code *)PTR_free_1803bd538)(local_18[0]);
  local_18[0] = 0;
  (*(code *)PTR_free_1803bd538)(lVar1);
  return (ulonglong)uVar4;
}



// ===== FUN_18017eb20 @ 18017eb20 (size 165)

ulonglong FUN_18017eb20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  lVar1 = (*(code *)PTR_calloc_1803bd550)(0x180,1);
  if (lVar1 == 0) {
    uVar4 = 0x1b;
    *param_1 = 0;
  }
  else {
    FUN_18017f650(lVar1,param_4,param_5);
    uVar2 = FUN_18014fd90(local_18,&PTR_DAT_1803bd8f0,lVar1);
    uVar4 = (uint)uVar2;
    uVar3 = 0;
    if (uVar4 == 0) {
      uVar3 = local_18[0];
    }
    *param_1 = uVar3;
    if (uVar4 == 0) {
      return uVar2;
    }
  }
  (*(code *)PTR_free_1803bd538)(local_18[0]);
  local_18[0] = 0;
  (*(code *)PTR_free_1803bd538)(lVar1);
  return (ulonglong)uVar4;
}



// ===== FUN_18017ebd0 @ 18017ebd0 (size 578)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18017ebd0(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8 [2];
  undefined1 local_1e0 [24];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_218;
  plVar1 = *(longlong **)(param_2 + 0x1d8 + (longlong)param_3 * 8);
  if ((plVar1 == (longlong *)0x0) || ((undefined **)*plVar1 != &PTR_s_TCP_ACCEPT_1803bd960)) {
    return 2;
  }
  lVar2 = plVar1[2];
  uVar9 = *(undefined8 *)(lVar2 + 0x98);
  if (param_2 == 0) {
LAB_18017ec6c:
    Ordinal_3(uVar9);
  }
  else {
    if (*(longlong *)(param_2 + 0x38) == 0) {
      FUN_18013c500(param_1,uVar9);
      goto LAB_18017ec6c;
    }
    FUN_18013c500(param_1,uVar9);
    FUN_18013c840(param_1,1);
    (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),uVar9);
    FUN_18013c840(param_1,0);
  }
  uVar9 = *param_4;
  *(undefined8 *)(lVar2 + 0x98) = uVar9;
  *(undefined8 *)(param_2 + 0x1a8 + (longlong)param_3 * 8) = uVar9;
  lVar3 = plVar1[2];
  *(undefined1 *)(lVar3 + 0xe0) = 0;
  *(undefined4 *)(lVar3 + 0x110) = 0;
  local_1e8[0] = 0x80;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  iVar8 = Ordinal_5(*(undefined8 *)(lVar3 + 0x98),&local_1c8,local_1e8);
  if (iVar8 == 0) {
    cVar7 = FUN_180152190(&local_1c8,local_1e8[0],(undefined1 *)(lVar3 + 0xe0),
                          (undefined4 *)(lVar3 + 0x110));
    if (cVar7 != '\0') goto LAB_18017ed7c;
    piVar10 = _errno();
    iVar8 = *piVar10;
    piVar10 = _errno();
    uVar9 = FUN_180138690(iVar8,local_148,0x100);
    iVar8 = *piVar10;
    pcVar12 = "ssrem inet_ntop() failed with errno %d: %s";
  }
  else {
    iVar8 = Ordinal_111();
    uVar9 = FUN_180138690(iVar8,local_148,0x100);
    pcVar12 = "getpeername() failed with errno %d: %s";
  }
  FUN_180150e00(param_1,pcVar12,iVar8,uVar9);
LAB_18017ed7c:
  FUN_18017fd00(plVar1,param_1);
  *(undefined2 *)(lVar2 + 0x17d) = 0x101;
  puVar11 = (undefined4 *)FUN_180148b70(local_1e0);
  local_1f8 = lVar2 + 0xe0;
  uVar4 = puVar11[1];
  uVar5 = puVar11[2];
  uVar6 = puVar11[3];
  *(undefined4 *)(lVar2 + 0x158) = *puVar11;
  *(undefined4 *)(lVar2 + 0x15c) = uVar4;
  *(undefined4 *)(lVar2 + 0x160) = uVar5;
  *(undefined4 *)(lVar2 + 0x164) = uVar6;
  *(undefined1 *)((longlong)plVar1 + 0x24) = 1;
  local_1f0 = *(undefined4 *)(lVar2 + 0x110);
  FUN_180150f80(param_1,plVar1,"accepted_set(sock=%qd, remote=%s port=%d)",
                *(undefined8 *)(lVar2 + 0x98));
  return 0;
}



// ===== FUN_18017ee20 @ 18017ee20 (size 307)

int FUN_18017ee20(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  longlong local_28;
  undefined1 local_20 [24];
  
  local_28 = 0;
  FUN_180150040(param_1,param_2,param_3);
  puVar4 = (uint *)(*(code *)PTR_calloc_1803bd550)(0x180,1);
  if (puVar4 == (uint *)0x0) {
    iVar6 = 0x1b;
  }
  else {
    *puVar4 = (uint)*(byte *)(param_2 + 0x4f7);
    *(undefined8 *)(puVar4 + 0x26) = *param_4;
    *(undefined1 *)((longlong)puVar4 + 0x17d) = 0;
    iVar6 = FUN_18014fd90(&local_28,&PTR_s_TCP_ACCEPT_1803bd960,puVar4);
    if (iVar6 == 0) {
      FUN_18014ff30(param_1,param_2,param_3,local_28);
      *(undefined8 *)(param_2 + 0x1a8 + (longlong)param_3 * 8) = *(undefined8 *)(puVar4 + 0x26);
      FUN_18017fd00(local_28,param_1);
      *(undefined1 *)((longlong)puVar4 + 0x17e) = 1;
      puVar5 = (uint *)FUN_180148b70(local_20);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      puVar4[0x56] = *puVar5;
      puVar4[0x57] = uVar1;
      puVar4[0x58] = uVar2;
      puVar4[0x59] = uVar3;
      *(undefined1 *)(local_28 + 0x24) = 1;
      FUN_180150f80(param_1,local_28,"Curl_conn_tcp_listen_set(%qd)",*(undefined8 *)(puVar4 + 0x26))
      ;
      return 0;
    }
  }
  (*(code *)PTR_free_1803bd538)(local_28);
  local_28 = 0;
  (*(code *)PTR_free_1803bd538)(puVar4);
  return iVar6;
}



// ===== FUN_18017ef60 @ 18017ef60 (size 193)

void FUN_18017ef60(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res18[0] = 0x4020;
  local_res10[0] = 0;
  local_res20[0] = 4;
  if (DAT_1803c64f8 == 0) {
    cVar1 = FUN_180184f80(6,0,0,2,3);
    if (cVar1 != '\0') {
      DAT_1803c64f8 = 2;
      return;
    }
    DAT_1803c64f8 = 1;
  }
  else if (DAT_1803c64f8 == 2) {
    return;
  }
  iVar2 = Ordinal_7(param_1,0xffff,0x1001,local_res10,local_res20);
  if ((iVar2 != 0) || (local_res10[0] <= local_res18[0])) {
    Ordinal_21(param_1,0xffff,0x1001,local_res18,4);
  }
  return;
}



// ===== FUN_18017f060 @ 18017f060 (size 191)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017f060(undefined8 param_1,longlong param_2,undefined4 *param_3,int param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [36];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_d8;
  puVar2 = local_b8;
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = param_3;
  }
  *puVar2 = *(undefined4 *)(param_2 + 4);
  if (param_4 == 3) {
    puVar2[1] = 1;
    puVar2[2] = 6;
  }
  else if (param_4 == 6) {
    *(undefined8 *)(puVar2 + 1) = 1;
  }
  else {
    puVar2[1] = 2;
    puVar2[2] = 0x11;
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  puVar2[3] = uVar1;
  if (0x80 < uVar1) {
    puVar2[3] = 0x80;
    uVar1 = 0x80;
  }
  memcpy(puVar2 + 4,*(void **)(param_2 + 0x20),(ulonglong)uVar1);
  FUN_18017ff90(param_1,puVar2,param_5);
  return;
}



// ===== FUN_18017f120 @ 18017f120 (size 1318)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18017f120(longlong param_1,longlong param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  undefined1 uVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  ushort uVar11;
  size_t sVar12;
  uint uVar13;
  undefined1 auStack_328 [32];
  longlong **local_308;
  undefined4 local_300;
  longlong *local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_328;
  pcVar10 = *(char **)(param_1 + 0x780);
  uVar6 = 0;
  uVar11 = *(ushort *)(param_1 + 0x230);
  uVar13 = (uint)*(ushort *)(param_1 + 0x232);
  local_2f8 = (longlong *)0x0;
  if ((pcVar10 == (char *)0x0) && (uVar11 == 0)) {
    return 0;
  }
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_2f0 = param_2;
  local_2e8 = param_3;
  if (pcVar10 == (char *)0x0) {
LAB_18017f48c:
    if (param_4 != 0x17) {
      if (param_4 != 2) goto LAB_18017f4cc;
      goto LAB_18017f4b3;
    }
    local_2d8 = 0x17;
    uVar3 = Ordinal_9(uVar11);
    uVar6 = 0x1c;
  }
  else {
    lVar9 = -1;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar7 = uVar7 + 1;
    } while (pcVar10[uVar7] != '\0');
    if (0xfe < uVar7) goto LAB_18017f48c;
    local_258 = (longlong *)((ulonglong)local_258 & 0xffffffffffffff00);
    memset((void *)((longlong)&local_258 + 1),0,0xff);
    sVar12 = 0xffffffffffffffff;
    do {
      sVar12 = sVar12 + 1;
    } while (PTR_DAT_1803bd9d0[sVar12] != '\0');
    iVar4 = strncmp(PTR_DAT_1803bd9d0,pcVar10,sVar12);
    if (iVar4 == 0) {
      do {
        lVar9 = lVar9 + 1;
      } while (PTR_DAT_1803bd9d0[lVar9] != '\0');
      pcVar10 = pcVar10 + lVar9;
      bVar2 = true;
LAB_18017f290:
      local_308 = (longlong **)&local_258;
      local_300 = 0x100;
      iVar4 = FUN_180077ce0(param_4,param_5,*(undefined4 *)(local_2f0 + 0x4ec),pcVar10);
      if (iVar4 == 0) {
        if (bVar2) {
          FUN_180150e00(param_1,"Couldn\'t bind to interface \'%s\'",pcVar10);
          return 0x2d;
        }
        goto LAB_18017f26c;
      }
      if (iVar4 == 1) {
        return 1;
      }
      if (iVar4 != 2) {
        if (bVar2) goto LAB_18017f2d8;
        goto LAB_18017f26c;
      }
      local_308 = (longlong **)CONCAT44(local_308._4_4_,param_4);
      FUN_180150ee0(param_1,"Local Interface %s is ip %s using address family %i",pcVar10,&local_258
                   );
    }
    else {
      sVar12 = 0xffffffffffffffff;
      do {
        sVar12 = sVar12 + 1;
      } while (PTR_DAT_1803bd9d8[sVar12] != '\0');
      iVar4 = strncmp(PTR_DAT_1803bd9d8,pcVar10,sVar12);
      if (iVar4 != 0) {
        bVar2 = false;
        goto LAB_18017f290;
      }
      do {
        lVar9 = lVar9 + 1;
      } while (PTR_DAT_1803bd9d8[lVar9] != '\0');
      pcVar10 = pcVar10 + lVar9;
LAB_18017f26c:
      uVar1 = *(undefined1 *)(local_2f0 + 0x4f8);
      if (param_4 == 2) {
        *(undefined1 *)(local_2f0 + 0x4f8) = 1;
      }
      else if (param_4 == 0x17) {
        *(undefined1 *)(local_2f0 + 0x4f8) = 2;
      }
      local_308 = &local_2f8;
      iVar4 = FUN_180157110(param_1,pcVar10,0x50);
      if (iVar4 == 1) {
        FUN_1801490c0(param_1,&local_2f8);
      }
      *(undefined1 *)(local_2f0 + 0x4f8) = uVar1;
      if (local_2f8 == (longlong *)0x0) {
LAB_18017f2d8:
        *(undefined1 *)(param_1 + 0x13b7) = 0;
        FUN_180150e00(param_1,"Couldn\'t bind to \'%s\'",pcVar10);
        return 0x2d;
      }
      FUN_1801570d0(*local_2f8,&local_258,0x100);
      local_300 = *(undefined4 *)(*local_2f8 + 4);
      local_308 = (longlong **)&local_258;
      FUN_180150ee0(param_1,"Name \'%s\' family %i resolved to \'%s\' family %i",pcVar10,param_4);
      FUN_1801576b0(param_1,local_2f8);
      if (param_4 != *(int *)(*local_2f8 + 4)) {
        return 1;
      }
    }
    if (param_4 == 0x17) {
      pcVar10 = strchr((char *)&local_258,0x25);
      if (pcVar10 != (char *)0x0) {
        *pcVar10 = '\0';
        pcVar10 = pcVar10 + 1;
      }
      iVar4 = inet_pton(0x17,&local_258,&uStack_2d0);
      if (0 < iVar4) {
        local_2d8 = CONCAT62(local_2d8._2_6_,0x17);
        uVar3 = Ordinal_9(uVar11);
        local_2d8._0_4_ = CONCAT22(uVar3,(undefined2)local_2d8);
        if (pcVar10 != (char *)0x0) {
          uVar5 = strtoul(pcVar10,(char **)0x0,10);
          uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar5);
        }
      }
      uVar6 = 0x1c;
      goto LAB_18017f4cc;
    }
    if ((param_4 != 2) || (iVar4 = inet_pton(2,&local_258,(longlong)&local_2d8 + 4), iVar4 < 1))
    goto LAB_18017f4cc;
LAB_18017f4b3:
    local_2d8 = CONCAT62(local_2d8._2_6_,(short)param_4);
    uVar3 = Ordinal_9(uVar11);
    uVar6 = 0x10;
  }
  local_2d8._0_4_ = CONCAT22(uVar3,(undefined2)local_2d8);
LAB_18017f4cc:
  uVar8 = local_2e8;
  iVar4 = Ordinal_2(local_2e8,&local_2d8,uVar6);
  while( true ) {
    if (-1 < iVar4) {
      uVar7 = (ulonglong)local_2e8 >> 0x20;
      local_2e8 = CONCAT44((int)uVar7,0x80);
      local_258 = (longlong *)0x0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      iVar4 = Ordinal_6(uVar8,&local_258,&local_2e8);
      if (iVar4 < 0) {
        uVar6 = Ordinal_111();
        *(undefined4 *)(param_1 + 0xd9c) = uVar6;
        uVar8 = FUN_180138690(uVar6,local_158,0x100);
        FUN_180150e00(param_1,"getsockname() failed with errno %d: %s",uVar6,uVar8);
        uVar8 = 0x2d;
      }
      else {
        FUN_180150ee0(param_1,"Local port: %hu",uVar11);
        *(undefined1 *)(local_2f0 + 0x2fe) = 1;
        uVar8 = 0;
      }
      return uVar8;
    }
    uVar13 = uVar13 - 1;
    if (((int)uVar13 < 1) || (uVar11 = uVar11 + 1, uVar11 == 0)) break;
    FUN_180150ee0(param_1,"Bind to local port %d failed, trying next",uVar11 - 1);
    uVar3 = Ordinal_15(uVar11);
    local_2d8._0_4_ = CONCAT22(uVar3,(undefined2)local_2d8);
    iVar4 = Ordinal_2(uVar8,&local_2d8,uVar6);
  }
  uVar6 = Ordinal_111();
  *(undefined4 *)(param_1 + 0xd9c) = uVar6;
  uVar8 = FUN_180138690(uVar6,&local_258,0x100);
  FUN_180150e00(param_1,"bind failed with errno %d: %s",uVar6,uVar8);
  return 0x2d;
}



// ===== FUN_18017f650 @ 18017f650 (size 242)

void FUN_18017f650(int *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  memset(param_1 + 0x28,0,0xe0);
  param_1[0x26] = -1;
  param_1[0x27] = -1;
  *param_1 = param_3;
  param_1[2] = *(int *)(param_2 + 4);
  if (param_3 == 3) {
    param_1[3] = 1;
    param_1[4] = 6;
  }
  else if (param_3 == 6) {
    param_1[3] = 1;
    param_1[4] = 0;
  }
  else {
    param_1[3] = 2;
    param_1[4] = 0x11;
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  param_1[5] = uVar1;
  if (0x80 < uVar1) {
    param_1[5] = 0x80;
    uVar1 = 0x80;
  }
  memcpy(param_1 + 6,*(void **)(param_2 + 0x20),(ulonglong)uVar1);
  FUN_18018bf40(param_1 + 0x28,0x10000,1);
  return;
}



// ===== FUN_18017f750 @ 18017f750 (size 1227)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18017f750(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined4 local_1a0;
  undefined4 *local_198;
  undefined8 local_190;
  undefined8 local_188;
  int local_178 [2];
  int local_170 [2];
  undefined4 local_168 [2];
  undefined4 local_160;
  int local_15c;
  int local_158;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_1c8;
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar12 = (undefined4 *)FUN_180148b70(&local_160);
  puVar1 = (ulonglong *)(lVar2 + 0x98);
  uVar11 = puVar12[1];
  uVar5 = puVar12[2];
  uVar6 = puVar12[3];
  *(undefined4 *)(lVar2 + 0x148) = *puVar12;
  *(undefined4 *)(lVar2 + 0x14c) = uVar11;
  *(undefined4 *)(lVar2 + 0x150) = uVar5;
  *(undefined4 *)(lVar2 + 0x154) = uVar6;
  iVar9 = FUN_18017ff90(param_2,lVar2 + 8,puVar1);
  if (iVar9 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    cVar8 = FUN_180152190(lVar3 + 0x18,*(undefined4 *)(lVar3 + 0x14),lVar3 + 0xe0,lVar3 + 0x110);
    if (cVar8 != '\0') {
      iVar9 = 0;
      if (*(int *)(lVar2 + 8) == 0x17) {
        local_170[0] = 0;
        local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,4);
        Ordinal_21(*puVar1,0x29,0x1b,local_170);
        pcVar15 = "  Trying [%s]:%d...";
      }
      else {
        pcVar15 = "  Trying %s:%d...";
      }
      FUN_180150ee0(param_2,pcVar15,lVar2 + 0xe0,*(undefined4 *)(lVar2 + 0x110));
      if (((*(int *)(lVar2 + 8) == 2) || (*(int *)(lVar2 + 8) == 0x17)) &&
         (*(int *)(lVar2 + 0xc) == 1)) {
        bVar7 = true;
        if (*(char *)(param_2 + 0xadc) != '\0') {
          local_170[0] = 1;
          local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,4);
          iVar10 = Ordinal_21(*puVar1,6,1,local_170);
          if (iVar10 < 0) {
            uVar11 = Ordinal_111();
            uVar14 = FUN_180138690(uVar11,local_148,0x100);
            FUN_180150ee0(param_2,"Could not set TCP_NODELAY: %s",uVar14);
          }
        }
      }
      else {
        bVar7 = false;
      }
      uVar4 = *puVar1;
      local_170[0] = 0x4020;
      local_178[0] = 0;
      local_168[0] = 4;
      if (DAT_1803c64f8 == 0) {
        local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,3);
        cVar8 = FUN_180184f80(6,0,0,2);
        if (cVar8 == '\0') {
          DAT_1803c64f8 = 1;
LAB_18017f9af:
          local_1a8 = local_168;
          iVar10 = Ordinal_7(uVar4,0xffff,0x1001,local_178);
          if ((iVar10 != 0) || (local_178[0] <= local_170[0])) {
            local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,4);
            Ordinal_21(uVar4,0xffff,0x1001,local_170);
          }
        }
        else {
          DAT_1803c64f8 = 2;
        }
      }
      else if (DAT_1803c64f8 != 2) goto LAB_18017f9af;
      if ((bVar7) && (*(char *)(param_2 + 0xae2) != '\0')) {
        uVar4 = *puVar1;
        local_178[0] = 1;
        local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,4);
        iVar10 = Ordinal_21(uVar4,0xffff,8,local_178);
        if (iVar10 < 0) {
          FUN_180150ee0(param_2,"Failed to set SO_KEEPALIVE on fd %d",uVar4);
        }
        else {
          local_160 = 1;
          local_178[0] = FUN_180140180(*(undefined4 *)(param_2 + 0xa4c));
          local_178[0] = local_178[0] * 1000;
          local_15c = local_178[0];
          local_178[0] = FUN_180140180(*(undefined4 *)(param_2 + 0xa50));
          local_178[0] = local_178[0] * 1000;
          local_198 = local_168;
          local_188 = 0;
          local_190 = 0;
          local_1a0 = 0;
          local_1a8 = (undefined4 *)0x0;
          local_158 = local_178[0];
          iVar10 = WSAIoctl(uVar4,0x98000004,&local_160,0xc);
          if (iVar10 != 0) {
            uVar11 = Ordinal_111();
            FUN_180150ee0(param_2,"Failed to set SIO_KEEPALIVE_VALS on fd %d: %d",uVar4 & 0xffffffff
                          ,uVar11);
          }
        }
      }
      if (*(longlong *)(param_2 + 0x278) == 0) {
LAB_18017fb38:
        bVar7 = false;
      }
      else {
        FUN_18013c840(param_2,1);
        iVar10 = (**(code **)(param_2 + 0x278))(*(undefined8 *)(param_2 + 0x280),*puVar1,0);
        FUN_18013c840(param_2,0);
        if (iVar10 != 2) {
          if (iVar10 != 0) {
            iVar9 = 0x2a;
            goto LAB_18017f82e;
          }
          goto LAB_18017fb38;
        }
        bVar7 = true;
      }
      if ((*(int *)(lVar2 + 8) == 2) || (*(int *)(lVar2 + 8) == 0x17)) {
        uVar11 = FUN_18018b200(lVar2 + 0x18);
        local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar11);
        iVar9 = FUN_18017f120(param_2,*(undefined8 *)(param_1 + 0x18),*puVar1,
                              *(undefined4 *)(lVar2 + 8));
        if (iVar9 != 0) {
          if (iVar9 == 1) {
            iVar9 = 7;
          }
          goto LAB_18017f82e;
        }
      }
      FUN_18018b1d0(*puVar1,1);
      if (bVar7) {
        FUN_18017fd00(param_1,param_2);
        puVar12 = (undefined4 *)FUN_180148b70(&local_160);
        uVar11 = puVar12[1];
        uVar5 = puVar12[2];
        uVar6 = puVar12[3];
        *(undefined4 *)(lVar2 + 0x158) = *puVar12;
        *(undefined4 *)(lVar2 + 0x15c) = uVar11;
        *(undefined4 *)(lVar2 + 0x160) = uVar5;
        *(undefined4 *)(lVar2 + 0x164) = uVar6;
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      goto LAB_18017fbd2;
    }
    piVar13 = _errno();
    *(int *)(lVar3 + 0x178) = *piVar13;
    piVar13 = _errno();
    iVar9 = *piVar13;
    piVar13 = _errno();
    uVar14 = FUN_180138690(iVar9,local_148,0x100);
    FUN_180150e00(param_2,"sa_addr inet_ntop() failed with errno %d: %s",*piVar13,uVar14);
    iVar9 = 2;
  }
LAB_18017f82e:
  uVar4 = *puVar1;
  if (uVar4 == 0xffffffffffffffff) goto LAB_18017fbd2;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
LAB_18017fbc2:
    Ordinal_3(uVar4);
  }
  else {
    if (*(longlong *)(lVar2 + 0x38) == 0) {
      FUN_18013c500(param_2,uVar4);
      goto LAB_18017fbc2;
    }
    FUN_18013c500(param_2,uVar4);
    FUN_18013c840(param_2,1);
    (**(code **)(lVar2 + 0x38))(*(undefined8 *)(lVar2 + 0x40),uVar4);
    FUN_18013c840(param_2,0);
  }
  *puVar1 = 0xffffffffffffffff;
LAB_18017fbd2:
  local_1a8 = (undefined4 *)*puVar1;
  FUN_180150f80(param_2,param_1,"cf_socket_open() -> %d, fd=%qd",iVar9);
  return iVar9;
}



// ===== FUN_18017fc20 @ 18017fc20 (size 224)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18017fc20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(*param_1 + 0x10);
  *param_4 = 0;
  iVar1 = Ordinal_16(*(undefined8 *)(lVar3 + 0x98),param_2,param_3,0);
  lVar3 = (longlong)iVar1;
  if (lVar3 == -1) {
    iVar1 = Ordinal_111();
    if (iVar1 == 0x2733) {
      *param_4 = 0x51;
    }
    else {
      uVar2 = FUN_180138690(iVar1,local_138,0x100);
      FUN_180150e00(param_1[1],"Recv failure: %s",uVar2);
      *(int *)(param_1[1] + 0xd9c) = iVar1;
      *param_4 = 0x38;
    }
    lVar3 = -1;
  }
  local_140 = *param_4;
  local_148 = (undefined4)lVar3;
  FUN_180150f80(param_1[1],*param_1,"nw_in_read(len=%zu) -> %d, err=%d",param_3);
  return lVar3;
}



// ===== FUN_18017fd00 @ 18017fd00 (size 358)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18017fd00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8 [4];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_1c8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x308) + 0x84) & 0x800) == 0) {
    local_1a8[0] = 0x80;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    iVar3 = Ordinal_6(*(undefined8 *)(lVar1 + 0x98),&local_198,local_1a8);
    if (iVar3 != 0) {
      uVar4 = Ordinal_111();
      uVar5 = FUN_180138690(uVar4,local_118,0x100);
      FUN_180150e00(param_2,"getsockname() failed with errno %d: %s",uVar4,uVar5);
      return 2;
    }
    cVar2 = FUN_180152190(&local_198,local_1a8[0],lVar1 + 0x114,lVar1 + 0x144);
    if (cVar2 == '\0') {
      piVar6 = _errno();
      iVar3 = *piVar6;
      piVar6 = _errno();
      uVar5 = FUN_180138690(iVar3,local_118,0x100);
      FUN_180150e00(param_2,"ssloc inet_ntop() failed with errno %d: %s",*piVar6,uVar5);
      return 2;
    }
  }
  return 0;
}



// ===== FUN_18017fe70 @ 18017fe70 (size 134)

undefined4 FUN_18017fe70(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if ((param_3 != 0) && (*(longlong *)(param_2 + 0x38) != 0)) {
      FUN_18013c500(param_1,param_4);
      FUN_18013c840(param_1,1);
      uVar1 = (**(code **)(param_2 + 0x38))(*(undefined8 *)(param_2 + 0x40),param_4);
      FUN_18013c840(param_1,0);
      return uVar1;
    }
    FUN_18013c500(param_1,param_4);
  }
  Ordinal_3(param_4);
  return 0;
}



// ===== FUN_18017ff00 @ 18017ff00 (size 140)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18017ff00(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_148 [32];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_148;
  if (((param_3 == 0xb) || (param_3 == 0x2733)) || (param_3 == 0x2734)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180138690(param_3,local_128,0x100);
    FUN_180150ee0(param_1,"Immediate connect fail for %s: %s",param_2,uVar1);
    uVar1 = 7;
    *(int *)(param_1 + 0xd9c) = param_3;
  }
  return uVar1;
}



// ===== FUN_18017ff90 @ 18017ff90 (size 159)

undefined8 FUN_18017ff90(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x288) == 0) {
    lVar2 = Ordinal_23(*param_2,param_2[1],param_2[2]);
    *param_3 = lVar2;
  }
  else {
    FUN_18013c840(param_1,1);
    lVar2 = (**(code **)(param_1 + 0x288))(*(undefined8 *)(param_1 + 0x290),0,param_2);
    *param_3 = lVar2;
    FUN_18013c840(param_1,0);
  }
  if (*param_3 == -1) {
    return 7;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x4ec);
  if ((iVar1 != 0) && (*param_2 == 0x17)) {
    param_2[10] = iVar1;
  }
  return 0;
}



// ===== FUN_180180030 @ 180180030 (size 131)

undefined8 FUN_180180030(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 0;
  local_res18[0] = 4;
  SleepEx(0,0);
  iVar1 = Ordinal_7(param_1,0xffff,0x1007,local_res10,local_res18);
  if (iVar1 != 0) {
    local_res10[0] = Ordinal_111();
  }
  if ((local_res10[0] == 0) || (local_res10[0] == 0x2748)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_res10[0];
  }
  return uVar2;
}



// ===== FUN_180180100 @ 180180100 (size 333)

undefined8 FUN_180180100(longlong param_1,undefined8 param_2,undefined1 param_3,char *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) == '\0') {
    FUN_180150f80(param_2,param_1,"connect");
    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                      (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
    iVar3 = (int)uVar4;
    while( true ) {
      if (iVar3 != 0) {
        return uVar4;
      }
      if (*param_4 == '\0') {
        return uVar4;
      }
      *param_4 = '\0';
      if (*plVar1 != 0) break;
      cVar2 = FUN_180150220(*(undefined8 *)(param_1 + 8));
      if (cVar2 == '\0') {
        cVar2 = '\x02';
      }
      else {
        cVar2 = *(char *)(*(longlong *)(param_1 + 0x18) + 0x4f6);
        if (((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) {
          FUN_180150ee0(param_2,"CONNECT tunnel: unsupported ALPN(%d) negotiated",cVar2);
          return 7;
        }
      }
      FUN_180150f80(param_2,param_1,"installing subfilter for HTTP/1.1");
      FUN_180150ee0(param_2,"CONNECT tunnel: HTTP/1.%d negotiated",cVar2 != '\x01');
      uVar4 = FUN_180180940(param_1,param_2);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *plVar1 = *(longlong *)(param_1 + 8);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                        (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
      iVar3 = (int)uVar4;
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
    *param_4 = '\x01';
  }
  else {
    *param_4 = '\x01';
  }
  return 0;
}



// ===== FUN_180180250 @ 180180250 (size 147)

void FUN_180180250(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  FUN_180150f80(param_2,param_1,"close");
  *(undefined1 *)(param_1 + 0x24) = 0;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    for (lVar3 = *(longlong *)(param_1 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 8)) {
      if (lVar3 == lVar2) {
        FUN_180150120(param_1,lVar2,param_2,0);
        break;
      }
    }
    *plVar1 = 0;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  return;
}



// ===== FUN_1801802f0 @ 1801802f0 (size 113)

int FUN_1801802f0(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res18 [2];
  
  lVar1 = (*(code *)PTR_calloc_1803bd550)(1);
  if (lVar1 == 0) {
    iVar2 = 0x1b;
  }
  else {
    iVar2 = FUN_18014fd90(local_res18,&PTR_s_HTTP_PROXY_1803bd9e0,lVar1);
    if (iVar2 == 0) {
      lVar1 = 0;
      FUN_1801501f0(param_1,local_res18[0]);
    }
  }
  (*(code *)PTR_free_1803bd538)(lVar1);
  return iVar2;
}



// ===== FUN_180180370 @ 180180370 (size 712)

int FUN_180180370(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined **ppuVar4;
  int iVar5;
  char *_Str;
  uint uVar6;
  undefined **ppuVar7;
  char cVar8;
  longlong local_res8 [2];
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar2 = *(longlong *)(param_2 + 0x18);
  local_res8[0] = 0;
  if (*(char *)(lVar2 + 0x2f1) == '\0') {
    if (*(int *)(param_2 + 0x20) != 1) {
      _Str = *(char **)(lVar2 + 0x70);
      goto LAB_1801803da;
    }
    _Str = *(char **)(lVar2 + 0x88);
    uVar6 = (uint)*(ushort *)(lVar2 + 0x4f2);
  }
  else {
    _Str = *(char **)(lVar2 + 0xa0);
    if (*(int *)(param_2 + 0x20) == 1) {
      uVar6 = (uint)*(ushort *)(lVar2 + 0x4f2);
    }
    else {
LAB_1801803da:
      if (*(char *)(lVar2 + 0x2f2) == '\0') {
        uVar6 = *(uint *)(lVar2 + 0x4e4);
      }
      else {
        uVar6 = *(uint *)(lVar2 + 0x4e8);
      }
    }
  }
  if (_Str == *(char **)(lVar2 + 0x70)) {
    cVar8 = *(char *)(lVar2 + 0x2f3);
  }
  else {
    pcVar1 = strchr(_Str,0x3a);
    cVar8 = pcVar1 != (char *)0x0;
  }
  ppuVar4 = &PTR_1802ead18;
  ppuVar7 = &PTR_1802ead18;
  if (cVar8 != '\0') {
    ppuVar7 = (undefined **)&DAT_1802ecf10;
    ppuVar4 = (undefined **)&DAT_1802fed9c;
  }
  lVar2 = FUN_180145000("%s%s%s:%d",ppuVar4,_Str,ppuVar7,CONCAT44(uVar9,uVar6));
  if (lVar2 == 0) {
    iVar5 = 0x1b;
  }
  else {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(lVar2 + lVar3) != '\0');
    iVar5 = FUN_18015c8d0(local_res8,"CONNECT",7,0,0,lVar2,lVar3,0,0);
    if ((((iVar5 == 0) &&
         (iVar5 = FUN_18015b7b0(param_3,*(undefined8 *)(param_2 + 0x18),local_res8[0],0,
                                *(undefined8 *)(local_res8[0] + 0x18),1), iVar5 == 0)) &&
        ((param_4 != 1 ||
         ((lVar3 = FUN_1801592e0(param_3,*(undefined8 *)(param_2 + 0x18),&DAT_1803006f8,4),
          lVar3 != 0 ||
          (iVar5 = FUN_180186e30(local_res8[0] + 0x28,&DAT_1803006f8,lVar2), iVar5 == 0)))))) &&
       ((*(longlong *)(param_3 + 0x1340) == 0 ||
        (iVar5 = FUN_1801870c0(local_res8[0] + 0x28), iVar5 == 0)))) {
      lVar3 = FUN_1801592e0(param_3,*(undefined8 *)(param_2 + 0x18),"User-Agent",10);
      if ((lVar3 == 0) && (*(longlong *)(param_3 + 0x860) != 0)) {
        iVar5 = FUN_180186e30(local_res8[0] + 0x28,"User-Agent");
        if (iVar5 != 0) goto LAB_1801805ef;
      }
      if (param_4 == 1) {
        lVar3 = FUN_1801592e0(param_3,*(undefined8 *)(param_2 + 0x18),"Proxy-Connection",0x10);
        if (lVar3 == 0) {
          iVar5 = FUN_180186e30(local_res8[0] + 0x28,"Proxy-Connection","Keep-Alive");
          if (iVar5 != 0) goto LAB_1801805ef;
        }
      }
      iVar5 = FUN_180159550(param_3,1,local_res8[0] + 0x28);
      if (iVar5 == 0) goto LAB_180180609;
    }
  }
LAB_1801805ef:
  if (local_res8[0] != 0) {
    FUN_18015c880();
    local_res8[0] = 0;
  }
LAB_180180609:
  (*(code *)PTR_free_1803bd538)(lVar2);
  *param_1 = local_res8[0];
  return iVar5;
}



// ===== FUN_180180640 @ 180180640 (size 428)

ulonglong FUN_180180640(longlong param_1,longlong param_2,undefined1 param_3,char *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) != '\0') {
    *param_4 = '\x01';
    return 0;
  }
  FUN_180150f80(param_2,param_1,"connect");
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                    (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*param_4 == (char)uVar3) {
    return uVar3;
  }
  *param_4 = (char)uVar3;
  if (lVar4 == 0) {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x308);
    if ((*(uint *)((longlong)puVar1 + 0x8c) & 0x4000) != 0) {
      FUN_180150e00(param_2,"%s cannot be done over CONNECT",*puVar1);
      return 1;
    }
    uVar3 = FUN_18015eee0(param_2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    lVar4 = (*(code *)PTR_calloc_1803bd550)(1,0xd8);
    if (lVar4 == 0) {
      return 0x1b;
    }
    FUN_180150ee0(param_2,"allocate connect buffer");
    FUN_18013ff60(lVar4 + 0x70,0x4000);
    FUN_18013ff60(lVar4 + 0x90,0x100000);
    FUN_180152410(*(undefined8 *)(param_1 + 0x18),0);
    uVar3 = FUN_1801816a0(param_1,param_2,lVar4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  uVar2 = FUN_180180990(param_1,param_2,lVar4);
  if (uVar2 == 0) {
    (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_2 + 0x1340));
    *(undefined8 *)(param_2 + 0x1340) = 0;
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (*(int *)(*(longlong *)(param_1 + 0x10) + 0xd0) == 4)) {
      *param_4 = '\x01';
      *(undefined1 *)(param_1 + 0x24) = 1;
      FUN_1801815c0(param_1,param_2);
      return 0;
    }
  }
  *param_4 = '\0';
  return (ulonglong)uVar2;
}



// ===== FUN_1801807f0 @ 1801807f0 (size 117)

undefined8 FUN_1801807f0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  if ((((int)uVar2 == 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != (char)uVar2)) &&
     (*(char *)(param_1 + 0x24) == (char)uVar2)) {
    uVar2 = FUN_1801501b0(param_1,param_2);
    *param_3 = uVar2;
    if ((lVar1 == 0) || (uVar2 = 1, *(int *)(lVar1 + 0x38) == 1)) {
      uVar2 = 0x10000;
    }
  }
  return uVar2;
}



// ===== FUN_1801808b0 @ 1801808b0 (size 143)

void FUN_1801808b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_180150f80(param_2,param_1,"close");
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0xd0) != 0) {
      if (*(int *)(lVar1 + 0xd0) == 1) {
        *(undefined1 *)(param_2 + 0x1cd) = 0;
      }
      FUN_180150f80(param_2,param_1,"new tunnel state \'init\'");
      FUN_1801816a0(param_1,param_2,lVar1);
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  }
  return;
}



// ===== FUN_180180940 @ 180180940 (size 65)

ulonglong FUN_180180940(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 local_res18 [2];
  
  uVar1 = FUN_18014fd90(local_res18,&PTR_s_H1_PROXY_1803bda50,0);
  if ((int)uVar1 == 0) {
    FUN_1801501f0(param_1,local_res18[0]);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_180180990 @ 180180990 (size 1522)

int FUN_180180990(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  char local_res8 [8];
  int local_res18 [2];
  longlong local_res20;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  piVar1 = (int *)(param_3 + 0xd0);
  if ((param_3 != 0) && (*piVar1 == 4)) {
    return 0;
  }
  if ((param_3 != 0) && (*piVar1 == 5)) {
    return 0x38;
  }
  do {
    lVar6 = FUN_180152610(param_2,0,1);
    if (lVar6 < 1) {
      FUN_180150e00(param_2,"Proxy CONNECT aborted due to timeout");
      iVar5 = 0x1c;
      goto LAB_180180f07;
    }
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      FUN_180150f80(param_2,param_1,"CONNECT start");
      local_res20 = 0;
      (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_2 + 400));
      *(undefined8 *)(param_2 + 400) = 0;
      iVar5 = FUN_180180370(&local_res20,param_1,param_2,1);
      if (iVar5 == 0) {
        FUN_180150ee0(param_2,"Establish HTTP proxy tunnel to %s",
                      *(undefined8 *)(local_res20 + 0x18));
        FUN_18013ff90(param_3 + 0x90);
        *(undefined8 *)(param_3 + 0xb0) = 0;
        *(undefined8 *)(param_3 + 0xb8) = 0;
        iVar5 = FUN_18018c380(local_res20,*(char *)(*(longlong *)(param_1 + 0x18) + 0x10c) != '\x01'
                              ,param_3 + 0x90);
        if (iVar5 != 0) goto LAB_180180ae9;
      }
      else {
LAB_180180ae9:
        FUN_180150e00(param_2,"Failed sending CONNECT to proxy");
      }
      if (local_res20 != 0) {
        FUN_18015c880();
      }
      if (iVar5 != 0) goto LAB_180180f07;
      if (*piVar1 != 1) {
        FUN_180150f80(param_2,param_1,"new tunnel state \'connect\'");
        *piVar1 = 1;
        *(undefined4 *)(param_3 + 0xc0) = 1;
        FUN_18013ff90(param_3 + 0x70);
      }
LAB_180180b42:
      FUN_180150f80(param_2,param_1,"CONNECT send");
      lVar6 = FUN_18008d530(param_3 + 0x90);
      uVar7 = FUN_18013ff80(param_3 + 0x90);
      uVar3 = *(ulonglong *)(param_3 + 0xb0);
      local_res18[0] = 0;
      if (uVar3 < uVar7) {
        lVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                          (*(longlong **)(param_1 + 8),param_2,lVar6 + uVar3,uVar7 - uVar3,
                           local_res18);
        if (lVar8 < 0) {
          if (local_res18[0] == 0x51) {
            local_res18[0] = 0;
            goto LAB_180180c0d;
          }
        }
        else {
          *(longlong *)(param_3 + 0xb0) = *(longlong *)(param_3 + 0xb0) + lVar8;
          FUN_180150d10(param_2,2,lVar6 + uVar3,lVar8);
        }
        if ((local_res18[0] == 0) ||
           (FUN_180150e00(param_2,"Failed sending CONNECT to proxy"), local_res18[0] == 0))
        goto LAB_180180c0d;
LAB_180180c1a:
        local_res8[0] = '\0';
      }
      else {
LAB_180180c0d:
        if (*(ulonglong *)(param_3 + 0xb0) < uVar7) goto LAB_180180c1a;
        local_res8[0] = '\x01';
      }
      iVar5 = local_res18[0];
      if (local_res18[0] != 0) goto LAB_180180f07;
      if (local_res8[0] == '\0') {
        return 0;
      }
      if (*piVar1 != 2) {
        if (*piVar1 == 1) {
          *(undefined1 *)(param_2 + 0x1cd) = 0;
        }
        FUN_180150f80(param_2,param_1,"new tunnel state \'receive\'");
        *piVar1 = 2;
      }
LAB_180180c61:
      FUN_180150f80(param_2,param_1,"CONNECT receive");
      iVar5 = FUN_180181240(param_1,param_2,param_3,local_res8);
      iVar4 = FUN_180160d50(param_2);
      if (iVar4 != 0) {
        iVar5 = 0x2a;
        goto LAB_180180f07;
      }
      if (iVar5 != 0) goto LAB_180180f07;
      if (local_res8[0] == '\0') {
        return 0;
      }
      if (*piVar1 != 3) {
        if (*piVar1 == 1) {
          *(undefined1 *)(param_2 + 0x1cd) = 0;
        }
        FUN_180150f80(param_2,param_1,"new tunnel state \'response\'");
        *piVar1 = 3;
      }
LAB_180180ce1:
      FUN_180150f80(param_2,param_1,"CONNECT response");
      if (*(longlong *)(param_2 + 400) == 0) break;
      if ((*(char *)(param_3 + 0xd5) != '\0') || (*(char *)(lVar2 + 0x2ee) != '\0')) {
        FUN_180150f80(param_2,param_1,"CONNECT need to close+open");
        FUN_180150ee0(param_2,"Connect me again please");
        FUN_18014ff60(param_1,param_2);
        FUN_180152410(lVar2,0);
        iVar5 = FUN_180150020(*(undefined8 *)(param_1 + 8),param_2,0,local_res8);
        if (iVar5 == 0) {
          return 0;
        }
LAB_180180f07:
        if (*piVar1 == 5) {
          return iVar5;
        }
        if (*piVar1 == 1) {
          *(undefined1 *)(param_2 + 0x1cd) = 0;
        }
        FUN_180150f80(param_2,param_1,"new tunnel state \'failed\'");
        *piVar1 = 5;
        FUN_18013ff90(param_3 + 0x70);
        FUN_18013ff90(param_3 + 0x90);
        *(undefined4 *)(param_2 + 0x13d8) = 0;
        (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_2 + 0x1340));
        *(undefined8 *)(param_2 + 0x1340) = 0;
        return iVar5;
      }
      if (*piVar1 != 0) {
        if (*piVar1 == 1) {
          *(undefined1 *)(param_2 + 0x1cd) = 0;
        }
        FUN_180150f80(param_2,param_1,"new tunnel state \'init\'");
        FUN_1801816a0(param_1,param_2,param_3);
      }
    }
    else {
      if (iVar5 == 1) goto LAB_180180b42;
      if (iVar5 == 2) goto LAB_180180c61;
      if (iVar5 == 3) goto LAB_180180ce1;
    }
  } while (*(longlong *)(param_2 + 400) != 0);
  if (*(int *)(param_2 + 0x13dc) - 200U < 100) {
    if (*piVar1 != 4) {
      if (*piVar1 == 1) {
        *(undefined1 *)(param_2 + 0x1cd) = 0;
      }
      FUN_180150f80(param_2,param_1,"new tunnel state \'established\'");
      FUN_180150ee0(param_2,"CONNECT phase completed");
      *(undefined2 *)(param_2 + 0xe44) = 1;
      *piVar1 = 4;
      FUN_18013ff90(param_3 + 0x70);
      FUN_18013ff90(param_3 + 0x90);
      *(undefined4 *)(param_2 + 0x13d8) = 0;
      (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_2 + 0x1340));
      *(undefined8 *)(param_2 + 0x1340) = 0;
    }
    FUN_180150ee0(param_2,"CONNECT tunnel established, response %d",
                  *(undefined4 *)(param_2 + 0x13dc));
    iVar5 = 0;
  }
  else {
    (*(code *)PTR_free_1803bd538)(0);
    *(undefined8 *)(param_2 + 400) = 0;
    FUN_180152410(lVar2,2);
    if (*piVar1 != 5) {
      if (*piVar1 == 1) {
        *(undefined1 *)(param_2 + 0x1cd) = 0;
      }
      FUN_180150f80(param_2,param_1,"new tunnel state \'failed\'");
      *piVar1 = 5;
      FUN_18013ff90(param_3 + 0x70);
      FUN_18013ff90(param_3 + 0x90);
      *(undefined4 *)(param_2 + 0x13d8) = 0;
      (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_2 + 0x1340));
      *(undefined8 *)(param_2 + 0x1340) = 0;
    }
    FUN_180150e00(param_2,"CONNECT tunnel failed, response %d",*(undefined4 *)(param_2 + 0x150));
    iVar5 = 0x38;
  }
  return iVar5;
}



// ===== FUN_180180f90 @ 180180f90 (size 682)

int FUN_180180f90(undefined8 param_1,longlong param_2,longlong param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_1801403a0(param_4,"WWW-Authenticate:",0x11);
  if (((iVar2 == 0) || (iVar2 = *(int *)(param_2 + 0x150), iVar2 != 0x191)) &&
     ((iVar2 = FUN_1801403a0(param_4,"Proxy-authenticate:",0x13), iVar2 == 0 ||
      (iVar2 = *(int *)(param_2 + 0x150), iVar2 != 0x197)))) {
    iVar2 = FUN_1801403a0(param_4,"Content-Length:",0xf);
    if (iVar2 == 0) {
      cVar1 = FUN_180159370(param_4,"Connection:",0xb,"close",5);
      if (cVar1 == '\0') {
        iVar2 = FUN_1801403a0(param_4,"Transfer-Encoding:",0x12);
        if (iVar2 != 0) {
          if (*(int *)(param_2 + 0x150) - 200U < 100) {
            FUN_180150ee0(param_2,"Ignoring Transfer-Encoding in CONNECT %03d response");
            return 0;
          }
          cVar1 = FUN_180159370(param_4,"Transfer-Encoding:",0x12,"chunked",7);
          if (cVar1 == '\0') {
            return 0;
          }
          FUN_180150ee0(param_2,"CONNECT responded chunked");
          *(undefined1 *)(param_3 + 0xd4) = 1;
          FUN_180185240(param_2);
          return 0;
        }
        cVar1 = FUN_180159370(param_4,"Proxy-Connection:",0x11,"close",5);
        if (cVar1 == '\0') {
          iVar2 = strncmp(param_4,"HTTP/1.",7);
          if (iVar2 != 0) {
            return 0;
          }
          if (1 < (byte)(param_4[7] - 0x30U)) {
            return 0;
          }
          if (param_4[8] != ' ') {
            return 0;
          }
          if (9 < (byte)(param_4[9] - 0x30U)) {
            return 0;
          }
          if (9 < (byte)(param_4[10] - 0x30U)) {
            return 0;
          }
          if (9 < (byte)(param_4[0xb] - 0x30U)) {
            return 0;
          }
          if ((byte)(param_4[0xc] - 0x30U) < 10) {
            return 0;
          }
          iVar2 = (int)param_4[0xb] + (((int)param_4[10] + param_4[9] * 10) * 5 + -0xa68) * 2;
          *(int *)(param_2 + 0x150) = iVar2;
          *(int *)(param_2 + 0x13dc) = iVar2;
          return 0;
        }
      }
      *(undefined1 *)(param_3 + 0xd5) = 1;
    }
    else if (*(int *)(param_2 + 0x150) - 200U < 100) {
      FUN_180150ee0(param_2,"Ignoring Content-Length in CONNECT %03d response");
    }
    else {
      FUN_180176b60(param_4 + 0xf,0,10,param_3 + 200);
    }
  }
  else {
    lVar3 = FUN_180159440(param_4);
    if (lVar3 == 0) {
      return 0x1b;
    }
    FUN_180150f80(param_2,param_1,"CONNECT: fwd auth header \'%s\'",param_4);
    iVar2 = FUN_18015b490(param_2,iVar2 == 0x197,lVar3);
    (*(code *)PTR_free_1803bd538)(lVar3);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return 0;
}



// ===== FUN_180181240 @ 180181240 (size 896)

ulonglong FUN_180181240(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  char local_res8 [16];
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  longlong local_50 [3];
  
  uVar5 = FUN_1801501b0();
  *param_4 = 0;
  bVar1 = false;
  cVar2 = FUN_1801503e0(param_2,*(undefined4 *)(param_1 + 0x20));
  if (cVar2 == '\0') {
LAB_1801815a6:
    uVar10 = 0;
  }
  else {
    if (*(int *)(param_3 + 0xc0) == 0) {
LAB_180181576:
      uVar10 = 0;
      if (bVar1) {
        *param_4 = 1;
        return 0x38;
      }
    }
    else {
      do {
        uVar3 = FUN_1801513e0(param_2,uVar5,local_res8,1,local_50);
        if (uVar3 == 0x51) goto LAB_1801815a6;
        iVar4 = FUN_180160d50(param_2);
        if (iVar4 != 0) {
          return 0x2a;
        }
        if (uVar3 != 0) {
          *(undefined4 *)(param_3 + 0xc0) = 0;
          *param_4 = 1;
          return (ulonglong)uVar3;
        }
        uVar10 = 0;
        if (local_50[0] < 1) {
          if (((*(int *)(param_2 + 0x210) == 0) || (*(int *)(param_2 + 0xe40) == 0)) ||
             (*(longlong *)(param_2 + 0x1340) == 0)) {
            bVar1 = true;
            FUN_180150e00(param_2,"Proxy CONNECT aborted");
          }
          else {
            *(undefined1 *)(param_3 + 0xd5) = 1;
            FUN_180150ee0(param_2,"Proxy CONNECT connection closed");
            bVar1 = false;
          }
          *(undefined4 *)(param_3 + 0xc0) = 0;
          goto LAB_180181576;
        }
        if (*(int *)(param_3 + 0xc0) == 2) {
          if (*(longlong *)(param_3 + 200) == 0) {
            local_50[1] = 0;
            puVar7 = local_res20;
            plVar13 = local_50 + 1;
            pcVar8 = local_res8;
LAB_180181335:
            iVar4 = FUN_180185260(param_2,pcVar8,1,plVar13,puVar7);
            if (iVar4 == -1) {
              FUN_180150ee0(param_2,"chunk reading DONE");
              goto LAB_1801814ca;
            }
          }
          else {
            lVar6 = *(longlong *)(param_3 + 200) + -1;
            *(longlong *)(param_3 + 200) = lVar6;
            if (lVar6 < 1) {
              *(undefined4 *)(param_3 + 0xc0) = 0;
              *param_4 = 1;
              goto LAB_1801814eb;
            }
          }
        }
        else {
          iVar4 = thunk_FUN_180140070(param_3 + 0x70,local_res8,1);
          if (iVar4 != 0) {
            FUN_180150e00(param_2,"CONNECT response too large");
            return 0x38;
          }
          if (local_res8[0] == '\n') {
            *(longlong *)(param_3 + 0xb8) = *(longlong *)(param_3 + 0xb8) + 1;
            pcVar8 = (char *)FUN_18008d530(param_3 + 0x70);
            uVar9 = FUN_18013ff80(param_3 + 0x70);
            FUN_180150d10(param_2,1,pcVar8,uVar9);
            if (*(char *)(param_2 + 0xae7) == '\0') {
              uVar12 = 0x14;
              if (*(longlong *)(param_3 + 0xb8) == 1) {
                uVar12 = 0x1c;
              }
              uVar10 = FUN_180151330(param_2,uVar12,pcVar8,uVar9);
              if ((int)uVar10 != 0) {
                return uVar10;
              }
            }
            uVar11 = FUN_180159260(param_2,uVar9,1);
            uVar10 = uVar11 & 0xffffffff;
            if ((int)uVar11 != 0) {
              return uVar11;
            }
            if ((*pcVar8 == '\r') || (*pcVar8 == '\n')) {
              if ((*(int *)(param_2 + 0x150) == 0x197) && (*(char *)(param_2 + 0x13b9) == '\0')) {
                *(undefined4 *)(param_3 + 0xc0) = 2;
                if (*(longlong *)(param_3 + 200) != 0) {
                  FUN_180150ee0(param_2,"Ignore %I64d bytes of response-body");
                  goto LAB_1801814d0;
                }
                if (*(char *)(param_3 + 0xd4) != '\0') {
                  FUN_180150ee0(param_2,"Ignore chunked response-body");
                  *(undefined1 *)(param_2 + 0x1cd) = 1;
                  plVar13 = local_50;
                  if (pcVar8[1] == '\n') {
                    pcVar8 = pcVar8 + 1;
                  }
                  puVar7 = local_58;
                  pcVar8 = pcVar8 + 1;
                  goto LAB_180181335;
                }
                FUN_180150f80(param_2,param_1,"CONNECT: no content-length or chunked");
              }
LAB_1801814ca:
              *(undefined4 *)(param_3 + 0xc0) = 0;
            }
            else {
              uVar11 = FUN_180180f90(param_1,param_2,param_3,pcVar8);
              uVar10 = uVar11 & 0xffffffff;
              if ((int)uVar11 != 0) {
                return uVar11;
              }
              FUN_18013ff90(param_3 + 0x70);
            }
          }
        }
LAB_1801814d0:
      } while (*(int *)(param_3 + 0xc0) != 0);
    }
    *param_4 = 1;
    if ((int)uVar10 == 0) {
LAB_1801814eb:
      if (99 < *(int *)(param_2 + 0x13dc) - 200U) {
        uVar3 = FUN_180159880(param_2);
        uVar10 = (ulonglong)uVar3;
      }
    }
  }
  return uVar10;
}



// ===== FUN_1801815c0 @ 1801815c0 (size 215)

void FUN_1801815c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0xd0) != 5) {
      if (*(int *)(lVar1 + 0xd0) == 1) {
        *(undefined1 *)(param_2 + 0x1cd) = 0;
      }
      FUN_180150f80(param_2,param_1,"new tunnel state \'failed\'");
      *(undefined4 *)(lVar1 + 0xd0) = 5;
      FUN_18013ff90(lVar1 + 0x70);
      FUN_18013ff90(lVar1 + 0x90);
      *(undefined4 *)(param_2 + 0x13d8) = 0;
      (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_2 + 0x1340));
      *(undefined8 *)(param_2 + 0x1340) = 0;
    }
    FUN_18013ff30(lVar1 + 0x70);
    FUN_18013ff30(lVar1 + 0x90);
    (*(code *)PTR_free_1803bd538)(lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// ===== FUN_1801816a0 @ 1801816a0 (size 67)

void FUN_1801816a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_18013ff90(param_3 + 0x70);
  FUN_18013ff90(param_3 + 0x90);
  *(undefined4 *)(param_3 + 0xc0) = 1;
  *(undefined4 *)(param_3 + 0xd0) = 0;
  *(undefined8 *)(param_3 + 200) = 0;
  *(undefined1 *)(param_3 + 0xd5) = 0;
  return;
}



// ===== FUN_1801816f0 @ 1801816f0 (size 429)

ulonglong FUN_1801816f0(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined *puVar7;
  uint local_res8 [2];
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) != '\0') {
    *param_4 = '\x01';
    return 0;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  local_res8[0] = (uint)uVar2;
  if (local_res8[0] != 0) {
    return uVar2;
  }
  if (*param_4 == (char)uVar2) {
    return uVar2;
  }
  if (*piVar1 == 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x4c8) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x9a8);
      puVar7 = &DAT_1803081d8;
      if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x2f4) != '\0') {
        puVar7 = &DAT_1803081d0;
      }
      if (lVar3 == 0) {
        lVar3 = param_2 + 0x145c;
      }
      uVar2 = FUN_18013fef0(*(longlong *)(param_1 + 0x10) + 8,"PROXY %s %s %s %i %i\r\n",puVar7,
                            lVar3,param_2 + 0x1424,*(undefined4 *)(param_2 + 0x148c),
                            *(undefined4 *)(param_2 + 0x1454));
    }
    else {
      uVar2 = thunk_FUN_180140070(*(longlong *)(param_1 + 0x10) + 8,"PROXY UNKNOWN\r\n",0xf);
    }
    if ((int)uVar2 == 0) {
      *piVar1 = 1;
      goto LAB_1801817fd;
    }
  }
  else {
    local_res8[0] = 0;
    if (*piVar1 == 1) {
LAB_1801817fd:
      local_res8[0] = 0;
      lVar3 = FUN_18013ff80(piVar1 + 2);
      if (lVar3 == 0) {
LAB_18018185c:
        *piVar1 = 2;
        goto LAB_180181862;
      }
      uVar4 = FUN_18008d530(piVar1 + 2);
      lVar5 = FUN_180150bb0(param_2,*(undefined4 *)(param_1 + 0x20),uVar4,lVar3,local_res8);
      if (lVar5 < 0) goto LAB_18018186b;
      FUN_18013ffd0(piVar1 + 2,lVar3 - lVar5);
      lVar3 = FUN_18013ff80();
      if (lVar3 == 0) goto LAB_18018185c;
      uVar2 = 0;
    }
    else {
LAB_180181862:
      FUN_18013ff30();
LAB_18018186b:
      uVar2 = (ulonglong)local_res8[0];
      if (local_res8[0] != 0) goto LAB_18018187c;
    }
    if (*piVar1 == 2) {
      cVar6 = '\x01';
      goto LAB_18018187e;
    }
  }
LAB_18018187c:
  cVar6 = '\0';
LAB_18018187e:
  *param_4 = cVar6;
  *(char *)(param_1 + 0x24) = cVar6;
  return uVar2;
}



// ===== FUN_1801818a0 @ 1801818a0 (size 69)

void FUN_1801818a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_180150f80(param_2,param_1,"destroy");
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_18013ff30(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001801818d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_1803bd538)(lVar1);
  return;
}



// ===== FUN_1801818f0 @ 1801818f0 (size 86)

void FUN_1801818f0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  
  FUN_180150f80(param_2,param_1,"close");
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *puVar1 = 0;
  FUN_18013ff90(puVar1 + 2);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  }
  return;
}



// ===== FUN_180181950 @ 180181950 (size 87)

undefined8 FUN_180181950(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  if ((((int)uVar1 == 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != (char)uVar1)) &&
     (*(char *)(param_1 + 0x24) == (char)uVar1)) {
    uVar1 = FUN_1801501b0(param_1,param_2);
    *param_3 = uVar1;
    uVar1 = 0x10000;
  }
  return uVar1;
}



// ===== FUN_1801819b0 @ 1801819b0 (size 166)

/* WARNING: Removing unreachable block (ram,0x000180181a38) */

int FUN_1801819b0(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  puVar2 = (undefined4 *)(*(code *)PTR_calloc_1803bd550)(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    return 0x1b;
  }
  *puVar2 = 0;
  FUN_18013ff60(puVar2 + 2,0x800);
  iVar1 = FUN_18014fd90(local_res18,&PTR_s_HAPROXY_1803bdac0,puVar2);
  if (iVar1 == 0) {
    FUN_1801501f0(param_1,local_res18[0]);
  }
  else {
    FUN_18013ff30(puVar2 + 2);
    (*(code *)PTR_free_1803bd538)(puVar2);
  }
  return iVar1;
}



// ===== FUN_180181a60 @ 180181a60 (size 875)

int FUN_180181a60(longlong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int *piVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  piVar1 = *(int **)(param_1 + 0x10);
  iVar5 = 0;
  if (*(char *)(param_1 + 0x24) != '\0') {
    *param_4 = 1;
    return 0;
  }
  *param_4 = 0;
  puVar6 = (undefined8 *)FUN_180148b70(&local_48);
  iVar4 = *piVar1;
  uVar12 = *puVar6;
  uVar3 = puVar6[1];
  if (iVar4 == 0) {
    FUN_180150f80(param_2,param_1,"connect, init");
    *(undefined8 *)(piVar1 + 4) = uVar12;
    *(undefined8 *)(piVar1 + 6) = uVar3;
    if ((char)piVar1[0x15] == '\0') {
      if ((char)piVar1[0x21] != '\0') {
        uVar11 = CONCAT44(uVar13,(uint)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x4f7));
        FUN_180182570(piVar1 + 0x16,param_1,param_2,&DAT_1803082f8,uVar11);
        uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
      }
    }
    else {
      uVar11 = CONCAT44(uVar13,5);
      FUN_180182570(piVar1 + 10,param_1,param_2,&DAT_1803000e8,uVar11);
      uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
      if ((char)piVar1[0x21] != '\0') {
        FUN_18013c1c0(param_2,(longlong)piVar1[0x22],0xe);
      }
    }
    *piVar1 = 1;
  }
  else if (iVar4 != 1) {
    if (iVar4 == 2) {
      *(undefined1 *)(param_1 + 0x24) = 1;
      *param_4 = 1;
    }
    else if (iVar4 == 3) {
      iVar5 = piVar1[8];
      *(undefined1 *)(param_1 + 0x24) = 0;
      *param_4 = 0;
    }
    goto LAB_180181d9a;
  }
  if (((((char)piVar1[0x15] != '\0') && (*(longlong *)(piVar1 + 0xc) != 0)) && (piVar1[0xe] == 0))
     && ((iVar4 = FUN_180182510(piVar1 + 10,param_1,param_2,param_4), iVar4 == 0 && (*param_4 != 0))
        )) {
    iVar5 = FUN_180182230(param_1,param_2,piVar1 + 10);
    goto LAB_180181d9a;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((*(char *)(lVar2 + 0x84) != '\0') && (*(longlong *)(lVar2 + 0x60) == 0)) {
    if (((*(char *)(lVar2 + 0x54) != '\0') && (*(longlong *)(lVar2 + 0x30) != 0)) &&
       (*(int *)(lVar2 + 0x38) == 0)) {
      local_58 = *(undefined4 *)(lVar2 + 0x10);
      uStack_54 = *(undefined4 *)(lVar2 + 0x14);
      uStack_50 = *(undefined4 *)(lVar2 + 0x18);
      uStack_4c = *(undefined4 *)(lVar2 + 0x1c);
      local_48 = uVar12;
      uStack_40 = uVar3;
      lVar7 = FUN_180148c00(&local_48,&local_58);
      uVar10 = (ulonglong)*(int *)(lVar2 + 0x8c);
      if (lVar7 < (longlong)uVar10) {
        if (*(int *)(lVar2 + 0x88) <= lVar7) {
          if (*(int *)(lVar2 + 0x50) < 0) {
            uVar13 = 0;
            (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x68))
                      (*(longlong **)(lVar2 + 0x30),param_2,2,lVar2 + 0x50,0);
            if (*(int *)(lVar2 + 0x50) < 0) {
              uVar10 = (ulonglong)*(uint *)(lVar2 + 0x88);
              pcVar9 = "soft timeout of %dms reached, h3 has not seen any data, starting h21";
              goto LAB_180181c33;
            }
          }
          FUN_18013c1c0(param_2,*(int *)(lVar2 + 0x8c) - lVar7,0xe);
        }
        goto LAB_180181c6b;
      }
      pcVar9 = "hard timeout of %dms reached, starting h21";
LAB_180181c33:
      FUN_180150f80(param_2,param_1,pcVar9,uVar10);
    }
    uVar12 = CONCAT44(uVar13,(uint)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x4f7));
    FUN_180182570(piVar1 + 0x16,param_1,param_2,&DAT_1803082f8,uVar12);
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  }
LAB_180181c6b:
  if ((((char)piVar1[0x21] != '\0') && (*(longlong *)(piVar1 + 0x18) != 0)) && (piVar1[0x1a] == 0))
  {
    FUN_180150f80(param_2,param_1,"connect, check h21");
    iVar4 = FUN_180182510(piVar1 + 0x16,param_1,param_2,param_4);
    if ((iVar4 == 0) && (*param_4 != 0)) {
      iVar5 = FUN_180182230(param_1,param_2,piVar1 + 0x16);
      goto LAB_180181d9a;
    }
  }
  if ((((char)piVar1[0x15] == '\0') || (piVar1[0xe] != 0)) &&
     (((char)piVar1[0x21] == '\0' || (piVar1[0x1a] != 0)))) {
    FUN_180150f80(param_2,param_1,"connect, all failed");
    piVar8 = piVar1 + 0x1a;
    if ((char)piVar1[0x15] != '\0') {
      piVar8 = piVar1 + 0xe;
    }
    iVar5 = *piVar8;
    piVar1[8] = iVar5;
    *piVar1 = 3;
  }
  else {
    *param_4 = 0;
  }
LAB_180181d9a:
  FUN_180150f80(param_2,param_1,"connect -> %d, done=%d",iVar5,CONCAT44(uVar13,(uint)*param_4));
  return iVar5;
}



// ===== FUN_180181dd0 @ 180181dd0 (size 393)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180181dd0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  uint local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  uVar5 = 0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar6 = 0;
    local_78[0] = *(longlong *)(param_1 + 0x10) + 0x28;
    uVar3 = 0;
    local_78[1] = *(longlong *)(param_1 + 0x10) + 0x58;
    do {
      puVar1 = (undefined8 *)local_78[uVar3];
      if (((*(char *)((longlong)puVar1 + 0x2c) != '\0') && (puVar1[1] != 0)) &&
         (*(int *)(puVar1 + 2) == 0)) {
        uVar2 = FUN_1801501a0(puVar1[1],param_2,local_78 + 2);
        local_88 = uVar2;
        FUN_180150f80(param_2,param_1,"get_selected_socks(%s) -> %x",*puVar1);
        if (uVar2 != 0) {
          uVar4 = 0;
          do {
            if (4 < uVar6) break;
            if ((uVar2 >> ((uint)uVar4 & 0x1f) & 1) != 0 ||
                (uVar2 >> ((uint)(uVar4 + 0x10) & 0x1f) & 1) != 0) {
              *(longlong *)(param_3 + uVar6 * 8) = local_78[uVar4 + 2];
              if ((uVar2 & 1 << ((byte)(uVar4 + 0x10) & 0x1f)) != 0) {
                uVar5 = uVar5 | 1 << ((uint)uVar6 + 0x10 & 0x1f);
              }
              if ((uVar2 & 1 << ((byte)uVar4 & 0x1f)) != 0) {
                uVar5 = uVar5 | 1 << ((uint)uVar6 & 0x1f);
              }
              uVar6 = uVar6 + 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < 5);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
    FUN_180150f80(param_2,param_1,"get_selected_socks -> %x",uVar5);
    uVar3 = (ulonglong)uVar5;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  }
  return uVar3;
}



// ===== FUN_180181f60 @ 180181f60 (size 144)

undefined8 FUN_180181f60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000180181f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
    return uVar4;
  }
  FUN_180150f80(param_2,param_1,"data_pending");
  plVar2 = *(longlong **)(lVar1 + 0x30);
  if (((plVar2 != (longlong *)0x0) && (*(int *)(lVar1 + 0x38) == 0)) &&
     (cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2), cVar3 != '\0')) {
    return 1;
  }
  plVar2 = *(longlong **)(lVar1 + 0x60);
  if (((plVar2 == (longlong *)0x0) || (*(int *)(lVar1 + 0x68) != 0)) ||
     (cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2), cVar3 == '\0')) {
    return 0;
  }
  return 1;
}



// ===== FUN_180181ff0 @ 180181ff0 (size 101)

undefined8
FUN_180181ff0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 *param_5
             )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_18 [24];
  
  if (*(char *)(param_1 + 0x24) != '\0') {
LAB_180182037:
    if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
      return 0x30;
    }
                    /* WARNING: Could not recover jumptable at 0x000180182047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
    return uVar2;
  }
  if (param_3 == 4) {
    uVar3 = 4;
  }
  else {
    if (param_3 != 5) goto LAB_180182037;
    uVar3 = 5;
  }
  puVar1 = (undefined8 *)FUN_1801823d0(local_18,param_1,param_2,uVar3);
  uVar2 = puVar1[1];
  *param_5 = *puVar1;
  param_5[1] = uVar2;
  return 0;
}



// ===== FUN_180182060 @ 180182060 (size 90)

void FUN_180182060(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_180150f80(param_2,param_1,"close");
  FUN_180182600(param_1,param_2);
  plVar1 = *(longlong **)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    FUN_1801500b0(param_1 + 8,param_2);
  }
  return;
}



// ===== FUN_1801820c0 @ 1801820c0 (size 79)

void FUN_1801820c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_180150f80(param_2,param_1,"destroy");
  FUN_180182600(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000180182108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_1803bd538)(uVar1);
  return;
}



// ===== FUN_180182110 @ 180182110 (size 280)

ulonglong FUN_180182110(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 local_res10;
  
  bVar7 = false;
  uVar6 = 1;
  if (*(char *)(param_2 + 0x301) == '\0') {
    uVar3 = 0;
  }
  else {
    if (*(byte *)(param_1 + 0x13b0) == 0x1f) {
      uVar3 = FUN_18014d630();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      bVar7 = true;
      uVar6 = 0;
    }
    else if (0x1d < *(byte *)(param_1 + 0x13b0)) {
      iVar2 = FUN_18014d630();
      bVar7 = iVar2 == 0;
    }
    local_res10 = 0;
    lVar4 = (*(code *)PTR_calloc_1803bd550)(0x90,1);
    if (lVar4 == 0) {
      uVar5 = 0x1b;
    }
    else {
      *(undefined8 *)(lVar4 + 8) = param_4;
      *(bool *)(lVar4 + 0x54) = bVar7;
      *(undefined1 *)(lVar4 + 0x84) = uVar6;
      uVar5 = FUN_18014fd90(&local_res10,&PTR_s_HTTPS_CONNECT_1803bdb30,lVar4);
      if (uVar5 == 0) {
        FUN_180182600(local_res10,param_1);
        uVar1 = local_res10;
        (*(code *)PTR_free_1803bd538)(0);
        FUN_18014ff30(param_1,param_2,param_3,uVar1);
        return 0;
      }
    }
    (*(code *)PTR_free_1803bd538)(lVar4);
    uVar3 = (ulonglong)uVar5;
  }
  return uVar3;
}



// ===== FUN_180182230 @ 180182230 (size 405)

undefined8 FUN_180182230(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar8;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  if (param_3 != (undefined8 *)(puVar3 + 10)) {
    if (*(longlong *)(puVar3 + 0xc) != 0) {
      FUN_18014ff60();
      FUN_1801500b0(puVar3 + 0xc,param_2);
      *(undefined8 *)(puVar3 + 0xc) = 0;
    }
    puVar3[0xe] = 0;
    puVar3[0x14] = 0xffffffff;
  }
  if (param_3 != (undefined8 *)(puVar3 + 0x16)) {
    if (*(longlong *)(puVar3 + 0x18) != 0) {
      FUN_18014ff60(*(longlong *)(puVar3 + 0x18),param_2);
      FUN_1801500b0(puVar3 + 0x18,param_2);
      *(undefined8 *)(puVar3 + 0x18) = 0;
    }
    puVar3[0x1a] = 0;
    puVar3[0x20] = 0xffffffff;
  }
  local_48 = *(undefined4 *)(param_3 + 3);
  uStack_44 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_40 = *(undefined4 *)(param_3 + 4);
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0x24);
  puVar5 = (undefined4 *)FUN_180148b70(local_28);
  local_38 = *puVar5;
  uStack_34 = puVar5[1];
  uStack_30 = puVar5[2];
  uStack_2c = puVar5[3];
  if (*(int *)(param_3 + 5) < 0) {
    uVar8 = 0;
    (**(code **)(*(longlong *)param_3[1] + 0x68))((longlong *)param_3[1],param_2,2,param_3 + 5,0);
  }
  uVar2 = *(undefined4 *)(param_3 + 5);
  uVar4 = FUN_180148c00(&local_38,&local_48);
  uVar7 = CONCAT44(uVar8,uVar4);
  FUN_180150f80(param_2,param_1,"connect+handshake %s: %dms, 1st data: %dms",*param_3,uVar7,
                CONCAT44(uVar9,uVar2));
  *(undefined8 *)(param_1 + 8) = param_3[1];
  param_3[1] = 0;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + 0x4f5);
  if (cVar1 == '\x02') {
    pcVar6 = "using HTTP/1.1";
  }
  else if (cVar1 == '\x03') {
    pcVar6 = "using HTTP/2";
  }
  else if (cVar1 == '\x1e') {
    pcVar6 = "using HTTP/3";
  }
  else {
    pcVar6 = "using HTTP/1.x";
  }
  FUN_180150ee0(param_2,pcVar6);
  *puVar3 = 2;
  *(undefined1 *)(param_1 + 0x24) = 1;
  FUN_18014ff70(*(undefined8 *)(param_1 + 8),param_2,1,0x100,uVar7 & 0xffffffff00000000,0);
  return 0;
}



// ===== FUN_1801823d0 @ 1801823d0 (size 309)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1801823d0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_2 + 0x10);
  local_38 = 0;
  uStack_30 = 0;
  cVar1 = *(char *)(lVar5 + 0x84);
  *param_1 = 0;
  param_1[1] = 0;
  if ((cVar1 != '\0') && (plVar2 = *(longlong **)(lVar5 + 0x60), plVar2 != (longlong *)0x0)) {
    local_68 = &local_38;
    iVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,param_3,param_4,0);
    if ((iVar3 == 0) && ((local_38 != 0 || ((int)uStack_30 != 0)))) {
      local_58 = (undefined4)*param_1;
      uStack_54 = *(undefined4 *)((longlong)param_1 + 4);
      iStack_50 = (int)param_1[1];
      uStack_4c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_48 = (undefined4)local_38;
      uStack_44 = local_38._4_4_;
      iStack_40 = (int)uStack_30;
      uStack_3c = uStack_30._4_4_;
      lVar4 = FUN_180148cd0(&local_48,&local_58);
      if (0 < lVar4) {
        *param_1 = local_38;
        param_1[1] = uStack_30;
      }
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  if ((*(char *)(lVar5 + 0x54) != '\0') &&
     (plVar2 = *(longlong **)(lVar5 + 0x30), plVar2 != (longlong *)0x0)) {
    local_68 = &local_38;
    iVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,param_3,param_4,0);
    if ((iVar3 == 0) && ((local_38 != 0 || ((int)uStack_30 != 0)))) {
      local_48 = (undefined4)*param_1;
      uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
      iStack_40 = (int)param_1[1];
      uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_58 = (undefined4)local_38;
      uStack_54 = local_38._4_4_;
      iStack_50 = (int)uStack_30;
      uStack_4c = uStack_30._4_4_;
      lVar5 = FUN_180148cd0(&local_58,&local_48);
      if (0 < lVar5) {
        *param_1 = local_38;
        param_1[1] = uStack_30;
      }
    }
  }
  return param_1;
}



// ===== FUN_180182510 @ 180182510 (size 81)

undefined4 FUN_180182510(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar3 = FUN_180150020(uVar2,param_3,0);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FUN_180182570 @ 180182570 (size 143)

void FUN_180182570(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 local_18 [16];
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  *param_1 = param_4;
  *(undefined8 *)(param_2 + 8) = 0;
  puVar6 = (undefined4 *)FUN_180148b70(local_18);
  uVar5 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *(undefined4 *)(param_1 + 3) = *puVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  uVar5 = FUN_180152260(param_2,param_3,*(undefined8 *)(lVar2 + 8),param_5,1);
  *(undefined4 *)(param_1 + 2) = uVar5;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  return;
}



// ===== FUN_180182600 @ 180182600 (size 176)

void FUN_180182600(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(longlong *)(puVar1 + 0xc) != 0) {
      FUN_18014ff60();
      FUN_1801500b0(puVar1 + 0xc,param_2);
      *(undefined8 *)(puVar1 + 0xc) = 0;
    }
    puVar1[0xe] = 0;
    puVar1[0x14] = 0xffffffff;
    if (*(longlong *)(puVar1 + 0x18) != 0) {
      FUN_18014ff60(*(longlong *)(puVar1 + 0x18),param_2);
      FUN_1801500b0(puVar1 + 0x18,param_2);
      *(undefined8 *)(puVar1 + 0x18) = 0;
    }
    puVar1[0x1a] = 0;
    puVar1[0x20] = 0xffffffff;
    *puVar1 = 0;
    puVar1[8] = 0;
    puVar1[0x23] = *(undefined4 *)(param_2 + 0x308);
    puVar1[0x22] = *(uint *)(param_2 + 0x308) >> 1;
  }
  return;
}



// ===== FUN_1801826b0 @ 1801826b0 (size 463)

undefined8 FUN_1801826b0(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x20);
  piVar6 = *(int **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) != '\0') {
    *param_4 = '\x01';
    return 0;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*param_4 == (char)uVar5) {
    return uVar5;
  }
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)(*(code *)PTR_calloc_1803bd550)(0x38,1);
    if (piVar6 == (int *)0x0) {
      return 0x1b;
    }
    *(int **)(param_1 + 0x10) = piVar6;
  }
  if (*piVar6 == 0) {
    *piVar6 = 1;
    if (*(char *)(lVar2 + 0x2e8) == '\0') {
      if (*(char *)(lVar2 + 0x2f1) == '\0') {
        if (iVar4 == 1) {
          uVar5 = *(undefined8 *)(lVar2 + 0x88);
        }
        else {
          uVar5 = *(undefined8 *)(lVar2 + 0x70);
        }
      }
      else {
        uVar5 = *(undefined8 *)(lVar2 + 0xa0);
      }
    }
    else {
      uVar5 = *(undefined8 *)(lVar2 + 0xf8);
    }
    *(undefined8 *)(piVar6 + 6) = uVar5;
    if (*(char *)(lVar2 + 0x2e8) == '\0') {
      if (iVar4 == 1) {
        uVar3 = (uint)*(ushort *)(lVar2 + 0x4f2);
      }
      else if (*(char *)(lVar2 + 0x2f2) == '\0') {
        uVar3 = *(uint *)(lVar2 + 0x4e4);
      }
      else {
        uVar3 = *(uint *)(lVar2 + 0x4e8);
      }
    }
    else {
      uVar3 = *(uint *)(lVar2 + 0x108);
    }
    piVar6[8] = uVar3;
    *(undefined8 *)(piVar6 + 10) = *(undefined8 *)(lVar2 + 0xd8);
    *(undefined8 *)(piVar6 + 0xc) = *(undefined8 *)(lVar2 + 0xe0);
  }
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + 0xd4);
  if (cVar1 == '\x04') {
LAB_18018280d:
    iVar4 = FUN_180182a20(param_1,piVar6,param_2);
  }
  else {
    if (cVar1 != '\x05') {
      if (cVar1 == '\x06') goto LAB_18018280d;
      if (cVar1 != '\a') {
        FUN_180150e00(param_2,"unknown proxytype option given");
        uVar5 = 7;
        goto LAB_18018285f;
      }
    }
    iVar4 = FUN_180182fc0(param_1,piVar6,param_2);
  }
  if (iVar4 == 0) {
    uVar5 = 0;
    if (*piVar6 == 0x11) {
      *(undefined1 *)(param_1 + 0x24) = 1;
      FUN_180141d20(param_2,lVar2);
      uVar5 = 0;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        (*(code *)PTR_free_1803bd538)();
        uVar5 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
  }
  else {
    uVar5 = 0x61;
    *(int *)(param_2 + 0x14b0) = iVar4;
  }
LAB_18018285f:
  *param_4 = *(char *)(param_1 + 0x24);
  return uVar5;
}



// ===== FUN_180182880 @ 180182880 (size 138)

undefined8 FUN_180182880(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = *(int **)(param_1 + 0x10);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  if (((((int)uVar3 == 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != (char)uVar3)) &&
      (*(char *)(param_1 + 0x24) == (char)uVar3)) && (piVar2 != (int *)0x0)) {
    uVar3 = FUN_1801501b0(param_1,param_2);
    *param_3 = uVar3;
    iVar1 = *piVar2;
    if (((iVar1 == 4) || (iVar1 == 8)) ||
       ((iVar1 == 10 || ((iVar1 == 0xf || (uVar3 = 0x10000, iVar1 == 0x10)))))) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FUN_180182910 @ 180182910 (size 67)

void FUN_180182910(longlong param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)PTR_free_1803bd538)();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018018294f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2);
  return;
}



// ===== FUN_1801829d0 @ 1801829d0 (size 65)

ulonglong FUN_1801829d0(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 local_res18 [2];
  
  uVar1 = FUN_18014fd90(local_res18,&PTR_s_SOCKS_PROXYY_1803bdba0,0);
  if ((int)uVar1 == 0) {
    FUN_1801501f0(param_1,local_res18[0]);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_180182a20 @ 180182a20 (size 1374)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180182a20(longlong param_1,int *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar11;
  longlong lVar10;
  undefined **ppuVar12;
  ulonglong uVar14;
  ulonglong uVar13;
  char *pcVar15;
  undefined **ppuVar16;
  undefined1 auStack_d8 [32];
  longlong **local_b8;
  uint local_b0;
  uint local_a8;
  uint local_a0;
  longlong *local_98 [2];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_d8;
  ppuVar16 = &PTR_1802ead18;
  lVar10 = *(longlong *)(param_1 + 0x18);
  pcVar9 = *(char **)(param_3 + 0xce0);
  cVar1 = *(char *)(lVar10 + 0xd4);
  local_98[0] = (longlong *)0x0;
  switch(*param_2) {
  case 1:
    *(undefined1 *)(lVar10 + 0x4f8) = 1;
    if (*(char *)(lVar10 + 0x2e8) != '\0') {
      local_b8 = (longlong **)CONCAT44(local_b8._4_4_,param_2[8]);
      ppuVar12 = &PTR_1802ead18;
      if (cVar1 == '\x06') {
        ppuVar12 = (undefined **)&DAT_180308400;
      }
      FUN_180150ee0(param_3,"SOCKS4%s: connecting to HTTP proxy %s port %d",ppuVar12,
                    *(undefined8 *)(param_2 + 6));
    }
    FUN_180150ee0(param_3,"SOCKS4 communication to %s:%d",*(undefined8 *)(param_2 + 6),param_2[8]);
    pcVar9[0] = '\x04';
    pcVar9[1] = '\x01';
    pcVar9[2] = (char)((uint)param_2[8] >> 8);
    pcVar9[3] = (char)param_2[8];
    if (cVar1 == '\x06') {
      if (*param_2 != 9) {
        *param_2 = 9;
      }
      goto switchD_180182a9c_caseD_9;
    }
    local_b8 = local_98;
    iVar4 = FUN_180157110(param_3,*(undefined8 *)(param_2 + 6),param_2[8],1);
    if (iVar4 == -1) {
      return 0x1b;
    }
    iVar5 = *param_2;
    if (iVar4 != 1) goto LAB_180182b58;
    if (iVar5 != 10) {
      *param_2 = 10;
    }
    ppuVar16 = *(undefined ***)(param_2 + 6);
    pcVar9 = "SOCKS4 non-blocking resolve of %s";
    goto LAB_180182f49;
  default:
    goto switchD_180182a9c_caseD_2;
  case 4:
    goto switchD_180182a9c_caseD_4;
  case 9:
    goto switchD_180182a9c_caseD_9;
  case 10:
    break;
  case 0xb:
    goto switchD_180182a9c_caseD_b;
  case 0xe:
    goto switchD_180182a9c_caseD_e;
  }
  local_98[0] = (longlong *)
                FUN_180156820(param_3,*(undefined8 *)(param_2 + 6),*(undefined4 *)(lVar10 + 0x4e0));
  if (local_98[0] == (longlong *)0x0) {
    iVar5 = FUN_180157640(param_3,local_98);
    if (local_98[0] == (longlong *)0x0) {
      if (iVar5 == 0) {
        return 0;
      }
      return 0x1b;
    }
  }
  else {
    *(longlong **)(param_3 + 0xe50) = local_98[0];
    *(undefined1 *)(param_3 + 0xe70) = 1;
    FUN_180150ee0(param_3,"Hostname \'%s\' was found",*(undefined8 *)(param_2 + 6));
    iVar5 = *param_2;
LAB_180182b58:
    if (iVar5 != 0xb) {
      *param_2 = 0xb;
    }
  }
switchD_180182a9c_caseD_b:
  if (local_98[0] == (longlong *)0x0) {
    FUN_180150e00(param_3,"Failed to resolve \"%s\" for SOCKS4 connect.",
                  *(undefined8 *)(param_2 + 6));
  }
  else {
    for (lVar10 = *local_98[0]; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x28)) {
      if (*(int *)(lVar10 + 4) == 2) {
        FUN_1801570d0(lVar10,local_88,0x40);
        lVar7 = *(longlong *)(lVar10 + 0x20);
        pcVar9[4] = *(char *)(lVar7 + 4);
        pcVar9[5] = *(char *)(lVar7 + 5);
        pcVar9[6] = *(char *)(lVar7 + 6);
        pcVar9[7] = *(char *)(lVar7 + 7);
        FUN_180150ee0(param_3,"SOCKS4 connect to IPv4 %s (locally resolved)",local_88);
        FUN_1801576b0(param_3,local_98[0]);
        goto LAB_180182b9c;
      }
    }
    FUN_180150e00(param_3,"SOCKS4 connection to %s not supported",*(undefined8 *)(param_2 + 6));
LAB_180182b9c:
    if (lVar10 != 0) {
switchD_180182a9c_caseD_9:
      pcVar9[8] = '\0';
      _Src = *(void **)(param_2 + 10);
      if (_Src != (void *)0x0) {
        uVar13 = 0xffffffffffffffff;
        do {
          uVar14 = uVar13;
          uVar13 = uVar14 + 1;
        } while (*(char *)((longlong)_Src + uVar13) != '\0');
        if ((ulonglong)*(uint *)(param_3 + 0x6ec) - 8 <= uVar13) {
          FUN_180150e00(param_3,"Too long SOCKS proxy user name, can\'t use");
          return 0xb;
        }
        memcpy(pcVar9 + 8,_Src,uVar14 + 2);
      }
      lVar10 = -1;
      do {
        lVar7 = lVar10;
        lVar10 = lVar7 + 1;
      } while (pcVar9[lVar7 + 9] != '\0');
      lVar7 = lVar7 + 10;
      if (cVar1 == '\x06') {
        pcVar9[4] = '\0';
        pcVar9[5] = '\0';
        pcVar9[6] = '\0';
        pcVar9[7] = '\x01';
        pcVar8 = *(char **)(param_2 + 6);
        lVar10 = -1;
        do {
          lVar11 = lVar10;
          lVar10 = lVar11 + 1;
        } while (pcVar8[lVar10] != '\0');
        uVar13 = lVar11 + 2;
        if (0xff < uVar13) {
          FUN_180150e00(param_3,"SOCKS4: too long host name");
          return 9;
        }
        pcVar15 = pcVar9 + lVar7;
        do {
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar15 = cVar3;
          pcVar15 = pcVar15 + 1;
        } while (cVar3 != '\0');
        lVar7 = lVar7 + uVar13;
      }
      *(char **)(param_2 + 4) = pcVar9;
      *(longlong *)(param_2 + 2) = lVar7;
      if (*param_2 != 0xe) {
        *param_2 = 0xe;
      }
switchD_180182a9c_caseD_e:
      local_b8 = (longlong **)0x180308570;
      uVar6 = FUN_1801839d0(param_1,param_2,param_3,0x1d);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      if (*(longlong *)(param_2 + 2) == 0) {
        param_2[2] = 8;
        param_2[3] = 0;
        *(char **)(param_2 + 4) = pcVar9;
        if (*param_2 != 4) {
          *param_2 = 4;
        }
switchD_180182a9c_caseD_4:
        local_b8 = (longlong **)0x180308588;
        uVar6 = FUN_180183910(param_1,param_2,param_3,0xf);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        if (*(longlong *)(param_2 + 2) == 0) {
          if (*param_2 != 0x11) {
            *param_2 = 0x11;
          }
switchD_180182a9c_caseD_2:
          if (*pcVar9 != '\0') {
            FUN_180150e00(param_3,"SOCKS4 reply has wrong version, version should be 0.");
            return 2;
          }
          bVar2 = pcVar9[1];
          local_a0 = (uint)bVar2;
          if (bVar2 != 0x5a) {
            cVar1 = pcVar9[5];
            cVar3 = pcVar9[4];
            if (bVar2 == 0x5b) {
              local_a8 = (uint)CONCAT11(pcVar9[2],pcVar9[3]);
              local_b0 = (uint)(byte)pcVar9[7];
              local_b8 = (longlong **)CONCAT44(local_b8._4_4_,(uint)(byte)pcVar9[6]);
              FUN_180150e00(param_3,
                            "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed."
                            ,cVar3,cVar1);
              return 0x1a;
            }
            if (bVar2 == 0x5c) {
              local_a8 = (uint)CONCAT11(pcVar9[2],pcVar9[3]);
              local_b0 = (uint)(byte)pcVar9[7];
              local_b8 = (longlong **)CONCAT44(local_b8._4_4_,(uint)(byte)pcVar9[6]);
              FUN_180150e00(param_3,
                            "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
                            ,cVar3,cVar1);
              return 7;
            }
            if (bVar2 == 0x5d) {
              local_a8 = (uint)CONCAT11(pcVar9[2],pcVar9[3]);
              local_b0 = (uint)(byte)pcVar9[7];
              local_b8 = (longlong **)CONCAT44(local_b8._4_4_,(uint)(byte)pcVar9[6]);
              FUN_180150e00(param_3,
                            "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
                            ,cVar3,cVar1);
              return 8;
            }
            local_a8 = (uint)CONCAT11(pcVar9[2],pcVar9[3]);
            local_b0 = (uint)(byte)pcVar9[7];
            local_b8 = (longlong **)CONCAT44(local_b8._4_4_,(uint)(byte)pcVar9[6]);
            FUN_180150e00(param_3,
                          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.",
                          cVar3,cVar1);
            return 0x1f;
          }
          pcVar9 = "SOCKS4%s request granted.";
          if (cVar1 == '\x06') {
            ppuVar16 = (undefined **)&DAT_180308400;
          }
LAB_180182f49:
          FUN_180150ee0(param_3,pcVar9,ppuVar16);
        }
      }
      return 0;
    }
  }
  return 0x1b;
}



// ===== FUN_180182fc0 @ 180182fc0 (size 2308)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180182fc0(longlong param_1,int *param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  void *_Src;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong _Size;
  ulonglong uVar9;
  ulonglong uVar11;
  ulonglong uVar10;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  char local_98;
  longlong *local_90;
  longlong local_88 [6];
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_c8;
  uVar9 = 0xffffffffffffffff;
  local_88[0] = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_2 + 6);
  pcVar4 = *(char **)(param_3 + 0xce0);
  local_98 = *(char *)(local_88[0] + 0xd4);
  uVar10 = 0xffffffffffffffff;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)(lVar3 + uVar10) != '\0');
  _Size = 0;
  bVar1 = *(byte *)(param_3 + 0x6d3);
  local_90 = (longlong *)0x0;
  switch(*param_2) {
  case 1:
    if (*(char *)(local_88[0] + 0x2e8) != '\0') {
      FUN_180150ee0(param_3,"SOCKS5: connecting to HTTP proxy %s port %d",lVar3,param_2[8]);
    }
    if ((local_98 != '\x05') && (0xff < uVar10)) {
      FUN_180150e00(param_3,
                    "SOCKS5: the destination hostname is too long to be resolved remotely by the proxy."
                   );
      return 9;
    }
    if ((bVar1 & 0xfa) != 0) {
      FUN_180150ee0(param_3,"warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %u",bVar1);
    }
    if ((bVar1 & 1) == 0) {
      param_2[10] = 0;
      param_2[0xb] = 0;
    }
    *pcVar4 = '\x05';
    uVar8 = 3;
    pcVar4[2] = '\0';
    if (*(longlong *)(param_2 + 10) != 0) {
      pcVar4[3] = '\x02';
      uVar8 = 4;
    }
    pcVar4[1] = (char)uVar8 + -2;
    *(ulonglong *)(param_2 + 2) = (ulonglong)uVar8;
    *(char **)(param_2 + 4) = pcVar4;
    local_a8 = (longlong **)0x1803088b8;
    uVar7 = FUN_1801839d0(param_1,param_2,param_3,0x1d);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (*(longlong *)(param_2 + 2) != 0) {
      return 0;
    }
    if (*param_2 != 4) {
      *param_2 = 4;
    }
    break;
  case 2:
    local_a8 = (longlong **)0x1803088b8;
    uVar7 = FUN_1801839d0(param_1,param_2,param_3,0x1d);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (*(longlong *)(param_2 + 2) != 0) {
      return 0;
    }
    break;
  case 3:
    break;
  case 4:
    goto switchD_18018305a_caseD_4;
  default:
    goto switchD_18018305a_caseD_5;
  case 6:
    goto switchD_18018305a_caseD_6;
  case 7:
    goto switchD_18018305a_caseD_7;
  case 8:
    goto switchD_18018305a_caseD_8;
  case 9:
    goto switchD_18018305a_caseD_9;
  case 10:
    local_90 = (longlong *)FUN_180156820(param_3,lVar3,param_2[8]);
    if (local_90 != (longlong *)0x0) {
      *(longlong **)(param_3 + 0xe50) = local_90;
      *(undefined1 *)(param_3 + 0xe70) = 1;
      FUN_180150ee0(param_3,"SOCKS5: hostname \'%s\' found",*(undefined8 *)(param_2 + 6));
    }
    if ((local_90 == (longlong *)0x0) &&
       (iVar5 = FUN_180157640(param_3,&local_90), local_90 == (longlong *)0x0)) {
      if (iVar5 == 0) {
        return 0;
      }
      return 0x1b;
    }
  case 0xb:
    goto switchD_18018305a_caseD_b;
  case 0xc:
    pcVar4[2] = '\0';
    _Size = 3;
    pcVar4[0] = '\x05';
    pcVar4[1] = '\x01';
    if (local_98 == '\x05') goto switchD_18018305a_caseD_d;
    goto LAB_180183655;
  case 0xd:
    goto switchD_18018305a_caseD_d;
  case 0xe:
    goto switchD_18018305a_caseD_e;
  case 0xf:
    goto switchD_18018305a_caseD_f;
  case 0x10:
    goto switchD_18018305a_caseD_10;
  }
  param_2[2] = 2;
  param_2[3] = 0;
  *(char **)(param_2 + 4) = pcVar4;
switchD_18018305a_caseD_4:
  local_a8 = (longlong **)0x1803088d0;
  uVar7 = FUN_180183910(param_1,param_2,param_3,0xf);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if (*(longlong *)(param_2 + 2) != 0) {
    return 0;
  }
  if (*pcVar4 != '\x05') {
    FUN_180150e00(param_3,"Received invalid version in initial SOCKS5 response.");
    return 2;
  }
  cVar2 = pcVar4[1];
  if (cVar2 != '\0') {
    if (cVar2 != '\x02') {
      if (cVar2 == '\x01') {
        FUN_180150e00(param_3,"SOCKS5 GSSAPI per-message authentication is not supported.");
        return 5;
      }
      if (cVar2 == -1) {
        FUN_180150e00(param_3,"No authentication method was acceptable.");
        return 0xc;
      }
      FUN_180150e00(param_3,"Undocumented SOCKS5 mode attempted to be used by server.");
      return 0x20;
    }
    if (*param_2 != 6) {
      *param_2 = 6;
    }
switchD_18018305a_caseD_6:
    if ((*(longlong *)(param_2 + 10) == 0) || (lVar3 = *(longlong *)(param_2 + 0xc), lVar3 == 0)) {
      uVar9 = 0;
    }
    else {
      _Size = 0xffffffffffffffff;
      do {
        _Size = _Size + 1;
      } while (*(char *)(*(longlong *)(param_2 + 10) + _Size) != '\0');
      do {
        uVar9 = uVar9 + 1;
      } while (*(char *)(lVar3 + uVar9) != '\0');
    }
    *pcVar4 = '\x01';
    pcVar4[1] = (char)_Size;
    if ((*(void **)(param_2 + 10) != (void *)0x0) && (_Size != 0)) {
      if (0xff < _Size) {
        FUN_180150e00(param_3,"Excessive user name length for proxy auth");
        return 0xb;
      }
      memcpy(pcVar4 + 2,*(void **)(param_2 + 10),_Size);
    }
    pcVar4[_Size + 2] = (char)uVar9;
    _Src = *(void **)(param_2 + 0xc);
    if ((_Src != (void *)0x0) && (uVar9 != 0)) {
      if (0xff < uVar9) {
        FUN_180150e00(param_3,"Excessive password length for proxy auth");
        return 10;
      }
      memcpy(pcVar4 + _Size + 3,_Src,uVar9);
    }
    if (*param_2 != 7) {
      *param_2 = 7;
    }
    *(ulonglong *)(param_2 + 2) = _Size + 3 + uVar9;
    *(char **)(param_2 + 4) = pcVar4;
switchD_18018305a_caseD_7:
    local_a8 = (longlong **)0x180308a30;
    uVar9 = FUN_1801839d0(param_1,param_2,param_3,0x1c);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    if (*(longlong *)(param_2 + 2) != 0) {
      return 0;
    }
    *(char **)(param_2 + 4) = pcVar4;
    param_2[2] = 2;
    param_2[3] = 0;
    if (*param_2 != 8) {
      *param_2 = 8;
    }
switchD_18018305a_caseD_8:
    local_a8 = (longlong **)0x180308a50;
    uVar9 = FUN_180183910(param_1,param_2,param_3,0xe);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    if (*(longlong *)(param_2 + 2) != 0) {
      return 0;
    }
    if (pcVar4[1] != '\0') {
      FUN_180150e00(param_3,"User was rejected by the SOCKS5 server (%d %d).",*pcVar4,pcVar4[1]);
      return 0x21;
    }
  }
  if (*param_2 != 9) {
    *param_2 = 9;
  }
switchD_18018305a_caseD_9:
  if (local_98 == '\x05') {
    local_a8 = &local_90;
    iVar5 = FUN_180157110(param_3,*(undefined8 *)(param_2 + 6),param_2[8],1);
    if (iVar5 == -1) {
      return 0x1b;
    }
    if (iVar5 == 1) {
      if (*param_2 == 10) {
        return 0;
      }
      *param_2 = 10;
      return 0;
    }
    if (*param_2 != 0xb) {
      *param_2 = 0xb;
    }
switchD_18018305a_caseD_b:
    local_88[1] = 0x6e776f6e6b6e75;
    local_58 = 0;
    local_54 = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    if ((local_90 == (longlong *)0x0) || (lVar3 = *local_90, lVar3 == 0)) {
      FUN_180150e00(param_3,"Failed to resolve \"%s\" for SOCKS5 connect.",
                    *(undefined8 *)(param_2 + 6));
      return 0x1b;
    }
    FUN_1801570d0(lVar3,local_88 + 1,0x2e);
    pcVar4[0] = '\x05';
    pcVar4[1] = '\x01';
    _Size = 3;
    pcVar4[2] = '\0';
    if (*(int *)(lVar3 + 4) == 2) {
      pcVar4[3] = '\x01';
      lVar3 = *(longlong *)(lVar3 + 0x20);
      _Size = 8;
      pcVar4[4] = *(char *)(lVar3 + 4);
      pcVar4[5] = *(char *)(lVar3 + 5);
      pcVar4[6] = *(char *)(lVar3 + 6);
      pcVar4[7] = *(char *)(lVar3 + 7);
      FUN_180150ee0(param_3,"SOCKS5 connect to %s:%d (locally resolved)",local_88 + 1,param_2[8]);
      FUN_1801576b0(param_3,local_90);
    }
    else if (*(int *)(lVar3 + 4) == 0x17) {
      pcVar4[3] = '\x04';
      lVar3 = *(longlong *)(lVar3 + 0x20);
      _Size = 0x14;
      pcVar4[4] = *(char *)(lVar3 + 8);
      pcVar4[5] = *(char *)(lVar3 + 9);
      pcVar4[6] = *(char *)(lVar3 + 10);
      pcVar4[7] = *(char *)(lVar3 + 0xb);
      pcVar4[8] = *(char *)(lVar3 + 0xc);
      pcVar4[9] = *(char *)(lVar3 + 0xd);
      pcVar4[10] = *(char *)(lVar3 + 0xe);
      pcVar4[0xb] = *(char *)(lVar3 + 0xf);
      pcVar4[0xc] = *(char *)(lVar3 + 0x10);
      pcVar4[0xd] = *(char *)(lVar3 + 0x11);
      pcVar4[0xe] = *(char *)(lVar3 + 0x12);
      pcVar4[0xf] = *(char *)(lVar3 + 0x13);
      pcVar4[0x10] = *(char *)(lVar3 + 0x14);
      pcVar4[0x11] = *(char *)(lVar3 + 0x15);
      pcVar4[0x12] = *(char *)(lVar3 + 0x16);
      pcVar4[0x13] = *(char *)(lVar3 + 0x17);
      FUN_180150ee0(param_3,"SOCKS5 connect to [%s]:%d (locally resolved)",local_88 + 1,param_2[8]);
      FUN_1801576b0(param_3,local_90);
    }
    else {
      FUN_180150e00(param_3,"SOCKS5 connection to %s not supported",local_88 + 1);
      FUN_1801576b0(param_3,local_90);
    }
  }
  else {
    pcVar4[0] = '\x05';
    pcVar4[1] = '\x01';
    pcVar4[2] = '\0';
LAB_180183655:
    if (*(char *)(local_88[0] + 0x2f3) == '\0') {
      iVar5 = inet_pton(2,*(undefined8 *)(param_2 + 6),local_88);
      if (iVar5 == 1) {
        pcVar4[3] = '\x01';
        _Size = 8;
        *(undefined4 *)(pcVar4 + 4) = (undefined4)local_88[0];
      }
      else {
        pcVar4[3] = '\x03';
        pcVar4[4] = (char)uVar10;
        memcpy(pcVar4 + 5,*(void **)(param_2 + 6),uVar10);
        _Size = uVar11 + 6;
      }
    }
    else {
      iVar5 = inet_pton(0x17,*(undefined8 *)(param_2 + 6),&local_50);
      if (iVar5 != 1) {
        return 1;
      }
      pcVar4[3] = '\x04';
      _Size = 0x14;
      *(undefined8 *)(pcVar4 + 4) = local_50;
      *(undefined8 *)(pcVar4 + 0xc) = uStack_48;
    }
    FUN_180150ee0(param_3,"SOCKS5 connect to %s:%d (remotely resolved)",*(undefined8 *)(param_2 + 6)
                  ,param_2[8]);
  }
switchD_18018305a_caseD_d:
  pcVar4[_Size] = (char)((uint)param_2[8] >> 8);
  pcVar4[_Size + 1] = (char)param_2[8];
  *(ulonglong *)(param_2 + 2) = _Size + 2;
  *(char **)(param_2 + 4) = pcVar4;
  if (*param_2 != 0xe) {
    *param_2 = 0xe;
  }
switchD_18018305a_caseD_e:
  local_a8 = (longlong **)0x180308ba8;
  uVar10 = FUN_1801839d0(param_1,param_2,param_3,0x1e);
  if ((int)uVar10 != 0) {
    return uVar10;
  }
  if (*(longlong *)(param_2 + 2) != 0) {
    return 0;
  }
  param_2[2] = 10;
  param_2[3] = 0;
  *(char **)(param_2 + 4) = pcVar4;
  if (*param_2 != 0xf) {
    *param_2 = 0xf;
  }
switchD_18018305a_caseD_f:
  local_a8 = (longlong **)0x180308bc0;
  uVar10 = FUN_180183910(param_1,param_2,param_3,0x10);
  if ((int)uVar10 != 0) {
    return uVar10;
  }
  if (*(longlong *)(param_2 + 2) != 0) {
    return 0;
  }
  if (*pcVar4 != '\x05') {
    FUN_180150e00(param_3,"SOCKS5 reply has wrong version, version should be 5.");
    return 2;
  }
  if (pcVar4[1] != 0) {
    uVar6 = (uint)(byte)pcVar4[1];
    uVar8 = 0x19;
    FUN_180150e00(param_3,"Can\'t complete SOCKS5 connection to %s. (%d)",
                  *(undefined8 *)(param_2 + 6),uVar6);
    if (uVar6 < 9) {
      uVar8 = *(uint *)(&DAT_1803087c8 + (ulonglong)uVar6 * 4);
    }
    return (ulonglong)uVar8;
  }
  cVar2 = pcVar4[3];
  if (cVar2 == '\x03') {
    iVar5 = *param_2;
    uVar10 = (ulonglong)(byte)pcVar4[4] + 7;
    if (10 < uVar10) {
LAB_180183816:
      *(ulonglong *)(param_2 + 2) = uVar10 - 10;
      *(char **)(param_2 + 4) = pcVar4 + 10;
      if (iVar5 != 0x10) {
        *param_2 = 0x10;
      }
switchD_18018305a_caseD_10:
      local_a8 = (longlong **)0x180308c70;
      uVar10 = FUN_180183910(param_1,param_2,param_3,0xd);
      if ((int)uVar10 != 0) {
        return uVar10;
      }
      if (*(longlong *)(param_2 + 2) != 0) {
        return 0;
      }
      iVar5 = *param_2;
    }
  }
  else {
    if (cVar2 == '\x04') {
      iVar5 = *param_2;
      uVar10 = 0x16;
      goto LAB_180183816;
    }
    if (cVar2 != '\x01') {
      FUN_180150e00(param_3,"SOCKS5 reply has wrong address type.");
      return 1;
    }
    iVar5 = *param_2;
  }
  if (iVar5 != 0x11) {
    *param_2 = 0x11;
  }
switchD_18018305a_caseD_5:
  FUN_180150ee0(param_3,"SOCKS5 request granted.");
  return 0;
}



// ===== FUN_180183910 @ 180183910 (size 180)

undefined4
FUN_180183910(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_res8 [2];
  
  lVar1 = FUN_180150250(*(undefined8 *)(param_1 + 8),param_3,*(undefined8 *)(param_2 + 0x10),
                        *(undefined8 *)(param_2 + 8),local_res8);
  if (lVar1 < 1) {
    if (local_res8[0] != 0x51) {
      if (local_res8[0] == 0) {
        FUN_180150e00(param_3,"connection to proxy closed");
        return 3;
      }
      uVar2 = FUN_1801387d0();
      FUN_180150e00(param_3,"SOCKS4: Failed receiving %s: %s",param_5,uVar2);
      return param_4;
    }
  }
  else {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) - lVar1;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + lVar1;
  }
  return 0;
}



// ===== FUN_1801839d0 @ 1801839d0 (size 180)

undefined4
FUN_1801839d0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_res8 [2];
  
  lVar1 = FUN_180150270(*(undefined8 *)(param_1 + 8),param_3,*(undefined8 *)(param_2 + 0x10),
                        *(undefined8 *)(param_2 + 8),local_res8);
  if (lVar1 < 1) {
    if (local_res8[0] != 0x51) {
      if (local_res8[0] == 0) {
        FUN_180150e00(param_3,"connection to proxy closed");
        return 3;
      }
      uVar2 = FUN_1801387d0();
      FUN_180150e00(param_3,"Failed to send %s: %s",param_5,uVar2);
      return param_4;
    }
  }
  else {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) - lVar1;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + lVar1;
  }
  return 0;
}



// ===== FUN_180183a90 @ 180183a90 (size 118)

void FUN_180183a90(void)

{
  FUN_180184900();
  return;
}



// ===== FUN_180183b10 @ 180183b10 (size 1970)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180183b10(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 auStack_2e8 [32];
  char *local_2c8;
  char *local_2c0;
  longlong local_2b8;
  undefined1 *local_2b0;
  undefined4 *local_2a8;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined1 local_27c;
  char local_278 [8];
  char local_270;
  undefined1 local_268 [16];
  char local_258 [8];
  char local_250 [4];
  char local_24c;
  char local_248 [48];
  char local_218 [64];
  undefined1 local_1d8 [40];
  undefined1 local_1b0 [40];
  undefined1 local_188 [48];
  char local_158 [64];
  char local_118 [64];
  char local_d8 [128];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_2e8;
  local_290 = param_5;
  local_288 = param_6;
  local_270 = s_00000001_180308d20[8];
  local_250 = (char  [4])s_AUTHENTICATE_180308d30._8_4_;
  local_24c = s_AUTHENTICATE_180308d30[0xc];
  local_280 = _DAT_1802ea86c;
  local_278 = (char  [8])s_00000001_180308d20._0_8_;
  local_27c = DAT_1802ea870;
  local_258 = (char  [8])s_AUTHENTICATE_180308d30._0_8_;
  pcVar5 = (char *)FUN_18013ff80(param_2);
  lVar6 = FUN_18007e060(param_2);
  if ((lVar6 != 0) && (pcVar7 = strstr(pcVar5,"nonce=\""), pcVar7 != (char *)0x0)) {
    cVar1 = pcVar7[7];
    pcVar7 = pcVar7 + 7;
    uVar14 = 0;
    for (uVar8 = 0; ((cVar1 != '\0' && (cVar1 != '\"')) && (uVar8 < 0x3f)); uVar8 = uVar8 + 1) {
      pcVar7 = pcVar7 + 1;
      local_218[uVar8] = cVar1;
      cVar1 = *pcVar7;
    }
    local_218[uVar8] = '\0';
    pcVar7 = strstr(pcVar5,"realm=\"");
    if (pcVar7 == (char *)0x0) {
      local_d8[0] = '\0';
    }
    else {
      cVar1 = pcVar7[7];
      pcVar7 = pcVar7 + 7;
      for (uVar8 = 0; ((cVar1 != '\0' && (cVar1 != '\"')) && (uVar8 < 0x7f)); uVar8 = uVar8 + 1) {
        pcVar7 = pcVar7 + 1;
        local_d8[uVar8] = cVar1;
        cVar1 = *pcVar7;
      }
      local_d8[uVar8] = '\0';
    }
    pcVar7 = strstr(pcVar5,"algorithm=");
    if (pcVar7 != (char *)0x0) {
      cVar1 = pcVar7[10];
      pcVar7 = pcVar7 + 10;
      for (uVar8 = 0; ((cVar1 != '\0' && (cVar1 != ',')) && (uVar8 < 0x3f)); uVar8 = uVar8 + 1) {
        pcVar7 = pcVar7 + 1;
        local_158[uVar8] = cVar1;
        cVar1 = *pcVar7;
      }
      local_158[uVar8] = '\0';
      pcVar5 = strstr(pcVar5,"qop=\"");
      if (pcVar5 != (char *)0x0) {
        cVar1 = pcVar5[5];
        pcVar5 = pcVar5 + 5;
        for (uVar8 = 0; ((cVar1 != '\0' && (cVar1 != '\"')) && (uVar8 < 0x3f)); uVar8 = uVar8 + 1) {
          pcVar5 = pcVar5 + 1;
          local_118[uVar8] = cVar1;
          cVar1 = *pcVar5;
        }
        local_118[uVar8] = '\0';
        iVar3 = strcmp(local_158,"md5-sess");
        if (iVar3 != 0) {
          return 0x3d;
        }
        local_298 = 0;
        bVar12 = false;
        lVar6 = (*(code *)PTR__strdup_1803bd548)(local_118);
        if (lVar6 != 0) {
          lVar9 = FUN_180176ab0(lVar6,&DAT_180305408,&local_298);
          while (lVar9 != 0) {
            iVar3 = FUN_180140330(lVar9,&DAT_1802ea86c);
            if (iVar3 == 0) {
              iVar3 = FUN_180140330(lVar9,"auth-int");
              if (iVar3 == 0) {
                FUN_180140330(lVar9,"auth-conf");
              }
            }
            else {
              bVar12 = true;
            }
            lVar9 = FUN_180176ab0(0,&DAT_180305408,&local_298);
          }
          (*(code *)PTR_free_1803bd538)(lVar6);
          if (!bVar12) {
            return 0x3d;
          }
          uVar10 = FUN_180177d50(param_1,local_248,0x21);
          if ((int)uVar10 != 0) {
            return uVar10;
          }
          lVar6 = FUN_18018b070(&PTR_FUN_180309a38);
          if (lVar6 != 0) {
            lVar13 = -1;
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while (*(char *)(param_3 + lVar9) != '\0');
            uVar4 = FUN_180140190();
            FUN_18018b0e0(lVar6,param_3,uVar4);
            FUN_18018b0e0(lVar6,&DAT_1802ea954,1);
            lVar9 = -1;
            do {
              lVar11 = lVar9 + 1;
              lVar9 = lVar9 + 1;
            } while (local_d8[lVar11] != '\0');
            uVar4 = FUN_180140190();
            FUN_18018b0e0(lVar6,local_d8,uVar4);
            FUN_18018b0e0(lVar6,&DAT_1802ea954,1);
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while (*(char *)(param_4 + lVar9) != '\0');
            uVar4 = FUN_180140190();
            FUN_18018b0e0(lVar6,param_4,uVar4);
            FUN_18018b030(lVar6,local_268);
            lVar6 = FUN_18018b070(&PTR_FUN_180309a38);
            if (lVar6 != 0) {
              FUN_18018b0e0(lVar6,local_268,0x10);
              FUN_18018b0e0(lVar6,&DAT_1802ea954,1);
              lVar9 = -1;
              do {
                lVar11 = lVar9 + 1;
                lVar9 = lVar9 + 1;
              } while (local_218[lVar11] != '\0');
              uVar4 = FUN_180140190();
              FUN_18018b0e0(lVar6,local_218,uVar4);
              FUN_18018b0e0(lVar6,&DAT_1802ea954,1);
              lVar9 = -1;
              do {
                lVar11 = lVar9 + 1;
                lVar9 = lVar9 + 1;
              } while (local_248[lVar11] != '\0');
              uVar4 = FUN_180140190();
              FUN_18018b0e0(lVar6,local_248,uVar4);
              FUN_18018b030(lVar6,local_268);
              uVar8 = 0;
              puVar15 = local_1d8;
              do {
                FUN_1801450d0(puVar15,3,&DAT_1803026a0,local_268[uVar8]);
                uVar8 = uVar8 + 1;
                puVar15 = puVar15 + 2;
              } while (uVar8 < 0x10);
              lVar6 = FUN_180187200(local_290,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x70),
                                    0);
              if (lVar6 != 0) {
                lVar9 = FUN_18018b070(&PTR_FUN_180309a38);
                if (lVar9 != 0) {
                  lVar11 = -1;
                  do {
                    lVar2 = lVar11 + 1;
                    lVar11 = lVar11 + 1;
                  } while (local_258[lVar2] != '\0');
                  uVar4 = FUN_180140190();
                  FUN_18018b0e0(lVar9,local_258,uVar4);
                  FUN_18018b0e0(lVar9,&DAT_1802ea954,1);
                  lVar11 = -1;
                  do {
                    lVar11 = lVar11 + 1;
                  } while (*(char *)(lVar6 + lVar11) != '\0');
                  uVar4 = FUN_180140190();
                  FUN_18018b0e0(lVar9,lVar6,uVar4);
                  FUN_18018b030(lVar9,local_268);
                  uVar8 = 0;
                  puVar15 = local_1b0;
                  do {
                    FUN_1801450d0(puVar15,3,&DAT_1803026a0,local_268[uVar8]);
                    uVar8 = uVar8 + 1;
                    puVar15 = puVar15 + 2;
                  } while (uVar8 < 0x10);
                  lVar9 = FUN_18018b070(&PTR_FUN_180309a38);
                  if (lVar9 != 0) {
                    FUN_18018b0e0(lVar9,local_1d8,0x20);
                    FUN_18018b0e0(lVar9,&DAT_1802ea954,1);
                    lVar11 = -1;
                    do {
                      lVar2 = lVar11 + 1;
                      lVar11 = lVar11 + 1;
                    } while (local_218[lVar2] != '\0');
                    uVar4 = FUN_180140190();
                    FUN_18018b0e0(lVar9,local_218,uVar4);
                    FUN_18018b0e0(lVar9,&DAT_1802ea954,1);
                    lVar11 = -1;
                    do {
                      lVar2 = lVar11 + 1;
                      lVar11 = lVar11 + 1;
                    } while (local_278[lVar2] != '\0');
                    uVar4 = FUN_180140190();
                    FUN_18018b0e0(lVar9,local_278,uVar4);
                    FUN_18018b0e0(lVar9,&DAT_1802ea954,1);
                    lVar11 = -1;
                    do {
                      lVar2 = lVar11 + 1;
                      lVar11 = lVar11 + 1;
                    } while (local_248[lVar2] != '\0');
                    uVar4 = FUN_180140190();
                    FUN_18018b0e0(lVar9,local_248,uVar4);
                    FUN_18018b0e0(lVar9,&DAT_1802ea954,1);
                    lVar11 = -1;
                    do {
                      lVar2 = lVar11 + -7;
                      lVar11 = lVar11 + 1;
                    } while (local_278[lVar2] != '\0');
                    uVar4 = FUN_180140190();
                    FUN_18018b0e0(lVar9,&local_280,uVar4);
                    FUN_18018b0e0(lVar9,&DAT_1802ea954,1);
                    FUN_18018b0e0(lVar9,local_1b0,0x20);
                    FUN_18018b030(lVar9,local_268);
                    puVar15 = local_188;
                    do {
                      FUN_1801450d0(puVar15,3,&DAT_1803026a0,local_268[uVar14]);
                      uVar14 = uVar14 + 1;
                      puVar15 = puVar15 + 2;
                    } while (uVar14 < 0x10);
                    local_2a8 = &local_280;
                    local_2b0 = local_188;
                    local_2c0 = local_278;
                    local_2c8 = local_248;
                    local_2b8 = lVar6;
                    lVar9 = FUN_180145000("username=\"%s\",realm=\"%s\",nonce=\"%s\",cnonce=\"%s\",nc=\"%s\",digest-uri=\"%s\",response=%s,qop=%s"
                                          ,param_3,local_d8,local_218);
                    (*(code *)PTR_free_1803bd538)(lVar6);
                    if (lVar9 == 0) {
                      return 0x1b;
                    }
                    do {
                      lVar13 = lVar13 + 1;
                    } while (*(char *)(lVar9 + lVar13) != '\0');
                    FUN_18018a2f0(local_288,lVar9,lVar13,free);
                    return 0;
                  }
                }
                (*(code *)PTR_free_1803bd538)(lVar6);
              }
            }
          }
        }
        return 0x1b;
      }
    }
  }
  return 0x3d;
}



// ===== FUN_1801842d0 @ 1801842d0 (size 1441)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte FUN_1801842d0(char *param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 auStack_578 [32];
  undefined8 local_558;
  longlong *local_550;
  longlong local_548;
  char local_538 [256];
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_578;
  local_548 = *param_2;
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  local_550 = param_2;
  (*(code *)PTR_free_1803bd538)(local_548);
  *param_2 = 0;
  (*(code *)PTR_free_1803bd538)(param_2[1]);
  param_2[1] = 0;
  (*(code *)PTR_free_1803bd538)(param_2[2]);
  param_2[2] = 0;
  (*(code *)PTR_free_1803bd538)(param_2[3]);
  param_2[3] = 0;
  (*(code *)PTR_free_1803bd538)(param_2[4]);
  param_2[4] = 0;
  (*(code *)PTR_free_1803bd538)(param_2[5]);
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined2 *)((longlong)param_2 + 0x34) = 0;
  *(undefined1 *)((longlong)param_2 + 0x36) = 0;
  do {
    cVar8 = *param_1;
    while ((cVar8 != '\0' && ((cVar8 == ' ' || (cVar8 == '\t'))))) {
      pcVar7 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar8 = *pcVar7;
    }
    cVar8 = *param_1;
    pcVar7 = local_438;
    pcVar11 = local_538;
    bVar1 = false;
    if (cVar8 != '\0') {
      cVar9 = cVar8;
      iVar5 = 0xff;
      do {
        cVar8 = cVar9;
        if ((cVar9 == '=') || (iVar5 == 0)) break;
        cVar8 = param_1[1];
        param_1 = param_1 + 1;
        *pcVar11 = cVar9;
        pcVar11 = pcVar11 + 1;
        cVar9 = cVar8;
        iVar5 = iVar5 + -1;
      } while (cVar8 != '\0');
    }
    pcVar10 = param_1 + 1;
    *pcVar11 = '\0';
    if (cVar8 != '=') {
LAB_18018480c:
      if (((local_548 != 0) && (*(char *)((longlong)param_2 + 0x35) == '\0')) || (*param_2 == 0)) {
        return 0x3d;
      }
      if (param_2[4] == 0) {
        return -((*(byte *)((longlong)param_2 + 0x34) & 1) != 0) & 0x3d;
      }
      return 0;
    }
    cVar8 = *pcVar10;
    bVar12 = cVar8 == '\"';
    if (bVar12) {
      cVar8 = param_1[2];
      pcVar10 = param_1 + 2;
    }
    iVar5 = 0x3ff;
    if (cVar8 != '\0') {
      do {
        if (iVar5 == 0) break;
        if (bVar1) goto LAB_180184482;
        cVar8 = *pcVar10;
        if ((cVar8 == '\n') || (cVar8 == '\r')) {
          if (bVar12) goto LAB_18018480c;
          iVar5 = 0;
        }
        else if (cVar8 == '\"') {
          if (!bVar12) goto LAB_18018480c;
          iVar5 = 0;
        }
        else if (cVar8 == ',') {
          if (bVar12) goto LAB_180184482;
          iVar5 = 0;
        }
        else if ((cVar8 != '\\') || (!bVar12)) {
LAB_180184482:
          bVar1 = false;
          *pcVar7 = *pcVar10;
          pcVar7 = pcVar7 + 1;
          iVar5 = iVar5 + -1;
        }
        else {
          bVar1 = true;
          iVar5 = iVar5 + -1;
        }
        pcVar10 = pcVar10 + 1;
      } while (*pcVar10 != '\0');
      if (bVar1) goto LAB_18018480c;
    }
    *pcVar7 = '\0';
    iVar5 = FUN_180140330(local_538,"nonce");
    if (iVar5 != 0) {
      (*(code *)PTR_free_1803bd538)(*param_2);
      lVar6 = (*(code *)PTR__strdup_1803bd548)(local_438);
      *param_2 = lVar6;
      goto joined_r0x000180184584;
    }
    iVar5 = FUN_180140330(local_538,"stale");
    if (iVar5 != 0) {
      iVar5 = FUN_180140330(local_438,&DAT_1802eceb8);
      if (iVar5 != 0) {
        *(undefined1 *)((longlong)param_2 + 0x35) = 1;
        *(undefined4 *)(param_2 + 6) = 1;
      }
      goto LAB_180184695;
    }
    iVar5 = FUN_180140330(local_538,"realm");
    if (iVar5 == 0) {
      iVar5 = FUN_180140330(local_538,"opaque");
      if (iVar5 != 0) {
        (*(code *)PTR_free_1803bd538)(param_2[3]);
        lVar6 = (*(code *)PTR__strdup_1803bd548)(local_438);
        param_2[3] = lVar6;
        goto joined_r0x000180184584;
      }
      iVar5 = FUN_180140330(local_538,&DAT_180308dcc);
      if (iVar5 != 0) {
        local_558 = 0;
        lVar6 = (*(code *)PTR__strdup_1803bd548)(local_438);
        if (lVar6 == 0) {
          return 0x1b;
        }
        pcVar7 = (char *)FUN_180176ab0(lVar6,&DAT_180305408,&local_558);
        if (pcVar7 != (char *)0x0) {
          do {
            cVar8 = *pcVar7;
            while ((cVar8 != '\0' && ((cVar8 == ' ' || (cVar8 == '\t'))))) {
              pcVar11 = pcVar7 + 1;
              pcVar7 = pcVar7 + 1;
              cVar8 = *pcVar11;
            }
            iVar5 = FUN_180140330(pcVar7,&DAT_1802ea86c);
            if (iVar5 == 0) {
              iVar5 = FUN_180140330(pcVar7,"auth-int");
              bVar3 = bVar4;
              if (iVar5 != 0) {
                bVar3 = true;
                bVar4 = true;
              }
            }
            else {
              bVar2 = true;
            }
            pcVar7 = (char *)FUN_180176ab0(0,&DAT_180305408,&local_558);
          } while (pcVar7 != (char *)0x0);
          param_2 = local_550;
        }
        (*(code *)PTR_free_1803bd538)(lVar6);
        if (bVar2) {
          (*(code *)PTR_free_1803bd538)(param_2[4]);
          pcVar7 = "auth";
        }
        else {
          if (!bVar3) goto LAB_180184695;
          (*(code *)PTR_free_1803bd538)(param_2[4]);
          pcVar7 = "auth-int";
        }
        lVar6 = (*(code *)PTR__strdup_1803bd548)(pcVar7);
        param_2[4] = lVar6;
        goto joined_r0x000180184584;
      }
      iVar5 = FUN_180140330(local_538,"algorithm");
      if (iVar5 == 0) {
        iVar5 = FUN_180140330(local_538,"userhash");
        if ((iVar5 != 0) && (iVar5 = FUN_180140330(local_438,&DAT_1802eceb8), iVar5 != 0)) {
          *(undefined1 *)((longlong)param_2 + 0x36) = 1;
        }
      }
      else {
        (*(code *)PTR_free_1803bd538)(param_2[5]);
        lVar6 = (*(code *)PTR__strdup_1803bd548)(local_438);
        param_2[5] = lVar6;
        if (lVar6 == 0) {
          return 0x1b;
        }
        iVar5 = FUN_180140330(local_438,"MD5-sess");
        if (iVar5 == 0) {
          iVar5 = FUN_180140330(local_438,&DAT_180308dec);
          if (iVar5 == 0) {
            iVar5 = FUN_180140330(local_438,"SHA-256");
            if (iVar5 == 0) {
              iVar5 = FUN_180140330(local_438,"SHA-256-SESS");
              if (iVar5 == 0) {
                iVar5 = FUN_180140330(local_438,"SHA-512-256");
                if (iVar5 == 0) {
                  iVar5 = FUN_180140330(local_438,"SHA-512-256-SESS");
                  if (iVar5 == 0) {
                    return 0x3d;
                  }
                  *(undefined1 *)((longlong)param_2 + 0x34) = 5;
                }
                else {
                  *(undefined1 *)((longlong)param_2 + 0x34) = 4;
                }
              }
              else {
                *(undefined1 *)((longlong)param_2 + 0x34) = 3;
              }
            }
            else {
              *(undefined1 *)((longlong)param_2 + 0x34) = 2;
            }
          }
          else {
            *(undefined1 *)((longlong)param_2 + 0x34) = 0;
          }
        }
        else {
          *(undefined1 *)((longlong)param_2 + 0x34) = 1;
        }
      }
    }
    else {
      (*(code *)PTR_free_1803bd538)(param_2[2]);
      lVar6 = (*(code *)PTR__strdup_1803bd548)(local_438);
      param_2[2] = lVar6;
joined_r0x000180184584:
      if (lVar6 == 0) {
        return 0x1b;
      }
    }
LAB_180184695:
    cVar8 = *pcVar10;
    if (cVar8 != '\0') {
      do {
        if ((cVar8 != ' ') && (cVar8 != '\t')) break;
        cVar8 = pcVar10[1];
        pcVar10 = pcVar10 + 1;
      } while (cVar8 != '\0');
    }
    param_1 = pcVar10 + 1;
    if (cVar8 != ',') {
      param_1 = pcVar10;
    }
  } while( true );
}



// ===== FUN_180184880 @ 180184880 (size 119)

void FUN_180184880(undefined8 *param_1)

{
  (*(code *)PTR_free_1803bd538)(*param_1);
  *param_1 = 0;
  (*(code *)PTR_free_1803bd538)(param_1[1]);
  param_1[1] = 0;
  (*(code *)PTR_free_1803bd538)(param_1[2]);
  param_1[2] = 0;
  (*(code *)PTR_free_1803bd538)(param_1[3]);
  param_1[3] = 0;
  (*(code *)PTR_free_1803bd538)(param_1[4]);
  param_1[4] = 0;
  (*(code *)PTR_free_1803bd538)(param_1[5]);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 0;
  return;
}



// ===== FUN_180184900 @ 180184900 (size 1341)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180184900(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
             code *param_9,code *param_10)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined **ppuVar8;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  longlong local_250;
  undefined1 *local_248;
  undefined1 *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  char local_1e8 [80];
  undefined1 local_198 [80];
  undefined1 local_148 [80];
  undefined1 local_f8 [80];
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_288;
  local_230 = param_5;
  local_218 = param_7;
  local_210 = param_8;
  local_228 = 0;
  local_220 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  if (*(int *)(param_6 + 6) == 0) {
    *(undefined4 *)(param_6 + 6) = 1;
  }
  lVar6 = -1;
  local_238 = param_2;
  if (param_6[1] == 0) {
    uVar2 = FUN_180177d50(0,local_1e8,0x21);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar3 = -1;
    do {
      lVar5 = lVar3 + 1;
      lVar7 = lVar3 + 1;
      lVar3 = lVar5;
    } while (local_1e8[lVar7] != '\0');
    uVar2 = FUN_18017d960(local_1e8,lVar5,&local_228,&local_220);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    param_6[1] = local_228;
  }
  if (*(char *)((longlong)param_6 + 0x36) != '\0') {
    ppuVar8 = &PTR_1802ead18;
    if ((undefined **)param_6[2] != (undefined **)0x0) {
      ppuVar8 = (undefined **)param_6[2];
    }
    lVar3 = FUN_180145000("%s:%s",local_238,ppuVar8);
    if (lVar3 == 0) {
      return 0x1b;
    }
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(lVar3 + lVar7) != '\0');
    (*param_10)(&local_208,lVar3);
    (*(code *)PTR_free_1803bd538)(lVar3);
    (*param_9)(&local_208,local_a8);
  }
  ppuVar8 = &PTR_1802ead18;
  if ((undefined **)param_6[2] != (undefined **)0x0) {
    ppuVar8 = (undefined **)param_6[2];
  }
  lVar3 = FUN_180145000("%s:%s:%s",local_238,ppuVar8,param_3);
  if (lVar3 == 0) {
    return 0x1b;
  }
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(lVar3 + lVar7) != '\0');
  (*param_10)(&local_208,lVar3);
  (*(code *)PTR_free_1803bd538)(lVar3);
  (*param_9)(&local_208,local_198);
  if ((*(byte *)((longlong)param_6 + 0x34) & 1) != 0) {
    lVar3 = FUN_180145000("%s:%s:%s",local_198,*param_6,param_6[1]);
    if (lVar3 == 0) {
      return 0x1b;
    }
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(lVar3 + lVar7) != '\0');
    (*param_10)(&local_208,lVar3);
    (*(code *)PTR_free_1803bd538)(lVar3);
    (*param_9)(&local_208,local_198);
  }
  lVar3 = FUN_180145000("%s:%s",param_4,local_230);
  if (lVar3 == 0) {
    return 0x1b;
  }
  lVar7 = lVar3;
  if ((param_6[4] != 0) && (iVar1 = FUN_180140330(param_6[4],"auth-int"), iVar1 != 0)) {
    (*param_10)(&local_208,&PTR_1802ead18,0);
    (*param_9)(&local_208,local_1e8);
    lVar7 = FUN_180145000("%s:%s",lVar3,local_1e8);
    (*(code *)PTR_free_1803bd538)(lVar3);
    if (lVar7 == 0) {
      return 0x1b;
    }
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(lVar7 + lVar3) != '\0');
  (*param_10)(&local_208,lVar7);
  (*(code *)PTR_free_1803bd538)(lVar7);
  (*param_9)(&local_208,local_148);
  if ((undefined1 *)param_6[4] == (undefined1 *)0x0) {
    lVar3 = FUN_180145000("%s:%s:%s",local_198,*param_6,local_148);
  }
  else {
    local_258 = local_148;
    local_268 = param_6[1];
    local_260 = (undefined1 *)param_6[4];
    lVar3 = FUN_180145000("%s:%s:%08x:%s:%s:%s",local_198,*param_6,*(undefined4 *)(param_6 + 6));
  }
  if (lVar3 == 0) {
    return 0x1b;
  }
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(lVar3 + lVar7) != '\0');
  (*param_10)(&local_208,lVar3);
  (*(code *)PTR_free_1803bd538)(lVar3);
  (*param_9)(&local_208,local_f8);
  puVar4 = local_a8;
  if (*(char *)((longlong)param_6 + 0x36) == '\0') {
    puVar4 = local_238;
  }
  lVar3 = FUN_180184f00(puVar4);
  if (lVar3 == 0) {
    return 0x1b;
  }
  if (param_6[2] == 0) {
    puVar4 = (undefined1 *)(*(code *)PTR_malloc_1803bd530)(1);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
      goto LAB_180184cbd;
    }
  }
  else {
    puVar4 = (undefined1 *)FUN_180184f00();
    if (puVar4 != (undefined1 *)0x0) {
LAB_180184cbd:
      lVar7 = FUN_180184f00(*param_6);
      if (lVar7 != 0) {
        if (param_6[4] == 0) {
          local_260 = local_f8;
          local_268 = local_230;
          lVar5 = FUN_180145000("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", response=\"%s\""
                                ,lVar3,puVar4,lVar7);
        }
        else {
          local_248 = local_f8;
          local_258 = (undefined1 *)CONCAT44(local_258._4_4_,*(undefined4 *)(param_6 + 6));
          local_260 = (undefined1 *)param_6[1];
          local_268 = local_230;
          local_250 = param_6[4];
          lVar5 = FUN_180145000("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                ,lVar3,puVar4,lVar7);
          *(int *)(param_6 + 6) = *(int *)(param_6 + 6) + 1;
        }
        (*(code *)PTR_free_1803bd538)(lVar7);
        (*(code *)PTR_free_1803bd538)(puVar4);
        (*(code *)PTR_free_1803bd538)(lVar3);
        if (lVar5 == 0) {
          return 0x1b;
        }
        lVar3 = lVar5;
        if (param_6[3] == 0) {
LAB_180184dc0:
          lVar7 = lVar3;
          if (param_6[5] != 0) {
            lVar7 = FUN_180145000("%s, algorithm=%s",lVar3);
            (*(code *)PTR_free_1803bd538)(lVar3);
            if (lVar7 == 0) {
              return 0x1b;
            }
          }
          lVar3 = lVar7;
          if (*(char *)((longlong)param_6 + 0x36) != '\0') {
            lVar3 = FUN_180145000("%s, userhash=true",lVar7);
            (*(code *)PTR_free_1803bd538)(lVar7);
            if (lVar3 == 0) {
              return 0x1b;
            }
          }
          *local_218 = lVar3;
          do {
            lVar6 = lVar6 + 1;
          } while (*(char *)(lVar3 + lVar6) != '\0');
          *local_210 = lVar6;
          return 0;
        }
        lVar7 = FUN_180184f00();
        if (lVar7 != 0) {
          lVar3 = FUN_180145000("%s, opaque=\"%s\"",lVar5,lVar7);
          (*(code *)PTR_free_1803bd538)(lVar5);
          (*(code *)PTR_free_1803bd538)(lVar7);
          if (lVar3 == 0) {
            return 0x1b;
          }
          goto LAB_180184dc0;
        }
        goto LAB_180184c72;
      }
      (*(code *)PTR_free_1803bd538)(puVar4);
    }
  }
  lVar5 = lVar3;
LAB_180184c72:
  (*(code *)PTR_free_1803bd538)(lVar5);
  return 0x1b;
}



// ===== FUN_180184e40 @ 180184e40 (size 86)

void FUN_180184e40(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x10;
  do {
    FUN_1801450d0(param_2,3,&DAT_1803026a0,*param_1);
    param_2 = param_2 + 2;
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// ===== FUN_180184ea0 @ 180184ea0 (size 86)

void FUN_180184ea0(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    FUN_1801450d0(param_2,3,&DAT_1803026a0,*param_1);
    param_2 = param_2 + 2;
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// ===== FUN_180184f00 @ 180184f00 (size 126)

char * FUN_180184f00(char *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = *param_1;
  lVar2 = 1;
  pcVar5 = param_1;
  while (cVar1 != '\0') {
    lVar3 = lVar2 + 1;
    if ((cVar1 == '\"') || (cVar1 == '\\')) {
      lVar3 = lVar2 + 2;
    }
    pcVar4 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    lVar2 = lVar3;
    cVar1 = *pcVar4;
  }
  pcVar5 = (char *)(*(code *)PTR_malloc_1803bd530)(lVar2);
  if (pcVar5 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar4 = pcVar5;
    while (cVar1 != '\0') {
      if ((cVar1 == '\"') || (cVar1 == '\\')) {
        *pcVar4 = '\\';
        pcVar4 = pcVar4 + 1;
      }
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      cVar1 = *param_1;
    }
    *pcVar4 = '\0';
  }
  return pcVar5;
}



// ===== FUN_180184f80 @ 180184f80 (size 579)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180184f80(DWORD param_1,DWORD param_2,DWORD param_3,int param_4,int param_5)

{
  char cVar1;
  BOOL BVar2;
  FARPROC pFVar3;
  HMODULE hModule;
  undefined8 uVar4;
  DWORDLONG DVar5;
  INT_PTR IVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  DWORD dwTypeMask;
  bool bVar9;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  _OSVERSIONINFOEXW local_178;
  FARPROC local_58;
  
  pFVar3 = (FARPROC)(DAT_1803c3d80 ^ (ulonglong)auStack_1a8);
  dwTypeMask = 0x33;
  local_58 = pFVar3;
  if (DAT_1803bdc10 != '\0') {
    hModule = GetModuleHandleA("ntdll");
    pFVar3 = GetProcAddress(hModule,"RtlVerifyVersionInfo");
    DAT_1803bdc10 = '\0';
    DAT_1803c6500 = pFVar3;
  }
  if (param_5 == 0) {
    uVar7 = 4;
    uVar8 = 5;
  }
  else if (param_5 == 1) {
    uVar7 = 5;
    uVar8 = 5;
  }
  else if (param_5 == 2) {
    uVar7 = 1;
    uVar8 = 3;
  }
  else if (param_5 == 3) {
    uVar7 = 3;
    uVar8 = 3;
  }
  else {
    if (param_5 != 4) {
      return (ulonglong)pFVar3 & 0xffffffffffffff00;
    }
    uVar7 = 2;
    uVar8 = 3;
  }
  memset(&local_178.dwPlatformId,0,0x10c);
  local_178.dwOSVersionInfoSize = 0x11c;
  if (param_4 == 1) {
    local_178.dwPlatformId = 1;
  }
  else if (param_4 == 2) {
    local_178.dwPlatformId = 2;
  }
  local_178.dwMajorVersion = param_1;
  local_178.dwMinorVersion = param_2;
  local_178.dwBuildNumber = param_3;
  uVar4 = VerSetConditionMask(0,2,uVar7);
  uVar4 = VerSetConditionMask(uVar4,1,uVar7);
  uVar4 = VerSetConditionMask(uVar4,0x20,uVar8);
  DVar5 = VerSetConditionMask(uVar4,0x10,uVar8);
  if (param_4 != 0) {
    DVar5 = VerSetConditionMask(DVar5,8,1);
    dwTypeMask = 0x3b;
  }
  if (DAT_1803c6500 == (FARPROC)0x0) {
    BVar2 = VerifyVersionInfoW(&local_178,dwTypeMask,DVar5);
    bVar9 = BVar2 != 0;
  }
  else {
    IVar6 = (*DAT_1803c6500)();
    bVar9 = (int)IVar6 == 0;
  }
  if ((bVar9 == false) || (param_3 == 0)) goto LAB_18018518d;
  if (param_5 != 2) {
    if ((param_5 - 1U & 0xfffffffd) != 0) goto LAB_18018518d;
    local_188 = 2;
    cVar1 = FUN_180184f80(param_1,param_2,0,param_4);
    if (cVar1 == '\0') goto LAB_18018518d;
  }
  DVar5 = VerSetConditionMask(0,4,uVar7);
  if (DAT_1803c6500 == (FARPROC)0x0) {
    BVar2 = VerifyVersionInfoW(&local_178,4,DVar5);
    bVar9 = BVar2 != 0;
  }
  else {
    IVar6 = (*DAT_1803c6500)();
    bVar9 = (int)IVar6 == 0;
  }
LAB_18018518d:
  return (ulonglong)bVar9;
}



// ===== FUN_1801851d0 @ 1801851d0 (size 85)

undefined ** FUN_1801851d0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return (undefined **)"Too long hexadecimal number";
  case 2:
    return (undefined **)"Illegal or missing hexadecimal sequence";
  case 3:
    return (undefined **)"Malformed encoding found";
  case 4:
    return (undefined **)"Bad content-encoding found";
  case 5:
    return (undefined **)"Out of memory";
  case 6:
    return &PTR_1802ead18;
  default:
    return (undefined **)&DAT_180302370;
  }
}



// ===== FUN_180185260 @ 180185260 (size 874)

undefined8
FUN_180185260(longlong param_1,char *param_2,longlong param_3,longlong *param_4,int *param_5)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  *param_4 = 0;
  if (((*(char *)(param_1 + 0xade) != '\0') && (*(char *)(param_1 + 0x1cd) == '\0')) &&
     (iVar3 = FUN_180151330(param_1,1,param_2,param_3), iVar3 != 0)) {
    *param_5 = iVar3;
    return 6;
  }
switchD_180185301_default:
  if (param_3 == 0) {
    return 0;
  }
  switch(*(undefined4 *)(lVar2 + 0x20)) {
  case 0:
    cVar1 = *param_2;
    if ((((byte)(cVar1 - 0x30U) < 10) || ((byte)(cVar1 + 0x9fU) < 6)) || ((byte)(cVar1 + 0xbfU) < 6)
       ) {
      if (0xf < *(byte *)(lVar2 + 0x24)) {
        return 1;
      }
      param_2 = param_2 + 1;
      *(char *)((ulonglong)*(byte *)(lVar2 + 0x24) + 0x25 + lVar2) = cVar1;
      param_3 = param_3 + -1;
      *(char *)(lVar2 + 0x24) = *(char *)(lVar2 + 0x24) + '\x01';
      goto switchD_180185301_default;
    }
    if (*(byte *)(lVar2 + 0x24) != 0) {
      *(undefined1 *)((ulonglong)*(byte *)(lVar2 + 0x24) + 0x25 + lVar2) = 0;
      iVar3 = FUN_180176b60(lVar2 + 0x25,local_res8,0x10,lVar2 + 0x18);
      if (iVar3 == 0) {
        *(undefined4 *)(lVar2 + 0x20) = 1;
        goto switchD_180185301_default;
      }
    }
    return 2;
  case 1:
    if (*param_2 == '\n') {
      uVar4 = 2;
      if (*(longlong *)(lVar2 + 0x18) == 0) {
        uVar4 = 5;
      }
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
    }
    break;
  case 2:
    lVar5 = param_3;
    if (*(longlong *)(lVar2 + 0x18) < param_3) {
      lVar5 = *(longlong *)(lVar2 + 0x18);
    }
    lVar5 = FUN_1801401b0(lVar5);
    if (((*(char *)(param_1 + 0xade) == '\0') && (*(char *)(param_1 + 0x1cd) == '\0')) &&
       (iVar3 = FUN_180151330(param_1,1,param_2,lVar5), iVar3 != 0)) {
LAB_18018557e:
      *param_5 = iVar3;
      return 6;
    }
    *param_4 = *param_4 + lVar5;
    param_2 = param_2 + lVar5;
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) - lVar5;
    param_3 = param_3 - lVar5;
    if (*(longlong *)(lVar2 + 0x18) == 0) {
      *(undefined4 *)(lVar2 + 0x20) = 3;
    }
    goto switchD_180185301_default;
  case 3:
    if (*param_2 == '\n') {
      lVar5 = *(longlong *)(param_1 + 0x20);
      *(undefined1 *)(lVar5 + 0x24) = 0;
      *(undefined4 *)(lVar5 + 0x20) = 0;
      FUN_18013ff60(lVar5 + 0x3a0,0x1000);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
    else {
      if (*param_2 != '\r') goto LAB_1801855a5;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
    goto switchD_180185301_default;
  case 4:
    goto switchD_180185301_caseD_4;
  case 5:
    if ((*param_2 == '\r') || (*param_2 == '\n')) {
      lVar5 = FUN_18008d530(lVar2 + 0x3a0);
      if (lVar5 == 0) {
        *(undefined4 *)(lVar2 + 0x20) = 7;
      }
      else {
        iVar3 = thunk_FUN_180140070(lVar2 + 0x3a0,&DAT_1802ead50,2);
        if (iVar3 != 0) {
          return 5;
        }
        uVar7 = FUN_18008d530(lVar2 + 0x3a0);
        uVar6 = FUN_18013ff80(lVar2 + 0x3a0);
        if ((*(char *)(param_1 + 0xade) == '\0') &&
           (iVar3 = FUN_180151330(param_1,0x44,uVar7,uVar6), iVar3 != 0)) goto LAB_18018557e;
        FUN_18013ff90(lVar2 + 0x3a0);
        *(undefined4 *)(lVar2 + 0x20) = 6;
        if (*param_2 != '\n') {
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        }
      }
      goto switchD_180185301_default;
    }
    iVar3 = thunk_FUN_180140070(lVar2 + 0x3a0,param_2,1);
    if (iVar3 != 0) {
      return 5;
    }
    break;
  case 6:
    if (*param_2 != '\n') goto LAB_1801855a5;
    param_2 = param_2 + 1;
    *(undefined4 *)(lVar2 + 0x20) = 7;
    param_3 = param_3 + -1;
    goto switchD_180185301_default;
  case 7:
    cVar1 = *param_2;
    if (cVar1 == '\r') {
      param_2 = param_2 + 1;
    }
    else if (cVar1 != '\n') {
      *(undefined4 *)(lVar2 + 0x20) = 5;
      goto switchD_180185301_default;
    }
    *(undefined4 *)(lVar2 + 0x20) = 4;
    lVar5 = param_3 + -1;
    if (cVar1 != '\r') {
      lVar5 = param_3;
    }
    param_3 = lVar5;
    goto switchD_180185301_default;
  default:
    goto switchD_180185301_default;
  }
  param_2 = param_2 + 1;
  param_3 = param_3 + -1;
  goto switchD_180185301_default;
switchD_180185301_caseD_4:
  if (*param_2 == '\n') {
    uVar7 = FUN_1801401b0(param_3 + -1);
    *(undefined8 *)(lVar2 + 0x18) = uVar7;
    uVar7 = 0xffffffff;
  }
  else {
LAB_1801855a5:
    uVar7 = 3;
  }
  return uVar7;
}



// ===== FUN_180185600 @ 180185600 (size 382)

undefined8 FUN_180185600(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  *param_4 = 1;
  plVar3 = (longlong *)(*(code *)PTR_calloc_1803bd550)(0x488,1);
  *(longlong **)(param_1 + 0x1b0) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  *(undefined1 *)(lVar5 + 0x302) = 1;
  plVar3[0x90] = param_2;
  *(undefined4 *)((longlong)plVar3 + 0x47c) = param_3;
  lVar4 = FUN_180138590(0,"Content-Type: application/dns-message");
  *plVar3 = lVar4;
  if ((lVar4 != 0) &&
     (iVar2 = FUN_180186350(param_1,plVar3 + 1,1,param_2,*(undefined8 *)(param_1 + 0x958),
                            *(undefined8 *)(param_1 + 0xd8),lVar4), iVar2 == 0)) {
    *(int *)(plVar3 + 0x8f) = (int)plVar3[0x8f] + 1;
    if (*(char *)(lVar5 + 0x4f8) == '\x01') {
      return 0;
    }
    cVar1 = FUN_180156aa0(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = FUN_180186350(param_1,plVar3 + 0x48,0x1c,param_2,*(undefined8 *)(param_1 + 0x958),
                          *(undefined8 *)(param_1 + 0xd8),*plVar3);
    if (iVar2 == 0) {
      *(int *)(plVar3 + 0x8f) = (int)plVar3[0x8f] + 1;
      return 0;
    }
  }
  FUN_180138630(*plVar3);
  plVar3 = plVar3 + 1;
  **(undefined8 **)(param_1 + 0x1b0) = 0;
  lVar5 = 2;
  do {
    FUN_180140e20(plVar3);
    plVar3 = plVar3 + 0x47;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_1 + 0x1b0));
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  return 0;
}



// ===== FUN_180185780 @ 180185780 (size 1699)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180185780(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  void *_Dst;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte *pbVar19;
  char *pcVar20;
  undefined1 *puVar21;
  undefined **ppuVar22;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  uint local_380;
  byte *local_378;
  char *local_370;
  longlong local_368;
  size_t local_360;
  longlong local_358;
  void *local_350;
  longlong *local_348;
  undefined1 local_338 [132];
  undefined4 local_2b4;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined1 local_c8 [10];
  undefined1 local_be [118];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_3a8;
  local_368 = *(longlong *)(param_1 + 0x1b0);
  *param_2 = 0;
  if (local_368 != 0) {
    lVar17 = local_368 + 8;
    local_358 = param_1;
    local_348 = param_2;
    if ((*(longlong *)(local_368 + 8) == 0) && (*(longlong *)(local_368 + 0x240) == 0)) {
      FUN_180150e00(param_1,"Could not DoH-resolve: %s",*(undefined8 *)(param_1 + 0xe48));
      return 6 - (uint)(*(char *)(*(longlong *)(param_1 + 0x20) + 0x2ed) != '\0');
    }
    if (*(int *)(local_368 + 0x478) != 0) {
      return 0;
    }
    uVar5 = 0;
    uVar6 = 0;
    lVar15 = 2;
    do {
      lVar13 = lVar15;
      FUN_18013d180(*(undefined8 *)(param_1 + 0xd8));
      FUN_180140e20(lVar17);
      lVar17 = lVar17 + 0x238;
      lVar15 = lVar13 + -1;
    } while (lVar15 != 0);
    memset(local_338,0,0x270);
    local_d4 = 0x7fffffff;
    puVar12 = local_338;
    uVar18 = (ulonglong)((int)lVar13 + 3);
    do {
      FUN_18013ff60(puVar12,0x100);
      puVar12 = puVar12 + 0x20;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    local_370 = "bad error code";
    puVar12 = &DAT_180309210;
    local_378 = (byte *)CONCAT44(local_378._4_4_,*(int *)(local_368 + 0x10));
    lVar17 = local_368;
    if (*(int *)(local_368 + 0x10) != 0) {
      lVar17 = local_368 + 0x220;
      uVar7 = FUN_18013ff80(lVar17);
      uVar8 = FUN_18008d530(lVar17);
      uVar5 = FUN_180185e30(uVar8,uVar7,(ulonglong)local_378 & 0xffffffff,local_338);
      FUN_18013ff30(lVar17);
      lVar17 = local_368;
      if (uVar5 != 0) {
        if (uVar5 < 0xe) {
          pcVar20 = (&PTR_PTR_180309000)[(int)uVar5];
        }
        else {
          pcVar20 = "bad error code";
        }
        puVar21 = &DAT_180309210;
        if (*(int *)(local_368 + 0x10) == 1) {
          puVar21 = &DAT_18030920c;
        }
        local_388 = *(undefined8 *)(local_368 + 0x480);
        FUN_180150ee0(param_1,"DoH: %s type %s for %s",pcVar20,puVar21);
      }
    }
    local_378 = (byte *)CONCAT44(local_378._4_4_,*(int *)(lVar17 + 0x248));
    if (*(int *)(lVar17 + 0x248) != 0) {
      lVar17 = lVar17 + 0x458;
      uVar7 = FUN_18013ff80(lVar17);
      uVar8 = FUN_18008d530(lVar17);
      uVar6 = FUN_180185e30(uVar8,uVar7,(ulonglong)local_378 & 0xffffffff,local_338);
      FUN_18013ff30(lVar17);
      lVar17 = local_368;
      if (uVar6 != 0) {
        if (uVar6 < 0xe) {
          local_370 = (&PTR_PTR_180309000)[(int)uVar6];
        }
        if (*(int *)(local_368 + 0x248) == 1) {
          puVar12 = &DAT_18030920c;
        }
        local_388 = *(undefined8 *)(local_368 + 0x480);
        FUN_180150ee0(param_1,"DoH: %s type %s for %s",local_370,puVar12);
      }
    }
    iVar10 = 6;
    if ((uVar5 != 0) && (uVar6 != 0)) {
LAB_180185d6d:
      iVar11 = 0;
      if (0 < local_d0) {
        do {
          FUN_18013ff30(local_338 + (longlong)iVar11 * 0x20);
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_d0);
      }
      (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_1 + 0x1b0));
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      return iVar10;
    }
    FUN_180150ee0(param_1,"DoH Host name: %s",*(undefined8 *)(lVar17 + 0x480));
    FUN_180150ee0(param_1,"TTL: %u seconds",local_d4);
    iVar10 = 0;
    local_370 = (char *)((ulonglong)local_370 & 0xffffffff00000000);
    if (0 < local_d8) {
      local_378 = (byte *)((longlong)&local_2b4 + 2);
      do {
        pbVar19 = local_378;
        iVar11 = 0;
        if (*(int *)(local_378 + -6) == 1) {
          local_380 = (uint)local_378[1];
          local_388 = CONCAT44(local_388._4_4_,(uint)*local_378);
          FUN_180150ee0(param_1,"DoH A: %u.%u.%u.%u",local_378[-2],local_378[-1]);
          local_378 = pbVar19;
        }
        else {
          local_378 = pbVar19;
          if (*(int *)(local_378 + -6) == 0x1c) {
            FUN_1801450d0(local_c8,0x80,"DoH AAAA: ");
            lVar17 = 0x76;
            pbVar19 = pbVar19 + -2;
            puVar12 = local_be;
            lVar15 = 8;
            do {
              ppuVar22 = &PTR_1802ead18;
              local_380 = (uint)pbVar19[1];
              local_388 = CONCAT44(local_388._4_4_,(uint)*pbVar19);
              if (iVar11 != 0) {
                ppuVar22 = (undefined **)&DAT_1802ea954;
              }
              FUN_1801450d0(puVar12,lVar17,"%s%02x%02x",ppuVar22);
              param_1 = local_358;
              lVar13 = -1;
              do {
                lVar13 = lVar13 + 1;
              } while (puVar12[lVar13] != '\0');
              lVar17 = lVar17 - lVar13;
              puVar12 = puVar12 + lVar13;
              iVar11 = iVar11 + 2;
              pbVar19 = pbVar19 + 2;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            FUN_180150ee0(local_358,&DAT_1802fa0cc,local_c8);
            iVar10 = (int)local_370;
          }
        }
        iVar10 = iVar10 + 1;
        local_378 = local_378 + 0x14;
        local_370 = (char *)CONCAT44(local_370._4_4_,iVar10);
      } while (iVar10 < local_d8);
    }
    iVar11 = 0;
    iVar10 = 0;
    if (0 < local_d0) {
      do {
        uVar7 = FUN_18008d530(local_338 + (longlong)iVar10 * 0x20);
        FUN_180150ee0(param_1,"CNAME: %s",uVar7);
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_d0);
    }
    lVar15 = 0;
    local_370 = (char *)CONCAT44(local_370._4_4_,*(undefined4 *)(local_368 + 0x47c));
    local_350 = *(void **)(local_368 + 0x480);
    lVar17 = -1;
    do {
      lVar13 = lVar17;
      lVar17 = lVar13 + 1;
    } while (*(char *)((longlong)local_350 + lVar17) != '\0');
    local_360 = lVar13 + 2;
    local_378 = (byte *)((ulonglong)local_378 & 0xffffffff00000000);
    if (0 < local_d8) {
      puVar16 = &local_2b4;
      lVar17 = 0;
      do {
        iVar10 = 0x17;
        lVar13 = 0x1c;
        if (puVar16[-1] != 0x1c) {
          iVar10 = 2;
          lVar13 = 0x10;
        }
        lVar9 = (*(code *)PTR_calloc_1803bd550)(1,local_360 + 0x30 + lVar13);
        if (lVar9 == 0) {
          FUN_180175320(lVar15);
          goto LAB_180185dbe;
        }
        *(longlong *)(lVar9 + 0x20) = lVar9 + 0x30;
        _Dst = (void *)(lVar9 + 0x30 + lVar13);
        *(void **)(lVar9 + 0x18) = _Dst;
        memcpy(_Dst,local_350,local_360);
        if (lVar15 == 0) {
          lVar15 = lVar9;
        }
        if (lVar17 != 0) {
          *(longlong *)(lVar17 + 0x28) = lVar9;
        }
        *(int *)(lVar9 + 4) = iVar10;
        *(undefined4 *)(lVar9 + 8) = 1;
        *(int *)(lVar9 + 0x10) = (int)lVar13;
        if (iVar10 == 2) {
          puVar14 = *(undefined2 **)(lVar9 + 0x20);
          *(undefined4 *)(puVar14 + 2) = *puVar16;
LAB_180185caa:
          *puVar14 = (short)iVar10;
          uVar4 = Ordinal_9((ulonglong)local_370 & 0xffff);
          puVar14[1] = uVar4;
        }
        else if (iVar10 == 0x17) {
          puVar14 = *(undefined2 **)(lVar9 + 0x20);
          uVar1 = puVar16[1];
          uVar2 = puVar16[2];
          uVar3 = puVar16[3];
          *(undefined4 *)(puVar14 + 4) = *puVar16;
          *(undefined4 *)(puVar14 + 6) = uVar1;
          *(undefined4 *)(puVar14 + 8) = uVar2;
          *(undefined4 *)(puVar14 + 10) = uVar3;
          goto LAB_180185caa;
        }
        param_1 = local_358;
        puVar16 = puVar16 + 5;
        iVar10 = (int)local_378 + 1;
        local_378 = (byte *)CONCAT44(local_378._4_4_,iVar10);
        lVar17 = lVar9;
      } while (iVar10 < local_d8);
      if (lVar15 != 0) {
        if (*(longlong *)(local_358 + 0xe8) != 0) {
          FUN_180155d40(local_358,3,2);
        }
        local_388 = CONCAT44(local_388._4_4_,*(undefined4 *)(local_368 + 0x47c));
        lVar17 = FUN_180156570(param_1,lVar15,*(undefined8 *)(local_368 + 0x480),0);
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          FUN_180155d80(param_1,3);
        }
        if (lVar17 == 0) {
          FUN_180175320(lVar15);
          iVar10 = 6;
        }
        else {
          iVar10 = 0;
          *(longlong *)(param_1 + 0xe50) = lVar17;
          *local_348 = lVar17;
        }
        goto LAB_180185d6d;
      }
    }
LAB_180185dbe:
    if (0 < local_d0) {
      do {
        FUN_18013ff30(local_338 + (longlong)iVar11 * 0x20);
        iVar11 = iVar11 + 1;
      } while (iVar11 < local_d0);
    }
  }
  return 0x1b;
}



// ===== FUN_180185e30 @ 180185e30 (size 1102)

ulonglong FUN_180185e30(char *param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort uVar10;
  
  uVar9 = 0xc;
  uVar10 = 0;
  if (param_2 < 0xc) {
    return 4;
  }
  if (((param_1 == (char *)0x0) || (*param_1 != '\0')) || (param_1[1] != '\0')) {
    return 0xc;
  }
  if ((param_1[3] & 0xfU) != 0) {
    return 8;
  }
  for (sVar5 = CONCAT11(param_1[4],param_1[5]); sVar5 != 0; sVar5 = sVar5 + -1) {
    do {
      iVar2 = (int)uVar9;
      if (param_2 < iVar2 + 1) {
        return 2;
      }
      bVar1 = param_1[uVar9];
      if ((bVar1 & 0xc0) == 0xc0) {
        uVar8 = iVar2 + 2;
        if (param_2 < uVar8) {
          return 2;
        }
        break;
      }
      if ((bVar1 & 0xc0) != 0) {
        return 1;
      }
      uVar8 = iVar2 + bVar1 + 1;
      uVar9 = (ulonglong)uVar8;
      if (param_2 < uVar9) {
        return 2;
      }
    } while (bVar1 != 0);
    uVar9 = (ulonglong)(uVar8 + 4);
    if (param_2 < uVar9) {
      return 2;
    }
  }
  sVar5 = CONCAT11(param_1[6],param_1[7]);
  if (sVar5 != 0) {
LAB_180185f50:
    do {
      iVar2 = (int)uVar9;
      if (param_2 < iVar2 + 1) {
        return 2;
      }
      bVar1 = param_1[uVar9];
      if ((bVar1 & 0xc0) == 0xc0) {
        uVar8 = iVar2 + 2;
        if (param_2 < uVar8) {
          return 2;
        }
      }
      else {
        if ((bVar1 & 0xc0) != 0) {
          return 1;
        }
        uVar8 = iVar2 + bVar1 + 1;
        uVar9 = (ulonglong)uVar8;
        if (param_2 < uVar9) {
          return 2;
        }
        if (bVar1 != 0) goto LAB_180185f50;
      }
      uVar6 = uVar8 + 2;
      if (param_2 < uVar6) {
        return 2;
      }
      uVar10 = CONCAT11(param_1[(int)uVar8],param_1[(longlong)(int)uVar8 + 1]);
      if (((uVar10 != 5) && (uVar10 != 0x27)) && (uVar10 != param_3)) {
        return 9;
      }
      if (param_2 < uVar8 + 4) {
        return 2;
      }
      if (CONCAT11(param_1[(int)uVar6],param_1[(longlong)(int)uVar6 + 1]) != 1) {
        return 10;
      }
      uVar6 = uVar8 + 8;
      if (param_2 < uVar6) {
        return 2;
      }
      pbVar4 = (byte *)(param_1 + (int)(uVar8 + 4));
      uVar7 = (uint)CONCAT11(pbVar4[1],pbVar4[2]) << 8 | (uint)*pbVar4 << 0x18 | (uint)pbVar4[3];
      if (uVar7 < *(uint *)(param_4 + 0x264)) {
        *(uint *)(param_4 + 0x264) = uVar7;
      }
      uVar8 = uVar8 + 10;
      if (param_2 < uVar8) {
        return 2;
      }
      uVar9 = (ulonglong)(CONCAT11(param_1[(int)uVar6],param_1[(longlong)(int)uVar6 + 1]) + uVar8);
      if (param_2 < uVar9) {
        return 2;
      }
      uVar3 = FUN_180186ad0(param_1,param_2,
                            CONCAT11(param_1[(int)uVar6],param_1[(longlong)(int)uVar6 + 1]),uVar10,
                            uVar8,param_4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      sVar5 = sVar5 + -1;
    } while (sVar5 != 0);
  }
  for (sVar5 = CONCAT11(param_1[8],param_1[9]); sVar5 != 0; sVar5 = sVar5 + -1) {
    do {
      iVar2 = (int)uVar9;
      if (param_2 < iVar2 + 1) {
        return 2;
      }
      bVar1 = param_1[uVar9];
      if ((bVar1 & 0xc0) == 0xc0) {
        uVar8 = iVar2 + 2;
        if (param_2 < uVar8) {
          return 2;
        }
        break;
      }
      if ((bVar1 & 0xc0) != 0) {
        return 1;
      }
      uVar8 = iVar2 + bVar1 + 1;
      uVar9 = (ulonglong)uVar8;
      if (param_2 < uVar9) {
        return 2;
      }
    } while (bVar1 != 0);
    uVar6 = uVar8 + 8;
    if (param_2 < uVar6) {
      return 2;
    }
    if (param_2 < uVar8 + 10) {
      return 2;
    }
    uVar9 = (ulonglong)
            ((uint)CONCAT11(param_1[(int)uVar6],param_1[(longlong)(int)uVar6 + 1]) + uVar8 + 10);
    if (param_2 < uVar9) {
      return 2;
    }
  }
  sVar5 = CONCAT11(param_1[10],param_1[0xb]);
  do {
    if (sVar5 == 0) {
      if (uVar9 == param_2) {
        if ((uVar10 == 2) || (*(int *)(param_4 + 0x268) != 0)) {
          uVar9 = 0;
        }
        else {
          uVar8 = 0;
          if (*(int *)(param_4 + 0x260) == 0) {
            uVar8 = 0xb;
          }
          uVar9 = (ulonglong)uVar8;
        }
      }
      else {
        uVar9 = 7;
      }
      return uVar9;
    }
    do {
      iVar2 = (int)uVar9;
      if (param_2 < iVar2 + 1) {
        return 2;
      }
      bVar1 = param_1[uVar9];
      if ((bVar1 & 0xc0) == 0xc0) {
        uVar8 = iVar2 + 2;
        if (param_2 < uVar8) {
          return 2;
        }
        break;
      }
      if ((bVar1 & 0xc0) != 0) {
        return 1;
      }
      uVar8 = iVar2 + bVar1 + 1;
      uVar9 = (ulonglong)uVar8;
      if (param_2 < uVar9) {
        return 2;
      }
    } while (bVar1 != 0);
    uVar6 = uVar8 + 8;
    if (((param_2 < uVar6) || (param_2 < uVar8 + 10)) ||
       (uVar9 = (ulonglong)
                ((uint)CONCAT11(param_1[(int)uVar6],param_1[(longlong)(int)uVar6 + 1]) + uVar8 + 10)
       , param_2 < uVar9)) {
      return 2;
    }
    sVar5 = sVar5 + -1;
  } while( true );
}



// ===== FUN_180186280 @ 180186280 (size 148)

undefined8 FUN_180186280(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa88);
  puVar2 = *(undefined8 **)(lVar1 + 0x1b0);
  *(int *)(puVar2 + 0x8f) = *(int *)(puVar2 + 0x8f) + -1;
  FUN_180150ee0(lVar1,"a DoH request is completed, %u to go");
  if (param_2 != 0) {
    uVar3 = FUN_1801387d0(param_2);
    FUN_180150ee0(lVar1,"DoH request %s",uVar3);
  }
  if (*(int *)(puVar2 + 0x8f) == 0) {
    FUN_180138630(*puVar2);
    *puVar2 = 0;
    FUN_18013c1c0(lVar1,0,8);
  }
  return 0;
}



// ===== FUN_180186350 @ 180186350 (size 1908)

ulonglong FUN_180186350(longlong param_1,longlong *param_2,undefined4 param_3,char *param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  size_t _Size;
  ulonglong uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong local_res20;
  
  local_res20 = 0;
  lVar8 = -1;
  do {
    lVar7 = lVar8;
    lVar8 = lVar7 + 1;
  } while (param_4[lVar8] != '\0');
  if (0x110 < (ulonglong)(param_4[lVar7] != '.') + 0x11 + lVar8) {
    uVar10 = 0xd;
LAB_1801864ce:
    FUN_180150e00(param_1,"Failed to encode DoH packet [%d]",uVar10);
    return 0x1b;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x10000;
  plVar11 = param_2 + 3;
  param_2[2] = 0x100;
  cVar2 = *param_4;
  while (cVar2 != '\0') {
    pcVar5 = strchr(param_4,0x2e);
    if (pcVar5 == (char *)0x0) {
      _Size = 0xffffffffffffffff;
      do {
        _Size = _Size + 1;
      } while (param_4[_Size] != '\0');
    }
    else {
      _Size = (longlong)pcVar5 - (longlong)param_4;
    }
    if (0x3e < _Size - 1) {
      uVar10 = 1;
      param_2[0x42] = 0;
      goto LAB_1801864ce;
    }
    *(char *)plVar11 = (char)_Size;
    memcpy((undefined1 *)((longlong)plVar11 + 1),param_4,_Size);
    plVar11 = (longlong *)((undefined1 *)((longlong)plVar11 + 1) + _Size);
    pcVar1 = param_4 + _Size;
    param_4 = pcVar1 + 1;
    if (pcVar5 == (char *)0x0) {
      param_4 = pcVar1;
    }
    cVar2 = *param_4;
  }
  *(undefined1 *)plVar11 = 0;
  *(char *)((longlong)plVar11 + 2) = (char)param_3;
  *(undefined1 *)((longlong)plVar11 + 3) = 0;
  *(undefined1 *)((longlong)plVar11 + 4) = 1;
  *(char *)((longlong)plVar11 + 1) = (char)((uint)param_3 >> 8);
  param_2[0x42] = (longlong)((longlong)plVar11 + (5 - ((longlong)param_2 + 0xc)));
  *(undefined4 *)(param_2 + 1) = param_3;
  FUN_18013ff60(param_2 + 0x43,3000);
  uVar6 = FUN_180152610(param_1,0,1);
  if ((longlong)uVar6 < 1) {
    uVar9 = 0x1c;
  }
  else {
    uVar3 = FUN_1801416f0(&local_res20);
    uVar9 = (ulonglong)uVar3;
    if (uVar3 == 0) {
      *(undefined1 *)(local_res20 + 0x14c8) = 1;
      uVar3 = FUN_18013bff0(local_res20,0x2712,param_5);
      uVar9 = (ulonglong)(int)uVar3;
      if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
        uVar3 = FUN_18013bff0(local_res20,0x27fe,&DAT_1802ea6a8);
        uVar9 = (ulonglong)(int)uVar3;
        if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
          uVar3 = FUN_18013bff0(local_res20,0x4e2b,FUN_180186320);
          uVar9 = (ulonglong)(int)uVar3;
          if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
            uVar3 = FUN_18013bff0(local_res20,0x2711,param_2 + 0x43);
            uVar9 = (ulonglong)(int)uVar3;
            if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
              uVar3 = FUN_18013bff0(local_res20,0x271f,(longlong)param_2 + 0xc);
              uVar9 = (ulonglong)(int)uVar3;
              if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
                uVar3 = FUN_18013bff0(local_res20,0x3c,(int)param_2[0x42]);
                uVar9 = (ulonglong)(int)uVar3;
                if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
                  uVar3 = FUN_18013bff0(local_res20,0x2727,param_7);
                  uVar9 = (ulonglong)(int)uVar3;
                  if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
                    uVar3 = FUN_18013bff0(local_res20,0xb5,2);
                    uVar9 = (ulonglong)(int)uVar3;
                    if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
                      uVar3 = FUN_18013bff0(local_res20,0x9b,uVar6 & 0xffffffff);
                      uVar9 = (ulonglong)(int)uVar3;
                      if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
                        uVar3 = FUN_18013bff0(local_res20,0x2774,*(undefined8 *)(param_1 + 0xe8));
                        uVar9 = (ulonglong)(int)uVar3;
                        if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
                          if (*(longlong *)(param_1 + 0x1d8) != 0) {
                            lVar8 = *(longlong *)(param_1 + 0x1d8);
                            lVar7 = __acrt_iob_func(2);
                            if (lVar8 != lVar7) {
                              uVar3 = FUN_18013bff0(local_res20,0x2735,lVar8);
                              uVar9 = (ulonglong)(int)uVar3;
                              if ((0x30 < uVar3) || ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                              goto LAB_180186494;
                            }
                          }
                          if (*(char *)(param_1 + 0xad7) != '\0') {
                            uVar3 = FUN_18013bff0(local_res20,0x29,1);
                            uVar9 = (ulonglong)(int)uVar3;
                            if ((0x30 < uVar3) || ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                            goto LAB_180186494;
                          }
                          if (*(char *)(param_1 + 0xadb) != '\0') {
                            uVar3 = FUN_18013bff0(local_res20,99,1);
                            uVar9 = (ulonglong)(int)uVar3;
                            if ((0x30 < uVar3) || ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                            goto LAB_180186494;
                          }
                          uVar3 = FUN_18013bff0(local_res20,0x51,
                                                -(*(char *)(param_1 + 0xaee) != '\0') & 2);
                          uVar9 = (ulonglong)(int)uVar3;
                          if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
                            uVar3 = FUN_18013bff0(local_res20,0x40,
                                                  *(char *)(param_1 + 0xaed) != '\0');
                            uVar9 = (ulonglong)(int)uVar3;
                            if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0)) {
                              uVar3 = FUN_18013bff0(local_res20,0xe8,
                                                    *(char *)(param_1 + 0xaef) != '\0');
                              uVar9 = (ulonglong)(int)uVar3;
                              if ((uVar3 < 0x31) && ((0x1000000000011U >> (uVar9 & 0x3f) & 1) != 0))
                              {
                                if (*(char *)(param_1 + 0x5f9) != '\0') {
                                  uVar3 = FUN_18013bff0(local_res20,0xe9,1);
                                  uVar9 = (ulonglong)(int)uVar3;
                                  if ((0x30 < uVar3) ||
                                     ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                                  goto LAB_180186494;
                                }
                                if (*(longlong *)(param_1 + 0x820) != 0) {
                                  uVar3 = FUN_18013bff0(local_res20,0x2751);
                                  uVar9 = (ulonglong)(int)uVar3;
                                  if ((0x30 < uVar3) ||
                                     ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                                  goto LAB_180186494;
                                }
                                if (*(longlong *)(param_1 + 0x9f0) != 0) {
                                  uVar3 = FUN_18013bff0(local_res20,0x9d75);
                                  uVar9 = (ulonglong)(int)uVar3;
                                  if ((0x30 < uVar3) ||
                                     ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                                  goto LAB_180186494;
                                }
                                if (*(longlong *)(param_1 + 0x810) != 0) {
                                  uVar3 = FUN_18013bff0(local_res20,0x2771);
                                  uVar9 = (ulonglong)(int)uVar3;
                                  if ((0x30 < uVar3) ||
                                     ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                                  goto LAB_180186494;
                                }
                                if (*(longlong *)(param_1 + 0x868) != 0) {
                                  uVar3 = FUN_18013bff0(local_res20,0x27b9);
                                  uVar9 = (ulonglong)(int)uVar3;
                                  if ((0x30 < uVar3) ||
                                     ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                                  goto LAB_180186494;
                                }
                                if (*(char *)(param_1 + 0x5f8) != '\0') {
                                  uVar3 = FUN_18013bff0(local_res20,0xac,1);
                                  uVar9 = (ulonglong)(int)uVar3;
                                  if ((0x30 < uVar3) ||
                                     ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                                  goto LAB_180186494;
                                }
                                if (*(longlong *)(param_1 + 0x5c0) != 0) {
                                  uVar3 = FUN_18013bff0(local_res20,0x4e8c);
                                  uVar9 = (ulonglong)(int)uVar3;
                                  if ((0x30 < uVar3) ||
                                     ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                                  goto LAB_180186494;
                                }
                                if (*(longlong *)(param_1 + 0x5c8) != 0) {
                                  uVar3 = FUN_18013bff0(local_res20,0x277d);
                                  uVar9 = (ulonglong)(int)uVar3;
                                  if ((0x30 < uVar3) ||
                                     ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                                  goto LAB_180186494;
                                }
                                if (*(longlong *)(param_1 + 0x268) != 0) {
                                  uVar3 = FUN_18013bff0(local_res20,0x4e7e);
                                  uVar9 = (ulonglong)(int)uVar3;
                                  if ((0x30 < uVar3) ||
                                     ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                                  goto LAB_180186494;
                                }
                                if (*(longlong *)(param_1 + 0x1e0) != 0) {
                                  uVar3 = FUN_18013bff0(local_res20,0x276f);
                                  uVar9 = (ulonglong)(int)uVar3;
                                  if ((0x30 < uVar3) ||
                                     ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                                  goto LAB_180186494;
                                }
                                if (*(longlong *)(param_1 + 0x998) != 0) {
                                  uVar3 = FUN_18013bff0(local_res20,0x283a);
                                  uVar9 = (ulonglong)(int)uVar3;
                                  if ((0x30 < uVar3) ||
                                     ((0x1000000000011U >> (uVar9 & 0x3f) & 1) == 0))
                                  goto LAB_180186494;
                                }
                                FUN_18013bff0(local_res20,0xd8,
                                              -(*(char *)(param_1 + 0x5ff) != '\0') & 0x20U |
                                              -(*(char *)(param_1 + 0x5fe) != '\0') & 0x10U |
                                              -(*(char *)(param_1 + 0x5fd) != '\0') & 8U |
                                              -(*(char *)(param_1 + 0x5fc) != '\0') & 4U |
                                              -(*(char *)(param_1 + 0x5fb) != '\0') & 2U |
                                              *(char *)(param_1 + 0x5fa) != '\0');
                                *(code **)(local_res20 + 0xa80) = FUN_180186280;
                                *(longlong *)(local_res20 + 0xa88) = param_1;
                                *param_2 = local_res20;
                                iVar4 = FUN_18013cac0(param_6);
                                if (iVar4 == 0) {
                                  (*(code *)PTR_free_1803bd538)(0);
                                  return 0;
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
        }
      }
    }
  }
LAB_180186494:
  (*(code *)PTR_free_1803bd538)(0);
  FUN_180140e20(&local_res20);
  return uVar9 & 0xffffffff;
}



// ===== FUN_180186ad0 @ 180186ad0 (size 491)

undefined8
FUN_180186ad0(longlong param_1,ulonglong param_2,short param_3,short param_4,uint param_5,
             longlong param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_4 == 1) {
    if (param_3 != 4) {
      return 6;
    }
    if (*(int *)(param_6 + 0x260) < 0x18) {
      lVar7 = param_6 + (longlong)*(int *)(param_6 + 0x260) * 0x14;
      *(undefined4 *)(lVar7 + 0x80) = 1;
      *(undefined4 *)(lVar7 + 0x84) = *(undefined4 *)((int)param_5 + param_1);
      *(int *)(param_6 + 0x260) = *(int *)(param_6 + 0x260) + 1;
    }
  }
  else if (param_4 == 5) {
    iVar8 = 0x80;
    iVar4 = *(int *)(param_6 + 0x268);
    if (iVar4 != 4) {
      lVar7 = (longlong)iVar4 * 0x20 + param_6;
      *(int *)(param_6 + 0x268) = iVar4 + 1;
      do {
        if (param_2 <= param_5) {
          return 2;
        }
        bVar2 = *(byte *)((ulonglong)param_5 + param_1);
        if ((bVar2 & 0xc0) == 0xc0) {
          if (param_2 <= param_5 + 1) {
            return 2;
          }
          param_5 = (bVar2 & 0x3f) << 8 | (uint)*(byte *)((ulonglong)(param_5 + 1) + param_1);
          if (bVar2 == 0) goto LAB_180186bcd;
        }
        else {
          if ((bVar2 & 0xc0) != 0) {
            return 1;
          }
          uVar6 = param_5 + 1;
          if (bVar2 == 0) {
LAB_180186bcd:
            if (iVar8 == 0) {
              return 3;
            }
            return 0;
          }
          lVar5 = FUN_18013ff80(lVar7);
          if ((lVar5 != 0) && (iVar4 = thunk_FUN_180140070(lVar7,&DAT_1802f5954,1), iVar4 != 0)) {
            return 5;
          }
          param_5 = uVar6 + bVar2;
          if (param_2 < param_5) {
            return 1;
          }
          iVar4 = thunk_FUN_180140070(lVar7,(ulonglong)uVar6 + param_1,bVar2);
          if (iVar4 != 0) {
            return 5;
          }
        }
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          return 3;
        }
      } while( true );
    }
  }
  else if (param_4 == 0x1c) {
    if (param_3 != 0x10) {
      return 6;
    }
    iVar4 = *(int *)(param_6 + 0x260);
    if (iVar4 < 0x18) {
      *(undefined4 *)(param_6 + 0x80 + (longlong)iVar4 * 0x14) = 0x1c;
      uVar3 = ((undefined8 *)((int)param_5 + param_1))[1];
      puVar1 = (undefined8 *)(param_6 + 0x84 + (longlong)iVar4 * 0x14);
      *puVar1 = *(undefined8 *)((int)param_5 + param_1);
      puVar1[1] = uVar3;
      *(int *)(param_6 + 0x260) = *(int *)(param_6 + 0x260) + 1;
    }
  }
  return 0;
}



// ===== FUN_180186cc0 @ 180186cc0 (size 364)

undefined8
FUN_180186cc0(longlong *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  undefined8 *_Dst;
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1b;
  if (((param_1[3] == 0) || ((ulonglong)param_1[1] < (ulonglong)param_1[3])) &&
     (param_5 + param_3 + param_1[4] <= (ulonglong)param_1[5])) {
    uVar1 = *(uint *)(param_1 + 6);
    puVar3 = (undefined8 *)(*(code *)PTR_calloc_1803bd550)(1,param_5 + 0x22 + param_3);
    if (puVar3 != (undefined8 *)0x0) {
      _Dst = puVar3 + 4;
      *puVar3 = _Dst;
      memcpy(_Dst,param_2,param_3);
      pvVar4 = (void *)(param_3 + 1 + (longlong)_Dst);
      puVar3[2] = param_3;
      puVar3[1] = pvVar4;
      memcpy(pvVar4,param_4,param_5);
      puVar3[3] = param_5;
      if ((uVar1 & 1) != 0) {
        FUN_180140250(*puVar3,*puVar3,puVar3[2]);
      }
      if ((ulonglong)param_1[2] <= param_1[1] + 1U) {
        uVar2 = param_1[3];
        uVar5 = param_1[1] + 0x10;
        if ((uVar2 != 0) && (uVar2 < uVar5)) {
          uVar5 = uVar2;
        }
        pvVar4 = (void *)(*(code *)PTR_calloc_1803bd550)(uVar5,8);
        if (pvVar4 == (void *)0x0) {
          (*(code *)PTR_free_1803bd538)(puVar3);
          return 0x1b;
        }
        if ((void *)*param_1 != (void *)0x0) {
          memcpy(pvVar4,(void *)*param_1,param_1[1] << 3);
          (*(code *)PTR_free_1803bd538)(*param_1);
        }
        *param_1 = (longlong)pvVar4;
        param_1[2] = uVar5;
      }
      *(undefined8 **)(*param_1 + param_1[1] * 8) = puVar3;
      param_1[4] = param_1[4] + param_5 + param_3;
      param_1[1] = param_1[1] + 1;
      uVar6 = 0;
    }
  }
  return uVar6;
}



// ===== FUN_180186e70 @ 180186e70 (size 110)

void FUN_180186e70(longlong *param_1)

{
  ulonglong uVar1;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    uVar1 = 0;
    do {
      (*(code *)PTR_free_1803bd538)(*(undefined8 *)(*param_1 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulonglong)param_1[1]);
  }
  (*(code *)PTR_free_1803bd538)(*param_1);
  *param_1 = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}



// ===== FUN_180186ee0 @ 180186ee0 (size 469)

undefined8 FUN_180186ee0(longlong *param_1,char *param_2,size_t param_3)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *_Buf;
  void *pvVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    return 0;
  }
  if ((*param_2 == ' ') || (*param_2 == '\t')) {
    sVar5 = param_1[1];
    while (sVar5 != 0) {
      if ((*param_2 != ' ') && (*param_2 != '\t')) {
        if (param_3 == 0) {
          return 0x2b;
        }
        puVar1 = *(undefined8 **)(*param_1 + -8 + param_1[1] * 8);
        lVar9 = puVar1[3] + 1 + param_3;
        puVar7 = (undefined8 *)(*(code *)PTR_calloc_1803bd550)(1,puVar1[2] + 0x22 + lVar9);
        if (puVar7 == (undefined8 *)0x0) {
          return 0x1b;
        }
        _Dst = puVar7 + 4;
        *puVar7 = _Dst;
        memcpy(_Dst,(void *)*puVar1,puVar1[2]);
        puVar7[2] = puVar1[2];
        pvVar4 = (void *)((longlong)_Dst + puVar1[2] + 1);
        puVar7[1] = pvVar4;
        memcpy(pvVar4,(void *)puVar1[1],puVar1[3]);
        lVar2 = puVar1[3];
        *(undefined1 *)((longlong)pvVar4 + lVar2) = 0x20;
        memcpy((undefined1 *)((longlong)pvVar4 + lVar2) + 1,param_2,param_3);
        puVar7[3] = lVar9;
        *(undefined8 **)(*param_1 + -8 + param_1[1] * 8) = puVar7;
        (*(code *)PTR_free_1803bd538)(puVar1);
        return 0;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
      sVar5 = param_3;
    }
  }
  else {
    _Buf = memchr(param_2,0x3a,param_3);
    if (_Buf != (char *)0x0) {
      uVar8 = (longlong)_Buf - (longlong)param_2;
      uVar3 = uVar8;
      do {
        uVar3 = uVar3 + 1;
        _Buf = _Buf + 1;
        if (param_3 <= uVar3) break;
      } while ((*_Buf == ' ') || (*_Buf == '\t'));
      param_3 = param_3 - uVar3;
      pvVar4 = memchr(_Buf,0xd,param_3);
      if (pvVar4 == (void *)0x0) {
        pvVar4 = memchr(_Buf,10,param_3);
      }
      sVar5 = (longlong)pvVar4 - (longlong)_Buf;
      if (pvVar4 == (void *)0x0) {
        sVar5 = param_3;
      }
      uVar6 = FUN_180186cc0(param_1,param_2,uVar8,_Buf,sVar5);
      return uVar6;
    }
  }
  return 0x2b;
}



// ===== FUN_1801870f0 @ 1801870f0 (size 109)

void FUN_1801870f0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (param_1[1] != 0) {
    uVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(*param_1 + uVar3 * 8);
      iVar2 = FUN_18013fef0(param_2,"%.*s: %.*s\r\n",*(undefined4 *)(puVar1 + 2),*puVar1,
                            *(undefined4 *)(puVar1 + 3),puVar1[1]);
      if (iVar2 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_1[1]);
  }
  return;
}



// ===== FUN_180187180 @ 180187180 (size 121)

undefined8 FUN_180187180(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((*(char *)(param_1 + 0x13b5) == '\0') || (*(char *)(param_1 + 0xad2) != '\0')) {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0xcf8) == 0) ||
     (((iVar2 = FUN_180140330(*(longlong *)(param_1 + 0xcf8),*(undefined8 *)(lVar1 + 0x70)),
       iVar2 == 0 || (*(int *)(param_1 + 0xd00) != *(int *)(lVar1 + 0x4e4))) ||
      (*(int *)(param_1 + 0xd04) != *(int *)(*(longlong *)(lVar1 + 0x308) + 0x84))))) {
    return 0;
  }
  return 1;
}



// ===== FUN_180187200 @ 180187200 (size 72)

undefined8 FUN_180187200(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = FUN_180145000("%s@%s",param_1);
    return uVar1;
  }
  if (param_3 == 0) {
    uVar1 = FUN_180145000("%s/%s",param_1,param_2);
    return uVar1;
  }
  uVar1 = FUN_180145000("%s/%s@%s",param_1,param_2,param_3);
  return uVar1;
}



// ===== FUN_180187280 @ 180187280 (size 267)

undefined8 FUN_180187280(void)

{
  longlong lVar1;
  longlong in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (*(code *)PTR_free_1803bd538)();
  *(undefined8 *)(in_stack_00000030 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000030 + 0xc) = 0;
  lVar1 = FUN_180145000(&DAT_180309338,0,0,0,0,6,0x82,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                        &PTR_1802ead18,&PTR_1802ead18);
  if (lVar1 == 0) {
    return 0x1b;
  }
  FUN_18018a2f0(in_stack_00000038,lVar1,0x20,free);
  return 0;
}



// ===== FUN_180187390 @ 180187390 (size 1679)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180187390(undefined8 param_1,undefined **param_2,undefined8 param_3,uint *param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong _Size;
  ulonglong uVar8;
  undefined **ppuVar9;
  byte bVar10;
  ulonglong uVar11;
  undefined1 auStack_b48 [32];
  uint *local_b28;
  undefined1 *local_b20;
  undefined8 local_b18;
  undefined4 local_b10;
  undefined8 local_b08;
  undefined4 local_b00;
  undefined8 local_af8;
  undefined4 local_af0;
  undefined4 local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  uint local_ad0;
  uint local_ac8;
  uint local_ac0;
  uint local_ab8;
  undefined4 local_ab0;
  undefined4 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  uint local_a90;
  uint local_a88;
  uint local_a80;
  uint local_a78;
  uint local_a70;
  uint local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  uint local_a50;
  uint local_a48;
  uint local_a40;
  uint local_a38;
  uint local_a30;
  uint local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined4 local_a10;
  undefined4 local_a08;
  undefined4 local_a00;
  undefined4 local_9f8;
  uint local_9f0;
  uint local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  uint local_990;
  uint local_988;
  uint local_980;
  uint local_978;
  byte local_968;
  uint local_964;
  uint local_960;
  uint local_95c;
  uint local_958;
  ulonglong local_950;
  undefined8 *local_948;
  undefined8 local_940;
  undefined **local_938;
  undefined8 *local_930;
  ulonglong local_928;
  undefined **local_920;
  ulonglong local_918;
  undefined8 local_910;
  uint *local_908;
  undefined1 local_900 [8];
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined1 local_8c8 [24];
  undefined1 local_8b0 [24];
  undefined1 local_898 [24];
  undefined1 local_880 [24];
  char local_868 [4];
  undefined4 auStack_864 [3];
  undefined8 auStack_858 [126];
  char local_468 [1040];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_b48;
  local_910 = param_5;
  bVar10 = (byte)*param_4 & 1;
  local_930 = &local_8e0;
  local_964 = 0x18;
  local_948 = (undefined8 *)0x0;
  local_468[0] = '\0';
  local_968 = bVar10;
  local_940 = param_1;
  local_908 = param_4;
  memset(local_468 + 1,0,0x400);
  local_8e8 = 0;
  uVar11 = 0;
  local_8d0 = 0;
  local_950 = 0;
  local_8f8 = 0;
  uStack_8f0 = 0;
  local_8e0 = 0;
  uStack_8d8 = 0;
  pcVar6 = strchr((char *)param_2,0x5c);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = strchr((char *)param_2,0x2f);
  }
  if (pcVar6 == (char *)0x0) {
    ppuVar9 = param_2;
  }
  else {
    uVar11 = (longlong)pcVar6 - (longlong)param_2;
    ppuVar9 = (undefined **)(pcVar6 + 1);
    local_950 = uVar11;
  }
  uVar8 = 0xffffffffffffffff;
  if (pcVar6 == (char *)0x0) {
    param_2 = &PTR_1802ead18;
  }
  do {
    uVar8 = uVar8 + 1;
  } while (*(char *)((longlong)ppuVar9 + uVar8) != '\0');
  local_938 = ppuVar9;
  local_928 = uVar8;
  local_920 = param_2;
  FUN_1801450d0(local_468,0x401,&DAT_1802fa0cc,"WORKSTATION");
  if ((*param_4 & 0x80000) == 0) {
    uVar7 = FUN_18018b680(param_3,local_898);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    FUN_18018b3d0(local_898,param_4 + 1,&local_8e0);
    uVar7 = FUN_18018b480(param_3,local_880);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    FUN_18018b3d0(local_880,param_4 + 1,&local_8f8);
    local_978 = *param_4;
    local_990 = local_978 & 0xfff7ffff;
    *param_4 = local_990;
    local_978 = local_978 >> 0x18;
    local_980 = local_990 >> 0x10;
    local_960 = local_990 >> 8;
  }
  else {
    uVar7 = FUN_180177b80(local_940,local_900,8);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    uVar7 = FUN_18018b680(param_3,local_8b0);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    local_b20 = local_8c8;
    local_b28 = (uint *)local_8b0;
    uVar7 = FUN_18018b750(ppuVar9,uVar8,param_2,uVar11);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    uVar7 = FUN_18018b5f0(local_8c8,local_900,param_4 + 1,&local_8f8);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    local_b28 = &local_964;
    uVar7 = FUN_18018b880(local_8c8,local_900,param_4,&local_948);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    local_978 = (uint)*(byte *)((longlong)param_4 + 3);
    local_980 = (uint)*(byte *)((longlong)param_4 + 2);
    local_990 = *param_4;
    local_930 = local_948;
    local_960 = (uint)*(byte *)((longlong)param_4 + 1);
  }
  if (bVar10 != 0) {
    uVar11 = uVar11 * 2;
    uVar8 = uVar8 * 2;
    local_950 = uVar11;
    local_928 = uVar8;
  }
  uVar7 = local_950;
  local_a50 = (uint)uVar8 & 0xff;
  _Size = 0x16;
  if (bVar10 == 0) {
    _Size = 0xb;
  }
  uVar5 = local_964 + 0x58;
  lVar1 = uVar5 + uVar11;
  local_ac8 = local_964 >> 8 & 0xff;
  local_ad0 = local_964 & 0xff;
  local_980 = local_980 & 0xff;
  local_988 = local_960 & 0xff;
  local_990 = local_990 & 0xff;
  local_998 = 0;
  local_9a0 = 0;
  local_9a8 = 0;
  local_9b0 = 0;
  local_9b8 = 0;
  local_9c0 = 0;
  local_9c8 = 0;
  local_9d0 = 0;
  local_9d8 = 0;
  local_9e0 = 0;
  local_9e8 = (uint)(byte)(uVar8 + lVar1 >> 8);
  local_9f0 = (uint)(uVar8 + lVar1) & 0xff;
  local_9f8 = 0;
  local_a30 = (uint)lVar1 & 0xff;
  local_a70 = uVar5 & 0xff;
  local_a10 = (undefined4)_Size;
  local_a08 = 0;
  local_a18 = 0;
  local_a20 = 0;
  local_a28 = (uint)(byte)((ulonglong)lVar1 >> 8);
  local_a48 = (uint)(byte)(uVar8 >> 8);
  local_a58 = 0;
  local_a60 = 0;
  local_a68 = uVar5 >> 8 & 0xff;
  local_a88 = (uint)(byte)(uVar11 >> 8);
  local_a90 = (uint)local_950 & 0xff;
  local_a98 = 0;
  local_aa0 = 0;
  local_aa8 = 0;
  local_ab0 = 0x58;
  local_ad8 = 0;
  local_ae0 = 0;
  local_ae8 = 0;
  local_af0 = 0x40;
  local_af8 = 0;
  local_b00 = 0x18;
  local_b08 = 0;
  local_b10 = 0x18;
  local_b18 = 0;
  local_b20 = (undefined1 *)0x0;
  local_b28 = (uint *)0x0;
  local_ac0 = local_ad0;
  local_ab8 = local_ac8;
  local_a80 = local_a90;
  local_a78 = local_a88;
  local_a40 = local_a50;
  local_a38 = local_a48;
  local_a00 = local_a10;
  local_95c = local_ac8;
  local_958 = local_ad0;
  local_918 = _Size;
  iVar4 = FUN_1801450d0(local_868,0x400,&DAT_180309390,0);
  uVar11 = (ulonglong)iVar4;
  if (uVar11 < 1000) {
    *(undefined4 *)(local_868 + uVar11) = (undefined4)local_8f8;
    *(undefined4 *)((longlong)auStack_864 + uVar11) = local_8f8._4_4_;
    *(undefined4 *)((longlong)auStack_864 + uVar11 + 4) = (undefined4)uStack_8f0;
    *(undefined4 *)((longlong)auStack_864 + uVar11 + 8) = uStack_8f0._4_4_;
    *(undefined8 *)((longlong)auStack_858 + uVar11) = local_8e8;
    uVar11 = uVar11 + 0x18;
  }
  uVar8 = local_964 + uVar11;
  if (uVar8 < 0x401) {
    memcpy(local_868 + uVar11,local_930,(ulonglong)local_964);
    (*(code *)PTR_free_1803bd538)(local_948);
    uVar11 = local_928;
    lVar1 = uVar8 + uVar7;
    lVar2 = lVar1 + local_928;
    if (_Size + lVar2 < 0x400) {
      if (local_968 == 0) {
        memcpy(local_868 + uVar8,local_920,uVar7);
        memcpy(local_868 + lVar1,local_938,uVar11);
        memcpy(local_868 + lVar2,local_468,_Size);
      }
      else {
        uVar11 = 0;
        if (uVar7 >> 1 != 0) {
          do {
            (local_868 + uVar8)[uVar11 * 2] = *(char *)((longlong)local_920 + uVar11);
            local_868[uVar11 * 2 + uVar8 + 1] = '\0';
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar7 >> 1);
        }
        uVar11 = 0;
        if (local_928 >> 1 != 0) {
          do {
            local_868[uVar11 * 2 + lVar1] = *(char *)((longlong)local_938 + uVar11);
            local_868[uVar11 * 2 + lVar1 + 1] = '\0';
            uVar11 = uVar11 + 1;
          } while (uVar11 < local_928 >> 1);
        }
        uVar11 = 0;
        do {
          local_868[uVar11 * 2 + lVar2] = local_468[uVar11];
          local_868[uVar11 * 2 + lVar2 + 1] = '\0';
          uVar11 = uVar11 + 1;
        } while (uVar11 < _Size >> 1);
      }
      uVar5 = FUN_18018a260(local_910,local_868,_Size + lVar2);
      puVar3 = local_908;
      uVar11 = (ulonglong)uVar5;
      (*(code *)PTR_free_1803bd538)(*(undefined8 *)(local_908 + 4));
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[3] = 0;
    }
    else {
      FUN_180150e00(local_940,"user + domain + host name too big");
      uVar11 = 0x1b;
    }
  }
  else {
    FUN_180150e00(local_940,"incoming NTLM message too big");
    uVar11 = 0x1b;
  }
  return uVar11;
}



// ===== FUN_180187a20 @ 180187a20 (size 373)

undefined4 FUN_180187a20(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  void *_Dst;
  
  plVar4 = (longlong *)FUN_18013ff80(param_2);
  uVar5 = FUN_18007e060(param_2);
  *param_3 = 0;
  if (((uVar5 < 0x20) || (*plVar4 != 0x5053534d4c544e)) || ((int)plVar4[1] != DAT_180309294)) {
    FUN_180150ee0(param_1,"NTLM handshake failure (bad type-2 message)");
    return 0x3d;
  }
  uVar2 = FUN_18018bba0((longlong)plVar4 + 0x14);
  *param_3 = uVar2;
  *(longlong *)(param_3 + 1) = plVar4[3];
  if ((uVar2 >> 0x17 & 1) == 0) {
    return 0;
  }
  uVar2 = 0;
  lVar6 = FUN_18013ff80(param_2);
  uVar5 = FUN_18007e060(param_2);
  if (0x2f < uVar5) {
    uVar1 = FUN_18018bb90(lVar6 + 0x28);
    uVar2 = (uint)uVar1;
    uVar3 = FUN_18018bba0(lVar6 + 0x2c);
    if (uVar1 != 0) {
      if (((uVar5 < uVar3) || (uVar5 < uVar3 + uVar1)) || (uVar3 < 0x30)) {
        FUN_180150ee0(param_1,
                      "NTLM handshake failure (bad type-2 message). Target Info Offset Len is set incorrect by the peer"
                     );
        FUN_180150ee0(param_1,"NTLM handshake failure (bad type-2 message)");
        return 0x3d;
      }
      (*(code *)PTR_free_1803bd538)(*(undefined8 *)(param_3 + 4));
      _Dst = (void *)(*(code *)PTR_malloc_1803bd530)((ulonglong)uVar1);
      *(void **)(param_3 + 4) = _Dst;
      if (_Dst == (void *)0x0) {
        FUN_180150ee0(param_1,"NTLM handshake failure (bad type-2 message)");
        return 0x1b;
      }
      memcpy(_Dst,(void *)((ulonglong)uVar3 + lVar6),(ulonglong)uVar1);
    }
  }
  param_3[3] = uVar2;
  return 0;
}



// ===== FUN_180187ba0 @ 180187ba0 (size 2806)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_180187ba0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  longlong lVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  char *pcVar13;
  ulonglong uVar14;
  undefined **ppuVar15;
  longlong lVar16;
  undefined ***pppuVar17;
  undefined1 auStack_468 [32];
  undefined ***local_448;
  char *local_440;
  undefined **local_438;
  char *local_430;
  undefined **local_428;
  int local_420 [2];
  undefined8 local_418;
  longlong local_410;
  undefined ***local_408;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0;
  __time64_t local_3e8;
  undefined **local_3e0;
  undefined1 local_3d8 [32];
  char local_3b8 [32];
  undefined *local_398 [4];
  tm local_378;
  undefined8 local_350;
  undefined1 local_348;
  undefined8 local_340 [3];
  char local_328 [80];
  char local_2d8 [112];
  undefined1 local_268 [9];
  undefined8 uStack_25f;
  undefined8 local_257;
  undefined8 uStack_24f;
  undefined8 local_247;
  undefined8 uStack_23f;
  undefined8 local_237;
  undefined8 uStack_22f;
  undefined1 local_218 [32];
  char local_1f8 [112];
  undefined8 local_188;
  char acStack_180 [4];
  char acStack_17c [4];
  undefined1 local_178;
  char local_138;
  undefined8 local_137;
  undefined8 uStack_12f;
  undefined8 local_127;
  undefined8 uStack_11f;
  undefined8 local_117;
  undefined8 uStack_10f;
  undefined8 local_107;
  undefined8 uStack_ff;
  undefined8 local_f7;
  undefined8 uStack_ef;
  undefined8 local_e7;
  undefined8 uStack_df;
  undefined8 local_d7;
  undefined8 uStack_cf;
  undefined8 local_c7;
  undefined8 uStack_bf;
  undefined8 local_b7;
  undefined8 uStack_af;
  undefined4 local_a7;
  undefined2 local_a3;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_468;
  lVar10 = *(longlong *)(param_1 + 0x20);
  local_328[0] = '\0';
  local_1f8[0x20] = '\0';
  local_268[0] = '\0';
  local_2d8[0x20] = '\0';
  local_428 = (undefined **)0x0;
  local_328[1] = '\0';
  local_328[2] = '\0';
  local_328[3] = '\0';
  local_328[4] = '\0';
  local_328[5] = '\0';
  local_328[6] = '\0';
  local_328[7] = '\0';
  local_328[8] = '\0';
  local_328[9] = '\0';
  local_328[10] = '\0';
  local_328[0xb] = '\0';
  local_328[0xc] = '\0';
  local_328[0xd] = '\0';
  local_328[0xe] = '\0';
  local_328[0xf] = '\0';
  local_328[0x10] = '\0';
  local_410 = 0;
  local_328[0x11] = '\0';
  local_328[0x12] = '\0';
  local_328[0x13] = '\0';
  local_328[0x14] = '\0';
  local_328[0x15] = '\0';
  local_328[0x16] = '\0';
  local_328[0x17] = '\0';
  local_328[0x18] = '\0';
  local_328[0x19] = '\0';
  local_328[0x1a] = '\0';
  local_328[0x1b] = '\0';
  local_328[0x1c] = '\0';
  local_328[0x1d] = '\0';
  local_328[0x1e] = '\0';
  local_328[0x1f] = '\0';
  local_328[0x20] = '\0';
  local_408 = (undefined ***)0x0;
  local_328[0x21] = '\0';
  local_328[0x22] = '\0';
  local_328[0x23] = '\0';
  local_328[0x24] = '\0';
  local_328[0x25] = '\0';
  local_328[0x26] = '\0';
  local_328[0x27] = '\0';
  local_328[0x28] = '\0';
  local_328[0x29] = '\0';
  local_328[0x2a] = '\0';
  local_328[0x2b] = '\0';
  local_328[0x2c] = '\0';
  local_328[0x2d] = '\0';
  local_328[0x2e] = '\0';
  local_328[0x2f] = '\0';
  local_328[0x30] = '\0';
  local_400 = 0;
  local_328[0x31] = '\0';
  local_328[0x32] = '\0';
  local_328[0x33] = '\0';
  local_328[0x34] = '\0';
  local_328[0x35] = '\0';
  local_328[0x36] = '\0';
  local_328[0x37] = '\0';
  local_328[0x38] = '\0';
  local_328[0x39] = '\0';
  local_328[0x3a] = '\0';
  local_328[0x3b] = '\0';
  local_328[0x3c] = '\0';
  local_328[0x3d] = '\0';
  local_328[0x3e] = '\0';
  local_328[0x3f] = '\0';
  local_328[0x40] = '\0';
  local_3f8 = 0;
  local_1f8[0x21] = '\0';
  local_1f8[0x22] = '\0';
  local_1f8[0x23] = '\0';
  local_1f8[0x24] = '\0';
  local_1f8[0x25] = '\0';
  local_1f8[0x26] = '\0';
  local_1f8[0x27] = '\0';
  local_1f8[0x28] = '\0';
  local_1f8[0x29] = '\0';
  local_1f8[0x2a] = '\0';
  local_1f8[0x2b] = '\0';
  local_1f8[0x2c] = '\0';
  local_1f8[0x2d] = '\0';
  local_1f8[0x2e] = '\0';
  local_1f8[0x2f] = '\0';
  local_1f8[0x30] = '\0';
  local_3f0 = 0;
  local_1f8[0x31] = '\0';
  local_1f8[0x32] = '\0';
  local_1f8[0x33] = '\0';
  local_1f8[0x34] = '\0';
  local_1f8[0x35] = '\0';
  local_1f8[0x36] = '\0';
  local_1f8[0x37] = '\0';
  local_1f8[0x38] = '\0';
  local_1f8[0x39] = '\0';
  local_1f8[0x3a] = '\0';
  local_1f8[0x3b] = '\0';
  local_1f8[0x3c] = '\0';
  local_1f8[0x3d] = '\0';
  local_1f8[0x3e] = '\0';
  local_1f8[0x3f] = '\0';
  local_1f8[0x40] = '\0';
  local_1f8[0x41] = '\0';
  local_1f8[0x42] = '\0';
  local_1f8[0x43] = '\0';
  local_1f8[0x44] = '\0';
  local_1f8[0x45] = '\0';
  local_1f8[0x46] = '\0';
  local_1f8[0x47] = '\0';
  local_1f8[0x48] = '\0';
  local_1f8[0x49] = '\0';
  local_1f8[0x4a] = '\0';
  local_1f8[0x4b] = '\0';
  local_1f8[0x4c] = '\0';
  local_1f8[0x4d] = '\0';
  local_1f8[0x4e] = '\0';
  local_1f8[0x4f] = '\0';
  local_1f8[0x50] = '\0';
  local_1f8[0x51] = '\0';
  local_1f8[0x52] = '\0';
  local_1f8[0x53] = '\0';
  local_1f8[0x54] = '\0';
  local_1f8[0x55] = '\0';
  local_1f8[0x56] = '\0';
  local_1f8[0x57] = '\0';
  local_1f8[0x58] = '\0';
  local_1f8[0x59] = '\0';
  local_1f8[0x5a] = '\0';
  local_1f8[0x5b] = '\0';
  local_1f8[0x5c] = '\0';
  local_1f8[0x5d] = '\0';
  local_1f8[0x5e] = '\0';
  local_1f8[0x5f] = '\0';
  local_1f8[0x60] = '\0';
  local_268._1_8_ = 0;
  uStack_25f = 0;
  local_257 = 0;
  uStack_24f = 0;
  local_247 = 0;
  uStack_23f = 0;
  local_237 = 0;
  uStack_22f = 0;
  local_2d8[0x21] = '\0';
  local_2d8[0x22] = '\0';
  local_2d8[0x23] = '\0';
  local_2d8[0x24] = '\0';
  local_2d8[0x25] = '\0';
  local_2d8[0x26] = '\0';
  local_2d8[0x27] = '\0';
  local_2d8[0x28] = '\0';
  local_2d8[0x29] = '\0';
  local_2d8[0x2a] = '\0';
  local_2d8[0x2b] = '\0';
  local_2d8[0x2c] = '\0';
  local_2d8[0x2d] = '\0';
  local_2d8[0x2e] = '\0';
  local_2d8[0x2f] = '\0';
  local_2d8[0x30] = '\0';
  local_2d8[0x31] = '\0';
  local_2d8[0x32] = '\0';
  local_2d8[0x33] = '\0';
  local_2d8[0x34] = '\0';
  local_2d8[0x35] = '\0';
  local_2d8[0x36] = '\0';
  local_2d8[0x37] = '\0';
  local_2d8[0x38] = '\0';
  local_2d8[0x39] = '\0';
  local_2d8[0x3a] = '\0';
  local_2d8[0x3b] = '\0';
  local_2d8[0x3c] = '\0';
  local_2d8[0x3d] = '\0';
  local_2d8[0x3e] = '\0';
  local_2d8[0x3f] = '\0';
  local_2d8[0x40] = '\0';
  local_2d8[0x41] = '\0';
  local_2d8[0x42] = '\0';
  local_2d8[0x43] = '\0';
  local_2d8[0x44] = '\0';
  local_2d8[0x45] = '\0';
  local_2d8[0x46] = '\0';
  local_2d8[0x47] = '\0';
  local_2d8[0x48] = '\0';
  local_2d8[0x49] = '\0';
  local_2d8[0x4a] = '\0';
  local_2d8[0x4b] = '\0';
  local_2d8[0x4c] = '\0';
  local_2d8[0x4d] = '\0';
  local_2d8[0x4e] = '\0';
  local_2d8[0x4f] = '\0';
  local_2d8[0x50] = '\0';
  local_2d8[0x51] = '\0';
  local_2d8[0x52] = '\0';
  local_2d8[0x53] = '\0';
  local_2d8[0x54] = '\0';
  local_2d8[0x55] = '\0';
  local_2d8[0x56] = '\0';
  local_2d8[0x57] = '\0';
  local_2d8[0x58] = '\0';
  local_2d8[0x59] = '\0';
  local_2d8[0x5a] = '\0';
  local_2d8[0x5b] = '\0';
  local_2d8[0x5c] = '\0';
  local_2d8[0x5d] = '\0';
  local_2d8[0x5e] = '\0';
  local_2d8[0x5f] = '\0';
  local_2d8[0x60] = '\0';
  pcVar13 = *(char **)(lVar10 + 0x70);
  local_a7 = 0;
  local_a3 = 0;
  local_418 = 0;
  local_138 = '\0';
  local_3e0 = &PTR_1802ead18;
  if (*(undefined ***)(param_1 + 0x1390) != (undefined **)0x0) {
    local_3e0 = *(undefined ***)(param_1 + 0x1390);
  }
  local_137 = 0;
  uStack_12f = 0;
  local_127 = 0;
  uStack_11f = 0;
  local_117 = 0;
  uStack_10f = 0;
  local_107 = 0;
  uStack_ff = 0;
  local_f7 = 0;
  uStack_ef = 0;
  local_e7 = 0;
  uStack_df = 0;
  local_d7 = 0;
  uStack_cf = 0;
  local_c7 = 0;
  uStack_bf = 0;
  local_b7 = 0;
  uStack_af = 0;
  local_2d8[0] = '\0';
  local_2d8[1] = '\0';
  local_2d8[2] = '\0';
  local_2d8[3] = '\0';
  local_2d8[4] = '\0';
  local_2d8[5] = '\0';
  local_2d8[6] = '\0';
  local_2d8[7] = '\0';
  local_2d8[8] = '\0';
  local_2d8[9] = '\0';
  local_2d8[10] = '\0';
  local_2d8[0xb] = '\0';
  local_2d8[0xc] = '\0';
  local_2d8[0xd] = '\0';
  local_2d8[0xe] = '\0';
  local_2d8[0xf] = '\0';
  local_2d8[0x10] = '\0';
  local_2d8[0x11] = '\0';
  local_2d8[0x12] = '\0';
  local_2d8[0x13] = '\0';
  local_2d8[0x14] = '\0';
  local_2d8[0x15] = '\0';
  local_2d8[0x16] = '\0';
  local_2d8[0x17] = '\0';
  local_2d8[0x18] = '\0';
  local_2d8[0x19] = '\0';
  local_2d8[0x1a] = '\0';
  local_2d8[0x1b] = '\0';
  local_2d8[0x1c] = '\0';
  local_2d8[0x1d] = '\0';
  local_2d8[0x1e] = '\0';
  local_2d8[0x1f] = '\0';
  local_1f8[0] = '\0';
  local_1f8[1] = '\0';
  local_1f8[2] = '\0';
  local_1f8[3] = '\0';
  local_1f8[4] = '\0';
  local_1f8[5] = '\0';
  local_1f8[6] = '\0';
  local_1f8[7] = '\0';
  local_1f8[8] = '\0';
  local_1f8[9] = '\0';
  local_1f8[10] = '\0';
  local_1f8[0xb] = '\0';
  local_1f8[0xc] = '\0';
  local_1f8[0xd] = '\0';
  local_1f8[0xe] = '\0';
  local_1f8[0xf] = '\0';
  local_1f8[0x10] = '\0';
  local_1f8[0x11] = '\0';
  local_1f8[0x12] = '\0';
  local_1f8[0x13] = '\0';
  local_1f8[0x14] = '\0';
  local_1f8[0x15] = '\0';
  local_1f8[0x16] = '\0';
  local_1f8[0x17] = '\0';
  local_1f8[0x18] = '\0';
  local_1f8[0x19] = '\0';
  local_1f8[0x1a] = '\0';
  local_1f8[0x1b] = '\0';
  local_1f8[0x1c] = '\0';
  local_1f8[0x1d] = '\0';
  local_1f8[0x1e] = '\0';
  local_1f8[0x1f] = '\0';
  lVar6 = FUN_18015e580(param_1,"Authorization",0xd);
  if (lVar6 != 0) {
    return 0;
  }
  FUN_18013ff60(local_398,0x19000);
  FUN_18013ff60(local_3d8,0x19000);
  FUN_18013ff60(local_3b8,0x19000);
  pcVar7 = "aws:amz";
  if (*(char **)(param_1 + 0x9a0) != (char *)0x0) {
    pcVar7 = *(char **)(param_1 + 0x9a0);
  }
  local_440 = local_2d8 + 0x20;
  local_448 = (undefined ***)local_268;
  sscanf(pcVar7,"%64[^:]:%64[^:]:%64[^:]:%64s",local_328,local_1f8 + 0x20);
  if (local_328[0] == '\0') {
    FUN_180150e00(param_1,"first aws-sigv4 provider can\'t be empty");
    iVar4 = 0x2b;
    ppuVar11 = local_428;
    goto LAB_18018819f;
  }
  if (local_1f8[0x20] == '\0') {
    lVar6 = 0;
    do {
      cVar1 = local_328[lVar6];
      local_1f8[lVar6 + 0x20] = cVar1;
      lVar6 = lVar6 + 1;
    } while (cVar1 != '\0');
  }
  if (local_2d8[0x20] != '\0') goto LAB_180187ee2;
  pcVar7 = strchr(pcVar13,0x2e);
  if (pcVar7 == (char *)0x0) {
    pcVar13 = "aws-sigv4: service missing in parameters and hostname";
  }
  else {
    uVar14 = (longlong)pcVar7 - (longlong)pcVar13;
    if (uVar14 < 0x41) {
      strncpy(local_2d8 + 0x20,pcVar13,uVar14);
      local_2d8[uVar14 + 0x20] = '\0';
      FUN_180150ee0(param_1,"aws_sigv4: picked service %s from host",local_2d8 + 0x20);
      if (local_268[0] != '\0') {
LAB_180187ee2:
        FUN_18015b700(param_1,lVar10,&local_418,local_420);
        iVar4 = FUN_180140330(local_328,&DAT_180309670);
        if ((iVar4 == 0) || (iVar4 = FUN_180140330(local_2d8 + 0x20,&DAT_180309674), iVar4 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar4 = FUN_1801450d0(local_98,0x52,"x-%s-content-sha256",local_1f8 + 0x20);
        pcVar7 = (char *)FUN_18015e580(param_1,local_98,(longlong)iVar4);
        if ((pcVar7 == (char *)0x0) || (pcVar7 = strchr(pcVar7,0x3a), pcVar7 == (char *)0x0)) {
          if (bVar2) {
            if (((local_420[0] == 0) || (local_420[0] == 5)) || (*(longlong *)(param_1 + 800) == 0))
            {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if ((local_420[0] != 1) || (bVar3 = true, *(longlong *)(param_1 + 0x218) == 0)) {
              bVar3 = false;
            }
            if ((bVar2) || (bVar3)) {
              lVar10 = *(longlong *)(param_1 + 0x218);
              lVar6 = 0;
              if ((lVar10 != 0) && (lVar6 = *(longlong *)(param_1 + 0x228), lVar6 < 0)) {
                lVar6 = -1;
                do {
                  lVar6 = lVar6 + 1;
                } while (*(char *)(lVar10 + lVar6) != '\0');
              }
              iVar4 = FUN_18018c4d0(local_218,lVar10,lVar6);
              if (iVar4 != 0) goto LAB_180188126;
              FUN_180134910(local_218,0x20,&local_188,0x41);
            }
            else {
              local_178 = 0;
              local_188._0_1_ = s_UNSIGNED_PAYLOAD_1803094b8[0];
              local_188._1_1_ = s_UNSIGNED_PAYLOAD_1803094b8[1];
              local_188._2_1_ = s_UNSIGNED_PAYLOAD_1803094b8[2];
              local_188._3_1_ = s_UNSIGNED_PAYLOAD_1803094b8[3];
              local_188._4_1_ = s_UNSIGNED_PAYLOAD_1803094b8[4];
              local_188._5_1_ = s_UNSIGNED_PAYLOAD_1803094b8[5];
              local_188._6_1_ = s_UNSIGNED_PAYLOAD_1803094b8[6];
              local_188._7_1_ = s_UNSIGNED_PAYLOAD_1803094b8[7];
              acStack_180[0] = s_UNSIGNED_PAYLOAD_1803094b8[8];
              acStack_180[1] = s_UNSIGNED_PAYLOAD_1803094b8[9];
              acStack_180[2] = s_UNSIGNED_PAYLOAD_1803094b8[10];
              acStack_180[3] = s_UNSIGNED_PAYLOAD_1803094b8[0xb];
              acStack_17c[0] = s_UNSIGNED_PAYLOAD_1803094b8[0xc];
              acStack_17c[1] = s_UNSIGNED_PAYLOAD_1803094b8[0xd];
              acStack_17c[2] = s_UNSIGNED_PAYLOAD_1803094b8[0xe];
              acStack_17c[3] = s_UNSIGNED_PAYLOAD_1803094b8[0xf];
            }
            local_448 = (undefined ***)&local_188;
            FUN_1801450d0(&local_138,0x95,"x-%s-content-sha256: %s",local_1f8 + 0x20);
            iVar4 = 0;
          }
          else {
            lVar10 = *(longlong *)(param_1 + 0x218);
            lVar6 = 0;
            if ((lVar10 != 0) && (lVar6 = *(longlong *)(param_1 + 0x228), lVar6 < 0)) {
              lVar6 = -1;
              do {
                lVar6 = lVar6 + 1;
              } while (*(char *)(lVar10 + lVar6) != '\0');
            }
            iVar4 = FUN_18018c4d0(local_218,lVar10,lVar6);
            if (iVar4 == 0) {
              FUN_180134910(local_218,0x20,&local_188,0x41);
            }
          }
LAB_180188126:
          if (iVar4 == 0) {
            pcVar8 = (char *)&local_188;
            lVar10 = -1;
            do {
              lVar16 = lVar10 + 1;
              lVar6 = lVar10 + 1;
              lVar10 = lVar16;
            } while (*(char *)((longlong)&local_188 + lVar6) != '\0');
            goto LAB_180188149;
          }
        }
        else {
          cVar1 = pcVar7[1];
          while ((pcVar8 = pcVar7 + 1, cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))))) {
            cVar1 = pcVar7[2];
            pcVar7 = pcVar8;
          }
          lVar16 = -1;
          do {
            lVar16 = lVar16 + 1;
          } while (pcVar8[lVar16] != '\0');
          for (; (lVar16 != 0 && ((pcVar8[lVar16 + -1] == ' ' || (pcVar8[lVar16 + -1] == '\t'))));
              lVar16 = lVar16 + -1) {
          }
LAB_180188149:
          pppuVar17 = (undefined ***)0xffffffffffffffff;
          _time64(&local_3e8);
          iVar4 = FUN_180176d80(local_3e8,&local_378);
          if (iVar4 == 0) {
            sVar9 = strftime((char *)local_340,0x11,"%Y%m%dT%H%M%SZ",&local_378);
            if (sVar9 == 0) {
              iVar4 = 0x1b;
            }
            else {
              local_430 = local_3b8;
              local_438 = local_398;
              local_440 = &local_138;
              local_448 = &local_428;
              iVar4 = FUN_180188a40(param_1,pcVar13,local_340,local_1f8 + 0x20);
              if (iVar4 == 0) {
                if (local_138 != '\0') {
                  lVar10 = -1;
                  do {
                    lVar6 = lVar10;
                    lVar10 = lVar6 + 1;
                  } while (*(char *)((longlong)&local_137 + lVar6) != '\0');
                  *(undefined2 *)((longlong)&local_137 + lVar6) = _DAT_1802ead50;
                  *(undefined1 *)((longlong)&local_137 + lVar6 + 2) = DAT_1802ead52;
                }
                local_350 = local_340[0];
                local_348 = 0;
                iVar4 = FUN_1801886a0(param_1,*(undefined8 *)(param_1 + 0x1258),local_3d8);
                if (iVar4 == 0) {
                  iVar4 = 0x1b;
                  lVar10 = FUN_18008d530(local_3d8);
                  if (lVar10 == 0) {
                    ppuVar11 = &PTR_1802ead18;
                  }
                  else {
                    ppuVar11 = (undefined **)FUN_18008d530(local_3d8);
                  }
                  pcVar13 = (char *)FUN_18008d530(local_3b8);
                  local_448 = (undefined ***)FUN_18008d530(local_398);
                  local_438 = (undefined **)CONCAT44(local_438._4_4_,(int)lVar16);
                  local_440 = pcVar13;
                  local_430 = pcVar8;
                  lVar10 = FUN_180145000("%s\n%s\n%s\n%s\n%s\n%.*s",local_418,
                                         *(undefined8 *)(param_1 + 0x1250),ppuVar11);
                  local_410 = lVar10;
                  if (lVar10 != 0) {
                    lVar6 = -1;
                    do {
                      lVar16 = lVar6 + 1;
                      lVar6 = lVar6 + 1;
                    } while (local_328[lVar16] != '\0');
                    FUN_180140250(local_328,local_328);
                    pppuVar12 = (undefined ***)FUN_180145000("%s4_request",local_328);
                    local_408 = pppuVar12;
                    if ((pppuVar12 != (undefined ***)0x0) &&
                       (local_448 = pppuVar12,
                       lVar6 = FUN_180145000("%s/%s/%s/%s",&local_350,local_268,local_2d8 + 0x20),
                       local_400 = lVar6, lVar6 != 0)) {
                      lVar16 = -1;
                      do {
                        lVar16 = lVar16 + 1;
                      } while (*(char *)(lVar10 + lVar16) != '\0');
                      iVar5 = FUN_18018c4d0(local_218,lVar10);
                      if (iVar5 == 0) {
                        FUN_180134910(local_218,0x20,&local_188,0x41);
                        lVar10 = -1;
                        do {
                          lVar16 = lVar10 + 1;
                          lVar10 = lVar10 + 1;
                        } while (local_328[lVar16] != '\0');
                        FUN_180140280(local_328,local_328);
                        local_448 = (undefined ***)&local_188;
                        lVar10 = FUN_180145000("%s4-HMAC-SHA256\n%s\n%s\n%s",local_328,local_340,
                                               lVar6);
                        local_3f8 = lVar10;
                        if (lVar10 != 0) {
                          ppuVar11 = &PTR_1802ead18;
                          if (*(undefined ***)(param_1 + 0x1398) != (undefined **)0x0) {
                            ppuVar11 = *(undefined ***)(param_1 + 0x1398);
                          }
                          local_3f0 = FUN_180145000("%s4%s",local_328,ppuVar11);
                          if (local_3f0 != 0) {
                            local_448 = (undefined ***)0xffffffffffffffff;
                            do {
                              local_448 = (undefined ***)((longlong)local_448 + 1);
                            } while (*(char *)((longlong)&local_350 + (longlong)local_448) != '\0');
                            lVar16 = -1;
                            do {
                              lVar16 = lVar16 + 1;
                            } while (*(char *)(local_3f0 + lVar16) != '\0');
                            local_440 = local_2d8;
                            iVar4 = FUN_18018c730(&PTR_FUN_180309ae0,local_3f0,lVar16,&local_350);
                            if (iVar4 == 0) {
                              local_448 = (undefined ***)0xffffffffffffffff;
                              do {
                                local_448 = (undefined ***)((longlong)local_448 + 1);
                              } while (local_268[(longlong)local_448] != '\0');
                              local_440 = local_1f8;
                              iVar4 = FUN_18018c730(&PTR_FUN_180309ae0,local_2d8,0x20,local_268);
                              if (iVar4 == 0) {
                                local_448 = (undefined ***)0xffffffffffffffff;
                                do {
                                  local_448 = (undefined ***)((longlong)local_448 + 1);
                                } while ((local_2d8 + 0x20)[(longlong)local_448] != '\0');
                                local_440 = local_2d8;
                                iVar4 = FUN_18018c730(&PTR_FUN_180309ae0,local_1f8,0x20,
                                                      local_2d8 + 0x20);
                                if (iVar4 == 0) {
                                  local_448 = (undefined ***)0xffffffffffffffff;
                                  do {
                                    local_448 = (undefined ***)((longlong)local_448 + 1);
                                  } while (*(char *)((longlong)pppuVar12 + (longlong)local_448) !=
                                           '\0');
                                  local_440 = local_1f8;
                                  iVar4 = FUN_18018c730(&PTR_FUN_180309ae0,local_2d8,0x20,pppuVar12)
                                  ;
                                  if (iVar4 == 0) {
                                    do {
                                      pppuVar17 = (undefined ***)((longlong)pppuVar17 + 1);
                                    } while (*(char *)(lVar10 + (longlong)pppuVar17) != '\0');
                                    local_440 = local_2d8;
                                    local_448 = pppuVar17;
                                    iVar4 = FUN_18018c730(&PTR_FUN_180309ae0,local_1f8,0x20,lVar10);
                                    if (iVar4 == 0) {
                                      FUN_180134910(local_2d8,0x20,&local_188,0x41);
                                      ppuVar11 = local_428;
                                      ppuVar15 = &PTR_1802ead18;
                                      if (local_428 != (undefined **)0x0) {
                                        ppuVar15 = local_428;
                                      }
                                      local_448 = (undefined ***)FUN_18008d530(local_3b8);
                                      local_430 = &local_138;
                                      local_440 = (char *)&local_188;
                                      local_438 = ppuVar15;
                                      lVar10 = FUN_180145000(
                                                  "Authorization: %s4-HMAC-SHA256 Credential=%s/%s, SignedHeaders=%s, Signature=%s\r\n%s%s"
                                                  ,local_328,local_3e0,lVar6);
                                      if (lVar10 != 0) {
                                        (*(code *)PTR_free_1803bd538)
                                                  (*(undefined8 *)(param_1 + 0x1358));
                                        *(longlong *)(param_1 + 0x1358) = lVar10;
                                        *(undefined1 *)(param_1 + 0xe34) = 1;
                                      }
                                      goto LAB_18018819f;
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
            }
          }
        }
        ppuVar11 = local_428;
        goto LAB_18018819f;
      }
      pcVar7 = pcVar7 + 1;
      pcVar8 = strchr(pcVar7,0x2e);
      if (pcVar8 == (char *)0x0) {
        pcVar13 = "aws-sigv4: region missing in parameters and hostname";
      }
      else {
        uVar14 = (longlong)pcVar8 - (longlong)pcVar7;
        if (uVar14 < 0x41) {
          strncpy(local_268,pcVar7,uVar14);
          local_268[uVar14] = 0;
          FUN_180150ee0(param_1,"aws_sigv4: picked region %s from host",local_268);
          goto LAB_180187ee2;
        }
        pcVar13 = "aws-sigv4: region too long in hostname";
      }
    }
    else {
      pcVar13 = "aws-sigv4: service too long in hostname";
    }
  }
  FUN_180150e00(param_1,pcVar13);
  iVar4 = 3;
  ppuVar11 = local_428;
LAB_18018819f:
  FUN_18013ff30(local_3d8);
  FUN_18013ff30(local_398);
  FUN_18013ff30(local_3b8);
  (*(code *)PTR_free_1803bd538)(local_410);
  (*(code *)PTR_free_1803bd538)(local_408);
  (*(code *)PTR_free_1803bd538)(local_400);
  (*(code *)PTR_free_1803bd538)(local_3f8);
  (*(code *)PTR_free_1803bd538)(local_3f0);
  (*(code *)PTR_free_1803bd538)(ppuVar11);
  return iVar4;
}



// ===== FUN_1801886a0 @ 1801886a0 (size 747)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801886a0(undefined8 param_1,char *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_498 [32];
  undefined2 local_478;
  undefined1 local_476;
  byte local_474;
  char local_473;
  char cStack_472;
  int local_470;
  int local_46c;
  longlong *local_468;
  longlong local_458 [128];
  char local_58 [16];
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_498;
  iVar4 = 0;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  plVar9 = local_458 + 1;
  iVar12 = 0;
  while( true ) {
    iVar11 = iVar12;
    iVar12 = iVar11 + 1;
    plVar9[-1] = (longlong)param_2;
    local_470 = iVar11;
    local_46c = iVar12;
    pcVar5 = strchr(param_2,0x26);
    if (pcVar5 == (char *)0x0) break;
    lVar6 = (longlong)pcVar5 - (longlong)param_2;
    param_2 = pcVar5 + 1;
    *plVar9 = lVar6;
    plVar9 = plVar9 + 2;
    if (0x3f < iVar12) goto LAB_18018873f;
  }
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (param_2[lVar6] != '\0');
  *plVar9 = lVar6;
LAB_18018873f:
  if (iVar12 == 0x40) {
    FUN_180150e00(param_1,"aws-sigv4: too many query pairs in URL");
    iVar4 = iVar11 + -0x3c;
  }
  else {
    qsort(local_458,(longlong)iVar12,0x10,(_PtFuncCompare *)&LAB_180188a00);
    local_468 = local_458;
    iVar11 = 0;
    do {
      if (iVar12 <= iVar11) {
        return iVar4;
      }
      lVar6 = local_468[1];
      pbVar8 = (byte *)*local_468;
      plVar9 = local_468;
      if (lVar6 != 0) {
        do {
          if (iVar4 != 0) break;
          bVar1 = *pbVar8;
          if ((((byte)(bVar1 - 0x30) < 10) || ((byte)(bVar1 + 0x9f) < 0x1a)) ||
             ((byte)(bVar1 + 0xbf) < 0x1a)) {
switchD_180188815_caseD_2d:
            uVar10 = 1;
            pbVar7 = pbVar8;
LAB_1801888ff:
            iVar4 = thunk_FUN_180140070(param_3,pbVar7,uVar10);
          }
          else {
            switch(bVar1) {
            case 0x25:
              bVar1 = pbVar8[1];
              if ((((9 < (byte)(bVar1 - 0x30)) && (5 < (byte)(bVar1 + 0x9f))) &&
                  (5 < (byte)(bVar1 + 0xbf))) ||
                 (((bVar2 = pbVar8[2], 9 < (byte)(bVar2 - 0x30) && (5 < (byte)(bVar2 + 0x9f))) &&
                  (5 < (byte)(bVar2 + 0xbf))))) {
                uVar10 = 3;
                pbVar7 = &DAT_1802fed10;
                goto LAB_1801888ff;
              }
              local_478 = 0x25;
              local_476 = 0;
              uVar3 = FUN_180140200(bVar1);
              local_478 = CONCAT11(uVar3,(undefined1)local_478);
              local_476 = FUN_180140200(pbVar8[2]);
              iVar4 = thunk_FUN_180140070(param_3,&local_478,3);
              pbVar8 = pbVar8 + 2;
              lVar6 = lVar6 + -2;
              break;
            default:
              local_48 = s_0123456789ABCDEF_1802fc8f0[0x10];
              uVar10 = 3;
              local_474 = 0x25;
              local_58[0] = s_0123456789ABCDEF_1802fc8f0[0];
              local_58[1] = s_0123456789ABCDEF_1802fc8f0[1];
              local_58[2] = s_0123456789ABCDEF_1802fc8f0[2];
              local_58[3] = s_0123456789ABCDEF_1802fc8f0[3];
              local_58[4] = s_0123456789ABCDEF_1802fc8f0[4];
              local_58[5] = s_0123456789ABCDEF_1802fc8f0[5];
              local_58[6] = s_0123456789ABCDEF_1802fc8f0[6];
              local_58[7] = s_0123456789ABCDEF_1802fc8f0[7];
              local_58[8] = s_0123456789ABCDEF_1802fc8f0[8];
              local_58[9] = s_0123456789ABCDEF_1802fc8f0[9];
              local_58[10] = s_0123456789ABCDEF_1802fc8f0[10];
              local_58[0xb] = s_0123456789ABCDEF_1802fc8f0[0xb];
              local_58[0xc] = s_0123456789ABCDEF_1802fc8f0[0xc];
              local_58[0xd] = s_0123456789ABCDEF_1802fc8f0[0xd];
              local_58[0xe] = s_0123456789ABCDEF_1802fc8f0[0xe];
              local_58[0xf] = s_0123456789ABCDEF_1802fc8f0[0xf];
              _local_473 = CONCAT11(local_58[bVar1 & 0xf],local_58[bVar1 >> 4]);
              pbVar7 = &local_474;
              goto LAB_1801888ff;
            case 0x2d:
            case 0x2e:
            case 0x3d:
            case 0x5f:
            case 0x7e:
              goto switchD_180188815_caseD_2d;
            }
          }
          pbVar8 = pbVar8 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        plVar9 = local_468;
        iVar12 = local_46c;
        if (iVar11 < local_470) {
          iVar4 = thunk_FUN_180140070(param_3,&DAT_1802fcafc,1);
        }
      }
      local_468 = plVar9 + 2;
      iVar11 = iVar11 + 1;
    } while (iVar4 == 0);
  }
  return iVar4;
}



// ===== FUN_180188a40 @ 180188a40 (size 1340)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_180188a40(longlong param_1,longlong param_2,char *param_3,undefined1 *param_4,longlong *param_5,
             char *param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte *pbVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  char cVar9;
  ulonglong uVar10;
  size_t sVar11;
  longlong *plVar12;
  longlong *plVar13;
  char *pcVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_268 [32];
  char *local_248;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_228;
  char local_218 [80];
  undefined1 local_1c8 [96];
  char local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_268;
  lVar21 = -1;
  local_230 = param_7;
  local_228 = param_8;
  plVar12 = (longlong *)0x0;
  local_238 = 0x1b;
  lVar20 = -1;
  do {
    lVar20 = lVar20 + 1;
  } while (param_4[lVar20] != '\0');
  FUN_180140250(param_4,param_4);
  uVar8 = FUN_180140200(*param_4);
  *param_4 = uVar8;
  FUN_1801450d0(local_218,0x48,"X-%s-Date",param_4);
  FUN_180140250(param_4,param_4,1);
  local_248 = param_3;
  FUN_1801450d0(local_1c8,0x5a,"x-%s-date:%s",param_4);
  lVar20 = FUN_18015e580(param_1,&DAT_1803006f8,4);
  if (lVar20 == 0) {
    pcVar14 = *(char **)(param_1 + 0x1370);
    uVar10 = 0xffffffffffffffff;
    if (pcVar14 == (char *)0x0) {
      do {
        uVar10 = uVar10 + 1;
      } while (*(char *)(param_2 + uVar10) != '\0');
      if (uVar10 < 0x100) {
        FUN_1801450d0(local_168,0x105,"host:%s",param_2);
        goto LAB_180188bdd;
      }
    }
    else {
      do {
        uVar10 = uVar10 + 1;
      } while (pcVar14[uVar10] != '\0');
      if (uVar10 < 0x106) {
        lVar20 = -(longlong)pcVar14;
        do {
          cVar9 = *pcVar14;
          pcVar14[(longlong)(local_168 + lVar20)] = cVar9;
          pcVar14 = pcVar14 + 1;
        } while (cVar9 != '\0');
        sVar11 = strcspn(local_168,"\n\r");
        if (0x105 < sVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_1802e048c();
        }
        local_168[sVar11] = '\0';
LAB_180188bdd:
        plVar12 = (longlong *)FUN_180138590(0,local_168);
        if (plVar12 == (longlong *)0x0) goto LAB_180188f4e;
        goto LAB_180188bf8;
      }
    }
    local_238 = 3;
  }
  else {
LAB_180188bf8:
    plVar13 = plVar12;
    if (*param_6 != '\0') {
      plVar13 = (longlong *)FUN_180138590(plVar12,param_6);
      if (plVar13 == (longlong *)0x0) goto LAB_180188f4e;
    }
    plVar12 = plVar13;
    for (plVar2 = *(longlong **)(param_1 + 0x348); plVar2 != (longlong *)0x0;
        plVar2 = (longlong *)plVar2[1]) {
      pcVar14 = strchr((char *)*plVar2,0x3a);
      plVar13 = plVar12;
      if (((pcVar14 != (char *)0x0) ||
          (pcVar14 = strchr((char *)*plVar2,0x3b), pcVar14 != (char *)0x0)) &&
         ((pcVar19 = pcVar14 + 1, *pcVar14 != ':' || (*pcVar19 != '\0')))) {
        for (pcVar18 = pcVar19;
            ((cVar9 = *pcVar18, cVar9 == ' ' || (cVar9 == '\t')) || ((byte)(cVar9 - 10U) < 4));
            pcVar18 = pcVar18 + 1) {
        }
        if ((cVar9 != '\0') || (pcVar18 == pcVar19)) {
          lVar20 = (*(code *)PTR__strdup_1803bd548)(*plVar2);
          if (lVar20 == 0) goto LAB_180188f4e;
          pcVar14[lVar20 - *plVar2] = ':';
          plVar13 = (longlong *)FUN_180138520(plVar12,lVar20);
          if (plVar13 == (longlong *)0x0) {
            (*(code *)PTR_free_1803bd538)(lVar20);
            goto LAB_180188f4e;
          }
        }
      }
      plVar12 = plVar13;
    }
    for (plVar13 = plVar12; plVar13 != (longlong *)0x0; plVar13 = (longlong *)plVar13[1]) {
      sVar11 = strcspn((char *)*plVar13,":");
      FUN_180140250(*plVar13,*plVar13,sVar11);
      pcVar14 = (char *)(*plVar13 + sVar11);
      if (*pcVar14 != '\0') {
        cVar9 = pcVar14[1];
        pcVar14 = pcVar14 + 1;
        pcVar19 = pcVar14;
        if (cVar9 != '\0') {
          do {
            if ((cVar9 != ' ') && (cVar9 != '\t')) break;
            cVar9 = pcVar19[1];
            pcVar19 = pcVar19 + 1;
          } while (cVar9 != '\0');
          do {
            if (cVar9 == '\0') break;
            iVar16 = 0;
            do {
              if ((cVar9 != ' ') && (cVar9 != '\t')) break;
              cVar9 = pcVar19[1];
              pcVar19 = pcVar19 + 1;
              iVar16 = iVar16 + 1;
            } while (cVar9 != '\0');
            if (iVar16 == 0) {
              *pcVar14 = *pcVar19;
              pcVar19 = pcVar19 + 1;
            }
            else {
              if (*pcVar19 == '\0') break;
              *pcVar14 = ' ';
            }
            pcVar14 = pcVar14 + 1;
            cVar9 = *pcVar19;
          } while( true );
        }
        *pcVar14 = '\0';
      }
    }
    do {
      lVar22 = lVar21 + 1;
      lVar20 = lVar21 + 1;
      lVar21 = lVar22;
    } while (local_218[lVar20] != '\0');
    pcVar14 = (char *)FUN_18015e580(param_1,local_218,lVar22);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = (char *)FUN_18015e580(param_1,&DAT_180309454,4);
      *param_5 = (longlong)pcVar14;
      if (pcVar14 == (char *)0x0) {
        plVar13 = (longlong *)FUN_180138590(plVar12,local_1c8);
        if (plVar13 == (longlong *)0x0) goto LAB_180188f4e;
        lVar21 = FUN_180145000("%s: %s\r\n",local_218,param_3);
        goto LAB_180188e68;
      }
    }
    else {
      *param_5 = (longlong)pcVar14;
    }
    pcVar14 = strchr(pcVar14,0x3a);
    if (pcVar14 != (char *)0x0) {
      do {
        do {
          pcVar19 = pcVar14 + 1;
          pcVar14 = pcVar14 + 1;
        } while (*pcVar19 == ' ');
      } while (*pcVar19 == '\t');
      strncpy(param_3,pcVar14,0x10);
      lVar21 = 0;
      param_3[0x10] = '\0';
      plVar13 = plVar12;
LAB_180188e68:
      uVar7 = local_228;
      uVar6 = local_230;
      *param_5 = lVar21;
      do {
        bVar5 = false;
        plVar12 = plVar13;
        plVar2 = plVar13;
        if (plVar13 == (longlong *)0x0) break;
        do {
          plVar3 = (longlong *)plVar12[1];
          if (plVar3 != (longlong *)0x0) {
            pbVar4 = (byte *)*plVar12;
            pbVar15 = pbVar4;
            do {
              bVar1 = *pbVar15;
              uVar17 = (uint)pbVar15[*plVar3 - (longlong)pbVar4];
              if (bVar1 != uVar17) break;
              pbVar15 = pbVar15 + 1;
            } while (uVar17 != 0);
            if (0 < (int)(bVar1 - uVar17)) {
              *plVar12 = *plVar3;
              bVar5 = true;
              *plVar3 = (longlong)pbVar4;
            }
          }
          plVar3 = plVar12 + 1;
          plVar12 = (longlong *)*plVar3;
        } while ((longlong *)*plVar3 != (longlong *)0x0);
      } while (bVar5);
      do {
        plVar12 = plVar13;
        if (plVar2 == (longlong *)0x0) goto LAB_180188f46;
        iVar16 = FUN_18013fed0(uVar6,*plVar2);
        if ((iVar16 != 0) || (iVar16 = FUN_18013fed0(uVar6,&DAT_1802fa360), iVar16 != 0))
        goto LAB_180188f4e;
        pcVar14 = strchr((char *)*plVar2,0x3a);
        if (pcVar14 != (char *)0x0) {
          *pcVar14 = '\0';
        }
        if (((plVar2 != plVar13) && (iVar16 = FUN_18013fed0(uVar7,&DAT_1802fcad4), iVar16 != 0)) ||
           (iVar16 = FUN_18013fed0(uVar7,*plVar2), iVar16 != 0)) goto LAB_180188f4e;
        plVar2 = (longlong *)plVar2[1];
      } while( true );
    }
    *param_5 = 0;
  }
LAB_180188f4e:
  FUN_180138630(plVar12);
  return local_238;
LAB_180188f46:
  local_238 = 0;
  goto LAB_180188f4e;
}



// ===== FUN_180189010 @ 180189010 (size 654)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_180189010(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_168 [32];
  byte *local_148 [2];
  char local_138 [256];
  char local_38;
  char local_37;
  char local_36;
  char local_35;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  char local_30;
  char local_2f;
  char local_2e;
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_168;
  memset(local_138,0,0x10f);
LAB_180189050:
  do {
    while( true ) {
      bVar4 = *param_1;
      if (bVar4 == 0) {
        return *param_2 != 0;
      }
      if (bVar4 == 0x2a) {
        if (param_3 == 0) {
          return true;
        }
        bVar4 = param_1[1];
        do {
          if (bVar4 == 0) {
            return false;
          }
          if (bVar4 == 0x3f) {
            bVar4 = *param_2;
            param_2 = param_2 + 1;
            if (bVar4 == 0) {
              return true;
            }
          }
          else if (bVar4 != 0x2a) {
            if (*param_2 == 0) {
              return true;
            }
            do {
              iVar3 = FUN_180189010(param_1 + 1,param_2,param_3 + -1);
              if (iVar3 == 0) {
                return false;
              }
              param_2 = param_2 + 1;
            } while (*param_2 != 0);
            return true;
          }
          bVar4 = param_1[2];
          param_1 = param_1 + 1;
        } while( true );
      }
      if (bVar4 != 0x3f) break;
      if (*param_2 == 0) {
        return true;
      }
LAB_1801891f9:
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    if (bVar4 != 0x5b) {
      if (bVar4 != 0x5c) {
        if (bVar4 != *param_2) {
          return true;
        }
        goto LAB_1801891f9;
      }
      bVar4 = param_1[1];
      pbVar1 = param_1 + 1;
      if (bVar4 == 0) {
        bVar4 = 0x5c;
        pbVar1 = param_1;
      }
      param_1 = pbVar1 + 1;
      if (*param_2 != bVar4) {
        return true;
      }
      param_2 = param_2 + 1;
      goto LAB_180189050;
    }
    local_148[0] = param_1 + 1;
    iVar3 = FUN_180189670(local_148,local_138);
    if (iVar3 == 0) {
      return true;
    }
    bVar4 = *param_2;
    bVar2 = false;
    if (bVar4 == 0) {
      return true;
    }
    if (local_138[bVar4] == '\0') {
      if (local_37 == '\0') {
        if (local_34 != '\0') goto LAB_1801890ef;
        if (local_36 != '\0') {
          bVar2 = (byte)(bVar4 - 0x30) < 10;
          goto LAB_1801891c2;
        }
        if (local_35 != '\0') {
          if (((byte)(bVar4 - 0x30) < 10) || ((byte)(bVar4 + 0x9f) < 6)) goto LAB_1801891bd;
          bVar5 = (byte)(bVar4 + 0xbf) < 5;
          bVar6 = (byte)(bVar4 + 0xbf) == 5;
          goto LAB_1801891bb;
        }
        if (local_33 == '\0') {
          if (local_2f == '\0') {
            if (local_2e == '\0') {
              if (local_31 == '\0') {
                if (local_32 == '\0') {
                  if (local_30 != '\0') {
                    if (4 < (byte)(bVar4 - 9)) {
                      bVar5 = (byte)(bVar4 - 0x21) < 0x5d;
                      bVar6 = (byte)(bVar4 - 0x21) == 0x5d;
                      goto LAB_1801891bb;
                    }
                    goto LAB_1801891bd;
                  }
                }
                else if ((bVar4 == 0x20) || (bVar4 == 9)) goto LAB_1801891bd;
              }
              else {
                bVar2 = (byte)(bVar4 + 0x9f) < 0x1a;
              }
            }
            else {
              bVar2 = (byte)(bVar4 + 0xbf) < 0x1a;
            }
            goto LAB_1801891c2;
          }
          if (bVar4 != 0x20) {
            bVar5 = (byte)(bVar4 - 9) < 4;
            bVar6 = (byte)(bVar4 - 9) == 4;
            goto LAB_1801891bb;
          }
        }
        else if (4 < (byte)(bVar4 - 9)) {
          bVar5 = (byte)(bVar4 - 0x20) < 0x5e;
          bVar6 = (byte)(bVar4 - 0x20) == 0x5e;
          goto LAB_1801891bb;
        }
        goto LAB_1801891bd;
      }
      if ((byte)(bVar4 - 0x30) < 10) goto LAB_1801891bd;
LAB_1801890ef:
      if ((byte)(bVar4 + 0x9f) < 0x1a) goto LAB_1801891bd;
      bVar5 = (byte)(bVar4 + 0xbf) < 0x19;
      bVar6 = (byte)(bVar4 + 0xbf) == 0x19;
LAB_1801891bb:
      if (bVar5 || bVar6) goto LAB_1801891bd;
    }
    else {
LAB_1801891bd:
      bVar2 = true;
    }
LAB_1801891c2:
    if (local_38 != '\0') {
      bVar2 = !bVar2;
    }
    if (!bVar2) {
      return true;
    }
    param_1 = local_148[0] + 1;
    param_2 = param_2 + 1;
  } while( true );
}



// ===== FUN_1801892a0 @ 1801892a0 (size 684)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001801892fc) */

int FUN_1801892a0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  char local_28 [32];
  
  pcVar5 = (char *)*param_1;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  bVar2 = false;
  lVar4 = 0;
  while( true ) {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    if (9 < lVar4) {
      return 0;
    }
    if (bVar2) break;
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      local_28[lVar4] = cVar1;
      lVar4 = lVar4 + 1;
    }
    else {
      if (cVar1 != ':') {
        return 0;
      }
      bVar2 = true;
      lVar4 = lVar4 + 1;
    }
  }
  if (cVar1 != ']') {
    return 0;
  }
  *param_1 = pcVar5;
  lVar4 = 0;
  while (lVar3 = lVar4, local_28[lVar3] == "digit"[lVar3]) {
    lVar4 = lVar3 + 1;
    if (lVar3 + 1 == 6) {
      *(undefined1 *)(param_2 + 0x102) = 1;
      return (int)lVar3 + -4;
    }
  }
  lVar4 = 0;
  while (lVar3 = lVar4, local_28[lVar3] == "alnum"[lVar3]) {
    lVar4 = lVar3 + 1;
    if (lVar3 + 1 == 6) {
      *(undefined1 *)(param_2 + 0x101) = 1;
      return (int)lVar3 + -4;
    }
  }
  lVar4 = 0;
  while (lVar3 = lVar4, local_28[lVar3] == "alpha"[lVar3]) {
    lVar4 = lVar3 + 1;
    if (lVar3 + 1 == 6) {
      *(undefined1 *)(param_2 + 0x104) = 1;
      return (int)lVar3 + -4;
    }
  }
  lVar4 = 0;
  while (lVar3 = lVar4, local_28[lVar3] == (&DAT_180309760)[lVar3]) {
    lVar4 = lVar3 + 1;
    if (lVar3 + 1 == 7) {
      *(undefined1 *)(param_2 + 0x103) = 1;
      return (int)lVar3 + -5;
    }
  }
  lVar4 = 0;
  while (lVar3 = lVar4, local_28[lVar3] == "print"[lVar3]) {
    lVar4 = lVar3 + 1;
    if (lVar3 + 1 == 6) {
      *(undefined1 *)(param_2 + 0x105) = 1;
      return (int)lVar3 + -4;
    }
  }
  lVar4 = 0;
  while (lVar3 = lVar4, local_28[lVar3] == "graph"[lVar3]) {
    lVar4 = lVar3 + 1;
    if (lVar3 + 1 == 6) {
      *(undefined1 *)(param_2 + 0x108) = 1;
      return (int)lVar3 + -4;
    }
  }
  lVar4 = 0;
  while (lVar3 = lVar4, local_28[lVar3] == "space"[lVar3]) {
    lVar4 = lVar3 + 1;
    if (lVar3 + 1 == 6) {
      *(undefined1 *)(param_2 + 0x109) = 1;
      return (int)lVar3 + -4;
    }
  }
  lVar4 = 0;
  while (lVar3 = lVar4, local_28[lVar3] == "blank"[lVar3]) {
    lVar4 = lVar3 + 1;
    if (lVar3 + 1 == 6) {
      *(undefined1 *)(param_2 + 0x106) = 1;
      return (int)lVar3 + -4;
    }
  }
  lVar4 = 0;
  while (lVar3 = lVar4, lVar4 = 0, local_28[lVar3] == "upper"[lVar3]) {
    lVar4 = lVar3 + 1;
    if (lVar3 + 1 == 6) {
      *(undefined1 *)(param_2 + 0x10a) = 1;
      return (int)lVar3 + -4;
    }
  }
  do {
    lVar3 = lVar4;
    if (local_28[lVar3] != "lower"[lVar3]) {
      return 0;
    }
    lVar4 = lVar3 + 1;
  } while (lVar3 + 1 != 6);
  *(undefined1 *)(param_2 + 0x107) = 1;
  return (int)lVar3 + -4;
}



// ===== FUN_180189550 @ 180189550 (size 282)

void FUN_180189550(longlong *param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  
  pbVar2 = (byte *)*param_1;
  *param_1 = (longlong)(pbVar2 + 1);
  bVar6 = *pbVar2;
  *(undefined1 *)((ulonglong)bVar6 + param_2) = 1;
  if (((((byte)(bVar6 - 0x30) < 10) || ((byte)(bVar6 + 0x9f) < 0x1a)) ||
      ((byte)(bVar6 + 0xbf) < 0x1a)) && (pbVar2[1] == 0x2d)) {
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      cVar7 = '\x02';
    }
    else if ((byte)(bVar6 + 0x9f) < 0x1a) {
      cVar7 = '\x03';
    }
    else {
      cVar7 = (byte)(bVar6 - 0x30) < 10;
    }
    bVar1 = pbVar2[2];
    bVar5 = bVar1;
    if (bVar1 == 0x5c) {
      bVar5 = pbVar2[3];
    }
    if (bVar6 <= bVar5) {
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        cVar4 = '\x02';
      }
      else if ((byte)(bVar5 + 0x9f) < 0x1a) {
        cVar4 = '\x03';
      }
      else {
        cVar4 = (byte)(bVar5 - 0x30) < 10;
      }
      if (cVar4 == cVar7) {
        if (bVar6 != bVar5) {
          bVar6 = bVar6 + 0x9f;
          do {
            if ((byte)(bVar6 + 0x21) < 0x1a) {
              cVar4 = '\x02';
            }
            else if ((byte)(bVar6 + 1) < 0x1a) {
              cVar4 = '\x03';
            }
            else {
              cVar4 = (byte)(bVar6 + 0x32) < 10;
            }
            bVar3 = bVar6 + 0x62;
            if (cVar4 == cVar7) {
              *(undefined1 *)((ulonglong)bVar3 + param_2) = 1;
            }
            bVar6 = bVar6 + 1;
          } while (bVar3 != bVar5);
        }
        *param_1 = (longlong)(pbVar2 + 2 + (ulonglong)(bVar1 == 0x5c) + 1);
      }
    }
  }
  return;
}



// ===== FUN_180189670 @ 180189670 (size 410)

undefined8 FUN_180189670(longlong *param_1,void *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *local_res8;
  
  iVar5 = 0;
  bVar3 = false;
  memset(param_2,0,0x10f);
  pbVar2 = (byte *)*param_1;
  bVar1 = *pbVar2;
  do {
    if (bVar1 == 0) {
      return 0;
    }
    if (iVar5 == 0) {
      if (bVar1 == 0x5d) {
        if (bVar3) {
          return 1;
        }
        bVar3 = true;
        iVar5 = 1;
        *(undefined1 *)((longlong)param_2 + 0x5d) = 1;
LAB_1801896d2:
        *param_1 = *param_1 + 1;
      }
      else if (bVar1 == 0x5b) {
        local_res8 = pbVar2 + 2;
        if ((pbVar2[1] == 0x3a) && (iVar4 = FUN_1801892a0(&local_res8,param_2), iVar4 != 0)) {
          bVar3 = true;
          *param_1 = (longlong)local_res8;
        }
        else {
          *(undefined1 *)((longlong)param_2 + 0x5b) = 1;
          bVar3 = true;
          *param_1 = *param_1 + 1;
        }
      }
      else {
        if ((bVar1 == 0x5e) || (bVar1 == 0x21)) {
          if (!bVar3) {
            if (*(char *)((longlong)param_2 + 0x100) == '\0') {
              *(undefined1 *)((longlong)param_2 + 0x100) = 1;
              goto LAB_1801896d2;
            }
            bVar3 = true;
          }
LAB_1801896cb:
          *(undefined1 *)((ulonglong)bVar1 + (longlong)param_2) = 1;
          goto LAB_1801896d2;
        }
        if (bVar1 == 0x5c) {
          *param_1 = (longlong)(pbVar2 + 1);
          if (pbVar2[1] == 0) {
            *(undefined1 *)((longlong)param_2 + 0x5c) = 1;
            bVar3 = true;
          }
          else {
            FUN_180189550(param_1,param_2);
            bVar3 = true;
          }
        }
        else {
          FUN_180189550(param_1,param_2);
          bVar3 = true;
        }
      }
    }
    else if (iVar5 == 1) {
      if (bVar1 == 0x5b) {
        iVar5 = 2;
        *(undefined1 *)((longlong)param_2 + 0x5b) = 1;
        goto LAB_1801896d2;
      }
      if (bVar1 == 0x5d) {
        return 1;
      }
      if ((4 < (byte)(bVar1 - 9)) && (0x5e < (byte)(bVar1 - 0x20))) {
        return 0;
      }
      *(undefined1 *)((ulonglong)bVar1 + (longlong)param_2) = 1;
      *param_1 = *param_1 + 1;
      iVar5 = 0;
    }
    else if (iVar5 == 2) {
      if (bVar1 == 0x5d) {
        return 1;
      }
      iVar5 = 0;
      goto LAB_1801896cb;
    }
    pbVar2 = (byte *)*param_1;
    bVar1 = *pbVar2;
  } while( true );
}



// ===== FUN_180189810 @ 180189810 (size 101)

undefined4 * FUN_180189810(undefined4 *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_1 == (undefined4 *)0x0) || ((longlong)param_2 < 0)) {
    return (undefined4 *)0x0;
  }
  if ((longlong)param_2 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  lVar3 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar1,8);
  uVar4 = (param_2 - lVar3 >> 1) + lVar3 >> 9;
  iVar2 = (int)uVar4;
  if (0x7fffffff < uVar4) {
    uVar4 = 0x7fffffff;
  }
  *param_1 = (int)uVar4;
  param_1[1] = ((int)param_2 + iVar2 * -1000) * 1000;
  return param_1;
}



// ===== FUN_1801898b0 @ 1801898b0 (size 113)

undefined8 FUN_1801898b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong local_res10 [3];
  undefined1 local_18 [16];
  
  uVar2 = FUN_180151380(param_1,0,
                        (*(longlong *)(param_2 + 0x38) - *(longlong *)(param_2 + 0x30)) +
                        *(longlong *)(param_2 + 0x28),*(longlong *)(param_2 + 0x30),local_res10);
  if ((int)uVar2 == 0) {
    if (local_res10[0] != *(longlong *)(param_2 + 0x30)) {
      *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) - local_res10[0];
      return 0;
    }
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    puVar3 = (undefined8 *)FUN_180148b70(local_18);
    uVar1 = puVar3[1];
    uVar2 = 0;
    *(undefined8 *)(param_2 + 0x40) = *puVar3;
    *(undefined8 *)(param_2 + 0x48) = uVar1;
  }
  return uVar2;
}



// ===== FUN_1801899c0 @ 1801899c0 (size 774)

ulonglong FUN_1801899c0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                       undefined8 *param_5)

{
  undefined8 uVar1;
  char *_Dst;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  void *_Dst_00;
  longlong lVar7;
  char *_Dst_01;
  size_t _Size;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  longlong local_res18;
  undefined4 *local_res20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = 0;
  _Dst = *(char **)(param_1 + 0xce0);
  *param_4 = 0;
  *param_5 = 0;
  uVar6 = param_3[2];
  bVar2 = true;
  _Dst_01 = _Dst + uVar6;
  lVar8 = (longlong)_Dst_01 - param_3[3];
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x6ec);
  local_res20 = param_4;
  if (uVar6 < uVar9) {
    do {
      if ((!bVar2) || (uVar5 != 0)) break;
      if ((void *)*param_3 == (void *)0x0) {
        uVar5 = FUN_1801513e0(param_1,param_2,_Dst_01,uVar9 - uVar6,&local_res18);
        if (uVar5 == 0x51) {
          return 0;
        }
        if (uVar5 == 0) goto LAB_180189a91;
        bVar2 = false;
      }
      else {
        if (_Dst + uVar9 + 1 < _Dst_01 + param_3[1]) {
          FUN_180150e00(param_1,"cached response data too big to handle");
          return 8;
        }
        memcpy(_Dst_01,(void *)*param_3,param_3[1]);
        local_res18 = param_3[1];
        (*(code *)PTR_free_1803bd538)(*param_3);
        *param_3 = 0;
        param_3[1] = 0;
LAB_180189a91:
        if (local_res18 < 1) {
          uVar5 = 0x38;
          bVar2 = false;
          uVar4 = Ordinal_111();
          FUN_180150e00(param_1,"response reading failed (errno: %d)",uVar4);
        }
        else {
          *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + (int)local_res18;
          lVar7 = 0;
          param_3[2] = param_3[2] + local_res18;
          lVar10 = local_res18;
          pcVar11 = _Dst_01;
          if (0 < local_res18) {
            do {
              pcVar11 = pcVar11 + 1;
              lVar8 = lVar8 + 1;
              if (*_Dst_01 == '\n') {
                FUN_180150d10(param_1,1,param_3[3],lVar8);
                uVar6 = FUN_180151330(param_1,2,param_3[3],lVar8);
                if ((int)uVar6 != 0) {
                  return uVar6;
                }
                cVar3 = (*(code *)param_3[0x10])(param_1,uVar1,param_3[3],lVar8,local_res20);
                uVar5 = 0;
                if (cVar3 != '\0') {
                  _Size = (longlong)_Dst_01 - (longlong)param_3[3];
                  memmove(_Dst,(void *)param_3[3],_Size);
                  _Dst[_Size] = '\0';
                  param_3[3] = pcVar11;
                  *param_5 = param_3[2];
                  param_3[2] = 0;
                  bVar2 = false;
                  if (lVar7 + 1 == local_res18) goto LAB_180189c54;
                  lVar8 = local_res18 - (lVar7 + 1);
                  goto LAB_180189c2a;
                }
                lVar8 = 0;
                param_3[3] = pcVar11;
                lVar10 = local_res18;
              }
              _Dst_01 = _Dst_01 + 1;
              lVar7 = lVar7 + 1;
            } while (lVar7 < lVar10);
          }
          if ((lVar8 == lVar10) && ((longlong)(ulonglong)(*(uint *)(param_1 + 0x6ec) >> 1) < lVar10)
             ) {
            FUN_180150ee0(param_1,
                          "Excessive server response line length received, %zd bytes. Stripping");
            lVar8 = 0x28;
LAB_180189c2f:
            param_3[1] = lVar8;
            _Dst_00 = (void *)(*(code *)PTR_malloc_1803bd530)(lVar8);
            *param_3 = _Dst_00;
            if (_Dst_00 == (void *)0x0) {
              return 0x1b;
            }
            memcpy(_Dst_00,(void *)param_3[3],param_3[1]);
          }
          else {
            if ((ulonglong)param_3[2] <= (ulonglong)(*(uint *)(param_1 + 0x6ec) >> 1))
            goto LAB_180189c6d;
LAB_180189c2a:
            if (lVar8 != 0) goto LAB_180189c2f;
          }
LAB_180189c54:
          param_3[2] = 0;
          param_3[3] = _Dst;
          lVar8 = 0;
          _Dst_01 = _Dst;
        }
      }
LAB_180189c6d:
      uVar6 = param_3[2];
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x6ec);
    } while (uVar6 < *(uint *)(param_1 + 0x6ec));
  }
  *(undefined1 *)(param_3 + 4) = 0;
  return (ulonglong)uVar5;
}



// ===== FUN_180189cd0 @ 180189cd0 (size 314)

undefined8 FUN_180189cd0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res20;
  longlong local_58;
  undefined1 local_50 [32];
  
  local_58 = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0x37;
  }
  local_res20 = param_4;
  FUN_18013ff90(param_2 + 0x58);
  uVar4 = FUN_180140050(param_2 + 0x58,param_3,&local_res20);
  if ((int)uVar4 == 0) {
    uVar4 = thunk_FUN_180140070(param_2 + 0x58,&DAT_1802ead50,2);
    if ((int)uVar4 == 0) {
      lVar5 = FUN_18013ff80(param_2 + 0x58);
      uVar6 = FUN_18008d530(param_2 + 0x58);
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xce0);
      *(undefined1 *)(param_2 + 0x20) = 1;
      puVar7 = (undefined4 *)FUN_180148b70(local_50);
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *(undefined4 *)(param_2 + 0x40) = *puVar7;
      *(undefined4 *)(param_2 + 0x44) = uVar1;
      *(undefined4 *)(param_2 + 0x48) = uVar2;
      *(undefined4 *)(param_2 + 0x4c) = uVar3;
      uVar4 = FUN_180151380(param_1,0,uVar6,lVar5,&local_58);
      if ((int)uVar4 == 0) {
        FUN_180150d10(param_1,2,uVar6,local_58);
        if (local_58 == lVar5) {
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x38) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          puVar8 = (undefined8 *)FUN_180148b70(local_50);
          uVar4 = puVar8[1];
          *(undefined8 *)(param_2 + 0x40) = *puVar8;
          *(undefined8 *)(param_2 + 0x48) = uVar4;
        }
        else {
          *(longlong *)(param_2 + 0x38) = lVar5;
          *(longlong *)(param_2 + 0x30) = lVar5 - local_58;
          *(undefined8 *)(param_2 + 0x28) = uVar6;
        }
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



// ===== FUN_180189e20 @ 180189e20 (size 196)

longlong FUN_180189e20(longlong param_1,longlong param_2,char param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x30c);
  if (*(uint *)(param_1 + 0x30c) == 0) {
    uVar4 = *(ulonglong *)(param_2 + 0x50);
  }
  local_38 = *(undefined4 *)(param_2 + 0x40);
  uStack_34 = *(undefined4 *)(param_2 + 0x44);
  uStack_30 = *(undefined4 *)(param_2 + 0x48);
  uStack_2c = *(undefined4 *)(param_2 + 0x4c);
  puVar1 = (undefined4 *)FUN_180148b70(local_18);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  lVar2 = FUN_180148c00(&local_28,&local_38);
  lVar2 = uVar4 - lVar2;
  if ((*(int *)(param_1 + 0x300) != 0) && (param_3 == '\0')) {
    local_28 = *(undefined4 *)(lVar3 + 0x178);
    uStack_24 = *(undefined4 *)(lVar3 + 0x17c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x180);
    uStack_1c = *(undefined4 *)(lVar3 + 0x184);
    puVar1 = (undefined4 *)FUN_180148b70(local_18);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    lVar3 = FUN_180148c00(&local_38,&local_28);
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x300) - lVar3;
    if (lVar2 < lVar3) {
      lVar3 = lVar2;
    }
    lVar2 = lVar3;
  }
  return lVar2;
}



// ===== FUN_180189ef0 @ 180189ef0 (size 493)

int FUN_180189ef0(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  lVar11 = *(longlong *)(param_1 + 0x20);
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x30c);
  uVar1 = *(undefined8 *)(lVar11 + 0x1a8);
  if (*(uint *)(param_1 + 0x30c) == 0) {
    uVar9 = param_2[10];
  }
  local_58 = (undefined4)param_2[8];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_50 = (undefined4)param_2[9];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x4c);
  puVar6 = (undefined4 *)FUN_180148b70(local_38);
  local_48 = *puVar6;
  uStack_44 = puVar6[1];
  uStack_40 = puVar6[2];
  uStack_3c = puVar6[3];
  lVar7 = FUN_180148c00(&local_48,&local_58);
  lVar7 = uVar9 - lVar7;
  lVar8 = lVar7;
  if ((*(int *)(param_1 + 0x300) != 0) && (param_4 == '\0')) {
    local_48 = *(undefined4 *)(lVar11 + 0x178);
    uStack_44 = *(undefined4 *)(lVar11 + 0x17c);
    uStack_40 = *(undefined4 *)(lVar11 + 0x180);
    uStack_3c = *(undefined4 *)(lVar11 + 0x184);
    puVar6 = (undefined4 *)FUN_180148b70(local_28);
    local_58 = *puVar6;
    uStack_54 = puVar6[1];
    uStack_50 = puVar6[2];
    uStack_4c = puVar6[3];
    lVar8 = FUN_180148c00(&local_58,&local_48);
    lVar8 = (ulonglong)*(uint *)(param_1 + 0x300) - lVar8;
    if (lVar7 < lVar8) {
      lVar8 = lVar7;
    }
  }
  if (lVar8 < 1) {
    FUN_180150e00(param_1,"server response timeout");
    return 0x1c;
  }
  if (param_3 == '\0') {
    lVar11 = 0;
  }
  else {
    lVar11 = 1000;
    if (lVar8 < 1000) {
      lVar11 = lVar8;
    }
  }
  cVar3 = FUN_1801503e0(param_1,0);
  if (cVar3 != '\0') {
    iVar4 = 1;
    goto LAB_18018a056;
  }
  if (param_2[6] == 0) {
    if ((*param_2 != 0) && ((ulonglong)param_2[2] < (ulonglong)param_2[1])) {
      iVar4 = 1;
      goto LAB_18018a056;
    }
    cVar3 = FUN_1801503e0(param_1,0);
    if (cVar3 != '\0') {
      iVar4 = 1;
      goto LAB_18018a056;
    }
  }
  uVar10 = uVar1;
  uVar2 = 0xffffffffffffffff;
  if (param_2[6] != 0) {
    uVar10 = 0xffffffffffffffff;
    uVar2 = uVar1;
  }
  iVar4 = FUN_180161bd0(uVar10,0xffffffffffffffff,uVar2,lVar11);
LAB_18018a056:
  if (param_3 != '\0') {
    iVar5 = FUN_180160d50(param_1);
    if (iVar5 != 0) {
      return 0x2a;
    }
    puVar6 = (undefined4 *)FUN_180148b70(local_28);
    local_48 = *puVar6;
    uStack_44 = puVar6[1];
    uStack_40 = puVar6[2];
    uStack_3c = puVar6[3];
    iVar5 = FUN_180161d80(param_1,&local_48);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  iVar5 = 0;
  if (iVar4 == -1) {
    FUN_180150e00(param_1,"select/poll error");
    iVar5 = 0x1b;
  }
  else if (iVar4 != 0) {
    iVar5 = (*(code *)param_2[0xf])(param_1,*(undefined8 *)(param_1 + 0x20));
  }
  return iVar5;
}



// ===== FUN_18018a0e0 @ 18018a0e0 (size 311)

undefined8 FUN_18018a0e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong local_res8;
  undefined1 local_28 [16];
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar4 = 0x37;
  }
  else {
    FUN_18013ff90(param_2 + 0x58);
    uVar4 = FUN_180140050(param_2 + 0x58,param_3,param_4);
    if (((int)uVar4 == 0) &&
       (uVar4 = thunk_FUN_180140070(param_2 + 0x58,&DAT_1802ead50,2), (int)uVar4 == 0)) {
      lVar5 = FUN_18013ff80(param_2 + 0x58);
      uVar6 = FUN_18008d530(param_2 + 0x58);
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xce0);
      *(undefined1 *)(param_2 + 0x20) = 1;
      puVar7 = (undefined4 *)FUN_180148b70(local_28);
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *(undefined4 *)(param_2 + 0x40) = *puVar7;
      *(undefined4 *)(param_2 + 0x44) = uVar1;
      *(undefined4 *)(param_2 + 0x48) = uVar2;
      *(undefined4 *)(param_2 + 0x4c) = uVar3;
      uVar4 = FUN_180151380(param_1,0,uVar6,lVar5,&local_res8);
      if ((int)uVar4 == 0) {
        FUN_180150d10(param_1,2,uVar6,local_res8);
        if (local_res8 == lVar5) {
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x38) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          puVar8 = (undefined8 *)FUN_180148b70(local_28);
          uVar4 = puVar8[1];
          *(undefined8 *)(param_2 + 0x40) = *puVar8;
          *(undefined8 *)(param_2 + 0x48) = uVar4;
        }
        else {
          *(longlong *)(param_2 + 0x38) = lVar5;
          *(longlong *)(param_2 + 0x30) = lVar5 - local_res8;
          *(undefined8 *)(param_2 + 0x28) = uVar6;
        }
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



// ===== FUN_18018a260 @ 18018a260 (size 142)

undefined4 FUN_18018a260(undefined8 *param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_2 != (void *)0x0) {
    _Dst = (void *)(*(code *)PTR_malloc_1803bd530)(param_3 + 1);
    if (_Dst == (void *)0x0) {
      return 0x1b;
    }
    if (param_3 != 0) {
      memcpy(_Dst,param_2,param_3);
    }
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
  }
  if ((param_1[1] != 0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)();
  }
  param_1[1] = _Dst;
  *param_1 = free;
  param_1[2] = param_3;
  return 0;
}



// ===== FUN_18018a2f0 @ 18018a2f0 (size 83)

void FUN_18018a2f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1[1] != 0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)();
  }
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = param_4;
  return;
}



// ===== FUN_18018a390 @ 18018a390 (size 1024)

ulonglong FUN_18018a390(longlong *param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 local_res8 [2];
  longlong local_res10;
  undefined8 local_res20;
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  local_res10 = *(longlong *)(param_2 + 0x908);
  lVar2 = *(longlong *)(param_2 + 0x20);
  uVar6 = 0x11;
  if (local_res10 == 0) {
    local_res10 = *(longlong *)*param_1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x940);
  FUN_180150910(param_2,0,&local_res20,local_70,local_res8);
  FUN_18018a250(local_50);
  FUN_18018a250(local_68);
  uVar5 = 1;
  *param_4 = 1;
  iVar1 = (int)param_1[1];
  if (iVar1 == 0x11) {
    iVar1 = *(int *)(*param_1 + 0x34);
    *param_4 = 2;
    uVar4 = 0x43;
    if (param_3 == iVar1) {
      uVar4 = 0;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    return (ulonglong)uVar4;
  }
  if (iVar1 == 0x10) {
switchD_18018a47e_caseD_10:
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) ^ *(ushort *)((longlong)param_1 + 0x1c);
    uVar5 = FUN_18018aa80(param_1,param_2,(char)param_1[4],param_4);
    return uVar5;
  }
  if (iVar1 == 0xe) {
switchD_18018a47e_caseD_e:
    if (param_3 == *(int *)(*param_1 + 0x34)) {
      *param_4 = 2;
      *(undefined4 *)(param_1 + 1) = 0;
      return 0;
    }
    if (param_3 != *(int *)(*param_1 + 0x30)) {
LAB_18018a748:
      *param_4 = 2;
      *(undefined4 *)(param_1 + 1) = 0;
      return 0x43;
    }
    FUN_18018a2f0(local_68,&DAT_180309a04,1,0);
    goto switchD_18018a47e_caseD_7;
  }
  if (param_3 != *(int *)(*param_1 + 0x30)) goto LAB_18018a748;
  switch(iVar1) {
  case 0:
    *param_4 = 2;
    return 0;
  case 1:
    uVar4 = FUN_18018c920(*(undefined8 *)(lVar2 + 0x168),*(undefined8 *)(lVar2 + 0x150),
                          *(undefined8 *)(lVar2 + 0x158),local_68);
    break;
  case 2:
    uVar4 = FUN_18018c8f0(*(undefined8 *)(lVar2 + 0x150),local_68);
    uVar6 = 3;
    break;
  case 3:
    uVar4 = FUN_18018c8f0(*(undefined8 *)(lVar2 + 0x158),local_68);
    break;
  case 4:
    uVar4 = FUN_18018c8f0(*(undefined8 *)(lVar2 + 0x150),local_68);
    break;
  case 5:
    uVar4 = FUN_18018af50(param_1,param_2,local_50);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      uVar4 = FUN_18018ca80(local_50,*(undefined8 *)(lVar2 + 0x150),*(undefined8 *)(lVar2 + 0x158),
                            local_68);
      break;
    }
    goto LAB_18018a671;
  case 6:
    uVar4 = FUN_18018af50(param_1,param_2,local_50);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      uVar4 = FUN_180183b10(param_2,local_50,*(undefined8 *)(lVar2 + 0x150),
                            *(undefined8 *)(lVar2 + 0x158),local_res10,local_68);
      uVar5 = (ulonglong)uVar4;
      if ((uVar4 == 0) && ((*(byte *)(*param_1 + 0x3a) & 1) != 0)) {
        uVar6 = 7;
        goto switchD_18018a47e_caseD_7;
      }
    }
    goto LAB_18018a671;
  case 7:
    goto switchD_18018a47e_caseD_7;
  case 8:
    uVar4 = FUN_180187280(param_2,*(undefined8 *)(lVar2 + 0x150),*(undefined8 *)(lVar2 + 0x158),
                          local_res10,local_res20,lVar2 + 0x370,local_68);
    uVar6 = 9;
    break;
  case 9:
    uVar4 = FUN_18018af50(param_1,param_2,local_50);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      uVar4 = FUN_180187a20(param_2,local_50,lVar2 + 0x370);
      uVar5 = (ulonglong)uVar4;
      if (uVar4 == 0) {
        uVar4 = FUN_180187390(param_2,*(undefined8 *)(lVar2 + 0x150),*(undefined8 *)(lVar2 + 0x158),
                              lVar2 + 0x370,local_68);
        break;
      }
    }
    goto LAB_18018a671;
  default:
    FUN_180150e00(param_2,"Unsupported SASL authentication mechanism");
    FUN_18018a220(local_50);
    goto LAB_18018a6b4;
  case 0xd:
    if (*(short *)((longlong)param_1 + 0x1c) == 0x100) {
      uVar4 = FUN_18018cca0(*(undefined8 *)(lVar2 + 0x150),local_res20,local_res8[0],uVar3,local_68)
      ;
      uVar6 = 0xe;
    }
    else {
      uVar4 = FUN_18018cd20(*(undefined8 *)(lVar2 + 0x150),uVar3,local_68);
    }
    break;
  case 0xe:
    goto switchD_18018a47e_caseD_e;
  case 0x10:
    goto switchD_18018a47e_caseD_10;
  }
  uVar5 = (ulonglong)uVar4;
LAB_18018a671:
  FUN_18018a220(local_50);
  if ((int)uVar5 == 0) {
LAB_18018a713:
    uVar4 = FUN_18018ae90(param_1,local_68);
    if (uVar4 == 0) {
      uVar4 = (**(code **)(*param_1 + 0x10))(param_2,param_1[2],local_68);
    }
  }
  else {
    if ((int)uVar5 != 0x3d) {
LAB_18018a6b4:
      *param_4 = 2;
      FUN_18018a220(local_68);
      *(undefined4 *)(param_1 + 1) = 0;
      return uVar5;
    }
    uVar4 = (**(code **)(*param_1 + 0x18))(param_2,param_1[2]);
    uVar6 = 0x10;
  }
  FUN_18018a220(local_68);
  *(undefined4 *)(param_1 + 1) = uVar6;
  return (ulonglong)uVar4;
switchD_18018a47e_caseD_7:
  FUN_18018a220(local_50);
  goto LAB_18018a713;
}



// ===== FUN_18018a7e0 @ 18018a7e0 (size 207)

undefined2 FUN_18018a7e0(void *param_1,ulonglong param_2,ulonglong *param_3)

{
  ulonglong _Size;
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = 0;
  uVar4 = 0;
  if (PTR_s_LOGIN_180309860 != (undefined *)0x0) {
    do {
      _Size = *(ulonglong *)((longlong)&DAT_180309868 + lVar3);
      if ((_Size <= param_2) &&
         (iVar2 = memcmp(param_1,*(void **)((longlong)&PTR_s_LOGIN_180309860 + lVar3),_Size),
         iVar2 == 0)) {
        if (param_3 != (ulonglong *)0x0) {
          *param_3 = _Size;
        }
        if (((param_2 == *(ulonglong *)((longlong)&DAT_180309868 + lVar3)) ||
            (bVar1 = *(char *)(*(ulonglong *)((longlong)&DAT_180309868 + lVar3) + (longlong)param_1)
                     - 0x2d, 0x32 < bVar1)) ||
           ((0x43ffffff01ff9U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
          return (&DAT_180309870)[uVar4 * 0xc];
        }
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      lVar3 = uVar4 * 0x18;
    } while ((&PTR_s_LOGIN_180309860)[uVar4 * 3] != (undefined *)0x0);
  }
  return 0;
}



// ===== FUN_18018a8b0 @ 18018a8b0 (size 131)

void FUN_18018a8b0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x20c);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = param_3;
  *(undefined2 *)((longlong)param_1 + 0x1a) = *(undefined2 *)(param_3 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x10000;
  *(undefined1 *)(param_1 + 4) = 0;
  if (uVar1 != 1) {
    *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
    *(undefined2 *)((longlong)param_1 + 0x1a) = 0;
    if ((uVar1 & 1) != 0) {
      uVar2 = 3;
      *(undefined2 *)((longlong)param_1 + 0x1a) = 3;
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar2 | 8;
      *(ushort *)((longlong)param_1 + 0x1a) = uVar2;
    }
    if ((uVar1 & 8) != 0) {
      uVar2 = uVar2 | 0x40;
      *(ushort *)((longlong)param_1 + 0x1a) = uVar2;
    }
    if ((uVar1 & 0x40) != 0) {
      uVar2 = uVar2 | 0x180;
      *(ushort *)((longlong)param_1 + 0x1a) = uVar2;
    }
    if ((uVar1 & 4) != 0) {
      *(ushort *)((longlong)param_1 + 0x1a) = uVar2 | 0x10;
    }
  }
  return;
}



// ===== FUN_18018a940 @ 18018a940 (size 308)

undefined4 FUN_18018a940(longlong param_1,char *param_2,ulonglong param_3)

{
  ushort *puVar1;
  ulonglong _Size;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_3 == 0) {
    return 3;
  }
  puVar1 = (ushort *)(param_1 + 0x1a);
  if (*(char *)(param_1 + 0x1e) != '\0') {
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *puVar1 = 0;
  }
  iVar2 = strncmp(param_2,"*",param_3);
  if (iVar2 == 0) {
    *puVar1 = 0xffdf;
    return 0;
  }
  uVar5 = 0;
  if (PTR_s_LOGIN_180309860 != (undefined *)0x0) {
    uVar6 = 0;
    lVar3 = 0;
    do {
      _Size = *(ulonglong *)((longlong)&DAT_180309868 + lVar3);
      if (((_Size <= param_3) &&
          (iVar2 = memcmp(param_2,*(void **)((longlong)&PTR_s_LOGIN_180309860 + lVar3),_Size),
          iVar2 == 0)) &&
         ((param_3 == _Size ||
          ((0x32 < (byte)(param_2[_Size] - 0x2dU) ||
           ((0x43ffffff01ff9U >> ((ulonglong)(byte)(param_2[_Size] - 0x2dU) & 0x3f) & 1) == 0))))))
      {
        if ((&DAT_180309870)[uVar6 * 0xc] == 0) {
          return 3;
        }
        if (_Size == param_3) {
          *puVar1 = *puVar1 | (&DAT_180309870)[uVar6 * 0xc];
          return 0;
        }
        return 3;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = (ulonglong)uVar4;
      lVar3 = uVar5 * 0x18;
    } while ((&PTR_s_LOGIN_180309860)[uVar5 * 3] != (undefined *)0x0);
  }
  return 3;
}



// ===== FUN_18018aa80 @ 18018aa80 (size 1037)

int FUN_18018aa80(longlong *param_1,longlong param_2,char param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  ushort uVar6;
  char *pcVar7;
  undefined4 local_res8 [2];
  longlong local_res10;
  undefined4 local_res18;
  undefined4 *local_res20;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [24];
  undefined1 local_60 [32];
  
  local_res10 = *(longlong *)(param_2 + 0x908);
  iVar2 = 0;
  lVar3 = *(longlong *)(param_2 + 0x20);
  local_res18 = 0x11;
  if (local_res10 == 0) {
    local_res10 = *(longlong *)*param_1;
  }
  lVar4 = *(longlong *)(param_2 + 0x940);
  local_res20 = param_4;
  FUN_180150910(param_2,0,&local_88,local_80,local_res8);
  FUN_18018a250(local_60);
  FUN_18018a250(local_78);
  uVar5 = 1;
  uVar6 = *(ushort *)((longlong)param_1 + 0x1a) & *(ushort *)(param_1 + 3);
  *(char *)(param_1 + 4) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  *local_res20 = 0;
  if (((uVar6 & 0x20) == 0) || (**(char **)(lVar3 + 0x158) != '\0')) {
    if (*(longlong *)(param_2 + 0x1390) == 0) goto LAB_18018ac5d;
    if (((uVar6 & 8) == 0) || (cVar1 = FUN_180178bf0(), cVar1 == '\0')) {
      if ((uVar6 & 4) == 0) {
        if (((uVar6 & 0x40) == 0) || (cVar1 = FUN_180178bf0(), cVar1 == '\0')) {
          if (((uVar6 & 0x100) == 0) || (lVar4 == 0)) {
            if (((char)uVar6 < '\0') && (lVar4 != 0)) {
              *(undefined2 *)((longlong)param_1 + 0x1c) = 0x80;
              pcVar7 = "XOAUTH2";
              uVar5 = 0xd;
              if ((param_3 != '\0') || (*(char *)(param_2 + 0xae1) != '\0')) {
                iVar2 = FUN_18018cd20(*(undefined8 *)(lVar3 + 0x150),lVar4,local_78);
                goto LAB_18018ae76;
              }
            }
            else if ((uVar6 & 2) == 0) {
              if ((uVar6 & 1) == 0) goto LAB_18018ac5d;
              local_res18 = 3;
              *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
              pcVar7 = "LOGIN";
              uVar5 = 2;
              if ((param_3 != '\0') || (*(char *)(param_2 + 0xae1) != '\0')) {
                iVar2 = FUN_18018c8f0(*(undefined8 *)(lVar3 + 0x150),local_78);
                goto LAB_18018ae76;
              }
            }
            else {
              *(undefined2 *)((longlong)param_1 + 0x1c) = 2;
              pcVar7 = "PLAIN";
              if ((param_3 != '\0') || (*(char *)(param_2 + 0xae1) != '\0')) {
                iVar2 = FUN_18018c920(*(undefined8 *)(lVar3 + 0x168),*(undefined8 *)(lVar3 + 0x150),
                                      *(undefined8 *)(lVar3 + 0x158),local_78);
                goto LAB_18018ae76;
              }
            }
          }
          else {
            local_res18 = 0xe;
            pcVar7 = "OAUTHBEARER";
            *(undefined2 *)((longlong)param_1 + 0x1c) = 0x100;
            uVar5 = 0xd;
            if ((param_3 != '\0') || (*(char *)(param_2 + 0xae1) != '\0')) {
              iVar2 = FUN_18018cca0(*(undefined8 *)(lVar3 + 0x150),local_88,local_res8[0],lVar4,
                                    local_78);
              goto LAB_18018ae76;
            }
          }
        }
        else {
          local_res18 = 9;
          pcVar7 = "NTLM";
          *(undefined2 *)((longlong)param_1 + 0x1c) = 0x40;
          uVar5 = 8;
          if ((param_3 != '\0') || (*(char *)(param_2 + 0xae1) != '\0')) {
            iVar2 = FUN_180187280(param_2,*(undefined8 *)(lVar3 + 0x150),
                                  *(undefined8 *)(lVar3 + 0x158),local_res10,local_88,lVar3 + 0x370,
                                  local_78);
LAB_18018ae76:
            if (iVar2 != 0) goto LAB_18018ac5d;
          }
        }
      }
      else {
        pcVar7 = "CRAM-MD5";
        *(undefined2 *)((longlong)param_1 + 0x1c) = 4;
        uVar5 = 5;
      }
    }
    else {
      pcVar7 = "DIGEST-MD5";
      *(undefined2 *)((longlong)param_1 + 0x1c) = 8;
      uVar5 = 6;
    }
  }
  else {
    *(undefined2 *)((longlong)param_1 + 0x1c) = 0x20;
    pcVar7 = "EXTERNAL";
    uVar5 = 4;
    if ((param_3 != '\0') || (*(char *)(param_2 + 0xae1) != '\0')) {
      iVar2 = FUN_18018c8f0(*(undefined8 *)(lVar3 + 0x150),local_78);
      goto LAB_18018ae76;
    }
  }
  param_1[2] = (longlong)pcVar7;
  lVar3 = FUN_18013ff80(local_78);
  if (lVar3 != 0) {
    iVar2 = FUN_18018ae90(param_1,local_78);
  }
  if (*(longlong *)(*param_1 + 0x28) != 0) {
    lVar3 = FUN_18007e060(local_78);
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pcVar7[lVar4] != '\0');
    if (*(ulonglong *)(*param_1 + 0x28) < (ulonglong)(lVar3 + lVar4)) {
      FUN_18018a220(local_78);
    }
  }
  if ((iVar2 == 0) && (iVar2 = (**(code **)(*param_1 + 8))(param_2,pcVar7,local_78), iVar2 == 0)) {
    *local_res20 = 1;
    lVar3 = FUN_18013ff80(local_78);
    if (lVar3 != 0) {
      uVar5 = local_res18;
    }
    *(undefined4 *)(param_1 + 1) = uVar5;
  }
LAB_18018ac5d:
  FUN_18018a220(local_78);
  return iVar2;
}



// ===== FUN_18018ae90 @ 18018ae90 (size 186)

ulonglong FUN_18018ae90(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  if ((*(byte *)(*param_1 + 0x3a) & 1) != 0) {
    lVar1 = FUN_18013ff80(param_2);
    if (lVar1 == 0) {
      FUN_18018a2f0(param_2,&PTR_1802ead18,0,0);
      return 0;
    }
    lVar1 = FUN_18007e060(param_2);
    if (lVar1 != 0) {
      uVar2 = FUN_18007e060(param_2);
      uVar3 = FUN_18013ff80(param_2);
      uVar4 = FUN_18017d960(uVar3,uVar2,local_res18,&local_res8);
      if ((int)uVar4 == 0) {
        FUN_18018a2f0(param_2,local_res18[0],local_res8,free);
        uVar4 = uVar4 & 0xffffffff;
      }
      return uVar4;
    }
    FUN_18018a2f0(param_2,&DAT_180309a00,1,0);
  }
  return 0;
}



// ===== FUN_18018af50 @ 18018af50 (size 148)

ulonglong FUN_18018af50(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 local_res8;
  undefined8 local_res20;
  
  uVar1 = (**(code **)(*param_1 + 0x20))(param_2,param_3);
  if (((int)uVar1 == 0) && ((*(byte *)(*param_1 + 0x3a) & 1) != 0)) {
    pcVar2 = (char *)FUN_18013ff80(param_3);
    if ((*pcVar2 == '\0') || (*pcVar2 == '=')) {
      pcVar3 = (code *)0x0;
      local_res8 = 0;
      local_res20 = 0;
    }
    else {
      uVar1 = FUN_18017d6c0(pcVar2,&local_res20,&local_res8);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      pcVar3 = free;
    }
    uVar1 = uVar1 & 0xffffffff;
    FUN_18018a2f0(param_3,local_res20,local_res8,pcVar3);
  }
  return uVar1;
}



// ===== FUN_18018b070 @ 18018b070 (size 108)

undefined8 * FUN_18018b070(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)(*(code *)PTR_malloc_1803bd530)(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = (*(code *)PTR_malloc_1803bd530)(*(undefined4 *)(param_1 + 3));
    puVar2[1] = lVar3;
    if (lVar3 != 0) {
      *puVar2 = param_1;
      iVar1 = (*(code *)*param_1)(lVar3);
      if (iVar1 == 0) {
        return puVar2;
      }
      (*(code *)PTR_free_1803bd538)(puVar2[1]);
    }
    (*(code *)PTR_free_1803bd538)(puVar2);
  }
  return (undefined8 *)0x0;
}



// ===== FUN_18018b100 @ 18018b100 (size 125)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18018b100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  iVar1 = FUN_180195160(local_88);
  if (iVar1 == 0) {
    uVar3 = 0x1b;
  }
  else {
    uVar2 = FUN_180140190(param_3);
    FUN_1801951d0(local_88,param_2,uVar2);
    FUN_180194ff0(param_1,local_88);
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_18018b180 @ 18018b180 (size 68)

undefined8 FUN_18018b180(char *param_1,int param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  *param_1 = '\0';
  uVar1 = Ordinal_57(param_1,param_2);
  param_1[(longlong)param_2 + -1] = '\0';
  if ((int)uVar1 == 0) {
    pcVar2 = strchr(param_1,0x2e);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_18018b200 @ 18018b200 (size 133)

undefined4 FUN_18018b200(short *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  if (*param_1 == 0x17) {
    if ((*(byte *)(param_1 + 4) & 0xfe) == 0xfc) {
      return 3;
    }
    uVar1 = CONCAT11(*(byte *)(param_1 + 4),*(char *)((longlong)param_1 + 9));
    uVar3 = uVar1 & 0xffc0;
    if ((uVar1 & 0xffc0) == 0) {
      if ((((((((((((((char)param_1[0xb] == '\0' && *(char *)((longlong)param_1 + 0x15) == '\0') &&
                    (char)param_1[10] == '\0') && *(char *)((longlong)param_1 + 0x13) == '\0') &&
                  (char)param_1[9] == '\0') && *(char *)((longlong)param_1 + 0x11) == '\0') &&
                (char)param_1[8] == '\0') && *(char *)((longlong)param_1 + 0xf) == '\0') &&
              (char)param_1[7] == '\0') && *(char *)((longlong)param_1 + 0xd) == '\0') &&
            (char)param_1[6] == '\0') && *(char *)((longlong)param_1 + 0xb) == '\0') &&
          (char)param_1[5] == '\0') && *(char *)((longlong)param_1 + 9) == '\0') {
        uVar2 = 0;
        if (*(char *)((longlong)param_1 + 0x17) == '\x01') {
          uVar2 = 4;
        }
        return uVar2;
      }
    }
    else {
      if (uVar3 == 0xfe80) {
        return 1;
      }
      if (uVar3 == 0xfec0) {
        return 2;
      }
    }
  }
  return 0;
}



// ===== FUN_18018b290 @ 18018b290 (size 317)

undefined8 FUN_18018b290(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  
  if ((*(char *)(param_1 + 0x13bd) == '\0') || (*(longlong *)(param_1 + 0x11c0) == 0)) {
    *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
    return 0;
  }
  iVar2 = FUN_180176b60(*(longlong *)(param_1 + 0x11c0),&local_res8,10,&local_res10);
  if (iVar2 != 1) {
    bVar1 = *local_res8;
    while (((bVar1 != 0 && (bVar1 < 0x2e)) &&
           ((0x200100000200U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0))) {
      local_res8 = local_res8 + 1;
      bVar1 = *local_res8;
    }
    iVar3 = FUN_180176b60(local_res8,local_res20,10,&local_res18);
    if (iVar3 != 1) {
      if ((iVar3 == 2) && (iVar2 == 0)) {
        *(longlong *)(param_1 + 0x11c8) = local_res10;
        return 0;
      }
      if ((iVar2 == 2) && (iVar3 == 0)) {
        *(longlong *)(param_1 + 0xf8) = local_res18;
        *(longlong *)(param_1 + 0x11c8) = -local_res18;
        return 0;
      }
      if ((local_res10 <= local_res18) && (local_res18 - local_res10 != 0x7fffffffffffffff)) {
        *(longlong *)(param_1 + 0x11c8) = local_res10;
        *(longlong *)(param_1 + 0xf8) = (local_res18 - local_res10) + 1;
        return 0;
      }
    }
  }
  return 0x21;
}



// ===== FUN_18018b3d0 @ 18018b3d0 (size 171)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018b3d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_c8;
  FUN_18018bab0(param_1,local_a8);
  FUN_1801ac9e0(param_2,param_3,local_a8,1);
  FUN_18018bab0(param_1 + 7,local_a8);
  FUN_1801ac9e0(param_2,param_3 + 8,local_a8,1);
  FUN_18018bab0(param_1 + 0xe,local_a8);
  FUN_1801ac9e0(param_2,param_3 + 0x10,local_a8,1);
  return;
}



// ===== FUN_18018b480 @ 18018b480 (size 360)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018b480(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  char local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  char local_31;
  char local_30 [4];
  byte local_2c;
  byte local_2b;
  byte local_2a;
  undefined1 local_29 [9];
  ulonglong local_20;
  
  local_20 = DAT_1803c3d80 ^ (ulonglong)auStack_d8;
  lVar2 = -1;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)(param_1 + uVar1) != '\0');
  if (uVar1 < 0xe) {
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_1 + lVar2) != '\0');
  }
  else {
    lVar2 = 0xe;
  }
  FUN_180140280(local_30,param_1,lVar2);
  memset(local_30 + lVar2,0,0xe - lVar2);
  local_38 = local_30[0];
  local_37 = (byte)local_30[1] >> 1 | local_30[0] << 7;
  local_36 = (byte)local_30[2] >> 2 | local_30[1] << 6;
  local_35 = (byte)local_30[3] >> 3 | local_30[2] << 5;
  local_34 = local_2c >> 4 | local_30[3] << 4;
  local_33 = local_2b >> 5 | local_2c << 3;
  local_31 = local_2a * '\x02';
  local_32 = local_2a >> 6 | local_2b << 2;
  FUN_1801ad110(&local_38);
  FUN_1801acab0(&local_38,local_b8);
  FUN_1801ac9e0("KGS!@#$%%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",param_2,local_b8,1);
  FUN_18018bab0(local_29,local_b8);
  FUN_1801ac9e0("KGS!@#$%%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",param_2 + 8,local_b8,1);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  return;
}



// ===== FUN_18018b5f0 @ 18018b5f0 (size 133)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18018b5f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = *param_2;
  local_40 = &local_28;
  local_48 = 0x10;
  uVar1 = FUN_18018c730(&PTR_FUN_180309a58,param_1,0x10,&local_38);
  if ((int)uVar1 == 0) {
    *param_4 = local_28;
    param_4[1] = uStack_20;
    param_4[2] = *param_2;
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_18018b680 @ 18018b680 (size 204)

int FUN_18018b680(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)(uVar3 + param_1) != '\0');
  if (uVar3 < 0x8000000000000000) {
    uVar4 = 0;
    if (uVar3 == 0) {
      lVar2 = (*(code *)PTR__strdup_1803bd548)(&PTR_1802ead18);
      lVar5 = 0;
    }
    else {
      lVar5 = uVar3 * 2;
      lVar2 = (*(code *)PTR_malloc_1803bd530)(lVar5);
    }
    if (lVar2 != 0) {
      if (uVar3 != 0) {
        do {
          *(undefined1 *)(lVar2 + uVar4 * 2) = *(undefined1 *)(uVar4 + param_1);
          *(undefined1 *)(lVar2 + 1 + uVar4 * 2) = 0;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      iVar1 = FUN_18018cd80(param_2,lVar2,lVar5);
      if (iVar1 == 0) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined1 *)(param_2 + 0x14) = 0;
      }
      (*(code *)PTR_free_1803bd538)(lVar2);
      return iVar1;
    }
  }
  return 0x1b;
}



// ===== FUN_18018b750 @ 18018b750 (size 289)

undefined4
FUN_18018b750(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((param_2 < 0x7a1201) && (param_4 < 0x7a1201)) {
    lVar2 = (param_2 + param_4) * 2;
    lVar5 = (*(code *)PTR_malloc_1803bd530)(lVar2 + 1);
    if (lVar5 != 0) {
      uVar6 = 0;
      uVar7 = 0;
      if (param_2 != 0) {
        do {
          uVar3 = FUN_180140200(*(undefined1 *)(uVar7 + param_1));
          *(undefined1 *)(lVar5 + uVar7 * 2) = uVar3;
          *(undefined1 *)(lVar5 + 1 + uVar7 * 2) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_2);
      }
      lVar1 = lVar5 + param_2 * 2;
      if (param_4 != 0) {
        do {
          *(undefined1 *)(lVar1 + uVar6 * 2) = *(undefined1 *)(uVar6 + param_3);
          *(undefined1 *)(lVar1 + 1 + uVar6 * 2) = 0;
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_4);
      }
      uVar4 = FUN_18018c730(&PTR_FUN_180309a58,param_5,0x10,lVar5,lVar2,param_6);
      (*(code *)PTR_free_1803bd538)(lVar5);
      return uVar4;
    }
  }
  return 0x1b;
}



// ===== FUN_18018b880 @ 18018b880 (size 554)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18018b880(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
                 int *param_5)

{
  int iVar1;
  __time64_t _Var2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  uint local_a8;
  uint local_a0;
  uint local_98;
  uint local_90;
  uint local_88;
  undefined8 *local_78;
  undefined8 local_70;
  longlong *local_68;
  int *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_118;
  local_60 = param_5;
  local_78 = param_2;
  local_70 = param_1;
  local_68 = param_4;
  _Var2 = _time64((__time64_t *)0x0);
  iVar4 = *(int *)(param_3 + 0xc) + 0x30;
  lVar5 = (_Var2 + 0x2b6109100) * 10000000;
  puVar3 = (undefined8 *)(*(code *)PTR_calloc_1803bd550)(1,iVar4);
  if (puVar3 == (undefined8 *)0x0) {
    iVar1 = 0x1b;
  }
  else {
    local_88 = (uint)((ulonglong)lVar5 >> 0x20);
    local_90 = (ushort)((ulonglong)lVar5 >> 0x30) & 0xff;
    local_98 = local_88 >> 8 & 0xff;
    local_b0 = (uint)((ulonglong)lVar5 >> 0x10) & 0xff;
    local_b8 = (uint)((ulonglong)lVar5 >> 8) & 0xff;
    local_c0 = (uint)lVar5 & 0xff;
    local_88 = local_88 >> 0x18;
    local_a0 = (uint)(byte)((ulonglong)lVar5 >> 0x20);
    local_a8 = (uint)((ulonglong)lVar5 >> 0x18) & 0xff;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = (undefined8 *)((ulonglong)local_f0._4_4_ << 0x20);
    local_f8 = CONCAT44(local_f8._4_4_,1);
    FUN_1801450d0(puVar3 + 2,*(int *)(param_3 + 0xc) + 0x20,"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",1);
    puVar3[4] = *local_78;
    if (*(uint *)(param_3 + 0xc) != 0) {
      memcpy((void *)((longlong)puVar3 + 0x2c),*(void **)(param_3 + 0x10),
             (ulonglong)*(uint *)(param_3 + 0xc));
    }
    puVar3[1] = *(undefined8 *)(param_3 + 4);
    local_f0 = &local_58;
    local_f8 = (ulonglong)(*(int *)(param_3 + 0xc) + 0x28);
    iVar1 = FUN_18018c730(&PTR_FUN_180309a58,local_70,0x10);
    if (iVar1 == 0) {
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      *local_68 = (longlong)puVar3;
      *local_60 = iVar4;
      iVar1 = 0;
    }
    else {
      (*(code *)PTR_free_1803bd538)(puVar3);
    }
  }
  return iVar1;
}



// ===== FUN_18018bab0 @ 18018bab0 (size 205)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018bab0(char *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  char local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  byte local_13;
  byte local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_17 = (byte)param_1[1] >> 1 | local_18 << 7;
  local_16 = (byte)param_1[2] >> 2 | param_1[1] << 6;
  local_15 = (byte)param_1[3] >> 3 | param_1[2] << 5;
  local_14 = (byte)param_1[4] >> 4 | param_1[3] << 4;
  local_13 = (byte)param_1[5] >> 5 | param_1[4] << 3;
  local_11 = param_1[6] * '\x02';
  local_12 = (byte)param_1[6] >> 6 | param_1[5] << 2;
  FUN_1801ad110(&local_18);
  FUN_1801acab0(&local_18,param_2);
  return;
}



// ===== FUN_18018bc00 @ 18018bc00 (size 141)

void FUN_18018bc00(void)

{
  int iVar1;
  char *_Filename;
  
  if ((DAT_1803c6508 != (FILE *)0x0) ||
     (_Filename = (char *)FUN_180175270("SSLKEYLOGFILE"), _Filename == (char *)0x0)) {
    return;
  }
  DAT_1803c6508 = fopen(_Filename,"at");
  if ((DAT_1803c6508 != (FILE *)0x0) && (iVar1 = setvbuf(DAT_1803c6508,(char *)0x0,4,0), iVar1 != 0)
     ) {
    fclose(DAT_1803c6508);
    DAT_1803c6508 = (FILE *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018018bc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_1803bd538)(_Filename);
  return;
}



// ===== FUN_18018bc90 @ 18018bc90 (size 192)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18018bc90(void *param_1)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong _Size;
  undefined1 auStack_138 [32];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_138;
  uVar2 = local_18;
  if ((DAT_1803c6508 != (FILE *)0x0) && (param_1 != (void *)0x0)) {
    _Size = 0xffffffffffffffff;
    do {
      uVar2 = _Size;
      _Size = uVar2 + 1;
    } while (*(char *)((longlong)param_1 + _Size) != '\0');
    if (uVar2 < 0xfe) {
      memcpy(local_118,param_1,_Size);
      if (*(char *)((longlong)param_1 + uVar2) != '\n') {
        local_118[uVar2 + 1] = '\n';
        _Size = uVar2 + 2;
        if (0xff < _Size) {
                    /* WARNING: Subroutine does not return */
          FUN_1802e048c();
        }
      }
      local_118[_Size] = '\0';
      iVar1 = fputs(local_118,DAT_1803c6508);
      return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// ===== FUN_18018bd60 @ 18018bd60 (size 380)

bool FUN_18018bd60(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *_MaxCount;
  char *_MaxCount_00;
  
  if ((((param_1 == (char *)0x0) || (*param_1 == '\0')) || (param_3 == (char *)0x0)) ||
     (*param_3 == '\0')) {
    return false;
  }
  _MaxCount = param_4 + -1;
  if ((param_3 + -1)[(longlong)param_4] != '.') {
    _MaxCount = param_4;
  }
  _MaxCount_00 = param_2 + -1;
  if ((param_2 + -1)[(longlong)param_1] != '.') {
    _MaxCount_00 = param_2;
  }
  iVar2 = strncmp(param_1,"*.",2);
  if (iVar2 != 0) {
    if (_MaxCount == _MaxCount_00) {
      iVar2 = FUN_1801403a0(param_3,param_1,_MaxCount);
      return iVar2 != 0;
    }
    return false;
  }
  cVar1 = FUN_1801568a0(param_3);
  if (cVar1 != '\0') {
    return false;
  }
  pcVar3 = memchr(param_1,0x2e,(size_t)_MaxCount_00);
  if ((pcVar3 == (char *)0x0) ||
     (pcVar4 = (char *)FUN_180176d10(param_1,0x2e,_MaxCount_00), pcVar4 == pcVar3)) {
    if (_MaxCount != _MaxCount_00) {
      return false;
    }
  }
  else {
    pcVar4 = memchr(param_3,0x2e,(size_t)_MaxCount);
    if (pcVar4 == (char *)0x0) {
      return false;
    }
    _MaxCount = param_3 + ((longlong)_MaxCount - (longlong)pcVar4);
    if (_MaxCount != param_1 + ((longlong)_MaxCount_00 - (longlong)pcVar3)) {
      return false;
    }
    param_3 = pcVar4;
    param_1 = pcVar3;
  }
  iVar2 = FUN_1801403a0(param_3,param_1,_MaxCount);
  return iVar2 != 0;
}



// ===== FUN_18018bee0 @ 18018bee0 (size 86)

void FUN_18018bee0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != (undefined8 *)0x0) {
    *param_1 = *puVar1;
    (*(code *)PTR_free_1803bd538)();
    puVar1 = (undefined8 *)*param_1;
  }
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[2] = *puVar1;
    (*(code *)PTR_free_1803bd538)();
    puVar1 = (undefined8 *)param_1[2];
  }
  param_1[4] = 0;
  param_1[1] = 0;
  return;
}



// ===== FUN_18018bf90 @ 18018bf90 (size 229)

longlong FUN_18018bf90(longlong *param_1,void *param_2,ulonglong param_3,undefined4 *param_4)

{
  longlong lVar1;
  void *_Src;
  ulonglong _Size;
  longlong lVar2;
  
  *param_4 = 0;
  lVar2 = 0;
  if (param_3 != 0) {
    do {
      lVar1 = *param_1;
      if (lVar1 == 0) break;
      _Src = (void *)(lVar1 + 0x20 + *(longlong *)(lVar1 + 0x10));
      _Size = *(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10);
      if (_Size != 0) {
        if (param_3 < _Size) {
          memcpy(param_2,_Src,param_3);
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + param_3;
          _Size = param_3;
          if (param_3 == 0) goto LAB_18018c021;
        }
        else {
          memcpy(param_2,_Src,_Size);
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        lVar2 = lVar2 + _Size;
        param_2 = (void *)((longlong)param_2 + _Size);
        param_3 = param_3 - _Size;
      }
LAB_18018c021:
      FUN_18018c2d0(param_1);
    } while (param_3 != 0);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  *param_4 = 0x51;
  return -1;
}



// ===== FUN_18018c0c0 @ 18018c0c0 (size 244)

longlong FUN_18018c0c0(longlong param_1,code *param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar4 = 0;
  lVar3 = 0;
  iVar6 = 0x51;
  do {
    *param_4 = 0x51;
    lVar1 = FUN_18018c1c0(param_1);
    if (lVar1 == 0) {
      iVar6 = 0x51;
      if (*(ulonglong *)(param_1 + 0x20) < *(ulonglong *)(param_1 + 0x28)) {
        iVar6 = 0x1b;
      }
LAB_18018c176:
      *param_4 = iVar6;
LAB_18018c179:
      if ((lVar3 == 0) || (*param_4 != 0x51)) {
        return -1;
      }
LAB_18018c184:
      *param_4 = 0;
      return lVar3;
    }
    uVar5 = *(longlong *)(lVar1 + 8) - *(longlong *)(lVar1 + 0x18);
    if (uVar5 == 0) goto LAB_18018c176;
    if ((uVar4 != 0) && (uVar4 < uVar5)) {
      uVar5 = uVar4;
    }
    lVar2 = (*param_2)(param_3,*(longlong *)(lVar1 + 0x18) + 0x20 + lVar1,uVar5,param_4);
    if (lVar2 < 1) {
      if (-1 < lVar2) {
        if (lVar2 == 0) goto LAB_18018c184;
        goto LAB_18018c140;
      }
      goto LAB_18018c179;
    }
    *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + lVar2;
LAB_18018c140:
    lVar3 = lVar3 + lVar2;
    if ((uVar4 != 0) && (uVar4 = uVar4 - lVar2, uVar4 == 0)) {
      return lVar3;
    }
    lVar1 = *(longlong *)(param_1 + 8);
    if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x18) < *(ulonglong *)(lVar1 + 8))) {
      return lVar3;
    }
  } while( true );
}



// ===== FUN_18018c1c0 @ 18018c1c0 (size 262)

undefined8 * FUN_18018c1c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)param_1[1];
  if ((puVar2 != (undefined8 *)0x0) && ((ulonglong)puVar2[3] < (ulonglong)puVar2[1])) {
    return puVar2;
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[2] = *puVar2;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    goto LAB_18018c296;
  }
  if (((ulonglong)param_1[5] <= (ulonglong)param_1[4]) && ((*(byte *)(param_1 + 7) & 1) == 0)) {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(*(code *)PTR_calloc_1803bd550)(1,param_1[6] + 0x28);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar3 = param_1[6];
LAB_18018c28e:
    puVar2[1] = uVar3;
  }
  else {
    puVar2 = (undefined8 *)*puVar1;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)(*(code *)PTR_calloc_1803bd550)(1,puVar1[1] + 0x28);
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      uVar3 = puVar1[1];
      goto LAB_18018c28e;
    }
    uVar3 = *puVar2;
    puVar1[2] = puVar1[2] + -1;
    *puVar1 = uVar3;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  param_1[4] = param_1[4] + 1;
LAB_18018c296:
  if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar2;
    return puVar2;
  }
  *(undefined8 *)param_1[1] = puVar2;
  param_1[1] = puVar2;
  return puVar2;
}



// ===== FUN_18018c2d0 @ 18018c2d0 (size 161)

void FUN_18018c2d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  do {
    if ((puVar1 == (undefined8 *)0x0) || ((ulonglong)puVar1[2] < (ulonglong)puVar1[3])) {
      return;
    }
    uVar2 = *puVar1;
    *param_1 = uVar2;
    if ((undefined8 *)param_1[1] == puVar1) {
      param_1[1] = uVar2;
    }
    puVar3 = (undefined8 *)param_1[3];
    if (puVar3 == (undefined8 *)0x0) {
      if (((ulonglong)param_1[5] < (ulonglong)param_1[4]) || ((*(byte *)(param_1 + 7) & 2) != 0))
      goto LAB_18018c354;
      *puVar1 = param_1[2];
      param_1[2] = puVar1;
    }
    else {
      if ((ulonglong)puVar3[2] < (ulonglong)puVar3[3]) {
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        *puVar1 = *puVar3;
        puVar3[2] = puVar3[2] + 1;
        *puVar3 = puVar1;
      }
      else {
LAB_18018c354:
        (*(code *)PTR_free_1803bd538)();
      }
      param_1[4] = param_1[4] + -1;
    }
    puVar1 = (undefined8 *)*param_1;
  } while( true );
}



// ===== FUN_18018c380 @ 18018c380 (size 173)

void FUN_18018c380(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  ppuVar2 = &PTR_1802ead18;
  ppuVar5 = &PTR_1802ead18;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar5 = *(undefined ***)(param_1 + 0x20);
  }
  ppuVar4 = &PTR_1802ead18;
  if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
    ppuVar4 = *(undefined ***)(param_1 + 0x18);
  }
  ppuVar3 = &PTR_1802ead18;
  if (*(undefined ***)(param_1 + 0x10) != (undefined **)0x0) {
    ppuVar2 = (undefined **)&DAT_1802ea92c;
    ppuVar3 = *(undefined ***)(param_1 + 0x10);
  }
  iVar1 = FUN_18013fef0(param_3,"%s %s%s%s%s HTTP/1.%d\r\n",param_1,ppuVar3,ppuVar2,ppuVar4,ppuVar5,
                        param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_1801870f0(param_1 + 0x28,param_3), iVar1 == 0)) {
    thunk_FUN_180140070(param_3,&DAT_1802ead50,2);
  }
  return;
}



// ===== FUN_18018c430 @ 18018c430 (size 83)

undefined8 FUN_18018c430(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_18019d560();
  *param_1 = lVar2;
  if (lVar2 == 0) {
    return 0x1b;
  }
  uVar3 = FUN_18019db80();
  iVar1 = FUN_18019d050(*param_1,uVar3,0);
  if (iVar1 == 0) {
    FUN_18019d520(*param_1);
    return 2;
  }
  return 0;
}



// ===== FUN_18018c4d0 @ 18018c4d0 (size 152)

undefined4 FUN_18018c4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_18019d560();
  if (lVar3 == 0) {
    uVar1 = 0x1b;
  }
  else {
    uVar4 = FUN_18019db80();
    iVar2 = FUN_18019d050(lVar3,uVar4,0);
    if (iVar2 == 0) {
      FUN_18019d520(lVar3);
      uVar1 = 2;
    }
    else {
      uVar1 = FUN_180140190(param_3);
      FUN_18019d280(lVar3,param_2,uVar1);
      FUN_18019cf70(lVar3,param_1,0);
      FUN_18019d520(lVar3);
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ===== FUN_18018c570 @ 18018c570 (size 107)

undefined8 FUN_18018c570(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    param_2 = (ulonglong)*(uint *)(lVar1 + 0x18) + param_1[2];
  }
  (**(code **)(lVar1 + 0x10))(param_2,param_1[1]);
  (**(code **)(lVar1 + 8))(param_1[2],param_2,*(undefined4 *)(lVar1 + 0x20));
  (**(code **)(lVar1 + 0x10))(param_2,param_1[2]);
  (*(code *)PTR_free_1803bd538)(param_1);
  return 0;
}



// ===== FUN_18018c5e0 @ 18018c5e0 (size 335)

undefined8 * FUN_18018c5e0(undefined8 *param_1,byte *param_2,uint param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte local_res8 [8];
  
  uVar3 = (ulonglong)param_3;
  puVar1 = (undefined8 *)
           (*(code *)PTR_malloc_1803bd530)
                     ((ulonglong)*(uint *)(param_1 + 4) + 0x18 +
                      (ulonglong)(uint)(*(int *)(param_1 + 3) * 2));
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = (ulonglong)*(uint *)(param_1 + 3) + (longlong)(puVar1 + 3);
  if (*(uint *)((longlong)param_1 + 0x1c) < param_3) {
    (*(code *)*param_1)();
    (*(code *)param_1[1])(puVar1[1],param_2,uVar3);
    param_2 = (byte *)((ulonglong)*(uint *)(param_1 + 3) + puVar1[2]);
    (*(code *)param_1[2])(param_2,puVar1[1]);
    uVar3 = (ulonglong)*(uint *)(param_1 + 4);
  }
  (*(code *)*param_1)(puVar1[1]);
  (*(code *)*param_1)(puVar1[2]);
  uVar2 = 0;
  for (uVar4 = uVar3; uVar4 != 0; uVar4 = uVar4 - 1) {
    local_res8[0] = *param_2 ^ 0x36;
    (*(code *)param_1[1])(puVar1[1],local_res8,1);
    local_res8[0] = *param_2 ^ 0x5c;
    param_2 = param_2 + 1;
    (*(code *)param_1[1])(puVar1[2],local_res8,1);
    uVar2 = uVar3;
  }
  if (uVar2 < *(uint *)((longlong)param_1 + 0x1c)) {
    do {
      (*(code *)param_1[1])(puVar1[1],&DAT_180309b08,1);
      (*(code *)param_1[1])(puVar1[2],&DAT_180309b09,1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x1c));
  }
  return puVar1;
}



// ===== FUN_18018c730 @ 18018c730 (size 440)

undefined8
FUN_18018c730(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte local_res8 [8];
  
  uVar2 = FUN_180140190(param_3);
  uVar6 = (ulonglong)uVar2;
  plVar4 = (longlong *)
           (*(code *)PTR_malloc_1803bd530)
                     ((ulonglong)*(uint *)(param_1 + 4) + 0x18 +
                      (ulonglong)(uint)(*(int *)(param_1 + 3) * 2));
  if (plVar4 == (longlong *)0x0) {
    return 0x1b;
  }
  *plVar4 = (longlong)param_1;
  plVar4[1] = (longlong)(plVar4 + 3);
  plVar4[2] = (ulonglong)*(uint *)(param_1 + 3) + (longlong)(plVar4 + 3);
  if (*(uint *)((longlong)param_1 + 0x1c) < uVar2) {
    (*(code *)*param_1)();
    (*(code *)param_1[1])(plVar4[1],param_2,uVar6);
    param_2 = (byte *)((ulonglong)*(uint *)(param_1 + 3) + plVar4[2]);
    (*(code *)param_1[2])(param_2,plVar4[1]);
    uVar6 = (ulonglong)*(uint *)(param_1 + 4);
  }
  (*(code *)*param_1)(plVar4[1]);
  (*(code *)*param_1)(plVar4[2]);
  uVar5 = 0;
  for (uVar7 = uVar6; uVar7 != 0; uVar7 = uVar7 - 1) {
    local_res8[0] = *param_2 ^ 0x36;
    (*(code *)param_1[1])(plVar4[1],local_res8,1);
    local_res8[0] = *param_2 ^ 0x5c;
    param_2 = param_2 + 1;
    (*(code *)param_1[1])(plVar4[2],local_res8,1);
    uVar5 = uVar6;
  }
  if (uVar5 < *(uint *)((longlong)param_1 + 0x1c)) {
    do {
      (*(code *)param_1[1])(plVar4[1],&DAT_180309b08,1);
      (*(code *)param_1[1])(plVar4[2],&DAT_180309b09,1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((longlong)param_1 + 0x1c));
  }
  uVar3 = FUN_180140190(param_5);
  (**(code **)(*plVar4 + 8))(plVar4[1],param_4,uVar3);
  lVar1 = *plVar4;
  if (param_6 == 0) {
    param_6 = (ulonglong)*(uint *)(lVar1 + 0x18) + plVar4[2];
  }
  (**(code **)(lVar1 + 0x10))(param_6,plVar4[1]);
  (**(code **)(lVar1 + 8))(plVar4[2],param_6,*(undefined4 *)(lVar1 + 0x20));
  (**(code **)(lVar1 + 0x10))(param_6,plVar4[2]);
  (*(code *)PTR_free_1803bd538)(plVar4);
  return 0;
}



// ===== FUN_18018c920 @ 18018c920 (size 337)

undefined8 FUN_18018c920(void *param_1,void *param_2,void *param_3,undefined8 param_4)

{
  void *_Dst;
  ulonglong _Size;
  size_t _Size_00;
  ulonglong _Size_01;
  longlong lVar1;
  
  _Size = 0xffffffffffffffff;
  if (param_1 == (void *)0x0) {
    _Size_00 = 0;
    _Size_01 = 0xffffffffffffffff;
    do {
      _Size_01 = _Size_01 + 1;
    } while (*(char *)((longlong)param_2 + _Size_01) != '\0');
    do {
      _Size = _Size + 1;
    } while (*(char *)(_Size + (longlong)param_3) != '\0');
  }
  else {
    _Size_00 = 0xffffffffffffffff;
    do {
      _Size_00 = _Size_00 + 1;
    } while (*(char *)((longlong)param_1 + _Size_00) != '\0');
    _Size_01 = 0xffffffffffffffff;
    do {
      _Size_01 = _Size_01 + 1;
    } while (*(char *)((longlong)param_2 + _Size_01) != '\0');
    do {
      _Size = _Size + 1;
    } while (*(char *)(_Size + (longlong)param_3) != '\0');
    if (0x3fffffffffffffff < _Size_00) {
      return 0x1b;
    }
  }
  if ((_Size_01 < 0x4000000000000000) && (_Size < 0x7ffffffffffffffe)) {
    lVar1 = _Size + _Size_01 + _Size_00;
    _Dst = (void *)(*(code *)PTR_malloc_1803bd530)(lVar1 + 3);
    if (_Dst != (void *)0x0) {
      if (_Size_00 != 0) {
        memcpy(_Dst,param_1,_Size_00);
      }
      *(undefined1 *)((longlong)_Dst + _Size_00) = 0;
      memcpy((void *)(_Size_00 + 1 + (longlong)_Dst),param_2,_Size_01);
      *(undefined1 *)((longlong)_Dst + _Size_00 + _Size_01 + 1) = 0;
      memcpy((void *)((longlong)_Dst + _Size_00 + _Size_01 + 2),param_3,_Size);
      *(undefined1 *)((longlong)_Dst + lVar1 + 2) = 0;
      FUN_18018a2f0(param_4,_Dst,lVar1 + 2,free);
      return 0;
    }
  }
  return 0x1b;
}



// ===== FUN_18018ca80 @ 18018ca80 (size 543)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18018ca80(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_108 [32];
  uint local_e8;
  uint local_e0;
  uint local_d8;
  uint local_d0;
  uint local_c8;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  uint local_a8;
  uint local_a0;
  uint local_98;
  uint local_90;
  uint local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  byte local_66;
  byte local_65;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_108;
  lVar5 = -1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_3 + lVar4) != '\0');
  local_78 = param_2;
  local_70 = param_4;
  uVar1 = FUN_180140190();
  lVar4 = FUN_18018c5e0(&PTR_FUN_180309a58,param_3,uVar1);
  if (lVar4 != 0) {
    lVar2 = FUN_18007e060(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_18007e060(param_1);
      uVar1 = FUN_180140190(uVar3);
      uVar3 = FUN_18013ff80(param_1);
      FUN_18018b0e0(lVar4,uVar3,uVar1);
    }
    FUN_18018c570(lVar4,&local_68);
    local_80 = (uint)local_59;
    local_88 = (uint)local_5a;
    local_90 = (uint)local_5b;
    local_98 = (uint)local_5c;
    local_a0 = (uint)local_5d;
    local_a8 = (uint)local_5e;
    local_b0 = (uint)local_5f;
    local_b8 = (uint)local_60;
    local_c0 = (uint)local_61;
    local_c8 = (uint)local_62;
    local_d0 = (uint)local_63;
    local_d8 = (uint)local_64;
    local_e0 = (uint)local_65;
    local_e8 = (uint)local_66;
    lVar4 = FUN_180145000("%s %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
                          local_78,local_68,local_67);
    if (lVar4 != 0) {
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)(lVar4 + lVar5) != '\0');
      FUN_18018a2f0(local_70,lVar4,lVar5,free);
      return 0;
    }
  }
  return 0x1b;
}



// ===== FUN_18018cca0 @ 18018cca0 (size 120)

undefined8
FUN_18018cca0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 == 0) || (param_3 == 0x50)) {
    lVar1 = FUN_180145000(&DAT_180309b58,param_1,param_2);
  }
  else {
    lVar1 = FUN_180145000(&DAT_180309b80,param_1,param_2,param_3,param_4);
  }
  if (lVar1 == 0) {
    return 0x1b;
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(lVar1 + lVar2) != '\0');
  FUN_18018a2f0(param_5,lVar1,lVar2,free);
  return 0;
}



// ===== FUN_18018cd20 @ 18018cd20 (size 86)

undefined8 FUN_18018cd20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180145000(&DAT_180309bb0,param_1,param_2);
  if (lVar1 == 0) {
    return 0x1b;
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(lVar1 + lVar2) != '\0');
  FUN_18018a2f0(param_3,lVar1,lVar2,free);
  return 0;
}



// ===== FUN_18018cd80 @ 18018cd80 (size 125)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18018cd80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  iVar1 = FUN_180195160(local_88);
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  else {
    uVar2 = FUN_180140190(param_3);
    FUN_1801ad2e0(local_88,param_2,uVar2);
    FUN_1801ad170(param_1,local_88);
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_18018ce00 @ 18018ce00 (size 345)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018ce00(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  local_res18[0] = param_3;
  if (((*param_1 == 0) || (*(longlong *)(*param_1 + 0x58) == 0)) || (param_2 != 0xe)) {
    FUN_1801a70c0(0x20,0x83,0x79,"crypto\\bio\\bio_lib.c",0x222);
    return 0xfffffffe;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      uVar1 = (*(code *)param_1[1])(param_1,6,local_res18,0xe,0,1);
    }
    else {
      uVar1 = (*(code *)param_1[2])();
    }
    if ((int)uVar1 < 1) {
      return uVar1;
    }
  }
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1,0xe,local_res18[0]);
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      uVar1 = (*(code *)param_1[1])(param_1,0x86,local_res18,0xe,0,(int)uVar1);
      return uVar1;
    }
    uVar1 = (*(code *)param_1[2])();
  }
  return uVar1;
}



// ===== FUN_18018cf90 @ 18018cf90 (size 332)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018cf90(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x40) == 0)) {
    FUN_1801a70c0(0x20,0x67,0x79,"crypto\\bio\\bio_lib.c",0x206);
    uVar1 = 0xfffffffe;
  }
  else {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,6,param_4,param_2,param_3,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4);
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,0x86,param_4,param_2,param_3,(int)uVar1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
    }
  }
  return uVar1;
}



// ===== FUN_18018d110 @ 18018d110 (size 214)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018d110(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  LOCK();
  plVar1 = param_1 + 10;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 < 2) {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar4 = (*(code *)param_1[1])(param_1,1,0,0,0,1);
      }
      else {
        uVar4 = (*(code *)param_1[2])(param_1,1,0,0,0,0,1,0);
      }
      if ((int)uVar4 < 1) {
        return uVar4;
      }
    }
    if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x50), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1);
    }
    FUN_1801ae0a0(0xc,param_1,param_1 + 0xd);
    FUN_1801adcf0(param_1[0xe]);
    FUN_180195e10(param_1,"crypto\\bio\\bio_lib.c",0x8a);
  }
  return 1;
}



// ===== FUN_18018d1f0 @ 18018d1f0 (size 264)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18018d1f0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_1 != (longlong *)0x0) {
    do {
      lVar4 = param_1[10];
      plVar1 = param_1 + 10;
      plVar2 = (longlong *)param_1[8];
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 < 2) {
        if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
          if ((code *)param_1[2] == (code *)0x0) {
            iVar6 = (*(code *)param_1[1])(param_1,1,0,0,0,1);
          }
          else {
            iVar6 = (*(code *)param_1[2])();
          }
          if (iVar6 < 1) goto LAB_18018d2d5;
        }
        if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x50), pcVar3 != (code *)0x0)) {
          (*pcVar3)(param_1);
        }
        FUN_1801ae0a0(0xc,param_1,param_1 + 0xd);
        FUN_1801adcf0(param_1[0xe]);
        FUN_180195e10(param_1,"crypto\\bio\\bio_lib.c");
      }
LAB_18018d2d5:
    } while (((int)lVar4 < 2) && (param_1 = plVar2, plVar2 != (longlong *)0x0));
  }
  return;
}



// ===== FUN_18018d340 @ 18018d340 (size 570)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_18018d340(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(int)param_3;
  local_res8 = 0;
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x38) == 0)) {
    FUN_1801a70c0(0x20,0x68,0x79,"crypto\\bio\\bio_lib.c",0x1b6);
    return 0xfffffffe;
  }
  if ((int)param_3 < 0) {
    FUN_1801a70c0(0x20,0x68,0x7d,"crypto\\bio\\bio_lib.c",0x1bb);
    return 0;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if (0x7fffffff < uVar5) {
        return 0xffffffff;
      }
      uVar1 = (*(code *)param_1[1])(param_1,5,param_2,param_3,0,1);
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,5,param_2,uVar5,0,0,1,0);
    }
    uVar4 = (ulonglong)uVar1;
    if ((int)uVar1 < 1) goto LAB_18018d4f2;
  }
  if ((int)param_1[4] == 0) {
    FUN_1801a70c0(0x20,0x68,0x78,"crypto\\bio\\bio_lib.c",0x1c6);
    return 0xfffffffe;
  }
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
  if (iVar2 < 1) {
    uVar4 = (longlong)iVar2;
  }
  else {
    uVar4 = 1;
    local_res8 = (longlong)iVar2;
  }
  iVar2 = (int)uVar4;
  if (((code *)param_1[1] != (code *)0x0) || (uVar3 = local_res8, param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if (0x7fffffff < param_3) {
        return 0xffffffff;
      }
      if (0 < iVar2) {
        if (0x7fffffff < local_res8) {
          return 0xffffffff;
        }
        iVar2 = (int)local_res8;
      }
      iVar2 = (*(code *)param_1[1])(param_1,0x85,param_2,param_3,0,iVar2);
      uVar3 = (ulonglong)iVar2;
      uVar4 = uVar3;
      if (0 < iVar2) {
        uVar4 = 1;
        goto LAB_18018d4e1;
      }
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,0x85,param_2,uVar5,0,0,iVar2,&local_res8);
      uVar4 = (ulonglong)uVar1;
    }
    uVar3 = local_res8;
  }
LAB_18018d4e1:
  if ((0 < (int)uVar4) && (uVar4 = uVar3 & 0xffffffff, uVar5 < uVar3)) {
    uVar4 = 0xffffffff;
  }
LAB_18018d4f2:
  return uVar4 & 0xffffffff;
}



// ===== FUN_18018d580 @ 18018d580 (size 514)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018d580(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong local_res20;
  undefined4 uVar4;
  
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  if (param_3 < iVar2) {
    iVar2 = param_3;
  }
  do {
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = iVar2 + -1;
    local_res20 = 0;
    if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x30) == 0))
    {
      uVar4 = 0x189;
      uVar3 = 0x79;
      goto LAB_18018d767;
    }
    if (((code *)param_1[1] == (code *)0x0) && (param_1[2] == 0)) {
LAB_18018d643:
      if ((int)param_1[4] == 0) {
        uVar4 = 0x194;
        uVar3 = 0x78;
LAB_18018d767:
        FUN_1801a70c0(0x20,0x6e,uVar3,"crypto\\bio\\bio_lib.c",uVar4);
        return 0;
      }
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1,&DAT_1802ffaf0);
      if (0 < iVar1) {
        local_res20 = (ulonglong)iVar1;
        iVar1 = 1;
        param_1[0xc] = param_1[0xc] + local_res20;
      }
      if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
        if ((code *)param_1[2] == (code *)0x0) {
          if (0 < iVar1) {
            if (0x7fffffff < local_res20) {
              return 0;
            }
            iVar1 = (int)local_res20;
          }
          iVar1 = (*(code *)param_1[1])(param_1,0x84,&DAT_1802ffaf0,0,0,iVar1);
          if (0 < iVar1) {
            local_res20 = (ulonglong)iVar1;
            iVar1 = 1;
          }
        }
        else {
          iVar1 = (*(code *)param_1[2])(param_1,0x84,&DAT_1802ffaf0,0,0,0,iVar1,&local_res20);
        }
      }
      if (0 < iVar1) {
        if (0x7fffffff < local_res20) {
          uVar4 = 0x1a6;
          uVar3 = 0x66;
          goto LAB_18018d767;
        }
        iVar1 = (int)local_res20;
      }
    }
    else {
      if ((code *)param_1[2] == (code *)0x0) {
        iVar1 = (*(code *)param_1[1])(param_1,4,&DAT_1802ffaf0,0,0,1);
      }
      else {
        iVar1 = (*(code *)param_1[2])();
      }
      if (0 < iVar1) goto LAB_18018d643;
    }
    if (iVar1 != 1) {
      return 0;
    }
  } while( true );
}



// ===== FUN_18018d7c0 @ 18018d7c0 (size 344)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_18018d7c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x18018d7d0;
  plVar2 = (longlong *)FUN_180196100(0x78,"crypto\\bio\\bio_lib.c",0x49);
  if (plVar2 == (longlong *)0x0) {
    FUN_1801a70c0(0x20,0x6c,0x41,"crypto\\bio\\bio_lib.c",0x4c,uVar4);
    return (longlong *)0x0;
  }
  *plVar2 = param_1;
  *(undefined4 *)((longlong)plVar2 + 0x24) = 1;
  *(undefined4 *)(plVar2 + 10) = 1;
  iVar1 = FUN_1801ae440(0xc,plVar2,plVar2 + 0xd);
  if (iVar1 != 0) {
    lVar3 = FUN_1801add30();
    plVar2[0xe] = lVar3;
    if (lVar3 != 0) {
      if (*(code **)(param_1 + 0x48) != (code *)0x0) {
        iVar1 = (**(code **)(param_1 + 0x48))(plVar2);
        if (iVar1 == 0) {
          FUN_1801a70c0(0x20,0x6c,0x46,"crypto\\bio\\bio_lib.c",0x5f,uVar4);
          FUN_1801ae0a0(0xc,plVar2,plVar2 + 0xd);
          FUN_1801adcf0(plVar2[0xe]);
          goto LAB_18018d884;
        }
      }
      if (*(longlong *)(param_1 + 0x48) == 0) {
        *(undefined4 *)(plVar2 + 4) = 1;
      }
      return plVar2;
    }
    FUN_1801a70c0(0x20,0x6c,0x41,"crypto\\bio\\bio_lib.c",0x59,uVar4);
    FUN_1801ae0a0(0xc,plVar2,plVar2 + 0xd);
  }
LAB_18018d884:
  FUN_180195e10(plVar2,"crypto\\bio\\bio_lib.c",0x6a);
  return (longlong *)0x0;
}



// ===== FUN_18018d930 @ 18018d930 (size 113)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018d930(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  FUN_18018cf90(param_1,7,0,param_1);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x40) = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48) = *(undefined8 *)(param_1 + 0x48);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return uVar1;
}



// ===== FUN_18018d9b0 @ 18018d9b0 (size 94)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18018d9b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return param_2;
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar2 = param_1;
  while (lVar1 = lVar3, lVar1 != 0) {
    lVar2 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 0x40);
  }
  *(longlong *)(lVar2 + 0x40) = param_2;
  if (param_2 != 0) {
    *(longlong *)(param_2 + 0x48) = lVar2;
  }
  FUN_18018cf90(param_1,6);
  return param_1;
}



// ===== FUN_18018da10 @ 18018da10 (size 504)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_18018da10(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  local_res8 = 0;
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x30) == 0)) {
    FUN_1801a70c0(0x20,0x6e,0x79,"crypto\\bio\\bio_lib.c",0x189);
    return 0xfffffffe;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      uVar1 = (*(code *)param_1[1])(param_1,4,param_2,0,0,1);
    }
    else {
      uVar1 = (*(code *)param_1[2])();
    }
    if ((int)uVar1 < 1) {
      return uVar1;
    }
  }
  if ((int)param_1[4] == 0) {
    FUN_1801a70c0(0x20,0x6e,0x78,"crypto\\bio\\bio_lib.c",0x194);
    return 0xfffffffe;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
  if (0 < (int)uVar1) {
    local_res8 = (ulonglong)(int)uVar1;
    uVar1 = 1;
    param_1[0xc] = param_1[0xc] + local_res8;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if (0 < (int)uVar1) {
        if (0x7fffffff < local_res8) {
          return 0xffffffff;
        }
        uVar1 = local_res8 & 0xffffffff;
      }
      uVar1 = (*(code *)param_1[1])(param_1,0x84,param_2,0,0,(int)uVar1);
      if (0 < (int)uVar1) {
        local_res8 = (ulonglong)(int)uVar1;
        uVar1 = 1;
      }
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,0x84,param_2,0,0,0,(int)uVar1,&local_res8);
    }
  }
  if ((int)uVar1 < 1) {
    return uVar1;
  }
  if (local_res8 < 0x80000000) {
    return local_res8 & 0xffffffff;
  }
  FUN_1801a70c0(0x20,0x6e,0x66,"crypto\\bio\\bio_lib.c",0x1a6);
  return 0xffffffff;
}



// ===== FUN_18018dd20 @ 18018dd20 (size 197)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18018dd20(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4,undefined8 param_5,
             undefined8 param_6,int param_7,ulonglong *param_8)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018018dd3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x10))();
    return uVar1;
  }
  uVar2 = param_2 & 0xffffff7f;
  if (((((uVar2 - 2 & 0xfffffffc) == 0) && (uVar2 != 4)) && (0x7fffffff < param_4)) ||
     (((0 < param_7 && ((char)param_2 < '\0')) && ((uVar2 != 6 && (0x7fffffff < *param_8)))))) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(param_1 + 8))();
  if (((0 < (int)uVar1) && ((char)param_2 < '\0')) && (uVar2 != 6)) {
    *param_8 = (longlong)(int)uVar1;
    uVar1 = 1;
  }
  return uVar1;
}



// ===== FUN_18018ddf0 @ 18018ddf0 (size 69)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18018ddf0(void)

{
  FUN_1801ae880();
  FUN_1801adcf0(DAT_180447960);
  DAT_180447960 = 0;
  FUN_1801adcf0(DAT_1803c6550);
  DAT_1803c6550 = 0;
  return;
}



// ===== FUN_18018de40 @ 18018de40 (size 432)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018de40(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x20) == 0)) {
    FUN_1801a70c0(0x20,0x78,0x79,"crypto\\bio\\bio_lib.c",0x100);
    return 0xfffffffe;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if (0x7fffffff < param_3) {
        return 0xffffffff;
      }
      uVar1 = (*(code *)param_1[1])(param_1,2,param_2,param_3 & 0xffffffff,0,1);
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,2,param_2,param_3,0,0,1,0);
    }
    if ((int)uVar1 < 1) {
      return uVar1;
    }
  }
  if ((int)param_1[4] == 0) {
    FUN_1801a70c0(0x20,0x78,0x78,"crypto\\bio\\bio_lib.c",0x10a);
    return 0xfffffffe;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4);
  if (0 < (int)uVar1) {
    param_1[0xb] = param_1[0xb] + *param_4;
  }
  if ((param_1[1] != 0) || (param_1[2] != 0)) {
    uVar1 = FUN_18018dd20(param_1,0x82,param_2,param_3,0,0,(int)uVar1,param_4);
  }
  if ((int)uVar1 < 1) {
    return uVar1;
  }
  if (param_3 < *param_4) {
    FUN_1801a70c0(0x20,0x78,0x44,"crypto\\bio\\bio_lib.c",0x119);
    return 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_18018dff0 @ 18018dff0 (size 406)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018dff0(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x10) == 0)) {
    FUN_1801a70c0(0x20,0x80,0x79,"crypto\\bio\\bio_lib.c",0x149);
    return 0xfffffffe;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if (0x7fffffff < param_3) {
        return 0xffffffff;
      }
      uVar1 = (*(code *)param_1[1])(param_1,3,param_2,param_3 & 0xffffffff,0,1);
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,3,param_2,param_3,0,0,1,0);
    }
    if ((int)uVar1 < 1) {
      return uVar1;
    }
  }
  if ((int)param_1[4] == 0) {
    FUN_1801a70c0(0x20,0x80,0x78,"crypto\\bio\\bio_lib.c",0x153);
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
    if (0 < (int)uVar1) {
      param_1[0xc] = param_1[0xc] + *param_4;
    }
    if ((param_1[1] != 0) || (param_1[2] != 0)) {
      uVar1 = FUN_18018dd20(param_1,0x83,param_2,param_3,0,0,(int)uVar1,param_4);
    }
  }
  return uVar1;
}



// ===== FUN_18018e190 @ 18018e190 (size 254)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_18018e190(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  iVar6 = -1;
  if (param_2 == (void *)0x0) {
    FUN_1801a70c0(0x20,0x75,0x73,"crypto\\bio\\bss_mem.c",0xe0,0x18018e1a8);
  }
  else if ((*(uint *)(param_1 + 0x28) & 0x200) == 0) {
    FUN_18018cf60(param_1,0xf);
    if (param_3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar1 = *(int *)plVar2[1];
      FUN_18018e9b0(param_1);
      lVar7 = FUN_1801aea60(*plVar2,(longlong)(iVar1 + param_3));
      if (lVar7 != 0) {
        memcpy((void *)((longlong)iVar1 + *(longlong *)(*plVar2 + 8)),param_2,(longlong)param_3);
        puVar3 = (undefined8 *)*plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        uVar5 = puVar3[1];
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        uVar5 = puVar3[3];
        puVar4[2] = puVar3[2];
        puVar4[3] = uVar5;
        iVar6 = param_3;
      }
    }
  }
  else {
    FUN_1801a70c0(0x20,0x75,0x7e,"crypto\\bio\\bss_mem.c",0xe4,0x18018e1a8);
  }
  return iVar6;
}



// ===== FUN_18018e290 @ 18018e290 (size 185)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_18018e290(longlong param_1,void *param_2,ulonglong param_3)

{
  uint uVar1;
  size_t _Size;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  puVar3 = (ulonglong *)(*(undefined8 **)(param_1 + 0x38))[1];
  if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
    puVar3 = (ulonglong *)**(undefined8 **)(param_1 + 0x38);
  }
  FUN_18018cf60(param_1,0xf);
  if (((int)param_3 < 0) || (uVar2 = *puVar3, (ulonglong)(longlong)(int)param_3 <= uVar2)) {
    uVar2 = param_3 & 0xffffffff;
  }
  if ((param_2 == (void *)0x0) || ((int)uVar2 < 1)) {
    if (*puVar3 == 0) {
      uVar1 = *(uint *)(param_1 + 0x30);
      if (uVar1 != 0) {
        FUN_18018dc60(param_1,9);
      }
      return (ulonglong)uVar1;
    }
  }
  else {
    _Size = (size_t)(int)uVar2;
    memcpy(param_2,(void *)puVar3[1],_Size);
    *puVar3 = *puVar3 - _Size;
    puVar3[2] = puVar3[2] - _Size;
    puVar3[1] = puVar3[1] + _Size;
  }
  return uVar2 & 0xffffffff;
}



// ===== FUN_18018e350 @ 18018e350 (size 252)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_18018e350(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  cVar1 = *param_2;
  pcVar7 = param_2;
  for (uVar9 = 0; (cVar1 != '\0' && (uVar9 < 0x80000000)); uVar9 = uVar9 + 1) {
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
  uVar9 = uVar9 & 0x7fffffff;
  uVar10 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x28) & 0x200) == 0) {
    FUN_18018cf60(param_1,0xf);
    if (uVar9 == 0) {
      return 0;
    }
    iVar2 = *(int *)plVar3[1];
    FUN_18018e9b0(param_1);
    lVar8 = FUN_1801aea60(*plVar3,(longlong)(int)(iVar2 + uVar9));
    if (lVar8 != 0) {
      memcpy((void *)((longlong)iVar2 + *(longlong *)(*plVar3 + 8)),param_2,(ulonglong)uVar9);
      puVar4 = (undefined8 *)*plVar3;
      puVar5 = (undefined8 *)plVar3[1];
      uVar6 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar6;
      uVar6 = puVar4[3];
      puVar5[2] = puVar4[2];
      puVar5[3] = uVar6;
      uVar10 = uVar9;
    }
  }
  else {
    FUN_1801a70c0(0x20,0x75,0x7e,"crypto\\bio\\bss_mem.c",0xe4,0x18018e368);
  }
  return uVar10;
}



// ===== FUN_18018e450 @ 18018e450 (size 286)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_18018e450(longlong param_1,undefined1 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  size_t _Size;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  piVar4 = (int *)(*(undefined8 **)(param_1 + 0x38))[1];
  if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
    piVar4 = (int *)**(undefined8 **)(param_1 + 0x38);
  }
  FUN_18018cf60(param_1,0xf);
  iVar2 = param_3 + -1;
  if (*piVar4 <= param_3 + -1) {
    iVar2 = *piVar4;
  }
  if (iVar2 < 1) {
    *param_2 = 0;
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    if (0 < iVar2) {
      lVar1 = 0;
      do {
        uVar3 = uVar3 + 1;
        if (*(char *)(lVar1 + *(longlong *)(piVar4 + 2)) == '\n') break;
        lVar1 = lVar1 + 1;
      } while (lVar1 < iVar2);
    }
    puVar5 = (ulonglong *)(*(undefined8 **)(param_1 + 0x38))[1];
    if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
      puVar5 = (ulonglong *)**(undefined8 **)(param_1 + 0x38);
    }
    FUN_18018cf60(param_1,0xf);
    if (((int)uVar3 < 0) || (uVar6 = *puVar5, (ulonglong)(longlong)(int)uVar3 <= uVar6)) {
      uVar6 = (ulonglong)uVar3;
    }
    iVar2 = (int)uVar6;
    if ((param_2 == (undefined1 *)0x0) || (iVar2 < 1)) {
      if ((*puVar5 == 0) && (iVar2 = *(int *)(param_1 + 0x30), iVar2 != 0)) {
        FUN_18018dc60(param_1,9);
      }
    }
    else {
      _Size = (size_t)iVar2;
      memcpy(param_2,(void *)puVar5[1],_Size);
      *puVar5 = *puVar5 - _Size;
      puVar5[2] = puVar5[2] - _Size;
      puVar5[1] = puVar5[1] + _Size;
    }
    if (0 < iVar2) {
      param_2[iVar2] = 0;
    }
  }
  return iVar2;
}



// ===== FUN_18018e570 @ 18018e570 (size 351)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_18018e570(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint *puVar9;
  
  uVar6 = 1;
  plVar1 = *(longlong **)(param_1 + 0x38);
  uVar8 = *(uint *)(param_1 + 0x28) & 0x200;
  if (uVar8 == 0) {
    puVar9 = (uint *)plVar1[1];
  }
  else {
    puVar9 = (uint *)*plVar1;
  }
  switch(param_2) {
  case 1:
    puVar7 = (undefined8 *)*plVar1;
    if ((void *)puVar7[1] != (void *)0x0) {
      if (uVar8 == 0) {
        if ((*(uint *)(param_1 + 0x28) >> 10 & 1) == 0) {
          memset((void *)puVar7[1],0,puVar7[2]);
          *puVar7 = 0;
          puVar7 = (undefined8 *)*plVar1;
        }
        puVar2 = (undefined8 *)plVar1[1];
        uVar4 = puVar7[1];
        *puVar2 = *puVar7;
        puVar2[1] = uVar4;
        uVar4 = puVar7[3];
        puVar2[2] = puVar7[2];
        puVar2[3] = uVar4;
      }
      else {
        puVar2 = (undefined8 *)plVar1[1];
        uVar4 = puVar2[1];
        *puVar7 = *puVar2;
        puVar7[1] = uVar4;
        uVar4 = puVar2[3];
        puVar7[2] = puVar2[2];
        puVar7[3] = uVar4;
      }
    }
    break;
  case 2:
    uVar6 = (uint)(*(longlong *)puVar9 == 0);
    break;
  case 3:
    uVar6 = *puVar9;
    if (param_4 != (longlong *)0x0) {
      *param_4 = *(longlong *)(puVar9 + 2);
    }
    break;
  default:
    uVar6 = 0;
    break;
  case 8:
    uVar6 = *(uint *)(param_1 + 0x24);
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x24) = param_3;
    break;
  case 10:
    uVar6 = *puVar9;
    break;
  case 0xb:
  case 0xc:
    break;
  case 0x72:
    FUN_18018e950(param_1);
    *(undefined4 *)(param_1 + 0x24) = param_3;
    plVar3 = (longlong *)plVar1[1];
    *plVar1 = (longlong)param_4;
    lVar5 = param_4[1];
    *plVar3 = *param_4;
    plVar3[1] = lVar5;
    lVar5 = param_4[3];
    plVar3[2] = param_4[2];
    plVar3[3] = lVar5;
    break;
  case 0x73:
    if (param_4 != (longlong *)0x0) {
      if (uVar8 == 0) {
        FUN_18018e9b0(param_1);
      }
      *param_4 = *plVar1;
    }
    break;
  case 0x82:
    *(undefined4 *)(param_1 + 0x30) = param_3;
  }
  return uVar6;
}



// ===== FUN_18018e7d0 @ 18018e7d0 (size 137)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018e7d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar1 != (longlong *)0x0)) {
    lVar2 = *plVar1;
    if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    FUN_1801ae8b0(lVar2);
  }
  FUN_180195e10(plVar1[1],"crypto\\bio\\bss_mem.c",0x9c);
  FUN_180195e10(plVar1,"crypto\\bio\\bss_mem.c",0x9d);
  return 1;
}



// ===== FUN_18018e860 @ 18018e860 (size 206)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18018e860(char *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  
  if (param_1 == (char *)0x0) {
    FUN_1801a70c0(0x20,0x7e,0x73,"crypto\\bio\\bss_mem.c",0x5e,0x18018e86c);
    return 0;
  }
  if (param_2 < 0) {
    cVar1 = *param_1;
    pcVar9 = param_1;
    for (uVar7 = 0; (cVar1 != '\0' && (uVar7 < 0x80000000)); uVar7 = uVar7 + 1) {
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
    uVar10 = (ulonglong)(uVar7 & 0x7fffffff);
  }
  else {
    uVar10 = (ulonglong)param_2;
  }
  lVar8 = FUN_18018d7c0(&DAT_180309bf0);
  if (lVar8 == 0) {
    return 0;
  }
  plVar2 = *(longlong **)(lVar8 + 0x38);
  puVar3 = (ulonglong *)*plVar2;
  *puVar3 = uVar10;
  puVar3[2] = uVar10;
  puVar3[1] = (ulonglong)param_1;
  puVar4 = (undefined8 *)*plVar2;
  puVar5 = (undefined8 *)plVar2[1];
  uVar6 = puVar4[1];
  *puVar5 = *puVar4;
  puVar5[1] = uVar6;
  uVar6 = puVar4[3];
  puVar5[2] = puVar4[2];
  puVar5[3] = uVar6;
  *(uint *)(lVar8 + 0x28) = *(uint *)(lVar8 + 0x28) | 0x200;
  *(undefined4 *)(lVar8 + 0x30) = 0;
  return lVar8;
}



// ===== FUN_18018e950 @ 18018e950 (size 84)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018e950(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) {
    lVar1 = **(longlong **)(param_1 + 0x38);
    if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    FUN_1801ae8b0(lVar1);
  }
  return 1;
}



// ===== FUN_18018e9b0 @ 18018e9b0 (size 113)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018e9b0(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    _Src = (void *)((size_t *)plVar1[1])[1];
    if (_Src != *(void **)(*plVar1 + 8)) {
      memmove(*(void **)(*plVar1 + 8),_Src,*(size_t *)plVar1[1]);
      *(undefined8 *)*plVar1 = *(undefined8 *)plVar1[1];
      *(undefined8 *)(plVar1[1] + 8) = *(undefined8 *)(*plVar1 + 8);
    }
  }
  return 0;
}



// ===== FUN_18018ea30 @ 18018ea30 (size 239)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018ea30(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  plVar3 = (longlong *)FUN_180196100(0x10,"crypto\\bio\\bss_mem.c",0x73);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_1801aec20(param_2);
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)FUN_180196100(0x20,"crypto\\bio\\bss_mem.c");
      puVar1 = (undefined8 *)*plVar3;
      plVar3[1] = (longlong)puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        FUN_1801ae8b0();
        FUN_180195e10(plVar3,"crypto\\bio\\bss_mem.c",0x7d);
        return 0;
      }
      uVar2 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      uVar2 = puVar1[3];
      puVar5[2] = puVar1[2];
      puVar5[3] = uVar2;
      *(longlong **)(param_1 + 0x38) = plVar3;
      *(undefined4 *)(param_1 + 0x24) = 1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return 1;
    }
    FUN_180195e10(plVar3,"crypto\\bio\\bss_mem.c",0x78);
  }
  return 0;
}



// ===== FUN_18018eb20 @ 18018eb20 (size 378)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018eb20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x18018eb30;
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    uVar4 = 0x2b0;
    uVar3 = 0x6f;
LAB_18018ec77:
    FUN_1801a70c0(6,0xa3,uVar3,"crypto\\evp\\evp_enc.c",uVar4,uVar5);
    return 0;
  }
  if (param_2[1] != 0) {
    iVar2 = FUN_1801ac0a0();
    if (iVar2 == 0) {
      uVar4 = 0x2b6;
      uVar3 = 0x26;
      goto LAB_18018ec77;
    }
  }
  FUN_18018ee30(param_1);
  lVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar1;
  lVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar1;
  lVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar1;
  lVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar1;
  lVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar1;
  lVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = lVar1;
  lVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar1;
  lVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = lVar1;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
  lVar1 = param_2[0x11];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x94);
  lVar1 = param_2[0x13];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(int *)(param_1 + 0x13) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  if ((param_2[0xe] != 0) && (*(int *)(*param_2 + 0x30) != 0)) {
    _Dst = (void *)FUN_180195dc0((longlong)*(int *)(*param_2 + 0x30),"crypto\\evp\\evp_enc.c",0x2bf)
    ;
    param_1[0xe] = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
      *param_1 = 0;
      uVar3 = 0x41;
      uVar4 = 0x2c2;
      goto LAB_18018ec77;
    }
    memcpy(_Dst,(void *)param_2[0xe],(longlong)*(int *)(*param_2 + 0x30));
  }
  if ((*(uint *)(*param_2 + 0x10) & 0x400) != 0) {
    iVar2 = (**(code **)(*param_2 + 0x48))(param_2,8,0,param_1);
    if (iVar2 == 0) {
      *param_1 = 0;
      uVar3 = 0x86;
      uVar4 = 0x2cb;
      goto LAB_18018ec77;
    }
  }
  return 1;
}



// ===== FUN_18018eca0 @ 18018eca0 (size 110)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018eca0(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    uVar3 = 0x292;
    uVar2 = 0x83;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x48);
    if (pcVar1 == (code *)0x0) {
      uVar3 = 0x297;
      uVar2 = 0x84;
    }
    else {
      uVar2 = (*pcVar1)();
      if ((int)uVar2 != -1) {
        return uVar2;
      }
      uVar3 = 0x29e;
      uVar2 = 0x85;
    }
  }
  FUN_1801a70c0(6,0x7c,uVar2,"crypto\\evp\\evp_enc.c",uVar3);
  return 0;
}



// ===== FUN_18018ed80 @ 18018ed80 (size 162)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_18018ed80(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  lVar1 = *param_1;
  if ((*(uint *)(lVar1 + 0x10) & 0x200) == 0) {
    iVar3 = FUN_1801940a0(param_2,(int)param_1[0xd]);
    return (uint)(0 < iVar3);
  }
  if (lVar1 == 0) {
    uVar5 = 0x292;
    uVar4 = 0x83;
  }
  else if (*(code **)(lVar1 + 0x48) == (code *)0x0) {
    uVar5 = 0x297;
    uVar4 = 0x84;
  }
  else {
    uVar2 = (**(code **)(lVar1 + 0x48))(param_1,6,0,param_2);
    if (uVar2 != 0xffffffff) {
      return uVar2;
    }
    uVar5 = 0x29e;
    uVar4 = 0x85;
  }
  FUN_1801a70c0(6,0x7c,uVar4,"crypto\\evp\\evp_enc.c",uVar5);
  return 0;
}



// ===== FUN_18018ee30 @ 18018ee30 (size 135)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018ee30(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x28);
      if (pcVar1 != (code *)0x0) {
        uVar2 = (*pcVar1)();
        if ((int)uVar2 == 0) {
          return uVar2;
        }
      }
      if ((param_1[0xe] != 0) && (*(int *)(*param_1 + 0x30) != 0)) {
        FUN_180001240();
      }
    }
    FUN_180195e10(param_1[0xe],"crypto\\evp\\evp_enc.c",0x21);
    FUN_1801abfb0(param_1[1]);
    memset(param_1,0,0xa0);
  }
  return 1;
}



// ===== FUN_18018eec0 @ 18018eec0 (size 184)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018eec0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  if ((char)*(uint *)(lVar1 + 0x10) < '\0') {
    if (lVar1 == 0) {
      uVar4 = 0x292;
      uVar2 = 0x7c;
      uVar3 = 0x83;
    }
    else if (*(code **)(lVar1 + 0x48) == (code *)0x0) {
      uVar4 = 0x297;
      uVar2 = 0x7c;
      uVar3 = 0x84;
    }
    else {
      uVar3 = (**(code **)(lVar1 + 0x48))(param_1,1,param_2);
      if ((int)uVar3 != -1) {
        return uVar3;
      }
      uVar4 = 0x29e;
      uVar2 = 0x7c;
      uVar3 = 0x85;
    }
  }
  else {
    if ((int)param_1[0xd] == param_2) {
      return 1;
    }
    if ((0 < param_2) && ((*(uint *)(lVar1 + 0x10) & 8) != 0)) {
      *(int *)(param_1 + 0xd) = param_2;
      return 1;
    }
    uVar2 = 0x7a;
    uVar4 = 0x280;
    uVar3 = 0x82;
  }
  FUN_1801a70c0(6,uVar2,uVar3,"crypto\\evp\\evp_enc.c",uVar4);
  return 0;
}



// ===== FUN_18018efd0 @ 18018efd0 (size 820)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18018efd0(longlong *param_1,int *param_2,longlong param_3,longlong param_4,longlong *param_5,
             int param_6)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong *_Src;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x18018efef;
  if (param_6 == -1) {
    uVar8 = *(uint *)(param_1 + 2);
  }
  else {
    uVar8 = (uint)(param_6 != 0);
    *(uint *)(param_1 + 2) = uVar8;
  }
  if (((param_1[1] == 0) || (piVar6 = (int *)*param_1, piVar6 == (int *)0x0)) ||
     ((param_2 != (int *)0x0 && (*param_2 != *piVar6)))) {
    piVar6 = (int *)*param_1;
    if (param_2 != (int *)0x0) {
      if (((piVar6 != (int *)0x0) || (param_1[1] != 0)) || (param_1[0xe] != 0)) {
        uVar7 = *(undefined4 *)((longlong)param_1 + 0x6c);
        FUN_18018ee30(param_1);
        *(uint *)(param_1 + 2) = uVar8;
        *(undefined4 *)((longlong)param_1 + 0x6c) = uVar7;
      }
      if (param_3 == 0) {
        param_3 = FUN_1801afef0(*param_2);
LAB_18018f0bb:
        if (param_3 == 0) {
          param_3 = 0;
        }
        else {
          param_2 = (int *)FUN_1801afe90(param_3,*param_2);
          if (param_2 == (int *)0x0) {
            FUN_1801abfb0(param_3);
            uVar9 = 0x71;
            goto LAB_18018f090;
          }
        }
        param_1[1] = param_3;
        *param_1 = (longlong)param_2;
        if (param_2[0xc] == 0) {
          param_1[0xe] = 0;
          piVar6 = param_2;
        }
        else {
          lVar3 = FUN_180196100((longlong)param_2[0xc],"crypto\\evp\\evp_enc.c",0x81);
          param_1[0xe] = lVar3;
          if (lVar3 == 0) {
            *param_1 = 0;
            uVar7 = 0x41;
            uVar9 = 0x84;
            goto LAB_18018f096;
          }
          piVar6 = (int *)*param_1;
        }
        iVar1 = param_2[2];
        *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 1;
        *(int *)(param_1 + 0xd) = iVar1;
        if (((*(byte *)(piVar6 + 4) & 0x40) == 0) ||
           (iVar1 = FUN_18018eca0(param_1,0,0,0), iVar1 != 0)) {
          piVar6 = (int *)*param_1;
          goto LAB_18018f16b;
        }
        *param_1 = 0;
        uVar9 = 0x90;
      }
      else {
        iVar1 = FUN_1801ac0a0(param_3);
        if (iVar1 != 0) goto LAB_18018f0bb;
        uVar9 = 0x66;
      }
LAB_18018f090:
      uVar7 = 0x86;
      goto LAB_18018f096;
    }
    if (piVar6 == (int *)0x0) {
      uVar9 = 0x95;
      uVar7 = 0x83;
      goto LAB_18018f096;
    }
  }
LAB_18018f16b:
  if ((0x10 < (uint)piVar6[1]) || ((0x10102U >> (piVar6[1] & 0x1fU) & 1) == 0)) {
    FUN_1801aeef0("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                  ,"crypto\\evp\\evp_enc.c",0x9e);
  }
  if ((*(byte *)((longlong)param_1 + 0x6c) & 1) == 0) {
    uVar4 = FUN_18008d530(param_1);
    uVar2 = FUN_1801a37a0(uVar4);
    if ((uVar2 & 0xf0007) == 0x10002) {
      uVar9 = 0xa2;
      uVar7 = 0xaa;
LAB_18018f096:
      FUN_1801a70c0(6,0x7b,uVar7,"crypto\\evp\\evp_enc.c",uVar9,uVar10);
      return 0;
    }
  }
  uVar10 = FUN_18008d530(param_1);
  uVar5 = FUN_1801a37a0(uVar10);
  if ((uVar5 & 0x10) == 0) {
    uVar10 = FUN_18008d530(param_1);
    uVar2 = FUN_1801a37a0(uVar10);
    switch(uVar2 & 0xf0007) {
    case 0:
    case 1:
      goto switchD_18018f22f_caseD_0;
    case 3:
    case 4:
      *(undefined4 *)(param_1 + 0xb) = 0;
    case 2:
      iVar1 = FUN_1801af560(param_1);
      if (0x10 < iVar1) {
        FUN_1801aeef0("assertion failed: EVP_CIPHER_CTX_iv_length(ctx) <= (int)sizeof(ctx->iv)",
                      "crypto\\evp\\evp_enc.c",0xb6);
      }
      if (param_5 != (longlong *)0x0) {
        iVar1 = FUN_1801af560(param_1);
        memcpy(param_1 + 3,param_5,(longlong)iVar1);
      }
      iVar1 = FUN_1801af560(param_1);
      _Src = param_1 + 3;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0xb) = 0;
      if (param_5 == (longlong *)0x0) goto switchD_18018f22f_caseD_0;
      iVar1 = FUN_1801af560(param_1);
      _Src = param_5;
      break;
    default:
      goto LAB_18018f2e5;
    }
    memcpy(param_1 + 5,_Src,(longlong)iVar1);
  }
switchD_18018f22f_caseD_0:
  if (((param_4 == 0) && ((*(byte *)(*param_1 + 0x10) & 0x20) == 0)) ||
     (iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_4,param_5,uVar8), iVar1 != 0)) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    *(int *)((longlong)param_1 + 0x7c) = *(int *)(*param_1 + 4) + -1;
    return 1;
  }
LAB_18018f2e5:
  return 0;
}



// ===== FUN_18018f370 @ 18018f370 (size 475)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018f370(longlong *param_1,undefined1 *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x18018f386;
  if ((int)param_1[2] != 0) {
    FUN_1801a70c0(6,0x65,0x94,"crypto\\evp\\evp_enc.c",0x23e,0x18018f386);
    return 0;
  }
  iVar2 = 0;
  *param_3 = 0;
  lVar3 = *param_1;
  if ((*(uint *)(lVar3 + 0x10) & 0x100000) != 0) {
    iVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2,0,0);
    if (iVar2 < 0) {
      return 0;
    }
    *param_3 = iVar2;
    return 1;
  }
  uVar4 = *(uint *)(lVar3 + 4);
  uVar6 = (ulonglong)uVar4;
  if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) == 0) {
    if (1 < uVar4) {
      if ((*(int *)((longlong)param_1 + 0x14) != 0) || ((int)param_1[0xf] == 0)) {
        FUN_1801a70c0(6,0x65,0x6d,"crypto\\evp\\evp_enc.c",0x259,0x18018f386);
        return 0;
      }
      if (0x20 < uVar4) {
        FUN_1801aeef0("assertion failed: b <= sizeof(ctx->final)","crypto\\evp\\evp_enc.c",0x25c);
      }
      bVar1 = *(byte *)((ulonglong)(uVar4 - 1) + 0x80 + (longlong)param_1);
      if ((bVar1 == 0) || ((int)uVar4 < (int)(uint)bVar1)) {
        uVar8 = 0x264;
LAB_18018f509:
        uVar7 = 100;
        goto LAB_18018f50f;
      }
      uVar4 = (uint)bVar1;
      if (bVar1 != 0) {
        do {
          uVar6 = (ulonglong)((int)uVar6 - 1);
          if (*(byte *)(uVar6 + 0x80 + (longlong)param_1) != uVar4) {
            uVar8 = 0x269;
            goto LAB_18018f509;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)uVar4);
      }
      iVar2 = *(int *)(*param_1 + 4) - uVar4;
      lVar3 = (longlong)iVar2;
      if (0 < iVar2) {
        puVar5 = param_2;
        do {
          *puVar5 = puVar5[(longlong)param_1 + (0x80 - (longlong)param_2)];
          puVar5 = puVar5 + 1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
    *param_3 = iVar2;
  }
  else if (*(int *)((longlong)param_1 + 0x14) != 0) {
    uVar8 = 0x251;
    uVar7 = 0x8a;
LAB_18018f50f:
    FUN_1801a70c0(6,0x65,uVar7,"crypto\\evp\\evp_enc.c",uVar8,uVar9);
    return 0;
  }
  return 1;
}



// ===== FUN_18018f580 @ 18018f580 (size 714)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_18018f580(longlong *param_1,void *param_2,int *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong _Size;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x18018f598;
  uVar6 = (ulonglong)(int)param_5;
  if ((int)param_1[2] != 0) {
    FUN_1801a70c0(6,0xa6,0x94,"crypto\\evp\\evp_enc.c",0x1da,0x18018f598);
    return 0;
  }
  uVar1 = *(uint *)(*param_1 + 4);
  _Size = (ulonglong)uVar1;
  iVar3 = FUN_1801af600(param_1,0x2000);
  uVar5 = uVar6;
  if (iVar3 != 0) {
    uVar5 = uVar6 + 7 >> 3;
  }
  if (((int)param_5 < 0) ||
     ((param_5 == 0 && (uVar4 = FUN_1801a37a0(*param_1), (uVar4 & 0xf0007) != 7)))) {
    *param_3 = 0;
    return (ulonglong)(param_5 == 0);
  }
  if ((*(uint *)(*param_1 + 0x10) & 0x100000) == 0) {
    if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) != 0) {
      uVar6 = FUN_18018fa40(param_1,param_2,param_3,param_4,param_5);
      return uVar6;
    }
    if (0x20 < uVar1) {
      FUN_1801aeef0("assertion failed: b <= sizeof(ctx->final)","crypto\\evp\\evp_enc.c",0x200);
    }
    if ((int)param_1[0xf] == 0) {
      bVar2 = false;
    }
    else {
      if ((param_2 == param_4) ||
         (uVar1 != 0 &&
          (param_2 != param_4 &&
          (-_Size < (ulonglong)((longlong)param_2 - (longlong)param_4) ||
          (ulonglong)((longlong)param_2 - (longlong)param_4) < _Size)))) {
        uVar7 = 0x206;
        goto LAB_18018f79c;
      }
      if (0x7fffffff - uVar1 < (-uVar1 & param_5)) {
        FUN_1801a70c0(6,0xa6,0xb8,"crypto\\evp\\evp_enc.c",0x213,uVar8);
        return 0;
      }
      memcpy(param_2,param_1 + 0x10,_Size);
      param_2 = (void *)((longlong)param_2 + _Size);
      bVar2 = true;
    }
    iVar3 = FUN_18018fa40(param_1,param_2,param_3,param_4,param_5);
    if (iVar3 != 0) {
      if ((uVar1 < 2) || (*(int *)((longlong)param_1 + 0x14) != 0)) {
        *(undefined4 *)(param_1 + 0xf) = 0;
      }
      else {
        *param_3 = *param_3 - uVar1;
        *(undefined4 *)(param_1 + 0xf) = 1;
        memcpy(param_1 + 0x10,(void *)((longlong)*param_3 + (longlong)param_2),_Size);
      }
      if (bVar2) {
        *param_3 = *param_3 + uVar1;
      }
      return 1;
    }
  }
  else {
    if ((uVar1 != 1) ||
       (uVar5 == 0 ||
        (param_2 == param_4 ||
        (ulonglong)((longlong)param_2 - (longlong)param_4) <= -uVar5 &&
        uVar5 <= (ulonglong)((longlong)param_2 - (longlong)param_4)))) {
      iVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,uVar6);
      if (iVar3 < 0) {
        *param_3 = 0;
        return 0;
      }
      *param_3 = iVar3;
      return 1;
    }
    uVar7 = 0x1f0;
LAB_18018f79c:
    FUN_1801a70c0(6,0xa6,0xa2,"crypto\\evp\\evp_enc.c",uVar7,uVar8);
  }
  return 0;
}



// ===== FUN_18018f870 @ 18018f870 (size 329)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018f870(longlong *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0x18018f886;
  if ((int)param_1[2] == 0) {
    FUN_1801a70c0(6,0x7f,0x94,"crypto\\evp\\evp_enc.c",0x1a8,0x18018f886);
    return 0;
  }
  lVar3 = *param_1;
  if ((*(uint *)(lVar3 + 0x10) & 0x100000) != 0) {
    uVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2,0,0);
    if ((int)uVar2 < 0) {
      return 0;
    }
    *param_3 = uVar2;
    return 1;
  }
  uVar2 = *(uint *)(lVar3 + 4);
  if (0x20 < uVar2) {
    FUN_1801aeef0("assertion failed: b <= sizeof(ctx->buf)","crypto\\evp\\evp_enc.c",0x1b6);
  }
  if (uVar2 != 1) {
    uVar1 = *(uint *)((longlong)param_1 + 0x14);
    if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) == 0) {
      if (uVar1 < uVar2) {
        puVar4 = (undefined1 *)((longlong)param_1 + (ulonglong)uVar1 + 0x38);
        for (lVar3 = (longlong)(int)(uVar2 - uVar1); lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = (char)(uVar2 - uVar1);
          puVar4 = puVar4 + 1;
        }
      }
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,uVar2);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      *param_3 = uVar2;
      return uVar5;
    }
    if (uVar1 != 0) {
      FUN_1801a70c0(6,0x7f,0x8a,"crypto\\evp\\evp_enc.c",0x1bf,uVar5);
      return 0;
    }
  }
  *param_3 = 0;
  return 1;
}



// ===== FUN_18018f9f0 @ 18018f9f0 (size 65)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18018f9f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1801a70c0(6,0xa7,0x94,"crypto\\evp\\evp_enc.c",0x193);
    return 0;
  }
  uVar1 = FUN_18018fa40();
  return uVar1;
}



// ===== FUN_18018fa40 @ 18018fa40 (size 717)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

bool FUN_18018fa40(longlong *param_1,void *param_2,uint *param_3,void *param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  size_t _Size;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x18018fa5d;
  _Size = (size_t)(int)param_5;
  iVar2 = FUN_1801af600(param_1,0x2000);
  sVar6 = _Size;
  if (iVar2 != 0) {
    sVar6 = _Size + 7 >> 3;
  }
  uVar4 = *(uint *)(*param_1 + 4);
  if (((int)param_5 < 0) || ((param_5 == 0 && (uVar3 = FUN_1801a37a0(), (uVar3 & 0xf0007) != 7)))) {
    *param_3 = 0;
    return param_5 == 0;
  }
  lVar1 = *param_1;
  if ((*(uint *)(lVar1 + 0x10) & 0x100000) == 0) {
    iVar2 = *(int *)((longlong)param_1 + 0x14);
    uVar3 = 0;
    uVar8 = ((longlong)iVar2 - (longlong)param_4) + (longlong)param_2;
    if (sVar6 == 0 || (uVar8 == 0 || uVar8 <= -sVar6 && sVar6 <= uVar8)) {
      if ((iVar2 == 0) && ((*(uint *)((longlong)param_1 + 0x7c) & param_5) == 0)) {
        iVar2 = (**(code **)(lVar1 + 0x20))(param_1,param_2,param_4,_Size);
        if (iVar2 == 0) {
          *param_3 = 0;
          return false;
        }
        *param_3 = param_5;
        return true;
      }
      if (0x20 < (int)uVar4) {
        FUN_1801aeef0("assertion failed: bl <= (int)sizeof(ctx->buf)","crypto\\evp\\evp_enc.c",0x15f
                     );
      }
      if (iVar2 == 0) {
LAB_18018fc9c:
        uVar4 = uVar4 - 1 & param_5;
        *param_3 = uVar3;
        iVar2 = param_5 - uVar4;
        if (0 < iVar2) {
          iVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,(longlong)iVar2);
          if (iVar5 == 0) {
            return false;
          }
          *param_3 = *param_3 + iVar2;
        }
        if (uVar4 != 0) {
          memcpy(param_1 + 7,(void *)((longlong)iVar2 + (longlong)param_4),(longlong)(int)uVar4);
        }
        *(uint *)((longlong)param_1 + 0x14) = uVar4;
        return true;
      }
      iVar5 = uVar4 - iVar2;
      if ((int)param_5 < iVar5) {
        memcpy((void *)((longlong)param_1 + (longlong)iVar2 + 0x38),param_4,_Size);
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + param_5;
        *param_3 = 0;
        return true;
      }
      param_5 = param_5 - iVar5;
      if ((int)(~(uVar4 - 1) & param_5) <= (int)(0x7fffffff - uVar4)) {
        memcpy((void *)((longlong)param_1 + (longlong)iVar2 + 0x38),param_4,(longlong)iVar5);
        param_4 = (void *)((longlong)param_4 + (longlong)iVar5);
        iVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,(longlong)(int)uVar4);
        if (iVar2 == 0) {
          return false;
        }
        param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar4);
        uVar3 = uVar4;
        goto LAB_18018fc9c;
      }
      uVar9 = 0x172;
      uVar7 = 0xb8;
      goto LAB_18018fb0d;
    }
    uVar9 = 0x151;
  }
  else {
    if ((uVar4 != 1) ||
       (sVar6 == 0 ||
        (param_2 == param_4 ||
        (ulonglong)((longlong)param_2 - (longlong)param_4) <= -sVar6 &&
        sVar6 <= (ulonglong)((longlong)param_2 - (longlong)param_4)))) {
      uVar4 = (**(code **)(lVar1 + 0x20))(param_1,param_2,param_4,_Size);
      if ((int)uVar4 < 0) {
        return false;
      }
      *param_3 = uVar4;
      return true;
    }
    uVar9 = 0x144;
  }
  uVar7 = 0xa2;
LAB_18018fb0d:
  FUN_1801a70c0(6,0xdb,uVar7,"crypto\\evp\\evp_enc.c",uVar9,uVar10);
  return false;
}



// ===== FUN_18018fd50 @ 18018fd50 (size 1127)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_18018fd50(undefined8 param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar6 = 0;
  piVar4 = (int *)FUN_18018d300();
  lVar5 = FUN_18018d920(param_1);
  if ((piVar4 != (int *)0x0) && (lVar5 != 0)) {
    FUN_18018cf60(param_1,0xf);
    if (piVar4[4] != 1) {
      piVar4[4] = 1;
      piVar4[0] = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      FUN_1801b03d0(*(undefined8 *)(piVar4 + 8));
    }
    if (0x5dd < piVar4[1]) {
      FUN_1801aeef0("assertion failed: ctx->buf_off < (int)sizeof(ctx->buf)",
                    "crypto\\evp\\bio_b64.c",0x15f);
    }
    iVar7 = *piVar4;
    if (0x5de < iVar7) {
      FUN_1801aeef0("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                    "crypto\\evp\\bio_b64.c",0x160);
      iVar7 = *piVar4;
    }
    iVar2 = piVar4[1];
    if (iVar7 < iVar2) {
      FUN_1801aeef0("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x161)
      ;
      iVar2 = piVar4[1];
      iVar7 = *piVar4;
    }
    for (iVar7 = iVar7 - iVar2; 0 < iVar7; iVar7 = iVar7 - iVar2) {
      iVar2 = FUN_18018dce0(lVar5,(longlong)piVar4[1] + 0x28 + (longlong)piVar4,iVar7);
      if (iVar2 < 1) {
        FUN_18018cf70(param_1);
        return iVar2;
      }
      if (iVar7 < iVar2) {
        FUN_1801aeef0("assertion failed: i <= n","crypto\\evp\\bio_b64.c",0x169);
      }
      piVar4[1] = piVar4[1] + iVar2;
      iVar1 = piVar4[1];
      if (0x5de < iVar1) {
        FUN_1801aeef0("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)",
                      "crypto\\evp\\bio_b64.c",0x16b);
        iVar1 = piVar4[1];
      }
      if (*piVar4 < iVar1) {
        FUN_1801aeef0("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",
                      0x16c);
      }
    }
    piVar4[0] = 0;
    piVar4[1] = 0;
    if ((param_2 != (void *)0x0) && (0 < param_3)) {
      do {
        iVar7 = param_3;
        if (0x400 < param_3) {
          iVar7 = 0x400;
        }
        uVar3 = FUN_18018dc90(param_1,0xffffffff);
        if ((uVar3 >> 8 & 1) == 0) {
          iVar2 = FUN_1801b03e0(*(undefined8 *)(piVar4 + 8),piVar4 + 10,piVar4,param_2,iVar7);
          if (iVar2 == 0) {
            if (iVar6 == 0) {
              return -1;
            }
            return iVar6;
          }
          iVar2 = *piVar4;
          if (0x5de < iVar2) {
            FUN_1801aeef0("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                          "crypto\\evp\\bio_b64.c",0x1a5);
            iVar2 = *piVar4;
          }
          if (iVar2 < piVar4[1]) {
            uVar8 = 0x1a6;
LAB_180190097:
            FUN_1801aeef0("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",
                          uVar8);
          }
LAB_1801900aa:
          iVar6 = iVar6 + iVar7;
        }
        else {
          iVar2 = piVar4[2];
          if (iVar2 < 1) {
            if (iVar7 < 3) {
              memcpy((void *)((longlong)piVar4 + 0x606),param_2,(longlong)iVar7);
              piVar4[2] = iVar7;
              return iVar6 + iVar7;
            }
            iVar7 = (iVar7 / 3) * 3;
            iVar2 = FUN_1801b0320(piVar4 + 10,param_2,iVar7);
            *piVar4 = iVar2;
            if (0x5de < iVar2) {
              FUN_1801aeef0("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                            "crypto\\evp\\bio_b64.c",0x19c);
              iVar2 = *piVar4;
            }
            if (iVar2 < piVar4[1]) {
              uVar8 = 0x19d;
              goto LAB_180190097;
            }
            goto LAB_1801900aa;
          }
          if (3 < iVar2) {
            FUN_1801aeef0("assertion failed: ctx->tmp_len <= 3","crypto\\evp\\bio_b64.c",0x17b);
            iVar2 = piVar4[2];
          }
          iVar7 = param_3;
          if (3 - iVar2 <= param_3) {
            iVar7 = 3 - iVar2;
          }
          memcpy((void *)((longlong)piVar4 + (longlong)iVar2 + 0x606),param_2,(longlong)iVar7);
          iVar2 = piVar4[2];
          iVar6 = iVar6 + iVar7;
          piVar4[2] = iVar2 + iVar7;
          if (iVar2 + iVar7 < 3) {
            return iVar6;
          }
          iVar2 = FUN_1801b0320(piVar4 + 10,(longlong)piVar4 + 0x606);
          *piVar4 = iVar2;
          if (0x5de < iVar2) {
            FUN_1801aeef0("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                          "crypto\\evp\\bio_b64.c",0x18a);
            iVar2 = *piVar4;
          }
          if (iVar2 < piVar4[1]) {
            FUN_1801aeef0("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",
                          0x18b);
          }
          piVar4[2] = 0;
        }
        param_3 = param_3 - iVar7;
        param_2 = (void *)((longlong)param_2 + (longlong)iVar7);
        piVar4[1] = 0;
        iVar7 = *piVar4;
        while (0 < iVar7) {
          iVar2 = FUN_18018dce0(lVar5,(longlong)piVar4[1] + 0x28 + (longlong)piVar4,iVar7);
          if (iVar2 < 1) {
            FUN_18018cf70(param_1);
            if (iVar6 == 0) {
              iVar6 = iVar2;
            }
            return iVar6;
          }
          if (iVar7 < iVar2) {
            FUN_1801aeef0("assertion failed: i <= n","crypto\\evp\\bio_b64.c",0x1b4);
          }
          piVar4[1] = piVar4[1] + iVar2;
          iVar7 = iVar7 - iVar2;
          iVar2 = piVar4[1];
          if (0x5de < iVar2) {
            FUN_1801aeef0("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)",
                          "crypto\\evp\\bio_b64.c",0x1b7);
            iVar2 = piVar4[1];
          }
          if (*piVar4 < iVar2) {
            FUN_1801aeef0("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",
                          0x1b8);
          }
        }
        piVar4[0] = 0;
        piVar4[1] = 0;
        if (param_3 < 1) {
          return iVar6;
        }
      } while( true );
    }
  }
  return 0;
}



// ===== FUN_1801901c0 @ 1801901c0 (size 1164)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1801901c0(undefined8 param_1,void *param_2,uint param_3)

{
  uint *_Src;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  void *local_res10;
  uint local_res20;
  int local_48 [2];
  longlong local_40;
  
  local_40 = 0x1801901df;
  uVar11 = 0;
  if (param_2 != (void *)0x0) {
    puVar5 = (uint *)FUN_18018d300();
    lVar6 = FUN_18018d920(param_1);
    if ((puVar5 != (uint *)0x0) && (lVar6 != 0)) {
      local_40 = lVar6;
      FUN_18018cf60(param_1,0xf);
      if (puVar5[4] != 2) {
        puVar5[4] = 2;
        puVar5[0] = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        FUN_1801b00b0(*(undefined8 *)(puVar5 + 8));
      }
      local_res10 = param_2;
      if (0 < (int)*puVar5) {
        uVar1 = puVar5[1];
        if ((int)*puVar5 < (int)uVar1) {
          FUN_1801aeef0("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",
                        0x89);
          uVar1 = puVar5[1];
        }
        uVar11 = *puVar5 - uVar1;
        if ((int)param_3 < (int)(*puVar5 - uVar1)) {
          uVar11 = param_3;
        }
        if (0x5dd < (int)(uVar1 + uVar11)) {
          FUN_1801aeef0("assertion failed: ctx->buf_off + i < (int)sizeof(ctx->buf)",
                        "crypto\\evp\\bio_b64.c",0x8d);
          uVar1 = puVar5[1];
        }
        memcpy(param_2,(void *)((longlong)puVar5 + (longlong)(int)uVar1 + 0x28),
               (longlong)(int)uVar11);
        puVar5[1] = puVar5[1] + uVar11;
        local_res10 = (void *)((longlong)param_2 + (longlong)(int)uVar11);
        param_3 = param_3 - uVar11;
        if (*puVar5 == puVar5[1]) {
          puVar5[0] = 0;
          puVar5[1] = 0;
        }
      }
      local_res20 = 0;
      uVar1 = 0;
      if (0 < (int)param_3) {
        do {
          uVar4 = 0;
          if ((int)puVar5[6] < 1) break;
          uVar1 = FUN_18018dc10(lVar6,(longlong)(int)puVar5[2] + 0x606 + (longlong)puVar5,
                                0x400 - puVar5[2]);
          uVar3 = uVar1;
          if ((int)uVar1 < 1) {
            iVar2 = FUN_18018dc90(lVar6,8);
            if (iVar2 != 0) goto LAB_1801904e9;
            puVar5[6] = uVar1;
            if (puVar5[2] == 0) goto LAB_1801904e9;
            uVar3 = uVar4;
            local_res20 = uVar1;
          }
          puVar5[2] = puVar5[2] + uVar3;
          uVar1 = puVar5[2];
          if (puVar5[5] == 0) {
LAB_180190524:
            if ((0x3ff < (int)uVar1) || ((int)puVar5[6] < 1)) {
LAB_180190532:
              uVar4 = FUN_18018dc90(param_1,0xffffffff);
              _Src = puVar5 + 10;
              if ((uVar4 >> 8 & 1) == 0) {
                uVar4 = FUN_1801b00c0(*(undefined8 *)(puVar5 + 8),_Src,puVar5,
                                      (longlong)puVar5 + 0x606,uVar1);
                puVar5[2] = 0;
              }
              else {
                uVar8 = uVar1 & 0xfffffffc;
                uVar3 = FUN_1801b0020(_Src,(longlong)puVar5 + 0x606,uVar8);
                uVar4 = uVar3;
                if (((2 < (int)uVar8) &&
                    (*(char *)((longlong)(int)uVar8 + 0x605 + (longlong)puVar5) == '=')) &&
                   (uVar4 = uVar3 - 1,
                   *(char *)((longlong)(int)uVar8 + 0x604 + (longlong)puVar5) == '=')) {
                  uVar4 = uVar3 - 2;
                }
                if (uVar8 != uVar1) {
                  memmove((void *)((longlong)puVar5 + 0x606),
                          (void *)((longlong)puVar5 + (longlong)(int)uVar8 + 0x606),
                          (longlong)(int)(uVar1 - uVar8));
                  puVar5[2] = uVar1 - uVar8;
                }
                uVar1 = 0;
                if (0 < (int)uVar4) {
                  uVar1 = uVar4;
                }
                *puVar5 = uVar1;
              }
              uVar1 = 0;
              puVar5[6] = uVar4;
              puVar5[1] = 0;
              if (-1 < (int)uVar4) {
                uVar1 = *puVar5;
                if ((int)param_3 < (int)*puVar5) {
                  uVar1 = param_3;
                }
                memcpy(local_res10,_Src,(longlong)(int)uVar1);
                uVar11 = uVar11 + uVar1;
                puVar5[1] = uVar1;
                if (uVar1 == *puVar5) {
                  puVar5[0] = 0;
                  puVar5[1] = 0;
                }
                param_3 = param_3 - uVar1;
                local_res10 = (void *)((longlong)local_res10 + (longlong)(int)uVar1);
                goto LAB_1801904cc;
              }
              *puVar5 = 0;
              goto LAB_1801904e9;
            }
          }
          else {
            uVar3 = FUN_18018dc90(param_1,0xffffffff);
            if ((uVar3 >> 8 & 1) != 0) {
              puVar5[2] = 0;
              goto LAB_180190532;
            }
            if (puVar5[5] == 0) goto LAB_180190524;
            local_48[0] = 0;
            pcVar12 = (char *)((longlong)puVar5 + 0x606);
            pcVar9 = pcVar12;
            pcVar10 = pcVar12;
            pcVar7 = pcVar12;
            if (0 < (int)uVar1) {
LAB_1801903b0:
              pcVar10 = pcVar7 + 1;
              if (*pcVar7 != '\n') goto LAB_180190403;
              if (puVar5[3] != 0) {
                puVar5[3] = 0;
LAB_180190400:
                pcVar9 = pcVar10;
                goto LAB_180190403;
              }
              iVar2 = FUN_1801b00c0(*(undefined8 *)(puVar5 + 8),puVar5 + 10,local_48,pcVar9,
                                    (int)pcVar10 - (int)pcVar9);
              if (((iVar2 < 1) && (local_48[0] == 0)) && (puVar5[5] != 0)) {
                FUN_1801b00b0(*(undefined8 *)(puVar5 + 8));
                goto LAB_180190400;
              }
              if (pcVar9 != pcVar12) {
                uVar1 = uVar1 + 0x606 + ((int)puVar5 - (int)pcVar9);
                lVar6 = (longlong)(int)uVar1;
                if (0 < (int)uVar1) {
                  pcVar7 = pcVar12;
                  do {
                    *pcVar7 = pcVar7[(longlong)(pcVar9 + (-0x606 - (longlong)puVar5))];
                    pcVar7 = pcVar7 + 1;
                    lVar6 = lVar6 + -1;
                  } while (lVar6 != 0);
                }
              }
              FUN_1801b00b0(*(undefined8 *)(puVar5 + 8));
              puVar5[5] = 0;
            }
LAB_180190455:
            if ((uVar4 != uVar1) || (local_48[0] != 0)) {
              puVar5[2] = 0;
              goto LAB_180190532;
            }
            if (pcVar9 == pcVar12) {
              lVar6 = local_40;
              if (uVar1 == 0x400) {
                puVar5[3] = 1;
                puVar5[2] = 0;
              }
              goto LAB_1801904d9;
            }
            if (pcVar9 != pcVar10) {
              uVar1 = (int)pcVar10 - (int)pcVar9;
              lVar6 = (longlong)(int)uVar1;
              if (0 < (int)uVar1) {
                do {
                  *pcVar12 = pcVar12[(longlong)(pcVar9 + (-0x606 - (longlong)puVar5))];
                  pcVar12 = pcVar12 + 1;
                  lVar6 = lVar6 + -1;
                } while (lVar6 != 0);
              }
              puVar5[2] = uVar1;
            }
LAB_1801904cc:
            lVar6 = local_40;
          }
LAB_1801904d9:
        } while (0 < (int)param_3);
        uVar1 = local_res20;
      }
LAB_1801904e9:
      FUN_18018cf70(param_1);
      if (uVar11 == 0) {
        uVar11 = uVar1;
      }
      return uVar11;
    }
  }
  return 0;
LAB_180190403:
  uVar4 = uVar4 + 1;
  pcVar7 = pcVar10;
  if ((int)uVar1 <= (int)uVar4) goto LAB_180190455;
  goto LAB_1801903b0;
}



// ===== FUN_180190680 @ 180190680 (size 531)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_180190680(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = 1;
  piVar4 = (int *)FUN_18018d300();
  lVar5 = FUN_18018d920(param_1);
  if ((piVar4 == (int *)0x0) || (lVar5 == 0)) {
    return 0;
  }
  switch(param_2) {
  case 1:
    piVar4[6] = 1;
    piVar4[5] = 1;
    piVar4[4] = 0;
    break;
  case 2:
    if (piVar4[6] < 1) {
      return 1;
    }
    break;
  case 10:
    iVar3 = *piVar4;
    iVar2 = piVar4[1];
    if (iVar3 < iVar2) {
      FUN_1801aeef0("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x1e3)
      ;
      iVar2 = piVar4[1];
      iVar3 = *piVar4;
    }
    uVar1 = iVar3 - iVar2;
LAB_1801907a0:
    if (0 < (int)uVar1) {
      return (ulonglong)uVar1;
    }
    break;
  case 0xb:
    while( true ) {
      while( true ) {
        if (*piVar4 != piVar4[1]) {
          do {
            uVar6 = FUN_18018fd50(param_1,0,0);
            if ((int)uVar6 < 0) {
              return uVar6;
            }
          } while (*piVar4 != piVar4[1]);
        }
        uVar1 = FUN_18018dc90(param_1,0xffffffff);
        if ((uVar1 >> 8 & 1) == 0) break;
        if (piVar4[2] == 0) goto switchD_1801906ff_caseD_3;
        iVar3 = FUN_1801b0320(piVar4 + 10);
        *piVar4 = iVar3;
        piVar4[1] = 0;
        piVar4[2] = 0;
      }
      if ((piVar4[4] == 0) || (iVar3 = FUN_18019a410(*(undefined8 *)(piVar4 + 8)), iVar3 == 0))
      break;
      piVar4[1] = 0;
      FUN_1801b0350(*(undefined8 *)(piVar4 + 8));
    }
    break;
  case 0xc:
    goto switchD_1801906ff_caseD_c;
  case 0xd:
    iVar3 = *piVar4;
    iVar2 = piVar4[1];
    if (iVar3 < iVar2) {
      FUN_1801aeef0("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x1da)
      ;
      iVar2 = piVar4[1];
      iVar3 = *piVar4;
    }
    uVar1 = iVar3 - iVar2;
    if (uVar1 != 0) goto LAB_1801907a0;
    if ((piVar4[4] != 0) && (iVar3 = FUN_18019a410(*(undefined8 *)(piVar4 + 8)), iVar3 != 0)) {
      return 1;
    }
    break;
  case 0x65:
    FUN_18018cf60(param_1,0xf);
    uVar1 = FUN_18018cf90(lVar5,param_2,param_3,param_4);
    FUN_18018cf70(param_1);
    return (ulonglong)uVar1;
  }
switchD_1801906ff_caseD_3:
  uVar1 = FUN_18018cf90(lVar5,param_2,param_3,param_4);
  uVar6 = (ulonglong)uVar1;
switchD_1801906ff_caseD_c:
  return uVar6;
}



// ===== FUN_180190920 @ 180190920 (size 196)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180190920(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x180190930;
  lVar1 = FUN_180196100(0xa08,"crypto\\evp\\bio_b64.c",0x49);
  if (lVar1 == 0) {
    FUN_1801a70c0(6,0xc6,0x41,"crypto\\evp\\bio_b64.c",0x4a,uVar3);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x18) = 1;
  *(undefined4 *)(lVar1 + 0x14) = 1;
  lVar2 = FUN_1801b02f0();
  *(longlong *)(lVar1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    FUN_180195e10(lVar1,"crypto\\evp\\bio_b64.c",0x52);
    return 0;
  }
  FUN_18018dc50(param_1,lVar1);
  FUN_18018dc70(param_1,1);
  return 1;
}



// ===== FUN_1801909f0 @ 1801909f0 (size 119)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801909f0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_18018d300();
    if (lVar1 != 0) {
      FUN_1801b02c0(*(undefined8 *)(lVar1 + 0x20));
      FUN_180195e10(lVar1,"crypto\\evp\\bio_b64.c",0x67);
      FUN_18018dc50(param_1,0);
      FUN_18018dc70(param_1,0);
      return 1;
    }
  }
  return 0;
}



// ===== FUN_180190a70 @ 180190a70 (size 68)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180190a70(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_18018d920();
  if (lVar1 == 0) {
    return;
  }
  FUN_18018ce00(lVar1,param_2,param_3);
  return;
}



// ===== FUN_180190ad0 @ 180190ad0 (size 295)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_180190ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar3 = FUN_180149710();
  uVar4 = FUN_18008d530(param_1);
  uVar1 = FUN_1801a37a0(uVar4);
  uVar1 = uVar1 & 0xf0007;
  if ((uVar1 - 1 < 2) && (param_4 == 0)) {
    iVar2 = FUN_1801af5c0(param_1);
    iVar2 = FUN_1800067b0(param_2,iVar2 << 3,lVar3);
    *(undefined1 **)(lVar3 + 0xf8) = &LAB_180002510;
    pcVar5 = (code *)0x0;
    if (uVar1 == 2) {
      pcVar5 = FUN_180005d70;
    }
  }
  else {
    iVar2 = FUN_1801af5c0(param_1);
    iVar2 = FUN_180006820(param_2,iVar2 << 3,lVar3);
    *(undefined1 **)(lVar3 + 0xf8) = &LAB_1800024c0;
    if (uVar1 == 2) {
      pcVar5 = FUN_180005d70;
    }
    else if (uVar1 == 5) {
      pcVar5 = FUN_180003500;
    }
    else {
      pcVar5 = (code *)0x0;
    }
  }
  *(code **)(lVar3 + 0x100) = pcVar5;
  if (-1 >= iVar2) {
    FUN_1801a70c0(6,0xa5,0x8f,"crypto\\evp\\e_aes.c",0x126);
  }
  return -1 < iVar2;
}



// ===== FUN_180190c00 @ 180190c00 (size 127)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_180190c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar1 = FUN_1801a37a0();
  uVar2 = FUN_1801af5b0(param_1);
  uVar3 = FUN_180149710(param_1);
  FUN_180005d70(param_3,param_2,param_4,uVar3,uVar2,CONCAT44(uVar4,uVar1));
  return 1;
}



// ===== FUN_180190c80 @ 180190c80 (size 131)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180190c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x180190c9b;
  iVar1 = FUN_1801af540();
  if ((ulonglong)(longlong)iVar1 <= param_4) {
    uVar2 = FUN_1801a37a0(param_1);
    uVar3 = FUN_180149710(param_1);
    FUN_180002c00(param_3,param_2,param_4,uVar3,uVar2,uVar4);
  }
  return 1;
}



// ===== FUN_180190d10 @ 180190d10 (size 163)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_180190d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x180190d30;
  lVar1 = FUN_180149710();
  local_18[0] = FUN_1801af5d0(param_1);
  uVar2 = FUN_1801af5b0(param_1);
  FUN_1801b2fd0(param_3,param_2,param_4,lVar1,uVar2,local_18,*(undefined8 *)(lVar1 + 0xf8));
  FUN_1801af5f0(param_1,local_18[0]);
  return 1;
}



// ===== FUN_180190dc0 @ 180190dc0 (size 176)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_180190dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x180190dde;
  lVar2 = FUN_180149710();
  local_28[0] = FUN_1801af5d0(param_1);
  uVar1 = FUN_1801a37a0(param_1);
  uVar3 = FUN_1801af5b0(param_1);
  FUN_1801b3310(param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0xf8));
  FUN_1801af5f0(param_1,local_28[0]);
  return 1;
}



// ===== FUN_180190e70 @ 180190e70 (size 176)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_180190e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x180190e8e;
  lVar2 = FUN_180149710();
  local_28[0] = FUN_1801af5d0(param_1);
  uVar1 = FUN_1801a37a0(param_1);
  uVar3 = FUN_1801af5b0(param_1);
  FUN_1801b3260(param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0xf8));
  FUN_1801af5f0(param_1,local_28[0]);
  return 1;
}



// ===== FUN_180190f20 @ 180190f20 (size 414)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180190f20(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_38 [2];
  undefined8 uStack_30;
  
  uStack_30 = 0x180190f37;
  lVar3 = FUN_180149710();
  iVar1 = FUN_1801af600(param_1,0x2000);
  if (iVar1 == 0) {
    if (0xfffffffffffffff < param_4) {
      uVar5 = param_4 >> 0x3c;
      param_4 = param_4 + uVar5 * -0x1000000000000000;
      do {
        local_38[0] = FUN_1801af5d0(param_1);
        uVar2 = FUN_1801a37a0(param_1);
        uVar4 = FUN_1801af5b0(param_1);
        FUN_1801b3140(param_3,param_2,0x8000000000000000,lVar3,uVar4,local_38,uVar2,
                      *(undefined8 *)(lVar3 + 0xf8));
        FUN_1801af5f0(param_1,local_38[0]);
        param_2 = param_2 + 0x1000000000000000;
        param_3 = param_3 + 0x1000000000000000;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_4 == 0) {
      return 1;
    }
    local_38[0] = FUN_1801af5d0(param_1);
    uVar2 = FUN_1801a37a0(param_1);
    uVar4 = FUN_1801af5b0(param_1);
    param_4 = param_4 * 8;
  }
  else {
    local_38[0] = FUN_1801af5d0(param_1);
    uVar2 = FUN_1801a37a0(param_1);
    uVar4 = FUN_1801af5b0(param_1);
  }
  FUN_1801b3140(param_3,param_2,param_4,lVar3,uVar4,local_38,uVar2,*(undefined8 *)(lVar3 + 0xf8));
  FUN_1801af5f0(param_1,local_38[0]);
  return 1;
}



// ===== FUN_1801910c0 @ 1801910c0 (size 234)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801910c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x1801910e4;
  local_28[0] = FUN_1801af5d0();
  lVar2 = FUN_180149710(param_1);
  lVar1 = *(longlong *)(lVar2 + 0x100);
  uVar3 = FUN_1801af550(param_1);
  uVar4 = FUN_1801af5b0(param_1);
  if (lVar1 == 0) {
    FUN_1801b2b50(param_3,param_2,param_4,lVar2,uVar4,uVar3,local_28,*(undefined8 *)(lVar2 + 0xf8));
  }
  else {
    FUN_1801b2cd0(param_3);
  }
  FUN_1801af5f0(param_1,local_28[0]);
  return 1;
}



// ===== FUN_1801911b0 @ 1801911b0 (size 290)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801911b0(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_180149710();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0xf8) == 0) {
      memcpy(*(void **)(lVar2 + 0x2b8),param_3,(longlong)*(int *)(lVar2 + 0x2c0));
    }
    else {
      FUN_1801b4a20(lVar2 + 0x100);
    }
    *(undefined4 *)(lVar2 + 0xfc) = 1;
    *(undefined4 *)(lVar2 + 0x2c8) = 0;
    return 1;
  }
  iVar1 = FUN_1801af5c0(param_1);
  FUN_180006820(param_2,iVar1 << 3,lVar2);
  FUN_1801b4920(lVar2 + 0x100,lVar2,&LAB_1800024c0);
  *(code **)(lVar2 + 0x2d0) = FUN_180003500;
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar2 + 0xfc) != 0 && (param_3 = *(void **)(lVar2 + 0x2b8), param_3 != (void *)0x0))
     )) {
    FUN_1801b4a20(lVar2 + 0x100,param_3,(longlong)*(int *)(lVar2 + 0x2c0));
    *(undefined4 *)(lVar2 + 0xfc) = 1;
  }
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  return 1;
}



// ===== FUN_1801912e0 @ 1801912e0 (size 744)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801912e0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  
  lVar6 = 0x1801912fe;
  lVar2 = FUN_180149710();
  if (*(int *)(lVar2 + 0xf8) != 0) {
    if (-1 < *(int *)(lVar2 + 0x2cc)) {
      uVar3 = FUN_180193cd0(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    if (*(int *)(lVar2 + 0xfc) != 0) {
      if (param_3 == 0) {
        if (*(int *)(param_1 + 0x10) != 0) {
          FUN_1801b4be0(lVar2 + 0x100,param_1 + 0x38,0x10);
          *(undefined4 *)(lVar2 + 0x2c4) = 0x10;
          *(undefined4 *)(lVar2 + 0xfc) = 0;
          return 0;
        }
        if ((-1 < *(int *)(lVar2 + 0x2c4)) &&
           (iVar1 = FUN_1801b47f0(lVar2 + 0x100,param_1 + 0x38,(longlong)*(int *)(lVar2 + 0x2c4)),
           iVar1 == 0)) {
          *(undefined4 *)(lVar2 + 0xfc) = 0;
          return 0;
        }
      }
      else {
        if (param_2 == 0) {
          iVar1 = FUN_1801b3980(lVar2 + 0x100,param_3,param_4);
        }
        else {
          pcVar5 = *(code **)(lVar2 + 0x2d0);
          if (*(int *)(param_1 + 0x10) == 0) {
            if (pcVar5 == (code *)0x0) {
              iVar1 = FUN_1801b3ad0(lVar2 + 0x100,param_3,param_2,param_4);
            }
            else {
              lVar4 = 0;
              if (((0xf < param_4) && (pcVar5 == FUN_180003500)) &&
                 (*(undefined **)(lVar2 + 0x268) == &DAT_1800096e0)) {
                uVar3 = (ulonglong)(-*(int *)(lVar2 + 0x270) & 0xf);
                iVar1 = FUN_1801b3ad0(lVar2 + 0x100,param_3,param_2,uVar3);
                if (iVar1 != 0) {
                  return 0xffffffff;
                }
                lVar6 = lVar2 + 0x140;
                lVar4 = FUN_180007700(uVar3 + param_3,uVar3 + param_2,param_4 - uVar3,
                                      *(undefined8 *)(lVar2 + 0x280),lVar2 + 0x100,lVar6);
                *(longlong *)(lVar2 + 0x138) = *(longlong *)(lVar2 + 0x138) + lVar4;
                pcVar5 = *(code **)(lVar2 + 0x2d0);
                lVar4 = lVar4 + uVar3;
              }
              iVar1 = FUN_1801b3e40(lVar2 + 0x100,lVar4 + param_3,lVar4 + param_2,param_4 - lVar4,
                                    pcVar5,lVar6);
            }
          }
          else if (pcVar5 == (code *)0x0) {
            iVar1 = FUN_1801b4150(lVar2 + 0x100,param_3,param_2,param_4);
          }
          else {
            lVar6 = 0;
            if (((0x1f < param_4) && (pcVar5 == FUN_180003500)) &&
               (*(undefined **)(lVar2 + 0x268) == &DAT_1800096e0)) {
              uVar3 = (ulonglong)(-*(int *)(lVar2 + 0x270) & 0xf);
              iVar1 = FUN_1801b4150(lVar2 + 0x100,param_3,param_2,uVar3);
              if (iVar1 != 0) {
                return 0xffffffff;
              }
              lVar6 = FUN_180007a80(uVar3 + param_3,uVar3 + param_2,param_4 - uVar3,
                                    *(undefined8 *)(lVar2 + 0x280),lVar2 + 0x100,lVar2 + 0x140);
              *(longlong *)(lVar2 + 0x138) = *(longlong *)(lVar2 + 0x138) + lVar6;
              pcVar5 = *(code **)(lVar2 + 0x2d0);
              lVar6 = lVar6 + uVar3;
            }
            iVar1 = FUN_1801b44e0(lVar2 + 0x100,lVar6 + param_3,lVar6 + param_2,param_4 - lVar6,
                                  pcVar5);
          }
        }
        if (iVar1 == 0) {
          return param_4 & 0xffffffff;
        }
      }
    }
  }
  return 0xffffffff;
}



// ===== FUN_1801915d0 @ 1801915d0 (size 371)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801915d0(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1801915ee;
  lVar3 = FUN_180149710();
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_18019170a;
  iVar1 = FUN_1801af5c0(param_1);
  if ((param_4 != 0) && (iVar1 = FUN_1800012a0(param_2,iVar1 / 2 + param_2), iVar1 == 0)) {
    FUN_1801a70c0(6,0xcf,0xb7,"crypto\\evp\\e_aes.c",0x191,uVar7);
    return 0;
  }
  iVar1 = FUN_1801af5c0(param_1);
  if (param_4 == 0) {
    FUN_1800067b0(param_2,iVar1 << 2,lVar3);
    pcVar4 = FUN_180004730;
    puVar6 = &LAB_180002510;
  }
  else {
    FUN_180006820();
    pcVar4 = FUN_180003f00;
    puVar6 = &LAB_1800024c0;
  }
  *(undefined1 **)(lVar3 + 0x200) = puVar6;
  *(code **)(lVar3 + 0x210) = pcVar4;
  iVar1 = FUN_1801af5c0(param_1);
  iVar2 = FUN_1801af5c0(param_1);
  FUN_180006820(iVar2 / 2 + param_2,iVar1 << 2,lVar3 + 0xf8);
  *(undefined1 **)(lVar3 + 0x208) = &LAB_1800024c0;
  *(longlong *)(lVar3 + 0x1f0) = lVar3;
LAB_18019170a:
  if (param_3 != (undefined8 *)0x0) {
    *(longlong *)(lVar3 + 0x1f8) = lVar3 + 0xf8;
    puVar5 = (undefined8 *)FUN_1801af5b0(param_1);
    uVar7 = param_3[1];
    *puVar5 = *param_3;
    puVar5[1] = uVar7;
  }
  return 1;
}



// ===== FUN_180191750 @ 180191750 (size 239)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180191750(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  lVar4 = FUN_180149710();
  plVar1 = (longlong *)(lVar4 + 0x1f0);
  if ((((*plVar1 != 0) && (*(longlong *)(lVar4 + 0x1f8) != 0)) && (param_2 != 0)) &&
     ((param_3 != 0 && (0xf < param_4)))) {
    if (*(longlong *)(lVar4 + 0x210) != 0) {
      uVar5 = FUN_1801af5b0();
      (**(code **)(lVar4 + 0x210))
                (param_3,param_2,param_4,*plVar1,*(undefined8 *)(lVar4 + 0x1f8),uVar5);
      return 1;
    }
    uVar2 = FUN_1801a37a0(param_1);
    uVar5 = FUN_1801af5b0(param_1);
    iVar3 = FUN_1801b5c00(plVar1,uVar5,param_3,param_2,param_4,CONCAT44(uVar6,uVar2));
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_180191840 @ 180191840 (size 260)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180191840(undefined8 param_1,longlong param_2,void *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar4 = 0x180191860;
  lVar2 = FUN_180149710();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_1801918f1;
  iVar1 = FUN_1801af5c0(param_1);
  FUN_180006820(param_2,iVar1 << 3,lVar2);
  FUN_1801b5a60(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108),lVar2,
                &LAB_1800024c0,uVar4);
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  pcVar3 = FUN_180003320;
  if (param_4 != 0) {
    pcVar3 = FUN_1800031d0;
  }
  *(code **)(lVar2 + 0x150) = pcVar3;
LAB_1801918f1:
  if (param_3 != (void *)0x0) {
    iVar1 = *(int *)(lVar2 + 0x108);
    _Dst = (void *)FUN_1801af5b0(param_1);
    memcpy(_Dst,param_3,(longlong)(0xf - iVar1));
    *(undefined4 *)(lVar2 + 0xfc) = 1;
  }
  return 1;
}



// ===== FUN_180191950 @ 180191950 (size 609)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180191950(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x180191967;
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  lVar3 = FUN_180149710();
  lVar6 = lVar3 + 0x118;
  if (*(int *)(lVar3 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(lVar3 + 0x110)) {
    uVar4 = FUN_180193af0(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  if ((param_3 == 0) && (param_2 != 0)) {
    return 0;
  }
  if (*(int *)(lVar3 + 0xfc) == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    if (param_3 == 0) {
      iVar2 = *(int *)(lVar3 + 0x108);
      uVar5 = FUN_1801af5b0(param_1);
      iVar2 = FUN_1801b5aa0(lVar6,uVar5,(longlong)(0xf - iVar2),param_4);
      if (iVar2 == 0) {
        *(undefined4 *)(lVar3 + 0x104) = 1;
        return param_4 & 0xffffffff;
      }
      return 0xffffffff;
    }
    if ((*(int *)(lVar3 + 0x104) == 0) && (param_4 != 0)) {
      return 0xffffffff;
    }
    FUN_1801b4f30(lVar6,param_3,param_4);
    return param_4 & 0xffffffff;
  }
  iVar2 = FUN_1801a37a0(param_1);
  if ((iVar2 == 0) && (*(int *)(lVar3 + 0x100) == 0)) {
    return 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x104) == 0) {
    iVar2 = *(int *)(lVar3 + 0x108);
    uVar5 = FUN_1801af5b0(param_1);
    iVar2 = FUN_1801b5aa0(lVar6,uVar5,(longlong)(0xf - iVar2),param_4);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x104) = 1;
  }
  iVar2 = FUN_1801a37a0(param_1);
  lVar1 = *(longlong *)(lVar3 + 0x150);
  if (iVar2 != 0) {
    if (lVar1 == 0) {
      iVar2 = FUN_1801b5470(lVar6);
    }
    else {
      local_78 = lVar1;
      iVar2 = FUN_1801b5780(lVar6);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(lVar3 + 0x100) = 1;
      return param_4 & 0xffffffff;
    }
    return 0xffffffff;
  }
  uVar4 = 0xffffffff;
  if (lVar1 == 0) {
    iVar2 = FUN_1801b50c0(lVar6,param_3,param_2,param_4);
  }
  else {
    local_78 = lVar1;
    iVar2 = FUN_1801b52a0(lVar6);
  }
  if ((iVar2 == 0) &&
     (lVar6 = FUN_1801b5b50(lVar6,local_68,(longlong)*(int *)(lVar3 + 0x10c)), lVar6 != 0)) {
    iVar2 = *(int *)(lVar3 + 0x10c);
    uVar5 = FUN_1801af550(param_1);
    iVar2 = FUN_1800012a0(local_68,uVar5,(longlong)iVar2);
    if ((iVar2 == 0) && (uVar4 = param_4 & 0xffffffff, (int)param_4 != -1)) goto LAB_180191b78;
  }
  FUN_180001240(param_2,param_4);
LAB_180191b78:
  *(undefined8 *)(lVar3 + 0xfc) = 0;
  *(undefined4 *)(lVar3 + 0x104) = 0;
  return uVar4;
}



// ===== FUN_180191bc0 @ 180191bc0 (size 373)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180191bc0(undefined8 param_1,longlong param_2,void *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  
  lVar2 = FUN_180149710();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0x1f0) == 0) {
      memcpy(*(void **)(lVar2 + 0x2a8),param_3,(longlong)*(int *)(lVar2 + 0x2e8));
    }
    else {
      FUN_1801b6eb0(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                    (longlong)*(int *)(lVar2 + 0x2ec));
    }
    *(undefined4 *)(lVar2 + 500) = 1;
    return 1;
  }
  iVar1 = FUN_1801af5c0(param_1);
  FUN_180006820(param_2,iVar1 << 3,lVar2);
  iVar1 = FUN_1801af5c0(param_1);
  FUN_1800067b0(param_2,iVar1 << 3,lVar2 + 0xf8);
  pcVar3 = FUN_180005680;
  if (param_4 != 0) {
    pcVar3 = FUN_180004fe0;
  }
  iVar1 = FUN_1801b6cf0(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,&LAB_1800024c0,&LAB_180002510,pcVar3);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar2 + 500) != 0 && (param_3 = *(void **)(lVar2 + 0x2a8), param_3 != (void *)0x0)))
     ) {
    iVar1 = FUN_1801b6eb0(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                          (longlong)*(int *)(lVar2 + 0x2ec));
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(lVar2 + 500) = 1;
  }
  *(undefined4 *)(lVar2 + 0x1f0) = 1;
  return 1;
}



// ===== FUN_180191d40 @ 180191d40 (size 790)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

int FUN_180191d40(undefined8 param_1,longlong param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  void *_Dst;
  
  iVar1 = 0;
  lVar3 = FUN_180149710();
  if ((*(int *)(lVar3 + 500) != 0) && (*(int *)(lVar3 + 0x1f0) != 0)) {
    if (param_3 != (void *)0x0) {
      if (param_2 == 0) {
        _Dst = (void *)(lVar3 + 0x2d0);
        puVar6 = (uint *)(lVar3 + 0x2e4);
      }
      else {
        puVar6 = (uint *)(lVar3 + 0x2e0);
        _Dst = (void *)(lVar3 + 0x2c0);
        iVar2 = FUN_18018fd10((int)*puVar6 + param_2,param_3,param_4);
        if (iVar2 != 0) {
          FUN_1801a70c0(6,0xa9,0xa2,"crypto\\evp\\e_aes.c",0x103a);
          return 0;
        }
      }
      uVar4 = *puVar6;
      if (0 < (int)uVar4) {
        uVar5 = (ulonglong)(0x10 - uVar4);
        if (param_4 < uVar5) {
          memcpy((void *)((longlong)(int)uVar4 + (longlong)_Dst),param_3,param_4);
          *puVar6 = *puVar6 + (int)param_4;
          return 0;
        }
        memcpy((void *)((longlong)(int)uVar4 + (longlong)_Dst),param_3,uVar5);
        param_4 = param_4 - uVar5;
        param_3 = (void *)((longlong)param_3 + uVar5);
        if (param_2 == 0) {
          iVar1 = FUN_1801b6560(lVar3 + 0x1f8,_Dst,0x10);
        }
        else {
          iVar1 = FUN_1801a37a0(param_1);
          if (iVar1 == 0) {
            iVar1 = FUN_1801b6850(lVar3 + 0x1f8,_Dst,param_2,0x10);
          }
          else {
            iVar1 = FUN_1801b6a90();
          }
        }
        if (iVar1 == 0) {
          return -1;
        }
        *puVar6 = 0;
        iVar1 = 0x10;
        if (param_2 != 0) {
          param_2 = param_2 + 0x10;
        }
      }
      uVar4 = (uint)param_4 & 0xf;
      uVar5 = (ulonglong)uVar4;
      if (param_4 != uVar5) {
        if (param_2 == 0) {
          iVar2 = FUN_1801b6560(lVar3 + 0x1f8,param_3,param_4 - uVar5);
        }
        else {
          iVar2 = FUN_1801a37a0(param_1);
          if (iVar2 == 0) {
            iVar2 = FUN_1801b6850(lVar3 + 0x1f8,param_3,param_2,param_4 - uVar5);
          }
          else {
            iVar2 = FUN_1801b6a90();
          }
        }
        if (iVar2 == 0) {
          return -1;
        }
        iVar1 = iVar1 + ((uint)param_4 - uVar4);
        param_3 = (void *)((longlong)param_3 + (param_4 - uVar5));
      }
      if (uVar5 != 0) {
        memcpy(_Dst,param_3,uVar5);
        *puVar6 = uVar4;
      }
      return iVar1;
    }
    if (0 < *(int *)(lVar3 + 0x2e0)) {
      iVar1 = FUN_1801a37a0(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_1801b6850(lVar3 + 0x1f8,lVar3 + 0x2c0,param_2,(longlong)*(int *)(lVar3 + 0x2e0))
        ;
      }
      else {
        iVar1 = FUN_1801b6a90();
      }
      if (iVar1 == 0) {
        return -1;
      }
      iVar1 = *(int *)(lVar3 + 0x2e0);
      *(undefined4 *)(lVar3 + 0x2e0) = 0;
    }
    if (0 < *(int *)(lVar3 + 0x2e4)) {
      iVar2 = FUN_1801b6560(lVar3 + 0x1f8,lVar3 + 0x2d0,(longlong)*(int *)(lVar3 + 0x2e4));
      if (iVar2 == 0) {
        return -1;
      }
      *(undefined4 *)(lVar3 + 0x2e4) = 0;
    }
    iVar2 = FUN_1801a37a0(param_1);
    if (iVar2 == 0) {
      if ((-1 < *(int *)(lVar3 + 0x2ec)) &&
         (iVar2 = FUN_1801b6cd0(lVar3 + 0x1f8,lVar3 + 0x2b0,(longlong)*(int *)(lVar3 + 0x2ec)),
         iVar2 == 0)) {
LAB_180192047:
        *(undefined4 *)(lVar3 + 500) = 0;
        return iVar1;
      }
    }
    else {
      iVar2 = FUN_1801b7080(lVar3 + 0x1f8,lVar3 + 0x2b0,0x10);
      if (iVar2 == 1) goto LAB_180192047;
    }
  }
  return -1;
}



// ===== FUN_180192060 @ 180192060 (size 363)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_180192060(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  
  lVar4 = FUN_180149710();
  uVar5 = FUN_18008d530(param_1);
  uVar2 = FUN_1801a37a0(uVar5);
  uVar1 = DAT_180447954;
  uVar2 = uVar2 & 0xf0007;
  if ((uVar2 - 1 < 2) && (param_4 == 0)) {
    iVar3 = FUN_1801af5c0(param_1);
    if ((uVar1 & 0x200) == 0) {
      iVar3 = FUN_1801b1430(param_2,iVar3 << 3,lVar4);
      pcVar6 = (code *)0x0;
      if (uVar2 == 2) {
        pcVar6 = FUN_1801b2680;
      }
      *(code **)(lVar4 + 0xf8) = FUN_1801b0830;
    }
    else {
      iVar3 = FUN_180001c10();
      pcVar6 = (code *)0x0;
      if (uVar2 == 2) {
        pcVar6 = FUN_180001ea0;
      }
      *(code **)(lVar4 + 0xf8) = FUN_180001dd0;
    }
  }
  else {
    iVar3 = FUN_1801af5c0(param_1);
    if ((uVar1 & 0x200) == 0) {
      iVar3 = FUN_1801b16b0(param_2,iVar3 << 3,lVar4);
      pcVar6 = FUN_1801b0e20;
      pcVar7 = FUN_1801b2680;
    }
    else {
      iVar3 = FUN_180001b30();
      pcVar6 = FUN_180001d00;
      pcVar7 = FUN_180001ea0;
    }
    *(code **)(lVar4 + 0xf8) = pcVar6;
    pcVar6 = (code *)0x0;
    if (uVar2 == 2) {
      pcVar6 = pcVar7;
    }
  }
  *(code **)(lVar4 + 0x100) = pcVar6;
  if (-1 >= iVar3) {
    FUN_1801a70c0(6,0x85,0x8f,"crypto\\evp\\e_aes.c",0xa87);
  }
  return -1 < iVar3;
}



// ===== FUN_1801921d0 @ 1801921d0 (size 207)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801921d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  lVar3 = FUN_180149710();
  lVar1 = *(longlong *)(lVar3 + 0x100);
  iVar2 = FUN_1801a37a0(param_1);
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0xf8);
    uVar5 = FUN_1801af5b0(param_1);
    if (iVar2 == 0) {
      FUN_1801b26c0(param_3,param_2,param_4,lVar3,uVar5,uVar4);
    }
    else {
      FUN_1801b2980();
    }
  }
  else {
    uVar4 = FUN_1801af5b0(param_1);
    (**(code **)(lVar3 + 0x100))(param_3,param_2,param_4,lVar3,uVar4,CONCAT44(uVar6,iVar2));
  }
  return 1;
}



// ===== FUN_1801922a0 @ 1801922a0 (size 140)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801922a0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = FUN_1801af540();
  uVar4 = (ulonglong)iVar1;
  lVar2 = FUN_180149710(param_1);
  if (uVar4 <= param_4) {
    lVar3 = param_3;
    do {
      (**(code **)(lVar2 + 0xf8))(lVar3,(param_2 - param_3) + lVar3,lVar2);
      lVar3 = lVar3 + uVar4;
    } while ((ulonglong)(lVar3 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// ===== FUN_180192330 @ 180192330 (size 120)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180192330(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180149710();
  if (lVar1 == 0) {
    return 0;
  }
  FUN_180001240(lVar1 + 0x100,0x1b8);
  lVar1 = *(longlong *)(lVar1 + 0x2b8);
  lVar2 = FUN_1801af5b0(param_1);
  if (lVar1 != lVar2) {
    FUN_180195e10(lVar1,"crypto\\evp\\e_aes.c",0xb19);
  }
  return 1;
}



// ===== FUN_1801923b0 @ 1801923b0 (size 1101)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801923b0(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  size_t _Size;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1801923ce;
  _Size = (size_t)param_3;
  lVar3 = FUN_180149710();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    uVar8 = FUN_18015e220(*param_1);
    *(undefined4 *)(lVar3 + 0x2c0) = uVar8;
    *(undefined8 **)(lVar3 + 0x2b8) = param_1 + 5;
    *(undefined4 *)(lVar3 + 0x2c4) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x2c8) = 0;
    *(undefined4 *)(lVar3 + 0x2cc) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar4 = FUN_180149710(param_4);
    if (*(longlong *)(lVar3 + 0x280) != 0) {
      if (*(longlong *)(lVar3 + 0x280) != lVar3) {
        return 0;
      }
      *(longlong *)(lVar4 + 0x280) = lVar4;
    }
    if (*(undefined8 **)(lVar3 + 0x2b8) == param_1 + 5) {
      *(undefined8 **)(lVar4 + 0x2b8) = param_4 + 5;
      return 1;
    }
    _Dst = (void *)FUN_180195dc0((longlong)*(int *)(lVar3 + 0x2c0),"crypto\\evp\\e_aes.c",0xb9b);
    *(void **)(lVar4 + 0x2b8) = _Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,*(void **)(lVar3 + 0x2b8),(longlong)*(int *)(lVar3 + 0x2c0));
      return 1;
    }
    uVar8 = 0xb9c;
    goto LAB_1801924be;
  case 9:
    if (param_3 < 1) {
      return 0;
    }
    if ((param_3 < 0x11) || (param_3 <= *(int *)(lVar3 + 0x2c0))) {
LAB_1801924df:
      *(int *)(lVar3 + 0x2c0) = param_3;
      return 1;
    }
    if (*(undefined8 **)(lVar3 + 0x2b8) != param_1 + 5) {
      FUN_180195e10(*(undefined8 **)(lVar3 + 0x2b8),"crypto\\evp\\e_aes.c",0xb35);
    }
    lVar4 = FUN_180195dc0(_Size,"crypto\\evp\\e_aes.c",0xb36);
    *(longlong *)(lVar3 + 0x2b8) = lVar4;
    if (lVar4 != 0) goto LAB_1801924df;
    uVar8 = 0xb37;
LAB_1801924be:
    FUN_1801a70c0(6,0xc4,0x41,"crypto\\evp\\e_aes.c",uVar8,uVar9);
    break;
  case 0x10:
    if (((param_3 - 1U < 0x10) && (*(int *)(param_1 + 2) != 0)) && (-1 < *(int *)(lVar3 + 0x2c4))) {
      memcpy(param_4,param_1 + 7,_Size);
      return 1;
    }
    break;
  case 0x11:
    if ((param_3 - 1U < 0x10) && (*(int *)(param_1 + 2) == 0)) {
      memcpy(param_1 + 7,param_4,_Size);
      *(int *)(lVar3 + 0x2c4) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == -1) {
      memcpy(*(void **)(lVar3 + 0x2b8),param_4,(longlong)*(int *)(lVar3 + 0x2c0));
      *(undefined4 *)(lVar3 + 0x2c8) = 1;
      return 1;
    }
    if (((3 < param_3) && (7 < *(int *)(lVar3 + 0x2c0) - param_3)) &&
       ((memcpy(*(void **)(lVar3 + 0x2b8),param_4,_Size), *(int *)(param_1 + 2) == 0 ||
        (iVar2 = FUN_180193f70(*(longlong *)(lVar3 + 0x2b8) + _Size,
                               *(int *)(lVar3 + 0x2c0) - param_3), 0 < iVar2)))) {
      *(undefined4 *)(lVar3 + 0x2c8) = 1;
      return 1;
    }
    break;
  case 0x13:
    if ((*(int *)(lVar3 + 0x2c8) != 0) && (*(int *)(lVar3 + 0xf8) != 0)) {
      FUN_1801b4a20(lVar3 + 0x100,*(undefined8 *)(lVar3 + 0x2b8),(longlong)*(int *)(lVar3 + 0x2c0));
      iVar2 = *(int *)(lVar3 + 0x2c0);
      if ((param_3 < 1) || (iVar2 < param_3)) {
        param_3 = iVar2;
      }
      memcpy(param_4,(void *)(((longlong)iVar2 - (longlong)param_3) + *(longlong *)(lVar3 + 0x2b8)),
             (longlong)param_3);
      iVar2 = *(int *)(lVar3 + 0x2c0);
      lVar7 = 8;
      lVar4 = *(longlong *)(lVar3 + 0x2b8);
      do {
        lVar7 = lVar7 + -1;
        pcVar1 = (char *)(iVar2 + lVar4 + -8 + lVar7);
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 != '\0') break;
      } while (lVar7 != 0);
      *(undefined4 *)(lVar3 + 0xfc) = 1;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      param_1[7] = *param_4;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(lVar3 + 0x2cc) = 0xd;
      uVar5 = (uint)CONCAT11(*(undefined1 *)((longlong)param_1 + 0x43),
                             *(undefined1 *)((longlong)param_1 + 0x44));
      if (7 < uVar5) {
        uVar6 = uVar5 - 8;
        if (*(int *)(param_1 + 2) == 0) {
          if (uVar6 < 0x10) {
            return 0;
          }
          uVar6 = uVar5 - 0x18;
        }
        *(char *)((longlong)param_1 + 0x44) = (char)uVar6;
        *(char *)((longlong)param_1 + 0x43) = (char)(uVar6 >> 8);
        return 0x10;
      }
    }
    break;
  case 0x18:
    if (((*(int *)(lVar3 + 0x2c8) != 0) && (*(int *)(lVar3 + 0xf8) != 0)) &&
       (*(int *)(param_1 + 2) == 0)) {
      memcpy((void *)(((longlong)*(int *)(lVar3 + 0x2c0) - _Size) + *(longlong *)(lVar3 + 0x2b8)),
             param_4,_Size);
      FUN_1801b4a20(lVar3 + 0x100,*(undefined8 *)(lVar3 + 0x2b8),(longlong)*(int *)(lVar3 + 0x2c0));
      *(undefined4 *)(lVar3 + 0xfc) = 1;
      return 1;
    }
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar3 + 0x2c0);
    return 1;
  }
  return 0;
}



// ===== FUN_180192860 @ 180192860 (size 319)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180192860(longlong param_1,longlong param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = FUN_180149710();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar1 + 0xf8) == 0) {
      memcpy(*(void **)(lVar1 + 0x2b8),param_3,(longlong)*(int *)(lVar1 + 0x2c0));
    }
    else {
      FUN_1801b4a20(lVar1 + 0x100);
    }
    *(undefined4 *)(lVar1 + 0xfc) = 1;
    *(undefined4 *)(lVar1 + 0x2c8) = 0;
    return 1;
  }
  if ((DAT_180447954 & 0x200) == 0) {
    FUN_1801b16b0(param_2,*(int *)(param_1 + 0x68) << 3,lVar1);
    pcVar2 = FUN_1801b0e20;
  }
  else {
    FUN_180001b30();
    pcVar2 = FUN_180001d00;
  }
  FUN_1801b4920(lVar1 + 0x100,lVar1,pcVar2);
  *(undefined8 *)(lVar1 + 0x2d0) = 0;
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar1 + 0xfc) != 0 && (param_3 = *(void **)(lVar1 + 0x2b8), param_3 != (void *)0x0))
     )) {
    FUN_1801b4a20(lVar1 + 0x100,param_3,(longlong)*(int *)(lVar1 + 0x2c0));
    *(undefined4 *)(lVar1 + 0xfc) = 1;
  }
  *(undefined4 *)(lVar1 + 0xf8) = 1;
  return 1;
}



// ===== FUN_1801929a0 @ 1801929a0 (size 197)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801929a0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180149710();
  if (param_2 == 8) {
    lVar2 = FUN_180149710(param_4);
    if (*(longlong *)(lVar1 + 0x1f0) != 0) {
      if (*(longlong *)(lVar1 + 0x1f0) != lVar1) {
        return 0;
      }
      *(longlong *)(lVar2 + 0x1f0) = lVar2;
    }
    if (*(longlong *)(lVar1 + 0x1f8) != 0) {
      if (*(longlong *)(lVar1 + 0x1f8) != lVar1 + 0xf8) {
        return 0;
      }
      *(longlong *)(lVar2 + 0x1f8) = lVar2 + 0xf8;
    }
  }
  else {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    *(undefined8 *)(lVar1 + 0x1f0) = 0;
    *(undefined8 *)(lVar1 + 0x1f8) = 0;
  }
  return 1;
}



// ===== FUN_180192a70 @ 180192a70 (size 458)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180192a70(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  uVar8 = 0x180192a89;
  lVar4 = FUN_180149710();
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_180192bff;
  iVar2 = FUN_1801af5c0(param_1);
  if ((param_4 != 0) && (iVar2 = FUN_1800012a0(param_2,iVar2 / 2 + param_2), iVar2 == 0)) {
    FUN_1801a70c0(6,0xd1,0xb7,"crypto\\evp\\e_aes.c",0xd32,uVar8);
    return 0;
  }
  *(undefined8 *)(lVar4 + 0x210) = 0;
  uVar1 = DAT_180447954;
  iVar2 = FUN_1801af5c0(param_1);
  if ((uVar1 & 0x200) == 0) {
    pcVar7 = FUN_1801b0e20;
    if (param_4 == 0) {
      FUN_1801b1430(param_2,iVar2 << 2,lVar4);
      pcVar5 = FUN_1801b0830;
    }
    else {
      FUN_1801b16b0();
      pcVar5 = FUN_1801b0e20;
    }
    *(code **)(lVar4 + 0x200) = pcVar5;
    iVar2 = FUN_1801af5c0(param_1);
    iVar3 = FUN_1801af5c0(param_1);
    FUN_1801b16b0(iVar3 / 2 + param_2,iVar2 << 2,lVar4 + 0xf8);
  }
  else {
    pcVar7 = FUN_180001d00;
    if (param_4 == 0) {
      FUN_180001c10();
      pcVar5 = FUN_180001dd0;
    }
    else {
      FUN_180001b30();
      pcVar5 = FUN_180001d00;
    }
    *(code **)(lVar4 + 0x200) = pcVar5;
    iVar2 = FUN_1801af5c0(param_1);
    iVar3 = FUN_1801af5c0(param_1);
    FUN_180001b30(iVar3 / 2 + param_2,iVar2 << 2,lVar4 + 0xf8);
  }
  *(code **)(lVar4 + 0x208) = pcVar7;
  *(longlong *)(lVar4 + 0x1f0) = lVar4;
LAB_180192bff:
  if (param_3 != (undefined8 *)0x0) {
    *(longlong *)(lVar4 + 0x1f8) = lVar4 + 0xf8;
    puVar6 = (undefined8 *)FUN_1801af5b0(param_1);
    uVar8 = param_3[1];
    *puVar6 = *param_3;
    puVar6[1] = uVar8;
  }
  return 1;
}



// ===== FUN_180192c40 @ 180192c40 (size 638)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_180192c40(undefined8 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  void *_Dst;
  ushort uVar7;
  ulonglong _Size;
  
  _Size = (ulonglong)param_3;
  lVar3 = FUN_180149710();
  switch(param_2) {
  case 0:
    *(undefined4 *)(lVar3 + 0x108) = 8;
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    *(undefined8 *)(lVar3 + 0x100) = 0;
    *(undefined4 *)(lVar3 + 0x10c) = 0xc;
    *(undefined4 *)(lVar3 + 0x110) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar5 = FUN_180149710(param_4);
    if (*(longlong *)(lVar3 + 0x148) != 0) {
      if (*(longlong *)(lVar3 + 0x148) != lVar3) {
        return 0;
      }
      *(longlong *)(lVar5 + 0x148) = lVar5;
    }
    return 1;
  case 9:
    param_3 = 0xf - param_3;
  case 0x14:
    if (param_3 - 2U < 7) {
      *(int *)(lVar3 + 0x108) = param_3;
      return 1;
    }
    break;
  case 0x10:
    iVar2 = FUN_1801a37a0(param_1);
    if (((iVar2 != 0) && (*(int *)(lVar3 + 0x100) != 0)) &&
       (lVar5 = FUN_1801b5b50(lVar3 + 0x118,param_4,_Size), lVar5 != 0)) {
      *(undefined8 *)(lVar3 + 0xfc) = 0;
      *(undefined4 *)(lVar3 + 0x104) = 0;
      return 1;
    }
    break;
  case 0x11:
    if (((_Size & 1) == 0) && (param_3 - 4U < 0xd)) {
      iVar2 = FUN_1801a37a0(param_1);
      if (param_4 != (int *)0x0) {
        if (iVar2 != 0) {
          return 0;
        }
        *(undefined4 *)(lVar3 + 0x100) = 1;
        _Dst = (void *)FUN_1801af550(param_1);
        memcpy(_Dst,param_4,_Size);
      }
      *(int *)(lVar3 + 0x10c) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 4) {
      piVar6 = (int *)FUN_1801af5b0(param_1);
      *piVar6 = *param_4;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar4 = (undefined8 *)FUN_1801af550(param_1);
      *puVar4 = *(undefined8 *)param_4;
      *(int *)(puVar4 + 1) = param_4[2];
      *(char *)((longlong)puVar4 + 0xc) = (char)param_4[3];
      *(undefined4 *)(lVar3 + 0x110) = 0xd;
      lVar5 = FUN_1801af550(param_1);
      uVar1 = *(undefined1 *)(lVar5 + 0xb);
      lVar5 = FUN_1801af550(param_1);
      uVar7 = CONCAT11(uVar1,*(undefined1 *)(lVar5 + 0xc));
      if (7 < uVar7) {
        uVar7 = uVar7 - 8;
        iVar2 = FUN_1801a37a0(param_1);
        if (iVar2 == 0) {
          if ((int)(uint)uVar7 < *(int *)(lVar3 + 0x10c)) {
            return 0;
          }
          uVar7 = uVar7 - (short)*(int *)(lVar3 + 0x10c);
        }
        lVar5 = FUN_1801af550(param_1);
        *(char *)(lVar5 + 0xb) = (char)(uVar7 >> 8);
        lVar5 = FUN_1801af550(param_1);
        *(char *)(lVar5 + 0xc) = (char)uVar7;
        return *(undefined4 *)(lVar3 + 0x10c);
      }
    }
    break;
  case 0x25:
    *param_4 = 0xf - *(int *)(lVar3 + 0x108);
    return 1;
  }
  return 0;
}



// ===== FUN_180192f10 @ 180192f10 (size 262)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180192f10(undefined8 param_1,longlong param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  void *_Dst;
  undefined8 uVar5;
  
  uVar5 = 0x180192f28;
  lVar3 = FUN_180149710();
  uVar1 = DAT_180447954;
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_180192fcb;
  iVar2 = FUN_1801af5c0(param_1);
  if ((uVar1 & 0x200) == 0) {
    FUN_1801b16b0(param_2,iVar2 << 3,lVar3);
    pcVar4 = FUN_1801b0e20;
  }
  else {
    FUN_180001b30();
    pcVar4 = FUN_180001d00;
  }
  FUN_1801b5a60(lVar3 + 0x118,*(undefined4 *)(lVar3 + 0x10c),*(undefined4 *)(lVar3 + 0x108),lVar3,
                pcVar4,uVar5);
  *(undefined4 *)(lVar3 + 0xf8) = 1;
  *(undefined8 *)(lVar3 + 0x150) = 0;
LAB_180192fcb:
  if (param_3 != (void *)0x0) {
    iVar2 = *(int *)(lVar3 + 0x108);
    _Dst = (void *)FUN_1801af5b0(param_1);
    memcpy(_Dst,param_3,(longlong)(0xf - iVar2));
    *(undefined4 *)(lVar3 + 0xfc) = 1;
  }
  return 1;
}



// ===== FUN_180193020 @ 180193020 (size 203)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180193020(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 uVar4;
  
  lVar3 = FUN_180149710();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
LAB_180193065:
    iVar1 = FUN_1801a37a0(param_1);
    iVar2 = FUN_1801af5c0(param_1);
    if (iVar1 == 0) {
      FUN_1801b1430(param_2,iVar2 << 3,lVar3);
    }
    else {
      FUN_1801b16b0();
    }
    if (param_3 == (void *)0x0) {
      uVar4 = 0;
      goto LAB_1801930c4;
    }
  }
  else if (param_2 != 0) goto LAB_180193065;
  iVar1 = FUN_1801af560(param_1);
  _Dst = (void *)FUN_1801af5b0(param_1);
  memcpy(_Dst,param_3,(longlong)iVar1);
  uVar4 = FUN_1801af5b0(param_1);
LAB_1801930c4:
  *(undefined8 *)(lVar3 + 0xf8) = uVar4;
  return 1;
}



// ===== FUN_1801930f0 @ 1801930f0 (size 448)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801930f0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x18019310e;
  lVar2 = FUN_180149710();
  iVar1 = FUN_1801af560(param_1);
  bVar4 = iVar1 == 4;
  if (param_3 != 0) {
    if (((param_4 == 0) ||
        ((iVar1 = FUN_1801a37a0(param_1), iVar1 == 0 && ((param_4 < 0x10 || ((param_4 & 7) != 0)))))
        ) || ((!bVar4 && ((param_4 & 7) != 0)))) {
      return 0xffffffff;
    }
    iVar1 = FUN_18018fd10(param_2,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_1801a37a0(param_1);
      if (param_2 == 0) {
        if (iVar1 == 0) {
          return (ulonglong)((int)param_4 - 8);
        }
        if (bVar4) {
          param_4 = param_4 + 7 & 0xfffffffffffffff8;
        }
        return (ulonglong)((int)param_4 + 8);
      }
      if (bVar4) {
        if (iVar1 == 0) {
          uVar3 = FUN_1801b5f00();
          if (uVar3 == 0) {
            return 0xffffffff;
          }
          return uVar3 & 0xffffffff;
        }
        uVar3 = FUN_1801b61d0();
        if (uVar3 == 0) {
          return 0xffffffff;
        }
        return uVar3 & 0xffffffff;
      }
      if (iVar1 == 0) {
        uVar3 = FUN_1801b5e60(lVar2,*(undefined8 *)(lVar2 + 0xf8),param_2,param_3,param_4,
                              FUN_1801b0830);
        if (uVar3 == 0) {
          return 0xffffffff;
        }
        return uVar3 & 0xffffffff;
      }
      uVar3 = FUN_1801b6060();
      if (uVar3 == 0) {
        return 0xffffffff;
      }
      return uVar3 & 0xffffffff;
    }
    FUN_1801a70c0(6,0xaa,0xa2,"crypto\\evp\\e_aes.c",CONCAT44(uVar5,0xef3),uVar6);
  }
  return 0;
}



// ===== FUN_1801932b0 @ 1801932b0 (size 391)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801932b0(undefined8 *param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_180149710();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar3 + 0x1f0) = 0;
    uVar1 = FUN_18015e220(*param_1);
    *(undefined4 *)(lVar3 + 0x2e8) = uVar1;
    uVar5 = FUN_1801af5b0(param_1);
    *(undefined8 *)(lVar3 + 0x2a8) = uVar5;
    uVar5 = 1;
    *(undefined4 *)(lVar3 + 0x2ec) = 0x10;
    *(undefined8 *)(lVar3 + 0x2e0) = 0;
    break;
  default:
    uVar5 = 0xffffffff;
    break;
  case 8:
    lVar4 = FUN_180149710(param_4);
    uVar5 = FUN_1801b6740(lVar4 + 0x1f8,lVar3 + 0x1f8,lVar4,lVar4 + 0xf8);
    break;
  case 9:
    if (param_3 - 1 < 0xf) {
      *(uint *)(lVar3 + 0x2e8) = param_3;
      return 1;
    }
    goto LAB_1801933ec;
  case 0x10:
    if ((param_3 == *(uint *)(lVar3 + 0x2ec)) && (iVar2 = FUN_1801a37a0(param_1), iVar2 != 0)) {
      memcpy(param_4,(void *)(lVar3 + 0x2b0),(longlong)(int)param_3);
      return 1;
    }
    goto LAB_1801933ec;
  case 0x11:
    if (param_4 == (undefined4 *)0x0) {
      if (param_3 < 0x11) {
        *(uint *)(lVar3 + 0x2ec) = param_3;
        return 1;
      }
    }
    else if ((param_3 == *(uint *)(lVar3 + 0x2ec)) && (iVar2 = FUN_1801a37a0(param_1), iVar2 == 0))
    {
      memcpy((void *)(lVar3 + 0x2b0),param_4,(longlong)(int)param_3);
      return 1;
    }
LAB_1801933ec:
    uVar5 = 0;
    break;
  case 0x25:
    *param_4 = *(undefined4 *)(lVar3 + 0x2e8);
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FUN_180193480 @ 180193480 (size 473)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180193480(undefined8 param_1,longlong param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_180149710();
  uVar1 = DAT_180447954;
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar3 + 0x1f0) == 0) {
      memcpy(*(void **)(lVar3 + 0x2a8),param_3,(longlong)*(int *)(lVar3 + 0x2e8));
    }
    else {
      FUN_1801b6eb0(lVar3 + 0x1f8,param_3,(longlong)*(int *)(lVar3 + 0x2e8),
                    (longlong)*(int *)(lVar3 + 0x2ec));
    }
    *(undefined4 *)(lVar3 + 500) = 1;
    return 1;
  }
  iVar2 = FUN_1801af5c0(param_1);
  if ((uVar1 & 0x200) == 0) {
    FUN_1801b16b0(param_2,iVar2 << 3,lVar3);
    iVar2 = FUN_1801af5c0(param_1);
    FUN_1801b1430(param_2,iVar2 << 3,lVar3 + 0xf8);
    iVar2 = FUN_1801b6cf0(lVar3 + 0x1f8,lVar3,lVar3 + 0xf8,FUN_1801b0e20,FUN_1801b0830,0);
  }
  else {
    FUN_180001b30();
    iVar2 = FUN_1801af5c0(param_1);
    FUN_180001c10(param_2,iVar2 << 3,lVar3 + 0xf8);
    iVar2 = FUN_1801b6cf0(lVar3 + 0x1f8,lVar3,lVar3 + 0xf8,FUN_180001d00,FUN_180001dd0,0);
  }
  if (iVar2 == 0) {
    return 0;
  }
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar3 + 500) != 0 && (param_3 = *(void **)(lVar3 + 0x2a8), param_3 != (void *)0x0)))
     ) {
    iVar2 = FUN_1801b6eb0(lVar3 + 0x1f8,param_3,(longlong)*(int *)(lVar3 + 0x2e8),
                          (longlong)*(int *)(lVar3 + 0x2ec));
    if (iVar2 != 1) {
      return 0;
    }
    *(undefined4 *)(lVar3 + 500) = 1;
  }
  *(undefined4 *)(lVar3 + 0x1f0) = 1;
  return 1;
}



// ===== FUN_180193af0 @ 180193af0 (size 472)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180193af0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4
                       )

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x180193b05;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  lVar2 = FUN_180149710();
  lVar6 = lVar2 + 0x118;
  if ((param_2 == param_3) && ((longlong)*(int *)(lVar2 + 0x10c) + 8U <= param_4)) {
    iVar1 = FUN_1801a37a0(param_1);
    if (iVar1 != 0) {
      puVar3 = (undefined8 *)FUN_1801af550(param_1);
      *param_2 = *puVar3;
    }
    lVar4 = FUN_1801af5b0(param_1);
    *(undefined8 *)(lVar4 + 4) = *param_3;
    param_4 = param_4 - (longlong)(*(int *)(lVar2 + 0x10c) + 8);
    iVar1 = *(int *)(lVar2 + 0x108);
    uVar5 = FUN_1801af5b0(param_1);
    iVar1 = FUN_1801b5aa0(lVar6,uVar5,(longlong)(0xf - iVar1),param_4);
    if (iVar1 == 0) {
      iVar1 = *(int *)(lVar2 + 0x110);
      uVar5 = FUN_1801af550(param_1);
      FUN_1801b4f30(lVar6,uVar5,(longlong)iVar1);
      param_2 = param_2 + 1;
      iVar1 = FUN_1801a37a0(param_1);
      lVar4 = *(longlong *)(lVar2 + 0x150);
      if (iVar1 == 0) {
        if (lVar4 == 0) {
          iVar1 = FUN_1801b50c0(lVar6,param_3 + 1,param_2,param_4);
        }
        else {
          local_68 = lVar4;
          iVar1 = FUN_1801b52a0(lVar6);
        }
        if (((iVar1 == 0) &&
            (lVar6 = FUN_1801b5b50(lVar6,local_58,(longlong)*(int *)(lVar2 + 0x10c)), lVar6 != 0))
           && (iVar1 = FUN_1800012a0(local_58,param_4 + (longlong)(param_3 + 1),
                                     (longlong)*(int *)(lVar2 + 0x10c)), iVar1 == 0)) {
          return param_4 & 0xffffffff;
        }
        FUN_180001240(param_2,param_4);
      }
      else {
        if (lVar4 == 0) {
          iVar1 = FUN_1801b5470(lVar6);
        }
        else {
          local_68 = lVar4;
          iVar1 = FUN_1801b5780(lVar6);
        }
        if ((iVar1 == 0) &&
           (lVar6 = FUN_1801b5b50(lVar6,param_4 + (longlong)param_2,
                                  (longlong)*(int *)(lVar2 + 0x10c)), lVar6 != 0)) {
          return (ulonglong)(uint)(*(int *)(lVar2 + 0x10c) + 8 + (int)param_4);
        }
      }
    }
  }
  return 0xffffffff;
}



// ===== FUN_180193cd0 @ 180193cd0 (size 670)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_180193cd0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = 0x180193cf2;
  lVar3 = FUN_180149710();
  uVar7 = 0xffffffff;
  if ((param_2 == param_3) && (0x17 < param_4)) {
    uVar6 = 0x18;
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar6 = 0x13;
    }
    iVar2 = FUN_18018eca0(param_1,uVar6,8,param_2);
    if (0 < iVar2) {
      lVar1 = lVar3 + 0x100;
      iVar2 = FUN_1801b3980(lVar1,param_1 + 0x38,(longlong)*(int *)(lVar3 + 0x2cc));
      if (iVar2 == 0) {
        pcVar5 = *(code **)(lVar3 + 0x2d0);
        param_3 = param_3 + 8;
        param_2 = param_2 + 8;
        uVar8 = param_4 - 0x18;
        if (*(int *)(param_1 + 0x10) == 0) {
          if (pcVar5 == (code *)0x0) {
            iVar2 = FUN_1801b3ad0(lVar1,param_3,param_2,uVar8);
          }
          else {
            lVar4 = 0;
            if (((0xf < uVar8) && (pcVar5 == FUN_180003500)) &&
               (*(undefined **)(lVar3 + 0x268) == &DAT_1800096e0)) {
              iVar2 = FUN_1801b3ad0(lVar1,0,0,0);
              if (iVar2 != 0) {
                return 0xffffffff;
              }
              lVar9 = lVar3 + 0x140;
              lVar4 = FUN_180007700(param_3,param_2,uVar8,*(undefined8 *)(lVar3 + 0x280),lVar1,lVar9
                                   );
              *(longlong *)(lVar3 + 0x138) = *(longlong *)(lVar3 + 0x138) + lVar4;
              pcVar5 = *(code **)(lVar3 + 0x2d0);
            }
            iVar2 = FUN_1801b3e40(lVar1,lVar4 + param_3,lVar4 + param_2,uVar8 - lVar4,pcVar5,lVar9);
          }
          if (iVar2 == 0) {
            FUN_1801b4be0(lVar1,param_1 + 0x38,0x10);
            iVar2 = FUN_1800012a0(param_1 + 0x38,param_3 + uVar8,0x10);
            if (iVar2 == 0) {
              uVar7 = (undefined4)uVar8;
            }
            else {
              FUN_180001240(param_2,uVar8);
            }
          }
        }
        else {
          if (pcVar5 == (code *)0x0) {
            iVar2 = FUN_1801b4150(lVar1,param_3,param_2,uVar8);
          }
          else {
            lVar9 = 0;
            if (((0x1f < uVar8) && (pcVar5 == FUN_180003500)) &&
               (*(undefined **)(lVar3 + 0x268) == &DAT_1800096e0)) {
              iVar2 = FUN_1801b4150(lVar1,0,0,0);
              if (iVar2 != 0) {
                return 0xffffffff;
              }
              lVar9 = FUN_180007a80(param_3,param_2,uVar8,*(undefined8 *)(lVar3 + 0x280),lVar1,
                                    lVar3 + 0x140);
              *(longlong *)(lVar3 + 0x138) = *(longlong *)(lVar3 + 0x138) + lVar9;
              pcVar5 = *(code **)(lVar3 + 0x2d0);
            }
            iVar2 = FUN_1801b44e0(lVar1,lVar9 + param_3,lVar9 + param_2,uVar8 - lVar9,pcVar5);
          }
          if (iVar2 == 0) {
            FUN_1801b4be0(lVar1,param_2 + uVar8,0x10);
            uVar7 = (undefined4)param_4;
          }
        }
      }
    }
    *(undefined4 *)(lVar3 + 0xfc) = 0;
    *(undefined4 *)(lVar3 + 0x2cc) = 0xffffffff;
  }
  return uVar7;
}



// ===== FUN_180193f70 @ 180193f70 (size 109)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180193f70(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x180193f80;
  lVar1 = FUN_180193fe0();
  if ((lVar1 == 0) || (*(code **)(lVar1 + 8) == (code *)0x0)) {
    FUN_1801a70c0(0x24,100,0x65,"crypto\\rand\\rand_lib.c",0x3b2,uVar2);
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000180193faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(lVar1 + 8))(param_1,param_2);
  return uVar2;
}



// ===== FUN_180193fe0 @ 180193fe0 (size 185)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined **
FUN_180193fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined **ppuVar3;
  int iVar4;
  
  iVar1 = FUN_1801addb0(&DAT_1803c6530,FUN_180194220,param_3,param_4,0x180193fea);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = DAT_1803c6544;
  }
  if (iVar4 == 0) {
    return (undefined **)0x0;
  }
  FUN_1801add90(DAT_1803c6520);
  lVar2 = DAT_1803c6510;
  ppuVar3 = DAT_1803c6528;
  if ((DAT_1803c6528 == (undefined **)0x0) &&
     ((lVar2 = FUN_1801b8df0(), lVar2 == 0 ||
      (ppuVar3 = (undefined **)FUN_1801a3490(lVar2), ppuVar3 == (undefined **)0x0)))) {
    FUN_1801abfb0(lVar2);
    DAT_1803c6528 = &PTR_FUN_1803be4a8;
    lVar2 = DAT_1803c6510;
    ppuVar3 = DAT_1803c6528;
  }
  DAT_1803c6528 = ppuVar3;
  DAT_1803c6510 = lVar2;
  ppuVar3 = DAT_1803c6528;
  FUN_1801ade50(DAT_1803c6520);
  return ppuVar3;
}



// ===== FUN_1801940a0 @ 1801940a0 (size 203)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801940a0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801940b5;
  lVar1 = FUN_180193fe0();
  if (lVar1 != 0) {
    lVar2 = FUN_1801b8540();
    if (lVar1 != lVar2) {
      lVar1 = FUN_180193fe0();
      if ((lVar1 == 0) || (*(code **)(lVar1 + 8) == (code *)0x0)) {
        FUN_1801a70c0(0x24,100,0x65,"crypto\\rand\\rand_lib.c",0x3b2,uVar3);
        return 0xffffffff;
      }
                    /* WARNING: Could not recover jumptable at 0x0001801940fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar1 + 8))(param_1,param_2);
      return uVar3;
    }
  }
  lVar1 = FUN_1801b7f80();
  if (lVar1 == 0) {
    return 0;
  }
  uVar3 = FUN_1801b7a30(lVar1,param_1,(longlong)param_2);
  return uVar3;
}



// ===== FUN_180194170 @ 180194170 (size 125)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180194170(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1801addb0(&DAT_1803c6530);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1803c6544;
  }
  if (iVar2 == 0) {
    return 0;
  }
  FUN_1801add90(DAT_1803c6520);
  FUN_1801abfb0(DAT_1803c6510);
  DAT_1803c6510 = 0;
  DAT_1803c6528 = param_1;
  FUN_1801ade50(DAT_1803c6520);
  return 1;
}



// ===== FUN_180194220 @ 180194220 (size 186)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180194220(void)

{
  int iVar1;
  
  DAT_1803c6518 = FUN_1801add30();
  if (DAT_1803c6518 == 0) {
    DAT_1803c6544 = 0;
    return;
  }
  DAT_1803c6520 = FUN_1801add30();
  if (DAT_1803c6520 != 0) {
    DAT_1803c6538 = FUN_1801add30();
    if (DAT_1803c6538 != 0) {
      iVar1 = fnet_getConfigApiVersion();
      if (iVar1 != 0) {
        DAT_1803c6540 = 1;
        DAT_1803c6544 = 1;
        return;
      }
      FUN_1801adcf0(DAT_1803c6538);
      DAT_1803c6538 = 0;
    }
    FUN_1801adcf0(DAT_1803c6520);
    DAT_1803c6520 = 0;
  }
  FUN_1801adcf0(DAT_1803c6518);
  DAT_1803c6518 = 0;
  DAT_1803c6544 = 0;
  return;
}



// ===== FUN_1801942e0 @ 1801942e0 (size 137)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801942e0(void)

{
  if (DAT_1803c6540 != 0) {
    if ((DAT_1803c6528 != 0) && (*(code **)(DAT_1803c6528 + 0x10) != (code *)0x0)) {
      (**(code **)(DAT_1803c6528 + 0x10))();
    }
    FUN_180194170(0);
    _guard_check_icall();
    FUN_1801adcf0(DAT_1803c6518);
    DAT_1803c6518 = 0;
    FUN_1801adcf0(DAT_1803c6520);
    DAT_1803c6520 = 0;
    FUN_1801adcf0(DAT_1803c6538);
    DAT_1803c6538 = 0;
    DAT_1803c6540 = 0;
  }
  return;
}



// ===== FUN_1801943b0 @ 1801943b0 (size 80)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801943b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_180195f20(param_2,param_3,"crypto\\rand\\rand_lib.c",0xe1);
    return;
  }
  FUN_1801b7560();
  return;
}



// ===== FUN_180194430 @ 180194430 (size 83)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180194430(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = FUN_1801b8d00();
  if (iVar3 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = 0;
  param_1[6] = 0;
  *param_2 = uVar1;
  return uVar2;
}



// ===== FUN_180194490 @ 180194490 (size 785)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180194490(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,
                      undefined8 param_5,int param_6)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar9;
  undefined4 uVar11;
  longlong *plVar10;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar8 = 0;
  local_res8 = param_1;
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 8) + 0x30) < *(int *)(param_1 + 0x30))) {
    FUN_1801a70c0(0x24,0x78,0x83,"crypto\\rand\\rand_lib.c",0x8f);
    return 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_180194e90(param_3,*(undefined4 *)(param_1 + 0x10),param_4,param_5);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
  }
  else {
    plVar3[7] = (longlong)param_3;
  }
  if (*(longlong *)(local_res8 + 8) == 0) {
    if (param_6 != 0) {
      FUN_1801a70c0(0x24,0x78,0x85,"crypto\\rand\\rand_lib.c",0xc3);
      goto LAB_180194771;
    }
    uVar4 = FUN_1801b8ba0(plVar3);
LAB_18019475b:
    if (uVar4 != 0) {
      lVar6 = *plVar3;
      lVar8 = plVar3[1];
      *plVar3 = 0;
      plVar3[6] = 0;
      *param_2 = lVar6;
    }
  }
  else {
    lVar6 = plVar3[7] - plVar3[6];
    uVar4 = plVar3[1];
    if ((ulonglong)plVar3[7] <= (ulonglong)plVar3[6]) {
      lVar6 = 0;
    }
    uVar7 = lVar6 + 7U >> 3;
    if (plVar3[4] - uVar4 < uVar7) {
      uVar9 = 0x2a7;
      uVar5 = 0x73;
    }
    else {
      if ((uVar4 < (ulonglong)plVar3[3]) && (uVar4 = plVar3[3] - uVar4, uVar7 < uVar4)) {
        uVar7 = uVar4;
      }
      iVar2 = FUN_180194d20(plVar3,uVar7);
      if (iVar2 == 0) {
        plVar3[1] = 0;
        plVar3[4] = 0;
        goto LAB_180194771;
      }
      if (uVar7 == 0) goto LAB_180194771;
      if (uVar7 <= (ulonglong)(plVar3[4] - plVar3[1])) {
        if (*plVar3 == 0) {
          FUN_1801a70c0(0x24,0x71,0x44,"crypto\\rand\\rand_lib.c",CONCAT44(uVar11,0x316));
          goto LAB_180194771;
        }
        iVar2 = FUN_180194d20(plVar3,uVar7);
        if ((iVar2 == 0) || (lVar6 = *plVar3, lVar1 = plVar3[1], lVar6 + lVar1 == 0))
        goto LAB_180194771;
        FUN_1801b8780(*(undefined8 *)(local_res8 + 8));
        plVar10 = &local_res8;
        iVar2 = FUN_1801b7d20(*(undefined8 *)(local_res8 + 8),lVar6 + lVar1,uVar7,param_6,plVar10,8)
        ;
        uVar11 = (undefined4)((ulonglong)plVar10 >> 0x20);
        uVar4 = 0;
        if ((iVar2 != 0) && (uVar4 = uVar7, *(int *)(local_res8 + 0x88) != 0)) {
          *(undefined4 *)(local_res8 + 0x8c) = *(undefined4 *)(*(longlong *)(local_res8 + 8) + 0x8c)
          ;
        }
        FUN_1801b8b70(*(undefined8 *)(local_res8 + 8));
        if ((ulonglong)(plVar3[5] - plVar3[1]) < uVar4) {
          FUN_1801a70c0(0x24,0x72,0x7d,"crypto\\rand\\rand_lib.c",CONCAT44(uVar11,0x335));
        }
        else if (uVar4 != 0) {
          plVar3[1] = plVar3[1] + uVar4;
          plVar3[6] = plVar3[6] + uVar4 * 8;
        }
        uVar4 = plVar3[6];
        if ((uVar4 < (ulonglong)plVar3[7]) || ((ulonglong)plVar3[1] < (ulonglong)plVar3[3]))
        goto LAB_180194771;
        goto LAB_18019475b;
      }
      uVar9 = CONCAT44(uVar11,0x311);
      uVar5 = 0x71;
    }
    FUN_1801a70c0(0x24,uVar5,0x7d,"crypto\\rand\\rand_lib.c",uVar9);
  }
LAB_180194771:
  if (*(longlong *)(local_res8 + 0x20) == 0) {
    FUN_180194cb0(plVar3);
  }
  return lVar8;
}



// ===== FUN_1801947b0 @ 1801947b0 (size 347)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801947b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar6 = 0;
  plVar4 = (longlong *)FUN_180194e90(0,0,param_4,param_5);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  iVar3 = FUN_1801b8d70(plVar4);
  if (iVar3 != 0) {
    local_18 = param_1;
    FUN_1801ade70(&DAT_1803c6534,1,&uStack_10,DAT_1803c6538);
    uVar1 = plVar4[1];
    if (plVar4[4] - uVar1 < 0x10) {
      FUN_1801a70c0(0x24,0x67,0x6a,"crypto\\rand\\rand_lib.c",0x2d8);
    }
    else {
      if (*plVar4 == 0) {
        uVar7 = 0x2dd;
      }
      else {
        if (((ulonglong)plVar4[5] <= uVar1) || ((undefined8 *)(*plVar4 + uVar1) != &local_18)) {
          iVar3 = FUN_180194d20(plVar4,0x10);
          if (iVar3 != 0) {
            puVar5 = (undefined4 *)(plVar4[1] + *plVar4);
            *puVar5 = (undefined4)local_18;
            puVar5[1] = local_18._4_4_;
            puVar5[2] = (undefined4)uStack_10;
            puVar5[3] = uStack_10._4_4_;
            plVar4[1] = plVar4[1] + 0x10;
            lVar2 = *plVar4;
            lVar6 = plVar4[1];
            *plVar4 = 0;
            plVar4[6] = 0;
            *param_2 = lVar2;
          }
          goto LAB_1801948ea;
        }
        uVar7 = 0x2eb;
      }
      FUN_1801a70c0(0x24,0x67,0x44,"crypto\\rand\\rand_lib.c",uVar7);
    }
  }
LAB_1801948ea:
  FUN_180194cb0(plVar4);
  return lVar6;
}



// ===== FUN_180194910 @ 180194910 (size 233)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180194910(longlong *param_1,void *param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[1];
  if (param_1[4] - uVar1 < param_3) {
    FUN_1801a70c0(0x24,0x67,0x6a,"crypto\\rand\\rand_lib.c",0x2d8,0x18019492a);
    return 0;
  }
  if (*param_1 == 0) {
    uVar4 = 0x2dd;
LAB_18019497d:
    FUN_1801a70c0(0x24,0x67,0x44,"crypto\\rand\\rand_lib.c",uVar4,0x18019492a);
    uVar3 = 0;
  }
  else {
    if (param_3 != 0) {
      if ((uVar1 < (ulonglong)param_1[5]) && ((void *)(*param_1 + uVar1) == param_2)) {
        uVar4 = 0x2eb;
        goto LAB_18019497d;
      }
      iVar2 = FUN_180194d20(param_1,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      memcpy((void *)(*param_1 + param_1[1]),param_2,param_3);
      param_1[1] = param_1[1] + param_3;
      param_1[6] = param_1[6] + param_4;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FUN_180194a00 @ 180194a00 (size 144)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180194a00(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if ((ulonglong)(param_1[4] - param_1[1]) < param_2) {
      FUN_1801a70c0(0x24,0x71,0x7d,"crypto\\rand\\rand_lib.c",0x311,0x180194a0c);
    }
    else {
      if (*param_1 == 0) {
        FUN_1801a70c0(0x24,0x71,0x44,"crypto\\rand\\rand_lib.c",0x316,0x180194a0c);
        return 0;
      }
      iVar1 = FUN_180194d20();
      if (iVar1 != 0) {
        return param_1[1] + *param_1;
      }
    }
  }
  return 0;
}



// ===== FUN_180194a90 @ 180194a90 (size 95)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180194a90(longlong param_1,ulonglong param_2,longlong param_3)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 8)) < param_2) {
    FUN_1801a70c0(0x24,0x72,0x7d,"crypto\\rand\\rand_lib.c",0x335);
    return 0;
  }
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + param_3;
    *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_2;
  }
  return 1;
}



// ===== FUN_180194af0 @ 180194af0 (size 153)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_180194af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x180194b05;
  puVar1 = (undefined8 *)FUN_180196100(0x40,"crypto\\rand\\rand_lib.c",0x1e7);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1801a70c0(0x24,0x7c,0x41,"crypto\\rand\\rand_lib.c",0x1ea,uVar2);
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[5] = param_2;
  puVar1[4] = param_2;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 2) = 1;
  puVar1[6] = param_3;
  return puVar1;
}



// ===== FUN_180194b90 @ 180194b90 (size 255)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_180194b90(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x38) - *(ulonglong *)(param_1 + 0x30);
  if (*(ulonglong *)(param_1 + 0x38) <= *(ulonglong *)(param_1 + 0x30)) {
    lVar3 = 0;
  }
  if (param_2 == 0) {
    FUN_1801a70c0(0x24,0x73,0x69,"crypto\\rand\\rand_lib.c",0x29f,0x180194ba0);
    return 0;
  }
  uVar2 = *(ulonglong *)(param_1 + 8);
  uVar4 = (ulonglong)param_2 * lVar3 + 7 >> 3;
  if (*(longlong *)(param_1 + 0x20) - uVar2 < uVar4) {
    FUN_1801a70c0(0x24,0x73,0x7d,"crypto\\rand\\rand_lib.c",0x2a7,0x180194ba0);
    return 0;
  }
  if ((uVar2 < *(ulonglong *)(param_1 + 0x18)) &&
     (uVar2 = *(ulonglong *)(param_1 + 0x18) - uVar2, uVar4 < uVar2)) {
    uVar4 = uVar2;
  }
  iVar1 = FUN_180194d20(param_1,uVar4);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return 0;
  }
  return uVar4;
}



// ===== FUN_180194cb0 @ 180194cb0 (size 99)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180194cb0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 2) == 0) {
      if (*(int *)((longlong)param_1 + 0x14) == 0) {
        FUN_180195f20(*param_1,param_1[5],"crypto\\rand\\rand_lib.c",0x210);
      }
      else {
        FUN_1801b7560();
      }
    }
    FUN_180195e10(param_1,"crypto\\rand\\rand_lib.c",0x213);
  }
  return;
}



// ===== FUN_180194d20 @ 180194d20 (size 353)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180194d20(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = 0x180194d35;
  uVar3 = param_1[5];
  lVar1 = param_1[1];
  if (uVar3 - lVar1 < param_2) {
    uVar2 = param_1[4];
    if ((*(int *)(param_1 + 2) != 0) || (uVar2 - lVar1 < param_2)) {
      FUN_1801a70c0(0x24,0x7d,0x44,"crypto\\rand\\rand_lib.c",0x278,0x180194d35);
      return 0;
    }
    do {
      bVar4 = uVar2 >> 1 <= uVar3;
      uVar3 = uVar3 * 2;
      if (bVar4) {
        uVar3 = uVar2;
      }
    } while (uVar3 - lVar1 < param_2);
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      _Dst = (void *)FUN_180196100(uVar3,"crypto\\rand\\rand_lib.c",0x283);
    }
    else {
      _Dst = (void *)FUN_1801b75f0(uVar3,"crypto\\rand\\rand_lib.c",0x281);
    }
    if (_Dst == (void *)0x0) {
      FUN_1801a70c0(0x24,0x7d,0x41,"crypto\\rand\\rand_lib.c",0x285,uVar5);
      return 0;
    }
    memcpy(_Dst,(void *)*param_1,param_1[1]);
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_180195f20(*param_1,param_1[5],"crypto\\rand\\rand_lib.c",0x28c);
    }
    else {
      FUN_1801b7560();
    }
    *param_1 = _Dst;
    param_1[5] = uVar3;
  }
  return 1;
}



// ===== FUN_180194e90 @ 180194e90 (size 352)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_180194e90(int param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x180194ea9;
  uVar5 = 0x30;
  if (param_2 != 0) {
    uVar5 = 0x10;
  }
  iVar1 = FUN_1801addb0(&DAT_1803c6530,FUN_180194220);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = DAT_1803c6544;
  }
  if (iVar4 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)FUN_180196100(0x40,"crypto\\rand\\rand_lib.c",0x1bd);
    if (plVar2 == (longlong *)0x0) {
      FUN_1801a70c0(0x24,0x74,0x41,"crypto\\rand\\rand_lib.c",0x1bf,uVar6);
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2[3] = param_3;
      if (0x3000 < param_4) {
        param_4 = 0x3000;
      }
      plVar2[4] = param_4;
      if (param_3 < uVar5) {
        param_3 = uVar5;
      }
      plVar2[5] = param_3;
      if (param_4 < param_3) {
        plVar2[5] = param_4;
        param_3 = param_4;
      }
      if (param_2 == 0) {
        lVar3 = FUN_180196100(param_3,"crypto\\rand\\rand_lib.c",0x1cd);
      }
      else {
        lVar3 = FUN_1801b75f0(param_3,"crypto\\rand\\rand_lib.c",0x1cb);
      }
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        FUN_1801a70c0(0x24,0x74,0x41,"crypto\\rand\\rand_lib.c",0x1d0,uVar6);
        FUN_180195e10(plVar2,"crypto\\rand\\rand_lib.c",0x1da);
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2[7] = (longlong)param_1;
        *(int *)((longlong)plVar2 + 0x14) = param_2;
      }
    }
  }
  return plVar2;
}



// ===== FUN_180194ff0 @ 180194ff0 (size 356)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180194ff0(undefined1 *param_1,undefined4 *param_2)

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
    FUN_18000a280(param_2,puVar1,1);
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
  FUN_18000a280(param_2,puVar1,1);
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



// ===== FUN_180195160 @ 180195160 (size 74)

undefined8 FUN_180195160(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}



// ===== FUN_1801951d0 @ 1801951d0 (size 307)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801951d0(longlong param_1,void *param_2,size_t param_3)

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
      FUN_18000a280(param_1,puVar1,1);
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
      FUN_18000a280(param_1,param_2,uVar4);
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



// ===== FUN_180195310 @ 180195310 (size 353)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_180195310(int *param_1,code *param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 0x180195324;
  piVar3 = (int *)FUN_180195dc0(0x20,"crypto\\stack\\stack.c",0x50);
  if (piVar3 == (int *)0x0) {
    FUN_1801a70c0(0xf,0x7f,0x41,"crypto\\stack\\stack.c",0x51,uVar7);
    return (int *)0x0;
  }
  iVar6 = param_1[1];
  iVar2 = param_1[2];
  iVar1 = param_1[3];
  *piVar3 = *param_1;
  piVar3[1] = iVar6;
  piVar3[2] = iVar2;
  piVar3[3] = iVar1;
  iVar6 = param_1[5];
  iVar2 = param_1[6];
  iVar1 = param_1[7];
  piVar3[4] = param_1[4];
  piVar3[5] = iVar6;
  piVar3[6] = iVar2;
  piVar3[7] = iVar1;
  iVar6 = *param_1;
  if (iVar6 == 0) {
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[5] = 0;
  }
  else {
    iVar2 = 4;
    if (4 < iVar6) {
      iVar2 = iVar6;
    }
    piVar3[5] = iVar2;
    lVar4 = FUN_180196100((longlong)iVar2 << 3,"crypto\\stack\\stack.c",0x60);
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 == 0) {
      FUN_180195e10(piVar3,"crypto\\stack\\stack.c",0x62);
      piVar3 = (int *)0x0;
    }
    else {
      iVar6 = 0;
      if (0 < *piVar3) {
        lVar4 = 0;
        do {
          if (*(longlong *)(lVar4 + *(longlong *)(param_1 + 2)) != 0) {
            lVar5 = (*param_2)();
            *(longlong *)(lVar4 + *(longlong *)(piVar3 + 2)) = lVar5;
            if (lVar5 == 0) {
              lVar4 = (longlong)(iVar6 + -1);
              if (-1 < iVar6 + -1) {
                do {
                  if (*(longlong *)(*(longlong *)(piVar3 + 2) + lVar4 * 8) != 0) {
                    (*param_3)();
                  }
                  lVar4 = lVar4 + -1;
                } while (-1 < lVar4);
              }
              FUN_180195650(piVar3);
              return (int *)0x0;
            }
          }
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar6 < *piVar3);
      }
    }
  }
  return piVar3;
}



// ===== FUN_1801954b0 @ 1801954b0 (size 132)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1801954b0(int *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = *param_1;
  iVar3 = 0;
  if (0 < iVar5) {
    plVar1 = *(longlong **)(param_1 + 2);
    plVar4 = plVar1;
    do {
      if (*plVar4 == param_2) {
        lVar2 = plVar1[iVar3];
        if (iVar3 != iVar5 + -1) {
          memmove(plVar1 + iVar3,plVar1 + (iVar3 + 1),(longlong)((iVar5 - iVar3) + -1) << 3);
          iVar5 = *param_1;
        }
        *param_1 = iVar5 + -1;
        return lVar2;
      }
      iVar3 = iVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (iVar3 < iVar5);
  }
  return 0;
}



// ===== FUN_180195540 @ 180195540 (size 225)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_180195540(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *_Dst;
  undefined8 uVar5;
  
  uVar5 = 0x180195550;
  piVar4 = (int *)FUN_180195dc0(0x20,"crypto\\stack\\stack.c",0x31);
  if (piVar4 == (int *)0x0) {
    FUN_1801a70c0(0xf,0x80,0x41,"crypto\\stack\\stack.c",0x32,uVar5);
    return (int *)0x0;
  }
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  *piVar4 = *param_1;
  piVar4[1] = iVar1;
  piVar4[2] = iVar2;
  piVar4[3] = iVar3;
  iVar1 = param_1[5];
  iVar2 = param_1[6];
  iVar3 = param_1[7];
  piVar4[4] = param_1[4];
  piVar4[5] = iVar1;
  piVar4[6] = iVar2;
  piVar4[7] = iVar3;
  if (*param_1 == 0) {
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[5] = 0;
    return piVar4;
  }
  _Dst = (void *)FUN_180195dc0((longlong)param_1[5] << 3,"crypto\\stack\\stack.c",0x40);
  *(void **)(piVar4 + 2) = _Dst;
  if (_Dst == (void *)0x0) {
    FUN_180195650(piVar4);
    return (int *)0x0;
  }
  memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 << 3);
  return piVar4;
}



// ===== FUN_180195650 @ 180195650 (size 71)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180195650(longlong param_1)

{
  if (param_1 != 0) {
    FUN_180195e10(*(undefined8 *)(param_1 + 8),"crypto\\stack\\stack.c",0x178);
    FUN_180195e10(param_1,"crypto\\stack\\stack.c",0x179);
  }
  return;
}



// ===== FUN_1801956a0 @ 1801956a0 (size 226)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1801956a0(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0x7fffffff)) {
    iVar1 = FUN_180195c30(param_1,1,0);
    if (iVar1 != 0) {
      iVar1 = *param_1;
      if ((param_3 < iVar1) && (-1 < param_3)) {
        memmove((void *)(*(longlong *)(param_1 + 2) + (longlong)(param_3 + 1) * 8),
                (void *)((longlong)param_3 * 8 + *(longlong *)(param_1 + 2)),
                (longlong)(iVar1 - param_3) << 3);
        *(undefined8 *)((longlong)param_3 * 8 + *(longlong *)(param_1 + 2)) = param_2;
        iVar1 = *param_1;
        *param_1 = iVar1 + 1;
        param_1[4] = 0;
        return iVar1 + 1;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = param_2;
      iVar1 = *param_1;
      param_1[4] = 0;
      *param_1 = iVar1 + 1;
      return iVar1 + 1;
    }
  }
  return 0;
}



// ===== FUN_180195820 @ 180195820 (size 130)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180195820(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_180196100(0x20,"crypto\\stack\\stack.c",0xd1);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  if ((param_2 < 1) || (iVar1 = FUN_180195c30(lVar2,param_2,1), iVar1 != 0)) {
    return lVar2;
  }
  FUN_180195650(lVar2);
  return 0;
}



// ===== FUN_1801958f0 @ 1801958f0 (size 153)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801958f0(int *param_1,code *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    if (0 < *param_1) {
      lVar2 = 0;
      do {
        if (*(longlong *)(lVar2 + *(longlong *)(param_1 + 2)) != 0) {
          (*param_2)();
        }
        iVar1 = iVar1 + 1;
        lVar2 = lVar2 + 8;
      } while (iVar1 < *param_1);
    }
    FUN_180195e10(*(undefined8 *)(param_1 + 2),"crypto\\stack\\stack.c",0x178);
    FUN_180195e10(param_1,"crypto\\stack\\stack.c",0x179);
  }
  return;
}



// ===== FUN_180195a90 @ 180195a90 (size 77)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180195a90(int *param_1)

{
  if (((param_1 != (int *)0x0) && (param_1[4] == 0)) &&
     (*(_PtFuncCompare **)(param_1 + 6) != (_PtFuncCompare *)0x0)) {
    if (1 < *param_1) {
      qsort(*(void **)(param_1 + 2),(longlong)*param_1,8,*(_PtFuncCompare **)(param_1 + 6));
    }
    param_1[4] = 1;
  }
  return;
}



// ===== FUN_180195b00 @ 180195b00 (size 94)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180195b00(int *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 2);
  iVar3 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + (longlong)param_2 * 8);
  if (param_2 != iVar3 + -1) {
    memmove((void *)(lVar1 + (longlong)param_2 * 8),(void *)(lVar1 + (longlong)(param_2 + 1) * 8),
            (longlong)((iVar3 - param_2) + -1) << 3);
    iVar3 = *param_1;
  }
  *param_1 = iVar3 + -1;
  return uVar2;
}



// ===== FUN_180195b60 @ 180195b60 (size 207)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_180195b60(int *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res10 [3];
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (*(_PtFuncCompare **)(param_1 + 6) == (_PtFuncCompare *)0x0) {
        if (0 < iVar1) {
          plVar5 = *(longlong **)(param_1 + 2);
          uVar3 = 0;
          do {
            if (*plVar5 == param_2) {
              return uVar3;
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
            plVar5 = plVar5 + 1;
          } while ((int)uVar2 < iVar1);
        }
      }
      else {
        local_res10[0] = param_2;
        if (param_1[4] == 0) {
          if (1 < iVar1) {
            qsort(*(void **)(param_1 + 2),(longlong)iVar1,8,*(_PtFuncCompare **)(param_1 + 6));
          }
          param_1[4] = 1;
        }
        if ((local_res10[0] != 0) &&
           (lVar4 = FUN_1801b8fa0(local_res10,*(undefined8 *)(param_1 + 2),*param_1,8,
                                  *(undefined8 *)(param_1 + 6),param_3), lVar4 != 0)) {
          return lVar4 - *(longlong *)(param_1 + 2) >> 3;
        }
      }
    }
  }
  return 0xffffffff;
}



// ===== FUN_180195c30 @ 180195c30 (size 267)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180195c30(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x180195c40;
  if (0x7fffffff - *param_1 < param_2) {
    return 0;
  }
  param_2 = *param_1 + param_2;
  if (param_2 < 4) {
    param_2 = 4;
  }
  if (*(longlong *)(param_1 + 2) == 0) {
    lVar1 = FUN_180196100((longlong)param_2 << 3,"crypto\\stack\\stack.c",0xb4);
    *(longlong *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
      FUN_1801a70c0(0xf,0x81,0x41,"crypto\\stack\\stack.c",0xb5,uVar3);
      return 0;
    }
  }
  else {
    iVar2 = param_1[5];
    if (param_3 == 0) {
      if (param_2 <= iVar2) {
        return 1;
      }
      do {
        if (0x7ffffffe < iVar2) {
          return 0;
        }
        if (iVar2 < 0x55555555) {
          iVar2 = iVar2 + iVar2 / 2;
        }
        else {
          iVar2 = 0x7fffffff;
        }
      } while (iVar2 < param_2);
      param_2 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
    }
    else if (param_2 == iVar2) {
      return 1;
    }
    lVar1 = FUN_180195e50(*(longlong *)(param_1 + 2),(longlong)param_2 << 3,"crypto\\stack\\stack.c"
                          ,0xc6);
    if (lVar1 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 2) = lVar1;
  }
  param_1[5] = param_2;
  return 1;
}



// ===== FUN_180195d40 @ 180195d40 (size 83)

char * FUN_180195d40(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "OpenSSL 1.1.1w  11 Sep 2023";
  case 1:
    return 
    "compiler: cl /Z7 /Fdossl_static.pdb /MD /Zl /Gs0 /GF /Gy /W3 /wd4090 /nologo /O2 -DL_ENDIAN -DOPENSSL_PIC -DOPENSSL_CPUID_OBJ -DOPENSSL_IA32_SSE2 -DOPENSSL_BN_ASM_MONT -DOPENSSL_BN_ASM_MONT5 -DOPENSSL_BN_ASM_GF2m -DSHA1_ASM -DSHA256_ASM -DSHA512_ASM -DKECCAK1600_ASM -DRC4_ASM -DMD5_ASM -DAESNI_ASM -DVPAES_ASM -DGHASH_ASM -DECP_NISTZ256_ASM -DX25519_ASM -DPOLY1305_ASM -D_USING_V110_SDK71_ -D_WINSOCK_DEPRECATED_NO_WARNINGS -D_WIN32_WINNT=0x0502"
    ;
  case 2:
    return "built on: Wed Sep 27 21:22:38 2023 UTC";
  case 3:
    return "platform: VC-WIN64A";
  case 4:
    return "OPENSSLDIR: \"C:\\Program Files\\Common Files\\SSL\"";
  case 5:
    return "ENGINESDIR: \"C:\\Program Files\\OpenSSL\\lib\\engines-1_1\"";
  default:
    return "not available";
  }
}



// ===== FUN_180195dc0 @ 180195dc0 (size 77)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_180195dc0(size_t param_1)

{
  void *pvVar1;
  
  if ((PTR_FUN_1803bdc20 != (undefined *)0x0) && ((code *)PTR_FUN_1803bdc20 != FUN_180195dc0)) {
                    /* WARNING: Could not recover jumptable at 0x000180195de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_FUN_1803bdc20)();
    return pvVar1;
  }
  if (param_1 == 0) {
    return (void *)0x0;
  }
  _DAT_1803bdc18 = 0;
                    /* WARNING: Could not recover jumptable at 0x000180195e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(param_1);
  return pvVar1;
}



// ===== FUN_180195e50 @ 180195e50 (size 201)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_180195e50(void *param_1,size_t param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  
  if ((PTR_FUN_1803bdc28 != (undefined *)0x0) && ((code *)PTR_FUN_1803bdc28 != FUN_180195e50)) {
                    /* WARNING: Could not recover jumptable at 0x000180195e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_FUN_1803bdc28)(param_1,param_2);
    return pvVar1;
  }
  if (param_1 == (void *)0x0) {
    if ((PTR_FUN_1803bdc20 != (undefined *)0x0) && ((code *)PTR_FUN_1803bdc20 != FUN_180195dc0)) {
                    /* WARNING: Could not recover jumptable at 0x000180195eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = (void *)(*(code *)PTR_FUN_1803bdc20)(param_2,param_3,param_4);
      return pvVar1;
    }
    if (param_2 == 0) {
      return (void *)0x0;
    }
    _DAT_1803bdc18 = 0;
                    /* WARNING: Could not recover jumptable at 0x000180195ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = malloc(param_2);
    return pvVar1;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180195f0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = realloc(param_1,param_2);
    return pvVar1;
  }
  if ((PTR_FUN_1803bdc30 == (undefined *)0x0) || ((code *)PTR_FUN_1803bdc30 == FUN_180195e10)) {
    free(param_1);
    return (void *)0x0;
  }
  (*(code *)PTR_FUN_1803bdc30)(param_1,param_3,param_4,param_4,0x180195e5a);
  return (void *)0x0;
}



// ===== FUN_180195f20 @ 180195f20 (size 124)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180195f20(void *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_1 != (void *)0x0) {
    if (param_2 != 0) {
      FUN_180001240();
    }
    if ((PTR_FUN_1803bdc30 != (undefined *)0x0) && ((code *)PTR_FUN_1803bdc30 != FUN_180195e10)) {
                    /* WARNING: Could not recover jumptable at 0x000180195f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_FUN_1803bdc30)(param_1,param_3,param_4);
      return;
    }
    free(param_1);
  }
  return;
}



// ===== FUN_180195fa0 @ 180195fa0 (size 302)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_180195fa0(void *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                    undefined4 param_5)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    if ((PTR_FUN_1803bdc20 != (undefined *)0x0) && ((code *)PTR_FUN_1803bdc20 != FUN_180195dc0)) {
      pvVar1 = (void *)(*(code *)PTR_FUN_1803bdc20)(param_3,param_4,param_5);
      return pvVar1;
    }
    pvVar1 = (void *)0x0;
    if (param_3 != 0) {
      _DAT_1803bdc18 = 0;
      pvVar1 = malloc(param_3);
    }
    return pvVar1;
  }
  if (param_3 == 0) {
    FUN_180195f20(param_1,param_2,param_4,param_5);
    return (void *)0x0;
  }
  if (param_3 < param_2) {
    FUN_180001240((longlong)param_1 + param_3,param_2 - param_3);
    return param_1;
  }
  pvVar1 = (void *)FUN_180195dc0(param_3,param_4,param_5);
  if (pvVar1 != (void *)0x0) {
    memcpy(pvVar1,param_1,param_2);
    FUN_180195f20(param_1,param_2,param_4,param_5);
  }
  return pvVar1;
}



// ===== FUN_180196100 @ 180196100 (size 125)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_180196100(size_t param_1)

{
  void *_Dst;
  
  if ((PTR_FUN_1803bdc20 == (undefined *)0x0) || ((code *)PTR_FUN_1803bdc20 == FUN_180195dc0)) {
    if (param_1 == 0) {
      return (void *)0x0;
    }
    _DAT_1803bdc18 = 0;
    _Dst = malloc(param_1);
  }
  else {
    _Dst = (void *)(*(code *)PTR_FUN_1803bdc20)(param_1);
  }
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_1);
  }
  return _Dst;
}



// ===== FUN_180196180 @ 180196180 (size 73)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_180196180(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  
  if ((*(int *)(param_1 + 0x20) == 0) || (param_2 == (void *)0x0)) {
    return 0;
  }
  sVar2 = fwrite(param_2,(longlong)param_3,1,*(FILE **)(param_1 + 0x38));
  iVar1 = 0;
  if ((int)sVar2 != 0) {
    iVar1 = param_3;
  }
  return iVar1;
}



// ===== FUN_1801961d0 @ 1801961d0 (size 189)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1801961d0(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1801961dc;
  if ((*(int *)(param_1 + 0x20) == 0) || (param_2 == (void *)0x0)) {
    return 0;
  }
  sVar3 = fread(param_2,1,(longlong)param_3,*(FILE **)(param_1 + 0x38));
  iVar1 = ferror(*(FILE **)(param_1 + 0x38));
  if (iVar1 == 0) {
    return sVar3 & 0xffffffff;
  }
  DVar2 = GetLastError();
  FUN_1801a70c0(2,0xb,DVar2,"crypto\\bio\\bss_file.c",0x95,uVar4);
  FUN_1801a70c0(0x20,0x82,2,"crypto\\bio\\bss_file.c",0x96);
  return 0xffffffff;
}



// ===== FUN_180196290 @ 180196290 (size 100)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_180196290(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  size_t sVar4;
  uint uVar5;
  
  cVar1 = *param_2;
  pcVar3 = param_2;
  for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  sVar4 = fwrite(param_2,(ulonglong)(uVar5 & 0x7fffffff),1,*(FILE **)(param_1 + 0x38));
  uVar2 = 0;
  if ((int)sVar4 != 0) {
    uVar2 = uVar5 & 0x7fffffff;
  }
  return uVar2;
}



// ===== FUN_180196300 @ 180196300 (size 88)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_180196300(longlong param_1,char *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  *param_2 = '\0';
  pcVar1 = fgets(param_2,param_3,*(FILE **)(param_1 + 0x38));
  if ((pcVar1 != (char *)0x0) && (*param_2 != '\0')) {
    do {
      if (0x7fffffff < uVar2) break;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
    } while (*param_2 != '\0');
    uVar2 = uVar2 & 0x7fffffff;
  }
  return uVar2;
}



// ===== FUN_180196360 @ 180196360 (size 652)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_180196360(longlong param_1,undefined4 param_2,uint param_3,FILE *param_4)

{
  FILE *_File;
  int iVar1;
  int _FileHandle;
  DWORD DVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined *puVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  puVar7 = (undefined *)0x18019637b;
  iVar1 = 1;
  _File = *(FILE **)(param_1 + 0x38);
  switch(param_2) {
  case 1:
  case 0x80:
    iVar1 = fseek(_File,param_3,0);
    break;
  case 2:
    iVar1 = feof(_File);
    break;
  case 3:
  case 0x85:
    iVar1 = ftell(_File);
    break;
  default:
    goto switchD_1801963ba_caseD_4;
  case 8:
    iVar1 = *(int *)(param_1 + 0x24);
    break;
  case 9:
    *(uint *)(param_1 + 0x24) = param_3;
    break;
  case 0xb:
    iVar1 = fflush(_File);
    if (iVar1 != -1) {
      return 1;
    }
    DVar2 = GetLastError();
    FUN_1801a70c0(2,0x12,DVar2,"crypto\\bio\\bss_file.c",CONCAT44(uVar6,0x13c),puVar7);
    FUN_1801a6360(1,"fflush()");
    uVar5 = 0x13e;
LAB_1801965b8:
    uVar4 = 2;
    goto LAB_1801965be;
  case 0xc:
    break;
  case 0x6a:
    FUN_1801966c0(param_1);
    *(FILE **)(param_1 + 0x38) = param_4;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(uint *)(param_1 + 0x24) = param_3 & 1;
    _FileHandle = _fileno(param_4);
    if ((param_3 & 0x10) == 0) {
      _setmode(_FileHandle,0x8000);
    }
    else {
      _setmode(_FileHandle,0x4000);
    }
    break;
  case 0x6b:
    if (param_4 != (FILE *)0x0) {
      param_4->_ptr = (char *)_File;
    }
    break;
  case 0x6c:
    FUN_1801966c0(param_1);
    *(uint *)(param_1 + 0x24) = param_3 & 1;
    if ((param_3 & 8) != 0) {
      puVar7 = &DAT_18030be08;
      if ((param_3 & 2) == 0) {
        puVar7 = &DAT_180308400;
      }
LAB_18019648e:
      FUN_1801ba810(local_res10,puVar7,4);
      puVar7 = &DAT_18030be18;
      if ((param_3 & 0x10) != 0) {
        puVar7 = &DAT_18030be1c;
      }
      FUN_1801ba790(local_res10,puVar7,4);
      lVar3 = FUN_1801ba8c0(param_4,local_res10);
      if (lVar3 != 0) {
        *(longlong *)(param_1 + 0x38) = lVar3;
        *(undefined4 *)(param_1 + 0x20) = 1;
        FUN_18018cf60(param_1,0);
        return 1;
      }
      DVar2 = GetLastError();
      FUN_1801a70c0(2,1,DVar2,"crypto\\bio\\bss_file.c",CONCAT44(uVar6,0x120));
      puVar7 = &DAT_18030bdf8;
      FUN_1801a6360(5,"fopen(\'",param_4,&DAT_18030bdfc,local_res10,&DAT_18030bdf8);
      uVar5 = 0x122;
      goto LAB_1801965b8;
    }
    if (((byte)param_3 & 6) == 6) {
      puVar7 = &DAT_18030be0c;
      goto LAB_18019648e;
    }
    if ((param_3 & 4) != 0) {
      puVar7 = &DAT_18030be10;
      goto LAB_18019648e;
    }
    if ((param_3 & 2) != 0) {
      puVar7 = &DAT_18030be14;
      goto LAB_18019648e;
    }
    uVar5 = CONCAT44(uVar6,0x111);
    uVar4 = 0x65;
LAB_1801965be:
    FUN_1801a70c0(0x20,0x74,uVar4,"crypto\\bio\\bss_file.c",uVar5,puVar7);
switchD_1801963ba_caseD_4:
    iVar1 = 0;
  }
  return iVar1;
}



// ===== FUN_1801966c0 @ 1801966c0 (size 91)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801966c0(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if ((*(int *)(param_1 + 0x20) != 0) && (*(FILE **)(param_1 + 0x38) != (FILE *)0x0)) {
      fclose(*(FILE **)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return 1;
}



// ===== FUN_180196720 @ 180196720 (size 327)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180196720(undefined8 param_1,char *param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  FILE *_File;
  char *pcVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar7;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x180196740;
  _File = (FILE *)FUN_1801ba8c0();
  pcVar3 = strchr(param_2,0x62);
  uVar6 = 1;
  if (pcVar3 == (char *)0x0) {
    uVar6 = 0x11;
  }
  if (_File != (FILE *)0x0) {
    lVar5 = FUN_18018d7c0(&DAT_18030bd70);
    if (lVar5 == 0) {
      fclose(_File);
      return 0;
    }
    FUN_18018cf60(lVar5,0);
    FUN_18018cf90(lVar5,0x6a,uVar6,_File);
    return lVar5;
  }
  DVar1 = GetLastError();
  uVar6 = 2;
  FUN_1801a70c0(2,1,DVar1,"crypto\\bio\\bss_file.c",CONCAT44(uVar2,0x45),uVar7);
  FUN_1801a6360(5,"fopen(\'",param_1,&DAT_18030bdfc,param_2,&DAT_18030bdf8);
  piVar4 = _errno();
  if ((*piVar4 == 2) || (piVar4 = _errno(), *piVar4 == 6)) {
    uVar6 = 0x80;
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x4e;
  }
  FUN_1801a70c0(0x20,0x6d,uVar6,"crypto\\bio\\bss_file.c",uVar2);
  return 0;
}



// ===== FUN_180196870 @ 180196870 (size 113)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180196870(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18018d7c0(&DAT_18030bd70);
  if (lVar1 == 0) {
    return 0;
  }
  FUN_18018dc60(lVar1,0);
  FUN_18018cf90(lVar1,0x6a,param_2,param_1);
  return lVar1;
}



// ===== FUN_180196900 @ 180196900 (size 257)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_180196900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_888 [32];
  undefined1 *local_868;
  undefined8 local_860;
  undefined8 *local_858;
  longlong local_848;
  undefined4 local_840 [2];
  undefined1 local_838 [8];
  undefined8 local_830;
  undefined1 *local_828 [2];
  undefined1 local_818 [2048];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x18019691a;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_888;
  local_830 = 0x800;
  local_858 = &local_res18;
  local_848 = 0;
  local_828[0] = local_818;
  local_868 = local_838;
  local_res18 = param_3;
  local_res20 = param_4;
  local_860 = param_2;
  iVar1 = FUN_180196b80(local_828,&local_848,&local_830,local_840);
  if (iVar1 == 0) {
    FUN_180195e10(local_848,"crypto\\bio\\b_print.c",0x388);
    uVar2 = 0xffffffff;
  }
  else if (local_848 == 0) {
    uVar2 = FUN_18018dce0(param_1,local_818,local_840[0]);
  }
  else {
    uVar2 = FUN_18018dce0(param_1,local_848,local_840[0]);
    FUN_180195e10(local_848,"crypto\\bio\\b_print.c",0x38d);
  }
  return uVar2;
}



// ===== FUN_180196a10 @ 180196a10 (size 119)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_180196a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_res20;
  int local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10 [2];
  
  local_10[1] = 0x180196a24;
  local_res20 = param_4;
  local_20 = param_2;
  local_18 = param_1;
  iVar1 = FUN_180196b80(&local_18,0,&local_20,local_10,local_28,param_3,&local_res20);
  uVar2 = 0xffffffff;
  if ((iVar1 != 0) && (local_28[0] == 0)) {
    uVar2 = 0xffffffff;
    if (local_10[0] < 0x80000000) {
      uVar2 = local_10[0] & 0xffffffff;
    }
  }
  return uVar2;
}



// ===== FUN_180196a90 @ 180196a90 (size 235)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180196a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_888 [32];
  undefined1 *local_868;
  undefined8 local_860;
  undefined8 local_858;
  longlong local_848;
  undefined4 local_840 [2];
  undefined1 local_838 [8];
  undefined8 local_830;
  undefined1 *local_828 [2];
  undefined1 local_818 [2048];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x180196a9c;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_888;
  local_828[0] = local_818;
  local_868 = local_838;
  local_830 = 0x800;
  local_848 = 0;
  local_860 = param_2;
  local_858 = param_3;
  iVar1 = FUN_180196b80(local_828,&local_848,&local_830,local_840);
  if (iVar1 == 0) {
    FUN_180195e10(local_848,"crypto\\bio\\b_print.c",0x388);
    uVar2 = 0xffffffff;
  }
  else if (local_848 == 0) {
    uVar2 = FUN_18018dce0(param_1,local_818,local_840[0]);
  }
  else {
    uVar2 = FUN_18018dce0(param_1,local_848,local_840[0]);
    FUN_180195e10(local_848,"crypto\\bio\\b_print.c",0x38d);
  }
  return uVar2;
}



// ===== FUN_180196b80 @ 180196b80 (size 1596)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000180196c74) */
/* WARNING: Removing unreachable block (ram,0x000180196c9f) */

ulonglong FUN_180196b80(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                       undefined4 *param_5,char *param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong local_40;
  
  local_40 = 0;
  cVar1 = *param_6;
  if ((cVar1 != '\0') && ((param_2 != 0 || (*param_3 != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x000180196c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)((ulonglong)switchD_180196c2c::switchdataD_1801971bc + 0x180000000))
                      ((code *)((ulonglong)switchD_180196c2c::switchdataD_1801971bc + 0x180000000),
                       cVar1,param_7,cVar1);
    return uVar3;
  }
  if (param_2 == 0) {
    *param_5 = 0;
  }
  iVar2 = FUN_1801972b0(param_1,param_2,&local_40,param_3,0);
  if (iVar2 != 0) {
    *param_4 = local_40 + -1;
  }
  return (ulonglong)(iVar2 != 0);
}



// ===== FUN_1801972b0 @ 1801972b0 (size 291)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1801972b0(longlong *param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4,
             undefined1 param_5)

{
  ulonglong uVar1;
  void *_Dst;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1801972cb;
  if ((*param_1 != 0) || (param_2 != (longlong *)0x0)) {
    uVar1 = *param_4;
    if (*param_3 <= uVar1) {
      if ((param_2 == (longlong *)0x0) || (*param_3 != uVar1)) goto LAB_1801973ae;
      if (uVar1 < 0x7ffffc00) {
        uVar1 = uVar1 + 0x400;
        *param_4 = uVar1;
        if (*param_2 == 0) {
          _Dst = (void *)FUN_180195dc0(uVar1,"crypto\\bio\\b_print.c",0x34d);
          *param_2 = (longlong)_Dst;
          if (_Dst != (void *)0x0) {
            if (*param_3 != 0) {
              if ((void *)*param_1 == (void *)0x0) {
                return 0;
              }
              memcpy(_Dst,(void *)*param_1,*param_3);
            }
            *param_1 = 0;
LAB_1801973ae:
            if (*param_3 < *param_4) {
              lVar2 = *param_1;
              if (lVar2 == 0) {
                lVar2 = *param_2;
              }
              *(undefined1 *)(*param_3 + lVar2) = param_5;
              *param_3 = *param_3 + 1;
            }
            return 1;
          }
          FUN_1801a70c0(0x20,0x96,0x41,"crypto\\bio\\b_print.c",0x34e,uVar3);
        }
        else {
          lVar2 = FUN_180195e50(*param_2,uVar1,"crypto\\bio\\b_print.c",0x359);
          if (lVar2 != 0) {
            *param_2 = lVar2;
            goto LAB_1801973ae;
          }
        }
      }
    }
  }
  return 0;
}



// ===== FUN_1801973e0 @ 1801973e0 (size 1733)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1801973e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             double param_5,int param_6,int param_7,uint param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_e8 [32];
  uint local_c8;
  int local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  undefined8 local_a0;
  undefined1 auStack_98 [23];
  char acStack_81 [24];
  char acStack_69 [25];
  ulonglong local_50;
  
  local_50 = DAT_1803c3d80 ^ (ulonglong)auStack_e8;
  local_b0 = 0;
  uVar9 = 0;
  iVar4 = 0;
  local_ac = 0;
  iVar6 = 6;
  if (-1 < param_7) {
    iVar6 = param_7;
  }
  if (0.0 <= param_5) {
    if ((param_8 & 2) == 0) {
      local_b4 = 0;
      if ((param_8 & 4) != 0) {
        local_b4 = 0x20;
      }
    }
    else {
      local_b4 = 0x2b;
    }
  }
  else {
    local_b4 = 0x2d;
  }
  if (param_9 == 2) {
    if (param_5 == 0.0) goto LAB_1801974b7;
    if (param_5 < DAT_18030be50) {
      local_b8 = 1;
    }
    else if ((iVar6 != 0) || (param_5 < DAT_1802f9e00)) {
      if (0 < iVar6) {
        iVar7 = iVar6;
        dVar11 = DAT_18030be60;
        do {
          dVar11 = dVar11 * DAT_1802f9e00;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (dVar11 <= param_5) goto LAB_1801974f6;
      }
LAB_1801974b7:
      local_b8 = 0;
    }
    else {
LAB_1801974f6:
      local_b8 = 1;
    }
  }
  else {
    local_b8 = param_9;
    if (param_9 == 0) goto LAB_1801975ac;
  }
  dVar11 = param_5;
  if (param_5 != 0.0) {
    if (param_5 < DAT_18030be60) {
      do {
        dVar11 = dVar11 * DAT_1802f9e00;
        uVar9 = uVar9 - 1;
      } while (dVar11 < DAT_18030be60);
      local_ac = uVar9;
    }
    if (DAT_1802f9e00 < dVar11) {
      do {
        dVar11 = dVar11 / DAT_1802f9e00;
        local_ac = local_ac + 1;
      } while (DAT_1802f9e00 < dVar11);
    }
  }
  if (param_9 == 2) {
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    if (local_b8 == 0) {
      iVar6 = iVar6 + (-1 - local_ac);
      if (iVar6 < 0) {
        return 0;
      }
      goto LAB_1801975ac;
    }
    iVar6 = iVar6 + -1;
  }
  if (local_b8 == 1) {
    param_5 = dVar11;
  }
LAB_1801975ac:
  if (param_5 < 0.0) {
    param_5 = (double)CONCAT44((uint)((ulonglong)param_5 >> 0x20) ^ _UNK_1802f9ef4,
                               SUB84(param_5,0) ^
                               s_________________FFFFFFFFFFFFFFFF_1802f9ea0._80_4_);
  }
  if (_DAT_18030be68 <= param_5) {
    return 0;
  }
  uVar5 = (ulonglong)param_5;
  dVar11 = DAT_18030be60;
  iVar7 = iVar6;
  if (9 < iVar6) {
    iVar6 = 9;
    iVar7 = iVar6;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    dVar11 = dVar11 * DAT_1802f9e00;
  }
  uVar1 = (uint)dVar11;
  iVar6 = iVar7;
  dVar12 = DAT_18030be60;
  uVar9 = uVar1 + 1;
  if (dVar11 - (double)(int)uVar1 < DAT_18030be58) {
    uVar9 = uVar1;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    dVar12 = dVar12 * DAT_1802f9e00;
  }
  dVar12 = (param_5 - (double)(uVar5 & 0xffffffff)) * dVar12;
  uVar2 = (uint)dVar12;
  uVar1 = uVar2 + 1;
  if (dVar12 - (double)(int)uVar2 < DAT_18030be58) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 - uVar9;
  if (uVar1 < uVar9) {
    uVar2 = uVar1;
  }
  uVar8 = (ulonglong)((int)uVar5 + 1);
  if (uVar1 < uVar9) {
    uVar8 = uVar5 & 0xffffffff;
  }
  lVar3 = 0;
  iVar6 = 0;
  do {
    iVar10 = iVar6;
    iVar6 = (int)(uVar8 / 10);
    auStack_98[lVar3] = (&DAT_1802ea770)[(uint)((int)uVar8 + iVar6 * -10)];
    lVar3 = lVar3 + 1;
    if (iVar6 == 0) break;
    uVar8 = uVar8 / 10;
    iVar6 = iVar10 + 1;
  } while (lVar3 < 0x14);
  if (iVar10 != 0x13) {
    iVar10 = iVar10 + 1;
  }
  local_a0 = (ulonglong)iVar10;
  if (local_a0 < 0x14) {
    auStack_98[local_a0] = 0;
    if (0 < iVar7) {
      lVar3 = 0;
      uVar5 = (ulonglong)uVar2;
      do {
        while (((param_9 == 2 && (lVar3 == 0)) && ((int)uVar5 == (int)(uVar5 / 10) * 10))) {
          iVar7 = iVar7 + -1;
          uVar5 = uVar5 / 10;
          if (iVar7 <= iVar4) goto LAB_180197723;
        }
        iVar4 = iVar4 + 1;
        acStack_81[lVar3 + 1] = (&DAT_1802ea770)[(uint)((int)uVar5 + (int)(uVar5 / 10) * -10)];
        lVar3 = lVar3 + 1;
        uVar5 = uVar5 / 10;
      } while (iVar4 < iVar7);
    }
LAB_180197723:
    iVar6 = 0x13;
    if (iVar4 != 0x14) {
      iVar6 = iVar4;
    }
    uVar5 = (ulonglong)iVar6;
    if (uVar5 < 0x14) {
      acStack_81[uVar5 + 1] = '\0';
      if (local_b8 == 1) {
        lVar3 = 0;
        local_b0 = 0;
        iVar4 = (local_ac ^ (int)local_ac >> 0x1f) - ((int)local_ac >> 0x1f);
        do {
          local_b0 = local_b0 + 1;
          acStack_69[lVar3 + 1] = (&DAT_1802ea770)[iVar4 % 10];
          lVar3 = lVar3 + 1;
          if (iVar4 / 10 < 1) {
            if (local_b0 == 1) {
              acStack_69[2] = 0x30;
              local_b0 = 2;
            }
            goto LAB_1801977ca;
          }
          iVar4 = iVar4 / 10;
        } while (lVar3 < 0x14);
      }
      else {
LAB_1801977ca:
        iVar4 = (((param_6 - (uint)(local_b4 != 0)) - (uint)(0 < iVar7)) - iVar10) - iVar7;
        if (local_b8 == 1) {
          iVar4 = iVar4 + (-2 - local_b0);
        }
        iVar10 = 0;
        if (-1 < iVar7 - iVar6) {
          iVar10 = iVar7 - iVar6;
        }
        iVar6 = 0;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        iVar4 = -iVar6;
        if ((param_8 & 1) == 0) {
          iVar4 = iVar6;
        }
        if (((param_8 & 0x10) == 0) || (iVar4 < 1)) {
          for (; 0 < iVar4; iVar4 = iVar4 + -1) {
            local_c8 = 0x20;
            iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
            if (iVar6 == 0) {
              return 0;
            }
          }
        }
        else {
          if (local_b4 != 0) {
            local_c8 = local_b4;
            iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
            if (iVar6 == 0) {
              return 0;
            }
            iVar4 = iVar4 + -1;
            local_b4 = 0;
          }
          for (; 0 < iVar4; iVar4 = iVar4 + -1) {
            local_c8 = 0x30;
            iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
            if (iVar6 == 0) {
              return 0;
            }
          }
        }
        uVar8 = local_a0;
        if (local_b4 != 0) {
          local_c8 = local_b4;
          iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
          uVar8 = local_a0;
          if (iVar6 == 0) {
            return 0;
          }
        }
        do {
          if ((longlong)uVar8 < 1) {
            local_a0 = uVar8;
            if ((0 < iVar7) || ((param_8 & 8) != 0)) {
              local_c8 = 0x2e;
              iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
              if (iVar6 == 0) {
                return 0;
              }
              while (0 < (longlong)uVar5) {
                local_c8 = (uint)acStack_81[uVar5];
                uVar5 = uVar5 - 1;
                iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
                if (iVar6 == 0) {
                  return 0;
                }
              }
            }
            for (; 0 < iVar10; iVar10 = iVar10 + -1) {
              local_c8 = 0x30;
              iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
              if (iVar6 == 0) {
                return 0;
              }
            }
            if (local_b8 == 1) {
              local_c8 = ~param_8 & 0x20 | 0x45;
              iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
              if (iVar6 == 0) {
                return 0;
              }
              if ((int)local_ac < 0) {
                local_c8 = 0x2d;
                iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
              }
              else {
                local_c8 = 0x2b;
                iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
              }
              if (iVar6 == 0) {
                s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x50] =
                     s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x50];
                s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x51] =
                     s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x51];
                s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x52] =
                     s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x52];
                s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x53] =
                     s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x53];
                return 0;
              }
              lVar3 = (longlong)local_b0;
              if (0 < local_b0) {
                do {
                  local_c8 = (uint)acStack_69[lVar3];
                  lVar3 = lVar3 + -1;
                  iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
                  if (iVar6 == 0) {
                    return 0;
                  }
                } while (0 < lVar3);
              }
            }
            while( true ) {
              if (-1 < iVar4) {
                s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x50] =
                     s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x50];
                s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x51] =
                     s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x51];
                s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x52] =
                     s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x52];
                s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x53] =
                     s_________________FFFFFFFFFFFFFFFF_1802f9ea0[0x53];
                return 1;
              }
              local_c8 = 0x20;
              iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
              if (iVar6 == 0) break;
              iVar4 = iVar4 + 1;
            }
            return 0;
          }
          local_a0 = uVar8 - 1;
          local_c8 = (uint)(char)auStack_98[uVar8 - 1];
          iVar6 = FUN_1801972b0(param_1,param_2,param_3,param_4);
          uVar8 = local_a0;
        } while (iVar6 != 0);
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802e048c();
}



// ===== FUN_180197ab0 @ 180197ab0 (size 766)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180197ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,uint param_6,int param_7,int param_8,uint param_9)

{
  char cVar1;
  undefined **ppuVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined **ppuVar7;
  char *pcVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_88;
  int local_84;
  char acStack_79 [33];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x180197ac7;
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  local_84 = 0;
  if (-1 < param_8) {
    local_84 = param_8;
  }
  if ((param_9 & 0x40) == 0) {
    if ((longlong)param_5 < 0) {
      local_88 = 0x2d;
      param_5 = -param_5;
    }
    else if ((param_9 & 2) == 0) {
      local_88 = 0;
      if ((param_9 & 4) != 0) {
        local_88 = 0x20;
      }
    }
    else {
      local_88 = 0x2b;
    }
  }
  ppuVar7 = &PTR_1802ead18;
  if ((param_9 & 8) != 0) {
    ppuVar2 = (undefined **)&DAT_180304efc;
    if (param_6 != 8) {
      ppuVar2 = &PTR_1802ead18;
    }
    ppuVar7 = (undefined **)&DAT_18030be34;
    if (param_6 != 0x10) {
      ppuVar7 = ppuVar2;
    }
  }
  pcVar8 = "0123456789abcdef";
  lVar5 = 0;
  iVar9 = 0;
  if ((param_9 & 0x20) != 0) {
    pcVar8 = "0123456789ABCDEF";
  }
  do {
    iVar6 = iVar9;
    uVar3 = param_5 / param_6;
    acStack_79[lVar5 + 1] = pcVar8[param_5 % (ulonglong)param_6];
    lVar5 = lVar5 + 1;
    if (uVar3 == 0) break;
    param_5 = uVar3;
    iVar9 = iVar6 + 1;
  } while (lVar5 < 0x1a);
  if (iVar6 != 0x19) {
    iVar6 = iVar6 + 1;
  }
  uVar3 = (ulonglong)iVar6;
  if (0x19 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1802e048c();
  }
  lVar5 = -1;
  acStack_79[uVar3 + 1] = '\0';
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)((longlong)ppuVar7 + lVar5) != '\0');
  iVar9 = iVar6;
  if (iVar6 <= local_84) {
    iVar9 = local_84;
  }
  iVar4 = ((param_7 - iVar9) - (uint)(local_88 != 0)) - (int)lVar5;
  iVar9 = 0;
  if (-1 < local_84 - iVar6) {
    iVar9 = local_84 - iVar6;
  }
  iVar6 = 0;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  if ((param_9 & 0x10) != 0) {
    iVar4 = iVar6;
    if (iVar6 <= iVar9) {
      iVar4 = iVar9;
    }
    iVar9 = iVar4;
  }
  iVar4 = 0;
  if ((param_9 & 0x10) == 0) {
    iVar4 = iVar6;
  }
  iVar6 = -iVar4;
  if ((param_9 & 1) == 0) {
    iVar6 = iVar4;
  }
  for (; 0 < iVar6; iVar6 = iVar6 + -1) {
    local_98 = 0x20;
    iVar4 = FUN_1801972b0(param_1,param_2,param_3,param_4);
    if (iVar4 == 0) {
      return 0;
    }
  }
  if (local_88 != 0) {
    local_98 = local_88;
    iVar4 = FUN_1801972b0(param_1,param_2,param_3,param_4);
    if (iVar4 == 0) goto LAB_180197da5;
  }
  cVar1 = *(char *)ppuVar7;
  while (cVar1 != '\0') {
    local_98 = (int)cVar1;
    iVar4 = FUN_1801972b0(param_1,param_2,param_3,param_4);
    if (iVar4 == 0) {
      return 0;
    }
    pcVar8 = (char *)((longlong)ppuVar7 + 1);
    ppuVar7 = (undefined **)((longlong)ppuVar7 + 1);
    cVar1 = *pcVar8;
  }
  for (; 0 < iVar9; iVar9 = iVar9 + -1) {
    local_98 = 0x30;
    iVar4 = FUN_1801972b0(param_1,param_2,param_3,param_4);
    if (iVar4 == 0) {
      return 0;
    }
  }
  do {
    if ((longlong)uVar3 < 1) {
      while( true ) {
        if (-1 < iVar6) {
          return 1;
        }
        local_98 = 0x20;
        iVar9 = FUN_1801972b0(param_1,param_2,param_3,param_4);
        if (iVar9 == 0) break;
        iVar6 = iVar6 + 1;
      }
      return 0;
    }
    local_98 = (int)acStack_79[uVar3];
    uVar3 = uVar3 - 1;
    iVar9 = FUN_1801972b0(param_1,param_2,param_3,param_4);
  } while (iVar9 != 0);
LAB_180197da5:
  return 0;
}



// ===== FUN_180197db0 @ 180197db0 (size 372)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_180197db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             char *param_5,uint param_6,int param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar6 = 0x180197dd7;
  iVar3 = 0;
  pcVar5 = "<NULL>";
  if (param_5 != (char *)0x0) {
    pcVar5 = param_5;
  }
  lVar1 = -1;
  if (-1 < param_8) {
    lVar1 = (longlong)param_8;
  }
  lVar1 = FUN_1801ba870(pcVar5,lVar1);
  iVar2 = param_7 - (int)lVar1;
  if ((param_7 < 0) || (iVar2 < 0)) {
    iVar2 = 0;
  }
  if (-1 < param_8) {
    if (param_8 < 0x7fffffff - iVar2) {
      param_8 = param_8 + iVar2;
    }
    else {
      param_8 = 0x7fffffff;
    }
  }
  iVar4 = -iVar2;
  if ((param_6 & 1) == 0) {
    iVar4 = iVar2;
  }
  for (; (0 < iVar4 && ((param_8 < 0 || (iVar3 < param_8)))); iVar3 = iVar3 + 1) {
    iVar2 = FUN_1801972b0(param_1,param_2,param_3,param_4,0x20,uVar6);
    if (iVar2 == 0) {
      return 0;
    }
    iVar4 = iVar4 + -1;
  }
  for (; (lVar1 != 0 && ((param_8 < 0 || (iVar3 < param_8)))); iVar3 = iVar3 + 1) {
    iVar2 = FUN_1801972b0(param_1,param_2,param_3,param_4,(int)*pcVar5,uVar6);
    pcVar5 = pcVar5 + 1;
    if (iVar2 == 0) {
      return 0;
    }
    lVar1 = lVar1 + -1;
  }
  for (; (iVar4 < 0 && ((param_8 < 0 || (iVar3 < param_8)))); iVar3 = iVar3 + 1) {
    iVar2 = FUN_1801972b0(param_1,param_2,param_3,param_4,0x20,uVar6);
    if (iVar2 == 0) {
      return 0;
    }
    iVar4 = iVar4 + 1;
  }
  return 1;
}



// ===== FUN_180197f30 @ 180197f30 (size 69)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180197f30(longlong param_1)

{
  if (param_1 != 0) {
    FUN_180195e10(*(undefined8 *)(param_1 + 8),"crypto\\bio\\bio_meth.c",0x35);
    FUN_180195e10(param_1,"crypto\\bio\\bio_meth.c",0x36);
  }
  return;
}



// ===== FUN_180197f80 @ 180197f80 (size 178)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_180197f80(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x180197f95;
  puVar1 = (undefined4 *)FUN_180196100(0x60,"crypto\\bio\\bio_meth.c",0x26);
  if (puVar1 != (undefined4 *)0x0) {
    lVar2 = FUN_1801ba320(param_2,"crypto\\bio\\bio_meth.c",0x29);
    *(longlong *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      *puVar1 = param_1;
      return puVar1;
    }
  }
  FUN_180195e10(puVar1,"crypto\\bio\\bio_meth.c",0x2a);
  FUN_1801a70c0(0x20,0x92,0x41,"crypto\\bio\\bio_meth.c",0x2b,uVar3);
  return (undefined4 *)0x0;
}



// ===== FUN_1801980b0 @ 1801980b0 (size 73)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801980b0(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x7fffffff;
  if (param_3 < 0x80000000) {
    uVar1 = (int)param_3;
  }
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,uVar1);
  if ((int)uVar2 < 1) {
    *param_4 = 0;
    return uVar2;
  }
  *param_4 = (longlong)(int)uVar2;
  return 1;
}



// ===== FUN_180198100 @ 180198100 (size 73)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180198100(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x7fffffff;
  if (param_3 < 0x80000000) {
    uVar1 = (int)param_3;
  }
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,uVar1);
  if ((int)uVar2 < 1) {
    *param_4 = 0;
    return uVar2;
  }
  *param_4 = (longlong)(int)uVar2;
  return 1;
}



// ===== FUN_180198180 @ 180198180 (size 78)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180198180(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180195dc0(0x18,"crypto\\bn\\bn_lib.c",0x3b5);
  if (lVar1 == 0) {
    FUN_1801a70c0(3,0x8f,0x41,"crypto\\bn\\bn_lib.c",0x3b6);
    lVar1 = 0;
  }
  return lVar1;
}



// ===== FUN_180198210 @ 180198210 (size 314)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_180198210(byte *param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = (longlong *)0x0;
  if (param_3 == (longlong *)0x0) {
    param_3 = (longlong *)FUN_180198b30();
    plVar8 = param_3;
    if (param_3 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  if (0 < param_2) {
    do {
      if (*param_1 != 0) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    return param_3;
  }
  uVar7 = param_2 - 1U & 7;
  uVar5 = (param_2 - 1U >> 3) + 1;
  uVar4 = (ulonglong)uVar5;
  if (*(int *)((longlong)param_3 + 0xc) < (int)uVar5) {
    plVar2 = (longlong *)FUN_180199440(param_3);
  }
  else {
    plVar2 = param_3;
  }
  if (plVar2 == (longlong *)0x0) {
    FUN_180198910(plVar8);
    param_3 = (longlong *)0x0;
  }
  else {
    *(uint *)(param_3 + 1) = uVar5;
    uVar3 = 0;
    *(undefined4 *)(param_3 + 2) = 0;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      uVar3 = uVar3 << 8 | (ulonglong)bVar1;
      bVar9 = uVar7 == 0;
      uVar7 = uVar7 - 1;
      if (bVar9) {
        uVar4 = (ulonglong)((int)uVar4 - 1);
        *(ulonglong *)(*param_3 + uVar4 * 8) = uVar3;
        uVar3 = 0;
        uVar7 = 7;
      }
    } while (param_2 != 0);
    uVar7 = *(uint *)(param_3 + 1);
    uVar4 = (ulonglong)(int)uVar7;
    if (0 < (int)uVar7) {
      lVar6 = *param_3 + uVar4 * 8;
      do {
        uVar7 = (uint)uVar4;
        plVar8 = (longlong *)(lVar6 + -8);
        lVar6 = lVar6 + -8;
        if (*plVar8 != 0) break;
        uVar7 = uVar7 - 1;
        uVar4 = (ulonglong)uVar7;
      } while (0 < (int)uVar7);
      *(uint *)(param_3 + 1) = uVar7;
    }
    if (uVar7 == 0) {
      *(undefined4 *)(param_3 + 2) = 0;
    }
  }
  return param_3;
}



// ===== FUN_180198350 @ 180198350 (size 224)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_180198350(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar2 = FUN_180198b90();
  iVar6 = *(int *)((longlong)param_1 + 0xc) << 3;
  iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  uVar4 = (ulonglong)iVar2;
  if (iVar6 == 0) {
    FUN_180001240(param_2,uVar4);
    return iVar2;
  }
  uVar7 = 0;
  lVar1 = param_1[1];
  pbVar5 = (byte *)(param_2 + uVar4);
  uVar8 = 0;
  if (iVar2 != 0) {
    do {
      pbVar5 = pbVar5 + -1;
      lVar3 = uVar8 - (longlong)((int)lVar1 << 3);
      uVar8 = uVar8 + 1;
      *pbVar5 = (byte)(*(ulonglong *)(*param_1 + (uVar7 & 0xfffffffffffffff8)) >>
                      (((byte)uVar7 & 7) << 3)) & (byte)(lVar3 >> 0x3f);
      uVar7 = uVar7 - ((longlong)(uVar7 - ((longlong)iVar6 + -1)) >> 0x3f);
    } while (uVar8 < uVar4);
  }
  return iVar2;
}



// ===== FUN_180198460 @ 180198460 (size 111)

undefined8 FUN_180198460(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (-1 < param_2) {
    uVar5 = param_2 >> 0x1f & 0x3f;
    uVar2 = param_2 + uVar5;
    iVar4 = (int)uVar2 >> 6;
    if (iVar4 < (int)param_1[1]) {
      *(ulonglong *)(*param_1 + (longlong)iVar4 * 8) =
           *(ulonglong *)(*param_1 + (longlong)iVar4 * 8) &
           ~(1L << ((longlong)(int)((uVar2 & 0x3f) - uVar5) & 0x3fU));
      uVar2 = *(uint *)(param_1 + 1);
      uVar3 = (ulonglong)(int)uVar2;
      if (0 < (int)uVar2) {
        lVar6 = *param_1 + uVar3 * 8;
        do {
          uVar2 = (uint)uVar3;
          plVar1 = (longlong *)(lVar6 + -8);
          lVar6 = lVar6 + -8;
          if (*plVar1 != 0) break;
          uVar2 = uVar2 - 1;
          uVar3 = (ulonglong)uVar2;
        } while (0 < (int)uVar2);
        *(uint *)(param_1 + 1) = uVar2;
      }
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1801984d0 @ 1801984d0 (size 126)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801984d0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0)) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 8) == 0) {
        FUN_180195f20(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3,
                      "crypto\\bn\\bn_lib.c",0xce);
      }
      else {
        FUN_1801b7560();
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) != 0) {
      FUN_180001240(param_1,0x18);
      FUN_180195e10(param_1,"crypto\\bn\\bn_lib.c",0xdc);
    }
  }
  return;
}



// ===== FUN_180198550 @ 180198550 (size 139)

undefined4 FUN_180198550(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 == (longlong *)0x0) {
    if (param_2 == (longlong *)0x0) {
      return 0;
    }
    return 1;
  }
  if (param_2 != (longlong *)0x0) {
    iVar1 = (int)param_1[2];
    if (iVar1 == (int)param_2[2]) {
      iVar2 = (int)param_1[1];
      uVar7 = 0xffffffff;
      if (iVar1 != 0) {
        uVar7 = 1;
      }
      uVar6 = 1;
      if (iVar1 != 0) {
        uVar6 = 0xffffffff;
      }
      if ((int)param_2[1] < iVar2) {
        return uVar6;
      }
      if (iVar2 < (int)param_2[1]) {
        return uVar7;
      }
      if (iVar2 + -1 < 0) {
        return 0;
      }
      lVar5 = (longlong)(iVar2 + -1);
      puVar4 = (ulonglong *)(*param_2 + lVar5 * 8);
      while( true ) {
        uVar3 = *(ulonglong *)((*param_1 - *param_2) + (longlong)puVar4);
        if (*puVar4 < uVar3) {
          return uVar6;
        }
        if (uVar3 < *puVar4) break;
        puVar4 = puVar4 + -1;
        lVar5 = lVar5 + -1;
        if (lVar5 < 0) {
          return 0;
        }
      }
      return uVar7;
    }
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0xffffffff;
}



// ===== FUN_1801985e0 @ 1801985e0 (size 393)

void FUN_1801985e0(ulonglong param_1,ulonglong *param_2,ulonglong *param_3,uint param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  if (param_2 != param_3) {
    uVar11 = 0xffffffffffffffff - ((longlong)(param_1 - 1 & ~param_1) >> 0x3f);
    uVar10 = (uint)uVar11;
    uVar8 = ((uint)param_2[1] ^ (uint)param_3[1]) & uVar10;
    *(uint *)(param_2 + 1) = (uint)param_2[1] ^ uVar8;
    *(uint *)(param_3 + 1) = (uint)param_3[1] ^ uVar8;
    uVar8 = ((uint)param_3[2] ^ (uint)param_2[2]) & uVar10;
    *(uint *)(param_2 + 2) = (uint)param_2[2] ^ uVar8;
    *(uint *)(param_3 + 2) = (uint)param_3[2] ^ uVar8;
    uVar10 = (*(uint *)((longlong)param_3 + 0x14) ^ *(uint *)((longlong)param_2 + 0x14)) & 4 &
             uVar10;
    *(uint *)((longlong)param_2 + 0x14) = uVar10 ^ *(uint *)((longlong)param_2 + 0x14);
    *(uint *)((longlong)param_3 + 0x14) = *(uint *)((longlong)param_3 + 0x14) ^ uVar10;
    iVar12 = 0;
    if ((0 < (int)param_4) && (1 < param_4)) {
      puVar3 = (ulonglong *)*param_3;
      puVar4 = (ulonglong *)*param_2;
      puVar2 = puVar3 + (int)(param_4 - 1);
      puVar1 = puVar4 + (int)(param_4 - 1);
      if (((puVar1 < puVar3) || (puVar2 < puVar4)) &&
         ((((param_3 < puVar3 || (puVar2 < param_3)) && ((param_2 < puVar3 || (puVar2 < param_2))))
          && (((param_3 < puVar4 || (puVar1 < param_3)) &&
              ((param_2 < puVar4 || (puVar1 < param_2)))))))) {
        uVar8 = param_4 & 0x80000001;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
        }
        lVar9 = 0;
        do {
          uVar6 = *(ulonglong *)(lVar9 + (longlong)puVar3);
          uVar7 = ((ulonglong *)(lVar9 + (longlong)puVar3))[1];
          iVar12 = iVar12 + 2;
          uVar5 = *(ulonglong *)(lVar9 + (longlong)puVar4);
          uVar13 = ((ulonglong *)(lVar9 + (longlong)puVar4))[1];
          uVar14 = (uVar6 ^ uVar5) & uVar11;
          uVar15 = (uVar7 ^ uVar13) & uVar11;
          *(ulonglong *)(lVar9 + (longlong)puVar4) = uVar14 ^ uVar5;
          ((ulonglong *)(lVar9 + (longlong)puVar4))[1] = uVar15 ^ uVar13;
          *(ulonglong *)(lVar9 + (longlong)puVar3) = uVar14 ^ uVar6;
          ((ulonglong *)(lVar9 + (longlong)puVar3))[1] = uVar15 ^ uVar7;
          lVar9 = lVar9 + 0x10;
        } while (iVar12 < (int)(param_4 - uVar8));
      }
    }
    for (lVar9 = (longlong)iVar12; lVar9 < (int)param_4; lVar9 = lVar9 + 1) {
      uVar5 = *(ulonglong *)(*param_2 + lVar9 * 8);
      uVar13 = (*(ulonglong *)(*param_3 + lVar9 * 8) ^ uVar5) & uVar11;
      *(ulonglong *)(*param_2 + lVar9 * 8) = uVar5 ^ uVar13;
      puVar2 = (ulonglong *)(*param_3 + lVar9 * 8);
      *puVar2 = *puVar2 ^ uVar13;
    }
  }
  return;
}



// ===== FUN_180198770 @ 180198770 (size 142)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_180198770(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  if ((*(byte *)((longlong)param_2 + 0x14) & 4) == 0) {
    iVar2 = *(int *)(param_2 + 1);
  }
  else {
    iVar2 = *(int *)((longlong)param_2 + 0xc);
  }
  if (param_1 != param_2) {
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      puVar1 = (undefined8 *)FUN_180199440(param_1,iVar2);
    }
    else {
      puVar1 = param_1;
    }
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (0 < *(int *)(param_2 + 1)) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)iVar2 << 3);
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  return param_1;
}



// ===== FUN_180198800 @ 180198800 (size 267)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_180198800(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x180198810;
  if (param_1 != (undefined8 *)0x0) {
    if ((*(byte *)((longlong)param_1 + 0x14) & 8) == 0) {
      puVar1 = (undefined8 *)FUN_180198b30();
    }
    else {
      puVar1 = (undefined8 *)FUN_180196100(0x18,"crypto\\bn\\bn_lib.c",0xf6);
      if (puVar1 == (undefined8 *)0x0) {
        FUN_1801a70c0(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7,uVar4);
      }
      else {
        *(undefined4 *)((longlong)puVar1 + 0x14) = 9;
      }
    }
    if (puVar1 != (undefined8 *)0x0) {
      if ((*(byte *)((longlong)param_1 + 0x14) & 4) == 0) {
        iVar3 = *(int *)(param_1 + 1);
      }
      else {
        iVar3 = *(int *)((longlong)param_1 + 0xc);
      }
      if (puVar1 != param_1) {
        if (*(int *)((longlong)puVar1 + 0xc) < iVar3) {
          puVar2 = (undefined8 *)FUN_180199440(puVar1,iVar3);
        }
        else {
          puVar2 = puVar1;
        }
        if (puVar2 == (undefined8 *)0x0) {
          FUN_180198910(puVar1);
          return (undefined8 *)0x0;
        }
        if (0 < *(int *)(param_1 + 1)) {
          memcpy((void *)*puVar1,(void *)*param_1,(longlong)iVar3 << 3);
        }
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 2);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
      }
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// ===== FUN_180198910 @ 180198910 (size 118)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180198910(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 8) == 0) {
        FUN_180195e10(*param_1,"crypto\\bn\\bn_lib.c",0xd0);
      }
      else {
        FUN_1801b7560(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3,
                      "crypto\\bn\\bn_lib.c",0xcc);
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) != 0) {
      FUN_180195e10(param_1,"crypto\\bn\\bn_lib.c",0xe7);
    }
  }
  return;
}



// ===== FUN_180198a90 @ 180198a90 (size 157)

undefined8 FUN_180198a90(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  if (-1 < param_2) {
    uVar5 = param_2 >> 0x1f & 0x3f;
    uVar3 = param_2 + uVar5;
    iVar4 = (uVar3 & 0x3f) - uVar5;
    iVar7 = (int)uVar3 >> 6;
    if (iVar7 < (int)param_1[1]) {
      if (iVar4 == 0) {
        *(int *)(param_1 + 1) = iVar7;
      }
      else {
        *(int *)(param_1 + 1) = iVar7 + 1;
        puVar2 = (ulonglong *)(*param_1 + (longlong)iVar7 * 8);
        *puVar2 = *puVar2 & ~(-1L << ((byte)iVar4 & 0x3f));
        iVar7 = (int)param_1[1];
      }
      if (0 < iVar7) {
        lVar6 = *param_1 + (longlong)iVar7 * 8;
        do {
          plVar1 = (longlong *)(lVar6 + -8);
          lVar6 = lVar6 + -8;
          if (*plVar1 != 0) break;
          iVar7 = iVar7 + -1;
        } while (0 < iVar7);
        *(int *)(param_1 + 1) = iVar7;
      }
      if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      return 1;
    }
  }
  return 0;
}



// ===== FUN_180198b30 @ 180198b30 (size 88)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180198b30(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180196100(0x18,"crypto\\bn\\bn_lib.c",0xf6);
  if (lVar1 == 0) {
    FUN_1801a70c0(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x14) = 1;
  return lVar1;
}



// ===== FUN_180198b90 @ 180198b90 (size 231)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_180198b90(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  iVar1 = (int)param_1[1];
  if ((*(byte *)((longlong)param_1 + 0x14) & 4) != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar7 = iVar1 - 1;
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    uVar9 = 0;
    if (0 < iVar1) {
      puVar8 = (undefined8 *)*param_1;
      do {
        uVar2 = (int)((uVar5 ^ uVar7) - 1 & ~(uVar5 ^ uVar7)) >> 0x1f;
        uVar6 = uVar6 | uVar2;
        uVar3 = FUN_180198c80(*puVar8);
        puVar8 = puVar8 + 1;
        uVar5 = uVar5 + 1;
        uVar9 = uVar9 + (~uVar6 & 0x40) + (uVar3 & uVar2);
      } while ((int)uVar5 < iVar1);
    }
    return 0xffffffffU - ((int)(~uVar7 - 1 & uVar7) >> 0x1f) & uVar9;
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar4 = FUN_180198c80(*(undefined8 *)(*param_1 + -8 + (longlong)iVar1 * 8));
  return iVar4 + iVar1 * 0x40 + -0x40;
}



// ===== FUN_180198c80 @ 180198c80 (size 214)

int FUN_180198c80(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = -(param_1 >> 0x20);
  uVar6 = param_1 ^ (param_1 >> 0x20 ^ param_1) & lVar5 >> 0x3f;
  lVar2 = -(uVar6 >> 0x10);
  uVar6 = uVar6 ^ (uVar6 >> 0x10 ^ uVar6) & lVar2 >> 0x3f;
  lVar3 = -(uVar6 >> 8);
  uVar6 = uVar6 ^ (uVar6 >> 8 ^ uVar6) & lVar3 >> 0x3f;
  lVar4 = -(uVar6 >> 4);
  uVar6 = uVar6 ^ (uVar6 >> 4 ^ uVar6) & lVar4 >> 0x3f;
  lVar1 = -(uVar6 >> 2);
  return ((uint)(lVar1 >> 0x3f) & 2) +
         ((uint)((longlong)-(((uVar6 >> 2 ^ uVar6) & lVar1 >> 0x3f ^ uVar6) >> 1) >> 0x3f) & 1) +
         (uint)(param_1 != 0) + ((uint)(lVar5 >> 0x3f) & 0x20) + ((uint)(lVar2 >> 0x3f) & 0x10) +
         ((uint)(lVar3 >> 0x3f) & 8) + ((uint)(lVar4 >> 0x3f) & 4);
}



// ===== FUN_180198d60 @ 180198d60 (size 88)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180198d60(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180196100(0x18,"crypto\\bn\\bn_lib.c",0xf6);
  if (lVar1 == 0) {
    FUN_1801a70c0(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x14) = 9;
  return lVar1;
}



// ===== FUN_180198dc0 @ 180198dc0 (size 102)

int FUN_180198dc0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x3c00) {
    if (param_1 < 0x1e00) {
      if (param_1 < 0xc00) {
        if (param_1 < 0x800) {
          if (param_1 < 0x400) {
            return 0;
          }
          iVar1 = 0x50;
        }
        else {
          iVar1 = 0x70;
        }
      }
      else {
        iVar1 = 0x80;
      }
    }
    else {
      iVar1 = 0xc0;
    }
  }
  else {
    iVar1 = 0x100;
  }
  if (param_2 == -1) {
    return iVar1;
  }
  param_2 = param_2 / 2;
  if (param_2 < 0x50) {
    return 0;
  }
  if (iVar1 <= param_2) {
    param_2 = iVar1;
  }
  return param_2;
}



// ===== FUN_180198e30 @ 180198e30 (size 180)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180198e30(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  if (param_2 < 0) {
LAB_180198ecd:
    uVar5 = 0;
  }
  else {
    uVar7 = param_2 >> 0x1f & 0x3f;
    uVar3 = param_2 + uVar7;
    iVar8 = (int)uVar3 >> 6;
    if ((int)param_1[1] <= iVar8) {
      iVar1 = iVar8 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        plVar4 = (longlong *)FUN_180199440(param_1,iVar1);
      }
      else {
        plVar4 = param_1;
      }
      if (plVar4 == (longlong *)0x0) goto LAB_180198ecd;
      for (lVar6 = (longlong)(int)param_1[1]; lVar6 < iVar1; lVar6 = lVar6 + 1) {
        *(undefined8 *)(*param_1 + lVar6 * 8) = 0;
      }
      *(int *)(param_1 + 1) = iVar1;
    }
    puVar2 = (ulonglong *)(*param_1 + (longlong)iVar8 * 8);
    uVar5 = 1;
    *puVar2 = *puVar2 | 1L << ((longlong)(int)((uVar3 & 0x3f) - uVar7) & 0x3fU);
  }
  return uVar5;
}



// ===== FUN_180198f20 @ 180198f20 (size 98)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180198f20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 1) {
    puVar1 = (undefined8 *)FUN_180199440();
  }
  else {
    puVar1 = param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(longlong *)*param_1 = param_2;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  return 1;
}



// ===== FUN_180198fc0 @ 180198fc0 (size 72)

int FUN_180198fc0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  iVar2 = (int)param_1[1] - (int)param_2[1];
  if (iVar2 == 0) {
    iVar2 = (int)param_1[1] + -1;
    lVar4 = (longlong)iVar2;
    if (-1 < iVar2) {
      puVar3 = (ulonglong *)(*param_2 + lVar4 * 8);
      do {
        uVar1 = *(ulonglong *)((*param_1 - *param_2) + (longlong)puVar3);
        if (uVar1 != *puVar3) {
          iVar2 = -1;
          if (*puVar3 < uVar1) {
            iVar2 = 1;
          }
          return iVar2;
        }
        puVar3 = puVar3 + -1;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    iVar2 = 0;
  }
  return iVar2;
}



// ===== FUN_180199050 @ 180199050 (size 461)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_180199050(longlong *param_1,byte *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  uStack_20 = 0x180199069;
  iVar2 = FUN_180198b90();
  uVar5 = 0;
  iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  if (param_3 == -1) {
    param_3 = iVar2;
  }
  else if (param_3 < iVar2) {
    local_38 = *param_1;
    uStack_30 = param_1[1];
    uVar4 = (uint)uStack_30;
    uVar7 = uStack_30 & 0xffffffff;
    if (0 < (int)uVar4) {
      lVar6 = local_38 + (longlong)(int)uVar4 * 8;
      do {
        uVar4 = (uint)uVar7;
        plVar1 = (longlong *)(lVar6 + -8);
        lVar6 = lVar6 + -8;
        if (*plVar1 != 0) break;
        uVar4 = uVar4 - 1;
        uVar7 = (ulonglong)uVar4;
      } while (0 < (int)uVar4);
      uVar7 = uStack_30 >> 0x20;
      uStack_30 = CONCAT44((int)uVar7,uVar4);
    }
    local_28 = (undefined4)param_1[2];
    if (uVar4 == 0) {
      local_28 = 0;
    }
    uStack_24 = (undefined4)((ulonglong)param_1[2] >> 0x20);
    iVar2 = FUN_180198b90(&local_38);
    if (param_3 < (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3) {
      return -1;
    }
  }
  iVar2 = *(int *)((longlong)param_1 + 0xc) << 3;
  if (iVar2 == 0) {
    FUN_180001240(param_2,(longlong)param_3);
  }
  else {
    lVar6 = (longlong)iVar2 + -1;
    lVar8 = (longlong)((int)param_1[1] << 3);
    if (param_4 == 0) {
      param_2 = param_2 + param_3;
    }
    uVar7 = 0;
    if (param_3 != 0) {
      if (param_4 == 0) {
        do {
          param_2 = param_2 + -1;
          lVar3 = uVar7 - lVar8;
          uVar7 = uVar7 + 1;
          *param_2 = (byte)(*(ulonglong *)(*param_1 + (uVar5 & 0xfffffffffffffff8)) >>
                           (((byte)uVar5 & 7) << 3)) & (byte)(lVar3 >> 0x3f);
          uVar5 = uVar5 - ((longlong)(uVar5 - lVar6) >> 0x3f);
        } while (uVar7 < (ulonglong)(longlong)param_3);
      }
      else {
        do {
          lVar3 = uVar7 - lVar8;
          uVar7 = uVar7 + 1;
          *param_2 = (byte)(*(ulonglong *)(*param_1 + (uVar5 & 0xfffffffffffffff8)) >>
                           (((byte)uVar5 & 7) << 3)) & (byte)(lVar3 >> 0x3f);
          uVar5 = uVar5 - ((longlong)(uVar5 - lVar6) >> 0x3f);
          param_2 = param_2 + 1;
        } while (uVar7 < (ulonglong)(longlong)param_3);
      }
    }
  }
  return param_3;
}



// ===== FUN_180199230 @ 180199230 (size 225)

undefined8 FUN_180199230(longlong param_1,longlong param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  
  lVar5 = (longlong)param_3 + -1;
  if (param_4 < 0) {
    lVar7 = (longlong)param_4;
    plVar6 = (longlong *)(param_2 + (lVar5 - lVar7) * 8);
    do {
      if (*plVar6 != 0) {
        return 0xffffffff;
      }
      plVar6 = plVar6 + -1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 0);
  }
  if ((0 < param_4) && (lVar7 = (longlong)param_4, 0 < param_4)) {
    plVar6 = (longlong *)(param_1 + (lVar5 + lVar7) * 8);
    do {
      if (*plVar6 != 0) {
        return 1;
      }
      lVar7 = lVar7 + -1;
      plVar6 = plVar6 + -1;
    } while (0 < lVar7);
  }
  if (param_3 != 0) {
    uVar1 = *(ulonglong *)(param_1 + lVar5 * 8);
    uVar2 = *(ulonglong *)(param_2 + lVar5 * 8);
    bVar8 = uVar1 < uVar2;
    bVar9 = uVar1 == uVar2;
    if (!bVar9) {
LAB_1801992a8:
      uVar3 = 0xffffffff;
      if (!bVar8 && !bVar9) {
        uVar3 = 1;
      }
      return uVar3;
    }
    lVar5 = (longlong)(param_3 + -2);
    if (-1 < param_3 + -2) {
      puVar4 = (ulonglong *)(param_2 + lVar5 * 8);
      do {
        uVar1 = *(ulonglong *)((param_1 - param_2) + (longlong)puVar4);
        bVar8 = uVar1 < *puVar4;
        bVar9 = uVar1 == *puVar4;
        if (!bVar9) goto LAB_1801992a8;
        puVar4 = puVar4 + -1;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
  }
  return 0;
}



// ===== FUN_180199320 @ 180199320 (size 77)

undefined8 FUN_180199320(longlong param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_3 != 0) {
    uVar1 = *(ulonglong *)(param_1 + -8 + (longlong)param_3 * 8);
    uVar2 = *(ulonglong *)(param_2 + -8 + (longlong)param_3 * 8);
    bVar6 = uVar1 < uVar2;
    bVar7 = uVar1 == uVar2;
    if (!bVar7) {
LAB_180199337:
      uVar3 = 0xffffffff;
      if (!bVar6 && !bVar7) {
        uVar3 = 1;
      }
      return uVar3;
    }
    lVar5 = (longlong)(param_3 + -2);
    if (-1 < param_3 + -2) {
      puVar4 = (ulonglong *)(param_2 + lVar5 * 8);
      do {
        uVar1 = *(ulonglong *)((param_1 - param_2) + (longlong)puVar4);
        bVar6 = uVar1 < *puVar4;
        bVar7 = uVar1 == *puVar4;
        if (!bVar7) goto LAB_180199337;
        puVar4 = puVar4 + -1;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
  }
  return 0;
}



// ===== FUN_1801993a0 @ 1801993a0 (size 158)

void FUN_1801993a0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  uVar2 = 0;
  if (0 < *(int *)((longlong)param_1 + 0xc)) {
    lVar4 = 0;
    do {
      uVar1 = (int)(uVar3 - (int)param_1[1] &
                   ((uint)((ulonglong)-*(longlong *)(lVar4 + *param_1) >> 0x20) |
                   (uint)((ulonglong)*(undefined8 *)(lVar4 + *param_1) >> 0x20))) >> 0x1f;
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 & ~uVar1 | uVar1 & uVar3;
      lVar4 = lVar4 + 8;
    } while ((int)uVar3 < *(int *)((longlong)param_1 + 0xc));
  }
  *(uint *)(param_1 + 1) = uVar2;
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & ~((int)(uVar2 - 1 & ~uVar2) >> 0x1f);
  return;
}



// ===== FUN_180199440 @ 180199440 (size 285)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_180199440(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  void *_Dst;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x180199455;
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    return param_1;
  }
  if (param_2 < 0x800000) {
    if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 8) == 0) {
        _Dst = (void *)FUN_180196100((longlong)param_2 << 3,"crypto\\bn\\bn_lib.c",0x118);
      }
      else {
        _Dst = (void *)FUN_1801b75f0((longlong)param_2 << 3,"crypto\\bn\\bn_lib.c",0x116);
      }
      if (_Dst != (void *)0x0) {
        if (0 < (int)param_1[1]) {
          memcpy(_Dst,(void *)*param_1,(longlong)(int)param_1[1] << 3);
        }
        if (*param_1 != 0) {
          if ((*(byte *)((longlong)param_1 + 0x14) & 8) == 0) {
            FUN_180195f20(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3,
                          "crypto\\bn\\bn_lib.c",0xce);
          }
          else {
            FUN_1801b7560();
          }
        }
        *param_1 = (longlong)_Dst;
        *(int *)((longlong)param_1 + 0xc) = param_2;
        return param_1;
      }
      uVar1 = 0x11a;
      uVar2 = 0x41;
    }
    else {
      uVar1 = 0x112;
      uVar2 = 0x69;
    }
  }
  else {
    uVar1 = 0x10e;
    uVar2 = 0x72;
  }
  FUN_1801a70c0(3,0x78,uVar2,"crypto\\bn\\bn_lib.c",uVar1,uVar3);
  return (longlong *)0x0;
}



// ===== FUN_1801995b0 @ 1801995b0 (size 137)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801995b0(longlong *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  if (cVar1 == '-') {
    cVar1 = param_2[1];
    pcVar3 = param_2 + 1;
  }
  else {
    pcVar3 = param_2;
  }
  if ((cVar1 == '0') && ((pcVar3[1] + 0xa8U & 0xdf) == 0)) {
    uVar2 = FUN_180199d10(param_1,pcVar3 + 2);
  }
  else {
    uVar2 = FUN_180199b40(param_1);
  }
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((*param_2 == '-') && (*(int *)(*param_1 + 8) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 1;
  }
  return 1;
}



// ===== FUN_180199640 @ 180199640 (size 609)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined2 * FUN_180199640(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  
  uVar12 = 0x180199662;
  bVar1 = false;
  lVar5 = 0;
  iVar2 = FUN_180198b90();
  iVar2 = (iVar2 * 3) / 10 + (iVar2 * 3) / 1000;
  lVar10 = (longlong)((iVar2 + 2) / 0x13 + 1);
  plVar3 = (longlong *)FUN_180195dc0(lVar10 * 8,"crypto\\bn\\bn_print.c",0x48);
  lVar11 = (longlong)iVar2 + 5;
  puVar4 = (undefined2 *)FUN_180195dc0(lVar11,"crypto\\bn\\bn_print.c",0x49);
  if ((puVar4 == (undefined2 *)0x0) || (plVar3 == (longlong *)0x0)) {
    FUN_1801a70c0(3,0x68,0x41,"crypto\\bn\\bn_print.c",0x4b,uVar12);
  }
  else {
    lVar5 = FUN_180198800(param_1);
    if (lVar5 != 0) {
      iVar2 = FUN_180198a80(lVar5);
      if (iVar2 == 0) {
        iVar2 = FUN_180198a00(lVar5);
        puVar8 = puVar4;
        if (iVar2 != 0) {
          *(undefined1 *)puVar4 = 0x2d;
          puVar8 = (undefined2 *)((longlong)puVar4 + 1);
        }
        iVar2 = FUN_180198a80(lVar5);
        plVar7 = plVar3;
        while (iVar2 == 0) {
          if (lVar10 <= (longlong)plVar7 - (longlong)plVar3 >> 3) goto LAB_180199846;
          lVar6 = FUN_1801bb950(lVar5,10000000000000000000);
          *plVar7 = lVar6;
          if (lVar6 == -1) goto LAB_180199846;
          plVar7 = plVar7 + 1;
          iVar2 = FUN_180198a80(lVar5);
        }
        iVar2 = FUN_180196a10(puVar8,(undefined1 *)((lVar11 - (longlong)puVar8) + (longlong)puVar4),
                              &DAT_18030bef0,plVar7[-1]);
        if (-1 < iVar2) {
          puVar9 = (undefined1 *)((longlong)puVar8 + (longlong)iVar2);
          while (plVar7 = plVar7 + -1, plVar7 != plVar3) {
            iVar2 = FUN_180196a10(puVar9,(undefined1 *)
                                         ((lVar11 - (longlong)puVar9) + (longlong)puVar4),"%019llu",
                                  plVar7[-1]);
            if (iVar2 < 0) goto LAB_180199846;
            puVar9 = puVar9 + iVar2;
          }
          bVar1 = true;
        }
      }
      else {
        *puVar4 = 0x30;
        bVar1 = true;
      }
    }
  }
LAB_180199846:
  FUN_180195e10(plVar3,"crypto\\bn\\bn_print.c",0x76);
  FUN_180198910(lVar5);
  if (!bVar1) {
    FUN_180195e10(puVar4,"crypto\\bn\\bn_print.c",0x7a);
    puVar4 = (undefined2 *)0x0;
  }
  return puVar4;
}



// ===== FUN_1801998b0 @ 1801998b0 (size 654)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_1801998b0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1801998c0;
  bVar1 = false;
  iVar2 = FUN_180198a80();
  if (iVar2 != 0) {
    pcVar3 = (char *)FUN_1801ba320(&DAT_180304efc,"crypto\\bn\\bn_print.c",0x1b);
    return pcVar3;
  }
  pcVar3 = (char *)FUN_180195dc0((longlong)((int)param_1[1] << 4) + 2,"crypto\\bn\\bn_print.c",0x1c)
  ;
  if (pcVar3 == (char *)0x0) {
    FUN_1801a70c0(3,0x69,0x41,"crypto\\bn\\bn_print.c",0x1e,uVar9);
    return (char *)0x0;
  }
  pcVar4 = pcVar3;
  if ((int)param_1[2] != 0) {
    *pcVar3 = '-';
    pcVar4 = pcVar3 + 1;
  }
  iVar2 = (int)param_1[1] + -1;
  lVar8 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      lVar5 = *param_1;
      bVar6 = *(byte *)(lVar5 + 7 + lVar8 * 8);
      if ((bVar1) || (bVar6 != 0)) {
        bVar1 = true;
        *pcVar4 = "0123456789ABCDEF"[bVar6 >> 4];
        pcVar4[1] = "0123456789ABCDEF"[bVar6 & 0xf];
        pcVar4 = pcVar4 + 2;
        lVar5 = *param_1;
      }
      bVar6 = (byte)*(undefined2 *)(lVar5 + 6 + lVar8 * 8);
      if ((bVar1) || (bVar6 != 0)) {
        bVar1 = true;
        *pcVar4 = "0123456789ABCDEF"[bVar6 >> 4];
        pcVar4[1] = "0123456789ABCDEF"[bVar6 & 0xf];
        pcVar4 = pcVar4 + 2;
        lVar5 = *param_1;
      }
      bVar6 = (byte)((ulonglong)*(undefined8 *)(lVar5 + lVar8 * 8) >> 0x28);
      if ((bVar1) || (bVar6 != 0)) {
        bVar1 = true;
        *pcVar4 = "0123456789ABCDEF"[bVar6 >> 4];
        pcVar4[1] = "0123456789ABCDEF"[bVar6 & 0xf];
        pcVar4 = pcVar4 + 2;
        lVar5 = *param_1;
      }
      bVar6 = (byte)((ulonglong)*(undefined8 *)(lVar5 + lVar8 * 8) >> 0x20);
      if ((bVar1) || (bVar6 != 0)) {
        bVar1 = true;
        *pcVar4 = "0123456789ABCDEF"[bVar6 >> 4];
        pcVar4[1] = "0123456789ABCDEF"[bVar6 & 0xf];
        pcVar4 = pcVar4 + 2;
        lVar5 = *param_1;
      }
      bVar6 = (byte)((ulonglong)*(undefined8 *)(lVar5 + lVar8 * 8) >> 0x18);
      if ((bVar1) || (bVar6 != 0)) {
        bVar1 = true;
        *pcVar4 = "0123456789ABCDEF"[bVar6 >> 4];
        pcVar4[1] = "0123456789ABCDEF"[bVar6 & 0xf];
        pcVar4 = pcVar4 + 2;
        lVar5 = *param_1;
      }
      bVar6 = (byte)((ulonglong)*(undefined8 *)(lVar5 + lVar8 * 8) >> 0x10);
      if ((bVar1) || (bVar6 != 0)) {
        bVar1 = true;
        *pcVar4 = "0123456789ABCDEF"[bVar6 >> 4];
        pcVar4[1] = "0123456789ABCDEF"[bVar6 & 0xf];
        pcVar4 = pcVar4 + 2;
        lVar5 = *param_1;
      }
      bVar6 = (byte)((ulonglong)*(undefined8 *)(lVar5 + lVar8 * 8) >> 8);
      if ((bVar1) || (bVar6 != 0)) {
        bVar1 = true;
        *pcVar4 = "0123456789ABCDEF"[bVar6 >> 4];
        pcVar4[1] = "0123456789ABCDEF"[bVar6 & 0xf];
        pcVar4 = pcVar4 + 2;
        lVar5 = *param_1;
      }
      uVar7 = *(ulonglong *)(lVar5 + lVar8 * 8);
      if ((bVar1) || ((char)uVar7 != '\0')) {
        uVar7 = uVar7 & 0xff;
        bVar1 = true;
        *pcVar4 = "0123456789ABCDEF"[uVar7 >> 4];
        pcVar4[1] = "0123456789ABCDEF"[(uint)uVar7 & 0xf];
        pcVar4 = pcVar4 + 2;
      }
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  *pcVar4 = '\0';
  return pcVar3;
}



// ===== FUN_180199b40 @ 180199b40 (size 459)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_180199b40(longlong *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  
  lVar4 = 0;
  if ((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) {
    pcVar6 = param_2 + 1;
    if (cVar1 != '-') {
      pcVar6 = param_2;
    }
    iVar8 = 0;
    lVar7 = 0;
    do {
      iVar2 = FUN_1801baab0((int)pcVar6[lVar7],4);
      if (iVar2 == 0) break;
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 0x20000000);
    if ((iVar8 != 0) && (iVar8 < 0x20000000)) {
      iVar2 = (uint)(cVar1 == '-') + iVar8;
      if (param_1 == (longlong *)0x0) {
        return iVar2;
      }
      lVar4 = *param_1;
      if (lVar4 == 0) {
        lVar4 = FUN_180198b30();
        if (lVar4 == 0) {
          return 0;
        }
      }
      else {
        FUN_180198f20(lVar4,0);
      }
      if (iVar8 * 4 < 0x7fffffc1) {
        iVar3 = iVar8 * 4 + 0x3f;
        iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fU)) >> 6;
        if (*(int *)(lVar4 + 0xc) < iVar3) {
          lVar7 = FUN_180199440(lVar4,iVar3);
        }
        else {
          lVar7 = lVar4;
        }
        if (lVar7 != 0) {
          iVar3 = (iVar8 / 0x13) * 0x13 - iVar8;
          iVar8 = iVar8 + -1;
          if (-1 < iVar8) {
            iVar5 = 0;
            if (iVar3 != 0) {
              iVar5 = iVar3 + 0x13;
            }
            do {
              iVar5 = iVar5 + 1;
              if (iVar5 == 0x13) {
                iVar3 = FUN_1801bbc10(lVar4,10000000000000000000);
                if ((iVar3 == 0) || (iVar3 = FUN_1801bb790(lVar4), iVar3 == 0)) goto LAB_180199cde;
                iVar5 = 0;
              }
              iVar8 = iVar8 + -1;
            } while (-1 < iVar8);
          }
          FUN_180199370(lVar4);
          *param_1 = lVar4;
          if (*(int *)(lVar4 + 8) == 0) {
            return iVar2;
          }
          *(uint *)(lVar4 + 0x10) = (uint)(cVar1 == '-');
          return iVar2;
        }
      }
    }
LAB_180199cde:
    if (*param_1 == 0) {
      FUN_180198910(lVar4);
    }
  }
  return 0;
}



// ===== FUN_180199d10 @ 180199d10 (size 510)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_180199d10(longlong *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  longlong *local_res20;
  
  if ((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) {
    pcVar11 = param_2 + 1;
    if (cVar1 != '-') {
      pcVar11 = param_2;
    }
    iVar6 = 0;
    lVar9 = 0;
    do {
      iVar2 = FUN_1801baab0((int)pcVar11[lVar9],0x10);
      if (iVar2 == 0) break;
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < 0x20000000);
    if ((iVar6 != 0) && (iVar6 < 0x20000000)) {
      iVar2 = (uint)(cVar1 == '-') + iVar6;
      if (param_1 == (longlong *)0x0) {
        return iVar2;
      }
      local_res20 = (longlong *)*param_1;
      if (local_res20 == (longlong *)0x0) {
        local_res20 = (longlong *)FUN_180198b30();
        if (local_res20 == (longlong *)0x0) {
          return 0;
        }
      }
      else {
        FUN_180198f20(local_res20,0);
      }
      if (iVar6 * 4 < 0x7fffffc1) {
        iVar3 = iVar6 * 4 + 0x3f;
        iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fU)) >> 6;
        if (*(int *)((longlong)local_res20 + 0xc) < iVar3) {
          plVar5 = (longlong *)FUN_180199440(local_res20,iVar3);
        }
        else {
          plVar5 = local_res20;
        }
        if (plVar5 != (longlong *)0x0) {
          iVar3 = 0;
          if (0 < iVar6) {
            lVar9 = 0;
            do {
              iVar4 = iVar6;
              if (0xf < iVar6) {
                iVar4 = 0x10;
              }
              uVar10 = 0;
              lVar7 = (longlong)iVar4;
              lVar8 = iVar6 - lVar7;
              do {
                iVar4 = FUN_1801ba500(pcVar11[lVar8]);
                lVar8 = lVar8 + 1;
                if (iVar4 < 0) {
                  iVar4 = 0;
                }
                lVar7 = lVar7 + -1;
                uVar10 = uVar10 << 4 | (longlong)iVar4;
              } while (0 < lVar7);
              iVar3 = iVar3 + 1;
              iVar6 = iVar6 + -0x10;
              *(ulonglong *)(lVar9 + *local_res20) = uVar10;
              lVar9 = lVar9 + 8;
            } while (0 < iVar6);
          }
          *(int *)(local_res20 + 1) = iVar3;
          FUN_180199370(local_res20);
          *param_1 = (longlong)local_res20;
          if ((int)local_res20[1] == 0) {
            return iVar2;
          }
          *(uint *)(local_res20 + 2) = (uint)(cVar1 == '-');
          return iVar2;
        }
      }
      if (*param_1 == 0) {
        FUN_180198910(local_res20);
      }
    }
  }
  return 0;
}



// ===== FUN_180199f10 @ 180199f10 (size 275)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_180199f10(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  bVar1 = false;
  if ((((int)param_2[2] != 0) && (iVar2 = FUN_18018dce0(param_1,&DAT_180306a88,1), iVar2 != 1)) ||
     ((iVar2 = FUN_180198a80(param_2), iVar2 != 0 &&
      (iVar2 = FUN_18018dce0(param_1,&DAT_180304efc,1), iVar2 != 1)))) {
    return 0;
  }
  iVar2 = (int)param_2[1] + -1;
  lVar5 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      iVar2 = 0x3c;
      do {
        uVar4 = *(ulonglong *)(*param_2 + lVar5 * 8) >> ((byte)iVar2 & 0x3f);
        if ((bVar1) || ((uVar4 & 0xf) != 0)) {
          iVar3 = FUN_18018dce0(param_1,"0123456789ABCDEF" + ((uint)uVar4 & 0xf),1);
          if (iVar3 != 1) {
            return 0;
          }
          bVar1 = true;
        }
        iVar2 = iVar2 + -4;
      } while (-1 < iVar2);
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return 1;
}



// ===== FUN_18019a070 @ 18019a070 (size 74)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_18019a070(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = iVar2 - *param_2;
  if (iVar1 == 0) {
    if ((iVar2 != 0) &&
       (iVar2 = memcmp(*(void **)(param_1 + 2),*(void **)(param_2 + 2),(longlong)iVar2), iVar2 != 0)
       ) {
      return iVar2;
    }
    iVar1 = param_1[1] - param_2[1];
  }
  return iVar1;
}



// ===== FUN_18019a0c0 @ 18019a0c0 (size 316)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019a0c0(int *param_1,int *param_2)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  ulonglong _Size;
  void *_Dst;
  undefined8 uVar3;
  
  uVar3 = 0x18019a0e4;
  if (param_2 != (int *)0x0) {
    param_1[1] = param_2[1];
    _Size = (ulonglong)*param_2;
    _Src = *(void **)(param_2 + 2);
    if (*param_2 < 0) {
      if (_Src == (void *)0x0) {
        return 0;
      }
      _Size = 0xffffffffffffffff;
      do {
        _Size = _Size + 1;
      } while (*(char *)((longlong)_Src + _Size) != '\0');
    }
    if (_Size < 0x7fffffff) {
      plVar1 = (longlong *)(param_1 + 2);
      if (((ulonglong)(longlong)*param_1 <= _Size) || (_Dst = (void *)*plVar1, _Dst == (void *)0x0))
      {
        lVar2 = *plVar1;
        _Dst = (void *)FUN_180195e50(lVar2,_Size + 1,"crypto\\asn1\\asn1_lib.c",299);
        *plVar1 = (longlong)_Dst;
        if (_Dst == (void *)0x0) {
          FUN_1801a70c0(0xd,0xba,0x41,"crypto\\asn1\\asn1_lib.c",0x12e,uVar3);
          *plVar1 = lVar2;
          return 0;
        }
      }
      *param_1 = (int)_Size;
      if (_Src != (void *)0x0) {
        memcpy(_Dst,_Src,_Size);
        *(undefined1 *)(_Size + *plVar1) = 0;
      }
      param_1[4] = param_1[4] & 0x80;
      param_1[4] = param_1[4] | param_2[4] & 0xffffff7fU;
      return 1;
    }
    FUN_1801a70c0(0xd,0,0xdf,"crypto\\asn1\\asn1_lib.c",0x122,0x18019a0e4);
  }
  return 0;
}



// ===== FUN_18019a200 @ 18019a200 (size 403)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_18019a200(int *param_1)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  int *piVar3;
  ulonglong _Size;
  void *_Dst;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = (int *)FUN_180196100(0x18,"crypto\\asn1\\asn1_lib.c",0x155);
  if (piVar3 == (int *)0x0) {
    FUN_1801a70c0(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x157);
    return (int *)0x0;
  }
  piVar3[1] = 4;
  piVar3[1] = param_1[1];
  _Size = (ulonglong)*param_1;
  _Src = *(void **)(param_1 + 2);
  if (*param_1 < 0) {
    if (_Src == (void *)0x0) goto LAB_18019a335;
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)_Src + _Size) != '\0');
  }
  if (0x7ffffffe < _Size) {
    FUN_1801a70c0(0xd,0,0xdf,"crypto\\asn1\\asn1_lib.c",0x122);
LAB_18019a335:
    FUN_18019a3a0(piVar3);
    return (int *)0x0;
  }
  plVar1 = (longlong *)(piVar3 + 2);
  if (((ulonglong)(longlong)*piVar3 <= _Size) || (_Dst = (void *)*plVar1, _Dst == (void *)0x0)) {
    lVar2 = *plVar1;
    _Dst = (void *)FUN_180195e50(lVar2,_Size + 1,"crypto\\asn1\\asn1_lib.c",299);
    *plVar1 = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
      FUN_1801a70c0(0xd,0xba,0x41,"crypto\\asn1\\asn1_lib.c",0x12e);
      *plVar1 = lVar2;
      goto LAB_18019a335;
    }
  }
  *piVar3 = (int)_Size;
  if (_Src != (void *)0x0) {
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)(_Size + *plVar1) = 0;
  }
  piVar3[4] = piVar3[4] & 0x80;
  piVar3[4] = piVar3[4] | param_1[4] & 0xffffff7fU;
  return piVar3;
}



// ===== FUN_18019a3a0 @ 18019a3a0 (size 100)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019a3a0(longlong param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 & 0x10) == 0) {
      FUN_180195e10(*(undefined8 *)(param_1 + 8),"crypto\\asn1\\asn1_lib.c",0x163);
    }
    if ((uVar1 & 0x80) == 0) {
      FUN_180195e10(param_1,"crypto\\asn1\\asn1_lib.c",0x165);
    }
  }
  return;
}



// ===== FUN_18019a420 @ 18019a420 (size 90)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019a420(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180196100(0x18,"crypto\\asn1\\asn1_lib.c",0x155);
  if (lVar1 == 0) {
    FUN_1801a70c0(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x157);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  return lVar1;
}



// ===== FUN_18019a480 @ 18019a480 (size 281)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019a480(int *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong _Size;
  undefined8 uVar3;
  
  uVar3 = 0x18019a48f;
  if (param_3 < 0) {
    if (param_2 == (void *)0x0) {
      return 0;
    }
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)param_2 + _Size) != '\0');
  }
  else {
    _Size = (ulonglong)param_3;
  }
  if (0x7ffffffe < _Size) {
    FUN_1801a70c0(0xd,0,0xdf,"crypto\\asn1\\asn1_lib.c",0x122,0x18019a48f);
    return 0;
  }
  plVar1 = (longlong *)(param_1 + 2);
  if (((ulonglong)(longlong)*param_1 <= _Size) || (_Dst = (void *)*plVar1, _Dst == (void *)0x0)) {
    lVar2 = *plVar1;
    _Dst = (void *)FUN_180195e50(lVar2,_Size + 1,"crypto\\asn1\\asn1_lib.c",299);
    *plVar1 = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
      FUN_1801a70c0(0xd,0xba,0x41,"crypto\\asn1\\asn1_lib.c",0x12e,uVar3);
      *plVar1 = lVar2;
      return 0;
    }
  }
  *param_1 = (int)_Size;
  if (param_2 != (void *)0x0) {
    memcpy(_Dst,param_2,_Size);
    *(undefined1 *)(_Size + *plVar1) = 0;
  }
  return 1;
}



// ===== FUN_18019a5a0 @ 18019a5a0 (size 77)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019a5a0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_180195e10(*(undefined8 *)(param_1 + 2),"crypto\\asn1\\asn1_lib.c",0x147);
  *(undefined8 *)(param_1 + 2) = param_2;
  *param_1 = param_3;
  return;
}



// ===== FUN_18019a600 @ 18019a600 (size 92)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019a600(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x18019a60c;
  lVar1 = FUN_180196100(0x18,"crypto\\asn1\\asn1_lib.c",0x155);
  if (lVar1 == 0) {
    FUN_1801a70c0(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x157,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = param_1;
  return lVar1;
}



// ===== FUN_18019a660 @ 18019a660 (size 454)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_18019a660(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (param_5 != 0) {
    bVar1 = *(byte *)*param_1;
    iVar8 = param_5 + -1;
    uVar5 = bVar1 & 0x20;
    uVar3 = bVar1 & 0x1f;
    uVar7 = 0;
    pbVar4 = (byte *)*param_1 + 1;
    if (uVar3 == 0x1f) {
      if (iVar8 == 0) goto LAB_18019a79c;
      uVar3 = 0;
      bVar2 = *pbVar4;
      while ((char)bVar2 < '\0') {
        pbVar4 = pbVar4 + 1;
        uVar3 = bVar2 & 0x7f | uVar3 << 7;
        iVar8 = iVar8 + -1;
        if ((iVar8 == 0) || (0xffffff < (int)uVar3)) goto LAB_18019a79c;
        bVar2 = *pbVar4;
      }
      pbVar4 = pbVar4 + 1;
      uVar3 = bVar2 & 0x7f | uVar3 << 7;
      iVar8 = iVar8 + -1;
    }
    if (iVar8 != 0) {
      *param_3 = uVar3;
      *param_4 = bVar1 & 0xc0;
      if (0 < iVar8) {
        bVar2 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        if (bVar2 == 0x80) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
          uVar3 = bVar2 & 0x7f;
          if ((char)bVar2 < '\0') {
            if (iVar8 + -1 < (int)(uVar3 + 1)) goto LAB_18019a79c;
            if ((bVar2 & 0x7f) != 0) {
              do {
                if (*pbVar4 != 0) break;
                pbVar4 = pbVar4 + 1;
                uVar3 = uVar3 - 1;
              } while (0 < (int)uVar3);
            }
            if (4 < (int)uVar3) goto LAB_18019a79c;
            if (0 < (int)uVar3) {
              do {
                bVar2 = *pbVar4;
                uVar3 = uVar3 - 1;
                pbVar4 = pbVar4 + 1;
                uVar7 = uVar7 << 8 | (uint)bVar2;
              } while (0 < (int)uVar3);
              if (0x7fffffff < uVar7) goto LAB_18019a79c;
            }
          }
          else {
            uVar7 = uVar3;
          }
        }
        *param_2 = uVar7;
        if ((uVar6 == 0) || ((bVar1 & 0x20) != 0)) {
          if (((longlong)param_5 - (longlong)pbVar4) + *param_1 < (longlong)(int)uVar7) {
            FUN_1801a70c0(0xd,0x72,0x9b,"crypto\\asn1\\asn1_lib.c",0x5b,0x18019a67e);
            uVar5 = uVar5 | 0x80;
          }
          *param_1 = (longlong)pbVar4;
          return uVar6 | uVar5;
        }
      }
    }
  }
LAB_18019a79c:
  FUN_1801a70c0(0xd,0x72,0x7b,"crypto\\asn1\\asn1_lib.c",0x65,0x18019a67e);
  return 0x80;
}



// ===== FUN_18019a830 @ 18019a830 (size 79)

int FUN_18019a830(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (-1 < param_2) {
    if (0x1e < param_3) {
      do {
        param_3 = param_3 >> 7;
        iVar2 = iVar2 + 1;
      } while (0 < param_3);
    }
    if (param_1 == 2) {
      iVar2 = iVar2 + 3;
    }
    else {
      iVar2 = iVar2 + 1;
      iVar1 = param_2;
      if (0x7f < param_2) {
        for (; 0 < iVar1; iVar1 = iVar1 >> 8) {
          iVar2 = iVar2 + 1;
        }
      }
    }
    if (iVar2 < 0x7fffffff - param_2) {
      return iVar2 + param_2;
    }
  }
  return -1;
}



// ===== FUN_18019a8a0 @ 18019a8a0 (size 302)

void FUN_18019a8a0(longlong *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  
  pbVar2 = (byte *)*param_1;
  pbVar7 = pbVar2 + 1;
  iVar6 = 0;
  bVar5 = -(param_2 != 0) & 0x20U | param_5 & 0xc0;
  if (param_4 < 0x1f) {
    *pbVar2 = (byte)param_4 & 0x1f | bVar5;
  }
  else {
    *pbVar2 = bVar5 | 0x1f;
    iVar1 = iVar6;
    for (iVar3 = param_4; 0 < iVar3; iVar3 = iVar3 >> 7) {
      iVar1 = iVar1 + 1;
    }
    lVar4 = (longlong)iVar1;
    if (0 < iVar1) {
      iVar3 = iVar1 + -1;
      pbVar2 = pbVar7 + iVar1;
      do {
        pbVar2 = pbVar2 + -1;
        bVar5 = (byte)param_4 & 0x7f;
        iVar1 = iVar1 + -1;
        *pbVar2 = bVar5;
        if (iVar1 != iVar3) {
          *pbVar2 = bVar5 | 0x80;
        }
        param_4 = param_4 >> 7;
      } while (0 < iVar1);
    }
    pbVar7 = pbVar7 + lVar4;
  }
  if (param_2 == 2) {
    *pbVar7 = 0x80;
    pbVar7 = pbVar7 + 1;
  }
  else {
    iVar1 = param_3;
    if (param_3 < 0x80) {
      *pbVar7 = (byte)param_3;
      pbVar7 = pbVar7 + 1;
    }
    else {
      for (; 0 < iVar1; iVar1 = iVar1 >> 8) {
        iVar6 = iVar6 + 1;
      }
      lVar4 = (longlong)iVar6;
      *pbVar7 = (byte)iVar6 | 0x80;
      if (0 < iVar6) {
        pbVar2 = pbVar7 + (longlong)iVar6 + 1;
        do {
          pbVar2 = pbVar2 + -1;
          iVar6 = iVar6 + -1;
          *pbVar2 = (byte)param_3;
          param_3 = param_3 >> 8;
        } while (0 < iVar6);
      }
      pbVar7 = pbVar7 + lVar4 + 1;
    }
  }
  *param_1 = (longlong)pbVar7;
  return;
}



// ===== FUN_18019a9d0 @ 18019a9d0 (size 93)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019a9d0(longlong param_1,int param_2)

{
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x10) & 0x10) == 0) {
      FUN_180195e10(*(undefined8 *)(param_1 + 8),"crypto\\asn1\\asn1_lib.c",0x163);
    }
    if (param_2 == 0) {
      FUN_180195e10(param_1,"crypto\\asn1\\asn1_lib.c",0x165);
    }
  }
  return;
}



// ===== FUN_18019aa30 @ 18019aa30 (size 165)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019aa30(undefined8 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 & 4) != 0) {
      FUN_180195e10(*param_1,"crypto\\asn1\\a_object.c",0x167);
      FUN_180195e10(param_1[1],"crypto\\asn1\\a_object.c",0x168);
      uVar1 = *(uint *)(param_1 + 4);
      param_1[1] = 0;
      *param_1 = 0;
    }
    if ((uVar1 & 8) != 0) {
      FUN_180195e10(param_1[3],"crypto\\asn1\\a_object.c",0x16d);
      uVar1 = *(uint *)(param_1 + 4);
      param_1[3] = 0;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    if ((uVar1 & 1) != 0) {
      FUN_180195e10(param_1,"crypto\\asn1\\a_object.c",0x172);
    }
  }
  return;
}



// ===== FUN_18019aae0 @ 18019aae0 (size 88)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019aae0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180196100(0x28,"crypto\\asn1\\a_object.c",0x156);
  if (lVar1 == 0) {
    FUN_1801a70c0(0xd,0x7b,0x41,"crypto\\asn1\\a_object.c",0x158);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x20) = 1;
  return lVar1;
}



// ===== FUN_18019ab40 @ 18019ab40 (size 1076)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18019ab40(longlong param_1,int param_2,char *param_3,uint param_4)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  byte bVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int local_78;
  uint local_74;
  int local_70;
  int local_6c;
  char *local_68;
  longlong local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  puVar6 = local_58;
  lVar5 = 0;
  local_78 = 0;
  local_70 = 0x18;
  uVar14 = (ulonglong)param_4;
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 == 0xffffffff) {
    uVar14 = 0xffffffffffffffff;
    do {
      uVar14 = uVar14 + 1;
    } while (param_3[uVar14] != '\0');
  }
  local_74 = (int)*param_3 - 0x30;
  local_6c = param_2;
  local_60 = param_1;
  if (local_74 < 3) {
    if (0 < (int)uVar14 + -1) {
      iVar12 = (int)param_3[1];
      iVar13 = (int)uVar14 + -2;
      local_68 = param_3 + 2;
      if (0 < iVar13) {
        do {
          if ((iVar12 != 0x2e) && (iVar12 != 0x20)) {
            local_88 = 0x57;
            uVar11 = 0x83;
LAB_18019aeb3:
            FUN_1801a70c0(0xd,100,uVar11,"crypto\\asn1\\a_object.c");
LAB_18019aec7:
            if (puVar6 != local_58) {
              FUN_180195e10(puVar6,"crypto\\asn1\\a_object.c",0xaf);
            }
            goto LAB_18019af37;
          }
          uVar14 = 0;
          bVar2 = false;
          if (0 < iVar13) {
            do {
              iVar12 = (int)*local_68;
              iVar13 = iVar13 + -1;
              local_68 = local_68 + 1;
              if ((iVar12 == 0x20) || (iVar12 == 0x2e)) break;
              iVar3 = FUN_1801baab0(iVar12,4);
              if (iVar3 == 0) {
                local_88 = 100;
                uVar11 = 0x82;
                goto LAB_18019aeb3;
              }
              if (bVar2) {
LAB_18019acb7:
                iVar3 = FUN_1801bbc10(lVar5,10);
                if ((iVar3 == 0) ||
                   (iVar3 = FUN_1801bb790(lVar5,(longlong)(iVar12 + -0x30)), iVar3 == 0))
                goto LAB_18019aec7;
              }
              else {
                if (0x19999990 < (uint)uVar14) {
                  bVar2 = true;
                  if (((lVar5 != 0) || (lVar5 = FUN_180198b30(), lVar5 != 0)) &&
                     (iVar3 = FUN_180198f20(lVar5,uVar14), iVar3 != 0)) goto LAB_18019acb7;
                  goto LAB_18019aec7;
                }
                uVar14 = (ulonglong)(iVar12 + ((uint)uVar14 * 5 + -0x18) * 2);
              }
            } while (0 < iVar13);
          }
          if (local_78 != 0) goto LAB_18019ad3d;
          if (((int)local_74 < 2) && (0x27 < (uint)uVar14)) {
            local_88 = 0x78;
            uVar11 = 0x93;
            goto LAB_18019aeb3;
          }
          if (bVar2) {
            iVar3 = FUN_1801bb790(lVar5,(longlong)(int)(local_74 * 0x28));
            if (iVar3 != 0) goto LAB_18019ad3d;
            goto LAB_18019aec7;
          }
          uVar14 = (ulonglong)((uint)uVar14 + local_74 * 0x28);
LAB_18019ad3d:
          iVar3 = 0;
          lVar9 = 0;
          if (bVar2) {
            iVar4 = FUN_180198b90(lVar5);
            iVar4 = (iVar4 + 6) / 7;
            if (local_70 < iVar4) {
              if (puVar6 != local_58) {
                FUN_180195e10(puVar6,"crypto\\asn1\\a_object.c",0x88);
              }
              local_70 = iVar4 + 0x20;
              puVar6 = (undefined1 *)
                       FUN_180195dc0((longlong)local_70,"crypto\\asn1\\a_object.c",0x8a);
              if (puVar6 == (undefined1 *)0x0) goto LAB_18019aec7;
            }
            while (iVar4 != 0) {
              iVar4 = iVar4 + -1;
              lVar7 = FUN_1801bb950(lVar5,0x80);
              if (lVar7 == -1) goto LAB_18019aec7;
              puVar6[lVar9] = (char)lVar7;
              iVar3 = iVar3 + 1;
              lVar9 = lVar9 + 1;
            }
          }
          else {
            do {
              bVar10 = (byte)uVar14;
              iVar3 = iVar3 + 1;
              uVar14 = uVar14 >> 7;
              puVar6[lVar9] = bVar10 & 0x7f;
              lVar9 = lVar9 + 1;
            } while ((int)uVar14 != 0);
          }
          iVar3 = iVar3 + local_78;
          if (local_60 != 0) {
            if (local_6c < iVar3) {
              local_88 = 0xa0;
              uVar11 = 0x6b;
              goto LAB_18019aeb3;
            }
            lVar9 = lVar9 + -1;
            if (0 < lVar9) {
              lVar7 = (longlong)local_78;
              local_78 = local_78 + (int)lVar9;
              pbVar8 = (byte *)(lVar7 + local_60);
              do {
                pbVar1 = puVar6 + lVar9;
                lVar9 = lVar9 + -1;
                *pbVar8 = *pbVar1 | 0x80;
                pbVar8 = pbVar8 + 1;
              } while (0 < lVar9);
            }
            iVar3 = local_78 + 1;
            *(undefined1 *)(local_78 + local_60) = *puVar6;
          }
          local_78 = iVar3;
        } while (0 < iVar13);
        if (puVar6 != local_58) {
          FUN_180195e10(puVar6,"crypto\\asn1\\a_object.c",0xaa);
        }
      }
      FUN_180198910(lVar5);
      return local_78;
    }
    local_88 = 0x4e;
    uVar11 = 0x8a;
  }
  else {
    local_88 = 0x49;
    uVar11 = 0x7a;
  }
  FUN_1801a70c0(0xd,100,uVar11,"crypto\\asn1\\a_object.c");
LAB_18019af37:
  FUN_180198910(lVar5);
  return 0;
}



// ===== FUN_18019af80 @ 18019af80 (size 659)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_18019af80(undefined8 *param_1,longlong *param_2,int param_3)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  void *_Dst;
  char *pcVar3;
  size_t _Size;
  undefined1 local_58 [16];
  undefined4 local_48;
  int local_44;
  char *local_40;
  undefined4 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x18019af92;
  _Size = (size_t)param_3;
  if ((((param_3 < 1) || (param_2 == (longlong *)0x0)) ||
      (pcVar3 = (char *)*param_2, pcVar3 == (char *)0x0)) || (pcVar3[_Size - 1] < '\0')) {
    FUN_1801a70c0(0xd,0xc4,0xd8,"crypto\\asn1\\a_object.c",0xfe);
    return (undefined8 *)0x0;
  }
  local_48 = 0;
  local_38 = 0;
  local_44 = param_3;
  local_40 = pcVar3;
  iVar1 = FUN_1801b96c0(local_58);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (0 < param_3) {
      do {
        if ((*pcVar3 == -0x80) && ((iVar1 == 0 || (-1 < pcVar3[-1])))) {
          FUN_1801a70c0(0xd,0xc4,0xd8,"crypto\\asn1\\a_object.c",0x11c);
          return (undefined8 *)0x0;
        }
        iVar1 = iVar1 + 1;
        pcVar3 = pcVar3 + 1;
      } while (iVar1 < param_3);
    }
    if (((param_1 == (undefined8 *)0x0) ||
        (puVar2 = (undefined8 *)*param_1, puVar2 == (undefined8 *)0x0)) ||
       ((*(byte *)(puVar2 + 4) & 1) == 0)) {
      puVar2 = (undefined8 *)FUN_180196100(0x28,"crypto\\asn1\\a_object.c",0x156);
      if (puVar2 == (undefined8 *)0x0) {
        FUN_1801a70c0(0xd,0x7b,0x41,"crypto\\asn1\\a_object.c",0x158);
        return (undefined8 *)0x0;
      }
      *(undefined4 *)(puVar2 + 4) = 1;
    }
    _Src = (void *)*param_2;
    _Dst = (void *)puVar2[3];
    puVar2[3] = 0;
    if ((_Dst == (void *)0x0) || (*(int *)((longlong)puVar2 + 0x14) < param_3)) {
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_180195e10(_Dst,"crypto\\asn1\\a_object.c",0x130);
      _Dst = (void *)FUN_180195dc0(_Size,"crypto\\asn1\\a_object.c",0x131);
      if (_Dst == (void *)0x0) {
        FUN_1801a70c0(0xd,0xc4,0x41,"crypto\\asn1\\a_object.c",0x14c);
        if ((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 != puVar2)) {
          FUN_18019aa30(puVar2);
        }
        return (undefined8 *)0x0;
      }
      *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) | 8;
    }
    memcpy(_Dst,_Src,_Size);
    if ((*(byte *)(puVar2 + 4) & 4) != 0) {
      FUN_180195e10(*puVar2,"crypto\\asn1\\a_object.c",0x13b);
      FUN_180195e10(puVar2[1],"crypto\\asn1\\a_object.c",0x13c);
      *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) & 0xfffffffb;
    }
    puVar2[3] = _Dst;
    *(int *)((longlong)puVar2 + 0x14) = param_3;
    *puVar2 = 0;
    puVar2[1] = 0;
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = puVar2;
    }
    *param_2 = (longlong)_Src + _Size;
  }
  else {
    puVar2 = (undefined8 *)FUN_1801b9550(iVar1);
    if (param_1 != (undefined8 *)0x0) {
      FUN_18019aa30(*param_1);
      *param_1 = puVar2;
    }
    *param_2 = *param_2 + _Size;
  }
  return puVar2;
}



// ===== FUN_18019b220 @ 18019b220 (size 173)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019b220(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = *param_2;
  cVar1 = FUN_18019a660(&local_10,local_res20,local_res10,local_18,param_3);
  if (cVar1 < '\0') {
    uVar3 = 0x66;
  }
  else {
    if (local_res10[0] == 6) {
      lVar2 = FUN_18019af80(param_1,&local_10,local_res20[0]);
      if (lVar2 != 0) {
        *param_2 = local_10;
      }
      return lVar2;
    }
    uVar3 = 0x74;
  }
  FUN_1801a70c0(0xd,0x93,uVar3,"crypto\\asn1\\a_object.c",0xeb);
  return 0;
}



// ===== FUN_18019b2d0 @ 18019b2d0 (size 354)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18019b2d0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [80];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18019b2de;
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  puVar4 = local_78;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
    uVar5 = FUN_18018dce0(param_1,&DAT_18030bf30,4);
  }
  else {
    uVar1 = FUN_1801b97e0(local_78,0x50,param_2);
    if (0x4f < (int)uVar1) {
      puVar4 = (undefined1 *)
               FUN_180195dc0((longlong)(int)(uVar1 + 1),"crypto\\asn1\\a_object.c",0xc2);
      if (puVar4 == (undefined1 *)0x0) {
        local_88 = 0xc3;
        FUN_1801a70c0(0xd,0x7e,0x41,"crypto\\asn1\\a_object.c");
        return 0xffffffff;
      }
      FUN_1801b97e0(puVar4,uVar1 + 1,param_2,0);
    }
    if ((int)uVar1 < 1) {
      iVar2 = FUN_18018dce0(param_1,"<INVALID>",9);
      iVar3 = FUN_1801bbdc0(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14))
      ;
      uVar5 = (ulonglong)(uint)(iVar3 + iVar2);
    }
    else {
      FUN_18018dce0(param_1,puVar4,uVar1);
      if (puVar4 != local_78) {
        FUN_180195e10(puVar4,"crypto\\asn1\\a_object.c",0xcf);
      }
      uVar5 = (ulonglong)uVar1;
    }
  }
  return uVar5;
}



// ===== FUN_18019b460 @ 18019b460 (size 138)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_18019b460(undefined8 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  uint *local_res10 [3];
  uint local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x18019b46c;
  local_res10[0] = local_28;
  if (((param_2 == (undefined4 *)0x0) || (0x1e < (uint)param_2[1])) ||
     ((int)(char)(&DAT_18030c068)[(int)param_2[1]] == 0xffffffff)) {
    uVar1 = 0xffffffff;
  }
  else {
    local_20 = 0;
    local_28[0] = 0;
    local_18 = 0;
    uVar1 = FUN_1801bd700(local_res10,*(undefined8 *)(param_2 + 2),*param_2,
                          (int)(char)(&DAT_18030c068)[(int)param_2[1]] | 0x1000,0x2000);
    if (-1 < (int)uVar1) {
      *param_1 = local_20;
      return (ulonglong)local_28[0];
    }
  }
  return uVar1;
}



// ===== FUN_18019b530 @ 18019b530 (size 668)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18019b530(byte *param_1,uint param_2,uint param_3,ushort param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint local_78;
  ushort local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  byte *local_60;
  byte *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  iVar6 = 0;
  uVar8 = (ulonglong)(int)param_2;
  local_60 = param_1 + uVar8;
  local_68 = param_3 & 7;
  local_74 = param_4;
  local_70 = param_2;
  local_6c = param_3;
  local_58 = param_1;
  if (local_68 == 2) {
    if ((param_2 & 1) != 0) {
      local_88 = CONCAT44(local_88._4_4_,0xa1);
      FUN_1801a70c0(0xd,0x8e,0x81,"crypto\\asn1\\a_strex.c");
      return -1;
    }
  }
  else if ((local_68 == 4) && ((param_2 & 3) != 0)) {
    local_88 = CONCAT44(local_88._4_4_,0x9b);
    FUN_1801a70c0(0xd,0x8e,0x85,"crypto\\asn1\\a_strex.c");
    return -1;
  }
  if (param_1 != local_60) {
    do {
      uVar2 = local_74 & 1;
      if ((param_1 == local_58) && ((local_74 & 1) != 0)) {
        uVar7 = 0x20;
      }
      else {
        uVar7 = 0;
      }
      if (local_68 == 0) {
        iVar3 = FUN_1801bc750(param_1,uVar8 & 0xffffffff,&local_78);
        if (iVar3 < 0) {
          return -1;
        }
        local_70 = (int)uVar8 - iVar3;
        uVar8 = (ulonglong)local_70;
        param_1 = param_1 + iVar3;
      }
      else if (local_68 == 1) {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        local_78 = (uint)bVar1;
      }
      else if (local_68 == 2) {
        local_78 = (uint)CONCAT11(*param_1,param_1[1]);
        param_1 = param_1 + 2;
      }
      else {
        if (local_68 != 4) {
          return -1;
        }
        local_78 = (uint)param_1[3] |
                   (uint)param_1[2] << 8 | (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18;
        param_1 = param_1 + 4;
      }
      if ((param_1 == local_60) && (uVar2 != 0)) {
        uVar7 = 0x40;
      }
      if ((local_6c & 8) == 0) {
        local_88 = param_7;
        iVar3 = FUN_18019b7d0(local_78,uVar7 | local_74,param_5,param_6);
        if (iVar3 < 0) {
          return -1;
        }
        iVar6 = iVar6 + iVar3;
      }
      else {
        lVar5 = 0;
        iVar3 = FUN_1801bca80(local_50,6,local_78);
        if (0 < iVar3) {
          uVar7 = uVar7 | local_74;
          do {
            local_88 = param_7;
            iVar4 = FUN_18019b7d0(local_50[lVar5],uVar7,param_5,param_6);
            if (iVar4 < 0) {
              return -1;
            }
            iVar6 = iVar6 + iVar4;
            lVar5 = lVar5 + 1;
          } while (lVar5 < iVar3);
        }
        uVar8 = (ulonglong)local_70;
      }
    } while (param_1 != local_60);
  }
  return iVar6;
}



// ===== FUN_18019b7d0 @ 18019b7d0 (size 456)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18019b7d0(uint param_1,ushort param_2,undefined1 *param_3,code *param_4,undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  byte local_28 [8];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStack_48;
  if (param_1 < 0x10000) {
    if (param_1 < 0x100) {
      local_28[0] = (byte)param_1;
      if (local_28[0] < 0x80) {
        uVar1 = *(ushort *)(&DAT_18030bf50 + (ulonglong)(param_1 & 0xff) * 2);
      }
      else {
        uVar1 = 4;
      }
      uVar1 = uVar1 & param_2;
      if ((uVar1 & 0x61) == 0) {
        if ((uVar1 & 0x406) != 0) {
          FUN_180196a10(local_20,0xb,"\\%02X",param_1 & 0xff);
          iVar2 = (*param_4)(param_5,local_20,3);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          return 3;
        }
        if ((local_28[0] == 0x5c) && ((param_2 & 0x40f) != 0)) {
          iVar2 = (*param_4)(param_5,&DAT_180303f30,2);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          return 2;
        }
      }
      else {
        if ((uVar1 & 8) == 0) {
          iVar2 = (*param_4)(param_5,&DAT_1803021bc,1);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          iVar2 = (*param_4)(param_5,local_28,1);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          return 2;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
      }
      iVar2 = (*param_4)(param_5,local_28,1);
      if (iVar2 != 0) {
        return 1;
      }
    }
    else {
      FUN_180196a10(local_20,0xb,"\\U%04lX",param_1);
      iVar2 = (*param_4)(param_5,local_20,6);
      if (iVar2 != 0) {
        return 6;
      }
    }
  }
  else {
    FUN_180196a10(local_20,0xb,"\\W%08lX",param_1);
    iVar2 = (*param_4)(param_5,local_20,10);
    if (iVar2 != 0) {
      return 10;
    }
  }
  return 0xffffffff;
}



// ===== FUN_18019b9a0 @ 18019b9a0 (size 174)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_18019b9a0(code *param_1,longlong param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  char local_res10;
  char local_res11;
  
  if (param_2 != 0) {
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_res10 = "0123456789ABCDEF"[*param_3 >> 4];
      local_res11 = "0123456789ABCDEF"[*param_3 & 0xf];
      iVar2 = (*param_1)(param_2,&local_res10,2);
      if (iVar2 == 0) {
        return -1;
      }
    }
  }
  return param_4 * 2;
}



// ===== FUN_18019ba50 @ 18019ba50 (size 106)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019ba50(code *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (*param_1)(param_2,&DAT_1802ffaf0,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return 1;
}



// ===== FUN_18019bac0 @ 18019bac0 (size 908)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18019bac0(code *param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_98 [10];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x18019bada;
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_108;
  local_e0 = -1;
  iVar10 = 0;
  if (-1 < param_4) {
    iVar10 = param_4;
  }
  local_c8 = param_3;
  iVar1 = FUN_18019ba50(param_1,param_2,iVar10);
  if (iVar1 == 0) {
    return -1;
  }
  uVar2 = param_5 & 0xf0000;
  if (uVar2 == 0x10000) {
    local_e4 = 1;
    local_d0 = &DAT_180305408;
    puVar12 = &DAT_1802fc984;
    iVar1 = 1;
    local_e8 = 0;
LAB_18019bbcc:
    iVar11 = 1;
  }
  else {
    param_3 = local_c8;
    if (uVar2 == 0x20000) {
      local_d0 = &DAT_1802ffd08;
    }
    else {
      if (uVar2 != 0x30000) {
        if (uVar2 != 0x40000) {
          return -1;
        }
        local_e4 = 3;
        local_d0 = &DAT_1802fa360;
        puVar12 = &DAT_18030c0b8;
        iVar1 = 3;
        local_e8 = iVar10;
        goto LAB_18019bbcc;
      }
      local_d0 = &DAT_180300dd8;
    }
    puVar12 = &DAT_18030c0b8;
    local_e8 = 0;
    iVar11 = 2;
    iVar1 = 3;
    local_e4 = 3;
  }
  local_bc = 3;
  if ((param_5 & 0x800000) == 0) {
    local_bc = 1;
  }
  local_b0 = &DAT_180304b44;
  if ((param_5 & 0x800000) == 0) {
    local_b0 = &DAT_180309a00;
  }
  local_c0 = param_5 & 0x600000;
  local_b8 = FUN_1801a3ac0(param_3);
  local_dc = 0;
  if (0 < local_b8) {
    local_b4 = param_5 & 0x100000;
    local_d8 = local_b8;
    do {
      local_d8 = local_d8 + -1;
      iVar4 = local_d8;
      if (local_b4 == 0) {
        iVar4 = local_dc;
      }
      uVar5 = FUN_1801a3af0(param_3,iVar4);
      iVar4 = local_e0;
      if (local_e0 != -1) {
        iVar3 = FUN_1801a37a0(uVar5);
        if (iVar4 == iVar3) {
          iVar4 = (*param_1)(param_2,puVar12,iVar1);
          if (iVar4 == 0) {
            return -1;
          }
          iVar10 = iVar10 + iVar1;
        }
        else {
          iVar4 = (*param_1)(param_2,local_d0,iVar11);
          iVar1 = local_e8;
          if (iVar4 == 0) {
            return -1;
          }
          iVar4 = FUN_18019ba50(param_1,param_2,local_e8);
          if (iVar4 == 0) {
            return -1;
          }
          iVar10 = iVar10 + iVar11 + iVar1;
        }
      }
      local_e0 = FUN_1801a37a0(uVar5);
      uVar6 = FUN_1801a3790(uVar5);
      uVar5 = FUN_1801a3780(uVar5);
      local_a8 = uVar5;
      iVar1 = FUN_1801b96c0(uVar6);
      if (local_c0 != 0x600000) {
        if ((local_c0 == 0x400000) || (iVar1 == 0)) {
          FUN_1801b97e0(local_98,0x50,uVar6);
          ppuVar7 = local_98;
LAB_18019bd48:
          iVar4 = 0;
        }
        else if (local_c0 == 0) {
          iVar4 = 10;
          ppuVar7 = (undefined **)FUN_1801b9610(iVar1);
        }
        else {
          if (local_c0 != 0x200000) {
            ppuVar7 = &PTR_1802ead18;
            goto LAB_18019bd48;
          }
          iVar4 = 0x19;
          ppuVar7 = (undefined **)FUN_1801b9490(iVar1);
        }
        uVar9 = 0xffffffffffffffff;
        do {
          uVar9 = uVar9 + 1;
        } while (*(char *)((longlong)ppuVar7 + uVar9) != '\0');
        iVar8 = (int)uVar9;
        iVar3 = (*param_1)(param_2,ppuVar7,uVar9 & 0xffffffff);
        if (iVar3 == 0) {
          return -1;
        }
        if ((iVar8 < iVar4) && ((param_5 & 0x2000000) != 0)) {
          iVar3 = FUN_18019ba50(param_1,param_2,iVar4 - iVar8);
          if (iVar3 == 0) {
            return -1;
          }
          iVar10 = iVar10 + (iVar4 - iVar8);
        }
        iVar4 = local_bc;
        iVar3 = (*param_1)(param_2,local_b0,local_bc);
        if (iVar3 == 0) {
          return -1;
        }
        iVar10 = iVar10 + iVar4 + iVar8;
        uVar5 = local_a8;
      }
      if ((iVar1 == 0) && ((param_5 >> 0x18 & 1) != 0)) {
        uVar2 = 0x80;
      }
      else {
        uVar2 = 0;
      }
      iVar1 = FUN_18019be50(param_1,param_2,uVar2 | param_5,uVar5);
      if (iVar1 < 0) {
        return -1;
      }
      iVar10 = iVar10 + iVar1;
      local_dc = local_dc + 1;
      param_3 = local_c8;
      iVar1 = local_e4;
    } while (local_dc < local_b8);
  }
  return iVar10;
}



// ===== FUN_18019be50 @ 18019be50 (size 680)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_18019be50(code *param_1,longlong param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ushort uVar7;
  char local_res18 [8];
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar8;
  undefined4 local_38 [2];
  undefined4 *local_30;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_30 = (undefined4 *)0x18019be6c;
  iVar3 = param_4[1];
  local_res18[0] = '\0';
  uVar7 = (ushort)param_3 & 0x40f;
  iVar2 = 0;
  if ((param_3 & 0x40) != 0) {
    lVar4 = FUN_1801bcc80(iVar3);
    uVar5 = 0xffffffffffffffff;
    do {
      uVar5 = uVar5 + 1;
    } while (*(char *)(lVar4 + uVar5) != '\0');
    iVar2 = (*param_1)(param_2,lVar4,uVar5 & 0xffffffff);
    if (iVar2 == 0) {
      return -1;
    }
    iVar2 = (*param_1)(param_2,&DAT_1802ea954,1);
    if (iVar2 == 0) {
      return -1;
    }
    iVar2 = (int)uVar5 + 1;
  }
  if ((char)param_3 < '\0') {
LAB_18019bff6:
    iVar3 = (*param_1)(param_2,&DAT_1802fcaa0,1);
    if (iVar3 == 0) {
      return -1;
    }
    if ((param_3 >> 9 & 1) == 0) {
      iVar3 = FUN_18019b9a0(param_1,param_2,*(undefined8 *)(param_4 + 2),*param_4);
    }
    else {
      local_38[0] = param_4[1];
      local_30 = param_4;
      iVar3 = FUN_1801bc730(local_38,0);
      if (iVar3 < 1) {
        return -1;
      }
      lVar4 = FUN_180195dc0((longlong)iVar3,"crypto\\asn1\\a_strex.c",0x11d);
      if (lVar4 == 0) {
        FUN_1801a70c0(0xd,0x7d,0x41,"crypto\\asn1\\a_strex.c",CONCAT44(uVar8,0x11e));
        return -1;
      }
      local_res20 = lVar4;
      FUN_1801bc730(local_38,&local_res20);
      iVar3 = FUN_18019b9a0(param_1,param_2,lVar4,iVar3);
      FUN_180195e10(lVar4,"crypto\\asn1\\a_strex.c",0x124);
    }
    if (iVar3 < 0) {
      return -1;
    }
    if (iVar3 + 1 < 0) {
      return -1;
    }
    return iVar3 + 1 + iVar2;
  }
  if ((param_3 & 0x20) == 0) {
    if ((iVar3 - 1U < 0x1e) && (uVar6 = (uint)(char)(&DAT_18030c068)[iVar3], uVar6 != 0xffffffff))
    goto LAB_18019bf20;
    if ((param_3 >> 8 & 1) != 0) goto LAB_18019bff6;
  }
  uVar6 = 1;
LAB_18019bf20:
  if ((param_3 & 0x10) != 0) {
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = uVar6 | 8;
    }
  }
  iVar3 = FUN_18019b530(*(undefined8 *)(param_4 + 2),*param_4,uVar6,uVar7,local_res18,param_1,0);
  cVar1 = local_res18[0];
  if (-1 < iVar3) {
    iVar2 = iVar2 + iVar3;
    if (local_res18[0] != '\0') {
      iVar2 = iVar2 + 2;
    }
    if ((param_2 == 0) ||
       ((((local_res18[0] == '\0' || (iVar3 = (*param_1)(param_2,&DAT_1802ff834,1), iVar3 != 0)) &&
         (iVar3 = FUN_18019b530(*(undefined8 *)(param_4 + 2),*param_4,uVar6,uVar7,0,param_1,param_2)
         , -1 < iVar3)) &&
        ((cVar1 == '\0' || (iVar3 = (*param_1)(param_2,&DAT_1802ff834,1), iVar3 != 0)))))) {
      return iVar2;
    }
  }
  return -1;
}



// ===== FUN_18019c140 @ 18019c140 (size 170)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18019c140(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x18019c14f;
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  local_68 = param_2;
  lVar2 = FUN_1801bedc0(&local_68,local_60);
  if (lVar2 == 0) {
    local_78 = 0x14a;
    FUN_1801a70c0(0xd,0xd9,0xad,"crypto\\asn1\\a_time.c");
LAB_18019c1a6:
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) || (param_4 != 0)) {
      iVar1 = FUN_1801bedf0(lVar2,param_3,param_4);
      if (iVar1 == 0) goto LAB_18019c1a6;
    }
    uVar3 = FUN_18019c550(param_1,lVar2,0xffffffff);
  }
  return uVar3;
}



// ===== FUN_18019c230 @ 18019c230 (size 248)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18019c230(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  __time64_t local_78 [5];
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  if (param_3 == 0) {
    _time64(local_78);
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    lVar2 = FUN_1801bedc0(local_78,&local_48);
    bVar4 = lVar2 == 0;
  }
  else {
    iVar1 = FUN_18019c680(&local_48,param_3);
    bVar4 = iVar1 == 0;
  }
  if (!bVar4) {
    if (param_4 == 0) {
      _time64(local_78);
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[4] = 0;
      local_50 = 0;
      lVar2 = FUN_1801bedc0(local_78,local_78 + 1);
      bVar4 = lVar2 == 0;
    }
    else {
      iVar1 = FUN_18019c680(local_78 + 1,param_4);
      bVar4 = iVar1 == 0;
    }
    if (!bVar4) {
      uVar3 = FUN_1801bef90(param_1,param_2,&local_48,local_78 + 1);
      return uVar3;
    }
  }
  return 0;
}



// ===== FUN_18019c360 @ 18019c360 (size 487)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_18019c360(undefined8 param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  
  iVar3 = FUN_18019c680(&local_58);
  if (iVar3 == 0) {
    FUN_18018dce0(param_1,"Bad time value",0xe);
    return false;
  }
  lVar2 = *(longlong *)(param_2 + 2);
  iVar3 = *param_2;
  cVar1 = *(char *)((longlong)iVar3 + -1 + lVar2);
  if (param_2[1] == 0x18) {
    lVar9 = 0;
    iVar7 = 0;
    if ((0xf < iVar3) && (*(char *)(lVar2 + 0xe) == '.')) {
      lVar9 = lVar2 + 0xe;
      iVar7 = 1;
      if (0xf < iVar3) {
        iVar6 = 0xf;
        puVar8 = (undefined1 *)(lVar2 + 0xf);
        do {
          iVar4 = FUN_1801baaa0(*puVar8);
          if (iVar4 == 0) break;
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar6 < iVar3);
      }
    }
    ppuVar5 = &PTR_1802ead18;
    if (cVar1 == 'Z') {
      ppuVar5 = (undefined **)&DAT_18030c238;
    }
    iVar3 = FUN_180196900(param_1,"%s %2d %02d:%02d:%02d%.*s %d%s",
                          &DAT_18030c1a0 + (longlong)local_48 * 4,local_4c,local_50,local_54,
                          local_58,iVar7,lVar9,local_44 + 0x76c,ppuVar5);
  }
  else {
    ppuVar5 = &PTR_1802ead18;
    if (cVar1 == 'Z') {
      ppuVar5 = (undefined **)&DAT_18030c238;
    }
    iVar3 = FUN_180196900(param_1,"%s %2d %02d:%02d:%02d %d%s",
                          &DAT_18030c1a0 + (longlong)local_48 * 4,local_4c,local_50,local_54,
                          local_58,local_44 + 0x76c,ppuVar5);
  }
  return 0 < iVar3;
}



// ===== FUN_18019c550 @ 18019c550 (size 299)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_18019c550(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = 0x18019c56a;
  puVar3 = (undefined4 *)0x0;
  if (param_3 == -1) {
    param_3 = (99 < param_2[5] - 0x32) + 0x17;
  }
  else if (param_3 == 0x17) {
    if (99 < param_2[5] - 0x32) goto LAB_18019c5a3;
  }
  else if (param_3 != 0x18) goto LAB_18019c5a3;
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_18019a420();
  }
  else {
    puVar3 = param_1;
  }
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar1 = FUN_18019a480(puVar3,0,0x14);
  if (iVar1 != 0) {
    puVar3[1] = param_3;
    if (param_3 == 0x18) {
      iVar1 = param_2[5] + 0x76c;
    }
    else {
      iVar1 = (int)param_2[5] % 100;
    }
    pcVar4 = "%04d%02d%02d%02d%02d%02dZ";
    if (param_3 != 0x18) {
      pcVar4 = "%02d%02d%02d%02d%02d%02dZ";
    }
    uVar2 = FUN_180196a10(*(undefined8 *)(puVar3 + 2),0x14,pcVar4,iVar1,param_2[4] + 1,param_2[3],
                          param_2[2],param_2[1],*param_2,uVar5);
    *puVar3 = uVar2;
    return puVar3;
  }
LAB_18019c5a3:
  if (puVar3 != param_1) {
    FUN_18019a3a0(puVar3);
  }
  return (undefined4 *)0x0;
}



// ===== FUN_18019c680 @ 18019c680 (size 1289)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18019c680(undefined8 *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStack_b8 [32];
  char local_98;
  int local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  longlong local_80;
  int *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  iVar21 = 0;
  lVar10 = 6;
  local_88 = 0;
  uVar15 = 0;
  local_80 = 6;
  local_8c = 6;
  if (param_2[1] == 0x17) {
    uVar5 = param_2[4] & 0x100;
    iVar6 = 0xd;
    if (uVar5 == 0) {
      iVar6 = 0xb;
    }
    lVar10 = 5;
    uVar15 = (uint)(uVar5 != 0);
    local_88 = (uint)(uVar5 != 0);
  }
  else {
    if (param_2[1] != 0x18) {
      return 0;
    }
    local_8c = 7;
    if ((param_2[4] & 0x100U) != 0) {
      uVar15 = 1;
      iVar6 = 0xf;
      local_88 = 1;
      goto LAB_18019c72e;
    }
    iVar6 = 0xd;
  }
  local_80 = lVar10;
LAB_18019c72e:
  iVar9 = *param_2;
  lVar13 = (longlong)iVar9;
  lVar10 = *(longlong *)(param_2 + 2);
  iVar14 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (iVar9 < iVar6) {
    return 0;
  }
  local_90 = 0;
  lVar16 = 0;
  lVar18 = 0;
  local_94 = iVar9;
  local_78 = param_2;
  local_70 = param_1;
  do {
    if (((uVar15 == 0) && (lVar18 == local_80)) &&
       (bVar4 = *(char *)(lVar16 + lVar10) - 0x2b, bVar4 < 0x30)) {
      uVar15 = 0;
      if ((0x800000000005U >> ((longlong)(char)bVar4 & 0x3fU) & 1) != 0) break;
    }
    iVar6 = FUN_1801baaa0(*(undefined1 *)(lVar16 + lVar10));
    if (iVar6 == 0) {
      return 0;
    }
    cVar1 = *(char *)(lVar16 + lVar10);
    lVar17 = lVar16 + 1;
    if (lVar17 == lVar13) {
      return 0;
    }
    iVar6 = FUN_1801baaa0(*(undefined1 *)(lVar17 + lVar10));
    if (iVar6 == 0) {
      return 0;
    }
    iVar14 = iVar14 + 2;
    lVar16 = lVar16 + 2;
    iVar6 = (int)*(char *)(lVar17 + lVar10) + cVar1 * 10 + -0x210;
    if (lVar16 == lVar13) {
      return 0;
    }
    lVar17 = lVar18 + 1;
    iVar8 = local_78[1];
    lVar11 = lVar17;
    if (iVar8 != 0x17) {
      lVar11 = lVar18;
    }
    if (iVar6 < (int)(&DAT_18030c120)[lVar11]) {
      return 0;
    }
    if ((int)(&DAT_18030c148)[lVar11] < iVar6) {
      return 0;
    }
    iVar20 = local_90 + 1;
    iVar7 = iVar20;
    if (iVar8 != 0x17) {
      iVar7 = local_90;
    }
    iVar3 = (int)local_58;
    switch(iVar7) {
    case 0:
      local_58 = CONCAT44((iVar6 + -0x13) * 100,(int)local_58);
      break;
    case 1:
      if (iVar8 == 0x17) {
        if (iVar6 < 0x32) {
          local_58 = CONCAT44(iVar6 + 100,(int)local_58);
        }
        else {
          local_58 = CONCAT44(iVar6,(int)local_58);
        }
      }
      else {
        local_58 = CONCAT44(local_58._4_4_ + iVar6,(int)local_58);
      }
      break;
    case 2:
      local_58 = CONCAT44(local_58._4_4_,iVar6 + -1);
      break;
    case 3:
      lVar18 = (longlong)(int)local_58;
      if ((int)local_58 == 1) {
        iVar8 = FUN_18019cbb0(local_58._4_4_ + 0x76c);
        iVar8 = iVar8 + 0x1c;
      }
      else {
        iVar8 = *(int *)(&DAT_18030c170 + lVar18 * 4);
      }
      if (iVar8 < iVar6) {
        return 0;
      }
      local_84 = *(int *)(&DAT_18030c0f0 + lVar18 * 4) + iVar6;
      local_90 = local_58._4_4_ + 0x76c;
      uStack_60 = CONCAT44(iVar6,(undefined4)uStack_60);
      uStack_50._4_4_ = local_84 + -1;
      if (iVar3 < 2) {
        local_90 = local_58._4_4_ + 0x76b;
        iVar8 = 0xe;
      }
      else {
        iVar7 = FUN_18019cbb0();
        iVar8 = 2;
        uStack_50._4_4_ = local_84 + -1 + iVar7;
      }
      iVar7 = local_90 / 100;
      local_90 = local_90 % 100;
      uStack_50 = CONCAT44(uStack_50._4_4_,
                           (((int)((local_90 >> 0x1f & 3U) + local_90) >> 2) + 6 +
                            local_90 + iVar7 * 5 +
                            ((iVar8 + iVar3) * 0xd) / 5 + ((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2)
                           + iVar6) % 7);
      break;
    case 4:
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar6);
      break;
    case 5:
      local_68 = CONCAT44(iVar6,(undefined4)local_68);
      break;
    case 6:
      local_68 = CONCAT44(local_68._4_4_,iVar6);
    }
    lVar18 = lVar17;
    uVar15 = local_88;
    local_90 = iVar20;
  } while (lVar17 < (longlong)(ulonglong)local_8c);
  if ((local_78[1] == 0x18) && (*(char *)(iVar14 + lVar10) == '.')) {
    if (uVar15 != 0) {
      return 0;
    }
    iVar6 = iVar14 + 1;
    if (iVar6 == iVar9) {
      return 0;
    }
    lVar18 = (longlong)iVar6;
    iVar14 = iVar6;
    if (lVar13 <= lVar18) {
      return 0;
    }
    do {
      iVar8 = FUN_1801baaa0(*(undefined1 *)(lVar18 + lVar10));
      if (iVar8 == 0) break;
      iVar14 = iVar14 + 1;
      lVar18 = lVar18 + 1;
    } while (lVar18 < lVar13);
    if (iVar6 == iVar14) {
      return 0;
    }
    if (iVar14 == iVar9) {
      return 0;
    }
  }
  piVar2 = local_78;
  local_98 = *(char *)(iVar14 + lVar10);
  if (local_98 == 'Z') {
    iVar6 = iVar14 + 1;
    local_94 = iVar9;
  }
  else {
    if (uVar15 != 0) {
      return 0;
    }
    if ((local_98 - 0x2bU & 0xfd) != 0) {
      return 0;
    }
    iVar6 = iVar14 + 1;
    if (iVar14 + 5 != iVar9) {
      return 0;
    }
    uVar22 = (ulonglong)local_8c;
    pcVar19 = (char *)(iVar6 + lVar10);
    uVar15 = local_8c;
    do {
      iVar9 = FUN_1801baaa0(*pcVar19);
      if (iVar9 == 0) {
        return 0;
      }
      cVar1 = *pcVar19;
      iVar9 = FUN_1801baaa0(pcVar19[1]);
      if (iVar9 == 0) {
        return 0;
      }
      iVar9 = (int)pcVar19[1] + cVar1 * 10 + -0x210;
      uVar12 = uVar22 + 1;
      if (piVar2[1] != 0x17) {
        uVar12 = uVar22;
      }
      if (iVar9 < (int)(&DAT_18030c120)[uVar12]) {
        return 0;
      }
      if ((int)(&DAT_18030c148)[uVar12] < iVar9) {
        return 0;
      }
      if (local_70 != (undefined8 *)0x0) {
        if (uVar22 == local_8c) {
          iVar21 = iVar9 * 0xe10;
        }
        else if (uVar15 == local_8c + 1) {
          iVar21 = iVar21 + iVar9 * 0x3c;
        }
      }
      iVar6 = iVar6 + 2;
      pcVar19 = pcVar19 + 2;
      uVar15 = uVar15 + 1;
      uVar22 = uVar22 + 1;
    } while ((int)uVar15 < (int)(local_8c + 2));
    if (iVar21 != 0) {
      iVar9 = -iVar21;
      if (local_98 == '-') {
        iVar9 = iVar21;
      }
      iVar21 = FUN_1801bedf0(&local_68,0,iVar9);
      if (iVar21 == 0) {
        return 0;
      }
    }
  }
  if (iVar6 != local_94) {
    return 0;
  }
  if (local_70 != (undefined8 *)0x0) {
    *local_70 = local_68;
    local_70[1] = uStack_60;
    local_70[2] = local_58;
    local_70[3] = uStack_50;
    *(undefined4 *)(local_70 + 4) = local_48;
  }
  return 1;
}



// ===== FUN_18019cbb0 @ 18019cbb0 (size 94)

undefined8 FUN_18019cbb0(uint param_1)

{
  if (param_1 == ((int)param_1 / 400) * 400) {
    return 1;
  }
  if (param_1 != ((int)param_1 / 100) * 100) {
    param_1 = param_1 & 0x80000003;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xfffffffc) + 1;
    }
    if (param_1 == 0) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_18019cc10 @ 18019cc10 (size 183)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019cc10(byte *param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  bVar3 = false;
  uVar6 = (ulonglong)param_2;
  bVar2 = false;
  if (param_1 != (byte *)0x0) {
    if ((int)param_2 < 0) {
      uVar6 = 0xffffffffffffffff;
      do {
        uVar6 = uVar6 + 1;
      } while (param_1[uVar6] != 0);
    }
    if (0 < (int)uVar6) {
      do {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
        iVar4 = FUN_1801baab0(bVar1,0x800);
        if (iVar4 == 0) {
          bVar3 = true;
        }
        if ((bVar1 & 0x80) != 0) {
          bVar2 = true;
        }
      } while (0 < (int)uVar5);
      if (bVar2) {
        return 0x14;
      }
      if (bVar3) {
        return 0x16;
      }
    }
  }
  return 0x13;
}



// ===== FUN_18019ccd0 @ 18019ccd0 (size 208)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18019ccd0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  char local_68 [80];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x18019ccea;
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  if (param_2 == (int *)0x0) {
LAB_18019cd78:
    uVar1 = 0;
  }
  else {
    pcVar5 = *(char **)(param_2 + 2);
    iVar6 = 0;
    iVar4 = 0;
    if (0 < *param_2) {
      lVar3 = 0;
      do {
        cVar2 = *pcVar5;
        if (((0x5e < (byte)(cVar2 - 0x20U)) && (cVar2 != '\n')) && (cVar2 != '\r')) {
          cVar2 = '.';
        }
        local_68[lVar3] = cVar2;
        iVar6 = iVar6 + 1;
        lVar3 = lVar3 + 1;
        if (0x4f < iVar6) {
          iVar6 = FUN_18018dce0(param_1);
          if (iVar6 < 1) goto LAB_18019cd78;
          iVar6 = 0;
          lVar3 = 0;
        }
        iVar4 = iVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (iVar4 < *param_2);
      if (0 < iVar6) {
        iVar4 = FUN_18018dce0(param_1,local_68);
        if (iVar4 < 1) goto LAB_18019cd78;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



// ===== FUN_18019cda0 @ 18019cda0 (size 206)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18019cda0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_180196100(0x30,"crypto\\evp\\digest.c",0x3e);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = 1;
  FUN_1801afd10(lVar2,1);
  iVar1 = FUN_18019d050(lVar2,param_5,param_6);
  if ((iVar1 == 0) ||
     (((param_2 != 0 && (iVar1 = (**(code **)(lVar2 + 0x28))(lVar2,param_1,param_2), iVar1 == 0)) ||
      (iVar1 = FUN_18019cf70(lVar2,param_3,param_4), iVar1 == 0)))) {
    uVar3 = 0;
  }
  FUN_18019d590(lVar2);
  FUN_180195e10(lVar2,"crypto\\evp\\digest.c",0x44);
  return uVar3;
}



// ===== FUN_18019ceb0 @ 18019ceb0 (size 177)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_18019ceb0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x18019cec0;
  if (((*(byte *)(*param_1 + 0xc) & 2) != 0) && (param_3 < 0x80000000)) {
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,3);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      lVar3 = *param_1;
      if (*(code **)(lVar3 + 0x30) != (code *)0x0) {
        (**(code **)(lVar3 + 0x30))(param_1);
        FUN_1801afd10(param_1,2);
        lVar3 = *param_1;
      }
      FUN_180001240(param_1[3],(longlong)*(int *)(lVar3 + 0x3c));
      return uVar2;
    }
  }
  FUN_1801a70c0(6,0xae,0xb2,"crypto\\evp\\digest.c",0xd2,uVar4);
  return 0;
}



// ===== FUN_18019cf70 @ 18019cf70 (size 158)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_18019cf70(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (0x40 < *(int *)(lVar2 + 8)) {
    FUN_1801aeef0("assertion failed: ctx->digest->md_size <= EVP_MAX_MD_SIZE",
                  "crypto\\evp\\digest.c",0xb7);
    lVar2 = *param_1;
  }
  uVar1 = (**(code **)(lVar2 + 0x20))(param_1,param_2);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*param_1 + 8);
  }
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x30) != (code *)0x0) {
    (**(code **)(lVar2 + 0x30))(param_1);
    FUN_1801afd10(param_1,2);
    lVar2 = *param_1;
  }
  FUN_180001240(param_1[3],(longlong)*(int *)(lVar2 + 0x3c));
  return uVar1;
}



// ===== FUN_18019d050 @ 18019d050 (size 554)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019d050(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x18019d065;
  FUN_1801afcf0(param_1,2);
  if (((param_1[1] == 0) || ((int *)*param_1 == (int *)0x0)) ||
     ((param_2 != (int *)0x0 && (*param_2 != *(int *)*param_1)))) {
    if (param_2 == (int *)0x0) {
      piVar2 = (int *)*param_1;
      if (piVar2 == (int *)0x0) {
        FUN_1801a70c0(6,0x80,0x8b,"crypto\\evp\\digest.c",0x7f,uVar4);
        return 0;
      }
      param_2 = piVar2;
    }
    else {
      FUN_1801abfb0();
      if (param_3 == 0) {
        param_3 = FUN_1801c34a0(*param_2);
      }
      else {
        iVar1 = FUN_1801ac0a0(param_3);
        if (iVar1 == 0) {
          FUN_1801a70c0(6,0x80,0x86,"crypto\\evp\\digest.c",100,uVar4);
          return 0;
        }
      }
      if ((param_3 != 0) &&
         (param_2 = (int *)FUN_1801c3440(param_3,*param_2), param_2 == (int *)0x0)) {
        FUN_1801a70c0(6,0x80,0x86,"crypto\\evp\\digest.c",0x70);
        FUN_1801abfb0(param_3);
        return 0;
      }
      param_1[1] = param_3;
      piVar2 = (int *)*param_1;
    }
    if (piVar2 != param_2) {
      FUN_18019d660(param_1,1);
      *param_1 = (longlong)param_2;
      if (((*(uint *)(param_1 + 2) & 0x100) == 0) && (param_2[0xf] != 0)) {
        param_1[5] = *(longlong *)(param_2 + 6);
        lVar3 = FUN_180196100((longlong)param_2[0xf],"crypto\\evp\\digest.c",0x8b);
        param_1[3] = lVar3;
        if (lVar3 == 0) {
          FUN_1801a70c0(6,0x80,0x41,"crypto\\evp\\digest.c",0x8d,uVar4);
          return 0;
        }
      }
    }
  }
  if (((param_1[4] != 0) &&
      (iVar1 = FUN_1801c2d40(param_1[4],0xffffffff,0xf8,7,0,param_1), iVar1 < 1)) && (iVar1 != -2))
  {
    return 0;
  }
  if ((*(uint *)(param_1 + 2) & 0x100) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00018019d276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    return uVar4;
  }
  return 1;
}



// ===== FUN_18019d2f0 @ 18019d2f0 (size 483)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019d2f0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x18019d300;
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    FUN_1801a70c0(6,0x6e,0x6f,"crypto\\evp\\digest.c",0xe2,0x18019d300);
    return 0;
  }
  if (param_2[1] != 0) {
    iVar3 = FUN_1801ac0a0();
    if (iVar3 == 0) {
      FUN_1801a70c0(6,0x6e,0x26,"crypto\\evp\\digest.c",0xe8,uVar5);
      return 0;
    }
  }
  if (*param_1 == *param_2) {
    _Dst = (void *)param_1[3];
    FUN_1801afd10(param_1,4);
  }
  else {
    _Dst = (void *)0x0;
  }
  FUN_18019d590(param_1);
  lVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar4 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar4 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(int *)(param_1 + 5) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  FUN_1801afcf0(param_1,0x400);
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2[3] != 0) {
    lVar4 = *param_1;
    if (*(int *)(lVar4 + 0x3c) != 0) {
      if (_Dst == (void *)0x0) {
        _Dst = (void *)FUN_180195dc0((longlong)*(int *)(lVar4 + 0x3c),"crypto\\evp\\digest.c",0x103)
        ;
        param_1[3] = (longlong)_Dst;
        if (_Dst == (void *)0x0) {
          FUN_1801a70c0(6,0x6e,0x41,"crypto\\evp\\digest.c",0x105);
          return 0;
        }
        lVar4 = *param_1;
      }
      else {
        param_1[3] = (longlong)_Dst;
      }
      memcpy(_Dst,(void *)param_2[3],(longlong)*(int *)(lVar4 + 0x3c));
    }
  }
  param_1[5] = param_2[5];
  if (param_2[4] != 0) {
    lVar4 = FUN_1801c2e70();
    param_1[4] = lVar4;
    if (lVar4 == 0) {
      FUN_18019d590(param_1);
      return 0;
    }
  }
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00018019d48e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  return uVar5;
}



// ===== FUN_18019d590 @ 18019d590 (size 194)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019d590(longlong *param_1)

{
  int iVar1;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      if (*(longlong *)(*param_1 + 0x30) != 0) {
        iVar1 = FUN_1801afd30(param_1,2);
        if (iVar1 == 0) {
          (**(code **)(*param_1 + 0x30))(param_1);
        }
      }
      if ((param_1[3] != 0) && (0 < *(int *)(*param_1 + 0x3c))) {
        iVar1 = FUN_1801afd30(param_1,4);
        if (iVar1 == 0) {
          FUN_180195f20(param_1[3],(longlong)*(int *)(*param_1 + 0x3c),"crypto\\evp\\digest.c",0x1c)
          ;
          param_1[3] = 0;
        }
      }
    }
    iVar1 = FUN_1801afd30(param_1,0x400);
    if (iVar1 == 0) {
      FUN_1801c2fb0(param_1[4]);
    }
    FUN_1801abfb0(param_1[1]);
    FUN_180001240(param_1,0x30);
  }
  return 1;
}



// ===== FUN_18019d660 @ 18019d660 (size 147)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019d660(longlong *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (*(longlong *)(*param_1 + 0x30) != 0) {
      iVar1 = FUN_1801afd30(param_1,2);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1);
      }
    }
    if ((param_1[3] != 0) && (0 < *(int *)(*param_1 + 0x3c))) {
      iVar1 = FUN_1801afd30(param_1,4);
      if ((iVar1 == 0) || (param_2 != 0)) {
        FUN_180195f20(param_1[3],(longlong)*(int *)(*param_1 + 0x3c),"crypto\\evp\\digest.c",0x1c);
        param_1[3] = 0;
      }
    }
  }
  return;
}



// ===== FUN_18019d790 @ 18019d790 (size 334)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18019d790(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  if (param_2 == 0x1d) {
    if (((param_1 != 0) && (uVar3 = FUN_1800b7fa0(), param_3 == 0x30)) &&
       (iVar1 = FUN_1801c37d0(uVar3,param_4,0x30), 0 < iVar1)) {
      local_68 = 0x3636363636363636;
      local_60 = 0x3636363636363636;
      local_58 = 0x3636363636363636;
      local_50 = 0x3636363636363636;
      local_48 = 0x3636363636363636;
      iVar1 = FUN_1801c37d0(uVar3,&local_68,0x28);
      if (((iVar1 != 0) && (iVar1 = FUN_1801c35c0(local_40,uVar3), iVar1 != 0)) &&
         ((iVar1 = FUN_1801c3750(uVar3), iVar1 != 0 &&
          (iVar1 = FUN_1801c37d0(uVar3,param_4,0x30), 0 < iVar1)))) {
        local_68 = 0x5c5c5c5c5c5c5c5c;
        local_60 = 0x5c5c5c5c5c5c5c5c;
        local_58 = 0x5c5c5c5c5c5c5c5c;
        local_50 = 0x5c5c5c5c5c5c5c5c;
        local_48 = 0x5c5c5c5c5c5c5c5c;
        iVar1 = FUN_1801c37d0(uVar3,&local_68,0x28);
        if ((iVar1 != 0) && (iVar1 = FUN_1801c37d0(uVar3,local_40,0x14), iVar1 != 0)) {
          FUN_180001240(local_40,0x14);
          return 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



// ===== FUN_18019dbd0 @ 18019dbd0 (size 75)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_18019dbd0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_18019e6a0();
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x28) = param_3;
      return param_3 != 0;
    }
  }
  return false;
}



// ===== FUN_18019dc20 @ 18019dc20 (size 72)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_18019dc20(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 local_res8 [4];
  
  puVar2 = (undefined4 *)FUN_1801c4b80(local_res8,*param_1);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_1801abfb0(local_res8[0]);
    return 0;
  }
  uVar1 = *puVar2;
  FUN_1801abfb0(local_res8[0]);
  return uVar1;
}



// ===== FUN_18019dcb0 @ 18019dcb0 (size 123)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019dcb0(int *param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 4) != 0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 4) + 0x90);
    if ((pcVar1 != (code *)0x0) && (uVar2 = (*pcVar1)(), (int)uVar2 < 1)) {
      return uVar2;
    }
    if (*(code **)(*(longlong *)(param_1 + 4) + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018019dd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(param_1 + 4) + 0x30))(param_1,param_2);
      return uVar2;
    }
  }
  return 0xfffffffe;
}



// ===== FUN_18019dd30 @ 18019dd30 (size 67)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019dd30(int *param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if ((*(longlong *)(param_1 + 4) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x90),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x00018019dd66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



// ===== FUN_18019dd80 @ 18019dd80 (size 296)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019dd80(int *param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x18019dd90;
  if (*param_1 == 0) {
    iVar1 = FUN_18019e6a0(param_1,*param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (*param_1 != *param_2) {
    uVar3 = 0x51;
    uVar2 = 0x65;
    goto LAB_18019de8a;
  }
  if (((*(longlong *)(param_2 + 4) == 0) ||
      (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x80),
      UNRECOVERED_JUMPTABLE == (code *)0x0)) ||
     (iVar1 = (*UNRECOVERED_JUMPTABLE)(param_2), iVar1 == 0)) {
    if (((*(longlong *)(param_1 + 4) != 0) &&
        (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x80),
        UNRECOVERED_JUMPTABLE != (code *)0x0)) &&
       (iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1), iVar1 != 0)) {
      if (*(longlong *)(param_2 + 4) == 0) {
        return 0;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x88);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00018019de40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar4;
    }
    if (((*param_1 == *param_2) && (*(longlong *)(param_1 + 4) != 0)) &&
       ((UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x90),
        UNRECOVERED_JUMPTABLE != (code *)0x0 &&
        (uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2), (int)uVar2 == 1)))) {
      return uVar2;
    }
    uVar3 = 0x5d;
    uVar2 = 0x99;
  }
  else {
    uVar3 = 0x56;
    uVar2 = 0x67;
  }
LAB_18019de8a:
  FUN_1801a70c0(6,0x67,uVar2,"crypto\\evp\\p_lib.c",uVar3,uVar4);
  return 0;
}



// ===== FUN_18019deb0 @ 18019deb0 (size 94)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019deb0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_18019df10();
      FUN_1801adcf0(*(undefined8 *)(param_1 + 0x40));
      FUN_1801958f0(*(undefined8 *)(param_1 + 0x38),FUN_1801c5df0);
      FUN_180195e10(param_1,"crypto\\evp\\p_lib.c",0x267);
    }
  }
  return;
}



// ===== FUN_18019df10 @ 18019df10 (size 89)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019df10(longlong param_1)

{
  code *pcVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xa8), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_1801abfb0(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1801abfb0(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// ===== FUN_18019df80 @ 18019df80 (size 75)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019df80(int *param_1)

{
  if ((*param_1 == 0x1c) || (*param_1 == 0x398)) {
    return *(undefined8 *)(param_1 + 10);
  }
  FUN_1801a70c0(6,0x77,0x80,"crypto\\evp\\p_lib.c",0x22f);
  return 0;
}



// ===== FUN_18019dfd0 @ 18019dfd0 (size 64)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019dfd0(int *param_1)

{
  if (*param_1 == 0x74) {
    return *(undefined8 *)(param_1 + 10);
  }
  FUN_1801a70c0(6,0x78,0x81,"crypto\\evp\\p_lib.c",0x1f5);
  return 0;
}



// ===== FUN_18019e010 @ 18019e010 (size 123)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019e010(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x18019e020;
  piVar1 = (int *)FUN_1801c4b80(&local_res8,*param_1);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  FUN_1801abfb0(local_res8);
  if (iVar2 == 0x198) {
    return *(undefined8 *)(param_1 + 10);
  }
  FUN_1801a70c0(6,0x83,0x8e,"crypto\\evp\\p_lib.c",0x211,uVar3);
  return 0;
}



// ===== FUN_18019e090 @ 18019e090 (size 75)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019e090(int *param_1)

{
  if ((*param_1 == 6) || (*param_1 == 0x390)) {
    return *(undefined8 *)(param_1 + 10);
  }
  FUN_1801a70c0(6,0x79,0x7f,"crypto\\evp\\p_lib.c",0x1da);
  return 0;
}



// ===== FUN_18019e0e0 @ 18019e0e0 (size 79)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019e0e0(int *param_1,longlong *param_2)

{
  int *piVar1;
  
  if (*param_1 == 0x425) {
    piVar1 = *(int **)(param_1 + 10);
    *param_2 = (longlong)*piVar1;
    return *(undefined8 *)(piVar1 + 2);
  }
  FUN_1801a70c0(6,0xb8,0xa4,"crypto\\evp\\p_lib.c",0x1b6);
  return 0;
}



// ===== FUN_18019e130 @ 18019e130 (size 77)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019e130(int *param_1,longlong *param_2)

{
  int *piVar1;
  
  if (*param_1 == 0x426) {
    piVar1 = *(int **)(param_1 + 10);
    *param_2 = (longlong)*piVar1;
    return *(undefined8 *)(piVar1 + 2);
  }
  FUN_1801a70c0(6,0xac,0xaf,"crypto\\evp\\p_lib.c",0x1c5);
  return 0;
}



// ===== FUN_18019e180 @ 18019e180 (size 101)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019e180(int *param_1)

{
  longlong lVar1;
  
  if ((*param_1 != 6) && (*param_1 != 0x390)) {
    FUN_1801a70c0(6,0x79,0x7f,"crypto\\evp\\p_lib.c",0x1da);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 10);
  if (lVar1 != 0) {
    FUN_18019ef60(lVar1);
  }
  return lVar1;
}



// ===== FUN_18019e1f0 @ 18019e1f0 (size 65)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019e1f0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,10,0,param_2,0x18019e1fa);
    if (0 < iVar2) {
      return (longlong)iVar2;
    }
  }
  return 0;
}



// ===== FUN_18019e2c0 @ 18019e2c0 (size 181)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_18019e2c0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x18019e2cc;
  puVar1 = (undefined8 *)FUN_180196100(0x48,"crypto\\evp\\p_lib.c",0x8e);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1801a70c0(6,0x6a,0x41,"crypto\\evp\\p_lib.c",0x91,uVar3);
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 6) = 1;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar2 = FUN_1801add30();
  puVar1[8] = lVar2;
  if (lVar2 == 0) {
    FUN_1801a70c0(6,0x6a,0x41,"crypto\\evp\\p_lib.c",0x9a,uVar3);
    FUN_180195e10(puVar1,"crypto\\evp\\p_lib.c",0x9b);
    return (undefined8 *)0x0;
  }
  return puVar1;
}



// ===== FUN_18019e380 @ 18019e380 (size 283)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019e380(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x18019e39e;
  lVar4 = FUN_18019e2c0();
  if (lVar4 != 0) {
    iVar3 = FUN_18019e880(lVar4,param_2,param_1,0,0xffffffff,uVar6);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0xf8);
      if (pcVar2 == (code *)0x0) {
        uVar5 = 0xf2;
        uVar6 = 0x96;
      }
      else {
        iVar3 = (*pcVar2)(lVar4,param_3,param_4);
        if (iVar3 != 0) {
          return lVar4;
        }
        uVar5 = 0xf7;
        uVar6 = 0xb4;
      }
      FUN_1801a70c0(6,0xbf,uVar6,"crypto\\evp\\p_lib.c",uVar5);
    }
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 2) {
      FUN_18019df10(lVar4);
      FUN_1801adcf0(*(undefined8 *)(lVar4 + 0x40));
      FUN_1801958f0(*(undefined8 *)(lVar4 + 0x38),FUN_1801c5df0);
      FUN_180195e10(lVar4,"crypto\\evp\\p_lib.c",0x267);
    }
  }
  return 0;
}



// ===== FUN_18019e4a0 @ 18019e4a0 (size 121)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019e4a0(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 4) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x38),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_18018d580(param_1,param_3,0x80);
    uVar1 = FUN_1801b9490(*param_2);
    FUN_180196900(param_1,"%s algorithm \"%s\" unsupported\n","Public Key",uVar1);
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00018019e4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



// ===== FUN_18019e560 @ 18019e560 (size 119)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_18019e560(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_18019f410(param_2);
  uVar3 = 0x398;
  if (lVar2 == 0) {
    uVar3 = 0x1c;
  }
  if ((param_1 == 0) || (iVar1 = FUN_18019e6a0(param_1,uVar3), iVar1 == 0)) {
    return false;
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  if (param_2 == 0) {
    return false;
  }
  FUN_18019f820(param_2);
  return param_2 != 0;
}



// ===== FUN_18019e5e0 @ 18019e5e0 (size 97)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_18019e5e0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (iVar1 = FUN_18019e6a0(param_1,0x198), iVar1 == 0)) {
    return false;
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  if (param_2 == 0) {
    return false;
  }
  FUN_1801c57b0(param_2);
  return param_2 != 0;
}



// ===== FUN_18019e650 @ 18019e650 (size 75)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019e650(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  int iVar2;
  
  if (((param_3 < 0x80000000) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,9,param_3,param_2,0x18019e65a);
    if (0 < iVar2) {
      return 1;
    }
  }
  return 0;
}



// ===== FUN_18019e6a0 @ 18019e6a0 (size 248)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019e6a0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 local_res8;
  undefined8 uVar2;
  
  uVar2 = 0x18019e6b0;
  local_res8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_18019df10();
    }
    if ((param_2 == param_1[1]) && (*(longlong *)(param_1 + 4) != 0)) {
      return 1;
    }
    FUN_1801abfb0(*(undefined8 *)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
    FUN_1801abfb0(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puVar1 = (undefined4 *)FUN_1801c4b80(&local_res8,param_2);
  if (param_1 == (undefined4 *)0x0) {
    FUN_1801abfb0(local_res8);
  }
  if (puVar1 == (undefined4 *)0x0) {
    FUN_1801a70c0(6,0x9e,0x9c,"crypto\\evp\\p_lib.c",0xd2,uVar2);
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 4) = puVar1;
    *param_1 = *puVar1;
    *(undefined8 *)(param_1 + 6) = local_res8;
    param_1[1] = param_2;
  }
  return 1;
}



// ===== FUN_18019e810 @ 18019e810 (size 72)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_18019e810(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 local_res10 [3];
  
  puVar2 = (undefined4 *)FUN_1801c4b80(local_res10,param_1);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_1801abfb0(local_res10[0]);
    return 0;
  }
  uVar1 = *puVar2;
  FUN_1801abfb0(local_res10[0]);
  return uVar1;
}



// ===== FUN_18019e880 @ 18019e880 (size 319)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18019e880(undefined4 *param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x18019e89d;
  plVar3 = &local_res10;
  if (param_2 != 0) {
    plVar3 = (longlong *)0x0;
  }
  local_res10 = param_2;
  if (param_1 != (undefined4 *)0x0) {
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_18019df10();
    }
    if ((param_3 == param_1[1]) && (*(longlong *)(param_1 + 4) != 0)) {
      return 1;
    }
    FUN_1801abfb0(*(undefined8 *)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
    FUN_1801abfb0(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (param_4 == 0) {
    puVar2 = (undefined4 *)FUN_1801c4b80(plVar3,param_3);
  }
  else {
    puVar2 = (undefined4 *)FUN_1801c4c80(plVar3,param_4,param_5);
  }
  if ((param_1 == (undefined4 *)0x0) && (plVar3 != (longlong *)0x0)) {
    FUN_1801abfb0(local_res10);
  }
  if (puVar2 == (undefined4 *)0x0) {
    FUN_1801a70c0(6,0x9e,0x9c,"crypto\\evp\\p_lib.c",0xd2,uVar4);
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  *(undefined4 **)(param_1 + 4) = puVar2;
  *param_1 = *puVar2;
  param_1[1] = param_3;
  if (((plVar3 == (longlong *)0x0) && (local_res10 != 0)) &&
     (iVar1 = FUN_1801ac0a0(local_res10), iVar1 == 0)) {
    FUN_1801a70c0(6,0x9e,0x86,"crypto\\evp\\p_lib.c",0xdb);
    return 0;
  }
  *(longlong *)(param_1 + 6) = local_res10;
  return 1;
}



// ===== FUN_18019e9c0 @ 18019e9c0 (size 276)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019e9c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x70);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 8) + 0x40), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      FUN_1801abfb0(*(undefined8 *)(param_1 + 0x10));
      FUN_1801ae0a0(9,param_1,param_1 + 0x68);
      FUN_1801adcf0(*(undefined8 *)(param_1 + 0xa8));
      FUN_180198910(*(undefined8 *)(param_1 + 0x18));
      FUN_180198910(*(undefined8 *)(param_1 + 0x20));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x28));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x30));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x38));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x40));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x48));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x50));
      FUN_1801c8950(*(undefined8 *)(param_1 + 0x60));
      FUN_1801958f0(*(undefined8 *)(param_1 + 0x58),FUN_1801c8c20);
      FUN_1801c6b20(*(undefined8 *)(param_1 + 0x98));
      FUN_1801c6b20(*(undefined8 *)(param_1 + 0xa0));
      FUN_180195e10(*(undefined8 *)(param_1 + 0x90),"crypto\\rsa\\rsa_lib.c",0x8c);
      FUN_180195e10(param_1,"crypto\\rsa\\rsa_lib.c",0x8d);
    }
  }
  return;
}



// ===== FUN_18019eb50 @ 18019eb50 (size 635)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019eb50(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x18019eb60;
  lVar4 = FUN_180196100(0xb0,"crypto\\rsa\\rsa_lib.c");
  if (lVar4 == 0) {
    FUN_1801a70c0(4,0x6a,0x41,"crypto\\rsa\\rsa_lib.c",0x37,uVar7);
    return 0;
  }
  *(undefined4 *)(lVar4 + 0x70) = 1;
  lVar5 = FUN_1801add30();
  *(longlong *)(lVar4 + 0xa8) = lVar5;
  if (lVar5 == 0) {
    FUN_1801a70c0(4,0x6a,0x41,"crypto\\rsa\\rsa_lib.c",0x3e,uVar7);
    uVar7 = 0x3f;
    goto LAB_18019ed24;
  }
  lVar5 = FUN_1801c8660();
  *(longlong *)(lVar4 + 8) = lVar5;
  *(uint *)(lVar4 + 0x74) = *(uint *)(lVar5 + 0x48) & 0xfffffbff;
  if (param_1 == 0) {
    param_1 = FUN_1801c8a20();
LAB_18019ed48:
    *(longlong *)(lVar4 + 0x10) = param_1;
    if (param_1 != 0) {
      lVar5 = FUN_18007e060(param_1);
      *(longlong *)(lVar4 + 8) = lVar5;
      if (lVar5 == 0) {
        uVar6 = 0x52;
        goto LAB_18019ec22;
      }
    }
    *(uint *)(lVar4 + 0x74) = *(uint *)(*(longlong *)(lVar4 + 8) + 0x48) & 0xfffffbff;
    iVar3 = FUN_1801ae440(9,lVar4,lVar4 + 0x68);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 8) + 0x38);
      if (pcVar2 == (code *)0x0) {
        return lVar4;
      }
      iVar3 = (*pcVar2)(lVar4);
      if (iVar3 != 0) {
        return lVar4;
      }
      uVar6 = 0x5e;
      uVar7 = 0x46;
      goto LAB_18019ec28;
    }
  }
  else {
    iVar3 = FUN_1801ac0a0(param_1);
    if (iVar3 != 0) goto LAB_18019ed48;
    uVar6 = 0x48;
LAB_18019ec22:
    uVar7 = 0x26;
LAB_18019ec28:
    FUN_1801a70c0(4,0x6a,uVar7,"crypto\\rsa\\rsa_lib.c",uVar6);
  }
  LOCK();
  piVar1 = (int *)(lVar4 + 0x70);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (1 < iVar3) {
    return 0;
  }
  if ((*(longlong *)(lVar4 + 8) != 0) &&
     (pcVar2 = *(code **)(*(longlong *)(lVar4 + 8) + 0x40), pcVar2 != (code *)0x0)) {
    (*pcVar2)(lVar4);
  }
  FUN_1801abfb0(*(undefined8 *)(lVar4 + 0x10));
  FUN_1801ae0a0(9,lVar4,lVar4 + 0x68);
  FUN_1801adcf0(*(undefined8 *)(lVar4 + 0xa8));
  FUN_180198910(*(undefined8 *)(lVar4 + 0x18));
  FUN_180198910(*(undefined8 *)(lVar4 + 0x20));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x28));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x30));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x38));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x40));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x48));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x50));
  FUN_1801c8950(*(undefined8 *)(lVar4 + 0x60));
  FUN_1801958f0(*(undefined8 *)(lVar4 + 0x58),FUN_1801c8c20);
  FUN_1801c6b20(*(undefined8 *)(lVar4 + 0x98));
  FUN_1801c6b20(*(undefined8 *)(lVar4 + 0xa0));
  FUN_180195e10(*(undefined8 *)(lVar4 + 0x90),"crypto\\rsa\\rsa_lib.c",0x8c);
  uVar7 = 0x8d;
LAB_18019ed24:
  FUN_180195e10(lVar4,"crypto\\rsa\\rsa_lib.c",uVar7);
  return 0;
}



// ===== FUN_18019edd0 @ 18019edd0 (size 90)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_18019edd0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((param_1 == (undefined8 *)0x0) || ((int *)*param_1 == (int *)0x0)) ||
      (iVar1 = *(int *)*param_1, iVar1 == 6)) || (iVar1 == 0x390)) {
    uVar2 = FUN_1801c2d40(param_1,0xffffffff,param_2,param_3,param_4,param_5,0x18019edda);
    return uVar2;
  }
  return 0xffffffff;
}



// ===== FUN_18019ee30 @ 18019ee30 (size 103)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019ee30(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_180198b90(*(undefined8 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 4) != 1) {
LAB_18019ee81:
    uVar4 = FUN_180198dc0(uVar1,0xffffffff);
    return uVar4;
  }
  iVar2 = FUN_1801958b0(*(undefined8 *)(param_1 + 0x58));
  if (0 < iVar2) {
    iVar3 = FUN_1801c8bf0(uVar1);
    if (iVar2 + 2 <= iVar3) goto LAB_18019ee81;
  }
  return 0;
}



// ===== FUN_18019eea0 @ 18019eea0 (size 160)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019eea0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) && (param_2 == 0)) ||
     ((*(longlong *)(param_1 + 0x20) == 0 && (param_3 == 0)))) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      FUN_180198910();
      *(longlong *)(param_1 + 0x18) = param_2;
    }
    if (param_3 != 0) {
      FUN_180198910(*(undefined8 *)(param_1 + 0x20));
      *(longlong *)(param_1 + 0x20) = param_3;
    }
    if (param_4 != 0) {
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x28));
      *(longlong *)(param_1 + 0x28) = param_4;
      FUN_180198ef0(param_4,4);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// ===== FUN_18019f030 @ 18019f030 (size 639)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019f030(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar11 = 0;
  if (param_2 == 0) {
    lVar4 = FUN_1801c9050();
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    lVar4 = param_2;
  }
  FUN_1801c9140(lVar4);
  lVar5 = FUN_1801c8e90(lVar4);
  if (lVar5 == 0) {
    FUN_1801a70c0(4,0x88,0x41,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar12,0x7e));
    lVar5 = 0;
    goto LAB_18019f27a;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    if (((lVar10 != 0) && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != 0)) &&
       (lVar2 = *(longlong *)(param_1 + 0x38), lVar2 != 0)) {
      FUN_1801c9140(lVar4);
      uVar6 = FUN_1801c8e90(lVar4);
      uVar7 = FUN_1801c8e90(lVar4);
      lVar8 = FUN_1801c8e90(lVar4);
      if (lVar8 != 0) {
        uVar9 = FUN_180199010();
        iVar3 = FUN_1801c9300(uVar7,lVar1,uVar9);
        if (iVar3 != 0) {
          uVar9 = FUN_180199010();
          iVar3 = FUN_1801c9300(lVar8,lVar2,uVar9);
          if ((iVar3 != 0) && (iVar3 = FUN_1801c9580(uVar6,uVar7,lVar8,lVar4), iVar3 != 0)) {
            lVar5 = FUN_1801ca950(0,lVar10,uVar6,lVar4);
          }
        }
      }
      FUN_1801c8d50(lVar4);
      if (lVar5 != 0) goto LAB_18019f1ca;
    }
    FUN_1801a70c0(4,0x88,0x8c,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar12,0x85));
  }
  else {
LAB_18019f1ca:
    lVar10 = FUN_180198b30();
    if (lVar10 == 0) {
      FUN_1801a70c0(4,0x88,0x41,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar12,0x90));
    }
    else {
      FUN_180199020(lVar10,*(undefined8 *)(param_1 + 0x18),4);
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
      lVar11 = FUN_1801c6850(0,lVar5,lVar10,lVar4,uVar6,*(undefined8 *)(param_1 + 0x78));
      uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
      FUN_180198910(lVar10);
      if (lVar11 == 0) {
        FUN_1801a70c0(4,0x88,3,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar12,0x9b));
      }
      else {
        FUN_1801c6e40(lVar11);
      }
    }
  }
LAB_18019f27a:
  FUN_1801c8d50(lVar4);
  if (lVar4 != param_2) {
    FUN_1801c8dd0(lVar4);
  }
  if (lVar5 != *(longlong *)(param_1 + 0x20)) {
    FUN_180198910(lVar5);
  }
  return lVar11;
}



// ===== FUN_18019f2e0 @ 18019f2e0 (size 218)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019f2e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x68);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 0x78) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x78) + 0x28), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      FUN_1801abfb0(*(undefined8 *)(param_1 + 0x80));
      FUN_1801ae0a0(6,param_1,param_1 + 0x70);
      FUN_1801adcf0(*(undefined8 *)(param_1 + 0x88));
      FUN_1801984d0(*(undefined8 *)(param_1 + 8));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x10));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x40));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x48));
      FUN_180195e10(*(undefined8 *)(param_1 + 0x50),"crypto\\dh\\dh_lib.c",0x7b);
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x60));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x20));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x28));
      FUN_180195e10(param_1,"crypto\\dh\\dh_lib.c",0x7f);
    }
  }
  return;
}



// ===== FUN_18019f440 @ 18019f440 (size 571)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019f440(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x18019f450;
  lVar4 = FUN_180196100(0x90,"crypto\\dh\\dh_lib.c",0x2c);
  if (lVar4 == 0) {
    FUN_1801a70c0(5,0x69,0x41,"crypto\\dh\\dh_lib.c",0x2f,uVar7);
    return 0;
  }
  *(undefined4 *)(lVar4 + 0x68) = 1;
  lVar5 = FUN_1801add30();
  *(longlong *)(lVar4 + 0x88) = lVar5;
  if (lVar5 == 0) {
    FUN_1801a70c0(5,0x69,0x41,"crypto\\dh\\dh_lib.c",0x36,uVar7);
    uVar7 = 0x37;
    goto LAB_18019f5d5;
  }
  lVar5 = FUN_1801cb970();
  *(longlong *)(lVar4 + 0x78) = lVar5;
  *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar5 + 0x30);
  if (param_1 == 0) {
    param_1 = FUN_1801cb980();
LAB_18019f5f9:
    *(longlong *)(lVar4 + 0x80) = param_1;
    if (param_1 != 0) {
      lVar5 = FUN_1801afd00(param_1);
      *(longlong *)(lVar4 + 0x78) = lVar5;
      if (lVar5 == 0) {
        uVar6 = 0x49;
        goto LAB_18019f50d;
      }
    }
    *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(*(longlong *)(lVar4 + 0x78) + 0x30);
    iVar3 = FUN_1801ae440(6,lVar4,lVar4 + 0x70);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x78) + 0x20);
      if (pcVar2 == (code *)0x0) {
        return lVar4;
      }
      iVar3 = (*pcVar2)(lVar4);
      if (iVar3 != 0) {
        return lVar4;
      }
      uVar6 = 0x55;
      uVar7 = 0x46;
      goto LAB_18019f513;
    }
  }
  else {
    iVar3 = FUN_1801ac0a0(param_1);
    if (iVar3 != 0) goto LAB_18019f5f9;
    uVar6 = 0x40;
LAB_18019f50d:
    uVar7 = 0x26;
LAB_18019f513:
    FUN_1801a70c0(5,0x69,uVar7,"crypto\\dh\\dh_lib.c",uVar6);
  }
  LOCK();
  piVar1 = (int *)(lVar4 + 0x68);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (1 < iVar3) {
    return 0;
  }
  if ((*(longlong *)(lVar4 + 0x78) != 0) &&
     (pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x78) + 0x28), pcVar2 != (code *)0x0)) {
    (*pcVar2)(lVar4);
  }
  FUN_1801abfb0(*(undefined8 *)(lVar4 + 0x80));
  FUN_1801ae0a0(6,lVar4,lVar4 + 0x70);
  FUN_1801adcf0(*(undefined8 *)(lVar4 + 0x88));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 8));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x10));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x40));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x48));
  FUN_180195e10(*(undefined8 *)(lVar4 + 0x50),"crypto\\dh\\dh_lib.c",0x7b);
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x60));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x20));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x28));
  uVar7 = 0x7f;
LAB_18019f5d5:
  FUN_180195e10(lVar4,"crypto\\dh\\dh_lib.c",uVar7);
  return 0;
}



// ===== FUN_18019f680 @ 18019f680 (size 81)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019f680(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar1 = -1;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
    }
  }
  else {
    iVar1 = FUN_180198b90();
  }
  uVar2 = FUN_180198b90(*(undefined8 *)(param_1 + 8));
  FUN_180198dc0(uVar2,iVar1);
  return;
}



// ===== FUN_18019f6e0 @ 18019f6e0 (size 90)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019f6e0(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    FUN_1801984d0(*(undefined8 *)(param_1 + 0x20));
    *(longlong *)(param_1 + 0x20) = param_2;
  }
  if (param_3 != 0) {
    FUN_1801984d0(*(undefined8 *)(param_1 + 0x28));
    *(longlong *)(param_1 + 0x28) = param_3;
  }
  return 1;
}



// ===== FUN_18019f740 @ 18019f740 (size 163)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019f740(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 8) == 0) && (param_2 == 0)) ||
     ((*(longlong *)(param_1 + 0x10) == 0 && (param_4 == 0)))) {
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      FUN_180198910();
      *(longlong *)(param_1 + 8) = param_2;
    }
    if (param_3 != 0) {
      FUN_180198910(*(undefined8 *)(param_1 + 0x40));
      *(longlong *)(param_1 + 0x40) = param_3;
    }
    if (param_4 != 0) {
      FUN_180198910(*(undefined8 *)(param_1 + 0x10));
      *(longlong *)(param_1 + 0x10) = param_4;
    }
    if (param_3 != 0) {
      uVar1 = FUN_180198b90(param_3);
      *(undefined4 *)(param_1 + 0x18) = uVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// ===== FUN_18019f860 @ 18019f860 (size 397)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019f860(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = 0;
  lVar3 = 0;
  lVar5 = 0;
  lVar4 = 0;
  lVar6 = 0;
  lVar7 = 0;
  if ((param_1 == 0) || (lVar2 = FUN_18019f420(), lVar2 == 0)) goto LAB_18019f8c7;
  if (*(longlong *)(param_1 + 8) == 0) {
    if ((*(longlong *)(param_1 + 0x18) != 0) || (*(longlong *)(param_1 + 0x10) != 0))
    goto LAB_18019f8c7;
  }
  else {
    if ((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x10) == 0))
    goto LAB_18019f8c7;
    lVar3 = FUN_180198800();
    lVar4 = FUN_180198800(*(undefined8 *)(param_1 + 0x18));
    lVar5 = FUN_180198800(*(undefined8 *)(param_1 + 0x10));
    if ((lVar3 == 0) ||
       (((lVar4 == 0 || (lVar5 == 0)) ||
        (iVar1 = FUN_18019f740(lVar2,lVar3,lVar5,lVar4), iVar1 == 0)))) goto LAB_18019f8c7;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return lVar2;
    }
  }
  else {
    lVar6 = FUN_180198800();
    lVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
    if ((lVar6 != 0) &&
       ((*(longlong *)(param_1 + 0x28) == 0 || (lVar7 = FUN_180198800(), lVar7 != 0)))) {
      lVar3 = 0;
      lVar5 = 0;
      lVar4 = 0;
      iVar1 = FUN_18019f6e0(lVar2,lVar6,lVar7);
      if (iVar1 != 0) {
        return lVar2;
      }
    }
  }
LAB_18019f8c7:
  FUN_180198910(lVar3);
  FUN_180198910(lVar4);
  FUN_180198910(lVar5);
  FUN_180198910(lVar6);
  FUN_180198910(lVar7);
  FUN_18019f2e0(lVar2);
  return 0;
}



// ===== FUN_18019f9f0 @ 18019f9f0 (size 168)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18019f9f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x40);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 0x50) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x50) + 0x38), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      FUN_1801abfb0(*(undefined8 *)(param_1 + 0x58));
      FUN_1801ae0a0(7,param_1,param_1 + 0x48);
      FUN_1801adcf0(*(undefined8 *)(param_1 + 0x60));
      FUN_1801984d0(*(undefined8 *)(param_1 + 8));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x10));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x18));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x20));
      FUN_1801984d0(*(undefined8 *)(param_1 + 0x28));
      FUN_180195e10(param_1,"crypto\\dsa\\dsa_lib.c",0x83);
    }
  }
  return;
}



// ===== FUN_18019fb20 @ 18019fb20 (size 523)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_18019fb20(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x18019fb30;
  lVar4 = FUN_180196100(0x68,"crypto\\dsa\\dsa_lib.c",0x33);
  if (lVar4 == 0) {
    FUN_1801a70c0(10,0x67,0x41,"crypto\\dsa\\dsa_lib.c",0x36,uVar7);
    return 0;
  }
  *(undefined4 *)(lVar4 + 0x40) = 1;
  lVar5 = FUN_1801add30();
  *(longlong *)(lVar4 + 0x60) = lVar5;
  if (lVar5 == 0) {
    FUN_1801a70c0(10,0x67,0x41,"crypto\\dsa\\dsa_lib.c",0x3d,uVar7);
    uVar7 = 0x3e;
    goto LAB_18019fc84;
  }
  lVar5 = FUN_1801cc190();
  *(longlong *)(lVar4 + 0x50) = lVar5;
  *(uint *)(lVar4 + 0x30) = *(uint *)(lVar5 + 0x40) & 0xfffffbff;
  if (param_1 == 0) {
    param_1 = FUN_1801cc560();
LAB_18019fca8:
    *(longlong *)(lVar4 + 0x58) = param_1;
    if (param_1 != 0) {
      lVar5 = FUN_1800b7fa0(param_1);
      *(longlong *)(lVar4 + 0x50) = lVar5;
      if (lVar5 == 0) {
        uVar6 = 0x50;
        goto LAB_18019fbee;
      }
    }
    *(uint *)(lVar4 + 0x30) = *(uint *)(*(longlong *)(lVar4 + 0x50) + 0x40) & 0xfffffbff;
    iVar3 = FUN_1801ae440(7,lVar4,lVar4 + 0x48);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x50) + 0x30);
      if (pcVar2 == (code *)0x0) {
        return lVar4;
      }
      iVar3 = (*pcVar2)(lVar4);
      if (iVar3 != 0) {
        return lVar4;
      }
      uVar6 = 0x5c;
      uVar7 = 0x46;
      goto LAB_18019fbf4;
    }
  }
  else {
    iVar3 = FUN_1801ac0a0(param_1);
    if (iVar3 != 0) goto LAB_18019fca8;
    uVar6 = 0x47;
LAB_18019fbee:
    uVar7 = 0x26;
LAB_18019fbf4:
    FUN_1801a70c0(10,0x67,uVar7,"crypto\\dsa\\dsa_lib.c",uVar6);
  }
  LOCK();
  piVar1 = (int *)(lVar4 + 0x40);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (1 < iVar3) {
    return 0;
  }
  if ((*(longlong *)(lVar4 + 0x50) != 0) &&
     (pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x50) + 0x38), pcVar2 != (code *)0x0)) {
    (*pcVar2)(lVar4);
  }
  FUN_1801abfb0(*(undefined8 *)(lVar4 + 0x58));
  FUN_1801ae0a0(7,lVar4,lVar4 + 0x48);
  FUN_1801adcf0(*(undefined8 *)(lVar4 + 0x60));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 8));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x10));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x18));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x20));
  FUN_1801984d0(*(undefined8 *)(lVar4 + 0x28));
  uVar7 = 0x83;
LAB_18019fc84:
  FUN_180195e10(lVar4,"crypto\\dsa\\dsa_lib.c",uVar7);
  return 0;
}



// ===== FUN_18019fd30 @ 18019fd30 (size 85)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019fd30(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    return 0xffffffff;
  }
  uVar1 = FUN_180198b90();
  uVar2 = FUN_180198b90(*(undefined8 *)(param_1 + 8));
  uVar3 = FUN_180198dc0(uVar2,uVar1);
  return uVar3;
}



// ===== FUN_18019fd90 @ 18019fd90 (size 118)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019fd90(longlong param_1,longlong param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (param_2 == 0) {
      return 0;
    }
  }
  else if (param_2 == 0) goto LAB_18019fddf;
  FUN_180198910();
  *(longlong *)(param_1 + 0x20) = param_2;
LAB_18019fddf:
  if (param_3 != 0) {
    FUN_180198910(*(undefined8 *)(param_1 + 0x28));
    *(longlong *)(param_1 + 0x28) = param_3;
  }
  return 1;
}



// ===== FUN_18019fe10 @ 18019fe10 (size 159)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18019fe10(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if ((((*(longlong *)(param_1 + 8) == 0) && (param_2 == 0)) ||
      ((*(longlong *)(param_1 + 0x10) == 0 && (param_3 == 0)))) ||
     ((*(longlong *)(param_1 + 0x18) == 0 && (param_4 == 0)))) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      FUN_180198910();
      *(longlong *)(param_1 + 8) = param_2;
    }
    if (param_3 != 0) {
      FUN_180198910(*(undefined8 *)(param_1 + 0x10));
      *(longlong *)(param_1 + 0x10) = param_3;
    }
    if (param_4 != 0) {
      FUN_180198910(*(undefined8 *)(param_1 + 0x18));
      *(longlong *)(param_1 + 0x18) = param_4;
    }
    uVar1 = 1;
  }
  return uVar1;
}



