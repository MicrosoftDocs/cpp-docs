---
title: "Linker Tools Error LNK2027 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2027"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2027"
ms.assetid: e2f857a8-8e8a-4697-bbff-12ccb84a35c1
caps.latest.revision: 6
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
# Linker Tools Error LNK2027
unresolved module reference 'module'  
  
 A file passed to the linker has a dependency on a module that was neither specified with **/ASSEMBLYMODULE** nor passed directly to the linker.  
  
 To resolve LNK2027, do one of the following:  
  
-   Do not pass to the linker the file that has the module dependency.  
  
-   Specify the module with **/ASSEMBLYMODULE**.  
  
-   If the module is a safe .netmodule, pass the module directly to the linker.  
  
 For more information, see [/ASSEMBLYMODULE (Add a MSIL Module to the Assembly)](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md) and [.netmodule Files as Linker Input](../../build/reference/netmodule-files-as-linker-input.md).