---
description: "Learn more about: IPerPropertyBrowsingImpl Class"
title: "IPerPropertyBrowsingImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IPerPropertyBrowsingImpl", "ATLCTL/ATL::IPerPropertyBrowsingImpl", "ATLCTL/ATL::IPerPropertyBrowsingImpl::GetDisplayString", "ATLCTL/ATL::IPerPropertyBrowsingImpl::GetPredefinedStrings", "ATLCTL/ATL::IPerPropertyBrowsingImpl::GetPredefinedValue", "ATLCTL/ATL::IPerPropertyBrowsingImpl::MapPropertyToPage"]
helpviewer_keywords: ["IPerPropertyBrowsingImpl class", "property pages, accessing information", "IPerPropertyBrowsing, ATL implementation"]
ms.assetid: 0b1a9be3-d242-4767-be69-663a21e4b728
---
# IPerPropertyBrowsingImpl Class

This class implements `IUnknown` and allows a client to access the information in an object's property pages.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```

template <class T>
class ATL_NO_VTABLE IPerPropertyBrowsingImpl :
    public IPerPropertyBrowsing
```

#### Parameters

*T*<br/>
Your class, derived from `IPerPropertyBrowsingImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IPerPropertyBrowsingImpl::GetDisplayString](#getdisplaystring)|Retrieves a string describing a given property.|
|[IPerPropertyBrowsingImpl::GetPredefinedStrings](#getpredefinedstrings)|Retrieves an array of strings corresponding to the values that a given property can accept.|
|[IPerPropertyBrowsingImpl::GetPredefinedValue](#getpredefinedvalue)|Retrieves a VARIANT containing the value of a property identified by a given DISPID. The DISPID is associated with the string name retrieved from `GetPredefinedStrings`. The ATL implementation returns E_NOTIMPL.|
|[IPerPropertyBrowsingImpl::MapPropertyToPage](#mappropertytopage)|Retrieves the CLSID of the property page associated with a given property.|

## Remarks

The [IPerPropertyBrowsing](/windows/win32/api/ocidl/nn-ocidl-iperpropertybrowsing) interface allows a client to access the information in an object's property pages. Class `IPerPropertyBrowsingImpl` provides a default implementation of this interface and implements `IUnknown` by sending information to the dump device in debug builds.

> [!NOTE]
> If you are using Microsoft Access as the container application, you must derive your class from `IPerPropertyBrowsingImpl`. Otherwise, Access will not load your control.

**Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)

## Inheritance Hierarchy

`IPerPropertyBrowsing`

`IPerPropertyBrowsingImpl`

## Requirements

**Header:** atlctl.h

## <a name="getdisplaystring"></a> IPerPropertyBrowsingImpl::GetDisplayString

Retrieves a string describing a given property.

```
STDMETHOD(GetDisplayString)(
    DISPID dispID,
    BSTR* pBstr);
```

### Remarks

See [IPerPropertyBrowsing::GetDisplayString](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-getdisplaystring) in the Windows SDK.

## <a name="getpredefinedstrings"></a> IPerPropertyBrowsingImpl::GetPredefinedStrings

Fills each array with zero items.

```
STDMETHOD(GetPredefinedStrings)(
    DISPID dispID,
    CALPOLESTR* pCaStringsOut,
    CADWORD* pCaCookiesOut);
```

### Return Value

ATL's implementation of [GetPredefinedValue](#getpredefinedvalue) returns E_NOTIMPL.

### Remarks

See [IPerPropertyBrowsing::GetPredefinedStrings](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-getpredefinedstrings) in the Windows SDK.

## <a name="getpredefinedvalue"></a> IPerPropertyBrowsingImpl::GetPredefinedValue

Retrieves a VARIANT containing the value of a property identified by a given DISPID. The DISPID is associated with the string name retrieved from `GetPredefinedStrings`.

```
STDMETHOD(GetPredefinedValue)(
    DISPID dispID,
    DWORD dwCookie,
    VARIANT* pVarOut);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

ATL's implementation of [GetPredefinedStrings](#getpredefinedstrings) retrieves no corresponding strings.

See [IPerPropertyBrowsing::GetPredefinedValue](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-getpredefinedvalue) in the Windows SDK.

## <a name="mappropertytopage"></a> IPerPropertyBrowsingImpl::MapPropertyToPage

Retrieves the CLSID of the property page associated with the specified property.

```
STDMETHOD(MapPropertyToPage)(
    DISPID dispID,
    CLSID* pClsid);
```

### Remarks

ATL uses the object's property map to obtain this information.

See [IPerPropertyBrowsing::MapPropertyToPage](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-mappropertytopage) in the Windows SDK.

## See also

[IPropertyPageImpl Class](../../atl/reference/ipropertypageimpl-class.md)<br/>
[ISpecifyPropertyPagesImpl Class](../../atl/reference/ispecifypropertypagesimpl-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
