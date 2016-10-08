---
title: "Data Objects and Data Sources: Creation and Destruction"
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
ms.assetid: ac216d54-3ca5-4ce7-850d-cd1f6a90d4f1
caps.latest.revision: 12
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
# Data Objects and Data Sources: Creation and Destruction
As explained in the article [Data Objects and Data Sources (OLE)](../VS_visualcpp/Data-Objects-and-Data-Sources--OLE-.md), data objects and data sources represent both sides of a data transfer. This article explains when to create and destroy these objects and sources to perform your data transfers properly, including:  
  
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
  
 This scenario is implemented by the MFC OLE samples [OCLIENT](../VS_visualcpp/Visual-C---Samples.md) and [HIERSVR](../VS_visualcpp/Visual-C---Samples.md). Look at the source for each application's `CView`-derived class for all but the `GetClipboardData` and `OnGetClipboardData` functions. These two functions are in either the `COleClientItem` or `COleServerItem`-derived class implementations. These sample programs provide a good example of how to implement these concepts.  
  
 One other situation in which you might want to create a `COleDataSource` object occurs if you are modifying the default behavior of a drag-and-drop operation. For more information, see the [Drag and Drop: Customizing](../VS_visualcpp/Drag-and-Drop--Customizing.md) article.  
  
##  <a name="_core_destroying_data_sources"></a> Destroying Data Sources  
 Data sources must be destroyed by the application currently responsible for them. In situations where you hand the data source to OLE, such as calling [COleDataSource::DoDragDrop](../Topic/COleDataSource::DoDragDrop.md), you need to call **pDataSrc->InternalRelease**. For example:  
  
 [!CODE [NVC_MFCListView#1](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCListView#1)]  
  
 If you have not handed your data source to OLE, then you are responsible for destroying it, as with any typical C++ object.  
  
 For more information, see [Drag and Drop](../VS_visualcpp/Drag-and-Drop--OLE-.md), [Clipboard](../VS_visualcpp/Clipboard.md), and [Manipulating Data Objects and Data Sources](../VS_visualcpp/Data-Objects-and-Data-Sources--Manipulation.md).  
  
## See Also  
 [Data Objects and Data Sources (OLE)](../VS_visualcpp/Data-Objects-and-Data-Sources--OLE-.md)   
 [COleDataObject Class](../VS_visualcpp/COleDataObject-Class.md)   
 [COleDataSource Class](../VS_visualcpp/COleDataSource-Class.md)