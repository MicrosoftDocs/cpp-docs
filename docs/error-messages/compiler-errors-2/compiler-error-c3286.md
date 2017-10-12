---
title: "Compiler Error C3286 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3286"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3286"]
ms.assetid: 554328c8-cf44-4f7d-a8d2-def74d28ecdd
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3286  
  
> '*specifier*': an iteration variable cannot have any storage-class specifiers  
  
A storage class can't be specified on an iteration variable. For more information, see [Storage classes (C++)](../../cpp/storage-classes-cpp.md) and [for each, in](../../dotnet/for-each-in.md).  
  
## Example  
  
The following sample generates C3286, and also shows correct usage.  
  
```cpp  
// C3286.cpp  
// compile with: /clr  
int main() {  
   array<int> ^p = { 1, 2, 3 };  
   for each (static int i in p) {}   // C3286   
   for each (int j in p) {}   // OK  
}  
```