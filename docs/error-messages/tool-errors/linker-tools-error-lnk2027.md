---
title: "Linker Tools Error LNK2027 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK2027"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK2027"]
ms.assetid: e2f857a8-8e8a-4697-bbff-12ccb84a35c1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK2027
unresolved module reference 'module'  
  
 A file passed to the linker has a dependency on a module that was neither specified with **/ASSEMBLYMODULE** nor passed directly to the linker.  
  
 To resolve LNK2027, do one of the following:  
  
-   Do not pass to the linker the file that has the module dependency.  
  
-   Specify the module with **/ASSEMBLYMODULE**.  
  
-   If the module is a safe .netmodule, pass the module directly to the linker.  
  
 For more information, see [/ASSEMBLYMODULE (Add a MSIL Module to the Assembly)](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md) and [.netmodule Files as Linker Input](../../build/reference/netmodule-files-as-linker-input.md).