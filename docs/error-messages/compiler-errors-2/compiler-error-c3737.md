---
title: "Compiler Error C3737 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3737"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3737"]
ms.assetid: ca2aeb23-2491-4ccb-8838-884abf7065c8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3737
'delegate': a delegate may not have an explicit calling convention  
  
 You cannot specify the [calling convention](../../cpp/calling-conventions.md) for a `delegate`.  
  
## Example  
The following sample generates C3737:  
  
```  
// C3737a.cpp  
// compile with: /clr  
delegate void __stdcall MyFunc();   // C3737  
// Try the following line instead.  
// delegate void MyFunc();  
  
int main() {  
}  
```  
