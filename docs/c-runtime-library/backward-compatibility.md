---
title: "Backward Compatibility | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.programs"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CRT, compatibility"
  - "backward compatibility, C run-time libraries"
  - "compatibility, C run-time libraries"
  - "backward compatibility"
ms.assetid: cc3175cf-97fd-492f-b329-5791aea63090
caps.latest.revision: 7
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
# Backward Compatibility
For compatibility between product versions, the library OLDNAMES.LIB maps old names to new names. For instance, `open` maps to `_open`. You must explicitly link with OLDNAMES.LIB only when you compile with the following combinations of command-line options:  
  
-   `/Zl` (omit default library name from object file) and `/Ze` (the default — use Microsoft extensions)  
  
-   `/link` (linker-control), `/NOD` (no default-library search), and `/Ze`  
  
 For more information about compiler command-line options, see [Compiler Reference](../build/reference/compiler-options.md).  
  
## See Also  
 [Compatibility](../c-runtime-library/compatibility.md)