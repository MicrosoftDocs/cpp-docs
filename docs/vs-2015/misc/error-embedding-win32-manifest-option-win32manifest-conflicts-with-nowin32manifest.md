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
 [/win32manifest (Visual Basic)](http://msdn.microsoft.com/library/9e3191b4-90db-41c8-966a-28036fd20005)   
 [/nowin32manifest (Visual Basic)](http://msdn.microsoft.com/library/c0528aae-83b3-4425-99f0-19448e9843e3)   
 [Visual Basic Command-Line Compiler](http://msdn.microsoft.com/library/6b57c444-50c7-4b88-8f59-ed65cff5e05c)