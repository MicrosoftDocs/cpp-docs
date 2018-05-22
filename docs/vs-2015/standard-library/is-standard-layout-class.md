---
title: "is_standard_layout Class | Microsoft Docs"
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
  - "std.tr1.is_standard_layout"
  - "std::tr1::is_standard_layout"
  - "is_standard_layout"
  - "std.is_standard_layout"
  - "std::is_standard_layout"
  - "type_traits/std::is_standard_layout"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_standard_layout class[TR1]"
  - "is_standard_layout"
ms.assetid: 15ccf111-f537-45ef-b552-59152a7ba312
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_standard_layout Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_standard_layout Class](https://docs.microsoft.com/cpp/standard-library/is-standard-layout-class).  
  
Tests if type is a standard layout.  
  
## Syntax  
  
```
template <class Ty>
struct is_standard_layout;
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Ty`|The type to query|  
  
## Remarks  
 An instance of this type predicate holds true if the type `Ty` is a class that has a standard layout of member objects in memory, otherwise it holds false.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)







