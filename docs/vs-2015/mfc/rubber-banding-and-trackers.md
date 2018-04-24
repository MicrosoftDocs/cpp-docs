---
title: "Rubber-Banding and Trackers | Microsoft Docs"
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
  - "trackers"
  - "CRectTracker class, implementing trackers"
  - "OLE objects, selecting"
  - "rubber banding"
  - "WM_LBUTTONDOWN"
ms.assetid: 0d0fa64c-6418-4baf-ab7f-2d16ca039230
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Rubber-Banding and Trackers
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Rubber-Banding and Trackers](https://docs.microsoft.com/cpp/mfc/rubber-banding-and-trackers).  
  
  
Another feature supplied with trackers is the "rubber-band" selection, which allows a user to select multiple OLE items by dragging a sizing rectangle around the items to be selected. When the user releases the left mouse button, items within the region selected by the user are selected and can be manipulated by the user. For instance, the user might drag the selection into another container application.  
  
 Implementing this feature requires some additional code in your application's `WM_LBUTTONDOWN` handler function.  
  
 The following code sample implements rubber-band selection and additional features.  
  
 [!code-cpp[NVC_MFCOClient#6](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCOClient/Cpp/mainview.cpp#6)]  
  
 If you want to allow reversible orientation of the tracker during rubber-banding, you should call [CRectTracker::TrackRubberBand](../mfc/reference/crecttracker-class.md#crecttracker__trackrubberband) with the third parameter set to **TRUE**. Remember that allowing reversible orientation will sometimes cause [CRectTracker::m_rect](../mfc/reference/crecttracker-class.md#crecttracker__m_rect) to become inverted. This can be corrected by a call to [CRect::NormalizeRect](../atl-mfc-shared/reference/crect-class.md#normalizerect).  
  
 For more information, see [Container Client Items](../mfc/containers-client-items.md) and [Customizing Drag and Drop](../mfc/drag-and-drop-customizing.md).  
  
## See Also  
 [Trackers: Implementing Trackers in Your OLE Application](../mfc/trackers-implementing-trackers-in-your-ole-application.md)   
 [CRectTracker Class](../mfc/reference/crecttracker-class.md)




