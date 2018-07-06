---
title: "Containers (Modern C++) | Microsoft Docs"
ms.custom: ""
ms.date: "1/18/2018"
ms.technology: ["cpp-language"]
ms.topic: "conceptual"
dev_langs: ["C++"]
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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

- The [array](../standard-library/array-class-stl.md) type when embedding is important, for example, as a class member.

- Unordered associative containers such as [unordered_map](../standard-library/unordered-map-class.md). These have lower per-element overhead and constant-time lookup, but they can be harder to use correctly and efficiently.

- Sorted `vector`. For more information, see [Algorithms](../cpp/algorithms-modern-cpp.md).

Don’t use C-style arrays. For older APIs that need direct access to the data, use accessor methods such as `f(vec.data(), vec.size());` instead.

For more information about containers, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

## See also

[Welcome Back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)  
[C++ Language Reference](../cpp/cpp-language-reference.md)  
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)  
