---
title: "Linker Tools Error LNK1245 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK1245"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK1245"]
ms.assetid: 179c8165-ffbb-44cd-9f24-5250f29577cc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK1245
invalid subsystem 'subsystem' specified; /SUBSYSTEM must be WINDOWS, WINDOWSCE, or CONSOLE  
  
 [/clr](../../build/reference/clr-common-language-runtime-compilation.md) was used to compile the object and one of the following conditions was true:  
  
-   A custom entry point was defined ([/ENTRY](../../build/reference/entry-entry-point-symbol.md)), such that, the linker could not infer a subsystem.  
  
-   A value was passed to the [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) linker option that is not valid for /clr objects.  
  
 For both situations, the resolution is to specify a valid value to the /SUBSYSTEM linker option.