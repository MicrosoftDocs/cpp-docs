---
title: "_com_error::ErrorInfo"
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
ms.assetid: 071b446c-4395-4fb8-bd3d-300a8b25f5cd
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
# _com_error::ErrorInfo
**Microsoft Specific**  
  
 Retrieves the **IErrorInfo** object passed to the constructor.  
  
## Syntax  
  
```  
  
IErrorInfo * ErrorInfo( ) const throw( );  
  
```  
  
## Return Value  
 Raw **IErrorInfo** item passed into the constructor.  
  
## Remarks  
 Retrieves the encapsulated **IErrorInfo** item in a `_com_error` object, or **NULL** if no **IErrorInfo** item is recorded. The caller must call **Release** on the returned object when finished using it.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error Class](../VS_visualcpp/_com_error-Class.md)