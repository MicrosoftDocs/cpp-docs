---
title: "CForeignKeys, CForeignKeysInfo | Microsoft Docs"
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
  - "m_szPKColumnName"
  - "FK_TABLE_NAME"
  - "m_guidFKColumn"
  - "FK_COLUMN_NAME"
  - "m_guidPKColumn"
  - "DELETE_RULE"
  - "m_szPKTableSchema"
  - "FK_COLUMN_PROPID"
  - "m_nFKColumnPropID"
  - "m_szFKTableCatalog"
  - "CForeignKeysInfo"
  - "FK_TABLE_SCHEMA"
  - "m_szPKTableCatalog"
  - "m_szDeleteRule"
  - "m_szUpdateRule"
  - "m_szPKTableName"
  - "m_szFKTableSchema"
  - "ORDINAL"
  - "m_nPKColumnPropID"
  - "m_szFKColumnName"
  - "FK_TABLE_CATALOG"
  - "FK_COLUMN_GUID"
  - "m_szFKTableName"
  - "CForeignKeys"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_szPKTableCatalog"
  - "FK_COLUMN_GUID"
  - "m_szPKColumnName"
  - "m_szFKTableName"
  - "ORDINAL data member"
  - "m_nPKColumnPropID"
  - "m_szDeleteRule"
  - "DELETE_RULE"
  - "m_guidFKColumn"
  - "FK_COLUMN_PROPID"
  - "m_szPKTableSchema"
  - "m_szFKTableCatalog"
  - "CForeignKeysInfo parameter class"
  - "m_szFKTableSchema"
  - "FK_TABLE_SCHEMA"
  - "FK_COLUMN_NAME"
  - "m_szUpdateRule"
  - "m_szFKColumnName"
  - "FK_TABLE_CATALOG"
  - "m_nOrdinal"
  - "m_szPKTableName"
  - "CForeignKeys typedef class"
  - "m_nFKColumnPropID"
  - "m_guidPKColumn"
  - "FK_TABLE_NAME"
ms.assetid: 1c401a4a-0827-4255-9214-bc893e1cd79d
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
# CForeignKeys, CForeignKeysInfo
Call the typedef class **CForeignKeys** to implement its parameter class **CForeignKeysInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the foreign key columns defined in the catalog by a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [FOREIGN_KEYS Rowset](https://msdn.microsoft.com/en-us/library/ms711276.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szPKTableCatalog|PK_TABLE_CATALOG|  
|m_szPKTableSchema|PK_TABLE_SCHEMA|  
|m_szPKTableName|PK_TABLE_NAME|  
|m_szPKColumnName|PK_COLUMN_NAME|  
|m_guidPKColumn|PK_COLUMN_GUID|  
|m_nPKColumnPropID|PK_COLUMN_PROPID|  
|m_szFKTableCatalog|FK_TABLE_CATALOG|  
|m_szFKTableSchema|FK_TABLE_SCHEMA|  
|m_szFKTableName|FK_TABLE_NAME|  
|m_szFKColumnName|FK_COLUMN_NAME|  
|m_guidFKColumn|FK_COLUMN_GUID|  
|m_nFKColumnPropID|FK_COLUMN_PROPID|  
|m_nOrdinal|ORDINAL|  
|m_szUpdateRule|UPDATE_RULE|  
|m_szDeleteRule|DELETE_RULE|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)