---
title: "_com_error::ErrorMessage | Microsoft Docs"
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
  - "_com_error::ErrorMessage"
  - "_com_error.ErrorMessage"
  - "ErrorMessage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ErrorMessage method"
ms.assetid: e47335b6-01af-4975-a841-121597479eb7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::ErrorMessage
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_error::ErrorMessage](https://docs.microsoft.com/cpp/cpp/com-error-errormessage).  
  
Microsoft Specific**  
  
 Retrieves the string message for `HRESULT` stored in the `_com_error` object.  
  
## Syntax  
  
```  
  
const TCHAR * ErrorMessage( ) const throw( );  
  
```  
  
## Return Value  
 Returns the string message for the `HRESULT` recorded within the `_com_error` object. If the `HRESULT` is a mapped 16-bit [wCode](../cpp/com-error-wcode.md), then a generic message "`IDispatch error #<wCode>`" is returned. If no message is found, then a generic message "`Unknown error #<hresult>`" is returned. The returned string is either a Unicode or multibyte string, depending on the state of the **_UNICODE** macro.  
  
## Remarks  
 Retrieves the appropriate system message text for `HRESULT` recorded within the `_com_error` object. The system message text is obtained by calling the Win32 [FormatMessage](http://msdn.microsoft.com/library/windows/desktop/ms679351) function. The string returned is allocated by the `FormatMessage` API, and it is released when the `_com_error` object is destroyed.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error Class](../cpp/com-error-class.md)





