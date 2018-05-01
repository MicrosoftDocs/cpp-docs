---
title: "Compiler Error C3156 | Microsoft Docs"
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
  - "C3156"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3156"
ms.assetid: 1876da78-b94e-4af7-9795-28f72b209b3e
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3156
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3156](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3156).  
  
  
class' : you cannot have a local definition of a managed or WinRT type  
  
 A function cannot contain the definition, or declaration, of a managed or WinRT class, struct, or interface.  
  
## Example  
 The following sample generates C3156.  
  
```  
// C3156.cpp  
// compile with: /clr /c  
void f() {  
   ref class X {};   // C3156  
   ref class Y;   // C3156  
}  
```  
  
## Example  
 The following sample generates C3156.  
  
```  
// C3156_b.cpp  
// compile with: /clr:oldSyntax /c  
void f() {  
   __gc class X {};   // C3156  
   __gc class Y;   // C3156  
}  
```

