---
title: "IErrorRecordsImpl::GetErrorSource"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 5436f1ce-c5a4-403b-a62b-c58e70e5c925
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# IErrorRecordsImpl::GetErrorSource
Gets the source code that caused the error from an error record.  
  
## Syntax  
  
```  
  
      LPOLESTR GetErrorSource(  
   ERRORINFO& rCurError   
);  
```  
  
#### Parameters  
 `rCurError`  
 An `ERRORINFO` record in an **IErrorInfo** interface.  
  
## Return Value  
 Pointer to a string containing the source code for the error.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../VS_visualcpp/IErrorRecordsImpl-Class.md)