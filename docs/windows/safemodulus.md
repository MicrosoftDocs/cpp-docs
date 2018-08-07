---
title: "SafeModulus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["SafeModulus"]
dev_langs: ["C++"]
helpviewer_keywords: ["SafeModulus function"]
ms.assetid: ae5c81eb-5dcf-45a5-aa76-465fdfe68654
author: "ghogen"
ms.author: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# SafeModulus
Performs the modulus operation on two numbers.  
  
## Syntax  
  
```  
template<typename T, typename U>  
inline bool SafeModulus (  
   const T t,  
   const U u,  
   T& result  
) throw ();  
```  
  
### Parameters  
 [in] *t*  
 The divisor. This must be of type `T`.  
  
 [in] *u*  
 The dividend. This must be of type `U`.  
  
 [out] *result*  
 The parameter where **SafeModulus** stores the result.  
  
## Return Value  
 **true** if no error occurs; **false** if an error occurs.  
  
## Remarks  
 This method is part of [SafeInt Library](../windows/safeint-library.md) and is designed for a single modulus operation without creating an instance of the [SafeInt Class](../windows/safeint-class.md).  
  
> [!NOTE]
>  This method should only be used when a single mathematical operation must be protected. If there are multiple operations, you should use the `SafeInt` class instead of calling the individual stand-alone functions.  
  
 For more information about the template types `T` and `U`, see [SafeInt Functions](../windows/safeint-functions.md).  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** Microsoft::Utilities  
  
## See Also  
 [SafeInt Functions](../windows/safeint-functions.md)   
 [SafeInt Library](../windows/safeint-library.md)   
 [SafeInt Class](../windows/safeint-class.md)   
 [SafeDivide](../windows/safedivide.md)