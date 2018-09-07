---
title: "Compiler Error C3465 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3465"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3465"]
ms.assetid: aeb815e5-b3fc-4525-afe2-d738e9321df1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3465
to use type 'type' you must reference the assembly 'assembly'  
  
 Type forwarding will work for a client application until you recompile the client. When you recompile, you will need a reference for every assembly containing the definition of a type used in your client application.  
  
 For more information, see [Type Forwarding (C++/CLI)](../../windows/type-forwarding-cpp-cli.md).  
  
## Example  
 The following sample builds an assembly that contains the new location of a type.  
  
```  
// C3465.cpp  
// compile with: /clr /LD  
public ref class R {  
public:  
   ref class N {};  
};  
```  
  
## Example  
 The following sample builds an assembly that used to contain the definition of the type, but now contains forwarding syntax for the type.  
  
```  
// C3465_b.cpp  
// compile with: /clr /LD  
#using "C3465.dll"  
[ assembly:TypeForwardedTo(R::typeid) ];  
```  
  
## Example  
 The following sample generates C3465.  
  
```  
// C3465_c.cpp  
// compile with: /clr  
// C3465 expected  
#using "C3465_b.dll"  
// Uncomment the following line to resolve.  
// #using "C3465.dll"  
  
int main() {  
   R^ r = gcnew R();  
}  
```