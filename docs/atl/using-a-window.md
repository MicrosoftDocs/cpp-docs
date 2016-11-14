---
title: "Using a Window | Microsoft Docs"
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
  - "ATL, windows"
  - "CWindow class, about CWindow class"
  - "windows [C++], ATL"
ms.assetid: b3b9cc8e-4287-486b-b080-38852bc2943a
caps.latest.revision: 10
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
# Using a Window
Class [CWindow](../atl/reference/cwindow-class.md) allows you to use a window. Once you attach a window to a `CWindow` object, you can then call `CWindow` methods to manipulate the window. `CWindow` also contains an `HWND` operator to convert a `CWindow` object to an `HWND`. Thus you can pass a `CWindow` object to any function that requires a handle to a window. You can easily mix `CWindow` method calls and Win32 function calls, without creating any temporary objects.  
  
 Because `CWindow` has only two data member (a window handle and the default dimensions), it does not impose an overhead on your code. In addition, many of the `CWindow` methods simply wrap corresponding Win32 API functions. By using `CWindow`, the `HWND` member is automatically passed to the Win32 function.  
  
 In addition to using `CWindow` directly, you can also derive from it to add data or code to your class. ATL itself derives three classes from `CWindow`: [CWindowImpl](../atl/implementing-a-window.md), [CDialogImpl](../atl/implementing-a-dialog-box.md), and [CContainedWindowT](../atl/using-contained-windows.md).  
  
## See Also  
 [Window Classes](../atl/atl-window-classes.md)

