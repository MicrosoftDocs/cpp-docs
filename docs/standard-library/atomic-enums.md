---
title: "&lt;atomic&gt; enums | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: cd3a81c5-a19e-448f-952a-c34c717f21a9
caps.latest.revision: 11
manager: "ghogen"
---
# &lt;atomic&gt; enums
  
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
 [\<atomic>](../standard-library/atomic.md)



