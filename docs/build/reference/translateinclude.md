---
title: "/translateInclude (Translate include directives into import directives)"
description: "Use the /translateInclude compiler option to treat #include directives as import statements when an importable header unit is available."
ms.date: 4/13/2021
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/translateInclude"]
helpviewer_keywords: ["/translateInclude", "Translate include directives into import directives"]
---
# `/translateInclude` (Translate include directives into import directives)

Instructs the compiler to treat `#include` as `import` for those headers that have been prebuilt into a header unit (`.ifc`) file.

## Syntax

> **`/translateInclude`**

## Remarks

The **`/translateInclude`** compiler option requires you enable the [/std:c++latest](std-specify-language-standard-version.md) option. `/translateInclude` is available starting in Visual Studio 2019 version 16.10 Preview 2.

The **`/translateInclude`** option effectively makes the following transformation, where the example `<vector>` has been prebuilt into an importable header unit:

```cpp
#include <vector>
```

The compiler replaces this directive with:

```cpp
import <vector>;
```

In MSVC, available header units are made available by the **`/headerUnit`** option, which maps a header file to its corresponding prebuilt importable header unit. For more information, see [`/headerUnit` (Specify where to find the header unit file (`.ifc`) for the specified header)](headerunit.md).

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

The **`/translateInclude`** option allows the compiler to treat an `#include` as an `import` for header files that have a corresponding compiled header unit file (*`.ifc`*) and that have been specified on the command line via the `/headerUnit` switch.

If an `#include` is encountered that doesn't have a corresponding header unit specified via the `/headerUnit` switch, it is processed by the preprocessor as a normal `#include` directive.

 Here's an example command line that translates the include directives for *`util.h`* and *`app.h`* into imports of the header units instead:

```CMD
cl /IC:\ /translateInclude /headerUnit C:\utils\util.h=C:\util.h.ifc /headerUnit C:\app\app.h=C:\app.h.ifc
```

## To set this compiler option in Visual Studio

To enable `/translateInclude`, set the **Translate Includes to Imports** option in project properties:

1. In the left-hand pane of the project property pages, select **Configuration Properties** > **C/C++** > **General**
1. Change the **Translate Includes to Imports** dropdown to **Yes**
![Project properties dialog set Translate Includes to Imports](../media/vs2019-translate-includes-option.png)


## See also

[`/headerUnit` (Use header unit IFC)](headerunit.md).\
[`/exportHeader` (Create header units)](module-exportheader.md)\
[`/reference` (Use named module IFC)](module-reference.md)
