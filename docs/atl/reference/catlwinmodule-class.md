---
description: "Learn more about: CAtlWinModule Class"
title: "CAtlWinModule Class"
ms.date: "11/04/2016"
f1_keywords: ["CAtlWinModule", "ATLBASE/ATL::CAtlWinModule", "ATLBASE/ATL::CAtlWinModule::CAtlWinModule", "ATLBASE/ATL::CAtlWinModule::AddCreateWndData", "ATLBASE/ATL::CAtlWinModule::ExtractCreateWndData"]
helpviewer_keywords: ["CAtlWinModule class"]
ms.assetid: 7ec844af-0f68-4a34-b0c8-9de50a025df0
---
# CAtlWinModule Class

This class provides support for ATL windowing components.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
class CAtlWinModule : public _ATL_WIN_MODULE
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAtlWinModule::CAtlWinModule](#catlwinmodule)|The constructor.|
|[CAtlWinModule::~CAtlWinModule](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAtlWinModule::AddCreateWndData](#addcreatewnddata)|Adds a data object.|
|[CAtlWinModule::ExtractCreateWndData](#extractcreatewnddata)|Returns a pointer to the window module data object.|

## Remarks

This class provides support for all ATL classes which require windowing features.

## Inheritance Hierarchy

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)

`CAtlWinModule`

## Requirements

**Header:** atlbase.h

## <a name="addcreatewnddata"></a> CAtlWinModule::AddCreateWndData

This method initializes and adds an `_AtlCreateWndData` structure.

```cpp
void AddCreateWndData(_AtlCreateWndData* pData, void* pObject);
```

### Parameters

*pData*<br/>
Pointer to the `_AtlCreateWndData` structure to be initialized and added to the current module.

*pObject*<br/>
Pointer to an object's **`this`** pointer.

### Remarks

This method calls [AtlWinModuleAddCreateWndData](winmodule-global-functions.md#atlwinmoduleaddcreatewnddata) which initializes an [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) structure. This structure will store the **`this`** pointer, used to obtain the class instance in window procedures.

## <a name="catlwinmodule"></a> CAtlWinModule::CAtlWinModule

The constructor.

```cpp
CAtlWinModule();
```

### Remarks

If initialization fails, an **EXCEPTION_NONCONTINUABLE** exception is raised.

## <a name="dtor"></a> CAtlWinModule::~CAtlWinModule

The destructor.

```cpp
~CAtlWinModule();
```

### Remarks

Frees all allocated resources.

## <a name="extractcreatewnddata"></a> CAtlWinModule::ExtractCreateWndData

This method returns a pointer to an `_AtlCreateWndData` structure.

```cpp
void* ExtractCreateWndData();
```

### Return Value

Returns a pointer to the `_AtlCreateWndData` structure previously added with [CAtlWinModule::AddCreateWndData](#addcreatewnddata), or NULL if no object is available.

## See also

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[Module Classes](../../atl/atl-module-classes.md)
