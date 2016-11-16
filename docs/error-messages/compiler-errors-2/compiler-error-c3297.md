---
title: "Compiler Error C3297 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3297"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3297"
ms.assetid: 2a718b4c-6cdb-4418-92c0-fc3a259431c4
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# Compiler Error C3297
'constraint_2' : cannot use 'constraint_1' as a constraint because 'constraint_1' has the value constraint  
  
 Value classes are sealed. If a constraint is a value class, another constraint can never derive from it.  
  
 For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
## Example  
 The following sample generates C3297.  
  
```  
// C3297.cpp  
// compile with: /clr /c  
generic<class T, class U>  
where T : value class  
where U : T   // C3297  
public ref struct R {};  
```