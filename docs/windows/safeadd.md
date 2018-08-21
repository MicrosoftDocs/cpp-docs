---
title: "SafeAdd | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["SafeAdd"]
dev_langs: ["C++"]
helpviewer_keywords: ["SafeAdd function"]
ms.assetid: 3f82b91d-59fe-4ee1-873b-d056182fa8be
author: "mikeblome"
ms.author: "mikeblome"
ms.workload: ["cplusplus", "uwp"]
---
# SafeAdd
Adds two numbers in a way that protects against overflow.  
  
## Syntax  
  
```cpp  
template<typename T, typename U>  
inline bool SafeAdd (  
   T t,  
   U u,  
   T& result  
) throw ();  
```  
  
### Parameters  
 [in] *t*  
 The first number to add. This must be of type T.  
  
 [in] *u*  
 The second number to add. This must be of type U.  
  
 [out] *result*  
 The parameter where **SafeAdd** stores the result.  
  
## Return Value  
 **true** if no error occurs; **false** if an error occurs.  
  
## Remarks  
 This method is part of [SafeInt Library](../windows/safeint-library.md) and is designed for a single addition operation without creating an instance of the [SafeInt Class](../windows/safeint-class.md).  
  
> [!NOTE]
>  This method should only be used when a single mathematical operation must be protected. If there are multiple operations, you should use the `SafeInt` class instead of calling the individual stand-alone functions.  
  
 For more information about the template types T and U, see [SafeInt Functions](../windows/safeint-functions.md).  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** Microsoft::Utilities  
  
## See Also  
 [SafeInt Functions](../windows/safeint-functions.md)   
 [SafeInt Library](../windows/safeint-library.md)   
 [SafeInt Class](../windows/safeint-class.md)   
 [SafeSubtract](../windows/safesubtract.md)