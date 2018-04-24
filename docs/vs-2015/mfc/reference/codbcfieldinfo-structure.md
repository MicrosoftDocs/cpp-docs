---
title: "CODBCFieldInfo Structure | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CODBCFieldInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ODBC, data source information"
  - "CODBCFieldInfo structure"
ms.assetid: 92598b4f-facc-4108-b282-63a179ff79ab
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CODBCFieldInfo Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CODBCFieldInfo Structure](https://docs.microsoft.com/cpp/mfc/reference/codbcfieldinfo-structure).  
  
  
The `CODBCFieldInfo` structure contains information about the fields in an ODBC data source.  
  
## Syntax  
  
```  
struct CODBCFieldInfo  
{  
    CString m_strName;  
    SWORD m_nSQLType;  
    UDWORD m_nPrecision;  
    SWORD m_nScale;  
    SWORD m_nNullability;  
};  
```  
  
#### Parameters  
 `m_strName`  
 The name of the field.  
  
 *m_nSQLType*  
 The SQL data type of the field. This can be an ODBC SQL data type or a driver-specific SQL data type. For a list of valid ODBC SQL data types, see "SQL Data Types" in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)]. For information about driver-specific SQL data types, see the driver's documentation.  
  
 *m_nPrecision*  
 The maximum precision of the field. For details, see "Precision, Scale, Length, and Display Size" in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
 *m_nScale*  
 The scale of the field. For details, see "Precision, Scale, Length, and Display Size" in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
 *m_nNullability*  
 Whether the field accepts a Null value. This can be one of two values: **SQL_NULLABLE** if the field accepts Null values, or **SQL_NO_NULLS** if the field does not accept Null values.  
  
## Remarks  
 To retrieve this information, call [CRecordset::GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#crecordset__getodbcfieldinfo).  
  
## Requirements  
 **Header:** afxdb.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRecordset::GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#crecordset__getodbcfieldinfo)   
 [CRecordset::GetFieldValue](../../mfc/reference/crecordset-class.md#crecordset__getfieldvalue)








