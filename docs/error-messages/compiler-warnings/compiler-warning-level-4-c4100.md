---
title: "Compiler Warning (level 4) C4100 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4100"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4100"]
ms.assetid: 478ed97d-e502-49e4-9afb-ac2a6c61194b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4100
'identifier' : unreferenced formal parameter  
  
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