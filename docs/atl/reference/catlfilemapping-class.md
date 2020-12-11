---
description: "Learn more about: CAtlFileMapping Class"
title: "CAtlFileMapping Class"
ms.date: "11/04/2016"
f1_keywords: ["CAtlFileMapping", "atlfile/ATL::CAtlFileMapping"]
helpviewer_keywords: ["CAtlFileMapping class"]
ms.assetid: 899fc058-e05e-48b5-aca9-340403bb9e26
---
# CAtlFileMapping Class

This class represents a memory-mapped file, adding a cast operator to the methods of [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
template <typename T = char>
class CAtlFileMapping : public CAtlFileMappingBase
```

### Parameters

*T*<br/>
The type of data used for the cast operator.

## Members

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAtlFileMapping::operator T*](#operator_t_star)|Allows implicit conversion of `CAtlFileMapping` objects to `T*`.|

## Remarks

This class adds a single cast operator to allow implicit conversion of `CAtlFileMapping` objects to `T*`. Other members are supplied by the base class, [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).

## Inheritance Hierarchy

[CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)

`CAtlFileMapping`

## Requirements

**Header:** atlfile.h

## <a name="operator_t_star"></a> CAtlFileMapping::operator T*

Allows implicit conversion of `CAtlFileMapping` objects to `T*`.

```cpp
operator T*() const throw();
```

### Return Value

Returns a `T*` pointer to the start of the memory-mapped file.

### Remarks

Calls [CAtlFileMappingBase::GetData](../../atl/reference/catlfilemappingbase-class.md#getdata) and reinterprets the returned pointer as a `T*` where *T* is the type used as the template parameter of this class.

## See also

[CAtlFileMappingBase Class](../../atl/reference/catlfilemappingbase-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
