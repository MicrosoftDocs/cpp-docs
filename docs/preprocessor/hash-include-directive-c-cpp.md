---
description: "Learn more about: #include directive (C/C++)"
title: "#include directive (C/C++)"
ms.date: 01/19/2021
f1_keywords: ["#include"]
helpviewer_keywords: ["preprocessor, directives", "#include directive", "include directive (#include)"]
---
# `#include` directive (C/C++)

Tells the preprocessor to include the contents of a specified file at the point where the directive appears.

## Syntax

> **`#include "`** *path-spec* **`"`**\
> **`#include <`** *path-spec* **`>`**

## Remarks

You can organize constant and macro definitions into *include files* (also known as *header files*) and then use **`#include`** directives to add them to any source file. Include files are also useful for incorporating declarations of external variables and complex data types. The types may be defined and named only once in an include file created for that purpose.

The *path-spec* is a file name that may optionally be preceded by a directory specification. The file name must name an existing file. The syntax of the *path-spec* depends on the operating system on which the program is compiled.

For information about how to reference assemblies in a C++ application that's compiled by using [`/clr`](../build/reference/clr-common-language-runtime-compilation.md), see [`#using` directive](../preprocessor/hash-using-directive-cpp.md).

Both syntax forms cause the **`#include`** directive to be replaced by the entire contents of the specified file. The difference between the two forms is the order of the paths that the preprocessor searches when the path is incompletely specified. The following table shows the difference between the two syntax forms.

| Syntax Form | Action |
|--|--|
| Quoted form | The preprocessor searches for include files in this order:<br/><br/> 1) In the same directory as the file that contains the **`#include`** statement.<br/><br/> 2) In the directories of the currently opened include files, in the reverse order in which they were opened. The search begins in the directory of the parent include file and continues upward through the directories of any grandparent include files.<br/><br/> 3) Along the path that's specified by each **`/I`** compiler option.<br/><br/> 4) Along the paths that are specified by the `INCLUDE` environment variable. |
| Angle-bracket form | The preprocessor searches for include files in this order:<br/><br/> 1) Along the path that's specified by each **`/I`** compiler option.<br/><br/> 2) When compiling occurs on the command line, along the paths that are specified by the `INCLUDE` environment variable. |

The preprocessor stops searching as soon as it finds a file that has the given name. If you enclose a complete, unambiguous path specification for the include file between double quotation marks (`" "`), the preprocessor searches only that path specification and ignores the standard directories.

If the file name that's enclosed in double quotation marks is an incomplete path specification, the preprocessor first searches the *parent* file's directory. A parent file is the file that contains the **`#include`** directive. For example, if you include a file named *file2* in a file named *file1*, *file1* is the parent file.

Include files can be *nested*: An **`#include`** directive can appear in a file that's named by another **`#include`** directive. For example, *file2* could include *file3*. In this case, *file1* would still be the parent of *file2*, but it would be the grandparent of *file3*.

When include files are nested and when compiling occurs on the command line, directory searching begins in the directory of the parent file. Then it proceeds through the directories of any grandparent files. That is, searching begins relative to the directory that contains the source that's currently being processed. If the file isn't found, the search moves to directories that are specified by the [`/I` (Additional include directories)](../build/reference/i-additional-include-directories.md) compiler option. Finally, the directories that are specified by the `INCLUDE` environment variable are searched.

Within the Visual Studio development environment, the `INCLUDE` environment variable is ignored. The values specified in the project properties for include directories are used instead. For more information about how to set the include directories in Visual Studio, see [Include Directories](../build/reference/vcpp-directories-property-page.md#general) and [Additional Include Directories](../build/reference/c-cpp-prop-page.md#additional-include-directories).

This example shows file inclusion by using angle brackets:

```C
#include <stdio.h>
```

The example adds the contents of the file named *`stdio.h`* to the source program. The angle brackets cause the preprocessor to search the directories that are specified by the `INCLUDE` environment variable for *`stdio.h`*, after it searches directories that are specified by the **`/I`** compiler option.

The next example shows file inclusion by using the quoted form:

```C
#include "defs.h"
```

The example adds the contents of the file that's specified by *`defs.h`* to the source program. The quotation marks mean that the preprocessor first searches the directory that contains the parent source file.

Nesting of include files can continue up to 10 levels. When processing of the nested **`#include`** is finished, the preprocessor continues to insert the enclosing parent include file into the original source file.

**Microsoft-specific**

To locate the source files to include, the preprocessor first searches the directories specified by the **`/I`** compiler option. If the **`/I`** option isn't present, or if it fails, the preprocessor uses the `INCLUDE` environment variable to find any include files within angle brackets. The `INCLUDE` environment variable and **`/I`** compiler option can contain multiple paths, separated by semicolons (**`;`**). If more than one directory appears as part of the **`/I`** option or within the `INCLUDE` environment variable, the preprocessor searches them in the order in which they appear.

For example, the command

```cmd
CL /ID:\msvc\include myprog.c
```

causes the preprocessor to search the directory *`D:\msvc\include\`* for include files such as *`stdio.h`*. The commands

```cmd
SET INCLUDE=D:\msvc\include
CL myprog.c
```

have the same effect. If both sets of searches fail, a fatal compiler error is generated.

If the file name is fully specified for an include file that has a path that includes a colon (for example, *`F:\MSVC\SPECIAL\INCL\TEST.H`*), the preprocessor follows the path.

For include files that are specified as `#include "path-spec"`, directory search begins in the directory of the parent file and then proceeds through the directories of any grandparent files. That is, the search begins relative to the directory that contains the source file that's being processed. If there's no grandparent file and the file still isn't found, the search continues as if the file name were enclosed in angle brackets.

**END Microsoft-specific**

## See also

[Preprocessor directives](../preprocessor/preprocessor-directives.md)\
[`/I` (Additional include directories)](../build/reference/i-additional-include-directories.md)
