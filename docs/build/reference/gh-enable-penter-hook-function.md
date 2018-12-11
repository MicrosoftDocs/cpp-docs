---
title: "/Gh (Enable _penter Hook Function)"
ms.date: "11/04/2016"
f1_keywords: ["_penter"]
helpviewer_keywords: ["/Gh compiler option [C++]", "Gh compiler option [C++]", "_penter function", "-Gh compiler option [C++]"]
ms.assetid: 1510a082-8a0e-486e-a309-6add814b494f
---
# /Gh (Enable _penter Hook Function)

Causes a call to the `_penter` function at the start of every method or function.

## Syntax

```
/Gh
```

## Remarks

The `_penter` function is not part of any library and it is up to you to provide a definition for `_penter`.

Unless you plan to explicitly call `_penter`, you do not need to provide a prototype. The function must appear as if it had the following prototype, and it must push the content of all registers on entry and pop the unchanged content on exit:

```
void __declspec(naked) __cdecl _penter( void );
```

This declaration is not available for 64-bit projects.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## Example

The following code, when compiled with **/Gh**, shows how `_penter` is called twice; once when entering function `main` and once when entering function `x`.

```cpp
// Gh_compiler_option.cpp
// compile with: /Gh
// processor: x86
#include <stdio.h>
void x() {}

int main() {
   x();
}

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

```Output
In a function!
In a function!
```

## See Also

[Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](../compiler-command-line-syntax.md)