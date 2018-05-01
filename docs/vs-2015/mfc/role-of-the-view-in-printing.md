---
title: "Role of the View in Printing | Microsoft Docs"
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
  - "views, printing"
  - "OnDraw method, and printing"
  - "printing [MFC], OnDraw method"
  - "printing [MFC], views"
  - "CView class, role in printing"
  - "printing views"
ms.assetid: 8d4a3c8e-1fce-4edc-b608-94cb5f3e487e
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Role of the View in Printing
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Role of the View in Printing](https://docs.microsoft.com/cpp/mfc/role-of-the-view-in-printing).  
  
  
Your view also plays two important roles in printing its associated document.  
  
 The view:  
  
-   Uses the same [OnDraw](../mfc/reference/cview-class.md#ondraw) code to draw on the printer as to draw on the screen.  
  
-   Manages dividing the document into pages for printing.  
  
 For more information about printing and about the view's role in printing, see [Printing and Print Preview](../mfc/printing-and-print-preview.md).  
  
## See Also  
 [Using Views](../mfc/using-views.md)





