---
title: "Providing Drag-and-Drop Support for Header Items | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HDS_DRAGDROP style"
  - "header items in header controls"
  - "CHeaderCtrl class, drag and drop support"
  - "HDN_ notifications"
ms.assetid: 93a152ec-804f-488f-b260-b3a438d0dc0f
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Providing Drag-and-Drop Support for Header Items
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Providing Drag-and-Drop Support for Header Items](https://docs.microsoft.com/cpp/mfc/providing-drag-and-drop-support-for-header-items).  
  
  
To provide drag-and-drop support for header items, specify the `HDS_DRAGDROP` style. Drag-and-drop support for header items gives the user the ability to reorder the header items of a header control. The default behavior provides a semitransparent drag image of the header item being dragged and a visual indicator of the new position, if the header item is dropped.  
  
 As with common drag-and-drop functionality, you can extend the default drag-and-drop behavior by handling the **HDN_BEGINDRAG** and **HDN_ENDDRAG** notifications. You can also customize the appearance of the drag image by overriding the [CHeaderCtrl::CreateDragImage](../mfc/reference/cheaderctrl-class.md#cheaderctrl__createdragimage) member function.  
  
> [!NOTE]
>  If you are providing drag-and-drop support for an embedded header control in a list control, see the Extended Style section in the [Changing List Control Styles](../mfc/changing-list-control-styles.md) topic.  
  
## See Also  
 [Using CHeaderCtrl](../mfc/using-cheaderctrl.md)





