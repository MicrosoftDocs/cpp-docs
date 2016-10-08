---
title: "&lt;new&gt; typedefs"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: aef01de1-06b5-4b6c-aebc-2c9f423d7e47
caps.latest.revision: 5
---
# &lt;new&gt; typedefs
||  
|-|  
|[new_handler](#new_handler)|  
  
##  <a name="new_handler"></a>  new_handler  
 The type points to a function suitable for use as a new handler.  
  
```  
typedef void ( *new_handler )( );  
  
```  
  
### Remarks  
 This type of handler function is called by **operatornew** or `operator new[]` when they cannot satisfy a request for additional storage.  
  
### Example  
  See [set_new_handler](../VS_visualcpp/-new--functions.md#set_new_handler) for an example using `new_handler` as a return value.  
  
## See Also  
 [<new\>](../VS_visualcpp/-new-.md)