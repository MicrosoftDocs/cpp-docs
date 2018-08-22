---
title: "RuntimeClass::GetTrustLevel Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClass::GetTrustLevel"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetTrustLevel method"]
ms.assetid: bd90407e-6dd7-41c3-9ea0-c402c276014a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClass::GetTrustLevel Method

Gets the trust level of the current **RuntimeClass** object.

## Syntax

```cpp
STDMETHOD(GetTrustLevel)(
    _Out_ TrustLevel* trustLvl
);
```

### Parameters

*trustLvl*  
When this operation completes, the trust level of the current **RuntimeClass** object.

## Return Value

Always S_OK.

## Remarks

An assert error is emitted if `__WRL_STRICT__` or `__WRL_FORCE_INSPECTABLE_CLASS_MACRO__` isn't defined.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See Also

[RuntimeClass Class](../windows/runtimeclass-class.md)