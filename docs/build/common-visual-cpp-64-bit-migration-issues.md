---
description: "Learn more about: Common Visual C++ 64-bit Migration Issues"
title: "Common Visual C++ 64-bit Migration Issues"
ms.date: "05/06/2019"
helpviewer_keywords: ["64-bit programming [C++], migration", "64-bit compiler [C++], migration", "porting 32-bit code to 64-bit code", "migration [C++], 64-bit code issues", "32-bit code porting [C++]", "64-bit applications [C++]", "64-bit compiler [C++], porting 32-bit code", "Win64 [C++]"]
ms.assetid: d17fb838-7513-4e2d-8b27-a1666f17ad76
---
# Common Visual C++ 64-bit Migration Issues

When you use the Microsoft C++ compiler (MSVC) to create applications to run on a 64-bit Windows operating system, you should be aware of the following issues:

- An **`int`** and a **`long`** are 32-bit values on 64-bit Windows operating systems. For programs that you plan to compile for 64-bit platforms, you should be careful not to assign pointers to 32-bit variables. Pointers are 64-bit on 64-bit platforms, and you will truncate the pointer value if you assign it to a 32-bit variable.

- `size_t`, `time_t`, and `ptrdiff_t` are 64-bit values on 64-bit Windows operating systems.

- `time_t` is a 32-bit value on 32-bit Windows operating systems in Visual Studio 2005 and earlier. `time_t` is now a 64-bit integer by default. For more information, see [Time Management](../c-runtime-library/time-management.md).

   You should be aware of where your code takes an **`int`** value and processes it as a `size_t` or `time_t` value. It is possible that the number could grow to be larger than a 32-bit number and data will be truncated when it is passed back to the **`int`** storage.

The %x (hex **`int`** format) `printf` modifier will not work as expected on a 64-bit Windows operating system. It will only operate on the first 32 bits of the value that is passed to it.

- Use %I32x to display a 32-bit integral type in hex format.

- Use %I64x to display a 64-bit integral type in hex format.

- The %p (hex format for a pointer) will work as expected on a 64-bit Windows operating system.

For more information, see:

- [MSVC Compiler Options](reference/compiler-options.md)

- [Migration Tips](/windows/win32/WinProg64/migration-tips)

## See also

[Configure C++ projects for 64-bit, x64 targets](configuring-programs-for-64-bit-visual-cpp.md)<br/>
[Visual C++ Porting and Upgrading Guide](../porting/visual-cpp-porting-and-upgrading-guide.md)
