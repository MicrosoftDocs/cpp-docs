---
title: "-- Constructors Comment"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "constructors comment"
  - "declarations, constructors"
  - "MFC source files, Constructors comment"
  - "declaring constructors, code comments"
  - "comments, MFC"
  - "comments, constructors comment"
  - "constructors [C++], declaring"
  - "instance constructors, code comments"
ms.assetid: f400774e-ba85-49ed-85b7-70ef2f7dcb2b
caps.latest.revision: 7
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
# // Constructors Comment
The `// Constructors` section of an MFC class declaration declares constructors (in the C++ sense) as well as any initialization functions required to really use the object. For example, `CWnd::Create` is in the constructors section because before you use the `CWnd` object, it must be "fully constructed" by first calling the C++ constructor and then calling the **Create** function. Typically, these members are public.  
  
 For example, class `CStdioFile` has three constructors, one of which is shown in the listing under [An Example of the Comments](../mfc/an-example-of-the-comments.md).  
  
## See Also  
 [Using the MFC Source Files](../mfc/using-the-mfc-source-files.md)   
 [// Implementation Comment](../mfc/---implementation-comment.md)   
 [// Attributes Comment](../mfc/---attributes-comment.md)   
 [// Operations Comment](../mfc/---operations-comment.md)   
 [// Overridables Comment](../mfc/---overridables-comment.md)