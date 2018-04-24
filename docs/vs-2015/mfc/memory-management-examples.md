---
title: "Memory Management: Examples | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "objects [C++], memory allocation"
  - "data structures [C++]"
  - "arrays [C++], allocating resources"
  - "objects [C++], allocating memory"
  - "data structures [C++], allocating memory"
  - "examples [MFC], memory allocation"
  - "heap allocation, examples"
  - "memory allocation [C++], arrays"
  - "MFC [C++], memory management"
  - "struct memory allocation"
  - "types [C++], memory allocation"
  - "memory allocation [C++], objects"
  - "memory allocation [C++], examples"
  - "arrays [C++], memory management"
  - "frame allocation"
  - "memory allocation [C++], data structures"
ms.assetid: f10240f8-b698-4c83-9288-97a54318930b
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Memory Management: Examples
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Memory Management: Examples](https://docs.microsoft.com/cpp/mfc/memory-management-examples).  
  
  
This article describes how MFC performs frame allocations and heap allocations for each of the three typical kinds of memory allocations:  
  
-   [An array of bytes](#_core_allocation_of_an_array_of_bytes)  
  
-   [A data structure](#_core_allocation_of_a_data_structure)  
  
-   [An object](#_core_allocation_of_an_object)  
  
##  <a name="_core_allocation_of_an_array_of_bytes"></a> Allocation of an Array of Bytes  
  
#### To allocate an array of bytes on the frame  
  
1.  Define the array as shown by the following code. The array is automatically deleted and its memory reclaimed when the array variable exits its scope.  
  
     [!code-cpp[NVC_MFC_Utilities#1](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_Utilities/Cpp/NVC_MFC_Utilities.cpp#1)]  
  
#### To allocate an array of bytes (or any primitive data type) on the heap  
  
1.  Use the **new** operator with the array syntax shown in this example:  
  
     [!code-cpp[NVC_MFC_Utilities#2](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_Utilities/Cpp/NVC_MFC_Utilities.cpp#2)]  
  
#### To deallocate the arrays from the heap  
  
1.  Use the **delete** operator as follows:  
  
     [!code-cpp[NVC_MFC_Utilities#3](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_Utilities/Cpp/NVC_MFC_Utilities.cpp#3)]  
  
##  <a name="_core_allocation_of_a_data_structure"></a> Allocation of a Data Structure  
  
#### To allocate a data structure on the frame  
  
1.  Define the structure variable as follows:  
  
     [!code-cpp[NVC_MFC_Utilities#4](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_Utilities/Cpp/NVC_MFC_Utilities.cpp#4)]  
  
     The memory occupied by the structure is reclaimed when it exits its scope.  
  
#### To allocate data structures on the heap  
  
1.  Use **new** to allocate data structures on the heap and **delete** to deallocate them, as shown by the following examples:  
  
     [!code-cpp[NVC_MFC_Utilities#5](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_Utilities/Cpp/NVC_MFC_Utilities.cpp#5)]  
  
##  <a name="_core_allocation_of_an_object"></a> Allocation of an Object  
  
#### To allocate an object on the frame  
  
1.  Declare the object as follows:  
  
     [!code-cpp[NVC_MFC_Utilities#6](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_Utilities/Cpp/NVC_MFC_Utilities.cpp#6)]  
  
     The destructor for the object is automatically invoked when the object exits its scope.  
  
#### To allocate an object on the heap  
  
1.  Use the **new** operator, which returns a pointer to the object, to allocate objects on the heap. Use the **delete** operator to delete them.  
  
     The following heap and frame examples assume that the `CPerson` constructor takes no arguments.  
  
     [!code-cpp[NVC_MFC_Utilities#7](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_Utilities/Cpp/NVC_MFC_Utilities.cpp#7)]  
  
     If the argument for the `CPerson` constructor is a pointer to `char`, the statement for frame allocation is:  
  
     [!code-cpp[NVC_MFC_Utilities#8](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_Utilities/Cpp/NVC_MFC_Utilities.cpp#8)]  
  
     The statement for heap allocation is:  
  
     [!code-cpp[NVC_MFC_Utilities#9](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_Utilities/Cpp/NVC_MFC_Utilities.cpp#9)]  
  
## See Also  
 [Memory Management: Heap Allocation](../mfc/memory-management-heap-allocation.md)





