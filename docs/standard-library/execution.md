---
description: "Learn more about: <execution>"
title: "<execution>"
ms.date: 09/11/2024
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

### Microsoft specific

Parallel algorithms execute on an unspecified number of threads and by dividing the work into an unspecified number of chunks. The number of threads is managed by Windows thread pool. The implementation tries to make use of number of logical processors, which corresponds to number of hardware threads that can be executed simultaneously.

When `parallel_policy` or `parallel_unsequenced_policy` cause the algorithm to be parallelized, the parallel execution uses Windows Thread Pool. For more information, see [Thread Pools](/windows/win32/procthread/thread-pools). The number of concurrent threads, and thus the number of chunks for data partitioning, is limited to the thread pool default (currently 500).

Prior to Windows 11 and Windows Server 2022, on systems with more than 64 logical processors, the number of threads and thus data partitioning chunks is capped by the number of logical processors in a single group. For more information, see [Processor Groups](/windows/win32/procthread/processor-groups). The number of threads and thus chunks for data partioning concurrently executing on hardware is limited by the number of logical processors in the current process's processor group, so it is effectively limited to 64.

Starting with Windows 11 and Windows Server 2022, applications are no longer constrained by default to a single processor group. Instead, processes and their threads have processor affinities that by default span all processors in the system, across multiple groups on machines with more than 64 processors. So the number of threads concurrently executing on hardware and thus number of chunks for data partitioning is not limited to 64, but is instead limited by the number of logical processors in the system.

## Requirements

**Header:** `<execution>`

**Namespace:** `std`

## See also

[Header files reference](cpp-standard-library-header-files.md)\
[Thread safety in the C++ standard library](thread-safety-in-the-cpp-standard-library.md)\
[C++ standard library reference](cpp-standard-library-reference.md)
