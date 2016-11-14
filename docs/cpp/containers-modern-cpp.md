---
title: "Containers (Modern C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
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
By default, use [vector](../standard-library/vector-class.md) as the default sequential container in C++. This is the equivalent of List\<T> in other languages.  
  
```cpp  
vector<string> v;  
v.push_back( "Geddy Lee" );  
  
```  
  
 Use [map](../standard-library/map-class.md) (not unordered_map) as the default associative container. Use [set](../standard-library/set-class.md), [multimap](../standard-library/multimap-class.md), [multiset](../standard-library/multiset-class.md) for degenerate & multi cases.  
  
```cpp  
map<string, string> phone_book;  
// ...  
phone_book["Alex Lifeson"] = "+1 (416) 555-1212";  
  
```  
  
 When performance optimization is needed, consider using:  
  
1.  the array type when embedding is important - for example, as a class member.  
  
2.  unordered associative containers (unordered_map, et al.): Lower per-element overhead (major) and constant-time lookup (potentially major, sometimes minor). Harder to use correctly and efficiently, because of inconveniences and sharp edges.  
  
3.  sorted vector. (See: [Algorithms](../cpp/algorithms-modern-cpp.md).)  
  
 Don’t use C arrays. (For older APIs, use `f( vec.data(), vec.size() );` .)  
  
 For another article about containers, see [STL Containers](../standard-library/stl-containers.md).  
  
## Container Sizes  
 The following tables show the container sizes, in bytes, for x86 and x64 platforms.  (For these purposes, 32-bit ARM is equivalent to x86.)  These tables cover release mode, because debug mode contains checking machinery that consumes space and time.  The separate columns are for [!INCLUDE[cpp_orcas_long](../cpp/includes/cpp_orcas_long_md.md)] SP1, where `_SECURE_SCL` defaulted to 1, and for [!INCLUDE[cpp_orcas_long](../cpp/includes/cpp_orcas_long_md.md)] SP1 with `_SECURE_SCL` manually set to 0 for maximum speed.  Visual C++ in Visual Studio 2010, [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)], and [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] default `_SECURE_SCL` to 0 (now known as `_ITERATOR_DEBUG_LEVEL`).  
  
|x86 Container Sizes (Bytes)|VC9 SP1|VC9 SP1<br /><br /> SCL=0|VC10|VC11|  
|-----------------------------------|-------------|------------------------|----------|----------|  
|vector\<int>|24|16|16|12|  
|array\<int, 5>|20|20|20|20|  
|deque\<int>|32|32|24|20|  
|forward_list\<int>|N/A|N/A|8|4|  
|list\<int>|28|12|12|8|  
|priority_queue\<int>|28|20|20|16|  
|queue\<int>|32|32|24|20|  
|stack\<int>|32|32|24|20|  
|pair\<int, int>|8|8|8|8|  
|tuple\<int, int, int>|16|16|16|12|  
|map\<int, int>|32|12|16|8|  
|multimap\<int, int>|32|12|16|8|  
|set\<int>|32|12|16|8|  
|multiset\<int>|32|12|16|8|  
|hash_map\<int, int>|72|44|44|32|  
|hash_multimap\<int, int>|72|44|44|32|  
|hash_set\<int>|72|44|44|32|  
|hash_multiset\<int>|72|44|44|32|  
|unordered_map\<int, int>|72|44|44|32|  
|unordered_multimap\<int, int>|72|44|44|32|  
|unordered_set\<int>|72|44|44|32|  
ordered_multiset\<int>|72|44|44|32|  
|string|28|28|28|24|  
|wstring|28|28|28|24|  
  
|x64 Container Sizes (Bytes)|VC9 SP1|VC9 SP1<br /><br /> SCL=0|VC10|VC11|  
|-----------------------------------|-------------|------------------------|----------|----------|  
|vector\<int>|48|32|32|24|  
|array\<int, 5>|20|20|20|20|  
|deque\<int>|64|64|48|40|  
|forward_list\<int>|N/A|N/A|16|8|  
|list\<int>|56|24|24|16|  
|priority_queue\<int>|56|40|40|32|  
|queue\<int>|64|64|48|40|  
|stack\<int>|64|64|48|40|  
|pair\<int, int>|8|8|8|8|  
|tuple\<int, int, int>|16|16|16|12|  
|map\<int, int>|64|24|32|16|  
|multimap\<int, int>|64|24|32|16|  
|set\<int>|64|24|32|16|  
|multiset\<int>|64|24|32|16|  
|hash_map\<int, int>|144|88|88|64|  
|hash_multimap\<int, int>|144|88|88|64|  
|hash_set\<int>|144|88|88|64|  
|hash_multiset\<int>|144|88|88|64|  
|unordered_map\<int, int>|144|88|88|64|  
|unordered_multimap\<int, int>|144|88|88|64|  
|unordered_set\<int>|144|88|88|64|  
ordered_multiset\<int>|144|88|88|64|  
|string|40|40|40|32|  
|wstring|40|40|40|32|  
  
## See Also  
 [Welcome Back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [C++ Standard Library](../standard-library/cpp-standard-library-reference.md)