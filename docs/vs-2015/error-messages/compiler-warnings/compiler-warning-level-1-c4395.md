---
title: "Compiler Warning (level 1) C4395 | Microsoft Docs"
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
  - "C4395"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4395"
ms.assetid: 8051469a-3a39-4677-80f7-1300fbffe8ea
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4395
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4395](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4395).  
  
  
function' : member function will be invoked on a copy of the initonly data member 'member'  
  
 A member function was called on an [initonly (C++/CLI)](../../dotnet/initonly-cpp-cli.md) data member.  C4395 warns that the **initonly** data member cannot be modified by the function.  
  
 The following sample generates C4395:  
  
```  
// C4395.cpp  
// compile with: /W1 /clr  
public value class V {  
public:  
   V(int data) : m_data(data) {}  
  
   void Mutate() {  
      System::Console::WriteLine("Enter Mutate: m_data = {0}", m_data);  
      m_data *= 2;  
      System::Console::WriteLine("Leave Mutate: m_data = {0}", m_data);  
   }  
  
   int m_data;  
};  
  
public ref class R {  
public:  
   static void f() {  
      System::Console::WriteLine("v.m_data = {0}", v.m_data);  
      v.Mutate();   // C4395  
      System::Console::WriteLine("v.m_data = {0}", v.m_data);  
   }  
  
private:  
   initonly static V v = V(4);  
};  
  
int main() {  
   R::f();  
}  
```

