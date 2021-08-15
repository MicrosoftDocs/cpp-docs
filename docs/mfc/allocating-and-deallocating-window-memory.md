---
description: "Learn more about: Allocating and Deallocating Window Memory"
title: "Allocating and Deallocating Window Memory"
ms.date: "11/04/2016"
helpviewer_keywords: ["memory allocation, window objects", "memory deallocation", "storage for window objects [MFC]", "memory deallocation, window memory", "window objects [MFC], deallocating memory for", "storage for window objects [MFC], allocating"]
ms.assetid: 7c962539-8461-4846-b5ca-fe3b15c313dc
---
# Allocating and Deallocating Window Memory

Do not use the C++ **`delete`** operator to destroy a frame window or view. Instead, call the `CWnd` member function `DestroyWindow`. Frame windows, therefore, should be allocated on the heap with operator **`new`**. Be careful when allocating frame windows on the stack frame or globally. Other windows should be allocated on the stack frame whenever possible.

## What do you want to know more about

- [Creating windows](creating-windows.md)

- [Window destruction sequence](window-destruction-sequence.md)

- [Detaching a CWnd from its HWND](detaching-a-cwnd-from-its-hwnd.md)

## See also

[Destroying Window Objects](destroying-window-objects.md)
