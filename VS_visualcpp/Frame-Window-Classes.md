---
title: "Frame-Window Classes"
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
ms.assetid: c27e43a7-8ad0-4759-b1b7-43f4725f4132
caps.latest.revision: 7
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
# Frame-Window Classes
Each application has one "main frame window," a desktop window that usually has the application name in its caption. Each document usually has one "document frame window." A document frame window contains at least one view, which presents the document's data.  
  
## Frame Windows in SDI and MDI Applications  
 For an SDI application, there is one frame window derived from class [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md). This window is both the main frame window and the document frame window. For an MDI application, the main frame window is derived from class [CMDIFrameWnd](../VS_visualcpp/CMDIFrameWnd-Class.md), and the document frame windows, which are MDI child windows, are derived from class [CMDIChildWnd](../VS_visualcpp/CMDIChildWnd-Class.md).  
  
## Use the Frame-Window Class, or Derive from It?  
 These classes provide most of the frame-window functionality you need for your applications. Under normal circumstances, the default behavior and appearance they provide will suit your needs. If you need additional functionality, derive from these classes.  
  
### What do you want to know more about?  
  
-   [Frame-window classes created by the Application Wizard](../VS_visualcpp/Frame-Window-Classes-Created-by-the-Application-Wizard.md)  
  
-   [Frame-window styles](../VS_visualcpp/Frame-Window-Styles--C---.md)  
  
-   [Changing the styles of a window created by MFC](../VS_visualcpp/Changing-the-Styles-of-a-Window-Created-by-MFC.md)  
  
## See Also  
 [Frame Windows](../VS_visualcpp/Frame-Windows.md)