---
title: "Compiler Error C3351 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3351"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3351"
ms.assetid: c021bbbe-1067-4f51-af4f-940d2b792eb5
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3351
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3351](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3351).  
  
  
object' : delegate constructor: second argument must be address of a static member function or global function  
  
 The compiler expected the address of a function declared [static](../../misc/static-cpp.md).  
  
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

