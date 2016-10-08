---
title: "Compiler Error C3351"
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
ms.assetid: c021bbbe-1067-4f51-af4f-940d2b792eb5
caps.latest.revision: 9
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
# Compiler Error C3351
'object' : delegate constructor: second argument must be address of a static member function or global function  
  
 The compiler expected the address of a function declared [static](../Topic/Static%20\(C++\).md).  
  
 The following sample generates C3351:  
  
```  
// C3351a.cpp  
// compile with: /clr  
delegate int D(int, int);  
  
ref class C {  
public:  
   int mf(int, int) {  
      return 1;  
   }  
  
   static int mf2(int, int) {  
      return 1;  
   }  
};  
  
int main() {  
   System::Delegate ^pD = gcnew D(nullptr, &C::mf);   // C3351  
   System::Delegate ^pD2 = gcnew D(&C::mf2);  
}  
```  
  
 The following sample generates C3351:  
  
```  
// C3351b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__delegate int D(int, int);  
  
__gc class C {  
public:  
   int mf(int, int) {  
   // declare the function as static  
   // static int mf(int, int) {  
      return 1;  
   }  
};  
  
int main() {  
   C *pC = new C;  
   System::Delegate *pD = new D(0, &C::mf);   // C3351  
}  
```