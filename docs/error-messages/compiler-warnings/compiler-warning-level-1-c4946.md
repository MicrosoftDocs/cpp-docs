---
title: "Compiler Warning (level 1) C4946 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4946"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4946"]
ms.assetid: b85cbef0-e053-4de6-9b14-7b0f82d40495
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4946
reinterpret_cast used between related classes: 'class1' and 'class2'  
  
 Do not use [reinterpret_cast](../../cpp/reinterpret-cast-operator.md) to cast between related types. Use [static_cast](../../cpp/static-cast-operator.md) instead, or for polymorphic types, use [dynamic_cast](../../cpp/dynamic-cast-operator.md).  
  
 By default, this warning is off. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 The following code example generates C4946:  
  
```  
// C4946.cpp  
// compile with: /W1  
#pragma warning (default : 4946)  
class a {  
public:  
   a() : m(0) {}  
   int m;  
};  
  
class b : public virtual a {  
};  
  
class b2 : public virtual a {  
};  
  
class c : public b, public b2 {  
};  
  
int main() {  
   c* pC = new c;  
   a* pA = reinterpret_cast<a*>(pC);   // C4946  
   // try the following line instead  
   // a* pA = static_cast<a*>(pC);  
}  
```