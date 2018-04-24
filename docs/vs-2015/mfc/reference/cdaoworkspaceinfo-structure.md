---
title: "CDaoWorkspaceInfo Structure | Microsoft Docs"
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
  - "CDaoWorkspaceInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoWorkspaceInfo structure"
  - "DAO (Data Access Objects), Workspaces collection"
ms.assetid: a1f4b25e-f9c6-4196-b075-d1df99c54124
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDaoWorkspaceInfo Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDaoWorkspaceInfo Structure](https://docs.microsoft.com/cpp/mfc/reference/cdaoworkspaceinfo-structure).  
  
  
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
 `m_strName`  
 Uniquely names the workspace object. To retrieve the value of this property directly, call the querydef object's [GetName](../../mfc/reference/cdaoquerydef-class.md#GetName) member function. For more information, see the topic "Name Property" in DAO Help.  
  
 *m_strUserName*  
 A value that represents the owner of a workspace object. For related information, see the topic "UserName Property" in DAO Help.  
  
 *m_bIsolateODBCTrans*  
 A value that indicates whether multiple transactions that involve the same ODBC database are isolated. For more information, see [CDaoWorkspace::SetIsolateODBCTrans](../../mfc/reference/cdaoworkspace-class.md#SetIsolateODBCTrans). For related information, see the topic "IsolateODBCTrans Property" in DAO Help.  
  
## Remarks  
 The workspace is an object of class [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). The references to Primary, Secondary, and All above indicate how the information is returned by the [GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#GetWorkspaceInfo) member function in class `CDaoWorkspace`.  
  
 Information retrieved by the [CDaoWorkspace::GetWorkspaceInfo](../../mfc/reference/cdaoworkspace-class.md#GetWorkspaceInfo) member function is stored in a `CDaoWorkspaceInfo` structure. `CDaoWorkspaceInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoWorkspaceInfo` object.  
  
## Requirements  
 **Header:** afxdao.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoWorkspace Class](../../mfc/reference/cdaoworkspace-class.md)






