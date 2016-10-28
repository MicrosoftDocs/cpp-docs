---
title: "CViews, CViewInfo"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "m_szTableSchema"
  - "m_bCheckOption"
  - "CViews"
  - "CHECK_OPTION"
  - "CViewInfo"
  - "m_szTableCatalog"
  - "IS_UPDATABLE"
  - "m_szDefinition"
  - "m_szTableName"
  - "m_bIsUpdatable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DESCRIPTION class data member"
  - "CHECK_OPTION"
  - "m_szTableSchema"
  - "TABLE_CATALOG"
  - "TABLE_NAME"
  - "m_bCheckOption"
  - "TABLE_SCHEMA"
  - "m_szTableCatalog"
  - "m_szDescription"
  - "m_szDefinition"
  - "m_szTableName"
  - "CViewInfo parameter class"
  - "m_bIsUpdatable"
  - "IS_UPDATABLE"
  - "CViews typedef class"
ms.assetid: ad864181-4fab-4919-b0fd-45df5da230d9
caps.latest.revision: 6
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
# CViews, CViewInfo
Call the typedef class **CViews** to implement its parameter class **CViewInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../data/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the tables on which viewed tables, defined in the catalog and owned by a given user, are dependent.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [VIEWS Rowset](https://msdn.microsoft.com/en-us/library/ms723122.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_szDefinition|VIEW_DEFINITION|  
|m_bCheckOption|CHECK_OPTION|  
|m_bIsUpdatable|IS_UPDATABLE|  
|m_szDescription|DESCRIPTION|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../data/crestrictions-class.md)