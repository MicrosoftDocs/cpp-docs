---
title: "Allocating and Releasing Memory for a BSTR | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "bstr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BSTRs, memory allocation"
  - "memory deallocation, string memory"
  - "memory [C++], releasing"
  - "memory allocation, BSTRs"
  - "memory deallocation, BSTR memory"
  - "strings [C++], releasing"
ms.assetid: 98041e29-3442-4a02-b425-7a4a13e9cc84
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Allocating and Releasing Memory for a BSTR
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Allocating and Releasing Memory for a BSTR](https://docs.microsoft.com/cpp/atl-mfc-shared/allocating-and-releasing-memory-for-a-bstr).  
  
  
When you create `BSTR`s and pass them between COM objects, you must take care in treating the memory they use in order to avoid memory leaks. When a `BSTR` stays within an interface, you must free its memory when you are done with it. However, when a `BSTR` passes out of an interface, the receiving object takes responsibility for its memory management.  
  
 In general, the rules for allocating and releasing memory allocated for `BSTR`s are as follows:  
  
-   When you call into a function that expects a `BSTR` argument, you must allocate the memory for the `BSTR` before the call and release it afterwards. For example:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#192](../snippets/cpp/VS_Snippets_Cpp/NVC_ATLMFC_Utilities/Cpp/NVC_ATLMFC_Utilities.cpp#192)]  
  
     [!code-cpp[NVC_ATLMFC_Utilities#193](../snippets/cpp/VS_Snippets_Cpp/NVC_ATLMFC_Utilities/Cpp/NVC_ATLMFC_Utilities.cpp#193)]  
  
-   When you call into a function that returns a `BSTR`, you must free the string yourself. For example:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#194](../snippets/cpp/VS_Snippets_Cpp/NVC_ATLMFC_Utilities/Cpp/NVC_ATLMFC_Utilities.cpp#194)]  
  
     [!code-cpp[NVC_ATLMFC_Utilities#195](../snippets/cpp/VS_Snippets_Cpp/NVC_ATLMFC_Utilities/Cpp/NVC_ATLMFC_Utilities.cpp#195)]  
  
-   When you implement a function that returns a `BSTR`, allocate the string but do not free it. The receiving the function releases the memory. For example:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#196](../snippets/cpp/VS_Snippets_Cpp/NVC_ATLMFC_Utilities/Cpp/NVC_ATLMFC_Utilities.cpp#196)]  
  
## See Also  
 [Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)   
 [CStringT::AllocSysString](../atl-mfc-shared/reference/cstringt-class.md#allocsysstring)   
 [SysAllocString](http://msdn.microsoft.com/en-us/9e0437a2-9b4a-4576-88b0-5cb9d08ca29b)   
 [SysFreeString](http://msdn.microsoft.com/en-us/8f230ee3-5f6e-4cb9-a910-9c90b754dcd3)





