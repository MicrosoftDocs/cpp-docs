---
title: "Compiler Error C3380"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 86f1f4ec-4ad8-4a1a-9b6c-2d9b6129df6b
caps.latest.revision: 11
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Error C3380
'class' : invalid assembly access specifier - only 'public' or 'private' are allowed  
  
 When applied to a managed class or struct, the [public](../VS_visualcpp/public--C---.md) and [private](../VS_visualcpp/private--C---.md) keywords indicate whether the class will be exposed through assembly metadata. Only `public` or `private` can be applied to a class in a program compiled with [/clr](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md).  
  
 The `ref` and `value` keywords, when used with [/clr](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md), indicate that a class is managed (see [Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md)).  
  
 The following sample generates C3380:  
  
```  
// C3380_2.cpp  
// compile with: /clr  
protected ref class A {   // C3380  
// try the following line instead  
// ref class A {  
public:  
   static int i = 9;  
};  
  
int main() {  
   A^ myA = gcnew A;  
   System::Console::WriteLine(myA->i);  
}  
```  
  
 The following sample generates C3380:  
  
```  
// C3380.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
protected __gc class A {   // C3380  
// try the following line instead  
// __gc class A {  
public:  
   static int i = 9;  
};  
  
int main() {  
   A *myA = new A;  
   Console::WriteLine(myA->i);  
}  
```