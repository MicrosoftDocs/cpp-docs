---
title: "How to: Implement Tracking in Your Code"
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
ms.assetid: baaeca2c-5114-485f-bf58-8807db1bc973
caps.latest.revision: 9
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
# How to: Implement Tracking in Your Code
To track an OLE item, you must handle certain events related to the item, such as clicking the item or updating the view of the document. In all cases, it is sufficient to declare a temporary [CRectTracker](../VS_visualcpp/CRectTracker-Class.md) object and manipulate the item by means of this object.  
  
 When a user selects an item or inserts an object with a menu command, you must initialize the tracker with the proper styles to represent the state of the OLE item. The following table outlines the conventions used by the OCLIENT sample. For more information on these styles, see `CRectTracker`.  
  
### Container Styles and States of the OLE Item  
  
|Style displayed|State of OLE item|  
|---------------------|-----------------------|  
|Dotted border|Item is linked|  
|Solid border|Item is embedded in your document|  
|Resize handles|Item is currently selected|  
|Hatched border|Item is currently in-place active|  
|Hatching pattern overlays item|Item's server is open|  
  
 You can handle this initialization easily using a procedure that checks the state of the OLE item and sets the appropriate styles. The **SetupTracker** function found in the OCLIENT sample demonstrates tracker initialization. The parameters for this function are the address of the tracker, *pTracker*; a pointer to the client item that is related to the tracker, `pItem`; and a pointer to a rectangle, *pTrueRect*. For a more complete example of this function, see the MFC OLE sample [OCLIENT](../VS_visualcpp/Visual-C---Samples.md).  
  
 The **SetupTracker** code example presents a single function; lines of the function are interspersed with discussion of the function's features:  
  
 [!CODE [NVC_MFCOClient#1](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCOClient#1)]  
  
 The tracker is initialized by setting the minimum size and clearing the style of the tracker.  
  
 [!CODE [NVC_MFCOClient#2](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCOClient#2)]  
  
 The following lines check to see whether the item is currently selected and whether the item is linked to the document or embedded in it. Resize handles located on the inside of the border are added to the style, indicating that the item is currently selected. If the item is linked to your document, the dotted border style is used. A solid border is used if the item is embedded.  
  
 [!CODE [NVC_MFCOClient#3](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCOClient#3)]  
  
 The following code overlays the item with a hatched pattern if the item is currently open.  
  
 [!CODE [NVC_MFCOClient#4](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCOClient#4)]  
  
 You can then call this function whenever the tracker has to be displayed. For example, call this function from the `OnDraw` function of your view class. This updates the tracker's appearance whenever the view is repainted. For a complete example, see the **CMainView::OnDraw** function of the MFC OLE sample [OCLIENT](../VS_visualcpp/Visual-C---Samples.md).  
  
 In your application, events that require tracker code, such as resizing, moving, or hit detecting, will occur. These actions usually indicate that an attempt is being made to grab or move the item. In these cases, you will need to decide what was grabbed: a resize handle or a portion of the border between resize handles. The `OnLButtonDown` message handler is a good place to test the position of the mouse in relation to the item. Make a call to `CRectTracker::HitTest`. If the test returns something besides **CRectTracker::hitOutside**, the item is being resized or moved. Therefore, you should make a call to the `Track` member function. See the **CMainView::OnLButtonDown** function located in the MFC OLE sample [OCLIENT](../VS_visualcpp/Visual-C---Samples.md) for a complete example.  
  
 The `CRectTracker` class provides several different cursor shapes used to indicate whether a move, resize, or drag operation is taking place. To handle this event, check to see whether the item currently under the mouse is selected. If it is, make a call to `CRectTracker::SetCursor`, or call the default handler. The following example is from the MFC OLE sample [OCLIENT](../VS_visualcpp/Visual-C---Samples.md):  
  
 [!CODE [NVC_MFCOClient#5](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCOClient#5)]  
  
## See Also  
 [Trackers: Implementing Trackers in Your OLE Application](../VS_visualcpp/Trackers--Implementing-Trackers-in-Your-OLE-Application.md)