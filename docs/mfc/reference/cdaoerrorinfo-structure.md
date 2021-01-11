---
description: "Learn more about: CDaoErrorInfo Structure"
title: "CDaoErrorInfo Structure"
ms.date: "09/17/2019"
f1_keywords: ["CDaoErrorInfo"]
helpviewer_keywords: ["CDaoErrorInfo structure [MFC]", "DAO (Data Access Objects), Errors collection"]
ms.assetid: cd37ef71-b0b3-401d-bc2b-540c9147f532
---
# CDaoErrorInfo Structure

The `CDaoErrorInfo` structure contains information about an error object defined for data access objects (DAO). DAO 3.6 is the final version, and it is considered obsolete.

## Syntax

```
struct CDaoErrorInfo
{
    long m_lErrorCode;
    CString m_strSource;
    CString m_strDescription;
    CString m_strHelpFile;
    long m_lHelpContext;
};
```

#### Parameters

*m_lErrorCode*<br/>
A numeric DAO error code. See the topic "Trappable Data Access Errors" in DAO Help.

*m_strSource*<br/>
The name of the object or application that originally generated the error. The Source property specifies a string expression representing the object that originally generated the error; the expression is usually the object's class name. For details, see the topic "Source Property" in DAO Help.

*m_strDescription*<br/>
A descriptive string associated with an error. For details, see the topic "Description Property" in DAO Help.

*m_strHelpFile*<br/>
A fully qualified path to a Microsoft Windows Help file. For details, see the topic "HelpContext, HelpFile Properties" in DAO Help.

*m_lHelpContext*<br/>
A context ID for a topic in a Microsoft Windows Help file. For details, see the topic "HelpContext, HelpFile Properties" in DAO Help.

## Remarks

MFC does not encapsulate DAO error objects in a class. Instead, the [CDaoException](../../mfc/reference/cdaoexception-class.md) class supplies an interface for accessing the Errors collection contained in the DAO `DBEngine` object, the object that also contains all workspaces. When an MFC DAO operation throws a `CDaoException` object that you catch, MFC fills a `CDaoErrorInfo` structure and stores it in the exception object's [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#m_perrorinfo) member. (If you choose to call DAO directly, you must call the exception object's [GetErrorInfo](../../mfc/reference/cdaoexception-class.md#geterrorinfo) member function yourself to fill `m_pErrorInfo`.)

For more information about handling DAO errors, see the article [Exceptions: Database Exceptions](../../mfc/exceptions-database-exceptions.md). For related information, see the topic "Error Object" in DAO Help.

Information retrieved by the [CDaoException::GetErrorInfo](../../mfc/reference/cdaoexception-class.md#geterrorinfo) member function is stored in a `CDaoErrorInfo` structure. Examine the [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#m_perrorinfo) data member from a `CDaoException` object that you catch in an exception handler, or call `GetErrorInfo` from a `CDaoException` object that you create explicitly in order to check errors that might have occurred during a direct call to the DAO interfaces. `CDaoErrorInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoErrorInfo` object.

## Requirements

**Header:** afxdao.h

## See also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoException Class](../../mfc/reference/cdaoexception-class.md)
