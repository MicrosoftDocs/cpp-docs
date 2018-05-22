---
title: "Compiler Warning (level 1) C4087 | Microsoft Docs"
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
  - "C4087"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4087"
ms.assetid: 546e4d57-5c8e-422c-8ef1-92657336dad5
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4087
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4087](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4087).  
  
  
function' : declared with 'void' parameter list  
  
 The function declaration has no formal parameters, but the function call has actual parameters. Extra parameters are passed according to the calling convention of the function.  
  
 This warning is for the C compiler.  
  
## Example  
  
```  
// C4087.c  
// compile with: /W1  
int f1( void ) {  
}  
  
int main() {  
   f1( 10 );   // C4087  
}  
```

