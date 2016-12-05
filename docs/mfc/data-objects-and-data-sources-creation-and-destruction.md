---
title: "Data Objects and Data Sources: Creation and Destruction | Microsoft Docs"
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
  - "destroying data objects"
  - "object creation [C++], data source objects"
  - "data sources [C++], and data objects"
  - "data source objects [C++], creating"
  - "destruction [C++], data sources"
  - "data source objects [C++], destroying"
  - "data objects [C++], creating"
  - "data objects [C++], destroying"
  - "data sources [C++], role"
  - "data sources [C++], destroying"
  - "destruction [C++], data objects"
  - "data sources [C++], creating"
ms.assetid: ac216d54-3ca5-4ce7-850d-cd1f6a90d4f1
caps.latest.revision: 14
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
# Data Objects and Data Sources: Creation and Destruction
As explained in the article [Data Objects and Data Sources (OLE)](../mfc/data-objects-and-data-sources-ole.md), data objects and data sources represent both sides of a data transfer. This article explains when to create and destroy these objects and sources to perform your data transfers properly, including:  
  
-   [Creating data objects](#_core_creating_data_objects)  
  
-   [Destroying data objects](#_core_destroying_data_objects)  
  
-   [Creating data sources](#_core_creating_data_sources)  
  
-   [Destroying data sources](#_core_destroying_data_sources)  
  
##  <a name="_core_creating_data_objects"></a> Creating Data Objects  
 Data objects are used by the destination application — either the client or the server. A data object in the destination application is one end of a connection between the source application and the destination application. A data object in the destination application is used to access and interact with the data in the data source.  
  
 There are two common situations where a data object is needed. The first situation is when data is dropped in your application using drag and drop. The second situation is when Paste or Paste Special is chosen from the Edit menu.  
  
 In a drag-and-drop situation, you do not need to create a data object. A pointer to an existing data object will be passed to your `OnDrop` function. This data object is created by the framework as part of the drag-and-drop operation and will also be destroyed by it. This is not always the case when pasting is done by another method. For more information, see [Destroying Data Objects](#_core_destroying_data_objects).  
  
 If the application is performing a paste or paste special operation, you should create a `COleDataObject` object and call its `AttachClipboard` member function. This associates the data object with the data on the Clipboard. You can then use this data object in your paste function.  
  
##  <a name="_core_destroying_data_objects"></a> Destroying Data Objects  
 If you follow the scheme described in [Creating Data Objects](#_core_creating_data_objects), destroying data objects is a trivial aspect of data transfers. The data object that was created in your paste function will be destroyed by MFC when your paste function returns.  
  
 If you follow another method of handling paste operations, make sure the data object is destroyed after your paste operation is complete. Until the data object is destroyed, it will be impossible for any application to successfully copy data to the Clipboard.  
  
##  <a name="_core_creating_data_sources"></a> Creating Data Sources  
 Data sources are used by the source of the data transfer, which can be either the client or the server side of the data transfer. A data source in the source application is one end of a connection between the source application and the destination application. A data object in the destination application is used to interact with the data in the data source.  
  
 Data sources are created when an application needs to copy data to the Clipboard. A typical scenario runs like this:  
  
1.  The user selects some data.  
  
2.  The user chooses **Copy** (or **Cut**) from the **Edit** menu or begins a drag-and-drop operation.  
  
3.  Depending on the design of the program, the application creates either a `COleDataSource` object or an object from a class derived from `COleDataSource`.  
  
4.  The selected data is inserted into the data source by calling one of the functions in the `COleDataSource::CacheData` or `COleDataSource::DelayRenderData` groups.  
  
5.  The application calls the `SetClipboard` member function (or the `DoDragDrop` member function if this is a drag-and-drop operation) belonging to the object created in step 3.  
  
6.  If this is a **Cut** operation or `DoDragDrop` returns `DROPEFFECT_MOVE`, the data selected in step 1 is deleted from the document.  
  
 This scenario is implemented by the MFC OLE samples [OCLIENT](../visual-cpp-samples.md) and [HIERSVR](../visual-cpp-samples.md). Look at the source for each application's `CView`-derived class for all but the `GetClipboardData` and `OnGetClipboardData` functions. These two functions are in either the `COleClientItem` or `COleServerItem`-derived class implementations. These sample programs provide a good example of how to implement these concepts.  
  
 One other situation in which you might want to create a `COleDataSource` object occurs if you are modifying the default behavior of a drag-and-drop operation. For more information, see the [Drag and Drop: Customizing](../mfc/drag-and-drop-customizing.md) article.  
  
##  <a name="_core_destroying_data_sources"></a> Destroying Data Sources  
 Data sources must be destroyed by the application currently responsible for them. In situations where you hand the data source to OLE, such as calling [COleDataSource::DoDragDrop](../mfc/reference/coledatasource-class.md#coledatasource__dodragdrop), you need to call **pDataSrc->InternalRelease**. For example:  
  
 [!code-cpp[NVC_MFCListView#1](../atl/reference/codesnippet/cpp/data-objects-and-data-sources-creation-and-destruction_1.cpp)]  
  
 If you have not handed your data source to OLE, then you are responsible for destroying it, as with any typical C++ object.  
  
 For more information, see [Drag and Drop](../mfc/drag-and-drop-ole.md), [Clipboard](../mfc/clipboard.md), and [Manipulating Data Objects and Data Sources](../mfc/data-objects-and-data-sources-manipulation.md).  
  
## See Also  
 [Data Objects and Data Sources (OLE)](../mfc/data-objects-and-data-sources-ole.md)   
 [COleDataObject Class](../mfc/reference/coledataobject-class.md)   
 [COleDataSource Class](../mfc/reference/coledatasource-class.md)
