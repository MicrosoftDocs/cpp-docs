---
title: "is_trivially_copy_assignable Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_trivially_copy_assignable"
  - "std.is_trivially_copy_assignable"
  - "std::is_trivially_copy_assignable"
  - "type_traits/std::is_trivially_copy_assignable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_trivially_copy_assignable"
ms.assetid: 7410133e-f367-493f-92a7-e34e3ec5e879
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
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
# is_trivially_copy_assignable Class
Tests whether the type has a trivial copy assignment operator.  
  
## Syntax  
  
```
template <class Ty>
struct is_trivially_copy_assignable;
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is a class that has a trivial copy assignment operator, otherwise it holds false.  
  
 An assignment constructor for a class `T` is trivial if it is implicitly provided, the class `T` has no virtual functions, the class `T` has no virtual bases, the classes of all the non-static data members of class type have trivial assignment operators, and the classes of all the non-static data members of type array of class have trivial assignment operators.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)



