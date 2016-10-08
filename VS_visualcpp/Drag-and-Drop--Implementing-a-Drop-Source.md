---
title: "Drag and Drop: Implementing a Drop Source"
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
ms.assetid: 0ed2fda0-63fa-4b1e-b398-f1f142f40035
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
# Drag and Drop: Implementing a Drop Source
This article explains how to get your application to provide data to a drag-and-drop operation.  
  
 Basic implementation of a drop source is relatively simple. The first step is to determine what events begin a drag operation. Recommended user interface guidelines define the beginning of a drag operation as the selection of data and a `WM_LBUTTONDOWN` event occurring on a point inside the selected data. The MFC OLE samples [OCLIENT](../VS_visualcpp/Visual-C---Samples.md) and [HIERSVR](../VS_visualcpp/Visual-C---Samples.md) follow these guidelines.  
  
 If your application is a container and the selected data is a linked or an embedded object of type `COleClientItem`, call its `DoDragDrop` member function. Otherwise, construct a `COleDataSource` object, initialize it with the selection, and call the data source object's `DoDragDrop` member function. If your application is a server, use `COleServerItem::DoDragDrop`. For information about customizing standard drag-and-drop behavior, see the article [Drag and Drop: Customizing](../VS_visualcpp/Drag-and-Drop--Customizing.md).  
  
 If `DoDragDrop` returns `DROPEFFECT_MOVE`, delete the source data from the source document immediately. No other return value from `DoDragDrop` has any effect on a drop source.  
  
 For more information, see:  
  
-   [Implementing a Drop Target](../VS_visualcpp/Drag-and-Drop--Implementing-a-Drop-Target.md)  
  
-   [Customizing Drag and Drop](../VS_visualcpp/Drag-and-Drop--Customizing.md)  
  
-   [Creating and Destroying OLE Data Objects and Data Sources](../VS_visualcpp/Data-Objects-and-Data-Sources--Creation-and-Destruction.md)  
  
-   [Manipulating OLE Data Objects and Data Sources](../VS_visualcpp/Data-Objects-and-Data-Sources--Manipulation.md)  
  
## See Also  
 [Drag and Drop (OLE)](../VS_visualcpp/Drag-and-Drop--OLE-.md)   
 [COleDataSource::DoDragDrop](../Topic/COleDataSource::DoDragDrop.md)   
 [COleClientItem::DoDragDrop](../Topic/COleClientItem::DoDragDrop.md)   
 [CView::OnDragLeave](../Topic/CView::OnDragLeave.md)