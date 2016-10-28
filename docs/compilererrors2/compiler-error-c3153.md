---
title: "Compiler Error C3153"
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
  - "C3153"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3153"
ms.assetid: d775d97e-2480-484f-81f1-88406b10f947
caps.latest.revision: 9
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
# Compiler Error C3153
'interface' : you cannot create an instance of an interface  
  
 An interface cannot be instantiated. To use the members of an interface, derive a class from the interface, implement the interface members, and then use the members.  
  
 The following sample generates C3153:  
  
```  
// C3153.cpp  
// compile with: /clr  
interface class A {  
};  
  
int main() {  
   A^ a = gcnew A;   // C3153  
}  
```  
  
 The following sample generates C3153:  
  
```  
// C3153b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__interface A {  
};  
  
int main() {  
   A *a = new A;   // C3153  
}  
```