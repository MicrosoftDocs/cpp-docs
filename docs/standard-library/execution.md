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

### Classes and structs

|Name|Description|
|-|-|
|[`is_execution_policy` Struct](is-execution-policy-struct.md)|Detects execution policies to exclude certain function signatures from otherwise ambiguous overload resolution participation.|
|[`parallel_policy` class](parallel-policy-class.md)|Used to disambiguate parallel algorithm overloading. Indicates that a parallel algorithm's execution may be parallelized.|
|[`parallel_unsequenced_policy` class](parallel-unsequenced-policy-class.md)|Used as a unique type to disambiguate parallel algorithm overloading. Indicates that a parallel algorithm's execution may be parallelized and vectorized.|
|[`sequenced_policy` class](sequenced-policy-class.md)|Used as a unique type to disambiguate parallel algorithm overloading. Specifies that a parallel algorithm's execution may not be parallelized.|

### Microsoft specific

Parallel algorithms execute on an unspecified number of threads and divide the work into an unspecified number of data partitioning "chunks." The Windows thread pool manages the number of threads. The implementation tries to make use of the available logical processors, which corresponds to the number of hardware threads that can execute simultaneously.

Specifying `parallel_policy` or `parallel_unsequenced_policy` causes standard library algorithms to run in parallel using the Windows Thread Pool. The number of concurrent threads, and thus the number of "chunks" for data partitioning, is limited to 500 threads because that's the default number of thread pool threads. For more information, see [Thread Pools](/windows/win32/procthread/thread-pools).

Before Windows 11 and Windows Server 2022, applications were limited by default to a single processor group having at most 64 logical processors. This limited the number of concurrently executing threads to 64. For more information, see [Processor Groups](/windows/win32/procthread/processor-groups).

Starting with Windows 11 and Windows Server 2022, processes and their threads have processor affinities that by default span all processors in the system and across multiple groups on machines with more than 64 processors. The limit on the number of concurrent threads is now the total number of logical processors in the system.

## Requirements

**Header:** `<execution>`

**Namespace:** `std`

## See also

[Header files reference](cpp-standard-library-header-files.md)\
[Thread safety in the C++ standard library](thread-safety-in-the-cpp-standard-library.md)\
[C++ standard library reference](cpp-standard-library-reference.md)
