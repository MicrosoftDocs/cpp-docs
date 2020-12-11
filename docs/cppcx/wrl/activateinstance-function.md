---
description: "Learn more about: ActivateInstance Function"
title: "ActivateInstance Function"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["client/Windows::Foundation::ActivateInstance", "client/ABI::Windows::Foundation::ActivateInstance"]
helpviewer_keywords: ["ActivateInstance function"]
ms.assetid: 8cfd1dd9-5fda-4cc2-acf8-d40e783b3875
---
# ActivateInstance Function

Registers and retrieves an instance of a specified type defined in a specified class ID.

## Syntax

```cpp
template<typename T>
inline HRESULT ActivateInstance(
   _In_ HSTRING activatableClassId,
   _Out_ Microsoft::WRL::Details::ComPtrRef<T> instance
);
```

### Parameters

*T*<br/>
A type to activate.

*activatableClassId*<br/>
The name of the class ID that defines parameter *T*.

*instance*<br/>
When this operation completes, a reference to an instance of *T*.

## Return Value

S_OK if successful; otherwise, an error HRESULT that indicates the cause of the error.

## Requirements

**Header:** client.h

**Namespace:** Windows::Foundation

## See also

[Windows::Foundation Namespace](windows-foundation-namespace.md)
