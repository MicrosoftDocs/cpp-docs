---
description: "Learn more about: Commands in a Makefile"
title: "Commands in a Makefile"
ms.date: 09/30/2021
helpviewer_keywords: ["commands, makefiles", "NMAKE program, command modifiers", "command modifiers", "syntax, filename-parts", "filename-parts syntax in NMAKE"]
---
# Commands in a makefile

A description block or inference rule specifies a block of commands to run if the dependency is out-of-date. NMAKE displays each command before running it, unless **`/S`**, **`.SILENT`**, **`!CMDSWITCHES`**, or **`@`** is used. NMAKE looks for a matching inference rule if a description block isn't followed by a commands block.

A commands block contains one or more commands, each on its own line. No blank line can appear between the dependency or rule and the commands block. However, a line containing only spaces or tabs can appear; this line is interpreted as a null command, and no error occurs. Blank lines are permitted between command lines.

A command line begins with one or more spaces or tabs. A backslash (**`\`**) followed by a newline character is interpreted as a space in the command. Use a backslash at the end of a line to continue a command onto the next line. NMAKE interprets the backslash literally if any other character, including a space or tab, follows the backslash.

A command preceded by a semicolon (**`;`**) can appear on a dependency line or inference rule, whether a commands block follows or not:

```makefile
project.obj : project.c project.h ; cl /c project.c
```

## <a name="command-modifiers"> Command modifiers

You can specify one or more command modifiers preceding a command, optionally separated by spaces or tabs. As with commands, modifiers must be indented.

| Modifier | Purpose |
|--|--|
| **`@`**_command_ | Prevents display of the command. Display by commands is not suppressed. By default, NMAKE echoes all executed commands. Use **`/S`** to suppress display for the entire makefile; use **`.SILENT`** to suppress display for part of the makefile. |
| **`-`**\[*number*] *command* | Turns off error checking for *command*. By default, NMAKE halts when a command returns a nonzero exit code. If *-number* is used, NMAKE stops if the exit code exceeds *number*. Spaces or tabs can't appear between the dash and *number.* At least one space or tab must appear between *number* and *command*. Use **`/I`** to turn off error checking for the entire makefile; use **`.IGNORE`** to turn off error checking for part of the makefile. |
| **`!`** *command* | Executes *command* for each dependent file if *command* uses **`$**`** (all dependent files in the dependency) or **`$?`** (all dependent files in the dependency with a later timestamp than the target). |

## <a name="filename-parts-syntax"> Filename-parts syntax

Filename-parts syntax in commands represents components of the first dependent filename (which may be an implied dependent). Filename components are the file's drive, path, base name, and extension as specified, not as it exists on disk. Use **`%s`** to represent the complete filename. Use **`%|`**\[*parts*]**`F`** (a vertical bar character follows the percent symbol) to represent parts of the filename, where *parts* can be zero or more of the following letters, in any order.

| Letter | Description |
|--|--|
| No letter | Complete name (same as **`%s`**) |
| **`d`** | Drive |
| **`p`** | Path |
| **`f`** | File base name |
| **`e`** | File extension |

For example, if the filename is `c:\prog.exe`:

- `%s` becomes `c:\prog.exe`

- `%|F` becomes `c:\prog.exe`

- `%|dF` becomes `c`

- `%|pF` becomes `c:\`

- `%|fF` becomes `prog`

- `%|eF` becomes `exe`

## What do you want to know more about?

[Inline files in a makefile](inline-files-in-a-makefile.md)

## See also

[NMAKE Reference](nmake-reference.md)
