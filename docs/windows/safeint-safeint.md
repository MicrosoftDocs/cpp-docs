---
title: "SafeInt::SafeInt | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "SafeInt::SafeInt"
  - "SafeInt"
  - "SafeInt.SafeInt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeInt class, constructor"
ms.assetid: 39e6f632-a396-40e6-9ece-cc3d4c5a78ef
caps.latest.revision: 7
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
# SafeInt::SafeInt
Constructs a `SafeInt` object.  
  
## Syntax  
  
```  
SafeInt() throw  
  
SafeInt (  
   const T& i  
) throw ()  
  
SafeInt (  
   bool b  
) throw ()  
  
template <typename U>  
SafeInt (  
   const SafeInt <U, E>& u  
)  
  
I template <typename U>  
SafeInt (  
   const U& i  
)  
```  
  
#### Parameters  
 [in] `i`  
 The value for the new `SafeInt` object. This must be a parameter of type T or U, depending on the constructor.  
  
 [in] `b`  
 The Boolean value for the new `SafeInt` object.  
  
 [in] `u`  
 A `SafeInt` of type U. The new `SafeInt` object will have the same value as `u`, but will be of type T.  
  
 U  
 The type of data stored in the `SafeInt`. This can be either a Boolean, character, or integer type. If it is an integer type, it can be signed or unsigned and be between 8 and 64 bits.  
  
## Remarks  
 For more information about the template types `T` and `E`, see [SafeInt Class](../windows/safeint-class.md).  
  
 The input parameter for the constructor, `i` or `u`, must be a Boolean, character, or integer type. If it is another type of parameter, the `SafeInt` class calls [static_assert](../cpp/static-assert.md) to indicate an invalid input parameter.  
  
 The constructors that use the template type `U` automatically convert the input parameter to the type specified by `T`. The `SafeInt` class converts the data without any loss of data. It reports to the error handler `E` if it cannot convert the data to type `T` without data loss.  
  
 If you create a `SafeInt` from a Boolean parameter, you need to initialize the value immediately. You cannot construct a `SafeInt` using the code `SafeInt<bool> sb;`. This will generate a compile error.  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** msl::utilities  
  
## See Also  
 [SafeInt Library](../windows/safeint-library.md)   
 [SafeInt Class](../windows/safeint-class.md)   
 [SafeIntException Class](../windows/safeintexception-class.md)