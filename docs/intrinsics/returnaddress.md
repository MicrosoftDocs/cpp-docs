---
description: "Learn more about: _ReturnAddress"
title: "_ReturnAddress"
ms.date: "09/02/2019"
f1_keywords: ["_ReturnAddress"]
helpviewer_keywords: ["_ReturnAddress intrinsic", "ReturnAddress intrinsic"]
ms.assetid: 7f4a5811-35e6-4f64-ba7c-21203380eeda
---
# _ReturnAddress

**Microsoft Specific**

The `_ReturnAddress` intrinsic provides the address of the instruction in the calling function that will be executed after control returns to the caller.

Build the following program and step through it in the debugger. As you step through the program, note the address that is returned from `_ReturnAddress`. Then, immediately after returning from the function where `_ReturnAddress` was used, open the [How to: Use the Disassembly Window](/visualstudio/debugger/how-to-use-the-disassembly-window) and note that the address of the next instruction to be executed matches the address returned from `_ReturnAddress`.

Optimizations such as inlining may affect the return address. For example, if the sample program below is compiled with [/Ob1](../build/reference/ob-inline-function-expansion.md), `inline_func` will be inlined into the calling function, `main`. Therefore, the calls to `_ReturnAddress` from `inline_func` and `main` will each produce the same value.

When `_ReturnAddress` is used in a program compiled with [/clr](../build/reference/clr-common-language-runtime-compilation.md), the function containing the `_ReturnAddress` call will be compiled as a native function. When a function compiled as managed calls into the function containing `_ReturnAddress`, `_ReturnAddress` may not behave as expected.

## Requirements

**Header file** \<intrin.h>

## Example

```cpp
// compiler_intrinsics__ReturnAddress.cpp
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_ReturnAddress)

__declspec(noinline)
void noinline_func(void)
{
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());
}

__forceinline
void inline_func(void)
{
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());
}

int main(void)
{
   noinline_func();
   inline_func();
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());

   return 0;
}
```

**END Microsoft Specific**

## See also

[_AddressOfReturnAddress](../intrinsics/addressofreturnaddress.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Keywords](../cpp/keywords-cpp.md)
