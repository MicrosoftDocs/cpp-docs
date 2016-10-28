---
title: "Compiler Error C3350"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C3350"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3350"
ms.assetid: cfbbc338-92b5-4f34-999e-aa2d2376bc70
caps.latest.revision: 9
ms.author: "corob"
manager: "douge"
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
# Compiler Error C3350
'delegate' : a delegate constructor expects number argument(s)  
  
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