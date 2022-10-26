---
title: "CRT Initialization"
description: "Describes how the CRT initializes global state in native code."
ms.topic: "conceptual"
ms.date: 08/02/2021
helpviewer_keywords: ["CRT initialization [C++]"]
ms.assetid: e7979813-1856-4848-9639-f29c86b74ad7
---
# CRT initialization

This article describes how the CRT initializes global state in native code.

By default, the linker includes the CRT library, which provides its own startup code. This startup code initializes the CRT library, calls global initializers, and then calls the user-provided `main` function for console applications.

It's possible, though not recommended, to take advantage of Microsoft-specific linker behavior to insert your own global initializers in a specific order. This code isn't portable, and comes with some important caveats.

## Initializing a global object

Consider the following code:

```C
int func(void)
{
    return 3;
}

int gi = func();

int main()
{
    return gi;
}
```

According to the C/C++ standard, `func()` must be called before `main()` is executed. But who calls it?

One way to determine the caller is to set a breakpoint in `func()`, debug the application, and examine the stack. It's possible because the CRT source code is included with Visual Studio.

When you browse the functions on the stack, you'll see that the CRT is calling a list of function pointers. These functions are similar to `func()`, or constructors for class instances.

The CRT gets the list of function pointers from the Microsoft C++ compiler. When the compiler sees a global initializer, it generates a dynamic initializer in the `.CRT$XCU` section where `CRT` is the section name and `XCU` is the group name. To get a list of dynamic initializers, run the command **`dumpbin /all main.obj`**, and then search the `.CRT$XCU` section. The command only applies when *`main.cpp`* is compiled as a C++ file, not a C file. It should be similar to this example:

```cmd
SECTION HEADER #6
.CRT$XCU name
       0 physical address
       0 virtual address
       4 size of raw data
     1F2 file pointer to raw data (000001F2 to 000001F5)
     1F6 file pointer to relocation table
       0 file pointer to line numbers
       1 number of relocations
       0 number of line numbers
40300040 flags
         Initialized Data
         4 byte align
         Read Only

RAW DATA #6
  00000000: 00 00 00 00                                      ....

RELOCATIONS #6
                                               Symbol    Symbol
Offset    Type              Applied To         Index     Name
--------  ----------------  -----------------  --------  -------
00000000  DIR32             00000000           C         ??__Egi@@YAXXZ (void __cdecl `dynamic initializer for 'gi''(void))
```

The CRT defines two pointers:

- `__xc_a` in `.CRT$XCA`

- `__xc_z` in `.CRT$XCZ`

Neither group has any other symbols defined except `__xc_a` and `__xc_z`.

Now, when the linker reads various `.CRT` subsections (the part after the `$`), it combines them in one section and orders them alphabetically. It means that the user-defined global initializers (which the Microsoft C++ compiler puts in `.CRT$XCU`) always come after `.CRT$XCA` and before `.CRT$XCZ`.

The section should resemble this example:

```asm
.CRT$XCA
            __xc_a
.CRT$XCU
            Pointer to Global Initializer 1
            Pointer to Global Initializer 2
.CRT$XCZ
            __xc_z
```

So, the CRT library uses both `__xc_a` and `__xc_z` to determine the start and end of the global initializers list because of the way in which they're laid out in memory after the image is loaded.

## Linker features for initialization

The C++ Standard doesn't provide a conforming way to specify relative order across translation units for a user-supplied global initializer. However, since the Microsoft linker orders the `.CRT` subsections alphabetically, it's possible to take advantage of this ordering to specify initialization order. We don't recommend this Microsoft-specific technique, and it may break in a future release. We've documented it only to keep you from creating code that's broken in hard-to-diagnose ways.

To help prevent issues in your code, starting in Visual Studio 2019 version 16.11, we've added two new off by default warnings: [C5247](../error-messages/compiler-warnings/c5247.md) and [C5248](../error-messages/compiler-warnings/c5248.md). Enable these warnings to detect problems when creating your own initializers.

You can add initializers to unused reserved section names to create them in a specific relative order to the compiler generated dynamic initializers:

```cpp
#pragma section(".CRT$XCT", read)
// 'i1' is guaranteed to be called before any compiler generated C++ dynamic initializer
__declspec(allocate(".CRT$XCT")) type i1 = f;

#pragma section(".CRT$XCV", read)
// 'i2' is guaranteed to be called after any compiler generated C++ dynamic initializer
__declspec(allocate(".CRT$XCV")) type i2 = f;
```

The names `.CRT$XCT` and `.CRT$XCV` aren't used by either the compiler or the CRT library right now, but there's no guarantee that they'll remain unused in the future. And, your variables could still be optimized away by the compiler. Consider the potential engineering, maintenance, and portability issues before adopting this technique.

## See also

[C runtime (CRT) and C++ Standard Library (STL) `.lib` files](./crt-library-features.md)
