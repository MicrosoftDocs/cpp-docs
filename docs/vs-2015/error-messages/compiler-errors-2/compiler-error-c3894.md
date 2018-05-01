---
title: "Compiler Error C3894 | Microsoft Docs"
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
  - "C3894"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3894"
ms.assetid: 6d5ac903-1dea-431d-8e3a-cebca4342983
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3894
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3894](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3894).  
  
  
var' : l-value use of initonly static data member is only allowed in the class constructor of class 'class'  
  
 Static [initonly](../../dotnet/initonly-cpp-cli.md) data members can only be used as l-values at their point of declaration, or in a static constructor.  
  
 Instance (non-static) initonly data members can only be used as l-values at their point of declaration, or in instance (non-static) constructors.  
  
 The following sample generates C3894:  
  
```  
// C3894.cpp  
// compile with: /clr  
ref struct Y1 {  
   initonly static int data_var = 0;  
  
public:  
   // class constructor  
   static Y1() {  
      data_var = 99;   // OK  
      System::Console::WriteLine("in static constructor");  
   }  
  
   // not the class constructor  
   Y1(int i) {  
      data_var = i;   // C3894  
   }  
  
   static void Test() {}  
  
};  
  
int main() {  
   Y1::data_var = 88;   // C3894  
   int i = Y1::data_var;  
   Y1 ^ MyY1 = gcnew Y1(99);  
   Y1::Test();  
}  
```

