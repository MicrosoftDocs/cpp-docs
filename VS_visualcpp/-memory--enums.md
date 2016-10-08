---
title: "&lt;memory&gt; enums"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: b9be0a7b-0beb-40b2-8183-911de371c6b9
caps.latest.revision: 9
---
# &lt;memory&gt; enums
||  
|-|  
|[pointer_safety Enumeration](#pointer_safety_enumeration)|  
  
##  <a name="pointer_safety_enumeration"></a>  pointer_safety Enumeration  
 The enumeration of possible values returned by `get_pointer_safety`.  
  
```  
enum class pointer_safety {  
    relaxed,   
    preferred,   
    strict  
    };  
```  
  
### Remarks  
 The scoped `enum` defines the values that can be returned by `get_pointer_safety``()`:  
  
 `relaxed` -- pointers not safely derived (obviously pointers to declared or allocated objects) are treated the same as those safely derived.  
  
 `preferred` -- as before, but pointers not safely derived should not be dereferenced.  
  
 `strict` -- pointers not safely derived might be treated differently than those safely derived.  
  
## See Also  
 [<memory\>](../VS_visualcpp/-memory-.md)