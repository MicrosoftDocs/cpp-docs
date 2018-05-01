---
title: "Compiler Error C2870 | Microsoft Docs"
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
  - "C2870"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2870"
ms.assetid: 80523ee9-1fd3-4dc4-8a77-5083deb99066
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2870
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2870](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2870).  
  
  
name' : a namespace definition must appear either at file scope or immediately within another namespace definition  
  
 You defined namespace `name` incorrectly. Namespaces must be defined at file scope (outside all blocks and classes) or immediately within another namespace.  
  
 The following sample generates C2870:  
  
```  
// C2870.cpp  
// compile with: /c  
int main() {  
   namespace A { int i; };   // C2870  
}  
```

