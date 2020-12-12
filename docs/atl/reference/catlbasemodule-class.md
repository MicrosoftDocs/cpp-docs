---
description: "Learn more about: CAtlBaseModule Class"
title: "CAtlBaseModule Class"
ms.date: "11/04/2016"
f1_keywords: ["CAtlBaseModule", "ATLCORE/ATL::CAtlBaseModule", "ATLCORE/ATL::CAtlBaseModule::CAtlBaseModule", "ATLCORE/ATL::CAtlBaseModule::AddResourceInstance", "ATLCORE/ATL::CAtlBaseModule::GetHInstanceAt", "ATLCORE/ATL::CAtlBaseModule::GetModuleInstance", "ATLCORE/ATL::CAtlBaseModule::GetResourceInstance", "ATLCORE/ATL::CAtlBaseModule::RemoveResourceInstance", "ATLCORE/ATL::CAtlBaseModule::SetResourceInstance", "ATLCORE/ATL::CAtlBaseModule::m_bInitFailed"]
helpviewer_keywords: ["CAtlBaseModule class"]
ms.assetid: 55ade80c-9b0c-4c51-933e-2158436c1096
---
# CAtlBaseModule Class

This class is instantiated in every ATL project.

## Syntax

```cpp
class CAtlBaseModule : public _ATL_BASE_MODULE
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAtlBaseModule::CAtlBaseModule](#catlbasemodule)|The constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAtlBaseModule::AddResourceInstance](#addresourceinstance)|Adds a resource instance to the list of stored handles.|
|[CAtlBaseModule::GetHInstanceAt](#gethinstanceat)|Returns a handle to a specified resource instance.|
|[CAtlBaseModule::GetModuleInstance](#getmoduleinstance)|Returns the module instance from a `CAtlBaseModule` object.|
|[CAtlBaseModule::GetResourceInstance](#getresourceinstance)|Returns the resource instance from a `CAtlBaseModule` object.|
|[CAtlBaseModule::RemoveResourceInstance](#removeresourceinstance)|Removes a resource instance from the list of stored handles.|
|[CAtlBaseModule::SetResourceInstance](#setresourceinstance)|Sets the resource instance of a `CAtlBaseModule` object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CAtlBaseModule::m_bInitFailed](#m_binitfailed)|A variable that indicates if the module initialization has failed.|

## Remarks

An instance of `CAtlBaseModule` named _AtlBaseModule is present in every ATL project, containing a handle to the module instance, a handle to the module containing resources (which by default, are one and the same), and an array of handles to modules providing primary resources. `CAtlBaseModule` can be safely accessed from multiple threads.

This class replaces the obsolete [CComModule](../../atl/reference/ccommodule-class.md) class used in earlier versions of ATL.

## Inheritance Hierarchy

[_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module)

`CAtlBaseModule`

## Requirements

**Header:** atlcore.h

## <a name="addresourceinstance"></a> CAtlBaseModule::AddResourceInstance

Adds a resource instance to the list of stored handles.

```cpp
bool AddResourceInstance(HINSTANCE hInst) throw();
```

### Parameters

*hInst*<br/>
The resource instance to add.

### Return Value

Returns true if the resource was successfully added, false otherwise.

## <a name="catlbasemodule"></a> CAtlBaseModule::CAtlBaseModule

The constructor.

```cpp
CAtlBaseModule() throw();
```

### Remarks

Creates the `CAtlBaseModule`.

## <a name="gethinstanceat"></a> CAtlBaseModule::GetHInstanceAt

Returns a handle to a specified resource instance.

```cpp
HINSTANCE GetHInstanceAt(int i) throw();
```

### Parameters

*i*<br/>
The number of the resource instance.

### Return Value

Returns the handle to the resource instance, or NULL if no corresponding resource instance exists.

## <a name="getmoduleinstance"></a> CAtlBaseModule::GetModuleInstance

Returns the module instance from a `CAtlBaseModule` object.

```cpp
HINSTANCE GetModuleInstance() throw();
```

### Return Value

Returns the module instance.

## <a name="getresourceinstance"></a> CAtlBaseModule::GetResourceInstance

Returns the resource instance.

```cpp
HINSTANCE GetResourceInstance() throw();
```

### Return Value

Returns the resource instance.

## <a name="m_binitfailed"></a> CAtlBaseModule::m_bInitFailed

A variable that indicates if the module initialization has failed.

```cpp
static bool m_bInitFailed;
```

### Remarks

True if the module initialized, false if it failed to initialize.

## <a name="removeresourceinstance"></a> CAtlBaseModule::RemoveResourceInstance

Removes a resource instance from the list of stored handles.

```cpp
bool RemoveResourceInstance(HINSTANCE hInst) throw();
```

### Parameters

*hInst*<br/>
The resource instance to remove.

### Return Value

Returns true if the resource was successfully removed, false otherwise.

## <a name="setresourceinstance"></a> CAtlBaseModule::SetResourceInstance

Sets the resource instance of a `CAtlBaseModule` object.

```cpp
HINSTANCE SetResourceInstance(HINSTANCE hInst) throw();
```

### Parameters

*hInst*<br/>
The new resource instance.

### Return Value

Returns the updated resource instance.

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[Module Classes](../../atl/atl-module-classes.md)
