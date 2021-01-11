---
description: "Learn more about: sequenced_policy Class"
title: "sequenced_policy Class"
ms.date: "04/18/2019"
f1_keywords: ["execution/std::execution::sequenced_policy"]
---
# sequenced_policy Class

Used as a unique type to disambiguate parallel algorithm overloading and require that a parallel algorithm's execution may not be parallelized.

## Syntax

```cpp
class execution::sequenced_policy;
```

## Remarks

During the execution of a parallel algorithm with the `execution::sequenced_policy` policy, if the invocation of an element access function exits via an uncaught exception, `terminate()` shall be called.
