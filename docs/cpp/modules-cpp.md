---
title: "Overview of modules in C++"
ms.date: "07/15/2019"
helpviewer_keywords: ["modules [C++]", "modules [C++], overview"]
ms.description: Modules in C++20 provide a modern alternative to header files.
---

# Overview of modules in C++

C++20 introduces *modules*, a modern solution for componentization of C++ libraries and programs. A module is a set of source code files that are compiled independently of the program that imports them rather than being textually included by the preprocessor. Modules eliminate or greatly reduce many of the problems associated with the use of header files, and also potentially reduce compilation times. Macros, preprocessor directives, and non-exported names declared in a module are not visible and therefore have no effect on the compilation of the translation unit that imports the module. You can import modules in any order without concern for macro redefinitions. Declarations in the importing translation unit do not participate in overload resolution or name lookup in the imported module. After a module is compiled once, the result can be reused wherever else the module is imported in a project.

Modules can be used side by side with header files. A C++ source file can import modules and also #include header files. In some cases, a header file can be imported as a module rather than textually #included by the preprocessor. We recommend that new projects use modules rather than header files as much as possible. For larger existing projects under active development, we suggest that you experiment with converting legacy headers to modules to see whether you get a meaningful reduction in compilation times.

 and require the **/experimental:modules** compiler option as well as **/std:c++latest**. 

## Enable modules in the Microsoft C++ compiler

As of Visual Studio 2019 version 16.2, modules are not fully implemented in the Microsoft C++ compiler. You can use the modules feature to create single-partition modules and to import the Standard Library modules provided by Microsoft. To enable support for modules, compile with `/experimental:modules` and `std:c++latest`. In a Visual Studio project, right-click the project node in **Solution Explorer** and choose **Properties**. Set the **Configuration** drop-down to **All Configurations**, then choose **Configuration Properties** > **C/C++** > **Language** > **Enable C++ Modules (experimental)**.

Modules must be compiled with the [/Ehsc](../build/reference/eh-exception-handling-model.md) and [/MD](../build/reference/md-mt-ld-use-run-time-library.md) options.

## Consume the C++ Standard Library as modules

By importing the Standard Library as modules rather than #including it through header files, you can potentially speed up compilation times depending on the size of your project. The library is componentized into the following modules:

- std.regex provides the content of header \<regex>
- std.filesystem provides the content of header \<experimental/filesystem>
- std.memory provides the content of header \<memory>
- std.threading provides the contents of headers \<atomic>, \<condition_variable>, \<future>, \<mutex>, \<shared_mutex>, and \<thread>
- std.core provides everything else in the C++ Standard Library

To consume these modules, just add an import statement to the top of the source code file:

```cpp
import std.core;
import std.regex;
```

## Basic example

The following example shows a simple module definition in a source file called **Foo.ixx**. The **ixx** extension is required for module interface files in Visual Studio. In this example, the interface file contains the function definition as well as the declaration but the definitions can be placed in a separate file (as shown in a later example). The **export module Foo** statement indicates that this file is the primary interface for a module called **Foo**. The **export** modifier on f() indicates that this function will be visible when **Foo** is imported by another program or module. Note that the module references a namespace `Bar`. 

```cpp
export module Foo;

namespace Bar
{
   export int f()
   {
      return 108;
   }
}
```

The file **MyProgram.cpp** uses the **import** statement to access the names exported by **Foo**.

```cpp
import Foo;

using namespace Bar;

int main()
{
   int answer = f();
}

```

The import declaration can appear only at the global scope.

## Implementing modules

You can create a module with a single interface file (.ixx) that exports names and includes implementations of all functions. You can also put the implementations in one or more separate implementation files (.cxx), similar to how .h and .cpp files are used. An interface file and the set of implementation files that back it are called a *module unit*. An implementation file cannot contain the export keyword. For larger modules, you can split the module into multiple module units called *partitions*. Each partition consists of an interface file backed by one or more implementation files. The primary interface file imports the partition interfaces, and implicitly exports them. Declarations in any of the partitions are visible within the entire module. No special precautions are need to avoid one-definition-rule (ODR) errors in cases where multiple partitions import the same partition. You can declare a name (function, class, etc.) in one partition and define it in another.

## Modules and namespaces

The rules for namespaces in modules are the same as in any other code. If a declaration within a namespace is exported, the enclosing namespace (excluding non-exported members) is also implicitly exported. If a namespace is explicitly exported, all declarations within that namespace definition are exported.

### Module partitions

A module partition is similar to a module, except that is shares ownership of all declarations in the entire module. A partition's name must begin with the module name followed by a colon. A partition implementation file begins like this: 

```cpp
module Foo:part1
```

and the partition interface file begins like this:

```cpp
module Foo:part1
```

To access declarations in another partition, a partition must import it, but it can only use the part name, not the module name:

```cpp
module Foo:part2;
import :part1;
```

The primary interface unit must import and re-export all the module's interface partition files like this:

```cpp
export import :part1
export import :part2
...
```

The primary interface unit can import partition implementation files, but cannot export them because those files are not allowed to export any names. This enables a module to keep implementation details internal to the module.
 
Declarations in a    you can import an implementation in a partition but not re-xport it. 



## Modules and header files

You can include header files in a module source file by putting the #include before the module declaration. These files are considered to be in the global module fragment, and no module "owns" them. module can only see symbols there that are in headers it specifically includes. The global module only contains symbols that are actually used.


A module cannot export a macro. A macro in an importing module cannot affect the imported module. Components that need to export macros should continue to use header files, with module-based subcomponents for the parts that are well behaved. For example, an existing library that provides interfaces controlled by a preprocessor macro symbol UNICODE can modularize its constituents and continue to provide a traditional header file-based solution as follows:

```cpp
// Header file C.h
#ifndef C_INCLUDED
#define C_INCLUDED
#ifdef UNICODE
import C.Unicode;
#else
import C.Ansi;
#endif // C INCLUDED
```

Only exported names are visible outside the module; unlike a header file, a module owns the non-exported names that it declares. Non-exported names cannot be source of "One Definition Rule (ODR)" violations when a module is imported into a program or another module. A compiler error is raised if a program imports two modules that export identical names with the same type(s) in the same namespace.

The use of modules does not affect class member name lookup rules. A class that is declared (but not defined) in a module interface is seen as an incomplete type by any importing module, even if the module itself defines it in a non-exported name or function.

Modules are included in your program as source files, but unlike headers which must be parsed in every translation unit in which they appear, a module only needs to be compiled once. The compiler creates a binary interface file that describes all the exported types. That file can be processed much faster than a header file, and the binary interface file can be reused by the compiler every place where the module is imported. In larger projects, the reduction in compilation times can be significant.

### Legacy imports

Some headers are sufficiently self-contained that they are allowed to be brought in using the import keyword. An imported header is called a *legacy import*. Any #defines in the header itself are visible in the importing program.

```cpp
import <vector>
import "myheader.h"
```

everything is exported including all #defines inside that file, but not any defines brought in from other included headers. A module can import any number of other modules. Modules are orthogonal to namespaces. For example, multiple modules are used to expose the STL using the std namespace.

### Preamble

Import statements and #include statements only. No declarations. The #defines are immediately available even for other imported headers in the preamble.

### Argument dependent lookup when instantiating templates declared in a module

Path of instantiation for templates declared in imported headers (30:03)

## See Also 