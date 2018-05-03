---
title: "Memory Management: Resizable Memory Blocks | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["memory blocks [MFC], resizable", "memory [MFC], corruption", "memory allocation [MFC], memory block size", "memory blocks [MFC], allocating", "blocks [MFC], memory allocation", "resizable memory blocks [MFC]"]
ms.assetid: f0efe6f4-a3ed-4541-9195-51ec1291967a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Memory Management: Resizable Memory Blocks
The **new** and **delete** operators, described in the article [Memory Management: Examples](../mfc/memory-management-examples.md), are good for allocating and deallocating fixed-size memory blocks and objects. Occasionally, your application may need resizable memory blocks. You must use the standard C run-time library functions [malloc](../c-runtime-library/reference/malloc.md), [realloc](../c-runtime-library/reference/realloc.md), and [free](../c-runtime-library/reference/free.md) to manage resizable memory blocks on the heap.  
  
> [!IMPORTANT]
>  Mixing the **new** and **delete** operators with the resizable memory-allocation functions on the same memory block will result in corrupted memory in the Debug version of MFC. You should not use `realloc` on a memory block allocated with **new**. Likewise, you should not allocate a memory block with the **new** operator and delete it with **free**, or use the **delete** operator on a block of memory allocated with `malloc`.  
  
## See Also  
 [Memory Management: Heap Allocation](../mfc/memory-management-heap-allocation.md)

