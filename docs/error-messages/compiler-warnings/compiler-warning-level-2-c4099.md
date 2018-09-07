---
title: "Compiler Warning (level 2) C4099 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4099"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4099"]
ms.assetid: 00bb803d-cae7-4ab8-8969-b46f54139ac8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 2) C4099
'identifier' : type name first seen using 'objecttype1' now seen using 'objecttype2'  
  
 An object declared as a structure is defined as a class, or an object declared as a class is defined as a structure. The compiler uses the type given in the definition.  
  
## Example  
 The following sample generates C4099.  
  
```  
// C4099.cpp  
// compile with: /W2 /c  
struct A;  
class A {};   // C4099, use different identifer or use same object type  
```