---
description: "Learn more about: CDBPropIDSet Class"
title: "CDBPropIDSet Class"
ms.date: "11/04/2016"
f1_keywords: ["CDBPropIDSet", "ATL.CDBPropIDSet", "ATL::CDBPropIDSet", "CDBPropIDSet.AddPropertyID", "CDBPropIDSet::AddPropertyID", "AddPropertyID", "ATL.CDBPropIDSet.AddPropertyID", "ATL::CDBPropIDSet::AddPropertyID", "ATL::CDBPropIDSet::CDBPropIDSet", "CDBPropIDSet.CDBPropIDSet", "CDBPropIDSet::CDBPropIDSet", "ATL.CDBPropIDSet.CDBPropIDSet", "CDBPropIDSet.operator=", "ATL.CDBPropIDSet.operator=", "ATL::CDBPropIDSet::operator=", "CDBPropIDSet::operator=", "CDBPropIDSet.SetGUID", "ATL::CDBPropIDSet::SetGUID", "ATL.CDBPropIDSet.SetGUID", "CDBPropIDSet::SetGUID"]
helpviewer_keywords: ["CDBPropIDSet class", "AddPropertyID method", "CDBPropIDSet class, constructor", "operator =, property sets", "= operator, with OLE DB templates", "operator=, property sets", "SetGUID method"]
ms.assetid: 52bb806c-9581-494d-9af7-50d8a4834805
---
# CDBPropIDSet Class

Inherits from the `DBPROPIDSET` structure and adds a constructor that initializes key fields as well as the [AddPropertyID](#addpropertyid) access method.

## Syntax

```cpp
class CDBPropIDSet : public tagDBPROPIDSET
```

## Requirements

**Header:** atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[AddPropertyID](#addpropertyid)|Adds a property to the property ID set.|
|[CDBPropIDSet](#cdbpropidset)|Constructor.|
|[SetGUID](#setguid)|Sets the GUID of the property ID set.|

### Operators

| Name | Description |
|-|-|
|[operator =](#op_equal)|Assigns the contents of one property ID set to another.|

## Remarks

OLE DB consumers use `DBPROPIDSET` structures to pass an array of property IDs for which the consumer wants to get property information. The properties identified in a single [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) structure belong to one property set.

## <a name="addpropertyid"></a> CDBPropIDSet::AddPropertyID

Adds a property ID to the property ID set.

### Syntax

```cpp
bool AddPropertyID(DBPROPID propid) throw();
```

#### Parameters

*propid*<br/>
[in] The property ID to be added to the property ID set.

## <a name="cdbpropidset"></a> CDBPropIDSet::CDBPropIDSet

The constructor. Initializes the `rgProperties`, `cProperties`, and (optionally) `guidPropertySet` fields of the [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) structure.

### Syntax

```cpp
CDBPropIDSet(const GUID& guid);

CDBPropIDSet(const CDBPropIDSet& propidset);

CDBPropIDSet();
```

#### Parameters

*guid*<br/>
[in] A GUID used to initialize the `guidPropertySet` field.

*propidset*<br/>
[in] Another `CDBPropIDSet` object for copy construction.

## <a name="setguid"></a> CDBPropIDSet::SetGUID

Sets the GUID field in the `DBPROPIDSET` structure.

### Syntax

```cpp
void SetGUID(const GUID& guid) throw();
```

#### Parameters

*guid*<br/>
[in] A GUID used to set the `guidPropertySet` field of the [DBPROPIDSET](/previous-versions/windows/desktop/ms717981(v=vs.85)) structure.

### Remarks

This field can be set by the [constructor](#cdbpropidset) as well. Call this function if you use the default constructor for this class.

## <a name="op_equal"></a> CDBPropIDSet::operator =

Assigns the contents of one property ID set to another ID property set.

### Syntax

```cpp
CDBPropIDSet& operator =(CDBPropIDSet& propset) throw();
```

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
