---
title: "Compiler Warning (level 1) C4237 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4237"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4237"]
ms.assetid: f2e86c4b-80d8-460e-9429-83c5f3f5d7ca
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4237
'keyword' keyword is not yet supported, but reserved for future use  
  
 A keyword in the C++ specification is not implemented in the Visual C++ compiler, but the keyword is not available as a user-defined symbol.  
  
 The following sample generates C4237:  
  
```  
// C4237.cpp  
// compile with: /W1 /c  
int export;   // C4237  
```