---
title: "Error embedding Win32 manifest: Option -win32manifest conflicts with -nowin32manifest | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc2033"
  - "bc2033"
helpviewer_keywords: 
  - "BC2033"
ms.assetid: e921b34a-1ab3-4ba0-81b3-e45c62de4718
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Error embedding Win32 manifest: Option /win32manifest conflicts with /nowin32manifest
The Visual Basic compiler has been passed both a `/win32manifest` compiler option and a `/nowin32manifest` compiler option. Only one of these options can be passed to the Visual Basic compiler.  
  
 **Error ID:** BC2033  
  
### To correct this error  
  
1.  Remove either the `/win32manifest` compiler option or the `/nowin32manifest` compiler option.  
  
## See Also  
 [/win32manifest (Visual Basic)](../Topic/-win32manifest%20\(Visual%20Basic\).md)   
 [/nowin32manifest (Visual Basic)](../Topic/-nowin32manifest%20\(Visual%20Basic\).md)   
 [Visual Basic Command-Line Compiler](../Topic/Visual%20Basic%20Command-Line%20Compiler.md)