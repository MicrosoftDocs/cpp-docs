---
title: "Compiler Error C3225 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3225"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3225"]
ms.assetid: f5f66973-256e-4298-ac46-c87819cbde34
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3225
generic type argument for 'arg' cannot be 'type', it must be a value type or handle type  
  
 The generic type argument was not of the correct type.  
  
 For more information, see [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## Example  
 You cannot instantiate a generic type with a native type. The following sample generates C3225.  
  
```  
// C3225.cpp  
// compile with: /clr  
class A {};  
  
ref class B {};  
  
generic <class T>  
ref class C {};  
  
int main() {  
   C<A>^ c = gcnew C<A>;   // C3225  
   C<B^>^ c2 = gcnew C<B^>;   // OK  
}  
```  
  
## Example  
 The following sample creates a component using C#. Notice that the constraint specifies that the generic type can only be instantiated with a value type.  
  
```  
// C3225_b.cs  
// compile with: /target:library  
// a C# program  
public class MyList<T> where T: struct {}  
```  
  
## Example  
 This sample consumes the C#-authored component, and violates the constraint that MyList can only be instantiated with a value type other than <xref:System.Nullable>. The following sample generates C3225.  
  
```  
// C3225_c.cpp  
// compile with: /clr  
#using "C3225_b.dll"  
ref class A {};  
value class B {};  
int main() {  
   MyList<A> x;   // C3225  
   MyList<B> y;   // OK  
}  
```