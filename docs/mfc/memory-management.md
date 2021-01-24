---
description: "Learn more about: Memory Management"
title: "Memory Management"
ms.date: "11/04/2016"
helpviewer_keywords: ["memory [MFC]", "MFC, memory management", "memory allocation [MFC]", "memory [MFC], managing", "memory allocation [MFC], MFC"]
ms.assetid: 934ac81b-d630-4232-88e5-ea74f7187987
---
# Memory Management

This group of articles describes how to take advantage of the general-purpose services of the Microsoft Foundation Class Library (MFC) related to memory management. Memory allocation can be divided into two main categories: frame allocations and heap allocations.

One main difference between the two allocation techniques is that with frame allocation you typically work with the actual memory block itself, while with heap allocation you are always given a pointer to the memory block. Another major difference between the two schemes is that frame objects are automatically deleted, while heap objects must be explicitly deleted by the programmer.

For non-MFC information about memory management in programs for Windows, see [Memory Management](/windows/win32/memory/memory-management) in the Windows SDK.

## What do you want to know more about

- [Frame allocation](memory-management-frame-allocation.md)

- [Heap allocation](memory-management-heap-allocation.md)

- [Allocating memory for an array](memory-management-examples.md)

- [Deallocating memory for an array from the heap](memory-management-examples.md)

- [Allocating memory for a data structure](memory-management-examples.md)

- [Allocating memory for an object](memory-management-examples.md)

- [Resizable memory blocks](memory-management-resizable-memory-blocks.md)

## See also

[Concepts](mfc-concepts.md)<br/>
[General MFC Topics](general-mfc-topics.md)
