---
description: "Learn more about: NMAKE makefile contents and features"
title: "NMAKE makefile contents and features"
ms.date: 09/30/2021
helpviewer_keywords: ["makefiles", "makefiles, contents", "NMAKE program, special characters", "makefiles, special characters", "special characters, in NMAKE macros", "macros, special characters", "NMAKE program, long filenames", "makefiles, comments", "NMAKE program, wildcards", "wildcards, expanding"]
---
# NMAKE makefile contents and features

A makefile contains:

- [Description blocks](description-blocks.md)

- [Commands](commands-in-a-makefile.md)

- [Macros](macros-and-nmake.md)

- [Inference rules](inference-rules.md)

- [Dot directives](dot-directives.md)

- [Preprocessing directives](makefile-preprocessing.md)

For a sample, see [Sample makefile](sample-makefile.md).

NMAKE supports other features, such as wildcards, long filenames, comments, and escapes for special characters.

## <a name="wildcards-and-nmake"> Wildcards and NMAKE

NMAKE expands filename wildcards (**`*`** and **`?`**) in dependency lines. A wildcard specified in a command is passed to the command; NMAKE doesn't expand it.

## <a name="long-filenames-in-a-makefile"> Long filenames in a makefile

Enclose long filenames in double quotation marks, as follows:

```makefile
all : "VeryLongFileName.exe"
```

## <a name="comments-in-a-makefile"> Comments in a makefile

Precede a comment with a number sign (**`#`**). NMAKE ignores text from the number sign to the next newline character.

Examples:

```makefile
# Comment on line by itself
OPTIONS = /MAP  # Comment on macro definition line

all.exe : one.obj two.obj  # Comment on dependency line
    link one.obj two.obj
# Comment in commands block
#   copy *.obj \objects  # Command turned into comment
    copy one.exe \release

.obj.exe:  # Comment on inference rule line
    link $<

my.exe : my.obj ; link my.obj  # Err: cannot comment this
# Error: # must be the first character
.obj.exe: ; link $<  # Error: cannot comment this
```

To specify a literal number sign, precede it with a caret (**`^`**), as follows:

```makefile
DEF = ^#define  #Macro for a C preprocessing directive
```

## <a name="special-characters-in-a-makefile"> Special characters in a makefile

To use an NMAKE special character as a literal character, place a caret (**`^`**) in front of it as an escape. NMAKE ignores carets that precede other characters. The special characters are:

`:  ;  #  (  )  $  ^  \  {  }  !  @  —`

A caret (**`^`**) within a quoted string is treated as a literal caret character. A caret at the end of a line inserts a literal newline character in a string or macro.

In macros, a backslash (**`\`**) followed by a newline character is replaced by a space.

In commands, a percent symbol (**`%`**) is a file specifier. To represent `%` literally in a command, specify a double percent sign (**`%%`**) in place of a single one. In other situations, NMAKE interprets a single `%` literally, but it always interprets a double `%%` as a single `%`. Therefore, to represent a literal `%%`, specify either three percent signs, `%%%`, or four percent signs, `%%%%`.

To use the dollar sign (**`$`**) as a literal character in a command, specify two dollar signs (**`$$`**). This method can also be used in other situations where `^$` works.

## See also

[NMAKE Reference](nmake-reference.md)
