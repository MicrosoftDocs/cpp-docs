---
title: "CViewColumnUsage, CViewColumnInfo | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_szTableSchema"
  - "m_szCatalog"
  - "m_nColumnPropID"
  - "COLUMN_GUID"
  - "m_szColumnName"
  - "m_szTableCatalog"
  - "CViewColumnInfo"
  - "m_szSchema"
  - "CViewColumnUsage"
  - "COLUMN_PROPID"
  - "m_guidColumn"
  - "m_szTableName"
  - "m_szName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_PROPID"
  - "m_szSchema"
  - "m_szTableSchema"
  - "TABLE_CATALOG"
  - "m_szCatalog"
  - "TABLE_NAME"
  - "m_nColumnPropID"
  - "CViewColumnInfo parameter class"
  - "TABLE_SCHEMA"
  - "m_szColumnName"
  - "COLUMN_NAME"
  - "m_szName"
  - "m_szTableCatalog"
  - "CViewColumnUsage typedef class"
  - "m_szTableName"
  - "COLUMN_GUID"
  - "m_guidColumn"
ms.assetid: 4af14d6b-b224-4d72-b035-9d3aaacde32f
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CViewColumnUsage, CViewColumnInfo
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CViewColumnUsage, CViewColumnInfo](https://docs.microsoft.com/cpp/data/oledb/cviewcolumnusage-cviewcolumninfo).  
  
  
Call the typedef class **CViewColumnUsage** to implement its parameter class **CViewColumnInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the columns on which viewed tables, defined in the catalog and owned by a given user, are dependent.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [VIEW_COLUMN_USAGE Rowset](https://msdn.microsoft.com/library/ms714896.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szCatalog|VIEW_CATALOG|  
|m_szSchema|VIEW_SCHEMA|  
|m_szName|VIEW_NAME|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_szColumnName|COLUMN_NAME|  
|m_guidColumn|COLUMN_GUID|  
|m_nColumnPropID|COLUMN_PROPID|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)

