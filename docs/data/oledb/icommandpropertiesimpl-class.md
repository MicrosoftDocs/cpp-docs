---
description: "Learn more about: ICommandPropertiesImpl Class"
title: "ICommandPropertiesImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["ICommandPropertiesImpl", "ATL.ICommandPropertiesImpl", "ATL::ICommandPropertiesImpl", "ICommandPropertiesImpl::GetProperties", "ICommandPropertiesImpl.GetProperties", "ICommandPropertiesImpl.SetProperties", "ICommandPropertiesImpl::SetProperties"]
helpviewer_keywords: ["ICommandPropertiesImpl class", "GetProperties method", "SetProperties method"]
ms.assetid: b3cf6aea-527e-4f0d-96e0-669178b021a2
---
# ICommandPropertiesImpl Class

Provides an implementation of the [ICommandProperties](/previous-versions/windows/desktop/ms723044(v=vs.85)) interface.

## Syntax

```cpp
template <class T, class PropClass = T>
class ATL_NO_VTABLE ICommandPropertiesImpl
   : public ICommandProperties, public CUtlProps<PropClass>
```

### Parameters

*T*<br/>
Your class, derived from

*PropClass*<br/>
Your properties class.

## Requirements

**Header:** atldb.h

## Members

### Interface Methods

| Name | Description |
|-|-|
|[GetProperties](#getproperties)|Returns the list of properties in the Rowset property group that are currently requested for the rowset.|
|[SetProperties](#setproperties)|Sets properties in the Rowset property group.|

## Remarks

This is mandatory on commands. The implementation is provided by a static function defined by the [BEGIN_PROPSET_MAP](./macros-for-ole-db-provider-templates.md#begin_propset_map) macro.

## <a name="getproperties"></a> ICommandPropertiesImpl::GetProperties

Returns all the requested property sets using the command's property map.

### Syntax

```cpp
STDMETHOD(GetProperties)(const ULONG cPropertyIDSets,
   const DBPROPIDSET rgPropertyIDSets[],
   ULONG * pcPropertySets,
   DBPROPSET ** prgPropertySets);
```

#### Parameters

See [ICommandProperties::GetProperties](/previous-versions/windows/desktop/ms723119(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Remarks

See [BEGIN_PROPSET_MAP](./macros-for-ole-db-provider-templates.md#begin_propset_map).

## <a name="setproperties"></a> ICommandPropertiesImpl::SetProperties

Sets properties for the command object.

### Syntax

```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,
   DBPROPSET rgPropertySets[]);
```

#### Parameters

See [ICommandProperties::SetProperties](/previous-versions/windows/desktop/ms711497(v=vs.85)) in the *OLE DB Programmer's Reference*.

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)
