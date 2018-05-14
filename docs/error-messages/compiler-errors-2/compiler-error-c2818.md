---
title: "Compiler Error C2818 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2818"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2818"]
ms.assetid: 715fc7c9-0c6d-452b-b7f5-1682cea5e907
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2818
application of overloaded 'operator ->' is recursive through type 'type'  
  
 A redefinition of the class member access operator contains a recursive `return` statement. To redefine the `->` operator with recursion, you must move the recursive routine to a separate function called from the operator override function.