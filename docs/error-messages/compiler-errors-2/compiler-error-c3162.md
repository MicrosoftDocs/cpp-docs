---
title: "Compiler Error C3162 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3162"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3162"
ms.assetid: 0d4c4a24-1456-4191-b7d8-c38cb7b17c32
caps.latest.revision: 4
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
# Compiler Error C3162
'type' : a reference type which has a destructor cannot be used as the type of static data member 'member'  
  
 The common language runtime cannot know when to run a user-defined destructor when the class also contains static member function.  
  
 A destructor will never be run unless the object is deleted explicitly.  
  
 For more information, see,  
  
-   [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Common Visual C++ 64-bit Migration Issues](../../build/common-visual-cpp-64-bit-migration-issues.md)  
  
## Example  
 The following sample generates C3162.  
  
```  
// C3162.cpp  
// compile with: /clr /c  
ref struct A {  
   ~A() { System::Console::WriteLine("in destructor"); }  
   static A i;   // C3162  
   static A^ a = gcnew A;   // OK  
};  
  
int main() {  
   A ^ a = gcnew A;  
   delete a;  
}  
```