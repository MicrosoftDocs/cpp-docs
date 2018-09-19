---
title: "Compiler Error C3650 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3650"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3650"]
ms.assetid: ca4d8de4-b027-4d13-9b9f-03ca62905c33
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3650

'interface_method' : cannot be used as an explicit override, must be a virtual member function of a base class

An attempt was made to perform an explicit override on a member that was not virtual.

For more information, see [Explicit Overrides](../../windows/explicit-overrides-cpp-component-extensions.md).

The following sample generates C3650:

```
// C3650.cpp
// compile with: /clr
public interface struct I {
   void a();
};

public ref class S {
public:
   static int f() { return 0; }
   static int g() { return 0; }
};

public ref struct T1 : public S, I {
   virtual int f() new sealed = S::f;   // C3650
   virtual int g() { return 0; }   // OK does not override S::g
   virtual void a() new sealed = I::a {}   // OK
};
```