---
title: "Introduction to ATL Window Classes"
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
ms.assetid: 503efc2c-a269-495d-97cf-3fb300d52f3d
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
# Introduction to ATL Window Classes
The following ATL classes are designed to implement and manipulate windows:  
  
-   [CWindow](../VS_visualcpp/CWindow-Class.md) allows you to attach a window handle to the `CWindow` object. You then call `CWindow` methods to manipulate the window.  
  
-   [CWindowImpl](../VS_visualcpp/CWindowImpl-Class.md) allows you to implement a new window and process messages with a message map. You can create a window based on a new Windows class, superclass an existing class, or subclass an existing window.  
  
-   [CDialogImpl](../VS_visualcpp/CDialogImpl-Class.md) allows you to implement a modal or a modeless dialog box and process messages with a message map.  
  
-   [CContainedWindowT](../VS_visualcpp/CContainedWindowT-Class.md) is a prebuilt class that implements a window whose message map is contained in another class. Using `CContainedWindowT` allows you to centralize message processing in one class.  
  
-   [CAxDialogImpl](../VS_visualcpp/CAxDialogImpl-Class.md) allows you to implement a dialog box (modal or modeless) that hosts ActiveX controls.  
  
-   [CSimpleDialog](../VS_visualcpp/CSimpleDialog-Class.md) allows you to implement a modal dialog box with basic functionality.  
  
-   [CAxWindow](../VS_visualcpp/CAxWindow-Class.md) allows you to implement a window that hosts an ActiveX control.  
  
-   [CAxWindow2T](../VS_visualcpp/CAxWindow2T-Class.md) allows you to implement a window that hosts a licensed ActiveX control.  
  
 In addition to specific window classes, ATL provides several classes designed to make the implementation of an ATL window object easier. They are as follows:  
  
-   [CWndClassInfo](../VS_visualcpp/CWndClassInfo-Class.md) manages the information of a new window class.  
  
-   [CWinTraits](../VS_visualcpp/CWinTraits-Class.md) and [CWinTraitsOR](../VS_visualcpp/CWinTraitsOR-Class.md) provide a simple method of standardizing the traits of an ATL window object.  
  
## See Also  
 [Window Classes](../VS_visualcpp/ATL-Window-Classes.md)