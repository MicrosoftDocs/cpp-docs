---
title: "DontUseNewUseMake::operator new Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::DontUseNewUseMake::operator new"]
dev_langs: ["C++"]
helpviewer_keywords: ["operator new operator"]
ms.assetid: 6af07a0d-2271-430c-9d9b-5a4223fed049
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# DontUseNewUseMake::operator new Operator

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp  
void* operator new(  
   size_t,  
   _In_ void* placement  
);  
```

### Parameters

*__unnamed0*  
An unnamed parameter that specifies the number of bytes of memory to allocate.

*placement*  
The type to be allocated.

## Return Value

Provides a way to pass additional arguments if you overload operator **new**.

## Remarks

Overloads operator **new** and prevents it from being used in `RuntimeClass`.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[DontUseNewUseMake Class](../windows/dontusenewusemake-class.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)