---
description: "Learn more about: Sample Makefile"
title: "Sample Makefile"
ms.date: "11/04/2016"
ms.assetid: 8343ce71-5556-4ae0-8d1e-7efd82673070
---
# Sample Makefile

This topic contains a sample makefile.

## Sample

### Code

```
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

[Contents of a Makefile](contents-of-a-makefile.md)
