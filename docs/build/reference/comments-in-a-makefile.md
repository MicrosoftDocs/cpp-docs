---
description: "Learn more about: Comments in a Makefile"
title: "Comments in a Makefile"
ms.date: "11/04/2016"
helpviewer_keywords: ["makefiles, comments"]
ms.assetid: 76fd9e3d-5966-47f4-a091-c9e80b232b49
---
# Comments in a Makefile

Precede a comment with a number sign (#). NMAKE ignores text from the number sign to the next newline character. Examples:

```
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

To specify a literal number sign, precede it with a caret (**^**), as follows:

```
DEF = ^#define  #Macro for a C preprocessing directive
```

## See also

[Contents of a Makefile](contents-of-a-makefile.md)
