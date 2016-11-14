---
title: "CTablePrivileges, CTablePrivilegeInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_szCatalog"
  - "m_bIsGrantable"
  - "IS_GRANTABLE"
  - "m_szType"
  - "m_szSchema"
  - "m_szGrantor"
  - "GRANTOR"
  - "GRANTEE"
  - "CTablePrivileges"
  - "CTablePrivilegeInfo"
  - "m_szName"
  - "m_szGrantee"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GRANTOR"
  - "CTablePrivilegeInfo parameter class"
  - "m_szSchema"
  - "TABLE_CATALOG"
  - "m_szType"
  - "m_szCatalog"
  - "TABLE_NAME"
  - "IS_GRANTABLE"
  - "TABLE_SCHEMA"
  - "m_szName"
  - "m_szGrantee"
  - "CTablePrivileges typedef class"
  - "m_szGrantor"
  - "GRANTEE"
  - "m_bIsGrantable"
ms.assetid: ffcd6f73-022e-452a-8342-f2b9362d256b
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
# CTablePrivileges, CTablePrivilegeInfo
Call the typedef class **CTablePrivileges** to implement its parameter class **CTablePrivilegeInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the tables defined in the catalog that are accessible to a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [TABLE_PRIVILEGES Rowset](https://msdn.microsoft.com/en-us/library/ms725428.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szGrantor|GRANTOR|  
|m_szGrantee|GRANTEE|  
|m_szCatalog|TABLE_CATALOG|  
|m_szSchema|TABLE_SCHEMA|  
|m_szName|TABLE_NAME|  
|m_szType|PRIVILEGE_TYPE|  
|m_bIsGrantable|IS_GRANTABLE|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)