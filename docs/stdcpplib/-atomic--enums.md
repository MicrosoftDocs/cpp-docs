---
title: "&lt;atomic&gt; enums"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: cd3a81c5-a19e-448f-952a-c34c717f21a9
caps.latest.revision: 10
---
# &lt;atomic&gt; enums
||  
|-|  
|[memory_order Enum](#memory_order_enum)|  
  
##  <a name="memory_order_enum"></a>  memory_order Enum  
 Supplies symbolic names for synchronization operations on memory locations. These operations affect how assignments in one thread become visible in another.  
  
```
typedef enum memory_order {
    memory_order_relaxed,
 memory_order_consume,
    memory_order_acquire,
 memory_order_release,
    memory_order_acq_rel,
 memory_order_seq_cst,
} memory_order;
```  
  
### Remarks  
  
|||  
|-|-|  
|`memory_order_relaxed`|No ordering required.|  
|`memory_order_consume`|A load operation acts as a consume operation on the memory location.|  
|`memory_order_acquire`|A load operation acts as an acquire operation on the memory location.|  
|`memory_order_release`|A store operation acts as a release operation on the memory location.|  
|`memory_order_acq_rel`|Combines `memory_order_acquire` and `memory_order_release`.|  
|`memory_order_seq_cst`|Combines `memory_order_acquire` and `memory_order_release`. Memory accesses that are marked as `memory_order_seq_cst` must be sequentially consistent.|  
  
## See Also  
 [\<atomic>](../stdcpplib/-atomic-.md)

