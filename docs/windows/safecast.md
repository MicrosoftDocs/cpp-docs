---
title: "SafeCast | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["SafeCast"]
dev_langs: ["C++"]
helpviewer_keywords: ["SafeCast function"]
ms.assetid: 55316729-8456-403a-9f96-59d4038f67af
author: "ghogen"
ms.author: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# SafeCast
Casts one type of number to another type.  
  
## Syntax  
  
```  
template<typename T, typename U>  
inline bool SafeCast (  
   const T From,  
   U& To  
);  
```  
  
#### Parameters  
 [in] `From`  
 The source number to convert. This must be of type T.  
  
 [out] `To`  
 A reference to the new number type. This must be of type U.  
  
## Return Value  
 `true` if no error occurs; `false` if an error occurs.  
  
## Remarks  
 This method is part of [SafeInt Library](../windows/safeint-library.md) and is designed for a single casting operation without creating an instance of the [SafeInt Class](../windows/safeint-class.md).  
  
> [!NOTE]
>  This method should only be used when a single operation must be protected. If there are multiple operations, you should use the `SafeInt` class instead of calling the individual stand-alone functions.  
  
 For more information about the template types T and U, see [SafeInt Functions](../windows/safeint-functions.md).  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** Microsoft::Utilities  
  
## See Also  
 [SafeInt Functions](../windows/safeint-functions.md)   
 [SafeInt Library](../windows/safeint-library.md)   
 [SafeInt Class](../windows/safeint-class.md)