---
description: "Learn more about: ATL Global Variables"
title: "ATL Global Variables"
ms.date: "12/06/2017"
f1_keywords: ["ATLBASE/_pAtlModule"]
helpviewer_keywords: ["global variables, ATL", "_pAtlModule"]
---
# ATL Global Variables

[!INCLUDE[product-lifecycle-status](../includes/lifecycle-note.md)]

## _pAtlModule

A global variable storing a pointer to the current module.

```cpp
__declspec(selectany) CAtlModule * _pAtlModule
```

### Remarks

Methods on this global variable can be used to provide the functionality that the (now obsolete) class CComModule provided in Visual C++ 6.0.

### Example

```cpp
LONG lLocks = _pAtlModule->GetLockCount();
```

### Requirements

**Header:** atlbase.h
