---
description: "Learn more about: Sample Makefile"
title: "Sample Makefile"
ms.date: 09/30/2021
---
# Sample Makefile

This topic contains a sample makefile.

## Sample

### Code

```makefile
# Sample makefile

!include <win32.mak>

all: simple.exe challeng.exe

.c.obj:
  $(cc) $(cdebug) $(cflags) $(cvars) $*.c

simple.exe: simple.obj
  $(link) $(ldebug) $(conflags) -out:simple.exe simple.obj $(conlibs) lsapi32.lib

challeng.exe: challeng.obj md4c.obj
  $(link) $(ldebug) $(conflags) -out:challeng.exe $** $(conlibs) lsapi32.lib
```

## See also

[Makefile contents and features](contents-of-a-makefile.md)
