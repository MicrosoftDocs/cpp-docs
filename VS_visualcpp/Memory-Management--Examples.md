---
title: "Memory Management: Examples"
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
ms.assetid: f10240f8-b698-4c83-9288-97a54318930b
caps.latest.revision: 10
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
# Memory Management: Examples
This article describes how MFC performs frame allocations and heap allocations for each of the three typical kinds of memory allocations:  
  
-   [An array of bytes](#_core_allocation_of_an_array_of_bytes)  
  
-   [A data structure](#_core_allocation_of_a_data_structure)  
  
-   [An object](#_core_allocation_of_an_object)  
  
##  <a name="_core_allocation_of_an_array_of_bytes"></a> Allocation of an Array of Bytes  
  
#### To allocate an array of bytes on the frame  
  
1.  Define the array as shown by the following code. The array is automatically deleted and its memory reclaimed when the array variable exits its scope.  
  
     [!CODE [NVC_MFC_Utilities#1](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#1)]  
  
#### To allocate an array of bytes (or any primitive data type) on the heap  
  
1.  Use the **new** operator with the array syntax shown in this example:  
  
     [!CODE [NVC_MFC_Utilities#2](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#2)]  
  
#### To deallocate the arrays from the heap  
  
1.  Use the **delete** operator as follows:  
  
     [!CODE [NVC_MFC_Utilities#3](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#3)]  
  
##  <a name="_core_allocation_of_a_data_structure"></a> Allocation of a Data Structure  
  
#### To allocate a data structure on the frame  
  
1.  Define the structure variable as follows:  
  
     [!CODE [NVC_MFC_Utilities#4](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#4)]  
  
     The memory occupied by the structure is reclaimed when it exits its scope.  
  
#### To allocate data structures on the heap  
  
1.  Use **new** to allocate data structures on the heap and **delete** to deallocate them, as shown by the following examples:  
  
     [!CODE [NVC_MFC_Utilities#5](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#5)]  
  
##  <a name="_core_allocation_of_an_object"></a> Allocation of an Object  
  
#### To allocate an object on the frame  
  
1.  Declare the object as follows:  
  
     [!CODE [NVC_MFC_Utilities#6](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#6)]  
  
     The destructor for the object is automatically invoked when the object exits its scope.  
  
#### To allocate an object on the heap  
  
1.  Use the **new** operator, which returns a pointer to the object, to allocate objects on the heap. Use the **delete** operator to delete them.  
  
     The following heap and frame examples assume that the `CPerson` constructor takes no arguments.  
  
     [!CODE [NVC_MFC_Utilities#7](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#7)]  
  
     If the argument for the `CPerson` constructor is a pointer to `char`, the statement for frame allocation is:  
  
     [!CODE [NVC_MFC_Utilities#8](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#8)]  
  
     The statement for heap allocation is:  
  
     [!CODE [NVC_MFC_Utilities#9](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#9)]  
  
## See Also  
 [Memory Management: Heap Allocation](../VS_visualcpp/Memory-Management--Heap-Allocation.md)