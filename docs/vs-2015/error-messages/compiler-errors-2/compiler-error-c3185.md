---
title: "Compiler Error C3185 | Microsoft Docs"
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
  - "C3185"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3185"
ms.assetid: 5bf96279-043c-4981-9d02-b4550071b192
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3185
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3185](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3185).  
  
  
typeid' used on managed or WinRT type 'type', use 'operator' instead  
  
 You cannot apply the [typeid](../../cpp/typeid-operator.md) operator to a managed or WinRT type; use [typeid](../../windows/typeid-cpp-component-extensions.md) instead.  
  
 The following sample generates C3185 and shows how to fix it:  
  
```  
// C3185a.cpp  
// compile with: /clr  
ref class Base {};  
ref class Derived : public Base {};  
  
int main() {  
   Derived ^ pd = gcnew Derived;  
   Base ^pb = pd;  
   const type_info & t1 = typeid(pb);   // C3185  
   System::Type ^ MyType = Base::typeid;   // OK  
};  
```  
  
 **Managed Extensions for C++**  
  
 You cannot apply [typeid](../../cpp/typeid-operator.md) to a managed type; use [__typeof](../../misc/typeof.md) instead.  
  
 The following sample generates C3185:  
  
```  
// C3185b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__gc class Base {};  
__gc class Derived : public Base {};  
  
int main() {  
   Derived *pd = new Derived;  
   Base *pb = pd;  
   const type_info & t1 = typeid(*pb);   // C3185  
  
   // OK  
   Type * t = __typeof(Base);  
   Type * t1 = __typeof(Derived);  
};  
```

