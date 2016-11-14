---
title: "Linker Tools Warning LNK4092 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4092"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4092"
ms.assetid: d569ec47-a338-40e1-940b-8a8061459acb
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
# Linker Tools Warning LNK4092
shared writable section 'section' contains relocations; image may not run correctly  
  
 The linker emits this warning whenever you have a shared section to warn you of a potentially serious problem.  
  
 One way to share data between multiple processes is to mark a section as "shared." However, marking a section as shared can cause problems. For example, you have a DLL that contains declarations like this in a shared data section:  
  
```  
int var = 1;  
int *pvar = &var;  
```  
  
 The linker cannot resolve `pvar` because its value depends on where the DLL is loaded in memory, so it puts a relocation record in the DLL. When the DLL is loaded into memory, the address of `var` can be resolved and `pvar` assigned. If another process loads the same DLL but cannot load it at the same address, the relocation for the address of `var` will be updated for the second process and the first process's address space will point to the wrong address.