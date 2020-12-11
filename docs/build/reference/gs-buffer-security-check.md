---
description: "Learn more about: /GS (Buffer Security Check)"
title: "/GS (Buffer Security Check)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.BufferSecurityCheck", "VC.Project.VCCLCompilerTool.BufferSecurityCheck"]
helpviewer_keywords: ["buffers [C++], buffer overruns", "buffer overruns, compiler /GS switch", "GS compiler option [C++]", "/GS compiler option [C++]", "security check compiler option [C++]", "-GS compiler option [C++]", "buffers [C++], avoiding overruns"]
ms.assetid: 8d8a5ea1-cd5e-42e1-bc36-66e1cd7e731e
---
# /GS (Buffer Security Check)

Detects some buffer overruns that overwrite a function's return address, exception handler address, or certain types of parameters. Causing a buffer overrun is a technique used by hackers to exploit code that does not enforce buffer size restrictions.

## Syntax

```
/GS[-]
```

## Remarks

**/GS** is on by default. If you expect your application to have no security exposure, use **/GS-**. For more information about suppressing buffer overrun detection, see [safebuffers](../../cpp/safebuffers.md).

## Security Checks

On functions that the compiler recognizes as subject to buffer overrun problems, the compiler allocates space on the stack before the return address. On function entry, the allocated space is loaded with a *security cookie* that is computed once at module load. On function exit, and during frame unwinding on 64-bit operating systems, a helper function is called to make sure that the value of the cookie is still the same. A different value indicates that an overwrite of the stack may have occurred. If a different value is detected, the process is terminated.

## GS Buffers

A buffer overrun security check is performed on a *GS buffer*. A GS buffer can be one of these:

- An array that is larger than 4 bytes, has more than two elements, and has an element type that is not a pointer type.

- A data structure whose size is more than 8 bytes and contains no pointers.

- A buffer allocated by using the [_alloca](../../c-runtime-library/reference/alloca.md) function.

- Any class or structure that contains a GS buffer.

For example, the following statements declare GS buffers.

```cpp
char buffer[20];
int buffer[20];
struct { int a; int b; int c; int d; } myStruct;
struct { int a; char buf[20]; };
```

However, the following statements do not declare GS buffers. The first two declarations contain elements of pointer type. The third and fourth statements declare arrays whose size is too small. The fifth statement declares a structure whose size on an x86 platform is not more than 8 bytes.

```cpp
char *pBuf[20];
void *pv[20];
char buf[4];
int buf[2];
struct { int a; int b; };
```

## Initialize the Security Cookie

The **/GS** compiler option requires that the security cookie be initialized before any function that uses the cookie is run. The security cookie must be initialized immediately on entry to an EXE or DLL. This is done automatically if you use the default VCRuntime entry points: mainCRTStartup, wmainCRTStartup, WinMainCRTStartup, wWinMainCRTStartup, or _DllMainCRTStartup. If you use an alternate entry point, you must manually initialize the security cookie by calling [__security_init_cookie](../../c-runtime-library/reference/security-init-cookie.md).

## What Is Protected

The **/GS** compiler option protects the following items:

- The return address of a function call.

- The address of an exception handler for a function.

- Vulnerable function parameters.

On all platforms, **/GS** attempts to detect buffer overruns into the return address. Buffer overruns are more easily exploited on platforms such as x86 and x64, which use calling conventions that store the return address of a function call on the stack.

On x86, if a function uses an exception handler, the compiler injects a security cookie to protect the address of the exception handler. The cookie is checked during frame unwinding.

**/GS** protects *vulnerable parameters* that are passed into a function. A vulnerable parameter is a pointer, a C++ reference, a C-structure (C++ POD type) that contains a pointer, or a GS buffer.

A vulnerable parameter is allocated before the cookie and local variables. A buffer overrun can overwrite these parameters. And code in the function that uses these parameters could cause an attack before the function returns and the security check is performed. To minimize this danger, the compiler makes a copy of the vulnerable parameters during the function prolog and puts them below the storage area for any buffers.

The compiler does not make copies of vulnerable parameters in the following situations:

- Functions that do not contain a GS buffer.

- Optimizations ([/O options](o-options-optimize-code.md)) are not enabled.

- Functions that have a variable argument list (...).

- Functions that are marked with [naked](../../cpp/naked-cpp.md).

- Functions that contain inline assembly code in the first statement.

- A parameter is used only in ways that are less likely to be exploitable in the event of a buffer overrun.

## What Is Not Protected

The **/GS** compiler option does not protect against all buffer overrun security attacks. For example, if you have a buffer and a vtable in an object, a buffer overrun could corrupt the vtable.

Even if you use **/GS**, always try to write secure code that has no buffer overruns.

### To set this compiler option in Visual Studio

1. In **Solution Explorer**, right-click the project and then click **Properties**.

   For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. In the **Property Pages** dialog box, click the **C/C++** folder.

1. Click the **Code Generation** property page.

1. Modify the **Buffer Security Check** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BufferSecurityCheck%2A>.

## Example

This sample overruns a buffer. This causes the application to fail at runtime.

```C
// compile with: /c /W1
#include <cstring>
#include <stdlib.h>
#pragma warning(disable : 4996)   // for strcpy use

// Vulnerable function
void vulnerable(const char *str) {
   char buffer[10];
   strcpy(buffer, str); // overrun buffer !!!

   // use a secure CRT function to help prevent buffer overruns
   // truncate string to fit a 10 byte buffer
   // strncpy_s(buffer, _countof(buffer), str, _TRUNCATE);
}

int main() {
   // declare buffer that is bigger than expected
   char large_buffer[] = "This string is longer than 10 characters!!";
   vulnerable(large_buffer);
}
```

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
