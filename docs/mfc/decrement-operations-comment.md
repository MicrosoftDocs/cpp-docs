---
title: "-- Operations Comment | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Operations comment in MFC source files"
  - "comments, MFC"
  - "MFC source files, Operations comments"
ms.assetid: f3bff48d-26be-4db6-8435-9e4d079838c9
caps.latest.revision: 9
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
# // Operations Comment
The `// Operations` section of an MFC class declaration contains member functions that you can call on the object to make it do things or perform actions (perform operations). These functions are typically non-**const** because they usually have side effects. They may be virtual or nonvirtual depending on the needs of the class. Typically, these members are public.  
  
 In the sample listing from class `CStdioFile`, in [An Example of the Comments](../mfc/an-example-of-the-comments.md), the list includes two member functions under this comment: `ReadString` and `WriteString`.  
  
 As with attributes, operations can be further subdivided.  
  
## See Also  
 [Using the MFC Source Files](../mfc/using-the-mfc-source-files.md)   
 [An Example of the Comments](../mfc/an-example-of-the-comments.md)   
 [// Implementation Comment](../mfc/decrement-implementation-comment.md)   
 [// Constructors Comment](../mfc/decrement-constructors-comment.md)   
 [// Attributes Comment](../mfc/decrement-attributes-comment.md)   
 [// Overridables Comment](../mfc/decrement-overridables-comment.md)

