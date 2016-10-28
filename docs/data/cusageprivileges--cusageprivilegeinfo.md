---
title: "CUsagePrivileges, CUsagePrivilegeInfo"
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
  - "m_szObjectCatalog"
  - "CUsagePrivilegeInfo"
  - "m_bIsGrantable"
  - "OBJECT_NAME"
  - "m_szPrivilegeType"
  - "OBJECT_SCHEMA"
  - "IS_GRANTABLE"
  - "CUsagePrivileges"
  - "m_szGrantor"
  - "GRANTOR"
  - "GRANTEE"
  - "m_szObjectSchema"
  - "OBJECT_CATALOG"
  - "m_szObjectType"
  - "m_szObjectName"
  - "m_szGrantee"
  - "OBJECT_TYPE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OBJECT_NAME"
  - "GRANTOR"
  - "OBJECT_CATALOG"
  - "CUsagePrivileges typedef class"
  - "m_szPrivilegeType"
  - "OBJECT_SCHEMA"
  - "m_szObjectSchema"
  - "m_szObjectType"
  - "IS_GRANTABLE"
  - "OBJECT_TYPE"
  - "CUsagePrivilegeInfo parameter class"
  - "m_szGrantee"
  - "m_szObjectCatalog"
  - "m_szGrantor"
  - "GRANTEE"
  - "m_bIsGrantable"
  - "m_szObjectName"
ms.assetid: 09460e7f-3947-4837-ad1e-407b94acedb8
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
# CUsagePrivileges, CUsagePrivilegeInfo
Call the typedef class **CUsagePrivileges** to implement its parameter class **CUsagePrivilegeInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../data/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the USAGE privileges on objects defined in the catalog that are available to or granted by a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [USAGE_PRIVILEGES Rowset](https://msdn.microsoft.com/en-us/library/ms722743.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szGrantor|GRANTOR|  
|m_szGrantee|GRANTEE|  
|m_szObjectCatalog|OBJECT_CATALOG|  
|m_szObjectSchema|OBJECT_SCHEMA|  
|m_szObjectName|OBJECT_NAME|  
|m_szObjectType|OBJECT_TYPE|  
|m_szPrivilegeType|PRIVILEGE_TYPE|  
|m_bIsGrantable|IS_GRANTABLE|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../data/crestrictions-class.md)