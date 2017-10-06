---
title: "Compiler Error C3161 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3161"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3161"]
ms.assetid: 1fe2be85-a343-487b-8476-bf9e257eb29d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3161
'interface' : nesting class, struct, union or interface in an interface is illegal; nesting interface in a class, struct or union is illegal  
  
 An [__interface](../../cpp/interface.md) can only appear at global scope or within a namespace. A class, struct, or union cannot appear in an interface.  
  
## Example  
 The following sample generates C3161.  
  
```  
// C3161.cpp  
// compile with: /c  
__interface X {  
   __interface Y {};   // C3161 A nested interface  
};  
```