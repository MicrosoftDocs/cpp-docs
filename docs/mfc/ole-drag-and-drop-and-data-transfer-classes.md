---
description: "Learn more about: OLE Drag-and-Drop and Data Transfer Classes"
title: "OLE Drag-and-Drop and Data Transfer Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["ActiveX classes [MFC]", "OLE drag and drop [MFC], and data transfer classes", "drag and drop [MFC], classes", "data transfer [MFC], OLE", "data transfer classes [MFC]"]
ms.assetid: c8ab2825-ed69-4b88-8ae6-f368b94726b8
---
# OLE Drag-and-Drop and Data Transfer Classes

These classes are used in OLE data transfers. They allow data to be transferred between applications by using the Clipboard or through drag and drop.

[COleDropSource](reference/coledropsource-class.md)<br/>
Controls the drag-and-drop operation from start to finish. This class determines when the drag operation starts and when it ends. It also displays cursor feedback during the drag-and-drop operation.

[COleDataSource](reference/coledatasource-class.md)<br/>
Used when an application provides data for a data transfer. `COleDataSource` could be viewed as an object-oriented Clipboard object.

[COleDropTarget](reference/coledroptarget-class.md)<br/>
Represents the target of a drag-and-drop operation. A `COleDropTarget` object corresponds to a window on screen. It determines whether to accept any data dropped onto it and implements the actual drop operation.

[COleDataObject](reference/coledataobject-class.md)<br/>
Used as the receiver side to `COleDataSource`. `COleDataObject` objects provide access to the data stored by a `COleDataSource` object.

## See also

[Class Overview](class-library-overview.md)
