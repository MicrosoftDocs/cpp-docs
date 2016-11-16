---
title: "Advantages of the Document-View Architecture | Microsoft Docs"
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
  - "views, advantages"
  - "document/view architecture, advantages of"
ms.assetid: 0bc27071-e120-4889-939c-ce1e61fb9cb3
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
# Advantages of the Document/View Architecture
The key advantage to using the MFC document/view architecture is that the architecture supports multiple views of the same document particularly well. (If you don't need multiple views and the small overhead of document/view is excessive in your application, you can avoid the architecture. [Alternatives to the Document/View Architecture](../mfc/alternatives-to-the-document-view-architecture.md).)  
  
 Suppose your application lets users view numerical data either in spreadsheet form or in chart form. A user might want to see simultaneously both the raw data, in spreadsheet form, and a chart that results from the data. You display these separate views in separate frame windows or in splitter panes within a single window. Now suppose the user can edit the data in the spreadsheet and see the changes instantly reflected in the chart.  
  
 In MFC, the spreadsheet view and the chart view would be based on different classes derived from CView. Both views would be associated with a single document object. The document stores the data (or perhaps obtains it from a database). Both views access the document and display the data they retrieve from it.  
  
 When a user updates one of the views, that view object calls `CDocument::UpdateAllViews`. That function notifies all of the document's views, and each view updates itself using the latest data from the document. The single call to `UpdateAllViews` synchronizes the different views.  
  
 This scenario would be difficult to code without the separation of data from view, particularly if the views stored the data themselves. With document/view, it's easy. The framework does most of the coordination work for you.  
  
## What do you want to know more about  
  
-   [Alternatives to document/view](../mfc/alternatives-to-the-document-view-architecture.md)  
  
-   [CDocument](../mfc/reference/cdocument-class.md)  
  
-   [CView](../mfc/reference/cview-class.md)  
  
-   [CDocument::UpdateAllViews](../mfc/reference/cdocument-class.md#cdocument__updateallviews)  
  
-   [CView::GetDocument](../mfc/reference/cview-class.md#cview__getdocument)  
  
## See Also  
 [Document/View Architecture](../mfc/document-view-architecture.md)

