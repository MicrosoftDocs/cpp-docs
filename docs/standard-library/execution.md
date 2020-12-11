---
description: "Learn more about: &lt;execution&gt;"
title: "&lt;execution&gt;"
ms.date: "04/18/2019"
f1_keywords: ["<execution>", "std::<execution>"]
helpviewer_keywords: ["execution header"]
---
# &lt;execution&gt;

Describes the execution policies for parallel algorithms.

## Syntax

```
namespace std {
    template<class T> inline constexpr bool is_execution_policy_v = is_execution_policy<T>::value;
}
namespace std::execution {
    inline constexpr sequenced_policy seq { unspecified };
    inline constexpr parallel_policy par { unspecified };
    inline constexpr parallel_unsequenced_policy par_unseq { unspecified };
}
```

### Classes and Structs

|Name|Description|
|-|-|
|[is_execution_policy Struct](is-execution-policy-struct.md)|Detects execution policies for the purpose of excluding function signatures from otherwise ambiguous overload resolution participation.|
|[parallel_policy Class](parallel-policy-class.md)|Used as a unique type to disambiguate parallel algorithm overloading and indicate that a parallel algorithm’s execution may be parallelized.|
|[parallel_unsequenced_policy Class](parallel-unsequenced-policy-class.md)|Used as a unique type to disambiguate parallel algorithm overloading and indicate that a parallel algorithm’s execution may be parallelized and vectorized.|
|[sequenced_policy Class](sequenced-policy-class.md)|Used as a unique type to disambiguate parallel algorithm overloading and require that a parallel algorithm’s execution may not be parallelized.|

## Requirements

**Header:** \<execution>

**Namespace:** stdext

## See also

[Header Files Reference](cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](cpp-standard-library-reference.md)
