---
title: "SafeIntException::SafeIntException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "SafeIntException"
  - "SafeIntException.SafeIntException"
  - "SafeIntException::SafeIntException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeIntException, constructor"
ms.assetid: 8e5a0c24-a56b-4c80-9ee8-876604b1e7dc
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
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
# SafeIntException::SafeIntException
Creates a `SafeIntException` object.  
  
## Syntax  
  
```  
SafeIntException();  
  
SafeIntException(  
   SafeIntError code  
);  
```  
  
#### Parameters  
 [in] `code`  
 An enumerated data value that describes the error that occurred.  
  
## Remarks  
 The possible values for `code` are defined in the file Safeint.h. For convenience, the possible values are also listed here.  
  
-   `SafeIntNoError`  
  
-   `SafeIntArithmeticOverflow`  
  
-   `SafeIntDivideByZero`  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** msl::utilities  
  
## See Also  
 [SafeInt Library](../windows/safeint-library.md)   
 [SafeIntException Class](../windows/safeintexception-class.md)   
 [SafeInt Class](../windows/safeint-class.md)