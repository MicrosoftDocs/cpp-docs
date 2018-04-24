---
title: "underlying_type Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
topic_type: 
  - "apiref"
f1_keywords: 
  - "underlying_type"
  - "std.underlying_type"
  - "std::underlying_type"
  - "type_traits/std::underlying_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "underlying_type"
ms.assetid: 691ddce3-2677-4480-bd35-d933fab85d3e
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# underlying_type Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [underlying_type Class](https://docs.microsoft.com/cpp/standard-library/underlying-type-class).  
  
Produces the underlying integral type for an enumeration type.  
  
## Syntax  
  
```
template <class T>  
struct underlying_type;
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 The `type` member typedef of the template class names the underlying integral type of `T`, when `T` is an enumeration type, otherwise there is no member typedef `type`.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)







