---
title: "Windows Support Classes"
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
ms.assetid: 750b14d5-d787-4d2b-9728-ac199ccad489
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
# Windows Support Classes
The following classes provide support for windows:  
  
-   [_U_MENUorID](../VS_visualcpp/_U_MENUorID-Class.md) Provides wrappers for **CreateWindow** and **CreateWindowEx**.  
  
-   [CWindow](../VS_visualcpp/CWindow-Class.md) Contains methods for manipulating a window. `CWindow` is the base class for `CWindowImpl`, `CDialogImpl`, and `CContainedWindow`.  
  
-   [CWindowImpl](../VS_visualcpp/CWindowImpl-Class.md) Implements a window based on a new window class. Also allows you to subclass or superclass the window.  
  
-   [CDialogImpl](../VS_visualcpp/CDialogImpl-Class.md) Implements a dialog box.  
  
-   [CAxDialogImpl](../VS_visualcpp/CAxDialogImpl-Class.md) Implements a dialog box (modal or modeless) that hosts ActiveX controls.  
  
-   [CSimpleDialog](../VS_visualcpp/CSimpleDialog-Class.md) Implements a dialog box (modal or modeless) with basic functionality.  
  
-   [CAxWindow](../VS_visualcpp/CAxWindow-Class.md) Manipulates a window that hosts an ActiveX control.  
  
-   [CAxWindow2T](../VS_visualcpp/CAxWindow2T-Class.md) Provides methods for manipulating a window that hosts an ActiveX control and also has support for hosting licensed ActiveX controls.  
  
-   [CContainedWindowT](../VS_visualcpp/CContainedWindowT-Class.md) Implements a window contained within another object.  
  
-   [CWndClassInfo](../VS_visualcpp/CWndClassInfo-Class.md) Manages the information of a new window class.  
  
-   [CDynamicChain](../VS_visualcpp/CDynamicChain-Class.md) Supports dynamic chaining of message maps.  
  
-   [CMessageMap](../VS_visualcpp/CMessageMap-Class.md) Allows an object to expose its message maps to other objects.  
  
-   [CWinTraits](../VS_visualcpp/CWinTraits-Class.md) Provides a simple method of standardizing the traits of an ATL window object.  
  
-   [CWinTraitsOR](../VS_visualcpp/CWinTraitsOR-Class.md) Provides default values for window styles and extended styles used to create a window. These values are added, using the logical-OR operator, to values provided during the creation of a window.  
  
## Related Articles  
 [ATL Window Classes](../VS_visualcpp/ATL-Window-Classes.md)  
  
 [ATL Tutorial](../VS_visualcpp/Active-Template-Library--ATL--Tutorial.md)  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [Message Map Macros](../VS_visualcpp/Message-Map-Macros--ATL-.md)   
 [Window Class Macros](../VS_visualcpp/Window-Class-Macros.md)