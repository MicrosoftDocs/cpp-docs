---
title: "Rubber-Banding and Trackers"
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
ms.assetid: 0d0fa64c-6418-4baf-ab7f-2d16ca039230
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
# Rubber-Banding and Trackers
Another feature supplied with trackers is the "rubber-band" selection, which allows a user to select multiple OLE items by dragging a sizing rectangle around the items to be selected. When the user releases the left mouse button, items within the region selected by the user are selected and can be manipulated by the user. For instance, the user might drag the selection into another container application.  
  
 Implementing this feature requires some additional code in your application's `WM_LBUTTONDOWN` handler function.  
  
 The following code sample implements rubber-band selection and additional features.  
  
 [!CODE [NVC_MFCOClient#6](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCOClient#6)]  
  
 If you want to allow reversible orientation of the tracker during rubber-banding, you should call [CRectTracker::TrackRubberBand](../Topic/CRectTracker::TrackRubberBand.md) with the third parameter set to **TRUE**. Remember that allowing reversible orientation will sometimes cause [CRectTracker::m_rect](../Topic/CRectTracker::m_rect.md) to become inverted. This can be corrected by a call to [CRect::NormalizeRect](../Topic/CRect::NormalizeRect.md).  
  
 For more information, see [Container Client Items](../VS_visualcpp/Containers--Client-Items.md) and [Customizing Drag and Drop](../VS_visualcpp/Drag-and-Drop--Customizing.md).  
  
## See Also  
 [Trackers: Implementing Trackers in Your OLE Application](../VS_visualcpp/Trackers--Implementing-Trackers-in-Your-OLE-Application.md)   
 [CRectTracker Class](../VS_visualcpp/CRectTracker-Class.md)