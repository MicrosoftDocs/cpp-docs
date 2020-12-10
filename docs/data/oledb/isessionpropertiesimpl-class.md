---
description: "Learn more about: ISessionPropertiesImpl Class"
title: "ISessionPropertiesImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["ISessionPropertiesImpl", "ISessionPropertiesImpl::GetProperties", "ISessionPropertiesImpl.GetProperties", "ISessionPropertiesImpl.SetProperties", "ISessionPropertiesImpl::SetProperties"]
helpviewer_keywords: ["ISessionPropertiesImpl class", "GetProperties method", "SetProperties method"]
ms.assetid: ca0ba254-c7dc-4c52-abec-cf895a0c6a63
---
# ISessionPropertiesImpl Class

Provides an implementation of the [ISessionProperties](/previous-versions/windows/desktop/ms713721(v=vs.85)) interface.

## Syntax

```cpp
template <class T, class PropClass = T>
class ATL_NO_VTABLE ISessionPropertiesImpl :
   public ISessionProperties,
   public CUtlProps<PropClass>
```

### Parameters

*T*<br/>
Your class, derived from `ISessionPropertiesImpl`.

*PropClass*<br/>
A user-definable property class that defaults to *T*.

## Requirements

**Header:** atldb.h

## Members

### Interface Methods

| Name | Description |
|-|-|
|[GetProperties](#getproperties)|Returns the list of properties in the Session property group that are currently set on the session.|
|[SetProperties](#setproperties)|Sets properties in the Session property group.|

## Remarks

A mandatory interface on sessions. This class implements session properties by calling a static function defined by the [property set map](./macros-for-ole-db-provider-templates.md#begin_propset_map). The property set map should be specified in your session class.

## <a name="getproperties"></a> ISessionPropertiesImpl::GetProperties

Returns the list of properties in the `DBPROPSET_SESSION` property group that are currently set on the session.

### Syntax

```cpp
STDMETHOD(GetProperties)(ULONG cPropertyIDSets,
   const DBPROPIDSET rgPropertyIDSets[],
   ULONG * pcPropertySets,
   DBPROPSET ** prgPropertySets);
```

#### Parameters

See [ISessionProperties::GetProperties](/previous-versions/windows/desktop/ms723643(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="setproperties"></a> ISessionPropertiesImpl::SetProperties

Sets properties in the `DBPROPSET_SESSION` property group.

### Syntax

```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,
   DBPROPSET rgPropertySets[]);
```

#### Parameters

See [ISessionProperties::SetProperties](/previous-versions/windows/desktop/ms714405(v=vs.85)) in the *OLE DB Programmer's Reference*.

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)
