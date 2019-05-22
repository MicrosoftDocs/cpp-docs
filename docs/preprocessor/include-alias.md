---
title: "include_alias"
ms.date: "12/16/2018"
f1_keywords: ["vc-pragma.include_alias", "include_alias_CPP"]
helpviewer_keywords: ["pragmas, include_alias", "include_alias pragma"]
ms.assetid: 3256d589-12b3-4af0-a586-199e96eabacc
---
# include_alias

Specifies that when *alias_filename* is found in a `#include` directive, the compiler substitutes *actual_filename* in its place.

## Syntax

> #pragma include_alias("*alias_filename*", "*actual_filename*")
> #pragma include_alias(\<*alias_filename*>, \<*actual_filename*>)

## Remarks

The **include_alias** pragma directive allows you to substitute files that have different names or paths for the file names included by source files. For example, some file systems allow longer header filenames than the 8.3 FAT file system limit. The compiler cannot simply truncate the longer names to 8.3, because the first eight characters of the longer header filenames may not be unique. Whenever the compiler encounters the *alias_filename* string, it substitutes *actual_filename*, and looks for the header file *actual_filename* instead. This pragma must appear before the corresponding `#include` directives. For example:

```cpp
// First eight characters of these two files not unique.
#pragma include_alias( "AppleSystemHeaderQuickdraw.h", "quickdra.h" )
#pragma include_alias( "AppleSystemHeaderFruit.h", "fruit.h" )

#pragma include_alias( "GraphicsMenu.h", "gramenu.h" )

#include "AppleSystemHeaderQuickdraw.h"
#include "AppleSystemHeaderFruit.h"
#include "GraphicsMenu.h"
```

The alias being searched for must match the specification exactly, in case as well as in spelling and in use of double quotation marks or angle brackets. The **include_alias** pragma performs simple string matching on the filenames; no other filename validation is performed. For example, given the following directives,

```cpp
#pragma include_alias("mymath.h", "math.h")
#include "./mymath.h"
#include "sys/mymath.h"
```

no aliasing (substitution) is performed, since the header file strings do not match exactly. Also, header filenames used as arguments to the `/Yu` and `/Yc` compiler options, or the `hdrstop` pragma, are not substituted. For example, if your source file contains the following directive,

```cpp
#include <AppleSystemHeaderStop.h>
```

the corresponding compiler option should be

> /YcAppleSystemHeaderStop.h

You can use the **include_alias** pragma to map any header filename to another. For example:

```cpp
#pragma include_alias( "api.h", "c:\version1.0\api.h" )
#pragma include_alias( <stdio.h>, <newstdio.h> )
#include "api.h"
#include <stdio.h>
```

Do not mix filenames enclosed in double quotation marks with filenames enclosed in angle brackets. For example, given the above two `#pragma include_alias` directives, the compiler performs no substitution on the following `#include` directives:

```cpp
#include <api.h>
#include "stdio.h"
```

Furthermore, the following directive generates an error:

```cpp
#pragma include_alias(<header.h>, "header.h")  // Error
```

Note that the filename reported in error messages, or as the value of the predefined `__FILE__` macro, is the name of the file after the substitution has been performed. For example, see the output after the following directives:

```cpp
#pragma include_alias( "VERYLONGFILENAME.H", "myfile.h" )
#include "VERYLONGFILENAME.H"
```

An error in VERYLONGFILENAME.H produces the following error message:

```Output
myfile.h(15) : error C2059 : syntax error
```

Also note that transitivity is not supported. Given the following directives,

```cpp
#pragma include_alias( "one.h", "two.h" )
#pragma include_alias( "two.h", "three.h" )
#include "one.h"
```

the compiler searches for the file two.h rather than three.h.

## See also

[Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
