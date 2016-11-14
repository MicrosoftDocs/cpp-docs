---
title: "CCharacterSets, CCharacterSetInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_szCollateName"
  - "m_szCatalog"
  - "DEFAULT_COLLATE_NAME"
  - "m_szCollateSchema"
  - "FORM_OF_USE"
  - "DEFAULT_COLLATE_SCHEMA"
  - "m_szCollateCatalog"
  - "CCharacterSets"
  - "CHARACTER_SET_NAME"
  - "DEFAULT_COLLATE_CATALOG"
  - "CHARACTER_SET_SCHEMA"
  - "m_szFormOfUse"
  - "NUMBER_OF_CHARACTERS"
  - "m_szSchema"
  - "CHARACTER_SET_CATALOG"
  - "CCharacterSetInfo"
  - "m_nNumCharacters"
  - "m_szName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DEFAULT_COLLATE_SCHEMA"
  - "m_nNumCharacters"
  - "m_szSchema"
  - "NUMBER_OF_CHARACTERS"
  - "m_szCollateCatalog"
  - "CCharacterSetInfo parameter class"
  - "m_szCatalog"
  - "CCharacterSets typedef class"
  - "m_szCollateName"
  - "m_szName"
  - "m_szCollateSchema"
  - "FORM_OF_USE OLE DB column"
  - "CHARACTER_SET_NAME"
  - "DEFAULT_COLLATE_CATALOG"
  - "DEFAULT_COLLATE_NAME"
  - "m_szFormOfUse"
  - "CHARACTER_SET_SCHEMA"
  - "CHARACTER_SET_CATALOG"
ms.assetid: 029d068c-8bb2-4fc0-8709-78ce7f74446e
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
# CCharacterSets, CCharacterSetInfo
Call the typedef class **CCharacterSets** to implement its parameter class **CCharacterSetInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the character sets defined in the catalog that are accessible to a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [CHARACTER_SETS Rowset](https://msdn.microsoft.com/en-us/library/ms722638.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szCatalog|CHARACTER_SET_CATALOG|  
|m_szSchema|CHARACTER_SET_SCHEMA|  
|m_szName|CHARACTER_SET_NAME|  
|m_szFormOfUse|FORM_OF_USE|  
|m_nNumCharacters|NUMBER_OF_CHARACTERS|  
|m_szCollateCatalog|DEFAULT_COLLATE_CATALOG|  
|m_szCollateSchema|DEFAULT_COLLATE_SCHEMA|  
|m_szCollateName|DEFAULT_COLLATE_NAME|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)