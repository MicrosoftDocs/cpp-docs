---
title: "CInterfaceList Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CInterfaceList", "ATLCOLL/ATL::CInterfaceList", "ATLCOLL/ATL::CInterfaceList::CInterfaceList"]
dev_langs: ["C++"]
helpviewer_keywords: ["CInterfaceList class"]
ms.assetid: 2077764d-25e5-4b3d-96c8-08a287bbcd25
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CInterfaceList Class

This class provides methods useful when constructing a list of COM interface pointers.

## Syntax

```
template<class I, const IID* piid =& __uuidof(I)>  
class CInterfaceList 
   : public CAtlList<ATL::CComQIPtr<I, piid>,
                     CComQIPtrElementTraits<I, piid>>
```

#### Parameters

*I*  
A COM interface specifying the type of pointer to be stored.

*piid*  
A pointer to the IID of *I*.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CInterfaceList::CInterfaceList](#cinterfacelist)|The constructor for the interface list.|

## Remarks

This class provides a constructor and derived methods for creating a list of COM interface pointers. Use [CInterfaceArray](../../atl/reference/cinterfacearray-class.md) when an array is required.

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Inheritance Hierarchy

[CAtlList](../../atl/reference/catllist-class.md)

`CInterfaceList`

## Requirements

**Header:** atlcoll.h

##  <a name="cinterfacelist"></a>  CInterfaceList::CInterfaceList

The constructor for the interface list.

```
CInterfaceList(UINT nBlockSize = 10) throw();
```

### Parameters

*nBlockSize*  
The block size, with a default of 10.

### Remarks

The block size is a measure of the amount of memory allocated when a new element is required. Larger block sizes reduce calls to memory allocation routines, but use more resources.

## See Also

[CAtlList Class](../../atl/reference/catllist-class.md)   
[CComQIPtr Class](../../atl/reference/ccomqiptr-class.md)   
[CComQIPtrElementTraits Class](../../atl/reference/ccomqiptrelementtraits-class.md)   
[Class Overview](../../atl/atl-class-overview.md)
