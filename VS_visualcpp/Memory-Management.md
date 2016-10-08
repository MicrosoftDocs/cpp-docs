---
title: "Memory Management"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 934ac81b-d630-4232-88e5-ea74f7187987
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Memory Management
This group of articles describes how to take advantage of the general-purpose services of the Microsoft Foundation Class Library (MFC) related to memory management. Memory allocation can be divided into two main categories: frame allocations and heap allocations.  
  
 One main difference between the two allocation techniques is that with frame allocation you typically work with the actual memory block itself, while with heap allocation you are always given a pointer to the memory block. Another major difference between the two schemes is that frame objects are automatically deleted, while heap objects must be explicitly deleted by the programmer.  
  
 For non-MFC information about memory management in programs for Windows, see [Memory Management](http://msdn.microsoft.com/library/windows/desktop/aa366779) in the Windows SDK.  
  
## What do you want to know more about?  
  
-   [Frame allocation](../VS_visualcpp/Memory-Management--Frame-Allocation.md)  
  
-   [Heap allocation](../VS_visualcpp/Memory-Management--Heap-Allocation.md)  
  
-   [Allocating memory for an array](../VS_visualcpp/Memory-Management--Examples.md)  
  
-   [Deallocating memory for an array from the heap](../VS_visualcpp/Memory-Management--Examples.md)  
  
-   [Allocating memory for a data structure](../VS_visualcpp/Memory-Management--Examples.md)  
  
-   [Allocating memory for an object](../VS_visualcpp/Memory-Management--Examples.md)  
  
-   [Resizable memory blocks](../VS_visualcpp/Memory-Management--Resizable-Memory-Blocks.md)  
  
## See Also  
 [Concepts](../VS_visualcpp/MFC-Concepts.md)   
 [General MFC Topics](../VS_visualcpp/General-MFC-Topics.md)