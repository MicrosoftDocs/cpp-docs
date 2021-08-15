---
description: "Learn more about: CODBCFieldInfo Structure"
title: "CODBCFieldInfo Structure"
ms.date: "11/04/2016"
f1_keywords: ["CODBCFieldInfo"]
helpviewer_keywords: ["ODBC [MFC], data source information", "CODBCFieldInfo structure [MFC]"]
ms.assetid: 92598b4f-facc-4108-b282-63a179ff79ab
---
# CODBCFieldInfo Structure

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

*m_strName*<br/>
The name of the field.

*m_nSQLType*<br/>
The SQL data type of the field. This can be an ODBC SQL data type or a driver-specific SQL data type. For a list of valid ODBC SQL data types, see "SQL Data Types" in the Windows SDK. For information about driver-specific SQL data types, see the driver's documentation.

*m_nPrecision*<br/>
The maximum precision of the field. For details, see "Precision, Scale, Length, and Display Size" in the Windows SDK.

*m_nScale*<br/>
The scale of the field. For details, see "Precision, Scale, Length, and Display Size" in the Windows SDK.

*m_nNullability*<br/>
Whether the field accepts a Null value. This can be one of two values: SQL_NULLABLE if the field accepts Null values, or SQL_NO_NULLS if the field does not accept Null values.

## Remarks

To retrieve this information, call [CRecordset::GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#getodbcfieldinfo).

## Requirements

**Header:** afxdb.h

## See also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CRecordset::GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#getodbcfieldinfo)<br/>
[CRecordset::GetFieldValue](../../mfc/reference/crecordset-class.md#getfieldvalue)
