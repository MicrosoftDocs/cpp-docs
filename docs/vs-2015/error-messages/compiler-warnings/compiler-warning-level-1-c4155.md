---
title: "Compiler Warning (level 1) C4155 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4155"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4155"
ms.assetid: ba233353-09e3-4195-8127-13a27ddd8d70
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4155
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4155](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4155).  
  
  
deletion of an array expression without using the array form of 'delete'  
  
 The array form of **delete** should be used to delete an array. This warning occurs only under ANSI-compatibility (/Za).  
  
## Example  
 The following sample generates C4155:  
  
```  
// C4155.cpp  
// compile with: /Za /W1  
#include <stdio.h>  
  
int main(void)  
{  
    int (*array)[ 10 ] = new int[ 5 ] [ 10 ];  
    array[0][0] = 8;  
  
    printf_s("%d\n", array[0][0]);  
  
   delete array;   // C4155  
    // try the following line instead  
    // delete [] array;   // C4155  
}  
```

