---
title: "Compiler Warning (level 1) C4155 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4155"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4155"]
ms.assetid: ba233353-09e3-4195-8127-13a27ddd8d70
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4155
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