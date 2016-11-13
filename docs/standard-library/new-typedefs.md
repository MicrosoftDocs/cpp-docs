---
title: "&lt;new&gt; typedefs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: aef01de1-06b5-4b6c-aebc-2c9f423d7e47
caps.latest.revision: 7
manager: "ghogen"
---
# &lt;new&gt; typedefs
||  
|-|  
|[new_handler](#new_handler)|  
  
##  <a name="new_handler"></a>  new_handler  
 The type points to a function suitable for use as a new handler.  
  
```
typedef void (*new_handler)();
```  
  
### Remarks  
 This type of handler function is called by **operatornew** or `operator new[]` when they cannot satisfy a request for additional storage.  
  
### Example  
  See [set_new_handler](../standard-library/new-functions.md#set_new_handler) for an example using `new_handler` as a return value.  
  
## See Also  
 [\<new>](../standard-library/new.md)



