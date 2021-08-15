---
description: "Learn more about: Registry Macros"
title: "Registry Macros"
ms.date: "08/19/2019"
f1_keywords: ["atlcom/ATL::_ATL_STATIC_REGISTRY", "atlcom/ATL::DECLARE_LIBID", "atlcom/ATL::DECLARE_NO_REGISTRY", "atlcom/ATL::DECLARE_REGISTRY", "atlcom/ATL::DECLARE_REGISTRY_APPID_RESOURCEID", "atlcom/ATL::DECLARE_REGISTRY_RESOURCE", "atlcom/ATL::DECLARE_REGISTRY_RESOURCEID"]
helpviewer_keywords: ["registry, ATL macros"]
ms.assetid: 3ee041da-c63b-42a4-89cf-2a4b2a6f81ae
---
# Registry Macros

These macros define useful type library and registry facilities.

|Name|Description|
|-|-|
|[_ATL_STATIC_REGISTRY](#_atl_static_registry)|Indicates that you want the registration code for your object to be in the object to avoid a dependency on ATL.DLL.|
|[DECLARE_LIBID](#declare_libid)|Provides a way for ATL to obtain the *libid* of the type library.|
|[DECLARE_NO_REGISTRY](#declare_no_registry)|Avoids default ATL registration.|
|[DECLARE_REGISTRY](#declare_registry)|Enters or removes the main object's entry in the system registry.|
|[DECLARE_REGISTRY_APPID_RESOURCEID](#declare_registry_appid_resourceid)|Specifies the information required to automatically register the *appid*.|
|[DECLARE_REGISTRY_RESOURCE](#declare_registry_resource)|Finds the named resource and runs the registry script within it.|
|[DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid)|Finds the resource identified by an ID number and runs the registry script within it.|

## Requirements

**Header:** atlcom.h

## <a name="_atl_static_registry"></a> _ATL_STATIC_REGISTRY

A symbol that indicates you want the registration code for your object to be in the object to avoid a dependency on ATL.DLL.

```
#define _ATL_STATIC_REGISTRY
```

### Remarks

When you define ATL_STATIC_REGISTRY, you should use the following code:

[!code-cpp[NVC_ATL_EventHandlingSample#5](../../atl/codesnippet/cpp/registry-macros_1.cpp)]

## <a name="declare_libid"></a> DECLARE_LIBID

Provides a way for ATL to obtain the *libid* of the type library.

```
DECLARE_LIBID( libid )
```

### Parameters

*libid*<br/>
The GUID of the type library.

### Remarks

Use DECLARE_LIBID in a `CAtlModuleT`-derived class.

### Example

Non-attributed wizard-generated ATL projects will have a sample of using this macro.

## <a name="declare_no_registry"></a> DECLARE_NO_REGISTRY

Use DECLARE_NO_REGISTRY if you want to avoid any default ATL registration for the class in which this macro appears.

```
DECLARE_NO_REGISTRY()
```

## <a name="declare_registry"></a> DECLARE_REGISTRY

Enters the standard class registration into the system registry or removes it from the system registry.

```
DECLARE_REGISTRY(
    class,
    pid,
    vpid,
    nid,
    flags )
```

### Parameters

*class*<br/>
[in] Included for backward compatibility.

*pid*<br/>
[in] An LPCTSTR that is a version-specific program identifier.

*vpid*<br/>
[in] An LPCTSTR that is a version-independent program identifier.

*nid*<br/>
[in] A UINT that is an index of the resource string in the registry to use as the description of the program.

*flags*<br/>
[in] A DWORD containing the program's threading model in the registry. Must be one of the following values: THREADFLAGS_APARTMENT, THREADFLAGS_BOTH, or AUTPRXFLAG.

### Remarks

The standard registration consists of the CLSID, program ID, version-independent program ID, description string, and thread model.

When you create an object or control using the ATL Add Class Wizard, the wizard automatically implements script-based registry support and adds the [DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid) macro to your files. If you do not want script-based registry support, you need to replace this macro with DECLARE_REGISTRY. DECLARE_REGISTRY only inserts the five basic keys described above into the registry. You must manually write code to insert other keys into the registry.

## <a name="declare_registry_appid_resourceid"></a> DECLARE_REGISTRY_APPID_RESOURCEID

Specifies the information required to automatically register the *appid*.

```
DECLARE_REGISTRY_APPID_RESOURCEID(
    resid,
    appid )
```

### Parameters

*resid*<br/>
The resource id of the .rgs file that contains information about the *appid*.

*appid*<br/>
A GUID.

### Remarks

Use DECLARE_REGISTRY_APPID_RESOURCEID in a `CAtlModuleT`-derived class.

### Example

Classes added to ATL projects with the Add Class code wizard will have a sample of using this macro.

## <a name="declare_registry_resource"></a> DECLARE_REGISTRY_RESOURCE

Gets the named resource containing the registry file and runs the script to either enter objects into the system registry or remove them from the system registry.

```
DECLARE_REGISTRY_RESOURCE( x )
```

### Parameters

*x*<br/>
[in] String identifier of your resource.

### Remarks

When you create an object or control using the ATL Project Wizard, the wizard will automatically implement script-based registry support and add the [DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid) macro, which is similar to DECLARE_REGISTRY_RESOURCE, to your files.

You can statically link with the ATL Registry Component (Registrar) for optimized registry access. To statically link to the Registrar code, add the following line to your *pch.h* file (*stdafx.h* in Visual Studio 2017 and earlier):

[!code-cpp[NVC_ATL_COM#56](../../atl/codesnippet/cpp/registry-macros_2.h)]

If you want ATL to substitute replacement values at run time, do not specify the DECLARE_REGISTRY_RESOURCE or DECLARE_REGISTRY_RESOURCEID macro. Instead, create an array of `_ATL_REGMAP_ENTRIES` structures, where each entry contains a variable placeholder paired with a value to replace the placeholder at run time. Then call [CAtlModule::UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced) or [CAtlModule::UpdateRegistryFromResourceS](catlmodule-class.md#updateregistryfromresources), passing the array. This adds all of the replacement values in the `_ATL_REGMAP_ENTRIES` structures to the Registrar's replacement map.

For more information about replaceable parameters and scripting, see the article [The ATL Registry Component (Registrar)](../../atl/atl-registry-component-registrar.md).

## <a name="declare_registry_resourceid"></a> DECLARE_REGISTRY_RESOURCEID

Same as [DECLARE_REGISTRY_RESOURCE](#declare_registry_resource) except that it uses a wizard-generated UINT to identify the resource, rather than a string name.

```
DECLARE_REGISTRY_RESOURCEID( x )
```

### Parameters

*x*<br/>
[in] Wizard-generated identifier of your resource.

### Remarks

When you create an object or control using the ATL Project Wizard, the wizard will automatically implement script-based registry support and add the DECLARE_REGISTRY_RESOURCEID macro to your files.

You can statically link with the ATL Registry Component (Registrar) for optimized registry access. To statically link to the Registrar code, add the following line to your *stdafx.h* file (*pch.h* in Visual Studio 2019 and later):

[!code-cpp[NVC_ATL_COM#56](../../atl/codesnippet/cpp/registry-macros_2.h)]

If you want ATL to substitute replacement values at run time, do not specify the DECLARE_REGISTRY_RESOURCE or DECLARE_REGISTRY_RESOURCEID macro. Instead, create an array of `_ATL_REGMAP_ENTRIES` structures, where each entry contains a variable placeholder paired with a value to replace the placeholder at run time. Then call [CAtlModule::UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced) or [CAtlModule::UpdateRegistryFromResourceS](catlmodule-class.md#updateregistryfromresources), passing the array. This adds all of the replacement values in the `_ATL_REGMAP_ENTRIES` structures to the Registrar's replacement map.

For more information about replaceable parameters and scripting, see the article [The ATL Registry Component (Registrar)](../../atl/atl-registry-component-registrar.md).

## See also

[Macros](../../atl/reference/atl-macros.md)
