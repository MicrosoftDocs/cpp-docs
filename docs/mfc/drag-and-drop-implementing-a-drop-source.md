---
title: "Drag and Drop: Implementing a Drop Source"
ms.date: "11/04/2016"
helpviewer_keywords: ["OLE drag and drop [MFC], initiating drag operations", "drag and drop [MFC], calling DoDragDrop", "OLE drag and drop [MFC], drop source", "OLE drag and drop [MFC], calling DoDragDrop", "drag and drop [MFC], initiating drag operations", "drag and drop [MFC], drop source"]
ms.assetid: 0ed2fda0-63fa-4b1e-b398-f1f142f40035
---
# Drag and Drop: Implementing a Drop Source

This article explains how to get your application to provide data to a drag-and-drop operation.

Basic implementation of a drop source is relatively simple. The first step is to determine what events begin a drag operation. Recommended user interface guidelines define the beginning of a drag operation as the selection of data and a **WM_LBUTTONDOWN** event occurring on a point inside the selected data. The MFC OLE samples [OCLIENT](../visual-cpp-samples.md) and [HIERSVR](../visual-cpp-samples.md) follow these guidelines.

If your application is a container and the selected data is a linked or an embedded object of type `COleClientItem`, call its `DoDragDrop` member function. Otherwise, construct a `COleDataSource` object, initialize it with the selection, and call the data source object's `DoDragDrop` member function. If your application is a server, use `COleServerItem::DoDragDrop`. For information about customizing standard drag-and-drop behavior, see the article [Drag and Drop: Customizing](../mfc/drag-and-drop-customizing.md).

If `DoDragDrop` returns **DROPEFFECT_MOVE**, delete the source data from the source document immediately. No other return value from `DoDragDrop` has any effect on a drop source.

For more information, see:

- [Implementing a Drop Target](../mfc/drag-and-drop-implementing-a-drop-target.md)

- [Customizing Drag and Drop](../mfc/drag-and-drop-customizing.md)

- [Creating and Destroying OLE Data Objects and Data Sources](../mfc/data-objects-and-data-sources-creation-and-destruction.md)

- [Manipulating OLE Data Objects and Data Sources](../mfc/data-objects-and-data-sources-manipulation.md)

## See also

[Drag and Drop (OLE)](../mfc/drag-and-drop-ole.md)<br/>
[COleDataSource::DoDragDrop](../mfc/reference/coledatasource-class.md#dodragdrop)<br/>
[COleClientItem::DoDragDrop](../mfc/reference/coleclientitem-class.md#dodragdrop)<br/>
[CView::OnDragLeave](../mfc/reference/cview-class.md#ondragleave)
