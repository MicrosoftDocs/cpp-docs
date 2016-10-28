---
title: "Option -win32manifest ignored"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vbc2034"
  - "bc2034"
helpviewer_keywords: 
  - "BC2034"
ms.assetid: 8009553a-f6ba-4d2b-8ddd-8a9357bc928e
caps.latest.revision: 5
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Option /win32manifest ignored
Option /win32manifest ignored. It can be specified only when the target is an assembly.  
  
 The Visual Basic compiler has been passed the `/win32manifest` compiler option when the `/target` option is set to `module`.  
  
 **Error ID:** BC2034  
  
### To correct this error  
  
1.  Remove the `/win32manifest` compiler option or set the `/target` option to `exe`, `winexe`, or `library`.  
  
## See Also  
 [/target (Visual Basic)](../Topic/-target%20\(Visual%20Basic\).md)   
 [/win32manifest (Visual Basic)](../Topic/-win32manifest%20\(Visual%20Basic\).md)   
 [Visual Basic Command-Line Compiler](../Topic/Visual%20Basic%20Command-Line%20Compiler.md)