---
title: "Compiler Warning (level 4) C4100 | Microsoft Docs"
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
  - "C4100"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4100"
ms.assetid: 478ed97d-e502-49e4-9afb-ac2a6c61194b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4100
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4100](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4100).  
  
  
identifier' : unreferenced formal parameter  
  
 The formal parameter is not referenced in the body of the function. The unreferenced parameter is ignored.  
  
 C4100 can also be issued when code calls a destructor on a otherwise unreferenced parameter of primitive type.  This is a limitation of the Visual C++ compiler.  
  
 The following sample generates C4100:  
  
```  
// C4100.cpp  
// compile with: /W4  
void func(int i) {   // C4100, delete the unreferenced parameter to  
                     //resolve the warning  
   // i;   // or, add a reference like this  
}  
  
int main()  
{  
   func(1);  
}  
```

