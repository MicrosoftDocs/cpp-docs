---
description: "Learn more about: Using the Debug Build to Check for Memory Overwrite"
title: "Using the Debug Build to Check for Memory Overwrite"
ms.date: "11/04/2016"
helpviewer_keywords: ["memory, overwrites"]
ms.assetid: 1345eb4d-24ba-4595-b1cc-2da66986311e
---
# Using the Debug Build to Check for Memory Overwrite

To use the debug build to check for memory overwrite, you must first rebuild your project for debug. Then, go to the very beginning of your application's `InitInstance` function and add the following line:

```
afxMemDF |= checkAlwaysMemDF;
```

The debug memory allocator puts guard bytes around all memory allocations. However, these guard bytes don't do any good unless you check whether they have been changed (which would indicate a memory overwrite). Otherwise, this just provides a buffer that might, in fact, allow you to get away with a memory overwrite.

By turning on the `checkAlwaysMemDF`, you will force MFC to make a call to the `AfxCheckMemory` function every time a call to **`new`** or **`delete`** is made. If a memory overwrite was detected, it will generate a TRACE message that looks similar to the following:

```
Damage Occurred! Block=0x5533
```

If you see one of these messages, you need to step through your code to determine where the damage occurred. To isolate more precisely where the memory overwrite occurred, you can make explicit calls to `AfxCheckMemory` yourself. For example:

```
ASSERT(AfxCheckMemory());
    DoABunchOfStuff();
    ASSERT(AfxCheckMemory());
```

If the first ASSERT succeeds and the second one fails, it means that the memory overwrite must have occurred in the function between the two calls.

Depending on the nature of your application, you may find that `afxMemDF` causes your program to run too slowly to even test. The `afxMemDF` variable causes `AfxCheckMemory` to be called for every call to new and delete. In that case, you should scatter your own calls to `AfxCheckMemory`( ) as shown above, and try to isolate the memory overwrite that way.

## See also

[Fixing Release Build Problems](fixing-release-build-problems.md)
