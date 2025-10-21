---
title: "Tutorial: Import the standard library (STL) using modules from the command line (C++)"
description: "Learn how to import the C++ standard library (STL) using modules from the command line."
ms.date: 01/29/2024
ms.topic: "tutorial"
author: "tylermsft"
ms.author: "twhitney"
helpviewer_keywords: ["modules [C++]", "named modules [C++], import standard library (STL) using named modules"]
---

# Tutorial: Import the C++ standard library using modules from the command line

Learn how to import the C++ standard library using C++ library modules. This results in faster compilation and is more robust than using header files or header units or precompiled headers (PCH).

In this tutorial, learn about:

- How to import the standard library as a module from the command line.
- The performance and usability benefits of modules.
- The two standard library modules `std` and `std.compat` and the difference between them.

## Prerequisites

This tutorial requires Visual Studio 2022 17.5 or later.

## Introduction to standard library modules

Header file semantics can change depending on macro definitions, the order in which you include them, and they slow compilation. Modules solve these problems.

It's now possible to import the standard library as a module instead of as a tangle of header files. This is much faster and more robust than including header files, header units, or precompiled headers (PCH).

The C++23 standard library introduces two named modules: `std` and `std.compat`:

- `std` exports the declarations and names defined in the C++ standard library namespace `std`, such as `std::vector`. It also exports the contents of C wrapper headers such as `<cstdio>` and `<cstdlib>`, which provide functions like `std::printf()`. C functions defined in the global namespace, such as `::printf()`, aren't exported. This improves the situation where including a C wrapper header like `<cstdio>` *also* includes C header files like `stdio.h`, which bring in the C global namespace versions. This isn't a problem if you import `std`.
- `std.compat` exports everything in `std` and adds the C runtime global namespaces such as `::printf`, `::fopen`, `::size_t`, `::strlen`, and so on. The `std.compat` module makes it easier to work with codebases that refer to many C runtime functions/types in the global namespace.

The compiler imports the entire standard library when you use `import std;` or `import std.compat;` and does it faster than bringing in a single header file. It's faster to bring in the entire standard library with `import std;` (or `import std.compat`) than to `#include <vector>`, for example.

Because named modules don't expose macros, macros like `assert`, `errno`, `offsetof`, `va_arg`, and others aren't available when you import `std` or `std.compat`. See [Standard library named module considerations](#standard-library-named-module-considerations) for workarounds.

## About C++ modules

Header files are how declarations and definitions have been shared between source files in C++. Before standard library modules, you'd include the part of the standard library you needed with a directive like `#include <vector>`. Header files are fragile and difficult to compose because their semantics may change depending on the order you include them, or whether certain macros are defined. They also slow compilation because they're reprocessed by every source file that includes them.

C++20 introduces a modern alternative called *modules*. In C++23, we were able to capitalize on module support to introduce named modules to represent the standard library.

Like header files, modules allow you to share declarations and definitions across source files. But unlike header files, modules aren't fragile and are easier to compose because their semantics don't change due to macro definitions or the order in which you import them. The compiler can process modules much faster than it can process `#include` files, and uses less memory at compile time as well. Named modules don't expose macro definitions or private implementation details.

This article demonstrates the new and best way to consume the standard library. For more information about alternative ways to consume the standard library, see [Compare header units, modules, and precompiled headers](../build/compare-inclusion-methods.md).

## Import the standard library with `std`

The following examples demonstrate how to consume the standard library as a module using the command line compiler. For information about how to do this in the Visual Studio IDE, see [Build ISO C++23 Standard Library Modules](../build/reference/c-cpp-prop-page.md#build-iso-c23-standard-library-modules).

The statement `import std;` or `import std.compat;` imports the standard library into your application. But first, you must compile the standard library named modules into binary form. The following steps demonstrate how.

### Example: How to build and import `std`

1. Open a x86 Native Tools Command Prompt for VS: from the Windows **Start** menu, type *x86 native* and the prompt should appear in the list of apps. Ensure that the prompt is for Visual Studio 2022 version 17.5 or above. You get errors if you use the wrong version of the prompt. The examples used in this tutorial are for the CMD shell.
1. Create a directory, such as `%USERPROFILE%\source\repos\STLModules`, and make it the current directory. If you choose a directory that you don't have write access to, you'll get errors during compilation.
1. Compile the `std` named module with the following command:

    ```cmd
    cl /std:c++latest /EHsc /nologo /W4 /c "%VCToolsInstallDir%\modules\std.ixx"
    ```

    If you get errors, ensure that you're using the correct version of the command prompt.

    Compile the `std` named module using the same compiler settings that you intend to use with the code that imports the built module. If you have a multi-project solution, you can compile the standard library named module once, and then refer to it from all of your projects by using the [`/reference`](../build/reference/module-reference.md) compiler option.

    Using the previous compiler command, the compiler outputs two files:
    - `std.ifc` is the compiled binary representation of the named module interface that the compiler consults to process the `import std;` statement. This is a compile-time only artifact. It doesn't ship with your application.
    - `std.obj` contains the implementation of the named module. Add `std.obj` to the command line when you compile the sample app to statically link the functionality you use from the standard library into your application.

    The key command-line switches in this example are:

    | Switch | Meaning |
    |---|---|
    | [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) | Use the latest version of the C++ language standard and library. Although module support is available under `/std:c++20`, you need the latest standard library to get support for standard library named modules. |
    | [`/EHsc`](../build/reference/eh-exception-handling-model.md) | Use C++ exception handling, except for functions marked `extern "C"`. |
    | [`/W4`](../build/reference/compiler-option-warning-level.md) | Using `/W4` is generally recommended, especially for new projects because it enables all level 1, level 2, level 3, and most level 4 (informational) warnings, which can help you catch potential issues early. It essentially provides lint-like warnings that can help ensure the fewest possible hard-to-find code defects. |
    | [`/c`](../build/reference/c-compile-without-linking.md) | Compile without linking, because we're just building the binary named module interface at this point. |

    You can control the object file name and the named module interface file name with the following switches:
    - [`/Fo`](../build/reference/fo-object-file-name.md) sets the name of the object file. For example, `/Fo:"somethingelse"`. By default, the compiler uses the same name for the object file as the module source file (`.ixx`) you're compiling. In the example, the object file name is `std.obj` by default because we're compiling the module file `std.ixx`.
    - [`/ifcOutput`](../build/reference/ifc-output.md) sets the name of the named module interface file (`.ifc`). For example, `/ifcOutput "somethingelse.ifc"`. By default, the compiler uses the same name for the module interface file (`.ifc`) as the module source file (`.ixx`) you're compiling. In the example, the generated `ifc` file is `std.ifc` by default because we're compiling the module file `std.ixx`.

1. Import the `std` library you built by first creating a file named `importExample.cpp` with the following content:

    ```cpp
    // requires /std:c++latest
    
    import std;
    
    int main()
    {
        std::cout << "Import the STL library for best performance\n";
        std::vector<int> v{5, 5, 5};
        for (const auto& e : v)
        {
            std::cout << e;
        }
    }
    ```

    In the preceding code, `import std;` replaces `#include <vector>` and `#include <iostream>`. The statement `import std;` makes all of the standard library available with one statement. Importing the entire standard library is often much faster than processing a single standard library header file such as `#include <vector>`.

1. Compile the example by using the following command in the same directory as the previous step:

    ```cmd
    cl /c /std:c++latest /EHsc /nologo /W4 /reference "std=std.ifc" importExample.cpp
    link importExample.obj std.obj
    ```

    It isn't necessary to specify `/reference "std=std.ifc"` on the command line in this example because the compiler automatically looks for the `.ifc` file matching the module name specified by the `import` statement. When the compiler encounters `import std;` it can find `std.ifc` if it's located in the same directory as the source code. If the `.ifc` file is in a different directory than the source code, use the [`/reference`](../build/reference/module-reference.md) compiler switch to refer to it.

    In this example, compiling the source code and linking the module's implementation into the application are separate steps. They don't have to be. You could use `cl /std:c++latest /EHsc /nologo /W4 /reference "std=std.ifc" importExample.cpp std.obj` to compile and link in one step. But it may be convenient to build and link separately because then you only need to build the standard library named module once, and then you can refer to it from your project, or from multiple projects, in your build's link step.

    If you're building a single project, you can combine the steps of building the `std` standard library named module and the step of building your application by adding `"%VCToolsInstallDir%\modules\std.ixx"` to the command line. Put it before any `.cpp` files that consume the `std` module.

    By default, the output executable's name is taken from the first input file. Use the `/Fe` compiler option to specify the executable file name you want. This tutorial shows compiling the `std` named module as a separate step because you only need to build the standard library named module once, and then you can refer to it from your project, or from multiple projects. But it may be convenient to build everything together, as shown by this command line:

    ```cmd
    cl /FeimportExample /std:c++latest /EHsc /nologo /W4 "%VCToolsInstallDir%\modules\std.ixx" importExample.cpp
    ```

    Given the previous command line, the compiler produces an executable named `importExample.exe`. When you run it, it produces the following output:

    ```output
    Import the STL library for best performance
    555
    ```

## Import the standard library and global C functions with `std.compat`

The C++ standard library includes the ISO C standard library. The `std.compat` module provides all of the functionality of the `std` module like `std::vector`, `std::cout`, `std::printf`, `std::scanf`, and so on. But it also provides the global namespace versions of these functions such as `::printf`, `::scanf`, `::fopen`, `::size_t`, and so on.

The `std.compat` named module is a compatibility layer provided to ease migrating existing code that refers to C runtime functions in the global namespace. If you want to avoid adding names to the global namespace, use `import std;`. If you need to ease migrating a codebase that uses many unqualified (global namespace) C runtime functions, use `import std.compat;`. This provides the global namespace C runtime names so that you don't have to qualify all the global names with `std::`. If you don't have any existing code that uses the global namespace C runtime functions, then you don't need to use `import std.compat;`. If you only call a few C runtime functions in your code, it may be better to use `import std;` and qualify the few global namespace C runtime names that need it with `std::`. For example, `std::printf()`. If you see an error like `error C3861: 'printf': identifier not found` when you try to compile your code, consider using `import std.compat;` to import the global namespace C runtime functions.

### Example: How to build and import `std.compat`

Before you can use `import std.compat;` you must compile the module interface file found in source code form in `std.compat.ixx`. Visual Studio ships the source code for the module so that you can compile the module using the compiler settings that match your project. The steps are similar to for building the `std` named module. The `std` named module is built first because `std.compat` depends on it:

1. Open a Native Tools Command Prompt for VS: from the Windows **Start** menu, type *x86 native* and the prompt should appear in the list of apps. Ensure that the prompt is for Visual Studio 2022 version 17.5 or above. You'll get compiler errors if you use the wrong version of the prompt.
1. Create a directory to try this example, such as `%USERPROFILE%\source\repos\STLModules`, and make it the current directory. If you choose a directory that you don't have write access to, you'll get errors.
1. Compile the `std` and `std.compat` named modules with the following command:

    ```cmd
    cl /std:c++latest /EHsc /nologo /W4 /c "%VCToolsInstallDir%\modules\std.ixx" "%VCToolsInstallDir%\modules\std.compat.ixx"
    ```

    You should compile `std` and `std.compat` using the same compiler settings that you intend to use with the code that will import them. If you have a multi-project solution, you can compile them once, and then refer to them from all of your projects using the [`/reference`](../build/reference/module-reference.md) compiler option.

    If you get errors, ensure that you're using the correct version of the command prompt.

    The compiler outputs four files from the previous two steps:
    - `std.ifc` is the compiled binary named module interface that the compiler consults to process the `import std;` statement. The compiler also consults `std.ifc` to process `import std.compat;` because `std.compat` builds on `std`. This is a compile-time only artifact. It doesn't ship with your application.
    - `std.obj` contains the implementation of the standard library.
    - `std.compat.ifc` is the compiled binary named module interface that the compiler consults to process the `import std.compat;` statement. This is a compile-time only artifact. It doesn't ship with your application.
    - `std.compat.obj` contains implementation. However, most of the implementation is provided by `std.obj`. Add `std.obj` to the command line when you compile the sample app to statically link the functionality that you use from the standard library into your application.

    You can control the object file name and the named module interface file name with the following switches:
    - [`/Fo`](../build/reference/fo-object-file-name.md) sets the name of the object file. For example, `/Fo:"somethingelse"`. By default, the compiler uses the same name for the object file as the module source file (`.ixx`) you're compiling. In the example, the object file names are `std.obj` and `std.compat.obj` by default because we're compiling the module files `std.ixx` and `std.compat.ixx`.
    - [`/ifcOutput`](../build/reference/ifc-output.md) sets the name of the named module interface file (`.ifc`). For example, `/ifcOutput "somethingelse.ifc"`. By default, the compiler uses the same name for the module interface file (`.ifc`) as the module source file (`.ixx`) you're compiling. In the example, the generated `ifc` files are `std.ifc` and `std.compat.ifc` by default because we're compiling the module files `std.ixx` and `std.compat.ixx`.

1. Import the `std.compat` library by first creating a file named `stdCompatExample.cpp` with the following content:

    ```cpp
    import std.compat;
    
    int main()
    {
        printf("Import std.compat to get global names like printf()\n");
        
        std::vector<int> v{5, 5, 5};
        for (const auto& e : v)
        {
            printf("%i", e);
        }
    }
    ```

    In the preceding code, `import std.compat;` replaces `#include <cstdio>` and `#include <vector>`. The statement `import std.compat;` makes the standard library and C runtime functions available with one statement. Importing this named module, which includes the C++ standard library and C runtime library global namespace functions, is faster than processing a single `#include` like `#include <vector>`.

1. Compile the example by using the following command:

    ```cmd
    cl /std:c++latest /EHsc /nologo /W4 stdCompatExample.cpp
    link stdCompatExample.obj std.obj std.compat.obj
    ```

    We didn't have to specify `std.compat.ifc` on the command line because the compiler automatically looks for the `.ifc` file that matches the module name in an `import` statement. When the compiler encounters `import std.compat;` it finds `std.compat.ifc` since we put it in the same directory as the source code--relieving us of the need to specify it on the command line. If the `.ifc` file is in a different directory than the source code, or has a different name, use the [`/reference`](../build/reference/module-reference.md) compiler switch to refer to it.

    When you import `std.compat`, you must link against both `std.compat` and `std.obj` because `std.compat` uses code in `std.obj`.

    If you're building a single project, you can combine the steps of building the `std` and `std.compat` standard library named modules by adding `"%VCToolsInstallDir%\modules\std.ixx"` and `"%VCToolsInstallDir%\modules\std.compat.ixx"` (in that order) to the command line. This tutorial shows building the standard library modules as a separate step because you only need to build the standard library named modules once, and then you can refer to them from your project, or from multiple projects. But if it's convenient to build them all at once, make sure to put them before any `.cpp` files that consume them, and specify `/Fe` to name the built `exe` as shown in this example:

    ```cmd
    cl /c /FestdCompatExample /std:c++latest /EHsc /nologo /W4 "%VCToolsInstallDir%\modules\std.ixx" "%VCToolsInstallDir%\modules\std.compat.ixx" stdCompatExample.cpp
    link stdCompatExample.obj std.obj std.compat.obj
    ```

    In this example, compiling the source code and linking the module's implementation into your application are separate steps. They don't have to be. You could use `cl /std:c++latest /EHsc /nologo /W4 stdCompatExample.cpp std.obj std.compat.obj` to compile and link in one step. But it may be convenient to build and link separately because then you only need to build the standard library named modules once, and then you can refer to them from your project, or from multiple projects, in your build's link step.

    The previous compiler command produces an executable named `stdCompatExample.exe`. When you run it, it produces the following output:

    ```output
    Import std.compat to get global names like printf()
    555
    ```

## Standard library named module considerations

Versioning for named modules is the same as for headers. The `.ixx` named module files are installed alongside the headers, for example: `"%VCToolsInstallDir%\modules\std.ixx"`, which resolves to `C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Tools\MSVC\14.38.33130\modules\std.ixx` in the version of the tools used at the time of this writing. Select the version of the named module the same way you choose the version of the header file to use--by the directory you refer to them from.

Don't mix and match importing header units and named modules. For example, don't `import <vector>;` and `import std;` in the same file.

Don't mix and match importing C++ standard library header files and the named modules `std` or `std.compat`. For example, don't `#include <vector>` and `import std;` in the same file. However, you can include C headers and import named modules in the same file. For example, you can `import std;` and `#include <math.h>` in the same file. Just don't include the C++ standard library version `<cmath>`.

You don't have to defend against importing a module multiple times. That is, you don't need `#ifndef` style header guards in modules. The compiler knows when it has already imported a named module and ignores duplicate attempts to do so.

If you need to use the `assert()` macro, then `#include <assert.h>`.

If you need to use the `errno` macro, `#include <errno.h>`. Because named modules don't expose macros, this is the workaround if you need to check for errors from `<math.h>`, for example.

Macros such as `NAN`, `INFINITY`, and `INT_MIN` are defined by `<limits.h>`, which you can include. However, if you `import std;` you can use `std::numeric_limits<double>::quiet_NaN()` and `std::numeric_limits<double>::infinity()` instead of `NAN` and `INFINITY`, and `std::numeric_limits<int>::min()` instead of `INT_MIN`.

## Summary

In this tutorial, you've imported the standard library using modules. Next, learn about creating and importing your own modules in [Named modules tutorial in C++](tutorial-named-modules-cpp.md).

## See also

[Compare header units, modules, and precompiled headers](../build/compare-inclusion-methods.md)\
[Overview of modules in C++](modules-cpp.md)\
[A Tour of C++ Modules in Visual Studio](https://devblogs.microsoft.com/cppblog/a-tour-of-cpp-modules-in-visual-studio)\
[Moving a project to C++ named Modules](https://devblogs.microsoft.com/cppblog/moving-a-project-to-cpp-named-modules)
