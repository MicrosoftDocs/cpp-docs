---
description: "Learn more about: AsWeak Function"
title: "AsWeak Function"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::AsWeak"]
helpviewer_keywords: ["AsWeak function"]
ms.assetid: a6f10cfc-c1d6-4761-adb9-1a119cc99913
---
# AsWeak Function

Retrieves a weak reference to a specified instance.

## Syntax

```cpp
template<typename T>
HRESULT AsWeak(
   _In_ T* p,
   _Out_ WeakRef* pWeak
);
```

### Parameters

*T*<br/>
A pointer to the type of parameter *p*.

*p*<br/>
An instance of a type.

*pWeak*<br/>
When this operation completes, a pointer to a weak reference to parameter *p*.

## Return Value

S_OK, if this operation is successful; otherwise, an error HRESULT that indicates the cause of the failure.

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)
