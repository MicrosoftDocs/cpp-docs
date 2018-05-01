---
title: "Compiler Error C3369 | Microsoft Docs"
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
  - "C3369"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3369"
ms.assetid: c6ceb9cb-3df9-4334-9a5c-d16db351d476
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3369
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3369](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3369).  
  
  
module name': idl_module already defined  
  
 The [idl_module](../../windows/idl-module.md) usage where you define the DLL can only occur once in a program.  
  
 The following sample generates C3369:  
  
```  
// C3369.cpp  
// compile with: /c  
[idl_module(name="name1", dllname="x.dll")]; // C3369  
[idl_module(name="name1", dllname="x.dll")];  
```

