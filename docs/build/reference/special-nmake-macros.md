---
description: "Learn more about: Special NMAKE macros"
title: "Special NMAKE macros"
ms.date: 09/30/2021
helpviewer_keywords: ["special NMAKE macros", "macros, NMAKE", "NMAKE macros, special", "NMAKE program, environment variable macros", "environment variables, macros in NMAKE", "macros, environment-variable", "options macros", "command macros in NMAKE", "macros, options macros", "macros, command macros", "NMAKE program, recursion macros", "recursion macros", "macros, recursion", "filename macros in NMAKE", "NMAKE program, filename macros"]
no-loc: [AS, AFLAGS, CC, CFLAGS, CPP, CPPFLAGS, CXX, CXXFLAGS, RC, RFLAGS, ias, ml, ml64, cl, rc]
---
# Special NMAKE macros

NMAKE provides several special macros to represent various filenames and commands. One use for some of these macros is in the predefined inference rules. Like all macros, the macros provided by NMAKE are case sensitive.

## <a name="filename-macros"> Filename Macros

Filename macros are predefined as filenames specified in the dependency (not full filename specifications on disk). These macros don't need to be enclosed in parentheses when invoked; specify only a **`$`** as shown.

| Macro | Meaning |
|--|--|
| **`$@`** | Current target's full name (path, base name, extension), as currently specified. |
| **`$$@`** | Current target's full name (path, base name, extension), as currently specified. Valid only as a dependent in a dependency. |
| **`$*`** | Current target's path and base name minus file extension. |
| **`$**`** | All dependents of the current target. |
| **`$?`** | All dependents with a later timestamp than the current target. |
| **`$<`** | Dependent file with a later timestamp than the current target. Valid only in commands in inference rules. |

To specify part of a predefined filename macro, append a macro modifier and enclose the modified macro in parentheses.

| Modifier | Resulting filename part |
|--|--|
| **`D`** | Drive plus directory |
| **`B`** | Base name |
| **`F`** | Base name plus extension |
| **`R`** | Drive plus directory plus base name |

## <a name="recursion-macros"> Recursion macros

Use recursion macros to call NMAKE recursively. Recursive sessions inherit command-line and environment-variable macros and *`Tools.ini`* information. They don't inherit makefile-defined inference rules or `.SUFFIXES` and `.PRECIOUS` specifications. There are three ways to pass macros to a recursive NMAKE session:

- Set an environment variable with a `SET` command before the recursive call.
- Define a macro in the command for the recursive call.
- Or, define a macro in *`Tools.ini`*.

| Macro | Definition |
|--|--|
| **`MAKE`** | Command used originally to invoke NMAKE.<br /><br /> The `$(MAKE)` macro gives the full path to *`nmake.exe`*. |
| **`MAKEDIR`** | Current directory when NMAKE was invoked. |
| **`MAKEFLAGS`** | Options currently in effect. Use as `/$(MAKEFLAGS)`. The **`/F`** option isn't included. |

## <a name="command-macros-and-options-macros"> Command macros and options macros

Command macros are predefined for Microsoft products. Options macros represent options to these products and are undefined by default. Both are used in predefined inference rules and can be used in description blocks or user-defined inference rules. Command macros can be redefined to represent part or all of a command line, including options. Options macros generate a null string if left undefined.

| Tool | Command macro | Defined as | Options macro |
|--|--|--|--|
| Macro Assembler | **`AS`** | `ml` or `ml64` | **`AFLAGS`** |
| C Compiler | **`CC`** | `cl` | **`CFLAGS`** |
| C++ Compiler | **`CPP`** | `cl` | **`CPPFLAGS`** |
| C++ Compiler | **`CXX`** | `cl` | **`CXXFLAGS`** |
| Resource Compiler | **`RC`** | `rc` | **`RFLAGS`** |

## <a name="environment-variable-macros"> Environment-variable macros

NMAKE inherits macro definitions for environment variables that exist before the start of the session. If a variable was set in the operating-system environment, it is available as an NMAKE macro. The inherited names are converted to uppercase. Inheritance occurs before preprocessing. Use the /E option to cause macros inherited from environment variables to override any macros with the same name in the makefile.

Environment-variable macros can be redefined in the session, and this changes the corresponding environment variable. You can also change environment variables with the SET command. Using the SET command to change an environment variable in a session does not change the corresponding macro, however.

For example:

```makefile
PATH=$(PATH);\nonesuch

all:
    echo %%PATH%%
```

In this example, changing `PATH` changes the corresponding environment variable `PATH`; it appends `\nonesuch` to your path.

If an environment variable is defined as a string that would be syntactically incorrect in a makefile, no macro is created and no warning is generated. If a variable's value contains a dollar sign ($), NMAKE interprets it as the beginning of a macro invocation. Using the macro can cause unexpected behavior.

## See also

[Macros and NMAKE](macros-and-nmake.md)
