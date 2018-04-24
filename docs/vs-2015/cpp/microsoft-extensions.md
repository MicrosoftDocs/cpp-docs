---
title: "Microsoft Extensions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Microsoft extensions to C/C++"
ms.assetid: 68654516-24ef-4f33-aae2-175f86cc1979
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Microsoft Extensions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Microsoft Extensions](https://docs.microsoft.com/cpp/cpp/microsoft-extensions).  
  
asm-statement*:  
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
  
## See Also  
 [Grammar Summary](../misc/grammar-summary-cpp.md)





