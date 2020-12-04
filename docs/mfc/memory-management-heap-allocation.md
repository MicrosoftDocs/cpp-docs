---
description: "Learn more about: Memory Management: Heap Allocation"
title: "Memory Management: Heap Allocation"
ms.date: "11/04/2016"
helpviewer_keywords: ["memory [MFC], detecting leaks", "delete operator [MFC], using with debug MFC", "heap allocation [MFC], described", "memory allocation [MFC], heap memory", "memory leaks [MFC], detecting", "new operator [MFC], using with debug MFC", "heap allocation [MFC]", "detecting memory leaks [MFC]"]
ms.assetid: a5d949c6-1b79-476e-9c66-513a558203d9
---
# Memory Management: Heap Allocation

The heap is reserved for the memory allocation needs of the program. It is an area apart from the program code and the stack. Typical C programs use the functions **malloc** and **free** to allocate and deallocate heap memory. The Debug version of MFC provides modified versions of the C++ built-in operators **`new`** and **`delete`** to allocate and deallocate objects in heap memory.

When you use **`new`** and **`delete`** instead of **malloc** and **free**, you are able to take advantage of the class library's memory-management debugging enhancements, which can be useful in detecting memory leaks. When you build your program with the Release version of MFC, the standard versions of the **`new`** and **`delete`** operators provide an efficient way to allocate and deallocate memory (the Release version of MFC does not provide modified versions of these operators).

Note that the total size of objects allocated on the heap is limited only by your system's available virtual memory.

## See also

[Memory Management](memory-management.md)
