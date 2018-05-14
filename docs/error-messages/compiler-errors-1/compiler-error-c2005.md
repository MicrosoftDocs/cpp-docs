---
title: "Compiler Error C2005 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2005"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2005"]
ms.assetid: 090530ed-e0ec-4358-833a-ca24260e7ffe
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2005
\#line expected a line number, found 'token'  
  
 The `#line` directive must be followed by a line number.  
  
 The following sample generates C2005:  
  
```  
// C2005.cpp  
int main() {  
   int i = 0;  
   #line i   // C2005  
}  
```  
  
 Possible resolution:  
  
```  
// C2005b.cpp  
int main() {  
   int i = 0;  
   #line 0  
}  
```