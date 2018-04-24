---
title: "SafeIntException::SafeIntException | Microsoft Docs"
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
  - "SafeIntException"
  - "SafeIntException.SafeIntException"
  - "SafeIntException::SafeIntException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeIntException, constructor"
ms.assetid: 8e5a0c24-a56b-4c80-9ee8-876604b1e7dc
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# SafeIntException::SafeIntException
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [SafeIntException::SafeIntException](https://docs.microsoft.com/cpp/windows/safeintexception-safeintexception).  
  
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



