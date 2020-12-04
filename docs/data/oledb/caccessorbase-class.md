---
description: "Learn more about: CAccessorBase Class"
title: "CAccessorBase Class"
ms.date: "11/04/2016"
f1_keywords: ["CAccessorBase", "CAccessorBase.Close", "CAccessorBase::Close", "GetHAccessor", "CAccessorBase::GetHAccessor", "CAccessorBase.GetHAccessor", "CAccessorBase::GetNumAccessors", "GetNumAccessors", "CAccessorBase.GetNumAccessors", "IsAutoAccessor", "CAccessorBase.IsAutoAccessor", "CAccessorBase::IsAutoAccessor", "CAccessorBase::ReleaseAccessors", "CAccessorBase.ReleaseAccessors", "ReleaseAccessors"]
helpviewer_keywords: ["CAccessorBase class", "Close method", "GetHAccessor method", "GetNumAccessors method", "IsAutoAccessor method", "ReleaseAccessors method"]
ms.assetid: 389b65be-11ca-4ae0-9290-60c621c4982b
---
# CAccessorBase Class

All accessors in the OLE DB Templates derive from this class. `CAccessorBase` allows one rowset to manage multiple accessors. It also provides binding for both parameters and output columns.

## Syntax

```cpp
// Replace with syntax
```

## Members

### Methods

| Name | Description |
|--|--|
| [Close](#close) | Closes the accessors. |
| [GetHAccessor](#geth) | Retrieves the accessor handle. |
| [GetNumAccessors](#getnum) | Retrieves the number of accessors created by the class. |
| [IsAutoAccessor](#isauto) | Tests whether the specified accessor is an autoaccessor. |
| [ReleaseAccessors](#release) | Releases the accessors. |

## Requirements

**Header:** atldbcli.h

## <a name="close"></a> CAccessorBase::Close

Closes the accessors.

### Syntax

```cpp
void Close();
```

### Remarks

You must call [ReleaseAccessors](#release) first.

## <a name="geth"></a> CAccessorBase::GetHAccessor

Retrieves the accessor handle of a specified accessor.

### Syntax

```cpp
HACCESSOR GetHAccessor(ULONG nAccessor) const;
```

#### Parameters

*nAccessor*<br/>
[in] The zero-offset number for the accessor.

### Return Value

The accessor handle.

## <a name="getnum"></a> CAccessorBase::GetNumAccessors

Retrieves the number of accessors created by the class.

### Syntax

```cpp
ULONG GetNumAccessors() const;
```

### Return Value

The number of accessors created by the class.

## <a name="isauto"></a> CAccessorBase::IsAutoAccessor

Returns true if data is automatically retrieved for the accessor during a Move operation.

### Syntax

```cpp
bool IsAutoAccessor(ULONG nAccessor) const;
```

#### Parameters

*nAccessor*<br/>
[in] The zero-offset number for the accessor.

### Return Value

Returns **`true`** if the accessor is an autoaccessor. Otherwise, it returns **`false`**.

## <a name="release"></a> CAccessorBase::ReleaseAccessors

Releases the accessors created by the class.

### Syntax

```cpp
HRESULT ReleaseAccessors(IUnknown* pUnk);
```

#### Parameters

*pUnk*<br/>
[in] A pointer to an `IUnknown` interface for the COM object for which the accessors have been created.

### Return Value

A standard HRESULT.

### Remarks

Called from [CAccessorRowset::Close](./caccessorrowset-class.md#close).

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[CAccessorBase Class](../../data/oledb/caccessorbase-class.md)
