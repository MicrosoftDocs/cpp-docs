---
title: "Microsoft Extensions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["Microsoft extensions to C/C++"]
ms.assetid: 68654516-24ef-4f33-aae2-175f86cc1979
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Microsoft Extensions
*asm-statement*:  
 **__asm**  *assembly-instruction* **;**opt  
  
 **__asm {**  *assembly-instruction-list*  **};**opt  
  
 *assembly-instruction-list*:  
 *assembly-instruction* **;**opt  
  
 *assembly-instruction* **;** *assembly-instruction-list* **;**opt  
  
 *ms-modifier-list*:  
 *ms-modifier ms-modifier-list*opt  
  
 *ms-modifier*:  
 **__cdecl**  
  
 **__fastcall**  
  
 **__stdcall**  
  
 **__syscall** (reserved for future implementations)  
  
 **__oldcall** (reserved for future implementations)  
  
 **__unaligned** (reserved for future implementations)  
  
 *based-modifier*  
  
 *based-modifier*:  
 **__based (** *based-type* **)**  
  
 *based-type*:  
 *name*  
