---
description: "Learn more about: <execution>"
title: "<execution>"
ms.date: "08/17/2021"
f1_keywords: ["<execution>", "execution/std::execution", "std::execution"]
helpviewer_keywords: ["execution header"]
---
# `<execution>`

Describes the execution policies for parallel algorithms.

## Syntax

```cpp
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
|[`is_execution_policy` Struct](is-execution-policy-struct.md)|Detects execution policies to exclude certain function signatures from otherwise ambiguous overload resolution participation.|
|[`parallel_policy` Class](parallel-policy-class.md)|Used as a unique type to disambiguate parallel algorithm overloading. Indicates that a parallel algorithm's execution may be parallelized.|
|[`parallel_unsequenced_policy` Class](parallel-unsequenced-policy-class.md)|Used as a unique type to disambiguate parallel algorithm overloading. Indicates that a parallel algorithm's execution may be parallelized and vectorized.|
|[`sequenced_policy` Class](sequenced-policy-class.md)|Used as a unique type to disambiguate parallel algorithm overloading. Specifies that a parallel algorithm's execution may not be parallelized.|

### Microsoft Specific
 
When `parallel_policy` or `parallel_unsequenced_policy` cause the algorithm to be parallelized, the parallel execution uses Windows Thread Pool; see [Thread Pools](/windows/win32/procthread/thread-pools). The number of concurrent threads is limited to the thread pool default (currently 500). The number of threads concurrently executing on hardware is currently limited by the number of logical processors in the current process's processor group, so it is effectively limited to 64; see [Processor Groups](/windows/win32/procthread/processor-groups). The maximum number of chunks for data partitioning is also currently based on the number of logical processors in the current process's processor group.

## Requirements

**Header:** \<execution>

**Namespace:** std

## See also

[Header files reference](cpp-standard-library-header-files.md)\
[Thread safety in the C++ standard library](thread-safety-in-the-cpp-standard-library.md)\
[C++ standard library reference](cpp-standard-library-reference.md)
