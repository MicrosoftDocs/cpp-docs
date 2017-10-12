---
title: "Compiler Error C2767 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2767"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2767"]
ms.assetid: e8f84178-a160-4d71-a236-07e4fcc11e96
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2767
managed or WinRTarray dimension mismatch : expected N argument(s) - M provided  
  
 A managed or WinRT array declaration was ill formed. For more information, see [array](../../windows/arrays-cpp-component-extensions.md).  
  
 The following sample generates C2767 and shows how to fix it:  
  
```  
// C2767.cpp  
// compile with: /clr  
int main() {  
   array<int> ^p1 = new array<int>(2,3); // C2767  
   array<int> ^p2 = new array<int>(2);   // OK  
}  
```