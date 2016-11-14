---
title: "is_trivial Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "is_trivial"
  - "std.is_trivial"
  - "std::is_trivial"
  - "type_traits/std::is_trivial"
dev_langs: 
  - "C++"
  - "c++"
helpviewer_keywords: 
  - "is_trivial"
ms.assetid: 6beb11d4-2f38-4c7e-9959-ca5d26250df7
caps.latest.revision: 13
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
# is_trivial Class
Tests whether the type is a trivial type.  
  
## Syntax  
  
```
template <class T>  
struct is_trivial;
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is a trivial type, otherwise it holds false. Trivial types are scalar types, trivially copyable class types, arrays of these types and cv-qualified versions of these types.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)



