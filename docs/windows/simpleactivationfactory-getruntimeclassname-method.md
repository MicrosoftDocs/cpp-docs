---
title: "SimpleActivationFactory::GetRuntimeClassName Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::SimpleActivationFactory::GetRuntimeClassName"]
dev_langs: ["C++"]
ms.assetid: 3aa07487-9a42-46f8-8893-37ba6315e50b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SimpleActivationFactory::GetRuntimeClassName Method

Gets the runtime class name of an instance of the class specified by the `Base` class template parameter.

## Syntax

```cpp
STDMETHOD( GetRuntimeClassName )(
    _Out_ HSTRING* runtimeName
);
```

### Parameters

*runtimeName*  
When this operation completes, the runtime class name.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## Remarks

If &#95;&#95;WRL_STRICT&#95;&#95; is defined, an assert error is emitted if the class specified by the `Base` class template parameter isn't derived from [RuntimeClass](../windows/runtimeclass-class.md), or isn't configured with the WinRt or WinRtClassicComMix [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeration value.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also
 [SimpleActivationFactory Class](../windows/simpleactivationfactory-class.md)