---
description: "Learn more about: TerminateMap Function"
title: "TerminateMap Function"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Details::TerminateMap"]
helpviewer_keywords: ["TerminateMap function"]
ms.assetid: 1c314a61-da5d-49bb-ac44-c34ee3c23b66
---
# TerminateMap Function

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
inline bool TerminateMap(
   _In_ ModuleBase *module,
   _In_opt_z_ const wchar_t *serverName,
    bool forceTerminate) throw()
```

### Parameters

*module*<br/>
A [module](module-class.md).

*serverName*<br/>
The name of a subset of class factories in the module specified by parameter *module*.

*forceTerminate*<br/>
**`true`** to terminate the class factories regardless of they are active; **`false`** to not terminate the class factories if any factory is active.

## Return Value

**`true`** if all class factories were terminated; otherwise, **`false`**.

## Remarks

Shuts down the class factories in the specified module.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL::Details

## See also

[Microsoft::WRL::Details Namespace](microsoft-wrl-details-namespace.md)
