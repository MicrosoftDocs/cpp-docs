---
title: "Compiler Warning (level 1) C4080 | Microsoft Docs"
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
  - "C4080"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4080"
ms.assetid: 964fb3f4-b9fd-450b-aa23-35cece126172
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4080
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4080](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4080).  
  
  
expected identifier for segment name; found 'symbol'  
  
 The name of the segment in [#pragma alloc_text](../../preprocessor/alloc-text.md) must be a string or an identifier. The compiler ignores the pragma if a valid identifier is not found.  
  
 The following sample generates C4080:  
  
```  
// C4080.cpp  
// compile with: /W1  
extern "C" void func(void);  
  
#pragma alloc_text()   // C4080  
  
// try this line to resolve the warning  
// #pragma alloc_text("mysection", func)  
  
int main() {  
}  
  
void func(void) {  
}  
```

