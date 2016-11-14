---
title: "Naked Function Calls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "virtual device drivers"
  - "VXD virtual device drivers"
  - "virtual device drivers, naked function calls"
  - "naked functions"
  - "prolog code"
  - "epilog code"
  - "naked keyword [C++]"
  - "naked keyword [C++], storage-class attribute"
ms.assetid: 2a66847a-a43f-4541-a7be-c9f5f29b5fdb
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
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
# Naked Function Calls
## Microsoft Specific  
 Functions declared with the `naked` attribute are emitted without prolog or epilog code, enabling you to write your own custom prolog/epilog sequences using the [inline assembler](../assembler/inline/inline-assembler.md). Naked functions are provided as an advanced feature. They enable you to declare a function that is being called from a context other than C/C++, and thus make different assumptions about where parameters are, or which registers are preserved. Examples include routines such as interrupt handlers. This feature is particularly useful for writers of virtual device drivers (VxDs).  
  
## What do you want to know more about?  
  
-   [naked](../cpp/naked-cpp.md)  
  
-   [Rules and Limitations for Naked Functions](../cpp/rules-and-limitations-for-naked-functions.md)  
  
-   [Considerations for Writing Prolog/Epilog Code](../cpp/considerations-for-writing-prolog-epilog-code.md)  
  
### END Microsoft Specific  
  
## See Also  
 [Calling Conventions](../cpp/calling-conventions.md)