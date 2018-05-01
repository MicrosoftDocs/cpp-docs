---
title: "Compiler Error C2337 | Microsoft Docs"
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
  - "C2337"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2337"
ms.assetid: eccc9178-a15e-42cd-bbd0-3cea7cf2d55b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2337
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2337](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2337).  
  
  
attribute name' : attribute not found  
  
 You have used an attribute that is not supported in this version of Visual C++.  
  
 The following sample generates C2337:  
  
```  
// C2337.cpp  
// compile with: /c  
[emitidl];  
[module(name="x")];  
[grasshopper]   // C2337, not a supported attribute  
class a{};  
```

