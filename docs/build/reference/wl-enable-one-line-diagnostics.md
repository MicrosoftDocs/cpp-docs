---
description: "Learn more about: /WL (Enable One-Line Diagnostics)"
title: "/WL (Enable One-Line Diagnostics)"
ms.date: "11/04/2016"
f1_keywords: ["/wl"]
helpviewer_keywords: ["-WL compiler option [C++]", "/WL compiler option [C++]", "WL compiler option [C++]"]
ms.assetid: 332cadb4-8ea6-45fe-b67d-33ddec1f2c2e
---
# /WL (Enable One-Line Diagnostics)

Appends additional information to an error or warning message.

## Syntax

```
/WL
```

## Remarks

Error and warning messages from the C++ compiler can be followed by additional information that appears, by default, on a new line. When you compile from the command line, the additional line of information can be appended to the error or warning message. This might be desirable if you capture your build output to a log file and then process that log to find all errors and warnings. A semicolon will separate the error or warning message from the additional line.

Not all error and warning messages have an additional line of information. The following code will generate an error that has an additional line of information; it will let you test the effect when you use **/WL**.

```cpp
// compiler_option_WL.cpp
// compile with: /WL
#include <queue>
int main() {
   std::queue<int> q;
   q.fromthecontinuum();   // C2039
}
```

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
