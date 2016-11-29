---
title: "CDaoErrorInfo Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDaoErrorInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoErrorInfo structure"
  - "DAO (Data Access Objects), Errors collection"
ms.assetid: cd37ef71-b0b3-401d-bc2b-540c9147f532
caps.latest.revision: 13
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
# CDaoErrorInfo Structure
The `CDaoErrorInfo` structure contains information about an error object defined for data access objects (DAO).  
  
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
 *m_lErrorCode*  
 A numeric DAO error code. See the topic "Trappable Data Access Errors" in DAO Help.  
  
 *m_strSource*  
 The name of the object or application that originally generated the error. The Source property specifies a string expression representing the object that originally generated the error; the expression is usually the object's class name. For details, see the topic "Source Property" in DAO Help.  
  
 *m_strDescription*  
 A descriptive string associated with an error. For details, see the topic "Description Property" in DAO Help.  
  
 *m_strHelpFile*  
 A fully qualified path to a Microsoft Windows Help file. For details, see the topic "HelpContext, HelpFile Properties" in DAO Help.  
  
 *m_lHelpContext*  
 A context ID for a topic in a Microsoft Windows Help file. For details, see the topic "HelpContext, HelpFile Properties" in DAO Help.  
  
## Remarks  
 MFC does not encapsulate DAO error objects in a class. Instead, the [CDaoException](../../mfc/reference/cdaoexception-class.md) class supplies an interface for accessing the Errors collection contained in the DAO **DBEngine** object, the object that also contains all workspaces. When an MFC DAO operation throws a `CDaoException` object that you catch, MFC fills a `CDaoErrorInfo` structure and stores it in the exception object's [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#cdaoexception__m_perrorinfo) member. (If you choose to call DAO directly, you must call the exception object's [GetErrorInfo](../../mfc/reference/cdaoexception-class.md#cdaoexception__geterrorinfo) member function yourself to fill `m_pErrorInfo`.)  
  
 For more information about handling DAO errors, see the article [Exceptions: Database Exceptions](../../mfc/exceptions-database-exceptions.md). For related information, see the topic "Error Object" in DAO Help.  
  
 Information retrieved by the [CDaoException::GetErrorInfo](../../mfc/reference/cdaoexception-class.md#cdaoexception__geterrorinfo) member function is stored in a `CDaoErrorInfo` structure. Examine the [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#cdaoexception__m_perrorinfo) data member from a `CDaoException` object that you catch in an exception handler, or call `GetErrorInfo` from a `CDaoException` object that you create explicitly in order to check errors that might have occurred during a direct call to the DAO interfaces. `CDaoErrorInfo` also defines a `Dump` member function in debug builds. You can use `Dump` to dump the contents of a `CDaoErrorInfo` object.  
  
## Requirements  
 **Header:** afxdao.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoException Class](../../mfc/reference/cdaoexception-class.md)
