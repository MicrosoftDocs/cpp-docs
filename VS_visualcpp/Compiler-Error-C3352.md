---
title: "Compiler Error C3352"
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
ms.assetid: f233bed7-474e-425f-aad2-7801578169d4
caps.latest.revision: 11
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
# Compiler Error C3352
'function' : the specified function does not match the delegate type 'type'  
  
 The parameter lists for `function` and the delegate do not match.  
  
 For more information, see [delegate  (C++ Component Extensions)](../VS_visualcpp/delegate---C---Component-Extensions-.md).  
  
 The following sample generates C3352:  
  
```  
// C3352.cpp  
// compile with: /clr  
delegate int D( int, int );  
ref class C {  
public:  
   int mf( int ) {  
      return 1;  
   }  
  
   // Uncomment the following line to resolve.  
   // int mf(int, int) { return 1; }  
};  
  
int main() {  
   C^ pC = gcnew C;  
   System::Delegate^ pD = gcnew D( pC, &C::mf );   // C3352  
}  
```  
  
 The following sample generates C3352:  
  
```  
// C3352_2.cpp  
// compile with: /clr:oldSyntax  
__delegate int D(int, int);  
  
__gc class C {  
public:  
   int mf(int) {  
      return 1;  
   }  
  
   // Uncomment the following line to resolve.  
   // int mf(int, int) { return 1; }  
};  
  
int main() {  
   C *pC = new C;  
   System::Delegate *pD = new D(pC, &C::mf);   // C3352  
}  
```