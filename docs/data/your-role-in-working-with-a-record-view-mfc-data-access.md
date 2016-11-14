---
title: "Your Role in Working with a Record View  (MFC Data Access) | Microsoft Docs"
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
  - "record views, customizing default code"
  - "MFC, record views"
ms.assetid: 691e89a5-ff21-4ca3-9278-69d4678288bb
caps.latest.revision: 8
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
# Your Role in Working with a Record View  (MFC Data Access)
The following table shows what you typically must do to work with a record view and what the framework does for you.  
  
### Working with a Record View: You and the Framework  
  
|You|The framework|  
|---------|-------------------|  
|Use the Visual C++ Dialog editor to design the form.|Creates a dialog template resource with controls.|  
|Use the [MFC Application Wizard](../mfc/reference/database-support-mfc-application-wizard.md) to create classes derived from [CRecordView](../mfc/reference/crecordview-class.md) and [CRecordset](../mfc/reference/crecordset-class.md) or from [CDaoRecordView](../mfc/reference/cdaorecordview-class.md) and [CDaoRecordset](../mfc/reference/cdaorecordset-class.md).|Writes the classes for you.|  
|Map record view controls to recordset field data members.|Provides DDX between the controls and the recordset fields.|  
||Provides default command handlers for **Move First**, **Move Last**, **Move Next**, and **Move Previous** commands from menus or toolbar buttons.|  
||Updates changes to the data source.|  
|[Optional] Write code to fill list boxes or combo boxes or other controls with data from a second recordset.||  
|[Optional] Write code for any special validations.||  
|[Optional] Write code to add or delete records.||  
  
 Form-based programming is only one approach to working with a database. For information about applications using some other user interface, or no user interface, see [MFC: Using Database Classes with Documents and Views](../data/mfc-using-database-classes-with-documents-and-views.md) and [MFC: Using Database Classes Without Documents and Views](../data/mfc-using-database-classes-without-documents-and-views.md). For alternative approaches to displaying database records, see classes [CListView](../mfc/reference/clistview-class.md) and [CTreeView](../mfc/reference/ctreeview-class.md).  
  
## See Also  
 [Record Views  (MFC Data Access)](../data/record-views-mfc-data-access.md)   
 [ODBC Driver List](../data/odbc/odbc-driver-list.md)