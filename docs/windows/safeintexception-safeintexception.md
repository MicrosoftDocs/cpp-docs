---
title: "SafeIntException::SafeIntException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["SafeIntException", "SafeIntException.SafeIntException", "SafeIntException::SafeIntException"]
dev_langs: ["C++"]
helpviewer_keywords: ["SafeIntException, constructor"]
ms.assetid: 8e5a0c24-a56b-4c80-9ee8-876604b1e7dc
author: "ghogen"
ms.author: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# SafeIntException::SafeIntException
Creates a **SafeIntException** object.  
  
## Syntax  
  
```  
SafeIntException();  
  
SafeIntException(  
   SafeIntError code  
);  
```  
  
### Parameters  
 [in] *code*  
 An enumerated data value that describes the error that occurred.  
  
## Remarks  
 The possible values for *code* are defined in the file Safeint.h. For convenience, the possible values are also listed here.  
  
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