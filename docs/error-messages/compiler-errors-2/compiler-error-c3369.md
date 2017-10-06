---
title: "Compiler Error C3369 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3369"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3369"]
ms.assetid: c6ceb9cb-3df9-4334-9a5c-d16db351d476
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3369
'module name': idl_module already defined  
  
 The [idl_module](../../windows/idl-module.md) usage where you define the DLL can only occur once in a program.  
  
 The following sample generates C3369:  
  
```  
// C3369.cpp  
// compile with: /c  
[idl_module(name="name1", dllname="x.dll")]; // C3369  
[idl_module(name="name1", dllname="x.dll")];  
```