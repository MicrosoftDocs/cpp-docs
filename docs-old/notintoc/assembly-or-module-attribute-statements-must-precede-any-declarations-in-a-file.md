---
title: "Assembly or Module attribute statements must precede any declarations in a file"
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
  - "vbc30637"
  - "bc30637"
helpviewer_keywords: 
  - "BC30637"
ms.assetid: 80242581-fa8a-4903-9395-6f7ad1610231
caps.latest.revision: 7
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
# Assembly or Module attribute statements must precede any declarations in a file
Global attributes must be declared at the top of a source file, after `Option` and `Imports` statements, but before any other statements.  
  
 **Error ID:** BC30637  
  
### To correct this error  
  
1.  Place global attributes, such as `<Module:>` and `<Assembly:>` at the top of your source file.  
  
## See Also  
 [NOT IN BUILD: Attributes in Visual Basic](assetId:///620bfc0e-4582-4c8b-8432-ebc5c3dccc22)   
 [NOT IN BUILD: Global Attributes in Visual Basic](assetId:///253a32d8-1531-4504-b687-088554ab71d2)