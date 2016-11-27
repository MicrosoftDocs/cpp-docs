---
title: "Device Contexts | Microsoft Docs"
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
  - "OnPrepareDC method"
  - "windows [C++], and device context"
  - "drawing, device context"
  - "CClientDC class, and GetDC method"
  - "drawing, in mouse and device contexts"
  - "CDC class, objects"
  - "device contexts [C++]"
  - "client areas"
  - "CMetaFileDC class, and OnPrepareDC method"
  - "GDI objects [C++], device contexts"
  - "graphic objects, device contexts"
  - "frame windows [C++], device contexts"
  - "metafiles and device contexts"
  - "EndPaint method"
  - "printers [C++], device contexts"
  - "mouse [C++], drawing and device contexts"
  - "BeginPaint method, CPaintDC"
  - "CPaintDC class, device context for painting"
  - "windows [C++], drawing directly into"
  - "client areas, and device context"
  - "device contexts [C++], CDC class"
  - "user interface [C++], device contexts"
  - "device-independent drawing"
  - "GetDC method and CClientDC class"
  - "CClientDC class, and ReleaseDC method"
  - "ReleaseDC method"
  - "device contexts [C++], about device contexts"
  - "drawing, directly into windows"
  - "painting and device context"
ms.assetid: d0cd51f1-f778-4c7e-bf50-d738d10433c7
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
# Device Contexts
A device context is a Windows data structure containing information about the drawing attributes of a device such as a display or a printer. All drawing calls are made through a device-context object, which encapsulates the Windows APIs for drawing lines, shapes, and text. Device contexts allow device-independent drawing in Windows. Device contexts can be used to draw to the screen, to the printer, or to a metafile.  
  
 [CPaintDC](../mfc/reference/cpaintdc-class.md) objects encapsulate the common idiom of Windows, calling the `BeginPaint` function, then drawing in the device context, then calling the `EndPaint` function. The `CPaintDC` constructor calls `BeginPaint` for you, and the destructor calls `EndPaint`. The simplified process is to create the [CDC](../mfc/reference/cdc-class.md) object, draw, and then destroy the `CDC` object. In the framework, much of even this process is automated. In particular, your `OnDraw` function is passed a `CPaintDC` already prepared (via `OnPrepareDC`), and you simply draw into it. It is destroyed by the framework and the underlying device context is released to Windows upon return from the call to your `OnDraw` function.  
  
 [CClientDC](../mfc/reference/cclientdc-class.md) objects encapsulate working with a device context that represents only the client area of a window. The `CClientDC` constructor calls the `GetDC` function, and the destructor calls the `ReleaseDC` function. [CWindowDC](../mfc/reference/cwindowdc-class.md) objects encapsulate a device context that represents the whole window, including its frame.  
  
 [CMetaFileDC](../mfc/reference/cmetafiledc-class.md) objects encapsulate drawing into a Windows metafile. In contrast to the `CPaintDC` passed to `OnDraw`, you must in this case call [OnPrepareDC](../mfc/reference/cview-class.md#cview__onpreparedc) yourself.  
  
## Mouse Drawing  
 Most drawing in a framework program — and thus most device-context work — is done in the view's `OnDraw` member function. However, you can still use device-context objects for other purposes. For example, to provide tracking feedback for mouse movement in a view, you need to draw directly into the view without waiting for `OnDraw` to be called.  
  
 In such a case, you can use a [CClientDC](../mfc/reference/cclientdc-class.md) device-context object to draw directly into the view.  
  
### What do you want to know more about  
  
-   [Device contexts (definition)](http://msdn.microsoft.com/library/windows/desktop/dd183553)  
  
-   [Drawing in a View](../mfc/drawing-in-a-view.md)  
  
-   [Interpreting User Input Through a View](../mfc/interpreting-user-input-through-a-view.md)  
  
-   [Lines and curves](http://msdn.microsoft.com/library/windows/desktop/dd145028)  
  
-   [Filled shapes](http://msdn.microsoft.com/library/windows/desktop/dd162714)  
  
-   [Fonts and text](http://msdn.microsoft.com/library/windows/desktop/dd144819)  
  
-   [Colors](http://msdn.microsoft.com/library/windows/desktop/dd183450)  
  
-   [Coordinate spaces and transformations](http://msdn.microsoft.com/library/windows/desktop/dd183475)  
  
## See Also  
 [Window Objects](../mfc/window-objects.md)

