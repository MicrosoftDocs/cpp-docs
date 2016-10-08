---
title: "Detaching a CWnd from Its HWND"
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
ms.assetid: 6efadf84-0517-4a3f-acfd-216e088f19c6
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
# Detaching a CWnd from Its HWND
If you need to circumvent the object-`HWND` relationship, MFC provides another `CWnd` member function, [Detach](../Topic/CWnd::Detach.md), which disconnects the C++ window object from the Windows window. This prevents the destructor from destroying the Windows window when the object is destroyed.  
  
## What do you want to know more about?  
  
-   [Creating windows](../VS_visualcpp/Creating-Windows.md)  
  
-   [Window destruction sequence](../VS_visualcpp/Window-Destruction-Sequence.md)  
  
-   [Allocating and deallocating window memory](../VS_visualcpp/Allocating-and-Deallocating-Window-Memory.md)  
  
## See Also  
 [Window Objects](../VS_visualcpp/Window-Objects.md)