---
title: "InvokeHelper::Invoke Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::InvokeHelper::Invoke"]
dev_langs: ["C++"]
helpviewer_keywords: ["Invoke method"]
ms.assetid: 98618815-c30e-4699-b3dd-203c91b1bf3b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# InvokeHelper::Invoke Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
STDMETHOD(
   Invoke
)();
STDMETHOD(
   Invoke
)(typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
```

### Parameters

*arg1*  
Argument 1.

*arg2*  
Argument 2.

*arg3*  
Argument 3.

*arg4*  
Argument 4.

*arg5*  
Argument 5.

*arg6*  
Argument 6.

*arg7*  
Argument 7.

*arg8*  
Argument 8.

*arg9*  
Argument 9.

## Return Value

S_OK if successful; otherwise, an HRESULT that describes the error.

## Remarks

Calls the event handler whose signature contains the specified number of arguments.

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL::Details

## See Also

[InvokeHelper Structure](../windows/invokehelper-structure.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)