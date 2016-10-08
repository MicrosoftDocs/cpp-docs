---
title: "_com_error::HelpContext"
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
ms.assetid: 160d6443-9b68-4cf5-a540-50da951a5b2b
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
# _com_error::HelpContext
**Microsoft Specific**  
  
 Calls **IErrorInfo::GetHelpContext** function.  
  
## Syntax  
  
```  
  
DWORD HelpContext( ) const throw( );  
  
```  
  
## Return Value  
 Returns the result of **IErrorInfo::GetHelpContext** for the **IErrorInfo** object recorded within the `_com_error` object. If no **IErrorInfo** object is recorded, it returns a zero.  
  
## Remarks  
 Any failure while calling the **IErrorInfo::GetHelpContext** method is ignored.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error Class](../VS_visualcpp/_com_error-Class.md)