---
description: "Learn more about: CComModule Class"
title: "CComModule Class"
ms.date: "08/19/2019"
f1_keywords: ["CComModule", "ATLBASE/ATL::CComModule", "ATLBASE/ATL::CComModule::GetClassObject", "ATLBASE/ATL::CComModule::GetModuleInstance", "ATLBASE/ATL::CComModule::GetResourceInstance", "ATLBASE/ATL::CComModule::GetTypeLibInstance", "ATLBASE/ATL::CComModule::Init", "ATLBASE/ATL::CComModule::RegisterClassHelper", "ATLBASE/ATL::CComModule::RegisterClassObjects", "ATLBASE/ATL::CComModule::RegisterServer", "ATLBASE/ATL::CComModule::RegisterTypeLib", "ATLBASE/ATL::CComModule::RevokeClassObjects", "ATLBASE/ATL::CComModule::Term", "ATLBASE/ATL::CComModule::UnregisterClassHelper", "ATLBASE/ATL::CComModule::UnregisterServer", "ATLBASE/ATL::CComModule::UpdateRegistryClass", "ATLBASE/ATL::CComModule::UpdateRegistryFromResourceD", "ATLBASE/ATL::CComModule::UpdateRegistryFromResourceS", "ATLBASE/ATL::CComModule::m_csObjMap", "ATLBASE/ATL::CComModule::m_csTypeInfoHolder", "ATLBASE/ATL::CComModule::m_csWindowCreate", "ATLBASE/ATL::CComModule::m_hInst", "ATLBASE/ATL::CComModule::m_hInstResource", "ATLBASE/ATL::CComModule::m_hInstTypeLib", "ATLBASE/ATL::CComModule::m_pObjMap"]
helpviewer_keywords: ["CComModule class", "DLL modules [C++], ATL"]
ms.assetid: f5face2c-8fd8-40e6-9ec3-54ab74701769
---
# CComModule Class

As of ATL 7.0, `CComModule` is deprecated: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CComModule : public _ATL_MODULE
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComModule::GetClassObject](#getclassobject)|Creates an object of a specified CLSID. For DLLs only.|
|[CComModule::GetModuleInstance](#getmoduleinstance)|Returns `m_hInst`.|
|[CComModule::GetResourceInstance](#getresourceinstance)|Returns `m_hInstResource`.|
|[CComModule::GetTypeLibInstance](#gettypelibinstance)|Returns `m_hInstTypeLib`.|
|[CComModule::Init](#init)|Initializes data members.|
|[CComModule::RegisterClassHelper](#registerclasshelper)|Enters an object's standard class registration in the system registry.|
|[CComModule::RegisterClassObjects](#registerclassobjects)|Registers the class object. For EXEs only.|
|[CComModule::RegisterServer](#registerserver)|Updates the system registry for each object in the object map.|
|[CComModule::RegisterTypeLib](#registertypelib)|Registers a type library.|
|[CComModule::RevokeClassObjects](#revokeclassobjects)|Revokes the class object. For EXEs only.|
|[CComModule::Term](#term)|Releases data members.|
|[CComModule::UnregisterClassHelper](#unregisterclasshelper)|Removes an object's standard class registration from the system registry.|
|[CComModule::UnregisterServer](#unregisterserver)|Unregisters each object in the object map.|
|[CComModule::UpdateRegistryClass](#updateregistryclass)|Registers or unregisters an object's standard class registration.|
|[CComModule::UpdateRegistryFromResourceD](#updateregistryfromresourced)|Runs the script contained in a specified resource to register or unregister an object.|
|[CComModule::UpdateRegistryFromResourceS](#updateregistryfromresources)|Statically links to the ATL Registry Component. Runs the script contained in a specified resource to register or unregister an object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComModule::m_csObjMap](#m_csobjmap)|Ensures synchronized access to the object map information.|
|[CComModule::m_csTypeInfoHolder](#m_cstypeinfoholder)|Ensures synchronized access to the type library information.|
|[CComModule::m_csWindowCreate](#m_cswindowcreate)|Ensures synchronized access to window class information and static data used during window creation.|
|[CComModule::m_hInst](#m_hinst)|Contains the handle to the module instance.|
|[CComModule::m_hInstResource](#m_hinstresource)|By default, contains the handle to the module instance.|
|[CComModule::m_hInstTypeLib](#m_hinsttypelib)|By default, contains the handle to the module instance.|
|[CComModule::m_pObjMap](#m_pobjmap)|Points to the object map maintained by the module instance.|

## Remarks

> [!NOTE]
> This class is deprecated, and the ATL code generation wizards now use the [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) and [CAtlModule](../../atl/reference/catlmodule-class.md) derived classes. See [ATL Module Classes](../../atl/atl-module-classes.md) for more information. The information that follows is for use with applications created with older releases of ATL. `CComModule` is still part of ATL for backwards capability.

`CComModule` implements a COM server module, allowing a client to access the module's components. `CComModule` supports both DLL (in-process) and EXE (local) modules.

A `CComModule` instance uses an object map to maintain a set of class object definitions. This object map is implemented as an array of `_ATL_OBJMAP_ENTRY` structures, and contains information for:

- Entering and removing object descriptions in the system registry.

- Instantiating objects through a class factory.

- Establishing communication between a client and the root object in the component.

- Performing lifetime management of class objects.

When you run the ATL COM AppWizard, the wizard automatically generates `_Module`, a global instance of `CComModule` or a class derived from it. For more information about the ATL Project Wizard, see the article [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md).

In addition to `CComModule`, ATL provides [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), which implements an apartment-model module for EXEs and Windows services. Derive your module from `CComAutoThreadModule` when you want to create objects in multiple apartments.

## Inheritance Hierarchy

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule](../../atl/reference/catlmodule-class.md)

[CAtlModuleT](../../atl/reference/catlmodulet-class.md)

`CComModule`

## Requirements

**Header:** atlbase.h

## <a name="getclassobject"></a> CComModule::GetClassObject

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HRESULT GetClassObject(
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```

### Parameters

*rclsid*<br/>
[in] The CLSID of the object to be created.

*riid*<br/>
[in] The IID of the requested interface.

*ppv*<br/>
[out] A pointer to the interface pointer identified by *riid*. If the object does not support this interface, *ppv* is set to NULL.

### Return Value

A standard HRESULT value.

### Remarks

Creates an object of the specified CLSID and retrieves an interface pointer to this object.

`GetClassObject` is only available to DLLs.

## <a name="getmoduleinstance"></a> CComModule::GetModuleInstance

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HINSTANCE GetModuleInstance() throw();
```

### Return Value

The HINSTANCE identifying this module.

### Remarks

Returns the [m_hInst](#m_hinst) data member.

## <a name="getresourceinstance"></a> CComModule::GetResourceInstance

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HINSTANCE GetResourceInstance() throw();
```

### Return Value

An HINSTANCE.

### Remarks

Returns the [m_hInstResource](#m_hinstresource) data member.

## <a name="gettypelibinstance"></a> CComModule::GetTypeLibInstance

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HINSTANCE GetTypeLibInstance() const throw();
```

### Return Value

An HINSTANCE.

### Remarks

Returns the [m_hInstTypeLib](#m_hinsttypelib) data member.

## <a name="init"></a> CComModule::Init

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HRESULT Init(
    _ATL_OBJMAP_ENTRY* p,
    HINSTANCE h,
    const GUID* plibid = NULL) throw();
```

### Parameters

*p*<br/>
[in] A pointer to an array of object map entries.

*h*<br/>
[in] The HINSTANCE passed to `DLLMain` or `WinMain`.

*plibid*<br/>
[in] A pointer to the LIBID of the type library associated with the project.

### Return Value

A standard HRESULT value.

### Remarks

Initializes all data members.

## <a name="m_csobjmap"></a> CComModule::m_csObjMap

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
CRITICAL_SECTION m_csObjMap;
```

### Remarks

Ensures synchronized access to the object map.

## <a name="m_cstypeinfoholder"></a> CComModule::m_csTypeInfoHolder

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
CRITICAL_SECTION m_csTypeInfoHolder;
```

### Remarks

Ensures synchronized access to the type library.

## <a name="m_cswindowcreate"></a> CComModule::m_csWindowCreate

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
CRITICAL_SECTION m_csWindowCreate;
```

### Remarks

Ensures synchronized access to window class information and to static data used during window creation.

## <a name="m_hinst"></a> CComModule::m_hInst

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HINSTANCE m_hInst;
```

### Remarks

Contains the handle to the module instance.

The [Init](#init) method sets `m_hInst` to the handle passed to `DLLMain` or `WinMain`.

## <a name="m_hinstresource"></a> CComModule::m_hInstResource

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HINSTANCE m_hInstResource;
```

### Remarks

By default, contains the handle to the module instance.

The [Init](#init) method sets `m_hInstResource` to the handle passed to `DLLMain` or `WinMain`. You can explicitly set `m_hInstResource` to the handle to a resource.

The [GetResourceInstance](#getresourceinstance) method returns the handle stored in `m_hInstResource`.

## <a name="m_hinsttypelib"></a> CComModule::m_hInstTypeLib

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HINSTANCE m_hInstTypeLib;
```

### Remarks

By default, contains the handle to the module instance.

The [Init](#init) method sets `m_hInstTypeLib` to the handle passed to `DLLMain` or `WinMain`. You can explicitly set `m_hInstTypeLib` to the handle to a type library.

The [GetTypeLibInstance](#gettypelibinstance) method returns the handle stored in `m_hInstTypeLib`.

## <a name="m_pobjmap"></a> CComModule::m_pObjMap

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
_ATL_OBJMAP_ENTRY* m_pObjMap;
```

### Remarks

Points to the object map maintained by the module instance.

## <a name="registerclasshelper"></a> CComModule::RegisterClassHelper

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
ATL_DEPRECATED HRESULT RegisterClassHelper(
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID,
    UINT nDescID,
    DWORD dwFlags);
```

### Parameters

*clsid*<br/>
[in] The CLSID of the object to be registered.

*lpszProgID*<br/>
[in] The ProgID associated with the object.

*lpszVerIndProgID*<br/>
[in] The version-independent ProgID associated with the object.

*nDescID*<br/>
[in] The identifier of a string resource for the object's description.

*dwFlags*<br/>
[in] Specifies the threading model to enter in the registry. Possible values are THREADFLAGS_APARTMENT, THREADFLAGS_BOTH, or AUTPRXFLAG.

### Return Value

A standard HRESULT value.

### Remarks

Enters an object's standard class registration in the system registry.

The [UpdateRegistryClass](#updateregistryclass) method calls `RegisterClassHelper`.

## <a name="registerclassobjects"></a> CComModule::RegisterClassObjects

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HRESULT RegisterClassObjects(DWORD dwClsContext, DWORD dwFlags) throw();
```

### Parameters

*dwClsContext*<br/>
[in] Specifies the context in which the class object is to be run. Possible values are CLSCTX_INPROC_SERVER, CLSCTX_INPROC_HANDLER, or CLSCTX_LOCAL_SERVER. For a description of these values, see [CLSCTX](/windows/win32/api/wtypesbase/ne-wtypesbase-clsctx) in the Windows SDK.

*dwFlags*<br/>
[in] Determines the connection types to the class object. Possible values are REGCLS_SINGLEUSE, REGCLS_MULTIPLEUSE, or REGCLS_MULTI_SEPARATE. For a description of these values, see [REGCLS](/windows/win32/api/combaseapi/ne-combaseapi-regcls) in the Windows SDK.

### Return Value

A standard HRESULT value.

### Remarks

Registers an EXE class object with OLE so other applications can connect to it. This method is only available to EXEs.

## <a name="registerserver"></a> CComModule::RegisterServer

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HRESULT RegisterServer(
    BOOL bRegTypeLib = FALSE,
    const CLSID* pCLSID = NULL) throw();
```

### Parameters

*bRegTypeLib*<br/>
[in] Indicates whether the type library will be registered. The default value is FALSE.

*pCLSID*<br/>
[in] Points to the CLSID of the object to be registered. If NULL (the default value), all objects in the object map will be registered.

### Return Value

A standard HRESULT value.

### Remarks

Depending on the *pCLSID* parameter, updates the system registry for a single class object or for all objects in the object map.

If *bRegTypeLib* is TRUE, the type library information will also be updated.

See [OBJECT_ENTRY_AUTO](object-map-macros.md#object_entry_auto) for information on how to add an entry to the object map.

`RegisterServer` will be called automatically by `DLLRegisterServer` for a DLL or by `WinMain` for an EXE run with the `/RegServer` command line option.

## <a name="registertypelib"></a> CComModule::RegisterTypeLib

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HRESULT RegisterTypeLib() throw();
HRESULT RegisterTypeLib(LPCTSTR lpszIndex) throw();
```

### Parameters

*lpszIndex*<br/>
[in] String in the format `"\\N"`, where `N` is the integer index of the TYPELIB resource.

### Return Value

A standard HRESULT value.

### Remarks

Adds information about a type library to the system registry.

If the module instance contains multiple type libraries, use the second version of this method to specify which type library should be used.

## <a name="revokeclassobjects"></a> CComModule::RevokeClassObjects

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HRESULT RevokeClassObjects() throw();
```

### Return Value

A standard HRESULT value.

### Remarks

Removes the class object. This method        is only available to EXEs.

## <a name="term"></a> CComModule::Term

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```cpp
void Term() throw();
```

### Remarks

Releases all data members.

## <a name="unregisterclasshelper"></a> CComModule::UnregisterClassHelper

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
ATL_DEPRECATED HRESULT UnregisterClassHelper(
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID);
```

### Parameters

*clsid*<br/>
[in] The CLSID of the object to be unregistered.

*lpszProgID*<br/>
[in] The ProgID associated with the object.

*lpszVerIndProgID*<br/>
[in] The version-independent ProgID associated with the object.

### Return Value

A standard HRESULT value.

### Remarks

Removes an object's standard class registration from the system registry.

The [UpdateRegistryClass](#updateregistryclass) method calls `UnregisterClassHelper`.

## <a name="unregisterserver"></a> CComModule::UnregisterServer

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HRESULT UnregisterServer(const CLSID* pCLSID = NULL) throw ();
inline HRESULT UnregisterServer(BOOL bUnRegTypeLib, const CLSID* pCLSID = NULL) throw ();
```

### Parameters

*bUnRegTypeLib*<br/>
If TRUE, the type library is also unregistered.

*pCLSID*<br/>
Points to the CLSID of the object to be unregistered. If NULL (the default value), all objects in the object map will be unregistered.

### Return Value

A standard HRESULT value.

### Remarks

Depending on the *pCLSID* parameter, unregisters either a single class object or all objects in the object map.

`UnregisterServer` will be called automatically by `DLLUnregisterServer` for a DLL or by `WinMain` for an EXE run with the `/UnregServer` command line option.

See [OBJECT_ENTRY_AUTO](object-map-macros.md#object_entry_auto) for information on how to add an entry to the object map.

## <a name="updateregistryclass"></a> CComModule::UpdateRegistryClass

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
ATL_DEPRECATED HRESULT UpdateRegistryClass(
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID,
    UINT nDescID,
    DWORD dwFlags,
    BOOL bRegister);

ATL_DEPRECATED HRESULT UpdateRegistryClass(
    const CLSID& clsid,
    LPCTSTR lpszProgID,
    LPCTSTR lpszVerIndProgID,
    LPCTSTR szDesc,
    DWORD dwFlags,
    BOOL bRegister);
```

### Parameters

*clsid*<br/>
The CLSID of the object to be registered or unregistered.

*lpszProgID*<br/>
The ProgID associated with the object.

*lpszVerIndProgID*<br/>
The version-independent ProgID associated with the object.

*nDescID*<br/>
The identifier of the string resource for the object's description.

*szDesc*<br/>
A string containing the object's description.

*dwFlags*<br/>
Specifies the threading model to enter in the registry. Possible values are THREADFLAGS_APARTMENT, THREADFLAGS_BOTH, or AUTPRXFLAG.

*bRegister*<br/>
Indicates whether the object should be registered.

### Return Value

A standard HRESULT value.

### Remarks

If *bRegister* is TRUE, this method enters the object's standard class registration in the system registry.

If *bRegister* is FALSE, it removes the object's registration.

Depending on the value of *bRegister*, `UpdateRegistryClass` calls either [RegisterClassHelper](#registerclasshelper) or [UnregisterClassHelper](#unregisterclasshelper).

By specifying the [DECLARE_REGISTRY](registry-macros.md#declare_registry) macro, `UpdateRegistryClass` will be invoked automatically when your object map is processed.

## <a name="updateregistryfromresourced"></a> CComModule::UpdateRegistryFromResourceD

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
virtual HRESULT UpdateRegistryFromResourceD(
    LPCTSTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();

virtual HRESULT UpdateRegistryFromResourceD(
    UINT nResID,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw ();
```

### Parameters

*lpszRes*<br/>
[in] A resource name.

*nResID*<br/>
[in] A resource ID.

*bRegister*<br/>
[in] Indicates whether the object should be registered.

*pMapEntries*<br/>
[in] A pointer to the replacement map storing values associated with the script's replaceable parameters. ATL automatically uses `%MODULE%`. To use additional replaceable parameters, see the Remarks for details. Otherwise, use the NULL default value.

### Return Value

A standard HRESULT value.

### Remarks

Runs the script contained in the resource specified by *lpszRes* or *nResID*.

If *bRegister* is TRUE, this method registers the object in the system registry; otherwise, it unregisters the object.

By specifying the [DECLARE_REGISTRY_RESOURCE](registry-macros.md#declare_registry_resource) or [DECLARE_REGISTRY_RESOURCEID](registry-macros.md#declare_registry_resourceid) macro, `UpdateRegistryFromResourceD` will be invoked automatically when your object map is processed.

> [!NOTE]
> To substitute replacement values at run time, do not specify the DECLARE_REGISTRY_RESOURCE or DECLARE_REGISTRY_RESOURCEID macro. Instead, create an array of `_ATL_REGMAP_ENTRIES` structures, where each entry contains a variable placeholder paired with a value to replace the placeholder at run time. Then call `UpdateRegistryFromResourceD`, passing the array for the *pMapEntries* parameter. This adds all the replacement values in the `_ATL_REGMAP_ENTRIES` structures to the Registrar's replacement map.

> [!NOTE]
> To statically link to the ATL Registry Component (Registrar), see [UpdateRegistryFromResourceS](#updateregistryfromresources).

For more information about replaceable parameters and scripting, see the article [The ATL Registry Component (Registrar)](../../atl/atl-registry-component-registrar.md).

## <a name="updateregistryfromresources"></a> CComModule::UpdateRegistryFromResourceS

As of ATL 7.0, `CComModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
virtual HRESULT UpdateRegistryFromResourceS(
    LPCTSTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();

virtual HRESULT UpdateRegistryFromResourceS(
    UINT nResID,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();
```

### Parameters

*lpszRes*<br/>
[in] A resource name.

*nResID*<br/>
[in] A resource ID.

*bRegister*<br/>
[in] Indicates whether the resource script should be registered.

*pMapEntries*<br/>
[in] A pointer to the replacement map storing values associated with the script's replaceable parameters. ATL automatically uses `%MODULE%`. To use additional replaceable parameters, see the Remarks for details. Otherwise, use the NULL default value.

### Return Value

A standard HRESULT value.

### Remarks

Similar to [UpdateRegistryFromResourceD](#updateregistryfromresourced) except `UpdateRegistryFromResourceS` creates a static link to the ATL Registry Component (Registrar).

`UpdateRegistryFromResourceS` will be invoked automatically when your object map is processed, provided you add `#define _ATL_STATIC_REGISTRY` to your *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier).

> [!NOTE]
> To substitute replacement values at run time, do not specify the [DECLARE_REGISTRY_RESOURCE](registry-macros.md#declare_registry_resource) or [DECLARE_REGISTRY_RESOURCEID](registry-macros.md#declare_registry_resourceid) macro. Instead, create an array of `_ATL_REGMAP_ENTRIES` structures, where each entry contains a variable placeholder paired with a value to replace the placeholder at run time. Then call `UpdateRegistryFromResourceS`, passing the array for the *pMapEntries* parameter. This adds all the replacement values in the `_ATL_REGMAP_ENTRIES` structures to the Registrar's replacement map.

For more information about replaceable parameters and scripting, see the article [The ATL Registry Component (Registrar)](../../atl/atl-registry-component-registrar.md).

## See also

[Class Overview](../../atl/atl-class-overview.md)
