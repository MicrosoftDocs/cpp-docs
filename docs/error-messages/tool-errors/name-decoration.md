---
description: "Learn more about: Name Decoration"
title: "Name Decoration"
ms.date: "04/22/2019"
helpviewer_keywords: ["name decoration [C++]", "names [C++], decorated", "decorated names, calling conventions"]
ms.assetid: 8327a27b-bb4f-49f2-8218-b851b9d2a463
---
# Name Decoration

Name decoration usually refers to C++ naming conventions, but can apply to a number of C cases as well. By default, C++ uses the function name, parameters, and return type to create a linker name for the function. Consider the following function declaration:

`void CALLTYPE test(void);`

The following table shows the linker name for various calling conventions.

|Calling convention|`extern "C"` or `.c` file|`.cpp`, `.cxx` or `/TP`|
|------------------------|---------------------------|------------------------|
|C naming convention (**`__cdecl`**)|`_test`|`?test@@ZAXXZ`|
|Fast call naming convention (**`__fastcall`**)|`@test@0`|`?test@@YIXXZ`|
|Standard call naming convention (**`__stdcall`**)|`_test@0`|`?test@@YGXXZ`|
|Vector call naming convention (**`__vectorcall`**)|`test@@0`|`?test@@YQXXZ`|

Use `extern "C"` to call a C function from C++. `extern "C"` forces use of the C naming convention for non-class C++ functions. Be aware of compiler switches **/Tc** or **/Tp**, which tell the compiler to ignore the filename extension and compile the file as C or C++, respectively. These options may cause linker names you don't expect.

Having function prototypes that have mismatched parameters can also cause this error. Name decoration incorporates the parameters of a function into the final decorated function name. Calling a function with the parameter types that don't match those in the function declaration may also cause LNK2001.

There are currently no standards for C++ naming between compiler vendors or even between different versions of a compiler. Linking object files compiled by other compilers may not produce the same naming scheme, and can cause unresolved externals.

## See also

[Linker Tools Error LNK2001](../../error-messages/tool-errors/linker-tools-error-lnk2001.md)
