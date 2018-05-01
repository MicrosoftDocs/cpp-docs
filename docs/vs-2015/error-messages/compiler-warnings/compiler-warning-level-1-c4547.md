---
title: "Compiler Warning (level 1) C4547 | Microsoft Docs"
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
  - "C4547"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4547"
ms.assetid: 3edf1c2e-c0d5-444d-ae83-44a7cce24bb2
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4547
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4547](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4547).  
  
  
operator' : operator before comma has no effect; expected operator with side-effect  
  
 The compiler detected an ill-formed comma expression.  
  
 This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 The following sample generates C4547:  
  
```  
// C4547.cpp  
// compile with: /W1  
#pragma warning (default : 4547)  
int i = 0;  
int j = 1;  
int main() {  
   int l = (i != i,0);   // C4547  
   // try the following line instead  
   // int l = (i != i);  
   // or  
   // int l = ((void)(i != i),0);  
}  
```

