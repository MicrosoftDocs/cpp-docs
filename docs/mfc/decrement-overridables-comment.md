---
title: "-- Overridables Comment | Microsoft Docs"
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
  - "Overridables comment in MFC source files"
  - "MFC source files, Overridables comment"
  - "overriding, Overridables comment in MFC source files"
  - "comments, MFC"
ms.assetid: 8968dea5-0d94-451f-bcb2-991580e65ba2
caps.latest.revision: 10
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
# // Overridables Comment
The `// Overridables` section of an MFC class declaration contains virtual functions that you can override in a derived class when you need to modify the base class behavior. They are usually named starting with "On", although it is not strictly necessary. Functions here are designed to be overridden, and often implement or provide some sort of "callback" or "hook." Typically, these members are protected.  
  
 In MFC itself, pure virtual functions are always placed in this section. A pure virtual function in C++ is one of the form:  
  
 `virtual void OnDraw( ) = 0;`  
  
 In the sample listing from class `CStdioFile`, in [An Example of the Comments](../mfc/an-example-of-the-comments.md), the list includes no overridables section. Class **CDocument**, on the other hand, lists approximately 10 overridable member functions.  
  
 In some classes, you may also see the comment `// Advanced Overridables`. These are functions that only advanced programmers should attempt to override. You will probably never need to override them.  
  
> [!NOTE]
>  The conventions described in this article also work well, in general, for Automation (formerly known as OLE Automation) methods and properties. Automation methods are similar to MFC operations. Automation properties are similar to MFC attributes. Automation events (supported for ActiveX controls, formerly known as OLE controls) are similar to MFC overridable member functions.  
  
## See Also  
 [Using the MFC Source Files](../mfc/using-the-mfc-source-files.md)   
 [An Example of the Comments](../mfc/an-example-of-the-comments.md)   
 [// Implementation Comment](../mfc/decrement-implementation-comment.md)   
 [// Constructors Comment](../mfc/decrement-constructors-comment.md)   
 [// Attributes Comment](../mfc/decrement-attributes-comment.md)   
 [// Operations Comment](../mfc/decrement-operations-comment.md)

