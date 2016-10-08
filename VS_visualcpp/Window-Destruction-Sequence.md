---
title: "Window Destruction Sequence"
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
ms.assetid: 2d819196-6240-415f-a308-db43745e616c
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
# Window Destruction Sequence
In the MFC framework, when the user closes the frame window, the window's default [OnClose](../Topic/CWnd::OnClose.md) handler calls [DestroyWindow](../Topic/CWnd::DestroyWindow.md). The last member function called when the Windows window is destroyed is [OnNcDestroy](../Topic/CWnd::OnNcDestroy.md), which does some cleanup, calls the [Default](../Topic/CWnd::Default.md) member function to perform Windows cleanup, and lastly calls the virtual member function [PostNcDestroy](../Topic/CWnd::PostNcDestroy.md). The [CFrameWnd](../VS_visualcpp/CFrameWnd-Class.md) implementation of `PostNcDestroy` deletes the C++ window object.  
  
## What do you want to know more about?  
  
-   [Allocating and deallocating window memory](../VS_visualcpp/Allocating-and-Deallocating-Window-Memory.md)  
  
-   [Detaching a CWnd from its HWND](../VS_visualcpp/Detaching-a-CWnd-from-Its-HWND.md)  
  
## See Also  
 [Destroying Window Objects](../VS_visualcpp/Destroying-Window-Objects.md)