---
title: "OLE drag and drop"
description: "Overview of Microsoft Foundation Classes (MFC) OLE drag and drop, how to implement a drop source, a drop target, and how to customize drag and drop."
ms.date: "02/09/2020"
helpviewer_keywords: ["OLE server applications [MFC], drag and drop", "drag and drop [MFC]", "OLE applications [MFC], drag and drop", "File Manager drag and drop support [MFC]", "drag and drop [MFC], about OLE drag and drop", "OLE drag and drop [MFC]", ]
ms.assetid: a4595350-ca06-4400-88a1-f0175c76b77b
---
# OLE drag and drop

The drag-and-drop feature of OLE is primarily a shortcut for copying and pasting data. When you use the Clipboard to copy or paste data, a number of steps are required. You select the data, and choose **Cut** or **Copy** from the **Edit** menu. Then you move to the destination app or window, and place the cursor in the target location. Finally, you choose **Edit** > **Paste** from the menu.

The OLE drag-and-drop feature is different from the File Manager drag-and-drop mechanism. The File Manager can only handle filenames, and is designed specifically to pass filenames to applications. Drag and drop in OLE is much more general. It allows you to drag and drop any data that could also be placed on the Clipboard.

When you use OLE drag and drop, you remove two steps from the process. You select the data from the source window (the "drop source"), then you drag it to the destination (the "drop target"). You drop it by releasing the mouse button. The operation eliminates the need for menus, and it's quicker than the copy/paste sequence. There's only one requirement: Both the drop source and drop target must be open, and at least partially visible on the screen.

Using OLE drag and drop, data can be transferred easily from one location to another: Within a document, between different documents, or between applications. It may be implemented in either a container or a server application. Any application could be a drop source, a drop target, or both. If an application implements both drop-source and drop-target support, you can drag and drop between child windows, or within one window. This feature makes your application much easier to use.

The [Data objects and data sources (OLE)](data-objects-and-data-sources-ole.md) articles explain how to implement data transfer in your applications. It's also helpful to examine the MFC OLE samples [OCLIENT](../overview/visual-cpp-samples.md) and [HIERSVR](../overview/visual-cpp-samples.md).

## <a name="implement-a-drop-source"></a> Implement a drop source

To get your application to provide data to a drag-and-drop operation, you implement a drop source. Basic implementation of a drop source is relatively simple. The first step is to determine what events begin a drag operation. Recommended user interface guidelines define the beginning of a drag operation as when a **WM_LBUTTONDOWN** event occurs on a point inside some selected data. The MFC OLE samples [OCLIENT](../overview/visual-cpp-samples.md) and [HIERSVR](../overview/visual-cpp-samples.md) follow these guidelines.

If your application is a container and the selected data is a linked or an embedded object of type `COleClientItem`, call its `DoDragDrop` member function. Otherwise, construct a `COleDataSource` object, initialize it with the selection, and call the data source object's `DoDragDrop` member function. If your application is a server, use `COleServerItem::DoDragDrop`. For information about customizing standard drag-and-drop behavior, see the section [Customize drag and drop](#customize-drag-and-drop).

If `DoDragDrop` returns **DROPEFFECT_MOVE**, delete the source data from the source document immediately. No other return value from `DoDragDrop` has any effect on a drop source.

For more information, see [OLE data objects and data sources: Creation and destruction](data-objects-and-data-sources-creation-and-destruction.md) and [OLE data objects and data sources: Manipulation](data-objects-and-data-sources-manipulation.md)\.

## <a name="implement-a-drop-target"></a> Implement a drop target

It takes slightly more work to implement a drop target than a drop source, but it's still relatively simple.

### To implement an OLE drop target

1. If it isn't already there, add a call to `AfxOleInit` in your application's `InitInstance` member function. This call is required to initialize the OLE libraries.

1. Add a member variable to each view in the application that you want to be a drop target. This member variable must be of type `COleDropTarget` or a class derived from it.

1. From your view class's function that handles the **WM_CREATE** message (typically `OnCreate`), call the new member variable's `Register` member function. `Revoke` will be called automatically for you when your view is destroyed.

1. Override the following functions. If you want the same behavior throughout your application, override these functions in your view class. If you want to modify behavior in isolated cases or want to enable dropping on non-`CView` windows, override these functions in your `COleDropTarget`-derived class.

   | Override | To allow |
   | -------- | -------- |
   | `OnDragEnter` | Drop operations to occur in the window. Called when the cursor first enters the window. |
   | `OnDragLeave` | Special behavior when the drag operation leaves the specified window. |
   | `OnDragOver` | Drop operations to occur in the window. Called when the cursor is being dragged across the window. |
   | `OnDrop` | Handling of data being dropped into the specified window. |
   | `OnScrollBy` | Special behavior for when scrolling is necessary in the target window. |

See the MAINVIEW.CPP file that is part of the MFC OLE sample [OCLIENT](../overview/visual-cpp-samples.md) for an example of how these functions work together.

For more information, see [OLE data objects and data sources: Creation and destruction](data-objects-and-data-sources-creation-and-destruction.md) and [OLE data objects and data sources: Manipulation](data-objects-and-data-sources-manipulation.md)\.

## <a name="customize-drag-and-drop"></a> Customize drag and drop

The default implementation of the drag-and-drop feature is sufficient for most applications. However, some applications may require you to change this standard behavior. This section explains the steps necessary to change these defaults. You can use this technique to make applications that don't support compound documents into drop sources.

If you're customizing standard OLE drag-and-drop behavior, or you have a non-OLE application, you must create a `COleDataSource` object to contain the data. When the user starts a drag-and-drop operation, your code should call the `DoDragDrop` function from this object instead of from other classes that support drag-and-drop operations.

Optionally, you can create a `COleDropSource` object to control the drop and override some of its functions depending on the type of behavior you want to change. This drop-source object is then passed to `COleDataSource::DoDragDrop` to change the default behavior of these functions. These different options allow a great deal of flexibility in how you support drag-and-drop operations in your application. For more information about data sources, see the article [Data Objects and Data Sources (OLE)](data-objects-and-data-sources-ole.md).

You can override the following functions to customize drag-and-drop operations:

| Override | To customize |
| -------- | ------------ |
| `OnBeginDrag` | How the drag operation begins after you call `DoDragDrop`. |
| `GiveFeedback` | Visual feedback, such as cursor appearance, for different drop results. |
| `QueryContinueDrag` | The termination of a drag-and-drop operation. This function enables you to check modifier key states during the drag operation. |

## See also

[OLE](ole-in-mfc.md)\
[OLE Data objects and data sources](data-objects-and-data-sources-ole.md)\
[OLE data objects and data sources: Creation and destruction](data-objects-and-data-sources-creation-and-destruction.md)\
[OLE data objects and data sources: Manipulation](data-objects-and-data-sources-manipulation.md)\
[COleClientItem::DoDragDrop](reference/coleclientitem-class.md#dodragdrop)\
[COleDataSource class](reference/coledatasource-class.md)\
[COleDataSource::DoDragDrop](reference/coledatasource-class.md#dodragdrop)\
[COleDropSource class](reference/coledropsource-class.md)\
[COleDropTarget class](reference/coledroptarget-class.md)\
[CView::OnDragLeave](reference/cview-class.md#ondragleave)
