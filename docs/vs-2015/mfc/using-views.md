---
title: "Using Views | Microsoft Docs"
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
  - "interacting with users and role of view class"
  - "drawing, data"
  - "rendering data"
  - "view classes, role in managing user interaction"
  - "CView class, view architecture"
  - "MFC, views"
  - "views, using"
  - "painting data"
  - "user input, interpreting through view class"
  - "view classes, role in displaying application data"
ms.assetid: dc3de6ad-5c64-4317-8f10-8bdcc38cdbd5
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Using Views
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Using Views](https://docs.microsoft.com/cpp/mfc/using-views).  
  
  
The view's responsibilities are to display the document's data graphically to the user and to accept and interpret user input as operations on the document. Your tasks in writing your view class are to:  
  
-   Write your view class's [OnDraw](../mfc/reference/cview-class.md#ondraw) member function, which renders the document's data.  
  
-   Connect appropriate Windows messages and user-interface objects such as menu items to message-handler member functions in the view class.  
  
-   Implement those handlers to interpret user input.  
  
 In addition, you may need to override other `CView` member functions in your derived view class. In particular, you may want to override [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) to perform special initialization for the view and [OnUpdate](../mfc/reference/cview-class.md#onupdate) to do any special processing needed just before the view redraws itself. For multipage documents, you also must override [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) to initialize the Print dialog box with the number of pages to print and other information. For more information on overriding `CView` member functions, see class [CView](../mfc/reference/cview-class.md) in the *MFC Reference*.  
  
## What do you want to know more about  
  
-   [Derived view classes available in MFC](../mfc/derived-view-classes-available-in-mfc.md)  
  
-   [Drawing in a view](../mfc/drawing-in-a-view.md)  
  
-   [Interpreting user input through a view](../mfc/interpreting-user-input-through-a-view.md)  
  
-   [The role of the view in printing](../mfc/role-of-the-view-in-printing.md)  
  
-   [Scrolling and scaling views](../mfc/scrolling-and-scaling-views.md)  
  
-   [Initializing and cleaning up documents and views](../mfc/initializing-and-cleaning-up-documents-and-views.md)  
  
## See Also  
 [Document/View Architecture](../mfc/document-view-architecture.md)   
 [CFormView Class](../mfc/reference/cformview-class.md)   
 [Record Views  (MFC Data Access)](../data/record-views-mfc-data-access.md)   
 [Bypassing the Serialization Mechanism](../mfc/bypassing-the-serialization-mechanism.md)





