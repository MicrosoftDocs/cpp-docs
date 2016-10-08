---
title: "OLE Drag-and-Drop and Data Transfer Classes"
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
ms.assetid: c8ab2825-ed69-4b88-8ae6-f368b94726b8
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
# OLE Drag-and-Drop and Data Transfer Classes
These classes are used in OLE data transfers. They allow data to be transferred between applications by using the Clipboard or through drag and drop.  
  
 [COleDropSource](../VS_visualcpp/COleDropSource-Class.md)  
 Controls the drag-and-drop operation from start to finish. This class determines when the drag operation starts and when it ends. It also displays cursor feedback during the drag-and-drop operation.  
  
 [COleDataSource](../VS_visualcpp/COleDataSource-Class.md)  
 Used when an application provides data for a data transfer. `COleDataSource` could be viewed as an object-oriented Clipboard object.  
  
 [COleDropTarget](../VS_visualcpp/COleDropTarget-Class.md)  
 Represents the target of a drag-and-drop operation. A `COleDropTarget` object corresponds to a window on screen. It determines whether to accept any data dropped onto it and implements the actual drop operation.  
  
 [COleDataObject](../VS_visualcpp/COleDataObject-Class.md)  
 Used as the receiver side to `COleDataSource`. `COleDataObject` objects provide access to the data stored by a `COleDataSource` object.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)