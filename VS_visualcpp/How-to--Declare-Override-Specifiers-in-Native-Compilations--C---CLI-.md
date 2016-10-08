---
title: "How to: Declare Override Specifiers in Native Compilations (C++-CLI)"
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
ms.topic: article
H1: How to: Declare Override Specifiers in Native Compilations (C++/CLI)
ms.assetid: d0551836-9ac7-41eb-a6e9-a4b3ef60767d
caps.latest.revision: 13
manager: ghogen
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
# How to: Declare Override Specifiers in Native Compilations (C++-CLI)
[sealed](../VS_visualcpp/sealed---C---Component-Extensions-.md), [abstract](../VS_visualcpp/abstract---C---Component-Extensions-.md), and [override](../VS_visualcpp/override---C---Component-Extensions-.md) are available in compilations that do not use **/ZW** or [/clr](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md).  
  
> [!NOTE]
>  The ISO C++11 Standard language has the [override](../VS_visualcpp/override-Specifier.md) identifier and the [final](../VS_visualcpp/final-Specifier.md) identifier, and both are supported in Visual Studio  Use `final` instead of `sealed` in code that is meant to be compiled as native-only.  
  
## Example  
  
### Description  
 The following example shows that `sealed` is valid in native compilations.  
  
### Code  
  
```  
  
      // sealed_native_keyword.cpp  
#include <stdio.h>  
__interface I1 {  
   virtual void f();  
   virtual void g();  
};  
  
class X : public I1 {  
public:  
   virtual void g() sealed {}  
};  
  
class Y : public X {  
public:  
  
   // the following override generates a compiler error  
   virtual void g() {}   // C3248 X::g is sealed!  
};  
```  
  
## Example  
  
### Description  
 The next example shows that `override` is valid in native compilations.  
  
### Code  
  
```  
// override_native_keyword.cpp  
#include <stdio.h>  
__interface I1 {  
   virtual void f();  
};  
  
class X : public I1 {  
public:  
   virtual void f() override {}   // OK  
   virtual void g() override {}   // C3668 I1::g does not exist  
};  
```  
  
## Example  
  
### Description  
 This example shows that `abstract` is valid in native compilations.  
  
### Code  
  
```  
// abstract_native_keyword.cpp  
class X abstract {};  
  
int main() {  
   X * MyX = new X;   // C3622 cannot instantiate abstract class  
}  
```  
  
## See Also  
 [Override Specifiers](../VS_visualcpp/Override-Specifiers---C---Component-Extensions-.md)