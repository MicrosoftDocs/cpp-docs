---
title: "Compiler Warning (level 1) C4228 | Microsoft Docs"
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
  - "C4228"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4228"
ms.assetid: 9301d660-d601-464e-83f5-7ed844a3c6dc
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4228
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4228](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4228).  
  
  
nonstandard extension used : qualifiers after comma in declarator list are ignored  
  
 Use of qualifiers like **const** or `volatile` after a comma when declaring variables is a Microsoft extension ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).  
  
## Example  
  
```  
// C4228.cpp  
// compile with: /W1  
int j, const i = 0;  // C4228  
int k;  
int const m = 0;  // ok  
int main()  
{  
}  
```

