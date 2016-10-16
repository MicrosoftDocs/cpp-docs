---
title: "&lt;forward_list&gt; functions"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: 0d6bc656-7049-4651-a4bd-c9a805e47756
caps.latest.revision: 10
---
# &lt;forward_list&gt; functions
||  
|-|  
|[swap](#swap)|  
  
##  <a name="swap"></a>  swap  
 Exchanges the elements of two forward lists.  
  
```
void swap(
    forward_list <Type, Allocator>& left,
    forward_list <Type, Allocator>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### Remarks  
 This template function executes `left.swap(right)`.  
  
## See Also  
 [<forward_list>](../stdcpplib/-forward_list-.md)

