---
title: "Alias definition is recursive. | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.0x800A00DA"
  - "vs.message.VS_E_RECURSIVEALIAS"
ms.assetid: e48a2908-9b94-4c6a-9807-beeeba71531c
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Alias definition is recursive.
This error generally occurs when an alias has been defined that directly or indirectly references itself.  
  
### To correct this error  
  
1.  Change the definition of the alias and try again.  
  
     —or—  
  
2.  Review the current list of aliases and their definitions by entering `>alias` in the **Command** window and try again.  
  
## See Also  
 [Alias Command](http://msdn.microsoft.com/library/bdf857df-b5d5-450f-8c10-a6fd4dccc130)   
 [Visual Studio Command Aliases](http://msdn.microsoft.com/library/de8bb378-8c1c-4087-a9a5-537fa8314c19)