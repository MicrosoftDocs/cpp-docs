---
title: "__debugbreak"
ms.date: "11/04/2016"
f1_keywords: ["__debugbreak_cpp", "__debugbreak"]
helpviewer_keywords: ["breakpoints, __debugbreak intrinsic", "__debugbreak intrinsic"]
ms.assetid: 1d1e1c0c-891a-4613-ae4b-d790094ba830
---
# __debugbreak

**Microsoft Specific**

Causes a breakpoint in your code, where the user will be prompted to run the debugger.

## Syntax

```
void __debugbreak();
```

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`__debugbreak`|x86, x64, ARM, ARM64|\<intrin.h>|

## Remarks

The `__debugbreak` compiler intrinsic, similar to [DebugBreak](https://msdn.microsoft.com/library/windows/desktop/ms679297.aspx), is a portable Win32 way to cause a breakpoint.

> [!NOTE]
>  When compiling with **/clr**, a function containing `__debugbreak` will be compiled to MSIL. `asm int 3` causes a function to be compiled to native. For more information, see [__asm](../assembler/inline/asm.md).

For example:

```
main() {
   __debugbreak();
}
```

is similar to:

```
main() {
   __asm {
      int 3
   }
}
```

on an x86 computer.

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
