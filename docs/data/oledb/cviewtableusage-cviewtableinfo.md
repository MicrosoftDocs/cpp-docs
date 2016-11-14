---
title: "CViewTableUsage, CViewTableInfo | Microsoft Docs"
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
  - "m_szCatalog"
  - "CViewTableInfo"
  - "m_szTableCatalog"
  - "m_szSchema"
  - "m_szTableName"
  - "m_szName"
  - "CViewTableUsage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CViewTableInfo parameter class"
  - "CViewTableUsage typedef class"
  - "m_szSchema"
  - "m_szTableSchema"
  - "TABLE_CATALOG"
  - "m_szCatalog"
  - "TABLE_NAME"
  - "TABLE_SCHEMA"
  - "m_szName"
  - "m_szTableCatalog"
  - "m_szTableName"
ms.assetid: 10b74f2a-8010-4f97-acc2-ffce07349981
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
# CViewTableUsage, CViewTableInfo
Call the typedef class **CViewTableUsage** to implement its parameter class **CViewTableInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the viewed tables, defined in the catalog, that are accessible to a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [VIEW_TABLE_USAGE Rowset](https://msdn.microsoft.com/en-us/library/ms719727.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szCatalog|VIEW_CATALOG|  
|m_szSchema|VIEW_SCHEMA|  
|m_szName|VIEW_NAME|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)