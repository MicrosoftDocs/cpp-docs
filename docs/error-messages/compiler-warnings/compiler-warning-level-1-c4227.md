---
title: "Compiler Warning (level 1) C4227 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4227"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4227"]
ms.assetid: 78f98374-c00b-4000-aefa-1b1c67b4666b
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4227
anachronism used : qualifiers on reference are ignored  
  
 Using qualifiers like `const` or `volatile` with C++ references is an outdated practice.  
  
## Example  
  
```  
// C4227.cpp  
// compile with: /W1 /c  
int j = 0;  
int &const i = j;   // C4227  
```