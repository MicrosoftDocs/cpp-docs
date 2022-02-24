---
description: "Learn more about: Using an NMAKE macro"
title: "Use an NMAKE macro"
ms.date: 09/30/2021
helpviewer_keywords: ["macros, NMAKE", "NMAKE macros, using", "NMAKE program, macro substitution", "substitution macros in NMAKE", "NMAKE functions", "functions, NMAKE"]
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

Macro substitution is case-sensitive and is literal; *string1* and *string2* can't invoke macros. Substitution doesn't modify the original definition. You can replace text in any predefined macro except [`$$@`](special-nmake-macros.md#filename-macros).

No spaces or tabs precede the colon (**`:`**); any spaces or tabs after the colon are interpreted as literal. If *string2* is null, all occurrences of *string1* are deleted from the macro's definition string.

::: moniker range=">=msvc-170"

## <a name="functions"> Macro functions

NMAKE provides a set of functions that can be used to modify strings, lists of items and file paths. These functions are available in NMAKE starting in Visual Studio 2022.

### <a name="functions-syntax"> Function syntax

Functions use the following syntax:

```makefile
$(function_name arg0,arg1,arg2...)
```

Arguments to a function can be any string and may include nested macro invocations. Except in special cases, arguments can't be null.

Any extra whitespace between the function name and the argument list is ignored. If the first argument requires leading whitespace, then use a macro that contains the needed whitespace:

```makefile
SINGLESPACE=$(subst ',,' ') # Use "subst" since a normal assignment trims trailing whitespace.
$(subst $(SINGLESPACE)an,irec,red ant) # Evaluates to "redirect"
```

Commas within an argument list are always considered argument separators and can't be escaped. If any argument requires a literal comma, use a macro that contains a comma instead:

```makefile
COMMA=,
INPUT=a, b
$(subst $(COMMA) , and ,$(INPUT)) # Evaluates to "a and b"
```

### <a name="function-list-syntax"> List syntax

Some functions support a whitespace-separated list of items. Extra whitespace is ignored at the beginning of the list, the end of the list, or between each item. Lists produced by a function use a single space between each item as a separator, and don't have leading or trailing whitespace.

For example, the simplest list function is `strip`, which takes a single list argument and produces a list with the exact same items (but with the whitespace cleaned as above):

```makefile
$(strip a   b   c d    ) # Evaluates to "a b c d"
```

### <a name="function-pattern-syntax"> Pattern syntax

Some functions support using a *pattern*. A pattern is a string that contains a single wildcard that can match any number of characters. The first `%` in a pattern is the wildcard, and any later `%` characters are treated as literals. A `%` anywhere before the actual wildcard can be escaped by using `\` (that is, `\%` is treated as a literal `%`). Any `\` that would escape the wildcard can be escaped with another `\` (so `\\%` is treated as a literal `\` followed by the wildcard). To be considered a match, all of the input characters must be matched by the pattern; partial matches aren't supported.

Patterns can be demonstrated using the `filter` function, which only keeps items that match the pattern:

```makefile
$(filter abc,abc) # Evaluates to "abc" - exactly matches
$(filter bc,abc) # Evaluates to "" - pattern "bc" only matches part of the item "abc"
$(filter %ef,abcdef) # Evaluates to "abcdef" - wildcard matches "abcd"
$(filter a%f,abcdef) # Evaluates to "abcdef" - wildcard matches "bcde"
$(filter %abc,abc) # Evaluates to "abc" - wildcard doesn't need to match any characters
$(filter a%c%d,abcd abc%d) # Evaluates to "abc%d" - only the first `%` is a wildcard, the rest are literals
$(filter a\%b%d,a%bcd) # Evaluates to "a%bcd" - `%` before the wildcard must be escaped with `\`
$(filter a\\%cd,a\bcd) # Evaluates to "a\bcd" - a `\` that would escape the wildcard must be escaped with another `\`
$(filter a%c\\%d,abc\\%d) # Evaluates to "abc\\%d" - any `\` after the wildcard isn't treated as an escape
$(filter \\a%f,\\abcdef) # Evaluates to "\\abcdef" - any `\\` that isn't directly before the wildcard isn't treated as an escape
```

### <a name="functions-by-category"> Functions by category

| Function | Purpose | Supported |
|--|--|--|
| **Text functions** | **Purpose** | **Supported** |
| &emsp;[`findstring`, `findstringi`](nmake-function-findstring.md) | Checks if the input contains a string. | VS 2022 17.0 |
| &emsp;[`lowercase`](nmake-function-lowercase.md) | Converts a string to lowercase. | VS 2022 17.2 |
| &emsp;[`subst`, `substi`](nmake-function-subst.md) | Replaces all instances of one string with another. | VS 2022 17.0 |
| &emsp;[`uppercase`](nmake-function-uppercase.md) | Converts a string to uppercase. | VS 2022 17.2 |
| **List functions** | **Purpose** | **Supported** |
| &emsp;[`filter`, `filteri`](nmake-function-filter.md) | Keeps items in a list that match at least one pattern. | VS 2022 17.0 |
| &emsp;[`filterout`, `filterouti`](nmake-function-filterout.md) | Keeps items in a list that don't match any patterns. | VS 2022 17.0 |
| &emsp;[`patsubst`, `patsubsti`](nmake-function-patsubst.md) | Transforms each item that matches a pattern, items that don't match are left as-is. | VS 2022 17.1 |
| &emsp;[`strip`](nmake-function-strip.md) | Cleans the whitespace in and around a list of items. | VS 2022 17.0 |
| **File path functions** | **Purpose** | **Supported** |
| &emsp;[`abspath`](nmake-function-abspath.md) | Gets the absolute path for each item in a list. | VS 2022 17.1 |
| &emsp;[`basename`](nmake-function-basename.md) | Gets the base name for each item in a list. | VS 2022 17.1 |

::: moniker-end

## See also

[Macros and NMAKE](macros-and-nmake.md)
