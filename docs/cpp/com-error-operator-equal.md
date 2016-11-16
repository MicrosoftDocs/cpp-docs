---
title: "_com_error::operator = | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_error::operator="
  - "_com_error.operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= _com_error objects"
  - "= operator, with specific Visual C++ objects"
  - "operator = _com_error objects"
ms.assetid: b9cc4094-d055-450c-b45a-0a95317488f8
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
# _com_error::operator =
**Microsoft Specific**  
  
 Assigns an existing `_com_error` object to another.  
  
## Syntax  
  
```  
  
      _com_error& operator = (  
   const _com_error& that   
) throw ( );  
```  
  
#### Parameters  
 `that`  
 A `_com_error` object.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_error Class](../cpp/com-error-class.md)