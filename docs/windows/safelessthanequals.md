---
title: "SafeLessThanEquals | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["SafeLessThanEquals"]
dev_langs: ["C++"]
helpviewer_keywords: ["SafeLessThanEquals function"]
ms.assetid: cbd70526-faf2-4fbc-96a0-b61e8cf5f04a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SafeLessThanEquals
Compares two numbers.  
  
## Syntax  
  
```cpp  
template <typename T, typename U>  
inline bool SafeLessThanEquals (  
   const T t,  
   const U u  
) throw ();  
```  
  
### Parameters  
 [in] *t*  
 The first number to compare. This must be of type `T`.  
  
 [in] *u*  
 The second number to compare. This must be of type `U`.  
  
## Return Value  
 **true** if *t* is less than or equal to *u*; otherwise **false**.  
  
## Remarks  
 **SafeLessThanEquals** extends the regular comparison operator by enabling you to compare two different types of numbers.  
  
 This method is part of [SafeInt Library](../windows/safeint-library.md) and is designed for a single comparison operation without creating an instance of the [SafeInt Class](../windows/safeint-class.md).  
  
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
 [SafeGreaterThan](../windows/safegreaterthan.md)   
 [SafeLessThan](../windows/safelessthan.md)   
 [SafeGreaterThanEquals](../windows/safegreaterthanequals.md)