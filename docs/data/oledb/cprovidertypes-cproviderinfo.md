---
title: "CProviderTypes, CProviderInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_bIsLong"
  - "m_szLocalTypeName"
  - "m_guidType"
  - "m_bCaseSensitive"
  - "m_szVersion"
  - "m_szCreateParams"
  - "IS_NULLABLE"
  - "m_bAutoUniqueValue"
  - "LITERAL_SUFFIX"
  - "COLUMN_SIZE"
  - "CProviderTypes"
  - "LOCAL_TYPE_NAME"
  - "MINIMUM_SCALE"
  - "m_nMinScale"
  - "m_nColumnSize"
  - "m_szLiteralSuffix"
  - "m_bFixedPrecScale"
  - "m_szLiteralPrefix"
  - "m_nMaxScale"
  - "m_szTypeLib"
  - "m_nDataType"
  - "m_bUnsignedAttribute"
  - "m_nSearchable"
  - "m_bBestMatch"
  - "m_szTypeName"
  - "DATA_TYPE"
  - "MAXIMUM_SCALE"
  - "CProviderInfo"
  - "FIXED_PREC_SCALE"
  - "m_bIsNullable"
  - "IS_LONG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DATA_TYPE"
  - "MAXIMUM_SCALE"
  - "m_nMinScale"
  - "m_guidType"
  - "LOCAL_TYPE_NAME"
  - "m_bAutoUniqueValue"
  - "m_bBestMatch"
  - "m_bIsLong"
  - "m_bUnsignedAttribute"
  - "CProviderInfo parameter class"
  - "FIXED_PREC_SCALE"
  - "m_nColumnSize"
  - "m_szVersion"
  - "CProviderTypes typedef class"
  - "m_szCreateParams"
  - "IS_NULLABLE"
  - "m_bIsNullable"
  - "m_szTypeLib"
  - "m_szLiteralPrefix"
  - "m_nMaxScale"
  - "m_nDataType"
  - "m_bCaseSensitive"
  - "m_bFixedPrecScale"
  - "m_nSearchable"
  - "MINIMUM_SCALE"
  - "m_szTypeName"
  - "m_szLocalTypeName"
  - "IS_LONG"
  - "LITERAL_SUFFIX"
  - "COLUMN_SIZE"
  - "m_szLiteralSuffix"
ms.assetid: 6f1620ff-c2f0-4f5b-931c-27b0cd2a580d
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
# CProviderTypes, CProviderInfo
Call the typedef class **CProviderTypes** to implement its parameter class **CProviderInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class identifies the (base) data types supported by the data provider.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [PROVIDER_TYPES Rowset](https://msdn.microsoft.com/en-us/library/ms709785.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szTypeName|TYPE_NAME|  
|m_nDataType|DATA_TYPE|  
|m_nColumnSize|COLUMN_SIZE|  
|m_szLiteralPrefix|LITERAL_PREFIX|  
|m_szLiteralSuffix|LITERAL_SUFFIX|  
|m_szCreateParams|CREATE_PARAMS|  
|m_bIsNullable|IS_NULLABLE|  
|m_bCaseSensitive|CASE_SENSITIVE|  
|m_nSearchable|SEARCHABLE|  
|m_bUnsignedAttribute|UNSIGNED_ATTRIBUTE|  
|m_bFixedPrecScale|FIXED_PREC_SCALE|  
|m_bAutoUniqueValue|AUTO_UNIQUE_VALUE|  
|m_szLocalTypeName|LOCAL_TYPE_NAME|  
|m_nMinScale|MINIMUM_SCALE|  
|m_nMaxScale|MAXIMUM_SCALE|  
|m_guidType|GUID|  
|m_szTypeLib|TYPELIB|  
|m_szVersion|VERSION|  
|m_bIsLong|IS_LONG|  
|m_bBestMatch|BEST_MATCH|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)