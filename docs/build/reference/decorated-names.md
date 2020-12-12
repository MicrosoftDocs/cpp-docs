---
description: "Learn more about: Decorated Names"
title: "Decorated Names"
ms.date: "09/05/2018"
helpviewer_keywords: ["decorated names, definition", "name decoration [C++]", "names [C++], decorated"]
ms.assetid: a4e9ae8e-b239-4454-b401-4102793cb344
---
# Decorated Names

Functions, data, and objects in C and C++ programs are represented internally by their decorated names. A *decorated name* is an encoded string created by the compiler during compilation of an object, data, or function definition. It records calling conventions, types, function parameters and other information together with the name. This name decoration, also known as *name mangling*, helps the linker find the correct functions and objects when linking an executable.

The decorated naming conventions have changed in various versions of Visual Studio, and can also be different on different target architectures. To link correctly with source files created by using Visual Studio, C and C++ DLLs and libraries should be compiled by using the same compiler toolset, flags, and target architecture.

> [!NOTE]
> Libraries built with Visual Studio 2015 can be consumed by applications built with Visual Studio 2017 or Visual Studio 2019.

## <a name="Using"></a> Using decorated names

Normally, you don't have to know the decorated name to write code that compiles and links successfully. Decorated names are an implementation detail internal to the compiler and linker. The tools can usually handle the name in its undecorated form. However, a decorated name is sometimes required when you specify a function name to the linker and other tools. For example, to match overloaded C++ functions, members of namespaces, class constructors, destructors and special member functions, you must specify the decorated name. For details about the option flags and other situations that require decorated names, see the documentation for the tools and options that you are using.

If you change the function name, class, calling convention, return type, or any parameter, the decorated name also changes. In this case, you must get the new decorated name and use it everywhere the decorated name is specified.

Name decoration is also important when linking to code written in other programming languages or using other compilers. Different compilers use different name decoration conventions. When your executable links to code written in another language, special care must be taken to match the exported and imported names and calling conventions. Assembly language code must use the MSVC decorated names and calling conventions to link to source code written using MSVC.

## <a name="Format"></a> Format of a C++ decorated name

A decorated name for a C++ function contains the following information:

- The function name.

- The class that the function is a member of, if it is a member function. This may include the class that encloses the class that contains the function, and so on.

- The namespace the function belongs to, if it is part of a namespace.

- The types of the function parameters.

- The calling convention.

- The return type of the function.

The function and class names are encoded in the decorated name. The rest of the decorated name is a code that has internal meaning only for the compiler and the linker. The following are examples of undecorated and decorated C++ names.

|Undecorated name|Decorated name|
|----------------------|--------------------|
|`int a(char){int i=3;return i;};`|`?a@@YAHD@Z`|
|`void __stdcall b::c(float){};`|`?c@b@@AAGXM@Z`|

## <a name="FormatC"></a> Format of a C decorated name

The form of decoration for a C function depends on the calling convention used in its declaration, as shown in the following table. This is also the decoration format that is used when C++ code is declared to have `extern "C"` linkage. The default calling convention is **`__cdecl`**. Note that in a 64-bit environment, functions are not decorated.

|Calling convention|Decoration|
|------------------------|----------------|
|**`__cdecl`**|Leading underscore (**`_`**)|
|**`__stdcall`**|Leading underscore (**`_`**) and a trailing at sign (**`@`**) followed by the number of bytes in the parameter list in decimal|
|**`__fastcall`**|Leading and trailing at signs (**`@`**) followed by a decimal number representing the number of bytes in the parameter list|
|**`__vectorcall`**|Two trailing at signs (**`@@`**) followed by a decimal number of bytes in the parameter list|

## <a name="Viewing"></a> Viewing decorated names

You can get the decorated form of a symbol name after you compile the source file that contains the data, object, or function definition or prototype. To examine decorated names in your program, you can use one of the following methods:

#### To use a listing to view decorated names

1. Generate a listing by compiling the source file that contains the data, object, or function definition or prototype with the [Listing File Type](fa-fa-listing-file.md) compiler option set to Assembly with Source Code (**/FAs**).

   For example, enter `cl /c /FAs example.cpp` at a developer command prompt to generate a listing file, example.asm.

2. In the resulting listing file, find the line that starts with PUBLIC and ends a semicolon followed by the undecorated data or function name. The symbol between PUBLIC and the semicolon is the decorated name.

#### To use DUMPBIN to view decorated names

1. To see the exported symbols in an .obj or .lib file, enter `dumpbin /symbols` `objfile` at a developer command prompt.

2. To find the decorated form of a symbol, look for the undecorated name in parentheses. The decorated name is on the same line, after a pipe (&#124;) character and before the undecorated name.

## <a name="Undecorated"></a> Viewing undecorated names

You can use undname.exe to convert a decorated name to its undecorated form. This example shows how it works:

```
C:\>undname ?func1@a@@AAEXH@Z
Microsoft (R) C++ Name Undecorator
Copyright (C) Microsoft Corporation. All rights reserved.

Undecoration of :- "?func1@a@@AAEXH@Z"
is :- "private: void __thiscall a::func1(int)"
```

## See also

[Additional MSVC Build Tools](c-cpp-build-tools.md)<br/>
[Using extern to Specify Linkage](../../cpp/extern-cpp.md)
