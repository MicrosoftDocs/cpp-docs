---
title: "module, import, export"
ms.date: 02/14/2022
f1_keywords: ["module_cpp", "import_cpp", "export_cpp"]
helpviewer_keywords: ["modules [C++]", "modules [C++], import", "modules [C++], export"]
description: Use import and export declarations to access and to publish types and functions defined in the specified module.
---
# `module`, `import`, `export`

The **`module`**, **`import`**, and **`export`** declarations are available in C++20 and require the [`/experimental:module`](../build/reference/experimental-module.md) compiler switch along with [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later (such as **`/std:c++latest`**). For more information, see [Overview of modules in C++](modules-cpp.md).

## `module`

Place a **`module`** declaration at the beginning of a module implementation file to specify that the file contents belong to the named module.

```cpp
module ModuleA;
```

## `export`

Use an **`export module`** declaration for the module's primary interface file, which must have extension *`.ixx`*:

```cpp
export module ModuleA;
```

In an interface file, use the **`export`** modifier on names that are intended to be part of the public interface:

```cpp
// ModuleA.ixx

export module ModuleA;

namespace ModuleA_NS
{
   export int f();
   export double d();
   double internal_f(); // not exported
}
```

Non-exported names aren't visible to code that imports the module:

```cpp
//MyProgram.cpp

import ModuleA;

int main() {
  ModuleA_NS::f(); // OK
  ModuleA_NS::d(); // OK
  ModuleA_NS::internal_f(); // Ill-formed: error C2065: 'internal_f': undeclared identifier
}
```

The **`export`** keyword may not appear in a module implementation file. When **`export`** is applied to a namespace name, all names in the namespace are exported.

## `import`

Use an **`import`** declaration to make a module's names visible in your program. The `import` declaration must appear after the `module` declaration and after any `#include` directives, but before any declarations in the file.

```cpp
module ModuleA;

#include "custom-lib.h"
import std.core;
import std.regex;
import ModuleB;

// begin declarations here:
template <class T>
class Baz
{...};
```

## Remarks

Both **`import`** and **`module`** are treated as keywords only when they appear at the start of a logical line:

```cpp
// OK:
module ;
module module-name
import :
import <
import "
import module-name
export module ;
export module module-name
export import :
export import <
export import "
export import module-name

// Error:
int i; module ;
```

**Microsoft Specific**

In Microsoft C++, the tokens **`import`** and **`module`** are always identifiers and never keywords when they're used as arguments to a macro.

### Example

```cpp
#define foo(...) __VA_ARGS__
foo(
import // Always an identifier, never a keyword
)
```

**End Microsoft Specific**

## See Also

[Overview of modules in C++](modules-cpp.md)
