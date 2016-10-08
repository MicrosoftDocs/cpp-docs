---
title: "Output (Device Context) Classes"
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
ms.assetid: 35fd6435-a38e-42c6-a3fa-cd6f39370fc3
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
# Output (Device Context) Classes
These classes encapsulate the different types of device contexts available in Windows.  
  
 Most of the following classes encapsulate a handle to a Windows device context. A device context is a Windows object that contains information about the drawing attributes of a device such as a display or a printer. All drawing calls are made through a device-context object. Additional classes derived from `CDC` encapsulate specialized device-context functionality, including support for Windows metafiles.  
  
 [CDC](../VS_visualcpp/CDC-Class.md)  
 The base class for device contexts. Used directly for accessing the whole display and for accessing nondisplay contexts such as printers.  
  
 [CPaintDC](../VS_visualcpp/CPaintDC-Class.md)  
 A display context used in `OnPaint` member functions of windows. Automatically calls `BeginPaint` on construction and `EndPaint` on destruction.  
  
 [CClientDC](../VS_visualcpp/CClientDC-Class.md)  
 A display context for client areas of windows. Used, for example, to draw in an immediate response to mouse events.  
  
 [CWindowDC](../VS_visualcpp/CWindowDC-Class.md)  
 A display context for entire windows, including both the client and nonclient areas.  
  
 [CMetaFileDC](../VS_visualcpp/CMetaFileDC-Class.md)  
 A device context for Windows metafiles. A Windows metafile contains a sequence of graphics device interface (GDI) commands that can be replayed to create an image. Calls made to the member functions of a `CMetaFileDC` are recorded in a metafile.  
  
## Related Classes  
 [CPoint](../VS_visualcpp/CPoint-Class.md)  
 Holds coordinate (x, y) pairs.  
  
 [CSize](../VS_visualcpp/CSize-Class.md)  
 Holds distance, relative positions, or paired values.  
  
 [CRect](../VS_visualcpp/CRect-Class.md)  
 Holds coordinates of rectangular areas.  
  
 [CRgn](../VS_visualcpp/CRgn-Class.md)  
 Encapsulates a GDI region for manipulating an elliptical, polygonal, or irregular area within a window. Used in conjunction with the clipping member functions in class `CDC`.  
  
 [CRectTracker](../VS_visualcpp/CRectTracker-Class.md)  
 Displays and handles the user interface for resizing and moving rectangular objects.  
  
 [CColorDialog](../VS_visualcpp/CColorDialog-Class.md)  
 Provides a standard dialog box for selecting a color.  
  
 [CFontDialog](../VS_visualcpp/CFontDialog-Class.md)  
 Provides a standard dialog box for selecting a font.  
  
 [CPrintDialog](../VS_visualcpp/CPrintDialog-Class.md)  
 Provides a standard dialog box for printing a file.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)