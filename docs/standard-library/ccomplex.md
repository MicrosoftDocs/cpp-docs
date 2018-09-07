---
title: "&lt;ccomplex&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["<ccomplex>"]
dev_langs: ["C++"]
ms.assetid: a9fcb5f0-88e3-464b-a5fd-d1afb8cd7e6f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# &lt;ccomplex&gt;

Includes the C++ Standard Library header [\<complex>](../standard-library/complex.md), which effectively includes the Standard C library header \<complex.h> and adds the associated names to the `std` namespace.

## Syntax

```cpp
#include <ccomplex>

```

## Remarks

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

The name `clog`, which is declared in \<complex.h>, is not defined in the `std` namespace because of potential conflicts with the `clog` that is declared in [\<iostream>](../standard-library/iostream.md).

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)<br/>
