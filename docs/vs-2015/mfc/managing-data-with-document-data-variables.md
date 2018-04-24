---
title: "Managing Data with Document Data Variables | Microsoft Docs"
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
  - "documents [C++], data storage"
  - "friend classes"
  - "classes [C++], friend"
  - "data [MFC]"
  - "data [MFC], documents"
  - "collection classes [C++], used by document object"
  - "document data [C++]"
  - "member variables [C++], document class"
ms.assetid: e70b87f4-8c30-49e5-8986-521c2ff91704
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Managing Data with Document Data Variables
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Managing Data with Document Data Variables](https://docs.microsoft.com/cpp/mfc/managing-data-with-document-data-variables).  
  
  
Implement your document's data as member variables of your document class. For example, the Scribble program declares a data member of type `CObList` — a linked list that stores pointers to `CObject` objects. This list is used to store arrays of points that make up a freehand line drawing.  
  
 How you implement your document's member data depends on the nature of your application. To help you out, MFC supplies a group of "collection classes" — arrays, lists, and maps (dictionaries), including collections based on C++ templates — along with classes that encapsulate a variety of common data types such as `CString`, `CRect`, `CPoint`, `CSize`, and `CTime`. For more information about these classes, see the [Class Library Overview](../mfc/class-library-overview.md) in the *MFC Reference*.  
  
 When you define your document's member data, you will usually add member functions to the document class to set and get data items and perform other useful operations on them.  
  
 Your views access the document object by using the view's pointer to the document, installed in the view at creation time. You can retrieve this pointer in a view's member functions by calling the `CView` member function **GetDocument**. Be sure to cast this pointer to your own document type. Then you can access public document members through the pointer.  
  
 If frequent data transfer requires direct access, or you wish to use the nonpublic members of the document class, you may want to make your view class a friend (in C++ terms) of the document class.  
  
## See Also  
 [Using Documents](../mfc/using-documents.md)





