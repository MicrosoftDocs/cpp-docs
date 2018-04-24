---
title: "Compiler Error C2030 | Microsoft Docs"
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
  - "C2030"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2030"
ms.assetid: 5806cead-64df-4eff-92de-52c9a3f5ee62
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2030
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2030](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2030).  
  
  
a destructor with 'protected private' accessibility cannot be a member of a class declared 'sealed'  
  
 A Windows Runtime class declared as `sealed` cannot have a protected private destructor. Only public virtual and private non-virtual destructors are allowed on sealed types. For more information, see [Ref classes and structs](../Topic/Ref%20classes%20and%20structs%20\(C++-CX\).md).  
  
 To fix this error, change the accessibility of the destructor.
