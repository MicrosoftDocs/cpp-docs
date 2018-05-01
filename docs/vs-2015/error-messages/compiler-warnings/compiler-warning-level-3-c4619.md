---
title: "Compiler Warning (level 3) C4619 | Microsoft Docs"
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
  - "C4619"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4619"
ms.assetid: 701fea21-01aa-4bea-93d4-1cb8824170b0
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4619
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4619](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4619).  
  
  
pragma warning : there is no warning number 'number'  
  
 An attempt was made to disable a warning that does not exist.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 The following sample generates C4619:  
  
```  
// C4619.cpp  
// compile with: /W3 /c  
#pragma warning(default : 4619)  
#pragma warning(disable : 4354)   // C4619, C4354 does not exist  
```

