---
title: "Compiler Error C3828"
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
ms.assetid: 8d9cee75-9504-4bc8-88b6-2413618a3f45
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
# Compiler Error C3828
'object type': placement arguments not allowed while creating instances of managed or WinRTclasses  
  
 When creating an object of a managed type or Windows Runtime type, you cannot use the placement form of operator [ref new, gcnew](../VS_visualcpp/ref-new--gcnew---C---Component-Extensions-.md) or [new](../VS_visualcpp/new-Operator--C---.md).  
  
 The following sample generates C3828 and shows how to fix it:  
  
```  
// C3828a.cpp  
// compile with: /clr  
ref struct M {  
};  
  
ref struct N {  
   static array<char>^ bytes = gcnew array<char>(256);  
};  
  
int main() {  
   M ^m1 = new (&N::bytes) M();   // C3828  
   // The following line fixes the error.  
   // M ^m1 = gcnew M();  
}  
```