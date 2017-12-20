---
title: "CConstraintColumnUsage, CConstraintColumnUsageInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_szTableSchema"
  - "m_szConstraintCatalog"
  - "CConstraintColumnUsage"
  - "m_nColumnPropID"
  - "COLUMN_GUID"
  - "CONSTRAINT_NAME"
  - "m_szColumnName"
  - "m_szTableCatalog"
  - "m_szConstraintSchema"
  - "COLUMN_PROPID"
  - "m_guidColumn"
  - "CONSTRAINT_COLUMN_USAGE"
  - "m_szTableName"
  - "CONSTRAINT_CATALOG"
  - "CONSTRAINT_SCHEMA"
  - "CConstraintColumnUsageInfo"
  - "m_szConstraintName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_PROPID"
  - "m_szConstraintCatalog"
  - "CONSTRAINT_COLUMN_USAGE"
  - "CONSTRAINT_CATALOG"
  - "CConstraintColumnUsageInfo parameter class"
  - "m_szTableSchema"
  - "TABLE_CATALOG"
  - "TABLE_NAME"
  - "CONSTRAINT_NAME"
  - "CConstraintColumnUsage typedef class"
  - "m_nColumnPropID"
  - "CONSTRAINT_SCHEMA"
  - "TABLE_SCHEMA"
  - "m_szColumnName"
  - "COLUMN_NAME"
  - "m_szTableCatalog"
  - "m_szConstraintName"
  - "m_szTableName"
  - "m_szConstraintSchema"
  - "COLUMN_GUID"
  - "m_guidColumn"
ms.assetid: 7d4d94e8-2025-4fcc-a176-c9b231eca77b
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
  - "data-storage"
---
# CConstraintColumnUsage, CConstraintColumnUsageInfo
Call the typedef class **CConstraintColumnUsage** to implement its parameter class **CConstraintColumnUsageInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the columns used by referential constraints, unique constraints, check constraints, and assertions, defined in the catalog and owned by a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [CONSTRAINT_COLUMN_USAGE Rowset](https://msdn.microsoft.com/en-us/library/ms724522.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_szColumnName|COLUMN_NAME|  
|m_guidColumn|COLUMN_GUID|  
|m_nColumnPropID|COLUMN_PROPID|  
|m_szConstraintCatalog|CONSTRAINT_CATALOG|  
|m_szConstraintSchema|CONSTRAINT_SCHEMA|  
|m_szConstraintName|CONSTRAINT_NAME|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)