---
title: "A Portrait of the Document-View Architecture | Microsoft Docs"
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
  - "documents, views"
  - "multiple views, updating from document"
  - "document/view architecture"
  - "views, and user input"
  - "documents, accessing data from view"
  - "views, updating"
  - "input, view class"
  - "documents, multiple views"
  - "document/view architecture, accessing data from view"
  - "document/view architecture, about document/view architecture"
  - "views, accessing document data from"
ms.assetid: 4e7f65dc-b166-45d8-bcd5-9bb0d399b946
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
# A Portrait of the Document/View Architecture
Documents and views are paired in a typical MFC application. Data is stored in the document, but the view has privileged access to the data. The separation of document from view separates the storage and maintenance of data from its display.  
  
## Gaining Access to Document Data from the View  
 The view accesses its document's data either with the [GetDocument](../mfc/reference/cview-class.md#cview__getdocument) function, which returns a pointer to the document, or by making the view class a C++ `friend` of the document class. The view then uses its access to the data to obtain the data when it is ready to draw or otherwise manipulate it.  
  
 For example, from the view's [OnDraw](../mfc/reference/cview-class.md#cview__ondraw) member function, the view uses **GetDocument** to obtain a document pointer. Then it uses that pointer to access a `CString` data member in the document. The view passes the string to the `TextOut` function. To see the code for this example, see [Drawing in a View](../mfc/drawing-in-a-view.md).  
  
## User Input to the View  
 The view might also interpret a mouse click within itself as either selection or editing of data. Similarly it might interpret keystrokes as data entry or editing. Suppose the user types a string in a view that manages text. The view obtains a pointer to the document and uses the pointer to pass the new data to the document, which stores it in some data structure.  
  
## Updating Multiple Views of the Same Document  
 In an application with multiple views of the same document — such as a splitter window in a text editor — the view first passes the new data to the document. Then it calls the document's [UpdateAllViews](../mfc/reference/cdocument-class.md#cdocument__updateallviews) member function, which tells all views of the document to update themselves, reflecting the new data. This synchronizes the views.  
  
### What do you want to know more about  
  
-   [Advantages of the document/view architecture](../mfc/advantages-of-the-document-view-architecture.md)  
  
-   [Alternatives to the document/view architecture](../mfc/alternatives-to-the-document-view-architecture.md)  
  
## See Also  
 [Document/View Architecture](../mfc/document-view-architecture.md)

