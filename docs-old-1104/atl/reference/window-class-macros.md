---
title: "Window Class Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: ce18681a-2bab-4453-9895-0f3ea47c2b24
caps.latest.revision: 15
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
# Window Class Macros
These macros define window class utilities.  
  
|||  
|-|-|  
|[DECLARE_WND_CLASS](../Topic/DECLARE_WND_CLASS.md)|Allows you to specify the name of a new window class.|  
|[DECLARE_WND_SUPERCLASS](../Topic/DECLARE_WND_SUPERCLASS.md)|Allows you to specify the name of an existing window class on which a new window class will be based.|  
|[DECLARE_WND_CLASS_EX](../Topic/DECLARE_WND_CLASS_EX.md)|Allows you to specify the parameters of a class.|  
  
##  <a name="declare_wnd_class"></a>  DECLARE_WND_CLASS  
 Allows you to specify the name of a new window class. Place this macro in an ATL ActiveX control's control class.  
  
```
DECLARE_WND_CLASS(Â
    WndClassName Â)
```  
  
### Parameters  
 `WndClassName`  
 [in] The name of the new window class. If **NULL**, ATL will generate a window class name.  
  
### Remarks  
 This macro allows you to specify the name of a new window class whose information will be managed by [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md). `DECLARE_WND_CLASS` defines the new window class by implementing the following static function:  
  
 [!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/CPP/window-class-macros_1.cpp)]  
  
 `DECLARE_WND_CLASS` specifies the following styles for the new window:  
  
-   CS_HREDRAW  
  
-   CS_VREDRAW  
  
-   CS_DBLCLKS  
  
 `DECLARE_WND_CLASS` also specifies the default window's background color. Use the [DECLARE_WND_CLASS_EX](../Topic/DECLARE_WND_CLASS_EX.md) macro to provide your own styles and background color.  
  
 [CWindowImpl](../../atl/reference/cwindowimpl-class.md) uses the `DECLARE_WND_CLASS` macro to create a window based on a new window class. To override this behavior, use the [DECLARE_WND_SUPERCLASS](../Topic/DECLARE_WND_SUPERCLASS.md) macro, or provide your own implementation of the [GetWndClassInfo](../Topic/CWindowImpl::GetWndClassInfo.md) function.  
  
 For more information about using windows in ATL, see the article [ATL Window Classes](../../atl/atl-window-classes.md).  
  
##  <a name="declare_wnd_superclass"></a>  DECLARE_WND_SUPERCLASS  
 Allows you to specify the parameters of a class. Place this macro in an ATL ActiveX control's control class.  
  
```
DECLARE_WND_SUPERCLASS(Â
    WndClassName, Â
    OrigWndClassName Â)
```  
  
### Parameters  
 `WndClassName`  
 [in] The name of the window class that will superclass `OrigWndClassName`. If **NULL**, ATL will generate a window class name.  
  
 `OrigWndClassName`  
 [in] The name of an existing window class.  
  
### Remarks  
 This macro allows you to specify the name of a window class that will superclass an existing window class. [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) manages the information of the superclass.  
  
 `DECLARE_WND_SUPERCLASS` implements the following static function:  
  
 [!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/CPP/window-class-macros_1.cpp)]  
  
 By default, [CWindowImpl](../../atl/reference/cwindowimpl-class.md) uses the [DECLARE_WND_CLASS](../Topic/DECLARE_WND_CLASS.md) macro to create a window based on a new window class. By specifying the `DECLARE_WND_SUPERCLASS` macro in a `CWindowImpl`-derived class, the window class will be based on an existing class but will use your window procedure. This technique is called superclassing.  
  
 Besides using the `DECLARE_WND_CLASS` and `DECLARE_WND_SUPERCLASS` macros, you can override the [GetWndClassInfo](../Topic/CWindowImpl::GetWndClassInfo.md) function with your own implementation.  
  
 For more information about using windows in ATL, see the article [ATL Window Classes](../../atl/atl-window-classes.md).  
  
##  <a name="declare_wnd_class_ex"></a>  DECLARE_WND_CLASS_EX  
 Allows you to specify the name of an existing window class on which a new window class will be based. Place this macro in an ATL ActiveX control's control class.  
  
```
DECLARE_WND_CLASS_EX(Â
    WndClassName, Â
    style, Â
    bkgnd Â)
```  
  
### Parameters  
 `WndClassName`  
 [in] The name of the new window class. If **NULL**, ATL will generate a window class name.  
  
 `style`  
 [in] The style of the window.  
  
 *bkgnd*  
 [in] The background color of the window.  
  
### Remarks  
 This macro allows you to specify the class parameters of a new window class, whose information will be managed by [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md). `DECLARE_WND_CLASS_EX` defines the new window class by implementing the following static function:  
  
 [!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/CPP/window-class-macros_1.cpp)]  
  
 If you want to use the default styles and background color, use the [DECLARE_WND_CLASS](../Topic/DECLARE_WND_CLASS.md) macro. For more information about using windows in ATL, see the article [ATL Window Classes](../../atl/atl-window-classes.md).  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)





