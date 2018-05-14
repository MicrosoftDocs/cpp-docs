---
title: "Compiler Error C2628 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2628"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2628"]
ms.assetid: 19a25e77-d5be-4107-88d5-0745b6281f98
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2628
'type1' followed by 'type2' is illegal (did you forget a ';'?)  
  
 A semicolon may be missing.  
  
 The following sample generates C2628:  
  
```  
// C2628.cpp  
class CMyClass {}  
int main(){}   // C2628 error  
```  
  
 Possible resolution:  
  
```  
// C2628b.cpp  
class CMyClass {};  
int main(){}  
```