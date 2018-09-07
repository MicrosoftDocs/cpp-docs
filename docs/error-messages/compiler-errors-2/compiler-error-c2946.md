---
title: "Compiler Error C2946 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2946"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2946"]
ms.assetid: c86dfbfc-7702-4f09-8a53-d205710e99c2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2946
explicit instantiation; 'class' is not a template-class specialization  
  
 You cannot explicitly instantiate a nontemplated class.  
  
## Example  
 The following sample generates C2946.  
  
```  
// C2946.cpp  
class C {};  
template C;  // C2946  
int main() {}  
```