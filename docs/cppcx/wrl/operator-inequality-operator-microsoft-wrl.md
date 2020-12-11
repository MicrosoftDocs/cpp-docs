---
description: "Learn more about: operator!= Operator (Microsoft::WRL)"
title: "operator!= Operator (Microsoft::WRL)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::operator!="]
ms.assetid: 785435da-87a6-4454-9bce-9d288a96dc26
---
# operator!= Operator (Microsoft::WRL)

Inequality operator for [ComPtr](comptr-class.md) and [ComPtrRef](comptrref-class.md) objects.

## Syntax

```cpp
WRL_NOTHROW bool operator!=(
   const ComPtr<T>& a,
   const ComPtr<U>& b
);
WRL_NOTHROW bool operator!=(
   const ComPtr<T>& a,
   decltype(__nullptr)
);
WRL_NOTHROW bool operator!=(
   decltype(__nullptr),
   const ComPtr<T>& a
);
WRL_NOTHROW bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   const Details::ComPtrRef<ComPtr<U>>& b
);
WRL_NOTHROW bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   decltype(__nullptr)
);
WRL_NOTHROW bool operator!=(
   decltype(__nullptr),
   const Details::ComPtrRef<ComPtr<T>>& a
);
WRL_NOTHROW bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   void* b
);
WRL_NOTHROW bool operator!=(
   void* b,
   const Details::ComPtrRef<ComPtr<T>>& a
);
```

### Parameters

*a*<br/>
The left object.

*b*<br/>
The right object.

## Return Value

**`true`** if the objects are not equal; otherwise, **`false`**.

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)
