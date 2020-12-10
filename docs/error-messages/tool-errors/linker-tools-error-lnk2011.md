---
description: "Learn more about: Linker Tools Error LNK2011"
title: "Linker Tools Error LNK2011"
ms.date: "11/04/2016"
f1_keywords: ["LNK2011"]
helpviewer_keywords: ["LNK2011"]
ms.assetid: 04991ef5-49d5-46c7-8eee-a9d1d3fc541e
---
# Linker Tools Error LNK2011

precompiled object not linked in; image may not run

If you use precompiled headers, LINK requires that all of the object files created with precompiled headers must be linked in. If you have a source file that you use to generate a precompiled header for use with other source files, you now must include the object file created along with the precompiled header.

For example, if you compile a file called STUB.cpp to create a precompiled header for use with other source files, you must link with STUB.obj or you will get this error. In the following command lines, line one is used to create a precompiled header, COMMON.pch, which is used with PROG1.cpp and PROG2.cpp in lines two and three. The file STUB.cpp contains only `#include` lines (the same `#include` lines as in PROG1.cpp and PROG2.cpp) and is used only to generate precompiled headers. In the last line, STUB.obj must be linked in to avoid LNK2011.

```
cl /c /Yccommon.h stub.cpp
cl /c /Yucommon.h prog1.cpp
cl /c /Yucommon.h prog2.cpp
link /out:prog.exe stub.obj prog1.obj prog2.obj
```
