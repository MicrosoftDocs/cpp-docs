---
title: "Compiler Error C2779 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2779"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2779"]
ms.assetid: 4a00e492-855a-41f3-8a18-5f60ee20c2f2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2779

'declaration' : property methods can only be associated with non-static data members

The `property` extended attribute is incorrectly applied to a static data member.

The following sample generates C2779:

```
// C2779.cpp
struct A {
   static __declspec(property(put=PutProp))
   // try the following line instead
   __declspec(property(put=PutProp))
      int prop;   // C2779
   int PutProp(void);
};
```