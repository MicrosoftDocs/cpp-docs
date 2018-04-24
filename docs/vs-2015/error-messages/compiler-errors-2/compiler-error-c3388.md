---
title: "Compiler Error C3388 | Microsoft Docs"
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
  - "C3388"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3388"
ms.assetid: 34336545-ed13-4d81-ab5f-f869799fe4c2
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3388
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3388](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3388).  
  
  
type' : not allowed as a constraint, assuming 'ref class' to continue parsing  
  
 A constraint was specified on a generic type, but the constraint was not specified correctly. See [Constraints on Generic Type Parameters (C++/CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md) for more information.  
  
## Example  
 The following sample generates C3388.  
  
```  
// C3388.cpp  
// compile with: /clr /c  
interface class AA {};  
  
generic <class T>  
where T : interface class   // C3388  
ref class C {};  
  
// OK  
generic <class T>  
where T : AA  
ref class D {};  
```

