---
title: "Compiler Error C3350 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3350"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3350"]
ms.assetid: cfbbc338-92b5-4f34-999e-aa2d2376bc70
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3350

'delegate' : a delegate constructor expects number argument(s)

When you create an instance of a delegate, you must pass two arguments, an instance of the type containing the delegate function, and the function.

The following sample generates C3350:

```
// C3350.cpp
// compile with: /clr
delegate void SumDelegate();

public ref class X {
public:
   void F() {}
   static void F2() {}
};

int main() {
   X ^ MyX = gcnew X();
   SumDelegate ^ pSD = gcnew SumDelegate();   // C3350
   SumDelegate ^ pSD1 = gcnew SumDelegate(MyX, &X::F);
   SumDelegate ^ pSD2 = gcnew SumDelegate(&X::F2);
}
```
