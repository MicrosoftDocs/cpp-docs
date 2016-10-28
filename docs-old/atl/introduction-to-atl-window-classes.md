---
title: "Introduction to ATL Window Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "window classes"
ms.assetid: 503efc2c-a269-495d-97cf-3fb300d52f3d
caps.latest.revision: 9
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
# Introduction to ATL Window Classes
The following ATL classes are designed to implement and manipulate windows:  
  
-   [CWindow](../atl/cwindow-class.md) allows you to attach a window handle to the `CWindow` object. You then call `CWindow` methods to manipulate the window.  
  
-   [CWindowImpl](../atl/cwindowimpl-class.md) allows you to implement a new window and process messages with a message map. You can create a window based on a new Windows class, superclass an existing class, or subclass an existing window.  
  
-   [CDialogImpl](../atl/cdialogimpl-class.md) allows you to implement a modal or a modeless dialog box and process messages with a message map.  
  
-   [CContainedWindowT](../atl/ccontainedwindowt-class.md) is a prebuilt class that implements a window whose message map is contained in another class. Using `CContainedWindowT` allows you to centralize message processing in one class.  
  
-   [CAxDialogImpl](../atl/caxdialogimpl-class.md) allows you to implement a dialog box (modal or modeless) that hosts ActiveX controls.  
  
-   [CSimpleDialog](../atl/csimpledialog-class.md) allows you to implement a modal dialog box with basic functionality.  
  
-   [CAxWindow](../atl/caxwindow-class.md) allows you to implement a window that hosts an ActiveX control.  
  
-   [CAxWindow2T](../atl/caxwindow2t-class.md) allows you to implement a window that hosts a licensed ActiveX control.  
  
 In addition to specific window classes, ATL provides several classes designed to make the implementation of an ATL window object easier. They are as follows:  
  
-   [CWndClassInfo](../atl/cwndclassinfo-class.md) manages the information of a new window class.  
  
-   [CWinTraits](../atl/cwintraits-class.md) and [CWinTraitsOR](../atl/cwintraitsor-class.md) provide a simple method of standardizing the traits of an ATL window object.  
  
## See Also  
 [Window Classes](../atl/atl-window-classes.md)