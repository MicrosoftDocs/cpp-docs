---
title: "Role of the View in Printing | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["views [MFC], printing", "OnDraw method [MFC], and printing", "printing [MFC], OnDraw method [MFC]", "printing [MFC], views", "CView class [MFC], role in printing", "printing views [MFC]"]
ms.assetid: 8d4a3c8e-1fce-4edc-b608-94cb5f3e487e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Role of the View in Printing
Your view also plays two important roles in printing its associated document.  
  
 The view:  
  
-   Uses the same [OnDraw](../mfc/reference/cview-class.md#ondraw) code to draw on the printer as to draw on the screen.  
  
-   Manages dividing the document into pages for printing.  
  
 For more information about printing and about the view's role in printing, see [Printing and Print Preview](../mfc/printing-and-print-preview.md).  
  
## See Also  
 [Using Views](../mfc/using-views.md)

