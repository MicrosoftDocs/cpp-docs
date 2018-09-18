---
title: "Compiler Error C3284 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3824"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3284"]
ms.assetid: e582f316-e9db-4d27-9c70-fdfa737a9d5f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3284

the constraints for generic parameter 'parameter' of function 'function' must match the constraints for generic parameter 'parameter' of function 'function'

A virtual generic function must use the same constraints as a virtual function with the same name and set of arguments in the base class.

The following sample generates C3284:

```
// C3284.cpp
// compile with: /clr /c
// C3284 expected
public interface class IGettable {
   int Get();
};

public interface class B {
   generic<typename T>
   where T : IGettable
   virtual int mf(T t);
};

public ref class D : public B {
public:
   generic<typename T>
   // Uncomment the following line to resolve.
   // where T : IGettable
   virtual int mf(T t) {
      return 4;
   }
};
```