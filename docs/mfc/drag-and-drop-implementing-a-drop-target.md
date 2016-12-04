---
title: "Drag and Drop: Implementing a Drop Target | Microsoft Docs"
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
  - "OLE drag and drop, implementing drop targets"
  - "OLE drag and drop, drop target"
  - "drag and drop, drop target"
ms.assetid: 0689f1ec-5326-4008-b226-4b373c881358
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
# Drag and Drop: Implementing a Drop Target
This article outlines how to make your application a drop target. Implementing a drop target takes slightly more work than implementing a drop source, but it is still relatively simple. These techniques also apply to non-OLE applications.  
  
#### To implement a drop target  
  
1.  Add a member variable to each view in the application that you want to be a drop target. This member variable must be of type `COleDropTarget` or a class derived from it.  
  
2.  From your view class's function that handles the `WM_CREATE` message (typically `OnCreate`), call the new member variable's `Register` member function. `Revoke` will be called automatically for you when your view is destroyed.  
  
3.  Override the following functions. If you want the same behavior throughout your application, override these functions in your view class. If you want to modify behavior in isolated cases or want to enable dropping on non-`CView` windows, override these functions in your `COleDropTarget`-derived class.  
  
    |Override|To allow|  
    |--------------|--------------|  
    |`OnDragEnter`|Drop operations to occur in the window. Called when the cursor first enters the window.|  
    |`OnDragLeave`|Special behavior when the drag operation leaves the specified window.|  
    |`OnDragOver`|Drop operations to occur in the window. Called when the cursor is being dragged across the window.|  
    |`OnDrop`|Handling of data being dropped into the specified window.|  
    |`OnScrollBy`|Special behavior for when scrolling is necessary in the target window.|  
  
 See the MAINVIEW.CPP file that is part of the MFC OLE sample [OCLIENT](../visual-cpp-samples.md) for an example of how these functions work together.  
  
 For more information, see:  
  
-   [Implementing a Drop Source](../mfc/drag-and-drop-implementing-a-drop-source.md)  
  
-   [Creating and Destroying OLE Data Objects and Data Sources](../mfc/data-objects-and-data-sources-creation-and-destruction.md)  
  
-   [Manipulating OLE Data Objects and Data Sources](../mfc/data-objects-and-data-sources-manipulation.md)  
  
## See Also  
 [Drag and Drop (OLE)](../mfc/drag-and-drop-ole.md)   
 [COleDropTarget Class](../mfc/reference/coledroptarget-class.md)
