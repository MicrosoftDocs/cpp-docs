---
title: "CSQLLanguages, CSQLLanguageInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CSQLLanguageInfo"
  - "m_szProgrammingLanguage"
  - "m_szImplementation"
  - "m_szIntegrity"
  - "m_szBindingStyle"
  - "m_szConformance"
  - "m_szSource"
  - "m_szYear"
  - "CSQLLanguages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_szBindingStyle"
  - "m_szProgrammingLanguage"
  - "m_szYear"
  - "m_szImplementation"
  - "m_szSource"
  - "m_szConformance"
  - "CSQLLanguages typedef class"
  - "CSQLLanguageInfo parameter class"
  - "m_szIntegrity"
ms.assetid: 9c36c5bb-6917-49c3-9ac3-942339893f19
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
# CSQLLanguages, CSQLLanguageInfo
Call the typedef class **CSQLLanguages** to implement its parameter class **CSQLLanguageInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the conformance levels, options, and dialects supported by the SQL-implementation processing data defined in the catalog.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [SQL_LANGUAGES Rowset](https://msdn.microsoft.com/en-us/library/ms714374.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szSource|SQL_LANGUAGE_SOURCE|  
|m_szYear|SQL_LANGUAGE_YEAR|  
|m_szConformance|SQL_LANGUAGE_CONFORMANCE|  
|m_szIntegrity|SQL_LANGUAGE_INTEGRITY|  
|m_szImplementation|SQL_LANGUAGE_IMPLEMENTATION|  
|m_szBindingStyle|SQL_LANGUAGE_BINDING_STYLE|  
|m_szProgrammingLanguage|SQL_LANGUAGE_PROGRAMMING_LANGUAGE|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)