---
title: "noexcept (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "noexcept_cpp"
dev_langs: 
  - "C++"
ms.assetid: df24edb9-c6a6-4e37-9914-fd5c0c3716a8
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
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
# noexcept (C++)
**C++11:** Specifies whether a function might throw exceptions.  
  
## Syntax  
  
```cpp  
ReturnType FunctionName(params) noexcept;  
ReturnType FunctionName(params) noexcept(noexcept(expression);  
```  
  
#### Parameters  
 expression  
 A constant expression that evaluates to true or false. The unconditional version is equivalent to noexcept(true).  
  
## Remarks  
 `noexcept` ( and its synonym `noecept(true)`) specify that the function will never throw an exception or allow an exception to be propagated from any other function that it invokes either directly or indirectly. More specifically, `noexcept` means the function is `noexcept` only if all the functions that it calls are also noexcept or const, and there are no potentially evaluated dynamic casts that require a run-time check, typeid expressions applied to a glvalue expression whose type is a polymorphic class type, or throw expressions. However, the compiler does not necessarily check every code path for exceptions that might bubble up to a `noexcept` function. If an exception does reach a function marked `noexcept`, [std::terminate](../standard-library/exception-functions.md#terminate) is invoked immediately and there is no guarantee that destructors of any in-scope objects will be invoked.  
  
 A function declared with a conditional noexcept that evaluates to noexcept(false) specifies that it does permit exceptions to propagate. For example, a function that copies its argument might be declared noexcept on the condition that the object being copied is a plain old data type (POD). Such a function could be declared like this:  
  
```  
#include <type_traits>  
  
template <typename T>  
T copy_object(T& obj) noexcept(std::is_pod<T>)  
{  
 //. . .   
}  
  
```  
  
 Use `noexcept` instead of the exception specifier `throw`, which is deprecated in C++11 and later. We recommended you apply `noexcept` to a function when you are sure it will never allow an exception to propagate up the call stack. A function that is declared with `noexcept` enables compilers to generate more efficient code in several different contexts.  
  
## See Also  
 [C++ Exception Handling](../cpp/cpp-exception-handling.md)