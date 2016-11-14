---
title: "CAssertions, CAssertionInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CAssertions"
  - "m_szCatalog"
  - "m_bInitiallyDeferred"
  - "CONSTRAINT_NAME"
  - "m_szSchema"
  - "INITIALLY_DEFERRED"
  - "m_bIsDeferrable"
  - "m_szName"
  - "CAssertionInfo"
  - "CONSTRAINT_CATALOG"
  - "CONSTRAINT_SCHEMA"
  - "IS_DEFERRABLE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAssertionInfo parameter class"
  - "DESCRIPTION class data member"
  - "CAssertions typedef class"
  - "IS_DEFERRABLE"
  - "m_szSchema"
  - "m_bInitiallyDeferred"
  - "CONSTRAINT_CATALOG"
  - "m_szCatalog"
  - "CONSTRAINT_NAME"
  - "CONSTRAINT_SCHEMA"
  - "m_szName"
  - "m_szDescription"
  - "INITIALLY_DEFERRED"
  - "m_bIsDeferrable"
ms.assetid: 2a79c2da-5c9b-4fa6-98e8-90b7f5d6f021
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
# CAssertions, CAssertionInfo
Call the typedef class **CAssertions** to implement its parameter class **CAssertionInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the assertions defined in the catalog that are owned by a given user.  
  
 The following table lists the class data members for **CAssertionInfo** and their corresponding OLE DB Columns. See [ASSERTIONS Rowset](https://msdn.microsoft.com/en-us/library/ms719776.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szCatalog|CONSTRAINT_CATALOG|  
|m_szSchema|CONSTRAINT_SCHEMA|  
|m_szName|CONSTRAINT_NAME|  
|m_bIsDeferrable|IS_DEFERRABLE|  
|m_bInitiallyDeferred|INITIALLY_DEFERRED|  
|m_szDescription|DESCRIPTION|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)