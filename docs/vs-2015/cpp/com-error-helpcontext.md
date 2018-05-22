---
title: "_com_error::HelpContext | Microsoft Docs"
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
  - "_com_error::HelpContext"
  - "HelpContext"
  - "_com_error.HelpContext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HelpContext method"
ms.assetid: 160d6443-9b68-4cf5-a540-50da951a5b2b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::HelpContext
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_error::HelpContext](https://docs.microsoft.com/cpp/cpp/com-error-helpcontext).  
  
Microsoft Specific**  
  
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
 [_com_error Class](../cpp/com-error-class.md)





