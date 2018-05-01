---
title: "_com_error::HelpFile | Microsoft Docs"
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
  - "HelpFile"
  - "_com_error::HelpFile"
  - "_com_error.HelpFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HelpFile method"
ms.assetid: d2d3a0a1-6b62-4d52-a818-3cfae545a4af
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::HelpFile
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_error::HelpFile](https://docs.microsoft.com/cpp/cpp/com-error-helpfile).  
  
Microsoft Specific**  
  
 Calls **IErrorInfo::GetHelpFile** function.  
  
## Syntax  
  
```  
  
_bstr_t HelpFile() const;  
  
```  
  
## Return Value  
 Returns the result of **IErrorInfo::GetHelpFile** for the **IErrorInfo** object recorded within the `_com_error` object. The resulting BSTR is encapsulated in a `_bstr_t` object. If no **IErrorInfo** is recorded, it returns an empty `_bstr_t`.  
  
## Remarks  
 Any failure while calling the **IErrorInfo::GetHelpFile** method is ignored.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error Class](../cpp/com-error-class.md)





