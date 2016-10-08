---
title: "atomic_flag Structure"
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
ms.assetid: 17f0c2f5-fd39-4a44-873a-b569720a670e
caps.latest.revision: 12
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
# atomic_flag Structure
Describes an object that atomically sets and clears a `bool` flag. Operations on atomic flags are always lock-free.  
  
## Syntax  
  
```  
struct atomic_flag;  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[atomic_flag::clear Method](#atomic_flag__clear_method)|Sets the stored flag to `false`.|  
|[atomic_flag::test_and_set Method](#atomic_flag__test_and_set_method)|Sets the stored flag to `true` and returns the initial flag value.|  
  
## Remarks  
 `atomic_flag` objects can be passed to the non-member functions [atomic_flag_clear](../VS_visualcpp/-atomic--functions.md#atomic_flag_clear_function), [atomic_flag_clear_explicit](../VS_visualcpp/-atomic--functions.md#atomic_flag_clear_explicit_function), [atomic_flag_test_and_set](../VS_visualcpp/-atomic--functions.md#atomic_flag_test_and_set_function), and [atomic_flag_test_and_set_explicit](../VS_visualcpp/-atomic--functions.md#atomic_flag_test_and_set_explicit_function). They can be initialized by using the value `ATOMIC_FLAG_INIT`.  
  
## Requirements  
 **Header:** atomic  
  
 **Namespace:** std  
  
##  <a name="atomic_flag__clear_method"></a>  atomic_flag::clear Method  
 Sets the `bool` flag that is stored in `*this` to `false`, within the specified [memory_order](../VS_visualcpp/-atomic--enums.md#memory_order_enum) constraints.  
  
```  
void atomic_flag::clear(  
   memory_order Order = memory_order_seq_cst  
) volatile _NOEXCEPT;  
void atomic_flag::clear(  
   memory_order Order = memory_order_seq_cst  
) _NOEXCEPT;  
```  
  
### Parameters  
 `Order`  
 A [memory_order](../VS_visualcpp/-atomic--enums.md#memory_order_enum).  
  
##  <a name="atomic_flag__test_and_set_method"></a>  atomic_flag::test_and_set Method  
 Sets the `bool` flag that is stored in `*this` to `true`, within the specified [memory_order](../VS_visualcpp/-atomic--enums.md#memory_order_enum) constraints.  
  
```  
bool atomic_flag::test_and_set(  
   memory_order Order = memory_order_seq_cst  
) volatile _NOEXCEPT;  
bool atomic_flag::test_and_set(  
   memory_order Order = memory_order_seq_cst  
) _NOEXCEPT;  
  
```  
  
### Parameters  
 `Order`  
 A [memory_order](../VS_visualcpp/-atomic--enums.md#memory_order_enum).  
  
### Return Value  
 The initial value of the flag that is stored in `*this`.  
  
## See Also  
 [<atomic\>](../VS_visualcpp/-atomic-.md)