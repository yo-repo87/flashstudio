// ===== FUN_1802b5360 @ 1802b5360 (size 364)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802b5360(undefined8 *param_1,undefined4 param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  char *_Str;
  void **ppvVar4;
  void *pvVar5;
  bool bVar6;
  undefined1 auStackY_98 [32];
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined8 *local_40;
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStackY_98;
  local_40 = param_1;
  _Str = (char *)FUN_1802c4ff0(param_2);
  bVar6 = _Str == (char *)0x0;
  if (bVar6) {
    ppvVar4 = &local_60;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = _DAT_1802eace0;
    uStack_48 = _UNK_1802eace8;
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    local_38 = (void *)0x0;
    uStack_30 = 0;
    strlen(_Str);
    FUN_1800748f0(&local_38,_Str);
    ppvVar4 = &local_38;
  }
  pvVar5 = *ppvVar4;
  pvVar1 = ppvVar4[1];
  pvVar2 = ppvVar4[2];
  pvVar3 = ppvVar4[3];
  ppvVar4[2] = (void *)0x0;
  ppvVar4[3] = (void *)0xf;
  *(undefined1 *)ppvVar4 = 0;
  *param_1 = pvVar5;
  param_1[1] = pvVar1;
  param_1[2] = pvVar2;
  param_1[3] = pvVar3;
  if ((bVar6) && (0xf < uStack_48)) {
    pvVar5 = local_60;
    if ((0xfff < uStack_48 + 1) &&
       (pvVar5 = *(void **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)pvVar5)))) goto LAB_1802b548a;
    free(pvVar5);
  }
  if ((!bVar6) && (0xf < uStack_20)) {
    pvVar5 = local_38;
    if ((0xfff < uStack_20 + 1) &&
       (pvVar5 = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar5)))) {
LAB_1802b548a:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar5);
  }
  return param_1;
}



// ===== FUN_1802b54d0 @ 1802b54d0 (size 168)

void FUN_1802b54d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)FUN_1802df708(0x30);
  if (local_10 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    *local_10 = 0;
    local_10[1] = 0;
    *(undefined4 *)(local_10 + 1) = 1;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    *local_10 = std::
                _Ref_count_obj2<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                ::vftable;
    local_10[2] = 0;
    local_10[3] = 0;
    local_10[4] = 0;
    local_10[5] = 0;
    FUN_1800748f0(local_10 + 2,param_2,param_3);
  }
  local_18 = local_10 + 2;
  FUN_1802b5580(param_1,&local_18);
  return;
}



// ===== FUN_1802b5580 @ 1802b5580 (size 146)

void FUN_1802b5580(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  
  FUN_180080690(param_1 + 0x50);
  plVar6 = *(longlong **)(param_1 + 0x50);
  if ((plVar6 == (longlong *)0x0) || (plVar1 = plVar6 + 2, plVar6[2] == 0)) {
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    *(longlong **)(param_1 + 0x10) = plVar6;
    uVar5 = (undefined4)*plVar1;
  }
  *(undefined4 *)(param_1 + 8) = uVar5;
  plVar6 = *(longlong **)(param_2 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return;
}



// ===== FUN_1802b5620 @ 1802b5620 (size 112)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b5620(longlong param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  if (2 < param_2) {
    FUN_180075c00(local_78,"Bad QoS");
    FUN_1802b4780(local_58,0xfffffff7,local_78);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_58,(ThrowInfo *)&DAT_1803b6f88);
  }
  *(uint *)(param_1 + 0x18) = param_2;
  return;
}



// ===== FUN_1802b56a0 @ 1802b56a0 (size 152)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1802b56a0(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 *local_48;
  ulonglong *local_40;
  longlong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  local_38 = param_1;
  FUN_180075b40(local_30);
  local_48 = local_30;
  local_40 = &local_10;
  FUN_180091a70(param_1,&local_48,local_58);
  _eh_vector_destructor_iterator_(local_30,0x20,1,thunk_FUN_180078180);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1802b5c30(param_1);
  return param_1;
}



// ===== FUN_1802b5740 @ 1802b5740 (size 154)

void FUN_1802b5740(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// ===== FUN_1802b57e0 @ 1802b57e0 (size 160)

void FUN_1802b57e0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff0U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}



// ===== FUN_1802b5890 @ 1802b5890 (size 287)

void FUN_1802b5890(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *_Dst;
  ulonglong uVar4;
  void *_Dst_00;
  undefined8 *_Src;
  ulonglong uVar5;
  longlong lVar6;
  size_t _Size;
  
  _Src = (undefined8 *)param_1[1];
  if (_Src != (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    *_Src = *param_2;
    _Src[1] = uVar3;
    param_1[1] = param_1[1] + 0x10;
    return;
  }
  lVar6 = (longlong)_Src - *param_1 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800782c0();
  }
  uVar4 = param_1[2] - *param_1 >> 4;
  uVar1 = lVar6 + 1;
  if (0xfffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar5 = 0xfffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar5 = uVar1;
    if (uVar1 <= uVar4) {
      uVar5 = uVar4;
    }
    if (0xfffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_180078030();
    }
  }
  _Dst = (void *)FUN_180074880(uVar5 << 4);
  uVar3 = param_2[1];
  puVar2 = (undefined8 *)((longlong)_Dst + lVar6 * 0x10);
  *puVar2 = *param_2;
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)*param_1;
  if (_Src == (undefined8 *)param_1[1]) {
    _Size = param_1[1] - (longlong)puVar2;
    _Dst_00 = _Dst;
    _Src = puVar2;
  }
  else {
    memmove(_Dst,puVar2,(longlong)_Src - (longlong)puVar2);
    _Size = param_1[1] - (longlong)_Src;
    _Dst_00 = (void *)((longlong)_Dst + (lVar6 * 2 + 2) * 8);
  }
  memmove(_Dst_00,_Src,_Size);
  FUN_1802b57e0(param_1,_Dst,uVar1,uVar5);
  return;
}



// ===== FUN_1802b59e0 @ 1802b59e0 (size 590)

void FUN_1802b59e0(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  ulonglong uVar4;
  void *_Dst;
  longlong *_Src;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  size_t _Size;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar1 = param_1 + 2;
  lVar10 = *plVar1;
  lVar8 = param_1[3];
  if (lVar10 != param_1[3]) {
    param_1[3] = lVar10;
    lVar8 = lVar10;
  }
  uVar6 = param_1[1] + 1;
  if ((ulonglong)(param_1[4] - lVar10 >> 4) < uVar6) {
    if (0xfffffffffffffff < uVar6) {
LAB_1802b5c2a:
                    /* WARNING: Subroutine does not return */
      FUN_1800782c0();
    }
    pvVar3 = (void *)FUN_180074880(uVar6 * 0x10);
    memmove(pvVar3,(void *)*plVar1,param_1[3] - *plVar1);
    FUN_1802b57e0(plVar1,pvVar3,lVar8 - lVar10 >> 4,uVar6);
  }
  plVar5 = *(longlong **)*param_1;
  cVar2 = *(char *)((longlong)plVar5 + 0x19);
  do {
    if (cVar2 != '\0') {
      local_38 = 0;
      uStack_30 = 0;
      FUN_1802b5890(plVar1,&local_38);
      return;
    }
    plVar11 = plVar5 + 4;
    if (0xf < (ulonglong)plVar5[7]) {
      plVar11 = (longlong *)*plVar11;
    }
    plVar7 = plVar5 + 8;
    if (0xf < (ulonglong)plVar5[0xb]) {
      plVar7 = (longlong *)*plVar7;
    }
    _Src = (longlong *)param_1[3];
    if (_Src == (longlong *)param_1[4]) {
      lVar10 = (longlong)_Src - *plVar1 >> 4;
      if (lVar10 == 0xfffffffffffffff) goto LAB_1802b5c2a;
      uVar6 = lVar10 + 1;
      uVar4 = (longlong)param_1[4] - *plVar1 >> 4;
      if (0xfffffffffffffff - (uVar4 >> 1) < uVar4) {
        uVar9 = 0xfffffffffffffff;
      }
      else {
        uVar4 = (uVar4 >> 1) + uVar4;
        uVar9 = uVar6;
        if (uVar6 <= uVar4) {
          uVar9 = uVar4;
        }
        if (0xfffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_180078030();
        }
      }
      pvVar3 = (void *)FUN_180074880(uVar9 << 4);
      lVar10 = lVar10 * 0x10;
      *(longlong **)(lVar10 + (longlong)pvVar3) = plVar11;
      *(longlong **)(lVar10 + 8 + (longlong)pvVar3) = plVar7;
      plVar11 = (longlong *)*plVar1;
      if (_Src == (longlong *)param_1[3]) {
        _Size = (longlong)param_1[3] - (longlong)plVar11;
        _Dst = pvVar3;
        _Src = plVar11;
      }
      else {
        memmove(pvVar3,plVar11,(longlong)_Src - (longlong)plVar11);
        _Size = param_1[3] - (longlong)_Src;
        _Dst = (void *)(lVar10 + 0x10 + (longlong)pvVar3);
      }
      memmove(_Dst,_Src,_Size);
      FUN_1802b57e0(plVar1,pvVar3,uVar6,uVar9);
    }
    else {
      *_Src = (longlong)plVar11;
      _Src[1] = (longlong)plVar7;
      param_1[3] = param_1[3] + 0x10;
    }
    plVar11 = (longlong *)plVar5[2];
    if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar11 + 0x19);
      plVar5 = plVar11;
      plVar11 = (longlong *)*plVar11;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar11 + 0x19);
        plVar5 = plVar11;
        plVar11 = (longlong *)*plVar11;
      }
    }
    else {
      cVar2 = *(char *)(plVar5[1] + 0x19);
      plVar7 = (longlong *)plVar5[1];
      plVar11 = plVar5;
      while ((plVar5 = plVar7, cVar2 == '\0' && (plVar11 == (longlong *)plVar5[2]))) {
        cVar2 = *(char *)(plVar5[1] + 0x19);
        plVar7 = (longlong *)plVar5[1];
        plVar11 = plVar5;
      }
    }
    cVar2 = *(char *)((longlong)plVar5 + 0x19);
  } while( true );
}



// ===== FUN_1802b5c30 @ 1802b5c30 (size 462)

void FUN_1802b5c30(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulonglong uVar4;
  void *_Dst;
  undefined8 *_Src;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  size_t _Size;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  plVar1 = param_1 + 3;
  lVar6 = *plVar1;
  lVar8 = param_1[4];
  if (lVar6 != param_1[4]) {
    param_1[4] = lVar6;
    lVar8 = lVar6;
  }
  uVar5 = param_1[1] - *param_1 >> 5;
  if ((ulonglong)(param_1[5] - lVar6 >> 3) < uVar5) {
    if (0x1fffffffffffffff < uVar5) {
LAB_1802b5dfa:
                    /* WARNING: Subroutine does not return */
      FUN_1800782c0();
    }
    pvVar3 = (void *)FUN_180074880(uVar5 * 8);
    memmove(pvVar3,(void *)*plVar1,param_1[4] - *plVar1);
    FUN_1802b5740(plVar1,pvVar3,lVar8 - lVar6 >> 3,uVar5);
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)*param_1;
  do {
    if (puVar7 == puVar2) {
      return;
    }
    puVar10 = puVar7;
    if (0xf < (ulonglong)puVar7[3]) {
      puVar10 = (undefined8 *)*puVar7;
    }
    _Src = (undefined8 *)param_1[4];
    if (_Src == (undefined8 *)param_1[5]) {
      lVar6 = (longlong)_Src - *plVar1 >> 3;
      if (lVar6 == 0x1fffffffffffffff) goto LAB_1802b5dfa;
      uVar5 = lVar6 + 1;
      uVar4 = param_1[5] - *plVar1 >> 3;
      if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
        uVar9 = 0x1fffffffffffffff;
      }
      else {
        uVar4 = (uVar4 >> 1) + uVar4;
        uVar9 = uVar5;
        if (uVar5 <= uVar4) {
          uVar9 = uVar4;
        }
        if (0x1fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_180078030();
        }
      }
      pvVar3 = (void *)FUN_180074880(uVar9 * 8);
      *(undefined8 **)((longlong)pvVar3 + lVar6 * 8) = puVar10;
      puVar10 = (undefined8 *)*plVar1;
      if (_Src == (undefined8 *)param_1[4]) {
        _Size = param_1[4] - (longlong)puVar10;
        _Dst = pvVar3;
        _Src = puVar10;
      }
      else {
        memmove(pvVar3,puVar10,(longlong)_Src - (longlong)puVar10);
        _Size = param_1[4] - (longlong)_Src;
        _Dst = (void *)((longlong)pvVar3 + (lVar6 + 1) * 8);
      }
      memmove(_Dst,_Src,_Size);
      FUN_1802b5740(plVar1,pvVar3,uVar5,uVar9);
    }
    else {
      *_Src = puVar10;
      param_1[4] = param_1[4] + 8;
    }
    puVar7 = puVar7 + 4;
  } while( true );
}



// ===== FUN_1802b5e00 @ 1802b5e00 (size 338)

void FUN_1802b5e00(undefined8 *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Memory;
  ulonglong uVar4;
  
  pvVar1 = (void *)*param_1;
  uVar3 = param_1[2] - (longlong)pvVar1;
  if (param_3 <= uVar3) {
    uVar3 = param_1[1] - (longlong)pvVar1;
    if (uVar3 < param_3) {
      memmove(pvVar1,param_2,uVar3);
      pvVar1 = (void *)param_1[1];
      memmove(pvVar1,(void *)(uVar3 + (longlong)param_2),param_3 - uVar3);
      lVar2 = (param_3 - uVar3) + (longlong)pvVar1;
    }
    else {
      memmove(pvVar1,param_2,param_3);
      lVar2 = (longlong)pvVar1 + param_3;
    }
    param_1[1] = lVar2;
    return;
  }
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800782c0();
  }
  uVar4 = 0x7fffffffffffffff;
  if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) &&
     (uVar4 = uVar3 + (uVar3 >> 1), uVar4 < param_3)) {
    uVar4 = param_3;
  }
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < uVar3) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  pvVar1 = (void *)FUN_180074880(uVar4);
  *param_1 = pvVar1;
  param_1[1] = pvVar1;
  param_1[2] = (longlong)pvVar1 + uVar4;
  memmove(pvVar1,param_2,param_3);
  param_1[1] = (longlong)pvVar1 + param_3;
  return;
}



// ===== FUN_1802b5f60 @ 1802b5f60 (size 120)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802b5f60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  local_20 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    local_20 = (longlong *)(**(code **)*puVar1)(puVar1,local_58);
  }
  FUN_1802b6110(local_58,param_1);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != local_58);
  }
  return param_1;
}



// ===== FUN_1802b5fe0 @ 1802b5fe0 (size 289)

undefined8 * FUN_1802b5fe0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_2 != param_1) {
    uVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar5;
    uVar5 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar5;
    uVar5 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar5;
    uVar5 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar5;
    uVar5 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar5;
    uVar5 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar5;
    uVar2 = *(undefined4 *)((longlong)param_2 + 100);
    uVar3 = *(undefined4 *)(param_2 + 0xd);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x6c);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)((longlong)param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0xd) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x74);
    uVar3 = *(undefined4 *)(param_2 + 0xf);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar2;
    *(undefined4 *)(param_1 + 0xf) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar4;
    FUN_180076ff0(param_1 + 0x10,param_2 + 0x10);
    FUN_180076ff0(param_1 + 0x14,param_2 + 0x14);
    FUN_180076ff0(param_1 + 0x18,param_2 + 0x18);
    FUN_180076ff0(param_1 + 0x1c,param_2 + 0x1c);
    FUN_180076ff0(param_1 + 0x20,param_2 + 0x20);
    FUN_180076ff0(param_1 + 0x24,param_2 + 0x24);
    FUN_1802b5f60(param_1 + 0x28,param_2 + 0x28);
    FUN_1802b5f60(param_1 + 0x30,param_2 + 0x30);
    if (param_1 + 0x38 != param_2 + 0x38) {
      lVar1 = param_2[0x38];
      FUN_1802b5e00(param_1 + 0x38,lVar1,param_2[0x39] - lVar1);
    }
    FUN_1802b65e0(param_1);
  }
  return param_1;
}



// ===== FUN_1802b6110 @ 1802b6110 (size 310)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b6110(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [7];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[7];
  if ((plVar1 != param_1) && ((longlong *)param_2[7] != param_2)) {
    param_1[7] = param_2[7];
    param_2[7] = (longlong)plVar1;
    return;
  }
  local_30 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_1) {
      local_30 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_68);
      plVar1 = (longlong *)param_1[7];
      if (plVar1 == (longlong *)0x0) goto LAB_1802b61a3;
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    }
    else {
      local_30 = plVar1;
    }
    param_1[7] = 0;
  }
LAB_1802b61a3:
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      param_1[7] = lVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 == (longlong *)0x0) goto LAB_1802b61e9;
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    }
    else {
      param_1[7] = (longlong)plVar1;
    }
    param_2[7] = 0;
  }
LAB_1802b61e9:
  if (local_30 != (longlong *)0x0) {
    if (local_30 == local_68) {
      lVar2 = (**(code **)(*local_30 + 8))(local_30,param_2);
      param_2[7] = lVar2;
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x20))(local_30,local_30 != local_68);
      }
    }
    else {
      param_2[7] = (longlong)local_30;
    }
  }
  return;
}



// ===== FUN_1802b6250 @ 1802b6250 (size 219)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802b6250(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  void *_Memory;
  undefined1 auStackY_68 [32];
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStackY_68;
  if (((param_3 == 0) || (param_1 == 0)) || (param_2 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    FUN_1800748f0(&local_38,param_1);
    plVar1 = *(longlong **)(param_3 + 0x178);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_38);
    }
    if (0xf < uStack_20) {
      _Memory = local_38;
      if ((0xfff < uStack_20 + 1) &&
         (_Memory = *(void **)((longlong)local_38 + -8),
         0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(_Memory);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_1802b6330 @ 1802b6330 (size 576)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1802b6330(char *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  void **ppvVar3;
  void *pvVar4;
  bool bVar5;
  longlong in_stack_00000030;
  undefined1 auStackY_f8 [32];
  void *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong uStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong uStack_68;
  void *local_60;
  void *pvStack_58;
  void *local_50;
  void *pvStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStackY_f8;
  uVar2 = 0;
  if (in_stack_00000030 != 0) {
    bVar5 = param_1 == (char *)0x0;
    if (bVar5) {
      uStack_98 = 0;
      local_90 = _DAT_1802eace0;
      uStack_88 = _UNK_1802eace8;
      local_a0 = (void *)0x0;
      ppvVar3 = &local_a0;
    }
    else {
      local_80 = (void *)0x0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      strlen(param_1);
      FUN_1800748f0(&local_80,param_1);
      ppvVar3 = &local_80;
    }
    local_60 = *ppvVar3;
    pvStack_58 = ppvVar3[1];
    local_50 = ppvVar3[2];
    pvStack_48 = ppvVar3[3];
    ppvVar3[2] = (void *)0x0;
    ppvVar3[3] = (void *)0xf;
    *(undefined1 *)ppvVar3 = 0;
    if (bVar5) {
      if (0xf < uStack_88) {
        pvVar4 = local_a0;
        if ((0xfff < uStack_88 + 1) &&
           (pvVar4 = *(void **)((longlong)local_a0 + -8),
           0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)pvVar4)))) goto LAB_1802b6481;
        free(pvVar4);
      }
    }
    if ((!bVar5) && (0xf < uStack_68)) {
      pvVar4 = local_80;
      if ((0xfff < uStack_68 + 1) &&
         (pvVar4 = *(void **)((longlong)local_80 + -8),
         0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)pvVar4)))) {
LAB_1802b6481:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar4);
    }
    plVar1 = *(longlong **)(in_stack_00000030 + 0x1b8);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_60);
    }
    if ((void *)0xf < pvStack_48) {
      pvVar4 = local_60;
      if ((0xfff < (longlong)pvStack_48 + 1U) &&
         (pvVar4 = *(void **)((longlong)local_60 + -8),
         0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar4);
    }
  }
  return uVar2;
}



// ===== FUN_1802b6590 @ 1802b6590 (size 79)

void FUN_1802b6590(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  FUN_180076ff0(plVar1);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  if (0xf < *(ulonglong *)(param_1 + 0x98)) {
    plVar1 = (longlong *)*plVar1;
  }
  *(longlong **)(param_1 + 8) = plVar1;
  return;
}



// ===== FUN_1802b65e0 @ 1802b65e0 (size 311)

void FUN_1802b65e0(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else if (0xf < *(ulonglong *)(param_1 + 0x98)) {
    plVar1 = (longlong *)*plVar1;
  }
  *(longlong **)(param_1 + 8) = plVar1;
  plVar1 = (longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else if (0xf < *(ulonglong *)(param_1 + 0xb8)) {
    plVar1 = (longlong *)*plVar1;
  }
  *(longlong **)(param_1 + 0x10) = plVar1;
  plVar1 = (longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else if (0xf < *(ulonglong *)(param_1 + 0xd8)) {
    plVar1 = (longlong *)*plVar1;
  }
  *(longlong **)(param_1 + 0x18) = plVar1;
  plVar1 = (longlong *)(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else if (0xf < *(ulonglong *)(param_1 + 0xf8)) {
    plVar1 = (longlong *)*plVar1;
  }
  *(longlong **)(param_1 + 0x20) = plVar1;
  plVar1 = (longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x110) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else if (0xf < *(ulonglong *)(param_1 + 0x118)) {
    plVar1 = (longlong *)*plVar1;
  }
  *(longlong **)(param_1 + 0x40) = plVar1;
  plVar1 = (longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x130) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else if (0xf < *(ulonglong *)(param_1 + 0x138)) {
    plVar1 = (longlong *)*plVar1;
  }
  *(longlong **)(param_1 + 0x28) = plVar1;
  pcVar2 = FUN_1802b6250;
  bVar4 = *(longlong *)(param_1 + 0x178) == 0;
  if (bVar4) {
    pcVar2 = (code *)0x0;
  }
  *(code **)(param_1 + 0x48) = pcVar2;
  lVar3 = param_1;
  if (bVar4) {
    lVar3 = 0;
  }
  *(longlong *)(param_1 + 0x50) = lVar3;
  pcVar2 = FUN_1802b6330;
  bVar4 = *(longlong *)(param_1 + 0x1b8) == 0;
  if (bVar4) {
    pcVar2 = (code *)0x0;
  }
  *(code **)(param_1 + 0x58) = pcVar2;
  lVar3 = param_1;
  if (bVar4) {
    lVar3 = 0;
  }
  *(longlong *)(param_1 + 0x60) = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x1c0);
  if (lVar3 == *(longlong *)(param_1 + 0x1c8)) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    return;
  }
  *(longlong *)(param_1 + 0x70) = lVar3;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x1c8) - (int)lVar3;
  return;
}



// ===== FUN_1802b6720 @ 1802b6720 (size 164)

void FUN_1802b6720(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_1802b67d0(param_1,*(undefined8 *)(*param_2 + 8),*param_1);
  *(undefined8 *)(*param_1 + 8) = uVar7;
  plVar2 = (longlong *)*param_1;
  param_1[1] = param_2[1];
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
    return;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar6 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x19);
    plVar3 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar2 = (longlong)plVar3;
  lVar4 = *(longlong *)(*param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x19);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
    lVar4 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*param_1 + 0x10) = lVar4;
  return;
}



// ===== FUN_1802b67d0 @ 1802b67d0 (size 222)

undefined8 *
FUN_1802b67d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_1802df708(0x60);
    FUN_180075b40(puVar1 + 4,param_2 + 4);
    FUN_180075b40(puVar1 + 8,param_2 + 8);
    *puVar1 = puVar3;
    puVar1[2] = puVar3;
    *(undefined2 *)(puVar1 + 3) = 0;
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    uVar2 = FUN_1802b67d0(param_1,*param_2,puVar1,param_4,param_1,param_1,puVar1);
    *puVar1 = uVar2;
    uVar2 = FUN_1802b67d0(param_1,param_2[2],puVar1);
    puVar1[2] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}



// ===== FUN_1802b68b0 @ 1802b68b0 (size 1022)

undefined8 * FUN_1802b68b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int *piVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *local_58;
  longlong *local_50;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  uVar6 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar6;
  uVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  uVar6 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar6;
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  uVar6 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar6;
  uVar6 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar6;
  uVar6 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar4 = *(undefined4 *)(param_2 + 0x15);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar3;
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xb4);
  uVar4 = *(undefined4 *)(param_2 + 0x17);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0x17) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar5;
  param_1[0x18] = param_2[0x18];
  puVar1 = param_1 + 0x19;
  FUN_1802bf910(puVar1);
  puVar2 = param_1 + 0x26;
  FUN_180117c20(puVar2);
  puVar12 = (undefined8 *)0x0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  if (param_2[0x62] != 0) {
    LOCK();
    piVar9 = (int *)(param_2[0x62] + 8);
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  param_1[0x61] = param_2[0x61];
  param_1[0x62] = param_2[0x62];
  param_1[99] = 0;
  param_1[100] = 0;
  if (param_2[100] != 0) {
    LOCK();
    piVar9 = (int *)(param_2[100] + 8);
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  param_1[99] = param_2[99];
  param_1[100] = param_2[100];
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  if (param_2[0x66] != 0) {
    LOCK();
    piVar9 = (int *)(param_2[0x66] + 8);
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  param_1[0x65] = param_2[0x65];
  param_1[0x66] = param_2[0x66];
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  if (param_2[0x68] != 0) {
    LOCK();
    piVar9 = (int *)(param_2[0x68] + 8);
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  param_1[0x67] = param_2[0x67];
  param_1[0x68] = param_2[0x68];
  puVar7 = (undefined4 *)FUN_1802c1480(&local_58,param_2 + 0x69);
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  uVar5 = puVar7[3];
  *(undefined4 *)(param_1 + 0x69) = *puVar7;
  *(undefined4 *)((longlong)param_1 + 0x34c) = uVar3;
  *(undefined4 *)(param_1 + 0x6a) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x354) = uVar5;
  param_1[0x6b] = *(undefined8 *)(puVar7 + 4);
  plVar11 = param_1 + 0x6c;
  *plVar11 = 0;
  param_1[0x6d] = 0;
  local_58 = plVar11;
  local_50 = plVar11;
  lVar8 = FUN_1802df708(0x60);
  *(longlong *)lVar8 = lVar8;
  *(longlong *)(lVar8 + 8) = lVar8;
  *(longlong *)(lVar8 + 0x10) = lVar8;
  *(undefined2 *)(lVar8 + 0x18) = 0x101;
  *plVar11 = lVar8;
  FUN_1802b6720(plVar11,param_2 + 0x6c);
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  FUN_1802b59e0(plVar11);
  plVar11 = param_1 + 0x71;
  FUN_180075b40(plVar11,param_2 + 0x71);
  FUN_180075b40(param_1 + 0x75,param_2 + 0x75);
  if (param_1[3] != 0) {
    FUN_1802bfa20(puVar1,param_2 + 0x19);
    param_1[3] = puVar1;
    piVar9 = (int *)0x0;
    if (*(int *)(param_1 + 0x23) != 0) {
      piVar9 = (int *)(param_1 + 0x23);
    }
    param_1[0x13] = piVar9;
  }
  if (param_1[7] != 0) {
    FUN_1802b5fe0(puVar2,param_2 + 0x26);
    param_1[7] = puVar2;
  }
  plVar10 = (longlong *)param_1[0x61];
  if ((plVar10 == (longlong *)0x0) || (plVar10[2] == 0)) {
    plVar10 = (longlong *)0x0;
  }
  else if (0xf < (ulonglong)plVar10[3]) {
    plVar10 = (longlong *)*plVar10;
  }
  param_1[4] = plVar10;
  plVar10 = (longlong *)param_1[99];
  if ((plVar10 == (longlong *)0x0) || (plVar10[2] == 0)) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    *(int *)(param_1 + 0xf) = (int)plVar10[2];
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
  }
  param_1[0x10] = plVar10;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (param_1[0x65] != 0) {
    if (*(int *)(param_1 + 0xd) < 5) {
      param_1[8] = &LAB_1802bf660;
      param_1[9] = &LAB_1802bf2a0;
    }
    else {
      param_1[0x14] = &LAB_1802bf460;
      param_1[0x15] = &LAB_1802bf0e0;
    }
  }
  plVar10 = (longlong *)param_1[0x67];
  if (plVar10 != (longlong *)0x0) {
    if (*plVar10 != plVar10[1]) {
      *(int *)(param_1 + 0xb) = (int)(plVar10[1] - *plVar10 >> 5);
      lVar8 = plVar10[3];
      goto LAB_1802b6c3c;
    }
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  lVar8 = 0;
LAB_1802b6c3c:
  param_1[0xc] = lVar8;
  if (4 < *(int *)(param_1 + 0xd)) {
    param_1[0x12] = param_1 + 0x69;
  }
  if (param_1[0x73] == 0) {
    plVar11 = (longlong *)0x0;
  }
  else if (0xf < (ulonglong)param_1[0x74]) {
    plVar11 = (longlong *)*plVar11;
  }
  param_1[0x17] = plVar11;
  if ((param_1[0x77] != 0) && (puVar12 = param_1 + 0x75, 0xf < (ulonglong)param_1[0x78])) {
    puVar12 = (undefined8 *)param_1[0x75];
  }
  param_1[0x18] = puVar12;
  return param_1;
}



// ===== FUN_1802b6cb0 @ 1802b6cb0 (size 419)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802b6cb0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_1802bf910(param_1 + 0x19);
  FUN_180117c20(param_1 + 0x26);
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  uVar1 = _UNK_1802fad68;
  param_1[0x69] = _DAT_1802fad60;
  param_1[0x6a] = uVar1;
  param_1[0x6b] = DAT_1802fad70;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  lVar2 = FUN_1802df708(0x60);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  param_1[0x6c] = lVar2;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0xf;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0xf;
  *(undefined1 *)(param_1 + 0x75) = 0;
  puVar3 = (undefined8 *)&DAT_180380ef0;
  if (param_2 < 5) {
    puVar3 = (undefined8 *)&DAT_180380e20;
  }
  uVar1 = puVar3[1];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  uVar1 = puVar3[3];
  param_1[2] = puVar3[2];
  param_1[3] = uVar1;
  uVar1 = puVar3[5];
  param_1[4] = puVar3[4];
  param_1[5] = uVar1;
  uVar1 = puVar3[7];
  param_1[6] = puVar3[6];
  param_1[7] = uVar1;
  uVar1 = puVar3[9];
  param_1[8] = puVar3[8];
  param_1[9] = uVar1;
  uVar1 = puVar3[0xb];
  param_1[10] = puVar3[10];
  param_1[0xb] = uVar1;
  uVar1 = puVar3[0xd];
  param_1[0xc] = puVar3[0xc];
  param_1[0xd] = uVar1;
  uVar1 = puVar3[0xf];
  param_1[0xe] = puVar3[0xe];
  param_1[0xf] = uVar1;
  uVar1 = puVar3[0x11];
  param_1[0x10] = puVar3[0x10];
  param_1[0x11] = uVar1;
  uVar1 = puVar3[0x13];
  param_1[0x12] = puVar3[0x12];
  param_1[0x13] = uVar1;
  uVar1 = puVar3[0x15];
  param_1[0x14] = puVar3[0x14];
  param_1[0x15] = uVar1;
  uVar1 = puVar3[0x17];
  param_1[0x16] = puVar3[0x16];
  param_1[0x17] = uVar1;
  param_1[0x18] = puVar3[0x18];
  return param_1;
}



// ===== FUN_1802b6ec0 @ 1802b6ec0 (size 594)

undefined8 * FUN_1802b6ec0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int *piVar10;
  
  if (param_2 != param_1) {
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    uVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar3;
    uVar3 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar3;
    uVar3 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar3;
    uVar3 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar3;
    uVar3 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar3;
    uVar3 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar3;
    uVar3 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar3;
    uVar3 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar3;
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xa4);
    uVar7 = *(undefined4 *)(param_2 + 0x15);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0xac);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)((longlong)param_1 + 0xa4) = uVar6;
    *(undefined4 *)(param_1 + 0x15) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar8;
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xb4);
    uVar7 = *(undefined4 *)(param_2 + 0x17);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0xbc);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    *(undefined4 *)((longlong)param_1 + 0xb4) = uVar6;
    *(undefined4 *)(param_1 + 0x17) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0xbc) = uVar8;
    param_1[0x18] = param_2[0x18];
    if (param_1[3] != 0) {
      FUN_1802bfa20(param_1 + 0x19,param_2 + 0x19);
      param_1[3] = param_1 + 0x19;
      piVar10 = (int *)0x0;
      if (*(int *)(param_1 + 0x23) != 0) {
        piVar10 = (int *)(param_1 + 0x23);
      }
      param_1[0x13] = piVar10;
    }
    if (param_1[7] != 0) {
      FUN_1802b5fe0(param_1 + 0x26,param_2 + 0x26);
      param_1[7] = param_1 + 0x26;
    }
    FUN_180080690(param_1 + 0x61,param_2 + 0x61);
    FUN_180080690(param_1 + 99,param_2 + 99);
    uVar3 = param_2[0x65];
    uVar4 = param_2[0x66];
    param_2[0x65] = 0;
    param_2[0x66] = 0;
    plVar5 = (longlong *)param_1[0x66];
    param_1[0x65] = uVar3;
    param_1[0x66] = uVar4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar10 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    uVar3 = param_2[0x67];
    uVar4 = param_2[0x68];
    param_2[0x67] = 0;
    param_2[0x68] = 0;
    plVar5 = (longlong *)param_1[0x68];
    param_1[0x67] = uVar3;
    param_1[0x68] = uVar4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar10 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    FUN_1802bea00(param_1 + 0x69,param_2 + 0x69);
    FUN_1802b7120(param_1 + 0x6c,param_2 + 0x6c);
    FUN_180076f50(param_1 + 0x71,param_2 + 0x71);
    FUN_180076f50(param_1 + 0x75,param_2 + 0x75);
    FUN_1802b7460(param_1);
  }
  return param_1;
}



// ===== FUN_1802b7120 @ 1802b7120 (size 250)

longlong * FUN_1802b7120(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  void *_Memory;
  longlong *plVar4;
  
  if (param_1 != param_2) {
    lVar2 = *param_1;
    FUN_18008de40(param_1,param_1);
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    param_1[1] = 0;
    lVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar2;
    lVar2 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = lVar2;
  }
  plVar4 = param_2 + 2;
  plVar1 = param_1 + 2;
  if (plVar1 != plVar4) {
    pvVar3 = (void *)*plVar1;
    if (pvVar3 != (void *)0x0) {
      _Memory = pvVar3;
      if ((0xfff < (param_1[4] - (longlong)pvVar3 & 0xfffffffffffffff0U)) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(_Memory);
      *plVar1 = 0;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    *plVar1 = *plVar4;
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    *plVar4 = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  return param_1;
}



// ===== FUN_1802b7250 @ 1802b7250 (size 150)

void FUN_1802b7250(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_180080690(param_1 + 0x318);
  plVar5 = *(longlong **)(param_1 + 0x318);
  if ((plVar5 == (longlong *)0x0) || (plVar5[2] == 0)) {
    plVar5 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  else {
    *(int *)(param_1 + 0x78) = (int)plVar5[2];
    if (0xf < (ulonglong)plVar5[3]) {
      plVar5 = (longlong *)*plVar5;
    }
  }
  *(longlong **)(param_1 + 0x80) = plVar5;
  plVar5 = *(longlong **)(param_2 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



// ===== FUN_1802b7320 @ 1802b7320 (size 161)

void FUN_1802b7320(longlong param_1,longlong *param_2)

{
  FUN_180080710(param_1 + 0x328);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x328);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*param_2 != 0) {
    if (*(int *)(param_1 + 0x68) < 5) {
      *(undefined1 **)(param_1 + 0x40) = &LAB_1802bf660;
      *(undefined1 **)(param_1 + 0x48) = &LAB_1802bf2a0;
      return;
    }
    *(undefined1 **)(param_1 + 0xa0) = &LAB_1802bf460;
    *(undefined1 **)(param_1 + 0xa8) = &LAB_1802bf0e0;
  }
  return;
}



// ===== FUN_1802b73d0 @ 1802b73d0 (size 139)

void FUN_1802b73d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_180080690(param_1 + 0x308);
  plVar5 = *(longlong **)(param_1 + 0x308);
  if ((plVar5 == (longlong *)0x0) || (plVar5[2] == 0)) {
    plVar5 = (longlong *)0x0;
  }
  else if (0xf < (ulonglong)plVar5[3]) {
    plVar5 = (longlong *)*plVar5;
  }
  *(longlong **)(param_1 + 0x20) = plVar5;
  plVar5 = *(longlong **)(param_2 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



// ===== FUN_1802b7460 @ 1802b7460 (size 324)

void FUN_1802b7460(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x308);
  if ((plVar2 == (longlong *)0x0) || (plVar2[2] == 0)) {
    plVar2 = (longlong *)0x0;
  }
  else if (0xf < (ulonglong)plVar2[3]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(longlong **)(param_1 + 0x20) = plVar2;
  plVar2 = *(longlong **)(param_1 + 0x318);
  if ((plVar2 == (longlong *)0x0) || (plVar2[2] == 0)) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    plVar2 = (longlong *)0x0;
  }
  else {
    *(int *)(param_1 + 0x78) = (int)plVar2[2];
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
  }
  *(longlong **)(param_1 + 0x80) = plVar2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0x328) != 0) {
    if (*(int *)(param_1 + 0x68) < 5) {
      *(undefined1 **)(param_1 + 0x40) = &LAB_1802bf660;
      *(undefined1 **)(param_1 + 0x48) = &LAB_1802bf2a0;
    }
    else {
      *(undefined1 **)(param_1 + 0xa0) = &LAB_1802bf460;
      *(undefined1 **)(param_1 + 0xa8) = &LAB_1802bf0e0;
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x338);
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != plVar2[1]) {
      *(int *)(param_1 + 0x58) = (int)(plVar2[1] - *plVar2 >> 5);
      lVar1 = plVar2[3];
      goto LAB_1802b7542;
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  lVar1 = 0;
LAB_1802b7542:
  *(longlong *)(param_1 + 0x60) = lVar1;
  if (4 < *(int *)(param_1 + 0x68)) {
    *(longlong *)(param_1 + 0x90) = param_1 + 0x348;
  }
  plVar2 = (longlong *)(param_1 + 0x388);
  if (*(longlong *)(param_1 + 0x398) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else if (0xf < *(ulonglong *)(param_1 + 0x3a0)) {
    plVar2 = (longlong *)*plVar2;
  }
  *(longlong **)(param_1 + 0xb8) = plVar2;
  plVar2 = (longlong *)(param_1 + 0x3a8);
  if (*(longlong *)(param_1 + 0x3b8) == 0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    return;
  }
  if (0xf < *(ulonglong *)(param_1 + 0x3c0)) {
    plVar2 = (longlong *)*plVar2;
  }
  *(longlong **)(param_1 + 0xc0) = plVar2;
  return;
}



// ===== FUN_1802b75b0 @ 1802b75b0 (size 407)

undefined8 * FUN_1802b75b0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  void *_Memory;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  lVar5 = *param_1;
  lVar6 = param_1[1] - lVar5 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800782c0();
  }
  uVar7 = lVar6 + 1;
  uVar4 = param_1[2] - lVar5 >> 4;
  if (0xfffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar9 = 0xfffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar9 = uVar7;
    if (uVar7 <= uVar4) {
      uVar9 = uVar4;
    }
    if (0xfffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_180078030();
    }
  }
  puVar3 = (undefined8 *)FUN_180074880(uVar9 * 0x10);
  puVar10 = (undefined8 *)((param_2 - lVar5 & 0xfffffffffffffff0U) + (longlong)puVar3);
  *puVar10 = 0;
  puVar8 = puVar10 + 2;
  puVar10[1] = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *puVar10 = *param_3;
  puVar10[1] = param_3[1];
  lVar5 = param_1[1];
  if (param_2 == lVar5) {
    param_2 = *param_1;
    puVar8 = puVar3;
  }
  else {
    FUN_1802b7750(*param_1,param_2,puVar3,param_1);
    lVar5 = param_1[1];
  }
  FUN_1802b7750(param_2,lVar5,puVar8);
  if (*param_1 != 0) {
    FUN_180116560(*param_1,param_1[1]);
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xfffffffffffffff0U)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = (longlong)puVar3;
  param_1[1] = (longlong)(puVar3 + uVar7 * 2);
  param_1[2] = (longlong)(puVar3 + uVar9 * 2);
  return puVar10;
}



// ===== FUN_1802b7750 @ 1802b7750 (size 100)

undefined8 * FUN_1802b7750(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  if (param_1 != param_2) {
    param_1 = param_1 - (longlong)param_3;
    do {
      *param_3 = 0;
      param_3[1] = 0;
      *param_3 = *(undefined8 *)(param_1 + (longlong)param_3);
      param_3[1] = *(undefined8 *)(param_1 + 8 + (longlong)param_3);
      *(undefined8 *)(param_1 + (longlong)param_3) = 0;
      *(undefined8 *)(param_1 + 8 + (longlong)param_3) = 0;
      param_3 = param_3 + 2;
    } while (param_1 + (longlong)param_3 != param_2);
  }
  FUN_180116560(param_3,param_3,param_4);
  return param_3;
}



// ===== FUN_1802b7c00 @ 1802b7c00 (size 416)

undefined1 FUN_1802b7c00(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res18;
  
  FUN_180082080(&local_res18);
  lVar3 = *param_3;
  lVar6 = local_res18;
  if (0 < lVar3) {
    lVar6 = 0x7fffffffffffffff;
    if (local_res18 < lVar3 * -1000000 + 0x7fffffffffffffff) {
      lVar6 = lVar3 * 1000000 + local_res18;
    }
  }
  cVar1 = *(char *)(param_4 + 0x108);
  do {
    if (cVar1 != '\0') {
      return 1;
    }
    do {
      lVar3 = _Query_perf_frequency();
      lVar4 = _Query_perf_counter();
      if (lVar3 == 10000000) {
        lVar4 = lVar4 * 100;
      }
      else {
        if (lVar3 == 24000000) {
          lVar3 = lVar4 + SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar4),8);
          lVar7 = (lVar3 >> 0x18) - (lVar3 >> 0x3f);
          lVar3 = (lVar4 + lVar7 * -24000000) * 1000000000;
          lVar3 = lVar3 + SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar3),8);
          lVar4 = (lVar3 >> 0x18) - (lVar3 >> 0x3f);
        }
        else {
          lVar7 = lVar4 / lVar3;
          lVar4 = ((lVar4 % lVar3) * 1000000000) / lVar3;
        }
        lVar4 = lVar4 + lVar7 * 1000000000;
      }
      if (lVar6 <= lVar4) {
        return *(undefined1 *)(param_4 + 0x108);
      }
      lVar4 = lVar6 - lVar4;
      if (lVar4 < 0x4e94914f0001) {
        uVar5 = lVar4 / 1000000;
        if ((longlong)(uVar5 * 1000000) < lVar4) {
          uVar5 = (ulonglong)((int)uVar5 + 1);
        }
      }
      else {
        uVar5 = 86400000;
      }
      iVar2 = FUN_1802df61c(param_1,*param_2,uVar5 & 0xffffffff);
    } while (iVar2 != 0);
    cVar1 = *(char *)(param_4 + 0x108);
  } while( true );
}



// ===== FUN_1802b7dd0 @ 1802b7dd0 (size 226)

undefined8 * FUN_1802b7dd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 4) = 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    *param_1 = 0;
    param_1[1] = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    return param_1;
  case 1:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    return param_1;
  case 2:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    *(undefined1 *)(param_1 + 4) = 2;
    return param_1;
  case 3:
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined1 *)(param_1 + 4) = 3;
    return param_1;
  case 4:
    *(undefined1 *)(param_1 + 4) = 4;
    return param_1;
  }
}



// ===== FUN_1802b7ed0 @ 1802b7ed0 (size 187)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802b7ed0(undefined8 *param_1,undefined4 param_2)

{
  void *_Memory;
  undefined1 auStackY_68 [32];
  void *local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStackY_68;
  FUN_1802ba3b0(local_30);
  FUN_1802b7f90(param_1,param_2);
  *param_1 = mqtt::exception::vftable;
  if (0xf < local_18) {
    _Memory = local_30[0];
    if ((0xfff < local_18 + 1) &&
       (_Memory = *(void **)((longlong)local_30[0] + -8),
       0x1f < (ulonglong)((longlong)local_30[0] + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = mqtt::exception::vftable;
  return param_1;
}



// ===== FUN_1802b7f90 @ 1802b7f90 (size 278)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802b7f90(undefined8 *param_1,int param_2,int param_3,undefined8 param_4)

{
  void *pvVar1;
  void *_Memory;
  undefined1 auStackY_98 [32];
  undefined8 *local_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1803c3d80 ^ (ulonglong)auStackY_98;
  local_58 = param_1;
  local_68 = (undefined8 *)FUN_1802b4d30(&local_50);
  if (0xf < (ulonglong)local_68[3]) {
    local_68 = (undefined8 *)*local_68;
  }
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_60 = 1;
  __std_exception_copy(&local_68);
  *param_1 = std::runtime_error::vftable;
  if (0xf < uStack_38) {
    pvVar1 = (void *)CONCAT71(uStack_4f,local_50);
    _Memory = pvVar1;
    if ((0xfff < uStack_38 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  local_40 = _DAT_1802eace0;
  uStack_38 = _UNK_1802eace8;
  local_50 = 0;
  *param_1 = mqtt::exception::vftable;
  *(int *)(param_1 + 3) = param_2;
  if ((param_3 == 0) && (0x7f < param_2)) {
    param_3 = param_2;
  }
  *(int *)((longlong)param_1 + 0x1c) = param_3;
  FUN_180075b40(param_1 + 4,param_4);
  return param_1;
}



// ===== FUN_1802b80f0 @ 1802b80f0 (size 71)

undefined8 * FUN_1802b80f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18);
  *param_1 = std::invalid_argument::vftable;
  return param_1;
}



// ===== FUN_1802b8180 @ 1802b8180 (size 75)

undefined8 * FUN_1802b8180(undefined8 *param_1)

{
  char *local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  local_18 = "queue is closed";
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(&local_18);
  *param_1 = mqtt::queue_closed::vftable;
  return param_1;
}



// ===== FUN_1802b81d0 @ 1802b81d0 (size 160)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1802b81d0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x5254514d;
  param_1[1] = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0x4f53514d;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  param_1[0x17] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  uVar1 = _UNK_1802fad68;
  *(undefined8 *)(param_1 + 0x1e) = _DAT_1802fad60;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x22) = DAT_1802fad70;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1802c0e70();
  return param_1;
}



// ===== FUN_1802b8270 @ 1802b8270 (size 179)

undefined8 *
FUN_1802b8270(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_30 = (undefined8 *)FUN_1802df708(0x40);
  if (local_30 == (undefined8 *)0x0) {
    local_30 = (undefined8 *)0x0;
  }
  else {
    *local_30 = 0;
    local_30[1] = 0;
    *(undefined4 *)(local_30 + 1) = 1;
    *(undefined4 *)((longlong)local_30 + 0xc) = 1;
    *local_30 = std::_Ref_count_obj2<mqtt::string_collection>::vftable;
    FUN_1802b56a0(local_30 + 2,param_4);
  }
  local_38 = local_30 + 2;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1802beb80(param_1,param_2,param_3,&local_38);
  *param_1 = mqtt::token::vftable;
  return param_1;
}



// ===== FUN_1802b8330 @ 1802b8330 (size 208)

undefined8 *
FUN_1802b8330(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_30 = (undefined8 *)FUN_1802df708(0x40);
  if (local_30 == (undefined8 *)0x0) {
    local_30 = (undefined8 *)0x0;
  }
  else {
    *local_30 = 0;
    local_30[1] = 0;
    *(undefined4 *)(local_30 + 1) = 1;
    *(undefined4 *)((longlong)local_30 + 0xc) = 1;
    *local_30 = std::_Ref_count_obj2<mqtt::string_collection>::vftable;
    FUN_1802b56a0(local_30 + 2,param_4);
  }
  local_38 = local_30 + 2;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1802becd0(param_1,param_2,param_3,&local_38,param_5,param_6);
  *param_1 = mqtt::token::vftable;
  return param_1;
}



// ===== FUN_1802b8420 @ 1802b8420 (size 707)

void FUN_1802b8420(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  void *_Memory;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  *(undefined ***)(param_1 + -0x658) = mqtt::async_client::vftable;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1) =
       mqtt::async_client::vftable;
  iVar4 = *(int *)(*(longlong *)(param_1 + -0x650) + 4);
  *(int *)((longlong)iVar4 + -0x654 + param_1) = iVar4 + -0x650;
  FUN_1802c3520(param_1 + -0x5f8);
  _Memory = *(void **)(param_1 + -0x10);
  if (_Memory != (void *)0x0) {
    FUN_180117ef0((longlong)_Memory + 0xf0);
    free(_Memory);
  }
  puVar5 = *(undefined8 **)(param_1 + -0x20);
  *(undefined8 *)puVar5[1] = 0;
  puVar5 = (undefined8 *)*puVar5;
  while (puVar5 != (undefined8 *)0x0) {
    plVar6 = (longlong *)puVar5[3];
    puVar7 = (undefined8 *)*puVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    free(puVar5);
    puVar5 = puVar7;
  }
  free(*(void **)(param_1 + -0x20));
  puVar5 = *(undefined8 **)(param_1 + -0x30);
  *(undefined8 *)puVar5[1] = 0;
  puVar5 = (undefined8 *)*puVar5;
  while (puVar5 != (undefined8 *)0x0) {
    plVar6 = (longlong *)puVar5[3];
    puVar7 = (undefined8 *)*puVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    free(puVar5);
    puVar5 = puVar7;
  }
  free(*(void **)(param_1 + -0x30));
  plVar6 = *(longlong **)(param_1 + -0x38);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  FUN_180118860(param_1 + -0x408);
  plVar6 = *(longlong **)(param_1 + -0x410);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != (longlong *)(param_1 + -0x448));
    *(undefined8 *)(param_1 + -0x410) = 0;
  }
  plVar6 = *(longlong **)(param_1 + -0x450);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != (longlong *)(param_1 + -0x488));
    *(undefined8 *)(param_1 + -0x450) = 0;
  }
  plVar6 = *(longlong **)(param_1 + -0x490);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != (longlong *)(param_1 + -0x4c8));
    *(undefined8 *)(param_1 + -0x490) = 0;
  }
  plVar6 = *(longlong **)(param_1 + -0x4d0);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != (longlong *)(param_1 + -0x508));
    *(undefined8 *)(param_1 + -0x4d0) = 0;
  }
  plVar6 = *(longlong **)(param_1 + -0x510);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != (longlong *)(param_1 + -0x548));
    *(undefined8 *)(param_1 + -0x510) = 0;
  }
  if (*(void **)(param_1 + -0x558) != (void *)0x0) {
    free(*(void **)(param_1 + -0x558));
  }
  cVar3 = *(char *)(param_1 + -0x568);
  if (((cVar3 != -1) && (cVar3 != '\0')) && (cVar3 == '\x01')) {
    FUN_180078180();
  }
  FUN_180078180(param_1 + -0x5a8);
  FUN_180078180(param_1 + -0x5c8);
  return;
}



// ===== FUN_1802b8710 @ 1802b8710 (size 72)

void FUN_1802b8710(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_180119f20(param_1 + 0x90);
  FUN_1802c1750(param_1 + 0x78);
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001802b874e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}



// ===== FUN_1802b8760 @ 1802b8760 (size 177)

void FUN_1802b8760(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = mqtt::token::vftable;
  puVar4 = (undefined8 *)param_1[0x24];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x23];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x22];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  plVar5 = (longlong *)param_1[0x1d];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  FUN_180078180(param_1 + 0x17);
  return;
}



// ===== FUN_1802b88c0 @ 1802b88c0 (size 133)

void * FUN_1802b88c0(void *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)((longlong)param_1 + 0x130);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_1802b8760(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



// ===== FUN_1802b89a0 @ 1802b89a0 (size 446)

void FUN_1802b89a0(longlong param_1,ulonglong param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  void *_Memory;
  ulonglong uVar4;
  size_t sVar5;
  void *pvVar6;
  
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  uVar4 = 1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
  }
  for (; (uVar4 - uVar2 < param_2 || (uVar4 < 8)); uVar4 = uVar4 * 2) {
    if (0x666666666666666 - uVar4 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_18010bae0();
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_180078030();
  }
  _Dst = (void *)FUN_180074880(uVar4 * 8);
  sVar1 = uVar2 * 8;
  uVar3 = uVar4 >> 1;
  for (; uVar4 <= uVar3; uVar4 = uVar4 * 2) {
  }
  uVar4 = uVar4 - *(longlong *)(param_1 + 0x10);
  pvVar6 = (void *)(*(longlong *)(param_1 + 8) + sVar1);
  sVar5 = (*(longlong *)(param_1 + 0x10) * 8 - (longlong)pvVar6) + *(longlong *)(param_1 + 8);
  memmove((void *)(sVar1 + (longlong)_Dst),pvVar6,sVar5);
  pvVar6 = (void *)((longlong)(sVar1 + (longlong)_Dst) + sVar5);
  if (uVar4 < uVar2) {
    sVar5 = uVar4 * 8;
    memmove(pvVar6,*(void **)(param_1 + 8),sVar5);
    pvVar6 = (void *)(sVar5 + *(longlong *)(param_1 + 8));
    sVar1 = (*(longlong *)(param_1 + 8) - (longlong)pvVar6) + sVar1;
    memmove(_Dst,pvVar6,sVar1);
    pvVar6 = (void *)(sVar1 + (longlong)_Dst);
  }
  else {
    memmove(pvVar6,*(void **)(param_1 + 8),sVar1);
    memset((void *)(sVar1 + (longlong)pvVar6),0,(uVar4 - uVar2) * 8);
    pvVar6 = _Dst;
    sVar5 = sVar1;
  }
  memset(pvVar6,0,sVar5);
  pvVar6 = *(void **)(param_1 + 8);
  if (pvVar6 != (void *)0x0) {
    _Memory = pvVar6;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar6 + -8),
       0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar4;
  *(void **)(param_1 + 8) = _Dst;
  return;
}



// ===== FUN_1802b8b70 @ 1802b8b70 (size 334)

void FUN_1802b8b70(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  
  if (*param_2 != 0) {
    iVar5 = _Mtx_lock(param_1 + 0x10);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(param_1 + 0x5c) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x5c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    lVar3 = *(longlong *)(param_1 + 0x638);
    if (*(longlong *)(param_1 + 0x640) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list too long");
    }
    plVar6 = (longlong *)FUN_1802df708(0x20);
    plVar6[2] = 0;
    plVar6[3] = 0;
    if (param_2[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    plVar6[2] = *param_2;
    plVar6[3] = param_2[1];
    *(longlong *)(param_1 + 0x640) = *(longlong *)(param_1 + 0x640) + 1;
    puVar4 = *(undefined8 **)(lVar3 + 8);
    *plVar6 = lVar3;
    plVar6[1] = (longlong)puVar4;
    *(longlong **)(lVar3 + 8) = plVar6;
    *puVar4 = plVar6;
    _Mtx_unlock(param_1 + 0x10);
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return;
}



// ===== FUN_1802b8cd0 @ 1802b8cd0 (size 334)

void FUN_1802b8cd0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  
  if (*param_2 != 0) {
    iVar5 = _Mtx_lock(param_1 + 0x10);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(param_1 + 0x5c) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x5c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    lVar3 = *(longlong *)(param_1 + 0x628);
    if (*(longlong *)(param_1 + 0x630) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list too long");
    }
    plVar6 = (longlong *)FUN_1802df708(0x20);
    plVar6[2] = 0;
    plVar6[3] = 0;
    if (param_2[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    plVar6[2] = *param_2;
    plVar6[3] = param_2[1];
    *(longlong *)(param_1 + 0x630) = *(longlong *)(param_1 + 0x630) + 1;
    puVar4 = *(undefined8 **)(lVar3 + 8);
    *plVar6 = lVar3;
    plVar6[1] = (longlong)puVar4;
    *(longlong **)(lVar3 + 8) = plVar6;
    *puVar4 = plVar6;
    _Mtx_unlock(param_1 + 0x10);
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return;
}



// ===== FUN_1802b8e30 @ 1802b8e30 (size 100)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b8e30(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0xb0) != 0) || (0x7f < *(int *)(param_1 + 0xb4))) {
    FUN_1802b7f90(local_58,*(int *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),param_1 + 0xb8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_58,(ThrowInfo *)&DAT_1803b6f88);
  }
  return;
}



// ===== FUN_1802b8ea0 @ 1802b8ea0 (size 95)

void FUN_1802b8ea0(longlong param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  *(undefined1 *)(param_1 + 0xe8) = 1;
  _Cnd_broadcast(param_1 + 0x98);
  _Cnd_broadcast(param_1 + 0x50);
  _Mtx_unlock(param_1);
  return;
}



// ===== FUN_1802b8f10 @ 1802b8f10 (size 660)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802b8f10(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)(param_1 + -0x658);
  *(undefined4 *)(param_1 + -0x560) = *(undefined4 *)(param_3 + 0x68);
  if (*(int *)(param_3 + 0x68) < 5) {
    *(undefined4 *)(param_3 + 0x88) = 0;
  }
  else {
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  puVar1 = (undefined8 *)(param_1 + -0x40);
  if (*(longlong *)(param_1 + -0x38) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + -0x38) + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_a8 = *puVar1;
  plVar5 = *(longlong **)(param_1 + -0x38);
  local_b8 = (longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1;
  local_a0 = plVar5;
  local_98 = param_3;
  plStack_c0 = (longlong *)FUN_1802df708(0x138);
  if (plStack_c0 == (longlong *)0x0) {
    plStack_c0 = (longlong *)0x0;
  }
  else {
    *plStack_c0 = 0;
    plStack_c0[1] = 0;
    *(undefined4 *)(plStack_c0 + 1) = 1;
    *(undefined4 *)((longlong)plStack_c0 + 0xc) = 1;
    *plStack_c0 = (longlong)std::_Ref_count_obj2<mqtt::token>::vftable;
    local_c8 = plStack_c0;
    FUN_1802beaa0(plStack_c0 + 2,0,local_b8,0);
    plStack_c0[2] = (longlong)mqtt::token::vftable;
  }
  local_c8 = plStack_c0 + 2;
  FUN_180080690(puVar1,&local_c8);
  plVar8 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_c0 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  pcVar6 = *(code **)(*plVar4 + 8);
  if (*(longlong *)(param_1 + -0x38) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + -0x38) + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_c8 = (longlong *)*puVar1;
  plStack_c0 = *(longlong **)(param_1 + -0x38);
  (*pcVar6)(plVar4,&local_c8);
  FUN_1802b7320(param_3,puVar1);
  FUN_1802b6ec0(param_1 + -0x408,param_3);
  iVar9 = FUN_1802c20a0(*(undefined8 *)(param_1 + -0x5f8),param_1 + -0x408);
  if (iVar9 != 0) {
    pcVar6 = *(code **)(*plVar4 + 0x10);
    uVar10 = FUN_1802b7da0(&local_c8,puVar1);
    (*pcVar6)(plVar4,uVar10);
    FUN_180082e20(puVar1);
    FUN_1802b7ed0(local_88,iVar9);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_88,(ThrowInfo *)&DAT_1803b6f88);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + -0x38) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + -0x38) + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *param_2 = *(undefined8 *)(param_1 + -0x40);
  param_2[1] = *(undefined8 *)(param_1 + -0x38);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  FUN_180118860(param_3);
  return param_2;
}



// ===== FUN_1802b91b0 @ 1802b91b0 (size 567)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1802b91b0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_f8;
  plVar4 = (longlong *)(param_1 + -0x658);
  *(undefined4 *)(param_1 + -0x560) = *(undefined4 *)(param_3 + 0x68);
  if (*(int *)(param_3 + 0x68) < 5) {
    *(undefined4 *)(param_3 + 0x88) = 0;
  }
  else {
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  puVar1 = (undefined8 *)(param_1 + -0x40);
  if (*(longlong *)(param_1 + -0x38) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + -0x38) + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_b0 = *puVar1;
  plVar5 = *(longlong **)(param_1 + -0x38);
  local_d8 = param_5;
  local_a8 = plVar5;
  local_a0 = param_3;
  uVar9 = FUN_1802b9d10(&local_c8,0,
                        (longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1);
  FUN_180080690(puVar1,uVar9);
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_c0 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plStack_c0 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0);
      }
    }
  }
  pcVar6 = *(code **)(*plVar4 + 8);
  if (*(longlong *)(param_1 + -0x38) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + -0x38) + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_c8 = *puVar1;
  plStack_c0 = *(longlong **)(param_1 + -0x38);
  (*pcVar6)(plVar4,&local_c8);
  FUN_1802b7320(param_3,puVar1);
  FUN_1802b6ec0(param_1 + -0x408,param_3);
  iVar8 = FUN_1802c20a0(*(undefined8 *)(param_1 + -0x5f8),param_1 + -0x408);
  if (iVar8 != 0) {
    pcVar6 = *(code **)(*plVar4 + 0x10);
    uVar9 = FUN_1802b7da0(&local_c8,puVar1);
    (*pcVar6)(plVar4,uVar9);
    FUN_180082e20(puVar1);
    FUN_1802b7ed0(local_98,iVar8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_98,(ThrowInfo *)&DAT_1803b6f88);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + -0x38) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + -0x38) + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *param_2 = *(undefined8 *)(param_1 + -0x40);
  param_2[1] = *(undefined8 *)(param_1 + -0x38);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  FUN_180118860(param_3);
  return param_2;
}



// ===== FUN_1802b93f0 @ 1802b93f0 (size 97)

undefined8 FUN_1802b93f0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 local_3d0 [968];
  
  param_1 = *(int *)(*(longlong *)(param_1 + -0x650) + 4) + param_1;
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x650) + 0x20);
  uVar2 = FUN_1802b6cb0(local_3d0,0);
  (*pcVar1)(param_1 + -0x650,param_2,uVar2);
  return param_2;
}



// ===== FUN_1802b9460 @ 1802b9460 (size 418)

undefined8 *
FUN_1802b9460(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined4 uVar4;
  undefined8 local_80 [4];
  char local_60;
  undefined1 local_58 [64];
  
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  lVar2 = *(longlong *)(param_1 + -0x10);
  local_res10 = param_2;
  iVar3 = _Mtx_lock(lVar2);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar2 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar2 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  while( true ) {
    if (*(longlong *)(lVar2 + 0x110) != 0) {
      FUN_1802b7dd0(local_80,*(undefined8 *)
                              (*(longlong *)(lVar2 + 0xf8) +
                              (*(longlong *)(lVar2 + 0x100) - 1U & *(ulonglong *)(lVar2 + 0x108)) *
                              8));
      uVar4 = 3;
      FUN_180119ba0(*(undefined8 *)
                     (*(longlong *)(lVar2 + 0xf8) +
                     (*(longlong *)(lVar2 + 0x100) - 1U & *(ulonglong *)(lVar2 + 0x108)) * 8));
      plVar1 = (longlong *)(lVar2 + 0x110);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        *(undefined8 *)(lVar2 + 0x108) = 0;
      }
      else {
        *(longlong *)(lVar2 + 0x108) = *(longlong *)(lVar2 + 0x108) + 1;
      }
      _Cnd_signal(lVar2 + 0x98);
      _Mtx_unlock(lVar2);
      if (local_80 != param_2) {
        local_res8 = param_2;
        FUN_1802b77c0((longlong)local_60 + 1,&local_res8,local_80,param_4,uVar4);
      }
      FUN_180119ba0(local_80);
      return param_2;
    }
    if (*(char *)(lVar2 + 0xe8) != '\0') break;
    _Cnd_wait(lVar2 + 0x50,lVar2);
  }
  FUN_1802b8180(local_58);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_58,(ThrowInfo *)&DAT_1803b7080);
}



// ===== FUN_1802b9610 @ 1802b9610 (size 298)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802b9610(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  if (*(longlong *)(param_1 + -0x10) == 0) {
    FUN_180075c00(&local_88,"Consumer not started");
    FUN_1802b4780(local_58,0xffffffff,&local_88);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_58,(ThrowInfo *)&DAT_1803b6f88);
  }
  do {
    plVar2 = (longlong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1);
    (**(code **)(*plVar2 + 0x150))(plVar2,&local_88);
    cVar1 = (char)local_68;
    if (cVar1 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      *param_2 = local_88;
      param_2[1] = local_80;
LAB_1802b96d1:
      FUN_180119ba0(&local_88);
      return param_2;
    }
    if (((longlong)cVar1 == 2) || ((longlong)cVar1 - 3U < 2)) {
      *param_2 = 0;
      param_2[1] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      goto LAB_1802b96d1;
    }
    FUN_180119ba0(&local_88);
  } while( true );
}



// ===== FUN_1802b9740 @ 1802b9740 (size 711)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b9740(longlong param_1)

{
  void *pvVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 *****pppppuVar5;
  longlong *plVar6;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 *****local_a8 [3];
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStackY_f8;
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x78);
  local_88 = *(undefined8 *)(param_1 + 0x68);
  uStack_80 = *(undefined8 *)(param_1 + 0x70);
  uStack_74 = *(undefined4 *)(param_1 + 0x7c);
  uStack_70 = *(undefined4 *)(param_1 + 0x80);
  uStack_6c = *(undefined4 *)(param_1 + 0x84);
  local_68 = *(undefined4 *)(param_1 + 0x88);
  local_78 = 5;
  FUN_180075b40(local_a8,param_1 + 0x90);
  FUN_180075b40(&local_c8,param_1 + 0xb0);
  plVar6 = (longlong *)(param_1 + 0xd0);
  if (((((plVar6 == (longlong *)0x0) || (*(char *)(param_1 + 0xf0) != '\x02')) &&
       (plVar6 != (longlong *)0x0)) && (plVar6 = (longlong *)0x0, *(char *)(param_1 + 0xf0) == '\0')
      ) || ((plVar6 != (longlong *)0x0 && (*plVar6 == 0)))) {
    pppppuVar5 = local_a8;
    if (0xf < local_90) {
      pppppuVar5 = local_a8[0];
    }
  }
  else if ((param_1 == -0xd0) || (*(char *)(param_1 + 0xf0) != '\x01')) {
    plVar3 = (longlong *)FUN_1802df708(0x48);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = *plVar6;
      plVar3[1] = (longlong)FUN_1802c0320;
      plVar3[2] = (longlong)FUN_1802bff60;
      plVar3[3] = (longlong)FUN_1802c04c0;
      plVar3[4] = (longlong)FUN_1802c0090;
      plVar3[5] = (longlong)FUN_1802c0820;
      plVar3[6] = (longlong)FUN_1802c0220;
      plVar3[7] = (longlong)FUN_1802bff40;
      plVar3[8] = (longlong)FUN_1802bff80;
    }
    pvVar4 = *(void **)(param_1 + 0x100);
    *(longlong **)(param_1 + 0x100) = plVar3;
    if (pvVar4 != (void *)0x0) {
      free(pvVar4);
    }
    pppppuVar5 = local_a8;
    if (0xf < local_90) {
      pppppuVar5 = local_a8[0];
    }
  }
  else {
    pppppuVar5 = local_a8;
    if (0xf < local_90) {
      pppppuVar5 = local_a8[0];
    }
  }
  iVar2 = FUN_1802c2e50(param_1 + 0x60,pppppuVar5);
  if (iVar2 != 0) {
    FUN_1802b7ed0(local_58,iVar2);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_58,(ThrowInfo *)&DAT_1803b6f88);
  }
  if (0xf < uStack_b0) {
    pvVar1 = (void *)CONCAT71(uStack_c7,local_c8);
    pvVar4 = pvVar1;
    if ((0xfff < uStack_b0 + 1) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar4);
  }
  local_b8 = _DAT_1802eace0;
  uStack_b0 = _UNK_1802eace8;
  local_c8 = 0;
  if (0xf < local_90) {
    pppppuVar5 = local_a8[0];
    if ((0xfff < local_90 + 1) &&
       (pppppuVar5 = (undefined8 *****)local_a8[0][-1],
       0x1f < (ulonglong)((longlong)local_a8[0] + (-8 - (longlong)pppppuVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pppppuVar5);
  }
  return;
}



// ===== FUN_1802b9a10 @ 1802b9a10 (size 276)

undefined8 *
FUN_1802b9a10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar6 = (undefined8 *)FUN_1802df708(0x88);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 1) = 1;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *puVar6 = std::_Ref_count_obj2<mqtt::message>::vftable;
    local_30 = *param_2;
    local_28 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1802b4b90(puVar6 + 2,&local_30,param_3,param_4,param_5,param_6,param_7);
  }
  *param_1 = puVar6 + 2;
  param_1[1] = puVar6;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}



// ===== FUN_1802b9b30 @ 1802b9b30 (size 151)

undefined8 * FUN_1802b9b30(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1802df708(0x138);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = std::_Ref_count_obj2<mqtt::token>::vftable;
    FUN_1802beaa0(puVar1 + 2,param_2,param_3,0);
    puVar1[2] = mqtt::token::vftable;
  }
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}



// ===== FUN_1802b9bd0 @ 1802b9bd0 (size 143)

undefined8 *
FUN_1802b9bd0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1802df708(0x138);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = std::_Ref_count_obj2<mqtt::token>::vftable;
    FUN_1802b8270(puVar1 + 2,param_2,param_3,param_4);
  }
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}



// ===== FUN_1802b9c60 @ 1802b9c60 (size 169)

undefined8 *
FUN_1802b9c60(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1802df708(0x138);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = std::_Ref_count_obj2<mqtt::token>::vftable;
    FUN_1802b8330(puVar1 + 2,param_2,param_3,param_4,param_5,param_6);
  }
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}



// ===== FUN_1802b9d10 @ 1802b9d10 (size 193)

undefined8 *
FUN_1802b9d10(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)FUN_1802df708(0x138);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = std::_Ref_count_obj2<mqtt::token>::vftable;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1802becd0(puVar1 + 2,param_2,param_3,&local_30,param_4,param_5);
    puVar1[2] = mqtt::token::vftable;
  }
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}



// ===== FUN_1802b9de0 @ 1802b9de0 (size 239)

undefined8 *
FUN_1802b9de0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar6 = (undefined8 *)FUN_1802df708(0x138);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 1) = 1;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *puVar6 = std::_Ref_count_obj2<mqtt::token>::vftable;
    if (param_4[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_4[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_30 = *param_4;
    uStack_28 = param_4[1];
    FUN_1802beb80(puVar6 + 2,param_2,param_3,&local_30);
  }
  *param_1 = puVar6 + 2;
  param_1[1] = puVar6;
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}



// ===== FUN_1802b9ed0 @ 1802b9ed0 (size 268)

undefined8 *
FUN_1802b9ed0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar6 = (undefined8 *)FUN_1802df708(0x138);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 1) = 1;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *puVar6 = std::_Ref_count_obj2<mqtt::token>::vftable;
    if (param_4[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_4[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_30 = *param_4;
    uStack_28 = param_4[1];
    FUN_1802becd0(puVar6 + 2,param_2,param_3,&local_30,param_5,param_6);
  }
  *param_1 = puVar6 + 2;
  param_1[1] = puVar6;
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}



// ===== FUN_1802b9fe0 @ 1802b9fe0 (size 114)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b9fe0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  local_68 = 0;
  iVar1 = FUN_1802c4270(*(undefined8 *)(param_1 + -0x5f8),param_1 + -0x658,0,
                        fnet_getConfigApiVersion);
  if (iVar1 != 0) {
    FUN_1802b7ed0(local_58,iVar1);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_58,(ThrowInfo *)&DAT_1803b6f88);
  }
  return;
}



// ===== FUN_1802ba060 @ 1802ba060 (size 474)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1802ba060(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_148;
  local_108 = 0;
  plVar3 = (longlong *)(param_1 + -0x658);
  local_128 = param_5;
  local_100 = param_2;
  FUN_1802b9d10(param_2,4,param_1 + -0x650 + (longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4)
               );
  local_108 = 1;
  pcVar4 = *(code **)(*plVar3 + 8);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_118 = *param_2;
  uStack_110 = param_2[1];
  (*pcVar4)(plVar3,&local_118);
  local_f8 = _DAT_1802fae00;
  local_e8 = _DAT_1802fae10;
  uStack_e0 = _UNK_1802fae18;
  local_d8 = _DAT_1802fae20;
  uStack_d0 = _UNK_1802fae28;
  local_c8 = _DAT_1802fae30;
  uStack_c4 = _UNK_1802fae34;
  uStack_c0 = _UNK_1802fae38;
  uStack_bc = _UNK_1802fae3c;
  local_b8 = _DAT_1802fae40;
  uStack_b0 = _UNK_1802fae48;
  local_a8 = DAT_1802fae50;
  local_a0 = 0;
  local_98 = (longlong *)0x0;
  local_90 = _DAT_1802fad60;
  uStack_88 = _UNK_1802fad68;
  local_80 = DAT_1802fad70;
  _uStack_f0 = CONCAT44((int)((ulonglong)_UNK_1802fae08 >> 0x20),param_3);
  FUN_1802c0910(&local_f8,param_2,*(undefined4 *)(param_1 + -0x560));
  iVar6 = FUN_1802c3740(*(undefined8 *)(param_1 + -0x5f8),&local_f8);
  if (iVar6 != 0) {
    pcVar4 = *(code **)(*plVar3 + 0x10);
    uVar7 = FUN_1802b7da0(&local_118,param_2);
    (*pcVar4)(plVar3,uVar7);
    FUN_1802b7ed0(local_78,iVar6);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_1802c1750(&local_90);
  plVar3 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_98 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return param_2;
}



// ===== FUN_1802ba240 @ 1802ba240 (size 359)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802ba240(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  plVar3 = (longlong *)(param_1 + -0x658);
  local_80 = param_2;
  local_78 = param_3;
  FUN_1802b9b30(param_2,4,param_1 + -0x650 + (longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4)
               );
  local_88 = 1;
  pcVar4 = *(code **)(*plVar3 + 8);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_98 = *param_2;
  uStack_90 = param_2[1];
  (*pcVar4)(plVar3,&local_98);
  FUN_1802c0910(param_3,param_2,*(undefined4 *)(param_1 + -0x560));
  iVar6 = FUN_1802c3740(*(undefined8 *)(param_1 + -0x5f8),param_3);
  if (iVar6 != 0) {
    pcVar4 = *(code **)(*plVar3 + 0x10);
    uVar7 = FUN_1802b7da0(&local_98,param_2);
    (*pcVar4)(plVar3,uVar7);
    FUN_1802b7ed0(local_68,iVar6);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_68,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_1802c1750(param_3 + 0x68);
  plVar3 = *(longlong **)(param_3 + 0x60);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return param_2;
}



// ===== FUN_1802ba3b0 @ 1802ba3b0 (size 364)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802ba3b0(undefined8 *param_1,undefined4 param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  char *_Str;
  void **ppvVar4;
  void *pvVar5;
  bool bVar6;
  undefined1 auStackY_98 [32];
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined8 *local_40;
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStackY_98;
  local_40 = param_1;
  _Str = (char *)FUN_1802c4600(param_2);
  bVar6 = _Str == (char *)0x0;
  if (bVar6) {
    ppvVar4 = &local_60;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = _DAT_1802eace0;
    uStack_48 = _UNK_1802eace8;
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    local_38 = (void *)0x0;
    uStack_30 = 0;
    strlen(_Str);
    FUN_1800748f0(&local_38,_Str);
    ppvVar4 = &local_38;
  }
  pvVar5 = *ppvVar4;
  pvVar1 = ppvVar4[1];
  pvVar2 = ppvVar4[2];
  pvVar3 = ppvVar4[3];
  ppvVar4[2] = (void *)0x0;
  ppvVar4[3] = (void *)0xf;
  *(undefined1 *)ppvVar4 = 0;
  *param_1 = pvVar5;
  param_1[1] = pvVar1;
  param_1[2] = pvVar2;
  param_1[3] = pvVar3;
  if ((bVar6) && (0xf < uStack_48)) {
    pvVar5 = local_60;
    if ((0xfff < uStack_48 + 1) &&
       (pvVar5 = *(void **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)pvVar5)))) goto LAB_1802ba4da;
    free(pvVar5);
  }
  if ((!bVar6) && (0xf < uStack_20)) {
    pvVar5 = local_38;
    if ((0xfff < uStack_20 + 1) &&
       (pvVar5 = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar5)))) {
LAB_1802ba4da:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar5);
  }
  return param_1;
}



// ===== FUN_1802ba520 @ 1802ba520 (size 94)

undefined8 FUN_1802ba520(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = _Mtx_lock(param_1 + 8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  _Mtx_unlock(param_1 + 8);
  return uVar1;
}



// ===== FUN_1802ba5e0 @ 1802ba5e0 (size 270)

undefined8 * FUN_1802ba5e0(longlong param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (0 < param_3) {
    lVar2 = param_1 + -0x648;
    iVar5 = _Mtx_lock(lVar2);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(param_1 + -0x5fc) == 0x7fffffff) {
      *(undefined4 *)(param_1 + -0x5fc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    puVar3 = *(undefined8 **)(param_1 + -0x20);
    puVar4 = (undefined8 *)*puVar3;
    while ((puVar4 != puVar3 &&
           (iVar5 = (**(code **)(*(longlong *)puVar4[2] + 0x18))(), iVar5 != param_3))) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if (puVar4 != *(undefined8 **)(param_1 + -0x20)) {
      *param_2 = 0;
      param_2[1] = 0;
      if (puVar4[3] != 0) {
        LOCK();
        piVar1 = (int *)(puVar4[3] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *param_2 = puVar4[2];
      param_2[1] = puVar4[3];
      _Mtx_unlock(lVar2);
      return param_2;
    }
    _Mtx_unlock(lVar2);
  }
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// ===== FUN_1802ba6f0 @ 1802ba6f0 (size 277)

undefined8 *
FUN_1802ba6f0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar7 = 1;
  lVar2 = param_1 + -0x648;
  lVar8 = lVar2;
  iVar6 = _Mtx_lock(lVar2);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + -0x5fc) == 0x7fffffff) {
    *(undefined4 *)(param_1 + -0x5fc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  puVar3 = *(undefined8 **)(param_1 + -0x20);
  for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
    iVar6 = (**(code **)(*(longlong *)puVar4[2] + 0x18))();
    if (0 < iVar6) {
      puVar5 = (undefined8 *)param_2[1];
      if (puVar5 == (undefined8 *)param_2[2]) {
        FUN_1802b75b0(param_2,puVar5,puVar4 + 2,param_4,uVar7,lVar8);
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
        if (puVar4[3] != 0) {
          LOCK();
          piVar1 = (int *)(puVar4[3] + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        *puVar5 = puVar4[2];
        puVar5[1] = puVar4[3];
        param_2[1] = param_2[1] + 0x10;
      }
    }
  }
  _Mtx_unlock(lVar2);
  return param_2;
}



// ===== FUN_1802ba850 @ 1802ba850 (size 94)

undefined8 FUN_1802ba850(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = _Mtx_lock(param_1 + 8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  _Mtx_unlock(param_1 + 8);
  return uVar1;
}



// ===== FUN_1802ba8c0 @ 1802ba8c0 (size 871)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802ba8c0(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  void *pvVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined1 auStackY_f8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 ****local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  undefined1 local_50;
  ulonglong local_48;
  
  if (param_1 != 0) {
    local_48 = DAT_1803c3d80 ^ (ulonglong)auStackY_f8;
    local_a8 = 0;
    if (*(longlong *)(param_1 + 0x620) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x620) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_a0 = *(longlong *)(param_1 + 0x618);
    plVar3 = *(longlong **)(param_1 + 0x620);
    local_98 = plVar3;
    if (local_a0 != 0) {
      FUN_1802bf470(local_a0,0);
    }
    uVar11 = _UNK_1802eace8;
    uVar17 = _DAT_1802eace0;
    plVar4 = *(longlong **)(param_1 + 0x108);
    if (((plVar4 != (longlong *)0x0) || (*(longlong *)(param_1 + 0x148) != 0)) ||
       (*(longlong *)(param_1 + 0x648) != 0)) {
      bVar12 = param_2 == (char *)0x0;
      if (bVar12) {
        uStack_c0 = (undefined8 ***)0x0;
        local_b8 = _DAT_1802eace0;
        uStack_b0 = _UNK_1802eace8;
        local_c8 = (void *)0x0;
        puVar7 = &local_c8;
      }
      else {
        local_70 = (void *)0x0;
        uStack_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        strlen(param_2);
        FUN_1800748f0(&local_70,param_2);
        puVar7 = &local_70;
      }
      local_90 = (undefined8 ****)*puVar7;
      uStack_88 = puVar7[1];
      local_80 = puVar7[2];
      uStack_78 = puVar7[3];
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      *(undefined1 *)puVar7 = 0;
      if ((bVar12) && (0xf < uStack_b0)) {
        pvVar9 = local_c8;
        if ((0xfff < uStack_b0 + 1) &&
           (pvVar9 = *(void **)((longlong)local_c8 + -8),
           0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pvVar9)))) goto LAB_1802baa4c;
        free(pvVar9);
        uVar17 = _DAT_1802eace0;
        uVar11 = _UNK_1802eace8;
      }
      if ((!bVar12) && (0xf < uStack_58)) {
        pvVar9 = local_70;
        if ((0xfff < uStack_58 + 1) &&
           (pvVar9 = *(void **)((longlong)local_70 + -8),
           0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar9)))) {
LAB_1802baa4c:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(pvVar9);
        uVar17 = _DAT_1802eace0;
        uVar11 = _UNK_1802eace8;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,&local_90);
        uVar17 = _DAT_1802eace0;
        uVar11 = _UNK_1802eace8;
      }
      plVar4 = *(longlong **)(param_1 + 0x148);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_90);
        uVar17 = _DAT_1802eace0;
        uVar11 = _UNK_1802eace8;
      }
      uVar6 = local_80;
      lVar5 = *(longlong *)(param_1 + 0x648);
      if (lVar5 != 0) {
        local_c8 = (undefined8 ***)0x0;
        uStack_c0 = (undefined8 ***)0x0;
        local_b8 = 0;
        uStack_b0 = 0;
        ppppuVar10 = &local_90;
        if (0xf < uStack_78) {
          ppppuVar10 = local_90;
        }
        if (0x7fffffffffffffff < local_80) {
                    /* WARNING: Subroutine does not return */
          FUN_1800782a0();
        }
        if (local_80 < 0x10) {
          local_b8 = local_80;
          uStack_b0 = 0xf;
          local_c8 = *ppppuVar10;
          uStack_c0 = ppppuVar10[1];
          uVar13 = *(undefined4 *)ppppuVar10;
          uVar14 = *(undefined4 *)((longlong)ppppuVar10 + 4);
          uVar15 = *(undefined4 *)(ppppuVar10 + 1);
          uVar16 = *(undefined4 *)((longlong)ppppuVar10 + 0xc);
        }
        else {
          uVar8 = local_80 | 0xf;
          uVar11 = 0x7fffffffffffffff;
          if ((uVar8 < 0x8000000000000000) && (uVar11 = uVar8, uVar8 < 0x16)) {
            uVar11 = 0x16;
          }
          local_c8 = (undefined8 ***)FUN_180074880(uVar11 + 1);
          local_b8 = uVar6;
          uStack_b0 = uVar11;
          memcpy(local_c8,ppppuVar10,uVar6 + 1);
          uVar13 = (undefined4)local_c8;
          uVar14 = local_c8._4_4_;
          uVar15 = (undefined4)uStack_c0;
          uVar16 = uStack_c0._4_4_;
          uVar17 = _DAT_1802eace0;
          uVar11 = _UNK_1802eace8;
        }
        local_c8 = (undefined8 ***)((ulonglong)local_c8 & 0xffffffffffffff00);
        local_70 = (void *)CONCAT44(uVar14,uVar13);
        uStack_68 = CONCAT44(uVar16,uVar15);
        local_60 = local_b8;
        uStack_58 = uStack_b0;
        local_50 = 1;
        local_b8 = uVar17;
        uStack_b0 = uVar11;
        FUN_1802bbce0(lVar5,&local_70);
      }
      if (0xf < uStack_78) {
        ppppuVar10 = local_90;
        if ((0xfff < uStack_78 + 1) &&
           (ppppuVar10 = (undefined8 ****)local_90[-1],
           0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)ppppuVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(ppppuVar10);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
  }
  return;
}



// ===== FUN_1802bac30 @ 1802bac30 (size 767)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802bac30(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 ******ppppppuVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined1 auStackY_e8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined4 local_98;
  undefined8 ******local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  undefined1 local_50;
  ulonglong local_48;
  
  uVar8 = _UNK_1802eace8;
  uVar14 = _DAT_1802eace0;
  if (param_1 != 0) {
    local_48 = DAT_1803c3d80 ^ (ulonglong)auStackY_e8;
    local_98 = 0;
    plVar1 = *(longlong **)(param_1 + 0x108);
    if (((plVar1 == (longlong *)0x0) && (*(longlong *)(param_1 + 0x188) == 0)) &&
       (*(longlong *)(param_1 + 0x648) == 0)) {
      return;
    }
    bVar9 = param_2 == (char *)0x0;
    if (bVar9) {
      uStack_b0 = (undefined8 *****)0x0;
      local_a8 = _DAT_1802eace0;
      uStack_a0 = _UNK_1802eace8;
      local_b8 = (void *)0x0;
      puVar4 = &local_b8;
    }
    else {
      local_70 = (void *)0x0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      strlen(param_2);
      FUN_1800748f0(&local_70,param_2);
      puVar4 = &local_70;
    }
    local_90 = (undefined8 ******)*puVar4;
    uStack_88 = puVar4[1];
    local_80 = puVar4[2];
    uStack_78 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    if ((bVar9) && (0xf < uStack_a0)) {
      pvVar6 = local_b8;
      if ((0xfff < uStack_a0 + 1) &&
         (pvVar6 = *(void **)((longlong)local_b8 + -8),
         0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pvVar6)))) goto LAB_1802bad88;
      free(pvVar6);
      uVar14 = _DAT_1802eace0;
      uVar8 = _UNK_1802eace8;
    }
    if ((!bVar9) && (0xf < uStack_58)) {
      pvVar6 = local_70;
      if ((0xfff < uStack_58 + 1) &&
         (pvVar6 = *(void **)((longlong)local_70 + -8),
         0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar6)))) {
LAB_1802bad88:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar6);
      uVar14 = _DAT_1802eace0;
      uVar8 = _UNK_1802eace8;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_90);
      uVar14 = _DAT_1802eace0;
      uVar8 = _UNK_1802eace8;
    }
    plVar1 = *(longlong **)(param_1 + 0x188);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_90);
      uVar14 = _DAT_1802eace0;
      uVar8 = _UNK_1802eace8;
    }
    uVar3 = local_80;
    lVar2 = *(longlong *)(param_1 + 0x648);
    if (lVar2 != 0) {
      local_b8 = (undefined8 *****)0x0;
      uStack_b0 = (undefined8 *****)0x0;
      local_a8 = 0;
      uStack_a0 = 0;
      ppppppuVar7 = &local_90;
      if (0xf < uStack_78) {
        ppppppuVar7 = local_90;
      }
      if (0x7fffffffffffffff < local_80) {
                    /* WARNING: Subroutine does not return */
        FUN_1800782a0();
      }
      if (local_80 < 0x10) {
        local_a8 = local_80;
        uStack_a0 = 0xf;
        local_b8 = *ppppppuVar7;
        uStack_b0 = ppppppuVar7[1];
        uVar10 = *(undefined4 *)ppppppuVar7;
        uVar11 = *(undefined4 *)((longlong)ppppppuVar7 + 4);
        uVar12 = *(undefined4 *)(ppppppuVar7 + 1);
        uVar13 = *(undefined4 *)((longlong)ppppppuVar7 + 0xc);
      }
      else {
        uVar5 = local_80 | 0xf;
        uVar8 = 0x7fffffffffffffff;
        if ((uVar5 < 0x8000000000000000) && (uVar8 = uVar5, uVar5 < 0x16)) {
          uVar8 = 0x16;
        }
        local_b8 = (undefined8 *****)FUN_180074880(uVar8 + 1);
        local_a8 = uVar3;
        uStack_a0 = uVar8;
        memcpy(local_b8,ppppppuVar7,uVar3 + 1);
        uVar10 = (undefined4)local_b8;
        uVar11 = local_b8._4_4_;
        uVar12 = (undefined4)uStack_b0;
        uVar13 = uStack_b0._4_4_;
        uVar14 = _DAT_1802eace0;
        uVar8 = _UNK_1802eace8;
      }
      local_b8 = (undefined8 *****)((ulonglong)local_b8 & 0xffffffffffffff00);
      local_70 = (void *)CONCAT44(uVar11,uVar10);
      uStack_68 = CONCAT44(uVar13,uVar12);
      local_60 = local_a8;
      uStack_58 = uStack_a0;
      local_50 = 2;
      local_a8 = uVar14;
      uStack_a0 = uVar8;
      FUN_1802bbce0(lVar2,&local_70);
    }
    if (0xf < uStack_78) {
      ppppppuVar7 = local_90;
      if ((0xfff < uStack_78 + 1) &&
         (ppppppuVar7 = (undefined8 ******)local_90[-1],
         0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)ppppppuVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(ppppppuVar7);
    }
  }
  return;
}



// ===== FUN_1802baf40 @ 1802baf40 (size 278)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802baf40(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_res8 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((param_1 != 0) &&
     ((*(longlong *)(param_1 + 0x1c8) != 0 || (*(longlong *)(param_1 + 0x648) != 0)))) {
    local_88 = _DAT_1802fad60;
    uStack_80 = _UNK_1802fad68;
    local_78 = DAT_1802fad70;
    puVar7 = (undefined4 *)FUN_1802c1480(&local_70);
    local_88._0_4_ = *puVar7;
    local_88._4_4_ = puVar7[1];
    uStack_80._0_4_ = puVar7[2];
    uStack_80._4_4_ = puVar7[3];
    local_78 = *(undefined8 *)(puVar7 + 4);
    uVar8 = (undefined4)local_78;
    uVar9 = (undefined4)((ulonglong)local_78 >> 0x20);
    plVar1 = *(longlong **)(param_1 + 0x1c8);
    if (plVar1 != (longlong *)0x0) {
      local_res8[0] = param_3;
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_88,local_res8);
      uVar8 = (undefined4)local_78;
      uVar9 = (undefined4)((ulonglong)local_78 >> 0x20);
    }
    uVar6 = uStack_80._4_4_;
    uVar5 = (undefined4)uStack_80;
    uVar4 = local_88._4_4_;
    uVar3 = (undefined4)local_88;
    lVar2 = *(longlong *)(param_1 + 0x648);
    if (lVar2 != 0) {
      local_88._0_4_ = 0;
      local_88._4_4_ = 0;
      uStack_80._0_4_ = 0;
      uStack_80._4_4_ = 0;
      local_78 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      local_40 = CONCAT44(uVar9,uVar8);
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      local_30 = 3;
      local_58 = param_3;
      local_50 = uVar3;
      uStack_4c = uVar4;
      uStack_48 = uVar5;
      uStack_44 = uVar6;
      local_38 = param_3;
      local_10 = param_3;
      FUN_1802c1750(&local_70);
      FUN_1802bbce0(lVar2,&local_50);
      FUN_1802c1750(&local_28);
    }
    FUN_1802c1750(&local_88);
  }
  return;
}



// ===== FUN_1802bb060 @ 1802bb060 (size 809)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802bb060(longlong param_1,char *param_2,int param_3,undefined8 param_4)

{
  longlong ****pppplVar1;
  longlong ****pppplVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong ****pppplVar8;
  longlong ****pppplVar9;
  longlong ***_Memory;
  undefined1 auStackY_118 [32];
  longlong ****local_e8;
  longlong ****pppplStack_e0;
  longlong ****local_d8;
  longlong ****pppplStack_d0;
  longlong ****local_c8;
  longlong ****pppplStack_c0;
  longlong ****local_b8;
  longlong ****local_b0;
  undefined8 local_a8;
  longlong ****local_a0;
  longlong ****local_98;
  undefined1 local_80;
  longlong ***local_78;
  longlong ***ppplStack_70;
  longlong ***local_68;
  longlong ***ppplStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStackY_118;
  if (param_1 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x108);
    local_a8 = param_4;
    if (((plVar5 != (longlong *)0x0) || (*(longlong *)(param_1 + 0x648) != 0)) ||
       (*(longlong *)(param_1 + 0x248) != 0)) {
      if (param_3 == 0) {
        strlen(param_2);
      }
      local_78 = (longlong ***)0x0;
      ppplStack_70 = (longlong ***)0x0;
      local_68 = (longlong ***)0x0;
      ppplStack_60 = (longlong ***)0x0;
      FUN_1800748f0(&local_78,param_2);
      pppplStack_c0 = (longlong ****)FUN_1802df708(0x30);
      if (pppplStack_c0 == (longlong ****)0x0) {
        pppplStack_c0 = (longlong ****)0x0;
      }
      else {
        *pppplStack_c0 = (longlong ***)0x0;
        pppplStack_c0[1] = (longlong ***)0x0;
        *(undefined4 *)(pppplStack_c0 + 1) = 1;
        *(undefined4 *)((longlong)pppplStack_c0 + 0xc) = 1;
        *pppplStack_c0 =
             (longlong ***)
             std::
             _Ref_count_obj2<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
             ::vftable;
        pppplStack_c0[2] = local_78;
        pppplStack_c0[3] = ppplStack_70;
        pppplStack_c0[4] = local_68;
        pppplStack_c0[5] = ppplStack_60;
        local_68 = _DAT_1802eace0;
        ppplStack_60 = _UNK_1802eace8;
        local_78 = (longlong ***)((ulonglong)local_78 & 0xffffffffffffff00);
      }
      local_c8 = pppplStack_c0 + 2;
      local_b8 = (longlong ****)&local_c8;
      pppplVar9 = (longlong ****)FUN_1802df708(0x88);
      local_d8 = pppplVar9;
      if (pppplVar9 == (longlong ****)0x0) {
        pppplVar9 = (longlong ****)0x0;
      }
      else {
        *pppplVar9 = (longlong ***)0x0;
        pppplVar9[1] = (longlong ***)0x0;
        *(undefined4 *)(pppplVar9 + 1) = 1;
        *(undefined4 *)((longlong)pppplVar9 + 0xc) = 1;
        *pppplVar9 = (longlong ***)std::_Ref_count_obj2<mqtt::message>::vftable;
        local_e8 = local_c8;
        pppplStack_e0 = pppplStack_c0;
        local_c8 = (longlong ****)0x0;
        pppplStack_c0 = (longlong ****)0x0;
        FUN_1802b4a80(pppplVar9 + 2,&local_e8);
      }
      pppplVar8 = pppplStack_c0;
      pppplVar1 = pppplVar9 + 2;
      local_b8 = pppplVar1;
      local_b0 = pppplVar9;
      if (pppplStack_c0 != (longlong ****)0x0) {
        LOCK();
        pppplVar2 = pppplStack_c0 + 1;
        iVar4 = *(int *)pppplVar2;
        *(int *)pppplVar2 = *(int *)pppplVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)**pppplStack_c0)(pppplStack_c0);
          LOCK();
          piVar3 = (int *)((longlong)pppplVar8 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (*(code *)(*pppplVar8)[1])(pppplVar8);
          }
        }
      }
      if (*(longlong *)(param_1 + 0x248) != 0) {
        if (pppplVar9 != (longlong ****)0x0) {
          LOCK();
          *(int *)(pppplVar9 + 1) = *(int *)(pppplVar9 + 1) + 1;
          UNLOCK();
        }
        local_e8 = (longlong ****)&local_d8;
        plVar6 = *(longlong **)(param_1 + 0x248);
        local_d8 = pppplVar1;
        pppplStack_d0 = pppplVar9;
        if (plVar6 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar6 + 0x10))(plVar6,&local_d8);
        pppplVar8 = pppplStack_d0;
        if (pppplStack_d0 != (longlong ****)0x0) {
          LOCK();
          pppplVar2 = pppplStack_d0 + 1;
          iVar4 = *(int *)pppplVar2;
          *(int *)pppplVar2 = *(int *)pppplVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (*(code *)**pppplStack_d0)(pppplStack_d0);
            LOCK();
            piVar3 = (int *)((longlong)pppplVar8 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (*(code *)(*pppplVar8)[1])(pppplVar8);
            }
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        lVar7 = *plVar5;
        if (pppplVar9 != (longlong ****)0x0) {
          LOCK();
          *(int *)(pppplVar9 + 1) = *(int *)(pppplVar9 + 1) + 1;
          UNLOCK();
        }
        local_e8 = pppplVar1;
        pppplStack_e0 = pppplVar9;
        (**(code **)(lVar7 + 0x18))(plVar5,&local_e8);
      }
      lVar7 = *(longlong *)(param_1 + 0x648);
      if (lVar7 != 0) {
        if (pppplVar9 != (longlong ****)0x0) {
          LOCK();
          *(int *)(pppplVar9 + 1) = *(int *)(pppplVar9 + 1) + 1;
          UNLOCK();
        }
        local_80 = 0;
        local_a0 = pppplVar1;
        local_98 = pppplVar9;
        FUN_1802bbce0(lVar7,&local_a0);
      }
      if (pppplVar9 != (longlong ****)0x0) {
        LOCK();
        pppplVar1 = pppplVar9 + 1;
        iVar4 = *(int *)pppplVar1;
        *(int *)pppplVar1 = *(int *)pppplVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)**pppplVar9)(pppplVar9);
          LOCK();
          piVar3 = (int *)((longlong)pppplVar9 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (*(code *)(*pppplVar9)[1])(pppplVar9);
          }
        }
      }
      if ((longlong ***)0xf < ppplStack_60) {
        _Memory = local_78;
        if ((0xfff < (longlong)ppplStack_60 + 1U) &&
           (_Memory = (longlong ***)local_78[-1],
           0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(_Memory);
      }
    }
    FUN_1802c3880(&local_a8);
    FUN_1802c3820(param_2);
  }
  return 1;
}



// ===== FUN_1802bb390 @ 1802bb390 (size 320)

undefined8
FUN_1802bb390(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_60 = *param_4;
  local_58 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  local_50 = *param_3;
  local_48 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  FUN_18011a8d0(&local_38,&local_50,&local_60,param_5,param_6,param_7);
  plVar5 = (longlong *)((longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + param_1 + -0x650);
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  uStack_20 = (undefined4)uStack_30;
  uStack_1c = uStack_30._4_4_;
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)(*plVar5 + 0x90))(plVar5,param_2,&local_28);
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_4[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_2;
}



// ===== FUN_1802bb4d0 @ 1802bb4d0 (size 255)

undefined8
FUN_1802bb4d0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_40 = *param_3;
  local_38 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  FUN_1802b9a10(&local_28,&local_40,param_4,param_5,param_6,param_7,param_8);
  plVar5 = (longlong *)((longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + param_1 + -0x650);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*plVar5 + 0x90))(plVar5,param_2,&local_18);
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_2;
}



// ===== FUN_1802bb5d0 @ 1802bb5d0 (size 315)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1802bb5d0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = _DAT_1802fad60;
  uStack_20 = _UNK_1802fad68;
  local_18 = DAT_1802fad70;
  local_60 = *param_3;
  local_58 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  FUN_1802b9a10(&local_48,&local_60,param_4,param_5,param_6,param_7,&local_28);
  FUN_1802c1750(&local_28);
  plVar5 = (longlong *)((longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + param_1 + -0x650);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*plVar5 + 0x88))(plVar5,param_2,&local_38,param_8,param_9);
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_2;
}



// ===== FUN_1802bb710 @ 1802bb710 (size 723)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1802bb710(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *plStack_160;
  undefined4 local_158;
  longlong *local_150;
  longlong local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  undefined8 *local_118;
  undefined1 local_108 [32];
  undefined4 local_e8;
  longlong *local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_188;
  local_158 = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_148 = *param_3;
  plStack_140 = (longlong *)param_3[1];
  local_120 = &local_148;
  local_138 = (longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1;
  local_130 = param_2;
  local_128 = param_3;
  puVar7 = (undefined8 *)FUN_1802df708(0x148);
  local_118 = puVar7;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 1) = 1;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    *puVar7 = std::_Ref_count_obj2<mqtt::delivery_token>::vftable;
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
      UNLOCK();
    }
    local_168 = local_148;
    plStack_160 = plStack_140;
    local_150 = &local_168;
    puVar9 = &DAT_1803c30e0;
    if (*(undefined8 **)(local_148 + 0x40) != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)(local_148 + 0x40);
    }
    FUN_1802b8270(puVar7 + 2,2,local_138,puVar9);
    puVar7[2] = mqtt::delivery_token::vftable;
    puVar7[0x27] = local_168;
    puVar7[0x28] = plStack_160;
  }
  plVar4 = plStack_140;
  *param_2 = (longlong)(puVar7 + 2);
  param_2[1] = (longlong)puVar7;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_140 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  local_158 = 7;
  pcVar3 = (code *)**(undefined8 **)(param_1 + -0x658);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_168 = *param_2;
  plStack_160 = (longlong *)param_2[1];
  (*pcVar3)(param_1 + -0x658,&local_168);
  FUN_1802c0b80(local_108,param_2,*(undefined4 *)(param_1 + -0x560));
  puVar7 = *(undefined8 **)(*param_3 + 0x40);
  puVar9 = &DAT_1803c30e0;
  if (puVar7 != (undefined8 *)0x0) {
    puVar9 = puVar7;
  }
  if (0xf < (ulonglong)puVar9[3]) {
    puVar9 = (undefined8 *)*puVar9;
  }
  iVar6 = FUN_1802c4170(*(undefined8 *)(param_1 + -0x5f8),puVar9,*param_3,local_108);
  if (iVar6 != 0) {
    uVar8 = FUN_1802b7da0(&local_168,param_2);
    FUN_18011d1c0(param_1 + -0x658,uVar8);
    FUN_1802b7ed0(local_88,iVar6);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_88,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_1802bc560(*param_2,local_e8);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*local_98 + 8))();
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_2;
}



// ===== FUN_1802bb9f0 @ 1802bb9f0 (size 743)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1802bb9f0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188;
  longlong *plStack_180;
  undefined4 local_178;
  longlong *local_170;
  longlong local_168;
  longlong *plStack_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  undefined8 *local_128;
  undefined1 local_118 [32];
  undefined4 local_f8;
  longlong *local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_1b8;
  local_150 = param_5;
  local_178 = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_168 = *param_3;
  plStack_160 = (longlong *)param_3[1];
  local_130 = &local_168;
  local_158 = (longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1;
  local_148 = param_4;
  local_140 = param_2;
  local_138 = param_3;
  puVar7 = (undefined8 *)FUN_1802df708(0x148);
  local_128 = puVar7;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 1) = 1;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    *puVar7 = std::_Ref_count_obj2<mqtt::delivery_token>::vftable;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
      UNLOCK();
    }
    local_188 = local_168;
    plStack_180 = plStack_160;
    local_170 = &local_188;
    puVar9 = &DAT_1803c30e0;
    if (*(undefined8 **)(local_168 + 0x40) != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)(local_168 + 0x40);
    }
    local_190 = local_150;
    local_198 = local_148;
    FUN_1802b8330(puVar7 + 2,2,local_158,puVar9);
    puVar7[2] = mqtt::delivery_token::vftable;
    puVar7[0x27] = local_188;
    puVar7[0x28] = plStack_180;
  }
  plVar4 = plStack_160;
  *param_2 = (longlong)(puVar7 + 2);
  param_2[1] = (longlong)puVar7;
  if (plStack_160 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_160 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_160)(plStack_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  local_178 = 7;
  pcVar3 = (code *)**(undefined8 **)(param_1 + -0x658);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_188 = *param_2;
  plStack_180 = (longlong *)param_2[1];
  (*pcVar3)(param_1 + -0x658,&local_188);
  FUN_1802c0b80(local_118,param_2,*(undefined4 *)(param_1 + -0x560));
  puVar7 = *(undefined8 **)(*param_3 + 0x40);
  puVar9 = &DAT_1803c30e0;
  if (puVar7 != (undefined8 *)0x0) {
    puVar9 = puVar7;
  }
  if (0xf < (ulonglong)puVar9[3]) {
    puVar9 = (undefined8 *)*puVar9;
  }
  iVar6 = FUN_1802c4170(*(undefined8 *)(param_1 + -0x5f8),puVar9,*param_3,local_118);
  if (iVar6 != 0) {
    uVar8 = FUN_1802b7da0(&local_188,param_2);
    FUN_18011d1c0(param_1 + -0x658,uVar8);
    FUN_1802b7ed0(local_98,iVar6);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_98,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_1802bc560(*param_2,local_f8);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*local_a8 + 8))();
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_2;
}



// ===== FUN_1802bbce0 @ 1802bbce0 (size 365)

void FUN_1802bbce0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined1 local_38 [32];
  
  lVar5 = param_1;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  uVar6 = 1;
  while (*(ulonglong *)(param_1 + 0xe0) <= *(ulonglong *)(param_1 + 0x110)) {
    if (*(char *)(param_1 + 0xe8) != '\0') goto LAB_1802bbe17;
    _Cnd_wait(param_1 + 0x98,param_1);
  }
  if (*(char *)(param_1 + 0xe8) == '\0') {
    if (*(ulonglong *)(param_1 + 0x100) <= *(longlong *)(param_1 + 0x110) + 1U) {
      FUN_1802b89a0(param_1 + 0xf0,1,param_3,param_4,lVar5,uVar6);
    }
    uVar3 = *(longlong *)(param_1 + 0x100) - 1;
    *(ulonglong *)(param_1 + 0x108) = *(ulonglong *)(param_1 + 0x108) & uVar3;
    uVar4 = *(longlong *)(param_1 + 0x108) + *(longlong *)(param_1 + 0x110);
    lVar5 = (uVar4 & uVar3) * 8;
    if (*(longlong *)(lVar5 + *(longlong *)(param_1 + 0xf8)) == 0) {
      uVar2 = FUN_1802df708(0x28);
      *(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0xf8)) = uVar2;
    }
    FUN_1802b7dd0(*(undefined8 *)
                   (*(longlong *)(param_1 + 0xf8) +
                   (*(longlong *)(param_1 + 0x100) - 1U & uVar4) * 8),param_2);
    *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + 1;
    _Cnd_signal(param_1 + 0x50);
    _Mtx_unlock(param_1);
    FUN_180119ba0(param_2);
    return;
  }
LAB_1802bbe17:
  FUN_1802b8180(local_38);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_1803b7080);
}



// ===== FUN_1802bbe50 @ 1802bbe50 (size 376)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1802bbe50(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong *local_90;
  longlong local_88;
  longlong lStack_80;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)(param_1 + -0x658);
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + -0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + -0x38) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)(param_1 + -0x40);
  *param_2 = lVar3;
  param_2[1] = *(longlong *)(param_1 + -0x38);
  local_98 = 1;
  local_90 = param_2;
  if (lVar3 == 0) {
    FUN_180075c00(&local_88,"Can\'t reconnect before a successful connect");
    FUN_1802b4780(local_68,0xffffffff,&local_88);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_68,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_1802bf670();
  pcVar4 = *(code **)(*plVar2 + 8);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_88 = *param_2;
  lStack_80 = param_2[1];
  (*pcVar4)(plVar2,&local_88);
  iVar5 = FUN_1802c4340(*(undefined8 *)(param_1 + -0x5f8),plVar2,FUN_1802ba8c0);
  if (iVar5 == 0) {
    iVar5 = FUN_1802c3c60(*(undefined8 *)(param_1 + -0x5f8));
    if (iVar5 == 0) {
      return param_2;
    }
  }
  pcVar4 = *(code **)(*plVar2 + 0x10);
  uVar6 = FUN_1802b7da0(&local_88,param_2);
  (*pcVar4)(plVar2,uVar6);
  FUN_1802b7ed0(local_68,iVar5);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_68,(ThrowInfo *)&DAT_1803b6f88);
}



// ===== FUN_1802bbfd0 @ 1802bbfd0 (size 690)

void FUN_1802bbfd0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  
  if (param_2 != 0) {
    lVar3 = param_1 + -0x648;
    lVar11 = lVar3;
    iVar10 = _Mtx_lock(lVar3);
    if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(param_1 + -0x5fc) == 0x7fffffff) {
      *(undefined4 *)(param_1 + -0x5fc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    bVar8 = true;
    for (plVar4 = (longlong *)**(longlong **)(param_1 + -0x20);
        plVar4 != *(longlong **)(param_1 + -0x20); plVar4 = (longlong *)*plVar4) {
      if (plVar4[2] == param_2) {
        if (plVar4[3] != 0) {
          LOCK();
          piVar2 = (int *)(plVar4[3] + 8);
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        plVar7 = (longlong *)plVar4[2];
        plVar5 = (longlong *)plVar4[3];
        *(longlong *)plVar4[1] = *plVar4;
        *(longlong *)(*plVar4 + 8) = plVar4[1];
        *(longlong *)(param_1 + -0x18) = *(longlong *)(param_1 + -0x18) + -1;
        plVar6 = (longlong *)plVar4[3];
        local_48 = plVar7;
        plStack_40 = plVar5;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        free(plVar4);
        if (*(longlong *)(param_1 + -0x550) != 0) {
          (**(code **)(*plVar7 + 0x68))(plVar7,&local_38,param_3,param_4,lVar11);
          if ((local_38 != 0) && (0 < *(int *)(local_38 + 0x18))) {
            plVar4 = *(longlong **)(param_1 + -0x550);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_180078070(1);
            }
            _Mtx_unlock(lVar3);
            bVar8 = false;
            lVar11 = *plVar4;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            local_58 = local_48;
            plStack_50 = plStack_40;
            (**(code **)(lVar11 + 0x20))(plVar4,&local_58);
          }
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_30 + 1;
            lVar11 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar2 = (int *)((longlong)local_30 + 0xc);
              iVar10 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*local_30 + 8))(local_30);
              }
            }
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar5 + 1;
          lVar11 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        goto LAB_1802bc231;
      }
    }
    for (plVar4 = (longlong *)**(longlong **)(param_1 + -0x30);
        plVar4 != *(longlong **)(param_1 + -0x30); plVar4 = (longlong *)*plVar4) {
      if (plVar4[2] == param_2) {
        *(longlong *)plVar4[1] = *plVar4;
        *(longlong *)(*plVar4 + 8) = plVar4[1];
        *(longlong *)(param_1 + -0x28) = *(longlong *)(param_1 + -0x28) + -1;
        plVar7 = (longlong *)plVar4[3];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar7 + 1;
          lVar11 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7);
            }
          }
        }
        free(plVar4);
        break;
      }
    }
LAB_1802bc231:
    if (bVar8) {
      _Mtx_unlock(lVar3);
    }
  }
  return;
}



// ===== FUN_1802bc290 @ 1802bc290 (size 292)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bc290(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_98;
  iVar1 = _Mtx_lock(param_1 + -0x648);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + -0x5fc) == 0x7fffffff) {
    *(undefined4 *)(param_1 + -0x5fc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  *(undefined8 *)(param_1 + -0x550) = param_2;
  _Mtx_unlock(param_1 + -0x648);
  iVar1 = FUN_1802c4340(*(undefined8 *)(param_1 + -0x5f8),param_1 + -0x658,FUN_1802ba8c0);
  if (iVar1 != 0) {
    FUN_1802c4340(*(undefined8 *)(param_1 + -0x5f8),0,0);
    FUN_18007fdb0(local_68,param_1 + -0x648);
    *(undefined8 *)(param_1 + -0x550) = 0;
    FUN_1802b7ed0(local_58,iVar1);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_58,(ThrowInfo *)&DAT_1803b6f88);
  }
  local_78 = 0;
  FUN_1802c4270(*(undefined8 *)(param_1 + -0x5f8),param_1 + -0x658,FUN_1802bac30,FUN_1802bb060);
  return;
}



// ===== FUN_1802bc3c0 @ 1802bc3c0 (size 162)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bc3c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  FUN_1802b5f60(param_1 + 0x150);
  iVar2 = FUN_1802c43f0(*(undefined8 *)(param_1 + 0x60),param_1,FUN_1802bac30);
  if (iVar2 != 0) {
    FUN_1802b7ed0(local_58,iVar2);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_58,(ThrowInfo *)&DAT_1803b6f88);
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return;
}



// ===== FUN_1802bc470 @ 1802bc470 (size 233)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bc470(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_98 [7];
  longlong *local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_c8;
  local_60 = (longlong *)0x0;
  puVar1 = (undefined8 *)param_2[7];
  local_a8 = param_2;
  if (puVar1 != (undefined8 *)0x0) {
    local_60 = (longlong *)(**(code **)*puVar1)(puVar1,local_98);
  }
  FUN_1802b6110(local_98,param_1 + 0x210);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x20))(local_60,local_60 != local_98);
  }
  iVar3 = FUN_1802c4550(*(undefined8 *)(param_1 + 0x60),param_1,FUN_1802bb060);
  if (iVar3 != 0) {
    FUN_1802b7ed0(local_58,iVar3);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_58,(ThrowInfo *)&DAT_1803b6f88);
  }
  plVar2 = (longlong *)param_2[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_2);
    param_2[7] = 0;
  }
  return;
}



// ===== FUN_1802bc560 @ 1802bc560 (size 99)

void FUN_1802bc560(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  _Mtx_unlock(param_1 + 8);
  return;
}



// ===== FUN_1802bc5d0 @ 1802bc5d0 (size 101)

void FUN_1802bc5d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  _Mtx_unlock(param_1 + 8);
  return;
}



// ===== FUN_1802bc640 @ 1802bc640 (size 561)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bc640(longlong param_1)

{
  undefined8 *puVar1;
  void *_Memory;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 *local_78;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)
                (param_1 + -0x650 + (longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4)) + 200))
            ();
  puVar3 = (undefined4 *)FUN_1802df708(0x118);
  local_78 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *(undefined8 *)(puVar3 + 6) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 10) = 0;
    *(undefined8 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)(puVar3 + 0xe) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x12) = 0;
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    puVar3[0x12] = 0xffffffff;
    *puVar3 = 2;
    puVar3[0x13] = 0;
    *(undefined8 *)(puVar3 + 0x14) = 0;
    *(undefined8 *)(puVar3 + 0x16) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x1a) = 0;
    *(undefined8 *)(puVar3 + 0x1c) = 0;
    *(undefined8 *)(puVar3 + 0x1e) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x22) = 0;
    *(undefined8 *)(puVar3 + 0x24) = 0;
    *(undefined8 *)(puVar3 + 0x26) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x2a) = 0;
    *(undefined8 *)(puVar3 + 0x2c) = 0;
    *(undefined8 *)(puVar3 + 0x2e) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x32) = 0;
    *(undefined8 *)(puVar3 + 0x34) = 0;
    *(undefined8 *)(puVar3 + 0x36) = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
    *(undefined1 *)(puVar3 + 0x3a) = 0;
    puVar1 = (undefined8 *)(puVar3 + 0x3c);
    *puVar1 = 0;
    *(undefined8 *)(puVar3 + 0x3e) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x42) = 0;
    *(undefined8 *)(puVar3 + 0x44) = 0;
    puVar4 = (undefined8 *)FUN_1802df708(0x10);
    puVar4[1] = 0;
    *puVar1 = puVar4;
    *puVar4 = puVar1;
  }
  _Memory = *(void **)(param_1 + -0x10);
  *(undefined4 **)(param_1 + -0x10) = puVar3;
  if (_Memory != (void *)0x0) {
    FUN_180117ef0((longlong)_Memory + 0xf0);
    free(_Memory);
  }
  local_88 = 0;
  iVar2 = FUN_1802c4270(*(undefined8 *)(param_1 + -0x5f8),param_1 + -0x658,FUN_1802bac30,
                        FUN_1802bb060);
  if (iVar2 != 0) {
    FUN_1802b7ed0(local_68,iVar2);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_68,(ThrowInfo *)&DAT_1803b6f88);
  }
  iVar2 = FUN_1802c4340(*(undefined8 *)(param_1 + -0x5f8),param_1 + -0x658,FUN_1802ba8c0);
  if (iVar2 != 0) {
    FUN_1802b7ed0(local_68,iVar2);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_68,(ThrowInfo *)&DAT_1803b6f88);
  }
  iVar2 = FUN_1802c44a0(*(undefined8 *)(param_1 + -0x5f8),param_1 + -0x658,FUN_1802baf40);
  if (iVar2 != 0) {
    FUN_1802b7ed0(local_68,iVar2);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_68,(ThrowInfo *)&DAT_1803b6f88);
  }
  return;
}



// ===== FUN_1802bc880 @ 1802bc880 (size 64)

void FUN_1802bc880(longlong param_1)

{
  (**(code **)(*(longlong *)
                ((longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1) + 200))
            ();
  if (*(longlong *)(param_1 + -0x10) != 0) {
    FUN_1802b8ea0();
  }
  return;
}



// ===== FUN_1802bc8c0 @ 1802bc8c0 (size 801)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1802bc8c0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  void *_Memory;
  undefined1 auStackY_248 [32];
  undefined4 *local_210;
  longlong lStack_208;
  longlong *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  void *local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined1 local_148 [64];
  undefined1 local_108 [112];
  longlong *local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStackY_248;
  local_200 = param_2;
  FUN_1802b9bd0(param_2,1,param_1 + -0x650 + (longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4)
               );
  *(undefined8 *)(*param_2 + 0x100) = 0;
  pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 8);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_210 = (undefined4 *)*param_2;
  lStack_208 = param_2[1];
  (*pcVar2)(param_1 + -0x658,&local_210);
  local_210 = &local_1f8;
  local_1f8 = 0x5254514d;
  local_1f4 = 1;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0x4f53514d;
  local_1a0 = 0;
  local_19e = 0;
  local_19c = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = (longlong *)0x0;
  local_180 = _DAT_1802fad60;
  uStack_178 = _UNK_1802fad68;
  local_170 = DAT_1802fad70;
  local_168 = (void *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  FUN_1802c0e70(&local_1f8,*(undefined4 *)(param_1 + -0x560));
  FUN_1802c0f90(&local_1f8,param_2);
  FUN_1802c0f80(&local_1f8,param_5);
  FUN_1802bea50(&local_180,param_6);
  local_1c0 = local_180;
  uStack_1b8 = (undefined4)uStack_178;
  uStack_1b4 = uStack_178._4_4_;
  local_1b0 = local_170;
  FUN_1802c0cc0(local_108,&local_1f8);
  if (local_168 != (void *)0x0) {
    _Memory = local_168;
    if ((0xfff < (ulonglong)(((local_158 - (longlong)local_168) / 0xc) * 0xc)) &&
       (_Memory = *(void **)((longlong)local_168 + -8),
       0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    local_168 = (void *)0x0;
    uStack_160 = 0;
    local_158 = 0;
  }
  FUN_1802c1750(&local_180);
  if (local_188 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_188 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_188 + 8))();
    }
  }
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  iVar3 = FUN_1802c47b0(*(undefined8 *)(param_1 + -0x5f8),param_3,param_4,local_108);
  if (iVar3 != 0) {
    pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 0x10);
    uVar4 = FUN_1802b7da0(&local_210,param_2);
    (*pcVar2)(param_1 + -0x658,uVar4);
    FUN_1802b7ed0(local_148,iVar3);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_148,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_180119f20(local_78);
  FUN_1802c1750(local_90);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_98 + 8))();
    }
  }
  return param_2;
}



// ===== FUN_1802bcbf0 @ 1802bcbf0 (size 825)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1802bcbf0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  void *_Memory;
  undefined1 auStackY_248 [32];
  undefined4 *local_210;
  longlong lStack_208;
  longlong *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  void *local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined1 local_148 [64];
  undefined1 local_108 [112];
  longlong *local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStackY_248;
  local_200 = param_2;
  FUN_1802b9c60(param_2,1,param_1 + -0x650 + (longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4)
               );
  *(undefined8 *)(*param_2 + 0x100) = 0;
  pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 8);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_210 = (undefined4 *)*param_2;
  lStack_208 = param_2[1];
  (*pcVar2)(param_1 + -0x658,&local_210);
  local_210 = &local_1f8;
  local_1f8 = 0x5254514d;
  local_1f4 = 1;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0x4f53514d;
  local_1a0 = 0;
  local_19e = 0;
  local_19c = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = (longlong *)0x0;
  local_180 = _DAT_1802fad60;
  uStack_178 = _UNK_1802fad68;
  local_170 = DAT_1802fad70;
  local_168 = (void *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  FUN_1802c0e70(&local_1f8,*(undefined4 *)(param_1 + -0x560));
  FUN_1802c0f90(&local_1f8,param_2);
  FUN_1802c0f80(&local_1f8,param_7);
  FUN_1802bea50(&local_180,param_8);
  local_1c0 = local_180;
  uStack_1b8 = (undefined4)uStack_178;
  uStack_1b4 = uStack_178._4_4_;
  local_1b0 = local_170;
  FUN_1802c0cc0(local_108,&local_1f8);
  if (local_168 != (void *)0x0) {
    _Memory = local_168;
    if ((0xfff < (ulonglong)(((local_158 - (longlong)local_168) / 0xc) * 0xc)) &&
       (_Memory = *(void **)((longlong)local_168 + -8),
       0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    local_168 = (void *)0x0;
    uStack_160 = 0;
    local_158 = 0;
  }
  FUN_1802c1750(&local_180);
  if (local_188 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_188 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_188 + 8))();
    }
  }
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  iVar3 = FUN_1802c47b0(*(undefined8 *)(param_1 + -0x5f8),param_3,param_4,local_108);
  if (iVar3 != 0) {
    pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 0x10);
    uVar4 = FUN_1802b7da0(&local_210,param_2);
    (*pcVar2)(param_1 + -0x658,uVar4);
    FUN_1802b7ed0(local_148,iVar3);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_148,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_180119f20(local_78);
  FUN_1802c1750(local_90);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_98 + 8))();
    }
  }
  return param_2;
}



// ===== FUN_1802bcf30 @ 1802bcf30 (size 680)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1802bcf30(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined4 local_238;
  longlong local_230;
  longlong lStack_228;
  undefined8 local_218;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  undefined1 local_1f8 [64];
  undefined1 local_1b8 [112];
  longlong *local_148;
  undefined1 local_140 [24];
  undefined1 local_128 [32];
  undefined1 local_108 [112];
  longlong *local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_268;
  local_218 = param_6;
  local_238 = 0;
  uVar6 = ((longlong *)*param_3)[1] - *(longlong *)*param_3 >> 5;
  local_210 = param_4;
  local_208 = param_2;
  local_200 = param_3;
  if (uVar6 != param_4[1] - *param_4 >> 2) {
    FUN_1802b80f0(&local_230,"Collection sizes don\'t match");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_230,(ThrowInfo *)&DAT_1803b7018);
  }
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_230 = *param_3;
  lStack_228 = param_3[1];
  FUN_1802b9de0(param_2,1,(longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1
                ,&local_230);
  local_238 = 1;
  *(ulonglong *)(*param_2 + 0x100) = uVar6;
  pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 8);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_230 = *param_2;
  lStack_228 = param_2[1];
  (*pcVar2)(param_1 + -0x658,&local_230);
  lVar4 = FUN_1802b81d0(local_108,*(undefined4 *)(param_1 + -0x560));
  FUN_1802c0f90(lVar4,param_2);
  FUN_1802c0ec0(lVar4,param_5);
  FUN_1802bea50(lVar4 + 0x78,local_218);
  *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar4 + 0x78);
  *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar4 + 0x7c);
  *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar4 + 0x80);
  *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(lVar4 + 0x84);
  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar4 + 0x88);
  FUN_1802c0cc0(local_1b8,lVar4);
  local_238 = 3;
  FUN_180119f20(local_78);
  FUN_1802c1750(local_90);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_98 + 8))();
    }
  }
  local_248 = local_1b8;
  iVar3 = FUN_1802c4830(*(undefined8 *)(param_1 + -0x5f8),uVar6 & 0xffffffff,
                        *(undefined8 *)(*param_3 + 0x18),*local_210);
  if (iVar3 != 0) {
    pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 0x10);
    uVar5 = FUN_1802b7da0(&local_230,param_2);
    (*pcVar2)(param_1 + -0x658,uVar5);
    FUN_1802b7ed0(local_1f8,iVar3);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1f8,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_180119f20(local_128);
  FUN_1802c1750(local_140);
  if (local_148 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_148 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_148 + 8))();
    }
  }
  FUN_180076c90(param_3);
  return param_2;
}



// ===== FUN_1802bd1e0 @ 1802bd1e0 (size 704)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1802bd1e0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined8 local_240;
  undefined4 local_238;
  longlong local_230;
  longlong lStack_228;
  undefined8 local_218;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  undefined1 local_1f8 [64];
  undefined1 local_1b8 [112];
  longlong *local_148;
  undefined1 local_140 [24];
  undefined1 local_128 [32];
  undefined1 local_108 [112];
  longlong *local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_268;
  local_218 = param_8;
  local_238 = 0;
  uVar6 = ((longlong *)*param_3)[1] - *(longlong *)*param_3 >> 5;
  local_210 = param_4;
  local_208 = param_2;
  local_200 = param_3;
  if (uVar6 != param_4[1] - *param_4 >> 2) {
    FUN_1802b80f0(&local_230,"Collection sizes don\'t match");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_230,(ThrowInfo *)&DAT_1803b7018);
  }
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_230 = *param_3;
  lStack_228 = param_3[1];
  local_240 = param_6;
  local_248 = (undefined1 *)param_5;
  FUN_1802b9ed0(param_2,1,(longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1
                ,&local_230);
  local_238 = 1;
  *(ulonglong *)(*param_2 + 0x100) = uVar6;
  pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 8);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_230 = *param_2;
  lStack_228 = param_2[1];
  (*pcVar2)(param_1 + -0x658,&local_230);
  lVar4 = FUN_1802b81d0(local_108,*(undefined4 *)(param_1 + -0x560));
  FUN_1802c0f90(lVar4,param_2);
  FUN_1802c0ec0(lVar4,param_7);
  FUN_1802bea50(lVar4 + 0x78,local_218);
  *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar4 + 0x78);
  *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar4 + 0x7c);
  *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar4 + 0x80);
  *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(lVar4 + 0x84);
  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar4 + 0x88);
  FUN_1802c0cc0(local_1b8,lVar4);
  local_238 = 3;
  FUN_180119f20(local_78);
  FUN_1802c1750(local_90);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_98 + 8))();
    }
  }
  local_248 = local_1b8;
  iVar3 = FUN_1802c4830(*(undefined8 *)(param_1 + -0x5f8),uVar6 & 0xffffffff,
                        *(undefined8 *)(*param_3 + 0x18),*local_210);
  if (iVar3 != 0) {
    pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 0x10);
    uVar5 = FUN_1802b7da0(&local_230,param_2);
    (*pcVar2)(param_1 + -0x658,uVar5);
    FUN_1802b7ed0(local_1f8,iVar3);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1f8,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_180119f20(local_128);
  FUN_1802c1750(local_140);
  if (local_148 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_148 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_148 + 8))();
    }
  }
  FUN_180076c90(param_3);
  return param_2;
}



// ===== FUN_1802bd4b0 @ 1802bd4b0 (size 273)

undefined8 FUN_1802bd4b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  
  lVar2 = *(longlong *)(param_1 + -0x10);
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    local_res10 = param_2;
    local_res18 = lVar2;
    iVar4 = _Mtx_lock(lVar2);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(lVar2 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(lVar2 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    if (*(longlong *)(lVar2 + 0x110) == 0) {
      _Mtx_unlock(lVar2);
      uVar5 = 0;
    }
    else {
      lVar3 = *(longlong *)
               (*(longlong *)(lVar2 + 0xf8) +
               (*(longlong *)(lVar2 + 0x100) - 1U & *(ulonglong *)(lVar2 + 0x108)) * 8);
      if (lVar3 != param_2) {
        local_res8 = param_2;
        FUN_1802b77c0((longlong)*(char *)(lVar3 + 0x20) + 1,&local_res8);
      }
      FUN_180119ba0(*(undefined8 *)
                     (*(longlong *)(lVar2 + 0xf8) +
                     (*(longlong *)(lVar2 + 0x100) - 1U & *(ulonglong *)(lVar2 + 0x108)) * 8));
      plVar1 = (longlong *)(lVar2 + 0x110);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        *(undefined8 *)(lVar2 + 0x108) = 0;
      }
      else {
        *(longlong *)(lVar2 + 0x108) = *(longlong *)(lVar2 + 0x108) + 1;
      }
      _Cnd_signal(lVar2 + 0x98);
      _Mtx_unlock(lVar2);
      uVar5 = 1;
    }
  }
  return uVar5;
}



// ===== FUN_1802bd5e0 @ 1802bd5e0 (size 574)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802bd5e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *plStack_a0;
  char local_88;
  undefined8 local_80;
  longlong *plStack_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + -0x10) == 0) {
    FUN_180075c00(&local_80,"Consumer not started");
    FUN_1802b4780(local_58,0xffffffff,&local_80);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_58,(ThrowInfo *)&DAT_1803b6f88);
  }
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  local_88 = '\0';
  plVar6 = (longlong *)((longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1);
  cVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,&local_a8);
  do {
    if (cVar5 == '\0') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(local_88) {
      case '\0':
switchD_1802bd78e_caseD_0:
        plVar6 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_a0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
              return 0;
            }
          }
        }
        break;
      default:
switchD_1802bd78e_caseD_1:
        FUN_180078180(&local_a8);
        return 0;
      case '\x03':
switchD_1802bd78e_caseD_3:
        FUN_1802c1750(&local_a8);
        break;
      case '\x04':
        break;
      }
switchD_1802bd78e_caseD_4:
      return 0;
    }
    if (local_88 == '\0') {
      FUN_180080710(param_2,&local_a8);
LAB_1802bd6e9:
      plVar6 = plStack_a0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(local_88) {
      case '\0':
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_a0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        break;
      default:
        FUN_180078180(&local_a8);
        break;
      case '\x03':
        FUN_1802c1750(&local_a8);
        break;
      case '\x04':
        break;
      case '\x05':
      case '\n':
        goto switchD_1802bd78e_caseD_4;
      case '\x06':
        goto switchD_1802bd78e_caseD_0;
      case '\a':
      case '\b':
        goto switchD_1802bd78e_caseD_1;
      case '\t':
        goto switchD_1802bd78e_caseD_3;
      }
      return 1;
    }
    if ((byte)(local_88 - 2U) < 3) {
      local_80 = 0;
      plStack_78 = (longlong *)0x0;
      FUN_180080690(param_2,&local_80);
      plVar6 = plStack_78;
      if (plStack_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_78 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_78)(plStack_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      goto LAB_1802bd6e9;
    }
    plVar6 = (longlong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1);
    cVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,&local_a8);
  } while( true );
}



// ===== FUN_1802bd850 @ 1802bd850 (size 116)

undefined1 FUN_1802bd850(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = _Mtx_lock(param_1 + 8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  if (*(char *)(param_1 + 0x108) != '\0') {
    FUN_1802b8e30(param_1);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x108);
  _Mtx_unlock(param_1 + 8);
  return uVar1;
}



// ===== FUN_1802bd8d0 @ 1802bd8d0 (size 759)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1802bd8d0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  void *_Memory;
  undefined1 auStackY_238 [32];
  undefined4 *local_200;
  longlong lStack_1f8;
  longlong *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined1 local_18e;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  void *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined1 local_138 [64];
  undefined1 local_f8 [112];
  longlong *local_88;
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStackY_238;
  local_1f0 = param_2;
  FUN_1802b9bd0(param_2,3,param_1 + -0x650 + (longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4)
               );
  *(undefined8 *)(*param_2 + 0x100) = 0;
  pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 8);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_200 = (undefined4 *)*param_2;
  lStack_1f8 = param_2[1];
  (*pcVar2)(param_1 + -0x658,&local_200);
  local_200 = &local_1e8;
  local_1e8 = 0x5254514d;
  local_1e4 = 1;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0x4f53514d;
  local_190 = 0;
  local_18e = 0;
  local_18c = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = (longlong *)0x0;
  local_170 = _DAT_1802fad60;
  uStack_168 = _UNK_1802fad68;
  local_160 = DAT_1802fad70;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  local_148 = 0;
  FUN_1802c0e70(&local_1e8,*(undefined4 *)(param_1 + -0x560));
  FUN_1802c0f90(&local_1e8,param_2);
  FUN_1802bea50(&local_170,param_4);
  local_1b0 = local_170;
  uStack_1a8 = (undefined4)uStack_168;
  uStack_1a4 = uStack_168._4_4_;
  local_1a0 = local_160;
  FUN_1802c0cc0(local_f8,&local_1e8);
  if (local_158 != (void *)0x0) {
    _Memory = local_158;
    if ((0xfff < (ulonglong)(((local_148 - (longlong)local_158) / 0xc) * 0xc)) &&
       (_Memory = *(void **)((longlong)local_158 + -8),
       0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    local_158 = (void *)0x0;
    uStack_150 = 0;
    local_148 = 0;
  }
  FUN_1802c1750(&local_170);
  if (local_178 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_178 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_178 + 8))();
    }
  }
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  iVar3 = FUN_1802c4c50(*(undefined8 *)(param_1 + -0x5f8),param_3,local_f8);
  if (iVar3 != 0) {
    pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 0x10);
    uVar4 = FUN_1802b7da0(&local_200,param_2);
    (*pcVar2)(param_1 + -0x658,uVar4);
    FUN_1802b7ed0(local_138,iVar3);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_138,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_180119f20(local_68);
  FUN_1802c1750(local_80);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_88 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_88 + 8))();
    }
  }
  return param_2;
}



// ===== FUN_1802bdbd0 @ 1802bdbd0 (size 770)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1802bdbd0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  void *_Memory;
  undefined1 auStackY_238 [32];
  undefined4 *local_200;
  undefined8 uStack_1f8;
  undefined8 *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined1 local_18e;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  void *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined1 local_138 [64];
  undefined1 local_f8 [112];
  longlong *local_88;
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStackY_238;
  local_1f0 = param_2;
  FUN_1802b9c60(param_2,3,param_1 + -0x650 + (longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4)
               );
  pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 8);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_200 = (undefined4 *)*param_2;
  uStack_1f8 = param_2[1];
  (*pcVar2)(param_1 + -0x658,&local_200);
  local_200 = &local_1e8;
  local_1e8 = 0x5254514d;
  local_1e4 = 1;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0x4f53514d;
  local_190 = 0;
  local_18e = 0;
  local_18c = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = (longlong *)0x0;
  local_170 = _DAT_1802fad60;
  uStack_168 = _UNK_1802fad68;
  local_160 = DAT_1802fad70;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  local_148 = 0;
  FUN_1802c0e70(&local_1e8,*(undefined4 *)(param_1 + -0x560));
  FUN_1802c0f90(&local_1e8,param_2);
  FUN_1802bea50(&local_170,param_6);
  local_1b0 = local_170;
  uStack_1a8 = (undefined4)uStack_168;
  uStack_1a4 = uStack_168._4_4_;
  local_1a0 = local_160;
  FUN_1802c0cc0(local_f8,&local_1e8);
  if (local_158 != (void *)0x0) {
    _Memory = local_158;
    if ((0xfff < (ulonglong)(((local_148 - (longlong)local_158) / 0xc) * 0xc)) &&
       (_Memory = *(void **)((longlong)local_158 + -8),
       0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    local_158 = (void *)0x0;
    uStack_150 = 0;
    local_148 = 0;
  }
  FUN_1802c1750(&local_170);
  if (local_178 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_178 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_178 + 8))();
    }
  }
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  iVar3 = FUN_1802c4c50(*(undefined8 *)(param_1 + -0x5f8),param_3,local_f8);
  if (iVar3 != 0) {
    pcVar2 = *(code **)(*(longlong *)(param_1 + -0x658) + 0x10);
    uVar4 = FUN_1802b7da0(&local_200,param_2);
    (*pcVar2)(param_1 + -0x658,uVar4);
    FUN_1802b7ed0(local_138,iVar3);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_138,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_180119f20(local_68);
  FUN_1802c1750(local_80);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_88 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_88 + 8))();
    }
  }
  return param_2;
}



// ===== FUN_1802bdee0 @ 1802bdee0 (size 875)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1802bdee0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  void *_Memory;
  ulonglong uVar8;
  undefined1 auStackY_258 [32];
  undefined4 *local_228;
  longlong lStack_220;
  undefined4 local_218;
  longlong *local_210;
  longlong *local_208;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  void *local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined1 local_148 [64];
  undefined1 local_108 [112];
  longlong *local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStackY_258;
  local_218 = 0;
  uVar8 = ((longlong *)*param_3)[1] - *(longlong *)*param_3 >> 5;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_228 = (undefined4 *)*param_3;
  lStack_220 = param_3[1];
  local_210 = param_2;
  local_208 = param_3;
  FUN_1802b9de0(param_2,3,(longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1
               );
  local_218 = 1;
  *(ulonglong *)(*param_2 + 0x100) = uVar8;
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x658) + 8);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_228 = (undefined4 *)*param_2;
  lStack_220 = param_2[1];
  (*pcVar3)(param_1 + -0x658,&local_228);
  local_228 = &local_1f8;
  local_1f8 = 0x5254514d;
  local_1f4 = 1;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0x4f53514d;
  local_1a0 = 0;
  local_19e = 0;
  local_19c = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = (longlong *)0x0;
  local_180 = _DAT_1802fad60;
  uStack_178 = _UNK_1802fad68;
  local_170 = DAT_1802fad70;
  local_168 = (void *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  FUN_1802c0e70(&local_1f8,*(undefined4 *)(param_1 + -0x560));
  FUN_1802c0f90(&local_1f8,param_2);
  FUN_1802bea50(&local_180,param_4);
  local_1c0 = local_180;
  uStack_1b8 = (undefined4)uStack_178;
  uStack_1b4 = uStack_178._4_4_;
  local_1b0 = local_170;
  FUN_1802c0cc0(local_108,&local_1f8);
  local_218 = 3;
  if (local_168 != (void *)0x0) {
    _Memory = local_168;
    if ((0xfff < (ulonglong)(((local_158 - (longlong)local_168) / 0xc) * 0xc)) &&
       (_Memory = *(void **)((longlong)local_168 + -8),
       0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    local_168 = (void *)0x0;
    uStack_160 = 0;
    local_158 = 0;
  }
  FUN_1802c1750(&local_180);
  if (local_188 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_188 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*local_188 + 8))();
    }
  }
  iVar6 = FUN_1802c4cc0(*(undefined8 *)(param_1 + -0x5f8),uVar8 & 0xffffffff,
                        *(undefined8 *)(*param_3 + 0x18),local_108);
  if (iVar6 != 0) {
    pcVar3 = *(code **)(*(longlong *)(param_1 + -0x658) + 0x10);
    uVar7 = FUN_1802b7da0(&local_228,param_2);
    (*pcVar3)(param_1 + -0x658,uVar7);
    FUN_1802b7ed0(local_148,iVar6);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_148,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_180119f20(local_78);
  FUN_1802c1750(local_90);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*local_98 + 8))();
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_2;
}



// ===== FUN_1802be250 @ 1802be250 (size 896)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1802be250(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  void *_Memory;
  ulonglong uVar8;
  undefined1 auStackY_258 [32];
  undefined4 *local_228;
  longlong lStack_220;
  undefined4 local_218;
  longlong *local_210;
  longlong *local_208;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  void *local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined1 local_148 [64];
  undefined1 local_108 [112];
  longlong *local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStackY_258;
  local_218 = 0;
  uVar8 = ((longlong *)*param_3)[1] - *(longlong *)*param_3 >> 5;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_228 = (undefined4 *)*param_3;
  lStack_220 = param_3[1];
  local_210 = param_2;
  local_208 = param_3;
  FUN_1802b9ed0(param_2,3,(longlong)*(int *)(*(longlong *)(param_1 + -0x650) + 4) + -0x650 + param_1
               );
  local_218 = 1;
  *(ulonglong *)(*param_2 + 0x100) = uVar8;
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x658) + 8);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_228 = (undefined4 *)*param_2;
  lStack_220 = param_2[1];
  (*pcVar3)(param_1 + -0x658,&local_228);
  local_228 = &local_1f8;
  local_1f8 = 0x5254514d;
  local_1f4 = 1;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0x4f53514d;
  local_1a0 = 0;
  local_19e = 0;
  local_19c = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = (longlong *)0x0;
  local_180 = _DAT_1802fad60;
  uStack_178 = _UNK_1802fad68;
  local_170 = DAT_1802fad70;
  local_168 = (void *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  FUN_1802c0e70(&local_1f8,*(undefined4 *)(param_1 + -0x560));
  FUN_1802c0f90(&local_1f8,param_2);
  FUN_1802bea50(&local_180,param_6);
  local_1c0 = local_180;
  uStack_1b8 = (undefined4)uStack_178;
  uStack_1b4 = uStack_178._4_4_;
  local_1b0 = local_170;
  FUN_1802c0cc0(local_108,&local_1f8);
  local_218 = 3;
  if (local_168 != (void *)0x0) {
    _Memory = local_168;
    if ((0xfff < (ulonglong)(((local_158 - (longlong)local_168) / 0xc) * 0xc)) &&
       (_Memory = *(void **)((longlong)local_168 + -8),
       0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    local_168 = (void *)0x0;
    uStack_160 = 0;
    local_158 = 0;
  }
  FUN_1802c1750(&local_180);
  if (local_188 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_188 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*local_188 + 8))();
    }
  }
  iVar6 = FUN_1802c4cc0(*(undefined8 *)(param_1 + -0x5f8),uVar8 & 0xffffffff,
                        *(undefined8 *)(*param_3 + 0x18),local_108);
  if (iVar6 != 0) {
    pcVar3 = *(code **)(*(longlong *)(param_1 + -0x658) + 0x10);
    uVar7 = FUN_1802b7da0(&local_228,param_2);
    (*pcVar3)(param_1 + -0x658,uVar7);
    FUN_1802b7ed0(local_148,iVar6);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_148,(ThrowInfo *)&DAT_1803b6f88);
  }
  FUN_180119f20(local_78);
  FUN_1802c1750(local_90);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*local_98 + 8))();
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_2;
}



// ===== FUN_1802be5e0 @ 1802be5e0 (size 180)

undefined4 FUN_1802be5e0(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong local_res8;
  longlong local_18;
  undefined1 local_10;
  
  lVar1 = param_1 + 8;
  local_10 = 0;
  local_18 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  local_10 = 1;
  local_res8 = (longlong)param_2;
  cVar2 = FUN_1802b7c00(param_1 + 0x58,&local_18,&local_res8,param_1);
  if (cVar2 == '\0') {
    _Mtx_unlock(lVar1);
    return 0;
  }
  FUN_1802b8e30(param_1);
  _Mtx_unlock(lVar1);
  return 1;
}



// ===== FUN_1802be6a0 @ 1802be6a0 (size 85)

void FUN_1802be6a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1802be6a0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// ===== FUN_1802be700 @ 1802be700 (size 628)

longlong * FUN_1802be700(longlong *param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  uint uStack_20;
  undefined4 uStack_1c;
  
  param_1 = (longlong *)*param_1;
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    iVar2 = (int)param_3[4];
    iVar7 = *param_4;
    if (param_3 == (longlong *)*param_1) {
      if (iVar7 < iVar2) {
        *param_2 = (longlong)param_3;
        *(undefined4 *)(param_2 + 1) = 1;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      goto LAB_1802be894;
    }
    if (iVar7 < iVar2) {
      plVar4 = (longlong *)*param_3;
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar4[2] + 0x19);
        plVar5 = (longlong *)plVar4[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x19);
          plVar4 = plVar5;
          plVar5 = (longlong *)plVar5[2];
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar6 = (longlong *)param_3[1];
        plVar5 = param_3;
        while ((plVar4 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)*plVar4))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar6 = (longlong *)plVar4[1];
          plVar5 = plVar4;
        }
        if (*(char *)((longlong)plVar5 + 0x19) != '\0') {
          plVar4 = plVar5;
        }
      }
      if ((int)plVar4[4] < iVar7) {
        cVar1 = *(char *)(plVar4[2] + 0x19);
        *(undefined1 *)(param_2 + 2) = 0;
        if (cVar1 == '\0') {
          *param_2 = (longlong)param_3;
          *(undefined4 *)(param_2 + 1) = 1;
          return param_2;
        }
        *param_2 = (longlong)plVar4;
        *(undefined4 *)(param_2 + 1) = 0;
        return param_2;
      }
      goto LAB_1802be894;
    }
    if (iVar7 <= iVar2) {
      *(undefined4 *)(param_2 + 1) = 0;
      *param_2 = (longlong)param_3;
      *(undefined1 *)(param_2 + 2) = 1;
      return param_2;
    }
    plVar4 = (longlong *)param_3[2];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x19);
      plVar5 = (longlong *)*plVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar4 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
    }
    else {
      plVar4 = (longlong *)param_3[1];
      if (*(char *)((longlong)plVar4 + 0x19) != '\0') goto LAB_1802be91c;
      plVar5 = param_3;
      plVar6 = plVar4;
      do {
        plVar4 = plVar6;
        if (plVar5 != (longlong *)plVar6[2]) break;
        plVar4 = (longlong *)plVar6[1];
        plVar5 = plVar6;
        plVar6 = plVar4;
      } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
    }
    if ((*(char *)((longlong)plVar4 + 0x19) != '\0') || (iVar7 < (int)plVar4[4])) {
LAB_1802be91c:
      cVar1 = *(char *)(param_3[2] + 0x19);
      *(undefined1 *)(param_2 + 2) = 0;
      if (cVar1 == '\0') {
        *param_2 = (longlong)plVar4;
        *(undefined4 *)(param_2 + 1) = 1;
        return param_2;
      }
      *param_2 = (longlong)param_3;
      *(undefined4 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  else if ((*(char *)(param_1[1] + 0x19) != '\0') ||
          (iVar7 = *param_4, *(int *)(param_1[2] + 0x20) < iVar7)) {
    *param_2 = param_1[2];
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1802be894:
  plVar4 = (longlong *)param_1[1];
  uStack_20 = 0;
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar5 = plVar4;
  while (plVar6 = plVar4, cVar1 == '\0') {
    bVar3 = iVar7 <= (int)plVar6[4];
    if (bVar3) {
      plVar4 = plVar6;
      param_1 = plVar6;
    }
    else {
      plVar4 = plVar6 + 2;
    }
    uStack_20 = (uint)bVar3;
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar4 = (longlong *)*plVar4;
    plVar5 = plVar6;
  }
  if ((*(char *)((longlong)param_1 + 0x19) == '\0') && ((int)param_1[4] <= *param_4)) {
    *param_2 = (longlong)param_1;
    *(undefined4 *)(param_2 + 1) = 2;
    *(undefined1 *)(param_2 + 2) = 1;
    return param_2;
  }
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = (longlong)plVar5;
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  return param_2;
}



// ===== FUN_1802be9a0 @ 1802be9a0 (size 92)

void FUN_1802be9a0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_1802be6a0(param_1,param_1,_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



// ===== FUN_1802bea00 @ 1802bea00 (size 79)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802bea00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1802c1750();
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = param_2[2];
    uVar1 = _UNK_1802fad68;
    *param_2 = _DAT_1802fad60;
    param_2[1] = uVar1;
    param_2[2] = DAT_1802fad70;
  }
  return param_1;
}



// ===== FUN_1802bea50 @ 1802bea50 (size 69)

undefined8 * FUN_1802bea50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_28 [32];
  
  if (param_2 != param_1) {
    FUN_1802c1750();
    puVar3 = (undefined8 *)FUN_1802c1480(local_28,param_2);
    uVar2 = puVar3[1];
    uVar1 = puVar3[2];
    *param_1 = *puVar3;
    param_1[1] = uVar2;
    param_1[2] = uVar1;
  }
  return param_1;
}



// ===== FUN_1802beaa0 @ 1802beaa0 (size 210)

undefined8 *
FUN_1802beaa0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = mqtt::token::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 2;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  param_1[0x15] = param_3;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xf;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1b) = param_4;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



// ===== FUN_1802beb80 @ 1802beb80 (size 323)

undefined8 *
FUN_1802beb80(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = mqtt::token::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 2;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  param_1[0x15] = param_3;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xf;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (param_4[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_4[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x1c] = *param_4;
  param_1[0x1d] = param_4[1];
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}



// ===== FUN_1802becd0 @ 1802becd0 (size 333)

undefined8 *
FUN_1802becd0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = mqtt::token::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 2;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  param_1[0x15] = param_3;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xf;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (param_4[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_4[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x1c] = *param_4;
  param_1[0x1d] = param_4[1];
  param_1[0x1e] = param_5;
  param_1[0x1f] = param_6;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}



// ===== FUN_1802bee40 @ 1802bee40 (size 75)

undefined8 * FUN_1802bee40(undefined8 *param_1,ulonglong param_2)

{
  FUN_180078180(param_1 + 4);
  *param_1 = mqtt::server_response::vftable;
  FUN_1802c1750(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



// ===== FUN_1802bee90 @ 1802bee90 (size 66)

undefined8 * FUN_1802bee90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = mqtt::server_response::vftable;
  FUN_1802c1750(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



// ===== FUN_1802beee0 @ 1802beee0 (size 75)

undefined8 * FUN_1802beee0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1800926f0(param_1 + 4);
  *param_1 = mqtt::server_response::vftable;
  FUN_1802c1750(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



// ===== FUN_1802bef30 @ 1802bef30 (size 424)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bef30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char *_Str;
  int iVar3;
  void *_Memory;
  undefined1 auStackY_88 [32];
  void *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStackY_88;
  lVar1 = param_1 + 8;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  plVar2 = *(longlong **)(param_1 + 0xf8);
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x28);
    _Str = *(char **)(param_2 + 0x30);
    if (_Str != (char *)0x0) {
      local_48 = (void *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      strlen(_Str);
      FUN_1800748f0(&local_48,_Str);
      FUN_180076f50(param_1 + 0xb8,&local_48);
      if (0xf < uStack_30) {
        _Memory = local_48;
        if ((0xfff < uStack_30 + 1) &&
           (_Memory = *(void **)((longlong)local_48 + -8),
           0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(_Memory);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x108) = 1;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180078070(1);
  }
  _Mtx_unlock(lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,param_1);
  }
  _Cnd_broadcast(param_1 + 0x58);
  (**(code **)**(undefined8 **)(param_1 + 0xa8))(*(undefined8 **)(param_1 + 0xa8),param_1);
  return;
}



// ===== FUN_1802bf0f0 @ 1802bf0f0 (size 426)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bf0f0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  void *_Memory;
  undefined1 auStackY_88 [32];
  void *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStackY_88;
  lVar1 = param_1 + 8;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  plVar2 = *(longlong **)(param_1 + 0xf8);
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = *param_2;
    *(undefined4 *)(param_1 + 0xb0) = param_2[1];
    *(undefined4 *)(param_1 + 0xb4) = 0;
    if (*(longlong *)(param_2 + 2) != 0) {
      local_48 = (void *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      strlen(*(char **)(param_2 + 2));
      FUN_1800748f0(&local_48,*(undefined8 *)(param_2 + 2));
      FUN_180076f50(param_1 + 0xb8,&local_48);
      if (0xf < uStack_30) {
        _Memory = local_48;
        if ((0xfff < uStack_30 + 1) &&
           (_Memory = *(void **)((longlong)local_48 + -8),
           0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(_Memory);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x108) = 1;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180078070(1);
  }
  _Mtx_unlock(lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,param_1);
  }
  _Cnd_broadcast(param_1 + 0x58);
  (**(code **)**(undefined8 **)(param_1 + 0xa8))(*(undefined8 **)(param_1 + 0xa8),param_1);
  return;
}



// ===== FUN_1802bf2b0 @ 1802bf2b0 (size 426)

void FUN_1802bf2b0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar1 = param_1 + 8;
  lVar4 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  plVar2 = *(longlong **)(param_1 + 0xf8);
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xc);
    iVar3 = *(int *)(param_1 + 0xa0);
    if (iVar3 == 0) {
      lVar6 = FUN_1802df708(0x48);
      uVar5 = 0;
      if (lVar6 != 0) {
        uVar5 = FUN_1802c0ff0(lVar6,param_2,param_3,param_4,lVar4);
      }
      puVar7 = *(undefined8 **)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x110) = uVar5;
    }
    else if (iVar3 == 1) {
      lVar4 = FUN_1802df708(0x38);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = FUN_1802c1190(lVar4,param_2);
      }
      puVar7 = *(undefined8 **)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x118) = uVar5;
    }
    else {
      if (iVar3 != 3) goto LAB_1802bf3d2;
      lVar4 = FUN_1802df708(0x38);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = FUN_1802c1370(lVar4,param_2);
      }
      puVar7 = *(undefined8 **)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = uVar5;
    }
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
LAB_1802bf3d2:
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0x108) = 1;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180078070(1);
  }
  _Mtx_unlock(lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
  }
  _Cnd_broadcast(param_1 + 0x58);
  (**(code **)**(undefined8 **)(param_1 + 0xa8))(*(undefined8 **)(param_1 + 0xa8),param_1);
  return;
}



// ===== FUN_1802bf470 @ 1802bf470 (size 493)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802bf470(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  lVar1 = param_1 + 8;
  lVar7 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  plVar2 = *(longlong **)(param_1 + 0xf8);
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xd8) = *param_2;
    iVar3 = *(int *)(param_1 + 0xa0);
    if (iVar3 == 0) {
      lVar7 = FUN_1802df708(0x48);
      if (lVar7 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1802c10e0(lVar7,param_2);
      }
      puVar8 = *(undefined8 **)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x110) = uVar6;
    }
    else if (iVar3 == 1) {
      lVar5 = FUN_1802df708(0x38);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1802c12a0(lVar5,*(undefined8 *)(param_1 + 0x100),param_2,param_4,lVar7);
      }
      puVar8 = *(undefined8 **)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x118) = uVar6;
    }
    else {
      if (iVar3 != 3) goto LAB_1802bf5dc;
      puVar4 = (undefined8 *)FUN_1802df708(0x38);
      if (puVar4 == (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x120) = 0;
      }
      else {
        *puVar4 = mqtt::server_response::vftable;
        uVar6 = _UNK_1802fad68;
        puVar4[1] = _DAT_1802fad60;
        puVar4[2] = uVar6;
        puVar4[3] = DAT_1802fad70;
        *puVar4 = mqtt::unsubscribe_response::vftable;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar8 = *(undefined8 **)(param_1 + 0x120);
        *(undefined8 **)(param_1 + 0x120) = puVar4;
      }
    }
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
LAB_1802bf5dc:
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0x108) = 1;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180078070(1);
  }
  _Mtx_unlock(lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
  }
  _Cnd_broadcast(param_1 + 0x58);
  (**(code **)**(undefined8 **)(param_1 + 0xa8))(*(undefined8 **)(param_1 + 0xa8),param_1);
  return;
}



// ===== FUN_1802bf670 @ 1802bf670 (size 119)

void FUN_1802bf670(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  *(undefined1 *)(param_1 + 0x108) = 0;
  puVar2 = (undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0xd0)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  _Mtx_unlock(param_1 + 8);
  return;
}



// ===== FUN_1802bf6f0 @ 1802bf6f0 (size 210)

void FUN_1802bf6f0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 8;
  lVar4 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  bVar2 = true;
  *(longlong **)(param_1 + 0xf8) = param_2;
  if (*(char *)(param_1 + 0x108) != '\0') {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180078070(1);
    }
    _Mtx_unlock(lVar1);
    bVar2 = false;
    if (*(int *)(param_1 + 0xb0) == 0) {
      (**(code **)(*param_2 + 0x10))();
    }
    else {
      (**(code **)(*param_2 + 8))(param_2,param_1,param_3,param_4,lVar4,0);
    }
  }
  if (bVar2) {
    _Mtx_unlock(lVar1);
  }
  return;
}



// ===== FUN_1802bf7d0 @ 1802bf7d0 (size 146)

void FUN_1802bf7d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  lVar1 = param_1 + 8;
  lVar4 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x54) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x54) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  uVar5 = 1;
  cVar2 = *(char *)(param_1 + 0x108);
  while (cVar2 == '\0') {
    _Cnd_wait(param_1 + 0x58,lVar1,param_3,param_4,lVar4,uVar5);
    cVar2 = *(char *)(param_1 + 0x108);
  }
  FUN_1802b8e30(param_1);
  _Mtx_unlock(lVar1);
  return;
}



// ===== FUN_1802bf870 @ 1802bf870 (size 156)

undefined8 * FUN_1802bf870(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1802df708(0x30);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = std::
              _Ref_count_obj2<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ::vftable;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    uVar1 = param_2[1];
    puVar2[2] = *param_2;
    puVar2[3] = uVar1;
    uVar1 = param_2[3];
    puVar2[4] = param_2[2];
    puVar2[5] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  *param_1 = puVar2 + 2;
  param_1[1] = puVar2;
  return param_1;
}



// ===== FUN_1802bf910 @ 1802bf910 (size 270)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802bf910(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Memory;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [16];
  undefined8 *local_38;
  void *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  uVar1 = _UNK_180381440;
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStackY_78;
  *param_1 = _DAT_180381438;
  param_1[1] = uVar1;
  uVar1 = _UNK_180381450;
  param_1[2] = _DAT_180381448;
  param_1[3] = uVar1;
  uVar1 = _UNK_180381460;
  param_1[4] = _DAT_180381458;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = _UNK_1802fad68;
  param_1[10] = _DAT_1802fad60;
  param_1[0xb] = uVar1;
  param_1[0xc] = DAT_1802fad70;
  uStack_28 = 0;
  local_20 = _DAT_1802eace0;
  uStack_18 = _UNK_1802eace8;
  local_30 = (void *)0x0;
  local_38 = param_1;
  uVar1 = FUN_1802bf870(local_48,&local_30);
  FUN_1802bfd10(param_1,uVar1);
  if (0xf < uStack_18) {
    _Memory = local_30;
    if ((0xfff < uStack_18 + 1) &&
       (_Memory = *(void **)((longlong)local_30 + -8),
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  return param_1;
}



// ===== FUN_1802bfa20 @ 1802bfa20 (size 177)

undefined8 * FUN_1802bfa20(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_2 != param_1) {
    uVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar5;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 3);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    uVar5 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar5;
    if (param_2[7] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[7] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_18 = param_2[6];
    uStack_10 = param_2[7];
    FUN_1802bfd10(0,&local_18);
    if (param_2[9] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[9] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_18 = param_2[8];
    uStack_10 = param_2[9];
    FUN_1802bfae0(param_1,&local_18);
    FUN_1802bea50(param_1 + 10,param_2 + 10);
  }
  return param_1;
}



// ===== FUN_1802bfae0 @ 1802bfae0 (size 557)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802bfae0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  void *_Memory;
  longlong *plVar8;
  longlong **pplVar9;
  ulonglong uVar10;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong uStack_58;
  
  uVar10 = _UNK_1802eace8;
  lVar7 = _DAT_1802eace0;
  plVar8 = (longlong *)*param_2;
  local_90 = param_2;
  if (plVar8 == (longlong *)0x0) {
    uStack_68 = 0;
    local_60 = _DAT_1802eace0;
    uStack_58 = _UNK_1802eace8;
    local_70 = (void *)0x0;
    local_88 = (longlong *)FUN_1802df708(0x30);
    if (local_88 == (longlong *)0x0) {
      local_88 = (longlong *)0x0;
      uVar10 = uStack_58;
    }
    else {
      *local_88 = 0;
      local_88[1] = 0;
      *(undefined4 *)(local_88 + 1) = 1;
      *(undefined4 *)((longlong)local_88 + 0xc) = 1;
      *local_88 = (longlong)
                  std::
                  _Ref_count_obj2<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                  ::vftable;
      *(undefined4 *)(local_88 + 2) = (undefined4)local_70;
      *(undefined4 *)((longlong)local_88 + 0x14) = local_70._4_4_;
      *(undefined4 *)(local_88 + 3) = (undefined4)uStack_68;
      *(undefined4 *)((longlong)local_88 + 0x1c) = uStack_68._4_4_;
      local_88[4] = lVar7;
      local_88[5] = uVar10;
      local_70 = (void *)((ulonglong)local_70 & 0xffffffffffffff00);
      uVar10 = 0xf;
    }
    local_90 = local_88 + 2;
    pplVar9 = &local_90;
    bVar6 = false;
    bVar5 = true;
    bVar4 = true;
  }
  else {
    local_78 = (longlong *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    pplVar9 = &local_80;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    uVar10 = uStack_58;
    local_80 = plVar8;
  }
  FUN_180080690(param_1 + 0x40,pplVar9);
  plVar8 = local_88;
  if (bVar4) {
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
  }
  if ((bVar5) && (0xf < uVar10)) {
    _Memory = local_70;
    if ((0xfff < uVar10 + 1) &&
       (_Memory = *(void **)((longlong)local_70 + -8),
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  plVar8 = local_78;
  if ((bVar6) && (local_78 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x40);
  *(int *)(param_1 + 0x20) = (int)plVar8[2];
  if (0xf < (ulonglong)plVar8[3]) {
    plVar8 = (longlong *)*plVar8;
  }
  *(longlong **)(param_1 + 0x28) = plVar8;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  return;
}



// ===== FUN_1802bfd10 @ 1802bfd10 (size 550)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802bfd10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  void *_Memory;
  longlong **pplVar9;
  ulonglong uVar10;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong uStack_58;
  
  uVar10 = _UNK_1802eace8;
  lVar7 = _DAT_1802eace0;
  plVar8 = (longlong *)*param_2;
  local_90 = param_2;
  if (plVar8 == (longlong *)0x0) {
    uStack_68 = 0;
    local_60 = _DAT_1802eace0;
    uStack_58 = _UNK_1802eace8;
    local_70 = (void *)0x0;
    local_88 = (longlong *)FUN_1802df708(0x30);
    if (local_88 == (longlong *)0x0) {
      local_88 = (longlong *)0x0;
      uVar10 = uStack_58;
    }
    else {
      *local_88 = 0;
      local_88[1] = 0;
      *(undefined4 *)(local_88 + 1) = 1;
      *(undefined4 *)((longlong)local_88 + 0xc) = 1;
      *local_88 = (longlong)
                  std::
                  _Ref_count_obj2<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                  ::vftable;
      *(undefined4 *)(local_88 + 2) = (undefined4)local_70;
      *(undefined4 *)((longlong)local_88 + 0x14) = local_70._4_4_;
      *(undefined4 *)(local_88 + 3) = (undefined4)uStack_68;
      *(undefined4 *)((longlong)local_88 + 0x1c) = uStack_68._4_4_;
      local_88[4] = lVar7;
      local_88[5] = uVar10;
      local_70 = (void *)((ulonglong)local_70 & 0xffffffffffffff00);
      uVar10 = 0xf;
    }
    local_90 = local_88 + 2;
    pplVar9 = &local_90;
    bVar6 = false;
    bVar5 = true;
    bVar4 = true;
  }
  else {
    local_78 = (longlong *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    pplVar9 = &local_80;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    uVar10 = uStack_58;
    local_80 = plVar8;
  }
  FUN_180080690(param_1 + 0x30,pplVar9);
  plVar8 = local_88;
  if (bVar4) {
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
  }
  if ((bVar5) && (0xf < uVar10)) {
    _Memory = local_70;
    if ((0xfff < uVar10 + 1) &&
       (_Memory = *(void **)((longlong)local_70 + -8),
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  plVar8 = local_78;
  if ((bVar6) && (local_78 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (0xf < (ulonglong)plVar8[3]) {
    plVar8 = (longlong *)*plVar8;
  }
  *(longlong **)(param_1 + 8) = plVar8;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  return;
}



// ===== FUN_1802bff80 @ 1802bff80 (size 262)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802bff80(longlong *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  void *_Memory;
  bool bVar5;
  undefined1 auStackY_78 [32];
  void *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1803c3d80 ^ (ulonglong)auStackY_78;
  bVar5 = false;
  if ((param_1 != (longlong *)0x0) && (param_2 != (char *)0x0)) {
    pcVar1 = *(code **)(*param_1 + 0x20);
    local_40 = (void *)0x0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    strlen(param_2);
    FUN_1800748f0(&local_40,param_2);
    bVar5 = true;
    cVar3 = (*pcVar1)(param_1,&local_40);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_1802c0003;
    }
  }
  bVar2 = false;
LAB_1802c0003:
  if ((bVar5) && (0xf < uStack_28)) {
    _Memory = local_40;
    if ((0xfff < uStack_28 + 1) &&
       (_Memory = *(void **)((longlong)local_40 + -8),
       0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  if (bVar2) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}



// ===== FUN_1802c0090 @ 1802c0090 (size 392)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802c0090(longlong *param_1,char *param_2,undefined8 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  size_t sVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStackY_a8 [32];
  undefined8 ****local_78 [2];
  size_t local_68;
  ulonglong local_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStackY_a8;
  if ((((param_1 == (longlong *)0x0) || (param_2 == (char *)0x0)) || (param_3 == (undefined8 *)0x0))
     || (param_4 == (undefined4 *)0x0)) {
    uVar4 = 0xfffffffe;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x38);
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    sVar2 = strlen(param_2);
    FUN_1800748f0(&local_58,param_2,sVar2);
    (*pcVar1)(param_1,local_78);
    if (0xf < uStack_40) {
      pvVar3 = local_58;
      if ((0xfff < uStack_40 + 1) &&
         (pvVar3 = *(void **)((longlong)local_58 + -8),
         0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar3);
    }
    pvVar3 = (void *)FUN_1802c3bf0(local_68);
    *param_3 = pvVar3;
    ppppuVar5 = local_78;
    if (0xf < local_60) {
      ppppuVar5 = local_78[0];
    }
    memcpy(pvVar3,ppppuVar5,local_68);
    *param_4 = (int)local_68;
    if (0xf < local_60) {
      ppppuVar5 = local_78[0];
      if ((0xfff < local_60 + 1) &&
         (ppppuVar5 = (undefined8 ****)local_78[0][-1],
         0x1f < (ulonglong)((longlong)local_78[0] + (-8 - (longlong)ppppuVar5)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(ppppuVar5);
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_1802c0220 @ 1802c0220 (size 255)

undefined8 FUN_1802c0220(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char *_Dest;
  undefined8 uVar3;
  char *_Source;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_48;
  longlong local_40;
  
  if (((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) ||
     (param_3 == (undefined4 *)0x0)) {
    uVar3 = 0xfffffffe;
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1,&local_48);
    uVar5 = local_40 - local_48 >> 5;
    *param_3 = (int)uVar5;
    if (uVar5 == 0) {
      *param_2 = 0;
    }
    else {
      lVar2 = FUN_1802c3bf0(uVar5 * 8);
      *param_2 = lVar2;
      uVar4 = 0;
      if (uVar5 != 0) {
        lVar2 = 0;
        do {
          lVar1 = *(longlong *)(lVar2 + 0x10 + local_48);
          _Dest = (char *)FUN_1802c3bf0(lVar1 + 1);
          _Source = (char *)(local_48 + lVar2);
          if (0xf < *(ulonglong *)(_Source + 0x18)) {
            _Source = *(char **)_Source;
          }
          strncpy(_Dest,_Source,lVar1 + 1);
          _Dest[lVar1] = '\0';
          *(char **)(*param_2 + uVar4 * 8) = _Dest;
          uVar4 = uVar4 + 1;
          lVar2 = lVar2 + 0x20;
        } while (uVar4 < uVar5);
      }
    }
    FUN_180118bf0(&local_48);
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_1802c0320 @ 1802c0320 (size 409)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802c0320(undefined8 *param_1,char *param_2,char *param_3,longlong *param_4)

{
  code *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined1 auStackY_a8 [32];
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStackY_a8;
  if ((((param_1 == (undefined8 *)0x0) || (param_2 == (char *)0x0)) || (param_3 == (char *)0x0)) ||
     (param_4 == (longlong *)0x0)) {
    uVar3 = 0xfffffffe;
  }
  else {
    pcVar1 = *(code **)(*param_4 + 8);
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    sVar2 = strlen(param_3);
    FUN_1800748f0(&local_58,param_3,sVar2);
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    sVar2 = strlen(param_2);
    FUN_1800748f0(&local_78,param_2,sVar2);
    (*pcVar1)(param_4,&local_78);
    if (0xf < uStack_60) {
      pvVar4 = local_78;
      if ((0xfff < uStack_60 + 1) &&
         (pvVar4 = *(void **)((longlong)local_78 + -8),
         0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar4);
    }
    local_68 = _DAT_1802eace0;
    uStack_60 = _UNK_1802eace8;
    local_78 = (void *)((ulonglong)local_78 & 0xffffffffffffff00);
    if (0xf < uStack_40) {
      pvVar4 = local_58;
      if ((0xfff < uStack_40 + 1) &&
         (pvVar4 = *(void **)((longlong)local_58 + -8),
         0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar4);
    }
    *param_1 = param_4;
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_1802c04c0 @ 1802c04c0 (size 859)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001802c062c) */

undefined8
FUN_1802c04c0(longlong *param_1,char *param_2,int param_3,longlong param_4,longlong param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  size_t sVar4;
  undefined8 uVar5;
  void *_Memory;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStackY_c8 [32];
  void *local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStackY_c8;
  if ((((param_1 == (longlong *)0x0) || (param_3 < 1)) || (param_4 == 0)) || (param_5 == 0)) {
    uVar5 = 0xfffffffe;
  }
  else {
    local_98 = (void *)0x0;
    puStack_90 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0x0;
    iVar8 = 0;
    while (iVar8 < param_3) {
      lVar9 = (longlong)*(int *)(param_5 + (longlong)iVar8 * 4);
      uVar5 = *(undefined8 *)(param_4 + (longlong)iVar8 * 8);
      if (puStack_90 == local_88) {
        lVar7 = (longlong)puStack_90 - (longlong)local_98 >> 4;
        if (lVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_1800782c0();
        }
        uVar1 = lVar7 + 1;
        uVar6 = (longlong)local_88 - (longlong)local_98 >> 4;
        if (0xfffffffffffffff - (uVar6 >> 1) < uVar6) {
          uVar10 = 0xfffffffffffffff;
        }
        else {
          uVar6 = (uVar6 >> 1) + uVar6;
          uVar10 = uVar1;
          if (uVar1 <= uVar6) {
            uVar10 = uVar6;
          }
          if (0xfffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_180078030();
          }
        }
        pvVar3 = (void *)FUN_180074880(uVar10 * 0x10);
        *(undefined8 *)(lVar7 * 0x10 + (longlong)pvVar3) = uVar5;
        *(longlong *)(lVar7 * 0x10 + 8 + (longlong)pvVar3) = lVar9;
        memmove(pvVar3,local_98,(longlong)puStack_90 - (longlong)local_98);
        if (local_98 != (void *)0x0) {
          _Memory = local_98;
          if ((0xfff < ((longlong)local_88 - (longlong)local_98 & 0xfffffffffffffff0U)) &&
             (_Memory = *(void **)((longlong)local_98 + -8),
             0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          free(_Memory);
        }
        puStack_90 = (undefined8 *)((longlong)pvVar3 + uVar1 * 0x10);
        local_88 = (undefined8 *)(uVar10 * 0x10 + (longlong)pvVar3);
        iVar8 = iVar8 + 1;
        local_98 = pvVar3;
      }
      else {
        *puStack_90 = uVar5;
        puStack_90[1] = lVar9;
        puStack_90 = puStack_90 + 2;
        iVar8 = iVar8 + 1;
      }
    }
    pcVar2 = *(code **)(*param_1 + 0x30);
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    sVar4 = strlen(param_2);
    FUN_1800748f0(&local_58,param_2,sVar4);
    (*pcVar2)(param_1,&local_58);
    if (0xf < uStack_40) {
      pvVar3 = local_58;
      if ((0xfff < uStack_40 + 1) &&
         (pvVar3 = *(void **)((longlong)local_58 + -8),
         0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar3);
    }
    if (local_98 != (void *)0x0) {
      pvVar3 = local_98;
      if ((0xfff < ((longlong)local_88 - (longlong)local_98 & 0xfffffffffffffff0U)) &&
         (pvVar3 = *(void **)((longlong)local_98 + -8),
         0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar3);
    }
    uVar5 = 0;
  }
  return uVar5;
}



// ===== FUN_1802c0820 @ 1802c0820 (size 236)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802c0820(longlong *param_1,char *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  void *_Memory;
  undefined1 auStackY_68 [32];
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStackY_68;
  if ((param_1 == (longlong *)0x0) || (param_2 == (char *)0x0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x40);
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    strlen(param_2);
    FUN_1800748f0(&local_38,param_2);
    (*pcVar1)(param_1,&local_38);
    if (0xf < uStack_20) {
      _Memory = local_38;
      if ((0xfff < uStack_20 + 1) &&
         (_Memory = *(void **)((longlong)local_38 + -8),
         0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(_Memory);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_1802c0910 @ 1802c0910 (size 141)

void FUN_1802c0910(longlong param_1,longlong *param_2,int param_3)

{
  FUN_180080710(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*param_2 != 0) {
    if (param_3 < 5) {
      *(undefined1 **)(param_1 + 0x10) = &LAB_1802bf660;
      *(undefined1 **)(param_1 + 0x18) = &LAB_1802bf2a0;
    }
    else {
      *(undefined1 **)(param_1 + 0x48) = &LAB_1802bf460;
      *(undefined1 **)(param_1 + 0x50) = &LAB_1802bf0e0;
    }
  }
  return;
}



// ===== FUN_1802c09a0 @ 1802c09a0 (size 466)

void * FUN_1802c09a0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *pvVar5;
  void *_Dst;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  size_t _Size;
  longlong lVar9;
  
  lVar4 = *param_1;
  lVar8 = ((longlong)param_2 - lVar4) / 6 + ((longlong)param_2 - lVar4 >> 0x3f);
  lVar9 = (lVar8 >> 1) - (lVar8 >> 0x3f);
  lVar8 = (param_1[1] - lVar4) / 0xc;
  if (lVar8 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1800782c0();
  }
  uVar1 = lVar8 + 1;
  uVar3 = (param_1[2] - lVar4) / 0xc;
  if (0x1555555555555555 - (uVar3 >> 1) < uVar3) {
    uVar6 = 0x1555555555555555;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar6 = uVar1;
    if (uVar1 <= uVar3) {
      uVar6 = uVar3;
    }
    if (0x1555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180078030();
    }
  }
  _Dst = (void *)FUN_180074880(uVar6 * 0xc);
  *(undefined8 *)((longlong)_Dst + lVar9 * 0xc) = *param_3;
  pvVar2 = (void *)((longlong)_Dst + lVar9 * 0xc);
  *(undefined4 *)((longlong)pvVar2 + 8) = *(undefined4 *)(param_3 + 1);
  pvVar5 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar5;
    pvVar7 = _Dst;
    param_2 = pvVar5;
  }
  else {
    memmove(_Dst,pvVar5,(longlong)param_2 - (longlong)pvVar5);
    pvVar7 = (void *)((longlong)pvVar2 + 0xc);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar7,param_2,_Size);
  pvVar5 = (void *)*param_1;
  if (pvVar5 != (void *)0x0) {
    pvVar7 = pvVar5;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar5) / 0xc) * 0xc)) &&
       (pvVar7 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar7);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + uVar1 * 0xc);
  param_1[2] = (longlong)(uVar6 * 0xc + (longlong)_Dst);
  return pvVar2;
}



// ===== FUN_1802c0b80 @ 1802c0b80 (size 309)

undefined8 * FUN_1802c0b80(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uStack_54;
  uint uStack_34;
  uint uStack_20;
  
  uVar5 = 0;
  uStack_20 = uStack_20 & 0xff000000;
  *param_1 = 0x15254514d;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (ulonglong)uStack_54 << 0x20;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = (ulonglong)uStack_34 << 0x20;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x4f53514d;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(uint *)(param_1 + 0xb) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (param_3 < 5) {
    param_1[1] = &LAB_1802bf660;
    param_1[2] = &LAB_1802bf2a0;
  }
  else {
    param_1[5] = &LAB_1802bf460;
    param_1[6] = &LAB_1802bf0e0;
  }
  lVar3 = param_2[1];
  lVar6 = 0;
  if (lVar3 != 0) {
    uVar5 = *param_2;
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    lVar6 = lVar3;
  }
  plVar4 = (longlong *)param_1[0xe];
  param_1[0xd] = uVar5;
  param_1[0xe] = lVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  param_1[3] = *param_2;
  return param_1;
}



// ===== FUN_1802c0cc0 @ 1802c0cc0 (size 423)

undefined8 * FUN_1802c0cc0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  void *_Dst;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  size_t _Size;
  undefined1 local_38 [32];
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  uVar6 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar6;
  uVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0xb);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0xb) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar5;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (param_2[0xe] != 0) {
    param_1[0xd] = param_2[0xd];
    lVar8 = param_2[0xe];
    param_1[0xe] = lVar8;
    LOCK();
    piVar1 = (int *)(lVar8 + 0xc);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar7 = (undefined4 *)FUN_1802c1480(local_38,param_2 + 0xf);
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  uVar5 = puVar7[3];
  *(undefined4 *)(param_1 + 0xf) = *puVar7;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar5;
  param_1[0x11] = *(undefined8 *)(puVar7 + 4);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar2 = (longlong)(param_2[0x13] - param_2[0x12]) / 0xc;
  if (uVar2 != 0) {
    if (0x1555555555555555 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800782c0();
    }
    lVar8 = FUN_180074880(uVar2 * 0xc);
    param_1[0x12] = lVar8;
    param_1[0x13] = lVar8;
    param_1[0x14] = uVar2 * 0xc + lVar8;
    _Dst = (void *)param_1[0x12];
    _Size = param_2[0x13] - (longlong)param_2[0x12];
    memmove(_Dst,(void *)param_2[0x12],_Size);
    param_1[0x13] = (void *)((longlong)_Dst + ((longlong)_Size / 0xc) * 0xc);
  }
  param_1[7] = param_1[0xf];
  param_1[8] = param_1[0x10];
  param_1[9] = param_1[0x11];
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    param_1[0xc] = param_1[0x12];
  }
  return param_1;
}



// ===== FUN_1802c0e70 @ 1802c0e70 (size 70)

void FUN_1802c0e70(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)0x0;
  puVar1 = &LAB_1802bf660;
  if (4 < param_2) {
    puVar1 = (undefined1 *)0x0;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  puVar1 = &LAB_1802bf2a0;
  if (4 < param_2) {
    puVar1 = (undefined1 *)0x0;
  }
  *(undefined1 **)(param_1 + 0x10) = puVar1;
  puVar1 = (undefined1 *)0x0;
  if (4 < param_2) {
    puVar1 = &LAB_1802bf460;
  }
  *(undefined1 **)(param_1 + 0x28) = puVar1;
  if (4 < param_2) {
    puVar2 = &LAB_1802bf0e0;
  }
  *(undefined1 **)(param_1 + 0x30) = puVar2;
  return;
}



// ===== FUN_1802c0ec0 @ 1802c0ec0 (size 185)

void FUN_1802c0ec0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  plVar1 = (longlong *)(param_1 + 0x90);
  if (*plVar1 != *(longlong *)(param_1 + 0x98)) {
    *(longlong *)(param_1 + 0x98) = *plVar1;
  }
  puVar2 = (undefined8 *)param_2[1];
  for (puVar6 = (undefined8 *)*param_2; puVar6 != puVar2;
      puVar6 = (undefined8 *)((longlong)puVar6 + 0xc)) {
    puVar3 = *(undefined8 **)(param_1 + 0x98);
    if (puVar3 == *(undefined8 **)(param_1 + 0xa0)) {
      FUN_1802c09a0(plVar1,puVar3,puVar6);
    }
    else {
      *puVar3 = *puVar6;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
      *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 0xc;
    }
  }
  lVar4 = param_2[1];
  lVar5 = *param_2;
  *(longlong *)(param_1 + 0x60) = *plVar1;
  *(int *)(param_1 + 0x5c) = (int)((lVar4 - lVar5) / 0xc);
  return;
}



// ===== FUN_1802c0f90 @ 1802c0f90 (size 95)

void FUN_1802c0f90(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar3 = param_2[1];
  uVar5 = 0;
  lVar6 = 0;
  if (lVar3 != 0) {
    uVar5 = *param_2;
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    lVar6 = lVar3;
  }
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  plVar4 = *(longlong **)(param_1 + 0x70);
  *(longlong *)(param_1 + 0x70) = lVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  return;
}



// ===== FUN_1802c0ff0 @ 1802c0ff0 (size 225)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802c0ff0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  char *_Str;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  size_t sVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_38 = _DAT_1802fad60;
  uStack_30 = _UNK_1802fad68;
  local_28 = DAT_1802fad70;
  puVar4 = (undefined8 *)FUN_1802c1480(local_20,param_2 + 0x10);
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  uVar1 = puVar4[2];
  *param_1 = mqtt::server_response::vftable;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1802c1750(&local_38);
  *param_1 = mqtt::connect_response::vftable;
  _Str = *(char **)(param_2 + 0x28);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  sVar5 = strlen(_Str);
  FUN_1800748f0(param_1 + 4,_Str,sVar5);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x30);
  *(bool *)((longlong)param_1 + 0x44) = *(int *)(param_2 + 0x34) != 0;
  return param_1;
}



// ===== FUN_1802c10e0 @ 1802c10e0 (size 163)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802c10e0(undefined8 *param_1,longlong param_2)

{
  char *_Str;
  undefined8 uVar1;
  size_t sVar2;
  
  *param_1 = mqtt::server_response::vftable;
  uVar1 = _UNK_1802fad68;
  param_1[1] = _DAT_1802fad60;
  param_1[2] = uVar1;
  param_1[3] = DAT_1802fad70;
  *param_1 = mqtt::connect_response::vftable;
  _Str = *(char **)(param_2 + 8);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  sVar2 = strlen(_Str);
  FUN_1800748f0(param_1 + 4,_Str,sVar2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x10);
  *(bool *)((longlong)param_1 + 0x44) = *(int *)(param_2 + 0x14) != 0;
  return param_1;
}



// ===== FUN_1802c1190 @ 1802c1190 (size 272)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802c1190(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined4 local_res10 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  local_48 = _DAT_1802fad60;
  uStack_40 = _UNK_1802fad68;
  local_38 = DAT_1802fad70;
  puVar5 = (undefined8 *)FUN_1802c1480(local_30,param_2 + 0x10);
  uVar3 = *puVar5;
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  *param_1 = mqtt::server_response::vftable;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1802c1750(&local_48);
  *param_1 = mqtt::subscribe_response::vftable;
  iVar7 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (*(int *)(param_2 + 0x28) < 2) {
    local_res10[0] = *(undefined4 *)(param_2 + 0xc);
    FUN_1801169c0(param_1 + 4,0,local_res10);
  }
  else if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar6 = 0;
    do {
      local_res10[0] = *(undefined4 *)(lVar6 + *(longlong *)(param_2 + 0x30));
      puVar2 = (undefined4 *)param_1[5];
      if (puVar2 == (undefined4 *)param_1[6]) {
        FUN_1801169c0(param_1 + 4,puVar2,local_res10);
      }
      else {
        *puVar2 = local_res10[0];
        param_1[5] = param_1[5] + 4;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 4;
    } while (iVar7 < *(int *)(param_2 + 0x28));
  }
  return param_1;
}



// ===== FUN_1802c12a0 @ 1802c12a0 (size 203)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802c12a0(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res10 [2];
  
  *param_1 = mqtt::server_response::vftable;
  uVar2 = _UNK_1802fad68;
  param_1[1] = _DAT_1802fad60;
  param_1[2] = uVar2;
  param_1[3] = DAT_1802fad70;
  *param_1 = mqtt::subscribe_response::vftable;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_2 < 2) {
    local_res10[0] = *(undefined4 *)(param_3 + 8);
    FUN_1801169c0(param_1 + 4,0,local_res10);
  }
  else if (*(longlong *)(param_3 + 8) != 0) {
    do {
      local_res10[0] = *(undefined4 *)(*(longlong *)(param_3 + 8) + uVar3 * 4);
      puVar1 = (undefined4 *)param_1[5];
      if (puVar1 == (undefined4 *)param_1[6]) {
        FUN_1801169c0(param_1 + 4,puVar1,local_res10);
      }
      else {
        *puVar1 = local_res10[0];
        param_1[5] = param_1[5] + 4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return param_1;
}



// ===== FUN_1802c1370 @ 1802c1370 (size 272)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1802c1370(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined4 local_res10 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  local_48 = _DAT_1802fad60;
  uStack_40 = _UNK_1802fad68;
  local_38 = DAT_1802fad70;
  puVar5 = (undefined8 *)FUN_1802c1480(local_30,param_2 + 0x10);
  uVar3 = *puVar5;
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  *param_1 = mqtt::server_response::vftable;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1802c1750(&local_48);
  *param_1 = mqtt::unsubscribe_response::vftable;
  iVar7 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (*(int *)(param_2 + 0x28) < 2) {
    local_res10[0] = *(undefined4 *)(param_2 + 0xc);
    FUN_1801169c0(param_1 + 4,0,local_res10);
  }
  else if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar6 = 0;
    do {
      local_res10[0] = *(undefined4 *)(lVar6 + *(longlong *)(param_2 + 0x30));
      puVar2 = (undefined4 *)param_1[5];
      if (puVar2 == (undefined4 *)param_1[6]) {
        FUN_1801169c0(param_1 + 4,puVar2,local_res10);
      }
      else {
        *puVar2 = local_res10[0];
        param_1[5] = param_1[5] + 4;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 4;
    } while (iVar7 < *(int *)(param_2 + 0x28));
  }
  return param_1;
}



// ===== FUN_1802c1480 @ 1802c1480 (size 690)

int * FUN_1802c1480(int *param_1,int *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  int *piVar16;
  longlong lVar17;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1802c7f40("MQTTProperties_copy",0x1cb,3);
  iVar13 = 0;
  if (param_2 != (int *)0x0) {
    lVar17 = 0;
LAB_1802c14e0:
    uVar14 = 0;
    if (iVar13 < *param_2) {
      piVar16 = (int *)(*(longlong *)(param_2 + 4) + lVar17);
      uVar8 = uVar14;
      uVar11 = uVar14;
      do {
        if ((&DAT_1803c32d0)[uVar8 * 2] == *piVar16) {
          iVar7 = *(int *)(&DAT_1803c32d4 + uVar8 * 8);
          if (iVar7 < 0) {
            uVar15 = 0xfffffffe;
            goto LAB_1802c160d;
          }
          lVar9 = *(longlong *)(param_1 + 4);
          if (lVar9 == 0) {
            param_1[1] = 10;
            lVar9 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x78,400);
            *(longlong *)(param_1 + 4) = lVar9;
LAB_1802c156c:
            if (lVar9 == 0) {
LAB_1802c1607:
              uVar15 = 0xffffff9d;
              goto LAB_1802c160d;
            }
          }
          else {
            if (*param_1 != param_1[1]) goto LAB_1802c156c;
            iVar6 = param_1[1] + 10;
            param_1[1] = iVar6;
            lVar9 = FUN_1802c7d40("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x7d,lVar9,
                                  (longlong)iVar6 * 0x28);
            if (lVar9 == 0) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x80,
                            *(undefined8 *)(param_1 + 4));
              param_1[4] = 0;
              param_1[5] = 0;
              goto LAB_1802c1607;
            }
            *(longlong *)(param_1 + 4) = lVar9;
          }
          lVar12 = (longlong)*param_1;
          uVar15 = *(undefined8 *)piVar16;
          uVar5 = *(undefined8 *)(piVar16 + 2);
          *param_1 = *param_1 + 1;
          puVar1 = (undefined8 *)(lVar9 + lVar12 * 0x28);
          *puVar1 = uVar15;
          puVar1[1] = uVar5;
          iVar6 = piVar16[5];
          iVar3 = piVar16[6];
          iVar4 = piVar16[7];
          piVar2 = (int *)(lVar9 + 0x10 + lVar12 * 0x28);
          *piVar2 = piVar16[4];
          piVar2[1] = iVar6;
          piVar2[2] = iVar3;
          piVar2[3] = iVar4;
          *(undefined8 *)(lVar9 + 0x20 + lVar12 * 0x28) = *(undefined8 *)(piVar16 + 8);
          switch(iVar7) {
          case 0:
            iVar13 = iVar13 + 1;
            param_1[2] = param_1[2] + 2;
            lVar17 = lVar17 + 0x28;
            break;
          case 1:
            iVar13 = iVar13 + 1;
            param_1[2] = param_1[2] + 3;
            lVar17 = lVar17 + 0x28;
            break;
          case 2:
            iVar13 = iVar13 + 1;
            param_1[2] = param_1[2] + 5;
            lVar17 = lVar17 + 0x28;
            break;
          case 3:
            iVar7 = FUN_1802c5750(piVar16[2]);
            iVar13 = iVar13 + 1;
            param_1[2] = param_1[2] + iVar7 + 1;
            lVar17 = lVar17 + 0x28;
            break;
          case 4:
          case 5:
          case 6:
            iVar6 = piVar16[2];
            uVar14 = (ulonglong)(iVar6 + 2U);
            uVar15 = FUN_1802c2030(piVar16 + 2);
            *(undefined8 *)(*(longlong *)(param_1 + 4) + -0x18 + (longlong)*param_1 * 0x28) = uVar15
            ;
            if (iVar7 == 6) {
              uVar14 = (ulonglong)(iVar6 + 2U + piVar16[6] + 2);
              uVar15 = FUN_1802c2030(piVar16 + 6);
              *(undefined8 *)(*(longlong *)(param_1 + 4) + -8 + (longlong)*param_1 * 0x28) = uVar15;
            }
          default:
            iVar13 = iVar13 + 1;
            param_1[2] = param_1[2] + (int)uVar14 + 1;
            lVar17 = lVar17 + 0x28;
          }
          goto LAB_1802c14e0;
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar8 = uVar8 + 1;
      } while (uVar10 < 0x1b);
      uVar15 = 0xfffffffe;
LAB_1802c160d:
      FUN_1802c6d90(5,0xffffffff,"Error from MQTTProperties add %d",uVar15);
      iVar13 = iVar13 + 1;
      lVar17 = lVar17 + 0x28;
      goto LAB_1802c14e0;
    }
  }
  FUN_1802c8030("MQTTProperties_copy",0x1d4,0,3);
  return param_1;
}



// ===== FUN_1802c1750 @ 1802c1750 (size 319)

void FUN_1802c1750(int *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_1802c7f40("MQTTProperties_free",0x1ab,3);
  if (param_1 != (int *)0x0) {
    iVar4 = 0;
    if (0 < *param_1) {
      lVar5 = 0;
      do {
        uVar3 = 0;
        lVar2 = 0;
        do {
          if ((&DAT_1803c32d0)[lVar2 * 2] == *(int *)(*(longlong *)(param_1 + 4) + lVar5)) {
            iVar1 = *(int *)(&DAT_1803c32d4 + lVar2 * 8);
            if ((((iVar1 == 4) || (iVar1 == 5)) || (iVar1 == 6)) &&
               (FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x1b8,
                              *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x10 + lVar5)),
               iVar1 == 6)) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x1ba,
                            *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x20 + lVar5));
            }
            break;
          }
          uVar3 = uVar3 + 1;
          lVar2 = lVar2 + 1;
        } while (uVar3 < 0x1b);
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0x28;
      } while (iVar4 < *param_1);
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x1bf);
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  FUN_1802c8030("MQTTProperties_free",0x1c2,0,3);
  return;
}



// ===== FUN_1802c1890 @ 1802c1890 (size 278)

ulonglong FUN_1802c1890(int *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  uVar2 = 0;
  iVar5 = 0;
  iVar6 = 0;
  if (param_1 == (int *)0x0) {
    return 0xffffffffff676981;
  }
  lVar4 = 0;
  lVar7 = 0;
  do {
    if (*param_1 <= lVar4) {
      return 0xffffffffff676981;
    }
    lVar1 = *(longlong *)(param_1 + 4);
    if (*(int *)(lVar7 + lVar1) == param_2) {
      if (-1 < iVar5) {
        piVar3 = &DAT_1803c32d0;
        while (*piVar3 != *(int *)(lVar7 + lVar1)) {
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
          if (0x1a < uVar2) {
            return 0xfffffffffff0bdc1;
          }
        }
        iVar5 = *(int *)(&DAT_1803c32d4 + (longlong)(int)uVar2 * 8);
        if (iVar5 == 0) {
          return (ulonglong)*(byte *)(lVar1 + 8 + (longlong)iVar6 * 0x28);
        }
        if (iVar5 == 1) {
          return (ulonglong)*(ushort *)(lVar1 + 8 + (longlong)iVar6 * 0x28);
        }
        if ((iVar5 == 2) || (iVar5 == 3)) {
          return (ulonglong)*(uint *)(lVar1 + 8 + (longlong)iVar6 * 0x28);
        }
        return 0xfffffffffff0bdc1;
      }
      iVar5 = iVar5 + 1;
    }
    iVar6 = iVar6 + 1;
    lVar4 = lVar4 + 1;
    lVar7 = lVar7 + 0x28;
  } while( true );
}



// ===== FUN_1802c1a20 @ 1802c1a20 (size 1007)

int FUN_1802c1a20(int *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int local_res10 [2];
  longlong local_res18;
  int local_res20 [2];
  
  local_res20[0] = 0;
  local_res10[0] = 0;
  local_res18 = param_3;
  FUN_1802c7f40("MQTTProperties_read",0x140,3);
  lVar9 = *param_2;
  if (param_3 - lVar9 < 1) {
LAB_1802c1ccf:
    lVar9 = 0;
    if ((local_res20[0] != 1) && (*(longlong *)(param_1 + 4) != 0)) {
      FUN_1802c7f40("MQTTProperties_free",0x1ab,3);
      iVar6 = 0;
      if (0 < *param_1) {
        do {
          uVar7 = 0;
          lVar12 = 0;
          do {
            if ((&DAT_1803c32d0)[lVar12 * 2] == *(int *)(*(longlong *)(param_1 + 4) + lVar9)) {
              iVar8 = *(int *)(&DAT_1803c32d4 + lVar12 * 8);
              if ((((iVar8 == 4) || (iVar8 == 5)) || (iVar8 == 6)) &&
                 (FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x1b8,
                                *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x10 + lVar9)),
                 iVar8 == 6)) {
                FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x1ba,
                              *(undefined8 *)(lVar9 + 0x20 + *(longlong *)(param_1 + 4)));
              }
              break;
            }
            uVar7 = uVar7 + 1;
            lVar12 = lVar12 + 1;
          } while (uVar7 < 0x1b);
          iVar6 = iVar6 + 1;
          lVar9 = lVar9 + 0x28;
        } while (iVar6 < *param_1);
      }
      if (*(longlong *)(param_1 + 4) != 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x1bf);
      }
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      FUN_1802c8030("MQTTProperties_free",0x1c2,0,3);
    }
  }
  else {
    iVar6 = FUN_1802c5780(lVar9,local_res10);
    *param_2 = iVar6 + lVar9;
    param_1[2] = local_res10[0];
    if (local_res10[0] != 0) {
      plVar1 = (longlong *)(param_1 + 4);
      do {
        uVar10 = 0;
        if (*param_1 == param_1[1]) {
          iVar6 = param_1[1] + 10;
          param_1[1] = iVar6;
          if (iVar6 == 10) {
            lVar9 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x14e,400);
          }
          else {
            lVar9 = FUN_1802c7d40("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x151,*plVar1);
            if (lVar9 == 0) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x154,*plVar1);
              *plVar1 = 0;
              goto LAB_1802c1ae7;
            }
          }
          *plVar1 = lVar9;
        }
LAB_1802c1ae7:
        if (*plVar1 == 0) {
          local_res20[0] = -99;
          goto LAB_1802c1dda;
        }
        puVar2 = (uint *)(*plVar1 + (longlong)*param_1 * 0x28);
        puVar2[0] = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        bVar3 = FUN_1802c6ab0(param_2);
        *puVar2 = (uint)bVar3;
        uVar11 = uVar10;
        while ((&DAT_1803c32d0)[uVar11 * 2] != (uint)bVar3) {
          uVar7 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar7;
          uVar11 = uVar11 + 1;
          if (0x1a < uVar7) goto switchD_1802c1b9f_default;
        }
        iVar6 = *(int *)(&DAT_1803c32d4 + uVar11 * 8);
        switch(iVar6) {
        case 0:
          uVar4 = FUN_1802c6ab0(param_2);
          *(undefined1 *)(puVar2 + 2) = uVar4;
          iVar8 = 2;
          break;
        case 1:
          uVar5 = FUN_1802c6ac0(param_2);
          *(undefined2 *)(puVar2 + 2) = uVar5;
          iVar8 = 3;
          break;
        case 2:
          uVar7 = FUN_1802c6ae0(param_2);
          puVar2[2] = uVar7;
          iVar8 = 5;
          break;
        case 3:
          iVar8 = FUN_1802c5780(*param_2,puVar2 + 2);
          *param_2 = *param_2 + (longlong)iVar8;
LAB_1802c1c55:
          if (iVar8 != -1) {
LAB_1802c1c5a:
            iVar8 = iVar8 + 1;
            if (0 < iVar8) {
              param_3 = local_res18;
              break;
            }
          }
        default:
switchD_1802c1b9f_default:
          if (local_res10[0] != 0) goto LAB_1802c1ccf;
          goto LAB_1802c1ca1;
        case 4:
        case 5:
        case 6:
          iVar8 = FUN_1802c53a0(puVar2 + 2,param_2,param_3);
          if (iVar8 != -1) {
            lVar9 = FUN_1802c2030(puVar2 + 2);
            *(longlong *)(puVar2 + 4) = lVar9;
            if (lVar9 != 0) {
              if (iVar6 != 6) goto LAB_1802c1c5a;
              iVar6 = FUN_1802c53a0(puVar2 + 6,param_2,local_res18);
              if (iVar6 == -1) {
                uVar14 = *(undefined8 *)(puVar2 + 4);
                uVar13 = 0x129;
              }
              else {
                iVar8 = iVar8 + iVar6;
                lVar9 = FUN_1802c2030(puVar2 + 6);
                *(longlong *)(puVar2 + 8) = lVar9;
                if (lVar9 != 0) goto LAB_1802c1c55;
                uVar14 = *(undefined8 *)(puVar2 + 4);
                uVar13 = 0x130;
              }
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProperties.c",uVar13,uVar14);
            }
          }
          goto switchD_1802c1b9f_default;
        }
        *param_1 = *param_1 + 1;
        local_res10[0] = local_res10[0] - iVar8;
      } while (local_res10[0] != 0);
    }
LAB_1802c1ca1:
    local_res20[0] = 1;
  }
LAB_1802c1dda:
  FUN_1802c8030("MQTTProperties_read",0x170,local_res20,3);
  return local_res20[0];
}



// ===== FUN_1802c1e30 @ 1802c1e30 (size 478)

int FUN_1802c1e30(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  lVar7 = *param_1;
  if (param_2 == (int *)0x0) {
    iVar1 = FUN_1802c57e0(lVar7);
    *param_1 = iVar1 + lVar7;
    return 1;
  }
  iVar2 = FUN_1802c57e0(lVar7,(longlong)param_2[2]);
  iVar6 = 0;
  iVar1 = 1;
  *param_1 = iVar2 + lVar7;
  if (0 < *param_2) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      piVar5 = (int *)(*(longlong *)(param_2 + 4) + lVar7);
      iVar2 = -1;
      lVar4 = 0;
      do {
        if ((&DAT_1803c32d0)[lVar4 * 2] == *piVar5) {
          uVar3 = *(uint *)(&DAT_1803c32d4 + lVar4 * 8);
          if (uVar3 < 7) {
            FUN_1802c6be0(param_1,(char)*piVar5);
            switch(uVar3) {
            case 0:
              FUN_1802c6be0(param_1,(char)piVar5[2]);
              iVar2 = 2;
              goto LAB_1802c1fd4;
            case 1:
              FUN_1802c6c50(param_1,(short)piVar5[2]);
              iVar2 = 3;
              goto LAB_1802c1fd4;
            case 2:
              FUN_1802c6c80(param_1,piVar5[2]);
              iVar2 = 5;
              goto LAB_1802c1fd4;
            case 3:
              iVar2 = FUN_1802c57e0(*param_1,piVar5[2]);
              *param_1 = *param_1 + (longlong)iVar2;
              break;
            default:
              local_38 = piVar5[2];
              iStack_34 = piVar5[3];
              iStack_30 = piVar5[4];
              iStack_2c = piVar5[5];
              FUN_1802c6cc0(param_1,&local_38);
              iVar2 = piVar5[2] + 2;
              break;
            case 6:
              local_38 = piVar5[2];
              iStack_34 = piVar5[3];
              iStack_30 = piVar5[4];
              iStack_2c = piVar5[5];
              FUN_1802c6cc0(param_1,&local_38);
              local_38 = piVar5[6];
              iStack_34 = piVar5[7];
              iStack_30 = piVar5[8];
              iStack_2c = piVar5[9];
              FUN_1802c6cc0(param_1,&local_38);
              iVar2 = piVar5[6] + 4 + piVar5[2];
            }
          }
          iVar2 = iVar2 + 1;
          if (iVar2 < 0) {
            return iVar2;
          }
          goto LAB_1802c1fd4;
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 1;
      } while (uVar3 < 0x1b);
      iVar2 = 0;
LAB_1802c1fd4:
      iVar1 = iVar1 + iVar2;
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x28;
    } while (iVar6 < *param_2);
  }
  return iVar1;
}



// ===== FUN_1802c2030 @ 1802c2030 (size 70)

void * FUN_1802c2030(int *param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProperties.c",0x42,(longlong)*param_1);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1);
  }
  return _Dst;
}



// ===== FUN_1802c20a0 @ 1802c20a0 (size 3499)

undefined4 FUN_1802c20a0(longlong param_1,char *param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  undefined4 uVar10;
  size_t sVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  void *_Src;
  undefined4 local_res8 [2];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  bVar6 = false;
  FUN_1802c7f40("MQTTAsync_connect",0x23d,3);
  if (param_2 == (char *)0x0) {
LAB_1802c2119:
    local_res8[0] = 0xfffffffa;
    goto LAB_1802c2e0d;
  }
  iVar7 = strncmp(param_2,"MQTC",4);
  if ((iVar7 == 0) && (*(uint *)(param_2 + 4) < 9)) {
    if (*(int *)(param_1 + 0xc) == 0) {
      if ((*(longlong *)(param_2 + 0x38) == 0) && (0 < *(int *)(param_2 + 0x58))) {
        iVar7 = 0;
        lVar13 = 0;
        do {
          pcVar2 = *(char **)(lVar13 + *(longlong *)(param_2 + 0x60));
          FUN_1802c4f90("checking %s\n",pcVar2);
          iVar8 = strncmp("ssl://",pcVar2,6);
          if ((((iVar8 == 0) || (iVar8 = strncmp("tls://",pcVar2,6), iVar8 == 0)) ||
              (iVar8 = strncmp("mqtts://",pcVar2,8), iVar8 == 0)) ||
             (iVar8 = strncmp("wss://",pcVar2,6), iVar8 == 0)) goto LAB_1802c2119;
          iVar7 = iVar7 + 1;
          lVar13 = lVar13 + 8;
        } while (iVar7 < *(int *)(param_2 + 0x58));
      }
    }
    else if (*(longlong *)(param_2 + 0x38) == 0) goto LAB_1802c2119;
    if (*(char **)(param_2 + 0x18) == (char *)0x0) {
LAB_1802c2241:
      if (((*(int *)(param_2 + 4) == 0) ||
          (pcVar2 = *(char **)(param_2 + 0x38), pcVar2 == (char *)0x0)) ||
         ((iVar7 = strncmp(pcVar2,"MQTS",4), iVar7 == 0 &&
          ((iVar7 = *(int *)(*(longlong *)(param_2 + 0x38) + 4), -1 < iVar7 && (iVar7 < 6)))))) {
        if ((4 < *(int *)(param_2 + 0x68)) && (*(int *)(*(longlong *)(param_1 + 0x18) + 0x120) < 5))
        {
          local_res8[0] = 0xfffffff0;
          goto LAB_1802c2e0d;
        }
        if (((*(longlong *)(param_2 + 0x20) != 0) && (iVar7 = FUN_1802d5050(), iVar7 == 0)) ||
           ((*(longlong *)(param_2 + 0x28) != 0 && (iVar7 = FUN_1802d5050(), iVar7 == 0)))) {
          local_res8[0] = 0xfffffffb;
          goto LAB_1802c2e0d;
        }
        if (*(int *)(param_2 + 0x68) < 5) {
          if ((5 < *(int *)(param_2 + 4)) &&
             ((((*(int *)(param_2 + 0x88) != 0 || (*(longlong *)(param_2 + 0xa8) != 0)) ||
               (*(longlong *)(param_2 + 0xa0) != 0)) ||
              ((*(longlong *)(param_2 + 0x90) != 0 || (*(longlong *)(param_2 + 0x98) != 0)))))) {
            local_res8[0] = 0xfffffff1;
            goto LAB_1802c2e0d;
          }
        }
        else {
          if (*(int *)(param_2 + 4) < 6) goto LAB_1802c2e08;
          if (*(int *)(param_2 + 0xc) != 0) {
            local_res8[0] = 0xfffffff1;
            goto LAB_1802c2e0d;
          }
        }
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x40);
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x48);
        if (5 < *(int *)(param_2 + 4)) {
          *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0xa0);
          *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa8);
        }
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0x50);
        *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x30);
        DVar9 = GetCurrentThreadId();
        if ((DVar9 != DAT_1803c9980) && (DVar9 != DAT_1803c9984)) {
          FUN_1802d08a0(DAT_1803c9988);
          bVar6 = true;
        }
        DAT_1803c9964 = 0;
        if (1 < DAT_1803c9978 - 1U) {
          DAT_1803c9978 = 1;
          FUN_1802cdd00(FUN_1802d3930,0);
        }
        if (1 < DAT_1803c997c - 1U) {
          DAT_1803c997c = 1;
          FUN_1802cdd00(FUN_1802d2550,param_1);
        }
        if (bVar6) {
          FUN_1802d3ee0(DAT_1803c9988);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa0) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x9c) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa0);
        FUN_1802d4f60(*(undefined4 *)(param_2 + 8));
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x20);
        *puVar1 = *puVar1 ^ (*(uint *)(*(longlong *)(param_1 + 0x18) + 0x20) ^
                            *(uint *)(param_2 + 0xc)) & 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa8) = *(undefined4 *)(param_2 + 0x10);
        if (*(int *)(param_2 + 4) < 3) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(param_2 + 0x68);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x120) = uVar10;
        if (3 < *(int *)(param_2 + 4)) {
          *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x6c);
          *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x70);
          *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x74);
        }
        if (6 < *(int *)(param_2 + 4)) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x90) = *(undefined8 *)(param_2 + 0xb0);
        }
        if (7 < *(int *)(param_2 + 4)) {
          if (*(longlong *)(param_2 + 0xb8) != 0) {
            lVar13 = *(longlong *)(param_1 + 0x18);
            uVar12 = FUN_1802d74b0();
            *(undefined8 *)(lVar13 + 0x128) = uVar12;
          }
          if (*(longlong *)(param_2 + 0xc0) != 0) {
            lVar13 = *(longlong *)(param_1 + 0x18);
            uVar12 = FUN_1802d74b0();
            *(undefined8 *)(lVar13 + 0x130) = uVar12;
          }
        }
        plVar16 = (longlong *)(param_1 + 0x18);
        if (*(longlong *)(*plVar16 + 0xb0) != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x2db,
                        *(undefined8 *)(*(longlong *)(*plVar16 + 0xb0) + 0x10));
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x2dc,**(undefined8 **)(*plVar16 + 0xb0)
                       );
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x2dd,*(undefined8 *)(*plVar16 + 0xb0));
          *(undefined8 *)(*plVar16 + 0xb0) = 0;
        }
        if ((*(longlong *)(param_2 + 0x18) == 0) ||
           ((iVar7 = *(int *)(*(longlong *)(param_2 + 0x18) + 4), iVar7 != 0 && (iVar7 != 1)))) {
LAB_1802c26c2:
          plVar16 = (longlong *)(param_1 + 0x18);
          if (*(longlong *)(*plVar16 + 0x138) != 0) {
            if (*(longlong *)(*(longlong *)(*plVar16 + 0x138) + 8) != 0) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x30b);
            }
            if (*(longlong *)(*(longlong *)(*plVar16 + 0x138) + 0x10) != 0) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x30d);
            }
            if (*(longlong *)(*(longlong *)(*plVar16 + 0x138) + 0x18) != 0) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x30f);
            }
            plVar16 = (longlong *)(param_1 + 0x18);
            if (*(longlong *)(*(longlong *)(*plVar16 + 0x138) + 0x20) != 0) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x311);
            }
            if (*(longlong *)(*(longlong *)(*plVar16 + 0x138) + 0x28) != 0) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x313);
            }
            if ((1 < *(int *)(*(longlong *)(*plVar16 + 0x138) + 4)) &&
               (*(longlong *)(*(longlong *)(*plVar16 + 0x138) + 0x40) != 0)) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x317);
            }
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x319,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x138));
            *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x138) = 0;
          }
          plVar16 = (longlong *)(param_1 + 0x18);
          if ((*(int *)(param_2 + 4) != 0) && (*(longlong *)(param_2 + 0x38) != 0)) {
            lVar13 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",799,0x80);
            *(longlong *)(*plVar16 + 0x138) = lVar13;
            if (lVar13 == 0) goto LAB_1802c259e;
            puVar3 = *(undefined8 **)(*plVar16 + 0x138);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            puVar3[8] = 0;
            puVar3[9] = 0;
            puVar3[10] = 0;
            puVar3[0xb] = 0;
            puVar3[0xc] = 0;
            puVar3[0xd] = 0;
            puVar3[0xe] = 0;
            puVar3[0xf] = 0;
            *(undefined4 *)(*(longlong *)(*plVar16 + 0x138) + 4) =
                 *(undefined4 *)(*(longlong *)(param_2 + 0x38) + 4);
            if (*(longlong *)(*(longlong *)(param_2 + 0x38) + 8) != 0) {
              lVar13 = *(longlong *)(*plVar16 + 0x138);
              uVar12 = FUN_1802d74b0();
              *(undefined8 *)(lVar13 + 8) = uVar12;
            }
            if (*(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10) != 0) {
              lVar13 = *(longlong *)(*plVar16 + 0x138);
              uVar12 = FUN_1802d74b0();
              *(undefined8 *)(lVar13 + 0x10) = uVar12;
            }
            if (*(longlong *)(*(longlong *)(param_2 + 0x38) + 0x18) != 0) {
              lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
              uVar12 = FUN_1802d74b0();
              *(undefined8 *)(lVar13 + 0x18) = uVar12;
            }
            if (*(longlong *)(*(longlong *)(param_2 + 0x38) + 0x20) != 0) {
              lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
              uVar12 = FUN_1802d74b0();
              *(undefined8 *)(lVar13 + 0x20) = uVar12;
            }
            plVar16 = (longlong *)(param_1 + 0x18);
            if (*(longlong *)(*(longlong *)(param_2 + 0x38) + 0x28) != 0) {
              lVar13 = *(longlong *)(*plVar16 + 0x138);
              uVar12 = FUN_1802d74b0();
              *(undefined8 *)(lVar13 + 0x28) = uVar12;
            }
            *(undefined4 *)(*(longlong *)(*plVar16 + 0x138) + 0x30) =
                 *(undefined4 *)(*(longlong *)(param_2 + 0x38) + 0x30);
            if (0 < *(int *)(*(longlong *)(*plVar16 + 0x138) + 4)) {
              *(undefined4 *)(*(longlong *)(*plVar16 + 0x138) + 0x34) =
                   *(undefined4 *)(*(longlong *)(param_2 + 0x38) + 0x34);
            }
            if ((1 < *(int *)(*(longlong *)(*plVar16 + 0x138) + 4)) &&
               (*(undefined4 *)(*(longlong *)(*plVar16 + 0x138) + 0x38) =
                     *(undefined4 *)(*(longlong *)(param_2 + 0x38) + 0x38),
               *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x40) != 0)) {
              lVar13 = *(longlong *)(*plVar16 + 0x138);
              uVar12 = FUN_1802d74b0();
              *(undefined8 *)(lVar13 + 0x40) = uVar12;
            }
            plVar16 = (longlong *)(param_1 + 0x18);
            if (2 < *(int *)(*(longlong *)(*plVar16 + 0x138) + 4)) {
              *(undefined8 *)(*(longlong *)(*plVar16 + 0x138) + 0x48) =
                   *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x48);
              *(undefined8 *)(*(longlong *)(*plVar16 + 0x138) + 0x50) =
                   *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x50);
            }
            if (3 < *(int *)(*(longlong *)(*plVar16 + 0x138) + 4)) {
              *(undefined8 *)(*(longlong *)(*plVar16 + 0x138) + 0x58) =
                   *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x58);
              *(undefined8 *)(*(longlong *)(*plVar16 + 0x138) + 0x60) =
                   *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x60);
              *(undefined4 *)(*(longlong *)(*plVar16 + 0x138) + 0x68) =
                   *(undefined4 *)(*(longlong *)(param_2 + 0x38) + 0x68);
            }
            if (4 < *(int *)(*(longlong *)(*plVar16 + 0x138) + 4)) {
              if (*(longlong *)(*(longlong *)(param_2 + 0x38) + 0x70) != 0) {
                lVar13 = *(longlong *)(*plVar16 + 0x138);
                uVar12 = FUN_1802d74b0();
                *(undefined8 *)(lVar13 + 0x70) = uVar12;
              }
              *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138) + 0x78) =
                   *(undefined4 *)(*(longlong *)(param_2 + 0x38) + 0x78);
            }
          }
          plVar16 = (longlong *)(param_1 + 0x18);
          if (*(longlong *)(*plVar16 + 8) != 0) {
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x355);
            *(undefined8 *)(*plVar16 + 8) = 0;
          }
          if (*(longlong *)(param_2 + 0x20) != 0) {
            lVar13 = *plVar16;
            uVar12 = FUN_1802d74b0();
            *(undefined8 *)(lVar13 + 8) = uVar12;
          }
          if (*(longlong *)(*plVar16 + 0x18) != 0) {
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x35c);
            *(undefined8 *)(*plVar16 + 0x18) = 0;
          }
          plVar16 = (longlong *)(param_1 + 0x18);
          if (*(longlong *)(param_2 + 0x28) == 0) {
            if ((4 < *(int *)(param_2 + 4)) && (*(longlong *)(param_2 + 0x80) != 0)) {
              *(undefined4 *)(*plVar16 + 0x10) = *(undefined4 *)(param_2 + 0x78);
              lVar13 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x367,
                                     (longlong)*(int *)(*plVar16 + 0x10));
              *(longlong *)(*plVar16 + 0x18) = lVar13;
              if (lVar13 == 0) goto LAB_1802c259e;
              memcpy(*(void **)(*plVar16 + 0x18),*(void **)(param_2 + 0x80),
                     (longlong)*(int *)(*plVar16 + 0x10));
            }
          }
          else {
            lVar13 = *plVar16;
            uVar12 = FUN_1802d74b0();
            *(undefined8 *)(lVar13 + 0x18) = uVar12;
            sVar11 = strlen(*(char **)(param_2 + 0x28));
            *(int *)(*plVar16 + 0x10) = (int)sVar11;
          }
          *(undefined4 *)(*plVar16 + 0xa4) = *(undefined4 *)(param_2 + 0x34);
          *(undefined4 *)(param_1 + 0x1b8) = 1;
          *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x30);
          FUN_1802c3900(param_1);
          if ((1 < *(int *)(param_2 + 4)) && (0 < *(int *)(param_2 + 0x58))) {
            *(int *)(param_1 + 0x1cc) = *(int *)(param_2 + 0x58);
            lVar13 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x37a,
                                   (longlong)*(int *)(param_2 + 0x58) << 3);
            *(longlong *)(param_1 + 0x1d0) = lVar13;
            if (lVar13 == 0) goto LAB_1802c259e;
            iVar7 = 0;
            if (0 < *(int *)(param_2 + 0x58)) {
              lVar13 = 0;
              do {
                uVar12 = FUN_1802d74b0(*(undefined8 *)(lVar13 + *(longlong *)(param_2 + 0x60)));
                iVar7 = iVar7 + 1;
                *(undefined8 *)(lVar13 + *(longlong *)(param_1 + 0x1d0)) = uVar12;
                lVar13 = lVar13 + 8;
              } while (iVar7 < *(int *)(param_2 + 0x58));
            }
          }
          if (*(longlong *)(param_1 + 0x1f8) != 0) {
            FUN_1802c1750();
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x386,*(undefined8 *)(param_1 + 0x1f8)
                         );
            *(undefined8 *)(param_1 + 0x1f8) = 0;
          }
          if (*(longlong *)(param_1 + 0x200) != 0) {
            FUN_1802c1750();
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x38c,*(undefined8 *)(param_1 + 0x200)
                         );
            *(undefined8 *)(param_1 + 0x200) = 0;
          }
          if (5 < *(int *)(param_2 + 4)) {
            if (*(longlong *)(param_2 + 0x90) != 0) {
              local_48 = 0;
              uStack_40 = 0;
              local_38 = 0;
              puVar14 = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x395,0x18);
              *(undefined4 **)(param_1 + 0x1f8) = puVar14;
              if (puVar14 == (undefined4 *)0x0) goto LAB_1802c259e;
              *puVar14 = (undefined4)local_48;
              puVar14[1] = local_48._4_4_;
              puVar14[2] = uStack_40;
              puVar14[3] = uStack_3c;
              *(undefined8 *)(puVar14 + 4) = local_38;
              puVar15 = (undefined4 *)FUN_1802c1480(&local_48,*(undefined8 *)(param_2 + 0x90));
              puVar14 = *(undefined4 **)(param_1 + 0x1f8);
              uVar10 = puVar15[1];
              uVar4 = puVar15[2];
              uVar5 = puVar15[3];
              *puVar14 = *puVar15;
              puVar14[1] = uVar10;
              puVar14[2] = uVar4;
              puVar14[3] = uVar5;
              *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar15 + 4);
              iVar7 = FUN_1802c19b0(*(undefined8 *)(param_2 + 0x90),0x11);
              if (iVar7 != 0) {
                lVar13 = *(longlong *)(param_1 + 0x18);
                uVar10 = FUN_1802c1890(*(undefined8 *)(param_2 + 0x90),0x11);
                *(undefined4 *)(lVar13 + 0x124) = uVar10;
              }
            }
            if (*(longlong *)(param_2 + 0x98) != 0) {
              local_48 = 0;
              uStack_40 = 0;
              local_38 = 0;
              puVar14 = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x3a6,0x18);
              *(undefined4 **)(param_1 + 0x200) = puVar14;
              if (puVar14 == (undefined4 *)0x0) goto LAB_1802c259e;
              *puVar14 = (undefined4)local_48;
              puVar14[1] = local_48._4_4_;
              puVar14[2] = uStack_40;
              puVar14[3] = uStack_3c;
              *(undefined8 *)(puVar14 + 4) = local_38;
              puVar15 = (undefined4 *)FUN_1802c1480(&local_48,*(undefined8 *)(param_2 + 0x98));
              puVar14 = *(undefined4 **)(param_1 + 0x200);
              uVar10 = puVar15[1];
              uVar4 = puVar15[2];
              uVar5 = puVar15[3];
              *puVar14 = *puVar15;
              puVar14[1] = uVar10;
              puVar14[2] = uVar4;
              puVar14[3] = uVar5;
              *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar15 + 4);
            }
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x20);
            *puVar1 = *puVar1 ^ (*(int *)(param_2 + 0x88) * 2 ^
                                *(uint *)(*(longlong *)(param_1 + 0x18) + 0x20)) & 2;
          }
          puVar14 = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x3b2,0xa0);
          if (puVar14 != (undefined4 *)0x0) {
            memset(puVar14,0,0xa0);
            *(longlong *)(puVar14 + 0x22) = param_1;
            *(undefined8 *)(puVar14 + 2) = *(undefined8 *)(param_2 + 0x40);
            *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(param_2 + 0x48);
            *(undefined8 *)(puVar14 + 6) = *(undefined8 *)(param_2 + 0xa0);
            *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(param_2 + 0xa8);
            *(undefined8 *)(puVar14 + 0xc) = *(undefined8 *)(param_2 + 0x50);
            *puVar14 = 1;
            puVar14[0x16] = 0;
            local_res8[0] = FUN_1802cdf70(puVar14,8);
            goto LAB_1802c2e0d;
          }
        }
        else {
          lVar13 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x2e5,0x20);
          *(longlong *)(*plVar16 + 0xb0) = lVar13;
          if (lVar13 != 0) {
            lVar13 = *(longlong *)(param_2 + 0x18);
            if ((*(char **)(lVar13 + 0x10) == (char *)0x0) &&
               ((*(int *)(lVar13 + 4) != 1 || (*(longlong *)(lVar13 + 0x28) == 0)))) {
              *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0) + 0x10) = 0;
              *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0) + 8) = 0;
            }
            else {
              if ((*(int *)(lVar13 + 4) == 1) && (*(longlong *)(lVar13 + 0x28) != 0)) {
                *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0) + 8) =
                     *(undefined4 *)(lVar13 + 0x20);
                _Src = *(void **)(*(longlong *)(param_2 + 0x18) + 0x28);
              }
              else {
                sVar11 = strlen(*(char **)(lVar13 + 0x10));
                *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0) + 8) = (int)sVar11;
                _Src = *(void **)(*(longlong *)(param_2 + 0x18) + 0x10);
              }
              lVar13 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x2f6,
                                     (longlong)
                                     *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0) +
                                             8));
              *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0) + 0x10) = lVar13;
              if (lVar13 == 0) goto LAB_1802c259e;
              lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0);
              memcpy(*(void **)(lVar13 + 0x10),_Src,(longlong)*(int *)(lVar13 + 8));
            }
            *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0) + 0x1c) =
                 *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x1c);
            *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0) + 0x18) =
                 *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x18);
            puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0xb0);
            uVar12 = FUN_1802d74b0(*(undefined8 *)(*(longlong *)(param_2 + 0x18) + 8));
            *puVar3 = uVar12;
            goto LAB_1802c26c2;
          }
        }
LAB_1802c259e:
        local_res8[0] = 0xffffff9d;
        goto LAB_1802c2e0d;
      }
    }
    else {
      iVar7 = strncmp(*(char **)(param_2 + 0x18),"MQTW",4);
      if (iVar7 == 0) {
        lVar13 = *(longlong *)(param_2 + 0x18);
        if ((*(int *)(lVar13 + 4) == 0) || (*(int *)(lVar13 + 4) == 1)) {
          if (2 < *(uint *)(lVar13 + 0x1c)) {
            local_res8[0] = 0xfffffff7;
            goto LAB_1802c2e0d;
          }
          if (*(char **)(lVar13 + 8) == (char *)0x0) goto LAB_1802c2119;
          sVar11 = strlen(*(char **)(lVar13 + 8));
          if (sVar11 == 0) {
            local_res8[0] = 0xffffffef;
            goto LAB_1802c2e0d;
          }
          goto LAB_1802c2241;
        }
      }
    }
  }
LAB_1802c2e08:
  local_res8[0] = 0xfffffff8;
LAB_1802c2e0d:
  FUN_1802c8030("MQTTAsync_connect",0x3c6,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c2e50 @ 1802c2e50 (size 1741)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1802c2e50(undefined8 *param_1,char *param_2,char *param_3,int param_4,undefined8 param_5,
                 char *param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong *_Dst;
  longlong lVar11;
  void *_Dst_00;
  undefined4 *puVar12;
  int local_res10 [2];
  
  InitOnceExecuteOnce((PINIT_ONCE)&DAT_1803c99a8,FUN_1802c2080,(PVOID)0x0,(LPVOID *)0x0);
  FUN_1802c7f40("MQTTAsync_createWithOptions",0x133,3);
  FUN_1802d08a0(DAT_1803c9988);
  if ((param_2 == (char *)0x0) || (param_3 == (char *)0x0)) {
    local_res10[0] = -6;
    goto LAB_1802c34da;
  }
  iVar7 = FUN_1802d5050(param_3);
  if (iVar7 == 0) {
    local_res10[0] = -5;
    goto LAB_1802c34da;
  }
  sVar8 = strlen(param_3);
  if ((sVar8 == 0) && (param_4 == 0)) {
    local_res10[0] = -2;
    goto LAB_1802c34da;
  }
  pcVar9 = strstr(param_2,"://");
  if (pcVar9 != (char *)0x0) {
    iVar7 = strncmp("tcp://",param_2,6);
    if (iVar7 != 0) {
      iVar7 = strncmp("mqtt://",param_2,7);
      if (iVar7 != 0) {
        iVar7 = strncmp("ws://",param_2,5);
        if (iVar7 != 0) {
          iVar7 = strncmp("ssl://",param_2,6);
          if (iVar7 != 0) {
            iVar7 = strncmp("tls://",param_2,6);
            if (iVar7 != 0) {
              iVar7 = strncmp("mqtts://",param_2,8);
              if (iVar7 != 0) {
                iVar7 = strncmp("wss://",param_2,6);
                if (iVar7 != 0) {
                  local_res10[0] = -0xe;
                  goto LAB_1802c34da;
                }
              }
            }
          }
        }
      }
    }
  }
  if (param_6 != (char *)0x0) {
    if (*(int *)(param_6 + 0xc) < 1) {
      local_res10[0] = -0x13;
      goto LAB_1802c34da;
    }
    iVar7 = strncmp(param_6,"MQCO",4);
    if (((iVar7 != 0) || (*(int *)(param_6 + 4) < 0)) || (3 < *(int *)(param_6 + 4))) {
      local_res10[0] = -8;
      goto LAB_1802c34da;
    }
  }
  if (DAT_1803c9960 == 0) {
    FUN_1802c7780();
    _DAT_1803c99b0 = "Product name";
    _DAT_1803c99b8 = "Eclipse Paho Asynchronous MQTT C Client Library";
    _DAT_1803c99c0 = "Version";
    _DAT_1803c99c8 = "1.3.15";
    _DAT_1803c99d0 = "Build level";
    _DAT_1803c99d8 = "2025-09-19T04:59:48Z";
    _DAT_1803c99e0 = "OpenSSL version";
    _DAT_1803c99e8 = FUN_180195d40(0);
    _DAT_1803c99f0 = "OpenSSL flags";
    _DAT_1803c99f8 = FUN_180195d40(1);
    _DAT_1803c9a00 = "OpenSSL build timestamp";
    _DAT_1803c9a08 = FUN_180195d40(2);
    _DAT_1803c9a10 = "OpenSSL platform";
    _DAT_1803c9a18 = FUN_180195d40(3);
    _DAT_1803c9a20 = "OpenSSL directory";
    _DAT_1803c9a28 = FUN_180195d40(4);
    _DAT_1803c9a30 = 0;
    uRam00000001803c9a38 = 0;
    FUN_1802c6e90(&DAT_1803c99b0);
    puVar6 = PTR_PTR_1803c33c8;
    uVar10 = FUN_1802c86e0();
    *(undefined8 *)(puVar6 + 8) = uVar10;
    FUN_1802ca150();
    FUN_1802ca630(FUN_1802d47d0);
    FUN_1802ca620(FUN_1802d4420);
    FUN_1802ca610(FUN_1802d7340);
    DAT_1803c9968 = FUN_1802c86e0();
    DAT_1803c9970 = FUN_1802c86e0();
    FUN_1802cd060();
    DAT_1803c9960 = 1;
  }
  _Dst = (longlong *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x17c,0x208);
  if (_Dst != (longlong *)0x0) {
    *param_1 = _Dst;
    memset(_Dst,0,0x208);
    iVar7 = strncmp("tcp://",param_2,6);
    if (iVar7 == 0) {
LAB_1802c32c7:
      param_2 = param_2 + 6;
    }
    else {
      iVar7 = strncmp("mqtt://",param_2,7);
      if (iVar7 == 0) {
        param_2 = param_2 + 7;
      }
      else {
        iVar7 = strncmp("ws://",param_2,5);
        if (iVar7 != 0) {
          iVar7 = strncmp("ssl://",param_2,6);
          if (iVar7 != 0) {
            iVar7 = strncmp("tls://",param_2,6);
            if (iVar7 != 0) {
              iVar7 = strncmp("mqtts://",param_2,8);
              if (iVar7 == 0) {
                param_2 = param_2 + 8;
                *(undefined4 *)((longlong)_Dst + 0xc) = 1;
              }
              else {
                iVar7 = strncmp("wss://",param_2,6);
                if (iVar7 == 0) {
                  *(undefined4 *)(_Dst + 2) = 1;
                  goto LAB_1802c32c0;
                }
              }
              goto LAB_1802c32cb;
            }
          }
LAB_1802c32c0:
          *(undefined4 *)((longlong)_Dst + 0xc) = 1;
          goto LAB_1802c32c7;
        }
        param_2 = param_2 + 5;
        *(undefined4 *)(_Dst + 2) = 1;
      }
    }
LAB_1802c32cb:
    lVar11 = FUN_1802d74b0(param_2);
    *_Dst = lVar11;
    if (lVar11 != 0) {
      lVar11 = FUN_1802c86e0();
      _Dst[0x33] = lVar11;
      FUN_1802c82a0(DAT_1803c9968,_Dst,0x208);
      _Dst_00 = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x1b2,0x148);
      _Dst[3] = (longlong)_Dst_00;
      if (_Dst_00 != (void *)0x0) {
        memset(_Dst_00,0,0x148);
        *(longlong **)(_Dst[3] + 0x118) = _Dst;
        lVar11 = _Dst[3];
        uVar10 = FUN_1802c86e0();
        *(undefined8 *)(lVar11 + 0xc0) = uVar10;
        lVar11 = _Dst[3];
        uVar10 = FUN_1802c86e0();
        *(undefined8 *)(lVar11 + 0xb8) = uVar10;
        lVar11 = _Dst[3];
        uVar10 = FUN_1802c86e0();
        *(undefined8 *)(lVar11 + 0xd0) = uVar10;
        lVar11 = _Dst[3];
        uVar10 = FUN_1802c86e0();
        *(undefined8 *)(lVar11 + 0xd8) = uVar10;
        puVar1 = (undefined8 *)_Dst[3];
        uVar10 = FUN_1802d74b0(param_3);
        *puVar1 = uVar10;
        plVar2 = (longlong *)_Dst[3];
        if ((((plVar2[0x23] != 0) && (plVar2[0x18] != 0)) &&
            ((plVar2[0x17] != 0 && ((plVar2[0x1a] != 0 && (plVar2[0x1b] != 0)))))) && (*plVar2 != 0)
           ) {
          *(undefined4 *)(plVar2 + 0x24) = 0;
          *(undefined4 *)(_Dst + 0x37) = 0;
          if (param_6 != (char *)0x0) {
            puVar12 = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x1c9,0x24);
            _Dst[0x36] = (longlong)puVar12;
            if (puVar12 == (undefined4 *)0x0) goto LAB_1802c34c8;
            uVar3 = *(undefined4 *)(param_6 + 4);
            uVar4 = *(undefined4 *)(param_6 + 8);
            uVar5 = *(undefined4 *)(param_6 + 0xc);
            *puVar12 = *(undefined4 *)param_6;
            puVar12[1] = uVar3;
            puVar12[2] = uVar4;
            puVar12[3] = uVar5;
            uVar10 = *(undefined8 *)(param_6 + 0x18);
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(param_6 + 0x10);
            *(undefined8 *)(puVar12 + 6) = uVar10;
            puVar12[8] = *(undefined4 *)(param_6 + 0x20);
            if (0 < *(int *)(param_6 + 4)) {
              *(undefined4 *)(_Dst[3] + 0x120) = *(undefined4 *)(param_6 + 0x10);
            }
          }
          local_res10[0] = FUN_1802ca840(_Dst[3] + 0xf0,param_4,param_5);
          if (local_res10[0] == 0) {
            local_res10[0] = FUN_1802caa00(_Dst[3],*_Dst);
            if (local_res10[0] == 0) {
              lVar11 = _Dst[0x36];
              if (((lVar11 == 0) || (*(int *)(lVar11 + 4) < 2)) || (*(int *)(lVar11 + 0x1c) != 0)) {
                FUN_1802d3640(_Dst);
                FUN_1802cb4f0(_Dst[3]);
              }
              else {
                FUN_1802d4020(_Dst[3]);
              }
            }
          }
          FUN_1802c82a0(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),_Dst[3],0x1c0);
          goto LAB_1802c34da;
        }
      }
    }
  }
LAB_1802c34c8:
  local_res10[0] = -99;
LAB_1802c34da:
  FUN_1802d3ee0(DAT_1803c9988);
  FUN_1802c8030("MQTTAsync_createWithOptions",0x1e8,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802c3520 @ 1802c3520 (size 543)

void FUN_1802c3520(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  plVar1 = (longlong *)*param_1;
  FUN_1802c7f40("MQTTAsync_destroy",0x1fb,3);
  FUN_1802d08a0(DAT_1803c9988);
  if (plVar1 != (longlong *)0x0) {
    FUN_1802cf000(plVar1[3],0,0);
    FUN_1802cded0(plVar1);
    FUN_1802d0630(plVar1);
    FUN_1802d0430(plVar1);
    FUN_1802c85f0(plVar1[0x33]);
    puVar2 = (undefined8 *)plVar1[3];
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = puVar2[6];
      uVar5 = FUN_1802d74b0(*puVar2);
      FUN_1802ca770(plVar1[3]);
      FUN_1802d01b0(plVar1[3]);
      FUN_1802d5430(plVar1[3]);
      iVar4 = FUN_1802c87f0(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),plVar1[3]);
      if (iVar4 == 0) {
        FUN_1802c6d90(5,0,0);
      }
      else {
        FUN_1802c6d90(3,1,0,uVar5,uVar3);
      }
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x215,uVar5);
    }
    if (*plVar1 != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x219);
    }
    if (plVar1[0x36] != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x21b);
    }
    FUN_1802c3900(plVar1);
    if (plVar1[0x3f] != 0) {
      FUN_1802c1750();
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x220,plVar1[0x3f]);
      plVar1[0x3f] = 0;
    }
    if (plVar1[0x40] != 0) {
      FUN_1802c1750();
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x226,plVar1[0x40]);
      plVar1[0x40] = 0;
    }
    iVar4 = FUN_1802c87f0(DAT_1803c9968,plVar1);
    if (iVar4 == 0) {
      FUN_1802c6d90(5,0xffffffff,"free error");
    }
    *param_1 = 0;
    if (*(int *)(*(longlong *)(PTR_PTR_1803c33c8 + 8) + 0x18) == 0) {
      FUN_1802d3de0();
    }
  }
  FUN_1802d3ee0(DAT_1803c9988);
  FUN_1802c8030("MQTTAsync_destroy",0x231,0,3);
  return;
}



// ===== FUN_1802c3740 @ 1802c3740 (size 216)

undefined4 FUN_1802c3740(undefined8 param_1,char *param_2)

{
  DWORD DVar1;
  int iVar2;
  undefined4 local_res10 [6];
  
  FUN_1802c7f40("MQTTAsync_disconnect",0x564,3);
  DVar1 = GetCurrentThreadId();
  if ((DVar1 != DAT_1803c9980) && (DVar1 != DAT_1803c9984)) {
    FUN_1802d08a0(DAT_1803c9988);
  }
  if (param_2 != (char *)0x0) {
    iVar2 = strncmp(param_2,"MQTD",4);
    if (((iVar2 != 0) || (*(int *)(param_2 + 4) < 0)) || (1 < *(int *)(param_2 + 4))) {
      local_res10[0] = 0xfffffff8;
      goto LAB_1802c37c8;
    }
  }
  local_res10[0] = FUN_1802d0040(param_1,param_2,0);
LAB_1802c37c8:
  DVar1 = GetCurrentThreadId();
  if ((DVar1 != DAT_1803c9980) && (DVar1 != DAT_1803c9984)) {
    FUN_1802d3ee0(DAT_1803c9988);
  }
  FUN_1802c8030("MQTTAsync_disconnect",0x56d,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802c3820 @ 1802c3820 (size 83)

void FUN_1802c3820(undefined8 param_1)

{
  FUN_1802c7f40("MQTTAsync_free",0x766,3);
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x767,param_1);
  FUN_1802c8030("MQTTAsync_free",0x768,0,3);
  return;
}



// ===== FUN_1802c3880 @ 1802c3880 (size 126)

void FUN_1802c3880(longlong *param_1)

{
  FUN_1802c7f40("MQTTAsync_freeMessage",0x75b,3);
  FUN_1802c1750(*param_1 + 0x28);
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x75d,*(undefined8 *)(*param_1 + 0x10));
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x75e,*param_1);
  *param_1 = 0;
  FUN_1802c8030("MQTTAsync_freeMessage",0x760,0,3);
  return;
}



// ===== FUN_1802c3900 @ 1802c3900 (size 149)

void FUN_1802c3900(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 0x1d0);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1cc)) {
    lVar3 = 0;
    do {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x77e,*(undefined8 *)(*plVar1 + lVar3));
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x1cc));
  }
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  if (*plVar1 != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x781);
  }
  *plVar1 = 0;
  return;
}



// ===== FUN_1802c39a0 @ 1802c39a0 (size 439)

DWORD FUN_1802c39a0(void)

{
  DWORD DVar1;
  
  if (DAT_1803c9988 == (HANDLE)0x0) {
    DAT_1803c9988 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    if (DAT_1803c9988 == (HANDLE)0x0) {
      DVar1 = GetLastError();
      FUN_1802c4f90("mqttasync_mutex error %d\n",DVar1);
      return DVar1;
    }
    DAT_1803c9998 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    if (DAT_1803c9998 == (HANDLE)0x0) {
      DVar1 = GetLastError();
      FUN_1802c4f90("mqttcommand_mutex error %d\n",DVar1);
      return DVar1;
    }
    DAT_1803c99a0 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    if (DAT_1803c99a0 == (HANDLE)0x0) {
      DVar1 = GetLastError();
      FUN_1802c4f90("send_sem error %d\n",DVar1);
      return DVar1;
    }
    DAT_1804479c0 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    if (DAT_1804479c0 == (HANDLE)0x0) {
      DVar1 = GetLastError();
      FUN_1802c4f90("stack_mutex error %d\n",DVar1);
      return DVar1;
    }
    DAT_1804479c8 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    if (DAT_1804479c8 == (HANDLE)0x0) {
      DVar1 = GetLastError();
      FUN_1802c4f90("heap_mutex error %d\n",DVar1);
      return DVar1;
    }
    DAT_1804479d0 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    if (DAT_1804479d0 == (HANDLE)0x0) {
      DVar1 = GetLastError();
      FUN_1802c4f90("log_mutex error %d\n",DVar1);
      return DVar1;
    }
    DAT_1803c9990 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    if (DAT_1803c9990 == (HANDLE)0x0) {
      DVar1 = GetLastError();
      FUN_1802c4f90("socket_mutex error %d\n",DVar1);
      return DVar1;
    }
  }
  else {
    FUN_1802c6d90(1,0xffffffff,"Library already initialized");
  }
  return 0;
}



// ===== FUN_1802c3b60 @ 1802c3b60 (size 129)

uint FUN_1802c3b60(longlong param_1)

{
  uint local_res8 [8];
  
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTAsync_isConnected",0x577,3);
  FUN_1802d08a0(DAT_1803c9988);
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    local_res8[0] = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x20) >> 2 & 1;
  }
  FUN_1802d3ee0(DAT_1803c9988);
  FUN_1802c8030("MQTTAsync_isConnected",0x57c,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c3bf0 @ 1802c3bf0 (size 104)

longlong FUN_1802c3bf0(undefined8 param_1)

{
  longlong lVar1;
  uint local_res10 [6];
  
  FUN_1802c7f40("MQTTAsync_malloc",0x771,3);
  lVar1 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x772,param_1);
  local_res10[0] = (uint)(lVar1 != 0);
  FUN_1802c8030("MQTTAsync_malloc",0x774,local_res10,3);
  return lVar1;
}



// ===== FUN_1802c3c60 @ 1802c3c60 (size 392)

undefined4 FUN_1802c3c60(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *_Dst;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FUN_1802c7f40("MQTTAsync_reconnect",0x3d0,3);
  FUN_1802d08a0(DAT_1803c9988);
  if (*(int *)(param_1 + 0x1c0) == 0) {
    _Dst = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x3e1,0xa0);
    if (_Dst == (undefined8 *)0x0) {
      local_res8[0] = 0xffffff9d;
    }
    else {
      memset(_Dst,0,0xa0);
      _Dst[0x11] = param_1;
      uVar4 = *(undefined8 *)(param_1 + 0x88);
      *_Dst = *(undefined8 *)(param_1 + 0x80);
      _Dst[1] = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x98);
      _Dst[2] = *(undefined8 *)(param_1 + 0x90);
      _Dst[3] = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      _Dst[4] = *(undefined8 *)(param_1 + 0xa0);
      _Dst[5] = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      _Dst[6] = *(undefined8 *)(param_1 + 0xb0);
      _Dst[7] = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 200);
      _Dst[8] = *(undefined8 *)(param_1 + 0xc0);
      _Dst[9] = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0xd8);
      _Dst[10] = *(undefined8 *)(param_1 + 0xd0);
      _Dst[0xb] = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0xe8);
      _Dst[0xc] = *(undefined8 *)(param_1 + 0xe0);
      _Dst[0xd] = uVar4;
      uVar1 = *(undefined4 *)(param_1 + 0xf4);
      uVar2 = *(undefined4 *)(param_1 + 0xf8);
      uVar3 = *(undefined4 *)(param_1 + 0xfc);
      *(undefined4 *)(_Dst + 0xe) = *(undefined4 *)(param_1 + 0xf0);
      *(undefined4 *)((longlong)_Dst + 0x74) = uVar1;
      *(undefined4 *)(_Dst + 0xf) = uVar2;
      *(undefined4 *)((longlong)_Dst + 0x7c) = uVar3;
      _Dst[0x10] = *(undefined8 *)(param_1 + 0x100);
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x120) == 0) {
        *(undefined4 *)((longlong)_Dst + 0x5c) = 0;
      }
      local_res8[0] = FUN_1802cdf70(_Dst,0x88);
    }
  }
  else if (*(int *)(param_1 + 0x1b8) != 0) {
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 500) = 1;
    *(undefined4 *)(param_1 + 0x1f0) = 1;
    local_res8[0] = 0;
  }
  FUN_1802d3ee0(DAT_1803c9988);
  FUN_1802c8030("MQTTAsync_reconnect",0x3f2,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c3df0 @ 1802c3df0 (size 893)

int FUN_1802c3df0(longlong param_1,undefined8 param_2,int param_3,void *param_4,uint param_5,
                 undefined4 param_6,longlong param_7)

{
  undefined8 uVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *_Dst;
  undefined8 *puVar6;
  longlong lVar7;
  void *_Dst_00;
  int local_res8 [2];
  undefined1 local_48 [32];
  
  iVar4 = 0;
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTAsync_send",0x4e5,3);
  DVar2 = GetCurrentThreadId();
  if ((DVar2 != DAT_1803c9980) && (DVar2 != DAT_1803c9984)) {
    FUN_1802d08a0(DAT_1803c9988);
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    local_res8[0] = -1;
    goto LAB_1802c40f9;
  }
  if (((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x20) & 4) == 0) &&
     (((lVar7 = *(longlong *)(param_1 + 0x1b0), lVar7 == 0 || (*(int *)(lVar7 + 8) == 0)) ||
      ((*(int *)(param_1 + 0x1b8) == 0 &&
       ((*(int *)(lVar7 + 4) < 2 || (*(int *)(lVar7 + 0x14) == 0)))))))) {
    local_res8[0] = -3;
    goto LAB_1802c40f9;
  }
  if (local_res8[0] != 0) goto LAB_1802c40f9;
  iVar3 = FUN_1802d5050(param_2);
  if (iVar3 == 0) {
    local_res8[0] = -5;
    goto LAB_1802c40f9;
  }
  if (2 < param_5) {
    local_res8[0] = -9;
    goto LAB_1802c40f9;
  }
  if ((0 < (int)param_5) && (iVar4 = FUN_1802ce450(param_1), iVar4 == 0)) {
    local_res8[0] = -10;
    goto LAB_1802c40f9;
  }
  lVar7 = *(longlong *)(param_1 + 0x1b0);
  if ((lVar7 != 0) &&
     (((*(int *)(lVar7 + 4) < 2 || (*(int *)(lVar7 + 0x18) == 0)) &&
      (iVar3 = *(int *)(lVar7 + 0xc), iVar5 = FUN_1802d0820(param_1), iVar3 <= iVar5)))) {
    local_res8[0] = -0xc;
    goto LAB_1802c40f9;
  }
  if (param_7 == 0) {
LAB_1802c3f66:
    if (local_res8[0] == 0) {
      _Dst = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x513,0xa0);
      if (_Dst == (undefined4 *)0x0) {
        local_res8[0] = -99;
      }
      else {
        memset(_Dst,0,0xa0);
        *(longlong *)(_Dst + 0x22) = param_1;
        *_Dst = 3;
        _Dst[10] = iVar4;
        if (param_7 != 0) {
          *(undefined8 *)(_Dst + 2) = *(undefined8 *)(param_7 + 8);
          *(undefined8 *)(_Dst + 4) = *(undefined8 *)(param_7 + 0x10);
          *(undefined8 *)(_Dst + 6) = *(undefined8 *)(param_7 + 0x28);
          *(undefined8 *)(_Dst + 8) = *(undefined8 *)(param_7 + 0x30);
          *(undefined8 *)(_Dst + 0xc) = *(undefined8 *)(param_7 + 0x18);
          *(int *)(param_7 + 0x20) = iVar4;
          if (4 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x120)) {
            puVar6 = (undefined8 *)FUN_1802c1480(local_48,param_7 + 0x38);
            uVar1 = puVar6[1];
            *(undefined8 *)(_Dst + 0x10) = *puVar6;
            *(undefined8 *)(_Dst + 0x12) = uVar1;
            *(undefined8 *)(_Dst + 0x14) = puVar6[2];
          }
        }
        lVar7 = FUN_1802d74b0(param_2);
        *(longlong *)(_Dst + 0x16) = lVar7;
        if (lVar7 == 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x529,_Dst);
          local_res8[0] = -99;
        }
        else {
          _Dst[0x18] = param_3;
          _Dst_00 = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x52e,
                                          (longlong)param_3);
          *(void **)(_Dst + 0x1a) = _Dst_00;
          if (_Dst_00 == (void *)0x0) {
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x530,*(undefined8 *)(_Dst + 0x16));
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x531,_Dst);
            local_res8[0] = -99;
          }
          else {
            memcpy(_Dst_00,param_4,(longlong)param_3);
            _Dst[0x1d] = param_6;
            _Dst[0x1c] = param_5;
            local_res8[0] = FUN_1802cdf70(_Dst,8);
          }
        }
      }
    }
  }
  else {
    if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x120) < 5) {
      if (*(int *)(param_7 + 4) < 1) goto LAB_1802c3f66;
      if (*(longlong *)(param_7 + 0x30) == 0) {
        lVar7 = *(longlong *)(param_7 + 0x28);
        goto joined_r0x0001802c3fae;
      }
    }
    else if ((*(int *)(param_7 + 4) != 0) && (*(longlong *)(param_7 + 0x10) == 0)) {
      lVar7 = *(longlong *)(param_7 + 8);
joined_r0x0001802c3fae:
      if (lVar7 == 0) goto LAB_1802c3f66;
    }
    local_res8[0] = -0xf;
  }
LAB_1802c40f9:
  DVar2 = GetCurrentThreadId();
  if ((DVar2 != DAT_1803c9980) && (DVar2 != DAT_1803c9984)) {
    FUN_1802d3ee0(DAT_1803c9988);
  }
  FUN_1802c8030("MQTTAsync_send",0x53d,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c4170 @ 1802c4170 (size 243)

undefined4 FUN_1802c4170(longlong param_1,undefined8 param_2,char *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_res8 [2];
  
  FUN_1802c7f40("MQTTAsync_sendMessage",0x548,3);
  if (param_3 == (char *)0x0) {
    local_res8[0] = 0xfffffffa;
  }
  else {
    iVar4 = strncmp(param_3,"MQTM",4);
    if ((iVar4 == 0) && ((*(int *)(param_3 + 4) == 0 || (*(int *)(param_3 + 4) == 1)))) {
      if ((4 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x120)) && (param_4 != 0)) {
        uVar1 = *(undefined4 *)(param_3 + 0x2c);
        uVar2 = *(undefined4 *)(param_3 + 0x30);
        uVar3 = *(undefined4 *)(param_3 + 0x34);
        *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_3 + 0x28);
        *(undefined4 *)(param_4 + 0x3c) = uVar1;
        *(undefined4 *)(param_4 + 0x40) = uVar2;
        *(undefined4 *)(param_4 + 0x44) = uVar3;
        *(undefined8 *)(param_4 + 0x48) = *(undefined8 *)(param_3 + 0x38);
      }
      local_res8[0] =
           FUN_1802c3df0(param_1,param_2,*(undefined4 *)(param_3 + 8),
                         *(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x18),
                         *(undefined4 *)(param_3 + 0x1c),param_4);
    }
    else {
      local_res8[0] = 0xfffffff8;
    }
  }
  FUN_1802c8030("MQTTAsync_sendMessage",0x55b,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c4270 @ 1802c4270 (size 207)

undefined4
FUN_1802c4270(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTAsync_setCallbacks",0x62a,3);
  FUN_1802d08a0(DAT_1803c9988);
  if ((((param_1 == 0) || (param_4 == 0)) || (*(longlong *)(param_1 + 0x18) == 0)) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x20) & 0x3c0) != 0)) {
    local_res8[0] = 0xffffffff;
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = param_5;
    *(undefined8 *)(param_1 + 0x48) = param_2;
    *(undefined8 *)(param_1 + 0x40) = param_2;
    *(undefined8 *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x20) = param_3;
    *(longlong *)(param_1 + 0x28) = param_4;
  }
  FUN_1802d3ee0(DAT_1803c9988);
  FUN_1802c8030("MQTTAsync_setCallbacks",0x638,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c4340 @ 1802c4340 (size 163)

undefined4 FUN_1802c4340(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTAsync_setConnected",0x69b,3);
  FUN_1802d08a0(DAT_1803c9988);
  if ((param_1 == 0) || ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x20) & 0x3c0) != 0)) {
    local_res8[0] = 0xffffffff;
  }
  else {
    *(undefined8 *)(param_1 + 0x58) = param_2;
    *(undefined8 *)(param_1 + 0x50) = param_3;
  }
  FUN_1802d3ee0(DAT_1803c9988);
  FUN_1802c8030("MQTTAsync_setConnected",0x6a7,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c43f0 @ 1802c43f0 (size 163)

undefined4 FUN_1802c43f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTAsync_setConnectionLostCallback",0x642,3);
  FUN_1802d08a0(DAT_1803c9988);
  if ((param_1 == 0) || ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x20) & 0x3c0) != 0)) {
    local_res8[0] = 0xffffffff;
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x20) = param_3;
  }
  FUN_1802d3ee0(DAT_1803c9988);
  FUN_1802c8030("MQTTAsync_setConnectionLostCallback",0x64e,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c44a0 @ 1802c44a0 (size 163)

undefined4 FUN_1802c44a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTAsync_setDisconnected",0x685,3);
  FUN_1802d08a0(DAT_1803c9988);
  if ((param_1 == 0) || ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x20) & 0x3c0) != 0)) {
    local_res8[0] = 0xffffffff;
  }
  else {
    *(undefined8 *)(param_1 + 0x68) = param_2;
    *(undefined8 *)(param_1 + 0x60) = param_3;
  }
  FUN_1802d3ee0(DAT_1803c9988);
  FUN_1802c8030("MQTTAsync_setDisconnected",0x691,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c4550 @ 1802c4550 (size 168)

undefined4 FUN_1802c4550(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTAsync_setMessageArrivedCallback",0x659,3);
  FUN_1802d08a0(DAT_1803c9988);
  if (((param_1 == 0) || (param_3 == 0)) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x20) & 0x3c0) != 0)) {
    local_res8[0] = 0xffffffff;
  }
  else {
    *(undefined8 *)(param_1 + 0x40) = param_2;
    *(longlong *)(param_1 + 0x28) = param_3;
  }
  FUN_1802d3ee0(DAT_1803c9988);
  FUN_1802c8030("MQTTAsync_setMessageArrivedCallback",0x665,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c4600 @ 1802c4600 (size 351)

char * FUN_1802c4600(undefined4 param_1)

{
  uint uVar1;
  
  switch(param_1) {
  case 0:
    return "Success";
  case 0xffffffed:
    return "maxBufferedMessages in the connect options must be >= 0";
  case 0xffffffee:
    return "Connect or disconnect command ignored";
  case 0xffffffef:
    return "Zero length will topic on connect";
  case 0xfffffff0:
    return "Client created for another version of MQTT";
  case 0xfffffff1:
    return "Options for wrong MQTT version";
  case 0xfffffff2:
    return "Invalid protocol scheme";
  case 0xfffffff3:
    return "SSL is not supported";
  case 0xfffffff4:
    return "No more messages can be buffered";
  case 0xfffffff5:
    return "Operation discarded before completion";
  case 0xfffffff6:
    return "Too many pending commands";
  case 0xfffffff7:
    return "Invalid QoS value";
  case 0xfffffff8:
    return "Bad structure";
  case 0xfffffff9:
    return "Topic containing NULL characters has been truncated";
  case 0xfffffffa:
    return "Invalid (NULL) parameter";
  case 0xfffffffb:
    return "Invalid UTF8 string";
  case 0xfffffffc:
    return "Maximum in-flight messages amount reached";
  case 0xfffffffd:
    return "Disconnected";
  case 0xfffffffe:
    return "Persistence error";
  case 0xffffffff:
    return "Failure";
  }
  uVar1 = snprintf(&DAT_1803c9a40,0x1e,"Unknown error code %d",param_1);
  if (0x1d < uVar1) {
    DAT_1803c9a5d = 0;
    FUN_1802c6d90(5,0,"Error writing %d chars with snprintf",uVar1);
  }
  return &DAT_1803c9a40;
}



// ===== FUN_1802c47b0 @ 1802c47b0 (size 124)

undefined4
FUN_1802c47b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined4 local_res18 [4];
  undefined4 local_18 [4];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_1802c7f40("MQTTAsync_subscribe",0x47a,3);
  local_18[0] = FUN_1802c4830(param_1,1,&local_res10,local_res18,param_4);
  FUN_1802c8030("MQTTAsync_subscribe",0x47c,local_18,3);
  return local_18[0];
}



// ===== FUN_1802c4830 @ 1802c4830 (size 1046)

int FUN_1802c4830(longlong param_1,int param_2,undefined8 *param_3,uint *param_4,longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 *_Dst;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int local_res8 [2];
  undefined8 local_58;
  uint local_50;
  
  lVar11 = 0;
  lVar12 = (longlong)param_2;
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTAsync_subscribeMany",0x406,3);
  DVar4 = GetCurrentThreadId();
  if ((DVar4 != DAT_1803c9980) && (DVar4 != DAT_1803c9984)) {
    FUN_1802d08a0(DAT_1803c9988);
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    local_res8[0] = -1;
    goto LAB_1802c4bdb;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x20) & 4) == 0) {
    local_res8[0] = -3;
    goto LAB_1802c4bdb;
  }
  iVar13 = 0;
  puVar10 = param_4;
  puVar6 = param_3;
  if (0 < param_2) {
    do {
      iVar5 = FUN_1802d5050(*puVar6);
      if (iVar5 == 0) {
        local_res8[0] = -5;
        goto LAB_1802c4bdb;
      }
      if (2 < *puVar10) {
        local_res8[0] = -9;
        goto LAB_1802c4bdb;
      }
      iVar13 = iVar13 + 1;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar13 < param_2);
  }
  if (local_res8[0] != 0) goto LAB_1802c4bdb;
  iVar13 = FUN_1802ce450(param_1);
  if (iVar13 == 0) {
    local_res8[0] = -10;
    goto LAB_1802c4bdb;
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x120);
  if ((((4 < iVar5) && (1 < param_2)) && (param_2 != *(int *)(param_5 + 0x5c))) &&
     (*(int *)(param_5 + 0x5c) != 0)) {
    local_res8[0] = -0xf;
    goto LAB_1802c4bdb;
  }
  if (param_5 != 0) {
    if (iVar5 < 5) {
      if (*(int *)(param_5 + 4) < 1) goto LAB_1802c4997;
      if (*(longlong *)(param_5 + 0x30) == 0) {
        lVar7 = *(longlong *)(param_5 + 0x28);
        goto joined_r0x0001802c4ae3;
      }
    }
    else if ((*(int *)(param_5 + 4) != 0) && (*(longlong *)(param_5 + 0x10) == 0)) {
      lVar7 = *(longlong *)(param_5 + 8);
joined_r0x0001802c4ae3:
      if (lVar7 == 0) goto LAB_1802c4997;
    }
    local_res8[0] = -0xf;
    goto LAB_1802c4bdb;
  }
LAB_1802c4997:
  if (local_res8[0] != 0) goto LAB_1802c4bdb;
  _Dst = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x432,0xa0);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0xa0);
    *(longlong *)(_Dst + 0x22) = param_1;
    _Dst[10] = iVar13;
    if (param_5 != 0) {
      *(undefined8 *)(_Dst + 2) = *(undefined8 *)(param_5 + 8);
      *(undefined8 *)(_Dst + 4) = *(undefined8 *)(param_5 + 0x10);
      *(undefined8 *)(_Dst + 6) = *(undefined8 *)(param_5 + 0x28);
      *(undefined8 *)(_Dst + 8) = *(undefined8 *)(param_5 + 0x30);
      *(undefined8 *)(_Dst + 0xc) = *(undefined8 *)(param_5 + 0x18);
      *(int *)(param_5 + 0x20) = iVar13;
      if (4 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x120)) {
        puVar6 = (undefined8 *)FUN_1802c1480(&local_58,param_5 + 0x38);
        uVar8 = puVar6[1];
        *(undefined8 *)(_Dst + 0x10) = *puVar6;
        *(undefined8 *)(_Dst + 0x12) = uVar8;
        *(undefined8 *)(_Dst + 0x14) = puVar6[2];
        *(undefined8 *)(_Dst + 0x1c) = *(undefined8 *)(param_5 + 0x50);
        _Dst[0x1e] = *(undefined4 *)(param_5 + 0x58);
        if (1 < param_2) {
          lVar7 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x448,lVar12 * 0xc);
          *(longlong *)(_Dst + 0x20) = lVar7;
          if (lVar7 == 0) goto LAB_1802c4bcb;
          if (*(int *)(param_5 + 0x5c) == 0) {
            local_58 = 0x4f53514d;
            local_50 = local_50 & 0xff000000;
            if (0 < param_2) {
              lVar7 = 0;
              lVar9 = lVar12;
              do {
                lVar1 = *(longlong *)(_Dst + 0x20);
                *(undefined8 *)(lVar7 + lVar1) = 0x4f53514d;
                *(uint *)(lVar7 + 8 + lVar1) = local_50;
                lVar9 = lVar9 + -1;
                lVar7 = lVar7 + 0xc;
              } while (lVar9 != 0);
            }
          }
          else if (0 < param_2) {
            lVar7 = 0;
            lVar9 = lVar12;
            do {
              lVar2 = *(longlong *)(param_5 + 0x60);
              lVar1 = lVar7 + 0xc;
              lVar3 = *(longlong *)(_Dst + 0x20);
              *(undefined8 *)(lVar3 + -0xc + lVar1) = *(undefined8 *)(lVar7 + lVar2);
              *(undefined4 *)(lVar3 + -4 + lVar1) = *(undefined4 *)(lVar7 + 8 + lVar2);
              lVar9 = lVar9 + -1;
              lVar7 = lVar1;
            } while (lVar9 != 0);
          }
        }
      }
    }
    *_Dst = 8;
    _Dst[0x16] = param_2;
    uVar8 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x45d,lVar12 * 8);
    *(undefined8 *)(_Dst + 0x18) = uVar8;
    lVar7 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x45e,lVar12 * 4);
    *(longlong *)(_Dst + 0x1a) = lVar7;
    if ((*(longlong *)(_Dst + 0x18) != 0) && (lVar7 != 0)) {
      if (0 < param_2) {
        do {
          lVar7 = FUN_1802d74b0(param_3[lVar11]);
          *(longlong *)(*(longlong *)(_Dst + 0x18) + lVar11 * 8) = lVar7;
          if (lVar7 == 0) goto LAB_1802c4bcb;
          *(uint *)(*(longlong *)(_Dst + 0x1a) + lVar11 * 4) = param_4[lVar11];
          lVar11 = lVar11 + 1;
        } while (lVar11 < lVar12);
      }
      local_res8[0] = FUN_1802cdf70(_Dst,8);
      goto LAB_1802c4bdb;
    }
  }
LAB_1802c4bcb:
  local_res8[0] = -99;
LAB_1802c4bdb:
  DVar4 = GetCurrentThreadId();
  if ((DVar4 != DAT_1803c9980) && (DVar4 != DAT_1803c9984)) {
    FUN_1802d3ee0(DAT_1803c9988);
  }
  FUN_1802c8030("MQTTAsync_subscribeMany",0x472,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c4c50 @ 1802c4c50 (size 112)

undefined4 FUN_1802c4c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [2];
  undefined4 local_res20 [2];
  
  local_res10[0] = param_2;
  FUN_1802c7f40("MQTTAsync_unsubscribe",0x4d6,3);
  local_res20[0] = FUN_1802c4cc0(param_1,1,local_res10,param_3);
  FUN_1802c8030("MQTTAsync_unsubscribe",0x4d8,local_res20,3);
  return local_res20[0];
}



// ===== FUN_1802c4cc0 @ 1802c4cc0 (size 715)

int FUN_1802c4cc0(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *_Dst;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8 [2];
  undefined1 local_48 [32];
  
  lVar6 = 0;
  lVar7 = (longlong)param_2;
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTAsync_unsubscribeMany",0x489,3);
  DVar1 = GetCurrentThreadId();
  if ((DVar1 != DAT_1803c9980) && (DVar1 != DAT_1803c9984)) {
    FUN_1802d08a0(DAT_1803c9988);
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    local_res8[0] = -1;
    goto LAB_1802c4f17;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x20) & 4) == 0) {
    local_res8[0] = -3;
    goto LAB_1802c4f17;
  }
  if (0 < param_2) {
    lVar5 = 0;
    do {
      iVar2 = FUN_1802d5050(*(undefined8 *)(param_3 + lVar5 * 8));
      if (iVar2 == 0) {
        local_res8[0] = -5;
        goto LAB_1802c4f17;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (local_res8[0] != 0) goto LAB_1802c4f17;
  iVar2 = FUN_1802ce450(param_1);
  if (iVar2 == 0) {
    local_res8[0] = -10;
    goto LAB_1802c4f17;
  }
  if (param_4 == 0) {
LAB_1802c4de0:
    if (local_res8[0] == 0) {
      _Dst = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x4ad,0xa0);
      if (_Dst != (undefined4 *)0x0) {
        memset(_Dst,0,0xa0);
        *(longlong *)(_Dst + 0x22) = param_1;
        *_Dst = 10;
        _Dst[10] = iVar2;
        if (param_4 != 0) {
          *(undefined8 *)(_Dst + 2) = *(undefined8 *)(param_4 + 8);
          *(undefined8 *)(_Dst + 4) = *(undefined8 *)(param_4 + 0x10);
          *(undefined8 *)(_Dst + 6) = *(undefined8 *)(param_4 + 0x28);
          *(undefined8 *)(_Dst + 8) = *(undefined8 *)(param_4 + 0x30);
          *(undefined8 *)(_Dst + 0xc) = *(undefined8 *)(param_4 + 0x18);
          *(int *)(param_4 + 0x20) = iVar2;
          if (4 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x120)) {
            puVar3 = (undefined8 *)FUN_1802c1480(local_48,param_4 + 0x38);
            uVar4 = puVar3[1];
            *(undefined8 *)(_Dst + 0x10) = *puVar3;
            *(undefined8 *)(_Dst + 0x12) = uVar4;
            *(undefined8 *)(_Dst + 0x14) = puVar3[2];
          }
        }
        _Dst[0x16] = param_2;
        lVar5 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsync.c",0x4c2,lVar7 * 8);
        *(longlong *)(_Dst + 0x18) = lVar5;
        if (lVar5 != 0) {
          if (0 < param_2) {
            do {
              uVar4 = FUN_1802d74b0(*(undefined8 *)(param_3 + lVar6 * 8));
              *(undefined8 *)(*(longlong *)(_Dst + 0x18) + lVar6 * 8) = uVar4;
              lVar6 = lVar6 + 1;
            } while (lVar6 < lVar7);
          }
          local_res8[0] = FUN_1802cdf70(_Dst,8);
          goto LAB_1802c4f17;
        }
      }
      local_res8[0] = -99;
    }
  }
  else {
    if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x120) < 5) {
      if (*(int *)(param_4 + 4) < 1) goto LAB_1802c4de0;
      if (*(longlong *)(param_4 + 0x30) == 0) {
        lVar5 = *(longlong *)(param_4 + 0x28);
        goto joined_r0x0001802c4ef5;
      }
    }
    else if ((*(int *)(param_4 + 4) != 0) && (*(longlong *)(param_4 + 0x10) == 0)) {
      lVar5 = *(longlong *)(param_4 + 8);
joined_r0x0001802c4ef5:
      if (lVar5 == 0) goto LAB_1802c4de0;
    }
    local_res8[0] = -0xf;
  }
LAB_1802c4f17:
  DVar1 = GetCurrentThreadId();
  if ((DVar1 != DAT_1803c9980) && (DVar1 != DAT_1803c9984)) {
    FUN_1802d3ee0(DAT_1803c9988);
  }
  FUN_1802c8030("MQTTAsync_unsubscribeMany",0x4ce,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c4f90 @ 1802c4f90 (size 85)

void FUN_1802c4f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_1800e0ca0();
  __stdio_common_vfprintf(*puVar2,uVar1,param_1,0,&local_res10);
  return;
}



// ===== FUN_1802c5030 @ 1802c5030 (size 458)

byte * FUN_1802c5030(int param_1,byte param_2,undefined1 *param_3,longlong param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *local_res18;
  undefined4 uStack_2c;
  
  puVar2 = param_3 + param_4;
  local_res18 = param_3;
  FUN_1802c7f40("MQTTPacket_publish",0x234,3);
  pbVar4 = (byte *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x235,0x48);
  if (pbVar4 != (byte *)0x0) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    pbVar4[8] = 0;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    pbVar4[0x10] = 0;
    pbVar4[0x11] = 0;
    pbVar4[0x12] = 0;
    pbVar4[0x13] = 0;
    pbVar4[0x14] = 0;
    pbVar4[0x15] = 0;
    pbVar4[0x16] = 0;
    pbVar4[0x17] = 0;
    pbVar4[0x18] = 0;
    pbVar4[0x19] = 0;
    pbVar4[0x1a] = 0;
    pbVar4[0x1b] = 0;
    pbVar4[0x1c] = 0;
    pbVar4[0x1d] = 0;
    pbVar4[0x1e] = 0;
    pbVar4[0x1f] = 0;
    pbVar4[0x20] = 0;
    pbVar4[0x21] = 0;
    pbVar4[0x22] = 0;
    pbVar4[0x23] = 0;
    pbVar4[0x24] = 0;
    pbVar4[0x25] = 0;
    pbVar4[0x26] = 0;
    pbVar4[0x27] = 0;
    pbVar4[0x28] = 0;
    pbVar4[0x29] = 0;
    pbVar4[0x2a] = 0;
    pbVar4[0x2b] = 0;
    pbVar4[0x2c] = 0;
    pbVar4[0x2d] = 0;
    pbVar4[0x2e] = 0;
    pbVar4[0x2f] = 0;
    pbVar4[0x30] = 0;
    pbVar4[0x31] = 0;
    pbVar4[0x32] = 0;
    pbVar4[0x33] = 0;
    pbVar4[0x34] = 0;
    pbVar4[0x35] = 0;
    pbVar4[0x36] = 0;
    pbVar4[0x37] = 0;
    pbVar4[0x38] = 0;
    pbVar4[0x39] = 0;
    pbVar4[0x3a] = 0;
    pbVar4[0x3b] = 0;
    pbVar4[0x3c] = 0;
    pbVar4[0x3d] = 0;
    pbVar4[0x3e] = 0;
    pbVar4[0x3f] = 0;
    pbVar4[0x40] = 0;
    pbVar4[0x41] = 0;
    pbVar4[0x42] = 0;
    pbVar4[0x43] = 0;
    pbVar4[0x44] = 0;
    pbVar4[0x45] = 0;
    pbVar4[0x46] = 0;
    pbVar4[0x47] = 0;
    *(int *)(pbVar4 + 0x24) = param_1;
    *pbVar4 = param_2;
    lVar5 = FUN_1802c6b10(&local_res18,puVar2,pbVar4 + 0x10);
    *(longlong *)(pbVar4 + 8) = lVar5;
    if (lVar5 == 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x23c,pbVar4);
      pbVar4 = (byte *)0x0;
    }
    else {
      if ((*pbVar4 & 6) == 0) {
        uVar6 = 0;
      }
      else {
        if ((longlong)puVar2 - (longlong)local_res18 < 2) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x244,pbVar4);
          pbVar4 = (byte *)0x0;
          goto LAB_1802c51c4;
        }
        uVar6 = (uint)CONCAT11(*local_res18,local_res18[1]);
        local_res18 = local_res18 + 2;
      }
      *(uint *)(pbVar4 + 0x14) = uVar6;
      if (4 < param_1) {
        pbVar1 = pbVar4 + 0x28;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar4[0x2c] = 0;
        pbVar4[0x2d] = 0;
        pbVar4[0x2e] = 0;
        pbVar4[0x2f] = 0;
        pbVar4[0x30] = 0;
        pbVar4[0x31] = 0;
        pbVar4[0x32] = 0;
        pbVar4[0x33] = 0;
        *(undefined4 *)(pbVar4 + 0x34) = uStack_2c;
        pbVar4[0x38] = 0;
        pbVar4[0x39] = 0;
        pbVar4[0x3a] = 0;
        pbVar4[0x3b] = 0;
        pbVar4[0x3c] = 0;
        pbVar4[0x3d] = 0;
        pbVar4[0x3e] = 0;
        pbVar4[0x3f] = 0;
        iVar3 = FUN_1802c1a20(pbVar1,&local_res18,puVar2);
        if (iVar3 != 1) {
          if (*(longlong *)(pbVar4 + 0x38) != 0) {
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x253);
          }
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x255,pbVar4);
          pbVar4 = (byte *)0x0;
          goto LAB_1802c51c4;
        }
      }
      *(undefined1 **)(pbVar4 + 0x18) = local_res18;
      *(int *)(pbVar4 + 0x20) = ((int)param_4 - (int)local_res18) + (int)param_3;
    }
  }
LAB_1802c51c4:
  FUN_1802c8030("MQTTPacket_publish",0x25d,0,3);
  return pbVar4;
}



// ===== FUN_1802c5200 @ 1802c5200 (size 413)

undefined4 * FUN_1802c5200(int param_1,undefined1 param_2,undefined1 *param_3,ulonglong param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *local_res18 [2];
  undefined4 uStack_2c;
  
  local_res18[0] = param_3;
  FUN_1802c7f40("MQTTPacket_ack",0x322,3);
  puVar4 = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x323,0x28);
  if (puVar4 == (undefined4 *)0x0) goto LAB_1802c536d;
  puVar4[3] = param_1;
  *(undefined1 *)puVar4 = param_2;
  if (((byte)*puVar4 & 0xf0) == 0xe0) {
LAB_1802c52b5:
    if (param_1 < 5) goto LAB_1802c536d;
    *(undefined1 *)(puVar4 + 2) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = uStack_2c;
    *(undefined8 *)(puVar4 + 8) = 0;
    if ((param_4 < 3) && ((((byte)*puVar4 & 0xf0) != 0xe0 || (param_4 == 0)))) {
LAB_1802c5315:
      if ((((byte)*puVar4 & 0xf0) != 0xe0) || (param_4 < 2)) goto LAB_1802c536d;
    }
    else {
      uVar2 = *local_res18[0];
      local_res18[0] = local_res18[0] + 1;
      *(undefined1 *)(puVar4 + 2) = uVar2;
      if (param_4 < 4) goto LAB_1802c5315;
    }
    iVar3 = FUN_1802c1a20(puVar4 + 4,local_res18,param_3 + param_4);
    if (iVar3 == 1) goto LAB_1802c536d;
    if (*(longlong *)(puVar4 + 8) != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x341);
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x343,puVar4);
  }
  else {
    if (1 < (longlong)(param_3 + param_4) - (longlong)local_res18[0]) {
      uVar2 = *local_res18[0];
      puVar1 = local_res18[0] + 1;
      local_res18[0] = local_res18[0] + 2;
      puVar4[1] = (uint)CONCAT11(uVar2,*puVar1);
      goto LAB_1802c52b5;
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x32b,puVar4);
  }
  puVar4 = (undefined4 *)0x0;
LAB_1802c536d:
  FUN_1802c8030("MQTTPacket_ack",0x34a,0,3);
  return puVar4;
}



// ===== FUN_1802c53a0 @ 1802c53a0 (size 77)

int FUN_1802c53a0(uint *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined1 *)*param_2;
  if (1 < (longlong)(param_3 - (longlong)puVar1)) {
    uVar2 = (uint)CONCAT11(*puVar1,puVar1[1]);
    *param_2 = (longlong)(puVar1 + 2);
    *param_1 = uVar2;
    if ((ulonglong)uVar2 + *param_2 <= param_3) {
      *(longlong *)(param_1 + 2) = *param_2;
      *param_2 = *param_2 + (ulonglong)uVar2;
      return *param_1 + 2;
    }
  }
  return -1;
}



// ===== FUN_1802c53f0 @ 1802c53f0 (size 850)

longlong FUN_1802c53f0(int param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  byte bVar12;
  char *pcVar13;
  int local_res18 [2];
  int local_res20 [2];
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  
  local_40 = 0;
  local_48 = 0;
  lVar4 = 0;
  FUN_1802c7f40("MQTTPacket_Factory",0x72,3);
  *param_3 = -1;
  uVar2 = FUN_1802d8e50();
  local_50 = uVar2;
  iVar1 = FUN_1802d9140(param_2,&DAT_1803c9a60);
  *param_3 = iVar1;
  if (iVar1 == 0) {
    local_res20[0] = -1;
    iVar8 = 1;
    iVar11 = 0;
    FUN_1802c7f40("MQTTPacket_decode",0x152,3);
    local_58 = 0;
    iVar1 = local_res20[0];
    do {
      local_res20[0] = iVar1;
      iVar11 = iVar11 + 1;
      if (4 < iVar11) {
        local_res20[0] = -1;
        break;
      }
      local_res20[0] = FUN_1802d9140(param_2,local_res18);
      if (local_res20[0] != 0) break;
      iVar1 = ((int)(char)local_res18[0] & 0x7fU) * iVar8;
      iVar8 = iVar8 << 7;
      local_58 = local_58 + (longlong)iVar1;
      iVar1 = 0;
    } while ((char)local_res18[0] < '\0');
    FUN_1802c8030("MQTTPacket_decode",0x162,local_res20,3);
    *param_3 = local_res20[0];
    if (local_res20[0] == 0) {
      local_40 = FUN_1802d9250(param_2,local_58,&local_48);
      if ((local_58 != 0) && (local_40 == 0)) {
LAB_1802c5519:
        *param_3 = -1;
        goto LAB_1802c570d;
      }
      if (local_48 < local_58) {
        *param_3 = -0x16;
        UVar3 = GetTickCount64();
        param_2[2] = UVar3;
      }
      else {
        uVar9 = DAT_1803c9a60 >> 4 & 0xf;
        if ((uVar9 == 0) ||
           (((param_1 < 5 && (0xd < uVar9)) ||
            (*(code **)(&DAT_1803c3730 + (ulonglong)uVar9 * 8) == (code *)0x0)))) {
          pcVar13 = (char *)0x0;
          uVar7 = 2;
          uVar2 = 3;
        }
        else {
          lVar4 = (**(code **)(&DAT_1803c3730 + (ulonglong)uVar9 * 8))(param_1);
          if (lVar4 != 0) {
            if ((((byte)DAT_1803c9a60 & 0xf0) == 0x30) && (((byte)DAT_1803c9a60 & 6) == 4)) {
              puVar5 = (undefined1 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x9f,10);
              uVar10 = local_58;
              if (puVar5 == (undefined1 *)0x0) goto LAB_1802c5519;
              *puVar5 = (char)DAT_1803c9a60;
              local_res18[0] = 0;
              FUN_1802c7f40("MQTTPacket_encode",0x132,3);
              do {
                bVar12 = (byte)uVar10;
                uVar10 = uVar10 >> 7;
                bVar12 = bVar12 & 0x7f;
                if (puVar5 + 1 != (undefined1 *)0x0) {
                  bVar6 = bVar12 | 0x80;
                  if (uVar10 == 0) {
                    bVar6 = bVar12;
                  }
                  (puVar5 + 1)[local_res18[0]] = bVar6;
                }
                local_res18[0] = local_res18[0] + 1;
              } while (uVar10 != 0);
              FUN_1802c8030("MQTTPacket_encode",0x13f,local_res18,3);
              iVar1 = FUN_1802cadf0(*param_2,puVar5,(longlong)(local_res18[0] + 1),1,&local_40,
                                    &local_58,DAT_1803c9a60 >> 4 & 0xf,*(undefined4 *)(lVar4 + 0x14)
                                    ,1,param_1);
              *param_3 = iVar1;
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0xaa,puVar5);
            }
            UVar3 = GetTickCount64();
            param_2[2] = UVar3;
            goto LAB_1802c56fc;
          }
          *param_3 = -1;
          pcVar13 = "Bad MQTT packet, type %d";
          uVar7 = 0xffffffff;
          uVar2 = 5;
        }
        FUN_1802c6d90(uVar2,uVar7,pcVar13,uVar9);
      }
    }
LAB_1802c56fc:
    uVar2 = local_50;
  }
  if (*param_3 == -0x16) {
    FUN_1802d8e70(uVar2);
  }
LAB_1802c570d:
  FUN_1802c8030("MQTTPacket_Factory",0xb5,param_3,3);
  return lVar4;
}



// ===== FUN_1802c5780 @ 1802c5780 (size 81)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c5780(byte *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  _DAT_1803c9a68 = param_1;
  *param_2 = 0;
  iVar5 = 0;
  iVar4 = 1;
  do {
    iVar2 = iVar2 + 1;
    if (4 < iVar2) {
      return;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar3 = (bVar1 & 0x7f) * iVar4;
    iVar4 = iVar4 << 7;
    iVar5 = iVar5 + iVar3;
    _DAT_1803c9a68 = param_1;
    *param_2 = iVar5;
  } while ((char)bVar1 < '\0');
  return;
}



// ===== FUN_1802c57e0 @ 1802c57e0 (size 168)

int FUN_1802c57e0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTPacket_encode",0x132,3);
  do {
    bVar2 = (byte)param_2;
    param_2 = param_2 >> 7;
    bVar2 = bVar2 & 0x7f;
    if (param_1 != 0) {
      bVar1 = bVar2 | 0x80;
      if (param_2 == 0) {
        bVar1 = bVar2;
      }
      *(byte *)(local_res8[0] + param_1) = bVar1;
    }
    local_res8[0] = local_res8[0] + 1;
  } while (param_2 != 0);
  FUN_1802c8030("MQTTPacket_encode",0x13f,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c5890 @ 1802c5890 (size 175)

int FUN_1802c5890(int param_1,byte *param_2,int param_3,byte *param_4)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = 0;
  if (param_3 < 1) {
    iVar4 = 0;
  }
  else {
    pbVar5 = param_4;
    do {
      iVar3 = isprint((uint)*pbVar5);
      puVar1 = PTR_s_0123456789ABCDEF_1803c37b0;
      if (iVar3 == 0) {
        if (param_1 + -3 <= iVar4) break;
        param_2[0] = 0x5c;
        param_2[1] = 0x78;
        param_2[2] = puVar1[*pbVar5 & 0xf0];
        param_2 = param_2 + 3;
        iVar4 = iVar4 + 3;
        bVar2 = puVar1[(int)(char)*pbVar5 & 0xf];
      }
      else {
        if (param_1 <= iVar4) break;
        bVar2 = *pbVar5;
      }
      pbVar5 = pbVar5 + 1;
      *param_2 = bVar2;
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 1;
    } while ((longlong)pbVar5 - (longlong)param_4 < (longlong)param_3);
  }
  return iVar4;
}



// ===== FUN_1802c5940 @ 1802c5940 (size 98)

void FUN_1802c5940(longlong param_1)

{
  FUN_1802c7f40("MQTTPacket_freeAck",0x278,3);
  if (4 < *(int *)(param_1 + 0xc)) {
    FUN_1802c1750(param_1 + 0x10);
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x27b,param_1);
  FUN_1802c8030("MQTTPacket_freeAck",0x27c,0,3);
  return;
}



// ===== FUN_1802c59b0 @ 1802c59b0 (size 124)

void FUN_1802c59b0(longlong param_1)

{
  FUN_1802c7f40("MQTTPacket_freePublish",0x268,3);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x26a);
  }
  if (4 < *(int *)(param_1 + 0x24)) {
    FUN_1802c1750(param_1 + 0x28);
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x26d,param_1);
  FUN_1802c8030("MQTTPacket_freePublish",0x26e,0,3);
  return;
}



// ===== FUN_1802c5a30 @ 1802c5a30 (size 112)

void FUN_1802c5a30(longlong param_1)

{
  FUN_1802c7f40("MQTTPacket_freeSuback",699,3);
  if (4 < *(int *)(param_1 + 8)) {
    FUN_1802c1750(param_1 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1802c85f0();
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x2c0,param_1);
  FUN_1802c8030("MQTTPacket_freeSuback",0x2c1,0,3);
  return;
}



// ===== FUN_1802c5aa0 @ 1802c5aa0 (size 112)

void FUN_1802c5aa0(longlong param_1)

{
  FUN_1802c7f40("MQTTPacket_freeUnsuback",0x2cb,3);
  if (4 < *(int *)(param_1 + 8)) {
    FUN_1802c1750(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1802c85f0();
    }
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x2d2,param_1);
  FUN_1802c8030("MQTTPacket_freeUnsuback",0x2d3,0,3);
  return;
}



// ===== FUN_1802c5b30 @ 1802c5b30 (size 597)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802c5b30(undefined8 *param_1,byte param_2,undefined1 *param_3,ulonglong param_4,
                 undefined1 param_5,undefined4 param_6)

{
  ULONGLONG UVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 auStack_d8 [32];
  undefined1 **local_b8;
  ulonglong *local_b0;
  undefined4 local_a8;
  uint local_a0;
  undefined4 local_98;
  undefined4 local_90;
  int local_88;
  int local_84;
  ulonglong local_80;
  byte *local_78;
  undefined1 *local_70;
  longlong local_68;
  undefined4 local_60 [2];
  undefined1 **local_58;
  ulonglong *local_50;
  undefined1 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_d8;
  local_80 = param_4;
  local_70 = param_3;
  FUN_1802c7f40("MQTTPacket_send",0xcb,3);
  uVar4 = local_80;
  local_88 = 0;
  FUN_1802c7f40("MQTTPacket_encode",0x132,3);
  do {
    uVar4 = uVar4 >> 7;
    local_88 = local_88 + 1;
  } while (uVar4 != 0);
  FUN_1802c8030("MQTTPacket_encode",0x13f,&local_88,3);
  local_68 = (longlong)(local_88 + 1);
  local_78 = (byte *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0xcd);
  uVar4 = local_80;
  if (local_78 == (byte *)0x0) {
    local_84 = -1;
  }
  else {
    *local_78 = param_2;
    pbVar3 = local_78 + 1;
    local_88 = 0;
    FUN_1802c7f40("MQTTPacket_encode",0x132,3);
    do {
      bVar5 = (byte)uVar4;
      uVar4 = uVar4 >> 7;
      bVar5 = bVar5 & 0x7f;
      if (pbVar3 != (byte *)0x0) {
        bVar2 = bVar5 | 0x80;
        if (uVar4 == 0) {
          bVar2 = bVar5;
        }
        pbVar3[local_88] = bVar2;
      }
      local_88 = local_88 + 1;
    } while (uVar4 != 0);
    FUN_1802c8030("MQTTPacket_encode",0x13f,&local_88,3);
    if ((param_2 & 0xf0) == 0x60) {
      local_a0 = (uint)CONCAT11(*local_70,local_70[1]);
      local_90 = param_6;
      local_b0 = &local_80;
      local_98 = 0;
      local_a8 = 6;
      local_b8 = &local_70;
      FUN_1802cadf0(*param_1,local_78,local_68,1);
    }
    local_58 = &local_70;
    local_60[0] = 1;
    local_50 = &local_80;
    local_48 = &param_5;
    local_40 = 0;
    local_84 = FUN_1802d94a0(param_1,&local_78,&local_68,local_60);
    if (local_84 == 0) {
      UVar1 = GetTickCount64();
      param_1[1] = UVar1;
    }
    if (local_84 != -0x16) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0xeb,local_78);
    }
  }
  FUN_1802c8030("MQTTPacket_send",0xee,&local_84,3);
  return local_84;
}



// ===== FUN_1802c5d90 @ 1802c5d90 (size 299)

int FUN_1802c5d90(undefined4 param_1,uint param_2,int param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int local_18;
  uint local_14;
  
  local_18 = -1;
  FUN_1802c7f40("MQTTPacket_send_ack",0x290,3);
  puVar2 = (undefined1 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x291,2);
  if (puVar2 != (undefined1 *)0x0) {
    local_14 = local_14 & 0xffffff00;
    uVar3 = ((param_2 & 0xf) * 2 | param_4 & 1) << 3 | local_14;
    if (param_2 == 6) {
      uVar3 = uVar3 | 2;
    }
    iVar1 = param_3 + (param_3 >> 0x1f & 0xffU);
    *puVar2 = (char)((uint)iVar1 >> 8);
    puVar2[1] = (char)iVar1 - (char)(param_3 >> 0x1f);
    local_18 = FUN_1802c5b30(param_5,uVar3,puVar2,2,1,param_1);
    if (local_18 != -0x16) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x29a,puVar2);
    }
  }
  FUN_1802c8030("MQTTPacket_send_ack",0x29c,&local_18,3);
  return local_18;
}



// ===== FUN_1802c5ec0 @ 1802c5ec0 (size 374)

int FUN_1802c5ec0(undefined8 *param_1,int param_2,longlong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int local_res8 [2];
  undefined1 *local_res20;
  ulonglong in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  
  FUN_1802c7f40("MQTTPacket_send_disconnect",0x206,3);
  uVar4 = (undefined4)(in_stack_ffffffffffffffc8 >> 0x20);
  local_res20 = (undefined1 *)((ulonglong)local_res20 & 0xffffffffffffff00);
  uVar3 = (uint)local_res20 | 0xe0;
  if (*(int *)(param_1 + 0x24) < 5) {
LAB_1802c5fc2:
    local_res8[0] =
         FUN_1802c5b30(param_1 + 6,uVar3,0,0,in_stack_ffffffffffffffc8 & 0xffffffff00000000,
                       *(int *)(param_1 + 0x24));
  }
  else {
    if (param_3 == 0) {
      if (param_2 == 0) goto LAB_1802c5fc2;
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_1802c19f0(param_3);
    }
    puVar2 = (undefined1 *)
             FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x210,(longlong)iVar1 + 1);
    if (puVar2 == (undefined1 *)0x0) {
      local_res8[0] = -1;
    }
    else {
      *puVar2 = (char)param_2;
      local_res20 = puVar2 + 1;
      if (param_3 != 0) {
        FUN_1802c1e30(&local_res20,param_3);
      }
      local_res8[0] =
           FUN_1802c5b30(param_1 + 6,uVar3,puVar2,(longlong)iVar1 + 1,CONCAT44(uVar4,1),
                         *(undefined4 *)(param_1 + 0x24));
      if (local_res8[0] != -0x16) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x21b,puVar2);
      }
    }
  }
  FUN_1802c6d90(4,0x1c,0,param_1[6],*param_1,local_res8[0]);
  FUN_1802c8030("MQTTPacket_send_disconnect",0x221,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802c6040 @ 1802c6040 (size 169)

undefined4
FUN_1802c6040(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 local_res18 [2];
  
  FUN_1802c7f40("MQTTPacket_send_puback",0x2ad,3);
  local_res18[0] = FUN_1802c5d90(param_1,4,param_2,0,param_3);
  FUN_1802c6d90(4,0xc,0,*param_3,param_4,param_2,local_res18[0]);
  FUN_1802c8030("MQTTPacket_send_puback",0x2b0,local_res18,3);
  return local_res18[0];
}



// ===== FUN_1802c60f0 @ 1802c60f0 (size 169)

undefined4
FUN_1802c60f0(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 local_res18 [2];
  
  FUN_1802c7f40("MQTTPacket_send_pubcomp",0x30c,3);
  local_res18[0] = FUN_1802c5d90(param_1,7,param_2,0,param_3);
  FUN_1802c6d90(4,0x12,0,*param_3,param_4,param_2,local_res18[0]);
  FUN_1802c8030("MQTTPacket_send_pubcomp",0x30f,local_res18,3);
  return local_res18[0];
}



// ===== FUN_1802c61a0 @ 1802c61a0 (size 1176)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1802c61a0(longlong param_1,uint param_2,uint param_3,uint param_4,undefined8 *param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  uint local_140;
  uint local_138;
  uint local_130;
  uint local_128;
  undefined8 *local_120;
  uint local_118;
  undefined8 *local_110;
  uint local_108;
  uint local_104;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined1 **local_e0;
  undefined8 *local_d8;
  undefined1 **local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined1 **local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  char *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  char *pcStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803c3d80 ^ (ulonglong)auStack_168;
  local_100 = param_5;
  local_f8 = param_6;
  local_108 = 0xffffffff;
  local_104 = param_4;
  FUN_1802c7f40("MQTTPacket_send_publish",0x386,3);
  puVar5 = (undefined1 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x387,2);
  local_f0 = puVar5;
  if (puVar5 == (undefined1 *)0x0) goto LAB_1802c65f9;
  uVar6 = ((param_2 & 1 | 6) << 2 | param_3 & 3) * 2 | param_4 & 1 | local_104 & 0xffffff30;
  if (((int)param_3 < 1) && (*(int *)(param_1 + 0x24) < 5)) {
    pcStack_60 = *(char **)(param_1 + 8);
    local_58 = *(undefined8 *)(param_1 + 0x18);
    local_88 = (undefined1 *)0x2;
    local_68 = puVar5;
    local_80 = (char *)strlen(pcStack_60);
    local_78 = (undefined1 *)(longlong)*(int *)(param_1 + 0x20);
    local_d8 = &local_88;
    local_98 = (undefined1 *)0x1;
    local_d0 = &local_98;
    local_c8 = *(undefined4 *)(param_1 + 0x40);
    local_c4 = 0;
    local_90 = 0;
    iVar3 = (int)local_80 + ((int)local_80 >> 0x1f & 0xffU);
    local_e8 = CONCAT44(local_e8._4_4_,3);
    *puVar5 = (char)((uint)iVar3 >> 8);
    puVar5[1] = (char)iVar3 - ((char)((ulonglong)local_80 >> 0x18) >> 7);
    local_e0 = &local_68;
    local_108 = FUN_1802c67a0(param_5,uVar6,&local_e8,*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x40) = local_c8;
LAB_1802c64bc:
    uVar6 = 0;
    iVar3 = *(int *)(param_1 + 0x20);
    pbVar1 = *(byte **)(param_1 + 0x18);
    if (0 < (longlong)iVar3) {
      lVar7 = 0;
      pbVar8 = pbVar1;
      do {
        iVar4 = isprint((uint)*pbVar8);
        if (iVar4 == 0) {
          if (0x1a < (int)uVar6) break;
          *(undefined2 *)((longlong)&local_88 + lVar7) = 0x785c;
          *(undefined *)((longlong)&local_88 + lVar7 + 2) =
               PTR_s_0123456789ABCDEF_1803c37b0[*pbVar8 & 0xf0];
          lVar7 = lVar7 + 3;
          uVar6 = uVar6 + 3;
          bVar2 = PTR_s_0123456789ABCDEF_1803c37b0[(int)(char)*pbVar8 & 0xf];
        }
        else {
          if (0x1d < (int)uVar6) break;
          bVar2 = *pbVar8;
        }
        pbVar8 = pbVar8 + 1;
        *(byte *)((longlong)&local_88 + lVar7) = bVar2;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while ((longlong)pbVar8 - (longlong)pbVar1 < (longlong)iVar3);
    }
    local_130 = *(uint *)(param_1 + 0x20);
    if (param_3 == 0) {
      local_120 = &local_88;
      local_140 = local_104;
      local_148 = local_f8;
      local_138 = local_108;
      local_128 = uVar6;
      FUN_1802c6d90(4,0x1b,0,*local_100);
    }
    else {
      local_110 = &local_88;
      local_120 = (undefined8 *)CONCAT44(local_120._4_4_,local_130);
      local_130 = local_104;
      local_140 = *(uint *)(param_1 + 0x14);
      local_148 = local_f8;
      local_138 = param_3;
      local_128 = local_108;
      local_118 = uVar6;
      FUN_1802c6d90(4,10,0,*local_100);
    }
    puVar5 = local_f0;
  }
  else {
    if (*(int *)(param_1 + 0x24) < 5) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_1802c19f0(param_1 + 0x28);
    }
    local_70 = *(undefined8 *)(param_1 + 0x18);
    local_80 = *(char **)(param_1 + 8);
    local_e8 = 2;
    local_78 = (undefined1 *)0x0;
    local_88 = puVar5;
    local_e0 = (undefined1 **)strlen(local_80);
    local_c0[0] = 4;
    local_68 = _DAT_1803825d0;
    pcStack_60 = _UNK_1803825d8;
    iVar4 = 0;
    if (0 < (int)param_3) {
      iVar4 = 2;
    }
    local_d8 = (undefined8 *)(longlong)(iVar4 + iVar3);
    local_d0 = (undefined1 **)(longlong)*(int *)(param_1 + 0x20);
    local_b8 = &local_88;
    local_b0 = &local_e8;
    local_a0 = *(undefined4 *)(param_1 + 0x40);
    local_9c = 0;
    local_a8 = &local_68;
    local_78 = (undefined1 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x398);
    local_98 = local_78;
    if (local_78 != (undefined1 *)0x0) {
      if (0 < (int)param_3) {
        iVar3 = *(int *)(param_1 + 0x14);
        iVar4 = iVar3 + (iVar3 >> 0x1f & 0xffU);
        *local_78 = (char)((uint)iVar4 >> 8);
        local_78[1] = (char)iVar4 - (char)(iVar3 >> 0x1f);
        local_98 = local_78 + 2;
      }
      if (4 < *(int *)(param_1 + 0x24)) {
        FUN_1802c1e30(&local_98,param_1 + 0x28);
      }
      iVar3 = (int)local_e0 + ((int)local_e0 >> 0x1f & 0xffU);
      *puVar5 = (char)((uint)iVar3 >> 8);
      puVar5[1] = (char)iVar3 - ((char)((ulonglong)local_e0 >> 0x18) >> 7);
      local_98 = puVar5 + 2;
      local_108 = FUN_1802c67a0(local_100,uVar6,local_c0,*(undefined4 *)(param_1 + 0x24));
      if (local_108 != 0xffffffea) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x3a4,local_78);
      }
      *(undefined4 *)(param_1 + 0x40) = local_a0;
      goto LAB_1802c64bc;
    }
  }
  if (local_108 != 0xffffffea) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x3c6,puVar5);
  }
LAB_1802c65f9:
  FUN_1802c8030("MQTTPacket_send_publish",0x3c8,&local_108,3);
  return local_108;
}



// ===== FUN_1802c6640 @ 1802c6640 (size 169)

undefined4
FUN_1802c6640(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 local_res18 [2];
  
  FUN_1802c7f40("MQTTPacket_send_pubrec",0x2e3,3);
  local_res18[0] = FUN_1802c5d90(param_1,5,param_2,0,param_3);
  FUN_1802c6d90(4,0xd,0,*param_3,param_4,param_2,local_res18[0]);
  FUN_1802c8030("MQTTPacket_send_pubrec",0x2e6,local_res18,3);
  return local_res18[0];
}



// ===== FUN_1802c66f0 @ 1802c66f0 (size 174)

undefined4
FUN_1802c66f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 local_res20 [2];
  
  FUN_1802c7f40("MQTTPacket_send_pubrel",0x2f8,3);
  local_res20[0] = FUN_1802c5d90(param_1,6,param_2,param_3,param_4);
  FUN_1802c6d90(4,0x10,0,*param_4,param_5,param_2,local_res20[0]);
  FUN_1802c8030("MQTTPacket_send_pubrel",0x2fb,local_res20,3);
  return local_res20[0];
}



// ===== FUN_1802c67a0 @ 1802c67a0 (size 780)

int FUN_1802c67a0(undefined8 *param_1,byte param_2,uint *param_3,undefined4 param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ULONGLONG UVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  byte bVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int local_res18 [2];
  int local_38 [2];
  byte *local_30;
  longlong local_28 [2];
  
  uVar13 = 0;
  FUN_1802c7f40("MQTTPacket_sends");
  uVar2 = *param_3;
  lVar15 = (longlong)(int)uVar2;
  iVar16 = 0;
  if ((0 < (int)uVar2) && (3 < uVar2)) {
    lVar17 = 0;
    lVar18 = 0;
    lVar9 = 0;
    lVar10 = 0;
    uVar8 = uVar2 & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    lVar5 = 0;
    do {
      plVar1 = (longlong *)(*(longlong *)(param_3 + 4) + lVar5 * 8);
      iVar16 = iVar16 + 4;
      lVar17 = lVar17 + *plVar1;
      lVar18 = lVar18 + plVar1[1];
      plVar1 = (longlong *)(*(longlong *)(param_3 + 4) + 0x10 + lVar5 * 8);
      lVar5 = lVar5 + 4;
      lVar9 = lVar9 + *plVar1;
      lVar10 = lVar10 + plVar1[1];
    } while (lVar5 < (int)(uVar2 - uVar8));
    auVar4._8_4_ = (int)(lVar10 + lVar18);
    auVar4._0_8_ = lVar9 + lVar17;
    auVar4._12_4_ = (int)((ulonglong)(lVar10 + lVar18) >> 0x20);
    uVar13 = lVar9 + lVar17 + auVar4._8_8_;
  }
  lVar9 = (longlong)iVar16;
  lVar10 = 0;
  lVar17 = 0;
  if (lVar15 <= lVar9) goto LAB_1802c689b;
  lVar18 = *(longlong *)(param_3 + 4);
  if (lVar15 - lVar9 < 2) {
LAB_1802c6890:
    uVar13 = uVar13 + *(longlong *)(lVar18 + lVar9 * 8);
  }
  else {
    do {
      lVar10 = lVar10 + *(longlong *)(lVar18 + lVar9 * 8);
      lVar17 = lVar17 + *(longlong *)(lVar18 + 8 + lVar9 * 8);
      lVar9 = lVar9 + 2;
    } while (lVar9 < lVar15 + -1);
    if (lVar9 < lVar15) goto LAB_1802c6890;
  }
  uVar13 = uVar13 + lVar17 + lVar10;
LAB_1802c689b:
  local_res18[0] = 0;
  FUN_1802c7f40("MQTTPacket_encode",0x132,3);
  uVar11 = uVar13;
  do {
    uVar11 = uVar11 >> 7;
    local_res18[0] = local_res18[0] + 1;
  } while (uVar11 != 0);
  FUN_1802c8030("MQTTPacket_encode",0x13f,local_res18,3);
  local_28[0] = (longlong)(local_res18[0] + 1);
  local_30 = (byte *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x109);
  if (local_30 == (byte *)0x0) {
    local_38[0] = -1;
  }
  else {
    *local_30 = param_2;
    pbVar12 = local_30 + 1;
    local_res18[0] = 0;
    FUN_1802c7f40("MQTTPacket_encode",0x132,3);
    do {
      bVar14 = (byte)uVar13;
      uVar13 = uVar13 >> 7;
      bVar14 = bVar14 & 0x7f;
      if (pbVar12 != (byte *)0x0) {
        bVar7 = bVar14 | 0x80;
        if (uVar13 == 0) {
          bVar7 = bVar14;
        }
        pbVar12[local_res18[0]] = bVar7;
      }
      local_res18[0] = local_res18[0] + 1;
    } while (uVar13 != 0);
    FUN_1802c8030("MQTTPacket_encode",0x13f,local_res18,3);
    if (((param_2 & 0xf0) == 0x30) && ((param_2 & 6) != 0)) {
      puVar3 = *(undefined1 **)(*(longlong *)(param_3 + 2) + 0x10);
      FUN_1802cadf0(*param_1,local_30,local_28[0],*param_3,*(longlong *)(param_3 + 2),
                    *(undefined8 *)(param_3 + 4),3,CONCAT11(*puVar3,puVar3[1]),0,param_4);
    }
    local_38[0] = FUN_1802d94a0(param_1,&local_30,local_28,param_3);
    if (local_38[0] == 0) {
      UVar6 = GetTickCount64();
      param_1[1] = UVar6;
    }
    if (local_38[0] != -0x16) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x121,local_30);
    }
  }
  FUN_1802c8030("MQTTPacket_sends",0x123,local_38,3);
  return local_38[0];
}



// ===== FUN_1802c6b10 @ 1802c6b10 (size 208)

void * FUN_1802c6b10(longlong *param_1,ulonglong param_2,uint *param_3)

{
  undefined1 *puVar1;
  void *_Dst;
  uint uVar2;
  
  _Dst = (void *)0x0;
  FUN_1802c7f40("readUTFlen",0x185,3);
  puVar1 = (undefined1 *)*param_1;
  if (1 < (longlong)(param_2 - (longlong)puVar1)) {
    uVar2 = (uint)CONCAT11(*puVar1,puVar1[1]);
    *param_1 = (longlong)(puVar1 + 2);
    *param_3 = uVar2;
    if ((ulonglong)uVar2 + *param_1 <= param_2) {
      _Dst = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacket.c",0x18b,uVar2 + 1);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,(void *)*param_1,(longlong)(int)*param_3);
        *(undefined1 *)((longlong)(int)*param_3 + (longlong)_Dst) = 0;
        *param_1 = *param_1 + (longlong)(int)*param_3;
      }
    }
  }
  FUN_1802c8030("readUTFlen",0x193,0,3);
  return _Dst;
}



// ===== FUN_1802c6bf0 @ 1802c6bf0 (size 88)

void FUN_1802c6bf0(longlong *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 + (param_3 >> 0x1f & 0xffU);
  *(char *)*param_1 = (char)((uint)iVar1 >> 8);
  *param_1 = *param_1 + 1;
  *(char *)*param_1 = (char)iVar1 - (char)(param_3 >> 0x1f);
  *param_1 = *param_1 + 1;
  memcpy((void *)*param_1,param_2,(longlong)param_3);
  *param_1 = *param_1 + (longlong)param_3;
  return;
}



// ===== FUN_1802c6c80 @ 1802c6c80 (size 64)

void FUN_1802c6c80(longlong *param_1,uint param_2)

{
  *(char *)*param_1 = (char)(param_2 >> 0x18);
  *param_1 = *param_1 + 1;
  *(char *)*param_1 = (char)(param_2 >> 0x10);
  *param_1 = *param_1 + 1;
  *(char *)*param_1 = (char)((param_2 & 0xffff) >> 8);
  *param_1 = *param_1 + 1;
  *(char *)*param_1 = (char)(param_2 & 0xffff);
  *param_1 = *param_1 + 1;
  return;
}



// ===== FUN_1802c6cc0 @ 1802c6cc0 (size 89)

void FUN_1802c6cc0(longlong *param_1,int *param_2)

{
  int iVar1;
  void *_Src;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = iVar1 + (iVar1 >> 0x1f & 0xffU);
  *(char *)*param_1 = (char)((uint)iVar2 >> 8);
  *param_1 = *param_1 + 1;
  _Src = *(void **)(param_2 + 2);
  *(char *)*param_1 = (char)iVar2 - (char)(iVar1 >> 0x1f);
  *param_1 = *param_1 + 1;
  memcpy((void *)*param_1,_Src,(longlong)iVar1);
  *param_1 = *param_1 + (longlong)iVar1;
  return;
}



// ===== FUN_1802c6d20 @ 1802c6d20 (size 100)

void FUN_1802c6d20(longlong *param_1,char *param_2)

{
  int iVar1;
  size_t _Size;
  
  _Size = strlen(param_2);
  iVar1 = (int)_Size + ((int)_Size >> 0x1f & 0xffU);
  *(char *)*param_1 = (char)((uint)iVar1 >> 8);
  *param_1 = *param_1 + 1;
  *(char *)*param_1 = (char)iVar1 - ((char)(_Size >> 0x18) >> 7);
  *param_1 = *param_1 + 1;
  memcpy((void *)*param_1,param_2,_Size);
  *param_1 = *param_1 + _Size;
  return;
}



// ===== FUN_1802c6d90 @ 1802c6d90 (size 243)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c6d90(int param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  undefined8 local_res20;
  
  if (DAT_1803c37b8 <= param_1) {
    local_res20 = param_4;
    FUN_1802cdcf0(DAT_1804479d0);
    if ((param_3 == 0) && (lVar5 = FUN_1802da420(param_2,param_1), lVar5 != 0)) {
      param_3 = lVar5;
    }
    puVar6 = (ulonglong *)FUN_1800e0ca0();
    __stdio_common_vsprintf(*puVar6 | 2,&DAT_1803c9ab0,0x200,param_3,0,&local_res20);
    if (DAT_1803c9a78 != 0) {
      puVar7 = (undefined4 *)FUN_1802c7470();
      uVar4 = uRam00000001804479ec;
      uVar3 = uRam00000001804479e8;
      uVar2 = uRam00000001804479e4;
      uVar1 = _DAT_1804479e0;
      puVar7[0x49] = 2;
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      strncpy((char *)(puVar7 + 7),&DAT_1803c9ab0,0x101);
      *(undefined1 *)(puVar7 + 0x47) = 0;
      FUN_1802c72f0(param_1,puVar7);
    }
    FUN_1802cdd70(DAT_1804479d0);
  }
  return;
}



// ===== FUN_1802c6e90 @ 1802c6e90 (size 867)

undefined8 FUN_1802c6e90(longlong *param_1)

{
  ulonglong _Size;
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  
  DAT_1803c9a78 = malloc((longlong)DAT_1803c37bc * 0x130);
  if (DAT_1803c9a78 == (char *)0x0) {
    return 0xffffffff;
  }
  DAT_1803c9a74 = DAT_1803c37bc;
  pcVar4 = getenv("MQTT_C_CLIENT_TRACE");
  if ((pcVar4 != (char *)0x0) && (sVar5 = strlen(pcVar4), sVar5 != 0)) {
    iVar3 = strcmp(pcVar4,"ON");
    if ((iVar3 != 0) && (DAT_1803c9a80 = fopen(pcVar4,"w"), DAT_1803c9a80 != (FILE *)0x0)) {
      sVar5 = strlen(pcVar4);
      DAT_1803c9a88 = malloc(sVar5 + 1);
      if (DAT_1803c9a88 == (char *)0x0) {
        pcVar4 = DAT_1803c9a78;
      }
      else {
        strcpy(DAT_1803c9a88,pcVar4);
        sVar5 = strlen(pcVar4);
        _Size = sVar5 + 3;
        DAT_1803c9a90 = malloc(_Size);
        if (DAT_1803c9a90 != (void *)0x0) {
          iVar3 = snprintf(DAT_1803c9a90,_Size,&DAT_1803825f8,DAT_1803c9a88);
          if (_Size <= (ulonglong)(longlong)iVar3) {
            *(undefined1 *)((longlong)DAT_1803c9a90 + sVar5 + 2) = 0;
          }
          goto LAB_1802c6fed;
        }
        free(DAT_1803c9a78);
        pcVar4 = DAT_1803c9a88;
      }
      free(pcVar4);
      return 0xffffffff;
    }
    DAT_1803c9a80 = (FILE *)__acrt_iob_func(1);
  }
LAB_1802c6fed:
  pcVar4 = getenv("MQTT_C_CLIENT_TRACE_MAX_LINES");
  if (((pcVar4 != (char *)0x0) && (sVar5 = strlen(pcVar4), sVar5 != 0)) &&
     (DAT_1803c37c8 = atoi(pcVar4), DAT_1803c37c8 < 1)) {
    DAT_1803c37c8 = 1000;
  }
  pcVar4 = getenv("MQTT_C_CLIENT_TRACE_LEVEL");
  if ((pcVar4 != (char *)0x0) && (sVar5 = strlen(pcVar4), sVar5 != 0)) {
    iVar3 = strcmp(pcVar4,"MAXIMUM");
    if ((iVar3 == 0) || (iVar3 = strcmp(pcVar4,"TRACE_MAXIMUM"), iVar3 == 0)) {
      DAT_1803c37b8 = 1;
    }
    else {
      iVar3 = strcmp(pcVar4,"MEDIUM");
      if ((iVar3 == 0) || (iVar3 = strcmp(pcVar4,"TRACE_MEDIUM"), iVar3 == 0)) {
        DAT_1803c37b8 = 2;
      }
      else {
        iVar3 = strcmp(pcVar4,"MINIMUM");
        if ((iVar3 == 0) || (iVar3 = strcmp(pcVar4,"TRACE_MINIMUM"), iVar3 == 0)) {
          DAT_1803c37b8 = 3;
        }
        else {
          iVar3 = strcmp(pcVar4,"PROTOCOL");
          if ((iVar3 == 0) || (iVar3 = strcmp(pcVar4,"TRACE_PROTOCOL"), iVar3 == 0)) {
            DAT_1803c37cc = 4;
          }
          else {
            iVar3 = strcmp(pcVar4,"ERROR");
            if ((iVar3 == 0) || (iVar3 = strcmp(pcVar4,"TRACE_ERROR"), iVar3 == 0)) {
              DAT_1803c37cc = 5;
            }
          }
        }
      }
    }
  }
  FUN_1802c7200(3,"=========================================================");
  FUN_1802c7200(3,"                   Trace Output");
  if (param_1 != (longlong *)0x0) {
    lVar2 = *param_1;
    while (lVar2 != 0) {
      snprintf(&DAT_1803c9ab0,0x200,"%s: %s",lVar2,param_1[1]);
      FUN_1802c7200(3,&DAT_1803c9ab0);
      plVar1 = param_1 + 2;
      param_1 = param_1 + 2;
      lVar2 = *plVar1;
    }
  }
  FUN_1802c7200(3,"=========================================================");
  return 0xffffffff;
}



// ===== FUN_1802c7200 @ 1802c7200 (size 228)

void FUN_1802c7200(undefined4 param_1,undefined8 param_2)

{
  FILE *pFVar1;
  
  if (DAT_1803c9a80 != (FILE *)0x0) {
    FUN_1801aa390(DAT_1803c9a80,&DAT_1802eccf8,param_2);
    pFVar1 = (FILE *)__acrt_iob_func(1);
    if ((DAT_1803c9a80 == pFVar1) ||
       (DAT_1803c9a98 = DAT_1803c9a98 + 1, DAT_1803c9a98 < DAT_1803c37c8)) {
      fflush(DAT_1803c9a80);
    }
    else {
      fclose(DAT_1803c9a80);
      _unlink(DAT_1803c9a90);
      rename(DAT_1803c9a88,DAT_1803c9a90);
      DAT_1803c9a80 = fopen(DAT_1803c9a88,"w");
      if (DAT_1803c9a80 == (FILE *)0x0) {
        DAT_1803c9a80 = (FILE *)__acrt_iob_func(1);
      }
      DAT_1803c9a98 = 0;
    }
  }
  if (DAT_1803c9aa0 != (code *)0x0) {
    (*DAT_1803c9aa0)(param_1,param_2);
  }
  return;
}



// ===== FUN_1802c72f0 @ 1802c72f0 (size 381)

void FUN_1802c72f0(int param_1,__time64_t *param_2)

{
  char *_Source;
  undefined4 uVar1;
  int iVar2;
  tm *_Tm;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = (undefined *)0x0;
  iVar2 = DAT_1803c37cc;
  if (DAT_1803c37cc == -1) {
    iVar2 = DAT_1803c37b8;
  }
  if (iVar2 <= param_1) {
    if ((DAT_1803c9a80 != 0) || (DAT_1803c9aa0 != 0)) {
      _Tm = _localtime64(param_2);
      puVar4 = &DAT_1803c9ab7;
      strftime(&DAT_1803c9ab7,0x50,"%Y%m%d %H%M%S ",_Tm);
      snprintf(&DAT_1803c9ac6,0x1ea,".%.3hu ",(short)param_2[1]);
      DAT_1803c9ab6 = 0x20;
      _Source = (char *)((longlong)param_2 + 0x1c);
      if (*(int *)((longlong)param_2 + 0x124) == 2) {
        strncpy(&DAT_1803c9acb,_Source,0x1e5);
      }
      else {
        uVar3 = FUN_1802da420((int)param_2[2],*(undefined4 *)((longlong)param_2 + 300));
        uVar1 = (undefined4)param_2[3];
        if (*(int *)((longlong)param_2 + 0x124) == 1) {
          snprintf(&DAT_1803c9acb,0x1e5,uVar3,*(undefined4 *)((longlong)param_2 + 0x14),uVar1,
                   &PTR_1802ead18,uVar1,_Source,(int)param_2[0x24],(int)param_2[0x25]);
        }
        else {
          snprintf(&DAT_1803c9acb,0x1e5,uVar3,*(undefined4 *)((longlong)param_2 + 0x14),uVar1,
                   &PTR_1802ead18,uVar1,_Source,(int)param_2[0x24]);
        }
      }
    }
    FUN_1802c7200(param_1,puVar4);
  }
  return;
}



// ===== FUN_1802c7470 @ 1802c7470 (size 278)

void * FUN_1802c7470(void)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  _ftime64(&DAT_1804479e0);
  if (DAT_1803c9a74 != DAT_1803c37bc) {
    _Dst = malloc((longlong)DAT_1803c37bc * 0x130);
    if (_Dst == (void *)0x0) {
      return (void *)0x0;
    }
    iVar2 = DAT_1803c37bc;
    if (DAT_1803c9a74 < DAT_1803c37bc) {
      iVar2 = DAT_1803c9a74;
    }
    memcpy(_Dst,DAT_1803c9a78,(longlong)iVar2 * 0x130);
    free(DAT_1803c9a78);
    DAT_1803c9a74 = DAT_1803c37bc;
    DAT_1803c9a78 = _Dst;
    if ((DAT_1803c37bc + 1 < DAT_1803c37c4) || (DAT_1803c37bc + 1 < DAT_1803c9a70)) {
      DAT_1803c9a70 = 0;
      DAT_1803c37c4 = -1;
    }
  }
  lVar1 = (longlong)DAT_1803c9a70;
  if (DAT_1803c9a70 == DAT_1803c37c4) {
    DAT_1803c37c4 = DAT_1803c37c4 + 1;
    if (DAT_1803c37c4 != DAT_1803c37bc) goto LAB_1802c7569;
  }
  else if (DAT_1803c37c4 != -1) goto LAB_1802c7569;
  DAT_1803c37c4 = 0;
LAB_1802c7569:
  DAT_1803c9a70 = DAT_1803c9a70 + 1;
  if (DAT_1803c9a70 == DAT_1803c37bc) {
    DAT_1803c9a70 = 0;
  }
  return (void *)(lVar1 * 0x130 + (longlong)DAT_1803c9a78);
}



// ===== FUN_1802c7590 @ 1802c7590 (size 218)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c7590(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  char *param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((DAT_1803c9a78 != 0) && (DAT_1803c37b8 <= param_1)) {
    FUN_1802cdcf0(DAT_1804479d0);
    puVar3 = (undefined8 *)FUN_1802c7470();
    uVar2 = uRam00000001804479e8;
    uVar1 = _DAT_1804479e0;
    *(undefined4 *)(puVar3 + 2) = param_2;
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_3;
    *(undefined4 *)(puVar3 + 3) = param_4;
    strcpy((char *)((longlong)puVar3 + 0x1c),param_5);
    *(int *)((longlong)puVar3 + 300) = param_1;
    *(undefined4 *)(puVar3 + 0x24) = param_6;
    if (param_7 == (undefined4 *)0x0) {
      *(undefined4 *)((longlong)puVar3 + 0x124) = 0;
    }
    else {
      *(undefined4 *)((longlong)puVar3 + 0x124) = 1;
      *(undefined4 *)(puVar3 + 0x25) = *param_7;
    }
    FUN_1802c72f0(param_1,puVar3);
    FUN_1802cdd70(DAT_1804479d0);
  }
  return;
}



// ===== FUN_1802c7670 @ 1802c7670 (size 161)

void FUN_1802c7670(void)

{
  FILE *pFVar1;
  
  free(DAT_1803c9a78);
  DAT_1803c9a78 = (void *)0x0;
  DAT_1803c9a74 = 0;
  if (DAT_1803c9a80 != (FILE *)0x0) {
    pFVar1 = (FILE *)__acrt_iob_func(1);
    if (DAT_1803c9a80 != pFVar1) {
      fclose(DAT_1803c9a80);
    }
    DAT_1803c9a80 = (FILE *)0x0;
  }
  if (DAT_1803c9a88 != (void *)0x0) {
    free(DAT_1803c9a88);
    DAT_1803c9a88 = (void *)0x0;
  }
  if (DAT_1803c9a90 != (void *)0x0) {
    free(DAT_1803c9a90);
    DAT_1803c9a90 = (void *)0x0;
  }
  DAT_1803c37c4 = 0xffffffff;
  DAT_1803c9a70 = 0;
  DAT_1803c37cc = 0xffffffff;
  return;
}



// ===== snprintf @ 1802c7720 (size 92)

/* Library Function - Single Match
    snprintf
   
   Library: Visual Studio 2019 Release */

int snprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_1800e0ca0();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// ===== FUN_1802c77b0 @ 1802c77b0 (size 348)

void FUN_1802c77b0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_1802c6d90(3,0xffffffff,"Maximum heap use was %d bytes",DAT_1803c9cb8);
  if (CONCAT44(uRam00000001803c9cb4,DAT_1803c9cb0) < 0x15) {
    return;
  }
  FUN_1802c6d90(5,0xffffffff,"Some memory not freed at shutdown, possible memory leak");
  FUN_1802cdcf0(DAT_1804479c8);
  FUN_1802c6d90(5,0xffffffff,"Heap scan start, total %d bytes",DAT_1803c9cb0);
  for (lVar2 = FUN_1802dab80(&DAT_1803c9cc0,0); lVar2 != 0;
      lVar2 = FUN_1802dab80(&DAT_1803c9cc0,lVar2)) {
    puVar1 = *(undefined8 **)(lVar2 + 0x18);
    uVar5 = puVar1[2];
    uVar4 = *puVar1;
    FUN_1802c6d90(5,0xffffffff,"Heap element size %d, line %d, file %s, ptr %p",
                  *(undefined4 *)(puVar1 + 3),*(undefined4 *)(puVar1 + 1),uVar4,uVar5);
    if (*(ulonglong *)(lVar2 + 0x20) < 10) {
      uVar3 = *(undefined4 *)(puVar1 + 3);
    }
    else {
      uVar3 = 10;
    }
    FUN_1802c6d90(5,0xffffffff,"  Content %.*s",uVar3,puVar1[2] + 8,uVar4,uVar5);
  }
  FUN_1802c6d90(5,0xffffffff,"Heap scan end");
  FUN_1802cdd70(DAT_1804479c8);
  return;
}



// ===== FUN_1802c7920 @ 1802c7920 (size 239)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1802c7920(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 *_Memory;
  longlong lVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_1802daab0(&DAT_1803c9cc0,param_3 + -8);
  if (lVar1 != 0) {
    _Memory = *(undefined8 **)(lVar1 + 0x18);
    FUN_1802c6d90(1,0xffffffff,
                  "Freeing %d bytes in heap at file %s line %d, heap use now %d bytes\n",
                  *(undefined4 *)(_Memory + 3),param_1,param_2,DAT_1803c9cb0);
    FUN_1802c7a10(param_1,param_2,param_3,_Memory[3]);
    free((void *)*_Memory);
    _DAT_1803c9cb0 = _DAT_1803c9cb0 - _Memory[3];
    FUN_1802dac70(&DAT_1803c9cc0,lVar1,0);
    free(_Memory);
  }
  else {
    FUN_1802c6d90(5,0xd,"Failed to remove heap item at file %s line %d",param_1,
                  CONCAT44(uVar2,param_2));
  }
  return lVar1 != 0;
}



// ===== FUN_1802c7a10 @ 1802c7a10 (size 170)

void FUN_1802c7a10(undefined8 param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  if (*(longlong *)(param_3 + -8) != DAT_1803c37d0) {
    FUN_1802c6d90(5,0xd,PTR_s_Invalid__s_eyecatcher__llx_in_he_1803c37e8,"start",
                  *(longlong *)(param_3 + -8),param_1,param_2);
  }
  if (*(longlong *)(param_3 + param_4) != DAT_1803c37d0) {
    FUN_1802c6d90(5,0xd,PTR_s_Invalid__s_eyecatcher__llx_in_he_1803c37e8,&DAT_1803827d0,
                  *(longlong *)(param_3 + param_4),param_1,param_2);
  }
  return;
}



// ===== FUN_1802c7ac0 @ 1802c7ac0 (size 139)

void FUN_1802c7ac0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    FUN_1802c6d90(5,0xffffffff,"Call of free(NULL) in %s,%d",param_1,param_2);
    return;
  }
  FUN_1802cdcf0(DAT_1804479c8);
  iVar1 = FUN_1802c7920(param_1,param_2,param_3);
  if (iVar1 != 0) {
    free((void *)(param_3 + -8));
  }
  FUN_1802cdd70(DAT_1804479c8);
  return;
}



// ===== FUN_1802c7b50 @ 1802c7b50 (size 482)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1802c7b50(char *param_1,undefined4 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 *_Memory;
  void *pvVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  sVar2 = strlen(param_1);
  lVar5 = 0;
  FUN_1802cdcf0(DAT_1804479c8);
  uVar4 = param_3 % (ulonglong)(longlong)DAT_1803c37e0;
  if (uVar4 != 0) {
    param_3 = param_3 + ((longlong)DAT_1803c37e0 - uVar4);
  }
  _Memory = malloc(0x20);
  if (_Memory == (undefined8 *)0x0) {
    FUN_1802c6d90(5,0xd,PTR_s_Memory_allocation_error_1803c37d8);
  }
  else {
    *_Memory = 0;
    _Memory[1] = 0;
    _Memory[2] = 0;
    _Memory[3] = param_3;
    pvVar3 = malloc(sVar2 + 1);
    *_Memory = pvVar3;
    if (pvVar3 == (void *)0x0) {
      FUN_1802c6d90(5,0xd,PTR_s_Memory_allocation_error_1803c37d8);
      free(_Memory);
    }
    else {
      memset(pvVar3,0,sVar2 + 1);
      strcpy((char *)*_Memory,param_1);
      *(undefined4 *)(_Memory + 1) = param_2;
      pvVar3 = malloc(param_3 + 0x10);
      _Memory[2] = pvVar3;
      if (pvVar3 == (void *)0x0) {
        FUN_1802c6d90(5,0xd,PTR_s_Memory_allocation_error_1803c37d8);
        free((void *)*_Memory);
        free(_Memory);
      }
      else {
        memset(pvVar3,0,param_3 + 0x10);
        uVar1 = DAT_1803c37d0;
        *(undefined8 *)_Memory[2] = DAT_1803c37d0;
        *(undefined8 *)(param_3 + 8 + _Memory[2]) = uVar1;
        FUN_1802c6d90(1,0xffffffff,"Allocating %d bytes in heap at file %s line %d ptr %p\n",
                      param_3 & 0xffffffff,param_1,param_2,_Memory[2]);
        FUN_1802da460(&DAT_1803c9cc0,_Memory,sVar2 + 0x31 + param_3);
        _DAT_1803c9cb0 = _DAT_1803c9cb0 + param_3;
        if (_DAT_1803c9cb8 < _DAT_1803c9cb0) {
          _DAT_1803c9cb8 = _DAT_1803c9cb0;
        }
        lVar5 = _Memory[2] + 8;
      }
    }
  }
  FUN_1802cdd70(DAT_1804479c8);
  return lVar5;
}



// ===== FUN_1802c7d40 @ 1802c7d40 (size 455)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1802c7d40(char *param_1,undefined4 param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  size_t sVar5;
  char *_Dest;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = 0;
  FUN_1802cdcf0(DAT_1804479c8);
  puVar2 = (undefined8 *)FUN_1802dabf0(&DAT_1803c9cc0,param_3 + -8);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_1802c6d90(5,0xd,"Failed to reallocate heap item at file %s line %d",param_1,param_2);
  }
  else {
    sVar3 = strlen(param_1);
    FUN_1802c7a10(param_1,param_2,param_3,puVar2[3]);
    uVar6 = param_4 % (ulonglong)(longlong)DAT_1803c37e0;
    if (uVar6 != 0) {
      param_4 = param_4 + ((longlong)DAT_1803c37e0 - uVar6);
    }
    _DAT_1803c9cb0 = _DAT_1803c9cb0 + (param_4 - puVar2[3]);
    if (_DAT_1803c9cb8 < _DAT_1803c9cb0) {
      _DAT_1803c9cb8 = _DAT_1803c9cb0;
    }
    puVar4 = realloc((void *)puVar2[2],param_4 + 0x10);
    uVar1 = DAT_1803c37d0;
    if (puVar4 == (undefined8 *)0x0) {
      FUN_1802c6d90(5,0xd,PTR_s_Memory_allocation_error_1803c37d8);
    }
    else {
      lVar7 = puVar2[3];
      puVar2[2] = puVar4;
      *puVar4 = uVar1;
      *(undefined8 *)(param_4 + 8 + puVar2[2]) = uVar1;
      puVar2[3] = param_4;
      sVar5 = strlen((char *)*puVar2);
      _Dest = realloc((void *)*puVar2,sVar3 + 1);
      if (_Dest == (char *)0x0) {
        FUN_1802c6d90(5,0xd,PTR_s_Memory_allocation_error_1803c37d8);
      }
      else {
        *puVar2 = _Dest;
        strcpy(_Dest,param_1);
        lVar8 = puVar2[2];
        *(undefined4 *)(puVar2 + 1) = param_2;
        FUN_1802da460(&DAT_1803c9cc0,puVar2,sVar3 + 0x31 + ((param_4 - lVar7) - sVar5));
      }
    }
  }
  FUN_1802cdd70(DAT_1804479c8);
  lVar7 = 0;
  if (lVar8 != 0) {
    lVar7 = lVar8 + 8;
  }
  return lVar7;
}



// ===== FUN_1802c7f40 @ 1802c7f40 (size 232)

void FUN_1802c7f40(char *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_1802cdcf0(DAT_1804479c0);
  iVar2 = FUN_1802c81a0(1);
  if (iVar2 != 0) {
    if (param_3 != -1) {
      FUN_1802c7590(param_3,9,*DAT_180447138,DAT_180447138[2],param_1,param_2,0);
    }
    strncpy((char *)(DAT_180447138 + ((longlong)(int)DAT_180447138[2] * 5 + 2) * 2),param_1,0x1d);
    puVar1 = DAT_180447138;
    DAT_180447138[(longlong)(int)DAT_180447138[2] * 10 + 0xc] = param_2;
    iVar2 = puVar1[2] + 1;
    puVar1[2] = iVar2;
    if ((int)puVar1[1] < iVar2) {
      puVar1[1] = iVar2;
    }
    if (0x31 < iVar2) {
      FUN_1802c6d90(7,0xffffffff,"Max stack depth exceeded");
    }
  }
  FUN_1802cdd70(DAT_1804479c0);
  return;
}



// ===== FUN_1802c8030 @ 1802c8030 (size 366)

void FUN_1802c8030(char *param_1,undefined4 param_2,longlong param_3,int param_4)

{
  int *piVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  DWORD *pDVar5;
  int iVar6;
  
  FUN_1802cdcf0(DAT_1804479c0);
  DVar2 = GetCurrentThreadId();
  pDVar5 = &DAT_1803c9d10;
  DAT_180447138 = (undefined4 *)0x0;
  iVar6 = 0;
  while (iVar6 < DAT_1803c9d00) {
    if (*pDVar5 == DVar2) {
      puVar3 = &DAT_1803c9d10 + (longlong)iVar6 * 0x1f7;
      DAT_180447138 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = (int *)(&DAT_1803c9d18 + (longlong)iVar6 * 0x7dc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          FUN_1802c6d90(7,0xffffffff,"Minimum stack depth exceeded for thread %lu",*puVar3);
          puVar3 = DAT_180447138;
        }
        iVar6 = strncmp((char *)(puVar3 + ((longlong)(int)puVar3[2] * 5 + 2) * 2),param_1,0x1d);
        if (iVar6 != 0) {
          FUN_1802c6d90(7,0xffffffff,"Stack mismatch. Entry:%s Exit:%s\n",
                        DAT_180447138 + (longlong)(int)DAT_180447138[2] * 10 + 4,param_1);
        }
        if (param_4 != -1) {
          if (param_3 == 0) {
            uVar4 = 10;
          }
          else {
            uVar4 = 0xb;
          }
          FUN_1802c7590(param_4,uVar4,*DAT_180447138,DAT_180447138[2],param_1,param_2,param_3);
        }
      }
      break;
    }
    iVar6 = iVar6 + 1;
    pDVar5 = pDVar5 + 0x1f7;
    if (0x180447133 < (longlong)pDVar5) break;
  }
  FUN_1802cdd70(DAT_1804479c0);
  return;
}



// ===== FUN_1802c81a0 @ 1802c81a0 (size 185)

bool FUN_1802c81a0(int param_1)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  longlong lVar4;
  
  DVar1 = GetCurrentThreadId();
  lVar4 = (longlong)DAT_1803c9d00;
  DAT_180447138 = (DWORD *)0x0;
  iVar3 = 0;
  pDVar2 = &DAT_1803c9d10;
  do {
    if (DAT_1803c9d00 <= iVar3) break;
    if (*pDVar2 == DVar1) {
      pDVar2 = &DAT_1803c9d10 + (longlong)iVar3 * 0x1f7;
      DAT_180447138 = pDVar2;
      if (pDVar2 != (DWORD *)0x0) goto LAB_1802c823f;
      break;
    }
    iVar3 = iVar3 + 1;
    pDVar2 = pDVar2 + 0x1f7;
  } while ((longlong)pDVar2 < 0x180447134);
  pDVar2 = DAT_180447138;
  if ((param_1 != 0) && (DAT_1803c9d00 < 0xff)) {
    pDVar2 = &DAT_1803c9d10 + lVar4 * 0x1f7;
    DAT_1803c9d00 = DAT_1803c9d00 + 1;
    DAT_180447138 = pDVar2;
    *pDVar2 = DVar1;
    *(undefined8 *)(&DAT_1803c9d14 + lVar4 * 0x7dc) = 0;
  }
LAB_1802c823f:
  return pDVar2 != (DWORD *)0x0;
}



// ===== FUN_1802c82a0 @ 1802c82a0 (size 123)

longlong * FUN_1802c82a0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\LinkedList.c",0x5c,0x18);
  if (plVar1 != (longlong *)0x0) {
    plVar1[2] = param_2;
    plVar1[1] = 0;
    *plVar1 = param_1[1];
    if (*param_1 == 0) {
      *param_1 = (longlong)plVar1;
    }
    else {
      *(longlong **)(param_1[1] + 8) = plVar1;
    }
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    param_1[4] = param_1[4] + param_3;
    param_1[1] = (longlong)plVar1;
  }
  return plVar1;
}



// ===== FUN_1802c8320 @ 1802c8320 (size 206)

undefined8 FUN_1802c8320(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[2];
  if ((plVar4 == (longlong *)0x0) || (plVar4[2] != param_2)) {
    plVar3 = (longlong *)0x0;
    do {
      if (plVar3 == (longlong *)0x0) {
        plVar3 = param_1;
      }
      else {
        plVar3 = plVar3 + 1;
      }
      plVar3 = (longlong *)*plVar3;
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
    } while (plVar3[2] != param_2);
    param_1[2] = (longlong)plVar3;
  }
  else {
    plVar3 = plVar4;
  }
  if (*plVar3 == 0) {
    *param_1 = plVar3[1];
  }
  else {
    *(longlong *)(*plVar3 + 8) = plVar3[1];
  }
  plVar3 = (longlong *)((longlong *)param_1[2])[1];
  lVar1 = *(longlong *)param_1[2];
  if (plVar3 == (longlong *)0x0) {
    param_1[1] = lVar1;
  }
  else {
    *plVar3 = lVar1;
  }
  plVar3 = (longlong *)param_1[2];
  plVar2 = (longlong *)plVar3[1];
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0xe5,plVar3);
  if (plVar4 == plVar3) {
    plVar4 = plVar2;
  }
  param_1[2] = (longlong)plVar4;
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  return 1;
}



// ===== FUN_1802c83f0 @ 1802c83f0 (size 123)

undefined8 FUN_1802c83f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_1[3] < 1) {
    return 0;
  }
  lVar1 = *param_1;
  if (param_1[2] == lVar1) {
    param_1[2] = *(longlong *)(lVar1 + 8);
  }
  if (param_1[1] == lVar1) {
    param_1[1] = 0;
  }
  puVar2 = *(undefined8 **)(lVar1 + 8);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  *param_1 = (longlong)puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0x11a);
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  return uVar3;
}



// ===== FUN_1802c8470 @ 1802c8470 (size 131)

void FUN_1802c8470(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0x16e);
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    *param_1 = *(longlong *)(lVar1 + 8);
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0x172,lVar1);
    lVar1 = *param_1;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  return;
}



// ===== FUN_1802c8540 @ 1802c8540 (size 168)

longlong FUN_1802c8540(longlong *param_1,longlong param_2,code *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    if (param_3 == (code *)0x0) {
      if (*(longlong *)(lVar2 + 0x10) == param_2) {
LAB_1802c8587:
        return param_1[2];
      }
    }
    else {
      iVar1 = (*param_3)(*(undefined8 *)(lVar2 + 0x10));
      if (iVar1 != 0) goto LAB_1802c8587;
    }
  }
  lVar2 = 0;
  while( true ) {
    if (lVar2 == 0) {
      plVar3 = param_1;
    }
    else {
      plVar3 = (longlong *)(lVar2 + 8);
    }
    lVar2 = *plVar3;
    if (lVar2 == 0) break;
    if (param_3 == (code *)0x0) {
      if (*(longlong *)(lVar2 + 0x10) == param_2) {
        param_1[2] = lVar2;
        return lVar2;
      }
    }
    else {
      iVar1 = (*param_3)(*(undefined8 *)(lVar2 + 0x10),param_2);
      if (iVar1 != 0) {
        param_1[2] = lVar2;
        return lVar2;
      }
    }
  }
  return 0;
}



// ===== FUN_1802c85f0 @ 1802c85f0 (size 150)

void FUN_1802c85f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0x16e);
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    *param_1 = *(longlong *)(lVar1 + 8);
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0x172,lVar1);
    lVar1 = *param_1;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0x180,param_1);
  return;
}



// ===== FUN_1802c8690 @ 1802c8690 (size 77)

void FUN_1802c8690(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    *param_1 = *(longlong *)(lVar1 + 8);
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0x18e,lVar1);
    lVar1 = *param_1;
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",400,param_1);
  return;
}



// ===== FUN_1802c8720 @ 1802c8720 (size 172)

longlong * FUN_1802c8720(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\LinkedList.c",0x6d,0x18);
  if (plVar1 != (longlong *)0x0) {
    plVar1[2] = param_2;
    if (param_4 == (longlong *)0x0) {
      plVar1[1] = 0;
      *plVar1 = param_1[1];
      if (*param_1 == 0) {
        *param_1 = (longlong)plVar1;
        param_1[1] = (longlong)plVar1;
      }
      else {
        *(longlong **)(param_1[1] + 8) = plVar1;
        param_1[1] = (longlong)plVar1;
      }
    }
    else {
      plVar1[1] = (longlong)param_4;
      *plVar1 = *param_4;
      *param_4 = (longlong)plVar1;
      if (*plVar1 == 0) {
        *param_1 = (longlong)plVar1;
      }
      else {
        *(longlong **)(*plVar1 + 8) = plVar1;
      }
    }
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    param_1[4] = param_1[4] + param_3;
  }
  return plVar1;
}



// ===== FUN_1802c87f0 @ 1802c87f0 (size 243)

undefined8 FUN_1802c87f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[2];
  if ((plVar4 == (longlong *)0x0) || (plVar4[2] != param_2)) {
    plVar3 = (longlong *)0x0;
    do {
      if (plVar3 == (longlong *)0x0) {
        plVar3 = param_1;
      }
      else {
        plVar3 = plVar3 + 1;
      }
      plVar3 = (longlong *)*plVar3;
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
    } while (plVar3[2] != param_2);
    param_1[2] = (longlong)plVar3;
  }
  else {
    plVar3 = plVar4;
  }
  if (*plVar3 == 0) {
    *param_1 = plVar3[1];
  }
  else {
    *(longlong *)(*plVar3 + 8) = plVar3[1];
  }
  plVar3 = (longlong *)((longlong *)param_1[2])[1];
  lVar1 = *(longlong *)param_1[2];
  if (plVar3 == (longlong *)0x0) {
    param_1[1] = lVar1;
  }
  else {
    *plVar3 = lVar1;
  }
  plVar3 = *(longlong **)(param_1[2] + 8);
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0xe0,*(undefined8 *)(param_1[2] + 0x10));
  *(undefined8 *)(param_1[2] + 0x10) = 0;
  plVar2 = (longlong *)param_1[2];
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0xe5,plVar2);
  if (plVar4 == plVar2) {
    plVar4 = plVar3;
  }
  param_1[2] = (longlong)plVar4;
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  return 1;
}



// ===== FUN_1802c88f0 @ 1802c88f0 (size 134)

undefined8 FUN_1802c88f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (0 < (int)param_1[3]) {
    lVar1 = *param_1;
    if (param_1[2] == lVar1) {
      param_1[2] = *(longlong *)(lVar1 + 8);
    }
    if (param_1[1] == lVar1) {
      param_1[1] = 0;
    }
    puVar2 = *(undefined8 **)(lVar1 + 8);
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    *param_1 = (longlong)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0x11a);
    *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0x128,uVar3);
  return 0;
}



// ===== FUN_1802c8980 @ 1802c8980 (size 299)

undefined8 FUN_1802c8980(longlong *param_1,longlong param_2,code *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = param_1[2];
  if (lVar5 == 0) {
LAB_1802c89b7:
    plVar4 = (longlong *)0x0;
    do {
      while( true ) {
        if (plVar4 == (longlong *)0x0) {
          plVar4 = param_1;
        }
        else {
          plVar4 = plVar4 + 1;
        }
        plVar4 = (longlong *)*plVar4;
        if (plVar4 == (longlong *)0x0) {
          return 0;
        }
        if (param_3 != (code *)0x0) break;
        if (plVar4[2] == param_2) goto LAB_1802c8a20;
      }
      iVar3 = (*param_3)(plVar4[2],param_2);
    } while (iVar3 == 0);
LAB_1802c8a20:
    param_1[2] = (longlong)plVar4;
  }
  else {
    if (param_3 == (code *)0x0) {
      if (*(longlong *)(lVar5 + 0x10) != param_2) goto LAB_1802c89b7;
    }
    else {
      iVar3 = (*param_3)(*(undefined8 *)(lVar5 + 0x10));
      if (iVar3 == 0) goto LAB_1802c89b7;
    }
    plVar4 = (longlong *)param_1[2];
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
  }
  if (*plVar4 == 0) {
    *param_1 = plVar4[1];
  }
  else {
    *(longlong *)(*plVar4 + 8) = plVar4[1];
  }
  plVar4 = (longlong *)((longlong *)param_1[2])[1];
  lVar1 = *(longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
    param_1[1] = lVar1;
  }
  else {
    *plVar4 = lVar1;
  }
  lVar1 = *(longlong *)(param_1[2] + 8);
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0xe0,*(undefined8 *)(param_1[2] + 0x10));
  *(undefined8 *)(param_1[2] + 0x10) = 0;
  lVar2 = param_1[2];
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\LinkedList.c",0xe5,lVar2);
  if (lVar5 == lVar2) {
    lVar5 = lVar1;
  }
  param_1[2] = lVar5;
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  return 1;
}



// ===== FUN_1802c8ae0 @ 1802c8ae0 (size 630)

int FUN_1802c8ae0(undefined8 param_1)

{
  void *pvVar1;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  
  FUN_1802c7f40("Socket_addSocket",0x124,3);
  FUN_1802cdcf0(DAT_1803c9990);
  DAT_180447990 = DAT_180447990 + 1;
  if (DAT_180447998 == (void *)0x0) {
    pvVar1 = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\Socket.c",0x135);
LAB_1802c8bb0:
    DAT_180447998 = pvVar1;
    if (pvVar1 != (void *)0x0) {
      if (DAT_1804479a0 == (void *)0x0) {
        pvVar1 = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\Socket.c",0x149,
                                       (ulonglong)DAT_180447990 << 4);
      }
      else {
        pvVar1 = (void *)FUN_1802c7d40("E:\\paho.mqtt.c\\src\\Socket.c",0x13d,DAT_1804479a0,
                                       (ulonglong)DAT_180447990 << 4);
        if (pvVar1 == (void *)0x0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0x140,DAT_1804479a0);
          DAT_1804479a0 = (void *)0x0;
          goto LAB_1802c8b6c;
        }
      }
      DAT_1804479a0 = pvVar1;
      if (pvVar1 != (void *)0x0) {
        *(undefined8 *)((longlong)DAT_180447998 + (ulonglong)(DAT_180447990 - 1) * 0x10) = param_1;
        *(undefined8 *)((longlong)DAT_1804479a0 + (ulonglong)(DAT_180447990 - 1) * 0x10) = param_1;
        *(undefined2 *)((longlong)DAT_180447998 + (ulonglong)(DAT_180447990 - 1) * 0x10 + 8) = 0x300
        ;
        *(undefined2 *)((longlong)DAT_1804479a0 + (ulonglong)(DAT_180447990 - 1) * 0x10 + 8) = 0x10;
        qsort(DAT_180447998,(ulonglong)DAT_180447990,0x10,(_PtFuncCompare *)&LAB_1802ca640);
        qsort(DAT_1804479a0,(ulonglong)DAT_180447990,0x10,(_PtFuncCompare *)&LAB_1802ca640);
        local_res20[0] = 1;
        FUN_1802c7f40("Socket_setnonblocking",0x5e,3);
        local_res18[0] = Ordinal_10(param_1,0x8004667e,local_res20);
        FUN_1802c8030("Socket_setnonblocking",0x68,local_res18,3);
        local_res10[0] = local_res18[0];
        if (local_res18[0] == -1) {
          FUN_1802c6d90(5,0xffffffff,"addSocket: setnonblocking");
        }
        goto LAB_1802c8b74;
      }
    }
  }
  else {
    pvVar1 = (void *)FUN_1802c7d40("E:\\paho.mqtt.c\\src\\Socket.c",0x129,DAT_180447998,
                                   (ulonglong)DAT_180447990 << 4);
    if (pvVar1 != (void *)0x0) goto LAB_1802c8bb0;
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",300,DAT_180447998);
    DAT_180447998 = (void *)0x0;
  }
LAB_1802c8b6c:
  local_res10[0] = -99;
LAB_1802c8b74:
  FUN_1802cdd70(DAT_1803c9990);
  FUN_1802c8030("Socket_addSocket",0x164,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802c8d60 @ 1802c8d60 (size 1108)

undefined4 FUN_1802c8d60(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 local_res8;
  undefined4 local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  local_res8 = param_1;
  FUN_1802c7f40("Socket_close",0x407,3);
  FUN_1802cdcf0(DAT_1803c9990);
  uVar4 = local_res8;
  FUN_1802c7f40("Socket_close_only",0x3bd,3);
  iVar1 = Ordinal_22(uVar4,2);
  if (iVar1 == -1) {
    FUN_1802c9490("shutdown",uVar4);
  }
  local_res18[0] = Ordinal_3(uVar4);
  if (local_res18[0] == -1) {
    FUN_1802c9490("close",uVar4);
  }
  FUN_1802c8030("Socket_close_only",0x3cb,local_res18,3);
  uVar4 = local_res8;
  local_res18[0] = 0;
  FUN_1802c7f40("Socket_abortWrite",0x5d1,3);
  lVar2 = FUN_1802db250(uVar4);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x18) == 0) {
      iVar1 = 0;
      if (0 < *(int *)(lVar2 + 8)) {
        piVar5 = (int *)(lVar2 + 0x78);
        puVar6 = (undefined8 *)(lVar2 + 0x30);
        do {
          if (*piVar5 != 0) {
            FUN_1802c6d90(3,0xffffffff,"Cleaning in abortWrite for socket %d",uVar4);
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0x5e2,*puVar6);
          }
          iVar1 = iVar1 + 1;
          piVar5 = piVar5 + 1;
          puVar6 = puVar6 + 2;
        } while (iVar1 < *(int *)(lVar2 + 8));
      }
    }
    else {
      local_res18[0] = FUN_1802cc480(lVar2);
    }
  }
  FUN_1802c8030("Socket_abortWrite",0x5e6,local_res18,3);
  FUN_1802dae40(local_res8);
  FUN_1802c8980(DAT_180447980,&local_res8,&LAB_1802c8ad0);
  FUN_1802c8980(DAT_180447988,&local_res8,&LAB_1802c8ad0);
  if (DAT_180447990 != 0) {
    pvVar3 = bsearch(&local_res8,DAT_180447998,(ulonglong)DAT_180447990,0x10,
                     (_PtFuncCompare *)&LAB_1802ca660);
    if (pvVar3 == (void *)0x0) {
      pcVar7 = "Failed to remove socket %d";
      uVar4 = 5;
    }
    else {
      DAT_180447990 = DAT_180447990 - 1;
      if (DAT_180447990 == 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0x419);
        pcVar7 = "Removed socket %d";
        DAT_180447998 = (void *)0x0;
        uVar4 = 3;
      }
      else {
        if (pvVar3 != (void *)((ulonglong)DAT_180447990 * 0x10 + (longlong)DAT_180447998)) {
          memmove(pvVar3,(void *)((longlong)pvVar3 + 0x10),
                  ((ulonglong)DAT_180447990 - ((longlong)pvVar3 - (longlong)DAT_180447998 >> 4)) *
                  0x10);
        }
        pvVar3 = (void *)FUN_1802c7d40("E:\\paho.mqtt.c\\src\\Socket.c",0x423,DAT_180447998,
                                       (ulonglong)DAT_180447990 << 4);
        if (pvVar3 == (void *)0x0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0x426,DAT_180447998);
          DAT_180447998 = (void *)0x0;
          local_res10[0] = 0xffffff9d;
          goto LAB_1802c9180;
        }
        pcVar7 = "Removed socket %d";
        uVar4 = 3;
        DAT_180447998 = pvVar3;
      }
    }
    FUN_1802c6d90(uVar4,0xffffffff,pcVar7,local_res8);
    pvVar3 = bsearch(&local_res8,DAT_1804479a0,(ulonglong)(DAT_180447990 + 1),0x10,
                     (_PtFuncCompare *)&LAB_1802ca660);
    if (pvVar3 == (void *)0x0) {
      pcVar7 = "Failed to remove socket %d";
      uVar4 = 5;
    }
    else if (DAT_180447990 == 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0x43d);
      pcVar7 = "Removed socket %d";
      DAT_1804479a0 = (void *)0x0;
      uVar4 = 3;
    }
    else {
      if (pvVar3 != (void *)((ulonglong)DAT_180447990 * 0x10 + (longlong)DAT_1804479a0)) {
        memmove(pvVar3,(void *)((longlong)pvVar3 + 0x10),
                ((ulonglong)DAT_180447990 - ((longlong)pvVar3 - (longlong)DAT_1804479a0 >> 4)) *
                0x10);
      }
      pvVar3 = (void *)FUN_1802c7d40("E:\\paho.mqtt.c\\src\\Socket.c",0x447,DAT_1804479a0,
                                     (ulonglong)DAT_180447990 << 4);
      if (pvVar3 == (void *)0x0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0x44a,DAT_1804479a0);
        DAT_1804479a0 = (void *)0x0;
        local_res10[0] = 0xffffff9d;
        goto LAB_1802c9180;
      }
      pcVar7 = "Removed socket %d";
      uVar4 = 3;
      DAT_1804479a0 = pvVar3;
    }
    FUN_1802c6d90(uVar4,0xffffffff,pcVar7,local_res8);
  }
LAB_1802c9180:
  FUN_1802cdd70(DAT_1803c9990);
  FUN_1802c8030("Socket_close",0x45b,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802c91c0 @ 1802c91c0 (size 714)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802c91c0(ulonglong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  uint *puVar10;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_98;
  int local_94;
  uint local_90 [2];
  int local_88 [2];
  undefined8 local_80 [9];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_d8;
  local_90[0] = 0;
  uVar7 = 0;
  iVar5 = -1;
  FUN_1802c7f40("Socket_continueWrite",0x580,3);
  lVar3 = FUN_1802db250(param_1);
  if (*(longlong *)(lVar3 + 0x18) == 0) {
    iVar6 = 0;
    if (0 < *(int *)(lVar3 + 8)) {
      puVar10 = local_90;
      piVar9 = &local_98;
      piVar4 = (int *)(lVar3 + 0x28);
      do {
        uVar2 = *(ulonglong *)(lVar3 + 0x20);
        iVar1 = *piVar4;
        if (uVar7 < uVar2) {
          if (uVar2 < (uint)(iVar1 + (int)uVar7)) {
            piVar9 = piVar9 + 4;
            puVar10 = puVar10 + 4;
            iVar5 = iVar5 + 1;
            *piVar9 = iVar1 - (int)(uVar2 - uVar7);
            *(ulonglong *)puVar10 = *(longlong *)(piVar4 + 2) + (uVar2 - uVar7);
          }
        }
        else {
          piVar9 = piVar9 + 4;
          iVar5 = iVar5 + 1;
          puVar10 = puVar10 + 4;
          *piVar9 = iVar1;
          *(longlong *)puVar10 = *(longlong *)(piVar4 + 2);
        }
        uVar7 = (ulonglong)(uint)((int)uVar7 + *piVar4);
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar6 < *(int *)(lVar3 + 8));
    }
    FUN_1802c7f40("Socket_writev",0x311,3);
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = local_b8 & 0xffffffff00000000;
    local_94 = WSASend(param_1,local_88,iVar5 + 1,local_90);
    if ((local_94 == -1) && (iVar5 = FUN_1802c9490("WSASend - putdatas",param_1), iVar5 == 0x2733))
    {
      local_94 = -0x16;
    }
    FUN_1802c8030("Socket_writev",0x345,&local_94,3);
    local_98 = local_94;
    if (local_94 == -1) {
      iVar5 = 0;
      if (0 < *(int *)(lVar3 + 8)) {
        puVar8 = (undefined8 *)(lVar3 + 0x30);
        piVar4 = (int *)(lVar3 + 0x78);
        do {
          if (*piVar4 != 0) {
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0x5b9,*puVar8);
            *puVar8 = 0;
          }
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 1;
          puVar8 = puVar8 + 2;
        } while (iVar5 < *(int *)(lVar3 + 8));
      }
    }
    else {
      *(longlong *)(lVar3 + 0x20) = *(longlong *)(lVar3 + 0x20) + (ulonglong)local_90[0];
      if (*(longlong *)(lVar3 + 0x20) == *(longlong *)(lVar3 + 0x10)) {
        iVar5 = 0;
        if (0 < *(int *)(lVar3 + 8)) {
          puVar8 = (undefined8 *)(lVar3 + 0x30);
          piVar4 = (int *)(lVar3 + 0x78);
          do {
            if (*piVar4 != 0) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0x5a6,*puVar8);
              *puVar8 = 0;
            }
            iVar5 = iVar5 + 1;
            piVar4 = piVar4 + 1;
            puVar8 = puVar8 + 2;
          } while (iVar5 < *(int *)(lVar3 + 8));
        }
        local_98 = 1;
        FUN_1802c6d90(3,0xffffffff,"ContinueWrite: partial write now complete for socket %d",param_1
                     );
      }
      else {
        local_98 = 0;
        local_b8 = param_1;
        FUN_1802c6d90(3,0xffffffff,"ContinueWrite wrote +%lu bytes on socket %d",local_90[0]);
      }
    }
  }
  else {
    local_98 = FUN_1802cc810(lVar3);
  }
  FUN_1802c8030("Socket_continueWrite",0x5c1,&local_98,3);
  return local_98;
}



// ===== FUN_1802c9490 @ 1802c9490 (size 149)

ulonglong FUN_1802c9490(char *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  uVar3 = Ordinal_111();
  iVar1 = (int)uVar3;
  if ((iVar1 != 0x2714) && (1 < iVar1 - 0x2733U)) {
    iVar2 = strcmp(param_1,"shutdown");
    if ((iVar2 != 0) || ((iVar1 != 0x2749 && (iVar1 != 0x2746)))) {
      pcVar4 = strerror(iVar1);
      FUN_1802c6d90(3,0xffffffff,"Socket error %s(%d) in %s for socket %d",pcVar4,iVar1,param_1,
                    param_2);
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



// ===== FUN_1802c9530 @ 1802c9530 (size 1390)

longlong FUN_1802c9530(int param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  int local_res20 [2];
  int local_48 [2];
  longlong local_40;
  longlong local_38 [2];
  
  local_38[0] = 0;
  *param_4 = 0;
  FUN_1802c7f40("Socket_getReadySocket",0x219,3);
  FUN_1802cdcf0(param_3);
  if ((DAT_180447990 == 0) && (DAT_1804479ac == 0)) goto LAB_1802c9a5e;
  if (param_1 == 0) {
    iVar5 = 1000;
    if (-1 < param_2) {
      iVar5 = param_2;
    }
  }
  else {
    iVar5 = 0;
  }
  for (; DAT_1804479a8 != -1; DAT_1804479a8 = DAT_1804479a8 + 1) {
    iVar1 = FUN_1802ca680();
    if (iVar1 != 0) {
      if (DAT_1804479a8 != -1) goto LAB_1802c9a14;
      break;
    }
    if (DAT_1804479a8 == DAT_1804479ac - 1) {
      DAT_1804479a8 = -1;
      break;
    }
  }
  uVar6 = (ulonglong)DAT_180447990;
  if (DAT_180447990 != DAT_1804479ac) {
    DAT_1804479ac = DAT_180447990;
    if (DAT_180447990 == 0) {
      if (DAT_1804479b8 != (void *)0x0) {
        uVar8 = 0x235;
LAB_1802c9623:
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",uVar8,DAT_1804479b8);
        DAT_1804479b8 = (void *)0x0;
        goto LAB_1802c9680;
      }
LAB_1802c968a:
      if (DAT_1804479b0 == (void *)0x0) goto LAB_1802c9724;
      uVar8 = 0x24d;
    }
    else {
      if (DAT_1804479b8 == (void *)0x0) {
        pvVar7 = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\Socket.c",0x247,uVar6 << 4);
      }
      else {
        pvVar7 = (void *)FUN_1802c7d40("E:\\paho.mqtt.c\\src\\Socket.c",0x23b,DAT_1804479b8,
                                       uVar6 << 4);
        if (pvVar7 == (void *)0x0) {
          uVar8 = 0x23e;
          goto LAB_1802c9623;
        }
      }
      DAT_1804479b8 = pvVar7;
LAB_1802c9680:
      uVar6 = (ulonglong)DAT_180447990;
      if (DAT_180447990 == 0) goto LAB_1802c968a;
      if (DAT_1804479b0 == (void *)0x0) {
        pvVar7 = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\Socket.c",0x25f,uVar6 << 4);
LAB_1802c970e:
        uVar6 = (ulonglong)DAT_180447990;
        DAT_1804479b0 = pvVar7;
        goto LAB_1802c9724;
      }
      pvVar7 = (void *)FUN_1802c7d40("E:\\paho.mqtt.c\\src\\Socket.c",0x253,DAT_1804479b0,uVar6 << 4
                                    );
      if (pvVar7 != (void *)0x0) goto LAB_1802c970e;
      uVar8 = 0x256;
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",uVar8,DAT_1804479b0);
    uVar6 = (ulonglong)DAT_180447990;
    DAT_1804479b0 = (void *)0x0;
  }
LAB_1802c9724:
  if (DAT_180447998 == (void *)0x0) {
    DAT_1804479b8 = (void *)0x0;
    uVar2 = (uint)uVar6;
  }
  else {
    memcpy(DAT_1804479b8,DAT_180447998,uVar6 << 4);
    uVar2 = DAT_180447990;
  }
  if (DAT_1804479a0 == (void *)0x0) {
    DAT_1804479b0 = (void *)0x0;
  }
  else {
    memcpy(DAT_1804479b0,DAT_1804479a0,(ulonglong)uVar2 << 4);
  }
  if (DAT_1804479ac != 0) {
    iVar1 = WSAPoll(DAT_1804479b0,DAT_1804479ac,0);
    if (0 < iVar1) {
      local_48[0] = 0;
      local_40 = *DAT_180447988;
      FUN_1802c7f40("Socket_continueWrites",0x600,3);
      while ((local_40 != 0 && (*(int **)(local_40 + 0x10) != (int *)0x0))) {
        local_res20[0] = **(int **)(local_40 + 0x10);
        iVar3 = 0;
        pvVar7 = bsearch(local_res20,DAT_1804479b0,(ulonglong)DAT_1804479ac,0x10,
                         (_PtFuncCompare *)&LAB_1802ca660);
        if (((*(byte *)((longlong)pvVar7 + 10) & 0x10) == 0) ||
           (iVar3 = FUN_1802c91c0((longlong)local_res20[0]), iVar3 == 0)) {
          FUN_1802c87d0(DAT_180447988,&local_40);
        }
        else {
          iVar4 = FUN_1802db810((longlong)local_res20[0]);
          if (iVar4 == 0) {
            FUN_1802c6d90(6,0xffffffff,"Failed to remove pending write from socket buffer list");
          }
          iVar4 = FUN_1802c87f0(DAT_180447988,*(undefined8 *)(local_40 + 0x10));
          if (iVar4 == 0) {
            FUN_1802c6d90(6,0xffffffff,"Failed to remove pending write from list");
            FUN_1802c87d0(DAT_180447988,&local_40);
          }
          local_40 = DAT_180447988[2];
          if ((DAT_180447150 != (code *)0x0) && (0 < iVar3)) {
            (*DAT_180447150)((longlong)local_res20[0]);
          }
          if (DAT_180447148 != (code *)0x0) {
            FUN_1802cdd70(param_3);
            (*DAT_180447148)((longlong)local_res20[0],iVar3);
            FUN_1802cdcf0(param_3);
          }
        }
        if ((DAT_180447140 == (code *)0x0) || (iVar3 != 0)) {
          if (iVar3 == -1) {
            local_38[0] = (longlong)local_res20[0];
            local_48[0] = -1;
          }
        }
        else {
          (*DAT_180447140)((longlong)local_res20[0]);
        }
      }
      FUN_1802c8030("Socket_continueWrites",0x633,local_48,3);
      if (local_48[0] == -1) {
        *param_4 = -1;
        goto LAB_1802c9a5e;
      }
    }
    FUN_1802cdd70(param_3);
    iVar5 = WSAPoll(DAT_1804479b8,DAT_1804479ac,iVar5);
    *param_4 = iVar5;
    FUN_1802cdcf0(param_3);
    if (*param_4 == -1) {
      FUN_1802c9490(&DAT_180382b08,0);
    }
    else {
      FUN_1802c6d90(1,0xffffffff,"Return code %d from poll");
      if ((iVar1 != 0) || (*param_4 != 0)) {
        DAT_1804479a8 = 0;
        do {
          iVar5 = FUN_1802ca680();
          if (iVar5 != 0) break;
          if (DAT_1804479a8 == DAT_1804479ac - 1) {
            DAT_1804479a8 = -1;
            break;
          }
          DAT_1804479a8 = DAT_1804479a8 + 1;
        } while (DAT_1804479a8 != -1);
LAB_1802c9a14:
        *param_4 = 0;
        if (DAT_1804479a8 != -1) {
          local_38[0] = *(longlong *)((longlong)DAT_1804479b8 + (longlong)DAT_1804479a8 * 0x10);
          if (DAT_1804479a8 == DAT_1804479ac - 1) {
            DAT_1804479a8 = -1;
          }
          else {
            DAT_1804479a8 = DAT_1804479a8 + 1;
          }
          goto LAB_1802c9a5e;
        }
      }
      local_38[0] = 0;
    }
  }
LAB_1802c9a5e:
  FUN_1802cdd70(param_3);
  FUN_1802c8030("Socket_getReadySocket",0x29c,local_38,3);
  return local_38[0];
}



// ===== FUN_1802c9aa0 @ 1802c9aa0 (size 212)

int FUN_1802c9aa0(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  int local_res18 [4];
  
  FUN_1802c7f40("Socket_getch",0x2ac,3);
  local_res18[0] = FUN_1802db010(param_1,param_2);
  if (local_res18[0] == -0x16) {
    local_res18[0] = Ordinal_16(param_1,param_2,1,0);
    if (local_res18[0] == -1) {
      iVar1 = FUN_1802c9490("recv - getch",param_1);
      if (iVar1 == 0x2733) {
        local_res18[0] = -0x16;
        FUN_1802db310(param_1,0);
      }
    }
    else if (local_res18[0] == 0) {
      local_res18[0] = -1;
    }
    else if (local_res18[0] == 1) {
      FUN_1802db560(param_1,*param_2);
      local_res18[0] = 0;
    }
  }
  FUN_1802c8030("Socket_getch",0x2c1,local_res18,3);
  return local_res18[0];
}



// ===== FUN_1802c9b80 @ 1802c9b80 (size 276)

longlong FUN_1802c9b80(undefined8 param_1,ulonglong param_2,ulonglong *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1802c7f40("Socket_getdata",0x2d2,3);
  if (param_2 == 0) {
    lVar2 = FUN_1802daf20();
    goto LAB_1802c9c5c;
  }
  lVar2 = FUN_1802db100(param_1,param_2,param_3);
  iVar1 = Ordinal_16(param_1,*param_3 + lVar2,(int)param_2 - (int)*param_3,0);
  *param_4 = iVar1;
  if (iVar1 == -1) {
    iVar1 = FUN_1802c9490("recv - getdata",param_1);
    *param_4 = iVar1;
    if (iVar1 == 0x2733) {
LAB_1802c9c26:
      if (*param_3 == param_2) {
        FUN_1802daf20();
      }
      else {
        FUN_1802db310(param_1);
        FUN_1802c6d90(1,0xffffffff,"%d bytes expected but %d bytes now received",
                      param_2 & 0xffffffff,(int)*param_3);
      }
      goto LAB_1802c9c5c;
    }
  }
  else if (iVar1 != 0) {
    *param_3 = *param_3 + (longlong)iVar1;
    goto LAB_1802c9c26;
  }
  lVar2 = 0;
LAB_1802c9c5c:
  FUN_1802c8030("Socket_getdata",0x2f4,0,3);
  return lVar2;
}



// ===== FUN_1802c9ca0 @ 1802c9ca0 (size 203)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1802c9ca0(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [40];
  wchar_t local_a8 [72];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_108;
  local_d8 = 0x1c;
  iVar1 = Ordinal_5(param_1,local_d0,&local_d8);
  if (iVar1 == -1) {
    FUN_1802c9490("getpeername",param_1);
    pcVar2 = "unknown";
  }
  else {
    local_e8 = &local_d4;
    local_d4 = 0x43;
    iVar1 = WSAAddressToStringW(local_d0,0x1c,0,local_a8);
    if (iVar1 == -1) {
      FUN_1802c9490("WSAAddressToString",param_1);
    }
    else {
      wcstombs(&DAT_180447160,local_a8,0x4c);
    }
    pcVar2 = &DAT_180447160;
  }
  return pcVar2;
}



// ===== FUN_1802c9d70 @ 1802c9d70 (size 941)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1802c9d70(char *param_1,size_t param_2,uint param_3,longlong *param_4)

{
  ushort uVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char *_Src;
  undefined8 uVar6;
  size_t _Size;
  short sVar7;
  undefined1 auStack_f8 [32];
  char *local_d8;
  uint local_d0;
  int local_c8 [2];
  longlong local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803c3d80 ^ (ulonglong)auStack_f8;
  local_b0 = _DAT_180382ed0;
  uStack_a8 = _UNK_180382ed8;
  local_c0 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  sVar7 = 2;
  FUN_1802c7f40("Socket_new",0x47f,3);
  *param_4 = -1;
  local_70 = 0;
  _Size = param_2 - 1;
  if (*param_1 != '[') {
    _Size = param_2;
  }
  local_68 = 0;
  _Src = param_1 + 1;
  if (*param_1 != '[') {
    _Src = param_1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_b8 = _Src;
  _Dst = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\Socket.c",0x489,_Size + 1);
  if (_Dst == (void *)0x0) {
    local_c8[0] = -99;
    goto LAB_1802ca0df;
  }
  memcpy(_Dst,_Src,_Size);
  *(undefined1 *)(_Size + (longlong)_Dst) = 0;
  local_c8[0] = getaddrinfo(_Dst,0,&local_b0,&local_c0);
  if (local_c8[0] == 0) {
    lVar3 = local_c0;
    if (local_c0 == 0) {
LAB_1802c9eef:
      local_c8[0] = -1;
    }
    else {
      while ((iVar2 = *(int *)(lVar3 + 4), iVar2 != 2 && (*(longlong *)(lVar3 + 0x28) != 0))) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
      }
      if (iVar2 == 0x17) {
        uVar1 = Ordinal_9(param_3 & 0xffff);
        sVar7 = 0x17;
        local_80 = CONCAT62((uint6)uVar1,0x17);
        lVar3 = *(longlong *)(lVar3 + 0x20);
        uStack_78 = *(undefined8 *)(lVar3 + 8);
        local_70 = *(undefined8 *)(lVar3 + 0x10);
        local_68 = *(undefined4 *)(lVar3 + 0x18);
        local_80 = CONCAT44(*(undefined4 *)(lVar3 + 4),(undefined4)local_80);
      }
      else {
        if (iVar2 != 2) goto LAB_1802c9eef;
        local_58 = 0;
        local_5e = Ordinal_9(param_3 & 0xffff);
        local_60 = 2;
        local_5c = *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 4);
      }
    }
    freeaddrinfo(local_c0);
    if (local_c8[0] != 0) goto LAB_1802ca0b2;
    lVar3 = Ordinal_23(sVar7,1,0);
    *param_4 = lVar3;
    if (lVar3 == -1) {
      local_c8[0] = FUN_1802c9490("socket",0xffffffffffffffff);
    }
    else {
      local_d8 = local_b8;
      local_d0 = param_3;
      FUN_1802c6d90(3,0xffffffff,"New socket %d for %s, port %d",lVar3);
      iVar2 = FUN_1802c8ae0(*param_4);
      if (iVar2 == -1) {
        local_c8[0] = FUN_1802c9490("addSocket",*param_4);
      }
      else {
        if (sVar7 == 2) {
          uVar6 = 0x10;
          puVar5 = (undefined8 *)&local_60;
        }
        else {
          uVar6 = 0x1c;
          puVar5 = &local_80;
        }
        local_c8[0] = Ordinal_4(*param_4,puVar5,uVar6);
        if (local_c8[0] == -1) {
          local_c8[0] = FUN_1802c9490("connect",*param_4);
        }
        if ((local_c8[0] == 0x2734) || (local_c8[0] == 0x2733)) {
          plVar4 = (longlong *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\Socket.c",0x502,8);
          if (plVar4 != (longlong *)0x0) {
            *plVar4 = *param_4;
            FUN_1802cdcf0(DAT_1803c9990);
            lVar3 = FUN_1802c82a0(DAT_180447980,plVar4,8);
            FUN_1802cdd70(DAT_1803c9990);
            if (lVar3 != 0) {
              FUN_1802c6d90(3,0xf,"Connect pending");
              goto LAB_1802ca06f;
            }
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0x510,plVar4);
          }
          local_c8[0] = -99;
          goto LAB_1802ca0cb;
        }
      }
LAB_1802ca06f:
      if ((local_c8[0] != 0) && (1 < local_c8[0] - 0x2733U)) {
        FUN_1802c8d60(*param_4);
        *param_4 = -1;
      }
    }
  }
  else {
    local_d8 = (char *)CONCAT44(local_d8._4_4_,local_c8[0]);
    FUN_1802c6d90(5,0xffffffff,"getaddrinfo failed for addr %s with rc %d",_Dst);
    local_c8[0] = -1;
LAB_1802ca0b2:
    FUN_1802c6d90(5,0xffffffff,"%s is not a valid IP address",_Dst);
  }
LAB_1802ca0cb:
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0x523,_Dst);
LAB_1802ca0df:
  FUN_1802c8030("Socket_new",0x525,local_c8,3);
  return local_c8[0];
}



// ===== FUN_1802ca150 @ 1802ca150 (size 189)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ca150(void)

{
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_1d8;
  FUN_1802c7f40("Socket_outInitialize",0x9e,3);
  Ordinal_115(0x202,local_1b8);
  FUN_1802db290();
  DAT_180447980 = FUN_1802c86e0();
  DAT_180447988 = FUN_1802c86e0();
  DAT_1804479a8 = 0xffffffff;
  DAT_180447990 = 0;
  DAT_1804479ac = 0;
  DAT_180447998 = 0;
  DAT_1804479a0 = 0;
  DAT_1804479b0 = 0;
  DAT_1804479b8 = 0;
  FUN_1802c8030("Socket_outInitialize",0xba,0,3);
  return;
}



// ===== FUN_1802ca210 @ 1802ca210 (size 208)

void FUN_1802ca210(void)

{
  FUN_1802c7f40("Socket_outTerminate",0xc3,3);
  FUN_1802c85f0(DAT_180447980);
  FUN_1802c85f0(DAT_180447988);
  if (DAT_180447998 != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0xca);
  }
  if (DAT_1804479a0 != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0xcc);
  }
  if (DAT_1804479b0 != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0xce);
  }
  if (DAT_1804479b8 != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0xd0);
  }
  FUN_1802db690();
  Ordinal_116();
  FUN_1802c8030("Socket_outTerminate",0xd6,0,3);
  return;
}



// ===== FUN_1802ca2e0 @ 1802ca2e0 (size 812)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802ca2e0(undefined8 param_1,undefined8 param_2,ulonglong param_3,uint *param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  int local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 auStack_b4 [7];
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80 [7];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_108;
  local_c4 = 0;
  FUN_1802c7f40("Socket_putdatas",0x35d,3);
  local_c0 = param_1;
  lVar5 = FUN_1802c8540(DAT_180447988,&local_c0,&LAB_1802c8ad0);
  if (lVar5 != 0) {
    FUN_1802c6d90(6,0xffffffff,
                  "Trying to write to socket %d for which there is already pending output",param_1);
    local_c8 = -1;
    goto LAB_1802ca5d0;
  }
  uVar2 = *param_4;
  lVar5 = (longlong)(int)uVar2;
  iVar14 = 0;
  uVar12 = param_3;
  if ((0 < (int)uVar2) && (3 < uVar2)) {
    lVar15 = 0;
    lVar16 = 0;
    lVar9 = 0;
    lVar11 = 0;
    uVar8 = uVar2 & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    lVar6 = 0;
    do {
      plVar1 = (longlong *)(*(longlong *)(param_4 + 4) + lVar6 * 8);
      iVar14 = iVar14 + 4;
      lVar15 = lVar15 + *plVar1;
      lVar16 = lVar16 + plVar1[1];
      plVar1 = (longlong *)(*(longlong *)(param_4 + 4) + 0x10 + lVar6 * 8);
      lVar6 = lVar6 + 4;
      lVar9 = lVar9 + *plVar1;
      lVar11 = lVar11 + plVar1[1];
    } while (lVar6 < (int)(uVar2 - uVar8));
    auVar4._8_4_ = (int)(lVar11 + lVar16);
    auVar4._0_8_ = lVar9 + lVar15;
    auVar4._12_4_ = (int)((ulonglong)(lVar11 + lVar16) >> 0x20);
    uVar12 = lVar9 + lVar15 + auVar4._8_8_ + param_3;
  }
  lVar9 = (longlong)iVar14;
  lVar11 = 0;
  lVar15 = 0;
  if (lVar9 < lVar5) {
    lVar16 = *(longlong *)(param_4 + 4);
    if (lVar5 - lVar9 < 2) {
LAB_1802ca427:
      uVar12 = uVar12 + *(longlong *)(lVar16 + lVar9 * 8);
    }
    else {
      do {
        lVar11 = lVar11 + *(longlong *)(lVar16 + lVar9 * 8);
        lVar15 = lVar15 + *(longlong *)(lVar16 + 8 + lVar9 * 8);
        lVar9 = lVar9 + 2;
      } while (lVar9 < lVar5 + -1);
      if (lVar9 < lVar5) goto LAB_1802ca427;
    }
    uVar12 = uVar12 + lVar15 + lVar11;
  }
  local_98[0] = (undefined4)param_3;
  local_b8 = 1;
  local_90 = param_2;
  if (0 < lVar5) {
    puVar3 = *(undefined4 **)(param_4 + 4);
    lVar9 = *(longlong *)(param_4 + 2);
    lVar15 = 0;
    lVar11 = *(longlong *)(param_4 + 6);
    puVar10 = puVar3;
    puVar13 = local_88;
    do {
      *(undefined8 *)(puVar13 + 2) = *(undefined8 *)((lVar9 - (longlong)puVar3) + (longlong)puVar10)
      ;
      *puVar13 = *puVar10;
      auStack_b4[lVar15] = *(undefined4 *)(lVar11 + lVar15 * 4);
      lVar15 = lVar15 + 1;
      puVar10 = puVar10 + 2;
      puVar13 = puVar13 + 4;
    } while (lVar15 < lVar5);
  }
  FUN_1802c7f40("Socket_writev",0x311,3);
  uVar2 = *param_4;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (undefined4 *)((ulonglong)local_e8 & 0xffffffff00000000);
  iVar14 = WSASend(param_1,local_98,uVar2 + 1,&local_c4);
  local_c0 = CONCAT44(local_c0._4_4_,iVar14);
  if (iVar14 == -1) {
    iVar14 = FUN_1802c9490("WSASend - putdatas",param_1);
    if (iVar14 == 0x2733) {
      local_c0 = CONCAT44(local_c0._4_4_,0xffffffea);
    }
  }
  FUN_1802c8030("Socket_writev",0x345,&local_c0,3);
  local_c8 = (int)local_c0;
  if ((int)local_c0 != -1) {
    if (local_c4 == uVar12) {
      local_c8 = 0;
    }
    else {
      puVar7 = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\Socket.c",0x378,8);
      if (puVar7 != (undefined8 *)0x0) {
        local_e8 = (undefined4 *)uVar12;
        local_e0 = param_1;
        FUN_1802c6d90(3,0xffffffff,"Partial write: %lu bytes of %lu actually written on socket %d",
                      local_c4);
        local_d8 = (ulonglong)local_c4;
        local_e8 = &local_b8;
        local_e0 = uVar12;
        FUN_1802db450(param_1,0,uVar2 + 1,local_98);
        *puVar7 = param_1;
        lVar5 = FUN_1802c82a0(DAT_180447988,puVar7,4);
        if (lVar5 != 0) {
          local_c8 = -0x16;
          goto LAB_1802ca5d0;
        }
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Socket.c",0x389,puVar7);
      }
      local_c8 = -99;
    }
  }
LAB_1802ca5d0:
  FUN_1802c8030("Socket_putdatas",0x394,&local_c8,3);
  return local_c8;
}



// ===== FUN_1802ca680 @ 1802ca680 (size 235)

undefined4 FUN_1802ca680(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 local_res8 [2];
  
  uVar5 = 1;
  lVar3 = (longlong)param_1 * 0x10;
  local_res8[0] = 1;
  puVar4 = (undefined8 *)(DAT_1804479b0 + lVar3);
  FUN_1802c7f40("isReady",0x18b,3);
  if ((*(byte *)(lVar3 + 10 + DAT_1804479b8) & 6) != 0) goto LAB_1802ca73b;
  lVar2 = FUN_1802c8540(DAT_180447980,puVar4,&LAB_1802c8ad0);
  if ((lVar2 != 0) && ((*(byte *)(lVar3 + 10 + DAT_1804479b0) & 0x10) != 0)) {
    FUN_1802c8980(DAT_180447980,puVar4,&LAB_1802c8ad0);
    goto LAB_1802ca73b;
  }
  if (((*(ushort *)(lVar3 + 10 + DAT_1804479b8) & 0x300) == 0) ||
     ((*(byte *)(lVar3 + 10 + DAT_1804479b0) & 0x10) == 0)) {
LAB_1802ca735:
    uVar5 = 0;
  }
  else {
    iVar1 = FUN_1802ca120(*puVar4);
    if (iVar1 == 0) goto LAB_1802ca735;
  }
  local_res8[0] = uVar5;
LAB_1802ca73b:
  FUN_1802c8030("isReady",0x197,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802ca770 @ 1802ca770 (size 198)

undefined4 FUN_1802ca770(longlong param_1)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTPersistence_close",0x8d,3);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    local_res8[0] =
         (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x10))(*(undefined8 *)(param_1 + 0xe8));
    if ((code *)(*(longlong **)(param_1 + 0xf0))[1] == FUN_1802dc210) {
      if (**(longlong **)(param_1 + 0xf0) != 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x95);
      }
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x96,*(undefined8 *)(param_1 + 0xf0));
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  FUN_1802c8030("MQTTPersistence_close",0x9d,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802ca840 @ 1802ca840 (size 445)

undefined4 FUN_1802ca840(undefined8 *param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  size_t sVar2;
  char *_Dest;
  longlong *_Str;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FUN_1802c7f40("MQTTPersistence_create",0x38,3);
  if (param_2 == 0) {
    plVar1 = (longlong *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x40,0x48);
    if (plVar1 == (longlong *)0x0) {
      local_res10[0] = 0xffffff9d;
    }
    else {
      _Str = (longlong *)&DAT_1802f5954;
      if (param_3 != (longlong *)0x0) {
        _Str = param_3;
      }
      sVar2 = strlen((char *)_Str);
      _Dest = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x45,sVar2 + 1);
      *plVar1 = (longlong)_Dest;
      if (_Dest == (char *)0x0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x47,plVar1);
        local_res10[0] = 0xffffff9d;
        goto LAB_1802ca9c7;
      }
      strcpy(_Dest,(char *)_Str);
      plVar1[1] = (longlong)FUN_1802dc210;
      plVar1[2] = (longlong)FUN_1802dbcb0;
      plVar1[3] = (longlong)FUN_1802dc5a0;
      plVar1[4] = (longlong)FUN_1802dbf50;
      plVar1[5] = (longlong)FUN_1802dc830;
      plVar1[6] = (longlong)FUN_1802dc120;
      plVar1[7] = (longlong)FUN_1802dba60;
      plVar1[8] = (longlong)FUN_1802dbd50;
    }
  }
  else {
    plVar1 = (longlong *)0x0;
    if ((param_2 != 1) &&
       ((((((param_2 != 2 || (plVar1 = param_3, param_3 == (longlong *)0x0)) || (*param_3 == 0)) ||
          ((param_3[7] == 0 || (param_3[2] == 0)))) ||
         ((param_3[8] == 0 || ((param_3[4] == 0 || (param_3[6] == 0)))))) ||
        ((param_3[1] == 0 || ((param_3[3] == 0 || (param_3[5] == 0)))))))) {
      local_res10[0] = 0xfffffffe;
    }
  }
  *param_1 = plVar1;
LAB_1802ca9c7:
  FUN_1802c8030("MQTTPersistence_create",0x68,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802caa00 @ 1802caa00 (size 144)

int FUN_1802caa00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTPersistence_initialize",0x77,3);
  puVar1 = (undefined8 *)param_1[0x1e];
  if (puVar1 != (undefined8 *)0x0) {
    local_res8[0] = (*(code *)puVar1[1])(param_1 + 0x1d,*param_1,param_2,*puVar1);
    if (local_res8[0] == 0) {
      local_res8[0] = FUN_1802cb7f0(param_1);
    }
  }
  FUN_1802c8030("MQTTPersistence_initialize",0x7f,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802caa90 @ 1802caa90 (size 186)

void FUN_1802caa90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res20;
  
  lVar2 = 0;
  local_res20 = 0;
  FUN_1802c7f40("MQTTPersistence_insertInOrder",0x1a2,3);
  lVar1 = FUN_1802c87d0(param_1,&local_res20);
  while ((lVar1 != 0 && (lVar2 == 0))) {
    if (*(int *)(param_2 + 8) < *(int *)(*(longlong *)(local_res20 + 0x10) + 8)) {
      lVar2 = local_res20;
    }
    lVar1 = FUN_1802c87d0(param_1,&local_res20);
  }
  FUN_1802c8720(param_1,param_2,param_3,lVar2);
  FUN_1802c8030("MQTTPersistence_insertInOrder",0x1aa,0,3);
  return;
}



// ===== FUN_1802cab50 @ 1802cab50 (size 672)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802cab50(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  longlong *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  int local_e8 [2];
  longlong local_e0 [2];
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 *local_98 [2];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  char *local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_118;
  uVar4 = 0;
  local_e8[0] = 0;
  FUN_1802c7f40("MQTTPersistence_persistQueueEntry",700,3);
  local_70 = *param_2;
  local_98[0] = (undefined4 *)(local_70 + 8);
  local_c0 = 4;
  local_98[1] = *(undefined4 **)(local_70 + 0x10);
  local_bc = *local_98[0];
  local_68 = (char *)param_2[1];
  local_88 = local_70 + 0x18;
  local_80 = local_70 + 0x1c;
  local_78 = local_70 + 0x20;
  local_70 = local_70 + 0x24;
  local_b8 = 4;
  local_b4 = 4;
  local_b0 = 4;
  local_ac = 4;
  sVar3 = strlen(local_68);
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
  local_a8 = (int)sVar3 + 1;
  uVar7 = 8;
  local_60 = param_2 + 2;
  local_a4 = 4;
  iVar2 = *(int *)(param_1 + 0xe0);
  if (iVar2 == 1000000) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x120) < 5) {
    puVar6 = &DAT_180382f80;
  }
  else {
    plVar5 = local_e0 + 1;
    local_e0[1] = 0;
    local_d0 = 0;
    local_c8 = 0;
    if (0 < *(int *)(*param_2 + 4)) {
      plVar5 = (longlong *)(*param_2 + 0x28);
    }
    iVar1 = FUN_1802c19f0(plVar5);
    local_e0[0] = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x2e3,(longlong)iVar1);
    local_58 = local_e0[0];
    if (local_e0[0] == 0) {
      local_e8[0] = -99;
      goto LAB_1802cada5;
    }
    uVar4 = 8;
    local_e8[0] = FUN_1802c1e30(local_e0,plVar5);
    puVar6 = &DAT_180382f84;
    iVar2 = *(int *)(param_1 + 0xe0);
    uVar7 = 9;
    local_a0 = iVar1;
  }
  local_f8 = (undefined4 *)CONCAT44(local_f8._4_4_,iVar2);
  iVar2 = snprintf(local_48,0xb,&DAT_1803830b4,puVar6);
  if (iVar2 < 0xb) {
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0xe0);
    if (*(code **)(param_1 + 0xf8) != (code *)0x0) {
      local_e8[0] = (**(code **)(param_1 + 0xf8))
                              (*(undefined8 *)(param_1 + 0x108),uVar7,local_98,&local_c0);
    }
    if (local_e8[0] == 0) {
      local_f8 = &local_c0;
      local_e8[0] = (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x18))
                              (*(undefined8 *)(param_1 + 0xe8),local_48,uVar7,local_98);
      if (local_e8[0] != 0) {
        FUN_1802c6d90(5,0,"Error persisting queue entry, rc %d",local_e8[0]);
      }
    }
  }
  else {
    local_e8[0] = -2;
  }
  if (uVar4 != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x2ff,local_98[uVar4]);
  }
LAB_1802cada5:
  FUN_1802c8030("MQTTPersistence_persistQueueEntry",0x302,local_e8,3);
  return local_e8[0];
}



// ===== FUN_1802cadf0 @ 1802cadf0 (size 1151)

int FUN_1802cadf0(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4,
                 undefined8 *param_5,undefined8 *param_6,int param_7,undefined4 param_8,int param_9,
                 int param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar19;
  int local_48;
  int local_44;
  undefined8 *local_40;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar17 = (ulonglong)(int)param_4;
  lVar18 = 0;
  local_48 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_1802c7f40("MQTTPersistence_putPacket",0x1c9,3);
  lVar7 = FUN_1802c8540(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),&local_res8,&LAB_1802db850);
  lVar7 = *(longlong *)(lVar7 + 0x10);
  if (*(longlong *)(lVar7 + 0xf0) == 0) goto LAB_1802cb1ea;
  lVar8 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x1ce,0xb);
  if (lVar8 == 0) {
    local_48 = -99;
    goto LAB_1802cb1ea;
  }
  local_44 = param_4 + 1;
  puVar9 = (undefined4 *)
           FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x1d4,uVar17 * 4 + 4);
  if (puVar9 == (undefined4 *)0x0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x1d6,lVar8);
    local_48 = -99;
    goto LAB_1802cb1ea;
  }
  puVar10 = (undefined8 *)
            FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x1da,uVar17 * 8 + 8);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x1dc,lVar8);
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x1dd,puVar9);
    local_48 = -99;
    goto LAB_1802cb1ea;
  }
  iVar16 = 0;
  *puVar9 = param_3;
  *puVar10 = local_res10;
  if ((0 < (int)param_4) && (7 < param_4)) {
    local_40 = param_5 + (uVar17 - 1);
    puVar11 = puVar10 + 1;
    puVar13 = puVar10 + uVar17;
    if (((local_40 < puVar11) || (puVar13 < param_5)) &&
       ((param_6 + (uVar17 - 1) < puVar11 || (puVar13 < param_6)))) {
      puVar2 = (undefined8 *)(puVar9 + uVar17);
      puVar1 = (undefined8 *)(puVar9 + 1);
      if (((puVar2 < puVar11) || (puVar13 < puVar1)) &&
         (((local_40 < puVar1 || (puVar2 < param_5)) &&
          ((param_6 + (uVar17 - 1) < puVar1 || (puVar2 < param_6)))))) {
        puVar11 = param_6 + 2;
        puVar13 = (undefined8 *)(puVar9 + 3);
        do {
          iVar16 = iVar16 + 8;
          puVar1 = puVar11 + 8;
          lVar18 = lVar18 + 8;
          puVar13[-1] = CONCAT44(*(undefined4 *)(puVar11 + -1),*(undefined4 *)(puVar11 + -2));
          puVar2 = (undefined8 *)
                   ((longlong)param_5 + (-0x50 - (longlong)param_6) + (longlong)puVar1);
          uVar5 = puVar2[1];
          puVar3 = (undefined8 *)
                   ((longlong)puVar10 + (-0x48 - (longlong)param_6) + (longlong)puVar1);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          *puVar13 = CONCAT44(*(undefined4 *)(puVar11 + 1),*(undefined4 *)puVar11);
          puVar2 = (undefined8 *)
                   ((longlong)param_5 + (-0x40 - (longlong)param_6) + (longlong)puVar1);
          uVar5 = puVar2[1];
          puVar3 = (undefined8 *)
                   ((longlong)puVar10 + (-0x38 - (longlong)param_6) + (longlong)puVar1);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar13[1] = CONCAT44(*(undefined4 *)(puVar11 + 3),*(undefined4 *)(puVar11 + 2));
          puVar2 = (undefined8 *)
                   ((longlong)param_5 + (-0x30 - (longlong)param_6) + (longlong)puVar1);
          uVar5 = puVar2[1];
          puVar3 = (undefined8 *)
                   ((longlong)puVar10 + (-0x28 - (longlong)param_6) + (longlong)puVar1);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar13[2] = CONCAT44(*(undefined4 *)(puVar11 + 5),*(undefined4 *)(puVar11 + 4));
          puVar11 = (undefined8 *)
                    ((longlong)param_5 + (-0x20 - (longlong)param_6) + (longlong)puVar1);
          uVar5 = puVar11[1];
          puVar2 = (undefined8 *)
                   ((longlong)puVar10 + (-0x18 - (longlong)param_6) + (longlong)puVar1);
          *puVar2 = *puVar11;
          puVar2[1] = uVar5;
          puVar11 = puVar1;
          puVar13 = puVar13 + 4;
        } while (lVar18 < (longlong)(uVar17 & 0xfffffffffffffff8));
      }
    }
  }
  lVar18 = (longlong)iVar16;
  if (lVar18 < (longlong)uVar17) {
    puVar11 = param_6 + lVar18;
    puVar14 = puVar9 + lVar18 + 1;
    lVar18 = uVar17 - lVar18;
    do {
      uVar4 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 1;
      *puVar14 = uVar4;
      puVar14 = puVar14 + 1;
      *(undefined8 *)(((longlong)puVar10 - (longlong)param_6) + (longlong)puVar11) =
           *(undefined8 *)((longlong)param_5 + (-8 - (longlong)param_6) + (longlong)puVar11);
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if (param_9 == 0) {
    puVar15 = &DAT_180382f94;
    if (param_7 == 3) {
      puVar12 = &DAT_180382f94;
      puVar15 = &DAT_180382f90;
LAB_1802cb10c:
      if (param_10 < 5) {
        puVar15 = puVar12;
      }
    }
    else if (param_7 == 6) {
      puVar15 = &DAT_180382f98;
      puVar12 = &DAT_180382fa0;
      goto LAB_1802cb10c;
    }
    uVar6 = snprintf(lVar8,0xb,&DAT_180382fa4,puVar15,CONCAT44(uVar19,param_8));
    if (uVar6 < 0xb) goto LAB_1802cb140;
LAB_1802cb262:
    local_48 = -2;
  }
  else {
    if (param_9 == 1) {
      puVar15 = &DAT_180382f88;
      if (param_10 < 5) {
        puVar15 = &DAT_180382f8c;
      }
      uVar6 = snprintf(lVar8,0xb,&DAT_180382fa4,puVar15,CONCAT44(uVar19,param_8));
      if (10 < uVar6) goto LAB_1802cb262;
    }
LAB_1802cb140:
    iVar16 = local_44;
    if ((local_48 == 0) &&
       ((*(code **)(lVar7 + 0xf8) == (code *)0x0 ||
        (local_48 = (**(code **)(lVar7 + 0xf8))
                              (*(undefined8 *)(lVar7 + 0x108),local_44,puVar10,puVar9),
        local_48 == 0)))) {
      local_48 = (**(code **)(*(longlong *)(lVar7 + 0xf0) + 0x18))
                           (*(undefined8 *)(lVar7 + 0xe8),lVar8,iVar16,puVar10,puVar9);
    }
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x20d,lVar8);
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x20e,puVar9);
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x20f,puVar10);
LAB_1802cb1ea:
  FUN_1802c8030("MQTTPersistence_putPacket",0x213,&local_48,3);
  return local_48;
}



// ===== FUN_1802cb270 @ 1802cb270 (size 627)

int FUN_1802cb270(longlong param_1,char *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTPersistence_remove",0x225,3);
  if (*(longlong *)(param_1 + 0xf0) == 0) goto LAB_1802cb4b3;
  lVar3 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x229,0xb);
  if (lVar3 == 0) {
    local_res8[0] = -99;
    goto LAB_1802cb4b3;
  }
  iVar1 = strcmp(param_2,"s-");
  if ((iVar1 == 0) || (iVar1 = strcmp(param_2,"s5-"), iVar1 == 0)) {
    uVar2 = snprintf(lVar3,0xb,&DAT_180382fa4,&DAT_180382f90,param_4);
    if (uVar2 < 0xb) {
      local_res8[0] =
           (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x28))
                     (*(undefined8 *)(param_1 + 0xe8),lVar3);
      uVar2 = snprintf(lVar3,0xb,&DAT_180382fa4,&DAT_180382f98,param_4);
      if (uVar2 < 0xb) {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x28))
                          (*(undefined8 *)(param_1 + 0xe8),lVar3);
        local_res8[0] = local_res8[0] + iVar1;
        uVar2 = snprintf(lVar3,0xb,&DAT_180382fa4,&DAT_180382f94,param_4);
        if (uVar2 < 0xb) {
          iVar1 = (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x28))
                            (*(undefined8 *)(param_1 + 0xe8),lVar3);
          local_res8[0] = local_res8[0] + iVar1;
          puVar4 = &DAT_180382fa0;
          goto LAB_1802cb43c;
        }
      }
    }
LAB_1802cb332:
    local_res8[0] = -2;
LAB_1802cb484:
    FUN_1802c6d90(5,0,"Error writing %d chars with snprintf",uVar2);
  }
  else {
    uVar2 = snprintf(lVar3,0xb,&DAT_180382fa4,&DAT_180382f88,param_4);
    if (10 < uVar2) goto LAB_1802cb332;
    local_res8[0] =
         (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x28))(*(undefined8 *)(param_1 + 0xe8),lVar3);
    puVar4 = &DAT_180382f8c;
LAB_1802cb43c:
    uVar2 = snprintf(lVar3,0xb,&DAT_180382fa4,puVar4,param_4);
    if (10 < uVar2) goto LAB_1802cb332;
    iVar1 = (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x28))
                      (*(undefined8 *)(param_1 + 0xe8),lVar3);
    local_res8[0] = iVar1 + local_res8[0];
    if (local_res8[0] == -2) goto LAB_1802cb484;
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x25b,lVar3);
LAB_1802cb4b3:
  FUN_1802c8030("MQTTPersistence_remove",0x25f,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802cb4f0 @ 1802cb4f0 (size 755)

int FUN_1802cb4f0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  longlong local_58;
  longlong local_50 [2];
  
  local_res8[0] = 0;
  iVar9 = 0;
  iVar10 = 0;
  FUN_1802c7f40("MQTTPersistence_restoreMessageQueue",0x36c,3);
  if ((param_1[0x1e] != 0) &&
     (local_res8[0] = (**(code **)(param_1[0x1e] + 0x30))(param_1[0x1d],&local_res20,local_res18),
     local_res8[0] == 0)) {
    lVar8 = 0;
    do {
      if (local_res18[0] <= iVar9) break;
      local_58 = 0;
      iVar2 = strncmp(*(char **)(lVar8 + local_res20),"q-",2);
      if ((((iVar2 == 0) || (iVar2 = strncmp(*(char **)(lVar8 + local_res20),"q5-",3), iVar2 == 0))
          && (local_res8[0] =
                   (**(code **)(param_1[0x1e] + 0x20))
                             (param_1[0x1d],*(undefined8 *)(lVar8 + local_res20),&local_58,
                              local_res10), local_res8[0] == 0)) &&
         (((code *)param_1[0x20] == (code *)0x0 ||
          (local_res8[0] = (*(code *)param_1[0x20])(param_1[0x22],&local_58,local_res10),
          local_res8[0] == 0)))) {
        iVar2 = strncmp(*(char **)(lVar8 + local_res20),"q5-",3);
        lVar4 = FUN_1802cc0d0(local_58,(longlong)local_res10[0],5 - (uint)(iVar2 != 0));
        if (lVar4 != 0) {
          pcVar5 = strchr(*(char **)(lVar8 + local_res20),0x2d);
          iVar2 = atoi(pcVar5 + 1);
          *(int *)(lVar4 + 0x14) = iVar2;
          lVar7 = 0;
          uVar1 = param_1[0x1a];
          local_50[0] = 0;
          FUN_1802c7f40("MQTTPersistence_insertInSeqOrder",0x354,3);
          lVar6 = FUN_1802c87d0(uVar1,local_50);
          while ((lVar6 != 0 && (lVar7 == 0))) {
            if (*(uint *)(lVar4 + 0x14) < *(uint *)(*(longlong *)(local_50[0] + 0x10) + 0x14)) {
              lVar7 = local_50[0];
            }
            lVar6 = FUN_1802c87d0(uVar1,local_50);
          }
          FUN_1802c8720(uVar1,lVar4,0x18,lVar7);
          FUN_1802c8030("MQTTPersistence_insertInSeqOrder",0x35b,0,3);
          uVar3 = *(uint *)(param_1 + 0x1c);
          if (*(uint *)(param_1 + 0x1c) <= *(uint *)(lVar4 + 0x14)) {
            uVar3 = *(uint *)(lVar4 + 0x14);
          }
          iVar10 = iVar10 + 1;
          *(uint *)(param_1 + 0x1c) = uVar3;
        }
        if (local_58 != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x389);
        }
      }
      if (*(longlong *)(lVar8 + local_res20) != 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x38d);
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 8;
    } while (local_res8[0] == 0);
    if (local_res20 != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x392,local_res20);
    }
  }
  FUN_1802c6d90(3,0xffffffff,"%d queued messages restored for client %s",iVar10,*param_1);
  FUN_1802c8030("MQTTPersistence_restoreMessageQueue",0x395,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802cb7f0 @ 1802cb7f0 (size 2272)

int FUN_1802cb7f0(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  byte *pbVar11;
  longlong *plVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  char *_Str1;
  int local_res8 [2];
  longlong *local_res10;
  int local_res18;
  int local_res20;
  ulonglong local_88;
  longlong local_80;
  int local_78 [2];
  longlong local_70;
  byte *local_68;
  int local_60;
  byte local_5c;
  undefined3 uStack_5b;
  longlong local_50;
  
  iVar10 = 0;
  iVar5 = 0;
  iVar15 = 0;
  local_res8[0] = 0;
  iVar14 = 0;
  local_80 = 0;
  local_68 = (byte *)0x0;
  local_78[0] = 0;
  local_res20 = 0;
  local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
  local_res18 = 0;
  FUN_1802c7f40("MQTTPersistence_restorePackets",0xc3,3);
  if (param_1[0x1e] != 0) {
    local_res8[0] = (**(code **)(param_1[0x1e] + 0x30))(param_1[0x1d],&local_80,local_78);
    if (local_res8[0] == 0) {
      local_70 = 0;
      do {
        lVar8 = local_70;
        if (local_78[0] <= iVar5) break;
        iVar4 = strncmp(*(char **)(local_70 + local_80),"c-",2);
        if (iVar4 != 0) {
          iVar4 = strncmp(*(char **)(lVar8 + local_80),"c5-",3);
          if (iVar4 != 0) {
            iVar4 = strncmp(*(char **)(lVar8 + local_80),"q-",2);
            if (iVar4 != 0) {
              iVar4 = strncmp(*(char **)(lVar8 + local_80),"q5-",3);
              if (iVar4 != 0) {
                local_res8[0] =
                     (**(code **)(param_1[0x1e] + 0x20))
                               (param_1[0x1d],*(undefined8 *)(lVar8 + local_80),&local_68,&local_60)
                ;
                if (local_res8[0] == 0) {
                  if ((code *)param_1[0x20] != (code *)0x0) {
                    local_res8[0] = (*(code *)param_1[0x20])(param_1[0x22],&local_68,&local_60);
                    if (local_res8[0] != 0) goto LAB_1802cbe11;
                  }
                  local_88 = CONCAT44(local_88._4_4_,4);
                  _Str1 = *(char **)(lVar8 + local_80);
                  iVar5 = strncmp(_Str1,"r5-",3);
                  if (iVar5 == 0) {
                    _Str1 = "r-";
LAB_1802cb9f2:
                    local_88 = CONCAT44(local_88._4_4_,5);
                    if (*(int *)(param_1 + 0x24) < 5) {
                      local_res8[0] = -2;
                      goto LAB_1802cbfb1;
                    }
                  }
                  else {
                    iVar5 = strncmp(_Str1,"s5-",3);
                    if (iVar5 == 0) {
                      _Str1 = "s-";
                      goto LAB_1802cb9f2;
                    }
                    iVar5 = strncmp(_Str1,"sc5-",4);
                    if (iVar5 == 0) {
                      _Str1 = "sc-";
                      goto LAB_1802cb9f2;
                    }
                  }
                  pbVar3 = local_68;
                  local_50 = (longlong)local_60;
                  iVar14 = 1;
                  iVar5 = 1;
                  iVar15 = 0;
                  FUN_1802c7f40("MQTTPersistence_restorePacket",0x180,3);
                  bVar1 = *pbVar3;
                  _local_5c = CONCAT31(uStack_5b,bVar1);
                  do {
                    pbVar11 = pbVar3;
                    iVar14 = iVar14 + 1;
                    iVar4 = (pbVar11[1] & 0x7f) * iVar5;
                    iVar5 = iVar5 << 7;
                    iVar15 = iVar15 + iVar4;
                    pbVar3 = pbVar11 + 1;
                  } while ((char)pbVar11[1] < '\0');
                  if (((iVar14 + iVar15 == local_50) && ((bVar1 >> 4) - 1 < 0xe)) &&
                     (*(code **)(&DAT_1803c3730 + (ulonglong)(uint)(bVar1 >> 4) * 8) != (code *)0x0)
                     ) {
                    puVar7 = (uint *)(**(code **)(&DAT_1803c3730 + (ulonglong)(uint)(bVar1 >> 4) * 8
                                                 ))(local_88 & 0xffffffff,bVar1,pbVar11 + 2,
                                                    (longlong)iVar15);
                  }
                  else {
                    puVar7 = (uint *)0x0;
                  }
                  FUN_1802c8030("MQTTPersistence_restorePacket",0x192,0,3);
                  lVar8 = local_70;
                  if (puVar7 == (uint *)0x0) {
                    local_res8[0] =
                         (**(code **)(param_1[0x1e] + 0x28))
                                   (param_1[0x1d],*(undefined8 *)(local_70 + local_80));
                    iVar15 = (int)local_res10;
                  }
                  else {
                    iVar5 = strncmp(_Str1,"r-",2);
                    if (iVar5 == 0) {
                      local_88 = 0;
                      puVar7[9] = *(uint *)(param_1 + 0x24);
                      local_88 = FUN_1802d5150(puVar7,&local_88,*puVar7 >> 1 & 3,*puVar7 & 1,1);
                      *(undefined1 *)(local_88 + 0x38) = 6;
                      FUN_1802c82a0(param_1[0x17],local_88,(longlong)*(int *)(local_88 + 0x3c));
                      if (4 < *(int *)(param_1 + 0x24)) {
                        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x101,
                                      *(undefined8 *)(*(longlong *)(local_88 + 0x28) + 0x10));
                        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x102,
                                      **(undefined8 **)(local_88 + 0x28));
                        **(undefined8 **)(local_88 + 0x28) = 0;
                        *(undefined8 *)(*(longlong *)(local_88 + 0x28) + 0x10) = 0;
                      }
                      puVar7[2] = 0;
                      puVar7[3] = 0;
                      FUN_1802c59b0(puVar7);
                      local_res18 = local_res18 + 1;
LAB_1802cbe06:
                      iVar15 = (int)local_res10;
                    }
                    else {
                      iVar5 = strncmp(_Str1,"s-",2);
                      if (iVar5 != 0) {
                        iVar5 = strncmp(_Str1,"sc-",3);
                        if (iVar5 == 0) {
                          lVar8 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x136,0xb)
                          ;
                          if (lVar8 == 0) goto LAB_1802cc0c4;
                          uVar6 = *(uint *)(param_1 + 0x24);
                          puVar13 = &DAT_180382f90;
                          puVar7[3] = uVar6;
                          if ((int)uVar6 < 5) {
                            puVar13 = &DAT_180382f94;
                          }
                          uVar6 = snprintf(lVar8,0xb,&DAT_180382fa4,puVar13,puVar7[1]);
                          if (uVar6 < 0xb) {
                            iVar5 = (**(code **)(param_1[0x1e] + 0x40))(param_1[0x1d],lVar8);
                            if (iVar5 != 0) {
                              local_res8[0] =
                                   (**(code **)(param_1[0x1e] + 0x28))
                                             (param_1[0x1d],*(undefined8 *)(local_70 + local_80));
                            }
                          }
                          else {
                            local_res8[0] = -2;
                            FUN_1802c6d90(5,0,"Error writing %d chars with snprintf",uVar6);
                          }
                          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x14a,puVar7);
                          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x14b,lVar8);
                        }
                        goto LAB_1802cbe06;
                      }
                      local_88 = 0;
                      lVar8 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x10f,0xb);
                      if (lVar8 == 0) {
LAB_1802cc0c4:
                        local_res8[0] = -99;
                        goto LAB_1802cbfb1;
                      }
                      uVar6 = *(uint *)(param_1 + 0x24);
                      puVar13 = &DAT_180382f98;
                      puVar7[9] = uVar6;
                      if ((int)uVar6 < 5) {
                        puVar13 = &DAT_180382fa0;
                      }
                      uVar6 = snprintf(lVar8,0xb,&DAT_180382fa4,puVar13,puVar7[5]);
                      if (uVar6 < 0xb) {
                        local_88 = FUN_1802d5150(puVar7,&local_88,*puVar7 >> 1 & 3,*puVar7 & 1,1);
                        iVar5 = (**(code **)(param_1[0x1e] + 0x40))(param_1[0x1d],lVar8);
                        if (iVar5 == 0) {
                          *(undefined1 *)(local_88 + 0x38) = 7;
                        }
                        *(undefined8 *)(local_88 + 0x30) = 0;
                        FUN_1802caa90(param_1[0x18],local_88,(longlong)*(int *)(local_88 + 0x3c));
                        puVar7[2] = 0;
                        puVar7[3] = 0;
                        FUN_1802c59b0(puVar7);
                        iVar15 = (int)local_res10 + 1;
                        local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar15);
                      }
                      else {
                        local_res8[0] = -2;
                        FUN_1802c6d90(5,0,"Error writing %d chars with snprintf",uVar6);
                        iVar15 = (int)local_res10;
                      }
                      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x12f,lVar8);
                    }
                    lVar8 = local_70;
                  }
                  iVar5 = local_res20;
                  iVar14 = local_res18;
                }
              }
            }
          }
        }
LAB_1802cbe11:
        if (local_68 != (byte *)0x0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x153);
          local_68 = (byte *)0x0;
        }
        if (*(longlong *)(lVar8 + local_80) != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x158);
          *(undefined8 *)(lVar8 + local_80) = 0;
        }
        iVar5 = iVar5 + 1;
        local_70 = lVar8 + 8;
        local_res20 = iVar5;
      } while (local_res8[0] == 0);
    }
  }
  FUN_1802c6d90(3,0xffffffff,"%d sent messages and %d received messages restored for client %s\n",
                iVar15,iVar14,*param_1);
  local_res10 = (longlong *)0x0;
  plVar12 = (longlong *)0x0;
  FUN_1802c7f40("MQTTPersistence_wrapMsgID",0x26e,3);
  plVar2 = (longlong *)param_1[0x18];
  if (0 < (int)plVar2[3]) {
    iVar5 = (*(int *)(*(longlong *)(*plVar2 + 0x10) + 8) -
            *(int *)(*(longlong *)(plVar2[1] + 0x10) + 8)) + 0xffff;
    local_res10 = (longlong *)FUN_1802c87d0(plVar2,&local_res10);
    lVar8 = FUN_1802c87d0(param_1[0x18],&local_res10);
    if (lVar8 != 0) {
      do {
        iVar14 = *(int *)(local_res10[2] + 8) - *(int *)(*(longlong *)(*local_res10 + 0x10) + 8);
        plVar2 = local_res10;
        if (iVar14 <= iVar5) {
          iVar14 = iVar5;
          plVar2 = plVar12;
        }
        plVar12 = plVar2;
        iVar5 = iVar14;
        lVar8 = FUN_1802c87d0(param_1[0x18],&local_res10);
      } while (lVar8 != 0);
      if (plVar12 != (longlong *)0x0) {
        **(undefined8 **)param_1[0x18] = ((undefined8 *)param_1[0x18])[1];
        *(undefined8 *)(((undefined8 *)param_1[0x18])[1] + 8) = *(undefined8 *)param_1[0x18];
        *(longlong **)param_1[0x18] = plVar12;
        *(longlong *)(param_1[0x18] + 8) = *plVar12;
        **(undefined8 **)param_1[0x18] = 0;
        *(undefined8 *)(*(longlong *)(param_1[0x18] + 8) + 8) = 0;
      }
    }
  }
  FUN_1802c8030("MQTTPersistence_wrapMsgID",0x28d,0,3);
LAB_1802cbfb1:
  if (local_80 != 0) {
    lVar8 = local_80;
    if (0 < local_78[0]) {
      lVar9 = 0;
      iVar5 = local_78[0];
      do {
        if (*(longlong *)(lVar9 + lVar8) != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x167);
          lVar8 = local_80;
          iVar5 = local_78[0];
        }
        iVar10 = iVar10 + 1;
        lVar9 = lVar9 + 8;
      } while (iVar10 < iVar5);
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x169,lVar8);
  }
  if (local_68 != (byte *)0x0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x16c);
  }
  FUN_1802c8030("MQTTPersistence_restorePackets",0x16d,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802cc0d0 @ 1802cc0d0 (size 657)

longlong * FUN_1802cc0d0(char *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char *_Dest;
  size_t sVar5;
  char *local_res8;
  
  local_res8 = param_1;
  FUN_1802c7f40("MQTTPersistence_restoreQueueEntry",0x30d,3);
  plVar2 = (longlong *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x30e,0x18);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    puVar3 = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x312,0x40);
    *plVar2 = (longlong)puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x314,plVar2);
      plVar2 = (longlong *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined4 *)(*plVar2 + 4) = 1;
      *(undefined4 *)(*plVar2 + 8) = *(undefined4 *)local_res8;
      local_res8 = local_res8 + 4;
      sVar5 = (size_t)*(int *)(*plVar2 + 8);
      lVar4 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",800,sVar5);
      *(longlong *)(*plVar2 + 0x10) = lVar4;
      if (lVar4 == 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x322,*plVar2);
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x323,plVar2);
        plVar2 = (longlong *)0x0;
      }
      else {
        memcpy(*(void **)(*plVar2 + 0x10),local_res8,sVar5);
        local_res8 = local_res8 + sVar5;
        *(undefined4 *)(*plVar2 + 0x18) = *(undefined4 *)local_res8;
        *(undefined4 *)(*plVar2 + 0x1c) = *(undefined4 *)(local_res8 + 4);
        *(undefined4 *)(*plVar2 + 0x20) = *(undefined4 *)(local_res8 + 8);
        *(undefined4 *)(*plVar2 + 0x24) = *(undefined4 *)(local_res8 + 0xc);
        local_res8 = local_res8 + 0x10;
        sVar5 = strlen(local_res8);
        lVar4 = (longlong)((int)sVar5 + 1);
        _Dest = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x337,lVar4);
        plVar2[1] = (longlong)_Dest;
        if (_Dest == (char *)0x0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x339,
                        *(undefined8 *)(*plVar2 + 0x10));
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x33a,*plVar2);
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistence.c",0x33b,plVar2);
          plVar2 = (longlong *)0x0;
        }
        else {
          strcpy(_Dest,local_res8);
          *(undefined4 *)(plVar2 + 2) = *(undefined4 *)(local_res8 + lVar4);
          local_res8 = local_res8 + lVar4 + 4;
          if ((4 < param_3) &&
             (iVar1 = FUN_1802c1a20(*plVar2 + 0x28,&local_res8,param_1 + param_2), iVar1 != 1)) {
            FUN_1802c6d90(5,0xffffffff,"Error restoring properties from persistence");
          }
        }
      }
    }
  }
  FUN_1802c8030("MQTTPersistence_restoreQueueEntry",0x34a,0,3);
  return plVar2;
}



// ===== FUN_1802cc370 @ 1802cc370 (size 257)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802cc370(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_28 [2];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  FUN_1802c7f40("MQTTPersistence_unpersistQueueEntry",0x29d,3);
  puVar2 = &DAT_180382f84;
  if (*(int *)(param_1 + 0x120) < 5) {
    puVar2 = &DAT_180382f80;
  }
  local_38 = *(undefined4 *)(param_2 + 0x14);
  iVar1 = snprintf(local_20,0xb,&DAT_1803830b4,puVar2);
  if (iVar1 < 0xb) {
    local_28[0] = (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x28))
                            (*(undefined8 *)(param_1 + 0xe8),local_20);
    if (local_28[0] != 0) {
      FUN_1802c6d90(5,0,"Error %d removing qEntry from persistence",local_28[0]);
    }
  }
  else {
    FUN_1802c6d90(5,0,"Error writing %d chars with snprintf",iVar1);
    local_28[0] = -2;
  }
  FUN_1802c8030("MQTTPersistence_unpersistQueueEntry",0x2a9,local_28,3);
  return local_28[0];
}



// ===== FUN_1802cc480 @ 1802cc480 (size 99)

undefined4 FUN_1802cc480(longlong param_1)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  FUN_1802c7f40("SSLSocket_abortWrite",0x458,3);
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x459,*(undefined8 *)(param_1 + 0x30));
  FUN_1802c8030("SSLSocket_abortWrite",0x45a,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802cc4f0 @ 1802cc4f0 (size 249)

undefined4 FUN_1802cc4f0(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 1;
  FUN_1802c7f40("SSLSocket_close",0x3b5,3);
  if (0 < DAT_180447278) {
    lVar1 = FUN_1802c8540(&DAT_180447260,param_1,&LAB_1802c8ad0);
    if (lVar1 != 0) {
      FUN_1802c8980(&DAT_180447260,param_1,&LAB_1802c8ad0);
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1801a64b0();
    local_res8[0] = FUN_180274e00(*(undefined8 *)(param_1 + 0x20));
    FUN_180273650(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_1802c7f40("SSLSocket_destroyContext",0x3a8,3);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1802725b0();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1802c8030("SSLSocket_destroyContext",0x3ac,0,3);
  FUN_1802c8030("SSLSocket_close",0x3c2,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802cc5f0 @ 1802cc5f0 (size 540)

int FUN_1802cc5f0(undefined8 param_1,undefined8 param_2,char *param_3,int param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong _Count;
  char *_Dest;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar3;
  int local_18;
  undefined1 local_14 [4];
  longlong local_10;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  FUN_1802c7f40("SSLSocket_connect",0x302,3);
  FUN_1801a64b0();
  local_18 = FUN_180273140(param_1);
  if (local_18 == 1) {
    if (param_4 != 0) {
      local_10 = 0;
      lVar2 = FUN_180273ff0(param_1);
      _Count = FUN_1802dc960(param_3,local_14,0,0x75b);
      local_18 = FUN_1801e27e0(lVar2,param_3,_Count,0,&local_10);
      if (local_18 == 1) {
        FUN_1802c6d90(4,0xffffffff,"peername from X509_check_host is %s",local_10);
      }
      else {
        FUN_1802c6d90(4,0xffffffff,"X509_check_host for hostname %.*s failed, rc %d",
                      _Count & 0xffffffff,param_3,CONCAT44(uVar3,local_18));
      }
      if (local_10 != 0) {
        FUN_180195e10(local_10,"E:\\paho.mqtt.c\\src\\SSLSocket.c",0x321);
      }
      if (local_18 + 2U < 3) {
        _Dest = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x326,_Count + 1);
        if (_Dest != (char *)0x0) {
          strncpy(_Dest,param_3,_Count);
          _Dest[_Count] = '\0';
          local_18 = FUN_1801e28f0(lVar2,_Dest,0);
          FUN_1802c6d90(3,0xffffffff,"rc from X509_check_ip_asc is %d",local_18);
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x330,_Dest);
        }
        if (local_18 + 2U < 3) {
          local_18 = -3;
        }
      }
      if (lVar2 != 0) {
        FUN_1801a2830(lVar2);
      }
    }
  }
  else {
    iVar1 = FUN_1802ccbe0("SSL_connect",param_1,param_2,local_18,param_5,param_6);
    if (iVar1 == -3) {
      local_18 = -3;
    }
    else if (iVar1 - 2U < 2) {
      local_18 = -0x16;
    }
  }
  FUN_1802c8030("SSLSocket_connect",0x33c,&local_18,3);
  return local_18;
}



// ===== FUN_1802cc810 @ 1802cc810 (size 210)

int FUN_1802cc810(undefined8 *param_1)

{
  int iVar1;
  int local_res8 [8];
  
  FUN_1802c7f40("SSLSocket_continueWrite",0x440,3);
  FUN_1801a64b0();
  local_res8[0] = FUN_180274ed0(param_1[3],param_1[6],*(undefined4 *)(param_1 + 5));
  if (local_res8[0] == *(int *)(param_1 + 5)) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x445,param_1[6]);
    FUN_1802c6d90(3,0xffffffff,"SSL continueWrite: partial write now complete for socket %d",
                  *param_1);
    local_res8[0] = 1;
  }
  else {
    iVar1 = FUN_1802ccbe0("SSL_write",param_1[3],*param_1,local_res8[0],0,0);
    if (iVar1 == 3) {
      local_res8[0] = 0;
    }
  }
  FUN_1802c8030("SSLSocket_continueWrite",0x44f,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802cc8f0 @ 1802cc8f0 (size 751)

int FUN_1802cc8f0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char *pcVar3;
  int local_res8 [2];
  undefined8 uVar4;
  
  local_res8[0] = 1;
  FUN_1802c7f40("SSLSocket_createContext",0x226,3);
  lVar2 = param_1[5];
  if (lVar2 == 0) {
    uVar1 = FUN_18027cf00();
    lVar2 = FUN_1802727f0(uVar1);
    param_1[5] = lVar2;
    if (lVar2 == 0) {
      if (*(int *)(param_2 + 4) < 3) {
        FUN_1802ccbe0("SSL_CTX_new",0,*param_1,local_res8[0],0,0);
      }
      else {
        FUN_1802ccbe0("SSL_CTX_new",0,*param_1,local_res8[0],*(undefined8 *)(param_2 + 0x48),
                      *(undefined8 *)(param_2 + 0x50));
      }
      goto LAB_1802ccbaf;
    }
  }
  if (*(longlong *)(param_2 + 0x10) == 0) {
LAB_1802cca76:
    if ((*(longlong *)(param_2 + 8) == 0) && (*(longlong *)(param_2 + 0x40) == 0)) {
      if (*(int *)(param_2 + 0x68) == 0) {
        local_res8[0] = FUN_180272e50(param_1[5]);
        if (local_res8[0] != 1) {
          pcVar3 = "SSL_CTX_set_default_verify_paths";
          goto LAB_1802cc9b6;
        }
      }
    }
    else {
      local_res8[0] =
           FUN_1802727d0(param_1[5],*(longlong *)(param_2 + 8),*(undefined8 *)(param_2 + 0x40));
      if (local_res8[0] != 1) {
        pcVar3 = "SSL_CTX_load_verify_locations";
        goto LAB_1802cc9b6;
      }
    }
    if (*(longlong *)(param_2 + 0x28) != 0) {
      local_res8[0] = FUN_180272db0(param_1[5]);
      if (local_res8[0] != 1) {
        pcVar3 = "SSL_CTX_set_cipher_list";
        goto LAB_1802cc9b6;
      }
    }
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_1801cdb50(param_1[5],DAT_1804471c0,param_2);
      FUN_180272ec0(param_1[5],FUN_1802cdb80);
    }
    if ((*(longlong *)(param_2 + 0x70) != 0) && (*(int *)(param_2 + 0x78) != 0)) {
      local_res8[0] = FUN_180272c00(param_1[5]);
      if (local_res8[0] != 0) {
        if (*(int *)(param_2 + 4) < 3) {
          uVar1 = 0;
          uVar4 = 0;
        }
        else {
          uVar1 = *(undefined8 *)(param_2 + 0x50);
          uVar4 = *(undefined8 *)(param_2 + 0x48);
        }
        FUN_1802ccbe0("SSL_CTX_set_alpn_protos",0,*param_1,local_res8[0],uVar4,uVar1);
        local_res8[0] = 0;
        FUN_1802725b0(param_1[5]);
        param_1[5] = 0;
        goto LAB_1802ccbaf;
      }
      local_res8[0] = 1;
    }
    FUN_1802721c0(param_1[5],0x21,2,0);
  }
  else {
    local_res8[0] = FUN_18027af70(lVar2);
    if (local_res8[0] == 1) {
      if (*(longlong *)(param_2 + 0x18) == 0) {
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
      }
      if (*(longlong *)(param_2 + 0x20) != 0) {
        FUN_180272e30(param_1[5],FUN_1802cdc40);
        FUN_180272e40(param_1[5],*(undefined8 *)(param_2 + 0x20));
      }
      local_res8[0] = FUN_18027ad90(param_1[5],*(undefined8 *)(param_2 + 0x18),1);
      if (*(longlong *)(param_2 + 0x18) == *(longlong *)(param_2 + 0x10)) {
        *(undefined8 *)(param_2 + 0x18) = 0;
      }
      if (local_res8[0] == 1) goto LAB_1802cca76;
      pcVar3 = "SSL_CTX_use_PrivateKey_file";
    }
    else {
      pcVar3 = "SSL_CTX_use_certificate_chain_file";
    }
LAB_1802cc9b6:
    if (*(int *)(param_2 + 4) < 3) {
      FUN_1802ccbe0(pcVar3,0,*param_1,local_res8[0],0,0);
      FUN_1802725b0(param_1[5]);
      param_1[5] = 0;
    }
    else {
      FUN_1802ccbe0(pcVar3,0,*param_1,local_res8[0],*(undefined8 *)(param_2 + 0x48),
                    *(undefined8 *)(param_2 + 0x50));
      FUN_1802725b0(param_1[5]);
      param_1[5] = 0;
    }
  }
LAB_1802ccbaf:
  FUN_1802c8030("SSLSocket_createContext",0x2c1,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802ccbe0 @ 1802ccbe0 (size 319)

int FUN_1802ccbe0(char *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                 longlong param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int local_res10 [2];
  
  FUN_1802c7f40("SSLSocket_error",0x65,3);
  if (param_2 == 0) {
    local_res10[0] = FUN_1801a69b0();
  }
  else {
    local_res10[0] = FUN_180273df0(param_2,param_4);
  }
  if (local_res10[0] - 2U < 2) {
    FUN_1802c6d90(3,0xffffffff,"SSLSocket error WANT_READ/WANT_WRITE");
  }
  else {
    iVar2 = strcmp(param_1,"shutdown");
    if (iVar2 != 0) {
      piVar3 = _errno();
      iVar2 = *piVar3;
      piVar3 = _errno();
      iVar1 = *piVar3;
      pcVar4 = strerror(iVar2);
      FUN_1802c6d90(3,0xffffffff,"SSLSocket error %s(%d) in %s for socket %d rc %d errno %d %s\n",
                    &DAT_1804471d0,local_res10[0],param_1,param_3,param_4,iVar1,pcVar4);
    }
    if (param_5 != 0) {
      FUN_1801e8d10(param_5,param_6);
    }
    if ((local_res10[0] - 1U & 0xfffffffb) == 0) {
      local_res10[0] = -3;
    }
  }
  FUN_1802c8030("SSLSocket_error",0x79,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802ccd20 @ 1802ccd20 (size 69)

longlong FUN_1802ccd20(void)

{
  int iVar1;
  
  if (DAT_180447278 < 1) {
    return -1;
  }
  iVar1 = **(int **)(DAT_180447260 + 0x10);
  FUN_1802c88f0(&DAT_180447260);
  return (longlong)iVar1;
}



// ===== FUN_1802ccd70 @ 1802ccd70 (size 240)

int FUN_1802ccd70(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  int local_res20 [2];
  
  FUN_1802c7f40("SSLSocket_getch",0x34c,3);
  local_res20[0] = FUN_1802db010(param_2,param_3);
  if (local_res20[0] == -0x16) {
    FUN_1801a64b0();
    local_res20[0] = FUN_1802747e0(param_1,param_3,1);
    if (local_res20[0] < 0) {
      iVar1 = FUN_1802ccbe0("SSL_read - getch",param_1,param_2,local_res20[0],0,0);
      if (iVar1 - 2U < 2) {
        local_res20[0] = -0x16;
        FUN_1802db310(param_2,0);
      }
    }
    else if (local_res20[0] == 0) {
      local_res20[0] = -1;
    }
    else if (local_res20[0] == 1) {
      FUN_1802db560(param_2,*param_3);
      local_res20[0] = 0;
    }
  }
  FUN_1802c8030("SSLSocket_getch",0x362,local_res20,3);
  return local_res20[0];
}



// ===== FUN_1802cce60 @ 1802cce60 (size 497)

longlong FUN_1802cce60(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                      int *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_res18;
  
  FUN_1802c7f40("SSLSocket_getdata",0x374,3);
  if (param_3 == 0) {
    lVar2 = FUN_1802daf20();
    goto LAB_1802cd021;
  }
  lVar2 = FUN_1802db100(param_2,param_3,param_4);
  if (*param_4 == param_3) {
LAB_1802ccf27:
    if (*param_4 == param_3) {
      FUN_1802daf20();
      iVar1 = FUN_1802747b0(param_1);
      if (0 < iVar1) {
        local_res18 = param_2;
        FUN_1802c7f40("SSLSocket_addPendingRead",0x41e,3);
        lVar3 = FUN_1802c8540(&DAT_180447260,&local_res18,&LAB_1802c8ad0);
        if (lVar3 == 0) {
          puVar4 = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x421,8);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = local_res18;
            FUN_1802c82a0(&DAT_180447260,puVar4,8);
          }
        }
        else {
          FUN_1802c6d90(3,0xffffffff,"SSLSocket_addPendingRead: socket %d already in the list",
                        local_res18);
        }
        FUN_1802c8030("SSLSocket_addPendingRead",0x42b,0,3);
      }
    }
    else {
      FUN_1802db310(param_2);
      FUN_1802c6d90(1,0xffffffff,"SSL_read: %lu bytes expected but %lu bytes now received",param_3,
                    *param_4);
    }
  }
  else {
    FUN_1801a64b0();
    iVar1 = FUN_1802747e0(param_1,*param_4 + lVar2,(int)param_3 - (int)*param_4);
    *param_5 = iVar1;
    if (iVar1 < 0) {
      iVar1 = FUN_1802ccbe0("SSL_read - getdata",param_1,param_2,iVar1,0,0);
      *param_5 = iVar1;
      if (iVar1 - 2U < 2) goto LAB_1802ccf27;
    }
    else if (iVar1 != 0) {
      *param_4 = *param_4 + (longlong)iVar1;
      goto LAB_1802ccf27;
    }
    lVar2 = 0;
  }
LAB_1802cd021:
  FUN_1802c8030("SSLSocket_getdata",0x3a2,0,3);
  return lVar2;
}



// ===== FUN_1802cd060 @ 1802cd060 (size 393)

int FUN_1802cd060(void)

{
  undefined8 *puVar1;
  HANDLE pvVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("SSLSocket_initialize",0x1c1,3);
  if (DAT_1803c37f0 != 0) {
    local_res8[0] = FUN_18027f2c0(0,0);
    if (local_res8[0] != 1) {
      local_res8[0] = -1;
    }
    FUN_1801e4120(2,0);
    FUN_18027f2c0(0x200002,0);
    FUN_1801e4120(0xc,0);
    puVar1 = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x1d3,8);
    DAT_1804471b0 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      local_res8[0] = -1;
      goto LAB_1802cd1be;
    }
    local_res10[0] = 0;
    *puVar1 = 0;
    FUN_1802c7f40("SSL_create_mutex",0x15c,3);
    pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *puVar1 = pvVar2;
    FUN_1802c8030("SSL_create_mutex",0x162,local_res10,3);
  }
  local_res10[0] = 0;
  FUN_1802c7f40("SSL_create_mutex",0x15c,3);
  DAT_1804471b8 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  FUN_1802c8030("SSL_create_mutex",0x162,local_res10,3);
  DAT_1804471c0 = FUN_1801ae2d0(0,0,"paho ssl options",0,0,0);
LAB_1802cd1be:
  FUN_1802c8030("SSLSocket_initialize",0x1ef,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802cd1f0 @ 1802cd1f0 (size 880)

int FUN_1802cd1f0(longlong param_1,undefined8 param_2,void *param_3,ulonglong param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  size_t _Size;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  void *pvVar7;
  int *piVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  uint local_58 [2];
  void *local_50;
  
  FUN_1802c7f40("SSLSocket_putdatas",0x3d0,3);
  piVar4 = (int *)CONCAT44(param_5._4_4_,(int)param_5);
  uVar6 = param_4 & 0xffffffff;
  local_58[0] = (uint)param_4;
  lVar13 = (longlong)*piVar4;
  if (0 < lVar13) {
    piVar8 = *(int **)(piVar4 + 4);
    lVar11 = lVar13;
    do {
      local_58[0] = (int)uVar6 + *piVar8;
      uVar6 = (ulonglong)local_58[0];
      piVar8 = piVar8 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  pvVar7 = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x3d5,local_58[0]);
  local_50 = pvVar7;
  if (pvVar7 == (void *)0x0) {
    local_res20[0] = -99;
  }
  else {
    memcpy(pvVar7,param_3,param_4);
    uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    pvVar7 = (void *)((longlong)pvVar7 + param_4);
    if (0 < lVar13) {
      lVar11 = *(longlong *)(piVar4 + 2);
      lVar12 = 0;
      do {
        _Src = *(void **)(lVar11 + lVar12 * 8);
        if (_Src != (void *)0x0) {
          lVar3 = *(longlong *)(piVar4 + 4);
          _Size = *(size_t *)(lVar3 + lVar12 * 8);
          if (_Size != 0) {
            memcpy(pvVar7,_Src,_Size);
            pvVar7 = (void *)((longlong)pvVar7 + *(longlong *)(lVar3 + lVar12 * 8));
          }
        }
        uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
        lVar12 = lVar12 + 1;
      } while (lVar12 < lVar13);
    }
    WaitForSingleObject(DAT_1804471b8,0xffffffff);
    FUN_1801a64b0();
    uVar5 = FUN_180274ed0(param_1,local_50,local_58[0]);
    if (uVar5 == local_58[0]) {
      local_res20[0] = 0;
    }
    else {
      FUN_1802c7f40("SSLSocket_error",0x65,3);
      if (param_1 == 0) {
        param_5._0_4_ = FUN_1801a69b0();
      }
      else {
        param_5._0_4_ = FUN_180273df0(param_1,uVar5);
      }
      if ((int)param_5 - 2U < 2) {
        FUN_1802c6d90(3,0xffffffff,"SSLSocket error WANT_READ/WANT_WRITE");
      }
      else {
        piVar8 = _errno();
        iVar1 = *piVar8;
        piVar8 = _errno();
        iVar2 = *piVar8;
        pcVar9 = strerror(iVar1);
        FUN_1802c6d90(3,0xffffffff,"SSLSocket error %s(%d) in %s for socket %d rc %d errno %d %s\n",
                      &DAT_1804471d0,CONCAT44(uVar14,(int)param_5),"SSL_write",param_2,uVar5,iVar2,
                      pcVar9);
        if (((int)param_5 - 1U & 0xfffffffb) == 0) {
          param_5._0_4_ = -3;
        }
      }
      FUN_1802c8030("SSLSocket_error",0x79,&param_5,3);
      if ((int)param_5 == 3) {
        puVar10 = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x3f0,8);
        param_5._0_4_ = 1;
        if (puVar10 == (undefined8 *)0x0) {
          local_res20[0] = -99;
          ReleaseMutex(DAT_1804471b8);
          goto LAB_1802cd531;
        }
        FUN_1802c6d90(3,0xffffffff,"Partial write: incomplete write of %lu bytes on SSL socket %d",
                      local_58[0],param_2);
        FUN_1802db450(param_2,param_1,1,local_58,&param_5,local_58[0],0);
        *puVar10 = param_2;
        FUN_1802c82a0(DAT_180447988,puVar10,4);
        local_res20[0] = -0x16;
      }
      else {
        local_res20[0] = -1;
      }
    }
    ReleaseMutex(DAT_1804471b8);
    if (local_res20[0] == -0x16) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x40c,param_3);
      if (0 < lVar13) {
        piVar8 = *(int **)(piVar4 + 6);
        lVar11 = 0;
        do {
          if (*piVar8 != 0) {
            lVar12 = *(longlong *)(piVar4 + 2);
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x411,
                          *(undefined8 *)(lVar12 + lVar11 * 8));
            *(undefined8 *)(lVar12 + lVar11 * 8) = 0;
          }
          lVar11 = lVar11 + 1;
          piVar8 = piVar8 + 1;
        } while (lVar11 < lVar13);
      }
    }
    else {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x409,local_50);
    }
  }
LAB_1802cd531:
  FUN_1802c8030("SSLSocket_putdatas",0x417,local_res20,3);
  return local_res20[0];
}



// ===== FUN_1802cd560 @ 1802cd560 (size 533)

int FUN_1802cd560(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int local_res8 [2];
  undefined8 uVar4;
  
  FUN_1802c7f40("SSLSocket_setSocketForSSL",0x2cb,3);
  if ((param_1[5] != 0) || (local_res8[0] = FUN_1802cc8f0(param_1,param_2), local_res8[0] == 1)) {
    FUN_180276d00(param_1[5],FUN_1802cd830);
    FUN_180272e80(param_1[5],FUN_1802cda60);
    if (*(int *)(param_2 + 0x30) != 0) {
      FUN_180272ed0(param_1[5],1,0);
    }
    uVar1 = FUN_180274210(param_1[5]);
    param_1[4] = uVar1;
    iVar3 = 0;
    lVar2 = FUN_180273d00(uVar1,0);
    while (lVar2 != 0) {
      FUN_1802c6d90(4,1,"SSL cipher available: %d:%s",iVar3,lVar2);
      iVar3 = iVar3 + 1;
      lVar2 = FUN_180273d00(param_1[4],iVar3);
    }
    local_res8[0] = FUN_180274c10(param_1[4],*(undefined4 *)param_1);
    if (local_res8[0] != 1) {
      if (*(int *)(param_2 + 4) < 3) {
        uVar1 = 0;
        uVar4 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(param_2 + 0x50);
        uVar4 = *(undefined8 *)(param_2 + 0x48);
      }
      FUN_1802ccbe0("SSL_set_fd",param_1[4],*param_1,local_res8[0],uVar4,uVar1);
    }
    lVar2 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x2e7,param_4 + 1);
    if (lVar2 == 0) {
      local_res8[0] = -99;
    }
    else {
      FUN_1802d75c0(lVar2,param_3,param_4 + 1);
      local_res8[0] = FUN_180273190(param_1[4],0x37,0,lVar2);
      if (local_res8[0] != 1) {
        if (*(int *)(param_2 + 4) < 3) {
          uVar1 = 0;
          uVar4 = 0;
        }
        else {
          uVar1 = *(undefined8 *)(param_2 + 0x50);
          uVar4 = *(undefined8 *)(param_2 + 0x48);
        }
        FUN_1802ccbe0("SSL_set_tlsext_host_name",0,*param_1,local_res8[0],uVar4,uVar1);
      }
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x2f1,lVar2);
    }
  }
  FUN_1802c8030("SSLSocket_setSocketForSSL",0x2f7,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802cd780 @ 1802cd780 (size 175)

void FUN_1802cd780(void)

{
  BOOL local_res8 [8];
  
  FUN_1802c7f40("SSLSocket_terminate",0x1f5,3);
  if ((DAT_1803c37f0 != 0) && (DAT_1804471b0 != 0)) {
    FUN_1802cdb20();
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SSLSocket.c",0x204,DAT_1804471b0);
  }
  FUN_1802c7f40("SSL_destroy_mutex",0x188,3);
  local_res8[0] = CloseHandle(DAT_1804471b8);
  FUN_1802c8030("SSL_destroy_mutex",0x18e,local_res8,3);
  FUN_1802c8030("SSLSocket_terminate",0x20a,0,3);
  return;
}



// ===== FUN_1802cd830 @ 1802cd830 (size 549)

void FUN_1802cd830(undefined8 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) != 0) {
      if ((param_2 >> 0xc & 1) == 0) {
        pcVar6 = "undef";
        if ((param_2 >> 0xd & 1) != 0) {
          pcVar6 = "accept";
        }
      }
      else {
        pcVar6 = "connect";
      }
      uVar2 = FUN_18027d250();
      FUN_1802c6d90(4,1,"SSL %s:%s",pcVar6,uVar2);
      return;
    }
    uVar2 = FUN_18027cff0(param_3);
    if ((param_2 >> 0xe & 1) != 0) {
      uVar3 = FUN_18027d220(param_3);
      pcVar6 = "write";
      if ((param_2 & 4) != 0) {
        pcVar6 = "read";
      }
      pcVar7 = "SSL alert %s:%s:%s";
      goto LAB_1802cda31;
    }
    if ((param_2 & 0x10) != 0) {
      uVar3 = FUN_18027d220(param_3);
      pcVar6 = "write";
      if ((param_2 & 4) != 0) {
        pcVar6 = "read";
      }
      pcVar7 = "SSL handshake started %s:%s:%s";
      goto LAB_1802cda31;
    }
    if ((param_2 & 0x20) != 0) {
      uVar3 = FUN_18027d220(param_3);
      pcVar6 = "write";
      if ((param_2 & 4) != 0) {
        pcVar6 = "read";
      }
      FUN_1802c6d90(4,1,"SSL handshake done %s:%s:%s",pcVar6,uVar3,uVar2);
      iVar1 = FUN_180274080();
      uVar4 = 0;
      piVar5 = &DAT_1803c3800;
      pcVar6 = "undef";
      do {
        if (*piVar5 == iVar1) {
          pcVar6 = (&PTR_s_X509_V_OK_1803c3808)[(longlong)(int)uVar4 * 2];
          break;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < 0x34);
      FUN_1802c6d90(4,1,"SSL certificate verification: %s",pcVar6,uVar3,uVar2);
      return;
    }
    uVar3 = FUN_18027d220(param_3);
    pcVar6 = (char *)FUN_18027d250(param_1);
  }
  else {
    if ((param_2 >> 0xc & 1) == 0) {
      pcVar6 = "undef";
      if ((param_2 >> 0xd & 1) != 0) {
        pcVar6 = "accept";
      }
    }
    else {
      pcVar6 = "connect";
    }
    uVar2 = FUN_180273db0();
    uVar2 = FUN_180278420(uVar2);
    uVar3 = FUN_18027d250(param_1);
  }
  pcVar7 = "SSL state %s:%s:%s";
LAB_1802cda31:
  FUN_1802c6d90(4,1,pcVar7,pcVar6,uVar3,uVar2);
  return;
}



// ===== FUN_1802cda60 @ 1802cda60 (size 187)

void FUN_1802cda60(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  
  piVar1 = &DAT_1803c3b40;
  uVar2 = 0;
  do {
    if (*piVar1 == param_2) {
      if ((&PTR_s_SSL_2_0_1803c3b48)[(longlong)(int)uVar2 * 2] != (undefined *)0x0)
      goto LAB_1802cdace;
      break;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (uVar2 < 3);
  uVar2 = snprintf(&DAT_180447248,0x14,&DAT_180383afc,param_2);
  if (0x13 < uVar2) {
    DAT_18044725b = 0;
  }
LAB_1802cdace:
  pcVar3 = "received";
  if (param_1 != 0) {
    pcVar3 = "sent";
  }
  FUN_1802c6d90(3,0xffffffff,"%s %s %d buflen %d",pcVar3);
  return;
}



// ===== FUN_1802cdb20 @ 1802cdb20 (size 83)

BOOL FUN_1802cdb20(undefined8 *param_1)

{
  BOOL local_res10 [6];
  
  FUN_1802c7f40("SSL_destroy_mutex",0x188,3);
  local_res10[0] = CloseHandle((HANDLE)*param_1);
  FUN_1802c8030("SSL_destroy_mutex",0x18e,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802cdb80 @ 1802cdb80 (size 190)

undefined4
FUN_1802cdb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  FUN_1802c7f40("call_ssl_psk_cb",0x211,3);
  uVar1 = FUN_180273cd0(param_1);
  lVar2 = FUN_1802727a0(uVar1,DAT_1804471c0);
  if ((lVar2 != 0) && (*(code **)(lVar2 + 0x58) != (code *)0x0)) {
    local_18[0] = (**(code **)(lVar2 + 0x58))
                            (param_2,param_3,param_4,param_5,param_6,*(undefined8 *)(lVar2 + 0x60));
  }
  FUN_1802c8030("call_ssl_psk_cb",0x21e,local_18,3);
  return local_18[0];
}



// ===== FUN_1802cdc40 @ 1802cdc40 (size 151)

undefined4 FUN_1802cdc40(char *param_1,int param_2,int param_3,char *param_4)

{
  size_t sVar1;
  undefined4 local_res18 [2];
  
  local_res18[0] = 0;
  FUN_1802c7f40("pem_passwd_cb",0x14d,3);
  if (param_3 == 0) {
    strncpy(param_1,param_4,(longlong)param_2);
    param_1[(longlong)param_2 - 1] = '\0';
    sVar1 = strlen(param_1);
    local_res18[0] = (undefined4)sVar1;
  }
  FUN_1802c8030("pem_passwd_cb",0x154,local_res18,3);
  return local_res18[0];
}



// ===== FUN_1802cdd00 @ 1802cdd00 (size 111)

void FUN_1802cdd00(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)

{
  HANDLE hObject;
  
  FUN_1802c7f40("Paho_thread_start",0x48,3);
  hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,param_1,param_2,0,(LPDWORD)0x0);
  CloseHandle(hObject);
  FUN_1802c8030("Paho_thread_start",0x53,0,3);
  return;
}



// ===== FUN_1802cdd90 @ 1802cdd90 (size 101)

DWORD FUN_1802cdd90(HANDLE param_1)

{
  BOOL BVar1;
  DWORD local_res10 [6];
  
  local_res10[0] = 0;
  FUN_1802c7f40("Thread_post_sem",0x15b,3);
  BVar1 = SetEvent(param_1);
  if (BVar1 == 0) {
    local_res10[0] = GetLastError();
  }
  FUN_1802c8030("Thread_post_sem",0x16a,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802cde00 @ 1802cde00 (size 72)

undefined4 FUN_1802cde00(void)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FUN_1802c7f40("Thread_set_name",0x5e,3);
  FUN_1802c8030("Thread_set_name",0x73,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802cde50 @ 1802cde50 (size 118)

DWORD FUN_1802cde50(HANDLE param_1,DWORD param_2)

{
  DWORD local_res10 [6];
  
  FUN_1802c7f40("Thread_wait_sem",0x115,3);
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  local_res10[0] = WaitForSingleObject(param_1,param_2);
  if (local_res10[0] == 0x102) {
    local_res10[0] = 0x274c;
  }
  FUN_1802c8030("Thread_wait_sem",0x136,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802cded0 @ 1802cded0 (size 160)

void FUN_1802cded0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8;
  
  FUN_1802c7f40("MQTTAsync_NULLPublishResponses",0x9ea,3);
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_res8 = 0;
    lVar2 = FUN_1802c87d0(*(longlong *)(param_1 + 0x198),&local_res8);
    while (lVar2 != 0) {
      piVar1 = *(int **)(local_res8 + 0x10);
      if (*piVar1 == 3) {
        piVar1[0x16] = 0;
        piVar1[0x17] = 0;
        piVar1[0x1a] = 0;
        piVar1[0x1b] = 0;
      }
      lVar2 = FUN_1802c87d0(*(undefined8 *)(param_1 + 0x198),&local_res8);
    }
  }
  FUN_1802c8030("MQTTAsync_NULLPublishResponses",0x9fa,0,3);
  return;
}



// ===== FUN_1802cdf70 @ 1802cdf70 (size 1242)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802cdf70(int *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  size_t sVar8;
  undefined *puVar9;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_88 [2];
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_68 [8];
  int local_60;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  local_88[0] = 0;
  FUN_1802c7f40("MQTTAsync_addCommand",0x31d,3);
  iVar3 = FUN_1802cdcf0(DAT_1803c9998);
  if (iVar3 != 0) {
    pcVar5 = strerror(iVar3);
    FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar5);
  }
  if ((*param_1 != 1) ||
     ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x22) + 0x18) + 0x20) & 0x3c0) == 0)) {
    UVar6 = GetTickCount64();
    *(ULONGLONG *)(param_1 + 0xe) = UVar6;
  }
  if ((*param_1 == 1) || ((*param_1 == 0xe && (param_1[0x16] != 0)))) {
    for (puVar2 = (undefined8 *)*DAT_1803c9970; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      piVar1 = (int *)puVar2[2];
      if ((*piVar1 != 1) && (*piVar1 != 0xe)) break;
      if (*(longlong *)(piVar1 + 0x22) == *(longlong *)(param_1 + 0x22)) {
        if (piVar1 != (int *)0x0) {
          FUN_1802d02c0(param_1);
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x445,param_1);
          local_88[0] = -0x12;
          goto LAB_1802ce37f;
        }
        break;
      }
    }
    lVar7 = FUN_1802c8720(DAT_1803c9970,param_1,(longlong)param_2,*DAT_1803c9970);
    if (lVar7 != 0) goto LAB_1802ce37f;
  }
  else {
    lVar7 = FUN_1802c82a0(DAT_1803c9970,param_1,(longlong)param_2);
    if (lVar7 != 0) {
      if ((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x22) + 0x18) + 0xf0) != 0) &&
         ((((*param_1 != 3 ||
            (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x22) + 0x1b0), lVar7 == 0)) ||
           (*(int *)(lVar7 + 4) < 2)) || ((*(int *)(lVar7 + 0x20) != 0 || (param_1[0x1c] != 0))))))
      {
        local_88[0] = FUN_1802d08e0(param_1);
        if (*param_1 != 3) goto LAB_1802ce37f;
        if (local_88[0] == 0) {
          puVar9 = &DAT_180382f7c;
          param_1[0x25] = 1;
          if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x22) + 0x18) + 0x120) < 5) {
            puVar9 = &DAT_180382f78;
          }
          local_98 = param_1[0x24];
          uVar4 = snprintf(local_28,0xb,&DAT_1803830b4,puVar9);
          if (10 < uVar4) {
            local_88[0] = -2;
            FUN_1802c6d90(5,0,"Error writing %d chars with snprintf",uVar4);
            goto LAB_1802ce37f;
          }
          sVar8 = strlen((char *)local_28);
          pcVar5 = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x367,sVar8 + 1);
          *(char **)(param_1 + 0x26) = pcVar5;
          strcpy(pcVar5,(char *)local_28);
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x36a,
                        *(undefined8 *)(param_1 + 0x1a));
          param_1[0x1a] = 0;
          param_1[0x1b] = 0;
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x36c,
                        *(undefined8 *)(param_1 + 0x16));
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          FUN_1802c1750(param_1 + 0x10);
        }
      }
      if (*param_1 == 3) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x22) + 0x1b0);
        piVar1 = (int *)(*(longlong *)(param_1 + 0x22) + 0x1bc);
        if ((lVar7 == 0) || (*piVar1 < *(int *)(lVar7 + 0xc))) {
          *piVar1 = *piVar1 + 1;
        }
        else {
          local_28[0] = 0;
          lVar7 = FUN_1802c87d0(DAT_1803c9970,local_28);
          while (lVar7 != 0) {
            piVar1 = *(int **)(local_28[0] + 0x10);
            if ((*(longlong *)(piVar1 + 0x22) == *(longlong *)(param_1 + 0x22)) && (*piVar1 == 3)) {
              if (piVar1 != (int *)0x0) {
                FUN_1802c8320(DAT_1803c9970,piVar1);
                if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x22) + 0x18) + 0xf0) != 0)
                {
                  FUN_1802d3f20(piVar1);
                }
                if (*(longlong *)(piVar1 + 4) == 0) {
                  if (*(longlong *)(piVar1 + 8) != 0) {
                    local_60 = piVar1[10];
                    local_40 = 0xfffffff4;
                    local_38 = 0;
                    local_30 = 3;
                    local_98 = -0xc;
                    FUN_1802c6d90(3,0xffffffff,"Calling connect failure for client %s, rc %d",
                                  **(undefined8 **)(*(longlong *)(param_1 + 0x22) + 0x18));
                    (**(code **)(piVar1 + 8))(*(undefined8 *)(piVar1 + 0xc),local_68);
                  }
                  FUN_1802d0290(piVar1);
                }
                else {
                  local_80 = piVar1[10];
                  local_7c = 0xfffffff4;
                  local_78 = 0;
                  local_98 = -0xc;
                  FUN_1802c6d90(3,0xffffffff,"Calling connect failure for client %s, rc %d",
                                **(undefined8 **)(*(longlong *)(param_1 + 0x22) + 0x18));
                  (**(code **)(piVar1 + 4))(*(undefined8 *)(piVar1 + 0xc),&local_80);
                  FUN_1802d0290(piVar1);
                }
              }
              break;
            }
            lVar7 = FUN_1802c87d0(DAT_1803c9970,local_28);
          }
        }
      }
      goto LAB_1802ce37f;
    }
  }
  local_88[0] = -99;
LAB_1802ce37f:
  iVar3 = FUN_1802cdd70(DAT_1803c9998);
  if (iVar3 != 0) {
    pcVar5 = strerror(iVar3);
    FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar5);
  }
  iVar3 = FUN_1802cdd90(DAT_1803c99a0);
  if (iVar3 != 0) {
    FUN_1802c6d90(5,0,"Error %d from signal cond",iVar3);
  }
  FUN_1802c8030("MQTTAsync_addCommand",0x3b2,local_88,3);
  return local_88[0];
}



// ===== FUN_1802ce450 @ 1802ce450 (size 362)

int FUN_1802ce450(longlong param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  int local_res8 [2];
  
  FUN_1802c7f40("MQTTAsync_assignMsgId",0xb00,3);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x98);
  local_res8[0] = iVar2;
  iVar1 = FUN_1802cdcf0(DAT_1803c9998);
  if (iVar1 != 0) {
    pcVar3 = strerror(iVar1);
    FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar3);
  }
  if (local_res8[0] == 0xffff) {
    local_res8[0] = 1;
  }
  else {
    local_res8[0] = local_res8[0] + 1;
  }
  do {
    lVar4 = FUN_1802c8540(DAT_1803c9970,local_res8,&LAB_1802d4bc0);
    if (((lVar4 == 0) &&
        (lVar4 = FUN_1802c8540(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xc0),local_res8,
                               &LAB_1802d7670), lVar4 == 0)) &&
       (lVar4 = FUN_1802c8540(*(undefined8 *)(param_1 + 0x198),local_res8,&LAB_1802d4bc0),
       lVar4 == 0)) goto LAB_1802ce54f;
    if (local_res8[0] == 0xffff) {
      local_res8[0] = 1;
    }
    else {
      local_res8[0] = local_res8[0] + 1;
    }
  } while (local_res8[0] != iVar2);
  local_res8[0] = 0;
LAB_1802ce54f:
  iVar2 = FUN_1802cdd70(DAT_1803c9998);
  if (iVar2 != 0) {
    pcVar3 = strerror(iVar2);
    FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar3);
  }
  if (local_res8[0] != 0) {
    *(int *)(*(longlong *)(param_1 + 0x18) + 0x98) = local_res8[0];
  }
  FUN_1802c8030("MQTTAsync_assignMsgId",0xb15,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802ce5c0 @ 1802ce5c0 (size 143)

undefined4 FUN_1802ce5c0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 local_res8 [2];
  
  FUN_1802c7f40("MQTTAsync_checkConn",0xc4,3);
  if ((*(int *)(param_1 + 0x58) + 1 < *(int *)(param_2 + 0x1cc)) ||
     (((param_3 == 0 && (*(int *)(param_1 + 0x5c) == 3)) &&
      (*(int *)(*(longlong *)(param_2 + 0x18) + 0x120) == 0)))) {
    local_res8[0] = 1;
  }
  else {
    local_res8[0] = 0;
  }
  FUN_1802c8030("MQTTAsync_checkConn",199,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802ce650 @ 1802ce650 (size 424)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ce650(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  FUN_1802c7f40("MQTTAsync_checkDisconnect",0x3ce,3);
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xc0) + 0x18) != 0) {
    iVar1 = *(int *)(param_2 + 0x5c);
    uVar3 = FUN_1802c8270(*(undefined8 *)(param_2 + 0x38));
    if (uVar3 < (ulonglong)(longlong)iVar1) goto LAB_1802ce7bf;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x20);
  FUN_1802cf000(*(longlong *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x60),param_2 + 0x40);
  if (*(int *)(param_2 + 0x58) == 0) {
    if (*(longlong *)(param_2 + 8) == 0) {
      if (*(longlong *)(param_2 + 0x18) == 0) goto LAB_1802ce7bf;
      local_98 = 0x4453514d;
      uStack_94 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      local_78 = 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      local_68 = 0;
      uStack_8c = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_30 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      FUN_1802c6d90(3,0xffffffff,"Calling disconnect complete for client %s",
                    **(undefined8 **)(param_1 + 0x18));
      pcVar4 = *(code **)(param_2 + 0x18);
    }
    else {
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_1802c6d90(3,0xffffffff,"Calling disconnect complete for client %s",
                    **(undefined8 **)(param_1 + 0x18));
      pcVar4 = *(code **)(param_2 + 8);
    }
    (*pcVar4)(*(undefined8 *)(param_2 + 0x30),&local_98);
  }
  else {
    if ((*(longlong *)(param_1 + 0x20) != 0) && ((uVar2 & 4) != 0)) {
      FUN_1802c6d90(3,0xffffffff,"Calling connectionLost for client %s",
                    **(undefined8 **)(param_1 + 0x18));
      (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x38),0);
    }
    FUN_1802d3af0(param_1);
  }
LAB_1802ce7bf:
  FUN_1802c8030("MQTTAsync_checkDisconnect",0x3ee,0,3);
  return;
}



// ===== FUN_1802ce800 @ 1802ce800 (size 956)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ce800(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *_Dst;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_1802c7f40("MQTTAsync_checkTimeouts",0x6d1,3);
  iVar7 = FUN_1802cdcf0(DAT_1803c9988);
  if (iVar7 != 0) {
    pcVar8 = strerror(iVar7);
    FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar8);
  }
  UVar9 = GetTickCount64();
  lVar10 = FUN_1802c8260(UVar9,DAT_180447288);
  if (2999 < lVar10) {
    DAT_180447288 = UVar9;
    lVar10 = FUN_1802c87d0(DAT_1803c9968,&local_38);
    while (lVar10 != 0) {
      lVar10 = *(longlong *)(local_38 + 0x10);
      if ((*(uint *)(*(longlong *)(lVar10 + 0x18) + 0x20) & 0x3c0) == 0x380) {
        FUN_1802ce650(lVar10,lVar10 + 0x108);
      }
      if (((*(uint *)(*(longlong *)(lVar10 + 0x18) + 0x20) & 0x3c0) == 0) ||
         (iVar7 = *(int *)(lVar10 + 0x1d8), uVar11 = FUN_1802c8270(*(undefined8 *)(lVar10 + 0xb8)),
         uVar11 <= (ulonglong)(longlong)(iVar7 * 1000))) {
        if (((*(int *)(lVar10 + 0x1c0) != 0) && (*(int *)(lVar10 + 0x1f0) != 0)) &&
           ((*(int *)(lVar10 + 500) != 0 ||
            (iVar7 = *(int *)(lVar10 + 0x1dc),
            uVar11 = FUN_1802c8270(*(undefined8 *)(lVar10 + 0x1e8)),
            (ulonglong)(longlong)(iVar7 * 1000) < uVar11)))) {
          _Dst = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x6f1,0xa0);
          if (_Dst == (undefined8 *)0x0) break;
          memset(_Dst,0,0xa0);
          _Dst[0x11] = lVar10;
          uVar6 = *(undefined8 *)(lVar10 + 0x88);
          *_Dst = *(undefined8 *)(lVar10 + 0x80);
          _Dst[1] = uVar6;
          uVar6 = *(undefined8 *)(lVar10 + 0x98);
          _Dst[2] = *(undefined8 *)(lVar10 + 0x90);
          _Dst[3] = uVar6;
          uVar6 = *(undefined8 *)(lVar10 + 0xa8);
          _Dst[4] = *(undefined8 *)(lVar10 + 0xa0);
          _Dst[5] = uVar6;
          uVar6 = *(undefined8 *)(lVar10 + 0xb8);
          _Dst[6] = *(undefined8 *)(lVar10 + 0xb0);
          _Dst[7] = uVar6;
          uVar6 = *(undefined8 *)(lVar10 + 200);
          _Dst[8] = *(undefined8 *)(lVar10 + 0xc0);
          _Dst[9] = uVar6;
          uVar6 = *(undefined8 *)(lVar10 + 0xd8);
          _Dst[10] = *(undefined8 *)(lVar10 + 0xd0);
          _Dst[0xb] = uVar6;
          uVar6 = *(undefined8 *)(lVar10 + 0xe8);
          _Dst[0xc] = *(undefined8 *)(lVar10 + 0xe0);
          _Dst[0xd] = uVar6;
          uVar3 = *(undefined4 *)(lVar10 + 0xf4);
          uVar4 = *(undefined4 *)(lVar10 + 0xf8);
          uVar5 = *(undefined4 *)(lVar10 + 0xfc);
          *(undefined4 *)(_Dst + 0xe) = *(undefined4 *)(lVar10 + 0xf0);
          *(undefined4 *)((longlong)_Dst + 0x74) = uVar3;
          *(undefined4 *)(_Dst + 0xf) = uVar4;
          *(undefined4 *)((longlong)_Dst + 0x7c) = uVar5;
          _Dst[0x10] = *(undefined8 *)(lVar10 + 0x100);
          if (*(int *)(*(longlong *)(lVar10 + 0x18) + 0x120) == 0) {
            *(undefined4 *)((longlong)_Dst + 0x5c) = 0;
          }
          if (*(longlong *)(lVar10 + 0x70) != 0) {
            puVar1 = *(undefined8 **)(lVar10 + 0x18);
            local_30 = 0x4443514d;
            local_28 = puVar1[1];
            local_18 = puVar1[3];
            local_20 = *(undefined4 *)(puVar1 + 2);
            FUN_1802c6d90(3,0xffffffff,"Calling updateConnectOptions for client %s",*puVar1);
            iVar7 = (**(code **)(lVar10 + 0x70))(*(undefined8 *)(lVar10 + 0x78),&local_30);
            if (iVar7 != 0) {
              lVar2 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 8);
              if (local_28 != lVar2) {
                if (lVar2 != 0) {
                  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x70a);
                }
                *(longlong *)(*(longlong *)(lVar10 + 0x18) + 8) = local_28;
              }
              lVar2 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x18);
              if (local_18 != lVar2) {
                if (lVar2 != 0) {
                  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x713);
                }
                if (local_18 == 0) {
                  *(undefined8 *)(*(longlong *)(lVar10 + 0x18) + 0x18) = 0;
                  *(undefined4 *)(*(longlong *)(lVar10 + 0x18) + 0x10) = 0;
                }
                else {
                  *(undefined4 *)(*(longlong *)(lVar10 + 0x18) + 0x10) = local_20;
                  *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x18) = local_18;
                }
              }
            }
          }
          FUN_1802c6d90(3,0xffffffff,"Automatically attempting to reconnect");
          FUN_1802cdf70(_Dst,0x88);
          *(undefined4 *)(lVar10 + 500) = 0;
        }
      }
      else {
        FUN_1802d4c40(lVar10,0xffffffff,"TCP connect timeout");
      }
      lVar10 = FUN_1802c87d0(DAT_1803c9968,&local_38);
    }
  }
  iVar7 = FUN_1802cdd70(DAT_1803c9988);
  if (iVar7 != 0) {
    pcVar8 = strerror(iVar7);
    FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar8);
  }
  FUN_1802c8030("MQTTAsync_checkTimeouts",0x729,0,3);
  return;
}



// ===== FUN_1802cebc0 @ 1802cebc0 (size 755)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1802cebc0(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  FUN_1802c7f40("MQTTAsync_cleanSession",0xa2a,3);
  local_80[0] = FUN_1802d4200(param_1);
  FUN_1802d52f0(*(undefined8 *)(param_1 + 0xb8));
  FUN_1802d52f0(*(undefined8 *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0x98) = 0;
  lVar4 = FUN_1802c8540(DAT_1803c9968,param_1,&LAB_1802d4bb0);
  if (lVar4 == 0) {
    FUN_1802c6d90(5,0xffffffff,"cleanSession: did not find client structure in handles list");
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x10);
    FUN_1802c7f40("MQTTAsync_NULLPublishResponses",0x9ea,3);
    if (*(longlong *)(lVar4 + 0x198) != 0) {
      local_88 = 0;
      lVar5 = FUN_1802c87d0(*(longlong *)(lVar4 + 0x198),&local_88);
      while (lVar5 != 0) {
        piVar1 = *(int **)(local_88 + 0x10);
        if (*piVar1 == 3) {
          piVar1[0x16] = 0;
          piVar1[0x17] = 0;
          piVar1[0x1a] = 0;
          piVar1[0x1b] = 0;
        }
        lVar5 = FUN_1802c87d0(*(undefined8 *)(lVar4 + 0x198),&local_88);
      }
    }
    FUN_1802c8030("MQTTAsync_NULLPublishResponses",0x9fa,0,3);
    iVar9 = 0;
    FUN_1802c7f40("MQTTAsync_freeResponses",0x77f,3);
    if (*(longlong *)(lVar4 + 0x198) != 0) {
      local_88 = 0;
      lVar5 = FUN_1802c87d0(*(longlong *)(lVar4 + 0x198),&local_88);
      while (lVar5 != 0) {
        puVar2 = *(undefined4 **)(local_88 + 0x10);
        if (*(longlong *)(puVar2 + 4) == 0) {
          if (*(longlong *)(puVar2 + 8) != 0) {
            local_60 = puVar2[10];
            local_68 = 0x4446514d;
            local_5c = 0;
            local_54 = 0;
            local_48 = 0;
            local_30 = 0;
            local_40 = 0xfffffff5;
            local_38 = 0;
            uVar3 = **(undefined8 **)(lVar4 + 0x18);
            uVar6 = FUN_1802c5b10(*puVar2);
            local_98 = uVar3;
            FUN_1802c6d90(3,0xffffffff,"Calling %s failure for client %s",uVar6);
            pcVar7 = *(code **)(puVar2 + 8);
            puVar8 = &local_68;
            goto LAB_1802cedd8;
          }
        }
        else {
          local_78 = puVar2[10];
          local_74 = 0xfffffff5;
          local_70 = 0;
          uVar3 = **(undefined8 **)(lVar4 + 0x18);
          uVar6 = FUN_1802c5b10(*puVar2);
          local_98 = uVar3;
          FUN_1802c6d90(3,0xffffffff,"Calling %s failure for client %s",uVar6);
          pcVar7 = *(code **)(puVar2 + 4);
          puVar8 = (undefined8 *)&local_78;
LAB_1802cedd8:
          (*pcVar7)(*(undefined8 *)(puVar2 + 0xc),puVar8);
        }
        FUN_1802d02c0(puVar2);
        iVar9 = iVar9 + 1;
        lVar5 = FUN_1802c87d0(*(undefined8 *)(lVar4 + 0x198),&local_88);
      }
      FUN_1802c8470(*(undefined8 *)(lVar4 + 0x198));
    }
    local_98 = **(undefined8 **)(lVar4 + 0x18);
    FUN_1802c6d90(3,0xffffffff,"%d responses removed for client %s",iVar9);
    FUN_1802c8030("MQTTAsync_freeResponses",0x7a7,0,3);
  }
  FUN_1802c8030("MQTTAsync_cleanSession",0xa39,local_80,3);
  return local_80[0];
}



// ===== FUN_1802ceec0 @ 1802ceec0 (size 312)

void FUN_1802ceec0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  
  FUN_1802c7f40("MQTTAsync_closeOnly",0x9ab,3);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffc7;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1802d4820();
    if ((*(byte *)(param_1 + 0x20) & 4) != 0) {
      iVar1 = FUN_1802ca120(*(undefined8 *)(param_1 + 0x30));
      if (iVar1 != 0) {
        FUN_1802c5ec0(param_1,param_2,param_3);
      }
    }
    iVar1 = FUN_1802cdcf0(DAT_1803c9990);
    if (iVar1 != 0) {
      pcVar2 = strerror(iVar1);
      FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar2);
    }
    FUN_1802d8870(param_1 + 0x30,1000,0);
    FUN_180276d10(*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
    FUN_1802cc4f0(param_1 + 0x30);
    iVar1 = FUN_1802cdd70(DAT_1803c9990);
    if (iVar1 != 0) {
      pcVar2 = strerror(iVar1);
      FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar2);
    }
    FUN_1802c8d60(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffc3b;
  FUN_1802c8030("MQTTAsync_closeOnly",0x9c4,0,3);
  return;
}



// ===== FUN_1802cf000 @ 1802cf000 (size 132)

void FUN_1802cf000(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1802c7f40("MQTTAsync_closeSession",0x9ca,3);
  FUN_1802ceec0(param_1,param_2,param_3);
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) ||
     ((4 < *(int *)(param_1 + 0x120) && (*(int *)(param_1 + 0x124) == 0)))) {
    FUN_1802cebc0(param_1);
  }
  FUN_1802c8030("MQTTAsync_closeSession",0x9d1,0,3);
  return;
}



// ===== FUN_1802cf090 @ 1802cf090 (size 562)

uint FUN_1802cf090(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar6;
  
  local_res8[0] = 0xffffffff;
  FUN_1802c7f40("MQTTAsync_completeConnection",0x7e5,3);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if ((*(uint *)(puVar2 + 4) & 0x3c0) != 0x100) goto LAB_1802cf297;
  uVar3 = (uint)*(byte *)(param_2 + 8);
  uVar6 = *puVar2;
  FUN_1802c6d90(4,1,0,puVar2[6],uVar6,uVar3);
  local_res8[0] = (uint)*(byte *)(param_2 + 8);
  if (local_res8[0] == 0) {
    *(uint *)(param_1 + 0x1f0) = (uint)*(byte *)(param_2 + 8);
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x20);
    *puVar1 = *puVar1 | 4;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x20);
    *puVar1 = *puVar1 | 8;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x20);
    *puVar1 = *puVar1 & 0xfffffc3f;
    lVar5 = *(longlong *)(param_1 + 0x18);
    if ((*(byte *)(lVar5 + 0x20) & 3) == 0) {
      if ((3 < *(int *)(lVar5 + 0x120)) && ((*(byte *)(param_2 + 4) & 1) == 0)) {
        FUN_1802c6d90(4,0xffffffff,"Cleaning session state on connect because sessionPresent is 0");
        lVar5 = *(longlong *)(param_1 + 0x18);
        goto LAB_1802cf161;
      }
    }
    else {
LAB_1802cf161:
      local_res8[0] = FUN_1802cebc0(lVar5);
    }
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (0 < *(int *)(*(longlong *)(lVar5 + 0xc0) + 0x18)) {
      local_res18[0] = 0;
      lVar5 = FUN_1802c87d0(*(longlong *)(lVar5 + 0xc0),local_res18);
      while (lVar5 != 0) {
        *(undefined8 *)(*(longlong *)(local_res18[0] + 0x10) + 0x30) = 0;
        lVar5 = FUN_1802c87d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xc0),local_res18);
      }
      FUN_1802d6d50(0,1,1);
      lVar5 = *(longlong *)(param_1 + 0x18);
      if ((*(byte *)(lVar5 + 0x20) & 4) == 0) {
        local_res8[0] = 0xfffffffd;
      }
    }
    if (*(int *)(lVar5 + 0x120) == 5) {
      iVar4 = FUN_1802c19b0(param_2 + 0x10,0x13);
      if (iVar4 == 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xa0);
        if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x9c) != iVar4) {
          FUN_1802c6d90(4,0xffffffff,"Resetting keep alive interval to %d",iVar4,uVar6,uVar3);
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x9c) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa0);
        }
      }
      else {
        iVar4 = FUN_1802c1890(param_2 + 0x10,0x13);
        if (iVar4 != -999999) {
          FUN_1802c6d90(4,0xffffffff,"Setting keep alive interval to server keep alive %d",iVar4);
          *(int *)(*(longlong *)(param_1 + 0x18) + 0x9c) = iVar4;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_1802cdd90(DAT_1803c99a0);
LAB_1802cf297:
  FUN_1802c8030("MQTTAsync_completeConnection",0x820,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802cf2d0 @ 1802cf2d0 (size 1459)

int FUN_1802cf2d0(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char *_Str2;
  undefined8 uVar6;
  int local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  
  _Str2 = (char *)*param_1;
  local_res8[0] = -1;
  uVar6 = 0x75b;
  FUN_1802c7f40("MQTTAsync_connecting",0xb35,3);
  if (*(int *)((longlong)param_1 + 0xdc) == 0) {
    FUN_1802c6d90(5,0xffffffff,"MQTT version is 0 in MQTTAsync_connecting");
    iVar2 = *(int *)(param_1[3] + 0x120);
    if (iVar2 == 0) {
      iVar2 = 4;
    }
    *(int *)((longlong)param_1 + 0xdc) = iVar2;
  }
  if (0 < *(int *)((longlong)param_1 + 0x1cc)) {
    _Str2 = *(char **)(param_1[0x3a] + (longlong)*(int *)(param_1 + 0x1b) * 8);
    iVar2 = strncmp("tcp://",_Str2,6);
    if (iVar2 == 0) goto LAB_1802cf458;
    iVar2 = strncmp("mqtt://",_Str2,7);
    if (iVar2 == 0) {
      _Str2 = _Str2 + 7;
    }
    else {
      iVar2 = strncmp("ws://",_Str2,5);
      if (iVar2 == 0) {
        _Str2 = _Str2 + 5;
        uVar6 = 0x50;
      }
      else {
        iVar2 = strncmp("ssl://",_Str2,6);
        if (iVar2 == 0) {
          uVar6 = 0x22b3;
        }
        else {
          iVar2 = strncmp("tls://",_Str2,6);
          if (iVar2 != 0) {
            iVar2 = strncmp("mqtts://",_Str2,8);
            if (iVar2 == 0) {
              _Str2 = _Str2 + 8;
              uVar6 = 0x22b3;
            }
            else {
              iVar2 = strncmp("wss://",_Str2,6);
              if (iVar2 == 0) {
                uVar6 = 0x1bb;
                goto LAB_1802cf458;
              }
            }
            goto LAB_1802cf45c;
          }
          uVar6 = 0x22b3;
        }
LAB_1802cf458:
        _Str2 = _Str2 + 6;
      }
    }
  }
LAB_1802cf45c:
  lVar3 = param_1[3];
  plVar5 = param_1 + 3;
  iVar2 = (*(int *)(lVar3 + 0x20) << 0x16) >> 0x1c;
  if (iVar2 == 1) {
    local_res10[0] = 4;
    local_res8[0] = Ordinal_7(*(undefined8 *)(lVar3 + 0x30),0xffff,0x1007,local_res18,local_res10);
    if (local_res8[0] != 0) goto LAB_1802cf818;
    local_res8[0] = local_res18[0];
    if (local_res18[0] != 0) goto LAB_1802cf822;
    _guard_check_icall(*(undefined8 *)(*plVar5 + 0x30));
    lVar3 = *plVar5;
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
      if (*(longlong *)(lVar3 + 0x70) != 0) {
        *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffd7f;
        *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 0x140;
        local_res8[0] = FUN_1802dd2f0(*plVar5 + 0x30,0,_Str2);
        if (local_res8[0] == -1) goto LAB_1802cf818;
      }
      lVar3 = *plVar5;
      if (*(int *)(param_1 + 2) == 0) {
        *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffd3f | 0x100;
        goto LAB_1802cf7f9;
      }
      *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffcff | 0xc0;
      local_res8[0] = FUN_1802d8a80(*plVar5 + 0x30,0,_Str2);
      goto LAB_1802cf818;
    }
    if (*(longlong *)(lVar3 + 0x60) != 0) {
      *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffd7f;
      *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 0x140;
      local_res8[0] = FUN_1802dd2f0(*plVar5 + 0x30,1,_Str2);
      if (local_res8[0] == -1) goto LAB_1802cf818;
    }
    uVar6 = FUN_1802dc960(_Str2,local_res20,0,uVar6);
    iVar2 = FUN_1802cd560(*plVar5 + 0x30,*(undefined8 *)(*plVar5 + 0x138),_Str2,uVar6);
    if (iVar2 != 0) {
      lVar3 = param_1[3];
      if ((*(longlong *)(lVar3 + 0x140) != 0) &&
         (iVar2 = FUN_180277160(*(undefined8 *)(lVar3 + 0x50)), iVar2 != 1)) {
        FUN_1802c6d90(3,0xffffffff,"Failed to set SSL session with stored data, non critical");
      }
      plVar5 = param_1 + 3;
      lVar3 = param_1[3];
      lVar1 = *(longlong *)(lVar3 + 0x138);
      if (*(int *)(lVar1 + 4) < 3) {
        uVar6 = 0;
        uVar4 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + 0x48);
        uVar4 = *(undefined8 *)(lVar1 + 0x50);
      }
      local_res8[0] =
           FUN_1802cc5f0(*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x30),_Str2,
                         *(undefined4 *)(lVar1 + 0x38),uVar6,uVar4);
      if (local_res8[0] == -0x16) {
        local_res8[0] = 0;
        *(uint *)(*plVar5 + 0x20) = *(uint *)(*plVar5 + 0x20) & 0xfffffcbf | 0x80;
      }
      else {
        if (local_res8[0] == -3) goto LAB_1802cf5e1;
        if (local_res8[0] == 1) {
          lVar3 = *plVar5;
          if (*(int *)(param_1 + 2) == 0) {
            local_res8[0] = 0;
            *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffd3f | 0x100;
            iVar2 = FUN_1802d7840(*plVar5,*(undefined4 *)((longlong)param_1 + 0xdc),param_1[0x3f],
                                  param_1[0x40]);
            if (iVar2 != -1) goto LAB_1802cf62d;
            local_res8[0] = -1;
            goto LAB_1802cf828;
          }
          *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffcff | 0xc0;
          local_res8[0] =
               FUN_1802d8a80(*plVar5 + 0x30,*(undefined4 *)((longlong)param_1 + 0xc),_Str2);
          if (local_res8[0] != -1) {
LAB_1802cf62d:
            lVar3 = param_1[3];
            if (((*(byte *)(lVar3 + 0x20) & 1) == 0) && (*(longlong *)(lVar3 + 0x140) == 0)) {
              uVar6 = FUN_1802770f0(*(undefined8 *)(lVar3 + 0x50));
              *(undefined8 *)(lVar3 + 0x140) = uVar6;
            }
          }
        }
      }
      goto LAB_1802cf818;
    }
LAB_1802cf5e1:
    local_res8[0] = -1;
LAB_1802cf828:
    iVar2 = (*(int *)(param_1[3] + 0x20) << 0x16) >> 0x1c;
    if ((iVar2 == 2) || (iVar2 == 3)) goto LAB_1802cf83e;
  }
  else {
    if (iVar2 == 2) {
      lVar1 = *(longlong *)(lVar3 + 0x138);
      if (*(int *)(lVar1 + 4) < 3) {
        uVar6 = 0;
        uVar4 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + 0x48);
        uVar4 = *(undefined8 *)(lVar1 + 0x50);
      }
      local_res8[0] =
           FUN_1802cc5f0(*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x30),_Str2,
                         *(undefined4 *)(lVar1 + 0x38),uVar6,uVar4);
      if (local_res8[0] == 1) {
        lVar3 = *plVar5;
        if (((*(byte *)(lVar3 + 0x20) & 1) == 0) && (*(longlong *)(lVar3 + 0x140) == 0)) {
          lVar1 = param_1[3];
          uVar6 = FUN_1802770f0(*(undefined8 *)(lVar3 + 0x50));
          *(undefined8 *)(lVar1 + 0x140) = uVar6;
        }
        lVar3 = param_1[3];
        if (*(int *)(param_1 + 2) == 0) {
          *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffd3f | 0x100;
          lVar3 = param_1[3];
          goto LAB_1802cf7fc;
        }
        *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffcff | 0xc0;
        local_res8[0] = FUN_1802d8a80(param_1[3] + 0x30,1,_Str2);
      }
    }
    else if (((iVar2 == 3) && (local_res8[0] = FUN_1802d9fb0(lVar3 + 0x30), local_res8[0] != -1)) &&
            (local_res8[0] != -0x16)) {
      *(uint *)(*plVar5 + 0x20) = *(uint *)(*plVar5 + 0x20) & 0xfffffd3f | 0x100;
LAB_1802cf7f9:
      lVar3 = *plVar5;
LAB_1802cf7fc:
      local_res8[0] =
           FUN_1802d7840(lVar3,*(undefined4 *)((longlong)param_1 + 0xdc),param_1[0x3f],param_1[0x40]
                        );
    }
LAB_1802cf818:
    if (local_res8[0] != 0) {
LAB_1802cf822:
      if (local_res8[0] != -0x16) goto LAB_1802cf828;
    }
LAB_1802cf83e:
    if (local_res8[0] != -3) goto LAB_1802cf858;
  }
  FUN_1802d4c40(param_1,0xffffffff,"TCP/TLS connect failure");
LAB_1802cf858:
  FUN_1802c8030("MQTTAsync_connecting",0xc00,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802cf890 @ 1802cf890 (size 1828)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1802cf890(longlong *param_1,int param_2,int *param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  code *pcVar9;
  ULONGLONG UVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_138 [32];
  int local_118;
  ulonglong local_108;
  int local_100 [2];
  longlong local_f8;
  uint local_f0;
  int local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_138;
  local_100[0] = 0;
  pauVar7 = (undefined1 (*) [16])0x0;
  FUN_1802c7f40("MQTTAsync_cycle",0xc0a,3);
  lVar5 = FUN_1802ccd20();
  *param_1 = lVar5;
  if (lVar5 == -1) {
    lVar5 = FUN_1802c9530(0,param_2,DAT_1803c9990,local_100);
    *param_1 = lVar5;
    *param_3 = local_100[0];
    iVar3 = FUN_1802cdcf0(DAT_1803c9988);
    if (iVar3 != 0) {
      pcVar6 = strerror(iVar3);
      FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar6);
    }
    iVar3 = DAT_1803c9964;
    iVar4 = FUN_1802cdd70(DAT_1803c9988);
    if (iVar4 != 0) {
      pcVar6 = strerror(iVar4);
      FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar6);
    }
    if (((iVar3 == 0) && (*param_1 == 0)) && (param_2 != 0)) {
      FUN_1802d3aa0(100);
    }
  }
  iVar3 = FUN_1802cdcf0(DAT_1803c9988);
  if (iVar3 != 0) {
    pcVar6 = strerror(iVar3);
    FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar6);
  }
  if (((*param_1 == 0) || (local_100[0] != 0)) ||
     ((lVar5 = FUN_1802c8540(DAT_1803c9968,param_1,&LAB_1802d4b90), lVar5 == 0 ||
      (lVar5 = *(longlong *)(*(longlong *)(DAT_1803c9968 + 0x10) + 0x10), lVar5 == 0))))
  goto LAB_1802cfeb5;
  FUN_1802c6d90(3,0xffffffff,"m->c->connect_state = %d",
                (*(int *)(*(longlong *)(lVar5 + 0x18) + 0x20) << 0x16) >> 0x1c);
  lVar12 = *(longlong *)(lVar5 + 0x18);
  iVar3 = (*(int *)(lVar12 + 0x20) << 0x16) >> 0x1c;
  if ((iVar3 == 1) || (iVar3 - 2U < 2)) {
    iVar3 = FUN_1802cf2d0(lVar5);
    *param_3 = iVar3;
  }
  else {
    pauVar7 = (undefined1 (*) [16])
              FUN_1802c53f0(*(undefined4 *)(lVar12 + 0x120),lVar12 + 0x30,param_3);
  }
  if (((*(uint *)(*(longlong *)(lVar5 + 0x18) + 0x20) & 0x3c0) == 0x100) && (*param_3 == -1)) {
    FUN_1802c6d90(3,0xffffffff,"CONNECT sent but MQTTPacket_Factory has returned SOCKET_ERROR");
    FUN_1802d4c40(lVar5,0xffffffff,"TCP connect completion failure");
  }
  if (pauVar7 == (undefined1 (*) [16])0x0) goto LAB_1802cfeb5;
  uVar11 = *(uint *)*pauVar7 & 0xf0;
  if (uVar11 == 0x30) {
    iVar3 = FUN_1802d5c70(pauVar7,*param_1);
LAB_1802cfeae:
    *param_3 = iVar3;
  }
  else {
    if ((uVar11 - 0x40 & 0xffffffcf) != 0) {
      if (uVar11 == 0x60) goto LAB_1802cfe8e;
      if (uVar11 != 0xd0) goto LAB_1802cfeb5;
      iVar3 = FUN_1802dcfc0(pauVar7,*param_1);
      goto LAB_1802cfeae;
    }
    if (uVar11 == 0x60) {
LAB_1802cfe8e:
      iVar3 = FUN_1802d6330(pauVar7,*param_1);
      goto LAB_1802cfeae;
    }
    auVar1 = *pauVar7;
    local_ec = 0;
    uVar2 = local_108 >> 0x20;
    local_108 = local_108 & 0xffffffff00000000;
    _DAT_1804472a8 = *(undefined4 *)pauVar7[1];
    uRam00000001804472ac = *(undefined4 *)(pauVar7[1] + 4);
    uRam00000001804472b0 = *(undefined4 *)(pauVar7[1] + 8);
    uRam00000001804472b4 = *(undefined4 *)(pauVar7[1] + 0xc);
    local_e8 = 0;
    uStack_e0 = 0;
    _DAT_1804472b8 = *(undefined8 *)pauVar7[2];
    local_f0 = *(uint *)*pauVar7 >> 4 & 0xf;
    local_d8 = 0;
    local_f8 = 0;
    _DAT_180447298 = auVar1;
    if (4 < auVar1._12_4_) {
      DAT_1804472a0 = auVar1[8];
      local_108 = CONCAT44((int)uVar2,(uint)DAT_1804472a0);
      puVar8 = (undefined8 *)FUN_1802c1480(local_d0,&DAT_1804472a8);
      local_e8 = *puVar8;
      uStack_e0 = *(undefined4 *)(puVar8 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar8 + 0xc);
      local_d8 = puVar8[2];
      local_ec = DAT_1804472a4;
    }
    if (local_f0 == 7) {
      iVar3 = FUN_1802d5a30(pauVar7,*param_1,&local_f8);
      *param_3 = iVar3;
      if (DAT_1803c9978 != 0) {
        FUN_1802cdd90(DAT_1803c99a0);
      }
LAB_1802cfc35:
      uVar11 = (uint)local_108;
LAB_1802cfc39:
      local_108 = 0;
      iVar3 = auVar1._4_4_;
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        local_118 = iVar3;
        FUN_1802c6d90(3,0xffffffff,"Calling deliveryComplete for client %s, msgid %d",
                      **(undefined8 **)(lVar5 + 0x18));
        (**(code **)(lVar5 + 0x30))(*(undefined8 *)(lVar5 + 0x48),iVar3);
      }
      lVar12 = FUN_1802c87d0(*(undefined8 *)(lVar5 + 0x198),&local_108);
      while (lVar12 != 0) {
        lVar12 = *(longlong *)(local_108 + 0x10);
        if (*(int *)(lVar12 + 0x28) == iVar3) {
          iVar3 = FUN_1802c8320(*(undefined8 *)(lVar5 + 0x198),lVar12);
          if (iVar3 == 0) {
            FUN_1802c6d90(5,0xffffffff,"Publish command not removed from command list");
          }
          if (*(longlong *)(lVar12 + 8) == 0) {
            if ((*(longlong *)(lVar12 + 0x18) != 0) && (uVar11 < 0x80)) {
              local_b0 = *(undefined4 *)(lVar12 + 0x28);
              local_98 = *(undefined8 *)(lVar12 + 0x50);
              local_50 = *(undefined8 *)(lVar12 + 0x58);
              local_80 = *(undefined8 *)(lVar12 + 0x68);
              local_88 = (ulonglong)*(uint *)(lVar12 + 0x60);
              local_70 = 0;
              uStack_68 = 0;
              uStack_78 = *(undefined8 *)(lVar12 + 0x70);
              local_60 = 0;
              uStack_58 = 0;
              local_a8 = *(undefined4 *)(lVar12 + 0x40);
              uStack_a4 = *(undefined4 *)(lVar12 + 0x44);
              uStack_a0 = *(undefined8 *)(lVar12 + 0x48);
              local_b8 = 0x4453514d;
              local_ac = 0;
              local_90 = 0;
              FUN_1802c6d90(3,0xffffffff,"Calling publish success for client %s",
                            **(undefined8 **)(lVar5 + 0x18));
              pcVar9 = *(code **)(lVar12 + 0x18);
              goto LAB_1802cfe35;
            }
            if ((*(longlong *)(lVar12 + 0x20) != 0) && (0x7f < uVar11)) {
              local_b0 = *(undefined4 *)(lVar12 + 0x28);
              local_a8 = (undefined4)local_e8;
              uStack_a4 = local_e8._4_4_;
              uStack_a0 = CONCAT44(uStack_dc,uStack_e0);
              local_b8 = 0x4446514d;
              local_90 = 0;
              local_88 = 0;
              local_98 = local_d8;
              local_80 = CONCAT44(local_80._4_4_,local_f0);
              local_ac = uVar11;
              FUN_1802c6d90(3,0xffffffff,"Calling publish failure for client %s",
                            **(undefined8 **)(lVar5 + 0x18));
              pcVar9 = *(code **)(lVar12 + 0x20);
              goto LAB_1802cfe35;
            }
          }
          else {
            local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar12 + 0x28));
            local_70 = *(undefined8 *)(lVar12 + 0x58);
            uStack_a0 = *(undefined8 *)(lVar12 + 0x68);
            local_a8 = *(undefined4 *)(lVar12 + 0x60);
            local_98 = *(undefined8 *)(lVar12 + 0x70);
            FUN_1802c6d90(3,0xffffffff,"Calling publish success for client %s",
                          **(undefined8 **)(lVar5 + 0x18));
            pcVar9 = *(code **)(lVar12 + 8);
LAB_1802cfe35:
            (*pcVar9)(*(undefined8 *)(lVar12 + 0x30),&local_b8);
          }
          if (local_f8 != 0) {
            FUN_1802d6990();
            local_f8 = 0;
            *(undefined8 *)(lVar12 + 0x58) = 0;
            *(undefined8 *)(lVar12 + 0x68) = 0;
          }
          FUN_1802d0290(lVar12);
          break;
        }
        lVar12 = FUN_1802c87d0(*(undefined8 *)(lVar5 + 0x198),&local_108);
      }
      if (4 < local_ec) {
        FUN_1802c1750(&local_e8);
      }
    }
    else {
      if (local_f0 != 5) {
        if (local_f0 == 4) {
          iVar3 = FUN_1802d5850(pauVar7,*param_1,&local_f8);
          *param_3 = iVar3;
          if (DAT_1803c9978 != 0) {
            FUN_1802cdd90(DAT_1803c99a0);
          }
        }
        goto LAB_1802cfc35;
      }
      iVar3 = FUN_1802d6070(pauVar7,*param_1,&local_f8);
      *param_3 = iVar3;
      uVar11 = (uint)local_108;
      if (0x7f < (uint)local_108) goto LAB_1802cfc39;
    }
    if (local_f8 != 0) {
      FUN_1802d6990();
    }
  }
  pauVar7 = (undefined1 (*) [16])0x0;
LAB_1802cfeb5:
  FUN_1802c7f40("MQTTAsync_retry",0xb1f,3);
  UVar10 = GetTickCount64();
  lVar12 = (longlong)DAT_1803c3b70;
  lVar5 = FUN_1802c8260(UVar10,DAT_180447290);
  if (lVar12 <= lVar5) {
    DAT_180447290 = GetTickCount64();
    FUN_1802d6640(UVar10);
  }
  FUN_1802d6d50(UVar10,lVar12 <= lVar5,0);
  FUN_1802c8030("MQTTAsync_retry",0xb29,0,3);
  iVar3 = FUN_1802cdd70(DAT_1803c9988);
  if (iVar3 != 0) {
    pcVar6 = strerror(iVar3);
    FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar6);
  }
  FUN_1802c8030("MQTTAsync_cycle",0xcbe,param_3,3);
  return pauVar7;
}



// ===== FUN_1802cffc0 @ 1802cffc0 (size 117)

void FUN_1802cffc0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_1802c6d90(3,0xffffffff,"Calling messageArrived for client %s, queue depth %d",
                **(undefined8 **)(param_1 + 0x18),
                *(undefined4 *)((*(undefined8 **)(param_1 + 0x18))[0x1a] + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001802d0032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x40),param_2,param_3,param_4);
  return;
}



// ===== FUN_1802d0040 @ 1802d0040 (size 357)

undefined4 FUN_1802d0040(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *_Dst;
  undefined8 *puVar2;
  undefined4 local_res8 [2];
  undefined1 local_28 [32];
  
  FUN_1802c7f40("MQTTAsync_disconnect1",0xab0,3);
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    local_res8[0] = 0xffffffff;
  }
  else {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x20) & 4) == 0) {
      local_res8[0] = 0xfffffffd;
    }
    else {
      _Dst = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0xabf,0xa0);
      if (_Dst == (undefined4 *)0x0) {
        local_res8[0] = 0xffffff9d;
      }
      else {
        memset(_Dst,0,0xa0);
        *(longlong *)(_Dst + 0x22) = param_1;
        if (param_2 != 0) {
          *(undefined8 *)(_Dst + 2) = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(_Dst + 4) = *(undefined8 *)(param_2 + 0x18);
          *(undefined8 *)(_Dst + 6) = *(undefined8 *)(param_2 + 0x48);
          *(undefined8 *)(_Dst + 8) = *(undefined8 *)(param_2 + 0x50);
          *(undefined8 *)(_Dst + 0xc) = *(undefined8 *)(param_2 + 0x20);
          _Dst[0x17] = *(undefined4 *)(param_2 + 8);
          if ((4 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x120)) && (0 < *(int *)(param_2 + 4)))
          {
            puVar2 = (undefined8 *)FUN_1802c1480(local_28,param_2 + 0x28);
            uVar1 = puVar2[1];
            *(undefined8 *)(_Dst + 0x10) = *puVar2;
            *(undefined8 *)(_Dst + 0x12) = uVar1;
            *(undefined8 *)(_Dst + 0x14) = puVar2[2];
            _Dst[0x18] = *(undefined4 *)(param_2 + 0x40);
          }
        }
        *_Dst = 0xe;
        _Dst[0x16] = param_3;
        local_res8[0] = FUN_1802cdf70(_Dst,8);
      }
    }
  }
  FUN_1802c8030("MQTTAsync_disconnect1",0xad9,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d01b0 @ 1802d01b0 (size 224)

void FUN_1802d01b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_res8;
  
  FUN_1802c7f40("MQTTAsync_emptyMessageQueue",0x769,3);
  if (0 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x18)) {
    local_res8 = 0;
    lVar2 = FUN_1802c87d0(*(longlong *)(param_1 + 0xd0),&local_res8);
    while (lVar2 != 0) {
      plVar1 = *(longlong **)(local_res8 + 0x10);
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x771,plVar1[1]);
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x772,*(undefined8 *)(*plVar1 + 0x10));
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x773,*plVar1);
      lVar2 = FUN_1802c87d0(*(undefined8 *)(param_1 + 0xd0),&local_res8);
    }
    FUN_1802c8470(*(undefined8 *)(param_1 + 0xd0));
  }
  FUN_1802c8030("MQTTAsync_emptyMessageQueue",0x777,0,3);
  return;
}



// ===== FUN_1802d02c0 @ 1802d02c0 (size 368)

void FUN_1802d02c0(int *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 == 8) {
    iVar3 = 0;
    if (0 < param_1[0x16]) {
      lVar2 = 0;
      do {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x421,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar2));
        iVar3 = iVar3 + 1;
        lVar2 = lVar2 + 8;
      } while (iVar3 < param_1[0x16]);
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x423,*(undefined8 *)(param_1 + 0x18));
    lVar2 = *(longlong *)(param_1 + 0x1a);
    uVar1 = 0x425;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
LAB_1802d03d8:
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",uVar1,lVar2);
  }
  else {
    if (iVar3 == 10) {
      iVar3 = 0;
      if (0 < param_1[0x16]) {
        lVar2 = 0;
        do {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x42d,
                        *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x18)));
          iVar3 = iVar3 + 1;
          lVar2 = lVar2 + 8;
        } while (iVar3 < param_1[0x16]);
      }
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x42f,*(undefined8 *)(param_1 + 0x18));
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      goto LAB_1802d03ec;
    }
    if (iVar3 != 3) goto LAB_1802d03ec;
    if (*(longlong *)(param_1 + 0x16) != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x436);
    }
    lVar2 = *(longlong *)(param_1 + 0x1a);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (lVar2 != 0) {
      uVar1 = 0x439;
      goto LAB_1802d03d8;
    }
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
LAB_1802d03ec:
  FUN_1802c1750(param_1 + 0x10);
  if ((param_1[0x25] == 0) || (*(longlong *)(param_1 + 0x26) == 0)) {
    return;
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x43e);
  return;
}



// ===== FUN_1802d0430 @ 1802d0430 (size 511)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d0430(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  iVar7 = 0;
  FUN_1802c7f40("MQTTAsync_freeCommands",0x7b1,3);
  lVar3 = FUN_1802c87d0(DAT_1803c9970,&local_88);
  FUN_1802c87d0(DAT_1803c9970,&local_88);
  do {
    if (lVar3 == 0) {
      local_98 = **(undefined8 **)(param_1 + 0x18);
      FUN_1802c6d90(3,0xffffffff,"%d commands removed for client %s",iVar7);
      FUN_1802c8030("MQTTAsync_freeCommands",0x7dd,0,3);
      return;
    }
    puVar1 = *(undefined4 **)(lVar3 + 0x10);
    if (*(longlong *)(puVar1 + 0x22) == param_1) {
      FUN_1802c8320(DAT_1803c9970,puVar1);
      if (*(longlong *)(puVar1 + 4) == 0) {
        if (*(longlong *)(puVar1 + 8) != 0) {
          local_60 = puVar1[10];
          local_68 = 0x4446514d;
          local_5c = 0;
          local_54 = 0;
          local_48 = 0;
          local_30 = 0;
          local_40 = 0xfffffff5;
          local_38 = 0;
          uVar2 = **(undefined8 **)(param_1 + 0x18);
          uVar4 = FUN_1802c5b10(*puVar1);
          local_98 = uVar2;
          FUN_1802c6d90(3,0xffffffff,"Calling %s failure for client %s",uVar4);
          pcVar5 = *(code **)(puVar1 + 8);
          puVar6 = &local_68;
          goto LAB_1802d0581;
        }
      }
      else {
        local_80 = puVar1[10];
        local_7c = 0xfffffff5;
        local_78 = 0;
        uVar2 = **(undefined8 **)(param_1 + 0x18);
        uVar4 = FUN_1802c5b10(*puVar1);
        local_98 = uVar2;
        FUN_1802c6d90(3,0xffffffff,"Calling %s failure for client %s",uVar4);
        pcVar5 = *(code **)(puVar1 + 4);
        puVar6 = (undefined8 *)&local_80;
LAB_1802d0581:
        (*pcVar5)(*(undefined8 *)(puVar1 + 0xc),puVar6);
      }
      FUN_1802d02c0(puVar1);
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x445,puVar1);
      iVar7 = iVar7 + 1;
    }
    lVar3 = local_88;
    FUN_1802c87d0(DAT_1803c9970,&local_88);
  } while( true );
}



// ===== FUN_1802d0630 @ 1802d0630 (size 493)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d0630(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  iVar7 = 0;
  FUN_1802c7f40("MQTTAsync_freeResponses",0x77f,3);
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_88 = 0;
    lVar3 = FUN_1802c87d0(*(longlong *)(param_1 + 0x198),&local_88);
    while (lVar3 != 0) {
      puVar1 = *(undefined4 **)(local_88 + 0x10);
      if (*(longlong *)(puVar1 + 4) == 0) {
        if (*(longlong *)(puVar1 + 8) != 0) {
          local_60 = puVar1[10];
          local_68 = 0x4446514d;
          local_5c = 0;
          local_54 = 0;
          local_48 = 0;
          local_30 = 0;
          local_40 = 0xfffffff5;
          local_38 = 0;
          uVar2 = **(undefined8 **)(param_1 + 0x18);
          uVar4 = FUN_1802c5b10(*puVar1);
          local_98 = uVar2;
          FUN_1802c6d90(3,0xffffffff,"Calling %s failure for client %s",uVar4);
          pcVar5 = *(code **)(puVar1 + 8);
          puVar6 = &local_68;
          goto LAB_1802d077c;
        }
      }
      else {
        local_80 = puVar1[10];
        local_7c = 0xfffffff5;
        local_78 = 0;
        uVar2 = **(undefined8 **)(param_1 + 0x18);
        uVar4 = FUN_1802c5b10(*puVar1);
        local_98 = uVar2;
        FUN_1802c6d90(3,0xffffffff,"Calling %s failure for client %s",uVar4);
        pcVar5 = *(code **)(puVar1 + 4);
        puVar6 = (undefined8 *)&local_80;
LAB_1802d077c:
        (*pcVar5)(*(undefined8 *)(puVar1 + 0xc),puVar6);
      }
      FUN_1802d02c0(puVar1);
      iVar7 = iVar7 + 1;
      lVar3 = FUN_1802c87d0(*(undefined8 *)(param_1 + 0x198),&local_88);
    }
    FUN_1802c8470(*(undefined8 *)(param_1 + 0x198));
  }
  local_98 = **(undefined8 **)(param_1 + 0x18);
  FUN_1802c6d90(3,0xffffffff,"%d responses removed for client %s",iVar7);
  FUN_1802c8030("MQTTAsync_freeResponses",0x7a7,0,3);
  return;
}



// ===== FUN_1802d0820 @ 1802d0820 (size 115)

undefined4 FUN_1802d0820(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_1802cdcf0(DAT_1803c9998);
  if (iVar2 != 0) {
    pcVar3 = strerror(iVar2);
    FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar3);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1bc);
  iVar2 = FUN_1802cdd70(DAT_1803c9998);
  if (iVar2 != 0) {
    pcVar3 = strerror(iVar2);
    FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar3);
  }
  return uVar1;
}



// ===== FUN_1802d08e0 @ 1802d08e0 (size 1455)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802d08e0(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  size_t sVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  int local_58 [2];
  longlong local_50;
  ulonglong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  lVar14 = *(longlong *)(param_1 + 0x22);
  local_58[0] = 0;
  puVar5 = (undefined4 *)0x0;
  puVar6 = (undefined8 *)0x0;
  iVar8 = 0;
  uVar12 = 0;
  uVar10 = 0;
  bVar2 = true;
  local_50 = lVar14;
  FUN_1802c7f40("MQTTAsync_persistCommand",0x10c,3);
  iVar3 = *param_1;
  if (iVar3 == 3) {
    uVar10 = (4 < *(int *)(*(longlong *)(lVar14 + 0x18) + 0x120)) + 7;
    puVar5 = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x158,uVar10 * 4);
    if ((puVar5 != (undefined4 *)0x0) &&
       (puVar6 = (undefined8 *)
                 FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x159,uVar10 * 8),
       puVar6 != (undefined8 *)0x0)) {
      *puVar6 = param_1;
      *puVar5 = 4;
      puVar6[1] = param_1 + 10;
      puVar5[1] = 4;
      puVar6[2] = *(undefined8 *)(param_1 + 0x16);
      sVar7 = strlen(*(char **)(param_1 + 0x16));
      puVar5[2] = (int)sVar7 + 1;
      iVar8 = 7;
      puVar6[3] = param_1 + 0x18;
      puVar5[3] = 4;
      puVar6[4] = *(undefined8 *)(param_1 + 0x1a);
      puVar5[4] = param_1[0x18];
      puVar6[5] = param_1 + 0x1c;
      puVar5[5] = 4;
      puVar6[6] = param_1 + 0x1d;
      puVar5[6] = 4;
      goto LAB_1802d0c97;
    }
LAB_1802d0e0a:
    local_58[0] = -99;
  }
  else {
    if (iVar3 == 8) {
      piVar13 = param_1 + 0x16;
      iVar3 = *(int *)(*(longlong *)(lVar14 + 0x18) + 0x120);
      uVar10 = (4 < iVar3) + 3 + ((4 < iVar3) + 2) * *piVar13;
      local_48 = (ulonglong)uVar10;
      puVar5 = (undefined4 *)
               FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x114,
                             (longlong)(int)uVar10 * 4);
      if ((puVar5 == (undefined4 *)0x0) ||
         (puVar6 = (undefined8 *)
                   FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x115,
                                 (longlong)(int)uVar10 * 8), puVar6 == (undefined8 *)0x0))
      goto LAB_1802d0e0a;
      *puVar6 = param_1;
      iVar8 = 3;
      *puVar5 = 4;
      puVar6[1] = param_1 + 10;
      puVar5[1] = 4;
      puVar6[2] = piVar13;
      puVar5[2] = 4;
      if (0 < *piVar13) {
        lVar15 = 3;
        uVar17 = uVar12;
        iVar3 = iVar8;
        do {
          puVar6[lVar15] = *(undefined8 *)(uVar17 + *(longlong *)(param_1 + 0x18));
          local_50 = lVar15;
          sVar7 = strlen(*(char **)(uVar17 + *(longlong *)(param_1 + 0x18)));
          iVar11 = (int)uVar12;
          puVar5[lVar15] = (int)sVar7 + 1;
          iVar8 = iVar3 + 2;
          puVar6[lVar15 + 1] = *(longlong *)(param_1 + 0x1a) + (longlong)iVar11 * 4;
          puVar5[lVar15 + 1] = 4;
          lVar16 = lVar15 + 2;
          if (4 < *(int *)(*(longlong *)(lVar14 + 0x18) + 0x120)) {
            iVar8 = iVar3 + 3;
            lVar16 = lVar15 + 3;
            if (param_1[0x16] == 1) {
              puVar6[local_50 + 2] = param_1 + 0x1c;
              puVar5[local_50 + 2] = 0xc;
            }
            else {
              puVar6[local_50 + 2] = *(longlong *)(param_1 + 0x20) + (longlong)iVar11 * 0xc;
              puVar5[local_50 + 2] = 0xc;
            }
          }
          uVar12 = (ulonglong)(iVar11 + 1U);
          uVar17 = uVar17 + 8;
          lVar15 = lVar16;
          iVar3 = iVar8;
        } while ((int)(iVar11 + 1U) < param_1[0x16]);
      }
      uVar10 = (uint)local_48;
      bVar2 = true;
    }
    else if (iVar3 == 10) {
      piVar13 = param_1 + 0x16;
      uVar10 = (4 < *(int *)(*(longlong *)(lVar14 + 0x18) + 0x120)) + 3 + *piVar13;
      local_48 = (ulonglong)uVar10;
      puVar5 = (undefined4 *)
               FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x13e,
                             (longlong)(int)uVar10 * 4);
      if ((puVar5 == (undefined4 *)0x0) ||
         (puVar6 = (undefined8 *)
                   FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x13f,
                                 (longlong)(int)uVar10 * 8), puVar6 == (undefined8 *)0x0))
      goto LAB_1802d0e0a;
      *puVar6 = param_1;
      *puVar5 = 4;
      iVar8 = 3;
      puVar6[1] = param_1 + 10;
      iVar3 = 0;
      puVar5[1] = 4;
      puVar6[2] = piVar13;
      puVar5[2] = 4;
      if (0 < *piVar13) {
        lVar14 = 0;
        piVar13 = puVar5 + 3;
        do {
          *(undefined8 *)((longlong)puVar6 + lVar14 + 0x18) =
               *(undefined8 *)(lVar14 + *(longlong *)(param_1 + 0x18));
          sVar7 = strlen(*(char **)(*(longlong *)(param_1 + 0x18) + lVar14));
          iVar8 = iVar8 + 1;
          *piVar13 = (int)sVar7 + 1;
          piVar13 = piVar13 + 1;
          iVar3 = iVar3 + 1;
          lVar14 = lVar14 + 8;
        } while (iVar3 < param_1[0x16]);
        uVar10 = (uint)local_48;
      }
      bVar2 = true;
      lVar14 = local_50;
    }
    else {
      bVar2 = false;
    }
LAB_1802d0c97:
    iVar11 = 0;
    *(int *)(lVar14 + 0x1a0) = *(int *)(lVar14 + 0x1a0) + 1;
    iVar3 = *(int *)(lVar14 + 0x1a0);
    if (iVar3 == 1000000) {
      *(undefined4 *)(lVar14 + 0x1a0) = 0;
      iVar3 = 0;
    }
    if ((*(int *)(*(longlong *)(lVar14 + 0x18) + 0x120) < 5) || (!bVar2)) {
      local_68 = (undefined4 *)CONCAT44(local_68._4_4_,iVar3);
      puVar9 = &DAT_180382f78;
    }
    else {
      iVar3 = FUN_1802c19f0(param_1 + 0x10);
      local_48 = CONCAT44(local_48._4_4_,iVar3);
      local_50 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x187,(longlong)iVar3);
      puVar6[iVar8] = local_50;
      if (local_50 == 0) goto LAB_1802d0e0a;
      local_58[0] = FUN_1802c1e30(&local_50,param_1 + 0x10);
      puVar9 = &DAT_180382f7c;
      puVar5[iVar8] = (undefined4)local_48;
      local_68 = (undefined4 *)CONCAT44(local_68._4_4_,*(undefined4 *)(lVar14 + 0x1a0));
      iVar11 = iVar8;
    }
    uVar4 = snprintf(local_40,0xb,&DAT_1803830b4,puVar9);
    if (uVar4 < 0xb) {
      if (0 < (int)uVar10) {
        pcVar1 = *(code **)(*(longlong *)(lVar14 + 0x18) + 0xf8);
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(*(undefined8 *)(*(longlong *)(lVar14 + 0x18) + 0x108),uVar10,puVar6,puVar5);
        }
        local_68 = puVar5;
        local_58[0] = (**(code **)(*(longlong *)(*(longlong *)(lVar14 + 0x18) + 0xf0) + 0x18))
                                (*(undefined8 *)(*(longlong *)(lVar14 + 0x18) + 0xe8),local_40,
                                 uVar10,puVar6);
        if (local_58[0] != 0) {
          FUN_1802c6d90(5,0,"Error persisting command, rc %d",local_58[0]);
        }
        param_1[0x24] = *(int *)(lVar14 + 0x1a0);
      }
    }
    else {
      FUN_1802c6d90(5,0,"Error writing %d chars with snprintf",uVar4);
    }
    if (0 < iVar11) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1a4,puVar6[iVar11]);
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1a6,puVar5);
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1a8,puVar6);
  }
  FUN_1802c8030("MQTTAsync_persistCommand",0x1a9,local_58,3);
  return local_58[0];
}



// ===== FUN_1802d0e90 @ 1802d0e90 (size 5813)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1802d0e90(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  size_t sVar8;
  longlong lVar9;
  longlong lVar10;
  void *_Dst;
  undefined8 uVar11;
  undefined4 *_Dst_00;
  undefined8 *puVar12;
  code *pcVar13;
  ULONGLONG UVar14;
  int *_Str;
  int *piVar15;
  longlong *plVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  longlong lVar20;
  undefined1 auStack_148 [32];
  longlong *local_128;
  int *local_120;
  undefined8 local_118;
  undefined8 local_110;
  uint local_108 [2];
  int *local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  longlong local_e8;
  undefined8 local_e0;
  int *local_d8;
  longlong local_d0;
  int *local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  int iStack_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_148;
  local_108[0] = 0;
  local_d0 = 0;
  FUN_1802c7f40("MQTTAsync_processCommand",0x4ce,3);
  iVar2 = FUN_1802cdcf0(DAT_1803c9988);
  if (iVar2 != 0) {
    pcVar5 = strerror(iVar2);
    FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar5);
  }
  iVar2 = FUN_1802cdcf0(DAT_1803c9998);
  if (iVar2 != 0) {
    pcVar5 = strerror(iVar2);
    FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar5);
  }
  uVar6 = FUN_1802c86e0();
  lVar7 = FUN_1802c87d0(DAT_1803c9970,&local_d0);
  while (piVar17 = (int *)0x0, lVar7 != 0) {
    piVar17 = *(int **)(local_d0 + 0x10);
    lVar7 = FUN_1802c8500(uVar6,*(undefined8 *)(piVar17 + 0x22));
    if (lVar7 == 0) {
      if ((*piVar17 == 1) || (*piVar17 == 0xe)) {
LAB_1802d103a:
        iVar2 = *piVar17;
        if (((iVar2 != 3) && ((iVar2 - 8U & 0xfffffffd) != 0)) ||
           (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0xc0) +
                    0x18) < 0xfffe)) {
          if (iVar2 == 3) {
            if (piVar17[0x1c] < 1) break;
          }
          else if ((iVar2 - 8U & 0xfffffffd) != 0) break;
          puVar12 = *(undefined8 **)(*(longlong *)(piVar17 + 0x22) + 0x18);
          if (*(int *)(puVar12[0x18] + 0x18) < *(int *)(puVar12 + 0x15)) break;
          FUN_1802c6d90(3,0xffffffff,"Blocking on server receive maximum for client %s",*puVar12);
        }
      }
      else {
        uVar1 = *(uint *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x20);
        if (((uVar1 & 4) != 0) && ((uVar1 & 0x3c0) == 0)) {
          uVar11 = *(undefined8 *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x30);
          iVar2 = FUN_1802cdcf0(DAT_1803c9990);
          if (iVar2 != 0) {
            pcVar5 = strerror(iVar2);
            FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar5);
          }
          iVar2 = FUN_1802ca120(uVar11);
          iVar3 = FUN_1802cdd70(DAT_1803c9990);
          if (iVar3 != 0) {
            pcVar5 = strerror(iVar3);
            FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar5);
          }
          if (iVar2 != 0) goto LAB_1802d103a;
        }
      }
      FUN_1802c82a0(uVar6,*(undefined8 *)(piVar17 + 0x22),8);
    }
    lVar7 = FUN_1802c87d0(DAT_1803c9970,&local_d0);
  }
  FUN_1802c8690(uVar6);
  if (piVar17 != (int *)0x0) {
    if (*piVar17 == 3) {
      *(int *)(*(longlong *)(piVar17 + 0x22) + 0x1bc) =
           *(int *)(*(longlong *)(piVar17 + 0x22) + 0x1bc) + -1;
    }
    FUN_1802c8320(DAT_1803c9970,piVar17);
    lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0xf0);
    if (lVar7 != 0) {
      if (piVar17[0x25] != 0) {
        local_d8 = (int *)0x0;
        local_f4 = 0;
        local_108[0] = (**(code **)(lVar7 + 0x20))
                                 (*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0xe8),
                                  *(undefined8 *)(piVar17 + 0x26),&local_d8,&local_f4);
        if (local_108[0] == 0) {
          pcVar13 = *(code **)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x100);
          if ((pcVar13 != (code *)0x0) &&
             (local_108[0] = (*pcVar13)(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) +
                                         0x110),&local_d8,&local_f4), local_108[0] != 0))
          goto LAB_1802d16f2;
          iVar2 = strncmp(*(char **)(piVar17 + 0x26),"c5-",3);
          local_f0 = iVar2;
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x50d,
                        *(undefined8 *)(piVar17 + 0x26));
          piVar15 = local_d8;
          iVar3 = local_f4;
          piVar17[0x26] = 0;
          piVar17[0x27] = 0;
          local_f8 = local_f4;
          local_c8 = local_d8;
          piVar19 = (int *)((longlong)local_d8 + (longlong)local_f4);
          local_100 = local_d8;
          FUN_1802c7f40("MQTTAsync_restoreCommand",0x1b6,3);
          if (iVar3 == 0) {
LAB_1802d16d3:
            piVar17 = (int *)0x0;
          }
          else {
            piVar17[0x25] = 0;
            _Str = local_100;
            if (piVar19 < local_100 + 2) {
LAB_1802d16bf:
              local_100 = _Str;
              uVar6 = 0x25e;
LAB_1802d16c4:
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",uVar6,piVar17);
              goto LAB_1802d16d3;
            }
            *piVar17 = *local_100;
            piVar17[10] = local_100[1];
            _Str = local_100 + 2;
            iVar18 = *piVar17;
            if (iVar18 == 3) {
              local_100 = _Str;
              sVar8 = strnlen((char *)_Str,(longlong)piVar19 - (longlong)_Str);
              lVar7 = sVar8 + 1;
              _Str = local_100;
              if (lVar7 != (longlong)piVar19 - (longlong)local_100) {
                if (piVar17[0x25] == 0) {
                  pcVar5 = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x232,
                                                 lVar7);
                  *(char **)(piVar17 + 0x16) = pcVar5;
                  _Str = local_100;
                  if (pcVar5 == (char *)0x0) goto LAB_1802d16bf;
                  strcpy(pcVar5,(char *)local_100);
                }
                _Str = (int *)((longlong)local_100 + lVar7);
                if (_Str + 1 <= piVar19) {
                  piVar17[0x18] = *_Str;
                  local_100 = _Str + 1;
                  sVar8 = (size_t)piVar17[0x18];
                  _Str = local_100;
                  if ((int *)(sVar8 + (longlong)local_100) <= piVar19) {
                    if (piVar17[0x25] == 0) {
                      _Dst = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x242,
                                                   sVar8);
                      *(void **)(piVar17 + 0x1a) = _Dst;
                      _Str = local_100;
                      if (_Dst == (void *)0x0) goto LAB_1802d16bf;
                      memcpy(_Dst,local_100,sVar8);
                    }
                    _Str = (int *)((longlong)local_100 + sVar8);
                    if (_Str + 2 <= piVar19) {
                      piVar17[0x1c] = *_Str;
                      piVar17[0x1d] = _Str[1];
                      local_100 = _Str + 2;
                      iVar2 = local_f0;
                      goto LAB_1802d1313;
                    }
                  }
                }
              }
              goto LAB_1802d16bf;
            }
            if (iVar18 == 8) {
              if (local_100 + 3 <= piVar19) {
                piVar17[0x16] = *_Str;
                local_100 = local_100 + 3;
                if (piVar17[0x16] < 1) goto LAB_1802d1495;
                lVar7 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1dc,
                                      (longlong)piVar17[0x16] << 3);
                *(longlong *)(piVar17 + 0x18) = lVar7;
                _Str = local_100;
                if (lVar7 != 0) {
                  lVar7 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1de,
                                        (longlong)piVar17[0x16] << 2);
                  *(longlong *)(piVar17 + 0x1a) = lVar7;
                  _Str = local_100;
                  if (lVar7 != 0) {
                    if ((iVar2 == 0) && (1 < piVar17[0x16])) {
                      lVar7 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1e5,
                                            (longlong)piVar17[0x16] * 0xc);
                      *(longlong *)(piVar17 + 0x20) = lVar7;
                      _Str = local_100;
                      if (lVar7 == 0) goto LAB_1802d16bf;
                    }
LAB_1802d1495:
                    iVar18 = 0;
                    if (0 < piVar17[0x16]) {
                      lVar7 = 0;
                      local_e8 = 0;
                      lVar20 = 0;
                      do {
                        sVar8 = strnlen((char *)local_100,(longlong)piVar19 - (longlong)local_100);
                        lVar9 = sVar8 + 1;
                        _Str = local_100;
                        if (lVar9 == (longlong)piVar19 - (longlong)local_100) goto LAB_1802d16bf;
                        lVar10 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1f2,lVar9)
                        ;
                        *(longlong *)(lVar20 + *(longlong *)(piVar17 + 0x18)) = lVar10;
                        _Str = local_100;
                        if (lVar10 == 0) goto LAB_1802d16bf;
                        strcpy(*(char **)(lVar20 + *(longlong *)(piVar17 + 0x18)),(char *)local_100)
                        ;
                        piVar15 = (int *)((longlong)local_100 + lVar9);
                        _Str = piVar15;
                        if (piVar19 < piVar15 + 1) goto LAB_1802d16bf;
                        *(int *)(local_e8 + *(longlong *)(piVar17 + 0x1a)) = *piVar15;
                        local_100 = piVar15 + 1;
                        if (local_f0 == 0) {
                          _Str = local_100;
                          if (piVar19 < piVar15 + 4) goto LAB_1802d16bf;
                          if (piVar17[0x16] == 1) {
                            *(undefined8 *)(piVar17 + 0x1c) = *(undefined8 *)local_100;
                            piVar17[0x1e] = piVar15[3];
                          }
                          else {
                            lVar9 = *(longlong *)(piVar17 + 0x20);
                            *(undefined8 *)(lVar9 + lVar7) = *(undefined8 *)local_100;
                            *(int *)(lVar9 + 8 + lVar7) = piVar15[3];
                          }
                          local_100 = piVar15 + 4;
                        }
                        local_e8 = local_e8 + 4;
                        iVar18 = iVar18 + 1;
                        lVar20 = lVar20 + 8;
                        lVar7 = lVar7 + 0xc;
                      } while (iVar18 < piVar17[0x16]);
                      goto LAB_1802d130a;
                    }
                    goto LAB_1802d1313;
                  }
                }
              }
              goto LAB_1802d16bf;
            }
            if ((iVar18 != 10) || (piVar19 < local_100 + 3)) goto LAB_1802d16bf;
            piVar17[0x16] = *_Str;
            local_100 = local_100 + 3;
            if (0 < piVar17[0x16]) {
              lVar7 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x219,
                                    (longlong)piVar17[0x16] << 3);
              *(longlong *)(piVar17 + 0x18) = lVar7;
              _Str = local_100;
              if (lVar7 == 0) goto LAB_1802d16bf;
            }
            iVar18 = 0;
            if (0 < piVar17[0x16]) {
              lVar7 = 0;
              do {
                sVar8 = strnlen((char *)local_100,(longlong)piVar19 - (longlong)local_100);
                lVar20 = sVar8 + 1;
                _Str = local_100;
                if (lVar20 == (longlong)piVar19 - (longlong)local_100) goto LAB_1802d16bf;
                lVar9 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x224,lVar20);
                *(longlong *)(lVar7 + *(longlong *)(piVar17 + 0x18)) = lVar9;
                _Str = local_100;
                if (lVar9 == 0) goto LAB_1802d16bf;
                strcpy(*(char **)(lVar7 + *(longlong *)(piVar17 + 0x18)),(char *)local_100);
                iVar18 = iVar18 + 1;
                local_100 = (int *)((longlong)local_100 + lVar20);
                lVar7 = lVar7 + 8;
              } while (iVar18 < piVar17[0x16]);
LAB_1802d130a:
              iVar2 = local_f0;
              iVar3 = local_f8;
            }
            piVar15 = local_c8;
LAB_1802d1313:
            if (((piVar17[0x25] == 0) && (iVar2 == 0)) &&
               (iVar2 = FUN_1802c1a20(piVar17 + 0x10,&local_100,(longlong)iVar3 + (longlong)piVar15)
               , iVar2 != 1)) {
              FUN_1802c6d90(5,0xffffffff,"Error restoring properties from persistence");
              uVar6 = 0x259;
              goto LAB_1802d16c4;
            }
          }
          FUN_1802c8030("MQTTAsync_restoreCommand",0x261,0,3);
        }
        else {
LAB_1802d16f2:
          FUN_1802c6d90(5,0xffffffff,"Error restoring command: rc %d from pget\n",local_108[0]);
          piVar17 = (int *)0x0;
        }
        if (local_d8 != (int *)0x0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x517);
        }
        if (piVar17 == (int *)0x0) goto LAB_1802d1736;
      }
      FUN_1802d3f20(piVar17);
    }
  }
LAB_1802d1736:
  iVar2 = FUN_1802cdd70(DAT_1803c9998);
  if (iVar2 != 0) {
    pcVar5 = strerror(iVar2);
    FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar5);
  }
  if (piVar17 == (int *)0x0) goto LAB_1802d24ad;
  iVar2 = *piVar17;
  if (iVar2 == 1) {
    puVar12 = *(undefined8 **)(piVar17 + 0x22);
    if (((*(uint *)(puVar12[3] + 0x20) & 0x3c0) == 0) && ((*(uint *)(puVar12[3] + 0x20) & 4) == 0))
    {
      pcVar5 = (char *)*puVar12;
      if ((0 < *(int *)((longlong)puVar12 + 0x1cc)) &&
         (piVar17[0x16] < *(int *)((longlong)puVar12 + 0x1cc))) {
        pcVar5 = *(char **)(puVar12[0x3a] + (longlong)piVar17[0x16] * 8);
        iVar2 = strncmp("tcp://",pcVar5,6);
        if (iVar2 == 0) goto LAB_1802d18f0;
        iVar2 = strncmp("mqtt://",pcVar5,7);
        if (iVar2 == 0) {
          pcVar5 = pcVar5 + 7;
        }
        else {
          iVar2 = strncmp("ws://",pcVar5,5);
          if (iVar2 == 0) {
            pcVar5 = pcVar5 + 5;
            *(undefined4 *)(*(longlong *)(piVar17 + 0x22) + 0x10) = 1;
          }
          else {
            iVar2 = strncmp("ssl://",pcVar5,6);
            if (iVar2 == 0) {
              *(undefined4 *)(*(longlong *)(piVar17 + 0x22) + 0xc) = 1;
            }
            else {
              iVar2 = strncmp("tls://",pcVar5,6);
              if (iVar2 != 0) {
                iVar2 = strncmp("mqtts://",pcVar5,8);
                if (iVar2 == 0) {
                  pcVar5 = pcVar5 + 8;
                  *(undefined4 *)(*(longlong *)(piVar17 + 0x22) + 0xc) = 1;
                }
                else {
                  iVar2 = strncmp("wss://",pcVar5,6);
                  if (iVar2 == 0) {
                    *(undefined4 *)(*(longlong *)(piVar17 + 0x22) + 0xc) = 1;
                    *(undefined4 *)(*(longlong *)(piVar17 + 0x22) + 0x10) = 1;
                    goto LAB_1802d18f0;
                  }
                }
                goto LAB_1802d18f4;
              }
              *(undefined4 *)(*(longlong *)(piVar17 + 0x22) + 0xc) = 1;
            }
LAB_1802d18f0:
            pcVar5 = pcVar5 + 6;
          }
        }
      }
LAB_1802d18f4:
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x120);
      if (iVar2 == 0) {
        iVar2 = piVar17[0x17];
        if (iVar2 == 0) {
          piVar17[0x17] = 4;
          iVar2 = 4;
        }
        else if (iVar2 == 4) {
          piVar17[0x17] = 3;
          iVar2 = 3;
        }
      }
      else {
        piVar17[0x17] = iVar2;
      }
      local_128._0_4_ = iVar2;
      FUN_1802c6d90(4,0xffffffff,"Connecting to serverURI %s with MQTT version %d",pcVar5);
      lVar7 = *(longlong *)(piVar17 + 0x22);
      local_110 = *(undefined8 *)(lVar7 + 0x200);
      local_118 = *(undefined8 *)(lVar7 + 0x1f8);
      local_120 = (int *)CONCAT44(local_120._4_4_,piVar17[0x17]);
      local_128 = (longlong *)CONCAT44(local_128._4_4_,*(undefined4 *)(lVar7 + 0x10));
      local_108[0] = FUN_1802dca60(pcVar5,*(undefined8 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 8),
                                   *(undefined4 *)(lVar7 + 0xc));
      if ((*(uint *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x20) & 0x3c0) == 0) {
        local_108[0] = 0xffffffff;
      }
      else if (local_108[0] == 0x2734) {
        _guard_check_icall(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x30));
      }
    }
    else {
      local_108[0] = 0;
    }
  }
  else if (iVar2 == 8) {
    uVar6 = FUN_1802c86e0();
    uVar11 = FUN_1802c86e0();
    iVar2 = piVar17[0x16];
    iVar3 = 0;
    if (0 < iVar2) {
      lVar7 = 0;
      do {
        pcVar5 = *(char **)(lVar7 + *(longlong *)(piVar17 + 0x18));
        sVar8 = strlen(pcVar5);
        FUN_1802c82a0(uVar6,pcVar5,sVar8);
        FUN_1802c82a0(uVar11,*(longlong *)(piVar17 + 0x1a) + (longlong)iVar3 * 4,4);
        iVar2 = piVar17[0x16];
        lVar7 = lVar7 + 8;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    local_120 = (int *)0x0;
    if (*(int *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x120) < 5) {
      local_128 = (longlong *)0x0;
    }
    else {
      local_120 = piVar17 + 0x10;
      if (iVar2 < 2) {
        local_128 = (longlong *)(piVar17 + 0x1c);
      }
      else {
        local_128 = *(longlong **)(piVar17 + 0x20);
      }
    }
    local_108[0] = FUN_1802dd1c0(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18),uVar6,uVar11,
                                 piVar17[10]);
    FUN_1802c8690(uVar6);
    FUN_1802c8690(uVar11);
    if ((4 < *(int *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x120)) &&
       (1 < piVar17[0x16])) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x59c,*(undefined8 *)(piVar17 + 0x20));
    }
  }
  else if (iVar2 == 10) {
    uVar6 = FUN_1802c86e0();
    piVar19 = (int *)0x0;
    iVar2 = 0;
    if (0 < piVar17[0x16]) {
      lVar7 = 0;
      do {
        pcVar5 = *(char **)(lVar7 + *(longlong *)(piVar17 + 0x18));
        sVar8 = strlen(pcVar5);
        FUN_1802c82a0(uVar6,pcVar5,sVar8);
        iVar2 = iVar2 + 1;
        lVar7 = lVar7 + 8;
      } while (iVar2 < piVar17[0x16]);
    }
    if (4 < *(int *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x120)) {
      piVar19 = piVar17 + 0x10;
    }
    local_108[0] = FUN_1802dd260(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18),uVar6,
                                 piVar17[10],piVar19);
    FUN_1802c8690(uVar6);
  }
  else if (iVar2 == 3) {
    local_e8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    lVar7 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x5b3,0x48);
    if (lVar7 == 0) goto LAB_1802d24ad;
    *(undefined4 *)(lVar7 + 0x40) = 0;
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(piVar17 + 0x1a);
    *(int *)(lVar7 + 0x20) = piVar17[0x18];
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(piVar17 + 0x16);
    *(int *)(lVar7 + 0x14) = piVar17[10];
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x120);
    *(int *)(lVar7 + 0x24) = iVar2;
    *(undefined8 *)(lVar7 + 0x28) = local_c0;
    *(ulonglong *)(lVar7 + 0x30) = CONCAT44(uStack_b4,uStack_b8);
    *(undefined8 *)(lVar7 + 0x38) = local_b0;
    if (4 < iVar2) {
      uVar6 = *(undefined8 *)(piVar17 + 0x12);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(piVar17 + 0x10);
      *(undefined8 *)(lVar7 + 0x30) = uVar6;
      *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(piVar17 + 0x14);
    }
    local_128 = &local_e8;
    local_108[0] = FUN_1802d6e40(*(undefined8 *)(*(longlong *)(piVar17 + 0x22) + 0x18),lVar7,
                                 piVar17[0x1c],piVar17[0x1d]);
    if (piVar17[0x1c] == 0) {
      if (local_108[0] == 0) {
        if (*(longlong *)(piVar17 + 2) == 0) {
          if (*(longlong *)(piVar17 + 6) != 0) {
            iStack_a0 = piVar17[10];
            local_88 = *(longlong *)(piVar17 + 0x14);
            local_40 = *(undefined8 *)(piVar17 + 0x16);
            local_70 = *(ulonglong *)(piVar17 + 0x1a);
            local_78 = (ulonglong)(uint)piVar17[0x18];
            local_60 = 0;
            uStack_58 = 0;
            local_a8._0_4_ = 0x4453514d;
            local_a8._4_4_ = 0;
            local_50 = 0;
            uStack_48 = 0;
            local_9c = 0;
            local_80 = local_80 & 0xffffffff00000000;
            uStack_68 = (ulonglong)(uint)piVar17[0x1d] << 0x20;
            local_98 = (int)*(undefined8 *)(piVar17 + 0x10);
            uStack_94 = (undefined4)((ulonglong)*(undefined8 *)(piVar17 + 0x10) >> 0x20);
            uStack_90 = (undefined4)*(undefined8 *)(piVar17 + 0x12);
            uStack_8c = (undefined4)((ulonglong)*(undefined8 *)(piVar17 + 0x12) >> 0x20);
            FUN_1802c6d90(3,0xffffffff,"Calling publish success for client %s",
                          **(undefined8 **)(*(longlong *)(piVar17 + 0x22) + 0x18));
            (**(code **)(piVar17 + 6))(*(undefined8 *)(piVar17 + 0xc),&local_a8);
          }
        }
        else {
          local_a8._0_4_ = piVar17[10];
          local_60 = *(undefined8 *)(piVar17 + 0x16);
          uStack_90 = (undefined4)*(undefined8 *)(piVar17 + 0x1a);
          uStack_8c = (undefined4)((ulonglong)*(undefined8 *)(piVar17 + 0x1a) >> 0x20);
          local_98 = piVar17[0x18];
          local_88 = (ulonglong)(uint)piVar17[0x1d] << 0x20;
          FUN_1802c6d90(3,0xffffffff,"Calling publish success for client %s",
                        **(undefined8 **)(*(longlong *)(piVar17 + 0x22) + 0x18));
          (**(code **)(piVar17 + 2))(*(undefined8 *)(piVar17 + 0xc),&local_a8);
        }
      }
      else {
        if (local_108[0] != 0xffffffff) {
          piVar17[0x1a] = 0;
          piVar17[0x1b] = 0;
          piVar17[0x16] = 0;
          piVar17[0x17] = 0;
        }
        *(int **)(*(longlong *)(piVar17 + 0x22) + 400) = piVar17;
      }
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x5f1,lVar7);
  }
  else if (iVar2 == 0xe) {
    lVar7 = *(longlong *)(piVar17 + 0x22);
    puVar12 = *(undefined8 **)(lVar7 + 0x18);
    if ((*(uint *)(puVar12 + 4) & 0x3c0) == 0) {
      if ((*(uint *)(puVar12 + 4) & 4) == 0) goto LAB_1802d1eb1;
    }
    else if (*(longlong *)(lVar7 + 0x90) == 0) {
      if (*(longlong *)(lVar7 + 0xa0) != 0) {
        iStack_a0 = 0;
        local_80 = CONCAT44(local_80._4_4_,0xfffffff5);
        local_78 = 0;
        FUN_1802c6d90(3,0xffffffff,"Calling connect failure for client %s",*puVar12);
        (**(code **)(*(longlong *)(piVar17 + 0x22) + 0xa0))
                  (*(undefined8 *)(*(longlong *)(piVar17 + 0x22) + 0xb0),&local_a8);
        *(undefined8 *)(*(longlong *)(piVar17 + 0x22) + 0xa0) = 0;
        *(undefined8 *)(*(longlong *)(piVar17 + 0x22) + 0x98) = 0;
      }
    }
    else {
      local_e8 = -0xb00000000;
      local_e0 = 0;
      FUN_1802c6d90(3,0xffffffff,"Calling connect failure for client %s",*puVar12);
      (**(code **)(*(longlong *)(piVar17 + 0x22) + 0x90))
                (*(undefined8 *)(*(longlong *)(piVar17 + 0x22) + 0xb0),&local_e8);
      *(undefined8 *)(*(longlong *)(piVar17 + 0x22) + 0x90) = 0;
      *(undefined8 *)(*(longlong *)(piVar17 + 0x22) + 0x88) = 0;
    }
    *(uint *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x20) =
         *(uint *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x20) & 0xffffffbf | 0x380;
    FUN_1802ce650(*(undefined8 *)(piVar17 + 0x22),piVar17);
  }
LAB_1802d1eb1:
  iVar2 = *piVar17;
  if (iVar2 == 1) {
    if (local_108[0] != 0xffffffff) {
      if (local_108[0] == 0xfffffffe) goto LAB_1802d2004;
      uVar6 = *(undefined8 *)(piVar17 + 2);
      lVar7 = *(longlong *)(piVar17 + 0x22);
      *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)piVar17;
      *(undefined8 *)(lVar7 + 0x88) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 6);
      *(undefined8 *)(lVar7 + 0x90) = *(undefined8 *)(piVar17 + 4);
      *(undefined8 *)(lVar7 + 0x98) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 10);
      *(undefined8 *)(lVar7 + 0xa0) = *(undefined8 *)(piVar17 + 8);
      *(undefined8 *)(lVar7 + 0xa8) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0xe);
      *(undefined8 *)(lVar7 + 0xb0) = *(undefined8 *)(piVar17 + 0xc);
      *(undefined8 *)(lVar7 + 0xb8) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x12);
      *(undefined8 *)(lVar7 + 0xc0) = *(undefined8 *)(piVar17 + 0x10);
      *(undefined8 *)(lVar7 + 200) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x16);
      *(undefined8 *)(lVar7 + 0xd0) = *(undefined8 *)(piVar17 + 0x14);
      *(undefined8 *)(lVar7 + 0xd8) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x1a);
      *(undefined8 *)(lVar7 + 0xe0) = *(undefined8 *)(piVar17 + 0x18);
      *(undefined8 *)(lVar7 + 0xe8) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x1e);
      *(undefined8 *)(lVar7 + 0xf0) = *(undefined8 *)(piVar17 + 0x1c);
      *(undefined8 *)(lVar7 + 0xf8) = uVar6;
      *(undefined8 *)(lVar7 + 0x100) = *(undefined8 *)(piVar17 + 0x20);
      goto LAB_1802d2491;
    }
LAB_1802d2032:
    local_a8._0_4_ = 0x4454514d;
    local_a8._4_4_ = 0;
    iStack_a0 = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_70 = 0;
    uStack_68 = (ulonglong)uStack_68._4_4_ << 0x20;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1802c3740(*(undefined8 *)(piVar17 + 0x22),&local_a8);
    *(undefined4 *)(*(longlong *)(piVar17 + 0x22) + 0x1b8) = 1;
LAB_1802d21dc:
    if (*piVar17 == 1) {
      lVar7 = *(longlong *)(piVar17 + 0x22);
      FUN_1802c7f40("MQTTAsync_checkConn",0xc4,3);
      if ((piVar17[0x16] + 1 < *(int *)(lVar7 + 0x1cc)) ||
         ((piVar17[0x17] == 3 && (*(int *)(*(longlong *)(lVar7 + 0x18) + 0x120) == 0)))) {
        local_f8 = 1;
      }
      else {
        local_f8 = 0;
      }
      FUN_1802c8030("MQTTAsync_checkConn",199,&local_f8,3);
      if (local_f8 != 0) {
        FUN_1802c6d90(3,0xffffffff,"Connect failed, more to try");
        if (*(int *)(*(longlong *)(*(longlong *)(piVar17 + 0x22) + 0x18) + 0x120) == 0) {
          if (piVar17[0x17] == 3) {
            piVar17[0x17] = 0;
            goto LAB_1802d2283;
          }
        }
        else {
LAB_1802d2283:
          piVar17[0x16] = piVar17[0x16] + 1;
        }
        FUN_1802cdf70(piVar17,8);
        goto LAB_1802d24ad;
      }
    }
    if (*(longlong *)(piVar17 + 4) == 0) {
      if (*(longlong *)(piVar17 + 8) != 0) {
        local_80 = CONCAT44(local_80._4_4_,local_108[0]);
        local_a8._0_4_ = 0x4446514d;
        local_a8._4_4_ = 0;
        iStack_a0 = 0;
        local_9c = 0;
        local_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        local_88 = 0;
        local_78 = 0;
        local_70 = local_70 & 0xffffffff00000000;
        FUN_1802c6d90(3,0xffffffff,"Calling command failure for client %s",
                      **(undefined8 **)(*(longlong *)(piVar17 + 0x22) + 0x18));
        pcVar13 = *(code **)(piVar17 + 8);
        plVar16 = &local_a8;
        goto LAB_1802d2335;
      }
    }
    else {
      local_e8 = (ulonglong)local_108[0] << 0x20;
      local_e0 = 0;
      FUN_1802c6d90(3,0xffffffff,"Calling command failure for client %s",
                    **(undefined8 **)(*(longlong *)(piVar17 + 0x22) + 0x18));
      pcVar13 = *(code **)(piVar17 + 4);
      plVar16 = &local_e8;
LAB_1802d2335:
      (*pcVar13)(*(undefined8 *)(piVar17 + 0xc),plVar16);
    }
    if (*piVar17 == 1) {
      uVar6 = *(undefined8 *)(piVar17 + 2);
      lVar7 = *(longlong *)(piVar17 + 0x22);
      *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)piVar17;
      *(undefined8 *)(lVar7 + 0x88) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 6);
      *(undefined8 *)(lVar7 + 0x90) = *(undefined8 *)(piVar17 + 4);
      *(undefined8 *)(lVar7 + 0x98) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 10);
      *(undefined8 *)(lVar7 + 0xa0) = *(undefined8 *)(piVar17 + 8);
      *(undefined8 *)(lVar7 + 0xa8) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0xe);
      *(undefined8 *)(lVar7 + 0xb0) = *(undefined8 *)(piVar17 + 0xc);
      *(undefined8 *)(lVar7 + 0xb8) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x12);
      *(undefined8 *)(lVar7 + 0xc0) = *(undefined8 *)(piVar17 + 0x10);
      *(undefined8 *)(lVar7 + 200) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x16);
      *(undefined8 *)(lVar7 + 0xd0) = *(undefined8 *)(piVar17 + 0x14);
      *(undefined8 *)(lVar7 + 0xd8) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x1a);
      *(undefined8 *)(lVar7 + 0xe0) = *(undefined8 *)(piVar17 + 0x18);
      *(undefined8 *)(lVar7 + 0xe8) = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x1e);
      *(undefined8 *)(lVar7 + 0xf0) = *(undefined8 *)(piVar17 + 0x1c);
      *(undefined8 *)(lVar7 + 0xf8) = uVar6;
      *(undefined8 *)(lVar7 + 0x100) = *(undefined8 *)(piVar17 + 0x20);
      lVar7 = *(longlong *)(piVar17 + 0x22);
      if ((*(int *)(lVar7 + 0x1c0) != 0) && (*(int *)(lVar7 + 0x1b8) != 0)) {
        UVar14 = GetTickCount64();
        *(ULONGLONG *)(lVar7 + 0x1e8) = UVar14;
        if (*(int *)(lVar7 + 0x1f0) == 0) {
          *(undefined4 *)(lVar7 + 0x1f0) = 1;
          iVar2 = *(int *)(lVar7 + 0x1c4);
        }
        else {
          iVar2 = *(int *)(lVar7 + 0x1e0) * 2;
          if (*(int *)(lVar7 + 0x1c8) <= iVar2) {
            iVar2 = *(int *)(lVar7 + 0x1c8);
          }
        }
        *(int *)(lVar7 + 0x1e0) = iVar2;
        iVar3 = iVar2;
        if (*(int *)(lVar7 + 0x1c8) < iVar2) {
          iVar3 = *(int *)(lVar7 + 0x1c8);
        }
        if (iVar2 < *(int *)(lVar7 + 0x1c4)) {
          iVar2 = *(int *)(lVar7 + 0x1c4);
        }
        iVar2 = (int)((double)iVar2 / _DAT_180384e78);
        if (iVar2 < (int)((double)iVar3 * _DAT_180384e78)) {
          iVar18 = ((int)((double)iVar3 * _DAT_180384e78) - iVar2) + 1;
          iVar3 = (int)(0x7fff / (longlong)iVar18);
          do {
            iVar4 = rand();
          } while (iVar3 * iVar18 <= iVar4);
          iVar2 = iVar2 + iVar4 / iVar3;
        }
        *(int *)(lVar7 + 0x1dc) = iVar2;
      }
    }
  }
  else {
    if (iVar2 != 0xe) {
      if ((iVar2 == 3) && (piVar17[0x1c] == 0)) {
        if (local_108[0] != 0xffffffff) {
          if (local_108[0] != 0xfffffffe) {
            if (local_108[0] == 0xffffffea) {
              FUN_1802c82a0(*(undefined8 *)(*(longlong *)(piVar17 + 0x22) + 0x198),piVar17,8);
            }
            else {
              FUN_1802d0290(piVar17);
            }
            goto LAB_1802d24ad;
          }
          goto LAB_1802d2004;
        }
      }
      else {
LAB_1802d2004:
        if (1 < local_108[0] + 2) {
          FUN_1802c82a0(*(undefined8 *)(*(longlong *)(piVar17 + 0x22) + 0x198),piVar17,8);
          goto LAB_1802d24ad;
        }
        if (iVar2 == 1) goto LAB_1802d2032;
      }
      lVar7 = *(longlong *)(piVar17 + 0x22);
      local_a8._0_4_ = 0x4454514d;
      local_a8._4_4_ = 0;
      iStack_a0 = 0;
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      local_70 = 0;
      uStack_68 = (ulonglong)uStack_68._4_4_ << 0x20;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1802c7f40("MQTTAsync_disconnect1",0xab0,3);
      if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x18) == 0)) {
        local_f8 = -1;
      }
      else if ((*(byte *)(*(longlong *)(lVar7 + 0x18) + 0x20) & 4) == 0) {
        local_f8 = -3;
      }
      else {
        _Dst_00 = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0xabf,0xa0);
        if (_Dst_00 == (undefined4 *)0x0) {
          local_f8 = -99;
        }
        else {
          memset(_Dst_00,0,0xa0);
          *(longlong *)(_Dst_00 + 0x22) = lVar7;
          *(ulonglong *)(_Dst_00 + 2) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(_Dst_00 + 4) = CONCAT44(uStack_8c,uStack_90);
          *(undefined8 *)(_Dst_00 + 6) = local_60;
          *(undefined8 *)(_Dst_00 + 8) = uStack_58;
          *(longlong *)(_Dst_00 + 0xc) = local_88;
          _Dst_00[0x17] = iStack_a0;
          if ((4 < *(int *)(*(longlong *)(lVar7 + 0x18) + 0x120)) && (0 < local_a8._4_4_)) {
            puVar12 = (undefined8 *)FUN_1802c1480(&local_c0,&local_80);
            uVar6 = puVar12[1];
            *(undefined8 *)(_Dst_00 + 0x10) = *puVar12;
            *(undefined8 *)(_Dst_00 + 0x12) = uVar6;
            *(undefined8 *)(_Dst_00 + 0x14) = puVar12[2];
            _Dst_00[0x18] = (undefined4)uStack_68;
          }
          *_Dst_00 = 0xe;
          _Dst_00[0x16] = 1;
          local_f8 = FUN_1802cdf70(_Dst_00,8);
        }
      }
      FUN_1802c8030("MQTTAsync_disconnect1",0xad9,&local_f8,3);
      goto LAB_1802d21dc;
    }
    uVar6 = *(undefined8 *)(piVar17 + 2);
    lVar7 = *(longlong *)(piVar17 + 0x22);
    *(undefined8 *)(lVar7 + 0x108) = *(undefined8 *)piVar17;
    *(undefined8 *)(lVar7 + 0x110) = uVar6;
    uVar6 = *(undefined8 *)(piVar17 + 6);
    *(undefined8 *)(lVar7 + 0x118) = *(undefined8 *)(piVar17 + 4);
    *(undefined8 *)(lVar7 + 0x120) = uVar6;
    uVar6 = *(undefined8 *)(piVar17 + 10);
    *(undefined8 *)(lVar7 + 0x128) = *(undefined8 *)(piVar17 + 8);
    *(undefined8 *)(lVar7 + 0x130) = uVar6;
    uVar6 = *(undefined8 *)(piVar17 + 0xe);
    *(undefined8 *)(lVar7 + 0x138) = *(undefined8 *)(piVar17 + 0xc);
    *(undefined8 *)(lVar7 + 0x140) = uVar6;
    uVar6 = *(undefined8 *)(piVar17 + 0x12);
    *(undefined8 *)(lVar7 + 0x148) = *(undefined8 *)(piVar17 + 0x10);
    *(undefined8 *)(lVar7 + 0x150) = uVar6;
    uVar6 = *(undefined8 *)(piVar17 + 0x16);
    *(undefined8 *)(lVar7 + 0x158) = *(undefined8 *)(piVar17 + 0x14);
    *(undefined8 *)(lVar7 + 0x160) = uVar6;
    uVar6 = *(undefined8 *)(piVar17 + 0x1a);
    *(undefined8 *)(lVar7 + 0x168) = *(undefined8 *)(piVar17 + 0x18);
    *(undefined8 *)(lVar7 + 0x170) = uVar6;
    uVar6 = *(undefined8 *)(piVar17 + 0x1e);
    *(undefined8 *)(lVar7 + 0x178) = *(undefined8 *)(piVar17 + 0x1c);
    *(undefined8 *)(lVar7 + 0x180) = uVar6;
    *(undefined8 *)(lVar7 + 0x188) = *(undefined8 *)(piVar17 + 0x20);
  }
LAB_1802d2491:
  FUN_1802d02c0(piVar17);
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x445,piVar17);
LAB_1802d24ad:
  iVar2 = FUN_1802cdd70(DAT_1803c9988);
  if (iVar2 != 0) {
    pcVar5 = strerror(iVar2);
    FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar5);
  }
  local_108[0] = (uint)(piVar17 != (int *)0x0);
  FUN_1802c8030("MQTTAsync_processCommand",0x66a,local_108,3);
  return local_108[0];
}



// ===== FUN_1802d2550 @ 1802d2550 (size 3002)

void FUN_1802d2550(void)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  size_t sVar8;
  longlong lVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined1 auStack_108 [32];
  int local_e8 [2];
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 *local_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_108;
  uVar15 = 10;
  FUN_1802c7f40("MQTTAsync_receiveThread",0x82a,3);
  FUN_1802cde00("MQTTAsync_rcv");
  FUN_1802d08a0(DAT_1803c9988);
  DAT_1803c997c = 2;
  DAT_1803c9984 = GetCurrentThreadId();
joined_r0x0001802d25c9:
  do {
    if (DAT_1803c9964 != 0) {
LAB_1802d30a4:
      DAT_1803c997c = 0;
      DAT_1803c9984 = 0;
      FUN_1802d3ee0(DAT_1803c9988);
      if (DAT_1803c9978 != 0) {
        FUN_1802cdd90(DAT_1803c99a0);
      }
      FUN_1801e4530();
      FUN_1802c8030("MQTTAsync_receiveThread",0x974,0,3);
                    /* WARNING: Subroutine does not return */
      ExitThread(0);
    }
    do {
      puVar13 = (undefined4 *)0x0;
      local_e8[0] = -1;
      local_e0 = -1;
      FUN_1802d3ee0(DAT_1803c9988);
      puVar6 = (uint *)FUN_1802cf890(&local_e0,uVar15,local_e8);
      FUN_1802d08a0(DAT_1803c9988);
      if (DAT_1803c9964 != 0) goto LAB_1802d30a4;
    } while (local_e0 == 0);
    uVar15 = 1000;
    lVar7 = FUN_1802c8540(DAT_1803c9968,&local_e0,&LAB_1802d4b90);
    if (lVar7 != 0) {
      puVar1 = *(ulonglong **)(*(longlong *)(DAT_1803c9968 + 0x10) + 0x10);
      if (puVar1 == (ulonglong *)0x0) {
        FUN_1802c6d90(5,0xffffffff,"Client structure was NULL for socket %d - removing socket",
                      local_e0);
        FUN_1802c8d60(local_e0);
        goto joined_r0x0001802d25c9;
      }
      if (local_e8[0] == -1) {
        FUN_1802c6d90(3,0xffffffff,"Error from MQTTAsync_cycle() - removing socket %d",local_e0);
        FUN_1802d4c40(puVar1,local_e8[0],"socket error");
      }
      else {
        if ((0 < (int)(*(longlong **)(puVar1[3] + 0xd0))[3]) && (puVar1[5] != 0)) {
          puVar2 = *(undefined8 **)(**(longlong **)(puVar1[3] + 0xd0) + 0x10);
          uVar14 = *(uint *)(puVar2 + 2);
          sVar8 = strlen((char *)puVar2[1]);
          puVar10 = puVar13;
          if (sVar8 != (longlong)(int)uVar14) {
            puVar10 = (undefined4 *)(ulonglong)uVar14;
          }
          iVar5 = FUN_1802cffc0(puVar1,puVar2[1],(longlong)(int)puVar10,*puVar2);
          puVar3 = (undefined8 *)puVar1[3];
          if (iVar5 == 0) {
            FUN_1802c6d90(3,0xffffffff,
                          "False returned from messageArrived for client %s, message remains on queue"
                          ,*puVar3);
          }
          else {
            if (puVar3[0x1e] != 0) {
              FUN_1802cc370(puVar3,puVar2);
            }
            FUN_1802c87f0(*(undefined8 *)(puVar1[3] + 0xd0),puVar2);
          }
        }
        if (puVar6 != (uint *)0x0) {
          uVar14 = *puVar6 >> 4 & 0xf;
          if (uVar14 == 2) {
            uVar14 = puVar6[1];
            local_e8[0] = FUN_1802cf090(puVar1,puVar6);
            if (local_e8[0] == 0) {
              if ((0 < *(int *)((longlong)puVar1 + 0x1cc)) &&
                 ((int)puVar1[0x1b] < *(int *)((longlong)puVar1 + 0x1cc))) {
                FUN_1802c6d90(3,0xffffffff,"Connect succeeded to %s",
                              *(undefined8 *)(puVar1[0x3a] + (longlong)(int)puVar1[0x1b] * 8));
              }
              if ((puVar1[0x11] == 0) && (puVar1[0x13] == 0)) {
LAB_1802d2841:
                iVar5 = (int)puVar13;
                if (puVar1[0x13] != 0) {
                  local_a8 = 0x4453514d;
                  uStack_a4 = 0;
                  uStack_a0 = 0;
                  uStack_9c = 0;
                  uStack_98 = 0;
                  uStack_94 = 0;
                  uStack_90 = 0;
                  local_88 = 0;
                  uStack_80 = uStack_80 & 0xffffffff00000000;
                  local_78 = (undefined4 *)0x0;
                  uStack_70 = 0;
                  uStack_68 = 0;
                  local_40 = 0;
                  uStack_60 = 0;
                  uStack_58 = 0;
                  local_50 = 0;
                  uStack_48 = 0;
                  FUN_1802c6d90(3,0xffffffff,"Calling connect success for client %s",
                                *(undefined8 *)puVar1[3]);
                  if (*(int *)((longlong)puVar1 + 0x1cc) < 1) {
                    uStack_80 = *puVar1;
                  }
                  else {
                    uStack_80 = *(ulonglong *)(puVar1[0x3a] + (longlong)(int)puVar1[0x1b] * 8);
                  }
                  uStack_98 = puVar6[4];
                  uStack_94 = puVar6[5];
                  uStack_90 = puVar6[6];
                  uStack_8c = puVar6[7];
                  local_88 = *(undefined8 *)(puVar6 + 8);
                  uStack_9c = (uint)(byte)puVar6[2];
                  local_78 = (undefined4 *)
                             (CONCAT44(uVar14,*(undefined4 *)((longlong)puVar1 + 0xdc)) &
                             0x1ffffffff);
                  (*(code *)puVar1[0x13])(puVar1[0x16],&local_a8);
                  puVar1[0x13] = 0;
                  puVar1[0x14] = 0;
                }
              }
              else {
                puVar13 = (undefined4 *)0x1;
                iVar5 = 1;
                if (puVar1[0x11] == 0) goto LAB_1802d2841;
                local_a8 = 0;
                uStack_a4 = 0;
                uStack_a0 = 0;
                uStack_9c = 0;
                uStack_98 = 0;
                uStack_94 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                local_88 = 0;
                uStack_80 = 0;
                local_78 = (undefined4 *)0x0;
                uStack_70 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                FUN_1802c6d90(3,0xffffffff,"Calling connect success for client %s",
                              *(undefined8 *)puVar1[3]);
                if ((*(int *)((longlong)puVar1 + 0x1cc) < 1) ||
                   (*(int *)((longlong)puVar1 + 0x1cc) <= (int)puVar1[0x1b])) {
                  uStack_a0 = (undefined4)*puVar1;
                  uStack_9c = (uint)(*puVar1 >> 0x20);
                }
                else {
                  uVar12 = *(undefined8 *)(puVar1[0x3a] + (longlong)(int)puVar1[0x1b] * 8);
                  uStack_a0 = (undefined4)uVar12;
                  uStack_9c = (uint)((ulonglong)uVar12 >> 0x20);
                }
                uStack_98 = *(uint *)((longlong)puVar1 + 0xdc);
                uStack_94 = uVar14 & 1;
                (*(code *)puVar1[0x11])(puVar1[0x16],&local_a8);
                puVar1[0x11] = 0;
                puVar1[0x12] = 0;
              }
              if (puVar1[10] != 0) {
                FUN_1802c6d90(3,0xffffffff,"Calling connected for client %s",
                              *(undefined8 *)puVar1[3]);
                pcVar11 = "automatic reconnect";
                if (iVar5 != 0) {
                  pcVar11 = "connect onSuccess called";
                }
                (*(code *)puVar1[10])(puVar1[0xb],pcVar11);
              }
              if ((4 < *(int *)(puVar1[3] + 0x120)) &&
                 (iVar5 = FUN_1802c19b0(puVar6 + 4,0x21), iVar5 != 0)) {
                iVar5 = FUN_1802c1890(puVar6 + 4,0x21);
                if (iVar5 < *(int *)(puVar1[3] + 0xa8)) {
                  *(int *)(puVar1[3] + 0xa8) = iVar5;
                  FUN_1802d77d0(puVar6);
                  goto joined_r0x0001802d25c9;
                }
              }
            }
            else {
              FUN_1802d4c40(puVar1,local_e8[0],"CONNACK return code");
            }
            FUN_1802d77d0(puVar6);
            goto joined_r0x0001802d25c9;
          }
          if (uVar14 == 9) {
            local_d8 = 0;
            lVar7 = FUN_1802c87d0(puVar1[0x33],&local_d8);
            if (lVar7 != 0) {
LAB_1802d2aa0:
              lVar7 = *(longlong *)(local_d8 + 0x10);
              if (*(uint *)(lVar7 + 0x28) != puVar6[1]) break;
              iVar5 = FUN_1802c8320(puVar1[0x33],lVar7);
              if (iVar5 == 0) {
                FUN_1802c6d90(5,0xffffffff,"Subscribe command not removed from command list");
              }
              puVar2 = (undefined8 *)puVar1[3];
              plVar4 = *(longlong **)(puVar6 + 10);
              iVar5 = (int)plVar4[3];
              if (*(int *)(puVar2 + 0x24) < 5) {
                if ((iVar5 == 1) && (**(int **)(*plVar4 + 0x10) == 0x80)) {
                  if (*(longlong *)(lVar7 + 0x10) != 0) {
                    local_b8 = *(undefined4 *)(lVar7 + 0x28);
                    local_b4 = 0x80;
                    local_b0 = 0;
                    FUN_1802c6d90(3,0xffffffff,"Calling subscribe failure for client %s",*puVar2);
                    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 0x30),&local_b8);
                  }
                }
                else if (*(longlong *)(lVar7 + 8) != 0) {
                  if (iVar5 == 1) {
                    uStack_a0 = **(undefined4 **)(*plVar4 + 0x10);
                  }
                  else if (1 < iVar5) {
                    local_c8 = 0;
                    puVar13 = (undefined4 *)
                              FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x905,
                                            (longlong)iVar5 << 2);
                    uStack_a0 = SUB84(puVar13,0);
                    uStack_9c = (uint)((ulonglong)puVar13 >> 0x20);
                    if (puVar13 != (undefined4 *)0x0) {
                      lVar9 = FUN_1802c87d0(*(undefined8 *)(puVar6 + 10),&local_c8);
                      puVar10 = puVar13;
                      while (lVar9 != 0) {
                        *puVar10 = **(undefined4 **)(local_c8 + 0x10);
                        lVar9 = FUN_1802c87d0(*(undefined8 *)(puVar6 + 10),&local_c8);
                        puVar10 = puVar10 + 1;
                      }
                    }
                  }
                  local_a8 = *(undefined4 *)(lVar7 + 0x28);
                  FUN_1802c6d90(3,0xffffffff,"Calling subscribe success for client %s",
                                *(undefined8 *)puVar1[3]);
                  (**(code **)(lVar7 + 8))(*(undefined8 *)(lVar7 + 0x30),&local_a8);
                  if (puVar13 != (undefined4 *)0x0) {
                    uVar12 = 0x90e;
                    goto LAB_1802d2d95;
                  }
                }
              }
              else if ((iVar5 == 1) && (0x7f < (int)**(uint **)(*plVar4 + 0x10))) {
                if (*(longlong *)(lVar7 + 0x20) != 0) {
                  uStack_98 = puVar6[4];
                  uStack_94 = puVar6[5];
                  uStack_90 = puVar6[6];
                  uStack_8c = puVar6[7];
                  uStack_a0 = *(undefined4 *)(lVar7 + 0x28);
                  local_88 = *(undefined8 *)(puVar6 + 8);
                  local_a8 = 0x4446514d;
                  uStack_a4 = 0;
                  uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
                  uStack_70 = uStack_70 & 0xffffffff00000000;
                  local_78 = (undefined4 *)0x0;
                  uStack_9c = **(uint **)(*plVar4 + 0x10);
                  FUN_1802c6d90(3,0xffffffff,"Calling subscribe failure for client %s",*puVar2);
                  (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x30),&local_a8);
                }
              }
              else if (*(longlong *)(lVar7 + 0x18) != 0) {
                uStack_9c = **(uint **)(*plVar4 + 0x10);
                uStack_80 = CONCAT44(uStack_80._4_4_,iVar5);
                if (1 < iVar5) {
                  local_d0 = 0;
                  puVar13 = (undefined4 *)
                            FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x8e1,
                                          (longlong)iVar5 << 2);
                  local_78 = puVar13;
                  if (puVar13 != (undefined4 *)0x0) {
                    lVar9 = FUN_1802c87d0(*(undefined8 *)(puVar6 + 10),&local_d0);
                    puVar10 = puVar13;
                    while (lVar9 != 0) {
                      *puVar10 = **(undefined4 **)(local_d0 + 0x10);
                      lVar9 = FUN_1802c87d0(*(undefined8 *)(puVar6 + 10),&local_d0);
                      puVar10 = puVar10 + 1;
                    }
                  }
                }
                uStack_98 = puVar6[4];
                uStack_94 = puVar6[5];
                uStack_90 = puVar6[6];
                uStack_8c = puVar6[7];
                local_88 = *(undefined8 *)(puVar6 + 8);
                uStack_a0 = *(undefined4 *)(lVar7 + 0x28);
                FUN_1802c6d90(3,0xffffffff,"Calling subscribe success for client %s",
                              *(undefined8 *)puVar1[3]);
                (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x30),&local_a8);
                if (puVar13 != (undefined4 *)0x0) {
                  uVar12 = 0x8eb;
LAB_1802d2d95:
                  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",uVar12,puVar13);
                }
              }
              FUN_1802d0290(lVar7);
            }
LAB_1802d2da9:
            FUN_1802dd060(puVar6,*(undefined8 *)(puVar1[3] + 0x30));
          }
          else if (uVar14 == 0xb) {
            local_d8 = 0;
            lVar7 = FUN_1802c87d0(puVar1[0x33],&local_d8);
            if (lVar7 != 0) {
LAB_1802d2df0:
              lVar7 = *(longlong *)(local_d8 + 0x10);
              if (*(uint *)(lVar7 + 0x28) != puVar6[1]) goto code_r0x0001802d2e08;
              iVar5 = FUN_1802c8320(puVar1[0x33],lVar7);
              if (iVar5 == 0) {
                FUN_1802c6d90(5,0xffffffff,"Unsubscribe command not removed from command list");
              }
              if ((*(longlong *)(lVar7 + 8) != 0) || (*(longlong *)(lVar7 + 0x18) != 0)) {
                FUN_1802c6d90(3,0xffffffff,"Calling unsubscribe success for client %s",
                              *(undefined8 *)puVar1[3]);
                if (*(code **)(lVar7 + 8) == (code *)0x0) {
                  plVar4 = *(longlong **)(puVar6 + 10);
                  uStack_98 = 0;
                  local_a8 = 0x4453514d;
                  uStack_a4 = 0;
                  uStack_a0 = 0;
                  uStack_94 = 0;
                  uStack_90 = 0;
                  local_88 = 0;
                  local_78 = (undefined4 *)0x0;
                  uStack_70 = 0;
                  uStack_68 = 0;
                  local_40 = 0;
                  uStack_60 = 0;
                  uStack_58 = 0;
                  local_50 = 0;
                  uStack_48 = 0;
                  uStack_9c = **(uint **)(*plVar4 + 0x10);
                  uStack_80 = CONCAT44((int)(uStack_80 >> 0x20),(int)plVar4[3]);
                  if (1 < (int)plVar4[3]) {
                    local_c0 = 0;
                    puVar13 = (undefined4 *)
                              FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x938,
                                            (longlong)(int)plVar4[3] << 2);
                    local_78 = puVar13;
                    if (puVar13 != (undefined4 *)0x0) {
                      lVar9 = FUN_1802c87d0(*(undefined8 *)(puVar6 + 10),&local_c0);
                      puVar10 = puVar13;
                      while (lVar9 != 0) {
                        *puVar10 = **(undefined4 **)(local_c0 + 0x10);
                        lVar9 = FUN_1802c87d0(*(undefined8 *)(puVar6 + 10),&local_c0);
                        puVar10 = puVar10 + 1;
                      }
                    }
                  }
                  uStack_98 = puVar6[4];
                  uStack_94 = puVar6[5];
                  uStack_90 = puVar6[6];
                  uStack_8c = puVar6[7];
                  local_88 = *(undefined8 *)(puVar6 + 8);
                  uStack_a0 = *(undefined4 *)(lVar7 + 0x28);
                  FUN_1802c6d90(3,0xffffffff,"Calling unsubscribe success for client %s",
                                *(undefined8 *)puVar1[3]);
                  (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x30),&local_a8);
                  if (puVar13 != (undefined4 *)0x0) {
                    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x942,puVar13);
                  }
                }
                else {
                  local_a8 = *(undefined4 *)(lVar7 + 0x28);
                  uStack_a4 = 0;
                  uStack_a0 = 0;
                  uStack_9c = 0;
                  uStack_98 = 0;
                  uStack_94 = 0;
                  uStack_90 = 0;
                  uStack_8c = 0;
                  local_88 = 0;
                  uStack_80 = 0;
                  local_78 = (undefined4 *)0x0;
                  uStack_70 = 0;
                  uStack_68 = 0;
                  uStack_60 = 0;
                  (**(code **)(lVar7 + 8))(*(undefined8 *)(lVar7 + 0x30),&local_a8);
                }
              }
              FUN_1802d0290(lVar7);
            }
LAB_1802d2fcc:
            FUN_1802dd110(puVar6,*(undefined8 *)(puVar1[3] + 0x30));
          }
          else if (uVar14 == 0xe) {
            uVar14 = puVar6[2];
            if (puVar1[0xc] != 0) {
              FUN_1802c6d90(3,0xffffffff,"Calling disconnected for client %s",
                            *(undefined8 *)puVar1[3]);
              (*(code *)puVar1[0xc])(puVar1[0xd],puVar6 + 4,(char)puVar6[2]);
            }
            local_e8[0] = FUN_1802dcf10(puVar6,*(undefined8 *)(puVar1[3] + 0x30));
            *(uint *)(puVar1[3] + 0x20) = *(uint *)(puVar1[3] + 0x20) & 0xfffffffb;
            FUN_1802d4c40(puVar1,(char)uVar14,"Received disconnect");
          }
          else {
            FUN_1802c6d90(5,0xffffffff,"An unexpected packet type %u has been received");
          }
        }
      }
      goto joined_r0x0001802d25c9;
    }
    FUN_1802c6d90(3,0xffffffff,"Could not find client corresponding to socket %d",local_e0);
  } while( true );
  lVar7 = FUN_1802c87d0(puVar1[0x33],&local_d8);
  if (lVar7 == 0) goto LAB_1802d2da9;
  goto LAB_1802d2aa0;
code_r0x0001802d2e08:
  lVar7 = FUN_1802c87d0(puVar1[0x33],&local_d8);
  if (lVar7 == 0) goto LAB_1802d2fcc;
  goto LAB_1802d2df0;
}



// ===== FUN_1802d3110 @ 1802d3110 (size 1324)

int * FUN_1802d3110(int *param_1,int param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  size_t sVar4;
  longlong lVar5;
  longlong lVar6;
  char *_Dest;
  void *_Dst;
  int *_Str;
  int *piVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int *local_res8;
  
  piVar2 = (int *)((longlong)param_1 + (longlong)param_2);
  local_res8 = param_1;
  FUN_1802c7f40("MQTTAsync_restoreCommand",0x1b6,3);
  if (param_2 == 0) {
    param_4 = (int *)0x0;
    goto LAB_1802d3614;
  }
  if (param_4 == (int *)0x0) {
    param_4 = (int *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1bf,0xa0);
    if (param_4 == (int *)0x0) goto LAB_1802d3614;
    memset(param_4,0,0xa0);
    param_4[0x25] = 1;
  }
  else {
    param_4[0x25] = 0;
  }
  _Str = local_res8;
  if (piVar2 < local_res8 + 2) {
LAB_1802d35ef:
    local_res8 = _Str;
    uVar8 = 0x25e;
  }
  else {
    *param_4 = *local_res8;
    param_4[10] = local_res8[1];
    _Str = local_res8 + 2;
    iVar10 = *param_4;
    if (iVar10 == 3) {
      local_res8 = _Str;
      sVar4 = strnlen((char *)_Str,(longlong)piVar2 - (longlong)_Str);
      lVar3 = sVar4 + 1;
      _Str = local_res8;
      if (lVar3 != (longlong)piVar2 - (longlong)local_res8) {
        if (param_4[0x25] == 0) {
          _Dest = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x232,lVar3);
          *(char **)(param_4 + 0x16) = _Dest;
          _Str = local_res8;
          if (_Dest == (char *)0x0) goto LAB_1802d35ef;
          strcpy(_Dest,(char *)local_res8);
        }
        _Str = (int *)((longlong)local_res8 + lVar3);
        if (_Str + 1 <= piVar2) {
          param_4[0x18] = *_Str;
          local_res8 = _Str + 1;
          sVar4 = (size_t)param_4[0x18];
          _Str = local_res8;
          if ((int *)(sVar4 + (longlong)local_res8) <= piVar2) {
            if (param_4[0x25] == 0) {
              _Dst = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x242,sVar4);
              *(void **)(param_4 + 0x1a) = _Dst;
              _Str = local_res8;
              if (_Dst == (void *)0x0) goto LAB_1802d35ef;
              memcpy(_Dst,local_res8,sVar4);
            }
            _Str = (int *)((longlong)local_res8 + sVar4);
            if (_Str + 2 <= piVar2) {
              param_4[0x1c] = *_Str;
              param_4[0x1d] = _Str[1];
              _Str = _Str + 2;
              goto LAB_1802d35ae;
            }
          }
        }
      }
      goto LAB_1802d35ef;
    }
    if (iVar10 != 8) {
      if (iVar10 == 10) {
        if (param_4[0x25] == 1) goto LAB_1802d35ae;
        if (local_res8 + 3 <= piVar2) {
          param_4[0x16] = *_Str;
          local_res8 = local_res8 + 3;
          if (0 < param_4[0x16]) {
            lVar3 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x219,
                                  (longlong)param_4[0x16] << 3);
            *(longlong *)(param_4 + 0x18) = lVar3;
            _Str = local_res8;
            if (lVar3 == 0) goto LAB_1802d35ef;
          }
          iVar10 = 0;
          _Str = local_res8;
          if (0 < param_4[0x16]) {
            lVar3 = 0;
            do {
              sVar4 = strnlen((char *)local_res8,(longlong)piVar2 - (longlong)local_res8);
              lVar9 = sVar4 + 1;
              _Str = local_res8;
              if (lVar9 == (longlong)piVar2 - (longlong)local_res8) goto LAB_1802d35ef;
              lVar5 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x224,lVar9);
              *(longlong *)(lVar3 + *(longlong *)(param_4 + 0x18)) = lVar5;
              _Str = local_res8;
              if (lVar5 == 0) goto LAB_1802d35ef;
              strcpy(*(char **)(lVar3 + *(longlong *)(param_4 + 0x18)),(char *)local_res8);
              iVar10 = iVar10 + 1;
              local_res8 = (int *)((longlong)local_res8 + lVar9);
              lVar3 = lVar3 + 8;
            } while (iVar10 < param_4[0x16]);
            _Str = local_res8;
          }
          goto LAB_1802d35ae;
        }
      }
      goto LAB_1802d35ef;
    }
    if (param_4[0x25] != 1) {
      if (local_res8 + 3 <= piVar2) {
        param_4[0x16] = *_Str;
        local_res8 = local_res8 + 3;
        if (param_4[0x16] < 1) goto LAB_1802d33a8;
        lVar3 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1dc,
                              (longlong)param_4[0x16] << 3);
        *(longlong *)(param_4 + 0x18) = lVar3;
        _Str = local_res8;
        if (lVar3 != 0) {
          lVar3 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1de,
                                (longlong)param_4[0x16] << 2);
          *(longlong *)(param_4 + 0x1a) = lVar3;
          _Str = local_res8;
          if (lVar3 != 0) {
            if ((4 < param_3) && (1 < param_4[0x16])) {
              lVar3 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1e5,
                                    (longlong)param_4[0x16] * 0xc);
              *(longlong *)(param_4 + 0x20) = lVar3;
              _Str = local_res8;
              if (lVar3 == 0) goto LAB_1802d35ef;
            }
LAB_1802d33a8:
            iVar10 = 0;
            _Str = local_res8;
            if (0 < param_4[0x16]) {
              lVar9 = 0;
              lVar5 = 0;
              lVar3 = 0;
              do {
                sVar4 = strnlen((char *)local_res8,(longlong)piVar2 - (longlong)local_res8);
                lVar1 = sVar4 + 1;
                _Str = local_res8;
                if (lVar1 == (longlong)piVar2 - (longlong)local_res8) goto LAB_1802d35ef;
                lVar6 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x1f2,lVar1);
                *(longlong *)(lVar3 + *(longlong *)(param_4 + 0x18)) = lVar6;
                _Str = local_res8;
                if (lVar6 == 0) goto LAB_1802d35ef;
                strcpy(*(char **)(lVar3 + *(longlong *)(param_4 + 0x18)),(char *)local_res8);
                piVar7 = (int *)((longlong)local_res8 + lVar1);
                _Str = piVar7;
                if (piVar2 < piVar7 + 1) goto LAB_1802d35ef;
                *(int *)(*(longlong *)(param_4 + 0x1a) + lVar5) = *piVar7;
                local_res8 = piVar7 + 1;
                if (4 < param_3) {
                  _Str = local_res8;
                  if (piVar2 < piVar7 + 4) goto LAB_1802d35ef;
                  if (param_4[0x16] == 1) {
                    *(undefined8 *)(param_4 + 0x1c) = *(undefined8 *)local_res8;
                    param_4[0x1e] = piVar7[3];
                  }
                  else {
                    lVar1 = *(longlong *)(param_4 + 0x20);
                    *(undefined8 *)(lVar1 + lVar9) = *(undefined8 *)local_res8;
                    *(int *)(lVar1 + 8 + lVar9) = piVar7[3];
                  }
                  local_res8 = piVar7 + 4;
                }
                iVar10 = iVar10 + 1;
                lVar3 = lVar3 + 8;
                lVar5 = lVar5 + 4;
                lVar9 = lVar9 + 0xc;
                _Str = local_res8;
              } while (iVar10 < param_4[0x16]);
            }
            goto LAB_1802d35ae;
          }
        }
      }
      goto LAB_1802d35ef;
    }
LAB_1802d35ae:
    local_res8 = _Str;
    if (((param_4[0x25] != 0) || (param_3 < 5)) ||
       (iVar10 = FUN_1802c1a20(param_4 + 0x10,&local_res8,piVar2), iVar10 == 1)) goto LAB_1802d3614;
    FUN_1802c6d90(5,0xffffffff,"Error restoring properties from persistence");
    uVar8 = 0x259;
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",uVar8,param_4);
  param_4 = (int *)0x0;
LAB_1802d3614:
  FUN_1802c8030("MQTTAsync_restoreCommand",0x261,0,3);
  return param_4;
}



// ===== FUN_1802d3640 @ 1802d3640 (size 752)

int FUN_1802d3640(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  size_t sVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18 [2];
  void *local_res20;
  longlong local_58 [3];
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  local_res8[0] = 0;
  iVar9 = 0;
  iVar8 = 0;
  FUN_1802c7f40("MQTTAsync_restoreCommands",0x278,3);
  if (puVar1[0x1e] != 0) {
    local_res8[0] = (**(code **)(puVar1[0x1e] + 0x30))(puVar1[0x1d],&local_res20,local_res10);
    if ((local_res8[0] == 0) && (0 < local_res10[0])) {
      qsort(local_res20,(longlong)local_res10[0],8,FUN_1802d4bd0);
      if (local_res8[0] == 0) {
        lVar7 = 0;
        do {
          if (local_res10[0] <= iVar9) break;
          local_58[0] = 0;
          iVar2 = strncmp(*(char **)(lVar7 + (longlong)local_res20),"c-",2);
          if (iVar2 == 0) {
LAB_1802d373c:
            local_res8[0] =
                 (**(code **)(puVar1[0x1e] + 0x20))
                           (puVar1[0x1d],*(undefined8 *)(lVar7 + (longlong)local_res20),local_58,
                            local_res18);
            if (local_res8[0] == 0) {
              if ((code *)puVar1[0x20] != (code *)0x0) {
                local_res8[0] = (*(code *)puVar1[0x20])(puVar1[0x22],local_58,local_res18);
                if (local_res8[0] != 0) goto LAB_1802d3872;
              }
              iVar2 = strncmp(*(char **)(lVar7 + (longlong)local_res20),"c5-",3);
              piVar4 = (int *)FUN_1802d3110(local_58[0],local_res18[0],5 - (uint)(iVar2 != 0),0);
              if (piVar4 != (int *)0x0) {
                sVar5 = strlen(*(char **)(lVar7 + (longlong)local_res20));
                pcVar6 = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x298,
                                               sVar5 + 1);
                *(char **)(piVar4 + 0x26) = pcVar6;
                strcpy(pcVar6,*(char **)(lVar7 + (longlong)local_res20));
                *(longlong *)(piVar4 + 0x22) = param_1;
                pcVar6 = strchr(*(char **)(lVar7 + (longlong)local_res20),0x2d);
                iVar2 = atoi(pcVar6 + 1);
                piVar4[0x24] = iVar2;
                FUN_1802c82a0(DAT_1803c9970,piVar4,0xa0);
                uVar3 = *(uint *)(param_1 + 0x1a0);
                if (*(uint *)(param_1 + 0x1a0) <= (uint)piVar4[0x24]) {
                  uVar3 = piVar4[0x24];
                }
                iVar8 = iVar8 + 1;
                *(uint *)(param_1 + 0x1a0) = uVar3;
                if (*piVar4 == 3) {
                  *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
                }
              }
            }
          }
          else {
            iVar2 = strncmp(*(char **)(lVar7 + (longlong)local_res20),"c5-",3);
            if (iVar2 == 0) goto LAB_1802d373c;
          }
LAB_1802d3872:
          if (local_58[0] != 0) {
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x2a6);
          }
          if (*(longlong *)(lVar7 + (longlong)local_res20) != 0) {
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x2a8);
          }
          iVar9 = iVar9 + 1;
          lVar7 = lVar7 + 8;
        } while (local_res8[0] == 0);
      }
      if (local_res20 != (void *)0x0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x2ac,local_res20);
      }
    }
  }
  FUN_1802c6d90(3,0xffffffff,"%d commands restored for client %s",iVar8,*puVar1);
  FUN_1802c8030("MQTTAsync_restoreCommands",0x2af,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d3930 @ 1802d3930 (size 362)

void FUN_1802d3930(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 10;
  FUN_1802c7f40("MQTTAsync_sendThread",0x731,3);
  FUN_1802cde00("MQTTAsync_send");
  FUN_1802d08a0(DAT_1803c9988);
  DAT_1803c9978 = 2;
  DAT_1803c9980 = GetCurrentThreadId();
  FUN_1802d3ee0(DAT_1803c9988);
  while (DAT_1803c9964 == 0) {
    FUN_1802d08a0(DAT_1803c9998);
    iVar1 = *(int *)(DAT_1803c9970 + 0x18);
    FUN_1802d3ee0(DAT_1803c9998);
    while ((0 < iVar1 && (iVar1 = FUN_1802d0e90(), iVar1 != 0))) {
      FUN_1802d08a0(DAT_1803c9998);
      iVar1 = *(int *)(DAT_1803c9970 + 0x18);
      FUN_1802d3ee0(DAT_1803c9998);
    }
    iVar1 = FUN_1802cde50(DAT_1803c99a0,uVar2);
    if ((iVar1 != 0) && (iVar1 != 0x274c)) {
      FUN_1802c6d90(5,0xffffffff,"Error %d waiting for semaphore",iVar1);
    }
    uVar2 = 1000;
    FUN_1802ce800();
  }
  DAT_1803c9978 = 3;
  FUN_1802d08a0(DAT_1803c9988);
  DAT_1803c9978 = 0;
  DAT_1803c9980 = 0;
  FUN_1802d3ee0(DAT_1803c9988);
  FUN_1801e4530();
  FUN_1802c8030("MQTTAsync_sendThread",0x75f,0,3);
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}



// ===== FUN_1802d3aa0 @ 1802d3aa0 (size 70)

void FUN_1802d3aa0(DWORD param_1)

{
  FUN_1802c7f40("MQTTAsync_sleep",0x6e,3);
  Sleep(param_1);
  FUN_1802c8030("MQTTAsync_sleep",0x74,0,3);
  return;
}



// ===== FUN_1802d3af0 @ 1802d3af0 (size 254)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d3af0(longlong param_1)

{
  int iVar1;
  int iVar2;
  ULONGLONG UVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x1c0) != 0) && (*(int *)(param_1 + 0x1b8) != 0)) {
    UVar3 = GetTickCount64();
    *(ULONGLONG *)(param_1 + 0x1e8) = UVar3;
    if (*(int *)(param_1 + 0x1f0) == 0) {
      *(undefined4 *)(param_1 + 0x1f0) = 1;
      iVar5 = *(int *)(param_1 + 0x1c4);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x1e0) * 2;
      if (*(int *)(param_1 + 0x1c8) <= iVar5) {
        iVar5 = *(int *)(param_1 + 0x1c8);
      }
    }
    *(int *)(param_1 + 0x1e0) = iVar5;
    iVar1 = iVar5;
    if (*(int *)(param_1 + 0x1c8) < iVar5) {
      iVar1 = *(int *)(param_1 + 0x1c8);
    }
    if (iVar5 < *(int *)(param_1 + 0x1c4)) {
      iVar5 = *(int *)(param_1 + 0x1c4);
    }
    iVar5 = (int)((double)iVar5 / _DAT_180384e78);
    if (iVar5 < (int)((double)iVar1 * _DAT_180384e78)) {
      iVar4 = ((int)((double)iVar1 * _DAT_180384e78) - iVar5) + 1;
      iVar1 = (int)(0x7fff / (longlong)iVar4);
      do {
        iVar2 = rand();
      } while (iVar1 * iVar4 <= iVar2);
      iVar5 = iVar5 + iVar2 / iVar1;
    }
    *(int *)(param_1 + 0x1dc) = iVar5;
  }
  return;
}



// ===== FUN_1802d3bf0 @ 1802d3bf0 (size 481)

void FUN_1802d3bf0(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  undefined4 local_res8 [2];
  longlong local_res10 [3];
  
  local_res8[0] = 0;
  FUN_1802c7f40("MQTTAsync_stop",0x982,3);
  if ((DAT_1803c9978 != 0) || (DAT_1803c997c != 0)) {
    iVar5 = 0;
    local_res10[0] = 0;
    if (DAT_1803c9968 != 0) {
      lVar3 = FUN_1802c87d0(DAT_1803c9968,local_res10);
      while (lVar3 != 0) {
        uVar1 = *(uint *)(*(longlong *)(*(longlong *)(local_res10[0] + 0x10) + 0x18) + 0x20);
        if ((0 < (int)((uVar1 & 0xffffffc0) << 0x16)) || ((uVar1 & 4) != 0)) {
          iVar5 = iVar5 + 1;
        }
        lVar3 = FUN_1802c87d0(DAT_1803c9968,local_res10);
      }
    }
    FUN_1802c6d90(3,0xffffffff,"Conn_count is %d",iVar5);
    if (iVar5 == 0) {
      DAT_1803c9964 = 1;
      iVar5 = 0;
      while ((((DAT_1803c9978 != 0 || (DAT_1803c997c != 0)) && (DAT_1803c9964 != 0)) &&
             (iVar5 = iVar5 + 1, iVar5 < 100))) {
        iVar2 = FUN_1802cdd70(DAT_1803c9988);
        if (iVar2 != 0) {
          pcVar4 = strerror(iVar2);
          FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar4);
        }
        FUN_1802c6d90(3,0xffffffff,"sleeping");
        FUN_1802c7f40("MQTTAsync_sleep",0x6e,3);
        Sleep(100);
        FUN_1802c8030("MQTTAsync_sleep",0x74,0,3);
        iVar2 = FUN_1802cdcf0(DAT_1803c9988);
        if (iVar2 != 0) {
          pcVar4 = strerror(iVar2);
          FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar4);
        }
      }
      local_res8[0] = 1;
      DAT_1803c9964 = 0;
    }
  }
  FUN_1802c8030("MQTTAsync_stop",0x9a5,local_res8,3);
  return;
}



// ===== FUN_1802d3de0 @ 1802d3de0 (size 242)

void FUN_1802d3de0(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  FUN_1802c7f40("MQTTAsync_terminate",0xce,3);
  FUN_1802d3bf0();
  if ((DAT_1803c9960 != 0) && (*(int *)(*(longlong *)(PTR_PTR_1803c33c8 + 8) + 0x18) == 0)) {
    local_res8[0] = 0;
    FUN_1802c85f0();
    FUN_1802c85f0(DAT_1803c9968);
    lVar1 = FUN_1802c87d0(DAT_1803c9970,local_res8);
    while (lVar1 != 0) {
      FUN_1802d02c0(*(undefined8 *)(local_res8[0] + 0x10));
      lVar1 = FUN_1802c87d0(DAT_1803c9970,local_res8);
    }
    FUN_1802c85f0(DAT_1803c9970);
    DAT_1803c9968 = 0;
    FUN_1802d9eb0();
    FUN_1802c77b0();
    FUN_1802c7670();
    DAT_1803c9960 = 0;
  }
  FUN_1802c8030("MQTTAsync_terminate",0xe2,0,3);
  return;
}



// ===== FUN_1802d3f20 @ 1802d3f20 (size 255)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1802d3f20(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  uint local_28 [2];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1803c3d80 ^ (ulonglong)auStack_58;
  FUN_1802c7f40("MQTTAsync_unpersistCommand",0xed,3);
  puVar4 = &DAT_180382f7c;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x18) + 0x120) < 5) {
    puVar4 = &DAT_180382f78;
  }
  local_38 = *(undefined4 *)(param_1 + 0x90);
  uVar2 = snprintf(local_20,0xb,&DAT_1803830b4,puVar4);
  if (uVar2 < 0xb) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0xf0) + 0x28))
                      (*(undefined8 *)(lVar1 + 0xe8),local_20);
    local_28[0] = uVar2;
    if (uVar2 == 0) goto LAB_1802d3fec;
    pcVar3 = "Error %d removing command from persistence";
  }
  else {
    local_28[0] = 0xfffffffe;
    pcVar3 = "Error writing %d chars with snprintf";
  }
  FUN_1802c6d90(5,0,pcVar3,uVar2);
LAB_1802d3fec:
  FUN_1802c8030("MQTTAsync_unpersistCommand",0xf9,local_28,3);
  return local_28[0];
}



// ===== FUN_1802d4020 @ 1802d4020 (size 468)

int FUN_1802d4020(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  
  iVar4 = 0;
  local_res8[0] = 0;
  iVar3 = 0;
  FUN_1802c7f40("MQTTAsync_unpersistCommandsAndMessages",700,3);
  if (param_1[0x1e] != 0) {
    local_res8[0] = (**(code **)(param_1[0x1e] + 0x30))(param_1[0x1d],&local_res18,local_res10);
    if (local_res8[0] == 0) {
      lVar2 = 0;
      do {
        if (local_res10[0] <= iVar4) break;
        iVar1 = strncmp(*(char **)(lVar2 + local_res18),"c-",2);
        if (iVar1 == 0) {
LAB_1802d4115:
          local_res8[0] =
               (**(code **)(param_1[0x1e] + 0x28))
                         (param_1[0x1d],*(undefined8 *)(lVar2 + local_res18));
          if (local_res8[0] == 0) {
            iVar3 = iVar3 + 1;
          }
          else {
            FUN_1802c6d90(5,0,"Error %d removing queued message from persistence",local_res8[0]);
          }
        }
        else {
          iVar1 = strncmp(*(char **)(lVar2 + local_res18),"c5-",3);
          if (iVar1 == 0) goto LAB_1802d4115;
          iVar1 = strncmp(*(char **)(lVar2 + local_res18),"q-",2);
          if (iVar1 == 0) goto LAB_1802d4115;
          iVar1 = strncmp(*(char **)(lVar2 + local_res18),"q5-",3);
          if (iVar1 == 0) goto LAB_1802d4115;
        }
        if (*(longlong *)(lVar2 + local_res18) != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x2cc);
        }
        iVar4 = iVar4 + 1;
        lVar2 = lVar2 + 8;
      } while (local_res8[0] == 0);
      if (local_res18 != 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x2d0,local_res18);
      }
    }
  }
  FUN_1802c6d90(3,0xffffffff,"%d queued messages deleted for client %s",iVar3,*param_1);
  FUN_1802c8030("MQTTAsync_unpersistCommandsAndMessages",0x2d3,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d4200 @ 1802d4200 (size 540)

int FUN_1802d4200(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  
  iVar4 = 0;
  local_res8[0] = 0;
  iVar3 = 0;
  FUN_1802c7f40("MQTTAsync_unpersistInflightMessages",0x2e0,3);
  if (param_1[0x1e] != 0) {
    local_res8[0] = (**(code **)(param_1[0x1e] + 0x30))(param_1[0x1d],&local_res18,local_res10);
    if (local_res8[0] == 0) {
      lVar2 = 0;
      do {
        if (local_res10[0] <= iVar4) break;
        iVar1 = strncmp(*(char **)(lVar2 + local_res18),"s-",2);
        if (iVar1 == 0) {
LAB_1802d433d:
          local_res8[0] =
               (**(code **)(param_1[0x1e] + 0x28))
                         (param_1[0x1d],*(undefined8 *)(lVar2 + local_res18));
          if (local_res8[0] == 0) {
            iVar3 = iVar3 + 1;
          }
          else {
            FUN_1802c6d90(5,0,"Error %d removing inflight message from persistence",local_res8[0]);
          }
        }
        else {
          iVar1 = strncmp(*(char **)(lVar2 + local_res18),"s5-",3);
          if (iVar1 == 0) goto LAB_1802d433d;
          iVar1 = strncmp(*(char **)(lVar2 + local_res18),"sc-",3);
          if (iVar1 == 0) goto LAB_1802d433d;
          iVar1 = strncmp(*(char **)(lVar2 + local_res18),"sc5-",4);
          if (iVar1 == 0) goto LAB_1802d433d;
          iVar1 = strncmp(*(char **)(lVar2 + local_res18),"r-",2);
          if (iVar1 == 0) goto LAB_1802d433d;
          iVar1 = strncmp(*(char **)(lVar2 + local_res18),"r5-",3);
          if (iVar1 == 0) goto LAB_1802d433d;
        }
        if (*(longlong *)(lVar2 + local_res18) != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x2f2);
        }
        iVar4 = iVar4 + 1;
        lVar2 = lVar2 + 8;
      } while (local_res8[0] == 0);
      if (local_res18 != 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x2f6,local_res18);
      }
    }
  }
  FUN_1802c6d90(3,0xffffffff,"%d inflight messages deleted for client %s",iVar3,*param_1);
  FUN_1802c8030("MQTTAsync_unpersistInflightMessages",0x2f9,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d4420 @ 1802d4420 (size 932)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d4420(undefined8 param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  int iStack_94;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_e8;
  local_c0 = param_1;
  FUN_1802c7f40("MQTTAsync_writeComplete",0x45a,3);
  iVar3 = FUN_1802cdcf0(DAT_1803c9988);
  if (iVar3 != 0) {
    pcVar4 = strerror(iVar3);
    FUN_1802c6d90(5,0,"Error %s locking mutex",pcVar4);
  }
  FUN_1802d4820();
  lVar5 = FUN_1802c8540(DAT_1803c9968,&local_c0,&LAB_1802d4b90);
  if (lVar5 == 0) goto LAB_1802d475f;
  lVar5 = *(longlong *)(lVar5 + 0x10);
  UVar6 = GetTickCount64();
  *(ULONGLONG *)(*(longlong *)(lVar5 + 0x18) + 0x38) = UVar6;
  piVar1 = *(int **)(lVar5 + 400);
  if (piVar1 == (int *)0x0) goto LAB_1802d475f;
  lVar8 = 0;
  local_c8 = 0;
  lVar7 = FUN_1802c87d0(*(undefined8 *)(lVar5 + 0x198),&local_c8);
  while ((lVar7 != 0 &&
         (lVar8 = *(longlong *)(local_c8 + 0x10), lVar8 != *(longlong *)(lVar5 + 400)))) {
    lVar7 = FUN_1802c87d0(*(undefined8 *)(lVar5 + 0x198),&local_c8);
  }
  if (local_c8 != 0) {
    if (*piVar1 == 3) {
      if (param_2 == 1) {
        if (piVar1[0x1c] != 0) goto LAB_1802d46f5;
        if (*(longlong *)(piVar1 + 2) == 0) {
          if (*(longlong *)(piVar1 + 6) != 0) {
            local_a0 = piVar1[10];
            local_88 = *(longlong *)(piVar1 + 0x14);
            local_40 = *(undefined8 *)(piVar1 + 0x16);
            local_70 = *(undefined8 *)(piVar1 + 0x1a);
            local_60 = 0;
            uStack_58 = 0;
            local_50 = 0;
            uStack_48 = 0;
            local_78 = (ulonglong)(uint)piVar1[0x18];
            local_98 = piVar1[0x10];
            iStack_94 = piVar1[0x11];
            uStack_90 = *(undefined8 *)(piVar1 + 0x12);
            local_a8 = 0x4453514d;
            local_9c = 0;
            local_80 = 0;
            lStack_68 = (ulonglong)(uint)piVar1[0x1d] << 0x20;
            FUN_1802c6d90(3,0xffffffff,"Calling publish success for client %s",
                          **(undefined8 **)(lVar5 + 0x18));
            (**(code **)(piVar1 + 6))(*(undefined8 *)(piVar1 + 0xc),&local_a8);
          }
        }
        else {
          uVar2 = (ulonglong)local_a8 >> 0x20;
          local_a8 = CONCAT44((int)uVar2,piVar1[10]);
          local_60 = *(undefined8 *)(piVar1 + 0x16);
          uStack_90 = *(undefined8 *)(piVar1 + 0x1a);
          local_98 = piVar1[0x18];
          local_88 = (ulonglong)(uint)piVar1[0x1d] << 0x20;
          FUN_1802c6d90(3,0xffffffff,"Calling publish success for client %s",
                        **(undefined8 **)(lVar5 + 0x18));
          (**(code **)(piVar1 + 2))(*(undefined8 *)(piVar1 + 0xc),&local_a8);
        }
      }
      else if (param_2 == -1) {
        if (*(longlong *)(piVar1 + 4) == 0) {
          if (*(longlong *)(piVar1 + 8) != 0) {
            local_a0 = piVar1[10];
            local_80 = 0xffffffff;
            local_78 = 0;
            uVar2 = (ulonglong)local_70 >> 0x20;
            local_70 = CONCAT44((int)uVar2,3);
            FUN_1802c6d90(3,0xffffffff,"Calling publish failure for client %s",
                          **(undefined8 **)(lVar5 + 0x18));
            (**(code **)(piVar1 + 8))(*(undefined8 *)(piVar1 + 0xc),&local_a8);
          }
        }
        else {
          local_b8 = piVar1[10];
          local_b0 = 0;
          local_b4 = param_2;
          FUN_1802c6d90(3,0xffffffff,"Calling publish failure for client %s",
                        **(undefined8 **)(lVar5 + 0x18));
          (**(code **)(piVar1 + 4))(*(undefined8 *)(piVar1 + 0xc),&local_b8);
        }
      }
      else {
LAB_1802d46f5:
        lVar8 = 0;
      }
      if (piVar1[0x1c] == 0) {
        piVar1[0x1a] = 0;
        piVar1[0x1b] = 0;
      }
    }
    if (lVar8 != 0) {
      FUN_1802c6d90(4,0xffffffff,"writeComplete: Removing response for msgid %d",
                    *(undefined4 *)(lVar8 + 0x28));
      FUN_1802c8320(*(undefined8 *)(lVar5 + 0x198),lVar8);
      FUN_1802d0290(lVar8);
    }
  }
  *(undefined8 *)(lVar5 + 400) = 0;
LAB_1802d475f:
  iVar3 = FUN_1802cdd70(DAT_1803c9988);
  if (iVar3 != 0) {
    pcVar4 = strerror(iVar3);
    FUN_1802c6d90(5,0,"Error %s unlocking mutex",pcVar4);
  }
  FUN_1802c8030("MQTTAsync_writeComplete",0x4c3,0,3);
  return;
}



// ===== FUN_1802d47d0 @ 1802d47d0 (size 70)

void FUN_1802d47d0(undefined8 param_1)

{
  longlong lVar1;
  ULONGLONG UVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  lVar1 = FUN_1802c8540(DAT_1803c9968,local_res8,&LAB_1802d4b90);
  if (lVar1 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x18);
    UVar2 = GetTickCount64();
    *(ULONGLONG *)(lVar1 + 0x38) = UVar2;
  }
  return;
}



// ===== FUN_1802d4820 @ 1802d4820 (size 197)

void FUN_1802d4820(void)

{
  int iVar1;
  longlong local_res8 [4];
  
  FUN_1802c7f40("MQTTProtocol_checkPendingWrites",0x405,3);
  if (0 < DAT_180447a48) {
    local_res8[0] = DAT_180447a30;
    while (local_res8[0] != 0) {
      iVar1 = FUN_1802ca120(**(undefined8 **)(local_res8[0] + 0x10));
      if (iVar1 == 0) {
        FUN_1802c87d0(&DAT_180447a30,local_res8);
      }
      else {
        FUN_1802d6990(*(undefined8 *)(*(longlong *)(local_res8[0] + 0x10) + 8));
        DAT_180447a40 = local_res8[0];
        FUN_1802c87f0(&DAT_180447a30,*(undefined8 *)(local_res8[0] + 0x10));
        local_res8[0] = DAT_180447a40;
      }
    }
  }
  FUN_1802c8030("MQTTProtocol_checkPendingWrites",0x416,0,3);
  return;
}



// ===== FUN_1802d4910 @ 1802d4910 (size 640)

void FUN_1802d4910(uint *param_1,longlong param_2,int param_3)

{
  char *_Str;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  void *_Dst;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  size_t sVar9;
  uint uVar10;
  undefined1 local_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0x4d54514d;
  uStack_54 = 1;
  uStack_50 = 0;
  FUN_1802c7f40("Protocol_processPublication",0xa5b,3);
  puVar5 = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0xa5c,0x40);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = CONCAT44(uStack_54,local_58);
    puVar5[1] = CONCAT44(uStack_4c,uStack_50);
    *(undefined4 *)(puVar5 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_48._4_4_;
    *(undefined4 *)(puVar5 + 3) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_40._4_4_;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = local_28;
    *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_24;
    *(undefined4 *)(puVar5 + 7) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_20._4_4_;
    if (param_3 == 0) {
      puVar5[2] = *(undefined8 *)(param_1 + 6);
    }
    else {
      _Dst = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0xa62,
                                   (longlong)(int)param_1[8]);
      puVar5[2] = _Dst;
      if (_Dst == (void *)0x0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0xa64,puVar5);
        goto LAB_1802d4b50;
      }
      memcpy(_Dst,*(void **)(param_1 + 6),(longlong)(int)param_1[8]);
    }
    *(uint *)(puVar5 + 1) = param_1[8];
    *(uint *)(puVar5 + 3) = *param_1 >> 1 & 3;
    *(uint *)((longlong)puVar5 + 0x1c) = *param_1 & 1;
    uVar10 = *param_1 >> 3 & 1;
    if (((byte)*param_1 & 6) == 4) {
      uVar10 = 0;
    }
    *(uint *)(puVar5 + 4) = uVar10;
    *(uint *)((longlong)puVar5 + 0x24) = param_1[5];
    if (4 < (int)param_1[9]) {
      puVar6 = (undefined4 *)FUN_1802c1480(local_78,param_1 + 10);
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *(undefined4 *)(puVar5 + 5) = *puVar6;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar1;
      *(undefined4 *)(puVar5 + 6) = uVar2;
      *(undefined4 *)((longlong)puVar5 + 0x34) = uVar3;
      puVar5[7] = *(undefined8 *)(puVar6 + 4);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0xd0) + 0x18) == 0) &&
       ((*(byte *)(param_2 + 0x20) & 4) != 0)) {
      lVar7 = FUN_1802c8540(DAT_1803c9968,param_2,&LAB_1802d4bb0);
      if (lVar7 == 0) {
        FUN_1802c6d90(5,0xffffffff,
                      "processPublication: did not find client structure in handles list");
      }
      else {
        lVar7 = *(longlong *)(lVar7 + 0x10);
        if (*(longlong *)(lVar7 + 0x28) == 0) {
          FUN_1802c6d90(5,0xffffffff,
                        "Message arrived for client %s but can\'t deliver it. No messageArrived callback"
                        ,**(undefined8 **)(lVar7 + 0x18));
        }
        else {
          iVar4 = FUN_1802cffc0(lVar7,*(undefined8 *)(param_1 + 2),(longlong)(int)param_1[4],puVar5)
          ;
          if (iVar4 != 0) goto LAB_1802d4b50;
        }
      }
    }
    puVar8 = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0xa8a,0x18);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = puVar5;
      _Str = *(char **)(param_1 + 2);
      puVar8[1] = _Str;
      *(uint *)(puVar8 + 2) = param_1[4];
      sVar9 = strlen(_Str);
      FUN_1802c82a0(*(undefined8 *)(param_2 + 0xd0),puVar8,
                    sVar9 + 0x11 + (longlong)*(int *)(puVar5 + 1));
      if (*(longlong *)(param_2 + 0xf0) != 0) {
        FUN_1802cab50(param_2,puVar8);
      }
    }
  }
LAB_1802d4b50:
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1802c8030("Protocol_processPublication",0xa99,0,3);
  return;
}



// ===== FUN_1802d4bd0 @ 1802d4bd0 (size 102)

undefined8 FUN_1802d4bd0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = strchr((char *)*param_1,0x2d);
  iVar1 = atoi(pcVar3 + 1);
  pcVar3 = strchr((char *)*param_2,0x2d);
  iVar2 = atoi(pcVar3 + 1);
  if (iVar1 == iVar2) {
    return 0;
  }
  uVar4 = 1;
  if (iVar1 < iVar2) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// ===== FUN_1802d4c40 @ 1802d4c40 (size 790)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d4c40(longlong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *_Dst;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  uint local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  ulonglong local_7c;
  undefined8 local_74;
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_b8;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x20);
  bVar6 = false;
  FUN_1802c7f40("nextOrClose",0x674,3);
  iVar7 = FUN_1802ce5c0((undefined8 *)(param_1 + 0x80),param_1,uVar1 >> 2 & 1);
  if (iVar7 != 0) {
    FUN_1802ceec0(*(undefined8 *)(param_1 + 0x18),0,0);
    bVar6 = false;
    if ((*(longlong *)(param_1 + 0x20) != 0) && ((uVar1 & 4) != 0)) {
      FUN_1802c6d90(3,0xffffffff,"Calling connectionLost for client %s",
                    **(undefined8 **)(param_1 + 0x18));
      (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x38),0);
      bVar6 = true;
    }
    _Dst = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTAsyncUtils.c",0x683,0xa0);
    if (_Dst == (undefined8 *)0x0) goto LAB_1802d4f14;
    memset(_Dst,0,0xa0);
    _Dst[0x11] = param_1;
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *_Dst = *(undefined8 *)(param_1 + 0x80);
    _Dst[1] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    _Dst[2] = *(undefined8 *)(param_1 + 0x90);
    _Dst[3] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    _Dst[4] = *(undefined8 *)(param_1 + 0xa0);
    _Dst[5] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    _Dst[6] = *(undefined8 *)(param_1 + 0xb0);
    _Dst[7] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 200);
    _Dst[8] = *(undefined8 *)(param_1 + 0xc0);
    _Dst[9] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    _Dst[10] = *(undefined8 *)(param_1 + 0xd0);
    _Dst[0xb] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    _Dst[0xc] = *(undefined8 *)(param_1 + 0xe0);
    _Dst[0xd] = uVar5;
    uVar2 = *(undefined4 *)(param_1 + 0xf4);
    uVar3 = *(undefined4 *)(param_1 + 0xf8);
    uVar4 = *(undefined4 *)(param_1 + 0xfc);
    *(undefined4 *)(_Dst + 0xe) = *(undefined4 *)(param_1 + 0xf0);
    *(undefined4 *)((longlong)_Dst + 0x74) = uVar2;
    *(undefined4 *)(_Dst + 0xf) = uVar3;
    *(undefined4 *)((longlong)_Dst + 0x7c) = uVar4;
    _Dst[0x10] = *(undefined8 *)(param_1 + 0x100);
    FUN_1802c6d90(3,0xffffffff,"Connect failed, more to try");
    if (*(int *)(*(longlong *)(_Dst[0x11] + 0x18) + 0x120) == 0) {
      if (((uVar1 & 4) == 0) || (*(int *)((longlong)_Dst + 0x5c) == 3)) {
        *(undefined4 *)((longlong)_Dst + 0x5c) = 0;
        goto LAB_1802d4dcb;
      }
    }
    else {
LAB_1802d4dcb:
      *(int *)(_Dst + 0xb) = *(int *)(_Dst + 0xb) + 1;
    }
    iVar7 = FUN_1802cdf70(_Dst,0x88);
    if (iVar7 == 0) goto LAB_1802d4f14;
  }
  FUN_1802cf000(*(undefined8 *)(param_1 + 0x18),0,0);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      local_88 = 0x4446514d;
      local_84 = 0;
      local_7c = 0;
      local_74 = 0;
      local_68 = 0;
      local_50 = 0;
      if ((int)param_2 < 1) {
        local_60 = param_2;
      }
      else {
        local_7c = (ulonglong)param_2;
        local_60 = 0xffffffff;
      }
      local_58 = param_3;
      FUN_1802c6d90(3,0xffffffff,"Calling connect failure for client %s",
                    **(undefined8 **)(param_1 + 0x18));
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0xb0),&local_88);
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
  }
  else {
    local_98 = 0;
    local_94 = param_2;
    local_90 = param_3;
    FUN_1802c6d90(3,0xffffffff,"Calling connect failure for client %s",
                  **(undefined8 **)(param_1 + 0x18));
    (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0xb0),&local_98);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (((!bVar6) && (*(longlong *)(param_1 + 0x20) != 0)) && ((uVar1 & 4) != 0)) {
    FUN_1802c6d90(3,0xffffffff,"Calling connectionLost for client %s",
                  **(undefined8 **)(param_1 + 0x18));
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x38),0);
  }
  FUN_1802d3af0(param_1);
LAB_1802d4f14:
  FUN_1802c8030("nextOrClose",0x6c7,0,3);
  return;
}



// ===== FUN_1802d4f90 @ 1802d4f90 (size 180)

byte * FUN_1802d4f90(int param_1,byte *param_2)

{
  byte bVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0xf0) == 0xf0) {
        uVar6 = 4;
      }
      else {
        uVar6 = 2;
        if ((bVar1 & 0xe0) == 0xe0) {
          uVar6 = 3;
        }
      }
    }
    else {
      uVar6 = 1;
    }
    if ((int)uVar6 <= param_1) {
      pcVar5 = &DAT_1803c3b85;
      uVar4 = 0;
      do {
        if (*(uint *)(pcVar5 + -5) == uVar6) {
          lVar3 = 0;
          if (uVar6 == 0) {
LAB_1802d501a:
            return param_2 + uVar6;
          }
          pcVar2 = pcVar5;
          while ((pcVar2[-1] <= (char)param_2[lVar3] && ((char)param_2[lVar3] <= *pcVar2))) {
            lVar3 = lVar3 + 1;
            pcVar2 = pcVar2 + 2;
            if ((longlong)(ulonglong)uVar6 <= lVar3) goto LAB_1802d501a;
          }
        }
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 0xc;
        if (8 < uVar4) {
          return (byte *)0x0;
        }
      } while( true );
    }
  }
  return (byte *)0x0;
}



// ===== FUN_1802d5050 @ 1802d5050 (size 244)

uint FUN_1802d5050(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  uint local_res8 [2];
  uint local_res10 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("UTF8_validateString",0xa0,3);
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    FUN_1802c7f40("UTF8_validate",0x86,3);
    iVar3 = (int)sVar1;
    if (iVar3 == 0) {
      local_res10[0] = 1;
    }
    else {
      pcVar2 = (char *)FUN_1802d4f90(sVar1 & 0xffffffff,param_1);
      bVar4 = pcVar2 == (char *)0x0;
      if (!bVar4) {
        do {
          if (param_1 + iVar3 <= pcVar2) break;
          pcVar2 = (char *)FUN_1802d4f90(((int)param_1 - (int)pcVar2) + iVar3,pcVar2);
        } while (pcVar2 != (char *)0x0);
        bVar4 = pcVar2 == (char *)0x0;
      }
      local_res10[0] = (uint)!bVar4;
    }
    FUN_1802c8030("UTF8_validate",0x92,local_res10,3);
    local_res8[0] = local_res10[0];
  }
  FUN_1802c8030("UTF8_validateString",0xa5,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d5150 @ 1802d5150 (size 414)

int * FUN_1802d5150(longlong param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ULONGLONG UVar7;
  int local_28 [2];
  undefined1 local_20 [24];
  
  piVar4 = (int *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0xd0,0x40);
  FUN_1802c7f40("MQTTProtocol_createMessage",0xd2,3);
  if (piVar4 != (int *)0x0) {
    piVar4[0xf] = 0x40;
    if ((*param_2 == 0) || (lVar5 = *(longlong *)(*param_2 + 0x28), lVar5 == 0)) {
      *param_2 = (longlong)piVar4;
      lVar5 = FUN_1802d7100(param_1,local_28);
      *(longlong *)(piVar4 + 10) = lVar5;
      if (lVar5 == 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0xdc,piVar4);
        goto LAB_1802d52b6;
      }
      piVar4[0xf] = piVar4[0xf] + local_28[0];
      if (param_5 != 0) {
        _Src = *(void **)(lVar5 + 0x10);
        lVar5 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0xe4,
                              (longlong)*(int *)(lVar5 + 0x18));
        *(longlong *)(*(longlong *)(piVar4 + 10) + 0x10) = lVar5;
        if (lVar5 == 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0xe6,piVar4);
          goto LAB_1802d52b6;
        }
        memcpy(*(void **)(*(longlong *)(piVar4 + 10) + 0x10),_Src,
               (longlong)*(int *)(*(longlong *)(piVar4 + 10) + 0x18));
      }
    }
    else {
      piVar1 = (int *)(lVar5 + 0x1c);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(*param_2 + 0x28);
    }
    piVar4[2] = *(int *)(param_1 + 0x14);
    *piVar4 = param_3;
    piVar4[1] = param_4;
    iVar2 = *(int *)(param_1 + 0x24);
    piVar4[3] = iVar2;
    if (4 < iVar2) {
      puVar6 = (undefined8 *)FUN_1802c1480(local_20,param_1 + 0x28);
      uVar3 = puVar6[1];
      *(undefined8 *)(piVar4 + 4) = *puVar6;
      *(undefined8 *)(piVar4 + 6) = uVar3;
      *(undefined8 *)(piVar4 + 8) = puVar6[2];
    }
    UVar7 = GetTickCount64();
    *(ULONGLONG *)(piVar4 + 0xc) = UVar7;
    if (param_3 == 2) {
      *(undefined1 *)(piVar4 + 0xe) = 5;
    }
  }
LAB_1802d52b6:
  FUN_1802c8030("MQTTProtocol_createMessage",0xfb,0,3);
  return piVar4;
}



// ===== FUN_1802d52f0 @ 1802d52f0 (size 314)

void FUN_1802d52f0(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_res18 [2];
  
  local_res18[0] = 0;
  FUN_1802c7f40("MQTTProtocol_emptyMessageList",0x3f6,3);
  lVar3 = FUN_1802c87d0(param_1,local_res18);
  while (lVar3 != 0) {
    lVar3 = *(longlong *)(local_res18[0] + 0x10);
    plVar2 = *(longlong **)(lVar3 + 0x28);
    FUN_1802c7f40("MQTTProtocol_removePublication",0x129,3);
    if (plVar2 != (longlong *)0x0) {
      piVar1 = (int *)((longlong)plVar2 + 0x1c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (plVar2[2] != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x12e);
          plVar2[2] = 0;
        }
        if (*plVar2 != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x133);
          *plVar2 = 0;
        }
        FUN_1802c87f0(&DAT_180447a00,plVar2);
      }
    }
    FUN_1802c8030("MQTTProtocol_removePublication",0x138,0,3);
    if (4 < *(int *)(lVar3 + 0xc)) {
      FUN_1802c1750(lVar3 + 0x10);
    }
    lVar3 = FUN_1802c87d0(param_1,local_res18);
  }
  FUN_1802c8470(param_1);
  FUN_1802c8030("MQTTProtocol_emptyMessageList",0x3ff,0,3);
  return;
}



// ===== FUN_1802d5430 @ 1802d5430 (size 682)

void FUN_1802d5430(undefined8 *param_1)

{
  FUN_1802c7f40("MQTTProtocol_freeClient",0x3b3,3);
  FUN_1802d56e0(param_1[0x18]);
  FUN_1802d56e0(param_1[0x17]);
  FUN_1802c85f0(param_1[0x1a]);
  FUN_1802c85f0(param_1[0x1b]);
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3b9,*param_1);
  *param_1 = 0;
  if (param_1[0x16] != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3bd,
                  *(undefined8 *)(param_1[0x16] + 0x10));
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3be,*(undefined8 *)param_1[0x16]);
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3bf,param_1[0x16]);
    param_1[0x16] = 0;
  }
  if (param_1[1] != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3c3);
  }
  if (param_1[3] != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3c5);
  }
  if (param_1[0x25] != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3c7);
  }
  if (param_1[0x26] != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3c9);
  }
  if (param_1[0xf] != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3cb);
  }
  if (param_1[0xd] != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3ce);
  }
  if (param_1[0x27] != 0) {
    if (*(longlong *)(param_1[0x27] + 8) != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3d2);
    }
    if (*(longlong *)(param_1[0x27] + 0x10) != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3d4);
    }
    if (*(longlong *)(param_1[0x27] + 0x18) != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3d6);
    }
    if (*(longlong *)(param_1[0x27] + 0x20) != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3d8);
    }
    if (*(longlong *)(param_1[0x27] + 0x28) != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3da);
    }
    if ((1 < *(int *)(param_1[0x27] + 4)) && (*(longlong *)(param_1[0x27] + 0x40) != 0)) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3de);
    }
    if ((4 < *(int *)(param_1[0x27] + 4)) && (*(longlong *)(param_1[0x27] + 0x70) != 0)) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3e3);
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x3e5,param_1[0x27]);
    param_1[0x27] = 0;
  }
  FUN_1802c8030("MQTTProtocol_freeClient",0x3ea,0,3);
  return;
}



// ===== FUN_1802d56e0 @ 1802d56e0 (size 363)

void FUN_1802d56e0(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_res18 [2];
  
  FUN_1802c7f40("MQTTProtocol_freeMessageList",0x409,3);
  local_res18[0] = 0;
  FUN_1802c7f40("MQTTProtocol_emptyMessageList",0x3f6,3);
  lVar3 = FUN_1802c87d0(param_1,local_res18);
  while (lVar3 != 0) {
    lVar3 = *(longlong *)(local_res18[0] + 0x10);
    plVar2 = *(longlong **)(lVar3 + 0x28);
    FUN_1802c7f40("MQTTProtocol_removePublication",0x129,3);
    if (plVar2 != (longlong *)0x0) {
      piVar1 = (int *)((longlong)plVar2 + 0x1c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (plVar2[2] != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x12e);
          plVar2[2] = 0;
        }
        if (*plVar2 != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x133);
          *plVar2 = 0;
        }
        FUN_1802c87f0(&DAT_180447a00,plVar2);
      }
    }
    FUN_1802c8030("MQTTProtocol_removePublication",0x138,0,3);
    if (4 < *(int *)(lVar3 + 0xc)) {
      FUN_1802c1750(lVar3 + 0x10);
    }
    lVar3 = FUN_1802c87d0(param_1,local_res18);
  }
  FUN_1802c8470(param_1);
  FUN_1802c8030("MQTTProtocol_emptyMessageList",0x3ff,0,3);
  FUN_1802c85f0(param_1);
  FUN_1802c8030("MQTTProtocol_freeMessageList",0x40c,0,3);
  return;
}



// ===== FUN_1802d5850 @ 1802d5850 (size 478)

undefined4 FUN_1802d5850(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res8[0] = 0;
  local_res10 = param_2;
  FUN_1802c7f40("MQTTProtocol_handlePubacks",0x1c7,3);
  lVar3 = FUN_1802c8540(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),&local_res10,&LAB_1802db850);
  puVar1 = *(undefined8 **)(lVar3 + 0x10);
  FUN_1802c6d90(4,0xe,0,local_res10,*puVar1,*(undefined4 *)(param_1 + 4));
  lVar3 = FUN_1802c8540(puVar1[0x18],param_1 + 4,&LAB_1802d7670);
  if (lVar3 == 0) {
    FUN_1802c6d90(3,3,0,"PUBACK",*puVar1,*(undefined4 *)(param_1 + 4));
  }
  else {
    piVar2 = *(int **)(*(longlong *)(puVar1[0x18] + 0x10) + 0x10);
    if (*piVar2 == 1) {
      FUN_1802c6d90(3,6,0,"PUBACK",*puVar1,*(undefined4 *)(param_1 + 4));
      puVar4 = &DAT_180382f94;
      if (4 < piVar2[3]) {
        puVar4 = &DAT_180382f90;
      }
      local_res8[0] = FUN_1802cb270(puVar1,puVar4,*piVar2,*(undefined4 *)(param_1 + 4));
      if (param_3 == (undefined8 *)0x0) {
        FUN_1802d6990();
      }
      else {
        *param_3 = *(undefined8 *)(piVar2 + 10);
      }
      if (4 < piVar2[3]) {
        FUN_1802c1750(piVar2 + 4);
      }
      FUN_1802c87f0(puVar1[0x18],piVar2);
    }
    else {
      FUN_1802c6d90(3,4,0,"PUBACK",*puVar1,*(undefined4 *)(param_1 + 4),*piVar2);
    }
  }
  if (4 < *(int *)(param_1 + 0xc)) {
    FUN_1802c1750(param_1 + 0x10);
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x1e6,param_1);
  FUN_1802c8030("MQTTProtocol_handlePubacks",0x1e7,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d5a30 @ 1802d5a30 (size 564)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1802d5a30(byte *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined *puVar4;
  int local_res8 [2];
  undefined8 local_res10;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 uVar7;
  
  local_res8[0] = 0;
  local_res10 = param_2;
  FUN_1802c7f40("MQTTProtocol_handlePubcomps",0x295,3);
  lVar3 = FUN_1802c8540(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),&local_res10,&LAB_1802db850);
  puVar1 = *(undefined8 **)(lVar3 + 0x10);
  FUN_1802c6d90(4,0x13,0,local_res10,*puVar1,*(undefined4 *)(param_1 + 4));
  lVar3 = FUN_1802c8540(puVar1[0x18],param_1 + 4,&LAB_1802d7670);
  if (lVar3 == 0) {
    if ((*param_1 & 8) == 0) {
      FUN_1802c6d90(3,3,0,"PUBCOMP",*puVar1,*(undefined4 *)(param_1 + 4));
    }
  }
  else {
    piVar2 = *(int **)(*(longlong *)(puVar1[0x18] + 0x10) + 0x10);
    if (*piVar2 == 2) {
      uVar5 = *puVar1;
      uVar7 = *(undefined4 *)(param_1 + 4);
      if ((char)piVar2[0xe] == '\a') {
        FUN_1802c6d90(3,6,0,"PUBCOMP",uVar5,uVar7);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        puVar4 = &DAT_180382f94;
        if (4 < piVar2[3]) {
          puVar4 = &DAT_180382f90;
        }
        local_res8[0] = FUN_1802cb270(puVar1,puVar4,*piVar2,*(undefined4 *)(param_1 + 4));
        if (local_res8[0] != 0) {
          FUN_1802c6d90(5,0xffffffff,
                        "Error removing PUBCOMP for client id %s msgid %d from persistence",*puVar1,
                        CONCAT44(uVar6,*(undefined4 *)(param_1 + 4)),uVar7);
        }
        if (param_3 == (undefined8 *)0x0) {
          FUN_1802d6990();
        }
        else {
          *param_3 = *(undefined8 *)(piVar2 + 10);
        }
        if (4 < piVar2[3]) {
          FUN_1802c1750(piVar2 + 4);
        }
        FUN_1802c87f0(puVar1[0x18],piVar2);
        _DAT_180447a2c = _DAT_180447a2c + 1;
      }
      else {
        FUN_1802c6d90(3,5,0,"PUBCOMP",uVar5,uVar7);
      }
    }
    else {
      FUN_1802c6d90(3,4,0,"PUBCOMP",*puVar1,*(undefined4 *)(param_1 + 4),*piVar2);
    }
  }
  if (4 < *(int *)(param_1 + 0xc)) {
    FUN_1802c1750(param_1 + 0x10);
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x2bf,param_1);
  FUN_1802c8030("MQTTProtocol_handlePubcomps",0x2c0,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d5c70 @ 1802d5c70 (size 1012)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1802d5c70(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *_Src;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  uint local_100;
  uint local_f8;
  uint local_f0;
  uint local_e8;
  undefined4 local_e0;
  undefined1 *local_d8;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_c0;
  uint local_b8 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined8 local_80;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_128;
  local_c8 = 0;
  local_c0 = param_2;
  FUN_1802c7f40("MQTTProtocol_handlePublishes",0x14b,3);
  lVar9 = FUN_1802c8540(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),&local_c0,&LAB_1802db850);
  puVar2 = *(undefined8 **)(lVar9 + 0x10);
  uVar11 = *puVar2;
  local_e0 = FUN_1802c5890(0x1e,local_68,param_1[8],*(undefined8 *)(param_1 + 6));
  local_d8 = local_68;
  local_f0 = *param_1 & 1;
  local_e8 = param_1[8];
  local_100 = param_1[5];
  local_f8 = *param_1 >> 1 & 3;
  local_108 = uVar11;
  FUN_1802c6d90(4,0xb,0,local_c0);
  if ((*param_1 & 6) == 0) {
    FUN_1802d4910(param_1,puVar2,1);
    goto LAB_1802d6024;
  }
  iVar8 = FUN_1802ca120(local_c0);
  if ((*param_1 & 6) == 2) {
    FUN_1802d4910(param_1,puVar2,1);
    if (iVar8 == 0) {
      local_c8 = FUN_1802d68e0(puVar2,4,param_1[5]);
    }
    else {
      local_c8 = FUN_1802c6040(param_1[9],param_1[5],puVar2 + 6,*puVar2);
    }
    goto LAB_1802d6024;
  }
  if ((*param_1 & 6) != 4) goto LAB_1802d6024;
  bVar7 = false;
  puVar10 = (uint *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x175,0x40);
  if (puVar10 == (uint *)0x0) {
LAB_1802d6004:
    local_c8 = 0xffffff9d;
  }
  else {
    uVar11 = FUN_1802d7100(param_1,&local_c4);
    *(undefined8 *)(puVar10 + 10) = uVar11;
    puVar10[2] = param_1[5];
    *puVar10 = *param_1 >> 1 & 3;
    puVar10[1] = *param_1 & 1;
    uVar1 = param_1[9];
    puVar10[3] = uVar1;
    if (4 < (int)uVar1) {
      puVar12 = (uint *)FUN_1802c1480(local_68,param_1 + 10);
      uVar1 = puVar12[1];
      uVar5 = puVar12[2];
      uVar6 = puVar12[3];
      puVar10[4] = *puVar12;
      puVar10[5] = uVar1;
      puVar10[6] = uVar5;
      puVar10[7] = uVar6;
      *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(puVar12 + 4);
    }
    *(undefined1 *)(puVar10 + 0xe) = 6;
    lVar9 = FUN_1802c8540(puVar2[0x17],puVar10 + 2,&LAB_1802d7670);
    if (lVar9 == 0) {
      FUN_1802c82a0(puVar2[0x17],puVar10,(longlong)local_c4 + 0x40);
    }
    else {
      lVar3 = *(longlong *)(lVar9 + 0x10);
      FUN_1802d6990(*(undefined8 *)(lVar3 + 0x28));
      if (4 < *(int *)(lVar3 + 0xc)) {
        FUN_1802c1750(lVar3 + 0x10);
      }
      FUN_1802c8720(puVar2[0x17],puVar10,(longlong)local_c4 + 0x40,lVar9);
      FUN_1802c87f0(puVar2[0x17],lVar3);
      bVar7 = true;
    }
    if (((int)puVar10[3] < 5) || (bVar7)) {
      _Src = *(void **)(*(longlong *)(puVar10 + 10) + 0x10);
      lVar9 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x1a8,
                            (longlong)*(int *)(*(longlong *)(puVar10 + 10) + 0x18));
      *(longlong *)(*(longlong *)(puVar10 + 10) + 0x10) = lVar9;
      if (lVar9 == 0) goto LAB_1802d6004;
      memcpy(*(void **)(*(longlong *)(puVar10 + 10) + 0x10),_Src,
             (longlong)*(int *)(*(longlong *)(puVar10 + 10) + 0x18));
    }
    else {
      local_90 = puVar10[4];
      uStack_8c = puVar10[5];
      uStack_88 = puVar10[6];
      uStack_84 = puVar10[7];
      local_80 = *(undefined8 *)(puVar10 + 8);
      local_b8[0] = (*puVar10 & 3) * 2 | puVar10[1] & 1 | local_b8[0] & 0xfffffff8;
      local_a4 = puVar10[2];
      puVar4 = *(undefined8 **)(puVar10 + 10);
      local_b0 = *puVar4;
      local_a8 = *(undefined4 *)(puVar4 + 1);
      local_a0 = puVar4[2];
      local_98 = *(undefined4 *)(puVar4 + 3);
      local_94 = puVar10[3];
      FUN_1802d4910(local_b8,puVar2,1);
      FUN_1802c87f0(&DAT_180447a00,*(undefined8 *)(puVar10 + 10));
      puVar10[10] = 0;
      puVar10[0xb] = 0;
    }
    if (iVar8 == 0) {
      local_c8 = FUN_1802d68e0(puVar2,5,param_1[5]);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      local_c8 = FUN_1802c6640(param_1[9],param_1[5],puVar2 + 6,*puVar2);
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
LAB_1802d6024:
  FUN_1802c59b0(param_1);
  FUN_1802c8030("MQTTProtocol_handlePublishes",0x1b7,&local_c8,3);
  return local_c8;
}



// ===== FUN_1802d6070 @ 1802d6070 (size 692)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1802d6070(byte *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ULONGLONG UVar5;
  undefined *puVar6;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = param_2;
  FUN_1802c7f40("MQTTProtocol_handlePubrecs",0x1f9,3);
  lVar4 = FUN_1802c8540(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),&local_res10,&LAB_1802db850);
  puVar1 = *(undefined8 **)(lVar4 + 0x10);
  FUN_1802c6d90(4,0xf,0,local_res10,*puVar1,*(undefined4 *)(param_1 + 4));
  *(undefined8 *)(puVar1[0x18] + 0x10) = 0;
  lVar4 = FUN_1802c8540(puVar1[0x18],param_1 + 4,&LAB_1802d7670);
  if (lVar4 == 0) {
    if ((*param_1 & 8) == 0) {
      FUN_1802c6d90(3,3,0,"PUBREC",*puVar1,*(undefined4 *)(param_1 + 4));
    }
  }
  else {
    piVar2 = *(int **)(*(longlong *)(puVar1[0x18] + 0x10) + 0x10);
    if (*piVar2 == 2) {
      if ((char)piVar2[0xe] == '\x05') {
        if ((4 < *(int *)(param_1 + 0xc)) && (0x7f < param_1[8])) {
          FUN_1802c6d90(3,0xffffffff,
                        "Pubrec error %d received for client %s msgid %d, not sending PUBREL",
                        param_1[8],*puVar1,*(undefined4 *)(param_1 + 4));
          puVar6 = &DAT_180382f94;
          if (4 < *(int *)(param_1 + 0xc)) {
            puVar6 = &DAT_180382f90;
          }
          local_res8[0] = FUN_1802cb270(puVar1,puVar6,*piVar2,*(undefined4 *)(param_1 + 4));
          if (param_3 == (undefined8 *)0x0) {
            FUN_1802d6990();
          }
          else {
            *param_3 = *(undefined8 *)(piVar2 + 10);
          }
          if (4 < piVar2[3]) {
            FUN_1802c1750(piVar2 + 4);
          }
          FUN_1802c87f0(puVar1[0x18],piVar2);
          _DAT_180447a2c = _DAT_180447a2c + 1;
          goto LAB_1802d62c7;
        }
        *(undefined1 *)(piVar2 + 0xe) = 7;
        UVar5 = GetTickCount64();
        *(ULONGLONG *)(piVar2 + 0xc) = UVar5;
      }
      else if ((*param_1 & 8) == 0) {
        FUN_1802c6d90(3,5,0,"PUBREC",*puVar1,*(undefined4 *)(param_1 + 4));
      }
    }
    else if ((*param_1 & 8) == 0) {
      FUN_1802c6d90(3,4,0,"PUBREC",*puVar1,*(undefined4 *)(param_1 + 4),*piVar2);
    }
  }
  iVar3 = FUN_1802ca120(local_res10);
  if (iVar3 == 0) {
    local_res8[0] = FUN_1802d68e0(puVar1,6,*(undefined4 *)(param_1 + 4));
  }
  else {
    local_res8[0] =
         FUN_1802c66f0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),0,puVar1 + 6,
                       *puVar1);
  }
LAB_1802d62c7:
  if (4 < *(int *)(param_1 + 0xc)) {
    FUN_1802c1750(param_1 + 0x10);
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x236,param_1);
  FUN_1802c8030("MQTTProtocol_handlePubrecs",0x237,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d6330 @ 1802d6330 (size 775)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1802d6330(byte *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  int local_b8;
  undefined4 local_a8 [2];
  undefined8 local_a0 [3];
  uint local_88 [6];
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_e8;
  local_a8[0] = 0;
  local_a0[0] = param_2;
  FUN_1802c7f40("MQTTProtocol_handlePubrels",0x248,3);
  lVar5 = FUN_1802c8540(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),local_a0,&LAB_1802db850);
  puVar1 = *(undefined8 **)(lVar5 + 0x10);
  local_c0 = *(undefined4 *)(param_1 + 4);
  local_c8 = *puVar1;
  FUN_1802c6d90(4,0x11,0,local_a0[0]);
  lVar5 = FUN_1802c8540(puVar1[0x17],param_1 + 4,&LAB_1802d7670);
  if (lVar5 == 0) {
    if ((*param_1 & 8) == 0) {
      local_c0 = *(undefined4 *)(param_1 + 4);
      local_c8 = *puVar1;
      FUN_1802c6d90(3,3,0,"PUBREL");
    }
  }
  else {
    piVar2 = *(int **)(*(longlong *)(puVar1[0x17] + 0x10) + 0x10);
    if (*piVar2 == 2) {
      if ((char)piVar2[0xe] == '\x06') {
        puVar3 = *(undefined8 **)(piVar2 + 10);
        local_88[0] = piVar2[1] & 1U | 4;
        local_88[1] = 0;
        local_88[2] = 0;
        local_88[5] = piVar2[2];
        local_88[3] = 0;
        local_88[4] = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          local_88[2] = (uint)*puVar3;
          local_88[3] = (uint)((ulonglong)*puVar3 >> 0x20);
          local_88[4] = *(uint *)(puVar3 + 1);
          local_70 = puVar3[2];
          local_68 = *(undefined4 *)(puVar3 + 3);
        }
        local_64 = piVar2[3];
        if (local_64 < 5) {
          FUN_1802d4910(local_88,puVar1,0);
        }
        else {
          local_60 = *(undefined8 *)(piVar2 + 4);
          uStack_58 = *(undefined8 *)(piVar2 + 6);
          uStack_50 = *(undefined8 *)(piVar2 + 8);
        }
        puVar6 = &DAT_180382f8c;
        if (4 < piVar2[3]) {
          puVar6 = &DAT_180382f88;
        }
        FUN_1802cb270(puVar1,puVar6,*piVar2,*(undefined4 *)(param_1 + 4));
        if (4 < piVar2[3]) {
          FUN_1802c1750(piVar2 + 4);
        }
        if (*(longlong *)(piVar2 + 10) != 0) {
          FUN_1802c87f0(&DAT_180447a00);
        }
        FUN_1802c87f0(puVar1[0x17],piVar2);
        _DAT_180447a28 = _DAT_180447a28 + 1;
      }
      else {
        local_c0 = *(undefined4 *)(param_1 + 4);
        local_c8 = *puVar1;
        FUN_1802c6d90(3,5,0,"PUBREL");
      }
    }
    else {
      local_c0 = *(undefined4 *)(param_1 + 4);
      local_c8 = *puVar1;
      local_b8 = *piVar2;
      FUN_1802c6d90(3,4,0,"PUBREL");
    }
  }
  iVar4 = FUN_1802ca120(local_a0[0]);
  if (iVar4 == 0) {
    local_a8[0] = FUN_1802d68e0(puVar1,7,*(undefined4 *)(param_1 + 4));
  }
  else {
    local_a8[0] = FUN_1802c60f0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),
                                puVar1 + 6,*puVar1);
  }
  if (4 < *(int *)(param_1 + 0xc)) {
    FUN_1802c1750(param_1 + 0x10);
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x283,param_1);
  FUN_1802c8030("MQTTProtocol_handlePubrels",0x284,local_a8,3);
  return local_a8[0];
}



// ===== FUN_1802d6640 @ 1802d6640 (size 661)

void FUN_1802d6640(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res10;
  
  local_res10 = 0;
  FUN_1802c7f40("MQTTProtocol_keepalive",0x2cd,3);
  FUN_1802c87d0(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),&local_res10);
joined_r0x0001802d6686:
  while( true ) {
    while( true ) {
      while( true ) {
        do {
          if (local_res10 == 0) {
            FUN_1802c8030("MQTTProtocol_keepalive",0x31a,0,3);
            return;
          }
          puVar2 = *(undefined8 **)(local_res10 + 0x10);
          FUN_1802c87d0(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),&local_res10);
          uVar1 = *(uint *)(puVar2 + 4);
        } while (((uVar1 & 4) == 0) || (iVar3 = *(int *)((longlong)puVar2 + 0x9c), iVar3 == 0));
        if ((uVar1 & 0x10) == 0) break;
        lVar4 = FUN_1802c8260(param_1,puVar2[9]);
        if ((iVar3 * 0x5dc <= lVar4) &&
           (iVar3 = *(int *)((longlong)puVar2 + 0x9c), lVar4 = FUN_1802c8260(param_1,puVar2[8]),
           iVar3 * 0x5dc <= lVar4)) {
          FUN_1802c6d90(4,0xffffffff,
                        "PINGRESP not received in keepalive interval for client %s on socket %d, disconnecting"
                        ,*puVar2,puVar2[6]);
          FUN_1802d48f0(puVar2,1);
        }
      }
      if (((uVar1 & 0x20) == 0) || (lVar4 = FUN_1802c8260(param_1,puVar2[5]), lVar4 < iVar3 * 0x5dc)
         ) break;
      lVar4 = FUN_1802c8260(param_1,puVar2[8]);
      lVar5 = FUN_1802c8260(param_1,puVar2[5]);
      if (lVar5 <= lVar4) {
        FUN_1802c6d90(4,0xffffffff,
                      "PINGREQ still outstanding for client %s on socket %d, disconnecting",*puVar2,
                      puVar2[6]);
        FUN_1802d48f0(puVar2,1);
      }
    }
    iVar3 = *(int *)((longlong)puVar2 + 0x9c);
    lVar4 = FUN_1802c8260(param_1,puVar2[7]);
    if (lVar4 < iVar3 * 1000) goto LAB_1802d6821;
    iVar3 = FUN_1802ca120(puVar2[6]);
    if (iVar3 != 0) break;
    if ((*(byte *)(puVar2 + 4) & 0x20) == 0) {
      FUN_1802c6d90(4,0xffffffff,"Couldn\'t send PINGREQ for client %s on socket %d, noting",*puVar2
                    ,puVar2[6]);
      *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) | 0x20;
      puVar2[5] = param_1;
    }
  }
  goto LAB_1802d684c;
LAB_1802d6821:
  iVar3 = *(int *)((longlong)puVar2 + 0x9c);
  lVar4 = FUN_1802c8260(param_1,puVar2[8]);
  if ((iVar3 * 1000 <= lVar4) && (iVar3 = FUN_1802ca120(puVar2[6]), iVar3 != 0)) {
LAB_1802d684c:
    iVar3 = FUN_1802d7b90(puVar2 + 6,*puVar2);
    if (iVar3 == 0) {
      puVar2[9] = param_1;
      *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) & 0xffffffdf | 0x10;
    }
    else {
      FUN_1802c6d90(4,0xffffffff,"Error sending PINGREQ for client %s on socket %d, disconnecting",
                    *puVar2,puVar2[6]);
      FUN_1802d48f0(puVar2,1);
    }
  }
  goto joined_r0x0001802d6686;
}



// ===== FUN_1802d68e0 @ 1802d68e0 (size 166)

undefined4 FUN_1802d68e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FUN_1802c7f40("MQTTProtocol_queueAck",0x37c,3);
  puVar1 = (undefined4 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x37d,8);
  if (puVar1 == (undefined4 *)0x0) {
    local_res20[0] = 0xffffff9d;
  }
  else {
    *puVar1 = param_3;
    puVar1[1] = param_2;
    FUN_1802c82a0(*(undefined8 *)(param_1 + 0xd8),puVar1,8);
  }
  FUN_1802c8030("MQTTProtocol_queueAck",0x387,local_res20,3);
  return local_res20[0];
}



// ===== FUN_1802d6990 @ 1802d6990 (size 155)

void FUN_1802d6990(longlong *param_1)

{
  int *piVar1;
  
  FUN_1802c7f40("MQTTProtocol_removePublication",0x129,3);
  if (param_1 != (longlong *)0x0) {
    piVar1 = (int *)((longlong)param_1 + 0x1c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (param_1[2] != 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x12e);
        param_1[2] = 0;
      }
      if (*param_1 != 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x133);
        *param_1 = 0;
      }
      FUN_1802c87f0(&DAT_180447a00,param_1);
    }
  }
  FUN_1802c8030("MQTTProtocol_removePublication",0x138,0,3);
  return;
}



// ===== FUN_1802d6a30 @ 1802d6a30 (size 793)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d6a30(undefined8 param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ULONGLONG UVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  int local_a8;
  longlong local_98 [2];
  undefined1 local_88 [8];
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_d8;
  local_98[0] = 0;
  FUN_1802c7f40("MQTTProtocol_retries",0x328,3);
  if (((param_3 == 0) && (*(int *)((longlong)param_2 + 0xa4) < 1)) &&
     (*(int *)((longlong)param_2 + 0xcc) == (int)param_2[0x19])) {
LAB_1802d6d13:
    FUN_1802c8030("MQTTProtocol_retries",0x36b,0,3);
    return;
  }
  if (param_3 == 0) {
    if (*(int *)((longlong)param_2 + 0xcc) < (int)param_2[0x19]) {
      param_3 = 1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x19) = *(undefined4 *)(param_2[0x18] + 0x18);
  }
LAB_1802d6ae0:
  lVar5 = FUN_1802c87d0(param_2[0x18],local_98);
  if (((lVar5 != 0) && (((byte)param_2[4] & 0xc) == 0xc)) &&
     (iVar4 = FUN_1802ca120(param_2[6]), iVar4 != 0)) {
    piVar1 = *(int **)(local_98[0] + 0x10);
    if (param_3 == 0) goto code_r0x0001802d6b26;
    *(int *)((longlong)param_2 + 0xcc) = *(int *)((longlong)param_2 + 0xcc) + 1;
    goto LAB_1802d6b58;
  }
  goto LAB_1802d6d13;
code_r0x0001802d6b26:
  iVar4 = 10;
  if (10 < *(int *)((longlong)param_2 + 0xa4)) {
    iVar4 = *(int *)((longlong)param_2 + 0xa4);
  }
  lVar5 = FUN_1802c8260(param_1,*(undefined8 *)(piVar1 + 0xc));
  if (lVar5 <= iVar4 * 1000) goto LAB_1802d6ae0;
LAB_1802d6b58:
  iVar4 = *piVar1;
  if (iVar4 == 1) {
LAB_1802d6b72:
    local_a8 = piVar1[2];
    local_b0 = param_2[6];
    local_b8 = *param_2;
    FUN_1802c6d90(3,7,0,"PUBLISH");
    puVar2 = *(undefined8 **)(piVar1 + 10);
    local_74 = piVar1[2];
    local_60 = piVar1[4];
    iStack_5c = piVar1[5];
    iStack_58 = piVar1[6];
    iStack_54 = piVar1[7];
    local_50 = *(undefined8 *)(piVar1 + 8);
    local_80 = *puVar2;
    local_70 = puVar2[2];
    local_68 = *(undefined4 *)(puVar2 + 3);
    local_64 = piVar1[3];
    local_48 = *(undefined4 *)(puVar2 + 4);
    local_b8 = (longlong)(param_2 + 6);
    local_b0 = *param_2;
    iVar4 = FUN_1802c61a0(local_88,1,*piVar1,piVar1[1]);
    *(undefined4 *)(*(longlong *)(piVar1 + 10) + 0x20) = local_48;
    if (iVar4 != -1) {
      if ((*piVar1 == 0) && (iVar4 == -0x16)) {
        FUN_1802d7200(param_2,local_88);
      }
      UVar6 = GetTickCount64();
      *(ULONGLONG *)(piVar1 + 0xc) = UVar6;
      goto LAB_1802d6ae0;
    }
  }
  else {
    if (iVar4 == 2) {
      if ((char)piVar1[0xe] == '\x05') goto LAB_1802d6b72;
    }
    else if (iVar4 == 0) goto LAB_1802d6ae0;
    if ((char)piVar1[0xe] != '\a') goto LAB_1802d6ae0;
    local_a8 = piVar1[2];
    local_b0 = param_2[6];
    local_b8 = *param_2;
    FUN_1802c6d90(3,7,0,"PUBREL");
    local_b8 = *param_2;
    iVar4 = FUN_1802c66f0(piVar1[3],piVar1[2],0,param_2 + 6);
    if (iVar4 == 0) {
      UVar6 = GetTickCount64();
      *(ULONGLONG *)(piVar1 + 0xc) = UVar6;
      goto LAB_1802d6ae0;
    }
  }
  lVar5 = param_2[6];
  lVar3 = *param_2;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffff7;
  local_b0 = FUN_1802c9ca0(lVar5);
  local_b8 = lVar5;
  FUN_1802c6d90(4,0x1d,0,lVar3);
  FUN_1802d48f0(param_2,1);
  goto LAB_1802d6d13;
}



// ===== FUN_1802d6d50 @ 1802d6d50 (size 235)

void FUN_1802d6d50(undefined8 param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong local_res20;
  
  local_res20 = 0;
  FUN_1802c7f40("MQTTProtocol_retry",0x396,3);
  FUN_1802c87d0(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),&local_res20);
  while (local_res20 != 0) {
    lVar1 = *(longlong *)(local_res20 + 0x10);
    FUN_1802c87d0(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),&local_res20);
    if ((*(uint *)(lVar1 + 0x20) & 4) != 0) {
      if ((*(uint *)(lVar1 + 0x20) & 8) == 0) {
        FUN_1802d48f0(lVar1,1);
      }
      else {
        iVar2 = FUN_1802ca120(*(undefined8 *)(lVar1 + 0x30));
        if ((iVar2 != 0) && (param_2 != 0)) {
          FUN_1802d6a30(param_1,lVar1,param_3);
        }
      }
    }
  }
  FUN_1802c8030("MQTTProtocol_retry",0x3a9,0,3);
  return;
}



// ===== FUN_1802d6e40 @ 1802d6e40 (size 698)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802d6e40(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,longlong *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ULONGLONG UVar7;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_e8;
  local_98 = *param_2;
  uStack_90 = param_2[1];
  local_88 = param_2[2];
  uStack_80 = param_2[3];
  local_78 = param_2[4];
  uStack_70 = param_2[5];
  local_68 = *(undefined4 *)(param_2 + 6);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_60 = param_2[7];
  local_58 = param_2[8];
  FUN_1802c7f40("MQTTProtocol_startPublish",0xb0,3);
  if (param_3 < 1) goto LAB_1802d7015;
  piVar4 = (int *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0xd0,0x40);
  FUN_1802c7f40("MQTTProtocol_createMessage",0xd2,3);
  if (piVar4 != (int *)0x0) {
    piVar4[0xf] = 0x40;
    if ((*param_5 == 0) || (lVar5 = *(longlong *)(*param_5 + 0x28), lVar5 == 0)) {
      *param_5 = (longlong)piVar4;
      lVar5 = FUN_1802d7100(param_2,&local_b8);
      *(longlong *)(piVar4 + 10) = lVar5;
      if (lVar5 == 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0xdc,piVar4);
        goto LAB_1802d6fa7;
      }
      piVar4[0xf] = piVar4[0xf] + local_b8;
    }
    else {
      piVar1 = (int *)(lVar5 + 0x1c);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(*param_5 + 0x28);
    }
    piVar4[2] = *(int *)((longlong)param_2 + 0x14);
    *piVar4 = param_3;
    piVar4[1] = param_4;
    iVar2 = *(int *)((longlong)param_2 + 0x24);
    piVar4[3] = iVar2;
    if (4 < iVar2) {
      puVar6 = (undefined8 *)FUN_1802c1480(local_b0,param_2 + 5);
      uVar3 = puVar6[1];
      *(undefined8 *)(piVar4 + 4) = *puVar6;
      *(undefined8 *)(piVar4 + 6) = uVar3;
      *(undefined8 *)(piVar4 + 8) = puVar6[2];
    }
    UVar7 = GetTickCount64();
    *(ULONGLONG *)(piVar4 + 0xc) = UVar7;
    if (param_3 == 2) {
      *(undefined1 *)(piVar4 + 0xe) = 5;
    }
  }
LAB_1802d6fa7:
  FUN_1802c8030("MQTTProtocol_createMessage",0xfb,0,3);
  *param_5 = (longlong)piVar4;
  FUN_1802c82a0(param_1[0x18],piVar4,(longlong)piVar4[0xf]);
  lVar5 = *param_5;
  param_2 = &local_98;
  uStack_80 = *(undefined8 *)(*(longlong *)(lVar5 + 0x28) + 0x10);
  uStack_90 = **(undefined8 **)(lVar5 + 0x28);
  uStack_70 = *(undefined8 *)(lVar5 + 0x10);
  local_68 = *(undefined4 *)(lVar5 + 0x18);
  uStack_64 = *(undefined4 *)(lVar5 + 0x1c);
  uStack_60 = *(undefined8 *)(lVar5 + 0x20);
  local_78 = CONCAT44(*(undefined4 *)(lVar5 + 0xc),(undefined4)local_78);
LAB_1802d7015:
  FUN_1802c7f40("MQTTProtocol_startPublishCommon",0x99,3);
  local_c0 = *param_1;
  local_c8 = param_1 + 6;
  local_b8 = FUN_1802c61a0(param_2,0,param_3,param_4);
  if ((param_3 == 0) && (local_b8 == -0x16)) {
    FUN_1802d7200(param_1,param_2);
    FUN_1802c8030("MQTTProtocol_startPublishCommon",0x9d,&local_b8,3);
    local_b4 = local_b8;
  }
  else {
    FUN_1802c8030("MQTTProtocol_startPublishCommon",0x9d,&local_b8,3);
    local_b4 = local_b8;
    if (0 < param_3) {
      *(undefined4 *)(*(longlong *)(*param_5 + 0x28) + 0x20) = *(undefined4 *)(param_2 + 8);
    }
  }
  local_b8 = local_b4;
  FUN_1802c8030("MQTTProtocol_startPublish",0xc0,&local_b4,3);
  return local_b4;
}



// ===== FUN_1802d7100 @ 1802d7100 (size 242)

undefined8 * FUN_1802d7100(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x108,0x28);
  FUN_1802c7f40("MQTTProtocol_storePublication",0x10a,3);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 1;
    sVar2 = strlen(*(char **)(param_1 + 8));
    *param_2 = (int)sVar2 + 1;
    *puVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    *param_2 = *param_2 + 0x28;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x20);
    puVar1[2] = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *param_2 = *param_2 + *(int *)(param_1 + 0x20);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x40);
    lVar3 = FUN_1802c82a0(&DAT_180447a00,puVar1,(longlong)*param_2);
    if (lVar3 == 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x11b,puVar1);
      puVar1 = (undefined8 *)0x0;
    }
  }
  FUN_1802c8030("MQTTProtocol_storePublication",0x11f,0,3);
  return puVar1;
}



// ===== FUN_1802d7200 @ 1802d7200 (size 316)

void FUN_1802d7200(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int local_res18 [4];
  
  FUN_1802c7f40("MQTTProtocol_storeQoS0",0x72,3);
  puVar2 = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x74,0x10);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1802c6d90(3,0xc,0);
    lVar3 = FUN_1802d7100(param_2,local_res18);
    puVar2[1] = lVar3;
    if (lVar3 == 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x79,puVar2);
    }
    else {
      *puVar2 = *(undefined8 *)(param_1 + 0x30);
      lVar3 = FUN_1802c82a0(&DAT_180447a30,puVar2,(longlong)local_res18[0] + 0x10);
      puVar1 = (undefined8 *)puVar2[1];
      if (lVar3 == 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x7f,puVar1);
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x80,puVar2);
      }
      else {
        lVar3 = FUN_1802db780(*puVar2,*puVar1,puVar1[2]);
        if (lVar3 == 0) {
          FUN_1802c6d90(6,0,"Error updating write");
        }
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
      }
    }
  }
  FUN_1802c8030("MQTTProtocol_storeQoS0",0x89,0,3);
  return;
}



// ===== FUN_1802d7340 @ 1802d7340 (size 353)

void FUN_1802d7340(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 local_res8;
  int local_res10 [2];
  longlong local_res18 [2];
  
  local_res10[0] = 0;
  local_res8 = param_1;
  FUN_1802c7f40("MQTTProtocol_writeAvailable",0x41c,3);
  lVar4 = FUN_1802c8540(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),&local_res8,&LAB_1802db850);
  puVar2 = *(undefined8 **)(lVar4 + 0x10);
  local_res18[0] = 0;
  lVar4 = FUN_1802c87d0(puVar2[0x1b],local_res18);
  while ((lVar4 != 0 && (local_res10[0] == 0))) {
    puVar3 = *(undefined4 **)(local_res18[0] + 0x10);
    iVar1 = puVar3[1];
    if (iVar1 == 4) {
      local_res10[0] = FUN_1802c6040(*(undefined4 *)(puVar2 + 0x24),*puVar3,puVar2 + 6,*puVar2);
    }
    else if (iVar1 == 5) {
      local_res10[0] = FUN_1802c6640(*(undefined4 *)(puVar2 + 0x24),*puVar3,puVar2 + 6,*puVar2);
    }
    else if (iVar1 == 6) {
      local_res10[0] = FUN_1802c66f0(*(undefined4 *)(puVar2 + 0x24),*puVar3,0,puVar2 + 6,*puVar2);
    }
    else if (iVar1 == 7) {
      local_res10[0] = FUN_1802c60f0(*(undefined4 *)(puVar2 + 0x24),*puVar3,puVar2 + 6,*puVar2);
    }
    else {
      FUN_1802c6d90(5,0xffffffff);
    }
    lVar4 = FUN_1802c87d0(puVar2[0x1b],local_res18);
  }
  FUN_1802c8470(puVar2[0x1b]);
  FUN_1802c8030("MQTTProtocol_writeAvailable",0x43a,local_res10,3);
  return;
}



// ===== FUN_1802d74b0 @ 1802d74b0 (size 260)

char * FUN_1802d74b0(char *param_1)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  ulonglong uVar5;
  
  sVar2 = strlen(param_1);
  uVar5 = sVar2 + 1;
  pcVar3 = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTProtocolClient.c",0x461,uVar5);
  if (pcVar3 == (char *)0x0) {
    FUN_1802c6d90(5,0xffffffff,"memory allocation error in MQTTStrdup");
    return (char *)0x0;
  }
  FUN_1802c7f40("MQTTStrncpy",0x44a,3);
  sVar2 = strlen(param_1);
  if (uVar5 < sVar2) {
    FUN_1802c6d90(3,0xffffffff,"the src string is truncated");
  }
  pcVar4 = pcVar3;
  if (1 < uVar5) {
    do {
      cVar1 = pcVar4[(longlong)param_1 - (longlong)pcVar3];
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      if (cVar1 == '\0') break;
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  *pcVar4 = '\0';
  FUN_1802c8030("MQTTStrncpy",0x454,0,3);
  return pcVar3;
}



// ===== FUN_1802d75c0 @ 1802d75c0 (size 174)

char * FUN_1802d75c0(char *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  
  FUN_1802c7f40("MQTTStrncpy",0x44a,3);
  sVar2 = strlen(param_2);
  if (param_3 < sVar2) {
    FUN_1802c6d90(3,0xffffffff,"the src string is truncated");
  }
  pcVar3 = param_1;
  if (1 < param_3) {
    do {
      cVar1 = pcVar3[(longlong)param_2 - (longlong)param_1];
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      if (cVar1 == '\0') break;
      param_3 = param_3 - 1;
    } while (1 < param_3);
  }
  *pcVar3 = '\0';
  FUN_1802c8030("MQTTStrncpy",0x454,0,3);
  return param_1;
}



// ===== FUN_1802d7680 @ 1802d7680 (size 323)

undefined1 * FUN_1802d7680(int param_1,undefined1 param_2,longlong param_3,ulonglong param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong local_res18 [2];
  undefined4 uStack_2c;
  
  local_res18[0] = param_3;
  FUN_1802c7f40("MQTTPacket_connack",0x94,3);
  puVar3 = (undefined1 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x95,0x28);
  if (puVar3 == (undefined1 *)0x0) goto LAB_1802d7793;
  *(int *)(puVar3 + 0xc) = param_1;
  *puVar3 = param_2;
  if (param_4 < 2) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x9b,puVar3);
  }
  else {
    uVar1 = FUN_1802c6ab0(local_res18);
    puVar3[4] = uVar1;
    uVar1 = FUN_1802c6ab0(local_res18);
    puVar3[8] = uVar1;
    if (param_1 < 5) goto LAB_1802d7793;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)(puVar3 + 0x14) = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    *(undefined4 *)(puVar3 + 0x1c) = uStack_2c;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    if (param_4 < 3) goto LAB_1802d7793;
    iVar2 = FUN_1802c1a20(puVar3 + 0x10,local_res18,param_3 + param_4);
    if (iVar2 == 1) goto LAB_1802d7793;
    if (*(longlong *)(puVar3 + 0x20) != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0xaa);
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0xac,puVar3);
  }
  puVar3 = (undefined1 *)0x0;
LAB_1802d7793:
  FUN_1802c8030("MQTTPacket_connack",0xb3,0,3);
  return puVar3;
}



// ===== FUN_1802d77d0 @ 1802d77d0 (size 98)

void FUN_1802d77d0(longlong param_1)

{
  FUN_1802c7f40("MQTTPacket_freeConnack",0xbe,3);
  if (4 < *(uint *)(param_1 + 0xc)) {
    FUN_1802c1750(param_1 + 0x10);
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0xc1,param_1);
  FUN_1802c8030("MQTTPacket_freeConnack",0xc2,0,3);
  return;
}



// ===== FUN_1802d7840 @ 1802d7840 (size 834)

int FUN_1802d7840(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  longlong local_res8;
  int local_res10 [2];
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar11;
  uint local_68;
  uint local_64;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_res10[0] = -1;
  FUN_1802c7f40("MQTTPacket_send_connect",0x37,3);
  local_68 = local_68 & 0xffffff00;
  sVar4 = strlen((char *)*param_1);
  puVar1 = (undefined8 *)param_1[0x16];
  iVar10 = 10;
  if (param_2 == 3) {
    iVar10 = 0xc;
  }
  iVar10 = iVar10 + 2 + (int)sVar4;
  if (puVar1 != (undefined8 *)0x0) {
    sVar4 = strlen((char *)*puVar1);
    iVar10 = iVar10 + 4 + *(int *)(puVar1 + 1) + (int)sVar4;
  }
  if ((char *)param_1[1] != (char *)0x0) {
    sVar4 = strlen((char *)param_1[1]);
    iVar10 = iVar10 + (int)sVar4 + 2;
  }
  if (param_1[3] != 0) {
    iVar10 = iVar10 + *(int *)(param_1 + 2) + 2;
  }
  if (4 < (int)param_2) {
    iVar3 = FUN_1802c19f0(param_3);
    iVar10 = iVar10 + iVar3;
    if (param_1[0x16] != 0) {
      iVar3 = FUN_1802c19f0(param_4);
      iVar10 = iVar10 + iVar3;
    }
  }
  lVar5 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x49,(longlong)iVar10);
  local_res8 = lVar5;
  if (lVar5 == 0) goto LAB_1802d7b44;
  if (param_2 == 3) {
    pcVar9 = "MQIsdp";
LAB_1802d796b:
    FUN_1802c6d20(&local_res8,pcVar9);
    FUN_1802c6be0(&local_res8,param_2 & 0xff);
    local_64 = local_64 & 0xffffff00;
    if ((int)param_2 < 5) {
      uVar6 = (*(uint *)(param_1 + 4) & 1) * 2;
    }
    else {
      uVar6 = *(uint *)(param_1 + 4) & 2;
    }
    lVar2 = param_1[0x16];
    uVar7 = -(uint)(lVar2 != 0) & 4;
    uVar8 = uVar7 | uVar6 | local_64;
    if (lVar2 != 0) {
      uVar8 = ((*(uint *)(lVar2 + 0x18) & 1) << 2 | *(uint *)(lVar2 + 0x1c) & 3) << 3 |
              uVar7 | uVar6 | local_64;
    }
    uVar6 = uVar8;
    if (param_1[1] != 0) {
      uVar6 = uVar8 | 0x80;
    }
    uVar7 = uVar8 | 0x80;
    if (param_1[1] == 0) {
      uVar7 = uVar8;
    }
    if (param_1[3] != 0) {
      uVar6 = uVar7 | 0x40;
    }
    FUN_1802c6be0(&local_res8,uVar6);
    FUN_1802c6c50(&local_res8,*(undefined4 *)((longlong)param_1 + 0x9c));
    if (4 < (int)param_2) {
      FUN_1802c1e30(&local_res8,param_3);
    }
    FUN_1802c6d20(&local_res8,*param_1);
    if (param_1[0x16] != 0) {
      if (4 < (int)param_2) {
        FUN_1802c1e30(&local_res8,param_4);
      }
      FUN_1802c6d20(&local_res8,*(undefined8 *)param_1[0x16]);
      FUN_1802c6bf0(&local_res8,*(undefined8 *)(param_1[0x16] + 0x10),
                    *(undefined4 *)(param_1[0x16] + 8));
    }
    if (param_1[1] != 0) {
      FUN_1802c6d20(&local_res8);
    }
    if (param_1[3] != 0) {
      FUN_1802c6bf0(&local_res8,param_1[3],*(undefined4 *)(param_1 + 2));
    }
    local_res10[0] =
         FUN_1802c5b30(param_1 + 6,local_68 | 0x10,lVar5,(longlong)iVar10,CONCAT44(uVar11,1),param_2
                      );
    FUN_1802c6d90(4,0,0,param_1[6],*param_1,param_2,*(uint *)(param_1 + 4) & 1,local_res10[0]);
  }
  else if (param_2 - 4 < 2) {
    pcVar9 = "MQTT";
    goto LAB_1802d796b;
  }
  if (local_res10[0] != -0x16) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x7f,lVar5);
  }
LAB_1802d7b44:
  FUN_1802c8030("MQTTPacket_send_connect",0x81,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802d7b90 @ 1802d7b90 (size 164)

undefined4 FUN_1802d7b90(undefined8 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  uint local_res18;
  undefined8 in_stack_ffffffffffffffe8;
  uint uVar1;
  
  uVar1 = (uint)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  FUN_1802c7f40("MQTTPacket_send_pingreq",0xd1,3);
  local_res18 = local_res18 & 0xffffff00;
  local_res8[0] = FUN_1802c5b30(param_1,local_res18 | 0xc0,0,0,(ulonglong)uVar1 << 0x20,4);
  FUN_1802c6d90(4,0x14,0,*param_1,param_2,local_res8[0]);
  FUN_1802c8030("MQTTPacket_send_pingreq",0xd6,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d7c40 @ 1802d7c40 (size 639)

int FUN_1802d7c40(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined4 param_5,uint param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  size_t sVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar9;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  
  local_res8[0] = -1;
  local_58 = 0;
  local_48[0] = 0;
  local_res10 = param_2;
  FUN_1802c7f40("MQTTPacket_send_subscribe",0xee,3);
  iVar7 = *(int *)(param_1 + 0x18) * 3 + 2;
  lVar3 = FUN_1802c87d0(param_1,&local_58);
  while (lVar3 != 0) {
    sVar4 = strlen(*(char **)(local_58 + 0x10));
    iVar7 = iVar7 + (int)sVar4;
    lVar3 = FUN_1802c87d0(param_1,&local_58);
  }
  if (4 < *(int *)(param_7 + 0x24)) {
    iVar2 = FUN_1802c19f0(param_4);
    iVar7 = iVar7 + iVar2;
  }
  lVar3 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0xfa,(longlong)iVar7);
  local_50 = lVar3;
  if (lVar3 != 0) {
    FUN_1802c6c50(&local_50,param_5);
    if (4 < *(int *)(param_7 + 0x24)) {
      FUN_1802c1e30(&local_50,param_4);
    }
    local_58 = 0;
    lVar5 = FUN_1802c87d0(param_1,&local_58);
    uVar1 = local_res10;
    uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
    if (lVar5 != 0) {
      pbVar8 = (byte *)(param_3 + 9);
      do {
        FUN_1802c87d0(uVar1,local_48);
        FUN_1802c6d20(&local_50,*(undefined8 *)(local_58 + 0x10));
        bVar6 = **(byte **)(local_48[0] + 0x10);
        if ((4 < *(int *)(param_7 + 0x24)) && (param_3 != 0)) {
          bVar6 = bVar6 | ((pbVar8[1] * '\x02' | *pbVar8) * '\x02' | pbVar8[-1]) << 2;
        }
        FUN_1802c6be0(&local_50,bVar6);
        pbVar8 = pbVar8 + 0xc;
        lVar5 = FUN_1802c87d0(param_1,&local_58);
        uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
      } while (lVar5 != 0);
    }
    local_res8[0] =
         FUN_1802c5b30(param_7 + 6,(param_6 & 1) << 3 | param_6 & 0xffffff82 | 0x82,lVar3,
                       (longlong)iVar7,CONCAT44(uVar9,1),*(undefined4 *)(param_7 + 0x24));
    FUN_1802c6d90(4,0x16,0,param_7[6],*param_7,param_5,local_res8[0]);
    if (local_res8[0] != -0x16) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x116,lVar3);
    }
  }
  FUN_1802c8030("MQTTPacket_send_subscribe",0x118,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d7ec0 @ 1802d7ec0 (size 522)

uint FUN_1802d7ec0(longlong param_1,undefined8 param_2,undefined4 param_3,uint param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  size_t sVar4;
  longlong lVar5;
  int iVar6;
  longlong local_res8;
  uint local_res20 [2];
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar7;
  longlong local_48 [2];
  
  local_res20[0] = 0xffffffff;
  local_res8 = 0;
  FUN_1802c7f40("MQTTPacket_send_unsubscribe",0x175,3);
  uVar1 = local_res20[0] & 0xffffffa2;
  iVar6 = *(int *)(param_1 + 0x18) * 2 + 2;
  lVar3 = FUN_1802c87d0(param_1,&local_res8);
  while (lVar3 != 0) {
    sVar4 = strlen(*(char **)(local_res8 + 0x10));
    iVar6 = iVar6 + (int)sVar4;
    lVar3 = FUN_1802c87d0(param_1,&local_res8);
  }
  if (4 < *(int *)(param_5 + 0x24)) {
    iVar2 = FUN_1802c19f0(param_2);
    iVar6 = iVar6 + iVar2;
  }
  lVar3 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x180,(longlong)iVar6);
  local_48[0] = lVar3;
  if (lVar3 != 0) {
    FUN_1802c6c50(local_48,param_3);
    if (4 < *(int *)(param_5 + 0x24)) {
      FUN_1802c1e30(local_48,param_2);
    }
    local_res8 = 0;
    lVar5 = FUN_1802c87d0(param_1,&local_res8);
    uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    while (lVar5 != 0) {
      FUN_1802c6d20(local_48,*(undefined8 *)(local_res8 + 0x10));
      lVar5 = FUN_1802c87d0(param_1,&local_res8);
      uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    }
    local_res20[0] =
         FUN_1802c5b30(param_5 + 6,(param_4 & 1) << 3 | uVar1 | 0xa2,lVar3,(longlong)iVar6,
                       CONCAT44(uVar7,1),*(undefined4 *)(param_5 + 0x24));
    FUN_1802c6d90(4,0x19,0,param_5[6],*param_5,param_3,local_res20[0]);
    if (local_res20[0] != 0xffffffea) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",399,lVar3);
    }
  }
  FUN_1802c8030("MQTTPacket_send_unsubscribe",0x191,local_res20,3);
  return local_res20[0];
}



// ===== FUN_1802d80d0 @ 1802d80d0 (size 523)

undefined1 * FUN_1802d80d0(int param_1,undefined1 param_2,longlong param_3,ulonglong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong local_res18;
  undefined4 uStack_2c;
  
  local_res18 = param_3;
  FUN_1802c7f40("MQTTPacket_suback",299,3);
  puVar4 = (undefined1 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",300,0x30);
  if (puVar4 == (undefined1 *)0x0) goto LAB_1802d8284;
  *(int *)(puVar4 + 8) = param_1;
  *puVar4 = param_2;
  if ((longlong)((param_3 + param_4) - local_res18) < 2) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x132,puVar4);
  }
  else {
    uVar2 = FUN_1802c6ac0(&local_res18);
    *(undefined4 *)(puVar4 + 4) = uVar2;
    if (param_1 < 5) {
LAB_1802d81d4:
      uVar7 = FUN_1802c86e0();
      *(undefined8 *)(puVar4 + 0x28) = uVar7;
      uVar5 = local_res18 - param_3;
      while (uVar5 < param_4) {
        puVar6 = (uint *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x149,4);
        if (puVar6 == (uint *)0x0) {
          if (*(longlong *)(puVar4 + 0x20) != 0) {
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x14d);
          }
          uVar7 = 0x14f;
          goto LAB_1802d8272;
        }
        bVar1 = FUN_1802c6ab0(&local_res18);
        *puVar6 = (uint)bVar1;
        FUN_1802c82a0(*(undefined8 *)(puVar4 + 0x28),puVar6,4);
        uVar5 = local_res18 - param_3;
      }
      if (*(int *)(*(longlong *)(puVar4 + 0x28) + 0x18) != 0) goto LAB_1802d8284;
      if (*(longlong *)(puVar4 + 0x20) != 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x159);
      }
      FUN_1802c85f0(*(undefined8 *)(puVar4 + 0x28));
      uVar7 = 0x15b;
    }
    else {
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *(undefined4 *)(puVar4 + 0x14) = 0;
      *(undefined4 *)(puVar4 + 0x18) = 0;
      *(undefined4 *)(puVar4 + 0x1c) = uStack_2c;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      iVar3 = FUN_1802c1a20(puVar4 + 0x10,&local_res18,param_3 + param_4);
      if (iVar3 == 1) goto LAB_1802d81d4;
      if (*(longlong *)(puVar4 + 0x20) != 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x13e);
      }
      uVar7 = 0x140;
    }
LAB_1802d8272:
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",uVar7,puVar4);
  }
  puVar4 = (undefined1 *)0x0;
LAB_1802d8284:
  FUN_1802c8030("MQTTPacket_suback",0x15f,0,3);
  return puVar4;
}



// ===== FUN_1802d82e0 @ 1802d82e0 (size 521)

undefined1 * FUN_1802d82e0(int param_1,undefined1 param_2,longlong param_3,ulonglong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong local_res18;
  undefined4 uStack_2c;
  
  local_res18 = param_3;
  FUN_1802c7f40("MQTTPacket_unsuback",0x1a4,3);
  puVar4 = (undefined1 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x1a5,0x30);
  if (puVar4 != (undefined1 *)0x0) {
    *(int *)(puVar4 + 8) = param_1;
    *puVar4 = param_2;
    if ((longlong)((param_3 + param_4) - local_res18) < 2) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x1ab,puVar4);
    }
    else {
      uVar2 = FUN_1802c6ac0(&local_res18);
      *(undefined4 *)(puVar4 + 4) = uVar2;
      *(undefined8 *)(puVar4 + 0x28) = 0;
      if (param_1 < 5) goto LAB_1802d8492;
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *(undefined4 *)(puVar4 + 0x14) = 0;
      *(undefined4 *)(puVar4 + 0x18) = 0;
      *(undefined4 *)(puVar4 + 0x1c) = uStack_2c;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      iVar3 = FUN_1802c1a20(puVar4 + 0x10,&local_res18,param_3 + param_4);
      if (iVar3 == 1) {
        uVar7 = FUN_1802c86e0();
        *(undefined8 *)(puVar4 + 0x28) = uVar7;
        uVar5 = local_res18 - param_3;
        while (uVar5 < param_4) {
          puVar6 = (uint *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x1c2,4);
          if (puVar6 == (uint *)0x0) {
            if (*(longlong *)(puVar4 + 0x20) != 0) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x1c6);
            }
            uVar7 = 0x1c8;
            goto LAB_1802d8480;
          }
          bVar1 = FUN_1802c6ab0(&local_res18);
          *puVar6 = (uint)bVar1;
          FUN_1802c82a0(*(undefined8 *)(puVar4 + 0x28),puVar6,4);
          uVar5 = local_res18 - param_3;
        }
        if (*(int *)(*(longlong *)(puVar4 + 0x28) + 0x18) != 0) goto LAB_1802d8492;
        FUN_1802c85f0();
        if (*(longlong *)(puVar4 + 0x20) != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x1d3);
        }
        uVar7 = 0x1d5;
      }
      else {
        if (*(longlong *)(puVar4 + 0x20) != 0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",0x1b8);
        }
        uVar7 = 0x1ba;
      }
LAB_1802d8480:
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPacketOut.c",uVar7,puVar4);
    }
    puVar4 = (undefined1 *)0x0;
  }
LAB_1802d8492:
  FUN_1802c8030("MQTTPacket_unsuback",0x1da,0,3);
  return puVar4;
}



// ===== FUN_1802d84f0 @ 1802d84f0 (size 894)

longlong *
FUN_1802d84f0(longlong *param_1,longlong param_2,byte param_3,uint param_4,longlong *param_5,
             size_t *param_6,uint *param_7)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined2 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  size_t sVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int local_res8 [2];
  int local_res10;
  
  local_res8[0] = 0;
  local_res10 = 0;
  FUN_1802c7f40("WebSocket_buildFrame",0xf5,3);
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(param_2 + 0x50) != 0) {
    iVar15 = 0;
    uVar11 = *param_7;
    sVar2 = *param_6;
    sVar14 = sVar2;
    if ((0 < (int)uVar11) && (3 < uVar11)) {
      lVar16 = 0;
      lVar17 = 0;
      lVar8 = 0;
      lVar4 = 0;
      uVar10 = uVar11 & 0x80000003;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
      }
      lVar7 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_7 + 4) + lVar7 * 8);
        iVar15 = iVar15 + 4;
        lVar16 = lVar16 + *plVar1;
        lVar17 = lVar17 + plVar1[1];
        plVar1 = (longlong *)(*(longlong *)(param_7 + 4) + 0x10 + lVar7 * 8);
        lVar7 = lVar7 + 4;
        lVar8 = lVar8 + *plVar1;
        lVar4 = lVar4 + plVar1[1];
      } while (lVar7 < (int)(uVar11 - uVar10));
      auVar3._8_4_ = (int)(lVar4 + lVar17);
      auVar3._0_8_ = lVar8 + lVar16;
      auVar3._12_4_ = (int)((ulonglong)(lVar4 + lVar17) >> 0x20);
      sVar14 = sVar2 + lVar8 + lVar16 + auVar3._8_8_;
    }
    lVar8 = (longlong)iVar15;
    if (lVar8 < (int)uVar11) {
      do {
        sVar14 = sVar14 + *(longlong *)(*(longlong *)(param_7 + 4) + lVar8 * 8);
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uVar11);
    }
    if (sVar14 < 0x7e) {
      uVar11 = 2;
    }
    else if (sVar14 < 0x10000) {
      uVar11 = 4;
    }
    else {
      uVar11 = 0;
      if (sVar14 != 0xffffffffffffffff) {
        uVar11 = 10;
      }
    }
    uVar10 = uVar11 + 4;
    if ((param_4 & 1) == 0) {
      uVar10 = uVar11;
    }
    uVar9 = (ulonglong)uVar10;
    if (*param_5 == 0) {
      lVar8 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\WebSocket.c",0x10e);
      *param_1 = lVar8;
      if (lVar8 == 0) goto LAB_1802d8843;
      param_1[1] = uVar9;
    }
    else {
      param_1[1] = sVar2 + uVar9;
      lVar8 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\WebSocket.c",0x107);
      *param_1 = lVar8;
      if (lVar8 == 0) goto LAB_1802d8843;
      memcpy((void *)(uVar9 + lVar8),(void *)*param_5,*param_6);
    }
    if ((param_4 == 0) || ((char)param_7[8] != '\0')) {
      iVar15 = local_res10;
    }
    else {
      FUN_180193f70(param_7 + 8,4);
      iVar15 = 1;
    }
    lVar8 = *param_1;
    *(undefined1 *)(local_res8[0] + lVar8) = 0x80;
    *(byte *)(local_res8[0] + lVar8) = *(byte *)(local_res8[0] + lVar8) | param_3 & 0xf;
    iVar6 = local_res8[0] + 1;
    *(char *)(iVar6 + lVar8) = (char)param_4 << 7;
    if (sVar14 < 0x7e) {
      *(byte *)(iVar6 + lVar8) = *(byte *)(iVar6 + lVar8) | (byte)sVar14 & 0x7f;
      local_res8[0] = local_res8[0] + 2;
    }
    else if (sVar14 < 0x10000) {
      local_res8[0] = iVar6;
      uVar5 = Ordinal_9(sVar14 & 0xffff);
      lVar8 = *param_1;
      pbVar12 = (byte *)(local_res8[0] + lVar8);
      *pbVar12 = *pbVar12 | 0x7e;
      *(undefined2 *)((local_res8[0] + 1) + lVar8) = uVar5;
      local_res8[0] = local_res8[0] + 3;
    }
    else if (sVar14 == 0xffffffffffffffff) {
      local_res8[0] = iVar6;
      FUN_1802c6d90(4,1);
      local_res8[0] = -1;
    }
    else {
      *(byte *)(iVar6 + lVar8) = *(byte *)(iVar6 + lVar8) | 0x7f;
      *(size_t *)((local_res8[0] + 2) + lVar8) =
           sVar14 >> 0x38 | (sVar14 & 0xff000000000000) >> 0x28 | (sVar14 & 0xff0000000000) >> 0x18
           | (sVar14 & 0xff00000000) >> 8 | (sVar14 & 0xff000000) << 8 | (sVar14 & 0xff0000) << 0x18
           | (sVar14 & 0xff00) << 0x28 | sVar14 << 0x38;
      local_res8[0] = local_res8[0] + 10;
    }
    if (param_4 != 0) {
      lVar8 = *param_1;
      uVar11 = 0;
      *(uint *)(local_res8[0] + lVar8) = param_7[8];
      local_res8[0] = local_res8[0] + 4;
      if ((int)uVar10 < (int)param_1[1]) {
        uVar13 = (ulonglong)((int)param_1[1] - uVar10);
        pbVar12 = (byte *)(uVar9 + lVar8);
        do {
          uVar10 = uVar11 & 3;
          uVar11 = uVar11 + 1;
          *pbVar12 = *pbVar12 ^ *(byte *)((ulonglong)uVar10 + 0x20 + (longlong)param_7);
          uVar13 = uVar13 - 1;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
      uVar10 = *param_7;
      iVar6 = 0;
      if (0 < (int)uVar10) {
        lVar8 = 0;
        do {
          if ((iVar15 == 0) && ((lVar8 == 0x10 || (iVar6 == uVar10 - 1)))) break;
          uVar9 = 0;
          if (*(longlong *)(lVar8 + *(longlong *)(param_7 + 4)) != 0) {
            do {
              uVar10 = uVar11 & 3;
              uVar11 = uVar11 + 1;
              pbVar12 = (byte *)(*(longlong *)(lVar8 + *(longlong *)(param_7 + 2)) + uVar9);
              *pbVar12 = *pbVar12 ^ *(byte *)((ulonglong)uVar10 + 0x20 + (longlong)param_7);
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(ulonglong *)(lVar8 + *(longlong *)(param_7 + 4)));
          }
          uVar10 = *param_7;
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 8;
        } while (iVar6 < (int)uVar10);
      }
    }
  }
LAB_1802d8843:
  FUN_1802c8030("WebSocket_buildFrame",0x160,local_res8,3);
  return param_1;
}



// ===== FUN_1802d8870 @ 1802d8870 (size 513)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d8870(undefined8 *param_1,uint param_2,char *param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  size_t sVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [32];
  undefined2 **local_c8;
  longlong *local_c0;
  undefined4 *local_b8;
  longlong local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803c3d80 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1802c7f40("WebSocket_close",0x21d,3);
  if (*(int *)(param_1 + 10) != 0) {
    local_a8 = 2;
    if (0xf < param_2 - 1000) {
      param_2 = 0x3e9;
    }
    if (param_3 != (char *)0x0) {
      sVar3 = strlen(param_3);
      local_a8 = sVar3 + 2;
    }
    puVar4 = (undefined2 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\WebSocket.c",0x22c);
    local_a0 = puVar4;
    if (puVar4 == (undefined2 *)0x0) goto LAB_1802d8a34;
    uVar2 = Ordinal_9(param_2 & 0xffff);
    *puVar4 = uVar2;
    if (param_3 != (char *)0x0) {
      strcpy((char *)(puVar4 + 1),param_3);
    }
    local_b8 = &local_58;
    local_c0 = &local_a8;
    local_c8 = &local_a0;
    puVar5 = (undefined8 *)FUN_1802d84f0(local_68,param_1,8,1);
    local_98 = (undefined2 *)CONCAT44(uStack_54,local_58);
    uVar1 = *puVar5;
    uStack_90 = uStack_50;
    local_78 = local_38;
    local_88 = uStack_48;
    uStack_80 = uStack_40;
    if (param_1[4] == 0) {
      FUN_1802ca2e0(*param_1,uVar1,puVar5[1],&local_98);
    }
    else {
      local_c8 = &local_98;
      FUN_1802cd1f0(param_1[4],*param_1,uVar1,puVar5[1]);
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x241,uVar1);
    *(undefined4 *)(param_1 + 10) = 0;
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x245,puVar4);
  }
  if (param_1[0xb] != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x249);
    param_1[0xb] = 0;
  }
LAB_1802d8a34:
  FUN_1802c8030("WebSocket_close",0x24d,0,3);
  return;
}



// ===== FUN_1802d8a80 @ 1802d8a80 (size 966)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1802d8a80(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  char *_Str;
  char *_Str_00;
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  size_t sVar5;
  size_t sVar6;
  undefined **ppuVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  int iVar13;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  UUID local_58;
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_148;
  puVar11 = (undefined8 *)param_1[0xc];
  local_d0 = CONCAT44(local_d0._4_4_,param_2);
  ppuVar7 = (undefined **)0x0;
  local_c8 = (char *)0x0;
  local_d4 = 0x50;
  lVar8 = 0;
  iVar3 = 0;
  iVar13 = 0;
  local_c0 = param_3;
  FUN_1802c7f40("WebSocket_connect",0x193,3);
  if (param_1[0xb] == 0) {
    lVar4 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\WebSocket.c",0x196,0x19);
    param_1[0xb] = lVar4;
    if (lVar4 != 0) goto LAB_1802d8b5d;
LAB_1802d8b11:
    local_d8 = 0xffffff9d;
  }
  else {
    lVar4 = FUN_1802c7d40("E:\\paho.mqtt.c\\src\\WebSocket.c",0x199,param_1[0xb],0x19);
    if (lVar4 == 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x19c,param_1[0xb]);
      param_1[0xb] = 0;
      local_d8 = 0xffffff9d;
      goto LAB_1802d8dff;
    }
    param_1[0xb] = lVar4;
LAB_1802d8b5d:
    local_58.Data1 = 0;
    local_58.Data2 = 0;
    local_58.Data3 = 0;
    local_58.Data4[0] = '\0';
    local_58.Data4[1] = '\0';
    local_58.Data4[2] = '\0';
    local_58.Data4[3] = '\0';
    local_58.Data4[4] = '\0';
    local_58.Data4[5] = '\0';
    local_58.Data4[6] = '\0';
    local_58.Data4[7] = '\0';
    UuidCreate(&local_58);
    FUN_1802dd950(param_1[0xb],0x19,&local_58,0x10);
    uVar9 = 0x50;
    if ((int)local_d0 != 0) {
      uVar9 = 0x1bb;
    }
    local_d0 = FUN_1802dc960(local_c0,&local_d4,&local_c8,uVar9);
    if (local_c8 == (char *)0x0) {
      local_c8 = "/mqtt";
    }
    if (puVar11 != (undefined8 *)0x0) {
      _Str = (char *)*puVar11;
      while ((_Str != (char *)0x0 && (_Str_00 = (char *)puVar11[1], _Str_00 != (char *)0x0))) {
        sVar5 = strlen(_Str);
        sVar6 = strlen(_Str_00);
        puVar11 = puVar11 + 2;
        _Str = (char *)*puVar11;
        iVar13 = iVar13 + 4 + (int)sVar5 + (int)sVar6;
      }
      ppuVar7 = (undefined **)
                FUN_1802c7b50("E:\\paho.mqtt.c\\src\\WebSocket.c",0x1c2,(longlong)(iVar13 + 1));
      if (ppuVar7 == (undefined **)0x0) goto LAB_1802d8b11;
      plVar10 = (longlong *)param_1[0xc];
      lVar4 = *plVar10;
      ppuVar12 = ppuVar7;
      plVar1 = local_128;
      while ((lVar4 != 0 && (local_128 = (longlong *)plVar10[1], local_128 != (longlong *)0x0))) {
        iVar2 = snprintf(ppuVar12,(undefined1 *)
                                  ((longlong)ppuVar7 + ((longlong)(iVar13 + 1) - (longlong)ppuVar12)
                                  ),"%s: %s\r\n",lVar4);
        plVar10 = plVar10 + 2;
        ppuVar12 = (undefined **)((longlong)ppuVar12 + (longlong)iVar2);
        lVar4 = *plVar10;
        plVar1 = local_128;
      }
      *(undefined1 *)ppuVar12 = 0;
      local_128 = plVar1;
    }
    iVar13 = 0;
    ppuVar12 = &PTR_1802ead18;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar12 = ppuVar7;
    }
    do {
      local_110 = &DAT_1802ea6b0;
      if (param_1[4] != 0) {
        local_110 = &DAT_1802ea6a8;
      }
      local_f0 = param_1[0xb];
      local_f8 = local_d4;
      local_100 = local_c0;
      local_108 = (undefined4)local_d0;
      local_118 = local_d4;
      local_120 = local_c0;
      local_128 = (longlong *)CONCAT44(local_128._4_4_,local_108);
      local_e8 = ppuVar12;
      iVar3 = snprintf(lVar8,(longlong)iVar3,
                       "GET %s HTTP/1.1\r\nHost: %.*s:%d\r\nUpgrade: websocket\r\nConnection: Upgrade\r\nOrigin: %s://%.*s:%d\r\nSec-WebSocket-Key: %s\r\nSec-WebSocket-Version: 13\r\nSec-WebSocket-Protocol: mqtt\r\n%s\r\n"
                       ,local_c8);
      if ((iVar13 == 0) && (0 < iVar3)) {
        iVar3 = iVar3 + 1;
        lVar8 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\WebSocket.c",0x1ee,(longlong)iVar3);
        if (lVar8 == 0) goto LAB_1802d8b11;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 2);
    if (ppuVar7 != (undefined **)0x0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x1f7,ppuVar7);
    }
    if (lVar8 == 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x208,param_1[0xb]);
      param_1[0xb] = 0;
      local_d8 = 0xffffffff;
    }
    else {
      local_b8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      local_88 = (ulonglong)uStack_b4 << 0x20;
      uStack_80 = 0;
      local_68 = 0;
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      if (param_1[4] == 0) {
        FUN_1802ca2e0(*param_1,lVar8,(longlong)iVar3,&local_88);
      }
      else {
        local_128 = &local_88;
        FUN_1802cd1f0(param_1[4],*param_1,lVar8,(longlong)iVar3);
      }
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x203,lVar8);
      local_d8 = 1;
    }
  }
LAB_1802d8dff:
  FUN_1802c8030("WebSocket_connect",0x20d,&local_d8,3);
  return local_d8;
}



// ===== FUN_1802d8e90 @ 1802d8e90 (size 675)

void * FUN_1802d8e90(undefined8 *param_1,ulonglong param_2,size_t *param_3,int *param_4)

{
  size_t _Size;
  size_t sVar1;
  void *pvVar2;
  ulonglong uVar3;
  void *_Src;
  
  FUN_1802c7f40("WebSocket_getRawSocketData",0x317,3);
  uVar3 = param_2;
  if (param_2 != 0) {
    if (param_2 <= DAT_1804472e8 - DAT_1804472e0) {
      _Src = (void *)((longlong)DAT_1804472d0 + DAT_1804472e0);
      *param_3 = param_2;
      DAT_1804472e0 = DAT_1804472e0 + param_2;
      *param_4 = (int)param_2;
      goto LAB_1802d90fc;
    }
    uVar3 = param_2 + (DAT_1804472e0 - DAT_1804472e8);
  }
  *param_3 = 0;
  if (param_1[4] == 0) {
    _Src = (void *)FUN_1802c9b80(*param_1,uVar3,param_3,param_4);
  }
  else {
    _Src = (void *)FUN_1802cce60(param_1[4],*param_1,uVar3,param_3,param_4);
  }
  sVar1 = DAT_1804472e8;
  if (*param_4 == 0) {
    *param_4 = -1;
    goto LAB_1802d90fc;
  }
  if (uVar3 == 0) {
    DAT_1804472e0 = 0;
    DAT_1804472e8 = 0;
    DAT_1804472d8 = 0;
    if (DAT_1804472d0 != (void *)0x0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x341,DAT_1804472d0);
      DAT_1804472d0 = (void *)0x0;
    }
  }
  else {
    if ((_Src == (void *)0x0) || (_Size = *param_3, _Size == 0)) goto LAB_1802d90fc;
    if (DAT_1804472d0 == (void *)0x0) {
      DAT_1804472d0 = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\WebSocket.c",0x34b);
      if (DAT_1804472d0 == (void *)0x0) {
LAB_1802d907a:
        _Src = (void *)0x0;
        goto LAB_1802d90fc;
      }
      memcpy(DAT_1804472d0,_Src,*param_3);
      DAT_1804472e8 = *param_3;
      DAT_1804472e0 = 0;
      DAT_1804472d8 = DAT_1804472e8;
    }
    else if (_Size + DAT_1804472e8 < DAT_1804472d8) {
      memcpy((void *)((longlong)DAT_1804472d0 + DAT_1804472e8),_Src,_Size);
      DAT_1804472e8 = *param_3 + sVar1;
    }
    else {
      pvVar2 = (void *)FUN_1802c7d40("E:\\paho.mqtt.c\\src\\WebSocket.c",0x35f,DAT_1804472d0);
      sVar1 = DAT_1804472e8;
      if (pvVar2 == (void *)0x0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x362,DAT_1804472d0);
        DAT_1804472d0 = (void *)0x0;
        goto LAB_1802d907a;
      }
      DAT_1804472d8 = *param_3 + DAT_1804472e8;
      DAT_1804472d0 = pvVar2;
      memcpy((void *)((longlong)pvVar2 + DAT_1804472e8),_Src,*param_3);
      DAT_1804472e8 = *param_3 + sVar1;
    }
    FUN_1802daf20(*param_1);
  }
  if (param_2 != 0) {
    _Src = (void *)((longlong)DAT_1804472d0 + DAT_1804472e0);
    uVar3 = DAT_1804472e8 - DAT_1804472e0;
    if (uVar3 < param_2) {
      *param_3 = uVar3;
    }
    else {
      *param_3 = param_2;
      uVar3 = param_2;
    }
    DAT_1804472e0 = DAT_1804472e0 + uVar3;
  }
LAB_1802d90fc:
  FUN_1802c8030("WebSocket_getRawSocketData",0x38b,0,3);
  return _Src;
}



// ===== FUN_1802d9140 @ 1802d9140 (size 270)

int FUN_1802d9140(undefined8 *param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  int local_res8 [2];
  undefined8 local_res18;
  
  local_res8[0] = -1;
  FUN_1802c7f40("WebSocket_getch",0x260,3);
  if (*(int *)(param_1 + 10) == 0) {
    if (param_1[4] == 0) {
      local_res8[0] = FUN_1802c9aa0(*param_1,param_2);
    }
    else {
      local_res8[0] = FUN_1802ccd70(param_1[4],*param_1,param_2);
    }
    goto LAB_1802d921e;
  }
  puVar1 = (ulonglong *)0x0;
  if ((((DAT_1804472c8 == (longlong *)0x0) || (*DAT_1804472c8 == 0)) ||
      (puVar1 = *(ulonglong **)(*DAT_1804472c8 + 0x10), puVar1 == (ulonglong *)0x0)) ||
     (*puVar1 == puVar1[1])) {
    local_res18 = 0;
    local_res8[0] = FUN_1802d96c0(param_1,&local_res18);
    if (local_res8[0] != 0) goto LAB_1802d921e;
    if (*DAT_1804472c8 != 0) {
      puVar1 = *(ulonglong **)(*DAT_1804472c8 + 0x10);
    }
    if (puVar1 == (ulonglong *)0x0) goto LAB_1802d921e;
  }
  if (puVar1[1] < *puVar1) {
    *param_2 = *(undefined1 *)(puVar1[1] + 0x10 + (longlong)puVar1);
    puVar1[1] = puVar1[1] + 1;
    local_res8[0] = 0;
  }
LAB_1802d921e:
  FUN_1802c8030("WebSocket_getch",0x285,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d9250 @ 1802d9250 (size 578)

longlong FUN_1802d9250(undefined8 *param_1,ulonglong param_2,ulonglong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  longlong local_res20;
  
  local_res20 = 0;
  FUN_1802c7f40("WebSocket_getdata",0x2b1,3);
  plVar3 = DAT_1804472c8;
  if (*(int *)(param_1 + 10) == 0) {
    if (param_1[4] == 0) {
      local_res20 = FUN_1802c9b80(*param_1,param_2,param_3,local_res8);
    }
    else {
      local_res20 = FUN_1802cce60(param_1[4],*param_1,param_2,param_3,local_res8);
    }
  }
  else if (param_2 == 0) {
    if (DAT_1804472c8 != (longlong *)0x0) {
      if (*DAT_1804472c8 != 0) {
        plVar4 = *(longlong **)(*DAT_1804472c8 + 0x10);
        if (plVar4 != (longlong *)0x0) {
          if (plVar4[1] == *plVar4) {
            local_res20 = plVar4[1] + 0x10 + (longlong)plVar4;
            *param_3 = *plVar4 - plVar4[1];
            if (DAT_1804472c0 != 0) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x2c4);
              plVar3 = DAT_1804472c8;
            }
            DAT_1804472c0 = FUN_1802c83f0(plVar3);
          }
        }
      }
    }
  }
  else {
    if (((DAT_1804472c8 == (longlong *)0x0) || (*DAT_1804472c8 == 0)) ||
       (plVar3 = *(longlong **)(*DAT_1804472c8 + 0x10), plVar3 == (longlong *)0x0)) {
      local_res8[0] = FUN_1802d96c0(param_1,param_3);
      if ((local_res8[0] != 0) || (DAT_1804472c8 == (longlong *)0x0)) goto LAB_1802d9461;
      if (*DAT_1804472c8 == 0) goto LAB_1802d9461;
      plVar3 = *(longlong **)(*DAT_1804472c8 + 0x10);
      if (plVar3 == (longlong *)0x0) goto LAB_1802d9461;
    }
    plVar4 = DAT_1804472c8;
    local_res20 = plVar3[1] + 0x10 + (longlong)plVar3;
    uVar2 = *plVar3 - plVar3[1];
    *param_3 = uVar2;
    iVar1 = local_res8[0];
    while (uVar2 < param_2) {
      iVar1 = FUN_1802d96c0(param_1,param_3);
      plVar4 = DAT_1804472c8;
      local_res8[0] = iVar1;
      if (iVar1 != 0) goto LAB_1802d9461;
      plVar3 = *(longlong **)(*DAT_1804472c8 + 0x10);
      local_res20 = (longlong)plVar3 + plVar3[1] + 0x10;
      uVar2 = *plVar3 - plVar3[1];
      *param_3 = uVar2;
      local_res8[0] = 0;
    }
    local_res8[0] = iVar1;
    if (uVar2 == param_2) {
      if (DAT_1804472c0 != 0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x2f2,DAT_1804472c0);
        plVar4 = DAT_1804472c8;
      }
      DAT_1804472c0 = FUN_1802c83f0(plVar4);
    }
    else {
      plVar3[1] = plVar3[1] + param_2;
    }
  }
LAB_1802d9461:
  FUN_1802c8030("WebSocket_getdata",0x2ff,&local_res20,3);
  return local_res20;
}



// ===== FUN_1802d94a0 @ 1802d94a0 (size 544)

int FUN_1802d94a0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,int *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int local_res8 [2];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1802c7f40("WebSocket_putdatas",0x3cc,3);
  if (*(int *)(param_1 + 10) == 0) {
    local_48 = *(undefined8 *)param_4;
    uStack_40 = *(undefined8 *)(param_4 + 2);
    local_38 = *(undefined8 *)(param_4 + 4);
    uStack_30 = *(undefined8 *)(param_4 + 6);
    local_28 = *(undefined8 *)(param_4 + 8);
    if (param_1[4] == 0) {
      local_res8[0] = FUN_1802ca2e0(*param_1,*param_2,*param_3,&local_48);
    }
    else {
      local_res8[0] = FUN_1802cd1f0(param_1[4],*param_1,*param_2,*param_3,&local_48);
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_1802d84f0(local_58,param_1,2,1,param_2,param_3,param_4);
    local_48 = *(undefined8 *)param_4;
    uStack_40 = *(undefined8 *)(param_4 + 2);
    local_38 = *(undefined8 *)(param_4 + 4);
    uStack_30 = *(undefined8 *)(param_4 + 6);
    local_28 = *(undefined8 *)(param_4 + 8);
    uVar2 = *puVar4;
    if (param_1[4] == 0) {
      local_res8[0] = FUN_1802ca2e0(*param_1,uVar2,puVar4[1]);
    }
    else {
      local_res8[0] = FUN_1802cd1f0(param_1[4],*param_1,uVar2,puVar4[1],&local_48);
    }
    if (local_res8[0] != -0x16) {
      lVar6 = *param_3;
      FUN_1802c7f40("WebSocket_unmaskData",0x169,3);
      iVar8 = 0;
      if (0 < *param_4) {
        lVar7 = 0;
        do {
          uVar5 = 0;
          if (*(longlong *)(lVar7 + *(longlong *)(param_4 + 4)) != 0) {
            do {
              uVar3 = (uint)lVar6;
              lVar6 = lVar6 + 1;
              pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_4 + 2) + lVar7) + uVar5);
              *pbVar1 = *pbVar1 ^ *(byte *)((ulonglong)(uVar3 & 3) + 0x20 + (longlong)param_4);
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(ulonglong *)(lVar7 + *(longlong *)(param_4 + 4)));
          }
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar8 < *param_4);
      }
      param_4[8] = 0;
      FUN_1802c8030("WebSocket_unmaskData",0x172,0,3);
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x3de,uVar2);
    }
  }
  FUN_1802c8030("WebSocket_putdatas",0x3eb,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802d96c0 @ 1802d96c0 (size 2026)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802d96c0(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined2 *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  void *_Dst;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  byte *_Src;
  byte *pbVar16;
  undefined1 auStack_138 [32];
  int *local_118;
  longlong *local_110;
  undefined4 *local_108;
  int local_f8 [2];
  ulonglong local_f0;
  int local_e8;
  byte local_e4 [4];
  uint local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  longlong local_c0 [2];
  longlong *local_b0;
  undefined8 local_a8;
  longlong **pplStack_a0;
  longlong *local_98;
  uint *puStack_90;
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  longlong **pplStack_60;
  longlong *local_58;
  uint *puStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_138;
  local_e8 = 0;
  plVar11 = (longlong *)0x0;
  local_b0 = param_2;
  FUN_1802c7f40("WebSocket_receiveFrame",0x401,3);
  if (DAT_1804472c8 == (longlong *)0x0) {
    DAT_1804472c8 = (longlong *)FUN_1802c86e0();
  }
  if (*DAT_1804472c8 != 0) {
    plVar11 = *(longlong **)(*DAT_1804472c8 + 0x10);
  }
  uVar15 = 2;
  local_e4[0] = 0;
  local_e4[1] = 0;
  local_e4[2] = 0;
  local_e4[3] = 0;
  do {
    do {
      pbVar16 = (byte *)0x0;
      local_f0 = 0;
      FUN_1802c7f40("WebSocket_getRawSocketData",0x317,3);
      if (DAT_1804472e8 - (longlong)DAT_1804472e0 < 2) {
        pbVar13 = DAT_1804472e0 + (2 - DAT_1804472e8);
        local_f0 = 0;
        if (param_1[4] == 0) {
          _Src = (byte *)FUN_1802c9b80(*param_1,pbVar13,&local_f0,local_f8);
        }
        else {
          local_118 = local_f8;
          _Src = (byte *)FUN_1802cce60(param_1[4],*param_1,pbVar13,&local_f0);
        }
        if (local_f8[0] == 0) {
          local_f8[0] = -1;
        }
        else {
          if (pbVar13 == (byte *)0x0) {
            DAT_1804472e0 = (byte *)0x0;
            DAT_1804472e8 = 0;
            DAT_1804472d8 = 0;
            pbVar13 = pbVar16;
            if (DAT_1804472d0 != (void *)0x0) {
              FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x341,DAT_1804472d0);
              DAT_1804472d0 = (void *)0x0;
              goto LAB_1802d9972;
            }
          }
          else {
            if ((_Src == (byte *)0x0) || (local_f0 == 0)) goto LAB_1802d99ab;
            if (DAT_1804472d0 == (void *)0x0) {
              DAT_1804472d0 = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\WebSocket.c",0x34b);
              if (DAT_1804472d0 == (void *)0x0) {
                _Src = pbVar16;
                goto LAB_1802d99ab;
              }
              memcpy(DAT_1804472d0,_Src,local_f0);
              DAT_1804472e8 = local_f0;
              DAT_1804472d8 = local_f0;
              DAT_1804472e0 = (byte *)0x0;
            }
            else {
              if (DAT_1804472e8 + local_f0 < DAT_1804472d8) {
                _Dst = (void *)((longlong)DAT_1804472d0 + DAT_1804472e8);
              }
              else {
                pvVar8 = (void *)FUN_1802c7d40("E:\\paho.mqtt.c\\src\\WebSocket.c",0x35f,
                                               DAT_1804472d0);
                if (pvVar8 == (void *)0x0) {
                  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x362,DAT_1804472d0);
                  DAT_1804472d0 = (void *)0x0;
                  _Src = pbVar16;
                  goto LAB_1802d99ab;
                }
                _Dst = (void *)((longlong)pvVar8 + DAT_1804472e8);
                DAT_1804472d8 = DAT_1804472e8 + local_f0;
                DAT_1804472d0 = pvVar8;
              }
              uVar14 = DAT_1804472e8;
              memcpy(_Dst,_Src,local_f0);
              DAT_1804472e8 = uVar14 + local_f0;
            }
            FUN_1802daf20(*param_1);
LAB_1802d9972:
            pbVar13 = DAT_1804472e0;
          }
          local_f0 = DAT_1804472e8 - (longlong)pbVar13;
          if (local_f0 < 2) {
            DAT_1804472e0 = pbVar13 + local_f0;
          }
          else {
            local_f0 = 2;
            DAT_1804472e0 = pbVar13 + 2;
          }
          _Src = (byte *)((longlong)DAT_1804472d0 + (longlong)pbVar13);
        }
      }
      else {
        _Src = (byte *)((longlong)DAT_1804472d0 + (longlong)DAT_1804472e0);
        local_f0 = 2;
        DAT_1804472e0 = DAT_1804472e0 + 2;
        local_f8[0] = 2;
      }
LAB_1802d99ab:
      FUN_1802c8030("WebSocket_getRawSocketData",0x38b,0,3);
      if (local_f8[0] == -1) goto LAB_1802d9c3d;
      if ((_Src == (byte *)0x0) || (local_f0 < 2)) {
LAB_1802d9e96:
        local_e8 = -0x16;
        DAT_1804472e0 = (byte *)0x0;
        goto LAB_1802d9c45;
      }
      bVar1 = *_Src;
      local_e0[0] = bVar1 & 0xf;
      if ((bVar1 & 0xf) == 0) {
        local_e0[0] = uVar15;
      }
      if ((10 < local_e0[0]) || (local_e0[0] - 3 < 5)) {
LAB_1802d9c3d:
        local_e8 = -1;
        goto LAB_1802d9c45;
      }
      bVar2 = _Src[1];
      uVar14 = (ulonglong)(bVar2 & 0x7f);
      if (uVar14 == 0x7e) {
        puVar5 = (undefined2 *)FUN_1802d8e90(param_1,2,&local_f0,local_f8);
        if ((local_f8[0] == -1) || (puVar5 == (undefined2 *)0x0)) goto LAB_1802d9c3d;
        if (local_f0 < 2) goto LAB_1802d9e96;
        uVar4 = Ordinal_15(*puVar5);
        uVar14 = (ulonglong)uVar4;
      }
      else if (uVar14 == 0x7f) {
        puVar6 = (ulonglong *)FUN_1802d8e90(param_1,8,&local_f0,local_f8);
        if ((local_f8[0] == -1) || (puVar6 == (ulonglong *)0x0)) goto LAB_1802d9c3d;
        if (local_f0 < 8) goto LAB_1802d9e96;
        uVar14 = *puVar6;
        uVar14 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
                 (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
                 (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 |
                 (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
      }
      if (0x7f < bVar2) {
        lVar7 = FUN_1802d8e90(param_1,4,&local_f0,local_f8);
        if ((local_f8[0] == -1) || (lVar7 == 0)) goto LAB_1802d9c3d;
        if (local_f0 < 4) goto LAB_1802d9e96;
      }
      pvVar8 = (void *)FUN_1802d8e90(param_1,uVar14,&local_f0,local_f8);
      if ((local_f8[0] == -1) || (pvVar8 == (void *)0x0)) goto LAB_1802d9c3d;
      if (local_f0 < uVar14) goto LAB_1802d9e96;
      if ((0x7f < bVar2) && (uVar9 = 0, uVar14 != 0)) {
        do {
          *(byte *)((longlong)pvVar8 + uVar9) =
               *(byte *)((longlong)pvVar8 + uVar9) ^ local_e4[(uint)uVar9 & 3];
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar14);
      }
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)
                  FUN_1802c7b50("E:\\paho.mqtt.c\\src\\WebSocket.c",0x4a6,local_f0 + 0x10);
        if (plVar11 == (longlong *)0x0) goto LAB_1802d9e42;
        plVar11[1] = 0;
      }
      else {
        pbVar16 = (byte *)*plVar11;
        plVar10 = (longlong *)
                  FUN_1802c7d40("E:\\paho.mqtt.c\\src\\WebSocket.c",0x4ae,plVar11,
                                pbVar16 + local_f0 + 0x10);
        if (plVar10 == (longlong *)0x0) {
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x4b1,plVar11);
LAB_1802d9e42:
          local_e8 = -99;
          goto LAB_1802d9c45;
        }
        plVar11 = plVar10;
      }
      if ((DAT_1804472c8 != (longlong *)0x0) && (*DAT_1804472c8 != 0)) {
        *(longlong **)(*DAT_1804472c8 + 0x10) = plVar11;
      }
      memcpy(pbVar16 + 0x10 + (longlong)plVar11,pvVar8,local_f0);
      *plVar11 = (longlong)(pbVar16 + local_f0);
      FUN_1802d8e90(param_1,0,&local_f0,local_f8);
      uVar15 = local_e0[0];
      if (local_f8[0] == -1) goto LAB_1802d9c3d;
    } while (bVar1 < 0x80);
    if (local_e0[0] == 9) {
      local_c0[0] = *plVar11;
      local_c8 = plVar11 + 2;
      FUN_1802c7f40("WebSocket_pong",0x398,3);
      if (*(int *)(param_1 + 10) != 0) {
        local_68 = 1;
        local_d8 = 0;
        local_c0[1] = 0;
        local_e0[0] = 0;
        pplStack_60 = &local_c8;
        local_48 = 0;
        local_58 = local_c0;
        puStack_50 = local_e0;
        local_108 = &local_68;
        local_110 = local_c0 + 1;
        local_118 = (int *)&local_d8;
        puVar12 = (undefined8 *)FUN_1802d84f0(local_78,param_1,10,1);
        local_d8 = *puVar12;
        uStack_d0 = puVar12[1];
        FUN_1802c6d90(4,1,"Sending WebSocket PONG");
        uVar3 = local_d8;
        local_a8 = CONCAT44(uStack_64,local_68);
        pplStack_a0 = pplStack_60;
        local_88 = local_48;
        local_98 = local_58;
        puStack_90 = puStack_50;
        if (param_1[4] == 0) {
          FUN_1802ca2e0(*param_1,local_d8,uStack_d0,&local_a8);
        }
        else {
          local_118 = (int *)&local_a8;
          FUN_1802cd1f0(param_1[4],*param_1,local_d8,uStack_d0);
        }
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x3ad,uVar3);
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x3ae,0);
      }
      FUN_1802c8030("WebSocket_pong",0x3b0,0,3);
    }
    else if (local_e0[0] != 10) {
      if (local_e0[0] == 8) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x4d8,plVar11);
        FUN_1802d8870(param_1,0x3e9,0);
        goto LAB_1802d9c3d;
      }
      break;
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x4d2,plVar11);
    plVar11 = (longlong *)0x0;
  } while ((uVar15 == 9) || (uVar15 == 10));
  if ((int)DAT_1804472c8[3] == 0) {
    FUN_1802c82a0(DAT_1804472c8,plVar11,*plVar11 + 0x10);
  }
  *local_b0 = *plVar11 - plVar11[1];
  if (local_e8 == -0x16) {
    DAT_1804472e0 = (byte *)0x0;
  }
LAB_1802d9c45:
  FUN_1802c8030("WebSocket_receiveFrame",0x4ea,&local_e8,3);
  return local_e8;
}



// ===== FUN_1802d9eb0 @ 1802d9eb0 (size 254)

void FUN_1802d9eb0(void)

{
  longlong lVar1;
  
  FUN_1802c7f40("WebSocket_terminate",0x510,3);
  if (DAT_1804472c8 != 0) {
    lVar1 = FUN_1802c83f0();
    while (lVar1 != 0) {
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x517,lVar1);
      lVar1 = FUN_1802c83f0(DAT_1804472c8);
    }
    FUN_1802c85f0(DAT_1804472c8);
    DAT_1804472c8 = 0;
  }
  if (DAT_1804472c0 != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x51f);
    DAT_1804472c0 = 0;
  }
  if (DAT_1804472d0 != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x525);
    DAT_1804472d0 = 0;
  }
  DAT_1804472d8 = 0;
  DAT_1804472e0 = 0;
  DAT_1804472e8 = 0;
  FUN_1802ca210();
  FUN_1802cd780();
  FUN_1802c8030("WebSocket_terminate",0x531,0,3);
  return;
}



// ===== FUN_1802d9fb0 @ 1802d9fb0 (size 1128)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802d9fb0(longlong param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_128 [32];
  char *local_108;
  int local_f8 [2];
  ulonglong local_f0;
  undefined1 local_e8 [96];
  char local_88 [64];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_1803c3d80 ^ (ulonglong)auStack_128;
  iVar9 = -1;
  local_f8[0] = -1;
  FUN_1802c7f40("WebSocket_upgrade",0x545,3);
  if (*(longlong *)(param_1 + 0x58) == 0) goto LAB_1802da3dc;
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_108 = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
  local_f0 = 0;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  snprintf(local_88,0x3e,&DAT_180300de8);
  FUN_1801c3750(local_e8);
  sVar2 = strlen(local_88);
  FUN_1801c37d0(local_e8,local_88,sVar2);
  FUN_1801c35c0(local_48,local_e8);
  FUN_1802dd950(local_88,0x3e,local_48,0x14);
  pcVar3 = (char *)FUN_1802d8e90(param_1,0xc,&local_f0,local_f8);
  if (local_f8[0] == -1) goto LAB_1802da3dc;
  if ((pcVar3 == (char *)0x0) || (local_f0 < 0xc)) {
    FUN_1802c6d90(4,1,"WebSocket upgrade read not complete %lu");
    local_f8[0] = -0x16;
    goto LAB_1802da3dc;
  }
  iVar1 = strncmp(pcVar3,"HTTP/1.1",8);
  if ((iVar1 == 0) && (iVar1 = strncmp(pcVar3 + 9,"101",3), iVar1 != 0)) {
    FUN_1802c6d90(4,1,"WebSocket HTTP rc %.3s",pcVar3 + 9);
    local_f8[0] = -1;
    goto LAB_1802da3dc;
  }
  iVar1 = strncmp(pcVar3,"HTTP/1.1 101",0xc);
  if ((iVar1 != 0) ||
     (pcVar3 = (char *)FUN_1802d8e90(param_1,0x400,&local_f0,local_f8), local_f8[0] == -1))
  goto LAB_1802da3dc;
  if ((pcVar3 != (char *)0x0) &&
     ((4 < local_f0 && (*(int *)(pcVar3 + (local_f0 - 4)) != 0xa0d0a0d)))) {
    FUN_1802c6d90(4,0xffffffff,"WebSocket HTTP upgrade response read not complete %lu",local_f0);
    local_f8[0] = -1;
    goto LAB_1802da3dc;
  }
  pcVar5 = (char *)0x0;
  if ((pcVar3 == (char *)0x0) || (pcVar6 = pcVar3, uVar8 = local_f0, local_f0 < 10)) {
LAB_1802da357:
    pcVar3 = "WebSocket failed to upgrade connection";
  }
  else {
    do {
      if (pcVar5 != (char *)0x0) goto LAB_1802da219;
      iVar1 = _strnicmp(pcVar6,"Connection",10);
      pcVar5 = pcVar6;
      if (iVar1 != 0) {
        pcVar5 = (char *)0x0;
      }
      pcVar6 = pcVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (9 < uVar8);
    if (pcVar5 == (char *)0x0) goto LAB_1802da357;
LAB_1802da219:
    uVar8 = local_f0;
    pvVar4 = memchr(pcVar5,10,(size_t)(pcVar5 + (local_f0 - (longlong)pcVar3)));
    if (pvVar4 == (void *)0x0) goto LAB_1802da357;
    uVar7 = (longlong)pvVar4 - (longlong)pcVar5;
    pcVar6 = (char *)0x0;
    if (6 < uVar7) {
      do {
        if (pcVar6 != (char *)0x0) break;
        iVar1 = _strnicmp(pcVar5,"Upgrade",7);
        pcVar6 = pcVar5;
        if (iVar1 != 0) {
          pcVar6 = (char *)0x0;
        }
        pcVar5 = pcVar5 + 1;
        uVar7 = uVar7 - 1;
      } while (6 < uVar7);
      uVar8 = local_f0;
    }
    if (((pcVar6 == (char *)0x0) || (pcVar5 = (char *)0x0, uVar8 == 0)) ||
       (pcVar6 = pcVar3, uVar8 < 0x14)) goto LAB_1802da357;
    do {
      if (pcVar5 != (char *)0x0) goto LAB_1802da2dc;
      iVar1 = _strnicmp(pcVar6,"sec-websocket-accept",0x14);
      pcVar5 = pcVar6;
      if (iVar1 != 0) {
        pcVar5 = (char *)0x0;
      }
      pcVar6 = pcVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (0x13 < uVar8);
    if (pcVar5 == (char *)0x0) goto LAB_1802da357;
LAB_1802da2dc:
    pvVar4 = memchr(pcVar5,10,(size_t)(pcVar5 + (local_f0 - (longlong)pcVar3)));
    if ((pvVar4 == (void *)0x0) ||
       (pcVar3 = memchr(pcVar5,0x3a,(longlong)pvVar4 - (longlong)pcVar5), pcVar3 == (char *)0x0))
    goto LAB_1802da357;
    sVar2 = (longlong)pvVar4 - (longlong)pcVar3;
    while( true ) {
      sVar2 = sVar2 - 1;
      if ((*pcVar3 != ':') && (*pcVar3 != ' ')) break;
      pcVar3 = pcVar3 + 1;
    }
    iVar1 = strncmp(pcVar3,local_88,sVar2);
    if (iVar1 != 0) goto LAB_1802da357;
    *(undefined4 *)(param_1 + 0x50) = 1;
    pcVar3 = "WebSocket connection upgraded";
    iVar9 = 1;
  }
  FUN_1802c6d90(4,1,pcVar3);
  local_f8[0] = iVar9;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\WebSocket.c",0x5d5);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_1802d8e90(param_1,0,&local_f0,local_f8);
LAB_1802da3dc:
  FUN_1802c8030("WebSocket_upgrade",0x5df,local_f8,3);
  return local_f8[0];
}



// ===== FUN_1802da420 @ 1802da420 (size 64)

undefined * FUN_1802da420(uint param_1,int param_2)

{
  if (param_2 == 4) {
    if ((-1 < (int)param_1) && (param_1 < 0x1f)) {
      return (&PTR_s__d__s__>_CONNECT_version__d_clea_1803c3bf0)[(int)param_1];
    }
  }
  else if ((-1 < (int)param_1) && (param_1 < 0xd)) {
    return (&PTR_s_Failed_to_remove_client_from_bst_1803c3cf0)[(int)param_1];
  }
  return (undefined *)0x0;
}



// ===== FUN_1802da460 @ 1802da460 (size 381)

longlong FUN_1802da460(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong local_res8;
  
  iVar6 = 0;
  if ((int)param_1[4] < 1) {
    return 0;
  }
  plVar7 = param_1;
  do {
    uVar5 = 0;
    local_res8 = 0;
    iVar3 = 1;
    plVar2 = (longlong *)*plVar7;
    plVar1 = (longlong *)0x0;
    while (plVar4 = plVar2, plVar4 != (longlong *)0x0) {
      iVar3 = (*(code *)plVar7[1])(plVar4[3],param_2,1);
      uVar5 = (ulonglong)(0 < iVar3);
      if (iVar3 == 0) break;
      plVar1 = plVar4;
      plVar2 = (longlong *)plVar4[uVar5 + 1];
    }
    if (iVar3 == 0) {
      if ((*(uint *)(param_1 + 6) & 2) == 0) {
        if (iVar6 == 0) {
          param_1[5] = param_1[5] + (param_3 - plVar4[4]);
        }
        goto LAB_1802da57b;
      }
LAB_1802da596:
    }
    else {
      if ((*(uint *)(param_1 + 6) & 1) == 0) {
        plVar4 = malloc(0x30);
      }
      else {
        plVar4 = (longlong *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\Tree.c",0xf8,0x30);
      }
      if (plVar4 == (longlong *)0x0) goto LAB_1802da596;
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      if (plVar1 == (longlong *)0x0) {
        *plVar7 = (longlong)plVar4;
      }
      else {
        plVar1[uVar5 + 1] = (longlong)plVar4;
      }
      *(uint *)(plVar4 + 5) = *(uint *)(plVar4 + 5) | 1;
      *plVar4 = (longlong)plVar1;
      if (iVar6 == 0) {
        *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
        param_1[5] = param_1[5] + param_3;
      }
LAB_1802da57b:
      plVar4[3] = param_2;
      plVar4[4] = param_3;
      FUN_1802da730(param_1,plVar4,iVar6);
      local_res8 = param_2;
    }
    iVar6 = iVar6 + 1;
    plVar7 = plVar7 + 2;
    if ((int)param_1[4] <= iVar6) {
      return local_res8;
    }
  } while( true );
}



// ===== FUN_1802da5e0 @ 1802da5e0 (size 322)

longlong FUN_1802da5e0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *param_2;
  lVar5 = (longlong)param_3;
  lVar2 = lVar5 * 8;
  lVar4 = *(longlong *)(lVar2 + 8 + lVar6);
  if (lVar4 != 0) {
    if ((*(uint *)(lVar4 + 0x28) & 1) != 0) {
      *(uint *)(lVar4 + 0x28) = *(uint *)(lVar4 + 0x28) & 0xfffffffe;
      *(uint *)(*param_2 + 0x28) = *(uint *)(*param_2 + 0x28) | 1;
      FUN_1802dadc0(param_1,*param_2,param_3 == 0,param_4);
      lVar6 = *param_2;
      lVar4 = *(longlong *)(lVar6 + 8 + lVar2);
    }
    if (lVar4 != 0) {
      lVar3 = 8;
      if (param_3 == 0) {
        lVar3 = 0x10;
      }
      puVar1 = (uint *)(*(longlong *)(lVar3 + lVar4) + 0x28);
      if (((*(longlong *)(lVar3 + lVar4) == 0) || ((*(byte *)puVar1 & 1) == 0)) &&
         ((lVar3 = *(longlong *)(lVar2 + 8 + lVar4), lVar3 == 0 ||
          ((*(byte *)(lVar3 + 0x28) & 1) == 0)))) {
        *(uint *)(lVar4 + 0x28) = *(uint *)(lVar4 + 0x28) | 1;
        return *param_2;
      }
      lVar2 = *(longlong *)(lVar4 + lVar2 + 8);
      if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x28) & 1) == 0)) {
        *puVar1 = *puVar1 & 0xfffffffe;
        *(uint *)(lVar4 + 0x28) = *(uint *)(lVar4 + 0x28) | 1;
        FUN_1802dadc0(param_1,lVar4,param_3,param_4);
        lVar6 = *param_2;
        lVar4 = *(longlong *)(lVar6 + 8 + lVar5 * 8);
      }
      *(uint *)(lVar4 + 0x28) =
           *(uint *)(lVar4 + 0x28) ^ (*(uint *)(lVar4 + 0x28) ^ *(uint *)(lVar6 + 0x28)) & 1;
      *(uint *)(*param_2 + 0x28) = *(uint *)(*param_2 + 0x28) & 0xfffffffe;
      puVar1 = (uint *)(*(longlong *)(lVar4 + 8 + lVar5 * 8) + 0x28);
      *puVar1 = *puVar1 & 0xfffffffe;
      FUN_1802dadc0(param_1,*param_2,param_3 == 0,param_4);
      return *(longlong *)(param_1 + (longlong)param_4 * 0x10);
    }
  }
  return lVar6;
}



// ===== FUN_1802da730 @ 1802da730 (size 470)

void FUN_1802da730(longlong param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_3;
  do {
    while( true ) {
      if ((((param_2 == (longlong *)0x0) ||
           (plVar5 = (longlong *)*param_2, plVar5 == (longlong *)0x0)) ||
          ((*(byte *)(plVar5 + 5) & 1) == 0)) || (lVar2 = *plVar5, lVar2 == 0)) {
        puVar1 = (uint *)(*(longlong *)(param_1 + lVar6 * 0x10) + 0x28);
        *puVar1 = *puVar1 & 0xfffffffe;
        return;
      }
      lVar3 = *(longlong *)(lVar2 + 8);
      if (plVar5 == (longlong *)lVar3) break;
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x28) & 1) != 0)) {
        *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) & 0xfffffffe;
        goto LAB_1802da848;
      }
      plVar4 = plVar5;
      if (param_2 == (longlong *)plVar5[1]) {
        FUN_1802dadc0(param_1,plVar5,1,param_3);
        plVar4 = (longlong *)*plVar5;
        param_2 = plVar5;
      }
      *(uint *)((longlong)plVar4 + 0x28) = *(uint *)((longlong)plVar4 + 0x28) & 0xfffffffe;
      *(uint *)(*(longlong *)*param_2 + 0x28) = *(uint *)(*(longlong *)*param_2 + 0x28) | 1;
      plVar5 = *(longlong **)*param_2;
      plVar4 = (longlong *)plVar5[2];
      plVar5[2] = plVar4[1];
      if ((undefined8 *)plVar4[1] != (undefined8 *)0x0) {
        *(undefined8 *)plVar4[1] = plVar5;
      }
      *plVar4 = *plVar5;
      lVar2 = *plVar5;
      if (lVar2 == 0) {
        *(longlong **)(param_1 + lVar6 * 0x10) = plVar4;
      }
      else if (plVar5 == *(longlong **)(lVar2 + 8)) {
        *(longlong **)(lVar2 + 8) = plVar4;
      }
      else {
        *(longlong **)(lVar2 + 0x10) = plVar4;
      }
      plVar4[1] = (longlong)plVar5;
LAB_1802da8d6:
      *plVar5 = (longlong)plVar4;
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x28) & 1) == 0)) {
      plVar4 = plVar5;
      if (param_2 == (longlong *)plVar5[2]) {
        FUN_1802dadc0(param_1,plVar5,0,param_3);
        plVar4 = (longlong *)*plVar5;
        param_2 = plVar5;
      }
      *(uint *)((longlong)plVar4 + 0x28) = *(uint *)((longlong)plVar4 + 0x28) & 0xfffffffe;
      *(uint *)(*(longlong *)*param_2 + 0x28) = *(uint *)(*(longlong *)*param_2 + 0x28) | 1;
      plVar5 = *(longlong **)*param_2;
      plVar4 = (longlong *)plVar5[1];
      plVar5[1] = plVar4[2];
      if ((longlong *)plVar4[2] != (longlong *)0x0) {
        *(longlong *)plVar4[2] = (longlong)plVar5;
      }
      *plVar4 = *plVar5;
      lVar2 = *plVar5;
      if (lVar2 == 0) {
        *(longlong **)(param_1 + lVar6 * 0x10) = plVar4;
        plVar4[2] = (longlong)plVar5;
      }
      else if (plVar5 == *(longlong **)(lVar2 + 0x10)) {
        *(longlong **)(lVar2 + 0x10) = plVar4;
        plVar4[2] = (longlong)plVar5;
      }
      else {
        *(longlong **)(lVar2 + 8) = plVar4;
        plVar4[2] = (longlong)plVar5;
      }
      goto LAB_1802da8d6;
    }
    *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x28) & 0xfffffffe;
LAB_1802da848:
    *(uint *)(*param_2 + 0x28) = *(uint *)(*param_2 + 0x28) & 0xfffffffe;
    param_2 = *(longlong **)*param_2;
    *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | 1;
  } while( true );
}



// ===== FUN_1802da910 @ 1802da910 (size 408)

void FUN_1802da910(longlong param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)((longlong)param_3 * 0x10 + param_1);
  if (param_2 == (longlong *)*plVar4) {
    *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) & 0xfffffffe;
  }
  else {
    do {
      if ((param_2 != (longlong *)0x0) && ((*(byte *)(param_2 + 5) & 1) != 0)) break;
      plVar5 = (longlong *)*param_2;
      plVar3 = (longlong *)0x0;
      if (param_2[3] != 0) {
        plVar3 = param_2;
      }
      if (plVar3 == (longlong *)plVar5[1]) {
        plVar3 = (longlong *)plVar5[2];
        if (plVar3 != (longlong *)0x0) {
          if ((*(uint *)(plVar3 + 5) & 1) != 0) {
            *(uint *)(plVar3 + 5) = *(uint *)(plVar3 + 5) & 0xfffffffe;
            *(uint *)(*param_2 + 0x28) = *(uint *)(*param_2 + 0x28) | 1;
            FUN_1802dadc0(param_1,*param_2,0,param_3);
            plVar5 = (longlong *)*param_2;
            plVar3 = (longlong *)plVar5[2];
          }
          if (plVar3 != (longlong *)0x0) {
            puVar1 = (uint *)(plVar3[1] + 0x28);
            if (((plVar3[1] == 0) || ((*(byte *)puVar1 & 1) == 0)) &&
               ((plVar3[2] == 0 || ((*(byte *)(plVar3[2] + 0x28) & 1) == 0)))) {
              *(uint *)(plVar3 + 5) = *(uint *)(plVar3 + 5) | 1;
              param_2 = (longlong *)*param_2;
            }
            else {
              if ((plVar3[2] == 0) || ((*(byte *)(plVar3[2] + 0x28) & 1) == 0)) {
                *puVar1 = *puVar1 & 0xfffffffe;
                *(uint *)(plVar3 + 5) = *(uint *)(plVar3 + 5) | 1;
                plVar5 = (longlong *)plVar3[1];
                plVar3[1] = plVar5[2];
                if ((undefined8 *)plVar5[2] != (undefined8 *)0x0) {
                  *(undefined8 *)plVar5[2] = plVar3;
                }
                *plVar5 = *plVar3;
                lVar2 = *plVar3;
                if (lVar2 == 0) {
                  *plVar4 = (longlong)plVar5;
                }
                else if (plVar3 == *(longlong **)(lVar2 + 0x10)) {
                  *(longlong **)(lVar2 + 0x10) = plVar5;
                }
                else {
                  *(longlong **)(lVar2 + 8) = plVar5;
                }
                plVar5[2] = (longlong)plVar3;
                *plVar3 = (longlong)plVar5;
                plVar5 = (longlong *)*param_2;
                plVar3 = (longlong *)plVar5[2];
              }
              *(uint *)(plVar3 + 5) =
                   *(uint *)(plVar3 + 5) ^ (*(uint *)(plVar3 + 5) ^ *(uint *)(plVar5 + 5)) & 1;
              *(uint *)(*param_2 + 0x28) = *(uint *)(*param_2 + 0x28) & 0xfffffffe;
              *(uint *)(plVar3[2] + 0x28) = *(uint *)(plVar3[2] + 0x28) & 0xfffffffe;
              FUN_1802dadc0(param_1,*param_2,0,param_3);
              param_2 = (longlong *)*plVar4;
            }
            goto LAB_1802daa80;
          }
        }
        param_2 = plVar5;
      }
      else {
        param_2 = (longlong *)FUN_1802da5e0(param_1,param_2,0,param_3);
      }
LAB_1802daa80:
    } while (param_2 != (longlong *)*plVar4);
    *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) & 0xfffffffe;
  }
  return;
}



// ===== FUN_1802daac0 @ 1802daac0 (size 136)

longlong FUN_1802daac0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)((longlong)param_3 * 0x10 + param_1);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    do {
      iVar1 = (*(code *)plVar4[1])(*(undefined8 *)(lVar2 + 0x18),param_2,param_4);
      if (iVar1 == 0) break;
      lVar3 = 8;
      if (0 < iVar1) {
        lVar3 = 0x10;
      }
      lVar2 = *(longlong *)(lVar3 + lVar2);
    } while (lVar2 != 0);
  }
  return lVar2;
}



// ===== FUN_1802dab80 @ 1802dab80 (size 103)

undefined8 * FUN_1802dab80(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if ((puVar1 != (undefined8 *)0x0) &&
       (puVar2 = (undefined8 *)puVar1[1], puVar2 != (undefined8 *)0x0)) {
      do {
        puVar1 = puVar2;
        puVar2 = (undefined8 *)puVar2[1];
      } while (puVar2 != (undefined8 *)0x0);
      return puVar1;
    }
  }
  else {
    puVar1 = (undefined8 *)param_2[2];
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*param_2;
      while ((puVar1 = puVar2, puVar1 != (undefined8 *)0x0 && (param_2 == (undefined8 *)puVar1[2])))
      {
        param_2 = puVar1;
        puVar2 = (undefined8 *)*puVar1;
      }
    }
    else {
      puVar2 = (undefined8 *)puVar1[1];
      if (puVar2 != (undefined8 *)0x0) {
        do {
          puVar1 = puVar2;
          puVar2 = (undefined8 *)puVar2[1];
        } while (puVar2 != (undefined8 *)0x0);
        return puVar1;
      }
    }
  }
  return puVar1;
}



// ===== FUN_1802dabf0 @ 1802dabf0 (size 125)

void FUN_1802dabf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_1802daac0(param_1,param_2,0,0);
  if (lVar1 == 0) {
    return;
  }
  lVar1 = FUN_1802dac70(param_1,lVar1,0);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      if (iVar2 != 0) {
        lVar1 = FUN_1802daac0(param_1,lVar1,iVar2,1);
        if (lVar1 != 0) {
          lVar1 = FUN_1802dac70(param_1,lVar1,iVar2);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return;
}



// ===== FUN_1802dac70 @ 1802dac70 (size 332)

longlong FUN_1802dac70(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *_Memory;
  longlong local_38 [6];
  
  lVar1 = param_2[4];
  lVar2 = param_2[3];
  _Memory = param_2;
  if ((param_2[1] != 0) && (plVar4 = (longlong *)param_2[2], plVar4 != (longlong *)0x0)) {
    _Memory = plVar4;
    for (plVar4 = (longlong *)plVar4[1]; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[1])
    {
      _Memory = plVar4;
    }
  }
  lVar3 = 8;
  if (_Memory[1] == 0) {
    lVar3 = 0x10;
  }
  plVar4 = *(longlong **)(lVar3 + (longlong)_Memory);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = *_Memory;
  }
  lVar3 = *_Memory;
  if (lVar3 == 0) {
    *(longlong **)(param_1 + (longlong)param_3 * 0x10) = plVar4;
  }
  else if (_Memory == *(longlong **)(lVar3 + 8)) {
    *(longlong **)(lVar3 + 8) = plVar4;
  }
  else {
    *(longlong **)(lVar3 + 0x10) = plVar4;
  }
  if (_Memory != param_2) {
    param_2[3] = _Memory[3];
    param_2[4] = _Memory[4];
  }
  if ((*(byte *)(_Memory + 5) & 1) == 0) {
    if (plVar4 == (longlong *)0x0) {
      if (*_Memory == 0) goto LAB_1802dad6e;
      plVar4 = local_38;
      local_38[5] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[0] = *_Memory;
    }
    FUN_1802da910(param_1,plVar4,param_3);
  }
LAB_1802dad6e:
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    free(_Memory);
  }
  else {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Tree.c",0x1d7,_Memory);
  }
  if (param_3 == 0) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) - lVar1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  }
  return lVar2;
}



// ===== FUN_1802dadc0 @ 1802dadc0 (size 125)

void FUN_1802dadc0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (param_3 == 0) {
    lVar4 = 8;
  }
  lVar3 = (longlong)param_3;
  plVar1 = *(longlong **)(lVar4 + 8 + (longlong)param_2);
  *(longlong *)(lVar4 + 8 + (longlong)param_2) = plVar1[lVar3 + 1];
  if ((undefined8 *)plVar1[lVar3 + 1] != (undefined8 *)0x0) {
    *(undefined8 *)plVar1[lVar3 + 1] = param_2;
  }
  *plVar1 = *param_2;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *(longlong **)(param_1 + (longlong)param_4 * 0x10) = plVar1;
    plVar1[lVar3 + 1] = (longlong)param_2;
    *param_2 = (longlong)plVar1;
    return;
  }
  if (param_2 == *(longlong **)(lVar2 + 8 + lVar3 * 8)) {
    *(longlong **)(lVar2 + lVar3 * 8 + 8) = plVar1;
    plVar1[lVar3 + 1] = (longlong)param_2;
    *param_2 = (longlong)plVar1;
    return;
  }
  *(longlong **)(lVar2 + 8 + lVar4) = plVar1;
  plVar1[lVar3 + 1] = (longlong)param_2;
  *param_2 = (longlong)plVar1;
  return;
}



// ===== FUN_1802dae40 @ 1802dae40 (size 215)

void FUN_1802dae40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_res8;
  longlong local_res10 [3];
  
  local_res8 = param_1;
  FUN_1802c7f40("SocketBuffer_cleanup",0x99,3);
  local_res10[0] = local_res8;
  FUN_1802c8980(&DAT_180447300,local_res10,&LAB_1802db840);
  lVar2 = FUN_1802c8540(DAT_1804472f8,&local_res8,&LAB_1802db840);
  if (lVar2 != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SocketBuffer.c",0x9d,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(DAT_1804472f8 + 0x10) + 0x10) + 0x30))
    ;
    FUN_1802c87f0(DAT_1804472f8,*(undefined8 *)(*(longlong *)(DAT_1804472f8 + 0x10) + 0x10));
  }
  plVar1 = DAT_1804472f0;
  if (*DAT_1804472f0 == local_res8) {
    *(undefined4 *)(DAT_1804472f0 + 1) = 0;
    *plVar1 = 0;
    plVar1[5] = 0;
    plVar1[2] = 0;
  }
  FUN_1802c8030("SocketBuffer_cleanup",0xa5,0,3);
  return;
}



// ===== FUN_1802daf20 @ 1802daf20 (size 225)

undefined8 FUN_1802daf20(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_1802c7f40("SocketBuffer_complete",0x12d,3);
  lVar2 = FUN_1802c8540(DAT_1804472f8,local_res8,&LAB_1802db840);
  if (lVar2 != 0) {
    puVar1 = *(undefined8 **)(*(longlong *)(DAT_1804472f8 + 0x10) + 0x10);
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SocketBuffer.c",0x7c,DAT_1804472f0[6]);
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SocketBuffer.c",0x7d,DAT_1804472f0);
    DAT_1804472f0 = puVar1;
    FUN_1802c8320(DAT_1804472f8);
  }
  puVar1 = DAT_1804472f0;
  *(undefined4 *)(DAT_1804472f0 + 1) = 0;
  *puVar1 = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  FUN_1802c8030("SocketBuffer_complete",0x137,0,3);
  return DAT_1804472f0[6];
}



// ===== FUN_1802db010 @ 1802db010 (size 227)

undefined4 FUN_1802db010(undefined8 param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 local_res8 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0xffffffea;
  local_res8[0] = param_1;
  FUN_1802c7f40("SocketBuffer_getQueuedChar",0xf1,3);
  lVar2 = FUN_1802c8540(DAT_1804472f8,local_res8,&LAB_1802db840);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(DAT_1804472f8 + 0x10) + 0x10);
    uVar1 = *(uint *)(lVar2 + 8);
    if ((ulonglong)uVar1 < *(ulonglong *)(lVar2 + 0x10)) {
      *param_2 = *(undefined1 *)((ulonglong)uVar1 + 0x18 + lVar2);
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      FUN_1802c6d90(1,0xffffffff,"index is now %d, headerlen %d",*(undefined4 *)(lVar2 + 8),
                    *(undefined4 *)(lVar2 + 0x10));
      local_res18[0] = 0;
    }
    else if (4 < uVar1) {
      FUN_1802c6d90(7,0xffffffff,"header is already at full length");
      local_res18[0] = 0xffffffff;
    }
  }
  FUN_1802c8030("SocketBuffer_getQueuedChar",0x104,local_res18,3);
  return local_res18[0];
}



// ===== FUN_1802db100 @ 1802db100 (size 326)

undefined8 FUN_1802db100(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *_Dst;
  longlong lVar2;
  undefined8 uVar3;
  void *_Src;
  undefined8 local_res8;
  
  local_res8 = param_1;
  FUN_1802c7f40("SocketBuffer_getQueuedData",0xb4,3);
  lVar1 = FUN_1802c8540(DAT_1804472f8,&local_res8,&LAB_1802db840);
  if (lVar1 == 0) {
    uVar3 = 0;
    lVar1 = DAT_1804472f0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(DAT_1804472f8 + 0x10) + 0x10);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
  }
  *param_3 = uVar3;
  if (*(ulonglong *)(lVar1 + 0x20) < param_2) {
    if (*(longlong *)(lVar1 + 0x28) == 0) {
      lVar2 = FUN_1802c7d40("E:\\paho.mqtt.c\\src\\SocketBuffer.c",0xd3,
                            *(undefined8 *)(lVar1 + 0x30),param_2);
      if (lVar2 != 0) {
        *(longlong *)(lVar1 + 0x30) = lVar2;
        *(ulonglong *)(lVar1 + 0x20) = param_2;
        goto LAB_1802db218;
      }
      _Src = *(void **)(lVar1 + 0x30);
      uVar3 = 0xda;
    }
    else {
      _Dst = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\SocketBuffer.c",0xc3,param_2);
      _Src = *(void **)(lVar1 + 0x30);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,_Src,*(size_t *)(lVar1 + 0x28));
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SocketBuffer.c",199,*(undefined8 *)(lVar1 + 0x30));
        *(void **)(lVar1 + 0x30) = _Dst;
        *(ulonglong *)(lVar1 + 0x20) = param_2;
        goto LAB_1802db218;
      }
      uVar3 = 0xcc;
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SocketBuffer.c",uVar3,_Src);
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
LAB_1802db218:
  FUN_1802c8030("SocketBuffer_getQueuedData",0xe2,0,3);
  return *(undefined8 *)(lVar1 + 0x30);
}



// ===== FUN_1802db290 @ 1802db290 (size 114)

int FUN_1802db290(void)

{
  int local_res8 [8];
  
  FUN_1802c7f40("SocketBuffer_initialize",0x6a,3);
  local_res8[0] = FUN_1802db3d0();
  if (local_res8[0] == 0) {
    DAT_1804472f8 = FUN_1802c86e0();
    if (DAT_1804472f8 == 0) {
      local_res8[0] = -99;
    }
  }
  FUN_1802c8ab0(&DAT_180447300);
  FUN_1802c8030("SocketBuffer_initialize",0x72,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802db310 @ 1802db310 (size 178)

void FUN_1802db310(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  
  local_res8 = param_1;
  FUN_1802c7f40("SocketBuffer_interrupted",0x112,3);
  lVar3 = FUN_1802c8540(DAT_1804472f8,&local_res8,&LAB_1802db840);
  lVar2 = DAT_1804472f8;
  puVar4 = DAT_1804472f0;
  if (lVar3 == 0) {
    plVar1 = DAT_1804472f0 + 4;
    *DAT_1804472f0 = local_res8;
    FUN_1802c82a0(lVar2,puVar4,*plVar1 + 0x38);
    FUN_1802db3d0();
  }
  else {
    puVar4 = *(undefined8 **)(*(longlong *)(DAT_1804472f8 + 0x10) + 0x10);
  }
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[5] = param_2;
  FUN_1802c8030("SocketBuffer_interrupted",0x122,0,3);
  return;
}



// ===== FUN_1802db3d0 @ 1802db3d0 (size 121)

undefined8 FUN_1802db3d0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  DAT_1804472f0 = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\SocketBuffer.c",0x53,0x38);
  if (DAT_1804472f0 != (undefined8 *)0x0) {
    DAT_1804472f0[4] = 1000;
    lVar2 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\SocketBuffer.c",0x57,1000);
    puVar1 = DAT_1804472f0;
    DAT_1804472f0[6] = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      *puVar1 = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      return 0;
    }
  }
  return 0xffffff9d;
}



// ===== FUN_1802db450 @ 1802db450 (size 260)

undefined4
FUN_1802db450(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4,
             undefined4 *param_5,longlong param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 local_18 [4];
  
  lVar8 = (longlong)param_3;
  local_18[0] = 0;
  FUN_1802c7f40("SocketBuffer_pendingWrite",0x176,3);
  puVar5 = (undefined8 *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\SocketBuffer.c",0x178,0x90);
  if (puVar5 == (undefined8 *)0x0) {
    local_18[0] = 0xffffff9d;
  }
  else {
    puVar5[3] = param_2;
    *puVar5 = param_1;
    puVar5[4] = param_7;
    puVar5[2] = param_6;
    *(int *)(puVar5 + 1) = param_3;
    if (0 < param_3) {
      puVar6 = param_5;
      puVar7 = param_4;
      do {
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        puVar1 = (undefined4 *)((longlong)puVar7 + (longlong)puVar5 + (0x28 - (longlong)param_4));
        *puVar1 = *puVar7;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        *(undefined4 *)((longlong)puVar6 + (longlong)puVar5 + (0x78 - (longlong)param_5)) = *puVar6;
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 4;
      } while (lVar8 != 0);
    }
    FUN_1802c82a0(&DAT_180447300,puVar5,param_6 + 8);
  }
  FUN_1802c8030("SocketBuffer_pendingWrite",0x18b,local_18,3);
  return local_18[0];
}



// ===== FUN_1802db560 @ 1802db560 (size 296)

void FUN_1802db560(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong local_res8;
  
  plVar5 = DAT_1804472f0;
  bVar1 = false;
  local_res8 = param_1;
  FUN_1802c7f40("SocketBuffer_queueChar",0x146,3);
  lVar4 = FUN_1802c8540(DAT_1804472f8,&local_res8,&LAB_1802db840);
  plVar2 = DAT_1804472f0;
  if (lVar4 == 0) {
    if (*DAT_1804472f0 == 0) {
      *DAT_1804472f0 = local_res8;
      *(undefined4 *)(plVar2 + 1) = 0;
      plVar2[5] = 0;
    }
    else if (*DAT_1804472f0 != local_res8) {
      FUN_1802c6d90(7,0xffffffff,"attempt to reuse socket queue");
      bVar1 = true;
    }
  }
  else {
    plVar5 = *(longlong **)(*(longlong *)(DAT_1804472f8 + 0x10) + 0x10);
  }
  uVar3 = *(uint *)(plVar5 + 1);
  if (uVar3 < 5) {
    if (!bVar1) {
      *(undefined1 *)((ulonglong)uVar3 + 0x18 + (longlong)plVar5) = param_2;
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      uVar6 = (ulonglong)*(uint *)(plVar5 + 1);
      plVar5[2] = uVar6;
      goto LAB_1802db62b;
    }
  }
  else {
    FUN_1802c6d90(7,0xffffffff,"socket queue fixed_header field full");
    uVar3 = *(uint *)(plVar5 + 1);
  }
  uVar6 = (ulonglong)uVar3;
LAB_1802db62b:
  FUN_1802c6d90(1,0xffffffff,"queueChar: index is now %d, headerlen %d",uVar6,(int)plVar5[2]);
  FUN_1802c8030("SocketBuffer_queueChar",0x15f,0,3);
  return;
}



// ===== FUN_1802db690 @ 1802db690 (size 238)

void FUN_1802db690(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  FUN_1802c8470(&DAT_180447300);
  FUN_1802c7f40("SocketBuffer_terminate",0x8a,3);
  lVar1 = FUN_1802c87d0(DAT_1804472f8,local_res8);
  while (lVar1 != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SocketBuffer.c",0x8c,
                  *(undefined8 *)(*(longlong *)(local_res8[0] + 0x10) + 0x30));
    lVar1 = FUN_1802c87d0(DAT_1804472f8,local_res8);
  }
  FUN_1802c85f0(DAT_1804472f8);
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SocketBuffer.c",0x7c,*(undefined8 *)(DAT_1804472f0 + 0x30));
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\SocketBuffer.c",0x7d,DAT_1804472f0);
  DAT_1804472f0 = 0;
  FUN_1802c8030("SocketBuffer_terminate",0x8f,0,3);
  return;
}



// ===== FUN_1802db780 @ 1802db780 (size 143)

longlong FUN_1802db780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  lVar2 = 0;
  local_res8 = param_1;
  FUN_1802c7f40("SocketBuffer_updateWrite",0x1bf,3);
  lVar1 = FUN_1802c8540(&DAT_180447300,&local_res8,&LAB_1802db840);
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), *(int *)(lVar2 + 8) == 4)) {
    *(undefined8 *)(lVar2 + 0x50) = param_2;
    *(undefined8 *)(lVar2 + 0x60) = param_3;
  }
  FUN_1802c8030("SocketBuffer_updateWrite",0x1ca,0,3);
  return lVar2;
}



// ===== FUN_1802db860 @ 1802db860 (size 509)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1802db860(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  undefined8 *puVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_2b8 [32];
  undefined4 local_298 [4];
  _WIN32_FIND_DATAA local_288;
  CHAR local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_2b8;
  puVar5 = (undefined8 *)0x0;
  local_298[0] = 0;
  lVar9 = 0;
  FUN_1802c7f40("keysWin32",0x2b8,3);
  iVar1 = snprintf(local_148,0x105,&DAT_1803861f4,param_1);
  if ((iVar1 < 0x105) &&
     (pvVar4 = FindFirstFileA(local_148,&local_288), pvVar4 != (HANDLE)0xffffffffffffffff)) {
    do {
      iVar1 = (int)lVar9 + 1;
      if (((byte)local_288.dwFileAttributes & 0x20) == 0) {
        iVar1 = (int)lVar9;
      }
      lVar9 = (longlong)iVar1;
      BVar2 = FindNextFileA(pvVar4,&local_288);
    } while ((BVar2 != 0) || (DVar3 = GetLastError(), DVar3 != 0x12));
    FindClose(pvVar4);
    if ((iVar1 != 0) &&
       (puVar5 = (undefined8 *)
                 FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x2d6,lVar9 << 3),
       puVar5 == (undefined8 *)0x0)) {
LAB_1802dba04:
      local_298[0] = 0xffffff9d;
      goto LAB_1802dba16;
    }
    pvVar4 = FindFirstFileA(local_148,&local_288);
    if (pvVar4 != (HANDLE)0xffffffffffffffff) {
      puVar8 = puVar5;
      do {
        if (((byte)local_288.dwFileAttributes & 0x20) != 0) {
          sVar6 = strlen(local_288.cFileName);
          pcVar7 = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x2e7,
                                         sVar6 + 1);
          *puVar8 = pcVar7;
          if (pcVar7 == (char *)0x0) goto LAB_1802dba04;
          strcpy(pcVar7,local_288.cFileName);
          pcVar7 = strstr((char *)*puVar8,".msg");
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = '\0';
          }
          puVar8 = puVar8 + 1;
        }
        BVar2 = FindNextFileA(pvVar4,&local_288);
      } while ((BVar2 != 0) || (DVar3 = GetLastError(), DVar3 != 0x12));
      FindClose(pvVar4);
      *param_3 = iVar1;
      *param_2 = puVar5;
      goto LAB_1802dba16;
    }
  }
  local_298[0] = 0xfffffffe;
LAB_1802dba16:
  FUN_1802c8030("keysWin32",0x304,local_298,3);
  return local_298[0];
}



// ===== FUN_1802dba60 @ 1802dba60 (size 577)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802dba60(char *param_1)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFindFile;
  size_t sVar4;
  size_t sVar5;
  char *_Filename;
  ulonglong uVar6;
  undefined1 auStack_2a8 [32];
  CHAR *local_288;
  int local_278;
  int local_274 [3];
  _WIN32_FIND_DATAA local_268;
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_2a8;
  local_274[0] = 0;
  FUN_1802c7f40("pstclear",0x224,3);
  if (param_1 == (char *)0x0) {
    local_274[0] = -2;
    goto LAB_1802dbc60;
  }
  local_278 = 0;
  FUN_1802c7f40("clearWin32",0x241,3);
  iVar1 = snprintf(local_128,0x105,&DAT_1803861f4,param_1);
  if (iVar1 < 0x105) {
    hFindFile = FindFirstFileA(local_128,&local_268);
    if (hFindFile == (HANDLE)0xffffffffffffffff) goto LAB_1802dbc24;
    do {
      do {
        if (((byte)local_268.dwFileAttributes & 0x20) != 0) {
          sVar4 = strlen(local_268.cFileName);
          sVar5 = strlen(param_1);
          uVar6 = sVar5 + 2 + sVar4;
          _Filename = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x251,
                                            uVar6);
          if (_Filename == (char *)0x0) {
            local_278 = -99;
            goto LAB_1802dbc2c;
          }
          local_288 = local_268.cFileName;
          iVar1 = snprintf(_Filename,uVar6,"%s/%s",param_1);
          if (uVar6 <= (ulonglong)(longlong)iVar1) {
            local_278 = -2;
            FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x25a,_Filename);
            goto LAB_1802dbc2c;
          }
          local_278 = remove(_Filename);
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x25e,_Filename);
          if (local_278 != 0) {
            local_278 = -2;
            FindClose(hFindFile);
            goto LAB_1802dbc2c;
          }
        }
        BVar2 = FindNextFileA(hFindFile,&local_268);
      } while (BVar2 != 0);
      DVar3 = GetLastError();
    } while (DVar3 != 0x12);
    FindClose(hFindFile);
  }
  else {
LAB_1802dbc24:
    local_278 = -2;
  }
LAB_1802dbc2c:
  FUN_1802c8030("clearWin32",0x270,&local_278,3);
  local_274[0] = local_278;
LAB_1802dbc60:
  FUN_1802c8030("pstclear",0x232,local_274,3);
  return local_274[0];
}



// ===== FUN_1802dbcb0 @ 1802dbcb0 (size 156)

undefined4 FUN_1802dbcb0(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  FUN_1802c7f40("pstclose",0x178,3);
  if (param_1 == (char *)0x0) {
    local_res8[0] = 0xfffffffe;
  }
  else {
    iVar1 = _rmdir(param_1);
    if (iVar1 != 0) {
      piVar2 = _errno();
      if (*piVar2 != 2) {
        piVar2 = _errno();
        if (*piVar2 != 0x29) {
          local_res8[0] = 0xfffffffe;
        }
      }
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x18a,param_1);
  }
  FUN_1802c8030("pstclose",0x18d,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802dbd50 @ 1802dbd50 (size 507)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1802dbd50(longlong param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  HANDLE hFindFile;
  size_t sVar5;
  char *_Dest;
  char *pcVar6;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined4 local_284 [3];
  _WIN32_FIND_DATAA local_278;
  CHAR local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_1803c3d80 ^ (ulonglong)auStack_2a8;
  local_284[0] = 0;
  FUN_1802c7f40("pstcontainskey",0x19a,3);
  if (param_1 == 0) {
    local_284[0] = 0xfffffffe;
  }
  else {
    local_288 = 0xfffffffe;
    bVar1 = false;
    FUN_1802c7f40("containskeyWin32",0x1bc,3);
    iVar2 = snprintf(local_138,0x105,&DAT_1803861f4,param_1);
    if ((iVar2 < 0x105) &&
       (hFindFile = FindFirstFileA(local_138,&local_278), hFindFile != (HANDLE)0xffffffffffffffff))
    {
      do {
        if (((byte)local_278.dwFileAttributes & 0x20) != 0) {
          sVar5 = strlen(local_278.cFileName);
          _Dest = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x1c7,
                                        sVar5 + 1);
          if (_Dest == (char *)0x0) {
            local_288 = 0xffffff9d;
            goto LAB_1802dbed9;
          }
          strcpy(_Dest,local_278.cFileName);
          pcVar6 = strstr(_Dest,".msg");
          if (pcVar6 != (char *)0x0) {
            *pcVar6 = '\0';
          }
          iVar2 = strcmp(_Dest,param_2);
          if (iVar2 == 0) {
            local_288 = 0;
            bVar1 = true;
          }
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x1d5,_Dest);
        }
        BVar3 = FindNextFileA(hFindFile,&local_278);
      } while (((BVar3 != 0) || (DVar4 = GetLastError(), DVar4 != 0x12)) && (!bVar1));
      FindClose(hFindFile);
    }
LAB_1802dbed9:
    FUN_1802c8030("containskeyWin32",0x1e0,&local_288,3);
    local_284[0] = local_288;
  }
  FUN_1802c8030("pstcontainskey",0x1a8,local_284,3);
  return local_284[0];
}



// ===== FUN_1802dbf50 @ 1802dbf50 (size 455)

undefined4 FUN_1802dbf50(char *param_1,char *param_2,undefined8 *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  char *_Filename;
  FILE *_File;
  void *_DstBuf;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("pstget",0x10c,3);
  if (param_1 == (char *)0x0) {
LAB_1802dc0d6:
    local_res8[0] = 0xfffffffe;
  }
  else {
    sVar3 = strlen(param_2);
    sVar4 = strlen(param_1);
    uVar5 = sVar3 + sVar4 + 6;
    _Filename = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x115,uVar5);
    if (_Filename != (char *)0x0) {
      iVar1 = snprintf(_Filename,uVar5,"%s/%s%s",param_1,param_2,&DAT_18038618c);
      if (uVar5 <= (ulonglong)(longlong)iVar1) {
        local_res8[0] = 0xfffffffe;
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x11e,_Filename);
        goto LAB_1802dc0de;
      }
      _File = fopen(_Filename,"rb");
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x123,_Filename);
      if (_File == (FILE *)0x0) goto LAB_1802dc0d6;
      fseek(_File,0,2);
      uVar2 = ftell(_File);
      fseek(_File,0,0);
      _DstBuf = (void *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x129,uVar2);
      if (_DstBuf != (void *)0x0) {
        sVar3 = fread(_DstBuf,1,(ulonglong)uVar2,_File);
        *param_3 = _DstBuf;
        *param_4 = (uint)sVar3;
        if ((uint)sVar3 != uVar2) {
          local_res8[0] = 0xfffffffe;
        }
        fclose(_File);
        goto LAB_1802dc0de;
      }
    }
    local_res8[0] = 0xffffff9d;
  }
LAB_1802dc0de:
  FUN_1802c8030("pstget",0x139,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802dc120 @ 1802dc120 (size 125)

undefined4 FUN_1802dc120(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_res8 [2];
  
  FUN_1802c7f40("pstkeys",0x298,3);
  if (param_1 == 0) {
    local_res8[0] = 0xfffffffe;
  }
  else {
    local_res8[0] = FUN_1802db860(param_1,param_2,param_3);
  }
  FUN_1802c8030("pstkeys",0x2a6,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802dc1a0 @ 1802dc1a0 (size 110)

undefined4 FUN_1802dc1a0(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FUN_1802c7f40("pstmkdir",0xa9,3);
  iVar1 = _mkdir(param_1);
  if (iVar1 != 0) {
    piVar2 = _errno();
    if (*piVar2 != 0x11) {
      local_res10[0] = 0xfffffffe;
    }
  }
  FUN_1802c8030("pstmkdir",0xba,local_res10,3);
  return local_res10[0];
}



// ===== FUN_1802dc210 @ 1802dc210 (size 903)

int FUN_1802dc210(undefined8 *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  char *_Dest;
  char *pcVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  char *_Dest_00;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int local_res20 [2];
  char *local_38 [2];
  
  local_38[0] = (char *)0x0;
  FUN_1802c7f40("pstopen",0x4d,3);
  sVar4 = strlen(param_3);
  _Dest = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x4f,sVar4 + 1);
  if (_Dest == (char *)0x0) {
    local_res20[0] = -99;
  }
  else {
    strcpy(_Dest,param_3);
    pcVar5 = strstr(_Dest,":");
    while (pcVar5 != (char *)0x0) {
      *pcVar5 = '-';
      pcVar5 = strstr(_Dest,":");
    }
    sVar4 = strlen(param_2);
    sVar6 = strlen(param_4);
    sVar7 = strlen(_Dest);
    uVar13 = sVar7 + 3 + sVar4 + sVar6;
    pcVar5 = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x5a,uVar13);
    if (pcVar5 == (char *)0x0) {
      uVar11 = 0x5d;
    }
    else {
      iVar3 = snprintf(pcVar5,uVar13,"%s/%s-%s",param_4,param_2,_Dest);
      if (uVar13 <= (ulonglong)(longlong)iVar3) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",99,pcVar5);
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",100,_Dest);
        local_res20[0] = -2;
        goto LAB_1802dc565;
      }
      sVar4 = strlen(pcVar5);
      pcVar8 = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x6e,sVar4 + 1
                                    );
      if (pcVar8 == (char *)0x0) {
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x70,pcVar5);
        uVar11 = 0x71;
      }
      else {
        sVar4 = strlen(pcVar5);
        _Dest_00 = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x75,
                                         sVar4 + 1);
        if (_Dest_00 != (char *)0x0) {
          strcpy(_Dest_00,pcVar5);
          cVar2 = *_Dest_00;
          if ((cVar2 == '/') || (cVar2 == '\\')) {
            *pcVar8 = cVar2;
            pcVar10 = pcVar8 + 1;
            pcVar9 = _Dest_00 + 1;
          }
          else {
            pcVar9 = _Dest_00;
            pcVar10 = pcVar8;
          }
          pcVar9 = strtok_s(pcVar9,"\\/",local_38);
          strcpy(pcVar10,pcVar9);
          local_res20[0] = FUN_1802dc1a0(pcVar8);
          pcVar10 = strtok_s((char *)0x0,"\\/",local_38);
          while ((pcVar10 != (char *)0x0 && (local_res20[0] == 0))) {
            pcVar9 = pcVar8 + -1;
            do {
              pcVar1 = pcVar9 + 1;
              pcVar9 = pcVar9 + 1;
            } while (*pcVar1 != '\0');
            *(undefined2 *)pcVar9 = DAT_1802fc89c;
            pcVar9 = pcVar8 + -1;
            do {
              pcVar1 = pcVar9 + 1;
              pcVar9 = pcVar9 + 1;
            } while (*pcVar1 != '\0');
            lVar12 = 0;
            do {
              cVar2 = pcVar10[lVar12];
              pcVar9[lVar12] = cVar2;
              lVar12 = lVar12 + 1;
            } while (cVar2 != '\0');
            local_res20[0] = FUN_1802dc1a0(pcVar8);
            pcVar10 = strtok_s((char *)0x0,"\\/",local_38);
          }
          *param_1 = pcVar5;
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x99,_Dest_00);
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x9a,pcVar8);
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x9b,_Dest);
          goto LAB_1802dc565;
        }
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x77,pcVar8);
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x78,pcVar5);
        uVar11 = 0x79;
      }
    }
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",uVar11,_Dest);
    local_res20[0] = -99;
  }
LAB_1802dc565:
  FUN_1802c8030("pstopen",0x9e,local_res20,3);
  return local_res20[0];
}



// ===== FUN_1802dc5a0 @ 1802dc5a0 (size 651)

undefined4 FUN_1802dc5a0(char *param_1,char *param_2,int param_3,longlong param_4,longlong param_5)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  FILE *_File;
  char *_Filename;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_res8 [2];
  char *local_res10;
  undefined4 local_48 [2];
  char *local_40;
  
  local_res8[0] = 0;
  lVar9 = 0;
  lVar8 = 0;
  local_res10 = param_2;
  FUN_1802c7f40("pstput",0xce,3);
  if (param_1 == (char *)0x0) {
    local_res8[0] = 0xfffffffe;
    goto LAB_1802dc7f5;
  }
  sVar3 = strlen(param_2);
  sVar4 = strlen(param_1);
  uVar6 = sVar3 + sVar4 + 6;
  local_40 = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0xd7,uVar6);
  if (local_40 == (char *)0x0) {
    local_res8[0] = 0xffffff9d;
    goto LAB_1802dc7f5;
  }
  iVar2 = snprintf(local_40,uVar6,"%s/%s%s",param_1,param_2,&DAT_18038618c);
  if (((ulonglong)(longlong)iVar2 < uVar6) && (_File = fopen(local_40,"wb"), _File != (FILE *)0x0))
  {
    if (0 < (longlong)param_3) {
      lVar7 = 0;
      do {
        sVar3 = (size_t)*(int *)(param_5 + lVar7 * 4);
        lVar8 = lVar8 + sVar3;
        sVar3 = fwrite(*(void **)(param_4 + lVar7 * 8),1,sVar3,_File);
        lVar9 = lVar9 + sVar3;
        lVar7 = lVar7 + 1;
      } while (lVar7 < param_3);
    }
    fclose(_File);
    if (lVar9 != lVar8) {
      local_48[0] = 0;
      FUN_1802c7f40("pstremove",0x149,3);
      pcVar1 = local_res10;
      sVar3 = strlen(local_res10);
      sVar4 = strlen(param_1);
      uVar6 = sVar3 + sVar4 + 6;
      _Filename = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x153,uVar6
                                       );
      if (_Filename == (char *)0x0) {
        local_48[0] = 0xffffff9d;
      }
      else {
        iVar2 = snprintf(_Filename,uVar6,"%s/%s%s",param_1,pcVar1,&DAT_18038618c);
        if ((uVar6 <= (ulonglong)(longlong)iVar2) ||
           ((iVar2 = _unlink(_Filename), iVar2 != 0 && (piVar5 = _errno(), *piVar5 != 2)))) {
          local_48[0] = 0xfffffffe;
        }
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x169,_Filename);
      }
      FUN_1802c8030("pstremove",0x16b,local_48,3);
      goto LAB_1802dc7cc;
    }
  }
  else {
LAB_1802dc7cc:
    local_res8[0] = 0xfffffffe;
  }
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0xf7,local_40);
LAB_1802dc7f5:
  FUN_1802c8030("pstput",0xf9,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802dc830 @ 1802dc830 (size 290)

undefined4 FUN_1802dc830(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *_Filename;
  int *piVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FUN_1802c7f40("pstremove",0x149,3);
  if (param_1 == (char *)0x0) {
    local_res8[0] = 0xfffffffe;
  }
  else {
    sVar2 = strlen(param_2);
    sVar3 = strlen(param_1);
    uVar5 = sVar2 + sVar3 + 6;
    _Filename = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x153,uVar5);
    if (_Filename == (char *)0x0) {
      local_res8[0] = 0xffffff9d;
    }
    else {
      iVar1 = snprintf(_Filename,uVar5,"%s/%s%s",param_1,param_2,&DAT_18038618c);
      if ((uVar5 <= (ulonglong)(longlong)iVar1) ||
         ((iVar1 = _unlink(_Filename), iVar1 != 0 && (piVar4 = _errno(), *piVar4 != 2)))) {
        local_res8[0] = 0xfffffffe;
      }
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\MQTTPersistenceDefault.c",0x169,_Filename);
    }
  }
  FUN_1802c8030("pstremove",0x16b,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802dc960 @ 1802dc960 (size 254)

size_t FUN_1802dc960(char *param_1,int *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  
  FUN_1802c7f40("MQTTProtocol_addressPort",0x3f,3);
  pcVar2 = strrchr(param_1,0x3a);
  if (*param_1 == '[') {
    pcVar3 = strrchr(param_1,0x5d);
    if (pcVar3 <= pcVar2) goto LAB_1802dca3e;
    pcVar3 = (char *)0x0;
  }
  else {
LAB_1802dca3e:
    pcVar3 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      sVar4 = (longlong)pcVar2 - (longlong)param_1;
      iVar1 = atoi(pcVar2 + 1);
      *param_2 = iVar1;
      goto LAB_1802dc9d9;
    }
  }
  sVar4 = strlen(param_1);
  *param_2 = param_4;
  pcVar2 = param_1;
LAB_1802dc9d9:
  pcVar2 = strchr(pcVar2,0x2f);
  if (pcVar2 != (char *)0x0) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = pcVar2;
    }
    if (pcVar3 == (char *)0x0) {
      sVar4 = (longlong)pcVar2 - (longlong)param_1;
    }
  }
  sVar5 = sVar4 - 1;
  if (param_1[sVar4 - 1] != ']') {
    sVar5 = sVar4;
  }
  FUN_1802c8030("MQTTProtocol_addressPort",0x65,0,3);
  return sVar5;
}



// ===== FUN_1802dca60 @ 1802dca60 (size 1192)

int FUN_1802dca60(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 local_res10 [2];
  int local_res18 [4];
  
  uVar12 = 0;
  plVar10 = (longlong *)0x0;
  FUN_1802c7f40("MQTTProtocol_connect",0x90,3);
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 8;
  if (param_3 == 0) {
    plVar6 = *(longlong **)(param_2 + 0x128);
    pcVar9 = "http://";
    if ((plVar6 != (longlong *)0x0) ||
       ((((pcVar5 = getenv("PAHO_C_CLIENT_USE_HTTP_PROXY"), pcVar5 != (char *)0x0 &&
          (iVar4 = strncmp(pcVar5,"TRUE",4), iVar4 == 0)) &&
         (plVar6 = (longlong *)getenv("http_proxy"), plVar6 != (longlong *)0x0)) &&
        ((pcVar5 = getenv("no_proxy"), pcVar5 == (char *)0x0 ||
         (iVar4 = FUN_1802dd5a0(param_1,pcVar5), iVar4 != 0)))))) {
      local_res18[0] = FUN_1802dd790(param_2,plVar6,param_2 + 0x70,param_2 + 0x78,"http://");
      if (local_res18[0] != 0) goto LAB_1802dcecd;
      FUN_1802c6d90(4,0xffffffff,"Setting http proxy to %s",*(undefined8 *)(param_2 + 0x70));
      plVar10 = plVar6;
      if (*(longlong *)(param_2 + 0x78) != 0) {
        FUN_1802c6d90(4,0xffffffff,"Setting http proxy auth to %s");
      }
    }
    if (*(longlong **)(param_2 + 0x130) == (longlong *)0x0) {
      pcVar5 = getenv("PAHO_C_CLIENT_USE_HTTP_PROXY");
      if (((pcVar5 == (char *)0x0) || (iVar4 = strncmp(pcVar5,"TRUE",4), iVar4 != 0)) ||
         ((plVar6 = (longlong *)getenv("https_proxy"), plVar6 == (longlong *)0x0 ||
          ((pcVar5 = getenv("no_proxy"), pcVar5 != (char *)0x0 &&
           (iVar4 = FUN_1802dd5a0(param_1,pcVar5), iVar4 == 0)))))) {
        if (plVar10 == (longlong *)0x0) goto LAB_1802dcca3;
      }
      else {
        plVar10 = plVar6;
      }
    }
    else {
      plVar10 = *(longlong **)(param_2 + 0x130);
    }
    if ((((int)*plVar10 != 0x70747468) || (*(short *)((longlong)plVar10 + 4) != 0x2f3a)) ||
       (*(char *)((longlong)plVar10 + 6) != '/')) {
      if (*plVar10 != 0x2f2f3a7370747468) {
        local_res18[0] = -1;
        goto LAB_1802dcecd;
      }
      pcVar9 = "https://";
    }
    local_res18[0] = FUN_1802dd790(param_2,plVar10,param_2 + 0x60,param_2 + 0x68,pcVar9);
    if (local_res18[0] != 0) goto LAB_1802dcecd;
    FUN_1802c6d90(4,0xffffffff,"Setting https proxy to %s",*(undefined8 *)(param_2 + 0x60));
    if (*(longlong *)(param_2 + 0x68) != 0) {
      FUN_1802c6d90(4,0xffffffff,"Setting https proxy auth to %s");
    }
  }
LAB_1802dcca3:
  if (param_4 == 0) {
    if (*(longlong *)(param_2 + 0x70) == 0) {
      uVar3 = 0x50;
      uVar11 = 0x75b;
      goto LAB_1802dcd1b;
    }
    uVar7 = FUN_1802dc960(*(longlong *)(param_2 + 0x70),local_res10,0,0x1f90);
    uVar8 = *(undefined8 *)(param_2 + 0x70);
  }
  else if (*(longlong *)(param_2 + 0x60) == 0) {
    uVar3 = 0x1bb;
    uVar11 = 0x22b3;
LAB_1802dcd1b:
    if (param_5 != 0) {
      uVar11 = uVar3;
    }
    uVar7 = FUN_1802dc960(param_1,local_res10,0,uVar11);
    uVar8 = param_1;
  }
  else {
    uVar7 = FUN_1802dc960(*(longlong *)(param_2 + 0x60),local_res10,0,0x1f90);
    uVar8 = *(undefined8 *)(param_2 + 0x60);
  }
  puVar1 = (undefined8 *)(param_2 + 0x30);
  local_res18[0] = FUN_1802c9d70(uVar8,uVar7,local_res10[0],puVar1);
  if (local_res18[0] - 0x2733U < 2) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffc7f | 0x40;
    goto LAB_1802dcecd;
  }
  if (local_res18[0] != 0) goto LAB_1802dcecd;
  if (param_4 == 0) {
    if (*(longlong *)(param_2 + 0x70) != 0) {
      *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffd7f;
      *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x140;
      local_res18[0] = FUN_1802dd2f0(puVar1,0,param_1);
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x60) == 0) {
LAB_1802dcd9c:
      iVar4 = FUN_1802cd560(puVar1,*(undefined8 *)(param_2 + 0x138),param_1,uVar7);
      if (iVar4 == 1) {
        lVar2 = *(longlong *)(param_2 + 0x138);
        if (*(int *)(lVar2 + 4) < 3) {
          uVar8 = 0;
        }
        else {
          uVar12 = *(undefined8 *)(lVar2 + 0x48);
          uVar8 = *(undefined8 *)(lVar2 + 0x50);
        }
        local_res18[0] =
             FUN_1802cc5f0(*(undefined8 *)(param_2 + 0x50),*puVar1,param_1,
                           *(undefined4 *)(lVar2 + 0x38),uVar12,uVar8);
        if (local_res18[0] == -0x16) {
          *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffcbf;
          *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x80;
        }
        goto LAB_1802dce44;
      }
    }
    else {
      *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffd7f;
      *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x140;
      iVar4 = FUN_1802dd2f0(puVar1,1,param_1);
      if (iVar4 == 0) goto LAB_1802dcd9c;
    }
    local_res18[0] = -1;
  }
LAB_1802dce44:
  if ((param_5 != 0) &&
     (local_res18[0] = FUN_1802d8a80(puVar1,param_4,param_1), local_res18[0] == -0x16)) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffcff | 0xc0;
  }
  if (local_res18[0] == 0) {
    local_res18[0] = FUN_1802d7840(param_2,param_6,param_7,param_8);
    if (local_res18[0] == 0) {
      *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffd3f | 0x100;
    }
    else {
      *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffc3f;
    }
  }
LAB_1802dcecd:
  FUN_1802c8030("MQTTProtocol_connect",0x152,local_res18,3);
  return local_res18[0];
}



// ===== FUN_1802dcf10 @ 1802dcf10 (size 166)

undefined4 FUN_1802dcf10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10 [3];
  
  local_res8[0] = 0;
  local_res10[0] = param_2;
  FUN_1802c7f40("MQTTProtocol_handleDisconnects",0x1d7,3);
  lVar1 = FUN_1802c8540(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),local_res10,&LAB_1802db850);
  if (lVar1 != 0) {
    FUN_1802c6d90(4,0x1e,0,local_res10[0],**(undefined8 **)(lVar1 + 0x10),
                  *(undefined1 *)(param_1 + 8));
  }
  FUN_1802c5940(param_1);
  FUN_1802c8030("MQTTProtocol_handleDisconnects",0x1df,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802dcfc0 @ 1802dcfc0 (size 149)

undefined4 FUN_1802dcfc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined4 local_res18 [4];
  
  puVar2 = (undefined8 *)0x0;
  local_res18[0] = 0;
  local_res10 = param_2;
  FUN_1802c7f40("MQTTProtocol_handlePingresps",0x163,3);
  lVar1 = FUN_1802c8540(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),&local_res10,&LAB_1802db850);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    FUN_1802c6d90(4,0x15,0,local_res10,*puVar2);
  }
  *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) & 0xffffffef;
  FUN_1802c8030("MQTTProtocol_handlePingresps",0x16b,local_res18,3);
  return local_res18[0];
}



// ===== FUN_1802dd060 @ 1802dd060 (size 165)

undefined4 FUN_1802dd060(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10 [3];
  
  local_res8[0] = 0;
  local_res10[0] = param_2;
  FUN_1802c7f40("MQTTProtocol_handleSubacks",0x192,3);
  lVar1 = FUN_1802c8540(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),local_res10,&LAB_1802db850);
  if (lVar1 != 0) {
    FUN_1802c6d90(4,0x17,0,local_res10[0],**(undefined8 **)(lVar1 + 0x10),
                  *(undefined4 *)(param_1 + 4));
  }
  FUN_1802c5a30(param_1);
  FUN_1802c8030("MQTTProtocol_handleSubacks",0x19a,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802dd110 @ 1802dd110 (size 165)

undefined4 FUN_1802dd110(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10 [3];
  
  local_res8[0] = 0;
  local_res10[0] = param_2;
  FUN_1802c7f40("MQTTProtocol_handleUnsubacks",0x1bd,3);
  lVar1 = FUN_1802c8540(*(undefined8 *)(PTR_PTR_1803c33c8 + 8),local_res10,&LAB_1802db850);
  if (lVar1 != 0) {
    FUN_1802c6d90(4,0x18,0,local_res10[0],**(undefined8 **)(lVar1 + 0x10),
                  *(undefined4 *)(param_1 + 4));
  }
  FUN_1802c5aa0(param_1);
  FUN_1802c8030("MQTTProtocol_handleUnsubacks",0x1c5,local_res8,3);
  return local_res8[0];
}



// ===== FUN_1802dd1c0 @ 1802dd1c0 (size 156)

undefined4
FUN_1802dd1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 local_18 [4];
  
  FUN_1802c7f40("MQTTProtocol_subscribe",0x17e,3);
  local_18[0] = FUN_1802d7c40(param_2,param_3,param_5,param_6,param_4,0,param_1);
  FUN_1802c8030("MQTTProtocol_subscribe",0x180,local_18,3);
  return local_18[0];
}



// ===== FUN_1802dd260 @ 1802dd260 (size 134)

undefined4
FUN_1802dd260(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 local_18 [4];
  
  FUN_1802c7f40("MQTTProtocol_unsubscribe",0x1a9,3);
  local_18[0] = FUN_1802d7ec0(param_2,param_4,param_3,0,param_1);
  FUN_1802c8030("MQTTProtocol_unsubscribe",0x1ab,local_18,3);
  return local_18[0];
}



// ===== FUN_1802dd2f0 @ 1802dd2f0 (size 676)

undefined4 FUN_1802dd2f0(undefined8 *param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *_Str1;
  int iVar5;
  undefined4 local_res20 [2];
  undefined4 local_a8 [2];
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  iVar2 = 0;
  local_res20[0] = 0;
  local_a0 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar4 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_1802c7f40("Proxy_connect",0x42,3);
  uVar1 = FUN_1802dc960(param_3,local_a8,0,0x1f90);
  iVar5 = 0;
  do {
    if (param_2 == 0) {
      lVar3 = param_1[9];
    }
    else {
      lVar3 = param_1[7];
    }
    if (lVar3 == 0) {
      iVar2 = snprintf(lVar4,(longlong)iVar2,"CONNECT %.*s:%d HTTP/1.1\r\nHost: %.*s\r\n\r\n",uVar1,
                       param_3,local_a8[0],uVar1,param_3);
    }
    else {
      iVar2 = snprintf(lVar4,(longlong)iVar2,
                       "CONNECT %.*s:%d HTTP/1.1\r\nHost: %.*s\r\nProxy-authorization: Basic %s\r\n\r\n"
                       ,uVar1,param_3,local_a8[0],uVar1,param_3,lVar3);
    }
    if ((iVar5 == 0) && (0 < iVar2)) {
      iVar2 = iVar2 + 1;
      lVar4 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\Proxy.c",0x6d,(longlong)iVar2);
      if (lVar4 == 0) {
        local_res20[0] = 0xffffff9d;
        goto LAB_1802dd54c;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  FUN_1802c6d90(4,0xffffffff,"Proxy_connect: \"%s\"",lVar4);
  local_58 = CONCAT44(uStack_8c,local_90);
  uStack_50 = uStack_88;
  local_38 = local_70;
  local_48 = (undefined4)uStack_80;
  uStack_44 = uStack_80._4_4_;
  uStack_40 = (undefined4)uStack_78;
  uStack_3c = uStack_78._4_4_;
  FUN_1802ca2e0(*param_1,lVar4,(longlong)iVar2,&local_58);
  FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Proxy.c",0x78,lVar4);
  _time64(&local_98);
  local_98 = local_98 + 10;
  _Str1 = (char *)FUN_1802c9b80(*param_1,0xc,&local_a0,local_res20);
  while (local_a0 == 0) {
    _time64(&local_60);
    if (local_98 < local_60) goto LAB_1802dd512;
    Sleep(0xfa);
    _Str1 = (char *)FUN_1802c9b80(*param_1,0xc,&local_a0,local_res20);
  }
  iVar2 = strncmp(_Str1,"HTTP/1.0 200",0xc);
  if ((iVar2 != 0) && (iVar2 = strncmp(_Str1,"HTTP/1.1 200",0xc), iVar2 != 0)) {
LAB_1802dd512:
    local_res20[0] = 0xffffffff;
  }
  local_a0 = 1;
  do {
    FUN_1802c9b80(*param_1,1,&local_a0,local_68);
  } while (local_a0 != 0);
LAB_1802dd54c:
  FUN_1802c8030("Proxy_connect",0x9d,local_res20,3);
  return local_res20[0];
}



// ===== FUN_1802dd5a0 @ 1802dd5a0 (size 488)

undefined8 FUN_1802dd5a0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 uVar11;
  int local_res18 [2];
  int local_res20 [2];
  char *local_58;
  undefined1 local_50 [8];
  char *local_48;
  
  local_58 = (char *)0x0;
  local_res18[0] = 0;
  bVar2 = false;
  local_res20[0] = 0;
  uVar11 = 1;
  local_48 = (char *)FUN_1802d74b0(param_2);
  if (local_48 == (char *)0x0) {
    return 0xffffff9d;
  }
  pcVar3 = strtok_s(local_48,",",&local_58);
  do {
    if (pcVar3 == (char *)0x0) {
LAB_1802dd75f:
      FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Proxy.c",0xfd,local_48);
      return uVar11;
    }
    iVar8 = 1;
    lVar9 = 1;
    pcVar10 = pcVar3;
    if (*pcVar3 == '.') {
      pcVar10 = pcVar3 + 1;
    }
    lVar4 = FUN_1802dc960(pcVar10,local_res18,local_50,0xffffff9d);
    lVar5 = FUN_1802dc960(param_1,local_res20,local_50,0xffffff9d);
    if (*(char *)(lVar5 + param_1) == '/') {
      lVar5 = lVar5 + -1;
    }
    if (local_res18[0] == -99) {
      bVar2 = true;
    }
    else if ((local_res20[0] != -99) && (local_res20[0] == local_res18[0])) {
      bVar2 = true;
    }
    if ((*pcVar10 == '*') && (bVar2)) {
LAB_1802dd727:
      uVar11 = 0;
      FUN_1802c6d90(4,0xffffffff,"Matched destination %s against no_proxy %s. Don\'t use proxy.",
                    param_1,pcVar3);
      goto LAB_1802dd75f;
    }
    pcVar6 = (char *)(param_1 + -1 + lVar5);
    if (pcVar10[lVar4 + -1] == *pcVar6) {
      do {
        lVar7 = (longlong)iVar8;
        if (lVar7 == lVar4) {
          if (((lVar7 == lVar5) || (*(char *)((lVar5 - lVar9) + -1 + param_1) == '.')) && (bVar2))
          goto LAB_1802dd727;
          break;
        }
        if (lVar7 == lVar5) break;
        pcVar1 = pcVar6 + -1;
        pcVar6 = pcVar6 + -1;
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (pcVar6[(longlong)(pcVar10 + lVar4 + (-param_1 - lVar5))] == *pcVar1);
    }
    pcVar3 = strtok_s((char *)0x0,",",&local_58);
  } while( true );
}



// ===== FUN_1802dd790 @ 1802dd790 (size 438)

undefined8
FUN_1802dd790(undefined8 param_1,char *param_2,longlong *param_3,longlong *param_4,char *param_5)

{
  char cVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  char local_res10;
  char local_res11;
  undefined1 local_res12;
  
  if (*param_4 != 0) {
    FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Proxy.c",0x13a);
    *param_4 = 0;
  }
  if (param_2 == (char *)0x0) {
    return 0;
  }
  pcVar4 = strstr(param_2,param_5);
  if (pcVar4 != (char *)0x0) {
    sVar5 = strlen(param_5);
    param_2 = param_2 + sVar5;
  }
  *param_3 = (longlong)param_2;
  pcVar4 = strchr(param_2,0x40);
  if (pcVar4 != (char *)0x0) {
    *param_3 = (longlong)(pcVar4 + 1);
    iVar7 = (int)pcVar4 - (int)param_2;
    if (iVar7 != 0) {
      pcVar4 = (char *)FUN_1802c7b50("E:\\paho.mqtt.c\\src\\Proxy.c",0x14c,iVar7 + 1);
      if (pcVar4 != (char *)0x0) {
        cVar1 = *param_2;
        pcVar8 = pcVar4;
        while (cVar1 != '@') {
          if (cVar1 == '%') {
            iVar3 = isxdigit((uint)(byte)param_2[1]);
            if ((iVar3 != 0) && (iVar3 = isxdigit((uint)(byte)param_2[2]), iVar3 != 0)) {
              local_res10 = param_2[1];
              local_res11 = param_2[2];
              param_2 = param_2 + 3;
              local_res12 = 0;
              lVar2 = strtol(&local_res10,(char **)0x0,0x10);
              *pcVar8 = (char)lVar2;
              pcVar8 = pcVar8 + 1;
              iVar7 = iVar7 + -2;
            }
          }
          else {
            *pcVar8 = cVar1;
            pcVar8 = pcVar8 + 1;
            param_2 = param_2 + 1;
          }
          cVar1 = *param_2;
        }
        *pcVar8 = '\0';
        iVar3 = FUN_1802dd990(pcVar4,iVar7);
        lVar6 = FUN_1802c7b50("E:\\paho.mqtt.c\\src\\Proxy.c",0x154,iVar3 + 1);
        *param_4 = lVar6;
        if (lVar6 != 0) {
          FUN_1802dd950(lVar6,iVar3 + 1,pcVar4,iVar7);
          FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Proxy.c",0x15b,pcVar4);
          return 0;
        }
        FUN_1802c7ac0("E:\\paho.mqtt.c\\src\\Proxy.c",0x156);
      }
      return 0xffffff9d;
    }
  }
  return 0;
}



// ===== FUN_1802dd9b0 @ 1802dd9b0 (size 574)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802dd9b0(void *param_1,ulonglong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [32];
  undefined1 extraout_var [56];
  undefined1 auVar11 [64];
  undefined1 auStack_298 [56];
  undefined1 local_260 [32];
  char local_240 [256];
  char local_140 [256];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_298;
  if ((DAT_1803c3dec & 4) == 0) {
    memset(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    do {
      if (param_2 == 0) {
        return 0xffffffffffffffff;
      }
      lVar5 = param_2 - 1;
      param_2 = param_2 - 1;
    } while (local_140[*(byte *)((longlong)param_1 + lVar5)] == '\0');
  }
  else {
    iVar6 = FUN_1802de360(param_2,param_4,
                          CONCAT31((uint3)(DAT_1803c3dec >> 0xd),(char)(DAT_1803c3dec >> 5)) &
                          0xffffff01);
    if (iVar6 == 2) {
      auVar11._0_8_ = FUN_1802de200(param_3,param_4);
      auVar11._8_56_ = extraout_var;
      local_260 = auVar11._0_32_;
      do {
        if (param_2 < 8) {
          uVar9 = (uint)param_2 & 7;
          if ((param_2 & 7) != 0) {
            memcpy(&local_40,param_1,(ulonglong)uVar9);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_40;
            auVar10 = vpmovzxbd_avx2(auVar3);
            auVar4 = vpandn_avx2(auVar10,_DAT_180388a40);
            auVar10 = vpsrld_avx2(auVar10,5);
            auVar10 = vpermd_avx2(auVar10,local_260);
            auVar4 = vpsllvd_avx2(auVar10,auVar4);
            uVar8 = vmovmskps_avx(auVar4);
            uVar8 = uVar8 & (1 << (sbyte)uVar9) - 1U;
            if (uVar8 != 0) {
              return (ulonglong)(0x1f - LZCOUNT(uVar8));
            }
          }
          return 0xffffffffffffffff;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)((longlong)param_1 + (param_2 - 8));
        auVar4 = vpmovzxbd_avx2(auVar2);
        param_2 = param_2 - 8;
        auVar10 = vpsrld_avx2(auVar4,5);
        auVar10 = vpermd_avx2(auVar10,local_260);
        auVar4 = vpandn_avx2(auVar4,_DAT_180388a40);
        auVar4 = vpsllvd_avx2(auVar10,auVar4);
        iVar6 = vmovmskps_avx(auVar4);
      } while (iVar6 == 0);
      param_2 = (param_2 - (uint)LZCOUNT(iVar6)) + 0x1f;
    }
    else {
      if (iVar6 != 1) {
        uVar7 = FUN_1802dddf0(param_1,param_2,param_3,param_4);
        return uVar7;
      }
      memset(local_240,0,0x100);
      pbVar1 = param_3 + param_4;
      for (; param_3 != pbVar1; param_3 = param_3 + 1) {
        local_240[*param_3] = '\x01';
      }
      do {
        if (param_2 == 0) {
          return 0xffffffffffffffff;
        }
        lVar5 = param_2 - 1;
        param_2 = param_2 - 1;
      } while (local_240[*(byte *)((longlong)param_1 + lVar5)] == '\0');
    }
  }
  return param_2;
}



// ===== FUN_1802ddbf0 @ 1802ddbf0 (size 501)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802ddbf0(longlong param_1,ulonglong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 extraout_var [56];
  undefined1 auVar11 [64];
  undefined1 auVar12 [32];
  undefined1 auStack_198 [56];
  undefined1 local_160 [32];
  char local_140 [256];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_198;
  iVar5 = FUN_1802de360(param_2,param_4,
                        CONCAT31((uint3)(DAT_1803c3dec >> 0xd),(char)(DAT_1803c3dec >> 5)) &
                        0xffffff01);
  if (iVar5 == 2) {
    auVar11._0_8_ = FUN_1802de200(param_3,param_4);
    auVar11._8_56_ = extraout_var;
    uVar6 = 0;
    local_160 = auVar11._0_32_;
    uVar10 = param_2 & 0xfffffffffffffff8;
    if (uVar10 != 0) {
      do {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(uVar6 + param_1);
        auVar4 = vpmovzxbd_avx2(auVar2);
        auVar12 = vpsrld_avx2(auVar4,5);
        auVar12 = vpermd_avx2(auVar12,local_160);
        auVar4 = vpandn_avx2(auVar4,_DAT_180388a40);
        auVar4 = vpsllvd_avx2(auVar12,auVar4);
        uVar8 = vmovmskps_avx(auVar4);
        if (uVar8 != 0) {
          uVar9 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          return uVar9 + uVar6;
        }
        uVar6 = uVar6 + 8;
      } while (uVar6 != uVar10);
    }
    uVar8 = (uint)param_2 & 7;
    if ((param_2 & 7) != 0) {
      memcpy(&local_40,(void *)(uVar10 + param_1),(ulonglong)uVar8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_40;
      auVar12 = vpmovzxbd_avx2(auVar3);
      auVar4 = vpandn_avx2(auVar12,_DAT_180388a40);
      auVar12 = vpsrld_avx2(auVar12,5);
      auVar12 = vpermd_avx2(auVar12,local_160);
      auVar4 = vpsllvd_avx2(auVar12,auVar4);
      uVar9 = vmovmskps_avx(auVar4);
      uVar9 = uVar9 & (1 << (sbyte)uVar8) - 1U;
      if (uVar9 != 0) {
        uVar8 = 0;
        for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        return uVar8 + uVar10;
      }
    }
    uVar6 = 0xffffffffffffffff;
  }
  else {
    if (iVar5 == 1) {
      memset(local_140,0,0x100);
      pbVar1 = param_3 + param_4;
      for (; param_3 != pbVar1; param_3 = param_3 + 1) {
        local_140[*param_3] = '\x01';
      }
      uVar6 = 0;
      if (param_2 != 0) {
        do {
          if (local_140[*(byte *)(param_1 + uVar6)] != '\0') {
            return uVar6;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_2);
      }
      return 0xffffffffffffffff;
    }
    lVar7 = FUN_1802de010(param_1,param_2,param_3,param_4);
    uVar6 = 0xffffffffffffffff;
    if (lVar7 != param_2 + param_1) {
      uVar6 = lVar7 - param_1;
    }
  }
  return uVar6;
}



// ===== FUN_1802dddf0 @ 1802dddf0 (size 529)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001802ddf55) */
/* WARNING: Removing unreachable block (ram,0x0001802ddf57) */
/* WARNING: Removing unreachable block (ram,0x0001802ddfd3) */
/* WARNING: Removing unreachable block (ram,0x0001802ddfd5) */

undefined1 *
FUN_1802dddf0(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  
  local_68 = DAT_1803c3d80 ^ (ulonglong)auStack_a8;
  uVar9 = (uint)param_2 & 0xf;
  uVar10 = (ulonglong)uVar9;
  puVar6 = *param_1 + param_2;
  uVar5 = (uint)param_4;
  local_88 = param_2;
  if (param_4 < 0x11) {
    memcpy(&local_88,param_3,param_4);
    auVar2._8_8_ = uStack_80;
    auVar2._0_8_ = local_88;
    do {
      if (puVar6 == *param_1 + uVar10) {
        if (uVar10 != 0) {
          uVar12 = param_2 < 0x10;
          if ((bool)uVar12) {
            memcpy(&local_88,param_1,param_2);
            auVar13._8_8_ = uStack_80;
            auVar13._0_8_ = local_88;
          }
          else {
            auVar13 = *param_1;
          }
          iVar3 = pcmpestri(auVar2,auVar13,0x40,uVar5,uVar9);
          if ((bool)uVar12) {
            return (undefined1 *)(longlong)iVar3;
          }
        }
        return (undefined1 *)0xffffffffffffffff;
      }
      pauVar8 = (undefined1 (*) [16])(puVar6 + -0x10);
      bVar11 = (undefined1 *)0xf < puVar6;
      puVar6 = puVar6 + -0x10;
      iVar3 = pcmpestri(auVar2,*pauVar8,0x40,uVar5,0x10);
    } while (bVar11);
    puVar6 = puVar6 + ((longlong)iVar3 - (longlong)param_1);
  }
  else {
    uVar5 = uVar5 & 0xf;
    pauVar8 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    memcpy(local_78,pauVar8,(ulonglong)uVar5);
    auVar2 = local_78;
    iVar3 = -1;
    do {
      if (puVar6 == *param_1 + uVar10) {
        if (uVar10 != 0) {
          uVar12 = local_88 < 0x10;
          if ((bool)uVar12) {
            memcpy(local_78,param_1,local_88);
          }
          else {
            local_78 = *param_1;
          }
          do {
            iVar4 = pcmpestri(*param_3,local_78,0x40,0x10,uVar9);
            if (((bool)uVar12) && (iVar3 < iVar4)) {
              iVar3 = iVar4;
            }
            param_3 = param_3 + 1;
            uVar12 = param_3 < pauVar8;
          } while (param_3 != pauVar8);
          if ((param_4 & 0xf) != 0) {
            pcmpestri(auVar2,local_78,0x40,uVar5,uVar9);
          }
        }
        return (undefined1 *)(longlong)iVar3;
      }
      pauVar1 = (undefined1 (*) [16])(puVar6 + -0x10);
      bVar11 = puVar6 < (undefined1 *)0x10;
      puVar6 = puVar6 + -0x10;
      pauVar7 = param_3;
      do {
        iVar4 = pcmpestri(*pauVar7,*pauVar1,0x40,0x10,0x10);
        if ((bVar11) && (iVar3 < iVar4)) {
          iVar3 = iVar4;
        }
        pauVar7 = pauVar7 + 1;
        bVar11 = pauVar7 < pauVar8;
      } while (pauVar7 != pauVar8);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_78,*pauVar1,0x40,uVar5,0x10);
      }
    } while (iVar3 == -1);
    puVar6 = puVar6 + ((longlong)iVar3 - (longlong)param_1);
  }
  return puVar6;
}



// ===== FUN_1802de010 @ 1802de010 (size 481)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001802de147) */
/* WARNING: Removing unreachable block (ram,0x0001802de14a) */
/* WARNING: Removing unreachable block (ram,0x0001802de1b6) */
/* WARNING: Removing unreachable block (ram,0x0001802de1b9) */

undefined1 (*) [16]
FUN_1802de010(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 (*_Src) [16];
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  undefined1 (*pauVar9) [16];
  bool bVar10;
  undefined1 uVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1803c3d80 ^ (ulonglong)auStack_88;
  pauVar9 = (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffffffffffff0));
  uVar5 = (uint)param_4;
  if (param_4 < 0x11) {
    memcpy(local_68,param_3,param_4);
    auVar1 = local_68;
    for (; param_1 != pauVar9; param_1 = param_1 + 1) {
      iVar2 = pcmpestri(local_68,*param_1,0,uVar5,0x10);
      if (param_1 < pauVar9) goto LAB_1802de0bf;
    }
    bVar10 = false;
    uVar8 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      memcpy(local_68,param_1,(ulonglong)uVar8);
      iVar2 = pcmpestri(auVar1,local_68,0,uVar5,uVar8);
      if (bVar10) {
LAB_1802de0bf:
        return (undefined1 (*) [16])(*param_1 + iVar2);
      }
      param_1 = (undefined1 (*) [16])(*param_1 + uVar8);
    }
  }
  else {
    uVar5 = uVar5 & 0xf;
    _Src = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    memcpy(local_68,_Src,(ulonglong)uVar5);
    auVar1 = local_68;
    iVar2 = 0x10;
    for (; param_1 != pauVar9; param_1 = param_1 + 1) {
      bVar10 = param_1 < pauVar9;
      pauVar7 = param_3;
      do {
        iVar3 = pcmpestri(*pauVar7,*param_1,0,0x10,0x10);
        if ((bVar10) && (iVar3 < iVar2)) {
          iVar2 = iVar3;
        }
        pauVar7 = pauVar7 + 1;
        bVar10 = pauVar7 < _Src;
      } while (pauVar7 != _Src);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_68,*param_1,0,uVar5,0x10);
      }
      if (iVar2 != 0x10) {
        return (undefined1 (*) [16])(*param_1 + iVar2);
      }
    }
    uVar11 = 0;
    uVar8 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      memcpy(local_68,param_1,(ulonglong)uVar8);
      uVar6 = uVar8;
      do {
        uVar4 = pcmpestri(*param_3,local_68,0,0x10,uVar8);
        if (((bool)uVar11) && ((int)uVar4 < (int)uVar6)) {
          uVar6 = uVar4;
        }
        param_3 = param_3 + 1;
        uVar11 = param_3 < _Src;
      } while (param_3 != _Src);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(auVar1,local_68,0,uVar5,uVar8);
      }
      param_1 = (undefined1 (*) [16])(*param_1 + (int)uVar6);
    }
  }
  return param_1;
}



// ===== FUN_1802de200 @ 1802de200 (size 347)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802de200(byte *param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [64];
  ulonglong uVar5;
  undefined1 auStack_158 [56];
  undefined1 local_120 [8] [32];
  ulonglong local_20;
  
  local_20 = DAT_1803c3d80 ^ (ulonglong)auStack_158;
  pbVar1 = param_1 + param_2;
  if (param_2 < 0x15) {
    auVar4 = ZEXT1664((undefined1  [16])0x0);
    uVar5 = 0;
    while (param_1 != pbVar1) {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      auVar3 = vpmovzxbq_avx2(ZEXT416((uint)(1 << (bVar2 >> 3 & 0x18))));
      auVar3 = vpsllq_avx2(auVar3,ZEXT416(bVar2 & 0x3f));
      auVar3 = vpor_avx2(auVar3,auVar4._0_32_);
      auVar4 = ZEXT3264(auVar3);
      uVar5 = auVar3._0_8_;
    }
  }
  else {
    memset(local_120,0,0x100);
    for (; param_1 != pbVar1; param_1 = param_1 + 1) {
      local_120[0][*param_1] = 0xff;
    }
    uVar5 = (ulonglong)
            ((uint)(SUB321(local_120[0] >> 7,0) & 1) |
             (uint)(SUB321(local_120[0] >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(local_120[0] >> 0x17,0) & 1) << 2 |
             (uint)(SUB321(local_120[0] >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(local_120[0] >> 0x27,0) & 1) << 4 |
             (uint)(SUB321(local_120[0] >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(local_120[0] >> 0x37,0) & 1) << 6 |
             (uint)(SUB321(local_120[0] >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(local_120[0] >> 0x47,0) & 1) << 8 |
             (uint)(SUB321(local_120[0] >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(local_120[0] >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(local_120[0] >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(local_120[0] >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(local_120[0] >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(local_120[0] >> 0x77,0) & 1) << 0xe |
             (uint)SUB321(local_120[0] >> 0x7f,0) << 0xf |
             (uint)(SUB321(local_120[0] >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(local_120[0] >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(local_120[0] >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(local_120[0] >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(local_120[0] >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(local_120[0] >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(local_120[0] >> 0xb7,0) & 1) << 0x16 |
             (uint)SUB321(local_120[0] >> 0xbf,0) << 0x17 |
             (uint)(SUB321(local_120[0] >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(local_120[0] >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(local_120[0] >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(local_120[0] >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(local_120[0] >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(local_120[0] >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(local_120[0] >> 0xf7,0) & 1) << 0x1e |
            (uint)(byte)(local_120[0][0x1f] >> 7) << 0x1f);
  }
  return uVar5;
}



// ===== FUN_1802de360 @ 1802de360 (size 142)

char FUN_1802de360(ulonglong param_1,ulonglong param_2,char param_3)

{
  bool bVar1;
  
  if ((param_3 != '\0') && (0x30 < param_1)) {
    if (param_2 < 0x11) {
      return (1000 < param_1) * '\x02';
    }
    if (param_2 < 0x31) {
      return (0x50 < param_1) * '\x02';
    }
    return 2;
  }
  bVar1 = false;
  if (0x20 < param_2) {
    if (param_2 < 0x31) {
      return 0x1a0 < param_1;
    }
    if (param_2 < 0x41) {
      return 0xe0 < param_1;
    }
    if (param_2 < 0x51) {
      return 0x80 < param_1;
    }
    if (param_2 < 0x21d) {
      return 0x30 < param_1;
    }
    bVar1 = 0x20 < param_1;
  }
  return bVar1;
}



// ===== FUN_1802de3f0 @ 1802de3f0 (size 321)

undefined1 (*) [32]
FUN_1802de3f0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 (*pauVar12) [32];
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  undefined1 (*pauVar17) [32];
  undefined1 (*pauVar18) [32];
  undefined1 (*pauVar19) [32];
  undefined1 (*pauVar20) [32];
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  
  uVar21 = (longlong)param_2 - (longlong)param_1;
  pauVar20 = param_2;
  if (((uVar21 & 0xffffffffffffffe0) == 0) || ((DAT_1803c3dec & 0x20) == 0)) {
    if (((uVar21 & 0xfffffffffffffff0) != 0) && ((DAT_1803c3dec & 4) != 0)) {
      auVar24 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        pauVar4 = pauVar20 + -1;
        pauVar5 = pauVar20 + -1;
        pauVar6 = pauVar20 + -1;
        pauVar7 = pauVar20 + -1;
        pauVar8 = pauVar20 + -1;
        pauVar9 = pauVar20 + -1;
        pauVar10 = pauVar20 + -1;
        pauVar11 = pauVar20 + -1;
        pauVar12 = pauVar20 + -1;
        pauVar13 = pauVar20 + -1;
        pauVar14 = pauVar20 + -1;
        pauVar15 = pauVar20 + -1;
        pauVar16 = pauVar20 + -1;
        pauVar17 = pauVar20 + -1;
        pauVar18 = pauVar20 + -1;
        pauVar19 = pauVar20 + -1;
        pauVar20 = (undefined1 (*) [32])(pauVar20[-1] + 0x10);
        auVar23[0] = -((*pauVar4)[0x10] == auVar24[0]);
        auVar23[1] = -((*pauVar5)[0x11] == auVar24[1]);
        auVar23[2] = -((*pauVar6)[0x12] == auVar24[2]);
        auVar23[3] = -((*pauVar7)[0x13] == auVar24[3]);
        auVar23[4] = -((*pauVar8)[0x14] == auVar24[4]);
        auVar23[5] = -((*pauVar9)[0x15] == auVar24[5]);
        auVar23[6] = -((*pauVar10)[0x16] == auVar24[6]);
        auVar23[7] = -((*pauVar11)[0x17] == auVar24[7]);
        auVar23[8] = -((*pauVar12)[0x18] == auVar24[8]);
        auVar23[9] = -((*pauVar13)[0x19] == auVar24[9]);
        auVar23[10] = -((*pauVar14)[0x1a] == auVar24[10]);
        auVar23[0xb] = -((*pauVar15)[0x1b] == auVar24[0xb]);
        auVar23[0xc] = -((*pauVar16)[0x1c] == auVar24[0xc]);
        auVar23[0xd] = -((*pauVar17)[0x1d] == auVar24[0xd]);
        auVar23[0xe] = -((*pauVar18)[0x1e] == auVar24[0xe]);
        auVar23[0xf] = -((*pauVar19)[0x1f] == auVar24[0xf]);
        uVar1 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar3 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> uVar3 == 0; uVar3 = uVar3 - 1) {
            }
          }
          return (undefined1 (*) [32])(*pauVar20 + uVar3);
        }
      } while (pauVar20 != (undefined1 (*) [32])((longlong)param_2 - (uVar21 & 0xfffffffffffffff0)))
      ;
    }
  }
  else {
    auVar24 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar25._16_16_ = auVar24;
    auVar25._0_16_ = auVar24;
    do {
      auVar2 = vpcmpeqb_avx2(auVar25,pauVar20[-1]);
      pauVar20 = pauVar20 + -1;
      uVar3 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar3 != 0) {
        return (undefined1 (*) [32])(*pauVar20 + (0x1f - LZCOUNT(uVar3)));
      }
    } while (pauVar20 != (undefined1 (*) [32])((longlong)param_2 - (uVar21 & 0xffffffffffffffe0)));
    uVar22 = (ulonglong)((uint)uVar21 & 0x1c);
    if ((uVar21 & 0x1c) != 0) {
      pauVar20 = (undefined1 (*) [32])((longlong)pauVar20 - uVar22);
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180388a10 + -uVar22),*pauVar20);
      auVar25 = vpcmpeqb_avx2(auVar2,auVar25);
      auVar25 = vpand_avx2(auVar25,*(undefined1 (*) [32])(&DAT_180388a10 + -uVar22));
      uVar3 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
      if (uVar3 != 0) {
        return (undefined1 (*) [32])(*pauVar20 + (0x1f - LZCOUNT(uVar3)));
      }
    }
  }
  do {
    if (pauVar20 == param_1) {
      return param_2;
    }
    pauVar20 = (undefined1 (*) [32])(pauVar20[-1] + 0x1f);
  } while ((*pauVar20)[0] != param_3);
  return pauVar20;
}



// ===== FUN_1802de540 @ 1802de540 (size 242)

undefined1 (*) [32]
FUN_1802de540(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_1803c3dec & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_1803c3dec & 4) != 0)) {
      puVar3 = *param_1;
      auVar8 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar7[0] = -((*param_1)[0] == auVar8[0]);
        auVar7[1] = -((*param_1)[1] == auVar8[1]);
        auVar7[2] = -((*param_1)[2] == auVar8[2]);
        auVar7[3] = -((*param_1)[3] == auVar8[3]);
        auVar7[4] = -((*param_1)[4] == auVar8[4]);
        auVar7[5] = -((*param_1)[5] == auVar8[5]);
        auVar7[6] = -((*param_1)[6] == auVar8[6]);
        auVar7[7] = -((*param_1)[7] == auVar8[7]);
        auVar7[8] = -((*param_1)[8] == auVar8[8]);
        auVar7[9] = -((*param_1)[9] == auVar8[9]);
        auVar7[10] = -((*param_1)[10] == auVar8[10]);
        auVar7[0xb] = -((*param_1)[0xb] == auVar8[0xb]);
        auVar7[0xc] = -((*param_1)[0xc] == auVar8[0xc]);
        auVar7[0xd] = -((*param_1)[0xd] == auVar8[0xd]);
        auVar7[0xe] = -((*param_1)[0xe] == auVar8[0xe]);
        auVar7[0xf] = -((*param_1)[0xf] == auVar8[0xf]);
        uVar1 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar4 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar4);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar3 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar3 = *param_1;
    auVar8 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar9._16_16_ = auVar8;
    auVar9._0_16_ = auVar8;
    do {
      auVar2 = vpcmpeqb_avx2(auVar9,*param_1);
      uVar4 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar4 != 0) goto LAB_1802de5e1;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar3 + (uVar6 & 0xffffffffffffffe0)));
    uVar5 = (uint)uVar6 & 0x1c;
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180388a10 + -(ulonglong)uVar5),*param_1);
      auVar9 = vpcmpeqb_avx2(auVar2,auVar9);
      auVar9 = vpand_avx2(auVar9,*(undefined1 (*) [32])(&DAT_180388a10 + -(ulonglong)uVar5));
      uVar4 = (uint)(SUB321(auVar9 >> 7,0) & 1) | (uint)(SUB321(auVar9 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar9 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar9 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar9 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar9 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar9 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar9 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar9 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar9 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar9 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar9 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar9 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar9 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar9 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar9 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar9 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar9 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar9 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar9 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar9 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar9 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar9 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar9 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar9 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar9 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar9 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar9 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar9 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar9 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar9[0x1f] >> 7) << 0x1f
      ;
      if (uVar4 != 0) {
LAB_1802de5e1:
        uVar5 = 0;
        for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar5);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar5);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}



// ===== FUN_1802de640 @ 1802de640 (size 242)

undefined1 (*) [32]
FUN_1802de640(undefined1 (*param_1) [32],undefined1 (*param_2) [32],short param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_1803c3dec & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_1803c3dec & 4) != 0)) {
      puVar3 = *param_1;
      do {
        auVar7._0_2_ = -(ushort)(*(short *)*param_1 == param_3);
        auVar7._2_2_ = -(ushort)(*(short *)(*param_1 + 2) == param_3);
        auVar7._4_2_ = -(ushort)(*(short *)(*param_1 + 4) == param_3);
        auVar7._6_2_ = -(ushort)(*(short *)(*param_1 + 6) == param_3);
        auVar7._8_2_ = -(ushort)(*(short *)(*param_1 + 8) == param_3);
        auVar7._10_2_ = -(ushort)(*(short *)(*param_1 + 10) == param_3);
        auVar7._12_2_ = -(ushort)(*(short *)(*param_1 + 0xc) == param_3);
        auVar7._14_2_ = -(ushort)(*(short *)(*param_1 + 0xe) == param_3);
        uVar1 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auVar7._14_2_ >> 7) & 1) << 0xe | auVar7._14_2_ & 0x8000;
        if (uVar1 != 0) {
          uVar4 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar4);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar3 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar3 = *param_1;
    auVar7 = vpunpcklwd_avx(ZEXT416((uint)(int)param_3),ZEXT416((uint)(int)param_3));
    auVar7 = vpshufd_avx(auVar7,0);
    auVar8._16_16_ = auVar7;
    auVar8._0_16_ = auVar7;
    do {
      auVar2 = vpcmpeqw_avx2(auVar8,*param_1);
      uVar4 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar4 != 0) goto LAB_1802de6e3;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar3 + (uVar6 & 0xffffffffffffffe0)));
    uVar5 = (uint)uVar6 & 0x1c;
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180388a10 + -(ulonglong)uVar5),*param_1);
      auVar8 = vpcmpeqw_avx2(auVar2,auVar8);
      auVar8 = vpand_avx2(auVar8,*(undefined1 (*) [32])(&DAT_180388a10 + -(ulonglong)uVar5));
      uVar4 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar8 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar8 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar8 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar8 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar8 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar8 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar8[0x1f] >> 7) << 0x1f
      ;
      if (uVar4 != 0) {
LAB_1802de6e3:
        uVar5 = 0;
        for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar5);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar5);
    }
  }
  for (; (param_1 != param_2 && (*(short *)*param_1 != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 2)) {
  }
  return param_1;
}



// ===== FUN_1802de740 @ 1802de740 (size 489)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
FUN_1802de740(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  size_t _Size;
  uint uVar6;
  longlong lVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    return param_1;
  }
  if (param_4 == 1) {
    pauVar2 = (undefined1 (*) [16])FUN_1802de540(param_1,param_2,(*param_3)[0]);
    return pauVar2;
  }
  uVar4 = (longlong)param_2 - (longlong)param_1;
  if (param_4 <= uVar4) {
    if ((((byte)DAT_1803c3dec & 4) == 0) || (uVar4 < 0x10)) {
      pauVar2 = (undefined1 (*) [16])((longlong)param_1 + uVar4 + (1 - param_4));
      if (param_1 != pauVar2) {
        lVar7 = (longlong)param_3 - (longlong)param_1;
        do {
          if ((*param_1)[0] == (*param_3)[0]) {
            pcVar5 = *param_1 + 1;
            while (*pcVar5 == pcVar5[lVar7]) {
              pcVar5 = pcVar5 + 1;
              if ((longlong)pcVar5 - (longlong)param_1 == param_4) {
                return param_1;
              }
            }
          }
          param_1 = (undefined1 (*) [16])(*param_1 + 1);
          lVar7 = lVar7 + -1;
        } while (param_1 != pauVar2);
      }
    }
    else if (param_4 < 0x11) {
      uVar6 = (uint)param_4;
      uVar8 = 0x10 < uVar6;
      memcpy(local_58,param_3,param_4);
      auVar1 = local_58;
      do {
        iVar3 = pcmpestri(local_58,*param_1,0xc,uVar6,0x10);
        if ((bool)uVar8) {
          param_1 = (undefined1 (*) [16])(*param_1 + iVar3);
          if (iVar3 <= (int)(0x10 - uVar6)) {
            return param_1;
          }
        }
        else {
          param_1 = param_1 + 1;
        }
        uVar8 = param_1 < param_2 + -1;
      } while (param_1 <= param_2 + -1);
      bVar9 = param_2 < param_1;
      _Size = (longlong)param_2 - (longlong)param_1;
      if (_Size != 0) {
        memcpy(local_58,param_1,_Size);
        iVar3 = pcmpestri(auVar1,local_58,0xc,uVar6,(int)_Size);
        if (bVar9) {
          return (undefined1 (*) [16])(*param_1 + iVar3);
        }
      }
    }
    else {
      auVar1 = *param_3;
      bVar9 = CARRY8((longlong)param_1 - param_4,uVar4);
      pauVar2 = (undefined1 (*) [16])(((longlong)param_1 - param_4) + uVar4);
      do {
        iVar3 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
        if (bVar9) {
          if (iVar3 == 0) {
LAB_1802de895:
            iVar3 = memcmp(param_1 + 1,param_3 + 1,param_4 - 0x10);
            if (iVar3 == 0) {
              return param_1;
            }
          }
          else {
            param_1 = (undefined1 (*) [16])(*param_1 + iVar3);
            if (pauVar2 < param_1) {
              return param_2;
            }
            auVar10._0_4_ = *(uint *)*param_1 ^ auVar1._0_4_;
            auVar10._4_4_ = *(uint *)(*param_1 + 4) ^ auVar1._4_4_;
            auVar10._8_4_ = *(uint *)(*param_1 + 8) ^ auVar1._8_4_;
            auVar10._12_4_ = *(uint *)(*param_1 + 0xc) ^ auVar1._12_4_;
            if (auVar10 == (undefined1  [16])0x0) goto LAB_1802de895;
          }
          param_1 = (undefined1 (*) [16])(*param_1 + 1);
        }
        else {
          param_1 = param_1 + 1;
        }
        bVar9 = param_1 < pauVar2;
      } while (param_1 <= pauVar2);
    }
  }
  return param_2;
}



// ===== FUN_1802de930 @ 1802de930 (size 151)

longlong FUN_1802de930(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  longlong lVar2;
  char local_128 [264];
  
  if (((byte)DAT_1803c3dec & 4) != 0) {
    lVar2 = FUN_1802ddbf0();
    return lVar2;
  }
  memset(local_128,0,0x100);
  pbVar1 = param_3 + param_4;
  for (; param_3 != pbVar1; param_3 = param_3 + 1) {
    local_128[*param_3] = '\x01';
  }
  lVar2 = 0;
  if (param_2 != 0) {
    do {
      if (local_128[*(byte *)(param_1 + lVar2)] != '\0') {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != param_2);
  }
  return -1;
}



// ===== FUN_1802dea30 @ 1802dea30 (size 215)

ulonglong FUN_1802dea30(DWORD param_1,longlong *param_2)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  DWORD local_res18 [2];
  
  DVar2 = 0;
  local_res18[0] = 0;
  iVar5 = 0;
  do {
    if (DVar2 != 0) break;
    if (iVar5 == 0) {
      local_res18[0] = 0x409;
LAB_1802dea97:
      DVar2 = FormatMessageA(0x1300,(LPCVOID)0x0,param_1,local_res18[0],(LPSTR)param_2,0,
                             (va_list *)0x0);
    }
    else {
      if (iVar5 != 1) {
        local_res18[0] = 0;
        goto LAB_1802dea97;
      }
      iVar1 = GetLocaleInfoEx(L"!x-sys-default-locale",0x20000001,(LPWSTR)local_res18,2);
      if (iVar1 != 0) goto LAB_1802dea97;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  uVar3 = (ulonglong)DVar2;
  if (DVar2 != 0) {
    pbVar6 = (byte *)(*param_2 + -1 + uVar3);
    uVar4 = uVar3;
    do {
      if ((&DAT_180388a60)[*pbVar6] == '\0') {
        return uVar4;
      }
      pbVar6 = pbVar6 + -1;
      uVar4 = uVar4 - 1;
      uVar3 = 0;
    } while (uVar4 != 0);
  }
  return uVar3;
}



// ===== FUN_1802deb1c @ 1802deb1c (size 119)

DWORD FUN_1802deb1c(HANDLE param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  BVar1 = SetFileInformationByHandle(param_1,0x15,local_res18,4);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 1) {
      if (DVar2 == 5) {
        return 5;
      }
      if ((DVar2 != 0x32) && (DVar2 != 0x57)) {
        return DVar2;
      }
    }
    local_res10[0] = 1;
    BVar1 = SetFileInformationByHandle(param_1,FileDispositionInfo,local_res10,1);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      return DVar2;
    }
  }
  return 0;
}



// ===== FUN_1802debbc @ 1802debbc (size 72)

undefined8 FUN_1802debbc(UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5)

{
  int iVar1;
  DWORD DStack_14;
  
  iVar1 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    DStack_14 = GetLastError();
  }
  else {
    DStack_14 = 0;
  }
  return CONCAT44(DStack_14,iVar1);
}



// ===== FUN_1802dec04 @ 1802dec04 (size 313)

undefined8 FUN_1802dec04(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  BOOL local_res8 [2];
  int local_28;
  DWORD DStack_24;
  
  if ((param_1 == 0xfde9) || (param_1 == 0xd698)) {
    local_28 = WideCharToMultiByte(param_1,0x80,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
  }
  else {
    local_res8[0] = 0;
    local_28 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   local_res8);
    if (local_res8[0] != 0) {
      local_28 = 0;
      DStack_24 = 0x459;
      goto LAB_1802ded22;
    }
  }
  if (local_28 == 0) {
    DStack_24 = GetLastError();
  }
  else {
    DStack_24 = 0;
  }
  if (DStack_24 == 0x3ec) {
    local_28 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_28 == 0) {
      DStack_24 = GetLastError();
    }
    else {
      DStack_24 = 0;
    }
  }
LAB_1802ded22:
  return CONCAT44(DStack_24,local_28);
}



// ===== FUN_1802ded40 @ 1802ded40 (size 218)

undefined8 FUN_1802ded40(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  int local_18;
  DWORD DStack_14;
  
  local_18 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_18 == 0) {
    DStack_14 = GetLastError();
  }
  else {
    DStack_14 = 0;
  }
  if (DStack_14 == 0x3ec) {
    local_18 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_18 == 0) {
      DStack_14 = GetLastError();
    }
    else {
      DStack_14 = 0;
    }
  }
  return CONCAT44(DStack_14,local_18);
}



// ===== FUN_1802dee1c @ 1802dee1c (size 115)

undefined8 FUN_1802dee1c(LPCWSTR param_1)

{
  BOOL BVar1;
  uint local_res10;
  DWORD DStackX_14;
  undefined1 local_28 [16];
  byte local_18;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DStackX_14 = GetLastError();
    if (DStackX_14 == 0xb7) {
      DStackX_14 = FUN_1802def4c(param_1,local_28,3,0xffffffff);
      if ((DStackX_14 == 0) && ((local_18 & 0x10) == 0)) {
        DStackX_14 = 0xb7;
      }
    }
    local_res10 = local_res10 & 0xffffff00;
  }
  else {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    DStackX_14 = 0;
  }
  return CONCAT44(DStackX_14,local_res10);
}



// ===== FUN_1802deed0 @ 1802deed0 (size 120)

DWORD FUN_1802deed0(LPCWSTR param_1,longlong *param_2,LPVOID param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  
  if (*param_2 != -1) {
    BVar1 = FindClose((HANDLE)*param_2);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  pvVar3 = FindFirstFileExW(param_1,FindExInfoBasic,param_3,FindExSearchNameMatch,(LPVOID)0x0,0);
  *param_2 = (longlong)pvVar3;
  if (pvVar3 == (HANDLE)0xffffffffffffffff) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  return DVar2;
}



// ===== FUN_1802def4c @ 1802def4c (size 802)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD FUN_1802def4c(LPCWSTR param_1,ulonglong *param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  uint local_2b0 [2];
  ulonglong local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  DWORD DStack_298;
  DWORD local_294;
  uint local_290;
  _WIN32_FIND_DATAW local_288;
  ulonglong local_38;
  
  local_38 = DAT_1803c3d80 ^ (ulonglong)auStack_2d8;
  uVar4 = param_3 & 0xfffffffe;
  if (((param_3 & 1) != 0) && ((param_3 & 4) != 0)) {
    return 0x57;
  }
  if ((((param_3 & 2) != 0) && (param_4 != 0xffffffff)) &&
     (((param_4 & 0x400) == 0 || ((param_3 & 1) == 0)))) {
    uVar4 = param_3 & 0xfffffffc;
    *(uint *)(param_2 + 2) = param_4;
  }
  if (uVar4 == 0) {
    return 0;
  }
  if (((uVar4 & 0x2a) != 0) &&
     (((param_4 == 0xffffffff || ((param_4 & 0x400) == 0)) || ((param_3 & 1) == 0)))) {
    BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2b0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 != 0x20) {
        return DVar2;
      }
      pvVar3 = FindFirstFileW(param_1,&local_288);
      if (pvVar3 == (HANDLE)0xffffffffffffffff) {
        DVar2 = GetLastError();
        return DVar2;
      }
      FindClose(pvVar3);
      local_29c = local_288.ftLastWriteTime.dwLowDateTime;
      DStack_298 = local_288.ftLastWriteTime.dwHighDateTime;
    }
    else {
      local_288.ftLastWriteTime.dwHighDateTime = DStack_298;
      local_288.ftLastWriteTime.dwLowDateTime = local_29c;
      local_288.dwFileAttributes = local_2b0[0];
      local_288.nFileSizeLow = local_290;
      local_288.nFileSizeHigh = local_294;
    }
    if (((param_3 & 1) == 0) || ((local_288.dwFileAttributes & 0x400) == 0)) {
      *(DWORD *)(param_2 + 2) = local_288.dwFileAttributes;
      param_2[1] = CONCAT44(local_288.nFileSizeHigh,local_288.nFileSizeLow);
      *param_2 = (ulonglong)local_288.ftLastWriteTime & 0xffffffff00000000 | (ulonglong)local_29c;
      uVar5 = uVar4 & 0xffffffd5;
      if (((local_288.dwFileAttributes & 0x400) == 0) && ((uVar4 & 4) != 0)) {
        *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        uVar5 = uVar4 & 0xffffffd1;
      }
      uVar4 = uVar5;
      if (uVar4 == 0) {
        return 0;
      }
    }
  }
  DVar2 = __std_fs_open_handle(&local_2b8,param_1,0x80,(((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
  if (DVar2 == 0) {
    pvVar3 = (HANDLE)CONCAT44(uStack_2b4,local_2b8);
    uVar5 = uVar4;
    if ((uVar4 & 0x26) != 0) {
      BVar1 = GetFileInformationByHandleEx(pvVar3,FileBasicInfo,local_2b0,0x28);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (pvVar3 == (HANDLE)0xffffffffffffffff) {
          return DVar2;
        }
        BVar1 = CloseHandle(pvVar3);
        if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        return DVar2;
      }
      uVar5 = uVar4 & 0xffffffdd;
      *(uint *)(param_2 + 2) = local_290;
      *param_2 = CONCAT44(local_29c,local_2a0);
      if ((uVar4 & 4) != 0) {
        if ((local_290 & 0x400) == 0) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          BVar1 = GetFileInformationByHandleEx(pvVar3,FileAttributeTagInfo,&local_2b8,8);
          if (BVar1 == 0) {
            DVar2 = GetLastError();
            if (pvVar3 == (HANDLE)0xffffffffffffffff) {
              return DVar2;
            }
            BVar1 = CloseHandle(pvVar3);
            if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            return DVar2;
          }
          *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2b4;
        }
        uVar5 = uVar4 & 0xffffffd9;
      }
    }
    if ((uVar5 & 0x18) != 0) {
      BVar1 = GetFileInformationByHandleEx(pvVar3,FileStandardInfo,local_2b0,0x18);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if ((pvVar3 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(pvVar3), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        return DVar2;
      }
      uVar5 = uVar5 & 0xffffffe7;
      param_2[1] = local_2a8;
      *(undefined4 *)(param_2 + 3) = local_2a0;
    }
    if (uVar5 == 0) {
      if (pvVar3 == (HANDLE)0xffffffffffffffff) {
        return 0;
      }
      BVar1 = CloseHandle(pvVar3);
      if (BVar1 != 0) {
        return 0;
      }
    }
    else if ((pvVar3 == (HANDLE)0xffffffffffffffff) || (BVar1 = CloseHandle(pvVar3), BVar1 != 0)) {
      return 0x32;
    }
  }
  else if (((HANDLE)CONCAT44(uStack_2b4,local_2b8) == (HANDLE)0xffffffffffffffff) ||
          (BVar1 = CloseHandle((HANDLE)CONCAT44(uStack_2b4,local_2b8)), BVar1 != 0)) {
    return DVar2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



// ===== __std_fs_open_handle @ 1802df274 (size 87)

/* Library Function - Single Match
    __std_fs_open_handle
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD __std_fs_open_handle(undefined8 *param_1,LPCWSTR param_2,DWORD param_3,DWORD param_4)

{
  DWORD DVar1;
  HANDLE pvVar2;
  
  DVar1 = 0;
  pvVar2 = CreateFileW(param_2,param_3,7,(LPSECURITY_ATTRIBUTES)0x0,3,param_4,(HANDLE)0x0);
  *param_1 = pvVar2;
  if (pvVar2 == (HANDLE)0xffffffffffffffff) {
    DVar1 = GetLastError();
  }
  return DVar1;
}



// ===== FUN_1802df2cc @ 1802df2cc (size 552)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802df2cc(undefined8 param_1)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  DWORD DStack_54;
  HANDLE local_50;
  undefined4 local_48 [2];
  undefined1 local_40 [32];
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  bVar1 = false;
  DStack_54 = __std_fs_open_handle(&local_50,param_1,0x10180,0x2200000);
  if (DStack_54 == 0) {
    bVar1 = true;
LAB_1802df31a:
    local_48[0] = 0x13;
    BVar2 = SetFileInformationByHandle(local_50,0x15,local_48,4);
    if (BVar2 == 0) {
      DStack_54 = GetLastError();
      if (((DStack_54 == 1) || (DStack_54 == 0x32)) || (DStack_54 == 0x57)) {
        DStack_54 = FUN_1802deb1c(local_50);
        if (DStack_54 != 0) {
          if ((DStack_54 != 5) || (!bVar1)) goto LAB_1802df3d3;
          BVar2 = GetFileInformationByHandleEx(local_50,FileBasicInfo,local_40,0x28);
          if (BVar2 == 0) {
LAB_1802df412:
            local_58 = local_58 & 0xffffff00;
LAB_1802df416:
            DStack_54 = GetLastError();
          }
          else {
            if ((local_20 & 1) != 0) {
              local_20 = local_20 ^ 1;
              BVar2 = SetFileInformationByHandle(local_50,FileBasicInfo,local_40,0x28);
              if (BVar2 == 0) goto LAB_1802df412;
              iVar3 = FUN_1802deb1c(local_50);
              if (iVar3 == 0) {
                local_58 = CONCAT31(local_58._1_3_,1);
                DStack_54 = 0;
                goto LAB_1802df41f;
              }
              if (iVar3 == 5) {
                local_20 = local_20 | 1;
                BVar2 = SetFileInformationByHandle(local_50,FileBasicInfo,local_40,0x28);
                local_58 = local_58 & 0xffffff00;
                if (BVar2 != 0) goto LAB_1802df4a0;
                goto LAB_1802df416;
              }
              local_58 = (uint)local_58._1_3_ << 8;
              DStack_54 = GetLastError();
              goto LAB_1802df347;
            }
            local_58 = local_58 & 0xffffff00;
LAB_1802df4a0:
            DStack_54 = 5;
          }
LAB_1802df41f:
          if ((local_50 != (HANDLE)0xffffffffffffffff) &&
             (BVar2 = CloseHandle(local_50), BVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_1802df396;
        }
        goto LAB_1802df340;
      }
LAB_1802df3d3:
      local_58 = local_58 & 0xffffff00;
    }
    else {
LAB_1802df340:
      local_58 = CONCAT31(local_58._1_3_,1);
      DStack_54 = 0;
    }
LAB_1802df347:
    if (local_50 == (HANDLE)0xffffffffffffffff) goto LAB_1802df396;
  }
  else {
    if (DStack_54 == 5) {
      DStack_54 = __std_fs_open_handle(&local_50,param_1,0x10000,0x2200000);
      if (DStack_54 == 0) goto LAB_1802df31a;
    }
    else if (((((DStack_54 == 2) || (DStack_54 == 3)) || (DStack_54 == 0x35)) ||
             ((DStack_54 == 0x40 || (DStack_54 == 0x7b)))) || (DStack_54 == 0x10b)) {
      DStack_54 = 0;
    }
    local_58 = local_58 & 0xffffff00;
    if (local_50 == (HANDLE)0xffffffffffffffff) goto LAB_1802df396;
  }
  BVar2 = CloseHandle(local_50);
  if (BVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_1802df396:
  return CONCAT44(DStack_54,local_58);
}



// ===== FUN_1802df584 @ 1802df584 (size 151)

undefined8 FUN_1802df584(longlong param_1,longlong param_2,uint param_3,char param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  ULONGLONG UVar3;
  ULONGLONG UVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  UVar3 = 0;
  if (param_4 != '\0') {
    UVar3 = GetTickCount64();
  }
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  BVar1 = SleepConditionVariableSRW
                    ((PCONDITION_VARIABLE)(param_1 + 8),(PSRWLOCK)(param_2 + 0x10),param_3,0);
  if (BVar1 == 0) {
    if (param_4 != '\0') {
      UVar4 = GetTickCount64();
      if (UVar4 - UVar3 < (ulonglong)param_3) goto LAB_1802df5f4;
    }
    uVar5 = 2;
  }
LAB_1802df5f4:
  DVar2 = GetCurrentThreadId();
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(DWORD *)(param_2 + 0x48) = DVar2;
  return uVar5;
}



// ===== FUN_1802df76c @ 1802df76c (size 96)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802df76c(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  uVar1 = *(ulonglong *)(param_2 + 8);
  if ((*(byte *)(uVar2 + 3 + uVar1) & 0xf) != 0) {
    uVar1 = (ulonglong)*(byte *)(uVar2 + 3 + uVar1) & 0xfffffff0;
  }
  return uVar1;
}



// ===== FUN_1802df7cc @ 1802df7cc (size 127)

void FUN_1802df7cc(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_1802df76c(param_2,param_4,lVar1 + 4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler4(param_1,param_2,param_3,param_4);
  }
  return;
}



// ===== __scrt_dllmain_exception_filter @ 1802df974 (size 96)

/* Library Function - Single Match
    __scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_exception_filter
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 == 0) && (param_2 == 1)) {
    (*(code *)PTR__guard_dispatch_icall_1802e9f90)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}



// ===== FUN_1802dfa54 @ 1802dfa54 (size 138)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802dfa54(uint param_1)

{
  int iVar1;
  
  if (DAT_180447349 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_1802e08f4(5);
    }
    iVar1 = __scrt_is_ucrt_dll_in_use();
    if ((iVar1 == 0) || (param_1 != 0)) {
      DAT_180447350 = _DAT_180307690;
      uRam0000000180447358 = _UNK_180307698;
      _DAT_180447360 = 0xffffffffffffffff;
      _DAT_180447368 = _DAT_180307690;
      uRam0000000180447370 = _UNK_180307698;
      _DAT_180447378 = 0xffffffffffffffff;
    }
    else {
      iVar1 = _initialize_onexit_table(&DAT_180447350);
      if ((iVar1 != 0) || (iVar1 = _initialize_onexit_table(&DAT_180447368), iVar1 != 0)) {
        return 0;
      }
    }
    DAT_180447349 = '\x01';
  }
  return 1;
}



// ===== FUN_1802dfae0 @ 1802dfae0 (size 150)

ulonglong FUN_1802dfae0(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) {
    lVar3 = (longlong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;
    if ((*(int *)(lVar3 + 0x180000000) == 0x4550) &&
       (uVar1 = 0x20b,
       *(short *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -4) == 0x20b)) {
      lVar4 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -8) +
              0x18 + lVar3 + 0x180000000;
      uVar1 = (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar3 + 6);
      lVar3 = lVar4 + uVar1 * 0x28;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x28) {
        if (((ulonglong)*(uint *)(lVar4 + 0xc) <= param_1 - 0x180000000U) &&
           (uVar1 = (ulonglong)(*(int *)(lVar4 + 8) + *(uint *)(lVar4 + 0xc)),
           param_1 - 0x180000000U < uVar1)) goto LAB_1802dfb56;
      }
      lVar4 = 0;
LAB_1802dfb56:
      if (lVar4 == 0) {
        return uVar1 & 0xffffffffffffff00;
      }
      uVar2 = (uint7)(uVar1 >> 8);
      if (*(int *)(lVar4 + 0x24) < 0) {
        return (ulonglong)uVar2 << 8;
      }
      return CONCAT71(uVar2,1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// ===== atexit @ 1802dfc04 (size 23)

/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// ===== _Init_thread_footer @ 1802dfc58 (size 105)

/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180447388);
  uVar1 = (ulonglong)_tls_index;
  DAT_1803c3dcc = DAT_1803c3dcc + 1;
  *param_1 = DAT_1803c3dcc;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0xc0) = DAT_1803c3dcc;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180447388);
                    /* WARNING: Could not recover jumptable at 0x0001802dfcba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(&DAT_180447380);
  return;
}



// ===== FUN_1802dfcc4 @ 1802dfcc4 (size 123)

void FUN_1802dfcc4(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180447388);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_1802dfd2c:
                    /* WARNING: Could not recover jumptable at 0x0001802dfd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180447388);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc0) =
           DAT_1803c3dcc;
      goto LAB_1802dfd2c;
    }
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_180447380,(PSRWLOCK)&DAT_180447388,0xffffffff,0);
  } while( true );
}



// ===== tls_callback_1 @ 1802dfd40 (size 165)

void tls_callback_1(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int *_Memory;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    _Memory = *(int **)(lVar1 + 0xd0);
    if (*(int **)(lVar1 + 0xd0) != (int *)0x0) {
      while( true ) {
        iVar3 = *_Memory + -1;
        if (-1 < iVar3) {
          plVar4 = (longlong *)(_Memory + ((longlong)iVar3 + 2) * 2);
          do {
            if (*plVar4 != 0) {
              (*(code *)PTR__guard_dispatch_icall_1802e9f90)();
            }
            plVar4 = plVar4 + -1;
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
        }
        piVar2 = *(int **)(_Memory + 2);
        if (piVar2 == (int *)0x0) break;
        free(_Memory);
        *(int **)(lVar1 + 0xd0) = piVar2;
        _Memory = piVar2;
      }
      *(undefined8 *)(lVar1 + 0xd0) = 0;
    }
  }
  return;
}



// ===== FUN_1802dfde8 @ 1802dfde8 (size 154)

undefined8 FUN_1802dfde8(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar3 = *(int **)(lVar1 + 0xd0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)(lVar1 + 0xe0);
  }
  else {
    iVar2 = *piVar3;
    if (iVar2 != 0x1e) goto LAB_1802dfe61;
    piVar3 = malloc(0x100);
    free((void *)0x0);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(lVar1 + 0xd0);
  }
  iVar2 = 0;
  *(int **)(lVar1 + 0xd0) = piVar3;
  *piVar3 = 0;
LAB_1802dfe61:
  *(undefined8 *)(piVar3 + (longlong)iVar2 * 2 + 4) = param_1;
  *piVar3 = *piVar3 + 1;
  return 0;
}



// ===== tls_callback_0 @ 1802dfe84 (size 102)

void tls_callback_0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  if ((param_2 == 2) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(char *)(lVar1 + 0x1e0) != '\x01')) {
    *(undefined1 *)(lVar1 + 0x1e0) = 1;
    for (ppuVar2 = &PTR_FUN_1802ea108; ppuVar2 != (undefined **)&DAT_1802ea110;
        ppuVar2 = ppuVar2 + 1) {
      if (*ppuVar2 != (undefined *)0x0) {
        (*(code *)PTR__guard_dispatch_icall_1802e9f90)();
      }
    }
  }
  return;
}



// ===== `eh_vector_destructor_iterator' @ 1802dfef4 (size 107)

/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_1802e9f90)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}



// ===== FUN_1802dff60 @ 1802dff60 (size 90)

void FUN_1802dff60(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    param_1 = param_1 - param_2;
    (*(code *)PTR__guard_dispatch_icall_1802e9f90)(param_1);
  }
  return;
}



// ===== __chkstk @ 1802dffe0 (size 78)

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



// ===== FUN_1802e0030 @ 1802e0030 (size 80)

ulonglong FUN_1802e0030(undefined1 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1802e0198(param_3 != 0);
    return uVar2;
  }
  if (param_2 == 1) {
    uVar2 = FUN_1802e0080(param_1,param_3);
    return uVar2;
  }
  if (param_2 == 2) {
    bVar1 = FUN_1802df934();
  }
  else {
    if (param_2 != 3) {
      return 1;
    }
    bVar1 = FUN_1802df95c();
  }
  return (ulonglong)bVar1;
}



// ===== FUN_1802e0080 @ 1802e0080 (size 276)

undefined8 FUN_1802e0080(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  
  cVar2 = FUN_1802dfa18(0);
  if (cVar2 != '\0') {
    uVar3 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_180447338 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1802e08f4(7);
    }
    DAT_180447338 = 1;
    cVar2 = FUN_1802df91c();
    if (cVar2 != '\0') {
      FUN_1802e0b54();
      FUN_1802e0b14();
      FUN_1802e0b30();
      iVar4 = _initterm_e(&DAT_1802ea118,&DAT_1802ea120);
      if ((iVar4 == 0) && (cVar2 = __scrt_dllmain_after_initialize_c(), cVar2 != '\0')) {
        _initterm(&DAT_1802e9fb8,&DAT_1802ea0f8);
        DAT_180447338 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock(uVar3);
    if (!bVar1) {
      plVar5 = (longlong *)FUN_1802e0b4c();
      if ((*plVar5 != 0) && (cVar2 = FUN_1802dfae0(plVar5), cVar2 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_1802e9f90)(param_1,2,param_2);
      }
      DAT_180447394 = DAT_180447394 + 1;
      return 1;
    }
  }
  return 0;
}



// ===== FUN_1802e0198 @ 1802e0198 (size 128)

undefined1
FUN_1802e0198(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (DAT_180447394 < 1) {
    uVar1 = 0;
  }
  else {
    DAT_180447394 = DAT_180447394 + -1;
    uVar1 = __scrt_acquire_startup_lock();
    if (DAT_180447338 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1802e08f4(7);
    }
    uVar2 = uVar1;
    __scrt_dllmain_uninitialize_c();
    FUN_1802e0b24();
    FUN_1802e0b90();
    DAT_180447338 = 0;
    __scrt_release_startup_lock(uVar1);
    uVar1 = __scrt_uninitialize_crt(param_1,0,param_3,param_4,uVar2);
    FUN_1802dfa04();
  }
  return uVar1;
}



// ===== FUN_1802e021c @ 1802e021c (size 290)

int FUN_1802e021c(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) && (DAT_180447394 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (DAT_180388bb0 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = (*(code *)PTR__guard_dispatch_icall_1802e9f90)();
    }
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_1802e0030(param_1,param_2,param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = FUN_1802e0af0(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVar2 == 0)) {
    FUN_1802e0af0(param_1,0,param_3);
    FUN_1802e0198(param_3 != 0);
    if (DAT_180388bb0 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1802e9f90)(param_1,0,param_3);
    }
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar1 = FUN_1802e0030(param_1,param_2,param_3);
    iVar2 = 0;
    if (iVar1 != 0) {
      if (DAT_180388bb0 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = (*(code *)PTR__guard_dispatch_icall_1802e9f90)(param_1,param_2,param_3);
      }
    }
  }
  return iVar2;
}



// ===== entry @ 1802e0344 (size 61)

void entry(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 1) {
    FUN_1802e0a40();
  }
  FUN_1802e021c(param_1,param_2,param_3);
  return;
}



// ===== FUN_1802e03b8 @ 1802e03b8 (size 211)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e03b8(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  puVar3 = auStack_38;
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1802e03e3;
  FUN_1802e05b0(&DAT_180447440);
  _DAT_1804473b0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_1804474d8 = puVar3 + 0x40;
  _DAT_1804474c0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1804473a0 = 0xc0000409;
  _DAT_1804473a4 = 1;
  _DAT_1804473b8 = 1;
  DAT_1804473c0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_1803c3d80;
  *(undefined8 *)(puVar3 + 0x28) = DAT_1803c3dc0;
  *(undefined8 *)(puVar3 + -8) = 0x1802e0485;
  DAT_180447538 = _DAT_1804473b0;
  __raise_securityfailure(&PTR_DAT_180388bb8);
  return;
}



// ===== FUN_1802e04a0 @ 1802e04a0 (size 157)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e04a0(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  puVar3 = auStack_28;
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1802e04cb;
  FUN_1802e0540(&DAT_180447440);
  _DAT_1804473b0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_1804474d8 = puVar3 + 0x30;
  _DAT_1804473a0 = 0xc0000409;
  _DAT_1804473a4 = 1;
  _DAT_1804473b8 = 1;
  DAT_1804473c0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x1802e0537;
  DAT_180447538 = _DAT_1804473b0;
  __raise_securityfailure(&PTR_DAT_180388bb8);
  return;
}



// ===== FUN_1802e0540 @ 1802e0540 (size 112)

void FUN_1802e0540(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}



// ===== FUN_1802e05b0 @ 1802e05b0 (size 116)

void FUN_1802e05b0(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



// ===== FUN_1802e0624 @ 1802e0624 (size 661)

/* WARNING: Removing unreachable block (ram,0x0001802e0715) */
/* WARNING: Removing unreachable block (ram,0x0001802e0705) */
/* WARNING: Removing unreachable block (ram,0x0001802e06e0) */
/* WARNING: Removing unreachable block (ram,0x0001802e065e) */
/* WARNING: Removing unreachable block (ram,0x0001802e063c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802e0624(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_1803c3df0 = 0x8000;
    _DAT_1803c3df8 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180447914 = DAT_180447914 | 1;
    }
  }
  uVar8 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar10 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_180447914 = DAT_180447914 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar12 = *(uint *)(lVar4 + 4);
    }
  }
  DAT_1803c3de8 = 1;
  DAT_1803c3dec = 2;
  uVar9 = DAT_1803c3de0 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_1803c3de8 = 2;
    DAT_1803c3dec = 6;
    uVar9 = DAT_1803c3de0 & 0xffffffffffffffee;
  }
  DAT_1803c3de0 = uVar9;
  if ((uVar5 >> 0x1b & 1) == 0) {
    return 0;
  }
  uVar9 = xinuse(0);
  uVar9 = in_XCR0 & uVar9 & 0xffffffff;
  if (((uVar5 >> 0x1c & 1) == 0) || (bVar6 = (byte)uVar9, (bVar6 & 6) != 6)) goto LAB_1802e0886;
  DAT_1803c3de8 = 3;
  uVar7 = DAT_1803c3de0;
  uVar5 = DAT_1803c3dec | 8;
  if ((uVar8 & 0x20) == 0) {
LAB_1802e081c:
    DAT_1803c3dec = uVar5;
    DAT_1803c3de0 = uVar7;
    uVar7 = DAT_1803c3de0;
    uVar5 = DAT_1803c3dec;
  }
  else {
    DAT_1803c3de8 = 5;
    uVar7 = DAT_1803c3de0 & 0xfffffffffffffffd;
    uVar5 = DAT_1803c3dec | 0x28;
    if ((uVar8 & 0xd0030000) == 0xd0030000) {
      if ((bVar6 & 0xe0) != 0xe0) goto LAB_1802e081c;
      DAT_1803c3dec = DAT_1803c3dec | 0x68;
      DAT_1803c3de8 = 6;
      uVar7 = DAT_1803c3de0 & 0xffffffffffffffd9;
      uVar5 = DAT_1803c3dec;
    }
  }
  DAT_1803c3dec = uVar5;
  DAT_1803c3de0 = uVar7;
  if ((uVar10 >> 0x17 & 1) != 0) {
    DAT_1803c3de0 = DAT_1803c3de0 & 0xfffffffffeffffff;
  }
  if (((uVar11 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
    _DAT_180447910 = uVar12 & 0x400ff;
    DAT_1803c3de0 = ~((ulonglong)(uVar12 >> 0x10 & 6) | 0x1000029) & DAT_1803c3de0;
    if (1 < (byte)_DAT_180447910) {
      DAT_1803c3de0 = DAT_1803c3de0 & 0xffffffffffffffbf;
    }
  }
LAB_1802e0886:
  if (((uVar11 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)) {
    DAT_1803c3de0 = DAT_1803c3de0 & 0xffffffffffffff7f;
  }
  return 0;
}



// ===== FUN_1802e08f4 @ 1802e08f4 (size 331)

void FUN_1802e08f4(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  puVar4 = auStack_5c8;
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x1802e0928;
  FUN_1802e08e8(3);
  *(undefined8 *)(puVar4 + -8) = 0x1802e0939;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1802e0943;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x1802e095d;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x1802e09a1;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = local_res18 + -0x10;
  *(undefined8 *)(puVar4 + -8) = 0x1802e09d3;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x1802e09f5;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1802e0a12;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1802e0a1d;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1802e0a2e;
    FUN_1802e08e8(3);
  }
  return;
}



// ===== FUN_1802e0a40 @ 1802e0a40 (size 175)

void FUN_1802e0a40(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_1803c3d80 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_1803c3d80 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_1803c3d80 == 0x2b992ddfa232) {
      DAT_1803c3d80 = 0x2b992ddfa233;
    }
  }
  DAT_1803c3dc0 = ~DAT_1803c3d80;
  return;
}



// ===== FUN_1802e0d20 @ 1802e0d20 (size 148)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1802e0d20(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1802e0d30;
  plVar2 = (longlong *)FUN_180196100(0x20,"crypto\\comp\\comp_lib.c",0x16);
  if (plVar2 == (longlong *)0x0) {
    FUN_1801a70c0(0x29,0x67,0x41,"crypto\\comp\\comp_lib.c",0x17,uVar3);
    return (longlong *)0x0;
  }
  *plVar2 = param_1;
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))(plVar2);
    if (iVar1 == 0) {
      FUN_180195e10(plVar2,"crypto\\comp\\comp_lib.c",0x1c);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}



// ===== FUN_1802e0dc0 @ 1802e0dc0 (size 77)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1802e0dc0(longlong *param_1)

{
  undefined8 uVar1;
  int in_stack_00000028;
  
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))();
  if (0 < (int)uVar1) {
    *(int *)(param_1 + 1) = (int)param_1[1] + in_stack_00000028;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + (int)uVar1;
  }
  return uVar1;
}



// ===== FUN_1802e0e10 @ 1802e0e10 (size 77)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1802e0e10(longlong *param_1)

{
  undefined8 uVar1;
  int in_stack_00000028;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if (0 < (int)uVar1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + in_stack_00000028;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + (int)uVar1;
  }
  return uVar1;
}



// ===== FUN_1802e0e60 @ 1802e0e60 (size 66)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1802e0e60(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1801a2830(*param_1);
    FUN_1801a2830(param_1[1]);
    FUN_180195e10(param_1,"crypto\\ct\\ct_policy.c",0x32);
  }
  return;
}



// ===== FUN_1802e0eb0 @ 1802e0eb0 (size 116)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1802e0eb0(void)

{
  longlong lVar1;
  __time64_t _Var2;
  undefined8 uVar3;
  
  uVar3 = 0x1802e0ebc;
  lVar1 = FUN_180196100(0x20,"crypto\\ct\\ct_policy.c",0x1e);
  if (lVar1 == 0) {
    FUN_1801a70c0(0x32,0x85,0x41,"crypto\\ct\\ct_policy.c",0x21,uVar3);
    return 0;
  }
  _Var2 = _time64((__time64_t *)0x0);
  *(__time64_t *)(lVar1 + 0x18) = (_Var2 + 300) * 1000;
  return lVar1;
}



// ===== FUN_1802e0f30 @ 1802e0f30 (size 67)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1802e0f30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1801a2c20(param_2);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_1 = param_2;
  return 1;
}



// ===== FUN_1802e0f80 @ 1802e0f80 (size 68)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1802e0f80(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1801a2c20(param_2);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



// ===== FUN_1802e1030 @ 1802e1030 (size 163)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1802e1030(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1802e104b;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     (lVar2 = FUN_1801c9050(), lVar2 == 0)) {
    return 0;
  }
  lVar3 = FUN_180198b30();
  if ((lVar3 != 0) && (iVar1 = FUN_1802033a0(lVar3,param_3,param_1,param_2,lVar2,uVar4), iVar1 == 0)
     ) {
    FUN_180198910(lVar3);
    lVar3 = 0;
  }
  FUN_1801c8dd0(lVar2);
  return lVar3;
}



// ===== FUN_1802e10e0 @ 1802e10e0 (size 332)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1802e10e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1802e1101;
  lVar4 = 0;
  lVar5 = 0;
  lVar6 = 0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     ((param_4 == 0 || (lVar2 = FUN_1801c9050(), lVar2 == 0)))) {
    return 0;
  }
  lVar3 = FUN_180198b30();
  if (((lVar3 != 0) &&
      ((lVar4 = FUN_180198b30(), lVar4 != 0 && (lVar5 = FUN_180198b30(), lVar5 != 0)))) &&
     ((iVar1 = FUN_1802033a0(lVar4,param_3,param_1,param_2,lVar2,uVar7), iVar1 == 0 ||
      (((lVar6 = FUN_1802e19a0(param_2,param_3,param_2), lVar6 == 0 ||
        (iVar1 = FUN_180202da0(lVar3,param_4,lVar6,param_2,lVar2), iVar1 == 0)) ||
       (iVar1 = FUN_180202bb0(lVar5,lVar4,lVar3,param_2,lVar2), iVar1 == 0)))))) {
    FUN_180198910(lVar5);
    lVar5 = 0;
  }
  FUN_1801c8dd0(lVar2);
  FUN_1801984d0(lVar3);
  FUN_1801984d0(lVar4);
  FUN_180198910(lVar6);
  return lVar5;
}



// ===== FUN_1802e1230 @ 1802e1230 (size 548)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1802e1230(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar4 = 0;
  lVar5 = 0;
  lVar7 = 0;
  lVar8 = 0;
  lVar6 = 0;
  if ((((param_6 != 0) && (param_2 != 0)) && (param_1 != 0)) &&
     (((param_3 != 0 && (param_4 != 0)) && (param_5 != 0)))) {
    lVar2 = FUN_1801c9050();
    if (lVar2 != 0) {
      lVar3 = FUN_180198b30();
      if (lVar3 != 0) {
        lVar4 = FUN_180198b30();
        if (lVar4 != 0) {
          lVar5 = FUN_180198b30();
          if (lVar5 != 0) {
            lVar6 = FUN_180198b30();
            if (lVar6 != 0) {
              FUN_180199020(lVar6,param_4,4);
              FUN_180198ef0(lVar3,4);
              iVar1 = FUN_1802033a0(lVar3,param_3,lVar6,param_1,lVar2);
              if (iVar1 != 0) {
                lVar7 = FUN_1802e19a0(param_1,param_3,param_1);
                if (lVar7 != 0) {
                  iVar1 = FUN_180202da0(lVar4,lVar3,lVar7,param_1,lVar2);
                  if (iVar1 != 0) {
                    iVar1 = FUN_180202ed0(lVar3,param_2,lVar4,param_1,lVar2);
                    if (iVar1 != 0) {
                      iVar1 = FUN_1801c9580(lVar5,param_6,lVar6,lVar2);
                      if (iVar1 != 0) {
                        iVar1 = FUN_1801c9260(lVar4,param_5,lVar5);
                        if (iVar1 != 0) {
                          lVar8 = FUN_180198b30();
                          if (lVar8 != 0) {
                            iVar1 = FUN_1802033a0(lVar8,lVar3,lVar4,param_1,lVar2);
                            if (iVar1 == 0) {
                              FUN_180198910(lVar8);
                              lVar8 = 0;
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
      FUN_1801c8dd0(lVar2);
      FUN_180198910(lVar6);
      FUN_1801984d0(lVar3);
      FUN_1801984d0(lVar4);
      FUN_1801984d0(lVar5);
      FUN_180198910(lVar7);
      return lVar8;
    }
  }
  return 0;
}



// ===== FUN_1802e1460 @ 1802e1460 (size 285)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1802e1460(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1802e147d;
  lVar3 = 0;
  lVar4 = 0;
  if ((((param_3 == 0) || (param_1 == 0)) || (param_2 == 0)) || ((param_4 == 0 || (param_5 == 0))))
  {
    lVar4 = 0;
  }
  else {
    lVar2 = FUN_1801c9050();
    if (lVar2 != 0) {
      lVar3 = FUN_180198b30();
      if (lVar3 != 0) {
        iVar1 = FUN_1802033a0(lVar3,param_2,param_3,param_5,lVar2,uVar5);
        if (iVar1 != 0) {
          iVar1 = FUN_180202da0(lVar3,param_1,lVar3,param_5,lVar2);
          if (iVar1 != 0) {
            lVar4 = FUN_180198b30();
            if (lVar4 != 0) {
              iVar1 = FUN_1802033a0(lVar4,lVar3,param_4,param_5,lVar2);
              if (iVar1 == 0) {
                FUN_180198910(lVar4);
                lVar4 = 0;
              }
            }
          }
        }
      }
    }
    FUN_1801c8dd0(lVar2);
    FUN_1801984d0(lVar3);
  }
  return lVar4;
}



// ===== FUN_1802e15a0 @ 1802e15a0 (size 521)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802e15a0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  uVar5 = 0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     (lVar2 = FUN_18019d560(), lVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    iVar1 = FUN_180198b90(param_1);
    lVar3 = FUN_180195dc0((longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3),
                          "crypto\\srp\\srp_lib.c",0x85);
    if (lVar3 != 0) {
      uVar4 = FUN_18019db60();
      iVar1 = FUN_18019d050(lVar2,uVar4,0);
      if (iVar1 != 0) {
        lVar6 = -1;
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(param_2 + lVar7) != '\0');
        iVar1 = FUN_18019d280(lVar2,param_2);
        if ((iVar1 != 0) && (iVar1 = FUN_18019d280(lVar2,&DAT_1802ea954,1), iVar1 != 0)) {
          do {
            lVar6 = lVar6 + 1;
          } while (*(char *)(lVar6 + param_3) != '\0');
          iVar1 = FUN_18019d280(lVar2,param_3,lVar6);
          if ((iVar1 != 0) && (iVar1 = FUN_18019cf70(lVar2,local_58,0), iVar1 != 0)) {
            uVar4 = FUN_18019db60();
            iVar1 = FUN_18019d050(lVar2,uVar4,0);
            if ((iVar1 != 0) && (iVar1 = FUN_180198350(param_1,lVar3), -1 < iVar1)) {
              iVar1 = FUN_180198b90(param_1);
              iVar1 = FUN_18019d280(lVar2,lVar3,
                                    (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3));
              if (((iVar1 != 0) && (iVar1 = FUN_18019d280(lVar2,local_58,0x14), iVar1 != 0)) &&
                 (iVar1 = FUN_18019cf70(lVar2,local_58,0), iVar1 != 0)) {
                uVar5 = FUN_180198210(local_58,0x14);
              }
            }
          }
        }
      }
    }
    FUN_180195e10(lVar3,"crypto\\srp\\srp_lib.c",0x9b);
    FUN_18019d520(lVar2);
  }
  return uVar5;
}



// ===== FUN_1802e17b0 @ 1802e17b0 (size 158)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1802e17b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar2 = FUN_1801c9050();
    if (lVar2 != 0) {
      lVar3 = FUN_180198b30();
      if (lVar3 != 0) {
        iVar1 = FUN_180202f80(lVar3,param_1,param_2,lVar2);
        if (iVar1 != 0) {
          iVar1 = FUN_180198a80(lVar3);
          bVar4 = iVar1 == 0;
        }
      }
      FUN_1801c8dd0(lVar2);
      FUN_180198910(lVar3);
    }
  }
  return bVar4;
}



// ===== FUN_1802e1850 @ 1802e1850 (size 162)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1802e1850(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar4 = false;
  if (((param_1 == 0) || (param_2 == 0)) || (lVar2 = FUN_1801c9050(), lVar2 == 0)) {
    return false;
  }
  lVar3 = FUN_180198b30();
  if ((lVar3 != 0) && (iVar1 = FUN_180202f80(lVar3,param_1,param_2,lVar2), iVar1 != 0)) {
    iVar1 = FUN_180198a80(lVar3);
    bVar4 = iVar1 == 0;
  }
  FUN_1801c8dd0(lVar2);
  FUN_180198910(lVar3);
  return bVar4;
}



// ===== FUN_1802e1900 @ 1802e1900 (size 153)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_1802e1900(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      iVar1 = FUN_180198550(*(undefined8 *)((longlong)&PTR_PTR_1803c3e08 + uVar2),param_1);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_180198550(*(undefined8 *)((longlong)&PTR_PTR_1803c3e10 + uVar2),param_2),
         iVar1 == 0)) {
        return (&PTR_DAT_1803c3e00)[lVar3 * 3];
      }
      lVar3 = lVar3 + 1;
      uVar2 = uVar2 + 0x18;
    } while (uVar2 < 0xa8);
  }
  return (undefined *)0x0;
}



// ===== FUN_1802e19a0 @ 1802e19a0 (size 310)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802e19a0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_1803c3d80 ^ (ulonglong)auStack_78;
  iVar1 = FUN_180198b90(param_3);
  uVar4 = 0;
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  if (param_1 == param_3) {
LAB_1802e19f9:
    if (param_2 != param_3) {
      iVar2 = FUN_180198fc0(param_2,param_3);
      if (-1 < iVar2) goto LAB_1802e1a0d;
    }
    lVar3 = FUN_180195dc0((longlong)(iVar1 * 2),"crypto\\srp\\srp_lib.c",0x22);
    if (lVar3 != 0) {
      iVar2 = FUN_180198430(param_1,lVar3,iVar1);
      if (-1 < iVar2) {
        iVar2 = FUN_180198430(param_2,lVar3 + iVar1,iVar1);
        if (-1 < iVar2) {
          local_58 = FUN_18019db60();
          local_50 = 0;
          iVar1 = FUN_18019cda0(lVar3,(longlong)(iVar1 * 2),local_48,0);
          if (iVar1 != 0) {
            uVar4 = FUN_180198210(local_48,0x14);
          }
        }
      }
    }
    FUN_180195e10(lVar3,"crypto\\srp\\srp_lib.c",0x2a);
  }
  else {
    iVar2 = FUN_180198fc0(param_1,param_3);
    if (iVar2 < 0) goto LAB_1802e19f9;
LAB_1802e1a0d:
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_1802e3310 @ 1802e3310 (size 124)

void FUN_1802e3310(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_18008d530(param_2 + 0x50);
  FUN_180120700(uVar3);
  lVar1 = *(longlong *)(param_2 + 0x60);
  if (lVar1 != 0) {
    iVar2 = FUN_1800b8ce0(lVar1 + 0x10,5);
    if (iVar2 - 2U < 2) {
      FUN_1800bac40(lVar1);
    }
    FUN_1800ba2b0(lVar1 + 0x10,4);
    FUN_1800b7030(lVar1);
  }
  *(undefined8 *)**(undefined8 **)(*(longlong *)(param_2 + 0x68) + 8) = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ===== FUN_1802e39b0 @ 1802e39b0 (size 67)

undefined8 FUN_1802e39b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) != '\0') {
    FUN_180137710();
  }
  if (*(char *)(param_2 + 0xb8) != '\0') {
    FUN_1801144b0();
  }
  FUN_180081540(*(undefined8 *)(param_2 + 0x20));
  return 0;
}



// ===== FUN_1802e3b60 @ 1802e3b60 (size 113)

void FUN_1802e3b60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  *(longlong *)(param_2 + 0x50) = lVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x58) = uVar2;
  lVar3 = *(longlong *)(param_2 + 200);
  *(longlong *)(param_2 + 0x60) = lVar1 + lVar3;
  FUN_1800be420(lVar1 + lVar3,lVar1 + lVar3 * 2,lVar1,*(undefined8 *)(param_2 + 0xb0));
  *(undefined8 *)(param_2 + 0x48) = 0;
  puVar4 = *(undefined8 **)(param_2 + 0x40);
  FUN_1800be420(lVar1 + lVar3 * 2,*puVar4,lVar1 + lVar3);
  *puVar4 = uVar2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ===== FUN_1802e3be0 @ 1802e3be0 (size 84)

void FUN_1802e3be0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0xb8);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x58) = uVar1;
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 200);
  puVar2 = *(undefined8 **)(param_2 + 0x40);
  FUN_1800be420();
  *(undefined8 *)(param_2 + 0x48) = 0;
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// ===== FUN_1802e4b10 @ 1802e4b10 (size 114)

undefined8 FUN_1802e4b10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x58);
  uVar2 = std::ios_base::exceptions
                    ((ios_base *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1));
  if ((uVar2 & 2) != 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1),2,false);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1),2,false);
  return 0;
}



// ===== FUN_1802e5320 @ 1802e5320 (size 148)

undefined8 FUN_1802e5320(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_2 + 0x34) = 0;
  puVar1 = *(undefined8 **)(param_2 + 0xe8);
  FUN_18010fef0(*(longlong *)(param_2 + 0xd8) + 0x148,puVar1,*(undefined8 *)(param_2 + 0xe0),
                param_2 + 0x130,param_2 + 0x34);
  if (*(short *)(param_2 + 0x152) == -1) {
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
  }
  puVar3 = (undefined8 *)FUN_180109d40(param_2 + 0x70,(int)*(short *)(param_2 + 0x152));
  **(undefined8 **)(param_2 + 0xf0) = *puVar3;
  puVar3 = *(undefined8 **)(param_2 + 0x68);
  uVar2 = puVar1[1];
  *puVar3 = *puVar1;
  puVar3[1] = uVar2;
  return 0;
}



// ===== FUN_1802e53c0 @ 1802e53c0 (size 210)

undefined8 FUN_1802e53c0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0xf;
  *(undefined1 *)(param_2 + 0x130) = 0;
  *(undefined4 *)(param_2 + 0x150) = 0xffff0000;
  *(undefined4 *)(param_2 + 0x58) = 0;
  puVar1 = *(undefined4 **)(param_2 + 0xe8);
  FUN_18010fef0(*(longlong *)(param_2 + 0xd8) + 0x148,puVar1,*(undefined8 *)(param_2 + 0xe0),
                param_2 + 0x130,param_2 + 0x58);
  if (*(short *)(param_2 + 0x152) == -1) {
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
  }
  puVar6 = (undefined8 *)FUN_180109d40(param_2 + 0x70,(int)*(short *)(param_2 + 0x152));
  **(undefined8 **)(param_2 + 0xf0) = *puVar6;
  puVar2 = *(undefined4 **)(param_2 + 0x68);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  FUN_180078180(param_2 + 0x130);
  return 0;
}



// ===== FUN_1802e5e20 @ 1802e5e20 (size 91)

undefined8 FUN_1802e5e20(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_2 + 0xb8;
  if (0xf < *(ulonglong *)(param_2 + 0xd0)) {
    lVar2 = *(longlong *)(param_2 + 0xb8);
  }
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0xa8) + 8))();
  FUN_180116040(1,"System config JSON parse failed: %s | response=%.200s",uVar1,lVar2);
  return 0;
}



// ===== FUN_1802e6400 @ 1802e6400 (size 109)

undefined8 FUN_1802e6400(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(longlong *)(lVar1 + 8) == *(longlong *)(lVar1 + 0x10)) {
    FUN_1801169c0(lVar1,*(undefined8 *)(lVar1 + 8),param_2 + 0x30);
  }
  else {
    **(undefined4 **)(lVar1 + 8) = *(undefined4 *)(param_2 + 0x30);
    *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 4;
  }
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x110) + 8))();
  FUN_180116040(1,"mqtt send failed: %s\n",uVar2);
  return 0;
}



// ===== FUN_1802e6510 @ 1802e6510 (size 109)

undefined8 FUN_1802e6510(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (*(longlong *)(lVar1 + 8) == *(longlong *)(lVar1 + 0x10)) {
    FUN_1801169c0(lVar1,*(undefined8 *)(lVar1 + 8),param_2 + 0x30);
  }
  else {
    **(undefined4 **)(lVar1 + 8) = *(undefined4 *)(param_2 + 0x30);
    *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 4;
  }
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x128) + 8))();
  FUN_180116040(1,"mqtt send failed: %s\n",uVar2);
  return 0;
}



// ===== FUN_1802e6c40 @ 1802e6c40 (size 74)

undefined8 FUN_1802e6c40(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return 0;
}



// ===== FUN_1802e7c44 @ 1802e7c44 (size 89)

undefined4 FUN_1802e7c44(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x28) == -0x1f928c9d) {
    puVar2 = (undefined8 *)__current_exception();
    *puVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    puVar2 = (undefined8 *)__current_exception_context();
    *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}



// ===== FUN_1802e7d20 @ 1802e7d20 (size 196)

void FUN_1802e7d20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_180078180(&DAT_1803bd168);
  FUN_180078180(&DAT_1803bd148);
  FUN_18007fb30(&DAT_1803bd138,&DAT_1803bd138,*(undefined8 *)((longlong)DAT_1803bd138 + 8));
  free(DAT_1803bd138);
  FUN_1800750a0(&DAT_1803bd128,&DAT_1803bd128,*(undefined8 *)((longlong)DAT_1803bd128 + 8));
  free(DAT_1803bd128);
  plVar5 = DAT_1803bd120;
  if (DAT_1803bd120 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1803bd120 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



// ===== FUN_1802e7df0 @ 1802e7df0 (size 100)

void FUN_1802e7df0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



// ===== FUN_1802e7e60 @ 1802e7e60 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e7e60(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c61c0) {
    pvVar1 = (void *)CONCAT71(DAT_1803c61a8._1_7_,(undefined1)DAT_1803c61a8);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c61c0 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c61b8 = _DAT_1802eace0;
  DAT_1803c61c0 = _UNK_1802eace8;
  DAT_1803c61a8._0_1_ = 0;
  return;
}



// ===== FUN_1802e7ee0 @ 1802e7ee0 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e7ee0(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c61a0) {
    pvVar1 = (void *)CONCAT71(DAT_1803c6188._1_7_,(undefined1)DAT_1803c6188);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c61a0 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c6198 = _DAT_1802eace0;
  DAT_1803c61a0 = _UNK_1802eace8;
  DAT_1803c6188._0_1_ = 0;
  return;
}



// ===== FUN_1802e7f60 @ 1802e7f60 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e7f60(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c6220) {
    pvVar1 = (void *)CONCAT71(DAT_1803c6208._1_7_,(undefined1)DAT_1803c6208);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c6220 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c6218 = _DAT_1802eace0;
  DAT_1803c6220 = _UNK_1802eace8;
  DAT_1803c6208._0_1_ = 0;
  return;
}



// ===== FUN_1802e7fe0 @ 1802e7fe0 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e7fe0(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c6200) {
    pvVar1 = (void *)CONCAT71(DAT_1803c61e8._1_7_,(undefined1)DAT_1803c61e8);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c6200 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c61f8 = _DAT_1802eace0;
  DAT_1803c6200 = _UNK_1802eace8;
  DAT_1803c61e8._0_1_ = 0;
  return;
}



// ===== FUN_1802e8060 @ 1802e8060 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e8060(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803bd1a0) {
    pvVar1 = (void *)CONCAT71(DAT_1803bd188._1_7_,(undefined1)DAT_1803bd188);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803bd1a0 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803bd198 = _DAT_1802eace0;
  DAT_1803bd1a0 = _UNK_1802eace8;
  DAT_1803bd188._0_1_ = 0;
  return;
}



// ===== FUN_1802e8160 @ 1802e8160 (size 131)

void FUN_1802e8160(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)((longlong)DAT_1803c6298 + 8) + 0x19);
  _Memory = *(longlong **)((longlong)DAT_1803c6298 + 8);
  while (cVar1 == '\0') {
    FUN_18008de40(&DAT_1803c6298,&DAT_1803c6298,_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    FUN_180078180(_Memory + 8);
    FUN_180078180(_Memory + 4);
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free(DAT_1803c6298);
  return;
}



// ===== FUN_1802e81f0 @ 1802e81f0 (size 98)

void FUN_1802e81f0(void)

{
  *(undefined ***)((longlong)&PTR_DAT_1803bd2d0 + (longlong)*(int *)(PTR_DAT_1803bd2d0 + 4)) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&PTR_s__Y_m_d__H_M_S_1803bd2c8 + (longlong)*(int *)(PTR_DAT_1803bd2d0 + 4) + 4)
       = *(int *)(PTR_DAT_1803bd2d0 + 4) + -0xb8;
  FUN_180076bd0(&DAT_1803bd2e8);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)&DAT_1803bd2f0);
                    /* WARNING: Could not recover jumptable at 0x0001802e824b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)&DAT_1803bd388);
  return;
}



// ===== FUN_1802e8280 @ 1802e8280 (size 198)

void FUN_1802e8280(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = DAT_1803c6378;
  pvVar5 = DAT_1803c6370;
  if (DAT_1803c6370 != (void *)0x0) {
    for (; pvVar5 != pvVar4; pvVar5 = (void *)((longlong)pvVar5 + 0x10)) {
      plVar3 = *(longlong **)((longlong)pvVar5 + 8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
    pvVar5 = DAT_1803c6370;
    if ((0xfff < (DAT_1803c6380 - (longlong)DAT_1803c6370 & 0xfffffffffffffff0U)) &&
       (pvVar5 = *(void **)((longlong)DAT_1803c6370 + -8),
       0x1f < (ulonglong)((longlong)DAT_1803c6370 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar5);
    DAT_1803c6370 = (void *)0x0;
    DAT_1803c6378 = (void *)0x0;
    DAT_1803c6380 = 0;
  }
  return;
}



// ===== FUN_1802e8390 @ 1802e8390 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e8390(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c6360) {
    pvVar1 = (void *)CONCAT71(DAT_1803c6348._1_7_,(undefined1)DAT_1803c6348);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c6360 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c6358 = _DAT_1802eace0;
  DAT_1803c6360 = _UNK_1802eace8;
  DAT_1803c6348._0_1_ = 0;
  return;
}



// ===== FUN_1802e8410 @ 1802e8410 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e8410(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c6340) {
    pvVar1 = (void *)CONCAT71(DAT_1803c6328._1_7_,(undefined1)DAT_1803c6328);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c6340 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c6338 = _DAT_1802eace0;
  DAT_1803c6340 = _UNK_1802eace8;
  DAT_1803c6328._0_1_ = 0;
  return;
}



// ===== FUN_1802e8490 @ 1802e8490 (size 131)

void FUN_1802e8490(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)((longlong)DAT_1803c63a0 + 8) + 0x19);
  _Memory = *(longlong **)((longlong)DAT_1803c63a0 + 8);
  while (cVar1 == '\0') {
    FUN_1801266a0(&DAT_1803c63a0,&DAT_1803c63a0,_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    FUN_1800f4db0(_Memory + 8);
    FUN_180078180(_Memory + 4);
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free(DAT_1803c63a0);
  return;
}



// ===== FUN_1802e8520 @ 1802e8520 (size 116)

void FUN_1802e8520(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)((longlong)DAT_1803c63b8 + 8) + 0x19);
  _Memory = *(longlong **)((longlong)DAT_1803c63b8 + 8);
  while (cVar1 == '\0') {
    FUN_180126620(&DAT_1803c63b8,&DAT_1803c63b8,_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    FUN_180078180(_Memory + 4);
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free(DAT_1803c63b8);
  return;
}



// ===== FUN_1802e85a0 @ 1802e85a0 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e85a0(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c3118) {
    pvVar1 = (void *)CONCAT71(DAT_1803c3100._1_7_,(undefined1)DAT_1803c3100);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c3118 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c3110 = _DAT_1802eace0;
  DAT_1803c3118 = _UNK_1802eace8;
  DAT_1803c3100._0_1_ = 0;
  return;
}



// ===== FUN_1802e8620 @ 1802e8620 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e8620(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c30f8) {
    pvVar1 = (void *)CONCAT71(DAT_1803c30e0._1_7_,(undefined1)DAT_1803c30e0);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c30f8 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c30f0 = _DAT_1802eace0;
  DAT_1803c30f8 = _UNK_1802eace8;
  DAT_1803c30e0._0_1_ = 0;
  return;
}



// ===== FUN_1802e86a0 @ 1802e86a0 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e86a0(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c9900) {
    pvVar1 = (void *)CONCAT71(DAT_1803c98e8._1_7_,(undefined1)DAT_1803c98e8);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c9900 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c98f8 = _DAT_1802eace0;
  DAT_1803c9900 = _UNK_1802eace8;
  DAT_1803c98e8._0_1_ = 0;
  return;
}



// ===== FUN_1802e8720 @ 1802e8720 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e8720(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c98e0) {
    pvVar1 = (void *)CONCAT71(DAT_1803c98c8._1_7_,(undefined1)DAT_1803c98c8);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c98e0 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c98d8 = _DAT_1802eace0;
  DAT_1803c98e0 = _UNK_1802eace8;
  DAT_1803c98c8._0_1_ = 0;
  return;
}



// ===== FUN_1802e87a0 @ 1802e87a0 (size 99)

void FUN_1802e87a0(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)((longlong)DAT_1803c9908 + 8) + 0x19);
  _Memory = *(longlong **)((longlong)DAT_1803c9908 + 8);
  while (cVar1 == '\0') {
    FUN_1802be6a0(&DAT_1803c9908,&DAT_1803c9908,_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free(DAT_1803c9908);
  return;
}



// ===== FUN_1802e8810 @ 1802e8810 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e8810(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c9950) {
    pvVar1 = (void *)CONCAT71(DAT_1803c9938._1_7_,(undefined1)DAT_1803c9938);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c9950 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c9948 = _DAT_1802eace0;
  DAT_1803c9950 = _UNK_1802eace8;
  DAT_1803c9938._0_1_ = 0;
  return;
}



// ===== FUN_1802e8890 @ 1802e8890 (size 118)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e8890(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1803c9930) {
    pvVar1 = (void *)CONCAT71(DAT_1803c9918._1_7_,(undefined1)DAT_1803c9918);
    _Memory = pvVar1;
    if ((0xfff < DAT_1803c9930 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  _DAT_1803c9928 = _DAT_1802eace0;
  DAT_1803c9930 = _UNK_1802eace8;
  DAT_1803c9918._0_1_ = 0;
  return;
}



// ===== FUN_1802e8908 @ 1802e8908 (size 87)

void FUN_1802e8908(void)

{
  undefined8 *_Memory;
  longlong lVar1;
  
  while (_Memory = DAT_180447328, DAT_180447328 != (undefined8 *)0x0) {
    DAT_180447328 = (undefined8 *)*DAT_180447328;
    lVar1 = (*(code *)PTR__guard_dispatch_icall_1802e9f90)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1802e9f90)(lVar1,1);
    }
    free(_Memory);
  }
  return;
}



