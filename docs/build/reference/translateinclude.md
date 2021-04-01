---
title: "/translateInclude (Translate include directives into import directives)"
description: "Use the /translateInclude compiler option to treat #include directives as import statements when an importable header unit is available."
ms.date: 4/13/2021
f1_keywords: ["/translateInclude"]
helpviewer_keywords: ["/translateInclude", "Translate include directives into import directives"]
---
# `/translateInclude` (Translate include directives into import directives)

Instructs the compiler to treat `#include` as `import` for headers that have been prebuilt into a header unit (`.ifc`) file. 

## Syntax

> **`/translateInclude`**

## Remarks

The **`/translateInclude`** compiler option requires you enable the [/std:c++latest](std-specify-language-standard-version.md) option. `/translateInclude` is available starting in Visual Studio 2019 version 16.10 Preview 2.

The **`/translateInclude`** option effectively makes the following transformation, where the example `<vector>` is an importable header unit:

```cpp
#include <vector>
```

The compiler replaces this directive with:

```cpp
import <vector>;
```

In MSVC, available header units are made available by the **`/headerUnit`** option, which maps a header file to its importable header unit. For more information, see [`/headerUnit` (Use header unit IFC)](headerunit.md).

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

The **`/translateInclude`** option allows the compiler to import the header units instead of compiling the headers again. Here's an example command line that translates the include directives for *`util.h`* and *`app.h`* into imports of the header units instead:

```CMD
cl /IC:\ /translateInclude /headerUnit C:\utils\util.h=C:\util.h.ifc /headerUnit C:\app\app.h=C:\app.h.ifc
```

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to add the *`/translateInclude`* option. Then, choose **OK** or **Apply** to save your changes.

## See also

[`/headerUnit` (Use header unit IFC)](headerunit.md).\
[`/exportHeader` (Create header units)](module-exportheader.md)\
[`/reference` (Use named module IFC)](module-reference.md)
