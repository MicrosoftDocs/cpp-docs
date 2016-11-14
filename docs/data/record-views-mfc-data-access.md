---
title: "Record Views  (MFC Data Access) | Microsoft Docs"
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
  - "DAO [C++], record views"
  - "MFC [C++], record views"
  - "ODBC recordsets [C++], record views"
  - "databases [C++], record views"
  - "record views [C++]"
  - "forms [C++], data access tasks"
ms.assetid: 562122d9-01d8-4284-acf6-ea109ab0408d
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
# Record Views  (MFC Data Access)
This section applies only to the MFC ODBC and DAO classes. For information about OLE DB record views, see [COleDBRecordView](../mfc/reference/coledbrecordview-class.md) and [Using OLE DB Record Views](../data/oledb/using-ole-db-record-views.md).  
  
 To support form-based data-access applications, the class library provides class [CRecordView](../mfc/reference/crecordview-class.md) and class [CDaoRecordView](../mfc/reference/cdaorecordview-class.md). A record view is a form view object whose controls are mapped directly to the field data members of a [recordset](../data/odbc/recordset-odbc.md) object (and indirectly to the corresponding columns in a query result or table on the data source). Like their base class [CFormView](../mfc/reference/cformview-class.md), `CRecordView` and `CDaoRecordView` are based on a dialog template resource.  
  
## Form Uses  
 Forms are useful for a variety of data-access tasks:  
  
-   Entering data  
  
-   Performing read-only examination of data  
  
-   Updating data  
  
## Further Reading About Record Views  
 The material in topics applies to both the ODBC-based and the DAO-based classes. Use `CRecordView` for ODBC and `CDaoRecordView` for DAO.  
  
 Topics include:  
  
-   [Features of Record View Classes](../data/features-of-record-view-classes-mfc-data-access.md)  
  
-   [Data Exchange for Record Views](../data/data-exchange-for-record-views-mfc-data-access.md)  
  
-   [Your Role in Working with a Record View](../data/your-role-in-working-with-a-record-view-mfc-data-access.md)  
  
-   [Designing and Creating a Record View](../data/designing-and-creating-a-record-view-mfc-data-access.md)  
  
-   [Using a Record View](../data/using-a-record-view-mfc-data-access.md)  
  
## See Also  
 [Data Access Programming (MFC/ATL)](../data/data-access-programming-mfc-atl.md)   
 [ODBC Driver List](../data/odbc/odbc-driver-list.md)