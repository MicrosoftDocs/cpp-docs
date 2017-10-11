---
title: "Compiler Warning (level 4) C4515 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4515"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4515"]
ms.assetid: 167b5177-3f89-418b-b6c8-7de634f6b28f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4515
'namespace' : namespace uses itself  
  
 A namespace is used recursively.  
  
 The following sample generates C4515:  
  
```  
// C4515.cpp  
// compile with: /W4  
namespace A  
{  
   using namespace A; // C4515  
}  
  
int main()  
{  
}  
```