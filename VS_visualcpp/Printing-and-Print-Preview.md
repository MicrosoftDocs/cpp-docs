---
title: "Printing and Print Preview"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d15059cd-32de-4450-95f7-e73aece238f6
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Printing and Print Preview
MFC supports printing and print preview for your program's documents via class [CView](../VS_visualcpp/CView-Class.md). For basic printing and print preview, simply override your view class's [OnDraw](../Topic/CView::OnDraw.md) member function, which you must do anyway. That function can draw to the view on the screen, to a printer device context for an actual printer, or to a device context that simulates your printer on the screen.  
  
 You can also add code to manage multipage document printing and preview, to paginate your printed documents, and to add headers and footers to them.  
  
 This family of articles explains how printing is implemented in the Microsoft Foundation Class Library (MFC) and how to take advantage of the printing architecture already built into the framework. The articles also explain how MFC supports easy implementation of print preview functionality and how you can use and modify that functionality.  
  
## What do you want to know more about?  
  
-   [Printing](../VS_visualcpp/Printing.md)  
  
-   [Print preview architecture](../VS_visualcpp/Print-Preview-Architecture.md)  
  
-   [Sample](../VS_visualcpp/Visual-C---Samples.md)  
  
## See Also  
 [User Interface Elements](../VS_visualcpp/User-Interface-Elements--MFC-.md)