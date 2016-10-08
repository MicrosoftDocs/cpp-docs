---
title: "Destroying Frame Windows"
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
ms.assetid: 5affca77-1999-4507-a2b2-9aa226611b4b
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
# Destroying Frame Windows
The MFC framework manages window destruction as well as creation for those windows associated with framework documents and views. If you create additional windows, you are responsible for destroying them.  
  
 In the framework, when the user closes the frame window, the window's default [OnClose](../Topic/CWnd::OnClose.md) handler calls [DestroyWindow](../Topic/CWnd::DestroyWindow.md). The last member function called when the Windows window is destroyed is [OnNcDestroy](../Topic/CWnd::OnNcDestroy.md), which does some cleanup, calls the [Default](../Topic/CWnd::Default.md) member function to perform Windows cleanup, and lastly calls the virtual member function [PostNcDestroy](../Topic/CWnd::PostNcDestroy.md). The [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md) implementation of `PostNcDestroy` deletes the C++ window object. You should never use the C++ **delete** operator on a frame window. Use `DestroyWindow` instead.  
  
 When the main window closes, the application closes. If there are modified unsaved documents, the framework displays a message box to ask if the documents should be saved and ensures that the appropriate documents are saved if necessary.  
  
## What do you want to know more about?  
  
-   [Creating document frame windows](../VS_visualcpp/Creating-Document-Frame-Windows.md)  
  
## See Also  
 [Using Frame Windows](../VS_visualcpp/Using-Frame-Windows.md)