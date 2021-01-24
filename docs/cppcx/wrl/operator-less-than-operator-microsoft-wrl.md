---
description: "Learn more about: operator&lt; Operator (Microsoft::WRL)"
title: "operator&lt; Operator (Microsoft::WRL)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::operator<"]
ms.assetid: bfae0e1c-1648-482b-99c2-3217d62aba46
---
# operator&lt; Operator (Microsoft::WRL)

Determines if the address of one object is less than another.

## Syntax

```cpp
template<class T, class U>
bool operator<(const ComPtr<T>& a, const ComPtr<U>& b) throw();
template<class T, class U>
bool operator<(const Details::ComPtrRef<ComPtr<T>>& a, const Details::ComPtrRef<ComPtr<U>>& b) throw();
```

### Parameters

*a*<br/>
The left object.

*b*<br/>
The right object.

## Return Value

**`true`** if the address of *a* is less than the address of *b*; otherwise, **`false`**.

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)
