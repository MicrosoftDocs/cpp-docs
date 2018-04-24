---
title: "alignment_of Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.alignment_of"
  - "std::tr1::alignment_of"
  - "alignment_of"
  - "std.alignment_of"
  - "std::alignment_of"
  - "type_traits/std::alignment_of"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "alignment_of class [TR1]"
  - "alignment_of"
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# alignment_of Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [alignment_of Class](https://docs.microsoft.com/cpp/standard-library/alignment-of-class).  
  
Gets alignment of the specified type. This struct is implemented in terms of [alignof](../cpp/alignof-and-alignas-cpp.md). Use `alignof` directly when you simply need to query an alignment value. Use alignment_of when you need an integral constant, for example when doing tag dispatch.  
  
## Syntax  
  
```
template <class Ty>
struct alignment_of;
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 The type query holds the value of the the alignment of the type `Ty`.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [aligned_storage Class](../standard-library/aligned-storage-class.md)




