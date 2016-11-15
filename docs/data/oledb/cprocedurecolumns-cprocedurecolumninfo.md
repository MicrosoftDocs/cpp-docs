---
title: "CProcedureColumns, CProcedureColumnInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_guidType"
  - "CProcedureColumnInfo"
  - "IS_NULLABLE"
  - "m_szCatalog"
  - "m_nRowsetNumber"
  - "m_nColumnPropID"
  - "ORDINAL_POSITION"
  - "m_nOrdinalPosition"
  - "COLUMN_GUID"
  - "m_szColumnName"
  - "NUMERIC_PRECISION"
  - "m_nDataType"
  - "m_szSchema"
  - "CHARACTER_OCTET_LENGTH"
  - "NUMERIC_SCALE"
  - "COLUMN_PROPID"
  - "m_guidColumn"
  - "m_nMaxLength"
  - "CHARACTER_MAXIMUM_LENGTH"
  - "m_nPrecision"
  - "m_szName"
  - "CProcedureColumns"
  - "DATA_TYPE"
  - "m_nOctetLength"
  - "m_bIsNullable"
  - "m_nScale"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NUMERIC_PRECISION"
  - "COLUMN_PROPID"
  - "DATA_TYPE"
  - "ORDINAL_POSITION"
  - "m_nMaxLength"
  - "DESCRIPTION class data member"
  - "m_guidType"
  - "m_szSchema"
  - "CHARACTER_OCTET_LENGTH"
  - "m_szCatalog"
  - "CProcedureColumns typedef class"
  - "m_nPrecision"
  - "m_nOrdinalPosition"
  - "m_nColumnPropID"
  - "NUMERIC_SCALE"
  - "m_nRowsetNumber"
  - "m_szColumnName"
  - "COLUMN_NAME"
  - "m_nOctetLength"
  - "IS_NULLABLE"
  - "m_szName"
  - "m_bIsNullable"
  - "m_szDescription"
  - "m_nDataType"
  - "m_nScale"
  - "COLUMN_GUID"
  - "CHARACTER_MAXIMUM_LENGTH"
  - "m_guidColumn"
  - "CProcedureColumnInfo parameter class"
ms.assetid: c82626c4-8047-4b9c-b342-e35bf37b7611
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
# CProcedureColumns, CProcedureColumnInfo
Call the typedef class **CProcedureColumns** to implement its parameter class **CProcedureColumnInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class returns information about the columns of rowsets returned by procedures.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [PROCEDURE_COLUMNS Rowset](https://msdn.microsoft.com/en-us/library/ms723092.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szCatalog|PROCEDURE_CATALOG|  
|m_szSchema|PROCEDURE_SCHEMA|  
|m_szName|PROCEDURE_NAME|  
|m_szColumnName|COLUMN_NAME|  
|m_guidColumn|COLUMN_GUID|  
|m_nColumnPropID|COLUMN_PROPID|  
|m_nRowsetNumber|ROWSET_NUMBER|  
|m_nOrdinalPosition|ORDINAL_POSITION|  
|m_bIsNullable|IS_NULLABLE|  
|m_nDataType|DATA_TYPE|  
|m_guidType|TYPE_GUID|  
|m_nMaxLength|CHARACTER_MAXIMUM_LENGTH|  
|m_nOctetLength|CHARACTER_OCTET_LENGTH|  
|m_nPrecision|NUMERIC_PRECISION|  
|m_nScale|NUMERIC_SCALE|  
|m_szDescription|DESCRIPTION|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)