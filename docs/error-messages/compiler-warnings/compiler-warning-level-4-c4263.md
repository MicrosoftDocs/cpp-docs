---
title: "Compiler Warning (level 4) C4263 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4263"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4263"
ms.assetid: daabb05d-ab56-460f-ab6c-c74d222ef649
caps.latest.revision: 7
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
# Compiler Warning (level 4) C4263
'function' : member function does not override any base class virtual member function  
  
 A class function definition has the same name as a virtual function in a base class but not the same number or type of arguments. This effectively hides the virtual function in the base class.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 The following sample generates C4263:  
  
```  
// C4263.cpp  
// compile with: /W4  
#pragma warning(default:4263)  
#pragma warning(default:4264)  
class B {  
public:  
   virtual void func();  
};  
  
class D : public B {  
   void func(int);   // C4263  
};  
  
int main() {  
}  
```