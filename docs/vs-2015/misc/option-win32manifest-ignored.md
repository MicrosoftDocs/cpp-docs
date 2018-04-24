---
title: "Option -win32manifest ignored | Microsoft Docs"
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
  - "vbc2034"
  - "bc2034"
helpviewer_keywords: 
  - "BC2034"
ms.assetid: 8009553a-f6ba-4d2b-8ddd-8a9357bc928e
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option /win32manifest ignored
Option /win32manifest ignored. It can be specified only when the target is an assembly.  
  
 The Visual Basic compiler has been passed the `/win32manifest` compiler option when the `/target` option is set to `module`.  
  
 **Error ID:** BC2034  
  
### To correct this error  
  
1.  Remove the `/win32manifest` compiler option or set the `/target` option to `exe`, `winexe`, or `library`.  
  
## See Also  
 [/target (Visual Basic)](http://msdn.microsoft.com/library/e0954147-548b-461f-9c4b-a8f88845616c)   
 [/win32manifest (Visual Basic)](http://msdn.microsoft.com/library/9e3191b4-90db-41c8-966a-28036fd20005)   
 [Visual Basic Command-Line Compiler](http://msdn.microsoft.com/library/6b57c444-50c7-4b88-8f59-ed65cff5e05c)