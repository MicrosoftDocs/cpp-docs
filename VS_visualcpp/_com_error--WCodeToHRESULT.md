---
title: "_com_error::WCodeToHRESULT"
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
ms.assetid: 0ec43a4b-ca91-42d5-b270-3fde9c8412ea
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
# _com_error::WCodeToHRESULT
**Microsoft Specific**  
  
 Maps 16-bit `wCode` to 32-bit `HRESULT`.  
  
## Syntax  
  
```  
  
      static HRESULT WCodeToHRESULT(  
   WORD wCode   
) throw( );  
```  
  
#### Parameters  
 `wCode`  
 The 16-bit `wCode` to be mapped to 32-bit `HRESULT`.  
  
## Return Value  
 32-bit `HRESULT` mapped from the 16-bit `wCode`.  
  
## Remarks  
 See the [WCode](../VS_visualcpp/_com_error--WCode.md) member function.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error::WCode](../VS_visualcpp/_com_error--WCode.md)   
 [_com_error::HRESULTToWCode](../VS_visualcpp/_com_error--HRESULTToWCode.md)   
 [_com_error Class](../VS_visualcpp/_com_error-Class.md)