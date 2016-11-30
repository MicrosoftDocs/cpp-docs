---
title: "CString Semantics | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "semantics in Cstring"
  - "CString objects, assignment semantics"
  - "assignment statements, assigning CString objects"
ms.assetid: d4023480-526f-499a-85f6-324b4de5b85f
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CString Semantics
Even though [CString](../atl-mfc-shared/reference/cstringt-class.md) objects are dynamic objects that can grow, they act like built-in primitive types and simple classes. Each `CString` object represents a unique value. `CString` objects should be thought of as the actual strings rather than as pointers to strings.  
  
 You can assign one **CString** object to another. However, when you modify one of the two `CString` objects, the other `CString` object is not modified, as shown by the following example:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#188](../atl-mfc-shared/codesnippet/cpp/cstring-semantics_1.cpp)]  
  
 Note in the example that the two `CString` objects are considered "equal" because they represent the same character string. The `CString` class overloads the equality operator (`==`) to compare two `CString` objects based on their value (contents) rather than their identity (address).  
  
## See Also  
 [Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)

