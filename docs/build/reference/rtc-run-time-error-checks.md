---
title: "/RTC (Run-time error checks)"
description: "The Microsoft C/C++ compiler /RTC options for run-time error checks."
ms.date: 07/31/2020
f1_keywords: ["/rtc", "VC.Project.VCCLCompilerTool.SmallerTypeCheck", "VC.Project.VCCLCompilerTool.UninitializedVariableCheck", "VC.Project.VCCLCompilerTool.StackFrameCheck", "VC.Project.VCCLCompilerTool.BasicRuntimeChecks"]
helpviewer_keywords: ["/RTCs compiler option [C++]", "-RTC1 compiler option [C++]", "run-time errors, error checks", "-RTCu compiler option [C++]", "/RTC1 compiler option [C++]", "/RTCc compiler option [C++]", "/RTCu compiler option [C++]", "__MSVC_RUNTIME_CHECKS macro", "-RTCs compiler option [C++]", "RTCs compiler option", "RTC1 compiler option", "run-time errors, run-time checks", "run-time checks, /RTC option", "RTCu compiler option", "RTCc compiler option", "-RTCc compiler option [C++]"]
ms.assetid: 9702c558-412c-4004-acd5-80761f589368
---
# `/RTC` (Run-time error checks)

Used to enable and disable the run-time error checks feature, in conjunction with the [runtime_checks](../../preprocessor/runtime-checks.md) pragma.

## Syntax

> **`/RTC1`**\
> **`/RTCc`**\
> **`/RTCs`**\
> **`/RTCu`**

## Arguments

**`/RTC1`**<br/>
Equivalent to **`/RTCsu`**.

**`/RTCc`**<br/>
Reports when a value is assigned to a smaller data type and results in a data loss. For example, it reports if a **`short`** type value of `0x0101` is assigned to a variable of type **`char`**.

This option can report situations in which you intend to truncate. For example, when you want the first 8 bits of an **`int`** returned as a **`char`**. Because **`/RTCc`** causes a run-time error if an assignment causes any information loss, first mask off the information you need to avoid the run-time error. For example:

```C
#include <crtdbg.h>

char get8bits(unsigned value, int position) {
   _ASSERT(position < 32);
   return (char)(value >> position);
   // Try the following line instead:
   // return (char)((value >> position) & 0xff);
}

int main() {
   get8bits(12341235,3);
}
```

Because **`/RTCc`** rejects code that conforms to the standard, it's not supported by the C++ Standard Library. Code that uses **`/RTCc`** and the C++ Standard Library may cause compiler error [C1189](../../error-messages/compiler-errors-1/fatal-error-c1189.md). You can define `_ALLOW_RTCc_IN_STL` to silence the warning and use the **`/RTCc`** option.

**`/RTCs`**<br/>
Enables stack frame run-time error checking, as follows:

- Initialization of local variables to a nonzero value. This option helps identify bugs that don't appear when running in debug mode. There's a greater chance that stack variables still have a zero value in a debug build compared to a release build. That's because of compiler optimizations of stack variables in a release build. Once a program has used an area of its stack, it's never reset to 0 by the compiler. That means any uninitialized stack variables that happen to use the same stack area later can return values left over from the earlier use of this stack memory.

- Detection of overruns and underruns of local variables such as arrays. **`/RTCs`** doesn't detect overruns when accessing memory that results from compiler padding within a structure. Padding could occur by using [`align`](../../cpp/align-cpp.md), [`/Zp` (Struct Member Alignment)](zp-struct-member-alignment.md), or [`pack`](../../preprocessor/pack.md), or if you order structure elements in such a way as to require the compiler to add padding.

- Stack pointer verification, which detects stack pointer corruption. Stack pointer corruption can be caused by a calling convention mismatch. For example, using a function pointer, you call a function in a DLL that is exported as [`__stdcall`](../../cpp/stdcall.md) but you declare the pointer to the function as [`__cdecl`](../../cpp/cdecl.md).

**`/RTCu`**<br/>
Reports when a variable is used without having been initialized. For example, an instruction that generates warning C4701 may also generate a run-time error under **`/RTCu`**. Any instruction that generates [Compiler Warning (level 1 and level 4) C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md) will generate a run-time error under **`/RTCu`**.

However, consider the following code fragment:

```cpp
int a, *b, c;
if ( 1 )
b = &a;
c = a;  // No run-time error with /RTCu
```

If a variable could have been initialized, it's not reported at run time by **`/RTCu`**. For example, after a variable is aliased through a pointer, the compiler doesn't track the variable and report uninitialized uses. In effect, you can initialize a variable by taking its address. The **`&`** operator works like an assignment operator in this situation.

## Remarks

Run-time error checks are a way for you to find problems in your running code; for more information, see [How to: Use native run-time checks](/visualstudio/debugger/how-to-use-native-run-time-checks).

You can specify more than one **`/RTC`** option on the command line. The option arguments may be combined; for example, **`/RTCcu`** is the same as **`/RTCc /RTCu`**.

If you compile your program at the command line using any of the **`/RTC`** compiler options, any pragma [`optimize`](../../preprocessor/optimize.md) instructions in your code silently fail. That's because run-time error checks aren't valid in a release (optimized) build.

Use **`/RTC`** for development builds; Don't use **`/RTC`** for a release build. **`/RTC`** can't be used with compiler optimizations ([`/O` Options (Optimize Code)](o-options-optimize-code.md)). A program image built with **`/RTC`** is slightly larger and slightly slower than an image built with **`/Od`** (up to 5 percent slower than an **`/Od`** build).

The `__MSVC_RUNTIME_CHECKS` preprocessor directive will be defined when you use any **`/RTC`** option or [`/GZ`](gz-enable-stack-frame-run-time-error-checking.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

1. Modify one or both of the following properties: **Basic Runtime Checks** or **Smaller Type Check**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BasicRuntimeChecks%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.SmallerTypeCheck%2A> properties.

## See also

[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)<br/>
[How to: Use native run-time checks](/visualstudio/debugger/how-to-use-native-run-time-checks)
