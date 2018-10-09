---
title: "CInterfaceArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CInterfaceArray", "ATLCOLL/ATL::CInterfaceArray", "ATLCOLL/ATL::CInterfaceArray::CInterfaceArray"]
dev_langs: ["C++"]
helpviewer_keywords: ["CInterfaceArray class"]
ms.assetid: 1f29cf66-a086-4a7b-b6a8-64f73da39f79
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CInterfaceArray Class

This class provides methods useful when constructing an array of COM interface pointers.

## Syntax

```
template <class I, const IID* piid=& __uuidof(I)>
class CInterfaceArray : 
   public CAtlArray<ATL::CComQIPtr<I, piid>,
                    CComQIPtrElementTraits<I, piid>>
```

#### Parameters

*I*<br/>
A COM interface specifying the type of pointer to be stored.

*piid*<br/>
A pointer to the IID of *I*.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CInterfaceArray::CInterfaceArray](#cinterfacearray)|The constructor for the interface array.|

## Remarks

This class provides a constructor and derived methods for creating an array of COM interface pointers. Use [CInterfaceList](../../atl/reference/cinterfacelist-class.md) when a list is required.

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Inheritance Hierarchy

`CAtlArray`

`CInterfaceArray`

## Requirements

**Header:** atlcoll.h

##  <a name="cinterfacearray"></a>  CInterfaceArray::CInterfaceArray

The constructor.

```
CInterfaceArray() throw();
```

### Remarks

Initializes the smart pointer array.

## See Also

[CAtlArray Class](../../atl/reference/catlarray-class.md)<br/>
[CComQIPtr Class](../../atl/reference/ccomqiptr-class.md)<br/>
[CComQIPtrElementTraits Class](../../atl/reference/ccomqiptrelementtraits-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
