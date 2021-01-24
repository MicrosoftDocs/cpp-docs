---
description: "Learn more about: Data Objects and Data Sources: Creation and Destruction"
title: "Data Objects and Data Sources: Creation and Destruction"
ms.date: "11/04/2016"
helpviewer_keywords: ["destroying data objects [MFC]", "object creation [MFC], data source objects", "data sources [MFC], and data objects", "data source objects [MFC], creating", "destruction [MFC], data sources", "data source objects [MFC], destroying", "data objects [MFC], creating", "data objects [MFC], destroying", "data sources [MFC], role", "data sources [MFC], destroying", "destruction [MFC], data objects", "data sources [MFC], creating"]
ms.assetid: ac216d54-3ca5-4ce7-850d-cd1f6a90d4f1
---
# Data Objects and Data Sources: Creation and Destruction

As explained in the article [Data Objects and Data Sources (OLE)](data-objects-and-data-sources-ole.md), data objects and data sources represent both sides of a data transfer. This article explains when to create and destroy these objects and sources to perform your data transfers properly, including:

- [Creating data objects](#_core_creating_data_objects)

- [Destroying data objects](#_core_destroying_data_objects)

- [Creating data sources](#_core_creating_data_sources)

- [Destroying data sources](#_core_destroying_data_sources)

## <a name="_core_creating_data_objects"></a> Creating Data Objects

Data objects are used by the destination application — either the client or the server. A data object in the destination application is one end of a connection between the source application and the destination application. A data object in the destination application is used to access and interact with the data in the data source.

There are two common situations where a data object is needed. The first situation is when data is dropped in your application using drag and drop. The second situation is when Paste or Paste Special is chosen from the Edit menu.

In a drag-and-drop situation, you do not need to create a data object. A pointer to an existing data object will be passed to your `OnDrop` function. This data object is created by the framework as part of the drag-and-drop operation and will also be destroyed by it. This is not always the case when pasting is done by another method. For more information, see [Destroying Data Objects](#_core_destroying_data_objects).

If the application is performing a paste or paste special operation, you should create a `COleDataObject` object and call its `AttachClipboard` member function. This associates the data object with the data on the Clipboard. You can then use this data object in your paste function.

## <a name="_core_destroying_data_objects"></a> Destroying Data Objects

If you follow the scheme described in [Creating Data Objects](#_core_creating_data_objects), destroying data objects is a trivial aspect of data transfers. The data object that was created in your paste function will be destroyed by MFC when your paste function returns.

If you follow another method of handling paste operations, make sure the data object is destroyed after your paste operation is complete. Until the data object is destroyed, it will be impossible for any application to successfully copy data to the Clipboard.

## <a name="_core_creating_data_sources"></a> Creating Data Sources

Data sources are used by the source of the data transfer, which can be either the client or the server side of the data transfer. A data source in the source application is one end of a connection between the source application and the destination application. A data object in the destination application is used to interact with the data in the data source.

Data sources are created when an application needs to copy data to the Clipboard. A typical scenario runs like this:

1. The user selects some data.

1. The user chooses **Copy** (or **Cut**) from the **Edit** menu or begins a drag-and-drop operation.

1. Depending on the design of the program, the application creates either a `COleDataSource` object or an object from a class derived from `COleDataSource`.

1. The selected data is inserted into the data source by calling one of the functions in the `COleDataSource::CacheData` or `COleDataSource::DelayRenderData` groups.

1. The application calls the `SetClipboard` member function (or the `DoDragDrop` member function if this is a drag-and-drop operation) belonging to the object created in step 3.

1. If this is a **Cut** operation or `DoDragDrop` returns **DROPEFFECT_MOVE**, the data selected in step 1 is deleted from the document.

This scenario is implemented by the MFC OLE samples [OCLIENT](../overview/visual-cpp-samples.md) and [HIERSVR](../overview/visual-cpp-samples.md). Look at the source for each application's `CView`-derived class for all but the `GetClipboardData` and `OnGetClipboardData` functions. These two functions are in either the `COleClientItem` or `COleServerItem`-derived class implementations. These sample programs provide a good example of how to implement these concepts.

One other situation in which you might want to create a `COleDataSource` object occurs if you are modifying the default behavior of a drag-and-drop operation. For more information, see the [OLE Drag and drop: Customize drag and drop](drag-and-drop-ole.md#customize-drag-and-drop) article.

## <a name="_core_destroying_data_sources"></a> Destroying Data Sources

Data sources must be destroyed by the application currently responsible for them. In situations where you hand the data source to OLE, such as calling [COleDataSource::DoDragDrop](reference/coledatasource-class.md#dodragdrop), you need to call `pDataSrc->InternalRelease`. For example:

[!code-cpp[NVC_MFCListView#1](../atl/reference/codesnippet/cpp/data-objects-and-data-sources-creation-and-destruction_1.cpp)]

If you have not handed your data source to OLE, then you are responsible for destroying it, as with any typical C++ object.

For more information, see [Drag and Drop](drag-and-drop-ole.md), [Clipboard](clipboard.md), and [Manipulating Data Objects and Data Sources](data-objects-and-data-sources-manipulation.md).

## See also

[Data Objects and Data Sources (OLE)](data-objects-and-data-sources-ole.md)<br/>
[COleDataObject Class](reference/coledataobject-class.md)<br/>
[COleDataSource Class](reference/coledatasource-class.md)
