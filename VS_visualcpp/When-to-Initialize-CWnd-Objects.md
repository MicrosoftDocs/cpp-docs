---
title: "When to Initialize CWnd Objects"
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
ms.assetid: 4d31bcb1-73db-4f2f-b71c-89b087569a10
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
# When to Initialize CWnd Objects
You cannot create your own child windows or call any Windows API functions in the constructor of a `CWnd`-derived object. This is because the `HWND` for the `CWnd` object has not been created yet. Most Windows-specific initialization, such as adding child windows, must be done in an [OnCreate](../Topic/CWnd::OnCreate.md) message handler.  
  
## What do you want to know more about?  
  
-   [Creating document frame windows](../VS_visualcpp/Creating-Document-Frame-Windows.md)  
  
-   [Document/view creation](../VS_visualcpp/Document-View-Creation.md)  
  
## See Also  
 [Using Frame Windows](../VS_visualcpp/Using-Frame-Windows.md)