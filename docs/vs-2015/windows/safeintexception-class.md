---
title: "SafeIntException Class | Microsoft Docs"
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
  - "SafeIntException Class"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeIntException class"
ms.assetid: 88bef958-1f48-4d55-ad4f-d1f9581a293a
caps.latest.revision: 10
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# SafeIntException Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [SafeIntException Class](https://docs.microsoft.com/cpp/windows/safeintexception-class).  
  
The `SafeInt` class uses `SafeIntException` to identify why a mathematical operation cannot be completed.  
  
## Syntax  
  
```  
class SafeIntException;  
```  
  
## Members  
  
### Public Constructors  
 [SafeIntException::SafeIntException](../windows/safeintexception-safeintexception.md)  
 Creates a `SafeIntException` object.  
  
## Remarks  
 The [SafeInt Class](../windows/safeint-class.md) is the only class that uses the `SafeIntException` class.  
  
## Inheritance Hierarchy  
 [SafeIntException Class](../windows/safeintexception-class.md)  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** msl::utilities  
  
## See Also  
 [SafeInt Library](../windows/safeint-library.md)   
 [SafeInt Class](../windows/safeint-class.md)



