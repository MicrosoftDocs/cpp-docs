---
title: "Compiler Error C3666 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3666"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3666"]
ms.assetid: 459e51dd-cefb-4346-99b3-644f2d8b65b2
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3666
'constructor' : override specifier 'keyword' not allowed on a constructor  
  
 An override specifier was used on a constructor, and that is not allowed. For more information, see [Override Specifiers](../../windows/override-specifiers-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3666.  
  
```  
// C3666.cpp  
// compile with: /clr /c  
ref struct R {  
   R() new {}   // C3666  
   R(int i) {}   // OK  
};  
```