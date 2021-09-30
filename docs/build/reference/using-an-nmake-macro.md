---
description: "Learn more about: Using an NMAKE macro"
title: "Use an NMAKE macro"
ms.date: 09/30/2021
helpviewer_keywords: ["macros, NMAKE", "NMAKE macros, using", "NMAKE program, macro substitution", "substitution macros in NMAKE"]
---
# Use an NMAKE macro

To use a macro, enclose its name in parentheses preceded by a dollar sign (**`$`**) as follows:

```makefile
$(macro_name)
```

No spaces are allowed. The parentheses are optional if *macro_name* is a single character. The definition string replaces `$(macro_name)`; an undefined macro is replaced by a null string.

## <a name="macro-substitution"> Macro substitution

When *macro_name* is invoked, each occurrence of *string1* in its definition string is replaced by *string2*.

```makefile
$(macro_name:string1=string2)
```

Macro substitution is case sensitive and is literal; *string1* and *string2* can't invoke macros. Substitution doesn't modify the original definition. You can replace text in any predefined macro except [`$$@`](special-nmake-macros.md#filename-macros).

No spaces or tabs precede the colon (**`:`**); any spaces or tabs after the colon are interpreted as literal. If *string2* is null, all occurrences of *string1* are deleted from the macro's definition string.

## See also

[Macros and NMAKE](macros-and-nmake.md)
