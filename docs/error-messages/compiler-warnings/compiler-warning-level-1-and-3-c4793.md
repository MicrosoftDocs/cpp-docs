---
description: "Learn more about: Compiler Warning (level 1 and 3) C4793"
title: "Compiler Warning (level 1 and 3) C4793"
ms.date: "11/04/2016"
f1_keywords: ["C4793"]
helpviewer_keywords: ["C6634", "C6635", "C6640", "C6630", "C6639", "C6636", "C6638", "C6631", "C6637", "C4793"]
ms.assetid: 819ada53-1d9c-49b8-a629-baf8c12314e6
---
# Compiler Warning (level 1 and 3) C4793

> '*function*' : function is compiled as native code: '*reason*'

## Remarks

The compiler cannot compile *function* into managed code, even though the [/clr](../../build/reference/clr-common-language-runtime-compilation.md) compiler option is specified. Instead, the compiler emits warning C4793 and an explanatory continuation message, and then compiles *function* into native code. The continuation message contains the *reason* text that explains why *function* cannot be compiled to `MSIL`.

This is a level 1 warning when you specify the **/clr:pure** compiler option.  The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

The following table lists all possible continuation messages.

|Reason message|Remarks|
|--------------------|-------------|
|Aligned data types are not supported in managed code|The CLR must be able to allocate data as needed, which might not be possible if the data is aligned with declarations such as [__m128](../../cpp/m128.md) or [align](../../cpp/align-cpp.md).|
|Functions that use '__ImageBase' are not supported in managed code|`__ImageBase` is a special linker symbol that is typically used only by low-level native code to load a DLL.|
|varargs are not supported by the '/clr' compiler option|Native functions cannot call managed functions that have [variable argument lists](../../cpp/functions-with-variable-argument-lists-cpp.md) (varargs) because the functions have different stack layout requirements. However, if you specify the **/clr:pure** compiler option, variable argument lists are supported because the assembly can contain only managed functions. For more information, see [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).|
|The 64-bit CLR does not support data declared with the __ptr32 modifier|A pointer must be the same size as a native pointer on the current platform. For more information, see [__ptr32, \__ptr64](../../cpp/ptr32-ptr64.md).|
|The 32-bit CLR does not support data declared with the __ptr64 modifier|A pointer must be the same size as a native pointer on the current platform. For more information, see [__ptr32, \__ptr64](../../cpp/ptr32-ptr64.md).|
|One or more intrinsics is not supported in managed code|The name of the intrinsic is not available at the time the message is emitted. However, an intrinsic that causes this message typically represents a low-level machine instruction.|
|Inline native assembly ('__asm') is not supported in managed code|[Inline assembly code](../../assembler/inline/asm.md) can contain arbitrary native code, which cannot be managed.|
|A non-__clrcall virtual function thunk must be compiled as native|A non-[__clrcall](../../cpp/clrcall.md) virtual function thunk must use an unmanaged address.|
|A function using '_setjmp' must be compiled as native|The CLR must be able to control program execution. However, the [setjmp](../../cpp/using-setjmp-longjmp.md) function bypasses regular program execution by saving and restoring low-level information such as registers and execution state.|

## Example

The following sample generates C4793.

```cpp
// C4793.cpp
// compile with: /c /clr /W3
// processor: x86
int asmfunc(void) {   // C4793, compiled as unmanaged, native code
   __asm {
      mov eax, 0
   }
}
```

```Output
warning C4793: 'asmfunc' : function is compiled as native code:
        Inline native assembly ('__asm') is not supported in managed code
```

The following sample generates C4793.

```cpp
// C4793_b.cpp
// compile with: /c /clr /W3
#include <setjmp.h>
jmp_buf test_buf;

void f() {
   setjmp(test_buf);   // C4793 warning
}
```

```Output
warning C4793: 'f' : function is compiled as native code:
        A function using '_setjmp' must be compiled as native
```
