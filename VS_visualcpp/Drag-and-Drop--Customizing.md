---
title: "Drag and Drop: Customizing"
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
ms.assetid: 03369d3e-46bf-4140-b58c-d0c9657cf38a
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
# Drag and Drop: Customizing
The default implementation of the drag-and-drop feature is sufficient for most applications. However, some applications may require that this standard behavior be changed. This article explains the steps necessary to change these defaults. In addition, you can use this technique to establish applications that do not support compound documents as drop sources.  
  
 If you are customizing standard OLE drag-and-drop behavior, or you have a non-OLE application, you must create a `COleDataSource` object to contain the data. When the user starts a drag-and-drop operation, your code should call the `DoDragDrop` function from this object instead of from other classes that support drag-and-drop operations.  
  
 Optionally, you can create a `COleDropSource` object to control the drop and override some of its functions depending on the type of behavior you want to change. This drop-source object is then passed to `COleDataSource::DoDragDrop` to change the default behavior of these functions. These different options allow a great deal of flexibility in how you support drag-and-drop operations in your application. For more information about data sources, see the article [Data Objects and Data Sources (OLE)](../VS_visualcpp/Data-Objects-and-Data-Sources--OLE-.md).  
  
 You can override the following functions to customize drag-and-drop operations:  
  
|Override|To customize|  
|--------------|------------------|  
|`OnBeginDrag`|How dragging is initiated after you call `DoDragDrop`.|  
|`GiveFeedback`|Visual feedback, such as cursor appearance, for different drop results.|  
|`QueryContinueDrag`|The termination of a drag-and-drop operation. This function enables you to check modifier key states during the drag operation.|  
  
## See Also  
 [Drag and Drop (OLE)](../VS_visualcpp/Drag-and-Drop--OLE-.md)   
 [COleDropSource Class](../VS_visualcpp/COleDropSource-Class.md)   
 [COleDataSource Class](../VS_visualcpp/COleDataSource-Class.md)