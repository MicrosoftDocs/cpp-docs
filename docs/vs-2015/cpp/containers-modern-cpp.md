---
title: "Containers (Modern C++) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 6e10b758-e928-4827-9c3f-86cafe54bf5b
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Containers (Modern C++)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Containers (Modern C++)](https://docs.microsoft.com/cpp/cpp/containers-modern-cpp).  
  
By default, use [vector](../standard-library/vector-class.md) as the preferred sequential container in C++. This is the equivalent of List\<T> in .NET languages.  
  
```cpp  
vector<string> apples;  
apples.push_back("Granny Smith");  
```  
  
 Use [map](../standard-library/map-class.md) (not `unordered_map`) as the default associative container. Use [set](../standard-library/set-class.md), [multimap](../standard-library/multimap-class.md), [multiset](../standard-library/multiset-class.md) for degenerate & multi cases.  
  
```cpp  
map<string, string> apple_color;  
// ...  
apple_color["Granny Smith"] = "Green";  
```  
  
1.  the array type when embedding is important - for example, as a class member.  
  
2.  unordered associative containers (unordered_map, et al.): Lower per-element overhead (major) and constant-time lookup (potentially major, sometimes minor). Harder to use correctly and efficiently, because of inconveniences and sharp edges.  
  
3.  sorted vector. (See: [Algorithms](../cpp/algorithms-modern-cpp.md).)  
  
 Don’t use C-style arrays. For older APIs that need direct access to the data, use `f( vec.data(), vec.size() );` instead.  
  
 For more information about containers, see [C++ Standard Library Containers](../standard-library/stl-containers.md).  
  
## See Also  
 [Welcome Back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)



