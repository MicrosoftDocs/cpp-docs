---
title: "_com_error::HRESULTToWCode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_com_error::HRESULTToWCode"]
dev_langs: ["C++"]
helpviewer_keywords: ["HRESULTToWCode method [C++]"]
ms.assetid: ff3789f5-1047-41a0-b7e3-86dd8f638dba
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _com_error::HRESULTToWCode
**Microsoft Specific**  
  
 Maps 32-bit HRESULT to 16-bit `wCode`.  
  
## Syntax  
  
```  
static WORD HRESULTToWCode(  
   HRESULT hr   
) throw( );  
```  
  
#### Parameters  
 *hr*  
 The 32-bit HRESULT to be mapped to 16-bit `wCode`.  
  
## Return Value  
 16-bit `wCode` mapped from the 32-bit HRESULT.  
  
## Remarks  
 See [_com_error::WCode](../cpp/com-error-wcode.md) for more information.  
  
 **END Microsoft Specific**  
  
## See also  
 [_com_error::WCode](../cpp/com-error-wcode.md)   
 [_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)   
 [_com_error Class](../cpp/com-error-class.md)