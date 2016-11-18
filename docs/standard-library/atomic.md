---
title: "&lt;atomic&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<atomic>"
  - "atomic/std::atomic_int_least32_t"
  - "atomic/std::atomic_ullong"
  - "atomic/std::atomic_ptrdiff_t"
  - "atomic/std::atomic_char16_t"
  - "atomic/std::atomic_schar"
  - "atomic/std::atomic_ulong"
  - "atomic/std::atomic_uint_fast32_t"
  - "atomic/std::atomic_uint8_t"
  - "atomic/std::atomic_int32_t"
  - "atomic/std::atomic_uint_fast64_t"
  - "atomic/std::atomic_uint32_t"
  - "atomic/std::atomic_int16_t"
  - "atomic/std::atomic_uintmax_t"
  - "atomic/std::atomic_intmax_t"
  - "atomic/std::atomic_long"
  - "atomic/std::atomic_int"
  - "atomic/std::atomic_uint_least8_t"
  - "atomic/std::atomic_size_t"
  - "atomic/std::atomic_uint_fast16_t"
  - "atomic/std::atomic_wchar_t"
  - "atomic/std::atomic_int_fast64_t"
  - "atomic/std::atomic_uint_fast8_t"
  - "atomic/std::atomic_int_fast8_t"
  - "atomic/std::atomic_intptr_t"
  - "atomic/std::atomic_uint"
  - "atomic/std::atomic_uint16_t"
  - "atomic/std::atomic_char32_t"
  - "atomic/std::atomic_uint64_t"
  - "atomic/std::atomic_ushort"
  - "atomic/std::atomic_int_least16_t"
  - "atomic/std::atomic_char"
  - "atomic/std::atomic_uint_least32_t"
  - "atomic/std::atomic_uintptr_t"
  - "atomic/std::atomic_short"
  - "atomic/std::atomic_llong"
  - "atomic/std::atomic_uint_least16_t"
  - "atomic/std::atomic_int_fast16_t"
  - "atomic/std::atomic_int_least8_t"
  - "atomic/std::atomic_int_least64_t"
  - "atomic/std::atomic_int_fast32_t"
  - "atomic/std::atomic_uchar"
  - "atomic/std::atomic_int8_t"
  - "atomic/std::atomic_int64_t"
  - "atomic/std::atomic_uint_least64_t"
dev_langs: 
  - "C++"
ms.assetid: e79a6b9f-52ff-48da-9554-654c4e1999f6
caps.latest.revision: 22
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
# &lt;atomic&gt;
Defines classes and template classes to use to create types that support atomic operations.  
  
## Syntax  
  
```cpp  
#include <atomic>  
```  
  
## Remarks  
  
> [!NOTE]
>  In code that's compiled by using **/clr** or **/clr:pure**, this header is blocked.  
  
 An atomic operation has two key properties that help you use multiple threads to correctly manipulate an object without using mutex locks.  
  
-   Because an atomic operation is indivisible, a second atomic operation on the same object from a different thread can obtain the state of the object only before or after the first atomic operation.  
  
-   Based on its [memory_order](../standard-library/atomic-enums.md#memory_order_enum) argument, an atomic operation establishes ordering requirements for the visibility of the effects of other atomic operations in the same thread. Consequently, it inhibits compiler optimizations that violate the ordering requirements.  
  
 On some platforms, it might not be possible to efficiently implement atomic operations for some types without using `mutex` locks. An atomic type is *lock-free* if no atomic operations on that type use locks.  
  
 **C++11**: In signal-handlers you can perform atomic operations on an object `obj` if `obj.is_lock_free()` or `atomic_is_lock_free(x)` are true.  
  
 The class [atomic_flag](../standard-library/atomic-flag-structure.md) provides a minimal atomic type that holds a `bool` flag. Its operations are always lock-free.  
  
 The template class `atomic<T>` stores an object of its argument type `T` and provides atomic access to that stored value. You can instantiate it by using any type that can be copied by using [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md) and tested for equality by using [memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md). In particular, you can use it with user-defined types that meet these requirements and, in many cases, with floating-point types.  
  
 The template also has a set of specializations for integral types and a partial specialization for pointers. These specializations provide additional operations that are not available through the primary template.  
  
## Pointer Specializations  
 The `atomic<T *>` partial specializations apply to all pointer types. They provide methods for pointer arithmetic.  
  
## Integral Specializations  
 The `atomic<integral>` specializations apply to all integral types. They provide additional operations that are not available through the primary template.  
  
 Each `atomic<integral>` type has a corresponding macro that you can use in an `if directive` to determine at compile time whether operations on that type are lock-free. If the value of the macro is zero, operations on the type are not lock-free. If the value is 1, operations might be lock-free, and a runtime check is required. If the value is 2, operations are lock-free. You can use the function `atomic_is_lock_free` to determine at runtime whether operations on the type are lock-free.  
  
 For each of the integral types, there is a corresponding named atomic type that manages an object of that integral type. Each `atomic_integral` type has the same set of member functions as the corresponding instantiation of `atomic<T>` and can be passed to any of the non-member atomic functions.  
  
|`atomic_integral` Type|Integral Type|`atomic_is_lock_free` Macro|  
|----------------------------|-------------------|---------------------------------|  
|`atomic_char`|`char`|`ATOMIC_CHAR_LOCK_FREE`|  
|`atomic_schar`|`signed char`|`ATOMIC_CHAR_LOCK_FREE`|  
|`atomic_uchar`|`unsigned char`|`ATOMIC_CHAR_LOCK_FREE`|  
|`atomic_char16_t`|`char16_t`|`ATOMIC_CHAR16_T_LOCK_FREE`|  
|`atomic_char32_t`|`char32_t`|`ATOMIC_CHAR32_T_LOCK_FREE`|  
|`atomic_wchar_t`|`wchar_t`|`ATOMIC_WCHAR_T_LOCK_FREE`|  
|`atomic_short`|`short`|`ATOMIC_SHORT_LOCK_FREE`|  
|`atomic_ushort`|`unsigned short`|`ATOMIC_SHORT_LOCK_FREE`|  
|`atomic_int`|`int`|`ATOMIC_INT_LOCK_FREE`|  
|`atomic_uint`|`unsigned int`|`ATOMIC_INT_LOCK_FREE`|  
|`atomic_long`|`long`|`ATOMIC_LONG_LOCK_FREE`|  
|`atomic_ulong`|`unsigned long`|`ATOMIC_LONG_LOCK_FREE`|  
|`atomic_llong`|`long long`|`ATOMIC_LLONG_LOCK_FREE`|  
|`atomic_ullong`|`unsigned long long`|`ATOMIC_LLONG_LOCK_FREE`|  
  
 Typedef names exist for specializations of the atomic template for some of the types that are defined in the header \<inttypes.h>.  
  
|Atomic Type|Typedef Name|  
|-----------------|------------------|  
|`atomic_int8_t`|`atomic<int8_t>`|  
|`atomic_uint8_t`|`atomic<uint8_t>`|  
|`atomic_int16_t`|`atomic<int16_t>`|  
|`atomic_uint16_t`|`atomic<uint16_t>`|  
|`atomic_int32_t`|`atomic<int32_t>`|  
|`atomic_uint32_t`|`atomic<uint32_t>`|  
|`atomic_int64_t`|`atomic<int64_t>`|  
|`atomic_uint64_t`|`atomic<uint64_t>`|  
|`atomic_int_least8_t`|`atomic<int_least8_t>`|  
|`atomic_uint_least8_t`|`atomic<uint_least8_t>`|  
|`atomic_int_least16_t`|`atomic<int_least16_t>`|  
|`atomic_uint_least16_t`|`atomic<uint_least16_t>`|  
|`atomic_int_least32_t`|`atomic<int_least32_t>`|  
|`atomic_uint_least32_t`|`atomic<uint_least32_t>`|  
|`atomic_int_least64_t`|`atomic<int_least64_t>`|  
|`atomic_uint_least64_t`|`atomic<uint_least64_t>`|  
|`atomic_int_fast8_t`|`atomic<int_fast8_t>`|  
|`atomic_uint_fast8_t`|`atomic<uint_fast8_t>`|  
|`atomic_int_fast16_t`|`atomic<int_fast16_t>`|  
|`atomic_uint_fast16_`|`atomic<uint_fast16_t>`|  
|`atomic_int_fast32_t`|`atomic<int_fast32_t>`|  
|`atomic_uint_fast32_t`|`atomic<uint_fast32_t>`|  
|`atomic_int_fast64_t`|`atomic<int_fast64_t>`|  
|`atomic_uint_fast64_t`|`atomic<uint_fast64_t>`|  
|`atomic_intptr_t`|`atomic<intptr_t>`|  
|`atomic_uintptr_t`|`atomic<uintptr_t>`|  
|`atomic_size_t`|`atomic<size_t>`|  
|`atomic_ptrdiff_t`|`atomic<ptrdiff_t>`|  
|`atomic_intmax_t`|`atomic<intmax_t>`|  
|`atomic_uintmax_t`|`atomic<uintmax_t>`|  
  
## Structs  
  
|Name|Description|  
|----------|-----------------|  
|[atomic Structure](../standard-library/atomic-structure.md)|Describes an object that performs atomic operations on a stored value.|  
|[atomic_flag Structure](../standard-library/atomic-flag-structure.md)|Describes an object that atomically sets and clears a `bool` flag.|  
  
## Enums  
  
|Name|Description|  
|----------|-----------------|  
|[memory_order Enum](../standard-library/atomic-enums.md#memory_order_enum)|Supplies symbolic names for synchronization operations on memory locations. These operations affect how assignments in one thread become visible in another.|  
  
## Functions  
 In the following list, the functions that do not end in `_explicit` have the semantics of the corresponding `_explicit`, except that they have the implicit [memory_order](../standard-library/atomic-enums.md#memory_order_enum) arguments of `memory_order_seq_cst`.  
  
|Name|Description|  
|----------|-----------------|  
|[atomic_compare_exchange_strong Function](../standard-library/atomic-functions.md#atomic_compare_exchange_strong_function)|Performs an *atomic compare and exchange* operation.|  
|[atomic_compare_exchange_strong_explicit Function](../standard-library/atomic-functions.md#atomic_compare_exchange_strong_explicit_function)|Performs an *atomic compare and exchange* operation.|  
|[atomic_compare_exchange_weak Function](../standard-library/atomic-functions.md#atomic_compare_exchange_weak_function)|Performs a *weak atomic compare and exchange* operation.|  
|[atomic_compare_exchange_weak_explicit Function](../standard-library/atomic-functions.md#atomic_compare_exchange_weak_explicit_function)|Performs a *weak atomic compare and exchange* operation.|  
|[atomic_exchange Function](../standard-library/atomic-functions.md#atomic_exchange_function)|Replaces a stored value.|  
|[atomic_exchange_explicit Function](../standard-library/atomic-functions.md#atomic_exchange_explicit_function)|Replaces a stored value.|  
|[atomic_fetch_add Function](../standard-library/atomic-functions.md#atomic_fetch_add_function)|Adds a specified value to an existing stored value.|  
|[atomic_fetch_add_explicit Function](../standard-library/atomic-functions.md#atomic_fetch_add_explicit_function)|Adds a specified value to an existing stored value.|  
|[atomic_fetch_and Function](../standard-library/atomic-functions.md#atomic_fetch_and_function)|Performs a bitwise `and` on a specified value and an existing stored value.|  
|[atomic_fetch_and_explicit Function](../standard-library/atomic-functions.md#atomic_fetch_and_explicit_function)|Performs a bitwise `and` on a specified value and an existing stored value.|  
|[atomic_fetch_or Function](../standard-library/atomic-functions.md#atomic_fetch_or_function)|Performs a bitwise `or` on a specified value and an existing stored value.|  
|[atomic_fetch_or_explicit Function](../standard-library/atomic-functions.md#atomic_fetch_or_explicit_function)|Performs a bitwise `or` on a specified value and an existing stored value.|  
|[atomic_fetch_sub Function](../standard-library/atomic-functions.md#atomic_fetch_sub_function)|Subtracts a specified value from an existing stored value.|  
|[atomic_fetch_sub_explicit Function](../standard-library/atomic-functions.md#atomic_fetch_sub_explicit_function)|Subtracts a specified value from an existing stored value.|  
|[atomic_fetch_xor Function](../standard-library/atomic-functions.md#atomic_fetch_xor_function)|Performs a bitwise `exclusive or` on a specified value and an existing stored value.|  
|[atomic_fetch_xor_explicit Function](../standard-library/atomic-functions.md#atomic_fetch_xor_explicit_function)|Performs a bitwise `exclusive or` on a specified value and an existing stored value.|  
|[atomic_flag_clear Function](../standard-library/atomic-functions.md#atomic_flag_clear_function)|Sets the flag in an `atomic_flag` object to `false`.|  
|[atomic_flag_clear_explicit Function](../standard-library/atomic-functions.md#atomic_flag_clear_explicit_function)|Sets the flag in an `atomic_flag` object to `false`.|  
|[atomic_flag_test_and_set Function](../standard-library/atomic-functions.md#atomic_flag_test_and_set_function)|Sets the flag in an `atomic_flag` object to `true`.|  
|[atomic_flag_test_and_set_explicit Function](../standard-library/atomic-functions.md#atomic_flag_test_and_set_explicit_function)|Sets the flag in an `atomic_flag` object to `true`.|  
|[atomic_init Function](../standard-library/atomic-functions.md#atomic_init_function)|Sets the stored value in an `atomic` object.|  
|[atomic_is_lock_free Function](../standard-library/atomic-functions.md#atomic_is_lock_free_function)|Specifies whether atomic operations on a specified object are lock-free.|  
|[atomic_load Function](../standard-library/atomic-functions.md#atomic_load_function)|Atomically retrieves a value.|  
|[atomic_load_explicit Function](../standard-library/atomic-functions.md#atomic_load_explicit_function)|Atomically retrieves a value.|  
|[atomic_signal_fence Function](../standard-library/atomic-functions.md#atomic_signal_fence_function)|Acts as a *fence* that establishes memory ordering requirements between fences in a calling thread that has signal handlers executed in the same thread.|  
|[atomic_store Function](../standard-library/atomic-functions.md#atomic_store_function)|Atomically stores a value.|  
|[atomic_store_explicit Function](../standard-library/atomic-functions.md#atomic_store_explicit_function)|Atomically stores a value.|  
|[atomic_thread_fence Function](../standard-library/atomic-functions.md#atomic_thread_fence_function)|Acts as a *fence* that establishes memory ordering requirements with respect to other fences.|  
|[kill_dependency Function](../standard-library/atomic-functions.md#kill_dependency_function)|Breaks a possible dependency chain.|  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)





