---
title: "#line directive (C/C++)"
description: "Describes the #line directive, used to set the line number and file name reported by preprocessor macros."
ms.date: "07/06/2020"
f1_keywords: ["#line"]
helpviewer_keywords: ["preprocessor, directives", "line directive (#line)", "#line directive"]
ms.assetid: 585c1dc4-5184-4f01-98f4-80c1909744d7
---
# #line directive (C/C++)

The **#line** directive tells the preprocessor to set the compiler's reported values for the line number and filename to a given line number and filename.

## Syntax

> **`#line`** *digit-sequence* ["*filename*"]

## Remarks

The compiler uses the line number and optional filename to refer to errors that it finds during compilation. The line number usually refers to the current input line, and the filename refers to the current input file. The line number is incremented after each line is processed.

The *digit-sequence* value can be any integer constant within the range from 0 to 2147483647, inclusive. Macro replacement can be used on the preprocessing tokens, but the result must evaluate to the correct syntax. The *filename* can be any combination of characters and must be enclosed in double quotation marks (`" "`). If *filename* is omitted, the previous filename remains unchanged.

You can alter the source line number and filename by writing a **`#line`** directive. The **`#line`** directive sets the value for the line that immediately follows the directive in the source file. The translator uses the line number and filename to determine the values of the predefined macros `__FILE__` and `__LINE__`. You can use these macros to insert self-descriptive error messages into the program text. For more information on these predefined macros, see [Predefined macros](../preprocessor/predefined-macros.md).

The `__FILE__` macro expands to a string whose contents are the filename, surrounded by double quotation marks (`" "`).

If you change the line number and filename, the compiler ignores the previous values and continues processing with the new values. The **#line** directive is typically used by program generators. It's used to cause error messages to refer to the original source file, instead of to the generated program.

## Example

The following examples illustrate **`#line`** and the `__LINE__` and `__FILE__` macros.

In the first example, the line number is set to 10, then to 20, and the filename is changed to *hello.cpp*.

```cpp
// line_directive.cpp
// Compile by using: cl /W4 /EHsc line_directive.cpp
#include <stdio.h>

int main()
{
    printf( "This code is on line %d, in file %s\n", __LINE__, __FILE__ );
#line 10
    printf( "This code is on line %d, in file %s\n", __LINE__, __FILE__ );
#line 20 "hello.cpp"
    printf( "This code is on line %d, in file %s\n", __LINE__, __FILE__ );
    printf( "This code is on line %d, in file %s\n", __LINE__, __FILE__ );
}
```

```Output
This code is on line 7, in file line_directive.cpp
This code is on line 10, in file line_directive.cpp
This code is on line 20, in file hello.cpp
This code is on line 21, in file hello.cpp
```

In this example, the macro `ASSERT` uses the predefined macros `__LINE__` and `__FILE__` to print an error message about the source file if a given assertion isn't true.

```C
#define ASSERT(cond) if( !(cond) )\
{printf( "assertion error line %d, file(%s)\n", \
__LINE__, __FILE__ );}
```

## See also

[Preprocessor directives](../preprocessor/preprocessor-directives.md)
