---
title: "InterfaceTraits Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::InterfaceTraits"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""InterfaceTraits structure""]"]
ms.assetid: ede0c284-19a7-4892-9738-ff3da4923d0a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# InterfaceTraits Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<
   typename I0
>
struct __declspec(novtable) InterfaceTraits;
template<typename CloakedType>
struct __declspec(novtable) InterfaceTraits<CloakedIid<CloakedType>>;

template<>
struct __declspec(novtable) InterfaceTraits<Nil>;
```

### Parameters

*I0*  
The name of an interface.

*CloakedType*  
For `RuntimeClass`, `Implements` and `ChainInterfaces`, an interface that won't be in the list of supported interface IDs.

## Remarks

Implements common characteristics of an interface.

The second template is a specialization for cloaked interfaces. The third template is a specialization for Nil parameters.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`Base`|A synonym for the *I0* template parameter.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[InterfaceTraits::CanCastTo Method](../windows/interfacetraits-cancastto-method.md)|Indicates whether the specified pointer can be cast to a pointer to `Base`.|
|[InterfaceTraits::CastToBase Method](../windows/interfacetraits-casttobase-method.md)|Casts the specified pointer to a pointer to `Base`.|
|[InterfaceTraits::CastToUnknown Method](../windows/interfacetraits-casttounknown-method.md)|Casts the specified pointer to a pointer to `IUnknown`.|
|[InterfaceTraits::FillArrayWithIid Method](../windows/interfacetraits-fillarraywithiid-method.md)|Assigns the interface ID of `Base` to the array element specified by the index argument.|
|[InterfaceTraits::Verify Method](../windows/interfacetraits-verify-method.md)|Verifies that `Base` is properly derived.|

### Public Constants

|Name|Description|
|----------|-----------------|
|[InterfaceTraits::IidCount Constant](../windows/interfacetraits-iidcount-constant.md)|Holds the number of interface IDs associated with the current **InterfaceTraits** object.|

## Inheritance Hierarchy

`InterfaceTraits`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)