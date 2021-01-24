---
description: "Learn more about: /Zc:inline (Remove unreferenced COMDAT)"
title: "/Zc:inline (Remove unreferenced COMDAT)"
ms.date: "09/05/2019"
f1_keywords: ["/Zc:inline", "VC.Project.VCCLCompilerTool.RemoveUnreferencedCodeData"]
helpviewer_keywords: ["-Zc compiler options (C++)", "/Zc compiler options (C++)", "Zc compiler options (C++)", "/Zc:inline"]
ms.assetid: a4c94224-1d73-4bea-a9d5-4fa73dc924df
---
# /Zc:inline (Remove unreferenced COMDAT)

Removes unreferenced data or functions that are COMDATs, or that only have internal linkage. Under **/Zc:inline**, the compiler specifies that translation units with inline data or functions must also include their definitions.

## Syntax

> **/Zc:inline**[**-**]

## Remarks

When **/Zc:inline** is specified, the compiler doesn't emit symbol information for unreferenced COMDAT functions or data. Or, for data or functions that have internal linkage only. This optimization simplifies some of the work the linker does in release builds, or when you specify the [/OPT:REF](opt-optimizations.md) linker option. This compiler optimization can significantly reduce .obj file size and improve linker speeds. The compiler option isn't enabled when you disable optimizations ([/Od](od-disable-debug.md)). Or, when you specify [/GL (Whole Program Optimization)](gl-whole-program-optimization.md).

By default, this option is off (**/Zc:inline-**) in command-line builds. The [/permissive-](permissive-standards-conformance.md) option doesn't enable **/Zc:inline**. In MSBuild projects, the option is set by the **Configuration Properties** > **C/C++** > **Language** > **Remove unreferenced code and data** property, which is set to **Yes** by default.

If **/Zc:inline** is specified, the compiler enforces the C++11 requirement that all functions declared **`inline`** must have a definition available in the same translation unit if they are used. When the option is not specified, the Microsoft compiler allows non-conformant code that invokes functions declared **`inline`** even if no definition is visible. For more information, see the C++11 standard, in section 3.2 and section 7.1.2. This compiler option was introduced in Visual Studio 2013 Update 2.

To use the **/Zc:inline** option, update non-compliant code.

This example shows how the non-compliant use of an inline function declaration without a definition still compiles and links when the default **/Zc:inline-** option is used:

```cpp
// example.h
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp
#pragma once

class Example {
public:
   inline void inline_call(); // declared but not defined inline
   void normal_call();
   Example() {};
};
```

```cpp
// example.cpp
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp
#include <stdio.h>
#include "example.h"

void Example::inline_call() {
   printf("inline_call was called.\n");
}

void Example::normal_call() {
   printf("normal_call was called.\n");
   inline_call(); // with /Zc:inline-, inline_call forced into .obj file
}
```

```cpp
// zcinline.cpp
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp
#include "example.h"

int main() {
   Example example;
   example.inline_call(); // normal call when definition unavailable
}
```

When **/Zc:inline** is enabled, the same code causes a [LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md) error, because the compiler does not emit a non-inlined code body for `Example::inline_call` in example.obj. This causes the non-inlined call in `main` to reference an undefined external symbol.

To resolve this error, you can remove the **`inline`** keyword from the declaration of `Example::inline_call`, move the definition of `Example::inline_call` into the header file, or move the implementation of `Example` into main.cpp. The next example moves the definition into the header file, where it is visible to any caller that includes the header.

```cpp
// example2.h
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp
#pragma once
#include <stdio.h>

class Example2 {
public:
   inline void inline_call() {
      printf("inline_call was called.\n");
   }
   void normal_call();
   Example2() {};
};
```

```cpp
// example2.cpp
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp
#include "example2.h"

void Example2::normal_call() {
   printf("normal_call was called.\n");
   inline_call();
}
```

```cpp
// zcinline2.cpp
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp
#include "example2.h"

int main() {
   Example2 example2;
   example2.inline_call(); // normal call when definition unavailable
}
```

For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Language** property page.

1. Modify the **Remove unreferenced code and data** property, and then choose **OK**.

## See also

[/Zc (Conformance)](zc-conformance.md)<br/>
