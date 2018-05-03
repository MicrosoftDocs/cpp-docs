---
title: "Compiler Warning (level 1) C4229 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4229"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4229"]
ms.assetid: aadfc83b-1e5f-4229-bd0a-9c10a5d13182
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4229
anachronism used : modifiers on data are ignored  
  
 Using a Microsoft modifier such as `__cdecl` on a data declaration is an outdated practice.  
  
## Example  
  
```  
// C4229.cpp  
// compile with: /W1 /LD  
int __cdecl counter;   // C4229 cdecl ignored  
```