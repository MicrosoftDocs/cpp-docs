---
title: "Compiler Warning (level 1) C4926 | Microsoft Docs"
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
  - "C4926"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4926"
ms.assetid: 5717fce0-146f-4ef2-bde0-e9a01c0922d1
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4926
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4926](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4926).  
  
  
identifier': symbol is already defined: attributes ignored  
  
 A forward declaration was found but an attributed construct with the same name already exists. The attributes for the forward declaration are ignored.  
  
 The following sample generates C4926:  
  
```  
// C4926.cpp  
// compile with: /W1  
[module(name="MyLib")];  
  
[coclass]  
struct a {  
};  
  
[coclass]  
struct a;   // C4926  
  
int main() {  
}  
```

