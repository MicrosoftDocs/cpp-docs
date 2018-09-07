---
title: "CDefaultCompareTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CDefaultCompareTraits", "ATLCOLL/ATL::CDefaultCompareTraits", "ATLCOLL/ATL::CDefaultCompareTraits::CompareElements", "ATLCOLL/ATL::CDefaultCompareTraits::CompareElementsOrdered"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDefaultCompareTraits class"]
ms.assetid: a17e2740-e7b4-48f2-aeb7-c80ce84b63f7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CDefaultCompareTraits Class

This class provides default element comparison functions.

## Syntax

```
template<typename T>  
class CDefaultCompareTraits
```

#### Parameters

*T*  
The type of data to be stored in the collection.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDefaultCompareTraits::CompareElements](#compareelements)|(Static) Call this function to compare two elements for equality.|
|[CDefaultCompareTraits::CompareElementsOrdered](#compareelementsordered)|(Static) Call this function to determine the greater and lesser element.|

## Remarks

This class contains two static functions for comparing elements stored in a collection class object. This class is utilized by the [CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md).

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Requirements

**Header:** atlcoll.h

##  <a name="compareelements"></a>  CDefaultCompareTraits::CompareElements

Call this function to compare two elements for equality.

```
static bool CompareElements(const T& element1, const T& element2);
```

### Parameters

*element1*  
The first element.

*element2*  
The second element.

### Return Value

Returns true if the elements are equal, false otherwise.

### Remarks

The default implementation of this function is the equality (**==**) operator. For objects other than simple data types, this function may need to be overridden.

##  <a name="compareelementsordered"></a>  CDefaultCompareTraits::CompareElementsOrdered

Call this function to determine the greater and lesser element.

```
static int CompareElementsOrdered(const T& element1, const T& element2);
```

### Parameters

*element1*  
The first element.

*element2*  
The second element.

### Return Value

Returns an integer based on the following table:

|Condition|Return value|
|---------------|------------------|
|*element1* < *element2*|<0|
|*element1* == *element2*|0|
|*element1* > *element2*|>0|

### Remarks

The default implementation of this function uses the **==**, **\<**, and **>** operators. For objects other than simple data types, this function may need to be overridden.

## See Also

[Class Overview](../../atl/atl-class-overview.md)
