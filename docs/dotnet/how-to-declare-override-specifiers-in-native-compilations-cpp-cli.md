---
title: "How to: Declare Override Specifiers in Native Compilations (C++-CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "override specifiers in native compilation, overriding"
ms.assetid: d0551836-9ac7-41eb-a6e9-a4b3ef60767d
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to: Declare Override Specifiers in Native Compilations (C++/CLI)
[sealed](../windows/sealed-cpp-component-extensions.md), [abstract](../windows/abstract-cpp-component-extensions.md), and [override](../windows/override-cpp-component-extensions.md) are available in compilations that do not use **/ZW** or [/clr](../build/reference/clr-common-language-runtime-compilation.md).  
  
> [!NOTE]
>  The ISO C++11 Standard language has the [override](../cpp/override-specifier.md) identifier and the [final](../cpp/final-specifier.md) identifier, and both are supported in Visual Studio  Use `final` instead of `sealed` in code that is meant to be compiled as native-only.  
  
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
 [Override Specifiers](../windows/override-specifiers-cpp-component-extensions.md)