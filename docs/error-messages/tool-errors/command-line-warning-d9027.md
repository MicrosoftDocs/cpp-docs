---
title: "Command-Line Warning D9027"
description: "Learn more about: Command-Line Warning D9027"
ms.date: 11/04/2016
f1_keywords: ["D9027"]
helpviewer_keywords: ["D9027"]
---
# Command-Line Warning D9027

source file '\<filename>' ignored

CL.exe ignored the input source file.

This warning can be caused by a space between the /Fo option and an output filename on a command line with the /c option. For example:

```cmd
cl /c /Fo output.obj input.c
```

Because there is a space between /Fo and `output.obj`, CL.exe takes `output.obj` as the name of the input file. To fix the problem, remove the space:

```cmd
cl /c /Fooutput.obj input.c
```
