---
title: "Allocating and Releasing Memory for a BSTR"
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
ms.topic: reference
ms.assetid: 98041e29-3442-4a02-b425-7a4a13e9cc84
caps.latest.revision: 11
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
# Allocating and Releasing Memory for a BSTR
When you create `BSTR`s and pass them between COM objects, you must take care in treating the memory they use in order to avoid memory leaks. When a `BSTR` stays within an interface, you must free its memory when you are done with it. However, when a `BSTR` passes out of an interface, the receiving object takes responsibility for its memory management.  
  
 In general, the rules for allocating and releasing memory allocated for `BSTR`s are as follows:  
  
-   When you call into a function that expects a `BSTR` argument, you must allocate the memory for the `BSTR` before the call and release it afterwards. For example:  
  
     [!CODE [NVC_ATLMFC_Utilities#192](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#192)]  
  
     [!CODE [NVC_ATLMFC_Utilities#193](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#193)]  
  
-   When you call into a function that returns a `BSTR`, you must free the string yourself. For example:  
  
     [!CODE [NVC_ATLMFC_Utilities#194](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#194)]  
  
     [!CODE [NVC_ATLMFC_Utilities#195](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#195)]  
  
-   When you implement a function that returns a `BSTR`, allocate the string but do not free it. The receiving the function releases the memory. For example:  
  
     [!CODE [NVC_ATLMFC_Utilities#196](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#196)]  
  
## See Also  
 [Strings (ATL/MFC)](../VS_visualcpp/Strings--ATL-MFC-.md)   
 [CStringT::AllocSysString](../Topic/CStringT::AllocSysString.md)   
 [SysAllocString](assetId:///9e0437a2-9b4a-4576-88b0-5cb9d08ca29b)   
 [SysFreeString](assetId:///8f230ee3-5f6e-4cb9-a910-9c90b754dcd3)