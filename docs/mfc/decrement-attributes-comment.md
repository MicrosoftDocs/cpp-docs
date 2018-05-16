---
title: "-- Attributes Comment | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["comments, Attributes", "Attributes comment in MFC source files", "MFC source files, Attributes comment", "public attributes comment"]
ms.assetid: 96388e11-42df-4994-aedf-decd152961a7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# // Attributes Comment
The `// Attributes` section of an MFC class declaration contains the public attributes (or properties) of the object. Typically these are member variables, or Get/Set functions. The "Get" and "Set" functions may or may not be virtual. The "Get" functions are usually **const**, because in most cases they do not have side effects. These members are normally public; protected and private attributes are typically found in the implementation section.  
  
 In the sample listing from class `CStdioFile`, under [An Example of the Comments](../mfc/an-example-of-the-comments.md), the list includes one member variable, `m_pStream`. Class `CDC` lists nearly 20 members under this comment.  
  
> [!NOTE]
>  Large classes, such as `CDC` and `CWnd`, may have so many members that simply listing all the attributes in one group would not add much to clarity. In such cases, the class library uses other comments as headings to further delineate the members. For example, `CDC` uses `// Device-Context Functions`, `// Drawing Tool Functions`, `// Drawing Attribute Functions`, and more. Groups that represent attributes will follow the usual syntax described above. Many OLE classes have an implementation section called `// Interface Maps`.  
  
## See Also  
 [Using the MFC Source Files](../mfc/using-the-mfc-source-files.md)   
 [An Example of the Comments](../mfc/an-example-of-the-comments.md)   
 [// Implementation Comment](../mfc/decrement-implementation-comment.md)   
 [// Constructors Comment](../mfc/decrement-constructors-comment.md)   
 [// Operations Comment](../mfc/decrement-operations-comment.md)   
 [// Overridables Comment](../mfc/decrement-overridables-comment.md)

