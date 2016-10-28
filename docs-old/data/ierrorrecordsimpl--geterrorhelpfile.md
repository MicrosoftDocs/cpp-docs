---
title: "IErrorRecordsImpl::GetErrorHelpFile"
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
  - "IErrorRecordsImpl::GetErrorHelpFile"
  - "GetErrorHelpFile"
  - "IErrorRecordsImpl.GetErrorHelpFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetErrorHelpFile method"
ms.assetid: ad198f76-5bdf-4b8d-9f1a-3d38f72f31ad
caps.latest.revision: 8
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
# IErrorRecordsImpl::GetErrorHelpFile
Gets the path name of the help file from an error record.  
  
## Syntax  
  
```  
  
      LPOLESTR GetErrorHelpFile(  
   ERRORINFO& rCurError   
);  
```  
  
#### Parameters  
 `rCurError`  
 An `ERRORINFO` record in an **IErrorInfo** interface.  
  
## Return Value  
 Pointer to a string that contains the path name of the help file for the error.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../data/ierrorrecordsimpl-class.md)