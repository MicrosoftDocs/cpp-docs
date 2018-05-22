---
title: "Compiler Error C2379 | Microsoft Docs"
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
  - "C2379"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2379"
ms.assetid: 37dc3015-a4af-4341-bbf3-da6150df7e51
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2379
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2379](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2379).  
  
  
formal parameter number has different type when promoted  
  
 The type of the specified parameter is not compatible, through default promotions, with the type in a previous declaration. This is an error in ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) and a warning with Microsoft extensions (**/Ze**).  
  
 The following sample generates C2379:  
  
```  
// C2379.c  
// compile with: /Za  
void func();  
void func(char);   // C2379, char promotes to int  
```

