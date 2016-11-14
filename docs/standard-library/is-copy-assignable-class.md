---
title: "is_copy_assignable Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_copy_assignable"
  - "std.is_copy_assignable"
  - "std::is_copy_assignable"
  - "type_traits/std::is_copy_assignable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_copy_assignable"
ms.assetid: 3ae6bca1-85fb-4829-9ee9-0183b081ff50
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# is_copy_assignable Class
Tests whether type has can be copied on assignment.  
  
## Syntax  
  
```
template <class Ty>
struct is_copy_assignable;
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is a class that has a copy assignment operator, otherwise it holds false. Equivalent to is_assignable\<Ty&, const Ty&>.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)



