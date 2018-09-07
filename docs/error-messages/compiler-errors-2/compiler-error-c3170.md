---
title: "Compiler Error C3170 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3170"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3170"]
ms.assetid: ca9a59d6-7df3-42f0-b028-c09d0af3ac2a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3170
cannot have different module identifiers in a project  
  
 [module](../../windows/module-cpp.md) attributes with different names were found in two of the files in a compilation. Only one unique `module` attribute can be specified per compilation.  
  
 Identical `module` attributes can be specified in more than one source code file.  
  
 For example, if the following module attributes were found:  
  
```  
// C3170.cpp  
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f") ];  
int main() {}  
```  
  
 And then,  
  
```  
// C3170b.cpp  
// compile with: C3170.cpp  
// C3170 expected  
[ module(name="MyModule1", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f") ];  
```  
  
 the compiler would generate C3170 (note the different names).