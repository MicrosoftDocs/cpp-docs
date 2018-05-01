---
title: "Linker Tools Error LNK1245 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1245"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1245"
ms.assetid: 179c8165-ffbb-44cd-9f24-5250f29577cc
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1245
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK1245](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk1245).  
  
  
invalid subsystem 'subsystem' specified; /SUBSYSTEM must be WINDOWS, WINDOWSCE, or CONSOLE  
  
 [/clr](../../build/reference/clr-common-language-runtime-compilation.md) was used to compile the object and one of the following conditions was true:  
  
-   A custom entry point was defined ([/ENTRY](../../build/reference/entry-entry-point-symbol.md)), such that, the linker could not infer a subsystem.  
  
-   A value was passed to the [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) linker option that is not valid for /clr objects.  
  
 For both situations, the resolution is to specify a valid value to the /SUBSYSTEM linker option.

