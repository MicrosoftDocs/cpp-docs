---
description: "Learn more about: _AddressOfReturnAddress"
title: "_AddressOfReturnAddress"
ms.date: "09/02/2019"
f1_keywords: ["_AddressOfReturnAddress_cpp", "_AddressOfReturnAddress"]
helpviewer_keywords: ["_AddressOfReturnAddress intrinsic", "AddressOfReturnAddress intrinsic"]
ms.assetid: c7e10b8c-445e-4236-a602-e2d90200f70a
---
# _AddressOfReturnAddress

**Microsoft Specific**

Provides the address of the memory location that holds the return address of the current function. This address may not be used to access other memory locations (for example, the function's arguments).

## Syntax

```C
void * _AddressOfReturnAddress();
```

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_AddressOfReturnAddress`|x86, x64, ARM, ARM64|

**Header file** \<intrin.h>

## Remarks

When `_AddressOfReturnAddress` is used in a program compiled with [/clr](../build/reference/clr-common-language-runtime-compilation.md), the function containing the `_AddressOfReturnAddress` call is compiled as a native function. When a function compiled as managed calls into the function containing `_AddressOfReturnAddress`, `_AddressOfReturnAddress` might not behave as expected.

This routine is only available as an intrinsic.

## Example

```cpp
// compiler_intrinsics_AddressOfReturnAddress.cpp
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

// This function will print three values:
//   (1) The address retrieved from _AddressOfReturnAdress
//   (2) The return address stored at the location returned in (1)
//   (3) The return address retrieved the _ReturnAddress* intrinsic
// Note that (2) and (3) should be the same address.
__declspec(noinline)
void func() {
   void* pvAddressOfReturnAddress = _AddressOfReturnAddress();
   printf_s("%p\n", pvAddressOfReturnAddress);
   printf_s("%p\n", *((void**) pvAddressOfReturnAddress));
   printf_s("%p\n", _ReturnAddress());
}

int main() {
   func();
}
```

```Output
0012FF78
00401058
00401058
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Keywords](../cpp/keywords-cpp.md)
