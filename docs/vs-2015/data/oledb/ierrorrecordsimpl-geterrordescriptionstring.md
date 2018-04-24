---
title: "IErrorRecordsImpl::GetErrorDescriptionString | Microsoft Docs"
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
  - "GetErrorDescriptionString"
  - "IErrorRecordsImpl.GetErrorDescriptionString"
  - "IErrorRecordsImpl::GetErrorDescriptionString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetErrorDescriptionString method"
ms.assetid: 8bc71c45-ca9f-4632-bb02-1aa9ed8086c4
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IErrorRecordsImpl::GetErrorDescriptionString
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IErrorRecordsImpl::GetErrorDescriptionString](https://docs.microsoft.com/cpp/data/oledb/ierrorrecordsimpl-geterrordescriptionstring).  
  
  
Gets the error description string from an error record.  
  
## Syntax  
  
```  
  
      LPOLESTR GetErrorDescriptionString(  
   ERRORINFO& rCurError   
);  
```  
  
#### Parameters  
 `rCurError`  
 An `ERRORINFO` record in an **IErrorInfo** interface.  
  
## Return Value  
 A pointer to a string describing the error.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../../data/oledb/ierrorrecordsimpl-class.md)

