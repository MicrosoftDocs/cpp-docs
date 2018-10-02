---
title: "Command-Line Warning D9024 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["D9024"]
dev_langs: ["C++"]
helpviewer_keywords: ["D9024"]
ms.assetid: daf4896d-223d-4af0-9b6d-89109cf3d1bb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Command-Line Warning D9024

unrecognized source file type 'filename', object file assumed

The extension of the specified file was not recognized. The file was assumed to be an object file and was passed to the linker.

The following extensions are recognized:

- .c (C source file)

- .cxx (C++ source file)

- .cpp (C++ source file)

- .obj (Object file)

- .lib (Library file)

- .def (Module definition file)

- .exp (Linker exports file, created by LINK /LIB)