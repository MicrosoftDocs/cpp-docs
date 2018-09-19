---
title: "Compiler Error C2774 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2774"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2774"]
ms.assetid: 10f428c6-7f49-489a-92ba-6ef978b7caaf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2774

'identifier' : no 'put' method is associated with this property

A data member declared with [property](../../cpp/property-cpp.md) has no `put` function, but an expression tries to set its value.

The following sample generates C2774:

```
// C2774.cpp
struct A {
   __declspec(property(get=GetProp)) int prop;
   int GetProp(void);

   __declspec(property(get=GetProp2, put=PutProp2)) int prop2;
   int GetProp2(void);
   void PutProp2(int);
};

int main() {
   A* pa = new A;
   int val = 0;
   pa->prop = val;   // C2774
   pa->prop++;   // C2774
}
```