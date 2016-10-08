---
title: "Using a Window"
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
ms.assetid: b3b9cc8e-4287-486b-b080-38852bc2943a
caps.latest.revision: 8
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
# Using a Window
Class [CWindow](../VS_visualcpp/CWindow-Class.md) allows you to use a window. Once you attach a window to a `CWindow` object, you can then call `CWindow` methods to manipulate the window. `CWindow` also contains an `HWND` operator to convert a `CWindow` object to an `HWND`. Thus you can pass a `CWindow` object to any function that requires a handle to a window. You can easily mix `CWindow` method calls and Win32 function calls, without creating any temporary objects.  
  
 Because `CWindow` has only two data member (a window handle and the default dimensions), it does not impose an overhead on your code. In addition, many of the `CWindow` methods simply wrap corresponding Win32 API functions. By using `CWindow`, the `HWND` member is automatically passed to the Win32 function.  
  
 In addition to using `CWindow` directly, you can also derive from it to add data or code to your class. ATL itself derives three classes from `CWindow`: [CWindowImpl](../VS_visualcpp/Implementing-a-Window.md), [CDialogImpl](../VS_visualcpp/Implementing-a-Dialog-Box.md), and [CContainedWindowT](../VS_visualcpp/Using-Contained-Windows.md).  
  
## See Also  
 [Window Classes](../VS_visualcpp/ATL-Window-Classes.md)