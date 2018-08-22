---
title: "RaiseException Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::RaiseException"]
dev_langs: ["C++"]
helpviewer_keywords: ["RaiseException function"]
ms.assetid: f9c74f6d-112a-4d2e-900f-622f795d5dbf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RaiseException Function

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp  
inline void __declspec(noreturn)   RaiseException(  
      HRESULT hr,   
      DWORD dwExceptionFlags = EXCEPTION_NONCONTINUABLE);  
```

### Parameters

*hr*  
The exception code of the exception being raised; that is, the HRESULT of a failed operation.

*dwExceptionFlags*  
A flag that indicates a continuable exception (the flag value is zero), or noncontinuable exception (flag value is nonzero). By default, the exception is noncontinuable.

## Remarks

Raises an exception in the calling thread.

For more information, see the Windows `RaiseException` function.

## Requirements

**Header:** internal.h

**Namespace:** Microsoft::WRL::Details

## See Also

[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)