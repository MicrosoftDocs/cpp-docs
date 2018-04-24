---
title: "Compiler Warning (level 1) C4067 | Microsoft Docs"
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
  - "C4067"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4067"
ms.assetid: 1d10353e-8cd5-4b01-9184-a06189b965a4
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4067
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4067](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4067).  
  
  
unexpected tokens following preprocessor directive - expected a newline  
  
 The compiler found and ignored extra characters following a preprocessor directive. This warning appears only under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).  
  
```  
// C4067a.cpp  
// compile with: /DX /Za /W1  
#pragma warning(default:4067)  
#if defined(X)  
#else  
#endif v   // C4067  
int main()  
{  
}  
```  
  
### To resolve this warning, try the following:  
  
1.  Compile with **/Ze**.  
  
2.  Use comment delimiters:  
  
```  
// C4067b.cpp  
// compile with: /DX /Za /W1  
#if defined(X)  
#else  
#endif  
int main()  
{  
}  
```

