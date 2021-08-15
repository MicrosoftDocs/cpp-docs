---
description: "Learn more about: IID_PPV_ARGS_Helper Function"
title: "IID_PPV_ARGS_Helper Function"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["client/IID_PPV_ARGS_Helper"]
helpviewer_keywords: ["IID_PPV_ARGS_Helper function"]
ms.assetid: afee9b23-8df1-4575-903f-e9ba748418f0
---
# IID_PPV_ARGS_Helper Function

Verifies that the type of the specified argument derives from the `IUnknown` interface.

> [!IMPORTANT]
> This template specialization supports the WRL infrastructure and is not intended to be used directly from your code. Use [IID_PPV_ARGS](/windows/win32/api/combaseapi/nf-combaseapi-iid_ppv_args) instead.

## Syntax

```cpp
template<typename T>
void** IID_PPV_ARGS_Helper(
   _Inout_ Microsoft::WRL::Details::ComPtrRef<T> pp
);
```

### Parameters

*T*<br/>
The type of argument *pp*.

*pp*<br/>
A doubly-indirect pointer.

## Return Value

Argument *pp* cast to a pointer-to-a-pointer to **`void`**.

## Remarks

A compile-time error is generated if the template parameter *T* doesn't derive from `IUnknown`.

## Requirements

**Header:** client.h
