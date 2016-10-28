---
title: "Recordset: Adding Records in Bulk (ODBC)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ODBC recordsets, adding records"
  - "recordsets, adding records"
  - "bulk record additions to recordsets"
ms.assetid: 4685f656-14b9-4f10-a1c5-147b2b89a0b4
caps.latest.revision: 9
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
# Recordset: Adding Records in Bulk (ODBC)
This topic applies to the MFC ODBC classes.  
  
 The MFC [CRecordset](../mfcref/crecordset-class.md) class has a new optimization that improves efficiency when you are adding new records in bulk to a table.  
  
> [!NOTE]
>  This topic applies to objects derived from `CRecordset` in which bulk row fetching has not been implemented. If you are using bulk row fetching, see [Recordset: Fetching Records in Bulk (ODBC)](../data/recordset--fetching-records-in-bulk--odbc-.md).  
  
 A new option for the **dwOptions** parameter to the [CRecordset::Open](../Topic/CRecordset::Open.md) member function, **optimizeBulkAdd**, improves performance when you are adding multiple records consecutively without calling **Requery** or **Close**. Only those fields that are dirty before the first **Update** call are marked as dirty for subsequent `AddNew`/**Update** calls.  
  
 If you are using the database classes to take advantage of the **::SQLSetPos** ODBC API function for adding, editing, and deleting records, this optimization is unnecessary.  
  
 If the ODBC Cursor Library is loaded or the ODBC driver does not support adding, editing, and deleting through **::SQLSetPos**, this optimization should improve bulk add performance. To turn on this optimization, set the **dwOptions** parameter in the **Open** call for your recordset to the following:  
  
```  
appendOnly | optimizeBulkAdd  
```  
  
## See Also  
 [Recordset (ODBC)](../data/recordset--odbc-.md)   
 [Recordset: Adding, Updating, and Deleting Records (ODBC)](../data/recordset--adding--updating--and-deleting-records--odbc-.md)   
 [Recordset: Locking Records (ODBC)](../data/recordset--locking-records--odbc-.md)