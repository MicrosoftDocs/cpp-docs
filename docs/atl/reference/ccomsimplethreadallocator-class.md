---
description: "Learn more about: CComSimpleThreadAllocator Class"
title: "CComSimpleThreadAllocator Class"
ms.date: "11/04/2016"
f1_keywords: ["CComSimpleThreadAllocator", "ATLBASE/ATL::CComSimpleThreadAllocator", "ATLBASE/ATL::CComSimpleThreadAllocator::GetThread"]
helpviewer_keywords: ["threading [ATL], selecting threads", "ATL threads", "CComSimpleThreadAllocator class", "ATL threads, allocating"]
ms.assetid: 66b2166a-8c50-49fd-b8e4-7f293470327d
---
# CComSimpleThreadAllocator Class

This class manages thread selection for the class `CComAutoThreadModule`.

## Syntax

```
class CComSimpleThreadAllocator
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComSimpleThreadAllocator::GetThread](#getthread)|Selects a thread.|

## Remarks

`CComSimpleThreadAllocator` manages thread selection for [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md). `CComSimpleThreadAllocator::GetThread` simply cycles through each thread and returns the next one in the sequence.

## Requirements

**Header:** atlbase.h

## <a name="getthread"></a> CComSimpleThreadAllocator::GetThread

Selects a thread by specifying the next thread in the sequence.

```
int GetThread(CComApartment* /* pApt */, int nThreads);
```

### Parameters

*pApt*<br/>
Not used in ATL's default implementation.

*nThreads*<br/>
The maximum number of threads in the EXE module.

### Return Value

An integer between zero and (*nThreads* - 1). Identifies one of the threads in the EXE module.

### Remarks

You can override `GetThread` to provide a different method of selection or to make use of the *pApt* parameter.

`GetThread` is called by [CComAutoThreadModule::CreateInstance](../../atl/reference/ccomautothreadmodule-class.md#createinstance).

## See also

[CComApartment Class](../../atl/reference/ccomapartment-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
