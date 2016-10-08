---
title: "Allocating and Deallocating Window Memory"
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
ms.assetid: 7c962539-8461-4846-b5ca-fe3b15c313dc
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
# Allocating and Deallocating Window Memory
Do not use the C++ **delete** operator to destroy a frame window or view. Instead, call the `CWnd` member function `DestroyWindow`. Frame windows, therefore, should be allocated on the heap with operator **new**. Be careful when allocating frame windows on the stack frame or globally. Other windows should be allocated on the stack frame whenever possible.  
  
## What do you want to know more about?  
  
-   [Creating windows](../VS_visualcpp/Creating-Windows.md)  
  
-   [Window destruction sequence](../VS_visualcpp/Window-Destruction-Sequence.md)  
  
-   [Detaching a CWnd from its HWND](../VS_visualcpp/Detaching-a-CWnd-from-Its-HWND.md)  
  
## See Also  
 [Destroying Window Objects](../VS_visualcpp/Destroying-Window-Objects.md)