---
title: "SafeMultiply | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "SafeMultiply"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeMultiply function"
ms.assetid: 81d988a5-fac7-4930-8c37-c24fa8e2c853
caps.latest.revision: 5
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
# SafeMultiply
Multiplies two numbers together in a way that protects against overflow.  
  
## Syntax  
  
```  
template<typename T, typename U>  
inline bool SafeMultiply (  
   T t,  
   U u,  
   T& result  
) throw ();  
```  
  
#### Parameters  
 [in] `t`  
 The first number to multiply. This must be of type T.  
  
 [in] `u`  
 The second number to multiply. This must be of type U.  
  
 [out] `result`  
 The parameter where `SafeMultiply` stores the result.  
  
## Return Value  
 `true` if no error occurs; `false` if an error occurs.  
  
## Remarks  
 This method is part of [SafeInt Library](../windows/safeint-library.md) and is designed for a single multiplication operation without creating an instance of the [SafeInt Class](../windows/safeint-class.md).  
  
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
 [SafeDivide](../windows/safedivide.md)