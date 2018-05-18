---
title: "Compiler Error C3076 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3076"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3076"]
ms.assetid: 8a87b3e4-2c17-4b87-9622-ef0962d6a34e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3076
'instance' : you cannot embed an instance of a reference type, 'type', in a native type  
  
 A native type cannot contain an instance of a CLR type.  
  
 For more information, see [C++ Stack Semantics for Reference Types](../../dotnet/cpp-stack-semantics-for-reference-types.md).  
  
## Example  
 The following sample generates C3076.  
  
```  
// C3076.cpp  
// compile with: /clr /c  
ref struct U {};  
  
struct V {  
   U y;   // C3076  
};  
  
ref struct W {  
   U y;   // OK  
};  
```