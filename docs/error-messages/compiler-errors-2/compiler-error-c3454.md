---
title: "Compiler Error C3454 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3454"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3454"]
ms.assetid: dc4e6d57-5b4d-4114-8d6f-22f9ae62925b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3454
[attribute] not allowed on class declaration  
  
 A class must be defined for it to be an attribute.  
  
 For more information, see [attribute](../../windows/attribute.md).  
  
## Example  
 The following sample generates C3454.  
  
```  
// C3454.cpp  
// compile with: /clr /c  
using namespace System;  
  
[attribute]   // C3454  
ref class Attr1;  
  
[attribute]   // OK  
ref class Attr2 {};  
```