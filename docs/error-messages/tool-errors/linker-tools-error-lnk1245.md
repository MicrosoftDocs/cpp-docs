---
title: "Linker Tools Error LNK1245 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Linker Tools Error LNK1245
invalid subsystem 'subsystem' specified; /SUBSYSTEM must be WINDOWS, WINDOWSCE, or CONSOLE  
  
 [/clr](../../build/reference/clr-common-language-runtime-compilation.md) was used to compile the object and one of the following conditions was true:  
  
-   A custom entry point was defined ([/ENTRY](../../build/reference/entry-entry-point-symbol.md)), such that, the linker could not infer a subsystem.  
  
-   A value was passed to the [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) linker option that is not valid for /clr objects.  
  
 For both situations, the resolution is to specify a valid value to the /SUBSYSTEM linker option.