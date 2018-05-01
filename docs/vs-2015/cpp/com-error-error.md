---
title: "_com_error::Error | Microsoft Docs"
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
  - "_com_error.Error"
  - "_com_error::Error"
  - "Error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Error method"
ms.assetid: b53a15fd-198e-4276-afcd-13439c4807f7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::Error
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_error::Error](https://docs.microsoft.com/cpp/cpp/com-error-error).  
  
Microsoft Specific**  
  
 Retrieves the `HRESULT` passed to the constructor.  
  
## Syntax  
  
```  
  
HRESULT Error( ) const throw( );  
  
```  
  
## Return Value  
 Raw `HRESULT` item passed into the constructor.  
  
## Remarks  
 Retrieves the encapsulated `HRESULT` item in a `_com_error` object.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error Class](../cpp/com-error-class.md)





