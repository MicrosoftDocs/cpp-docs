---
title: "Using a Record View  (MFC Data Access) | Microsoft Docs"
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
ms.assetid: 91f2828f-0666-4273-ae28-e4703fd98521
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
# Using a Record View  (MFC Data Access)
This topic explains how you might commonly customize the default code for record views that the wizard writes for you. Typically, you want to constrain the record selection with a [filter](../data/odbc/recordset-filtering-records-odbc.md) or [parameters](../data/odbc/recordset-parameterizing-a-recordset-odbc.md), perhaps [sort](../data/odbc/recordset-sorting-records-odbc.md) the records, customize the SQL statement.  
  
 This information applies to both [CRecordView](../mfc/reference/crecordview-class.md) (ODBC) and [CDaoRecordView](../mfc/reference/cdaorecordview-class.md) (DAO).  
  
 Using `CRecordView` or `CDaoRecordView` is much the same as using [CFormView](../mfc/reference/cformview-class.md). The basic approach is to use the record view to display and perhaps update the records of a single recordset. Beyond that, you might want to use other recordsets as well, as discussed in [Record Views: Filling a List Box from a Second Recordset](../data/filling-a-list-box-from-a-second-recordset-mfc-data-access.md).  
  
## See Also  
 [Record Views  (MFC Data Access)](../data/record-views-mfc-data-access.md)   
 [ODBC Driver List](../data/odbc/odbc-driver-list.md)