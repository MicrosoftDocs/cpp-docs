---
title: "_com_error::HRESULTToWCode | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "HRESULTToWCode"
  - "_com_error.HRESULTToWCode"
  - "_com_error::HRESULTToWCode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HRESULTToWCode method"
ms.assetid: ff3789f5-1047-41a0-b7e3-86dd8f638dba
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::HRESULTToWCode
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_error::HRESULTToWCode](https://docs.microsoft.com/cpp/cpp/com-error-hresulttowcode).  
  
Microsoft Specific**  
  
 Maps 32-bit `HRESULT` to 16-bit `wCode`.  
  
## Syntax  
  
```  
  
      static WORD HRESULTToWCode(  
   HRESULT hr   
) throw( );  
```  
  
#### Parameters  
 `hr`  
 The 32-bit `HRESULT` to be mapped to 16-bit `wCode`.  
  
## Return Value  
 16-bit `wCode` mapped from the 32-bit `HRESULT`.  
  
## Remarks  
 See [_com_error::WCode](../cpp/com-error-wcode.md) for more information.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error::WCode](../cpp/com-error-wcode.md)   
 [_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)   
 [_com_error Class](../cpp/com-error-class.md)





