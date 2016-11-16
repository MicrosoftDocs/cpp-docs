---
title: "_com_error::WCode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_error.WCode"
  - "_com_error::WCode"
  - "WCode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WCode method"
ms.assetid: f3b21852-f8ea-4e43-bff1-11c2d35454c4
caps.latest.revision: 6
author: "mikeblome"
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
# _com_error::WCode
**Microsoft Specific**  
  
 Retrieves the 16-bit error code mapped into the encapsulated `HRESULT`.  
  
## Syntax  
  
```  
  
WORD WCode ( ) const throw( );  
  
```  
  
## Return Value  
 If the `HRESULT` is within the range 0x80040200 to 0x8004FFFF, the **WCode** method returns the `HRESULT` minus 0x80040200; otherwise, it returns zero.  
  
## Remarks  
 The **WCode** method is used to undo a mapping that happens in the COM support code. The wrapper for a **dispinterface** property or method calls a support routine that packages the arguments and calls **IDispatch::Invoke**. Upon return, if a failure `HRESULT` of `DISP_E_EXCEPTION` is returned, the error information is retrieved from the **EXCEPINFO** structure passed to **IDispatch::Invoke**. The error code can either be a 16-bit value stored in the `wCode` member of the **EXCEPINFO** structure or a full 32-bit value in the **scode** member of the **EXCEPINFO** structure. If a 16-bit `wCode` is returned, it must first be mapped to a 32-bit failure `HRESULT`.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)   
 [_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)   
 [_com_error Class](../cpp/com-error-class.md)