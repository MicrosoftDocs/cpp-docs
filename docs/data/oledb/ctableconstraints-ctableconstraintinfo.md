---
title: "CTableConstraints, CTableConstraintInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_szTableSchema"
  - "CONSTRAINT_TYPE"
  - "m_szCatalog"
  - "CTableConstraints"
  - "m_bInitiallyDeferred"
  - "CONSTRAINT_NAME"
  - "m_szTableCatalog"
  - "m_szType"
  - "m_szSchema"
  - "INITIALLY_DEFERRED"
  - "CTableConstraintInfo"
  - "m_szTableName"
  - "m_bIsDeferrable"
  - "m_szName"
  - "CONSTRAINT_CATALOG"
  - "CONSTRAINT_SCHEMA"
  - "IS_DEFERRABLE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DESCRIPTION class data member"
  - "CTableConstraints typedef class"
  - "IS_DEFERRABLE"
  - "m_szSchema"
  - "m_bInitiallyDeferred"
  - "CONSTRAINT_CATALOG"
  - "m_szTableSchema"
  - "TABLE_CATALOG"
  - "m_szType"
  - "m_szCatalog"
  - "TABLE_NAME"
  - "CONSTRAINT_NAME"
  - "CONSTRAINT_TYPE"
  - "CONSTRAINT_SCHEMA"
  - "TABLE_SCHEMA"
  - "m_szName"
  - "m_szTableCatalog"
  - "m_szDescription"
  - "CTableConstraintInfo parameter class"
  - "m_szTableName"
  - "INITIALLY_DEFERRED"
  - "m_bIsDeferrable"
ms.assetid: aaa07ade-0bfa-41d0-94df-8342152a4ff0
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
# CTableConstraints, CTableConstraintInfo
Call the typedef class **CTableConstraints** to implement its parameter class **CTableConstraintInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the table constraints, defined in the catalog, that are owned by a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [TABLE_CONSTRAINTS Rowset](https://msdn.microsoft.com/en-us/library/ms715921.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szCatalog|CONSTRAINT_CATALOG|  
|m_szSchema|CONSTRAINT_SCHEMA|  
|m_szName|CONSTRAINT_NAME|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_szType|CONSTRAINT_TYPE|  
|m_bIsDeferrable|IS_DEFERRABLE|  
|m_bInitiallyDeferred|INITIALLY_DEFERRED|  
|m_szDescription|DESCRIPTION|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)