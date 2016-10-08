---
title: "Tree Control Drag-and-Drop Operations"
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
ms.assetid: 3cf78b4c-4579-4fe1-9bc9-c5ab876e4af1
caps.latest.revision: 10
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
# Tree Control Drag-and-Drop Operations
A tree control ([CTreeCtrl](../VS_visualcpp/CTreeCtrl-Class.md)) sends a notification when the user starts to drag an item. The control sends a [TVN_BEGINDRAG](http://msdn.microsoft.com/library/windows/desktop/bb773504) notification message when the user begins dragging an item with the left mouse button and a [TVN_BEGINRDRAG](http://msdn.microsoft.com/library/windows/desktop/bb773509) notification message when the user begins dragging with the right button. You can prevent a tree control from sending these notifications by giving the tree control the **TVS_DISABLEDRAGDROP** style.  
  
 You obtain an image to display during a drag operation by calling the [CreateDragImage](../Topic/CTreeCtrl::CreateDragImage.md) member function. The tree control creates a dragging bitmap based on the label of the item being dragged. Then the tree control creates an image list, adds the bitmap to it, and returns a pointer to the [CImageList](../VS_visualcpp/CImageList-Class.md) object.  
  
 You must provide the code that actually drags the item. This typically involves using the dragging capabilities of the image list functions and processing the [WM_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616) and [WM_LBUTTONUP](http://msdn.microsoft.com/library/windows/desktop/ms645608) (or [WM_RBUTTONUP](http://msdn.microsoft.com/library/windows/desktop/ms646243)) messages sent after the drag operation has begun. For more information about the image list functions, see [CImageList](../VS_visualcpp/CImageList-Class.md) in the *MFC Reference* and [Image Lists](http://msdn.microsoft.com/library/windows/desktop/bb761389) in the Windows SDK. For more information about dragging a tree control item, see [Dragging the Tree View Item](http://msdn.microsoft.com/library/windows/desktop/bb760017), also in the Windows SDK.  
  
 If items in a tree control are to be the targets of a drag-and-drop operation, you need to know when the mouse cursor is on a target item. You can find out by calling the [HitTest](../Topic/CTreeCtrl::HitTest.md) member function. You specify either a point and integer, or the address of a [TVHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb773448) structure that contains the current coordinates of the mouse cursor. When the function returns, the integer or structure contains a flag indicating the location of the mouse cursor relative to the tree control. If the cursor is over an item in the tree control, the structure contains the handle of the item as well.  
  
 You can indicate that an item is the target of a drag-and-drop operation by calling the [SetItem](../Topic/CTreeCtrl::SetItem.md) member function to set the state to the `TVIS_DROPHILITED` value. An item that has this state is drawn in the style used to indicate a drag-and-drop target.  
  
## See Also  
 [Using CTreeCtrl](../VS_visualcpp/Using-CTreeCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)