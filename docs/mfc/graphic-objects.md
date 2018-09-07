---
title: "Graphic Objects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["HRGN", "HFONT", "HBITMAP"]
dev_langs: ["C++"]
helpviewer_keywords: ["CRgn class [MFC], HRGN handle type", "HPEN [MFC]", "objects [MFC], graphic", "palettes [MFC], creating in device context", "pens [MFC], creating in device context", "bitmaps [MFC], creating in device contexts", "palette objects [MFC]", "memory [MFC], display contexts", "MFC, graphic objects", "regions [MFC], creating in device context", "CPen class [MFC], HPEN handle type", "GDI objects [MFC]", "HRGN [MFC]", "graphic objects [MFC]", "GDI objects [MFC], graphic-object classes", "CFont class [MFC], HFONT handle type", "HFONT and class CFont [MFC]", "HBITMAP and class CBitmap [MFC]", "fonts [MFC], creating in device context", "images [MFC], graphic objects [MFC]", "CBitmap class [MFC], HBITMAP handle type", "HPALETTE and class CPalette [MFC]", "CBrush class [MFC], HBRUSH handle type", "objects [MFC], graphic objects", "drawing [MFC], in device contexts", "device contexts [MFC], graphic objects [MFC]", "brushes [MFC], creating in device context", "region objects [MFC]", "pen objects [MFC]", "GDI [MFC], graphic-object classes", "graphic objects [MFC], creating in device context", "HBRUSH and class CBrush [MFC]", "painting and device context [MFC]", "CPalette class [MFC], HPALETTE handle type"]
ms.assetid: 41963b25-34b7-4343-8446-34ba516b83ca
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Graphic Objects
Windows provides a variety of drawing tools to use in device contexts. It provides pens to draw lines, brushes to fill interiors, and fonts to draw text. MFC provides graphic-object classes equivalent to the drawing tools in Windows. The table below shows the available classes and the equivalent Windows graphics device interface (GDI) handle types.  
  
> [!NOTE]
>  For more information, see the GDI+ SDK documentation at: [https://msdn.microsoft.com/library/default.aspurl=/library/gdicpp/GDIPlus/GDIPlus.asp](https://msdn.microsoft.com/library/default.aspurl=/library/gdicpp/gdiplus/gdiplus.asp).  
  
 This article explains the use of these graphic-object classes:  
  
### Classes for Windows GDI Objects  
  
|Class|Windows handle type|  
|-----------|-------------------------|  
|[CPen](../mfc/reference/cpen-class.md)|`HPEN`|  
|[CBrush](../mfc/reference/cbrush-class.md)|`HBRUSH`|  
|[CFont](../mfc/reference/cfont-class.md)|**HFONT**|  
|[CBitmap](../mfc/reference/cbitmap-class.md)|`HBITMAP`|  
|[CPalette](../mfc/reference/cpalette-class.md)|`HPALETTE`|  
|[CRgn](../mfc/reference/crgn-class.md)|**HRGN**|  
  
> [!NOTE]
>  The class [CImage](../atl-mfc-shared/reference/cimage-class.md) provides enhanced bitmap support.  
  
 Each graphic-object class in the class library has a constructor that allows you to create graphic objects of that class, which you must then initialize with the appropriate create function, such as `CreatePen`.  
  
 Each graphic-object class in the class library has a cast operator that will cast an MFC object to the associated Windows handle. The resulting handle is valid until the associated object detaches it. Use the object's `Detach` member function to detach the handle.  
  
 The following code casts a `CPen` object to a Windows handle:  
  
 [!code-cpp[NVC_MFCDocViewSDI#5](../mfc/codesnippet/cpp/graphic-objects_1.cpp)]  
  
#### To create a graphic object in a device context  
  
1.  Define a graphic object on the stack frame. Initialize the object with the type-specific create function, such as `CreatePen`. Alternatively, initialize the object in the constructor. See the discussion of [one-stage and two-stage creation](../mfc/one-stage-and-two-stage-construction-of-objects.md), which provides example code.  
  
2.  [Select the object into the current device context](../mfc/selecting-a-graphic-object-into-a-device-context.md), saving the old graphic object that was selected before.  
  
3.  When done with the current graphic object, select the old graphic object back into the device context to restore its state.  
  
4.  Allow the frame-allocated graphic object to be deleted automatically when the scope is exited.  
  
> [!NOTE]
>  If you will be using a graphic object repeatedly, you can allocate it once and select it into a device context each time it is needed. Be sure to delete such an object when you no longer need it.  
  
### What do you want to know more about  
  
-   [One-stage and two-stage construction of graphic objects](../mfc/one-stage-and-two-stage-construction-of-objects.md)  
  
-   [Example of constructing a pen in one and two stages](../mfc/one-stage-and-two-stage-construction-of-objects.md)  
  
-   [Selecting a Graphic Object into a Device Context](../mfc/selecting-a-graphic-object-into-a-device-context.md)  
  
-   [Device contexts](../mfc/device-contexts.md)  
  
## See Also  
 [Window Objects](../mfc/window-objects.md)

