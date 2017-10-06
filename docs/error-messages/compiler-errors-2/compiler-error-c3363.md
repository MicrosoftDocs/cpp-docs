---
title: "Compiler Error C3363 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3363"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3363"]
ms.assetid: 41aa922f-608e-4f7a-ba66-451fc1161935
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3363
'type' : 'typeid' can only be applied to a type  
  
 The [typeid](../../windows/typeid-cpp-component-extensions.md) operator was used incorrectly.  
  
## Example  
 The following sample generates C3363.  
  
```  
// C3363.cpp  
// compile with: /clr  
int main() {  
   System::typeid;   // C3363  
}  
```