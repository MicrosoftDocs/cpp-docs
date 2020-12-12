---
description: "Learn more about: CUtlProps Class"
title: "CUtlProps Class"
ms.date: "11/04/2016"
f1_keywords: ["CUtlProps", "CUtlProps::GetPropValue", "CUtlProps.GetPropValue", "GetPropValue", "CUtlProps::IsValidValue", "CUtlProps.IsValidValue", "IsValidValue", "OnPropertyChanged", "CUtlProps.OnPropertyChanged", "CUtlProps::OnPropertyChanged", "SetPropValue", "ATL::CUtlProps<T>::SetPropValue", "ATL.CUtlProps<T>.SetPropValue", "ATL.CUtlProps.SetPropValue", "CUtlProps::SetPropValue", "CUtlProps<T>::SetPropValue", "CUtlProps.SetPropValue", "CUtlProps<T>.SetPropValue", "ATL::CUtlProps::SetPropValue"]
helpviewer_keywords: ["CUtlProps class", "GetPropValue method", "IsValidValue method", "OnInterfaceRequested method", "OnPropertyChanged method", "SetPropValue method"]
ms.assetid: bb525178-765c-4e23-a110-c0fd70c05437
---
# CUtlProps Class

Implements properties for a variety of OLE DB property interfaces (for example, `IDBProperties`, `IDBProperties`, and `IRowsetInfo`).

## Syntax

```cpp
template < class T >
class ATL_NO_VTABLE CUtlProps : public CUtlPropsBase
```

### Parameters

*T*<br/>
The class that contains the `BEGIN_PROPSET_MAP`.

## Requirements

**Header:** atldb.h

## Members

### Methods

| Name | Description |
|-|-|
|[GetPropValue](#getpropvalue)|Gets a property from a property set.|
|[IsValidValue](#isvalidvalue)|Used to validate a value before setting a property.|
|[OnInterfaceRequested](#oninterfacerequested)|Handles requests for an optional interface when a consumer calls a method on an object creation interface.|
|[OnPropertyChanged](#onpropertychanged)|Called after setting a property to handle chained properties.|
|[SetPropValue](#setpropvalue)|Sets a property in a property set.|

## Remarks

Most of this class is an implementation detail.

`CUtlProps` contains two members for setting properties internally: [GetPropValue](#getpropvalue) and [SetPropValue](#setpropvalue).

For more information on the macros used in a property set map, see [BEGIN_PROPSET_MAP](./macros-for-ole-db-provider-templates.md#begin_propset_map) and [END_PROPSET_MAP](./macros-for-ole-db-provider-templates.md#end_propset_map).

## <a name="getpropvalue"></a> CUtlProps::GetPropValue

Gets a property from a property set.

### Syntax

```cpp
OUT_OF_LINE HRESULT GetPropValue(const GUID* pguidPropSet,
   DBPROPID dwPropId,
   VARIANT* pvValue);
```

#### Parameters

*pguidPropSet*<br/>
[in] The GUID for the PropSet.

*dwPropId*<br/>
[in] The property index.

*pvValue*<br/>
[out] A pointer to a variant that contains the new property value.

### Return Value

`Failure` on failure and S_OK if successful.

## <a name="isvalidvalue"></a> CUtlProps::IsValidValue

Used to validate a value before setting a property.

### Syntax

```cpp
virtual HRESULT CUtlPropsBase::IsValidValue(ULONG /* iCurSet */,
   DBPROP* pDBProp);
```

#### Parameters

*iCurSet*<br/>
The index into the property-set array; zero if there is only one property set.

*pDBProp*<br/>
The property ID and new value in a [DBPROP](/previous-versions/windows/desktop/ms717970(v=vs.85)) structure.

### Return Value

A standard HRESULT. The default return value is S_OK.

### Remarks

If you have any validation routines you want to run on a value that you are about to use to set a property, you should override this function. For example, you could validate DBPROP_AUTH_PASSWORD against a password table to determine a valid value.

## <a name="oninterfacerequested"></a> CUtlProps::OnInterfaceRequested

Handles requests for an optional interface when a consumer calls a method on one of the object creation interfaces.

### Syntax

```cpp
virtual HRESULT CUtlPropsBase::OnInterfaceRequested(REFIID riid);
```

#### Parameters

*riid*<br/>
[in] The IID for the requested interface. For more details, see the description of the *riid* parameter of `ICommand::Execute` in the *OLE DB Programmer's Reference* (in the *MDAC SDK*).

### Remarks

`OnInterfaceRequested` handles consumer requests for an optional interface when a consumer calls a method on one of the object creation interfaces (such as `IDBCreateSession`, `IDBCreateCommand`, `IOpenRowset`, or `ICommand`). It sets the corresponding OLE DB property for the requested interface. For example, if the consumer requests `IID_IRowsetLocate`, `OnInterfaceRequested` sets the `DBPROP_IRowsetLocate` interface. Doing so maintains the correct state during rowset creation.

This method is called when the consumer calls `IOpenRowset::OpenRowset` or `ICommand::Execute`.

If a consumer opens an object and requests an optional interface, the provider should set the property associated with that interface to VARIANT_TRUE. To allow property-specific processing, `OnInterfaceRequested` is called before the provider's `Execute` method is called. By default, `OnInterfaceRequested` handles the following interfaces:

- `IRowsetLocate`

- `IRowsetChange`

- `IRowsetUpdate`

- `IConnectionPointContainer`

- `IRowsetScroll`

If you wish to handle other interfaces, override this function in your data source, session, command, or rowset class to process functions. Your override should go through the normal set/get properties interfaces to ensure that setting properties also sets any chained properties (see [OnPropertyChanged](#onpropertychanged)).

## <a name="onpropertychanged"></a> CUtlProps::OnPropertyChanged

Called after setting a property to handle chained properties.

### Syntax

```cpp
virtual HRESULT OnPropertyChanged(ULONG /* iCurSet */,
   DBPROP* pDBProp);
```

#### Parameters

*iCurSet*<br/>
The index into the property-set array; zero if there is only one property set.

*pDBProp*<br/>
The property ID and new value in a [DBPROP](/previous-versions/windows/desktop/ms717970(v=vs.85)) structure.

### Return Value

A standard HRESULT. The default return value is S_OK.

### Remarks

If you want to handle chained properties, such as bookmarks or updates whose values are dependent on another property's value, you should override this function.

### Example

In this function, the user gets the property ID from the `DBPROP*` parameter. Now, it is possible to compare the ID against a property to chain. When the property is found, `SetProperties` is called with the property that will now be set in conjunction with the other property. In this case, if one gets the `DBPROP_IRowsetLocate`, `DBPROP_LITERALBOOKMARKS`, or `DBPROP_ORDEREDBOOKMARKS` property, one can set the `DBPROP_BOOKMARKS` property.

[!code-cpp[NVC_OLEDB_Provider#2](../../data/oledb/codesnippet/cpp/cutlprops-onpropertychanged_1.h)]

## <a name="setpropvalue"></a> CUtlProps::SetPropValue

Sets a property in a property set.

### Syntax

```cpp
HRESULT SetPropValue(const GUID* pguidPropSet,
   DBPROPID dwPropId,
   VARIANT* pvValue);
```

#### Parameters

*pguidPropSet*<br/>
[in] The GUID for the PropSet.

*dwPropId*<br/>
[in] The property index.

*pvValue*<br/>
[in] A pointer to a variant that contains the new property value.

### Return Value

`Failure` on failure and S_OK if successful.

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)
