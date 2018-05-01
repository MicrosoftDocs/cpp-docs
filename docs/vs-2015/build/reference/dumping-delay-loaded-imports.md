---
title: "Dumping Delay-Loaded Imports | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "delay-loaded imports, dumping"
  - "imports (delay-loaded)"
  - "delay-loaded imports"
ms.assetid: f766acf4-9df8-4b85-8cf6-0be3ffc4c124
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Dumping Delay-Loaded Imports
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Dumping Delay-Loaded Imports](https://docs.microsoft.com/cpp/build/reference/dumping-delay-loaded-imports).  
  
  
Delay-loaded imports can be dumped using [dumpbin /imports](../../build/reference/imports-dumpbin.md) and show up with slightly different information than standard imports. They are segregated into their own section of the /imports dumping and are explicitly labeled as delay-loaded imports. If there is unload information present in the image, that is noted. If there is bind information present, the time/date stamp of the target DLL is noted along with the bound addresses of the imports.  
  
## See Also  
 [Linker Support for Delay-Loaded DLLs](../../build/reference/linker-support-for-delay-loaded-dlls.md)

