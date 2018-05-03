---
title: "Compiler Error C2379 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2379"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2379"]
ms.assetid: 37dc3015-a4af-4341-bbf3-da6150df7e51
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2379
formal parameter number has different type when promoted  
  
 The type of the specified parameter is not compatible, through default promotions, with the type in a previous declaration. This is an error in ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) and a warning with Microsoft extensions (**/Ze**).  
  
 The following sample generates C2379:  
  
```  
// C2379.c  
// compile with: /Za  
void func();  
void func(char);   // C2379, char promotes to int  
```