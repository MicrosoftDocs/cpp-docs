---
description: "Learn more about: IDBSchemaRowsetImpl Class"
title: "IDBSchemaRowsetImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IDBSchemaRowsetImpl", "CheckRestrictions", "IDBSchemaRowsetImpl::CheckRestrictions", "IDBSchemaRowsetImpl.CheckRestrictions", "IDBSchemaRowsetImpl::CreateSchemaRowset", "ATL::IDBSchemaRowsetImpl::CreateSchemaRowset", "CreateSchemaRowset", "IDBSchemaRowsetImpl.CreateSchemaRowset", "ATL.IDBSchemaRowsetImpl.CreateSchemaRowset", "IDBSchemaRowsetImpl::SetRestrictions", "SetRestrictions", "IDBSchemaRowsetImpl.SetRestrictions", "ATL::IDBSchemaRowsetImpl::GetRowset", "ATL.IDBSchemaRowsetImpl.GetRowset", "IDBSchemaRowsetImpl<SessionClass>::GetRowset", "IDBSchemaRowsetImpl.GetRowset", "IDBSchemaRowsetImpl::GetRowset", "ATL::IDBSchemaRowsetImpl<SessionClass>::GetRowset", "GetRowset", "ATL::IDBSchemaRowsetImpl::GetSchemas", "GetSchemas", "IDBSchemaRowsetImpl<SessionClass>::GetSchemas", "ATL.IDBSchemaRowsetImpl.GetSchemas", "ATL::IDBSchemaRowsetImpl<SessionClass>::GetSchemas", "IDBSchemaRowsetImpl.GetSchemas", "IDBSchemaRowsetImpl::GetSchemas"]
helpviewer_keywords: ["IDBSchemaRowsetImpl class", "CheckRestrictions method", "CreateSchemaRowset method", "SetRestrictions method", "GetRowset method", "GetSchemas method"]
ms.assetid: bd7bf0d7-a1c6-4afa-88e3-cfdbdf560703
---
# IDBSchemaRowsetImpl Class

Provides implementation for schema rowsets.

## Syntax

```cpp
template <class SessionClass>
class ATL_NO_VTABLE IDBSchemaRowsetImpl : public IDBSchemaRowset
```

### Parameters

*SessionClass*<br/>
The class by which `IDBSchemaRowsetImpl` is inherited. Typically, this class will be the user's session class.

## Requirements

**Header:** atldb.h

## Members

### Methods

| Name | Description |
|-|-|
|[CheckRestrictions](#checkrestrictions)|Checks the validity of restrictions against a schema rowset.|
|[CreateSchemaRowset](#createschemarowset)|Implements a COM object creator function for the object specified by the template parameter.|
|[SetRestrictions](#setrestrictions)|Specifies which restrictions you support on a particular schema rowset.|

### Interface Methods

| Name | Description |
|-|-|
|[GetRowset](#getrowset)|Returns a schema rowset.|
|[GetSchemas](#getschemas)|Returns a list of schema rowsets accessible by [IDBSchemaRowsetImpl::GetRowset](#getrowset).|

## Remarks

This class implements the [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) interface and the templatized creator function [CreateSchemaRowset](#createschemarowset).

OLE DB uses schema rowsets to return data about the data in a provider. Such data is often called "metadata." By default, a provider must always support `DBSCHEMA_TABLES`, `DBSCHEMA_COLUMNS`, and `DBSCHEMA_PROVIDER_TYPES`, as described in [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) in the *OLE DB Programmer's Reference*. Schema rowsets are designated in a schema map. For information about the schema map entries, see [SCHEMA_ENTRY](./macros-for-ole-db-provider-templates.md#schema_entry).

The OLE DB Provider Wizard, in the ATL Object Wizard, automatically generates code for the schema rowsets in your project. (By default, the wizard supports the mandatory schema rowsets previously mentioned.) When you create a consumer using the ATL Object Wizard, the wizard uses schema rowsets to bind the correct data to a provider. If you do not implement your schema rowsets to provide the correct metadata, the wizard will not bind the correct data.

For information on how to support schema rowsets in your provider, see [Supporting Schema Rowsets](../../data/oledb/supporting-schema-rowsets.md).

For more information about schema rowsets, see [Schema Rowsets](/previous-versions/windows/desktop/ms712921(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="checkrestrictions"></a> IDBSchemaRowsetImpl::CheckRestrictions

Checks the validity of restrictions against a schema rowset.

### Syntax

```cpp
HRESULT CheckRestrictions(REFGUID rguidSchema,
   ULONG cRestrictions,  const VARIANT rgRestrictions[]);
```

#### Parameters

*rguidSchema*<br/>
[in] A reference to the requested schema rowset GUID (for example, `DBSCHEMA_TABLES`).

*cRestrictions*<br/>
[in] The number of restrictions that the consumer passed in for the schema rowset.

*rgRestrictions*<br/>
[in] An array of length *cRestrictions* of restriction values to be set. For more information, see the description of the *rgRestrictions* parameter in [SetRestrictions](#setrestrictions).

### Remarks

Use `CheckRestrictions` to check the validity of restrictions against a schema rowset. It checks restrictions for `DBSCHEMA_TABLES`, `DBSCHEMA_COLUMNS`, and `DBSCHEMA_PROVIDER_TYPES` schema rowsets. Call it to determine if a consumer's call to `IDBSchemaRowset::GetRowset` is correct. If you want to support schema rowsets other than those listed above, you should create your own function to carry out this task.

`CheckRestrictions` determines if the consumer is calling [GetRowset](#getrowset) with the correct restriction and the correct restriction type (for example, a VT_BSTR for a string) that the provider supports. It also determines if the correct number of restrictions are supported. By default, `CheckRestrictions` will ask the provider, through the [SetRestrictions](#setrestrictions) call, which restrictions it supports on a given rowset. It then compares the restrictions from the consumer against those supported by the provider and either succeeds or fails.

For more information on schema rowsets, see [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) in the *OLE DB Programmer's Reference* in the Windows SDK.

## <a name="createschemarowset"></a> IDBSchemaRowsetImpl::CreateSchemaRowset

Implements a COM object creator function for the object specified by the template parameter.

### Syntax

```cpp
template template <class SchemaRowsetClass>
HRESULT CreateSchemaRowset(IUnknown *pUnkOuter,
   ULONG cRestrictions,
   const VARIANT rgRestrictions[],
   REFIID riid,
   ULONG cPropertySets,
   DBPROPSET rgPropertySets[],
   IUnknown** ppRowset,
   SchemaRowsetClass*& pSchemaRowset);
```

#### Parameters

*pUnkOuter*<br/>
[in] An outer [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) when aggregating, otherwise NULL.

*cRestrictions*<br/>
[in] The count of restrictions applied to the schema rowset.

*rgRestrictions*<br/>
[in] An array of `cRestrictions`**VARIANT**s to be applied to the rowset.

*riid*<br/>
[in] The interface to [QueryInterface](../../atl/queryinterface.md) for on the output `IUnknown`.

*cPropertySets*<br/>
[in] The number of property sets to set.

*rgPropertySets*<br/>
[in] An array of [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) structures that specify the properties being set.

*ppRowset*<br/>
[out] The outgoing `IUnknown` requested by *riid*. This `IUnknown` is an interface on the schema rowset object.

*pSchemaRowset*<br/>
[out] A pointer to an instance of the schema rowset class. Typically, this parameter is not used, but it can be used if you must perform more work on the schema rowset before handing it out to a COM object. The lifetime of *pSchemaRowset* is bound by *ppRowset*.

### Return Value

A standard HRESULT value.

### Remarks

This function implements a generic creator for all types of schema rowsets. Typically, the user does not call this function. It is called by the implementation of the schema map.

## <a name="setrestrictions"></a> IDBSchemaRowsetImpl::SetRestrictions

Specifies which restrictions you support on a particular schema rowset.

### Syntax

```cpp
void SetRestrictions(ULONG cRestrictions,
   GUID* /* rguidSchema */,
   ULONG* rgRestrictions);
```

#### Parameters

*cRestrictions*<br/>
[in] The number of restrictions in the *rgRestrictions* array and the number of GUIDs in the *rguidSchema* array.

*rguidSchema*<br/>
[in] An array of the GUIDs of the schema rowsets for which to fetch restrictions. Each array element contains the GUID of one schema rowset (for example, `DBSCHEMA_TABLES`).

*rgRestrictions*<br/>
[in] An array of length *cRestrictions* of restriction values to be set. Each element corresponds to the restrictions on the schema rowset identified by the GUID. If a schema rowset is not supported by the provider, the element is set to zero. Otherwise, the **ULONG** value contains a bit mask that represents the restrictions supported on that schema rowset. For more information on which restrictions correspond to a particular schema rowset, consult the table of schema rowset GUIDs in [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) in the *OLE DB Programmer's Reference* in the Windows SDK.

### Remarks

The `IDBSchemaRowset` object calls `SetRestrictions` to determine which restrictions you support on a particular schema rowset (it is called by [GetSchemas](#getschemas) through an upcasted pointer). Restrictions allow consumers to fetch only matching rows (for example, find all the columns in the table "MyTable"). Restrictions are optional, and in the case in which none are supported (the default), all data is always returned.

The default implementation of this method sets the *rgRestrictions* array elements to 0. Override the default in your session class to set restrictions other than the default.

For information on implementing schema rowset support, see [Supporting Schema Rowsets](../../data/oledb/supporting-schema-rowsets.md).

For an example of an provider that supports schema rowsets, see the [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) sample.

For more information on schema rowsets, see [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) in the *OLE DB Programmer's Reference* in the Windows SDK.

## <a name="getrowset"></a> IDBSchemaRowsetImpl::GetRowset

Returns a schema rowset.

### Syntax

```cpp
STDMETHOD (GetRowset)(IUnknown *pUnkOuter,
   REFGUID rguidSchema,
   ULONG cRestrictions,
   const VARIANT rgRestrictions[],
   REFIID riid,
   ULONG cPropertySets,
   DBPROPSET rgPropertySets[],
   IUnknown **ppRowset);
```

#### Parameters

*pUnkOuter*<br/>
[in] An outer `IUnknown` when aggregating; otherwise NULL.

*rguidSchema*<br/>
[in] A reference to the requested schema rowset GUID (for example, `DBSCHEMA_TABLES`).

*cRestrictions*<br/>
[in] A count of restrictions to be applied to the rowset.

*rgRestrictions*<br/>
[in] An array of `cRestrictions`**VARIANT**s that represent the restrictions.

*riid*<br/>
[in] The IID to request of the newly created schema rowset.

*cPropertySets*<br/>
[in] The number of property sets to set.

*rgPropertySets*<br/>
[in/out] An array of [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) structures to set on the newly created schema rowset.

*ppRowset*<br/>
[out] A pointer to the requested interface on the newly created schema rowset.

### Remarks

This method requires the user to have a schema map in the session class. Using the schema map information, `GetRowset` creates a given rowset object if the *rguidSchema* parameter is equal to one of the map entries GUIDs. See [SCHEMA_ENTRY](./macros-for-ole-db-provider-templates.md#schema_entry) for a description of the map entry.

See [IDBSchemaRowset::GetRowset](/previous-versions/windows/desktop/ms722634(v=vs.85)) in the Windows SDK.

## <a name="getschemas"></a> IDBSchemaRowsetImpl::GetSchemas

Returns a list of schema rowsets accessible by [IDBSchemaRowsetImpl::GetRowset](#getrowset).

### Syntax

```cpp
STDMETHOD (GetSchema s )(ULONG * pcSchemas,
   GUID ** prgSchemas,
   ULONG** prgRest);
```

#### Parameters

*pcSchemas*<br/>
[out] A pointer to a **ULONG** that is filled with the number of schemas.

*prgSchemas*<br/>
[out] A pointer to an array of GUIDs that is filled with a pointer to an array of schema rowset GUIDs.

*prgRest*<br/>
[out] A pointer to an array of **ULONG**s that is to be filled with the restriction array.

### Remarks

This method returns an array of all schema rowsets supported by the provider. See [IDBSchemaRowset::GetSchemas](/previous-versions/windows/desktop/ms719605(v=vs.85)) in the Windows SDK.

The implementation of this function requires the user to have a schema map in the session class. Using the schema map information, it then responds with the array of GUIDs for the schemas in the map. This represents the schemas supported by the provider.

## See also

[Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)<br/>
[Supporting Schema Rowsets](../../data/oledb/supporting-schema-rowsets.md)<br/>
[SCHEMA_ENTRY](./macros-for-ole-db-provider-templates.md#schema_entry)<br/>
[UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider)
