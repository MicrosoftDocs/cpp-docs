---
title: "CReferentialConstraints, CReferentialConstraintInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_szUniqueName"
  - "m_szCatalog"
  - "DELETE_RULE"
  - "m_szUniqueCatalog"
  - "CONSTRAINT_NAME"
  - "CReferentialConstraintInfo"
  - "MATCH_OPTION"
  - "m_szSchema"
  - "m_szDeleteRule"
  - "m_szUpdateRule"
  - "m_szUniqueSchema"
  - "CReferentialConstraints"
  - "m_szName"
  - "CONSTRAINT_CATALOG"
  - "m_szMatchOption"
  - "CONSTRAINT_SCHEMA"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_szUniqueSchema"
  - "DESCRIPTION class data member"
  - "m_szSchema"
  - "CONSTRAINT_CATALOG"
  - "CReferentialConstraints typedef class"
  - "m_szUniqueName"
  - "m_szCatalog"
  - "CONSTRAINT_NAME"
  - "m_szDeleteRule"
  - "DELETE_RULE"
  - "MATCH_OPTION"
  - "CONSTRAINT_SCHEMA"
  - "m_szName"
  - "m_szDescription"
  - "m_szMatchOption"
  - "m_szUniqueCatalog"
  - "m_szUpdateRule"
  - "CReferentialConstraintInfo parameter class"
ms.assetid: 5d485358-be29-41c2-b0ce-19e023598e73
caps.latest.revision: 7
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
# CReferentialConstraints, CReferentialConstraintInfo
Call the typedef class **CReferentialConstraints** to implement its parameter class **CReferentialConstraintInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the referential constraints, defined in the catalog, that are owned by a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [REFERENTIAL_CONSTRAINTS Rowset](https://msdn.microsoft.com/en-us/library/ms719737.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szCatalog|CONSTRAINT_CATALOG|  
|m_szSchema|CONSTRAINT_SCHEMA|  
|m_szName|CONSTRAINT_NAME|  
|m_szUniqueCatalog|UNIQUE_CONSTRAINT_CATALOG|  
|m_szUniqueSchema|UNIQUE_CONSTRAINT_SCHEMA|  
|m_szUniqueName|UNIQUE_CONSTRAINT_NAME|  
|m_szMatchOption|MATCH_OPTION|  
|m_szUpdateRule|UPDATE_RULE|  
|m_szDeleteRule|DELETE_RULE|  
|m_szDescription|DESCRIPTION|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)