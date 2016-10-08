---
title: "Working with Window Objects"
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
ms.assetid: f73aa254-90e3-46a9-8e9b-d78b7054a331
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
# Working with Window Objects
Working with windows calls for two kinds of activity:  
  
-   Handling Windows messages  
  
-   Drawing in the window  
  
 To handle Windows messages in any window, including your own child windows, see [Mapping Messages to Functions](../VS_visualcpp/Mapping-Messages-to-Functions.md) to map the messages to your C++ window class. Then write message-handler member functions in your class.  
  
 Most drawing in a framework application occurs in the view, whose [OnDraw](../Topic/CView::OnDraw.md) member function is called whenever the window's contents must be drawn. If your window is a child of the view, you might delegate some of the view's drawing to your child window by having `OnDraw` call one of your window's member functions.  
  
 In any case, you will need a device context for drawing. You can use the stock pen, brush, and other graphic objects contained in the device context associated with your window. Or you can modify these objects to get the drawing effects you need. With your device context set up as you like, call member functions of class [CDC](../VS_visualcpp/CDC-Class.md) (device-context class) to draw lines, shapes, and text; to use colors; and to work with a coordinate system.  
  
## What do you want to know more about?  
  
-   [Message handling and mapping](../VS_visualcpp/Message-Handling-and-Mapping.md)  
  
-   [Drawing in a view](../VS_visualcpp/Drawing-in-a-View.md)  
  
-   [Device contexts](../VS_visualcpp/Device-Contexts.md)  
  
-   [Graphic objects](../VS_visualcpp/Graphic-Objects.md)  
  
## See Also  
 [Window Objects](../VS_visualcpp/Window-Objects.md)