---
title: "Point of declaration in C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["point of declaration"]
ms.assetid: 92ea8707-80cb-497c-b479-f907b8401859
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Point of declaration in C++
A name is considered to be declared immediately after its declarator but before its (optional) initializer. (For more information on declarators, see [Declarations and definitions](declarations-and-definitions-cpp.md).)  
  
 Consider this example:  
  
```cpp 
// point_of_declaration1.cpp  
// compile with: /W1   
double dVar = 7.0;  
int main()  
{  
   double dVar = dVar;   // C4700  
}  
```  
  
 If the point of declaration were *after* the initialization, then the local `dVar` would be initialized to 7.0, the value of the global variable `dVar`. However, since that is not the case, `dVar` is initialized to an undefined value.  
  
## See also  
 [Scope](../cpp/scope-visual-cpp.md)