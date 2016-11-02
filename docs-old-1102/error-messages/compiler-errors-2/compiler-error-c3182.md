---
title: "Compiler Error C3182"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3182"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3182"
ms.assetid: f3681266-308e-4990-a979-8eef8920e186
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C3182
'class' : a member using-declaration or access declaration is illegal within a managed or WinRTtype  
  
 A [using](../../cpp/using-declaration.md) declaration is invalid within all forms of managed classes.  
  
 The following sample generates C3182 and shows how to fix it.  
  
```  
// C3182a.cpp  
// compile with: /clr /c  
ref struct B {  
   void mf(int) {  
   }  
};  
  
ref struct D : B {  
   using B::mf;   // C3182, delete to resolve  
   void mf(char) {  
   }  
};  
```  
  
 The following sample generates C3182 and shows how to fix it.  
  
```  
// C3182b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc struct B {  
   void mf(int)  
   {  
   }  
};  
  
__gc struct D : B {  
   using B::mf;   // C3182, delete to resolve  
   void mf(char)  
   {  
   }  
};  
  
int main()  
{  
}  
```