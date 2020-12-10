---
description: "Learn more about: CDaoWorkspaceInfo Structure"
title: "CDaoWorkspaceInfo Structure"
ms.date: "11/04/2016"
f1_keywords: ["CDaoWorkspaceInfo"]
helpviewer_keywords: ["CDaoWorkspaceInfo structure [MFC]", "DAO (Data Access Objects), Workspaces collection"]
ms.assetid: a1f4b25e-f9c6-4196-b075-d1df99c54124
---
# CDaoWorkspaceInfo Structure

The `CDaoWorkspaceInfo` structure contains information about a workspace defined for data access objects (DAO) database access.

## Syntax

```
struct CDaoWorkspaceInfo
{
    CString m_strName;           // Primary
    CString m_strUserName;       // Secondary
    BOOL m_bIsolateODBCTrans;    // All
};
```

#### Parameters

*m_strName*<br/>
Uniquely names the workspace object. To retrieve the value of this property directly, call the querydef object's [GetName](../../mfc/reference/cdaoquerydef-class.md#getname) member function. For more information, see the topic "Name Property" in DAO Help.

*m_strUserName*<br/>
A value that represents the owner of a workspace object. For related information, see the topic "UserName Property" in DAO Help.

*m_bIsolateODBCTrans*<br/>
A value that indicates whether multiple transactions that involve the same ODBC database are isolated. For more information, see [CDaoWorkspace::SetIsolateODBCTrans](../../mfc/reference/cdaoworkspace-class.md#setisolateodbctrans). For related information, see the topic "IsolateODBCTrans Property" in DAO Help.

## Remarks

The workspace is an object of class [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). The references to Primary, Secondary, and All above indicate how the information is returned by the [GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) member function in class `CDaoWorkspace`.

Information retrieved by the [CDaoWorkspace::GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#getworkspaceinfo) member function is stored in a `CDaoWorkspaceInfo` structure. `CDaoWorkspaceInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoWorkspaceInfo` object.

## Requirements

**Header:** afxdao.h

## See also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoWorkspace Class](../../mfc/reference/cdaoworkspace-class.md)
