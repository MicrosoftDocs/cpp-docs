---
title: "Compiler Warning (level 3) C4640"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C4640"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4640"
ms.assetid: f76871f6-e436-4c35-9793-d2f22f7e1c7f
caps.latest.revision: 7
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
# Compiler Warning (level 3) C4640
'instance' : construction of local static object is not thread-safe  
  
 A static instance of an object is not thread safe.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../c/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 The following sample generates C4640:  
  
```  
// C4640.cpp  
// compile with: /W3  
#pragma warning(default:4640)  
  
class X {  
public:  
   X() {  
   }  
};  
  
void f() {  
   static X aX;   // C4640  
}  
  
int main() {  
   f();  
}  
```