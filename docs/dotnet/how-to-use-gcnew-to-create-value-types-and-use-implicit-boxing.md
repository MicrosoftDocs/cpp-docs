---
title: "How to: Use gcnew to Create Value Types and Use Implicit Boxing | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["gcnew keyword [C++], creating value types", "boxing, implicit", "value types, creating"]
ms.assetid: ceb48841-d6bd-47be-a167-57f44c961603
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# How to: Use gcnew to Create Value Types and Use Implicit Boxing
Using [gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md) on a value type will create a boxed value type, which can then be placed on the managed, garbage-collected heap.  
  
## Example  
  
```  
// vcmcppv2_explicit_boxing4.cpp  
// compile with: /clr  
public value class V {  
public:  
   int m_i;  
   V(int i) : m_i(i) {}  
};  
  
public ref struct TC {  
   void do_test(V^ v) {  
      if (v != nullptr)  
         ;  
      else  
         ;  
   }  
};  
  
int main() {  
   V^ v = gcnew V(42);  
   TC^ tc = gcnew TC;  
   tc->do_test(v);  
}  
```  
  
## See Also  
 [Boxing](../windows/boxing-cpp-component-extensions.md)