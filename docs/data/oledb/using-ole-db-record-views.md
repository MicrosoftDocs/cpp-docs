---
title: "Using OLE DB Record Views | Microsoft Docs"
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
  - "OLE DB record views"
  - "COleDBRecordView class, overview"
  - "rowsets, record views"
  - "record views, record view objects"
  - "OLE DB, record views"
  - "MFC, record views"
ms.assetid: 1cd3e595-ce08-43d8-a0a9-d03b5d3e24ce
caps.latest.revision: 7
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
# Using OLE DB Record Views
If you want to display OLE DB rowset data in an MFC application, you should use the MFC class [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md). A record view object created from `COleDBRecordView` allows you to display database records in MFC controls. The record view is a dialog form view directly connected to an OLE DB Rowset object created from the `CRowset` template class. Obtaining a handle to the rowset object is simple:  
  
```  
COleDBRecordView myRecordView;  
...  
// CProductAccessor is a user record class  
CRowset<CAccessor<CProductAccessor>> myRowSet = myRecordView.OnGetRowset();  
```  
  
 The view displays the fields of the `CRowset` object in the dialog's controls. The `COleDBRecordView` object uses Dialog Data Exchange (DDX) and the navigational functionality built into `CRowset` (**MoveFirst**, `MoveNext`, `MovePrev`, and `MoveLast`) to automate the movement of data between the controls on the form and the fields of the rowset. `COleDBRecordView` keeps track of the user's position in the rowset so that the record view can update the user interface and supplies an [OnMove](../mfc/reference/coledbrecordview-class.md#coledbrecordview__onmove) method for updating the current record before moving to another.  
  
 You can use DDX functions with **COleDbRecordView** to get data directly from the database recordset and display it in a dialog control. You should use the **DDX_\*** methods (such as `DDX_Text`), not the **DDX_Field\*** functions (such as `DDX_FieldText`) with **COleDbRecordView**.  
  
## See Also  
 [Using Accessors](../../data/oledb/using-accessors.md)   
 [COleDBRecordView Class](../../mfc/reference/coledbrecordview-class.md)