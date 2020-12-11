---
description: "Learn more about: CDaoParameterInfo Structure"
title: "CDaoParameterInfo Structure"
ms.date: "09/17/2019"
f1_keywords: ["CDaoParameterInfo"]
helpviewer_keywords: ["CDaoParameterInfo structure [MFC]", "DAO (Data Access Objects), Parameters collection"]
ms.assetid: 45fd53cd-cb84-4e12-b48d-7f2979f898ad
---
# CDaoParameterInfo Structure

The `CDaoParameterInfo` structure contains information about a parameter object defined for data access objects (DAO). DAO 3.6 is the final version, and it is considered obsolete.

## Syntax

```
struct CDaoParameterInfo
{
    CString m_strName;       // Primary
    short m_nType;           // Primary
    ColeVariant m_varValue;  // Secondary
};
```

#### Parameters

*m_strName*<br/>
Uniquely names the parameter object. For more information, see the topic "Name Property" in DAO Help.

*m_nType*<br/>
A value that indicates the data type of a parameter object. For a list of the possible values, see the *m_nType* member of the [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) structure. For more information, see the topic "Type Property" in DAO Help.

*m_varValue*<br/>
The value of the parameter, stored in a [COleVariant](../../mfc/reference/colevariant-class.md) object.

## Remarks

The references to Primary and Secondary above indicate how the information is returned by the [GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) member function in class `CDaoQueryDef`.

MFC does not encapsulate DAO parameter objects in a class. DAO querydef objects underlying MFC `CDaoQueryDef` objects store parameters in their Parameters collections. To access the parameter objects in a [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) object, call the querydef object's `GetParameterInfo` member function for a particular parameter name or an index into the Parameters collection. You can use the [CDaoQueryDef::GetParameterCount](../../mfc/reference/cdaoquerydef-class.md#getparametercount) member function in conjunction with `GetParameterInfo` to loop through the Parameters collection.

Information retrieved by the [CDaoQueryDef::GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) member function is stored in a `CDaoParameterInfo` structure. Call `GetParameterInfo` for the querydef object in whose Parameters collection the parameter object is stored.

> [!NOTE]
> If you want to get or set only the value of a parameter, use the [GetParamValue](../../mfc/reference/cdaorecordset-class.md#getparamvalue) and [SetParamValue](../../mfc/reference/cdaorecordset-class.md#setparamvalue) member functions of class `CDaoRecordset`.

`CDaoParameterInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoParameterInfo` object.

## Requirements

**Header:** afxdao.h

## See also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoQueryDef Class](../../mfc/reference/cdaoquerydef-class.md)
