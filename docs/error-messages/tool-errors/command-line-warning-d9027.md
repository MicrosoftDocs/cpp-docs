---
title: "Command-Line Warning D9027 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["D9027"]
dev_langs: ["C++"]
helpviewer_keywords: ["D9027"]
ms.assetid: 2a29edc5-5649-48f2-9058-2057c747284c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Command-Line Warning D9027

source file '\<filename>' ignored

CL.exe ignored the input source file.

This warning can be caused by a space between the /Fo option and an output filename on a command line with the /c option. For example:

```
cl /c /Fo output.obj input.c
```

Because there is a space between /Fo and `output.obj`, CL.exe takes `output.obj` as the name of the input file. To fix the problem, remove the space:

```
cl /c /Fooutput.obj input.c
```