---
title: "IErrorRecordsImpl::GetErrorHelpContext | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetErrorHelpContext"
  - "IErrorRecordsImpl::GetErrorHelpContext"
  - "IErrorRecordsImpl.GetErrorHelpContext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetErrorHelpContext method"
ms.assetid: 53d70239-0d64-482e-9ad4-4e1f4f02d5a3
caps.latest.revision: 9
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
# IErrorRecordsImpl::GetErrorHelpContext
Gets the help context ID from an error record.  
  
## Syntax  
  
```  
  
      DWORD GetErrorHelpContext(  
   ERRORINFO& rCurError   
);  
```  
  
#### Parameters  
 `rCurError`  
 An `ERRORINFO` record in an **IErrorInfo** interface.  
  
## Return Value  
 The help context ID for the error.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../../data/oledb/ierrorrecordsimpl-class.md)