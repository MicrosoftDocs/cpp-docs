---
title: "CProcedureParameters CProcedureParamInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "m_szDefault"
  - "CProcedureParameters"
  - "m_bHasDefault"
  - "CProcedureParamInfo"
  - "IS_NULLABLE"
  - "m_szCatalog"
  - "ORDINAL_POSITION"
  - "m_nOrdinalPosition"
  - "NUMERIC_PRECISION"
  - "m_nDataType"
  - "m_szSchema"
  - "CHARACTER_OCTET_LENGTH"
  - "NUMERIC_SCALE"
  - "m_szParameterName"
  - "m_nMaxLength"
  - "CHARACTER_MAXIMUM_LENGTH"
  - "m_nPrecision"
  - "m_szName"
  - "DATA_TYPE"
  - "m_nOctetLength"
  - "m_nType"
  - "m_bIsNullable"
  - "m_nScale"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NUMERIC_PRECISION"
  - "DATA_TYPE"
  - "ORDINAL_POSITION"
  - "m_nMaxLength"
  - "DESCRIPTION class data member"
  - "m_szParameterName"
  - "m_szSchema"
  - "m_nType"
  - "m_bHasDefault"
  - "CHARACTER_OCTET_LENGTH"
  - "CProcedureParameters typedef class"
  - "m_szCatalog"
  - "m_nPrecision"
  - "m_nOrdinalPosition"
  - "NUMERIC_SCALE"
  - "m_nOctetLength"
  - "IS_NULLABLE"
  - "m_szName"
  - "m_bIsNullable"
  - "CProcedureParamInfo parameter class"
  - "m_szDescription"
  - "m_szDefault"
  - "m_nDataType"
  - "m_nScale"
  - "CHARACTER_MAXIMUM_LENGTH"
ms.assetid: 61f8d55a-684a-47a3-b102-068cc3f52d84
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
# CProcedureParameters CProcedureParamInfo
Call the typedef class **CProcedureParameters** to implement its parameter class **CProcedureParamInfo**.  
  
## Remarks  
 See [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md) for more information on using typedef classes.  
  
 This class returns information about the parameters and return codes of procedures.  
  
 The following table lists the class data members and their corresponding OLE DB Columns. See [PROCEDURE_PARAMETERS Rowset](https://msdn.microsoft.com/en-us/library/ms713623.aspx) in the *OLE DB Programmer's Reference* for more information about the schema and columns.  
  
|Data members|OLE DB columns|  
|------------------|--------------------|  
|m_szCatalog|PROCEDURE_CATALOG|  
|m_szSchema|PROCEDURE_SCHEMA|  
|m_szName|PROCEDURE_NAME|  
|m_szParameterName|PARAMETER_NAME|  
|m_nOrdinalPosition|ORDINAL_POSITION|  
|m_nType|PARAMETER_TYPE|  
|m_bHasDefault|PARAMETER_HASDEFAULT|  
|m_szDefault|PARAMETER_DEFAULT|  
|m_bIsNullable|IS_NULLABLE|  
|m_nDataType|DATA_TYPE|  
|m_nMaxLength|CHARACTER_MAXIMUM_LENGTH|  
|m_nOctetLength|CHARACTER_OCTET_LENGTH|  
|m_nPrecision|NUMERIC_PRECISION|  
|m_nScale|NUMERIC_SCALE|  
|m_szDescription|DESCRIPTION|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [CRestrictions Class](../../data/oledb/crestrictions-class.md)