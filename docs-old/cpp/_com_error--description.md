---
title: "_com_error::Description"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "_com_error.Description"
  - "_com_error::Description"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Description method"
ms.assetid: 88191e24-4ee8-44a6-8c4c-3758e22e0548
caps.latest.revision: 6
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
# _com_error::Description
**Microsoft Specific**  
  
 Calls **IErrorInfo::GetDescription** function.  
  
## Syntax  
  
```  
  
_bstr_t Description( ) const;  
  
```  
  
## Return Value  
 Returns the result of **IErrorInfo::GetDescription** for the **IErrorInfo** object recorded within the `_com_error` object. The resulting `BSTR` is encapsulated in a `_bstr_t` object. If no **IErrorInfo** is recorded, it returns an empty `_bstr_t`.  
  
## Remarks  
 Calls the **IErrorInfo::GetDescription** function and retrieves **IErrorInfo** recorded within the `_com_error` object. Any failure while calling the **IErrorInfo::GetDescription** method is ignored.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error Class](../cpp/_com_error-class.md)