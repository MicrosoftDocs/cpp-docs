---
description: "Learn more about: parallel_policy Class"
title: "parallel_policy Class"
ms.date: "04/18/2019"
f1_keywords: ["execution/std::execution::parallel_policy"]
---
# parallel_policy Class

Used as a unique type to disambiguate parallel algorithm overloading and indicate that a parallel algorithm’s execution may be parallelized.

## Syntax

```cpp
class execution::parallel_policy;
```

## Remarks

During the execution of a parallel algorithm with the `execution::parallel_policy` policy, if the invocation of an element access function exits via an uncaught exception, `terminate()` shall be called.
