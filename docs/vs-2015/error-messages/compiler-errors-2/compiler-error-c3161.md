---
title: "Compiler Error C3161 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3161"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3161"
ms.assetid: 1fe2be85-a343-487b-8476-bf9e257eb29d
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3161
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3161](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3161).  
  
  
interface' : nesting class, struct, union or interface in an interface is illegal; nesting interface in a class, struct or union is illegal  
  
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

