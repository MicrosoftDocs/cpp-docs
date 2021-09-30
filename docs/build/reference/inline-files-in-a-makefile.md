---
description: "Learn more about: Inline files in a makefile"
title: "Inline files in a makefile"
ms.date: 09/30/2021
helpviewer_keywords: ["inline files [C++], in makefiles", "inline files [C++]", "NMAKE program, inline files", "makefiles, inline files", "files [C++], inline", "inline files, multiple NMAKE", "multiple inline files", "inline files, reusing NMAKE", "reusing inline files", "inline files, creating text", "inline files [C++], specifying NMAKE"]
---
# Inline files in a makefile

An inline file contains text you specify in the makefile. Its name can be used in commands as input (for example, a LINK command file), or it can pass commands to the operating system. The file is created on disk when a command that creates the file is run.

## <a name="specifying-an-inline-file"> Specify an inline file

Specify two angle brackets (**`<<`**) in the command where *filename* is to appear. The angle brackets can't be a macro expansion. The *filename* is optional:

```makefile
<<filename
```

When the command is run, the angle brackets are replaced by *filename*, if specified, or by a unique NMAKE-generated name. If specified, *filename* must follow angle brackets without a space or tab. A path is permitted. No extension is required or assumed. If *filename* is specified, the file is created in the current or specified directory, overwriting any existing file by that name. Otherwise, it's created in the `TMP` directory (or the current directory, if the `TMP` environment variable isn't defined). If a previous *filename* is reused, NMAKE replaces the previous file.

## <a name="creating-inline-file-text"> Create inline file text

Inline files are temporary or permanent.

```makefile
inline_text
.
.
.
<<[KEEP | NOKEEP]
```

Specify your *inline_text* on the first line after the command. Mark the end with double angle brackets (**`<<`**) at the beginning of a separate line, followed by an optional **`KEEP`** or **`NOKEEP`**. The file contains all *inline_text* before the delimiting brackets. The *inline_text* can have macro expansions and substitutions, but not directives or makefile comments. Spaces, tabs, and newline characters are treated literally.

A temporary file exists for the duration of the session and can be reused by other commands. Specify **`KEEP`** after the closing angle brackets to retain the file after the NMAKE session; an unnamed file is preserved on disk with the generated filename. Specify **`NOKEEP`** or nothing for a temporary file. **`KEEP`** and **`NOKEEP`** are not case sensitive.

## <a name="reusing-inline-files"> Reuse inline files

To reuse an inline file, specify `<<filename` where the file is defined and first used, then reuse *filename* without `<<` later in the same or another command. The command to create the inline file must run before all commands that use the file.

## <a name="multiple-inline-files"> Multiple inline files

A command can create more than one inline file:

```makefile
command << <<
inline_text
<<[KEEP | NOKEEP]
inline_text
. . .
inline_text
<<[KEEP | NOKEEP]
```

For each file, specify one or more lines of inline text followed by a closing line containing the delimiter and optional **`KEEP`** or **`NOKEEP`**. Begin the second file's text on the line following the delimiting line for the first file.

## See also

[Commands in a Makefile](commands-in-a-makefile.md)
