---
title: "Compiler Error C2957 | Microsoft Docs"
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
  - "C2957"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2957"
ms.assetid: 9cb4526f-4af8-47e9-b786-56192627ca72
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2957
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2957](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2957).  
  
  
delim' : invalid left delimiter : expected '<'  
  
 A generic class was ill formed.  
  
 The following sample generates C2957:  
  
```  
// C2957.cpp  
// compile with: /clr /LD  
generic << class T>   // C2957  
// try the following line instead  
// generic < class T>  
gc class C {};  
```

