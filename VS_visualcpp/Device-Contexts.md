---
title: "Device Contexts"
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
ms.assetid: d0cd51f1-f778-4c7e-bf50-d738d10433c7
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
# Device Contexts
A device context is a Windows data structure containing information about the drawing attributes of a device such as a display or a printer. All drawing calls are made through a device-context object, which encapsulates the Windows APIs for drawing lines, shapes, and text. Device contexts allow device-independent drawing in Windows. Device contexts can be used to draw to the screen, to the printer, or to a metafile.  
  
 [CPaintDC](../VS_visualcpp/CPaintDC-Class.md) objects encapsulate the common idiom of Windows, calling the `BeginPaint` function, then drawing in the device context, then calling the `EndPaint` function. The `CPaintDC` constructor calls `BeginPaint` for you, and the destructor calls `EndPaint`. The simplified process is to create the [CDC](../VS_visualcpp/CDC-Class.md) object, draw, and then destroy the `CDC` object. In the framework, much of even this process is automated. In particular, your `OnDraw` function is passed a `CPaintDC` already prepared (via `OnPrepareDC`), and you simply draw into it. It is destroyed by the framework and the underlying device context is released to Windows upon return from the call to your `OnDraw` function.  
  
 [CClientDC](../VS_visualcpp/CClientDC-Class.md) objects encapsulate working with a device context that represents only the client area of a window. The `CClientDC` constructor calls the `GetDC` function, and the destructor calls the `ReleaseDC` function. [CWindowDC](../VS_visualcpp/CWindowDC-Class.md) objects encapsulate a device context that represents the whole window, including its frame.  
  
 [CMetaFileDC](../VS_visualcpp/CMetaFileDC-Class.md) objects encapsulate drawing into a Windows metafile. In contrast to the `CPaintDC` passed to `OnDraw`, you must in this case call [OnPrepareDC](../Topic/CView::OnPrepareDC.md) yourself.  
  
## Mouse Drawing  
 Most drawing in a framework program — and thus most device-context work — is done in the view's `OnDraw` member function. However, you can still use device-context objects for other purposes. For example, to provide tracking feedback for mouse movement in a view, you need to draw directly into the view without waiting for `OnDraw` to be called.  
  
 In such a case, you can use a [CClientDC](../VS_visualcpp/CClientDC-Class.md) device-context object to draw directly into the view.  
  
### What do you want to know more about?  
  
-   [Device contexts (definition)](http://msdn.microsoft.com/library/windows/desktop/dd183553)  
  
-   [Drawing in a View](../VS_visualcpp/Drawing-in-a-View.md)  
  
-   [Interpreting User Input Through a View](../VS_visualcpp/Interpreting-User-Input-Through-a-View.md)  
  
-   [Lines and curves](http://msdn.microsoft.com/library/windows/desktop/dd145028)  
  
-   [Filled shapes](http://msdn.microsoft.com/library/windows/desktop/dd162714)  
  
-   [Fonts and text](http://msdn.microsoft.com/library/windows/desktop/dd144819)  
  
-   [Colors](http://msdn.microsoft.com/library/windows/desktop/dd183450)  
  
-   [Coordinate spaces and transformations](http://msdn.microsoft.com/library/windows/desktop/dd183475)  
  
## See Also  
 [Window Objects](../VS_visualcpp/Window-Objects.md)