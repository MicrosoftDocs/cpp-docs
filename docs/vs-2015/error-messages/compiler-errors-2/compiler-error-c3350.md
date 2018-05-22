---
title: "Compiler Error C3350 | Microsoft Docs"
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
  - "C3350"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3350"
ms.assetid: cfbbc338-92b5-4f34-999e-aa2d2376bc70
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3350
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3350](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3350).  
  
  
delegate' : a delegate constructor expects number argument(s)  
  
 When you create an instance of a delegate, you must pass two arguments, an instance of the type containing the delegate function, and the function.  
  
 The following sample generates C3350:  
  
```  
// C3350.cpp  
// compile with: /clr  
delegate void SumDelegate();  
  
public ref class X {  
public:  
   void F() {}  
   static void F2() {}  
};  
  
int main() {  
   X ^ MyX = gcnew X();  
   SumDelegate ^ pSD = gcnew SumDelegate();   // C3350  
   SumDelegate ^ pSD1 = gcnew SumDelegate(MyX, &X::F);  
   SumDelegate ^ pSD2 = gcnew SumDelegate(&X::F2);  
}  
```  
  
 **Managed Extensions for C++**  
  
 The following sample generates C3350:  
  
```  
// C3350b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__delegate void SumDelegate();  
  
public __gc class X {  
public:  
   void F() {}  
   static void F2() {}  
};  
  
int main() {  
   X * MyX = new X();  
   SumDelegate *pSD = new SumDelegate();   // C3350  
   SumDelegate *pSD1 = new SumDelegate(MyX, &X::F);  
   SumDelegate *pSD2 = new SumDelegate(&X::F2);  
}  
```

