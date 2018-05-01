---
title: "Compiler Error C3266 | Microsoft Docs"
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
  - "C3266"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3266"
ms.assetid: 7375c099-acb7-42f6-898d-57cfefa010b8
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3266
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3266](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3266).  
  
  
class' : a class-constructor must have a 'void' parameter list  
  
 Class-constructors in a class using /clr programming cannot take parameters.  
  
 The following sample generates C3266:  
  
```  
// C3266.cpp  
// compile with: /clr  
  
ref class X {  
   static X(int i) { // C3266  
   // try the following line instead  
   // static X() {  
   }  
};  
  
int main() {  
}  
```  
  
 The following sample generates C3266:  
  
```  
// C3266b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc class X {  
   static X(int i) { // C3266  
   // try the following line instead  
   // static X() {  
   }  
};  
  
int main() {  
}  
```

