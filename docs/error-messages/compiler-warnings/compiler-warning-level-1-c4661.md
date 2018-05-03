---
title: "Compiler Warning (level 1) C4661 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4661"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4661"]
ms.assetid: 603bb8b7-356d-4eef-924b-64d769bac5bd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4661
'identifier' : no suitable definition provided for explicit template instantiation request  
  
 A member of the template class is not defined.  
  
## Example  
  
```  
// C4661.cpp  
// compile with: /W1 /LD  
template<class T> class MyClass {  
public:  
   void i();   // declaration but not definition  
};  
template MyClass< int >;  // C4661  
```