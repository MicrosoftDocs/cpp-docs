---
title: "atomic Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "atomic/std::atomic"
dev_langs: 
  - "C++"
ms.assetid: 261628ed-7049-41ac-99b9-cfe49f696b44
caps.latest.revision: 10
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
# atomic Structure
Describes an object that performs atomic operations on a stored value of type `Ty`.  
  
## Syntax  
  
```
template <class Ty>
struct atomic;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[atomic::atomic Constructor](http://msdn.microsoft.com/Library/a538c43f-4d48-4308-ae1b-bab1839bccb8)|Constructs an atomic object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[atomic::operator Ty Operator](http://msdn.microsoft.com/Library/a366c700-c7a0-4bcb-8eb4-4b57dfaea065)|Reads and returns the stored value. ([atomic::load Method](http://msdn.microsoft.com/Library/05212726-cf8a-46fe-83d2-c16ac2abb7d1))|  
|[atomic::operator= Operator](http://msdn.microsoft.com/Library/fe161d57-47ae-4bad-92bf-ce32ac8d5953)|Uses a specified value to replace the stored value. ([atomic::store Method](http://msdn.microsoft.com/Library/84759413-d664-47ef-a1f3-a73c5a62007b))|  
|[atomic::operator++ Operator](http://msdn.microsoft.com/Library/492959e9-1ea8-4e02-a031-82b1b92e91a0)|Increments the stored value. Used only by integral and pointer specializations.|  
|[atomic::operator+= Operator](http://msdn.microsoft.com/Library/9ec97aa2-c9d7-436b-943d-2989eb2617dd)|Adds a specified value to the stored value. Used only by integral and pointer specializations.|  
|[atomic::operator-- Operator](http://msdn.microsoft.com/Library/ad7c1ea7-1f6d-4a54-bf26-07630f749864)|Decrements the stored value. Used only by integral and pointer specializations.|  
|[atomic::operator-= Operator](http://msdn.microsoft.com/Library/902d0d9f-88fd-4500-aa2d-1e50f443e77c)|Subtracts a specified value from the stored value. Used only by integral and pointer specializations.|  
|[atomic::operator&= Operator](http://msdn.microsoft.com/Library/90e730ac-12e1-4abb-98f5-4eadd6861a89)|Performs a bitwise `and` on a specified value and the stored value. Used only by integral specializations.|  
|[atomic::operator&#124;= Operator](http://msdn.microsoft.com/Library/f105eacc-31a6-4906-abba-f1cf013599b2)|Performs a bitwise `or` on a specified value and the stored value. Used only by integral specializations.|  
|[atomic::operator^= Operator](http://msdn.microsoft.com/Library/f2a4da9d-67e8-4249-9161-9998e72a33c2)|Performs a bitwise `exclusive or` on a specified value and the stored value. Used only by integral specializations.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[atomic::compare_exchange_strong Method](http://msdn.microsoft.com/Library/47bbf894-b28c-4ece-959e-67b3863cf4ed)|Performs an `atomic_compare_and_exchange` operation on `this` and returns the result.|  
|[atomic::compare_exchange_weak Method](http://msdn.microsoft.com/Library/e15e421a-f7a3-4272-993a-f487d2242e4f)|Performs a `weak_atomic_compare_and_exchange` operation on `this` and returns the result.|  
|[atomic::fetch_add Method](http://msdn.microsoft.com/Library/c68b91f2-6e8a-4ffa-8991-6bb6d466e1f3)|Adds a specified value to the stored value.|  
|[atomic::fetch_and Method](http://msdn.microsoft.com/Library/a9c83001-b72c-4085-9640-f63f866714b9)|Performs a bitwise `and` on a specified value and the stored value.|  
|[atomic::fetch_or Method](http://msdn.microsoft.com/Library/4c532f7f-80c5-432a-b34b-48feacab8dca)|Performs a bitwise `or` on a specified value and the stored value.|  
|[atomic::fetch_sub Method](http://msdn.microsoft.com/Library/8cc80d4b-0942-45a3-9db8-bbf339a903e4)|Subtracts a specified value from the stored value.|  
|[atomic::fetch_xor Method](http://msdn.microsoft.com/Library/92bbaff8-ee29-4a1e-aee4-d9d405285bfe)|Performs a bitwise `exclusive or` on a specified value and the stored value.|  
|[atomic::is_lock_free Method](http://msdn.microsoft.com/Library/b99d5130-cdda-40a2-b14c-152b13a8ba45)|Specifies whether atomic operations on `this` are *lock free*. An atomic type is *lock free* if no atomic operations on that type use locks.|  
|[atomic::load Method](http://msdn.microsoft.com/Library/05212726-cf8a-46fe-83d2-c16ac2abb7d1)|Reads and returns the stored value.|  
|[atomic::store Method](http://msdn.microsoft.com/Library/84759413-d664-47ef-a1f3-a73c5a62007b)|Uses a specified value to replace the stored value.|  
  
## Remarks  
 The type `Ty` must be *trivially copyable*. That is, using [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md) to copy its bytes must produce a valid `Ty` object that compares equal to the original object. The `compare_exchange_weak` and `compare_exchange_strong` member functions use [memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md) to determine whether two `Ty` values are equal. These functions will not use a `Ty`-defined `operator==`. The member functions of `atomic` use `memcpy` to copy values of type `Ty`.  
  
 A partial specialization, `atomic<Ty *>`, exists for all pointer types. The specialization enables the addition of an offset to the managed pointer value or the subtraction of an offset from it. The arithmetic operations take an argument of type `ptrdiff_t` and adjust that argument according to the size of `Ty` to be consistent with ordinary address arithmetic.  
  
 A specialization exists for every integral type except `bool`. Each specialization provides a rich set of methods for atomic arithmetic and logical operations.  
  
||||  
|-|-|-|  
|`atomic<char>`|`atomic<signed char>`|`atomic<unsigned char>`|  
|`atomic<char16_t>`|`atomic<char32_t>`|`atomic<wchar_t>`|  
|`atomic<short>`|`atomic<unsigned short>`|`atomic<int>`|  
|`atomic<unsigned int>`|`atomic<long>`|`atomic<unsigned long>`|  
|`atomic<long long>`|`atomic<unsigned long long>`|  
  
 Integral specializations are derived from corresponding `atomic_``integral` types. For example, `atomic<unsigned int>` is derived from `atomic_uint`.  
  
## Requirements  
 **Header:** atomic  
  
 **Namespace:** std  
  
## See Also  
 [\<atomic>](../standard-library/atomic.md)   
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)



