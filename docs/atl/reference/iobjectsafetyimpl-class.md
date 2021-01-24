---
description: "Learn more about: IObjectSafetyImpl Class"
title: "IObjectSafetyImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IObjectSafetyImpl", "ATLCTL/ATL::IObjectSafetyImpl", "ATLCTL/ATL::IObjectSafetyImpl::GetInterfaceSafetyOptions", "ATLCTL/ATL::IObjectSafetyImpl::SetInterfaceSafetyOptions", "ATLCTL/ATL::IObjectSafetyImpl::m_dwCurrentSafety"]
helpviewer_keywords: ["controls [ATL], safe", "safe for scripting and initialization (controls)", "IObjectSafety, ATL implementation", "IObjectSafetyImpl class"]
ms.assetid: 64e32082-d910-4a8a-a5bf-ebed9145359d
---
# IObjectSafetyImpl Class

This class provides a default implementation of the `IObjectSafety` interface to allow a client to retrieve and set an object's safety levels.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T,DWORD dwSupportedSafety>
class IObjectSafetyImpl
```

#### Parameters

*T*<br/>
Your class, derived from `IObjectSafetyImpl`.

*dwSupportedSafety*<br/>
Specifies the supported safety options for the control. Can be one of the following values:

- INTERFACESAFE_FOR_UNTRUSTED_CALLER The interface identified by the [SetInterfaceSafetyOptions](#setinterfacesafetyoptions) parameter `riid` should be made safe for scripting.

- INTERFACESAFE_FOR_UNTRUSTED_DATA The interface identified by the `SetInterfaceSafetyOptions` parameter `riid` should be made safe for untrusted data during initialization.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IObjectSafetyImpl::GetInterfaceSafetyOptions](#getinterfacesafetyoptions)|Retrieves the safety options supported by the object, as well as the safety options currently set for the object.|
|[IObjectSafetyImpl::SetInterfaceSafetyOptions](#setinterfacesafetyoptions)|Makes the object safe for initialization or scripting.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[IObjectSafetyImpl::m_dwCurrentSafety](#m_dwcurrentsafety)|Stores the object's current safety level.|

## Remarks

Class `IObjectSafetyImpl` provides a default implementation of `IObjectSafety`. The `IObjectSafety` interface allows a client to retrieve and set an object's safety levels. For example, a web browser can call `IObjectSafety::SetInterfaceSafetyOptions` to make a control safe for initialization or safe for scripting.

Note that using the [IMPLEMENTED_CATEGORY](category-macros.md#implemented_category) macro with the CATID_SafeForScripting and CATID_SafeForInitializing component categories provides an alternative way of specifying that a component is safe.

**Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)

## Inheritance Hierarchy

`IObjectSafety`

`IObjectSafetyImpl`

## Requirements

**Header:** atlctl.h

## <a name="getinterfacesafetyoptions"></a> IObjectSafetyImpl::GetInterfaceSafetyOptions

Retrieves the safety options supported by the object, as well as the safety options currently set for the object.

```
HRESULT GetInterfaceSafetyOptions(
    REFIID riid,
    DWORD* pdwSupportedOptions,
    DWORD* pdwEnabledOptions);
```

### Remarks

The implementation returns the appropriate values for any interface supported by the object's implementation of `IUnknown::QueryInterface`.

> [!IMPORTANT]
> Any object that supports `IObjectSafety` is responsible for its own security, and that of any object it delegates. The programmer must take into account issues arising from running code in the user's context, cross-site scripting and perform suitable zone checking.

See [IObjectSafety::GetInterfaceSafetyOptions](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768223\(v=vs.85\)) in the Windows SDK.

## <a name="m_dwcurrentsafety"></a> IObjectSafetyImpl::m_dwCurrentSafety

Stores the object's current safety level.

```
DWORD m_dwCurrentSafety;
```

## <a name="setinterfacesafetyoptions"></a> IObjectSafetyImpl::SetInterfaceSafetyOptions

Makes the object safe for initialization or scripting by setting the [m_dwCurrentSafety](#m_dwcurrentsafety) member to the appropriate value.

```
HRESULT SetInterfaceSafetyOptions(
    REFIID riid,
    DWORD dwOptionsSetMask,
    DWORD dwEnabledOptions);
```

### Remarks

The implementation returns E_NOINTERFACE for any interface not supported by the object's implementation of `IUnknown::QueryInterface`.

> [!IMPORTANT]
> Any object that supports `IObjectSafety` is responsible for its own security, and that of any object it delegates. The programmer must take into account issues arising from running code in the user's context, cross-site scripting and perform suitable zone checking.

See [IObjectSafety::SetInterfaceSafetyOptions](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768225\(v=vs.85\)) in the Windows SDK.

## See also

[IObjectSafety Interface](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768224\(v=vs.85\))<br/>
[Class Overview](../../atl/atl-class-overview.md)
