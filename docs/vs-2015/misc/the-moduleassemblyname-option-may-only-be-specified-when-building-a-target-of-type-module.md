---
title: "The -moduleassemblyname option may only be specified when building a target of type &#39;module&#39; | Microsoft Docs"
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
  - "bc2030"
  - "vbc2030"
helpviewer_keywords: 
  - "BC2030"
ms.assetid: 2ebc577b-3464-40cc-8788-9fc9d3b4f928
caps.latest.revision: 3
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# The /moduleassemblyname option may only be specified when building a target of type &#39;module&#39;
The Visual Basic compiler has been passed the `/moduleassemblyname` compiler option when the `/target` option is set to a value other than `module`.  
  
 **Error ID:** BC2030  
  
### To correct this error  
  
1.  Remove the `/moduleassemblyname` compiler option or set the `/target` option to `module`.  
  
## See Also  
 [/target (Visual Basic)](http://msdn.microsoft.com/library/e0954147-548b-461f-9c4b-a8f88845616c)   
 [/moduleassemblyname](http://msdn.microsoft.com/library/013a57b6-f425-4dd3-b333-512d72c42f55)   
 [Visual Basic Command-Line Compiler](http://msdn.microsoft.com/library/6b57c444-50c7-4b88-8f59-ed65cff5e05c)