---
title: "CKeyColumns, CKeyColumnInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["m_szTableSchema", "m_szConstraintCatalog", "m_nColumnPropID", "ORDINAL_POSITION", "m_nOrdinalPosition", "COLUMN_GUID", "CKeyColumnInfo", "CONSTRAINT_NAME", "m_szColumnName", "m_szTableCatalog", "m_szConstraintSchema", "COLUMN_PROPID", "m_guidColumn", "CKeyColumns", "m_szTableName", "CONSTRAINT_CATALOG", "CONSTRAINT_SCHEMA", "m_szConstraintName"]
dev_langs: ["C++"]
helpviewer_keywords: ["COLUMN_PROPID", "ORDINAL_POSITION", "m_szConstraintCatalog", "CONSTRAINT_CATALOG", "m_szTableSchema", "TABLE_CATALOG", "CKeyColumnInfo parameter class", "TABLE_NAME", "CONSTRAINT_NAME", "m_nOrdinalPosition", "m_nColumnPropID", "CONSTRAINT_SCHEMA", "TABLE_SCHEMA", "m_szColumnName", "COLUMN_NAME", "m_szTableCatalog", "m_szConstraintName", "CKeyColumns typedef class", "m_szTableName", "m_szConstraintSchema", "COLUMN_GUID", "m_guidColumn"]
ms.assetid: 40525a4f-a9cf-4e9f-886d-8a6ddd18a3d6
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CKeyColumns, CKeyColumnInfo
Call the typedef class **CKeyColumns** to implement its parameter class **CKeyColumnInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the columns, defined in the catalog, that are constrained as keys by a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [KEY_COLUMN_USAGE Rowset](https://msdn.microsoft.com/en-us/library/ms712990.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szConstraintCatalog|CONSTRAINT_CATALOG|  
|m_szConstraintSchema|CONSTRAINT_SCHEMA|  
|m_szConstraintName|CONSTRAINT_NAME|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_szColumnName|COLUMN_NAME|  
|m_guidColumn|COLUMN_GUID|  
|m_nColumnPropID|COLUMN_PROPID|  
|m_nOrdinalPosition|ORDINAL_POSITION|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)