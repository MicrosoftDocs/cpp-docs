---
title: "Dragging Images from an Image List | Microsoft Docs"
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
  - "CImageList class, dragging images from"
  - "dragging images from image lists"
  - "image lists [C++], dragging images from"
  - "images [C++], dragging from image lists"
ms.assetid: af691db8-e4f0-4046-b7b9-9acc68d3713d
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
# Dragging Images from an Image List
[CImageList](../mfc/reference/cimagelist-class.md) includes functions for dragging an image on the screen. The dragging functions move an image smoothly, in color, and without any flashing of the cursor. Both masked and unmasked images can be dragged.  
  
 The [BeginDrag](../mfc/reference/cimagelist-class.md#cimagelist__begindrag) member function begins a drag operation. The parameters include the index of the image to drag and the location of the hot spot within the image. The hot spot is a single pixel that the dragging functions recognize as the exact screen location of the image. Typically, an application sets the hot spot so that it coincides with the hot spot of the mouse cursor. The [DragMove](../mfc/reference/cimagelist-class.md#cimagelist__dragmove) member function moves the image to a new location.  
  
 The [DragEnter](../mfc/reference/cimagelist-class.md#cimagelist__dragenter) member function sets the initial position of the drag image within a window and draws the image at the position. The parameters include a pointer to the window in which to draw the image and a point that specifies the coordinates of the initial position within the window. The coordinates are relative to the window's upper-left corner, not the client area. The same is true for all of the image-dragging functions that take coordinates as parameters. This means you must compensate for the widths of window elements, such as the border, title bar, and menu bar, when specifying the coordinates. If you specify a **NULL** window handle when calling `DragEnter`, the dragging functions draw the image in the device context associated with the desktop window, and the coordinates are relative to the upper-left corner of the screen.  
  
 `DragEnter` locks all other updates to the given window during the drag operation. If you need to do any drawing during a drag operation, such as highlighting the target of a drag-and-drop operation, you can temporarily hide the dragged image by using the [DragLeave](../mfc/reference/cimagelist-class.md#cimagelist__dragleave) member function. You can also use the [DragShowNoLock](../mfc/reference/cimagelist-class.md#cimagelist__dragshownolock) member function.  
  
 Call [EndDrag](../mfc/reference/cimagelist-class.md#cimagelist__enddrag) when you're done dragging the image.  
  
 The [SetDragCursorImage](../mfc/reference/cimagelist-class.md#cimagelist__setdragcursorimage) member function creates a new drag image by combining the given image (typically a mouse cursor image) with the current drag image. Because the dragging functions use the new image during a drag operation, you should use the Windows [ShowCursor](http://msdn.microsoft.com/library/windows/desktop/ms648396) function to hide the actual mouse cursor after calling `SetDragCursorImage`. Otherwise, the system may appear to have two mouse cursors for the duration of the drag operation.  
  
 When an application calls `BeginDrag`, the system creates a temporary, internal image list and copies the specified drag image to the internal list. You can retrieve a pointer to the temporary drag image list by using the [GetDragImage](../mfc/reference/cimagelist-class.md#cimagelist__getdragimage) member function. The function also retrieves the current drag position and the offset of the drag image relative to the drag position.  
  
## See Also  
 [Using CImageList](../mfc/using-cimagelist.md)   
 [Controls](../mfc/controls-mfc.md)

