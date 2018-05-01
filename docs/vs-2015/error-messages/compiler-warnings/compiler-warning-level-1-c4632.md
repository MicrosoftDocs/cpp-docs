---
title: "Compiler Warning (level 1) C4632 | Microsoft Docs"
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
  - "C4632"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4632"
ms.assetid: 9e35d205-cf21-4e34-8bd5-e1e7b0e2cdd3
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4632
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4632](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4632).  
  
  
XML document comment: file - access denied: reason  
  
 The path to .xdc file (`file`) was not valid, and no .xdc file created.  
  
 The following sample generates C4632:  
  
```  
// C4632.cpp  
// compile with: /clr /docv:\\falsedir /LD /W1  
// C4632 expected  
  
/// Text for class MyClass.  
public ref class MyClass {};  
```

