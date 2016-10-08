---
title: "CTranslations, CTranslationInfo"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 19a64828-2d4c-42a0-8bfb-b010e334a9b3
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CTranslations, CTranslationInfo
Call the typedef class **CTranslations** to implement its parameter class **CTranslationInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../VS_visualcpp/Schema-Rowset-Classes-and-Typedef-Classes.md) for more information on using typedef classes.  
  
 This class identifies the character translations defined in the catalog that are accessible to a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [TRANSLATIONS Rowset](https://msdn.microsoft.com/en-us/library/ms725365.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szCatalog|TRANSLATION_CATALOG|  
|m_szSchema|TRANSLATION_SCHEMA|  
|m_szName|TRANSLATION_NAME|  
|m_szSourceCatalog|SOURCE_CHARACTER_SET_CATALOG|  
|m_szSourceSchema|SOURCE_CHARACTER_SET_SCHEMA|  
|m_szSourceName|SOURCE_CHARACTER_SET_NAME|  
|m_szTargetCatalog|TARGET_CHARACTER_SET_CATALOG|  
|m_szTargetSchema|TARGET_CHARACTER_SET_SCHEMA|  
|m_szTargetName|TARGET_CHARACTER_SET_NAME|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CatDB](../VS_visualcpp/Visual-C---Samples.md)   
 [CRestrictions Class](../VS_visualcpp/CRestrictions-Class.md)