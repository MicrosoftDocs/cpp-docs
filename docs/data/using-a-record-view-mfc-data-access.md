---
title: "Using a Record View  (MFC Data Access) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["record views, customizing default code"]
ms.assetid: 91f2828f-0666-4273-ae28-e4703fd98521
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Using a Record View  (MFC Data Access)
This topic explains how you might commonly customize the default code for record views that the wizard writes for you. Typically, you want to constrain the record selection with a [filter](../data/odbc/recordset-filtering-records-odbc.md) or [parameters](../data/odbc/recordset-parameterizing-a-recordset-odbc.md), perhaps [sort](../data/odbc/recordset-sorting-records-odbc.md) the records, customize the SQL statement.  
  
 Using `CRecordView` is much the same as using [CFormView](../mfc/reference/cformview-class.md). The basic approach is to use the record view to display and perhaps update the records of a single recordset. Beyond that, you might want to use other recordsets as well, as discussed in [Record Views: Filling a List Box from a Second Recordset](../data/filling-a-list-box-from-a-second-recordset-mfc-data-access.md).  
  
## See Also  
 [Record Views  (MFC Data Access)](../data/record-views-mfc-data-access.md)   
 [ODBC Driver List](../data/odbc/odbc-driver-list.md)