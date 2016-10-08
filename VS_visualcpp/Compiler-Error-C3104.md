---
title: "Compiler Error C3104"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: b5648d47-e5d3-4b45-a3c0-f46e04eae731
caps.latest.revision: 14
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Error C3104
illegal attribute argument  
  
 You specified an invalid argument to an attribute.  
  
 See [Attribute Parameter Types](../VS_visualcpp/Attribute-Parameter-Types---C---Component-Extensions-.md) for more information.  
  
 This error can be generated as a result of compiler conformance work that was done for Visual C++ 2005: when passing managed arrays to custom attributes, the type of the array is no longer deduced from the aggregate initialization list. The compiler now requires you to specify the type of the array as well as the initializer list.  
  
## Example  
 The following sample generates C3104.  
  
```  
// C3104a.cpp  
// compile with: /clr /c  
using namespace System;  
  
[AttributeUsage(AttributeTargets::Class)]  
public ref struct ABC : public Attribute {  
   ABC(array<int>^){}  
   array<double> ^ param;  
};  
  
[ABC( {1,2,3}, param = {2.71, 3.14})]   // C3104  
// try the following line instead  
// [ABC( gcnew array<int> {1,2,3}, param = gcnew array<double>{2.71, 3.14})]   
ref struct AStruct{};  
```  
  
## Example  
 The following sample generates C3104.  
  
```  
// C3104b.cpp  
// compile with: /clr /c  
// C3104 expected  
using namespace System;  
  
int func() {  
   return 0;   
}  
  
[attribute(All)]  
ref class A {  
public:   
   A(int) {}  
};  
  
// Delete the following 2 lines to resolve.  
[A(func())]  
ref class B {};  
  
// OK  
[A(0)]  
ref class B {};  
```  
  
## Example  
 The following sample generates C3104.  
  
```  
// C3104c.cpp  
// compile with: /clr:oldSyntax /c  
using namespace System;  
  
[ attribute(Class) ]  
public __gc class AnotherAttr {  
public:  
   AnotherAttr(Object* arr __gc[]) : var0(arr) {}  
   Object* var1 __gc[];  
   Object* var0 __gc[];  
};  
  
[ AnotherAttr( { __box(3.14159), S"pi" }, var1 = { S"a", S"b" } ) ]   // C3104  
public __gc class Class1 {};  
  
// OK  
[ AnotherAttr( new Object * __gc[] {__box(3.14159), S"pi" }, var1 = new Object * __gc[] { S"a", S"b" } ) ]  
public __gc class Class2 {};  
```