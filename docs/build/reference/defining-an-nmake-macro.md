---
description: "Learn more about: Defining an NMAKE Macro"
title: "Define an NMAKE Macro"
ms.date: 09/30/2021
helpviewer_keywords: ["macros, NMAKE", "defining NMAKE macros", "NMAKE macros, defining", "defining macros", "NMAKE program, defining macros", "NMAKE program, undefined macros", "Null macros in NMAKE", "macros, null and undefined", "undefined macros and NMAKE", "NMAKE program, null macros", "special characters, in NMAKE macros"]
---
# Define an NMAKE macro

An NMAKE macro is defined by using this syntax:

```makefile
macro_name=string
```

The *macro_name* is a case-sensitive combination of letters, digits, and underscores (**`_`**) up to 1,024 characters long. The *macro_name* can contain an invoked macro. If *macro_name* consists entirely of an invoked macro, the macro being invoked can't be null or undefined.

The *string* can be any sequence of zero or more characters. A *null* string contains zero characters or only spaces or tabs. The *string* can contain a macro invocation.

## <a name="special-characters-in-macros"> Special characters in macros

A number sign (**`#`**) after a definition specifies a comment. To specify a literal number sign in a macro, use a caret (**`^`**) to escape it, as in **`^#`**.

A dollar sign (**`$`**) specifies a macro invocation. To specify a literal `$`, use **`$$`**.

To extend a definition to a new line, end the line with a backslash (**`\`**). When the macro is invoked, the backslash and following newline character is replaced with a space. To specify a literal backslash at the end of the line, precede it with a caret (**`^`**) escape, or follow it with a comment specifier (**`#`**).

To specify a literal newline character, end the line with a caret (**`^`**) escape, as in this example:

```makefile
CMDS = cls^
dir
```

## <a name="null-and-undefined-macros"> Null and undefined macros

Both null and undefined macros expand to null strings, but a macro defined as a null string is considered defined in preprocessing expressions. To define a macro as a null string, specify no characters except spaces or tabs after the equal sign (**`=`**) in a command line or command file, and enclose the null string or definition in double quotation marks (**`" "`**). To undefine a macro, use **`!UNDEF`**. For more information, see [Makefile preprocessing directives](makefile-preprocessing.md#makefile-preprocessing-directives).

## <a name="where-to-define-macros"> Where to define macros

Define macros in a command line, command file, makefile, or the *`Tools.ini`* file.

In a makefile or the *`Tools.ini`* file, each macro definition must appear on a separate line and can't start with a space or tab. Spaces or tabs around the equal sign are ignored. All *string* characters are literal, including surrounding quotation marks and embedded spaces.

In a command line or command file, spaces and tabs delimit arguments and can't surround the equal sign. If *string* has embedded spaces or tabs, enclose either the string itself or the entire macro in double quotation marks (**`" "`**).

## <a name="precedence-in-macro-definitions"> Precedence in macro definitions

If a macro has multiple definitions, NMAKE uses the highest-precedence definition. The following list shows the order of precedence, from highest to lowest:

1. A macro defined on the command line

1. A macro defined in a makefile or include file

1. An inherited environment-variable macro

1. A macro defined in the *`Tools.ini`* file

1. A predefined macro, such as [`CC`](special-nmake-macros.md#command-macros-and-options-macros) and [`AS`](special-nmake-macros.md#command-macros-and-options-macros)

Use **`/E`** to cause macros inherited from environment variables to override makefile macros with the same name. Use **`!UNDEF`** to override a command line.

## See also

[Macros and NMAKE](macros-and-nmake.md)
