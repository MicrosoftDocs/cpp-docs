---
title: "/Gh (Enable _penter hook function)"
description: "Describes the /Gh compiler option to call the supplied _penter function."
ms.date: 06/29/2022
f1_keywords: ["_penter"]
helpviewer_keywords: ["/Gh compiler option [C++]", "Gh compiler option [C++]", "_penter function", "-Gh compiler option [C++]"]
ms.assetid: 1510a082-8a0e-486e-a309-6add814b494f
---
# /Gh (Enable _penter hook function)

Causes a call to the `_penter` function at the start of every method or function.

## Syntax

> **`/Gh`**

## Remarks

The `_penter` function isn't part of any library. It's up to you to provide a definition for `_penter`.

Unless you plan to explicitly call `_penter`, you don't need to provide a prototype. The function must push the content of all registers on entry and pop the unchanged content on exit. It must appear as if it had the following prototype:

```cpp
void __declspec(naked) __cdecl _penter( void );
```

This declaration isn't available for 64-bit projects.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## Example

The following code, when compiled with **/Gh**, shows how `_penter` is called twice; once when entering function `main` and once when entering function `x`. The example consists of two source files, which you compile separately.

Source file `local_penter.cpp`:

```cpp
// local_penter.cpp
// compile with: cl /EHsc /c local_penter.cpp
// processor: x86
#include <stdio.h>

extern "C" void __declspec(naked) __cdecl _penter( void ) {
   _asm {
      push eax
      push ebx
      push ecx
      push edx
      push ebp
      push edi
      push esi
    }

   printf_s("\nIn a function!");

   _asm {
      pop esi
      pop edi
      pop ebp
      pop edx
      pop ecx
      pop ebx
      pop eax
      ret
    }
}
```

Source file `Gh_compiler_option.cpp`:

```cpp
// Gh_compiler_option.cpp
// compile with: cl /EHsc /Gh Gh_compiler_option.cpp local_penter.obj
// processor: x86
#include <stdio.h>

void x() {}

int main() {
   x();
}
```

When run, the local `_penter` function is called on entry to `main` and `x`:

```Output
In a function!
In a function!
```

## See also

[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)<br/>
[`/GH` (Enable _pexit hook function)](gh-enable-pexit-hook-function.md)
