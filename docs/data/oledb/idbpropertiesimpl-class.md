---
description: "Learn more about: IDBPropertiesImpl Class"
title: "IDBPropertiesImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IDBPropertiesImpl", "ATL.IDBPropertiesImpl", "ATL.IDBPropertiesImpl<T>", "ATL::IDBPropertiesImpl<T>", "ATL::IDBPropertiesImpl", "IDBPropertiesImpl::GetProperties", "IDBPropertiesImpl.GetProperties", "IDBPropertiesImpl::GetPropertyInfo", "IDBPropertiesImpl.GetPropertyInfo", "GetPropertyInfo", "IDBPropertiesImpl.SetProperties", "IDBPropertiesImpl::SetProperties"]
helpviewer_keywords: ["IDBPropertiesImpl class", "GetProperties method", "GetPropertyInfo method", "SetProperties method"]
ms.assetid: a7f15a8b-95b2-4316-b944-d5d03f8d74ab
---
# IDBPropertiesImpl Class

Provides an implementation for the `IDBProperties` interface.

## Syntax

```cpp
template <class T>
class ATL_NO_VTABLE IDBPropertiesImpl
   : public IDBProperties, public CUtlProps<T>
```

### Parameters

*T*<br/>
Your class, derived from `IDBPropertiesImpl`.

## Requirements

**Header:** atldb.h

## Members

### Interface Methods

| Name | Description |
|-|-|
|[GetProperties](#getproperties)|Returns the values of properties in the Data Source, Data Source Information, and Initialization property groups that are currently set on the data source object or the values of properties in the Initialization property group that are currently set on the enumerator.|
|[GetPropertyInfo](#getpropertyinfo)|Returns information about all properties supported by the provider.|
|[SetProperties](#setproperties)|Sets properties in the Data Source and Initialization property groups, for data source objects, or the Initialization property group, for enumerators.|

## Remarks

[IDBProperties](/previous-versions/windows/desktop/ms719607(v=vs.85)) is a mandatory interface for data source objects and an optional interface for enumerators. However, if an enumerator exposes [IDBInitialize](/previous-versions/windows/desktop/ms713706(v=vs.85)), it must expose `IDBProperties`. `IDBPropertiesImpl` implements `IDBProperties` by using a static function defined by [BEGIN_PROPSET_MAP](./macros-for-ole-db-provider-templates.md#begin_propset_map).

## <a name="getproperties"></a> IDBPropertiesImpl::GetProperties

Returns the values of properties in the Data Source, Data Source Information, and Initialization property groups that are currently set on the data source object or the values of properties in the Initialization property group that are currently set on the enumerator.

### Syntax

```cpp
STDMETHOD(GetProperties)(ULONG cPropertySets,
   const DBPROPIDSET rgPropertySets[],
   ULONG * pcProperties,
   DBPROPSET ** prgProperties);
```

#### Parameters

See [IDBProperties::GetProperties](/previous-versions/windows/desktop/ms714344(v=vs.85)) in the *OLE DB Programmer's Reference*.

Some parameters correspond to *OLE DB Programmer's Reference* parameters of different names, which are described in `IDBProperties::GetProperties`:

|OLE DB Template parameters|*OLE DB Programmer's Reference* parameters|
|--------------------------------|------------------------------------------------|
|*cPropertySets*|*cPropertyIDSets*|
|*rgPropertySets*|*rgPropertyIDSets*|
|*pcProperties*|*pcPropertySets*|
|*prgProperties*|*prgPropertySets*|

### Remarks

If the provider is initialized, this method returns the values of properties in the DBPROPSET_DATASOURCE, DBPROPSET_DATASOURCEINFO, DBPROPSET_DBINIT property groups that are currently set on the data source object. If the provider is not initialized, it returns DBPROPSET_DBINIT group properties only.

## <a name="getpropertyinfo"></a> IDBPropertiesImpl::GetPropertyInfo

Returns property information supported by the data source.

### Syntax

```cpp
STDMETHOD(GetPropertyInfo)(ULONG cPropertySets,
   const DBPROPIDSET rgPropertySets[],
   ULONG * pcPropertyInfoSets,
   DBPROPINFOSET ** prgPropertyInfoSets,
   OLECHAR ** ppDescBuffer);
```

#### Parameters

See [IDBProperties::GetPropertyInfo](/previous-versions/windows/desktop/ms718175(v=vs.85)) in the *OLE DB Programmer's Reference*.

Some parameters correspond to *OLE DB Programmer's Reference* parameters of different names, which are described in `IDBProperties::GetPropertyInfo`:

|OLE DB Template parameters|*OLE DB Programmer's Reference* parameters|
|--------------------------------|------------------------------------------------|
|*cPropertySets*|*cPropertyIDSets*|
|*rgPropertySets*|*rgPropertyIDSets*|

### Remarks

Uses [IDBInitializeImpl::m_pCUtlPropInfo](./idbinitializeimpl-class.md#pcutlpropinfo) to implement this functionality.

## <a name="setproperties"></a> IDBPropertiesImpl::SetProperties

Sets properties in the Data Source and Initialization property groups, for data source objects, or the Initialization property group, for enumerators.

### Syntax

```cpp
STDMETHOD(SetProperties)(ULONG cPropertySets,
   DBPROPSET rgPropertySets[]);
```

#### Parameters

See [IDBProperties::SetProperties](/previous-versions/windows/desktop/ms723049(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Remarks

If the provider is initialized, this method sets the values of properties in the DBPROPSET_DATASOURCE, DBPROPSET_DATASOURCEINFO, DBPROPSET_DBINIT property groups for the data source object. If the provider is not initialized, it sets DBPROPSET_DBINIT group properties only.

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)
