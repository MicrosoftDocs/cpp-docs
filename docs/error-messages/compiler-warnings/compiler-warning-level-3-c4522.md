---
title: "Compiler Warning (level 3) C4522 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4522"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4522"]
ms.assetid: 7065dc27-0b6c-4e68-a345-c51cdb99a20b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4522
'class' : multiple assignment operators specified  
  
 The class has multiple assignment operators of a single type. This warning is informational; the constructors are callable in your program.  
  
 Use the [warning](../../preprocessor/warning.md) pragma to suppress this warning.  
  
## Example  
 The following sample generates C4522.  
  
```  
// C4522.cpp  
// compile with: /EHsc /W3  
#include <iostream>  
  
using namespace std;  
class A {  
public:  
   A& operator=( A & o ) { cout << "A&" << endl; return *this; }  
   A& operator=( const A &co ) { cout << "const A&" << endl; return *this; }   // C4522  
};  
  
int main() {  
   A o1, o2;  
   o2 = o1;  
   const A o3;  
   o1 = o3;  
}  
```