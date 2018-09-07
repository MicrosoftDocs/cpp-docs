---
title: "Printing and Print Preview | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["printing [MFC]", "previewing printing", "printing [MFC]", "print preview", "printing [MFC], print preview"]
ms.assetid: d15059cd-32de-4450-95f7-e73aece238f6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Printing and Print Preview
MFC supports printing and print preview for your program's documents via class [CView](../mfc/reference/cview-class.md). For basic printing and print preview, simply override your view class's [OnDraw](../mfc/reference/cview-class.md#ondraw) member function, which you must do anyway. That function can draw to the view on the screen, to a printer device context for an actual printer, or to a device context that simulates your printer on the screen.  
  
 You can also add code to manage multipage document printing and preview, to paginate your printed documents, and to add headers and footers to them.  
  
 This family of articles explains how printing is implemented in the Microsoft Foundation Class Library (MFC) and how to take advantage of the printing architecture already built into the framework. The articles also explain how MFC supports easy implementation of print preview functionality and how you can use and modify that functionality.  
  
## What do you want to know more about  
  
-   [Printing](../mfc/printing.md)  
  
-   [Print preview architecture](../mfc/print-preview-architecture.md)  
  
-   [Sample](../visual-cpp-samples.md)  
  
## See Also  
 [User Interface Elements](../mfc/user-interface-elements-mfc.md)
