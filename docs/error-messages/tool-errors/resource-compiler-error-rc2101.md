---
description: "Learn more about: Resource Compiler Error RC2101"
title: "Resource Compiler Error RC2101"
ms.date: "11/04/2016"
f1_keywords: ["RC2101"]
helpviewer_keywords: ["RC2101"]
ms.assetid: 580f9d74-162f-41e9-9438-ddbe3457c359
---
# Resource Compiler Error RC2101

Invalid directive in preprocessed RC file

The Resource Compiler file contains a **#pragma** directive.

Use the **#ifndef** preprocessor directive with the RC_INVOKED constant that the Resource Compiler defines when it processes an include file. Place the **#pragma** directive inside a block of code that is not processed when the RC_INVOKED constant is defined. Code in the block is processed only by the C/C++ compiler and not by the Resource Compiler. The following sample code demonstrates this technique:

```
#ifndef RC_INVOKED
#pragma pack(2)  // C/C++ only, ignored by Resource Compiler
#endif
```

The **#pragma** preprocessor directive has no meaning in an .RC file. The **#include** preprocessor directive is used frequently in an .RC file to include a header file (either a project-based custom header file or a standard header file provided by Microsoft with one of its products). Some of these include files contain the **#pragma** directive. Because a header file can include one or more other header files, the file that contains the offending **#pragma** directive may not be immediately obvious.

The **#ifndef** RC_INVOKED technique can control including header files in project-based header files.
