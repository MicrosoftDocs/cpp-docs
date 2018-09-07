---
title: "Memory Management | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["memory [MFC]", "MFC, memory management", "memory allocation [MFC]", "memory [MFC], managing", "memory allocation [MFC], MFC"]
ms.assetid: 934ac81b-d630-4232-88e5-ea74f7187987
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Memory Management
This group of articles describes how to take advantage of the general-purpose services of the Microsoft Foundation Class Library (MFC) related to memory management. Memory allocation can be divided into two main categories: frame allocations and heap allocations.  
  
 One main difference between the two allocation techniques is that with frame allocation you typically work with the actual memory block itself, while with heap allocation you are always given a pointer to the memory block. Another major difference between the two schemes is that frame objects are automatically deleted, while heap objects must be explicitly deleted by the programmer.  
  
 For non-MFC information about memory management in programs for Windows, see [Memory Management](https://msdn.microsoft.com/library/windows/desktop/aa366779) in the Windows SDK.  
  
## What do you want to know more about  
  
-   [Frame allocation](../mfc/memory-management-frame-allocation.md)  
  
-   [Heap allocation](../mfc/memory-management-heap-allocation.md)  
  
-   [Allocating memory for an array](../mfc/memory-management-examples.md)  
  
-   [Deallocating memory for an array from the heap](../mfc/memory-management-examples.md)  
  
-   [Allocating memory for a data structure](../mfc/memory-management-examples.md)  
  
-   [Allocating memory for an object](../mfc/memory-management-examples.md)  
  
-   [Resizable memory blocks](../mfc/memory-management-resizable-memory-blocks.md)  
  
## See Also  
 [Concepts](../mfc/mfc-concepts.md)   
 [General MFC Topics](../mfc/general-mfc-topics.md)

