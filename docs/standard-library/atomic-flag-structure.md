---
title: "atomic_flag Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["atomic/std::atomic_flag", "atomic/std::atomic_flag::clear", "atomic/std::atomic_flag::test_and_set"]
dev_langs: ["C++"]
ms.assetid: 17f0c2f5-fd39-4a44-873a-b569720a670e
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
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
|[clear](#clear)|Sets the stored flag to `false`.|  
|[test_and_set](#test_and_set)|Sets the stored flag to `true` and returns the initial flag value.|  
  
## Remarks  
 `atomic_flag` objects can be passed to the non-member functions [atomic_flag_clear](../standard-library/atomic-functions.md#atomic_flag_clear), [atomic_flag_clear_explicit](../standard-library/atomic-functions.md#atomic_flag_clear_explicit), [atomic_flag_test_and_set](../standard-library/atomic-functions.md#atomic_flag_test_and_set), and [atomic_flag_test_and_set_explicit](../standard-library/atomic-functions.md#atomic_flag_test_and_set_explicit). They can be initialized by using the value `ATOMIC_FLAG_INIT`.  
  
## Requirements  
 **Header:** \<atomic>  
  
 **Namespace:** std  
  
##  <a name="clear"></a>  atomic_flag::clear
 Sets the `bool` flag that is stored in `*this` to `false`, within the specified [memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraints.  
  
```
void atomic_flag::clear(memory_order Order = memory_order_seq_cst) volatile noexcept;
void atomic_flag::clear(memory_order Order = memory_order_seq_cst) noexcept;
```  
  
### Parameters  
 `Order`  
 A [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
##  <a name="test_and_set"></a>  atomic_flag::test_and_set
 Sets the `bool` flag that is stored in `*this` to `true`, within the specified [memory_order](../standard-library/atomic-enums.md#memory_order_enum) constraints.  
  
```
bool atomic_flag::test_and_set(memory_order Order = memory_order_seq_cst) volatile noexcept;
bool atomic_flag::test_and_set(memory_order Order = memory_order_seq_cst) noexcept;
```  
  
### Parameters  
 `Order`  
 A [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
### Return Value  
 The initial value of the flag that is stored in `*this`.  
  
## See Also  
 [\<atomic>](../standard-library/atomic.md)



