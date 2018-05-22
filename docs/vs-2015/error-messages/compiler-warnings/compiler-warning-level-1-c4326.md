---
title: "Compiler Warning (level 1) C4326 | Microsoft Docs"
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
  - "C4326"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4326"
ms.assetid: d44d2c4e-9456-42d3-b35b-4ba4b2d42ec7
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4326
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4326](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4326).  
  
  
return type of 'function' should be 'type1' instead of 'type2'  
  
 A function returned a type other than ***type1***. For example, using [/Za](../../build/reference/za-ze-disable-language-extensions.md), main did not return an `int`.  
  
 The following sample generates C4326:  
  
```  
// C4326.cpp  
// compile with: /Za /W1  
char main()  
{   // C4326 try int main  
}  
```

