---
title: "Compiler Warning (level 4) C4295 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4295"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4295"]
ms.assetid: 20dbff85-9f62-4ca3-8fe9-079d4512006d
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4295
  
> '*array*' : array is too small to include a terminating null character  
  
 An array was initialized but the last character in the array is not a null; accessing the array may produce unexpected results.  
  
## Example  
  
 The following sample generates C4295. To fix this issue, you could declare the array size larger, to hold a terminating null from the initializer.  
  
```C  
// C4295.c  
// compile with: /W4  
  
int main() {  
   char a[3] = "abc";   // C4295  
}  
```