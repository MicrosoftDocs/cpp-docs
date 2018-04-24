---
title: "Compiler Error C3374 | Microsoft Docs"
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
  - "C3374"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3374"
ms.assetid: 41431299-bd20-47d4-a0c8-1334dd79018b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3374
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3374](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3374).  
  
  
can't take address of 'function' unless creating delegate instance  
  
 The address of a function was taken in a context other than the creation of a delegate instance.  
  
 The following sample generates C3374:  
  
```  
// C3374.cpp  
// compile with: /clr  
public delegate void MyDel(int i);  
  
ref class A {  
public:  
   void func1(int i) {  
      System::Console::WriteLine("in func1 {0}", i);  
   }  
};  
  
int main() {  
   &A::func1;   // C3374  
  
   // OK  
   A ^ a = gcnew A;  
   MyDel ^ StaticDelInst = gcnew MyDel(a, &A::func1);  
}  
```  
  
## See Also  
 [How to: Define and Use Delegates (C++/CLI)](../../dotnet/how-to-define-and-use-delegates-cpp-cli.md)

