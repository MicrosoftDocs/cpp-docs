---
title: "Headers and Footers | Microsoft Docs"
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
  - "printing [MFC], multipage documents"
  - "page headers, printing"
  - "headers, printing"
  - "footers, printing"
  - "page footers, printing"
  - "page headers"
  - "printing [MFC], headers and footers"
  - "page footers"
ms.assetid: b0be9c53-5773-4955-a777-3c15da745128
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
# Headers and Footers
This article explains how to add headers and footers to a printed document.  
  
 When you look at a document on the screen, the name of the document and your current location in the document are commonly displayed in a title bar and a status bar. When looking at a printed copy of a document, it's useful to have the name and page number shown in a header or footer. This is a common way in which even WYSIWYG programs differ in how they perform printing and screen display.  
  
 The [OnPrint](../mfc/reference/cview-class.md#cview__onprint) member function is the appropriate place to print headers or footers because it is called for each page, and because it is called only for printing, not for screen display. You can define a separate function to print a header or footer, and pass it the printer device context from `OnPrint`. You might need to adjust the window origin or extent before calling [OnDraw](../mfc/reference/cview-class.md#cview__ondraw) to avoid having the body of the page overlap the header or footer. You might also have to modify `OnDraw` because the amount of the document that fits on the page could be reduced.  
  
 One way to compensate for the area taken by the header or footer is to use the **m_rectDraw** member of [CPrintInfo](../mfc/reference/cprintinfo-structure.md). Each time a page is printed, this member is initialized with the usable area of the page. If you print a header or footer before printing the body of the page, you can reduce the size of the rectangle stored in **m_rectDraw** to account for the area taken by the header or footer. Then `OnPrint` can refer to **m_rectDraw** to find out how much area remains for printing the body of the page.  
  
 You cannot print a header, or anything else, from [OnPrepareDC](../mfc/reference/cview-class.md#cview__onpreparedc), because it is called before the `StartPage` member function of [CDC](../mfc/reference/cdc-class.md) has been called. At that point, the printer device context is considered to be at a page boundary. You can perform printing only from the `OnPrint` member function.  
  
## What do you want to know more about  
  
-   [Printing multipage documents](../mfc/multipage-documents.md)  
  
-   [Allocating GDI resources for printing](../mfc/allocating-gdi-resources.md)  
  
## See Also  
 [Printing](../mfc/printing.md)

