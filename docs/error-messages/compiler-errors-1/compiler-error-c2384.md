---
title: "Compiler Error C2384 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2384"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2384"]
ms.assetid: 8145f7ad-31b1-406d-ac43-0d557feab635
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2384

'member' : cannot apply __declspec(thread) to a member of a managed or WinRT class

The [thread](../../cpp/thread.md) `__declspec` modifier cannot be used on a member of a managed or Windows Runtime class.

Static thread local storage in managed code can only be used for statically loaded DLLs—the DLL must be statically loaded when the process starts. Windows Runtime does not support thread local storage.

The following line generates C2384 and shows how to fix it in C++/CLI code:

```
// C2384.cpp
// compile with: /clr /c
public ref class B {
public:
   __declspec( thread ) static int tls_i = 1;   // C2384

   // OK - declare with attribute instead
   [System::ThreadStaticAttribute]
   static int tls_j;
};
```