---
title: "Compiler Error C3183 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3183"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3183"]
ms.assetid: dbd0f020-c739-43c9-947e-9ce21537331b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3183
cannot define unnamed class, struct or union inside of managed or WinRT type 'type'  
  
A type that is embedded in a managed or WinRT type must be named.  
  
The following sample generates C3183:  
  
```  
// C3183a.cpp  
// compile with: /clr /c  
ref class Test  
{  
   ref class  
   {  // C3183, delete class or name it  
      int a;  
      int b;  
   };  
};  
```  
