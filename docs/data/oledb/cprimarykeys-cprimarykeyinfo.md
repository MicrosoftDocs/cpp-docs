---
title: "CPrimaryKeys, CPrimaryKeyInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_nOrdinal"
  - "m_szTableSchema"
  - "m_nColumnPropID"
  - "CPrimaryKeys"
  - "COLUMN_GUID"
  - "CPrimaryKeyInfo"
  - "m_szColumnName"
  - "m_szTableCatalog"
  - "COLUMN_PROPID"
  - "m_guidColumn"
  - "ORDINAL"
  - "m_szTableName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_PROPID"
  - "m_szTableSchema"
  - "TABLE_CATALOG"
  - "ORDINAL data member"
  - "CPrimaryKeys typedef class"
  - "TABLE_NAME"
  - "m_nColumnPropID"
  - "TABLE_SCHEMA"
  - "m_szColumnName"
  - "COLUMN_NAME"
  - "m_szTableCatalog"
  - "m_szTableName"
  - "m_nOrdinal"
  - "CPrimaryKeyInfo parameter class"
  - "COLUMN_GUID"
  - "m_guidColumn"
ms.assetid: c27b97a4-a156-4f66-89e3-95f85d7d6281
caps.latest.revision: 6
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
# CPrimaryKeys, CPrimaryKeyInfo
Call the typedef class **CPrimaryKeys** to implement its parameter class **CPrimaryKeyInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the primary key columns defined in the catalog by a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [PRIMARY_KEYS Rowset](https://msdn.microsoft.com/en-us/library/ms714362.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_szColumnName|COLUMN_NAME|  
|m_guidColumn|COLUMN_GUID|  
|m_nColumnPropID|COLUMN_PROPID|  
|m_nOrdinal|ORDINAL|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)