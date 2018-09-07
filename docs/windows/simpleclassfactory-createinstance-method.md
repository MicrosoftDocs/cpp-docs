---
title: "SimpleClassFactory::CreateInstance Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::SimpleClassFactory::CreateInstance"]
dev_langs: ["C++"]
helpviewer_keywords: ["CreateInstance method"]
ms.assetid: 17b7947a-2608-49d9-b730-fef76501c9bc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SimpleClassFactory::CreateInstance Method

Creates an instance of the specified interface.

## Syntax

```cpp
STDMETHOD( CreateInstance )(
   _Inout_opt_ IUnknown* pUnkOuter,
   REFIID riid,
   _Deref_out_ void** ppvObject
);
```

### Parameters

*pUnkOuter*  
Must be **nullptr**; otherwise, the return value is CLASS_E_NOAGGREGATION.

SimpleClassFactory doesn't support aggregation. If aggregation were supported and the object being created was part of an aggregate, *pUnkOuter* would be a pointer to the controlling `IUnknown` interface of the aggregate.

*riid*  
Interface ID of the object to create.

*ppvObject*  
When this operation completes, pointer to an instance of the object specified by the *riid* parameter.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## Remarks

If `__WRL_STRICT__` is defined, an assert error is emitted if the base class specified in the class template parameter isn't derived from [RuntimeClass](../windows/runtimeclass-class.md), or isn't configured with the ClassicCom or WinRtClassicComMix [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeration value.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[SimpleClassFactory Class](../windows/simpleclassfactory-class.md)