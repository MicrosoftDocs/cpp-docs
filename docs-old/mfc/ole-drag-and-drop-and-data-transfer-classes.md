---
title: "OLE Drag-and-Drop and Data Transfer Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.classes.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX classes [C++]"
  - "OLE drag and drop [C++], and data transfer classes"
  - "drag and drop [C++], classes"
  - "data transfer [C++], OLE"
  - "data transfer classes [C++]"
ms.assetid: c8ab2825-ed69-4b88-8ae6-f368b94726b8
caps.latest.revision: 7
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
# OLE Drag-and-Drop and Data Transfer Classes
These classes are used in OLE data transfers. They allow data to be transferred between applications by using the Clipboard or through drag and drop.  
  
 [COleDropSource](../mfcref/coledropsource-class.md)  
 Controls the drag-and-drop operation from start to finish. This class determines when the drag operation starts and when it ends. It also displays cursor feedback during the drag-and-drop operation.  
  
 [COleDataSource](../mfcref/coledatasource-class.md)  
 Used when an application provides data for a data transfer. `COleDataSource` could be viewed as an object-oriented Clipboard object.  
  
 [COleDropTarget](../mfcref/coledroptarget-class.md)  
 Represents the target of a drag-and-drop operation. A `COleDropTarget` object corresponds to a window on screen. It determines whether to accept any data dropped onto it and implements the actual drop operation.  
  
 [COleDataObject](../mfcref/coledataobject-class.md)  
 Used as the receiver side to `COleDataSource`. `COleDataObject` objects provide access to the data stored by a `COleDataSource` object.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)