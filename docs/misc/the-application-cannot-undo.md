---
title: "The application cannot undo. | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_MULTIDOCUNDO_BLOCKED"
  - "vs.message.0x800A00AB"
ms.assetid: c2b5e2af-0e64-4cff-9814-b80e26cd240e
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
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
# The application cannot undo.
This error generally occurs when an undo operation has been attempted for an item that has a linked undo to another file. If an action has taken place since the linked modification, Visual Studio cannot roll back the change.  
  
### To correct this error  
  
1.  Manually reverse the change.  
  
## See Also  
 [Finding and Replacing Text](/visual-studio/ide/finding-and-replacing-text)