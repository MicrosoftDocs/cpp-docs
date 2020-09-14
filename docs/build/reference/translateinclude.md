---
title: "/translateInclude (Translate include directives into import directives)"
description: "Use the /translateInclude compiler option to translate #include directives for an importable header-name into an import header-name directive."
ms.date: 09/13/2020
f1_keywords: ["/translateInclude"]
helpviewer_keywords: ["/translateInclude", "Translate include directives into import directives"]
---
# `/translateInclude` (Translate include directives into import directives)

Tells the compiler to translate `#include` directives for an importable header-name into an `import header-name;` directive, rather than use textual inclusion.

## Syntax

> **`/translateInclude`**

## Remarks

The **`/translateInclude`** compiler option requires you enable experimental modules support by use of the [`/experimental:module`](experimental-module.md) compiler option, along with the [/std:c++latest](std-specify-language-standard-version.md) option. This option is available starting in Visual Studio 2019 version 16.8.

The **`/translateInclude`** option effectively makes the following transformation, where the example `<vector>` is an importable header unit:

```cpp
#include <vector>
```

The compiler replaces this directive with:

```cpp
import <vector> ;
```

In MSVC an importable header unit is one named by a **`/headerUnit`** reference. For more information, see [`/headerUnit` (Use header unit IFC)](headerunit.md).

### Examples

Given a project that references two header files and their header units, listed in this table:

| Header file | IFC file |
|--|--|
| *`C:\utils\util.h`* | *`C:\util.h.ifc`* |
| *`C:\app\app.h`* | *`C:\app.h.ifc`* |

And a source *`.cpp`* file that includes the headers,

```cpp
#include "utils/util.h"
#include "app/app.h"

int main() { }
```

The **`/translateInclude`** option allows the compiler to import the header units instead of compile the headers again. Here's an example command line that translates the include directives for *`util.h`* and *`app.h`* into imports of the header units instead:

```CMD
cl /IC:\ /experimental:module /translateInclude /headerUnit C:\utils\util.h=C:\util.h.ifc /headerUnit C:\app\app.h=C:\app.h.ifc
```

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to add the *`/translateInclude`* option. Then, choose **OK** or **Apply** to save your changes.

## See also

[`/experimental:module` (Enable module support)](experimental-module.md)\
[`/headerUnit` (Use header unit IFC)](headerunit.md).\
[`/module:exportHeader` (Create header units)](module-exportheader.md)\
[`/module:reference` (Use named module IFC)](module-reference.md)
