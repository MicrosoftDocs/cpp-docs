---
title: "Overview of modules in C++"
description: Modules in C++20 provide a modern alternative to header files.
ms.date: 04/17/2025
helpviewer_keywords: ["modules [C++]", "modules [C++], overview"]
---
# Overview of modules in C++

C++20 introduces *modules*. A *module* is a set of source code files that are compiled independently of the source files (or more precisely, the [translation units](https://wikipedia.org/wiki/Translation_unit_(programming)) that import them.

Modules eliminate or reduce many of the problems associated with the use of header files. They often reduce compilation times, sometimes significantly. Macros, preprocessor directives, and nonexported names declared in a module aren't visible outside the module. They have no effect on the compilation of the translation unit that imports the module. You can import modules in any order without concern for macro redefinitions. Declarations in the importing translation unit don't participate in overload resolution or name lookup in the imported module. After a module is compiled once, the results are stored in a binary file that describes all the exported types, functions, and templates. The compiler can process that file much faster than a header file. And, the compiler can reuse it every place where the module is imported in a project.

You can use modules side by side with header files. A C++ source file can `import` modules and also `#include` header files. In some cases, you can import a header file as a module, which is faster than using `#include` to process it with the preprocessor. We recommend that you use modules in new projects rather than header files as much as possible. For larger existing projects under active development, experiment with converting legacy headers to modules. Base your adoption on whether you get a meaningful reduction in compilation times.

To contrast modules with other ways to import the standard library, see [Compare header units, modules, and precompiled headers](../build/compare-inclusion-methods.md).

Starting with Visual Studio 2022 version 17.5, importing the Standard Library as a module is both standardized and fully implemented in the Microsoft C++ compiler. To learn how to import the Standard Library using modules, see [Import the C++ standard library using modules](tutorial-import-stl-named-module.md).

## Single-partition modules

A single-partition module is a module that consists of a single source file. The module interface and implementation are in the same file.

The following single-partition module example shows a simple module definition in a source file called *`Example.ixx`*. The *`.ixx`* extension is the default extension for module interface files in Visual Studio. If you want to use a different extension, use the [/interface](../build/reference/interface.md) switch to compile it as a module interface. In this example, the interface file contains both the function definition and the declaration. You can also place the definitions in one or more separate module implementation files, as shown in a later example, but this is an example of a single-partition module.

The `export module Example;` statement indicates that this file is the primary interface for a module called `Example`. The **`export`** modifier before `int f()` indicates that this function is visible when another program or module imports `Example`:

```cpp
// Example.ixx
export module Example;

#define ANSWER 42

namespace Example_NS
{
   int f_internal()
   {
     return ANSWER;
   }

   export int f()
   {
     return f_internal();
   }
}
```

The file *`MyProgram.cpp`* uses **`import`** to access the name exported by `Example`. The namespace name `Example_NS` is visible here, but not all of its members because they aren't exported. Also, the macro `ANSWER` isn't visible because macros aren't exported.

```cpp
// MyProgram.cpp
import std;
import Example;

using namespace std;

int main()
{
   cout << "The result of f() is " << Example_NS::f() << endl; // 42
   // int i = Example_NS::f_internal(); // C2039
   // int j = ANSWER; //C2065
}
```

The `import` declaration can appear only at global scope.  A module and the code that consumes it must be compiled with the same compiler options.

## Module grammar

> *`module-name`*:\
> &emsp;*`module-name-qualifier-seq`*<sub>opt</sub> *`identifier`*
>
> *`module-name-qualifier-seq`*:\
> &emsp;*`identifier`* **`.`**\
> &emsp;*`module-name-qualifier-seq`* *`identifier`* **`.`**
>
> *`module-partition`*:\
> &emsp;**`:`** *`module-name`*
>
> *`module-declaration`*:\
> &emsp;**`export`**<sub>opt</sub> **`module`** *`module-name`* *`module-partition`*<sub>opt</sub> *`attribute-specifier-seq`*<sub>opt</sub> **`;`**
>
> *`module-import-declaration`*:\
> &emsp;**`export`**<sub>opt</sub> **`import`** *`module-name`* *`attribute-specifier-seq`*<sub>opt</sub> **`;`**\
> &emsp;**`export`**<sub>opt</sub> **`import`** *`module-partition`* *`attribute-specifier-seq`*<sub>opt</sub> **`;`**\
> &emsp;**`export`**<sub>opt</sub> **`import`** *`header-name`* *`attribute-specifier-seq`*<sub>opt</sub> **`;`**
>

## Implementing modules

A *module interface* exports the module name and all the namespaces, types, functions, and so on, that make up the public interface of the module.\
A *module implementation* defines the things exported by the module.\
In its simplest form, a module can be a single file that combines the module interface and implementation. You can also put the implementation in one or more separate module implementation files, similar to how *`.h`* and *`.cpp`* files do it.

For larger modules, you can split parts of the module into submodules called *partitions*. Each partition consists of a module interface file that exports the module partition name. A partition may also have one or more partition implementation files. The module as a whole has one *primary module interface*, which is the public interface of the module. It can export the partition interfaces, if desired.

A module consists of one or more *module units*. A module unit is a translation unit (a source file) that contains a module declaration. There are several types of module units:

- A *module interface unit* exports a module name or module partition name. A module interface unit has `export module` in its module declaration.
- A *module implementation unit* doesn't export a module name or module partition name. As the name implies, it implements a module.
- A *primary module interface unit* exports the module name. There must be one and only one primary module interface unit in a module.
- A *module partition interface unit* exports a module partition name.
- A *module partition implementation unit* has a module partition name in its module declaration, but no `export` keyword.

The **`export`** keyword is only used in interface files. An implementation file can **`import`** another module, but it can't **`export`** any names. Implementation files can have any extension.

## Modules, namespaces, and argument-dependent lookup

The rules for namespaces in modules are the same as any other code. If a declaration within a namespace is exported, the enclosing namespace (excluding members that aren't explicitly exported in that namespace) is also implicitly exported. If a namespace is explicitly exported, all declarations within that namespace definition are exported.

When the compiler does argument-dependent lookup for overload resolutions in the importing translation unit, it considers functions declared in the same translation unit (including module interfaces) as where the type of the function's arguments are defined.

### Module partitions

A module partition is similar to a module, except:

- It shares ownership of all declarations in the entire module.
- All names exported by partition interface files are imported and exported by the primary interface file.
- A partition's name must begin with the module name followed by a colon (`:`).
- Declarations in any of the partitions are visible within the entire module.
- No special precautions are needed to avoid one-definition-rule (ODR) errors. You can declare a name (function, class, and so on) in one partition and define it in another. 

A partition implementation file begins like this, and is an internal partition from a C++ standards perspective:

```cpp
module Example:part1;
```

A partition interface file begins like this:

```cpp
export module Example:part1;
```

To access declarations in another partition, a partition must import it. But it can only use the partition name, not the module name:

```cpp
module Example:part2;
import :part1;
```

The primary interface unit must import and re-export all of the module's interface partition files, like this:

```cpp
export import :part1;
export import :part2;
```

The primary interface unit can import partition implementation files, but can't export them. Those files aren't allowed to export any names. This restriction enables a module to keep implementation details internal to the module.

## Modules and header files

You can include header files in a module source file by putting an `#include` directive before the module declaration. These files are considered to be in the *global module fragment*. A module can only see the names in the global module fragment that are in the headers that it explicitly includes. The global module fragment only contains symbols that are used.

```cpp
// MyModuleA.cpp

#include "customlib.h"
#include "anotherlib.h"

import std;
import MyModuleB;

//... rest of file
```

You can use a traditional header file to control which modules are imported:

```cpp
// MyProgram.h
#ifdef C_RUNTIME_GLOBALS
import std.compat;
#else
import std;
#endif
```

### Imported header files

Some headers are sufficiently self-contained that they can be brought in using the **`import`** keyword. The main difference between an imported header and an imported module is that any preprocessor definitions in the header are visible in the importing program immediately after the `import` statement.

```cpp
import <vector>;
import "myheader.h";
```

## See also

[Import the C++ standard library using modules](tutorial-import-stl-named-module.md)\
[`module`, `import`, `export`](import-export-module.md)\
[Named modules tutorial](tutorial-named-modules-cpp.md)\
[Compare header units, modules, and precompiled headers](../build/compare-inclusion-methods.md)
