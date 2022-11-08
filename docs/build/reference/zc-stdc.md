---
description: "Learn more about the /Zc:__STDC__ (Enable __STDC__ macro) compiler option."
title: "/Zc:__STDC__ (Enable __STDC__ macro)"
ms.date: 11/07/2022
f1_keywords: ["/Zc:__STDC__"]
helpviewer_keywords: ["-Zc:__STDC__ compiler option (C++)", "/Zc:__STDC__ compiler option (C++)"]
---
# `/Zc:__STDC__` (Enable `__STDC__` macro)

The **`/Zc:__STDC__`** compiler option defines the built-in `__STDC__` preprocessor macro as 1 in C code.

## Syntax

> **`/Zc:__STDC__`**

## Remarks

The **`/Zc:__STDC__`** compiler option implements Standard C conforming behavior for the `__STDC__` preprocessor macro, setting it to 1 when compiling C11 and C17 code.

The **`/Zc:__STDC__`** option is new in Visual Studio 2022 version 17.2. This option is off by default, but can be enabled explicitly when **`/std:c11`** or **`/std:c17`** is specified. There's no negative version of the option.

This option is a source breaking change. Due to the behavior of the UCRT, which doesn't expose POSIX functions when `__STDC__` is `1`, it isn't possible to define this macro for C by default without introducing breaking changes to the stable language versions.

### Example

```c
// test__STDC__.c
#include <io.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
#if __STDC__
    int f = _open("file.txt", _O_RDONLY);
    _close(f);
#else
    int f = open("file.txt", O_RDONLY);
    close(f);
#endif
}

/* Command line behavior

C:\Temp>cl /EHsc /W4 /Zc:__STDC__ test__STDC__.c && test__STDC__

*/
```

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In **Additional options**, add *`/Zc:__STDC__`*. Choose **OK** or **Apply** to save your changes.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
[`/std` (Specify language standard version)](std-specify-language-standard-version.md)
