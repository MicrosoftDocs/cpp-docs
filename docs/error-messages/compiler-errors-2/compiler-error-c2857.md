---
description: "Learn more about: Compiler Error C2857"
title: "Compiler Error C2857"
ms.date: "09/13/2018"
f1_keywords: ["C2857"]
helpviewer_keywords: ["C2857"]
ms.assetid: b57302bd-58ec-45ae-992a-1e282d5eeccc
---
# Compiler Error C2857

> '#include' statement specified with the /Yc*filename* command-line option was not found in the source file

The [/Yc](../../build/reference/yc-create-precompiled-header-file.md) option specifies the name of an include file that is not included in the source file being compiled.

## Remarks

When you use the **/Yc**<em>filename</em> option on a source file to create a precompiled header (PCH) file, that source file must include the *filename* header file. Every file included by the source file, up to and including the specified *filename*, is included in the PCH file. In other source files compiled by using the **/Yu**<em>filename</em> option to use the PCH file, an include of *filename* must be the first non-comment line in the file. The compiler ignores anything in the source file before this include.

This error can be caused by an `#include "filename"` statement in a conditional compilation block that is not compiled in your PCH source file.

## Example

In typical usage, one source file in your project is designated as the PCH source file, and one header file is used as the PCH header file. A typical PCH header file has all of the library headers used in your project, but not local headers that are still under development. In this sample, the PCH header file is named *my_pch.h*.

```cpp
// my_pch.h
#pragma once
#include <stdio.h>
```

The PCH source file is compiled by using the **/Yc**<em>my_pch.h</em> option. If the compiler does not find an include of this PCH header file, it generates C2857:

```cpp
// my_pch.cpp
// Compile by using: cl /EHsc /W4 /Yumy_pch.h /c my_pch.cpp

#if 0
#include "my_pch.h"  // C2857; remove conditional directives to fix
#endif
```

To use this PCH file, source files must be compiled by using the **/Yu**<em>my_pch.h</em> option. The PCH header file must be included first in source files that use the PCH:

```cpp
// C2857.cpp
// Compile my_pch.cpp first, then
// compile by using: cl /EHsc /W4 /Yumy_pch.h my_project.cpp my_pch.obj
// Include the pch header before any other non-comment line
#include "my_pch.h"

int main()
{
    puts("Using a precompiled header file.\n");
}
```
