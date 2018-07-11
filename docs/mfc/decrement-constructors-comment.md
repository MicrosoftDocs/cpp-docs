---
title: "-- Constructors Comment | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["constructors comment", "declarations, constructors", "MFC source files, Constructors comment", "declaring constructors, code comments", "comments, MFC", "comments, constructors comment", "constructors [MFC], declaring", "instance constructors, code comments"]
ms.assetid: f400774e-ba85-49ed-85b7-70ef2f7dcb2b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# // Constructors Comment
The `// Constructors` section of an MFC class declaration declares constructors (in the C++ sense) as well as any initialization functions required to really use the object. For example, `CWnd::Create` is in the constructors section because before you use the `CWnd` object, it must be "fully constructed" by first calling the C++ constructor and then calling the `Create` function. Typically, these members are public.  
  
 For example, class `CStdioFile` has three constructors, one of which is shown in the listing under [An Example of the Comments](../mfc/an-example-of-the-comments.md).  
  
## See Also  
 [Using the MFC Source Files](../mfc/using-the-mfc-source-files.md)   
 [// Implementation Comment](../mfc/decrement-implementation-comment.md)   
 [// Attributes Comment](../mfc/decrement-attributes-comment.md)   
 [// Operations Comment](../mfc/decrement-operations-comment.md)   
 [// Overridables Comment](../mfc/decrement-overridables-comment.md)

