---
title: "&lt;memory&gt; enums | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: b9be0a7b-0beb-40b2-8183-911de371c6b9
caps.latest.revision: 15
manager: "ghogen"
---
# &lt;memory&gt; enums
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [&lt;memory&gt; enums](https://docs.microsoft.com/cpp/standard-library/memory-enums).  
  
  
##  <a name="pointer_safety_enumeration"></a>  pointer_safety Enumeration  
 The enumeration of possible values returned by `get_pointer_safety`.  

```cpp  
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
 [\<memory>](../standard-library/memory.md)







