---
title: "Windows Support Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.atl.windows"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, windows"
  - "windows [C++], ATL"
ms.assetid: 750b14d5-d787-4d2b-9728-ac199ccad489
caps.latest.revision: 8
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
# Windows Support Classes
The following classes provide support for windows:  
  
-   [_U_MENUorID](../atl/_u_menuorid-class.md) Provides wrappers for **CreateWindow** and **CreateWindowEx**.  
  
-   [CWindow](../atl/cwindow-class.md) Contains methods for manipulating a window. `CWindow` is the base class for `CWindowImpl`, `CDialogImpl`, and `CContainedWindow`.  
  
-   [CWindowImpl](../atl/cwindowimpl-class.md) Implements a window based on a new window class. Also allows you to subclass or superclass the window.  
  
-   [CDialogImpl](../atl/cdialogimpl-class.md) Implements a dialog box.  
  
-   [CAxDialogImpl](../atl/caxdialogimpl-class.md) Implements a dialog box (modal or modeless) that hosts ActiveX controls.  
  
-   [CSimpleDialog](../atl/csimpledialog-class.md) Implements a dialog box (modal or modeless) with basic functionality.  
  
-   [CAxWindow](../atl/caxwindow-class.md) Manipulates a window that hosts an ActiveX control.  
  
-   [CAxWindow2T](../atl/caxwindow2t-class.md) Provides methods for manipulating a window that hosts an ActiveX control and also has support for hosting licensed ActiveX controls.  
  
-   [CContainedWindowT](../atl/ccontainedwindowt-class.md) Implements a window contained within another object.  
  
-   [CWndClassInfo](../atl/cwndclassinfo-class.md) Manages the information of a new window class.  
  
-   [CDynamicChain](../atl/cdynamicchain-class.md) Supports dynamic chaining of message maps.  
  
-   [CMessageMap](../atl/cmessagemap-class.md) Allows an object to expose its message maps to other objects.  
  
-   [CWinTraits](../atl/cwintraits-class.md) Provides a simple method of standardizing the traits of an ATL window object.  
  
-   [CWinTraitsOR](../atl/cwintraitsor-class.md) Provides default values for window styles and extended styles used to create a window. These values are added, using the logical-OR operator, to values provided during the creation of a window.  
  
## Related Articles  
 [ATL Window Classes](../atl/atl-window-classes.md)  
  
 [ATL Tutorial](../atl/active-template-library--atl--tutorial.md)  
  
## See Also  
 [Class Overview](../atl/atl-class-overview.md)   
 [Message Map Macros](../atl/message-map-macros--atl-.md)   
 [Window Class Macros](../atl/window-class-macros.md)