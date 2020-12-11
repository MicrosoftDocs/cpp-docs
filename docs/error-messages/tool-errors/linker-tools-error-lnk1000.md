---
description: "Learn more about: Linker Tools Error LNK1000"
title: "Linker Tools Error LNK1000"
ms.date: "06/18/2018"
f1_keywords: ["LNK1000"]
helpviewer_keywords: ["LNK1000"]
ms.assetid: 86421b9a-460a-4285-8dce-9b8257d78122
---
# Linker Tools Error LNK1000

> unknown error; consult documentation for technical support options

Note the circumstances of the error, then try to isolate the problem and create a reproducible test case. For information on how to investigate and report these errors, see [How to report a problem with the Visual C++ toolset or documentation](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).

You may get this error if you mix standard header files (for example, Windows.h) and your own files. Include a precompiled header, if any, first, then the standard headers, followed by your own header files.
