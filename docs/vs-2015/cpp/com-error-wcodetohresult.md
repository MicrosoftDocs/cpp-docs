---
title: "_com_error::WCodeToHRESULT | Microsoft Docs"
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
  - "_com_error::WCodeToHRESULT"
  - "_com_error.WCodeToHRESULT"
  - "WCodeToHRESULT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WCodeToHRESULT method"
ms.assetid: 0ec43a4b-ca91-42d5-b270-3fde9c8412ea
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::WCodeToHRESULT
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_error::WCodeToHRESULT](https://docs.microsoft.com/cpp/cpp/com-error-wcodetohresult).  
  
Microsoft Specific**  
  
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
 See the [WCode](../cpp/com-error-wcode.md) member function.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error::WCode](../cpp/com-error-wcode.md)   
 [_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)   
 [_com_error Class](../cpp/com-error-class.md)





