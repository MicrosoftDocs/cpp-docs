---
description: "Learn more about: Checking for Memory Overwrites"
title: "Checking for Memory Overwrites"
ms.date: "11/04/2016"
helpviewer_keywords: ["memory, overwrites"]
ms.assetid: da7c5d77-a267-415f-a8ab-ee5ce5bfc286
---
# Checking for Memory Overwrites

If you get an access violation on a call to a heap manipulation function, it is possible that your program has corrupted the heap. A common symptom of this situation would be:

```
Access Violation in _searchseg
```

The [_heapchk](../c-runtime-library/reference/heapchk.md) function is available in both debug and release builds (Windows NT only) for verifying the integrity of the run time library heap. You can use `_heapchk` in much the same way as the `AfxCheckMemory` function to isolate a heap overwrite, for example:

```
if(_heapchk()!=_HEAPOK)
   DebugBreak();
```

If this function ever fails, you need to isolate at which point the heap was corrupted.

## See also

[Fixing Release Build Problems](fixing-release-build-problems.md)
