---
title: "Compiler Warning (level 3) C4538 | Microsoft Docs"
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
  - "C4538"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4538"
ms.assetid: 747e3d51-b6d0-41c1-a726-7af3253b59d7
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4538
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4538](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4538).  
  
  
type' : const/volatile qualifiers on this type are not supported  
  
 A qualifier keyword was applied to an array incorrectly. For more information, see [array](../../windows/arrays-cpp-component-extensions.md).  
  
 The following sample generates C4538:  
  
```  
// C4538.cpp  
// compile with: /clr /W3 /LD  
const array<int> ^f1();   // C4538  
array<const int> ^f2();   // OK  
```

