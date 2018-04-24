---
title: "Compiler Warning (level 3) C4159 | Microsoft Docs"
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
  - "C4159"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4159"
ms.assetid: e2cf964e-f4b8-4b2c-9569-1abb94307232
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4159
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4159](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4159).  
  
  
pragma pragma(pop,...) : has popped previously pushed identifier 'identifier'  
  
 Your source code contains a **push** instruction with an identifier for a pragma followed by a **pop** instruction without an identifier. As a result, ***identifier*** is popped, and subsequent uses of ***identifier*** may cause unexpected behavior.  
  
 To avoid this warning, give an identifier in the **pop** instruction. For example:  
  
```  
// C4159.cpp  
// compile with: /W3  
#pragma pack(push, f)  
#pragma pack(pop)   // C4159  
  
// using the identifier resolves the warning  
// #pragma pack(pop, f)  
  
int main()  
{  
}  
```

