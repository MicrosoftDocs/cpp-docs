---
title: "Overview of modules in C++"
ms.date: "07/15/2019"
helpviewer_keywords: ["modules [C++]", "modules [C++], overview"]
ms.description: Modules in C++20 represent a modern alternative to header files.
---

# Overview of modules in C++

C++20 introduces *modules*, a modern solution for componentization of C++ libraries and programs. Modules eliminate or greatly reduce many of the problems associated with the use of header files, and also potentially reduce compilation times. Macros and preprocessor directives declared in a module are not visible and therefore have no effect on the compilation of the translation unit that imports the module. You can import modules in any order without concern for macro redefinitions. Declarations in the importing translation unit do not participate in overload resolution or name lookup in the imported module. After a module is compiled, the result can be reused wherever else the module is imported.

Modules are intended as an eventual replacement for the use of the #include preprocessor directive and header files. However, modules can be used side by side with header files. A C++ source file can import modules and also #include header files. In some cases, a header file can be imported as a module rather than textually #included by the preprocessor. A module can import any number of other modules. Modules are orthogonal to namespaces. For example, multiple modules are used to expose the STL using the std namespace.

## Enabling modules in the Microsoft C++ compiler

To enable support for modules in Visual Studio 2017 and later, compile with `/experimental:modules`. In a Visual Studio project, right-click the project node in **Solution Explorer** and choose **Properties**. Set the **Configuration** drop-down to **All Configurations**, then choose **Configuration Properties** > **C/C++** > **Language** > **Enable C++ Modules (experimental)**.

## Importing modules

Use the **import** statement to make a module's exported names visible in your program. 

The import declaration can appear only at the global scope. Any class completely defined along with all its members are made visible to the importing module. An incomplete class declaration in the export of a modu

Any names not exported are "owned" by the module and cannot conflict with names defined in your program or imported from other modules. A module cannot export macros

It is not possible for a module to export a macro, nor is it possible for a macro in an importing module to affect the imported module. Components that need to export macros should continue to use header files, with module-based subcomponents for the parts that are well behaved. For example, an existing library that provides interfaces controlled by a preprocessor macro symbol UNICODE can modularize its constituents and continue to provide a traditional header file-based solution as follows:

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

everything is exported including all #defines inside that file, but not any defines brought in from other included headers. 

### Preamble

Import statements and #include statements only. No declarations. The #defines are immediately available even for other imported headers in the preamble.

## Creating modules

A module consists of one primary interface source file and zero or more implementation files or additional interface files. The primary interface file begins with the keywords `export module` followed by the name you give to the module. Any names that you intend to make visible outside the module, for example function or type names, must be preceded by the `export` keyword. You can define function bodies in the interface file itself, or in a separate implementation file.

The following example shows a minimal module definition:

```cpp
export module Foo;


```

 impl units import module foo and can see the declarations. no export keyword allowed in an impl unit unless it's combined with the interface file. no worries about multiple definitions when imported by multiple files in the program.

a module unit is introduced by a declaration:
module module-name ;
This declaration means that subsequent declarations in the current translation unit are part of the module nominated by module-name. For simplicity, there can be at most one module declaration per translation unit. A module can span several module units — all of which must declare the module they belong to. Like most declarations in C++, it may be necessary to allow attributes on module declarations.

You can include header files in a module source file by putting the #include before the module declaration. These files are considered to be in the global module fragment, and no module "owns" them. module can only see symbols there that are in headers it specifically includes. The global module only contains symbols that are actually used. 

### Module partitions

```cpp
module baz:prt1
...
export module baz
export import baz:part1
```

you can import an implementation in a partition but not rexport it, allowing impl to remain hidden from end users

inline partitions?

### Argument dependent lookup when instantiating templates declared in a module

path of instantiation for templates declared in imported headers (30:03)

## See Also 