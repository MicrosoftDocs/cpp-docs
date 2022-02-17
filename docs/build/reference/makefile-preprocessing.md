---
description: "Learn more about: Makefile Preprocessing"
title: "Makefile preprocessing"
ms.date: 09/30/2021
f1_keywords: ["!UNDEF", "!INCLUDE", "!IFNDEF", "!MESSAGE"]
helpviewer_keywords: ["preprocessing makefiles", "makefiles, preprocessing", "!CMDSWITCHES directive", "!ELSE directive", "!ELSEIF directive", "!ELSEIFDEF directive", "!ELSEIFNDEF directive", "!ENDIF directive", "!ERROR directive", "!IF directive", "!IFDEF directive", "!IFNDEF directive", "!INCLUDE directive", "!MESSAGE directive", "!UNDEF directive", "directives, makefile preprocessing", "preprocessing directives, makefiles", "NMAKE program, expressions", "NMAKE program, preprocessor directives", "makefiles, preprocessing directives", "expressions [C++], makefile preprocessing", "operators [C++], makefile preprocessing", "EXIST operator", "preprocessing NMAKE makefile operators", "NMAKE program, operators", "DEFINED operator", "makefiles, preprocessing operators"]
---
# Makefile preprocessing

You can control the NMAKE session by using preprocessing directives and expressions. Preprocessing instructions can be placed in the makefile or in *`Tools.ini`*. Using directives, you can conditionally process your makefile, display error messages, include other makefiles, undefine a macro, and turn certain options on or off.

## <a name="makefile-preprocessing-directives"> Makefile Preprocessing Directives

Preprocessing directives aren't case-sensitive. The initial exclamation point (**`!`**) must appear at the beginning of the line. Zero or more spaces or tabs can appear after the exclamation point, for indentation.

- **`!CMDSWITCHES`** { **`+`**_option_ \| **`-`**_option_ } ...

   Turns each listed *option* on or off. Spaces or tabs must appear before the **`+`** or **`-`** operator. No spaces can appear between the operator and the [option letters](running-nmake.md#nmake-options). Letters aren't case-sensitive and are specified without a slash (`/`). To turn on some options and turn off others, use separate specifications of **`!CMDSWITCHES`**.

   Only **`/D`**, **`/I`**, **`/N`**, and **`/S`** can be used in a makefile. In *`Tools.ini`*, all options are allowed except **`/F`**, **`/HELP`**, **`/NOLOGO`**, **`/X`**, and **`/?`**. Changes specified in a description block don't take effect until the next description block. This directive updates **`MAKEFLAGS`**; changes are inherited during recursion if **`MAKEFLAGS`** is specified.

- **`!ERROR`** *text*

   Displays *text* in error U1050, then halts NMAKE, even if **`/K`**, **`/I`**, **`.IGNORE`**, **`!CMDSWITCHES`**, or the dash (**`-`**) command modifier is used. Spaces or tabs before *text* are ignored.

- **`!MESSAGE`** *text*

   Displays *text* to standard output. Spaces or tabs before *text* are ignored.

- **`!INCLUDE`** [ **`<`** ] *filename* [ **`>`** ]

   Reads *filename* as a makefile, then continues with the current makefile. NMAKE searches for *filename* first in the specified or current directory, then recursively through directories of any parent makefiles, then, if *filename* is enclosed by angle brackets (**`< >`**), in directories specified by the **`INCLUDE`** macro, which is initially set to the `INCLUDE` environment variable. Useful to pass `.SUFFIXES` settings, `.PRECIOUS`, and inference rules to recursive makefiles.

- **`!IF`** *constant_expression*

   Processes statements between **`!IF`** and the next **`!ELSE`** or **`!ENDIF`** if *constant_expression* evaluates to a nonzero value.

- **`!IFDEF`** *macro_name*

   Processes statements between **`!IFDEF`** and the next **`!ELSE`** or **`!ENDIF`** if *macro_name* is defined. A null macro is considered to be defined.

- **`!IFNDEF`** *macro_name*

   Processes statements between **`!IFNDEF`** and the next **`!ELSE`** or **`!ENDIF`** if *macro_name* isn't defined.

- **`!ELSE`** [ **`IF`** *constant_expression* \| **`IFDEF`** *macro_name* \| **`IFNDEF`** *macro_name* ]

   Processes statements between **`!ELSE`** and the next **`!ENDIF`** if the prior **`!IF`**, **`!IFDEF`**, or **`!IFNDEF`** statement evaluated to zero. The optional keywords give further control of preprocessing.

- **`!ELSEIF`**

   Synonym for **`!ELSE IF`**.

- **`!ELSEIFDEF`**

   Synonym for **`!ELSE IFDEF`**.

- **`!ELSEIFNDEF`**

   Synonym for **`!ELSE IFNDEF`**.

- **`!ENDIF`**

   Marks the end of an **`!IF`**, **`!IFDEF`**, or **`!IFNDEF`** block. Any text after **`!ENDIF`** on the same line is ignored.

- **`!UNDEF`** *macro_name*

   Undefines *macro_name*.

## <a name="expressions-in-makefile-preprocessing"> Expressions in makefile preprocessing

The **`!IF`** or **`!ELSE IF`** *constant_expression* consists of integer constants (in decimal or C-language notation), string constants, or commands. Use parentheses to group expressions. Expressions use C-style signed long integer arithmetic; numbers are in 32-bit two's-complement form in the range -2147483648 to 2147483647.

Expressions can use operators that act on constant values, exit codes from commands, strings, macros, and file-system paths.

## <a name="makefile-preprocessing-operators"> Makefile preprocessing operators

Makefile preprocessing expressions can use operators that act on constant values, exit codes from commands, strings, macros, and file-system paths. To evaluate the expression, the preprocessor first expands macros, and then executes commands, and then does the operations. It evaluates operations in order of explicit grouping in parentheses, and then in order of operator precedence. The result is a constant value.

The **`DEFINED`** operator is a logical operator that acts on a macro name. The expression **`DEFINED( macro_name )`** is true if *macro_name* is defined, even if it doesn't have an assigned value. **`DEFINED`** in combination with **`!IF`** or **`!ELSE IF`** is equivalent to **`!IFDEF`** or **`!ELSE IFDEF`**. However, unlike these directives, **`DEFINED`** can be used in complex expressions.

The **`EXIST`** operator is a logical operator that acts on a file-system path. **`EXIST( path )`** is true if *path* exists. The result from **`EXIST`** can be used in binary expressions. If *path* contains spaces, enclose it in double quotation marks.

To compare two strings, use the equality (**`==`**) operator or the inequality (**`!=`**) operator. Enclose strings in double quotation marks.

Integer constants can use the unary operators for numerical negation (**`-`**), one's complement (**`~`**), and logical negation (**`!`**).

Expressions can use the following operators. The operators of equal precedence are grouped together, and the groups are listed in decreasing order of precedence. Unary operators associate with the operand to the right. Binary operators of equal precedence associate operands from left to right.

| Operator | Description |
|--|--|
| **`DEFINED(`** *macro_name* **`)`** | Produces a logical value for the current definition state of *macro_name*. |
| **`EXIST(`** *path* **`)`** | Produces a logical value for the existence of a file at *path*. |
|  |  |
| **`!`** | Unary logical NOT. |
| **`~`** | Unary one's complement. |
| **`-`** | Unary negation. |
|  |  |
| **`*`** | Multiplication. |
| **`/`** | Division. |
| **`%`** | Modulus (remainder). |
|  |  |
| **`+`** | Addition. |
| **`-`** | Subtraction. |
|  |  |
| **`<<`** | Bitwise shift left. |
| **`>>`** | Bitwise shift right. |
|  |  |
| **`<=`** | Less than or equal. |
| **`>=`** | Greater than or equal. |
| **`<`** | Less than. |
| **`>`** | Greater than. |
|  |  |
| **`==`** | Equality. |
| **`!=`** | Inequality. |
|  |  |
| **`&`** | Bitwise AND. |
| **`^`** | Bitwise XOR. |
| **` | `** | Bitwise OR. |
|  |  |
| **`&&`** | Logical AND. |
|  |  |
| **` || `** | Logical OR. |

> [!NOTE]
> The bitwise XOR operator (**`^`**) is the same as the escape character, and must be escaped (as **`^^`**) when it's used in an expression.

## <a name="executing-a-program-in-preprocessing"> Executing a program in preprocessing

To use a command's exit code during preprocessing, specify the command, with any arguments, within brackets (**`[ ]`**). Any macros are expanded before the command is executed. NMAKE replaces the command specification with the command's exit code, which can be used in an expression to control preprocessing.

### Example

```Makefile
!IF [my_command.exe arg1 arg2] != 0
!MESSAGE my_command.exe failed!
!ENDIF
```

## See also

[NMAKE Reference](nmake-reference.md)
