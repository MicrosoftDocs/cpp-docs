---
title: "CStatistics, CStatisticInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CStatistics"
  - "m_szTableSchema"
  - "CStatisticInfo"
  - "m_szTableCatalog"
  - "m_nCardinality"
  - "m_szTableName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_nCardinality"
  - "m_szTableSchema"
  - "TABLE_CATALOG"
  - "TABLE_NAME"
  - "TABLE_SCHEMA"
  - "CStatistics typedef class"
  - "m_szTableCatalog"
  - "m_szTableName"
  - "CStatisticInfo parameter class"
ms.assetid: 5822231c-6963-44a6-ae2f-29aca76e1600
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
# CStatistics, CStatisticInfo
Call the typedef class **CStatistics** to implement its parameter class **CStatisticInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the statistics, defined in the catalog, that are owned by a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [STATISTICS Rowset](https://msdn.microsoft.com/en-us/library/ms715957.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_nCardinality|CARDINALITY|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)