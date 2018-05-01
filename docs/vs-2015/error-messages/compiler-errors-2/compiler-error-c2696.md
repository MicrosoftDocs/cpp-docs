---
title: "Compiler Error C2696 | Microsoft Docs"
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
  - "C2696"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2696"
ms.assetid: 6c6eb7df-1230-4346-9a73-abf14c20785d
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2696
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2696](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2696).  
  
  
Cannot create a temporary object of a managed type 'type'  
  
 References to `const` in an unmanaged program cause the compiler to call the constructor and create a temporary object on the stack. However, a managed class can never be created on the stack.  
  
 C2696 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C2696:  
  
```  
// C2696b.cpp  
// compile with: /clr:oldSyntax  
  
__gc class G {  
public:  
   G( int i ) {}  
};  
  
void func( const G& g );  
  
int main() {  
   func( 1 );   // C2696  
   G *myG = new G( 1 );   // OK  
   func( *myG );  
}  
```

