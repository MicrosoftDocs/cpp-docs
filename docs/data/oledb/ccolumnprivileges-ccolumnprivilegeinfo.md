---
title: "CColumnPrivileges, CColumnPrivilegeInfo | Microsoft Docs"
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
  - "CColumnPrivileges"
  - "m_bIsGrantable"
  - "m_nColumnPropID"
  - "m_szPrivilegeType"
  - "COLUMN_GUID"
  - "IS_GRANTABLE"
  - "m_szColumnName"
  - "m_szTableCatalog"
  - "m_szGrantor"
  - "GRANTOR"
  - "GRANTEE"
  - "COLUMN_PROPID"
  - "m_guidColumn"
  - "COLUMN_PRIVILEGES"
  - "m_szTableName"
  - "CColumnPrivilegeInfo"
  - "m_szGrantee"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_PROPID"
  - "GRANTOR"
  - "m_szPrivilegeType"
  - "m_szTableSchema"
  - "TABLE_CATALOG"
  - "TABLE_NAME"
  - "COLUMN_PRIVILEGES"
  - "IS_GRANTABLE"
  - "m_nColumnPropID"
  - "TABLE_SCHEMA"
  - "m_szColumnName"
  - "COLUMN_NAME"
  - "m_szTableCatalog"
  - "m_szGrantee"
  - "m_szGrantor"
  - "m_szTableName"
  - "CColumnPrivileges typedef class"
  - "COLUMN_GUID"
  - "GRANTEE"
  - "m_guidColumn"
  - "CColumnPrivilegeInfo parameter class"
  - "m_bIsGrantable"
ms.assetid: 245df365-421f-43c6-9fcd-fb2197c871c6
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
# CColumnPrivileges, CColumnPrivilegeInfo
Call the typedef class **CColumnPrivileges** to implement its parameter class **CColumnPrivilegeInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the privileges on columns of tables, defined in the catalog, that are available to or granted by a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [COLUMN_PRIVILEGES Rowset](https://msdn.microsoft.com/en-us/library/ms715800.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szGrantor|GRANTOR|  
|m_szGrantee|GRANTEE|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_szColumnName|COLUMN_NAME|  
|m_guidColumn|COLUMN_GUID|  
|m_nColumnPropID|COLUMN_PROPID|  
|m_szPrivilegeType|PRIVILEGE_TYPE|  
|m_bIsGrantable|IS_GRANTABLE|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)