---
title: "&lt;csetjmp&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["<csetjmp>"]
dev_langs: ["C++"]
helpviewer_keywords: ["csetjmp header"]
ms.assetid: 8f21fddd-5e9b-4219-a848-581cdd3569d9
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# &lt;csetjmp&gt;

Includes the Standard C library header \<setjmp.h> and adds the associated names to the `std` namespace.

## Syntax

```cpp
#include <csetjmp>

```

## Remarks

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
