---
title: "Compiler Error C3233 | Microsoft Docs"
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
  - "C3233"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3233"
ms.assetid: a9210830-1136-4f02-ba41-030c85f93547
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3233
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3233](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3233).  
  
  
type' : generic type parameter already constrained  
  
 It is not valid to constrain a generic parameter in more than one `where` clause.  
  
 The following sample generates C3233:  
  
```  
// C3233.cpp  
// compile with: /clr /LD  
  
interface struct C {};  
interface struct D {};  
  
generic <class T>  
where T : C  
where T : D  
ref class E {};   // C3233  
```

