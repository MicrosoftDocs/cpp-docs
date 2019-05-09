---
title: "&lt;cstdlib&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["<cstdlib>"]
dev_langs: ["C++"]
helpviewer_keywords: ["cstdlib header"]
ms.assetid: 0a6aaebf-84e9-4b60-ae90-17e11981cf54
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# &lt;cstdlib&gt;

Includes the Standard C library header \<stdlib.h> and adds the associated names to the `std` namespace.

## Syntax

```cpp
#include <cstdlib>
```

## Remarks

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## Functions

```cpp
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size,
c-compare-pred * compar);
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size,
compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, c-compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, compare-pred * compar);
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
