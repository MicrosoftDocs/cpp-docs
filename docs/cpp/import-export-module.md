---
title: "module, import, export"
ms.date: "12/12/2019"
f1_keywords: ["module_cpp", "import_cpp", "export_cpp"]
helpviewer_keywords: ["modules [C++]", "modules [C++], import", "modules [C++], export"]
description: Use the import and export statements to access and to publish types and functions defined in the specified module.
---

# module, import, export

The **module**, **import**, and **export** keywords are available in C++20 and require the [/experimental:module](../build/reference/experimental-module.md) compiler switch along with [/std:c++latest](../build/reference/std-specify-language-standard-version.md). For more information, see [Overview of modules in C++](modules-cpp.md).

## module

Use the **module** statement at the beginning of a module implementation file to specify that the file contents belong to the named module.

```cpp
module ModuleA;
```

## export

Use the **export module** statement for the module's primary interface file, which must have extension **.ixx**:

```cpp
export module ModuleA;
```

In an interface file, use the **export** modifier on names that are intended to be part of the public interface:

```cpp
// ModuleA.ixx

export module ModuleA;

namespace Bar
{
   export int f();
   export double d();
   double internal_f(); // not exported
}
```

Non-exported names are not visible to code that imports the module:

```cpp
//MyProgram.cpp

import module ModuleA;

void main() {
  Bar::f(); // OK
  Bar::d(); // OK
  Bar::internal_f(); // Ill-formed: error C2065: 'internal_f': undeclared identifier
}
```

The **export** keyword may not appear in a module implementation file. When the **export** modifier is applied to a namespace name, all names in the namespace are exported.

## import

Use the **import** statement to make a module's names visible in your program. The import statement must appear after the module statement and after any #include directives, but before any declarations in the file.

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

Both **import** and **module** are contextual keywords. They are treated as keywords only when they appear on one of these lines:

```cpp
module ;
module <identifier>
import :
import <
import "
import <identifier>
export module ;
export module <identifier>
export import :
export import <
export import "
export import <identifier>
```

**Microsoft Specific**

In Microsoft C++, the tokens **import** and **module** are always identifiers and never keywords when they are used as arguments to a macro.

### Example

```cpp
#define foo(…) __VA_ARGS__
foo(
import // Always an identifier, never a keyword
)
```

**End Microsoft Specific**

## See Also

[Overview of modules in C++](modules-cpp.md)
