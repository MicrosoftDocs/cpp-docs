---
title: "Compiler Error C2818 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2818"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2818"
ms.assetid: 715fc7c9-0c6d-452b-b7f5-1682cea5e907
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2818
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2818](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2818).  
  
  
application of overloaded 'operator ->' is recursive through type 'type'  
  
 A redefinition of the class member access operator contains a recursive `return` statement. To redefine the `->` operator with recursion, you must move the recursive routine to a separate function called from the operator override function.

