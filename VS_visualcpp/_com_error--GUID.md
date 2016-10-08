---
title: "_com_error::GUID"
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
ms.topic: language-reference
ms.assetid: e84c2c23-d02e-48f8-b776-9bd6937296d2
caps.latest.revision: 6
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
# _com_error::GUID
**Microsoft Specific**  
  
 Calls **IErrorInfo::GetGUID** function.  
  
## Syntax  
  
```  
  
GUID GUID( ) const throw( );  
  
```  
  
## Return Value  
 Returns the result of **IErrorInfo::GetGUID** for the **IErrorInfo** object recorded within the `_com_error` object. If no **IErrorInfo** object is recorded, it returns `GUID_NULL`.  
  
## Remarks  
 Any failure while calling the **IErrorInfo::GetGUID** method is ignored.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error Class](../VS_visualcpp/_com_error-Class.md)