---
title: "CColumns, CColumnsInfo"
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
ms.assetid: 7a4ca8e8-e041-4def-8c1a-00c211f7da0b
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
# CColumns, CColumnsInfo
Call the typedef class **CColumns** to implement its parameter class **CColumnsInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../VS_visualcpp/Schema-Rowset-Classes-and-Typedef-Classes.md) for more information on using typedef classes.  
  
 This class identifies the columns of tables defined in the catalog that are accessible to a given user.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [COLUMNS Rowset](https://msdn.microsoft.com/en-us/library/ms723052.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szTableCatalog|TABLE_CATALOG|  
|m_szTableSchema|TABLE_SCHEMA|  
|m_szTableName|TABLE_NAME|  
|m_szColumnName|COLUMN_NAME|  
|m_guidColumn|COLUMN_GUID|  
|m_nColumnPropID|COLUMN_PROPID|  
|m_nOrdinalPosition|ORDINAL_POSITION|  
|m_bColumnHasDefault|COLUMN_HASDEFAULT|  
|m_szColumnDefault|COLUMN_DEFAULT|  
|m_nColumnFlags|COLUMN_FLAGS|  
|m_bIsNullable|IS_NULLABLE|  
|m_nDataType|DATA_TYPE|  
|m_guidType|TYPE_GUID|  
|m_nMaxLength|CHARACTER_MAXIMUM_LENGTH|  
|m_nOctetLength|CHARACTER_OCTET_LENGTH|  
|m_nNumericPrecision|NUMERIC_PRECISION|  
|m_nNumericScale|NUMERIC_SCALE|  
|m_nDateTimePrecision|DATETIME_PRECISION|  
|m_szCharSetCatalog|CHARACTER_SET_CATALOG|  
|m_szCharSetSchema|CHARACTER_SET_SCHEMA|  
|m_szCharSetName|CHARACTER_SET_NAME|  
|m_szCollationCatalog|COLLATION_CATALOG|  
|m_szCollationSchema|COLLATION_SCHEMA|  
|m_szCollationName|COLLATION_NAME|  
|m_szDomainCatalog|DOMAIN_CATALOG|  
|m_szDomainSchema|DOMAIN_SCHEMA|  
|m_szDomainName|DOMAIN_NAME|  
|m_szDescription|DESCRIPTION|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CatDB](../VS_visualcpp/Visual-C---Samples.md)   
 [CRestrictions Class](../VS_visualcpp/CRestrictions-Class.md)