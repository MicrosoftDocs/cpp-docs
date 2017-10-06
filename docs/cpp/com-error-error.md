---
title: "_com_error::Error | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["_com_error::Error", "Error"]
dev_langs: ["C++"]
helpviewer_keywords: ["Error method [C++]"]
ms.assetid: b53a15fd-198e-4276-afcd-13439c4807f7
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::Error
**Microsoft Specific**  
  
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