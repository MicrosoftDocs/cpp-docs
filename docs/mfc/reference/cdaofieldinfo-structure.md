---
description: "Learn more about: CDaoFieldInfo Structure"
title: "CDaoFieldInfo Structure"
ms.date: "09/17/2019"
f1_keywords: ["CDaoFieldInfo"]
helpviewer_keywords: ["DAO (Data Access Objects), Fields collection", "CDaoFieldInfo structure [MFC]"]
ms.assetid: 91b13e3f-bdb8-440c-86fc-ba4181ea0182
---
# CDaoFieldInfo Structure

The `CDaoFieldInfo` structure contains information about a field object defined for data access objects (DAO).

DAO is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete.

## Syntax

```
struct CDaoFieldInfo
{
    CString m_strName;           // Primary
    short m_nType;               // Primary
    long m_lSize;                // Primary
    long m_lAttributes;          // Primary
    short m_nOrdinalPosition;    // Secondary
    BOOL m_bRequired;            // Secondary
    BOOL m_bAllowZeroLength;     // Secondary
    long m_lCollatingOrder;      // Secondary
    CString m_strForeignName;    // Secondary
    CString m_strSourceField;    // Secondary
    CString m_strSourceTable;    // Secondary
    CString m_strValidationRule; // All
    CString m_strValidationText; // All
    CString m_strDefaultValue;   // All
};
```

#### Parameters

*m_strName*<br/>
Uniquely names the field object. For details, see the topic "Name Property" in DAO Help.

*m_nType*<br/>
A value that indicates the data type of the field. For details, see the topic "Type Property" in DAO Help. The value of this property can be one of the following:

- `dbBoolean` Yes/No, same as TRUE/FALSE

- `dbByte` Byte

- `dbInteger` Short

- `dbLong` Long

- `dbCurrency` Currency; see MFC class [COleCurrency](../../mfc/reference/colecurrency-class.md)

- `dbSingle` Single

- `dbDouble` Double

- `dbDate` Date/Time; see MFC class [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)

- `dbText` Text; see MFC class [CString](../../atl-mfc-shared/reference/cstringt-class.md)

- `dbLongBinary` Long Binary (OLE Object); you might want to use MFC class [CByteArray](../../mfc/reference/cbytearray-class.md) instead of class `CLongBinary` as `CByteArray` is richer and easier to use.

- `dbMemo` Memo; see MFC class `CString`

- `dbGUID` A Globally Unique Identifier/Universally Unique Identifier used with remote procedure calls. For more information, see the topic "Type Property" in DAO Help.

> [!NOTE]
> Do not use string data types for binary data. This causes your data to pass through the Unicode/ANSI translation layer, resulting in increased overhead and possibly unexpected translation.

*m_lSize*<br/>
A value that indicates the maximum size, in bytes, of a DAO field object that contains text or the fixed size of a field object that contains text or numeric values. For details, see the topic "Size Property" in DAO Help. Sizes can be one of the following values:

|Type|Size (Bytes)|Description|
|----------|--------------------|-----------------|
|`dbBoolean`|1 byte|Yes/No (same as True/False)|
|`dbByte`|1|Byte|
|`dbInteger`|2|Integer|
|`dbLong`|4|Long|
|`dbCurrency`|8|Currency ([COleCurrency](../../mfc/reference/colecurrency-class.md))|
|`dbSingle`|4|Single|
|`dbDouble`|8|Double|
|`dbDate`|8|Date/Time ([COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md))|
|`dbText`|1 - 255|Text ([CString](../../atl-mfc-shared/reference/cstringt-class.md))|
|`dbLongBinary`|0|Long Binary (OLE Object; [CByteArray](../../mfc/reference/cbytearray-class.md); use instead of `CLongBinary`)|
|`dbMemo`|0|Memo ([CString](../../atl-mfc-shared/reference/cstringt-class.md))|
|`dbGUID`|16|A Globally Unique Identifier/Universally Unique Identifier used with remote procedure calls.|

*m_lAttributes*<br/>
Specifies characteristics of a field object contained by a tabledef, recordset, querydef, or index object. The value returned can be a sum of these constants, created with the C++ bitwise-OR (**&#124;**) operator:

- `dbFixedField` The field size is fixed (default for Numeric fields).

- `dbVariableField` The field size is variable (Text fields only).

- `dbAutoIncrField` The field value for new records is automatically incremented to a unique long integer that cannot be changed. Only supported for Microsoft Jet database tables.

- `dbUpdatableField` The field value can be changed.

- `dbDescending` The field is sorted in descending (Z - A or 100 - 0) order (applies only to a field object in a Fields collection of an index object; in MFC, index objects are themselves contained in tabledef objects). If you omit this constant, the field is sorted in ascending (A - Z or 0 - 100) order (default).

When checking the setting of this property, you can use the C++ bitwise-AND operator (**&**) to test for a specific attribute. When setting multiple attributes, you can combine them by combining the appropriate constants with the bitwise-OR (**&#124;**) operator. For details, see the topic "Attributes Property" in DAO Help.

*m_nOrdinalPosition*<br/>
A value that specifies the numeric order in which you want a field represented by a DAO field object to be displayed relative to other fields. You can set this property with [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield). For details, see the topic "OrdinalPosition Property" in DAO Help.

*m_bRequired*<br/>
Indicates whether a DAO field object requires a non-Null value. If this property is TRUE, the field does not allow a Null value. If Required is set to FALSE, the field can contain Null values as well as values that meet the conditions specified by the AllowZeroLength and ValidationRule property settings. For details, see the topic "Required Property" in DAO Help. You can set this property for a tabledef with [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_bAllowZeroLength*<br/>
Indicates whether an empty string ("") is a valid value of a DAO field object with a Text or Memo data type. If this property is TRUE, an empty string is a valid value. You can set this property to FALSE to ensure that you cannot use an empty string to set the value of a field. For details, see the topic "AllowZeroLength Property" in DAO Help. You can set this property for a tabledef with [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_lCollatingOrder*<br/>
Specifies the sequence of the sort order in text for string comparison or sorting. For details, see the topic "Customizing Windows Registry Settings for Data Access" in DAO Help. For a list of the possible values returned, see the `m_lCollatingOrder` member of the [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) structure. You can set this property for a tabledef with [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strForeignName*<br/>
A value that, in a relation, specifies the name of the DAO field object in a foreign table that corresponds to a field in a primary table. For details, see the topic "ForeignName Property" in DAO Help.

*m_strSourceField*<br/>
Indicates the name of the field that is the original source of the data for a DAO field object contained by a tabledef, recordset, or querydef object. This property indicates the original field name associated with a field object. For example, you could use this property to determine the original source of the data in a query field whose name is unrelated to the name of the field in the underlying table. For details, see the topic "SourceField, SourceTable Properties" in DAO Help. You can set this property for a tabledef with [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strSourceTable*<br/>
Indicates the name of the table that is the original source of the data for a DAO field object contained by a tabledef, recordset, or querydef object. This property indicates the original table name associated with a field object. For example, you could use this property to determine the original source of the data in a query field whose name is unrelated to the name of the field in the underlying table. For details, see the topic "SourceField, SourceTable Properties" in DAO Help. You can set this property for a tabledef with [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strValidationRule*<br/>
A value that validates the data in a field as it is changed or added to a table. For details, see the topic "ValidationRule Property" in DAO Help. You can set this property for a tabledef with [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

For related information about tabledefs, see the `m_strValidationRule` member of the [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) structure.

*m_strValidationText*<br/>
A value that specifies the text of the message that your application displays if the value of a DAO field object does not satisfy the validation rule specified by the ValidationRule property setting. For details, see the topic "ValidationText Property" in DAO Help. You can set this property for a tabledef with [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strDefaultValue*<br/>
The default value of a DAO field object. When a new record is created, the DefaultValue property setting is automatically entered as the value for the field. For details, see the topic "DefaultValue Property" in DAO Help. You can set this property for a tabledef with [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

## Remarks

The references to Primary, Secondary, and All above indicate how the information is returned by the `GetFieldInfo` member function in classes [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getfieldinfo), [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md#getfieldinfo), and [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getfieldinfo).

Field objects are not represented by an MFC class. Instead, the DAO objects underlying MFC objects of the following classes contain collections of field objects: [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md), [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md), and [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). These classes supply member functions to access some individual items of field information, or you can access them all at once with a `CDaoFieldInfo` object by calling the `GetFieldInfo` member function of the containing object.

Besides its use for examining object properties, you can also use `CDaoFieldInfo` to construct an input parameter for creating new fields in a tabledef. Simpler options are available for this task, but if you want finer control, you can use the version of [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield) that takes a `CDaoFieldInfo` parameter.

Information retrieved by the `GetFieldInfo` member function (of the class that contains the field) is stored in a `CDaoFieldInfo` structure. Call the `GetFieldInfo` member function of the containing object in whose Fields collection the field object is stored. `CDaoFieldInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoFieldInfo` object.

## Requirements

**Header:** afxdao.h

## See also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoTableDef::GetFieldInfo](../../mfc/reference/cdaotabledef-class.md#getfieldinfo)<br/>
[CDaoRecordset::GetFieldInfo](../../mfc/reference/cdaorecordset-class.md#getfieldinfo)<br/>
[CDaoQueryDef::GetFieldInfo](../../mfc/reference/cdaoquerydef-class.md#getfieldinfo)
