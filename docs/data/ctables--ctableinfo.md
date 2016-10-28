---
title: "CTables, CTableInfo"
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
  - "m_szCatalog"
  - "TABLE_SCHEMA"
  - "CTables"
  - "TABLE_NAME"
  - "TABLE_CATALOG"
  - "CTableInfo"
  - "m_guidTable"
  - "m_szType"
  - "m_szSchema"
  - "m_szName"
  - "TABLE_GUID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DESCRIPTION class data member"
  - "m_szSchema"
  - "TABLE_CATALOG"
  - "m_szType"
  - "m_szCatalog"
  - "TABLE_NAME"
  - "TABLE_SCHEMA"
  - "TABLE_GUID"
  - "m_szName"
  - "m_szDescription"
  - "CTables typedef class"
  - "m_guidTable"
  - "CTableInfo parameter class"
ms.assetid: 57670f1b-ba99-43b0-b406-4c75b44f14f6
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
# CTables, CTableInfo
Call the typedef class **CTables** to implement its parameter class **CTableInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../data/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the privileges on tables, defined in the catalog, that are available to or granted by a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [TABLES Rowset](https://msdn.microsoft.com/en-us/library/ms716980.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szCatalog|TABLE_CATALOG|  
|m_szSchema|TABLE_SCHEMA|  
|m_szName|TABLE_NAME|  
|m_szType|TABLE_TYPE|  
|m_guidTable|TABLE_GUID|  
|m_szDescription|DESCRIPTION|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../data/crestrictions-class.md)