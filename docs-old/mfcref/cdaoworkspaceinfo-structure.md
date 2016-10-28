---
title: "CDaoWorkspaceInfo Structure"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CDaoWorkspaceInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoWorkspaceInfo structure"
  - "DAO (Data Access Objects), Workspaces collection"
ms.assetid: a1f4b25e-f9c6-4196-b075-d1df99c54124
caps.latest.revision: 10
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
 `m_strName`  
 Uniquely names the workspace object. To retrieve the value of this property directly, call the querydef object's [GetName](../Topic/CDaoQueryDef::GetName.md) member function. For more information, see the topic "Name Property" in DAO Help.  
  
 *m_strUserName*  
 A value that represents the owner of a workspace object. For related information, see the topic "UserName Property" in DAO Help.  
  
 *m_bIsolateODBCTrans*  
 A value that indicates whether multiple transactions that involve the same ODBC database are isolated. For more information, see [CDaoWorkspace::SetIsolateODBCTrans](../Topic/CDaoWorkspace::SetIsolateODBCTrans.md). For related information, see the topic "IsolateODBCTrans Property" in DAO Help.  
  
## Remarks  
 The workspace is an object of class [CDaoWorkspace](../mfcref/cdaoworkspace-class.md). The references to Primary, Secondary, and All above indicate how the information is returned by the [GetWorkspaceInfo](../Topic/CDaoWorkspace::GetWorkspaceInfo.md) member function in class `CDaoWorkspace`.  
  
 Information retrieved by the [CDaoWorkspace::GetWorkspaceInfo](../Topic/CDaoWorkspace::GetWorkspaceInfo.md) member function is stored in a `CDaoWorkspaceInfo` structure. `CDaoWorkspaceInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoWorkspaceInfo` object.  
  
## Requirements  
 **Header:** afxdao.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../mfcref/structures--styles--callbacks--and-message-maps.md)   
 [CDaoWorkspace Class](../mfcref/cdaoworkspace-class.md)