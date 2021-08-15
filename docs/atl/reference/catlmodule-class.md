---
description: "Learn more about: CAtlModule Class"
title: "CAtlModule Class"
ms.date: "11/04/2016"
f1_keywords: ["CAtlModule", "ATLBASE/ATL::CAtlModule", "ATLBASE/ATL::CAtlModule::CAtlModule", "ATLBASE/ATL::CAtlModule::AddCommonRGSReplacements", "ATLBASE/ATL::CAtlModule::AddTermFunc", "ATLBASE/ATL::CAtlModule::GetGITPtr", "ATLBASE/ATL::CAtlModule::GetLockCount", "ATLBASE/ATL::CAtlModule::Lock", "ATLBASE/ATL::CAtlModule::Term", "ATLBASE/ATL::CAtlModule::Unlock", "ATLBASE/ATL::CAtlModule::UpdateRegistryFromResourceD", "ATLBASE/ATL::CAtlModule::UpdateRegistryFromResourceDHelper", "ATLBASE/ATL::CAtlModule::UpdateRegistryFromResourceS", "ATLBASE/ATL::CAtlModule::m_libid", "ATLBASE/ATL::CAtlModule::m_pGIT"]
helpviewer_keywords: ["CAtlModule class"]
ms.assetid: 63fe02f1-4c4b-4e7c-ae97-7ad7b4252415
---
# CAtlModule Class

This class provides methods used by several ATL module classes.

## Syntax

```cpp
class ATL_NO_VTABLE CAtlModule : public _ATL_MODULE
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAtlModule::CAtlModule](#catlmodule)|The constructor.|
|[CAtlModule::~CAtlModule](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAtlModule::AddCommonRGSReplacements](#addcommonrgsreplacements)|Override this method to add parameters to the ATL Registry Component (Registrar) replacement map.|
|[CAtlModule::AddTermFunc](#addtermfunc)|Adds a new function to be called when the module terminates.|
|[CAtlModule::GetGITPtr](#getgitptr)|Returns the Global Interface Pointer.|
|[CAtlModule::GetLockCount](#getlockcount)|Returns the lock count.|
|[CAtlModule::Lock](#lock)|Increments the lock count.|
|[CAtlModule::Term](#term)|Releases all data members.|
|[CAtlModule::Unlock](#unlock)|Decrements the lock count.|
|[CAtlModule::UpdateRegistryFromResourceD](#updateregistryfromresourced)|Runs the script contained in a specified resource to register or unregister an object.|
|[CAtlModule::UpdateRegistryFromResourceDHelper](#updateregistryfromresourcedhelper)|This method is called by `UpdateRegistryFromResourceD` to perform the registry update.|
|[CAtlModule::UpdateRegistryFromResourceS](#updateregistryfromresources)|Runs the script contained in a specified resource to register or unregister an object. This method statically links to the ATL Registry Component.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CAtlModule::m_libid](#m_libid)|Contains the GUID of the current module.|
|[CAtlModule::m_pGIT](#m_pgit)|Pointer to the Global Interface Table.|

## Remarks

This class is used by [CAtlDllModuleT Class](../../atl/reference/catldllmodulet-class.md), [CAtlExeModuleT Class](../../atl/reference/catlexemodulet-class.md), and [CAtlServiceModuleT Class](../../atl/reference/catlservicemodulet-class.md) to provide support for DLL applications, EXE applications, and Windows services, respectively.

For more information on modules in ATL, see [ATL Module Classes](../../atl/atl-module-classes.md).

This class replaces the obsolete [CComModule Class](../../atl/reference/ccommodule-class.md) used in earlier versions of ATL.

## Inheritance Hierarchy

[_ATL_MODULE](atl-typedefs.md#_atl_module)

`CAtlModule`

## Requirements

**Header:** atlbase.h

## <a name="addcommonrgsreplacements"></a> CAtlModule::AddCommonRGSReplacements

Override this method to add parameters to the ATL Registry Component (Registrar) replacement map.

```cpp
virtual HRESULT AddCommonRGSReplacements(IRegistrarBase* /* pRegistrar*/) throw() = 0;
```

### Parameters

*pRegistrar*<br/>
Reserved.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Replaceable parameters allow a Registrar's client to specify run-time data. To do this, the Registrar maintains a replacement map into which it enters the values associated with the replaceable parameters in your script. The Registrar makes these entries at run time.

See the topic [Using Replaceable Parameters (The Registrar's Preprocessor)](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) for more details.

## <a name="addtermfunc"></a> CAtlModule::AddTermFunc

Adds a new function to be called when the module terminates.

```cpp
HRESULT AddTermFunc(_ATL_TERMFUNC* pFunc, DWORD_PTR dw) throw();
```

### Parameters

*pFunc*<br/>
Pointer to the function to add.

*dw*<br/>
User-defined data, passed to the function.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="catlmodule"></a> CAtlModule::CAtlModule

The constructor.

```cpp
CAtlModule() throw();
```

### Remarks

Initializes data members and initiates a critical section around the module's thread.

## <a name="dtor"></a> CAtlModule::~CAtlModule

The destructor.

```cpp
~CAtlModule() throw();
```

### Remarks

Releases all data members.

## <a name="getgitptr"></a> CAtlModule::GetGITPtr

Retrieves a pointer to the Global Interface Table.

```cpp
virtual HRESULT GetGITPtr(IGlobalInterfaceTable** ppGIT) throw();
```

### Parameters

*ppGIT*<br/>
Pointer to the variable which will receive the pointer to the Global Interface Table.

### Return Value

Returns S_OK on success, or an error code on failure. E_POINTER is returned if *ppGIT* is equal to NULL.

### Remarks

If the Global Interface Table object does not exist, it is created, and its address is stored in the member variable [CAtlModule::m_pGIT](#m_pgit).

In debug builds, an assertion error will occur if *ppGIT* is equal to NULL, or if the Global Interface Table pointer cannot be obtained.

See [IGlobalInterfaceTable](/windows/win32/api/objidl/nn-objidl-iglobalinterfacetable) for information on the Global Interface Table.

## <a name="getlockcount"></a> CAtlModule::GetLockCount

Returns the lock count.

```cpp
virtual LONG GetLockCount() throw();
```

### Return Value

Returns the lock count. This value may be useful for diagnostics and debugging.

## <a name="lock"></a> CAtlModule::Lock

Increments the lock count.

```cpp
virtual LONG Lock() throw();
```

### Return Value

Increments the lock count and returns the updated value. This value may be useful for diagnostics and debugging.

## <a name="m_libid"></a> CAtlModule::m_libid

Contains the GUID of the current module.

```cpp
static GUID m_libid;
```

## <a name="m_pgit"></a> CAtlModule::m_pGIT

Pointer to the Global Interface Table.

```cpp
IGlobalInterfaceTable* m_pGIT;
```

## <a name="term"></a> CAtlModule::Term

Releases all data members.

```cpp
void Term() throw();
```

### Remarks

Releases all data members. This method is called by the destructor.

## <a name="unlock"></a> CAtlModule::Unlock

Decrements the lock count.

```cpp
virtual LONG Unlock() throw();
```

### Return Value

Decrements the lock count and returns the updated value. This value may be useful for diagnostics and debugging.

## <a name="updateregistryfromresourced"></a> CAtlModule::UpdateRegistryFromResourceD

Runs the script contained in a specified resource to register or unregister an object.

```cpp
HRESULT WINAPI UpdateRegistryFromResourceD(
    UINT nResID,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();

HRESULT WINAPI UpdateRegistryFromResourceD(
    LPCTSTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();
```

### Parameters

*lpszRes*<br/>
A resource name.

*nResID*<br/>
A resource ID.

*bRegister*<br/>
TRUE if the object should be registered; FALSE otherwise.

*pMapEntries*<br/>
A pointer to the replacement map storing values associated with the script's replaceable parameters. ATL automatically uses %MODULE%. To use additional replaceable parameters, see [CAtlModule::AddCommonRGSReplacements](#addcommonrgsreplacements). Otherwise, use the NULL default value.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Runs the script contained in the resource specified by *lpszRes or nResID*. If *bRegister* is TRUE, this method registers the object in the system registry; otherwise it removes the object from the registry.

To statically link to the ATL Registry Component (Registrar), see [CAtlModule::UpdateRegistryFromResourceS](#updateregistryfromresources).

This method calls [CAtlModule::UpdateRegistryFromResourceDHelper](#updateregistryfromresourcedhelper) and [IRegistrar::ResourceUnregister](iregistrar-class.md#resourceunregister).

## <a name="updateregistryfromresourcedhelper"></a> CAtlModule::UpdateRegistryFromResourceDHelper

This method is called by `UpdateRegistryFromResourceD` to perform the registry update.

```cpp
inline HRESULT WINAPI UpdateRegistryFromResourceDHelper(
    LPCOLESTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();
```

### Parameters

*lpszRes*<br/>
A resource name.

*bRegister*<br/>
Indicates whether the object should be registered.

*pMapEntries*<br/>
A pointer to the replacement map storing values associated with the script's replaceable parameters. ATL automatically uses %MODULE%. To use additional replaceable parameters, see [CAtlModule::AddCommonRGSReplacements](#addcommonrgsreplacements). Otherwise, use the NULL default value.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

This method provides the implementation of [CAtlModule::UpdateRegistryFromResourceD](#updateregistryfromresourced).

## <a name="updateregistryfromresources"></a> CAtlModule::UpdateRegistryFromResourceS

Runs the script contained in a specified resource to register or unregister an object. This method statically links to the ATL Registry Component.

```cpp
HRESULT WINAPI UpdateRegistryFromResourceS(
    UINT nResID,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();

HRESULT WINAPI UpdateRegistryFromResourceS(
    LPCTSTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();
```

### Parameters

*nResID*<br/>
A resource ID.

*lpszRes*<br/>
A resource name.

*bRegister*<br/>
Indicates whether the resource script should be registered.

*pMapEntries*<br/>
A pointer to the replacement map storing values associated with the script's replaceable parameters. ATL automatically uses %MODULE%. To use additional replaceable parameters, see [CAtlModule::AddCommonRGSReplacements](#addcommonrgsreplacements). Otherwise, use the NULL default value.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Similar to [CAtlModule::UpdateRegistryFromResourceD](#updateregistryfromresourced) except `CAtlModule::UpdateRegistryFromResourceS` creates a static link to the ATL Registry Component (Registrar).

## See also

[_ATL_MODULE](atl-typedefs.md#_atl_module)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[Module Classes](../../atl/atl-module-classes.md)<br/>
[Registry Component (Registrar)](../../atl/atl-registry-component-registrar.md)
