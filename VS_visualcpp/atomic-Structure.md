---
title: "atomic Structure"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 261628ed-7049-41ac-99b9-cfe49f696b44
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
|[atomic::atomic Constructor](../Topic/atomic::atomic%20Constructor.md)|Constructs an atomic object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[atomic::operator Ty Operator](../Topic/atomic::operator%20Ty%20Operator.md)|Reads and returns the stored value. ([atomic::load Method](../Topic/atomic::load%20Method.md))|  
|[atomic::operator= Operator](../Topic/atomic::operator=%20Operator.md)|Uses a specified value to replace the stored value. ([atomic::store Method](../Topic/atomic::store%20Method.md))|  
|||  
|[atomic::operator++ Operator](../Topic/atomic::operator++%20Operator.md)|Increments the stored value. Used only by integral and pointer specializations.|  
|[atomic::operator+= Operator](../Topic/atomic::operator+=%20Operator.md)|Adds a specified value to the stored value. Used only by integral and pointer specializations.|  
|[atomic::operator-- Operator](../Topic/atomic::operator--%20Operator.md)|Decrements the stored value. Used only by integral and pointer specializations.|  
|[atomic::operator-= Operator](../Topic/atomic::operator-=%20Operator.md)|Subtracts a specified value from the stored value. Used only by integral and pointer specializations.|  
|[atomic::operator&= Operator](../Topic/atomic::operator&=%20Operator.md)|Performs a bitwise `and` on a specified value and the stored value. Used only by integral specializations.|  
|[atomic::operator&#124;= Operator](../Topic/atomic::operator%7C=%20Operator.md)|Performs a bitwise `or` on a specified value and the stored value. Used only by integral specializations.|  
|[atomic::operator^= Operator](../Topic/atomic::operator%5E=%20Operator.md)|Performs a bitwise `exclusive or` on a specified value and the stored value. Used only by integral specializations.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[atomic::compare_exchange_strong Method](../Topic/atomic::compare_exchange_strong%20Method.md)|Performs an `atomic_compare_and_exchange` operation on `this` and returns the result.|  
|[atomic::compare_exchange_weak Method](../Topic/atomic::compare_exchange_weak%20Method.md)|Performs a `weak_atomic_compare_and_exchange` operation on `this` and returns the result.|  
|[atomic::fetch_add Method](../Topic/atomic::fetch_add%20Method.md)|Adds a specified value to the stored value.|  
|[atomic::fetch_and Method](../Topic/atomic::fetch_and%20Method.md)|Performs a bitwise `and` on a specified value and the stored value.|  
|[atomic::fetch_or Method](../Topic/atomic::fetch_or%20Method.md)|Performs a bitwise `or` on a specified value and the stored value.|  
|[atomic::fetch_sub Method](../Topic/atomic::fetch_sub%20Method.md)|Subtracts a specified value from the stored value.|  
|[atomic::fetch_xor Method](../Topic/atomic::fetch_xor%20Method.md)|Performs a bitwise `exclusive or` on a specified value and the stored value.|  
|[atomic::is_lock_free Method](../Topic/atomic::is_lock_free%20Method.md)|Specifies whether atomic operations on `this` are *lock free*. An atomic type is *lock free* if no atomic operations on that type use locks.|  
|[atomic::load Method](../Topic/atomic::load%20Method.md)|Reads and returns the stored value.|  
|[atomic::store Method](../Topic/atomic::store%20Method.md)|Uses a specified value to replace the stored value.|  
  
## Remarks  
 The type `Ty` must be *trivially copyable*. That is, using [memcpy](../VS_visualcpp/memcpy--wmemcpy.md) to copy its bytes must produce a valid `Ty` object that compares equal to the original object. The `compare_exchange_weak` and `compare_exchange_strong` member functions use [memcmp](../VS_visualcpp/memcmp--wmemcmp.md) to determine whether two `Ty` values are equal. These functions will not use a `Ty`-defined `operator==`. The member functions of `atomic` use `memcpy` to copy values of type `Ty`.  
  
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
 [<atomic\>](../VS_visualcpp/-atomic-.md)   
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)