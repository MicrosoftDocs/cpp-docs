---
title: "WeakRef::WeakRef Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::WeakRef::WeakRef"]
dev_langs: ["C++"]
helpviewer_keywords: ["WeakRef, constructor"]
ms.assetid: 589f87e0-8dcc-4e82-aab2-f2f66f1ec47c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# WeakRef::WeakRef Constructor

Initializes a new instance of the **WeakRef** class.

## Syntax

```cpp  
WeakRef();  
WeakRef(  
   decltype(__nullptr)  
);

WeakRef(  
   _In_opt_ IWeakReference* ptr  
);

WeakRef(  
   const ComPtr<IWeakReference>& ptr  
);

WeakRef(  
   const WeakRef& ptr  
);

WeakRef(  
   _Inout_ WeakRef&& ptr  
);  
```

### Parameters

*ptr*  
A pointer, reference, or rvalue-reference to an existing object that initializes the current **WeakRef** object.

## Remarks

The first constructor initializes an empty **WeakRef** object. The second constructor initializes a **WeakRef** object from a pointer to the `IWeakReference` interface. The third constructor initializes a **WeakRef** object from a reference to a `ComPtr<IWeakReference>` object. The fourth and fifth constructors initializes a **WeakRef** object from another **WeakRef** object.

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL

## See Also

[WeakRef Class](../windows/weakref-class.md)