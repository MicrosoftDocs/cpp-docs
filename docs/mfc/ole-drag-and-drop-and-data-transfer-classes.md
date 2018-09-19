---
title: "OLE Drag-and-Drop and Data Transfer Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["vc.classes.ole"]
dev_langs: ["C++"]
helpviewer_keywords: ["ActiveX classes [MFC]", "OLE drag and drop [MFC], and data transfer classes", "drag and drop [MFC], classes", "data transfer [MFC], OLE", "data transfer classes [MFC]"]
ms.assetid: c8ab2825-ed69-4b88-8ae6-f368b94726b8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OLE Drag-and-Drop and Data Transfer Classes

These classes are used in OLE data transfers. They allow data to be transferred between applications by using the Clipboard or through drag and drop.

[COleDropSource](../mfc/reference/coledropsource-class.md)<br/>
Controls the drag-and-drop operation from start to finish. This class determines when the drag operation starts and when it ends. It also displays cursor feedback during the drag-and-drop operation.

[COleDataSource](../mfc/reference/coledatasource-class.md)<br/>
Used when an application provides data for a data transfer. `COleDataSource` could be viewed as an object-oriented Clipboard object.

[COleDropTarget](../mfc/reference/coledroptarget-class.md)<br/>
Represents the target of a drag-and-drop operation. A `COleDropTarget` object corresponds to a window on screen. It determines whether to accept any data dropped onto it and implements the actual drop operation.

[COleDataObject](../mfc/reference/coledataobject-class.md)<br/>
Used as the receiver side to `COleDataSource`. `COleDataObject` objects provide access to the data stored by a `COleDataSource` object.

## See Also

[Class Overview](../mfc/class-library-overview.md)

