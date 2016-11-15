---
title: "Return Values (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 53583524-b337-4228-a9c6-c9bf516babe8
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
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
# Return Values (C++)
A scalar return value that can fit into 64 bits is returned through RAX—this includes __m64 types. Non-scalar types including floats, doubles, and vector types such as [__m128](../cpp/m128.md), [__m128i](../cpp/m128i.md), [__m128d](../cpp/m128d.md) are returned in XMM0. The state of unused bits in the value returned in RAX or XMM0 is undefined.  
  
 User-defined types can be returned by value from global functions and static member functions. To be returned by value in RAX, user-defined types must have a length of 1, 2, 4, 8, 16, 32, or 64 bits; no user-defined constructor, destructor, or copy assignment operator; no private or protected non-static data members; no non-static data members of reference type; no base classes; no virtual functions; and no data members that do not also meet these requirements. (This is essentially the definition of a C++03 POD type. Because the definition has changed in the C++11 standard, we do not recommend using `std::is_pod` for this test.) Otherwise, the caller assumes the responsibility of allocating memory and passing a pointer for the return value as the first argument. Subsequent arguments are then shifted one argument to the right. The same pointer must be returned by the callee in RAX.  
  
 These examples show how parameters and return values are passed for functions with the specified declarations:  
  
## Example of return value 1 – 64 bit result  
  
```Output  
__int64 func1(int a, float b, int c, int d, int e);  
// Caller passes a in RCX, b in XMM1, c in R8, d in R9, e pushed on stack,  
// callee returns __int64 result in RAX.  
```  
  
## Example of return value 2 – 128 bit result  
  
```Output  
__m128 func2(float a, double b, int c, __m64 d);   
// Caller passes a in XMM0, b in XMM1, c in R8, d in R9,   
// callee returns __m128 result in XMM0.  
```  
  
## Example of return value 3 – user type result by pointer  
  
```Output  
struct Struct1 {  
   int j, k, l;    // Struct1 exceeds 64 bits.   
};  
Struct1 func3(int a, double b, int c, float d);   
// Caller allocates memory for Struct1 returned and passes pointer in RCX,   
// a in RDX, b in XMM2, c in R9, d pushed on the stack;   
// callee returns pointer to Struct1 result in RAX.  
```  
  
## Example of return value 4 – user type result by value  
  
```Output  
struct Struct2 {  
   int j, k;    // Struct2 fits in 64 bits, and meets requirements for return by value.  
};  
Struct2 func4(int a, double b, int c, float d);   
// Caller passes a in RCX, b in XMM1, c in R8, and d in XMM3;   
// callee returns Struct2 result by value in RAX.  
```  
  
## See Also  
 [Calling Convention](../build/calling-convention.md)