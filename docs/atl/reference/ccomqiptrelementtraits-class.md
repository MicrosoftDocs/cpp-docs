---
title: "CComQIPtrElementTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CComQIPtrElementTraits", "ATLCOLL/ATL::CComQIPtrElementTraits", "ATLCOLL/ATL::CComQIPtrElementTraits::INARGTYPE"]
dev_langs: ["C++"]
helpviewer_keywords: ["CComQIPtrElementTraits class"]
ms.assetid: 9df9250a-5413-4362-b133-332932a597c4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CComQIPtrElementTraits Class

This class provides methods, static functions, and typedefs useful when creating collections of COM interface pointers.

## Syntax

```
template<typename I, const IID* piid=& __uuidof(I)>  
class CComQIPtrElementTraits : 
   public CDefaultElementTraits<ATL::CComQIPtr<I, piid>>
```

#### Parameters

*I*  
A COM interface specifying the type of pointer to be stored.

*piid*  
A pointer to the IID of *I*.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CComQIPtrElementTraits::INARGTYPE](#inargtype)|The data type to use for adding elements to the collection class object.|

## Remarks

This class derives methods and provides a typedef useful when creating a collection class of [CComQIPtr](../../atl/reference/ccomqiptr-class.md) COM interface pointer objects. This class is utilized by both the [CInterfaceArray](../../atl/reference/cinterfacearray-class.md) and [CInterfaceList](../../atl/reference/cinterfacelist-class.md) classes.

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Inheritance Hierarchy

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)

`CComQIPtrElementTraits`

## Requirements

**Header:** atlcoll.h

##  <a name="inargtype"></a>  CComQIPtrElementTraits::INARGTYPE

The data type to use for adding elements to the collection class object.

```
typedef I* INARGTYPE;
```

## See Also

[CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)   
[Class Overview](../../atl/atl-class-overview.md)
