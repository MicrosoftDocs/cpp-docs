---
title: "Compiler Warning (level 1) C4154 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4154"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4154"]
ms.assetid: 4511afeb-e893-4cc6-83b6-4c7a0477f76b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4154
deletion of an array expression; conversion to pointer supplied  
  
 You cannot use `delete` on an array, so the compiler converts the array to a pointer.  
  
## Example  
  
```  
// C4154.cpp  
// compile with: /c /W1  
int main() {  
   int array[ 10 ];  
   delete array;   // C4154 can't delete stack object  
  
   int *parray2 = new int [10];  
   int (&array2)[10] = (int(&)[10]) parray2;  
   delete [] array2;   // C4154  
  
   // try the following line instead  
   delete [] &array2;  
}  
```