---
title: "IErrorRecordsImpl::GetBasicErrorInfo"
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
ms.assetid: d0b4dec3-f32a-4aaa-8365-524f2e7c8395
caps.latest.revision: 9
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
# IErrorRecordsImpl::GetBasicErrorInfo
Returns basic information about the error, such as the return code and provider-specific error number.  
  
## Syntax  
  
```  
  
      STDMETHOD( GetBasicErrorInfo )(  
   ULONG ulRecordNum,  
   ERRORINFO *pErrorInfo   
);  
```  
  
#### Parameters  
 See [IErrorRecords::GetBasicErrorInfo](https://msdn.microsoft.com/en-us/library/ms723907.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../VS_visualcpp/IErrorRecordsImpl-Class.md)