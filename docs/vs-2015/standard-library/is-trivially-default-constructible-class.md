---
title: "is_trivially_default_constructible Class | Microsoft Docs"
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
  - "is_trivially_default_constructible"
  - "std.is_trivially_default_constructible"
  - "std::is_trivially_default_constructible"
  - "type_traits/std::is_trivially_default_constructible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_trivially_default_constructible"
ms.assetid: 653ecd73-909f-4dd8-b95a-d1164d1c2da4
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_trivially_default_constructible Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_trivially_default_constructible Class](https://docs.microsoft.com/cpp/standard-library/is-trivially-default-constructible-class).  
  
Tests if type has trivial default constructor.  
  
## Syntax  
  
```
template <class Ty>
struct is_trivially_default_constructible;
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is a class that has a trivial constructor, otherwise it holds false.  
  
 A default constructor for a class `Ty` is trivial if:  
  
-   it is an implicitly declared default constructor  
  
-   the class `Ty` has no virtual functions  
  
-   the class `Ty` has no virtual bases  
  
-   all the direct bases of the class `Ty` have trivial constructors  
  
-   the classes of all the non-static data members of class type have trivial constructors  
  
-   the classes of all the non-static data members of type array of class have trivial constructors  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)







