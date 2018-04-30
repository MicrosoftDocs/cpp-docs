---
title: "Dumping Delay-Loaded Imports | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["delay-loaded imports, dumping", "imports (delay-loaded)", "delay-loaded imports"]
ms.assetid: f766acf4-9df8-4b85-8cf6-0be3ffc4c124
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Dumping Delay-Loaded Imports
Delay-loaded imports can be dumped using [dumpbin /imports](../../build/reference/imports-dumpbin.md) and show up with slightly different information than standard imports. They are segregated into their own section of the /imports dumping and are explicitly labeled as delay-loaded imports. If there is unload information present in the image, that is noted. If there is bind information present, the time/date stamp of the target DLL is noted along with the bound addresses of the imports.  
  
## See Also  
 [Linker Support for Delay-Loaded DLLs](../../build/reference/linker-support-for-delay-loaded-dlls.md)