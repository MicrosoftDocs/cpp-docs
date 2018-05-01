---
title: "&#39;#End ExternalSource&#39; must be preceded by a matching &#39;#ExternalSource&#39; | Microsoft Docs"
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
  - "bc30578"
  - "vbc30578"
helpviewer_keywords: 
  - "BC30578"
ms.assetid: f011673d-eced-46a7-a08e-d54d86c8a76b
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;#End ExternalSource&#39; must be preceded by a matching &#39;#ExternalSource&#39;
The `#ExternalSource` directive references outside code, enabling the compiler to accurately report when exceptions occur within that code. An `#ExternalSource` block must begin with `#ExternalSource` and end with `#End ExternalSource`.  
  
 **Error ID:** BC30578  
  
### To correct this error  
  
1.  Add `#ExternalSource` to the appropriate location in your code.  
  
2.  Remove `#End ExternalSource` if it is unnecessary.  
  
## See Also  
 [#ExternalSource Directive](http://msdn.microsoft.com/library/243bc6a2-34c3-4eeb-a776-9fd2bf988149)   
 [NOTINBUILD Conditional Compilation (Visual Basic)](http://msdn.microsoft.com/en-us/ad1e35e0-935e-4a35-a2ae-738bcf2a9240)