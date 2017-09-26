---
title: "Containers (Modern C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-language"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 6e10b758-e928-4827-9c3f-86cafe54bf5b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Containers (Modern C++)  
  
By default, use [vector](../standard-library/vector-class.md) as the preferred sequential container in C++. This is equivalent to `List<T>` in .NET languages.  
  
```cpp  
vector<string> apples;  
apples.push_back("Granny Smith");  
```  
  
Use [map](../standard-library/map-class.md) (not `unordered_map`) as the default associative container. Use [set](../standard-library/set-class.md), [multimap](../standard-library/multimap-class.md), and [multiset](../standard-library/multiset-class.md) for degenerate & multi cases.  
  
```cpp  
map<string, string> apple_color;  
// ...  
apple_color["Granny Smith"] = "Green";  
```  
  
When performance optimization is needed, consider using:  
  
1.  The [array](../standard-library/array-class-stl.md) type when embedding is important, for example, as a class member.  
  
2.  Unordered associative containers such as [unordered_map]((../standard-library/unordered-map-class.md). These have lower per-element overhead and constant-time lookup, but they can be harder to use correctly and efficiently.  
  
3.  Sorted `vector`. For more information, see [Algorithms](../cpp/algorithms-modern-cpp.md).  
  
Don’t use C-style arrays. For older APIs that need direct access to the data, use accessor methods such as `f(vec.data(), vec.size());` instead.  
  
For more information about containers, see [C++ Standard Library Containers](../standard-library/stl-containers.md).  
  
## See Also  
 [Welcome Back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
