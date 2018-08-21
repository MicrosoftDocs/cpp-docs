---
title: "SafeIntException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["SafeIntException Class"]
dev_langs: ["C++"]
helpviewer_keywords: ["SafeIntException class"]
ms.assetid: 88bef958-1f48-4d55-ad4f-d1f9581a293a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SafeIntException Class
The `SafeInt` class uses **SafeIntException** to identify why a mathematical operation cannot be completed.  
  
## Syntax  
  
```cpp  
class SafeIntException;  
```  
  
## Members  
  
### Public Constructors  
 [SafeIntException::SafeIntException](../windows/safeintexception-safeintexception.md)  
 Creates a **SafeIntException** object.  
  
## Remarks  
 The [SafeInt Class](../windows/safeint-class.md) is the only class that uses the **SafeIntException** class.  
  
## Inheritance Hierarchy  
 [SafeIntException Class](../windows/safeintexception-class.md)  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** msl::utilities  
  
## See Also  
 [SafeInt Library](../windows/safeint-library.md)   
 [SafeInt Class](../windows/safeint-class.md)