---
title: "ODBC Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "database classes [C++], ODBC"
  - "ODBC classes [C++]"
ms.assetid: 6c40fca8-3033-4873-9abe-7f51725de0e0
caps.latest.revision: 9
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
# ODBC Classes
These classes work with the other application framework classes to give easy access to a wide variety of databases for which Open Database Connectivity (ODBC) drivers are available.  
  
 Programs that use ODBC databases will have at least a `CDatabase` object and a `CRecordset` object.  
  
 [CDatabase](../mfc/reference/cdatabase-class.md)  
 Encapsulates a connection to a data source, through which you can operate on the data source.  
  
 [CRecordset](../mfc/reference/crecordset-class.md)  
 Encapsulates a set of records selected from a data source. Recordsets enable scrolling from record to record, updating records (adding, editing, and deleting records), qualifying the selection with a filter, sorting the selection, and parameterizing the selection with information obtained or calculated at run time.  
  
 [CRecordView](../mfc/reference/crecordview-class.md)  
 Provides a form view directly connected to a recordset object. The dialog data exchange (DDX) mechanism exchanges data between the recordset and the controls of the record view. Like all form views, a record view is based on a dialog template resource. Record views also support moving from record to record in the recordset, updating records, and closing the associated recordset when the record view closes.  
  
 [CDBException](../mfc/reference/cdbexception-class.md)  
 An exception resulting from failures in data access processing. This class serves the same purpose as other exception classes in the exception-handling mechanism of the class library.  
  
 [CFieldExchange](../mfc/reference/cfieldexchange-class.md)  
 Supplies context information to support record field exchange (RFX), which exchanges data between the field data members and parameter data members of a recordset object and the corresponding table columns on the data source. Analogous to class [CDataExchange](../mfc/reference/cdataexchange-class.md), which is used similarly for dialog data exchange (DDX).  
  
## Related Classes  
 [CLongBinary](../mfc/reference/clongbinary-class.md)  
 Encapsulates a handle to storage for a binary large object (BLOB), such as a bitmap. `CLongBinary` objects are used to manage large data objects stored in database tables.  
  
 [CDBVariant](../mfc/reference/cdbvariant-class.md)  
 Allows you to store a value without worrying about the value's data type. `CDBVariant` tracks the data type of the current value, which is stored in a union.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)

