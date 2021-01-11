---
description: "Learn more about: Compiler Warning (level 1) C4627"
title: "Compiler Warning (level 1) C4627"
ms.date: "09/09/2018"
f1_keywords: ["C4627"]
helpviewer_keywords: ["C4627"]
ms.assetid: 8840f3e6-b496-423a-8635-eb55d5f854a2
---
# Compiler Warning (level 1) C4627

> '*header_file*': skipped when looking for precompiled header use

If the current source file has the [/Yu \(Use precompiled header file)](../../build/reference/yu-use-precompiled-header-file.md) option set, then the compiler ignores everything in the file before the precompiled header is included. Warning **C4627** is generated in Visual Studio 2015 and earlier versions if *header_file* is included before the precompiled header file, and if the precompiled header does not also include *header_file*.

## Example

This sample demonstrates how the error can occur, and shows how to fix it:

```cpp
// c4627.cpp
#include <iostream>       // C4627 - iostream not included by pch.h
#include "pch.h"          // precompiled header file that does not include iostream
// #include <iostream>    // To fix, move the iostream header include here from above
int main()
{
    std::cout << "std::cout is defined!\n";
}
```

## See also

[Creating Precompiled Header Files](../../build/creating-precompiled-header-files.md)
