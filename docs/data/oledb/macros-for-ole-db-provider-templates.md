---
description: "Learn more about: Macros for OLE DB Provider Templates"
title: "Macros for OLE DB Provider Templates"
ms.date: "02/11/2019"
f1_keywords: ["BEGIN_PROPERTY_SET", "BEGIN_PROPERTY_SET_EX", "BEGIN_PROPSET_MAP", "CHAIN_PROPERTY_SET", "END_PROPERTY_SET", "END_PROPSET_MAP", "PROPERTY_INFO_ENTRY", "PROPERTY_INFO_ENTRY_EX", "PROPERTY_INFO_ENTRY_VALUE", "BEGIN_PROVIDER_COLUMN_MAP", "END_PROVIDER_COLUMN_MAP", "PROVIDER_COLUMN_ENTRY", "PROVIDER_COLUMN_ENTRY_FIXED", "PROVIDER_COLUMN_ENTRY_GN", "PROVIDER_COLUMN_ENTRY_LENGTH", "PROVIDER_COLUMN_ENTRY_STR", "PROVIDER_COLUMN_ENTRY_TYPE_LENGTH", "PROVIDER_COLUMN_ENTRY_WSTR", "BEGIN_SCHEMA_MAP", "END_SCHEMA_MAP", "SCHEMA_ENTRY"]
helpviewer_keywords: ["OLE DB provider templates, macros", "macros, OLE DB Provider Templates", "Provider Template macros (OLE DB)", "OLE DB Provider Template macros", "BEGIN_PROPERTY_SET macro", "BEGIN_PROPERTY_SET_EX macro", "BEGIN_PROPSET_MAP macro", "CHAIN_PROPERTY_SET macro", "END_PROPERTY_SET macro", "END_PROPSET_MAP macro", "PROPERTY_INFO_ENTRY macro", "PROPERTY_INFO_ENTRY_EX macro", "PROPERTY_INFO_ENTRY_VALUE macro", "BEGIN_PROVIDER_COLUMN_MAP macro", "END_PROVIDER_COLUMN_MAP macro", "PROVIDER_COLUMN_ENTRY macro", "PROVIDER_COLUMN_ENTRY_FIXED macro", "PROVIDER_COLUMN_ENTRY_GN macro", "PROVIDER_COLUMN_ENTRY_LENGTH macro", "PROVIDER_COLUMN_ENTRY_STR macro", "PROVIDER_COLUMN_ENTRY_TYPE_LENGTH macro", "PROVIDER_COLUMN_ENTRY_WSTR macro", "BEGIN_SCHEMA_MAP macro", "END_SCHEMA_MAP macro", "SCHEMA_ENTRY macro"]
ms.assetid: 909482c5-64ab-4e52-84a9-1c07091db183
---
# Macros for OLE DB Provider Templates

The OLE DB Templates Provider macros offer functionality in the following categories:

## Property Set Map Macros

| Name | Description |
|-|-|
|[BEGIN_PROPERTY_SET](#begin_property_set)|Marks the beginning of a property set.|
|[BEGIN_PROPERTY_SET_EX](#begin_property_set_ex)|Marks the beginning of a property set.|
|[BEGIN_PROPSET_MAP](#begin_propset_map)|Marks the beginning of a property set that can be hidden or defined outside the scope of the provider.|
|[CHAIN_PROPERTY_SET](#chain_property_set)|Chains property groups together.|
|[END_PROPERTY_SET](#end_property_set)|Marks the end of a property set.|
|[END_PROPSET_MAP](#end_propset_map)|Marks the end of a property set map.|
|[PROPERTY_INFO_ENTRY](#property_info_entry)|Sets a specific property in a property set to a default value.|
|[PROPERTY_INFO_ENTRY_EX](#property_info_entry_ex)|Sets a specific property in a property set to a value supplied by you. Also enables you to set flags and options.|
|[PROPERTY_INFO_ENTRY_VALUE](#property_info_entry_value)|Sets a specific property in a property set to a value supplied by you.|

## Column Map Macros

| Name | Description |
|-|-|
|[BEGIN_PROVIDER_COLUMN_MAP](#begin_provider_column_map)|Marks the beginning of the provider column map entries.|
|[END_PROVIDER_COLUMN_MAP](#end_provider_column_map)|Marks the end of the provider column map entries.|
|[PROVIDER_COLUMN_ENTRY](#provider_column_entry)|Represents a specific column supported by the provider.|
|[PROVIDER_COLUMN_ENTRY_FIXED](#provider_column_entry_fixed)|Represents a specific column supported by the provider. You can specify the column data type.|
|[PROVIDER_COLUMN_ENTRY_GN](#provider_column_entry_gn)|Represents a specific column supported by the provider. You can specify the column's size, data type, precision, scale, and schema rowset GUID.|
|[PROVIDER_COLUMN_ENTRY_LENGTH](#provider_column_entry_length)|Represents a specific column supported by the provider. You can specify the column size.|
|[PROVIDER_COLUMN_ENTRY_STR](#provider_column_entry_str)|Represents a specific column supported by the provider. It assumes the column type is a string.|
|[PROVIDER_COLUMN_ENTRY_TYPE_LENGTH](#provider_column_entry_type_length)|Represents a specific column supported by the provider. Like PROVIDER_COLUMN_ENTRY_LENGTH, but also allows you to specify the column's data type as well as size.|
|[PROVIDER_COLUMN_ENTRY_WSTR](#provider_column_entry_wstr)|Represents a specific column supported by the provider. It assumes the column type is a Unicode character string.|

## Schema Rowset Macros

| Name | Description |
|-|-|
|[BEGIN_SCHEMA_MAP](#begin_schema_map)|Marks the beginning of a schema map.|
|[END_SCHEMA_MAP](#end_schema_map)|Marks the end of a schema map.|
|[SCHEMA_ENTRY](#schema_entry)|Associates a GUID with a class.|

## Requirements

**Header:** atldb.h

### <a name="begin_property_set"></a> BEGIN_PROPERTY_SET

Marks the beginning of a property set in a property set map.

#### Syntax

```cpp
BEGIN_PROPERTY_SET(guid)
```

#### Parameters

*guid*<br/>
[in] The property GUID.

#### Example

See [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="begin_property_set_ex"></a> BEGIN_PROPERTY_SET_EX

Marks the beginning of a property set in a property set map.

#### Syntax

```cpp
BEGIN_PROPERTY_SET_EX(guid, flags)
```

#### Parameters

*guid*<br/>
[in] The property GUID.

*flags*<br/>
[in] UPROPSET_HIDDEN for any property sets you do not wish to expose, or UPROPSET_PASSTHROUGH for a provider exposing properties defined outside the scope of the provider.

#### Example

See [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="begin_propset_map"></a> BEGIN_PROPSET_MAP

Marks the beginning of the property set map entries.

#### Syntax

```cpp
BEGIN_PROPSET_MAP(Class)
```

#### Parameters

*Class*<br/>
[in] The class in which this property set is specified. A property set can be specified in the following OLE DB objects:

- [Data Source Objects](/previous-versions/windows/desktop/ms721278(v=vs.85))

- [Session Objects](/previous-versions/windows/desktop/ms711572(v=vs.85))

- [Commands](/previous-versions/windows/desktop/ms724608(v=vs.85))

#### Example

Here is a sample property set map:

[!code-cpp[NVC_OLEDB_Provider#3](../../data/oledb/codesnippet/cpp/begin-propset-map_1.h)]

### <a name="chain_property_set"></a> CHAIN_PROPERTY_SET

This macro chains property groups together.

#### Syntax

```cpp
CHAIN_PROPERTY_SET(ChainClass)
```

#### Parameters

*ChainClass*<br/>
[in] The name of the class to chain properties for. This is a class generated by the ATL Project Wizard that already contains a map (such as a session, command, or data source object class).

#### Remarks

You can chain a property set from another class to your own class, then access the properties directly from your class.

> [!CAUTION]
> Use this macro sparingly. Improper use can cause a consumer to fail the OLE DB conformance tests.

### <a name="end_property_set"></a> END_PROPERTY_SET

Marks the end of a property set.

#### Syntax

```cpp
END_PROPERTY_SET(guid)
```

#### Parameters

*guid*<br/>
[in] The property GUID.

#### Example

See [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="end_propset_map"></a> END_PROPSET_MAP

Marks the end of property set map entries.

#### Syntax

```cpp
END_PROPSET_MAP()
```

#### Example

See [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="property_info_entry"></a> PROPERTY_INFO_ENTRY

Represents a specific property in a property set.

#### Syntax

```cpp
PROPERTY_INFO_ENTRY(dwPropID)
```

#### Parameters

*dwPropID*<br/>
[in] A [DBPROPID](/previous-versions/windows/desktop/ms723882(v=vs.85)) value that can be used in conjunction with the property set GUID to identify a property.

#### Remarks

This macro sets the property value of type `DWORD` to a default value defined in ATLDB.H. To set the property to a value of your choosing, use [PROPERTY_INFO_ENTRY_VALUE](#property_info_entry_value). To set the `VARTYPE` and [DBPROPFLAGS](/previous-versions/windows/desktop/ms724342(v=vs.85)) for the property at the same time, use [PROPERTY_INFO_ENTRY_EX](#property_info_entry_ex).

#### Example

See [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="property_info_entry_ex"></a> PROPERTY_INFO_ENTRY_EX

Represents a specific property in a property set.

#### Syntax

```cpp
PROPERTY_INFO_ENTRY_EX(dwPropID, vt, dwFlags, value, options)
```

#### Parameters

*dwPropID*<br/>
[in] A [DBPROPID](/previous-versions/windows/desktop/ms723882(v=vs.85)) value that can be used in conjunction with the property set GUID to identify a property.

*vt*<br/>
[in] The `VARTYPE` of this property entry. (Defined in wtypes.h)

*dwFlags*<br/>
[in] A [DBPROPFLAGS](/previous-versions/windows/desktop/ms724342(v=vs.85)) value describing this property entry.

*value*<br/>
[in] The property value of type `DWORD`.

*options*<br/>
Either DBPROPOPTIONS_REQUIRED or DBPROPOPTIONS_SETIFCHEAP. Normally, a provider does not need to set *options* since it is set by the consumer.

#### Remarks

With this macro, you can directly specify the property value of type `DWORD` as well as options and flags. To merely set a property to a default value defined in ATLDB.H, use [PROPERTY_INFO_ENTRY](#property_info_entry). To set a property to a value of your choice, without setting options or flags on it, use [PROPERTY_INFO_ENTRY_VALUE](#property_info_entry_value).

#### Example

See [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="property_info_entry_value"></a> PROPERTY_INFO_ENTRY_VALUE

Represents a specific property in a property set.

#### Syntax

```cpp
PROPERTY_INFO_ENTRY_VALUE(dwPropID, value)
```

#### Parameters

*dwPropID*<br/>
[in] A [DBPROPID](/previous-versions/windows/desktop/ms723882(v=vs.85)) value that can be used in conjunction with the property set GUID to identify a property.

*value*<br/>
[in] The property value of type `DWORD`.

#### Remarks

With this macro, you can directly specify the property value of type `DWORD`. To set the property to default value defined in ATLDB.H, use [PROPERTY_INFO_ENTRY](#property_info_entry). To set the value, flags, and options for the property, use [PROPERTY_INFO_ENTRY_EX](#property_info_entry_ex).

#### Example

See [BEGIN_PROPSET_MAP](#begin_propset_map).

### <a name="begin_provider_column_map"></a> BEGIN_PROVIDER_COLUMN_MAP

Marks the beginning of the provider column map entries.

#### Syntax

```cpp
BEGIN_PROVIDER_COLUMN_MAP(theClass)
```

#### Parameters

*theClass*<br/>
[in] The name of the class this map belongs to.

#### Example

Here is a sample provider column map:

[!code-cpp[NVC_OLEDB_Provider#4](../../data/oledb/codesnippet/cpp/begin-provider-column-map_1.h)]

### <a name="end_provider_column_map"></a> END_PROVIDER_COLUMN_MAP

Marks the end of the provider column map entries.

#### Syntax

```cpp
END_PROVIDER_COLUMN_MAP()
```

#### Example

See [BEGIN_PROVIDER_COLUMN_MAP](#begin_provider_column_map).

### <a name="provider_column_entry"></a> PROVIDER_COLUMN_ENTRY

Represents a specific column supported by the provider.

#### Syntax

```cpp
PROVIDER_COLUMN_ENTRY (name, ordinal, member)
```

#### Parameters

*name*<br/>
[in] The column name.

*ordinal*<br/>
[in] The column number. Unless the column is a Bookmark column, the column number must not be 0.

*member*<br/>
[in] The member variable in `dataClass` corresponding to the column.

### <a name="provider_column_entry_fixed"></a> PROVIDER_COLUMN_ENTRY_FIXED

Represents a specific column supported by the provider.

#### Syntax

```cpp
PROVIDER_COLUMN_ENTRY_FIXED(name, ordinal, dbtype, member)
```

#### Parameters

*name*<br/>
[in] The column name.

*ordinal*<br/>
[in] The column number. Unless the column is a Bookmark column, the column number must not be 0.

*dbtype*<br/>
[in] The data type in [DBTYPE](/previous-versions/windows/desktop/ms711251(v=vs.85)).

*member*<br/>
[in] The member variable in `dataClass` that stores the data.

#### Remarks

Allows you to specify the column data type.

#### Example

See [BEGIN_PROVIDER_COLUMN_MAP](#begin_provider_column_map).

### <a name="provider_column_entry_gn"></a> PROVIDER_COLUMN_ENTRY_GN

Represents a specific column supported by the provider.

#### Syntax

```cpp
PROVIDER_COLUMN_ENTRY_GN (name, ordinal, flags, colSize, dbtype, precision, scale, guid)
```

#### Parameters

*name*<br/>
[in] The column name.

*ordinal*<br/>
[in] The column number. Unless the column is a Bookmark column, the column number must not be 0.

*flags*<br/>
[in] Specifies how data is returned. See the `dwFlags` description in [DBBINDING Structures](/previous-versions/windows/desktop/ms716845(v=vs.85)).

*colSize*<br/>
[in] The column size.

*dbtype*<br/>
[in] Indicates the data type of the value. See the `wType` description in [DBBINDING Structures](/previous-versions/windows/desktop/ms716845(v=vs.85)).

*precision*<br/>
[in] Indicates the precision to use when getting data if *dbType* is DBTYPE_NUMERIC or DBTYPE_DECIMAL. See the `bPrecision` description in [DBBINDING Structures](/previous-versions/windows/desktop/ms716845(v=vs.85)).

*scale*<br/>
[in] Indicates the scale to use when getting data if dbType is DBTYPE_NUMERIC or DBTYPE_DECIMAL. See the `bScale` description in [DBBINDING Structures](/previous-versions/windows/desktop/ms716845(v=vs.85)).

*guid*<br/>
A schema rowset GUID. See [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) in the *OLE DB Programmer's Reference* for a list of schema rowsets and their GUIDs.

#### Remarks

Allows you to specify the column's size, data type, precision, scale, and schema rowset GUID.

### <a name="provider_column_entry_length"></a> PROVIDER_COLUMN_ENTRY_LENGTH

Represents a specific column supported by the provider.

#### Syntax

```cpp
PROVIDER_COLUMN_ENTRY_LENGTH(name, ordinal, size, member)
```

#### Parameters

*name*<br/>
[in] The column name.

*ordinal*<br/>
[in] The column number. Unless the column is a Bookmark column, the column number must not be 0.

*size*<br/>
[in] The column size in bytes.

*member*<br/>
[in] The member variable in `dataClass` that stores the column data.

#### Remarks

Allows you to specify the column size.

#### Example

See [BEGIN_PROVIDER_COLUMN_MAP](#begin_provider_column_map).

### <a name="provider_column_entry_str"></a> PROVIDER_COLUMN_ENTRY_STR

Represents a specific column supported by the provider.

#### Syntax

```cpp
PROVIDER_COLUMN_ENTRY_STR(name, ordinal, member)
```

#### Parameters

*name*<br/>
[in] The column name.

*ordinal*<br/>
[in] The column number. Unless the column is a Bookmark column, the column number must not be 0.

*member*<br/>
[in] The member variable in the data class that stores the data.

#### Remarks

Use this macro when the column data is assumed to be [DBTYPE_STR](/previous-versions/windows/desktop/ms711251(v=vs.85)).

#### Example

See [BEGIN_PROVIDER_COLUMN_MAP](#begin_provider_column_map).

### <a name="provider_column_entry_type_length"></a> PROVIDER_COLUMN_ENTRY_TYPE_LENGTH

Represents a specific column supported by the provider.

#### Syntax

```cpp
PROVIDER_COLUMN_ENTRY_TYPE_LENGTH(name, ordinal, dbtype, size, member)
```

#### Parameters

*name*<br/>
[in] The column name.

*ordinal*<br/>
[in] The column number. Unless the column is a Bookmark column, the column number must not be 0.

*dbtype*<br/>
[in] The data type in [DBTYPE](/previous-versions/windows/desktop/ms711251(v=vs.85)).

*size*<br/>
[in] The column size in bytes.

*member*<br/>
[in] The member variable in the data class that stores the data.

#### Remarks

Similar to [PROVIDER_COLUMN_ENTRY_LENGTH](#provider_column_entry_length) but also allows you to specify the column's data type as well as size.

### <a name="provider_column_entry_wstr"></a> PROVIDER_COLUMN_ENTRY_WSTR

Represents a specific column supported by the provider.

#### Syntax

```cpp
PROVIDER_COLUMN_ENTRY_WSTR(name, ordinal, member)
```

#### Parameters

*name*<br/>
[in] The column name.

*ordinal*<br/>
[in] The column number. Unless the column is a Bookmark column, the column number must not be 0.

*member*<br/>
[in] The member variable in the data class that stores the data.

#### Remarks

Use this macro when the column data is a null terminated Unicode character string, [DBTYPE_WSTR](/previous-versions/windows/desktop/ms711251(v=vs.85)).

### <a name="begin_schema_map"></a> BEGIN_SCHEMA_MAP

Denotes the beginning of a schema map.

#### Syntax

```cpp
BEGIN_SCHEMA_MAP(SchemaClass);
```

#### Parameters

*SchemaClass*<br/>
The class that contains the MAP. Typically this will be the session class.

#### Remarks

See [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) in the Windows SDK for more information about schema rowsets.

### <a name="end_schema_map"></a> END_SCHEMA_MAP

Denotes the end of the schema map.

#### Syntax

```cpp
END_SCHEMA_MAP()
```

#### Remarks

For more information, see [IDBSchemaRowsetImpl Class](../../data/oledb/idbschemarowsetimpl-class.md).

### <a name="schema_entry"></a> SCHEMA_ENTRY

Associates a GUID with a class.

#### Syntax

```cpp
SCHEMA_ENTRY(guid,
   rowsetClass);
```

#### Parameters

*guid*<br/>
A schema rowset GUID. See [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) in the *OLE DB Programmer's Reference* for a list of schema rowsets and their GUIDs.

*rowsetClass*<br/>
The class that will be created to represent the schema rowset.

#### Remarks

[IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md) can then query the map for a list of GUIDs, or it can create a rowset if it is given a GUID. The schema rowset `IDBSchemaRowsetImpl` creates is similar to a standard `CRowsetImpl`-derived class, except it must provide an `Execute` method that has the following signature:

```cpp
HRESULT Execute (LONG* pcRowsAffected,
    ULONG cRestrictions,
    const VARIANT* rgRestrictions);
```

This `Execute` function populates the rowset's data. The ATL Project Wizard creates, as described in [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) in the *OLE DB Programmer's Reference*, three initial schema rowsets in the project for each of the three mandatory OLE DB schemas:

- DBSCHEMA_TABLES

- DBSCHEMA_COLUMNS

- DBSCHEMA_PROVIDER_TYPES

The wizard also adds three corresponding entries in the schema map. See [Creating an OLE DB Template Provider](../../data/oledb/creating-an-ole-db-provider.md) for more information about using the wizard to create a provider.

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)<br/>
[OLE DB Provider Templates Reference](../../data/oledb/ole-db-provider-templates-reference.md)<br/>
[Macros for OLE DB Provider Templates](../../data/oledb/macros-for-ole-db-provider-templates.md)
